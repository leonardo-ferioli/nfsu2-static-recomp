#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_645(u8* __restrict R,Cpu& c);
u32 body_647(u8* __restrict R,Cpu& c);
u32 body_64a(u8* __restrict R,Cpu& c);
u32 body_64b(u8* __restrict R,Cpu& c);
u32 body_64c(u8* __restrict R,Cpu& c);
u32 body_64e(u8* __restrict R,Cpu& c);
u32 body_671(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x64d,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x64d,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_64d(u8* __restrict R,Cpu& c);
u32 page_64d(Cpu& c){return body_64d(c.regs.data(),c);}
__attribute__((noinline)) u32 body_64d(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x64d001:goto L64d001;
case 0x64d004:c.instructions+=4;goto B64d004;
case 0x64d007:c.instructions+=3;goto B64d007;
case 0x64d00b:c.instructions+=2;goto B64d00b;
case 0x64d00e:c.instructions+=1;goto B64d00e;
case 0x64d010:goto L64d010;
case 0x64d013:c.instructions+=1;goto B64d013;
case 0x64d015:goto L64d015;
case 0x64d017:c.instructions+=1;goto B64d017;
case 0x64d01a:goto L64d01a;
case 0x64d01c:c.instructions+=1;goto B64d01c;
case 0x64d01e:goto L64d01e;
case 0x64d020:goto L64d020;
case 0x64d021:c.instructions+=2;goto B64d021;
case 0x64d024:c.instructions+=1;goto B64d024;
case 0x64d026:goto L64d026;
case 0x64d027:c.instructions+=1;goto B64d027;
case 0x64d029:goto L64d029;
case 0x64d02c:c.instructions+=3;goto B64d02c;
case 0x64d030:c.instructions+=2;goto B64d030;
case 0x64d034:c.instructions+=1;goto B64d034;
case 0x64d036:goto L64d036;
case 0x64d039:c.instructions+=5;goto B64d039;
case 0x64d03a:c.instructions+=4;goto B64d03a;
case 0x64d03b:c.instructions+=3;goto B64d03b;
case 0x64d03c:c.instructions+=2;goto B64d03c;
case 0x64d03d:c.instructions+=1;goto B64d03d;
case 0x64d040:goto L64d040;
case 0x64d042:c.instructions+=6;goto B64d042;
case 0x64d043:c.instructions+=5;goto B64d043;
case 0x64d045:c.instructions+=4;goto B64d045;
case 0x64d046:c.instructions+=3;goto B64d046;
case 0x64d049:c.instructions+=2;goto B64d049;
case 0x64d04b:c.instructions+=1;goto B64d04b;
case 0x64d04d:goto L64d04d;
case 0x64d051:c.instructions+=1;goto B64d051;
case 0x64d053:goto L64d053;
case 0x64d058:c.instructions+=1;goto B64d058;
case 0x64d05a:goto L64d05a;
case 0x64d05b:c.instructions+=5;goto B64d05b;
case 0x64d05e:c.instructions+=4;goto B64d05e;
case 0x64d060:c.instructions+=3;goto B64d060;
case 0x64d063:c.instructions+=2;goto B64d063;
case 0x64d065:c.instructions+=1;goto B64d065;
case 0x64d06a:goto L64d06a;
case 0x64d06c:c.instructions+=1;goto B64d06c;
case 0x64d06e:goto L64d06e;
case 0x64d071:c.instructions+=6;goto B64d071;
case 0x64d074:c.instructions+=5;goto B64d074;
case 0x64d07a:c.instructions+=4;goto B64d07a;
case 0x64d07d:c.instructions+=3;goto B64d07d;
case 0x64d080:c.instructions+=2;goto B64d080;
case 0x64d082:c.instructions+=1;goto B64d082;
case 0x64d084:goto L64d084;
case 0x64d086:c.instructions+=1;goto B64d086;
case 0x64d088:goto L64d088;
case 0x64d08c:c.instructions+=1;goto B64d08c;
case 0x64d08e:goto L64d08e;
case 0x64d091:c.instructions+=3;goto B64d091;
case 0x64d092:c.instructions+=2;goto B64d092;
case 0x64d093:c.instructions+=1;goto B64d093;
case 0x64d095:goto L64d095;
case 0x64d096:c.instructions+=1;goto B64d096;
case 0x64d098:goto L64d098;
case 0x64d099:c.instructions+=4;goto B64d099;
case 0x64d09c:c.instructions+=3;goto B64d09c;
case 0x64d09f:c.instructions+=2;goto B64d09f;
case 0x64d0a0:c.instructions+=1;goto B64d0a0;
case 0x64d0a5:goto L64d0a5;
case 0x64d0a7:goto L64d0a7;
case 0x64d0a8:c.instructions+=4;goto B64d0a8;
case 0x64d0ab:c.instructions+=3;goto B64d0ab;
case 0x64d0ae:c.instructions+=2;goto B64d0ae;
case 0x64d0af:c.instructions+=1;goto B64d0af;
case 0x64d0b4:goto L64d0b4;
case 0x64d0b6:goto L64d0b6;
case 0x64d0bb:goto L64d0bb;
case 0x64d0bc:goto L64d0bc;
case 0x64d0bd:c.instructions+=2;goto B64d0bd;
case 0x64d0be:c.instructions+=1;goto B64d0be;
case 0x64d0c1:goto L64d0c1;
case 0x64d0c3:c.instructions+=6;goto B64d0c3;
case 0x64d0c4:c.instructions+=5;goto B64d0c4;
case 0x64d0c6:c.instructions+=4;goto B64d0c6;
case 0x64d0c7:c.instructions+=3;goto B64d0c7;
case 0x64d0ca:c.instructions+=2;goto B64d0ca;
case 0x64d0cc:c.instructions+=1;goto B64d0cc;
case 0x64d0ce:goto L64d0ce;
case 0x64d0d2:c.instructions+=1;goto B64d0d2;
case 0x64d0d4:goto L64d0d4;
case 0x64d0d9:c.instructions+=1;goto B64d0d9;
case 0x64d0db:goto L64d0db;
case 0x64d0dc:c.instructions+=5;goto B64d0dc;
case 0x64d0df:c.instructions+=4;goto B64d0df;
case 0x64d0e1:c.instructions+=3;goto B64d0e1;
case 0x64d0e4:c.instructions+=2;goto B64d0e4;
case 0x64d0e6:c.instructions+=1;goto B64d0e6;
case 0x64d0eb:goto L64d0eb;
case 0x64d0ed:c.instructions+=1;goto B64d0ed;
case 0x64d0ef:goto L64d0ef;
case 0x64d0f2:c.instructions+=6;goto B64d0f2;
case 0x64d0f5:c.instructions+=5;goto B64d0f5;
case 0x64d0fb:c.instructions+=4;goto B64d0fb;
case 0x64d0fe:c.instructions+=3;goto B64d0fe;
case 0x64d101:c.instructions+=2;goto B64d101;
case 0x64d103:c.instructions+=1;goto B64d103;
case 0x64d105:goto L64d105;
case 0x64d107:c.instructions+=1;goto B64d107;
case 0x64d109:goto L64d109;
case 0x64d10d:c.instructions+=1;goto B64d10d;
case 0x64d10f:goto L64d10f;
case 0x64d112:c.instructions+=3;goto B64d112;
case 0x64d113:c.instructions+=2;goto B64d113;
case 0x64d114:c.instructions+=1;goto B64d114;
case 0x64d116:goto L64d116;
case 0x64d117:c.instructions+=1;goto B64d117;
case 0x64d119:goto L64d119;
case 0x64d11a:c.instructions+=4;goto B64d11a;
case 0x64d11d:c.instructions+=3;goto B64d11d;
case 0x64d120:c.instructions+=2;goto B64d120;
case 0x64d121:c.instructions+=1;goto B64d121;
case 0x64d126:goto L64d126;
case 0x64d128:goto L64d128;
case 0x64d129:c.instructions+=4;goto B64d129;
case 0x64d12c:c.instructions+=3;goto B64d12c;
case 0x64d12f:c.instructions+=2;goto B64d12f;
case 0x64d130:c.instructions+=1;goto B64d130;
case 0x64d135:goto L64d135;
case 0x64d137:goto L64d137;
case 0x64d13c:goto L64d13c;
case 0x64d13d:goto L64d13d;
case 0x64d13e:c.instructions+=2;goto B64d13e;
case 0x64d13f:c.instructions+=1;goto B64d13f;
case 0x64d142:goto L64d142;
case 0x64d144:c.instructions+=7;goto B64d144;
case 0x64d145:c.instructions+=6;goto B64d145;
case 0x64d147:c.instructions+=5;goto B64d147;
case 0x64d148:c.instructions+=4;goto B64d148;
case 0x64d14b:c.instructions+=3;goto B64d14b;
case 0x64d14d:c.instructions+=2;goto B64d14d;
case 0x64d14f:c.instructions+=1;goto B64d14f;
case 0x64d151:goto L64d151;
case 0x64d154:c.instructions+=1;goto B64d154;
case 0x64d156:goto L64d156;
case 0x64d15b:c.instructions+=1;goto B64d15b;
case 0x64d15d:goto L64d15d;
case 0x64d15e:c.instructions+=5;goto B64d15e;
case 0x64d161:c.instructions+=4;goto B64d161;
case 0x64d163:c.instructions+=3;goto B64d163;
case 0x64d166:c.instructions+=2;goto B64d166;
case 0x64d168:c.instructions+=1;goto B64d168;
case 0x64d16d:goto L64d16d;
case 0x64d16f:c.instructions+=1;goto B64d16f;
case 0x64d171:goto L64d171;
case 0x64d174:c.instructions+=6;goto B64d174;
case 0x64d177:c.instructions+=5;goto B64d177;
case 0x64d17d:c.instructions+=4;goto B64d17d;
case 0x64d180:c.instructions+=3;goto B64d180;
case 0x64d183:c.instructions+=2;goto B64d183;
case 0x64d185:c.instructions+=1;goto B64d185;
case 0x64d187:goto L64d187;
case 0x64d189:c.instructions+=1;goto B64d189;
case 0x64d18b:goto L64d18b;
case 0x64d18f:c.instructions+=1;goto B64d18f;
case 0x64d191:goto L64d191;
case 0x64d194:c.instructions+=3;goto B64d194;
case 0x64d195:c.instructions+=2;goto B64d195;
case 0x64d196:c.instructions+=1;goto B64d196;
case 0x64d198:goto L64d198;
case 0x64d199:c.instructions+=1;goto B64d199;
case 0x64d19b:goto L64d19b;
case 0x64d19c:c.instructions+=4;goto B64d19c;
case 0x64d19f:c.instructions+=3;goto B64d19f;
case 0x64d1a2:c.instructions+=2;goto B64d1a2;
case 0x64d1a3:c.instructions+=1;goto B64d1a3;
case 0x64d1a8:goto L64d1a8;
case 0x64d1aa:goto L64d1aa;
case 0x64d1ab:c.instructions+=4;goto B64d1ab;
case 0x64d1ae:c.instructions+=3;goto B64d1ae;
case 0x64d1b1:c.instructions+=2;goto B64d1b1;
case 0x64d1b2:c.instructions+=1;goto B64d1b2;
case 0x64d1b7:goto L64d1b7;
case 0x64d1b9:goto L64d1b9;
case 0x64d1be:goto L64d1be;
case 0x64d1bf:goto L64d1bf;
case 0x64d1c0:c.instructions+=2;goto B64d1c0;
case 0x64d1c1:c.instructions+=1;goto B64d1c1;
case 0x64d1c4:goto L64d1c4;
case 0x64d1c6:c.instructions+=7;goto B64d1c6;
case 0x64d1c7:c.instructions+=6;goto B64d1c7;
case 0x64d1c9:c.instructions+=5;goto B64d1c9;
case 0x64d1ca:c.instructions+=4;goto B64d1ca;
case 0x64d1cd:c.instructions+=3;goto B64d1cd;
case 0x64d1cf:c.instructions+=2;goto B64d1cf;
case 0x64d1d1:c.instructions+=1;goto B64d1d1;
case 0x64d1d3:goto L64d1d3;
case 0x64d1d6:c.instructions+=1;goto B64d1d6;
case 0x64d1d8:goto L64d1d8;
case 0x64d1dd:c.instructions+=1;goto B64d1dd;
case 0x64d1df:goto L64d1df;
case 0x64d1e0:c.instructions+=5;goto B64d1e0;
case 0x64d1e3:c.instructions+=4;goto B64d1e3;
case 0x64d1e5:c.instructions+=3;goto B64d1e5;
case 0x64d1e8:c.instructions+=2;goto B64d1e8;
case 0x64d1ea:c.instructions+=1;goto B64d1ea;
case 0x64d1ef:goto L64d1ef;
case 0x64d1f1:c.instructions+=1;goto B64d1f1;
case 0x64d1f3:goto L64d1f3;
case 0x64d1f6:c.instructions+=6;goto B64d1f6;
case 0x64d1f9:c.instructions+=5;goto B64d1f9;
case 0x64d1ff:c.instructions+=4;goto B64d1ff;
case 0x64d202:c.instructions+=3;goto B64d202;
case 0x64d205:c.instructions+=2;goto B64d205;
case 0x64d207:c.instructions+=1;goto B64d207;
case 0x64d209:goto L64d209;
case 0x64d20b:c.instructions+=1;goto B64d20b;
case 0x64d20d:goto L64d20d;
case 0x64d211:c.instructions+=1;goto B64d211;
case 0x64d213:goto L64d213;
case 0x64d216:c.instructions+=3;goto B64d216;
case 0x64d217:c.instructions+=2;goto B64d217;
case 0x64d218:c.instructions+=1;goto B64d218;
case 0x64d21a:goto L64d21a;
case 0x64d21b:c.instructions+=1;goto B64d21b;
case 0x64d21d:goto L64d21d;
case 0x64d21e:c.instructions+=4;goto B64d21e;
case 0x64d221:c.instructions+=3;goto B64d221;
case 0x64d224:c.instructions+=2;goto B64d224;
case 0x64d225:c.instructions+=1;goto B64d225;
case 0x64d22a:goto L64d22a;
case 0x64d22c:goto L64d22c;
case 0x64d22d:c.instructions+=4;goto B64d22d;
case 0x64d230:c.instructions+=3;goto B64d230;
case 0x64d233:c.instructions+=2;goto B64d233;
case 0x64d234:c.instructions+=1;goto B64d234;
case 0x64d239:goto L64d239;
case 0x64d23b:goto L64d23b;
case 0x64d240:goto L64d240;
case 0x64d241:goto L64d241;
case 0x64d242:c.instructions+=2;goto B64d242;
case 0x64d243:c.instructions+=1;goto B64d243;
case 0x64d246:goto L64d246;
case 0x64d248:c.instructions+=6;goto B64d248;
case 0x64d249:c.instructions+=5;goto B64d249;
case 0x64d24b:c.instructions+=4;goto B64d24b;
case 0x64d24c:c.instructions+=3;goto B64d24c;
case 0x64d24f:c.instructions+=2;goto B64d24f;
case 0x64d251:c.instructions+=1;goto B64d251;
case 0x64d253:goto L64d253;
case 0x64d257:c.instructions+=1;goto B64d257;
case 0x64d259:goto L64d259;
case 0x64d25e:c.instructions+=1;goto B64d25e;
case 0x64d260:goto L64d260;
case 0x64d261:c.instructions+=5;goto B64d261;
case 0x64d264:c.instructions+=4;goto B64d264;
case 0x64d266:c.instructions+=3;goto B64d266;
case 0x64d269:c.instructions+=2;goto B64d269;
case 0x64d26b:c.instructions+=1;goto B64d26b;
case 0x64d270:goto L64d270;
case 0x64d272:c.instructions+=1;goto B64d272;
case 0x64d274:goto L64d274;
case 0x64d277:c.instructions+=6;goto B64d277;
case 0x64d27a:c.instructions+=5;goto B64d27a;
case 0x64d280:c.instructions+=4;goto B64d280;
case 0x64d283:c.instructions+=3;goto B64d283;
case 0x64d286:c.instructions+=2;goto B64d286;
case 0x64d288:c.instructions+=1;goto B64d288;
case 0x64d28a:goto L64d28a;
case 0x64d28c:c.instructions+=1;goto B64d28c;
case 0x64d28e:goto L64d28e;
case 0x64d292:c.instructions+=1;goto B64d292;
case 0x64d294:goto L64d294;
case 0x64d297:c.instructions+=3;goto B64d297;
case 0x64d298:c.instructions+=2;goto B64d298;
case 0x64d299:c.instructions+=1;goto B64d299;
case 0x64d29b:goto L64d29b;
case 0x64d29c:c.instructions+=1;goto B64d29c;
case 0x64d29e:goto L64d29e;
case 0x64d29f:c.instructions+=4;goto B64d29f;
case 0x64d2a2:c.instructions+=3;goto B64d2a2;
case 0x64d2a5:c.instructions+=2;goto B64d2a5;
case 0x64d2a6:c.instructions+=1;goto B64d2a6;
case 0x64d2ab:goto L64d2ab;
case 0x64d2ad:goto L64d2ad;
case 0x64d2ae:c.instructions+=4;goto B64d2ae;
case 0x64d2b1:c.instructions+=3;goto B64d2b1;
case 0x64d2b4:c.instructions+=2;goto B64d2b4;
case 0x64d2b5:c.instructions+=1;goto B64d2b5;
case 0x64d2ba:goto L64d2ba;
case 0x64d2bc:goto L64d2bc;
case 0x64d2c1:goto L64d2c1;
case 0x64d2c2:goto L64d2c2;
case 0x64d2c3:c.instructions+=2;goto B64d2c3;
case 0x64d2c4:c.instructions+=1;goto B64d2c4;
case 0x64d2c7:goto L64d2c7;
case 0x64d2c9:c.instructions+=6;goto B64d2c9;
case 0x64d2ca:c.instructions+=5;goto B64d2ca;
case 0x64d2cc:c.instructions+=4;goto B64d2cc;
case 0x64d2cd:c.instructions+=3;goto B64d2cd;
case 0x64d2d0:c.instructions+=2;goto B64d2d0;
case 0x64d2d2:c.instructions+=1;goto B64d2d2;
case 0x64d2d4:goto L64d2d4;
case 0x64d2d8:c.instructions+=1;goto B64d2d8;
case 0x64d2da:goto L64d2da;
case 0x64d2df:c.instructions+=1;goto B64d2df;
case 0x64d2e1:goto L64d2e1;
case 0x64d2e2:c.instructions+=5;goto B64d2e2;
case 0x64d2e5:c.instructions+=4;goto B64d2e5;
case 0x64d2e7:c.instructions+=3;goto B64d2e7;
case 0x64d2ea:c.instructions+=2;goto B64d2ea;
case 0x64d2ec:c.instructions+=1;goto B64d2ec;
case 0x64d2f1:goto L64d2f1;
case 0x64d2f3:c.instructions+=1;goto B64d2f3;
case 0x64d2f5:goto L64d2f5;
case 0x64d2f8:c.instructions+=6;goto B64d2f8;
case 0x64d2fb:c.instructions+=5;goto B64d2fb;
case 0x64d301:c.instructions+=4;goto B64d301;
case 0x64d304:c.instructions+=3;goto B64d304;
case 0x64d307:c.instructions+=2;goto B64d307;
case 0x64d309:c.instructions+=1;goto B64d309;
case 0x64d30b:goto L64d30b;
case 0x64d30d:c.instructions+=1;goto B64d30d;
case 0x64d30f:goto L64d30f;
case 0x64d313:c.instructions+=1;goto B64d313;
case 0x64d315:goto L64d315;
case 0x64d318:c.instructions+=3;goto B64d318;
case 0x64d319:c.instructions+=2;goto B64d319;
case 0x64d31a:c.instructions+=1;goto B64d31a;
case 0x64d31c:goto L64d31c;
case 0x64d31d:c.instructions+=1;goto B64d31d;
case 0x64d31f:goto L64d31f;
case 0x64d320:c.instructions+=4;goto B64d320;
case 0x64d323:c.instructions+=3;goto B64d323;
case 0x64d326:c.instructions+=2;goto B64d326;
case 0x64d327:c.instructions+=1;goto B64d327;
case 0x64d32c:goto L64d32c;
case 0x64d32e:goto L64d32e;
case 0x64d32f:c.instructions+=4;goto B64d32f;
case 0x64d332:c.instructions+=3;goto B64d332;
case 0x64d335:c.instructions+=2;goto B64d335;
case 0x64d336:c.instructions+=1;goto B64d336;
case 0x64d33b:goto L64d33b;
case 0x64d33d:goto L64d33d;
case 0x64d342:goto L64d342;
case 0x64d343:goto L64d343;
case 0x64d344:c.instructions+=2;goto B64d344;
case 0x64d345:c.instructions+=1;goto B64d345;
case 0x64d348:goto L64d348;
case 0x64d34a:c.instructions+=7;goto B64d34a;
case 0x64d34b:c.instructions+=6;goto B64d34b;
case 0x64d34d:c.instructions+=5;goto B64d34d;
case 0x64d34e:c.instructions+=4;goto B64d34e;
case 0x64d351:c.instructions+=3;goto B64d351;
case 0x64d353:c.instructions+=2;goto B64d353;
case 0x64d355:c.instructions+=1;goto B64d355;
case 0x64d357:goto L64d357;
case 0x64d35a:c.instructions+=1;goto B64d35a;
case 0x64d35c:goto L64d35c;
case 0x64d361:c.instructions+=1;goto B64d361;
case 0x64d363:goto L64d363;
case 0x64d364:c.instructions+=5;goto B64d364;
case 0x64d367:c.instructions+=4;goto B64d367;
case 0x64d369:c.instructions+=3;goto B64d369;
case 0x64d36c:c.instructions+=2;goto B64d36c;
case 0x64d36e:c.instructions+=1;goto B64d36e;
case 0x64d373:goto L64d373;
case 0x64d375:c.instructions+=1;goto B64d375;
case 0x64d377:goto L64d377;
case 0x64d37a:c.instructions+=6;goto B64d37a;
case 0x64d37d:c.instructions+=5;goto B64d37d;
case 0x64d383:c.instructions+=4;goto B64d383;
case 0x64d386:c.instructions+=3;goto B64d386;
case 0x64d389:c.instructions+=2;goto B64d389;
case 0x64d38b:c.instructions+=1;goto B64d38b;
case 0x64d38d:goto L64d38d;
case 0x64d38f:c.instructions+=1;goto B64d38f;
case 0x64d391:goto L64d391;
case 0x64d395:c.instructions+=1;goto B64d395;
case 0x64d397:goto L64d397;
case 0x64d39a:c.instructions+=3;goto B64d39a;
case 0x64d39b:c.instructions+=2;goto B64d39b;
case 0x64d39c:c.instructions+=1;goto B64d39c;
case 0x64d39e:goto L64d39e;
case 0x64d39f:c.instructions+=1;goto B64d39f;
case 0x64d3a1:goto L64d3a1;
case 0x64d3a2:c.instructions+=4;goto B64d3a2;
case 0x64d3a5:c.instructions+=3;goto B64d3a5;
case 0x64d3a8:c.instructions+=2;goto B64d3a8;
case 0x64d3a9:c.instructions+=1;goto B64d3a9;
case 0x64d3ae:goto L64d3ae;
case 0x64d3b0:goto L64d3b0;
case 0x64d3b1:c.instructions+=4;goto B64d3b1;
case 0x64d3b4:c.instructions+=3;goto B64d3b4;
case 0x64d3b7:c.instructions+=2;goto B64d3b7;
case 0x64d3b8:c.instructions+=1;goto B64d3b8;
case 0x64d3bd:goto L64d3bd;
case 0x64d3bf:goto L64d3bf;
case 0x64d3c4:goto L64d3c4;
case 0x64d3c5:goto L64d3c5;
case 0x64d3c6:c.instructions+=2;goto B64d3c6;
case 0x64d3c7:c.instructions+=1;goto B64d3c7;
case 0x64d3ca:goto L64d3ca;
case 0x64d3cc:c.instructions+=7;goto B64d3cc;
case 0x64d3cd:c.instructions+=6;goto B64d3cd;
case 0x64d3cf:c.instructions+=5;goto B64d3cf;
case 0x64d3d0:c.instructions+=4;goto B64d3d0;
case 0x64d3d3:c.instructions+=3;goto B64d3d3;
case 0x64d3d5:c.instructions+=2;goto B64d3d5;
case 0x64d3d7:c.instructions+=1;goto B64d3d7;
case 0x64d3d9:goto L64d3d9;
case 0x64d3dc:c.instructions+=1;goto B64d3dc;
case 0x64d3de:goto L64d3de;
case 0x64d3e3:c.instructions+=1;goto B64d3e3;
case 0x64d3e5:goto L64d3e5;
case 0x64d3e6:c.instructions+=5;goto B64d3e6;
case 0x64d3e9:c.instructions+=4;goto B64d3e9;
case 0x64d3eb:c.instructions+=3;goto B64d3eb;
case 0x64d3ee:c.instructions+=2;goto B64d3ee;
case 0x64d3f0:c.instructions+=1;goto B64d3f0;
case 0x64d3f5:goto L64d3f5;
case 0x64d3f7:c.instructions+=1;goto B64d3f7;
case 0x64d3f9:goto L64d3f9;
case 0x64d3fc:c.instructions+=6;goto B64d3fc;
case 0x64d3ff:c.instructions+=5;goto B64d3ff;
case 0x64d405:c.instructions+=4;goto B64d405;
case 0x64d408:c.instructions+=3;goto B64d408;
case 0x64d40b:c.instructions+=2;goto B64d40b;
case 0x64d40d:c.instructions+=1;goto B64d40d;
case 0x64d40f:goto L64d40f;
case 0x64d411:c.instructions+=1;goto B64d411;
case 0x64d413:goto L64d413;
case 0x64d417:c.instructions+=1;goto B64d417;
case 0x64d419:goto L64d419;
case 0x64d41c:c.instructions+=3;goto B64d41c;
case 0x64d41d:c.instructions+=2;goto B64d41d;
case 0x64d41e:c.instructions+=1;goto B64d41e;
case 0x64d420:goto L64d420;
case 0x64d421:c.instructions+=1;goto B64d421;
case 0x64d423:goto L64d423;
case 0x64d424:c.instructions+=4;goto B64d424;
case 0x64d427:c.instructions+=3;goto B64d427;
case 0x64d42a:c.instructions+=2;goto B64d42a;
case 0x64d42b:c.instructions+=1;goto B64d42b;
case 0x64d430:goto L64d430;
case 0x64d432:goto L64d432;
case 0x64d433:c.instructions+=4;goto B64d433;
case 0x64d436:c.instructions+=3;goto B64d436;
case 0x64d439:c.instructions+=2;goto B64d439;
case 0x64d43a:c.instructions+=1;goto B64d43a;
case 0x64d43f:goto L64d43f;
case 0x64d441:goto L64d441;
case 0x64d446:goto L64d446;
case 0x64d447:goto L64d447;
case 0x64d448:c.instructions+=2;goto B64d448;
case 0x64d449:c.instructions+=1;goto B64d449;
case 0x64d44c:goto L64d44c;
case 0x64d44e:c.instructions+=4;goto B64d44e;
case 0x64d44f:c.instructions+=3;goto B64d44f;
case 0x64d451:c.instructions+=2;goto B64d451;
case 0x64d455:c.instructions+=1;goto B64d455;
case 0x64d457:goto L64d457;
case 0x64d45b:c.instructions+=1;goto B64d45b;
case 0x64d45d:goto L64d45d;
case 0x64d462:c.instructions+=1;goto B64d462;
case 0x64d464:goto L64d464;
case 0x64d465:c.instructions+=5;goto B64d465;
case 0x64d468:c.instructions+=4;goto B64d468;
case 0x64d46a:c.instructions+=3;goto B64d46a;
case 0x64d46d:c.instructions+=2;goto B64d46d;
case 0x64d46f:c.instructions+=1;goto B64d46f;
case 0x64d474:goto L64d474;
case 0x64d476:c.instructions+=1;goto B64d476;
case 0x64d478:goto L64d478;
case 0x64d47b:c.instructions+=6;goto B64d47b;
case 0x64d47e:c.instructions+=5;goto B64d47e;
case 0x64d484:c.instructions+=4;goto B64d484;
case 0x64d487:c.instructions+=3;goto B64d487;
case 0x64d48a:c.instructions+=2;goto B64d48a;
case 0x64d48d:c.instructions+=1;goto B64d48d;
case 0x64d48f:goto L64d48f;
case 0x64d491:c.instructions+=1;goto B64d491;
case 0x64d493:goto L64d493;
case 0x64d497:c.instructions+=1;goto B64d497;
case 0x64d499:goto L64d499;
case 0x64d49d:c.instructions+=1;goto B64d49d;
case 0x64d49f:goto L64d49f;
case 0x64d4a2:c.instructions+=4;goto B64d4a2;
case 0x64d4a5:c.instructions+=3;goto B64d4a5;
case 0x64d4a8:c.instructions+=2;goto B64d4a8;
case 0x64d4a9:c.instructions+=1;goto B64d4a9;
case 0x64d4ae:goto L64d4ae;
case 0x64d4b0:goto L64d4b0;
case 0x64d4b5:goto L64d4b5;
case 0x64d4b6:goto L64d4b6;
case 0x64d4b7:c.instructions+=1;goto B64d4b7;
case 0x64d4ba:goto L64d4ba;
case 0x64d4bc:c.instructions+=5;goto B64d4bc;
case 0x64d4bd:c.instructions+=4;goto B64d4bd;
case 0x64d4bf:c.instructions+=3;goto B64d4bf;
case 0x64d4c1:c.instructions+=2;goto B64d4c1;
case 0x64d4c4:c.instructions+=1;goto B64d4c4;
case 0x64d4c6:goto L64d4c6;
case 0x64d4c9:c.instructions+=1;goto B64d4c9;
case 0x64d4cb:goto L64d4cb;
case 0x64d4d0:c.instructions+=1;goto B64d4d0;
case 0x64d4d2:goto L64d4d2;
case 0x64d4d3:c.instructions+=5;goto B64d4d3;
case 0x64d4d6:c.instructions+=4;goto B64d4d6;
case 0x64d4d8:c.instructions+=3;goto B64d4d8;
case 0x64d4db:c.instructions+=2;goto B64d4db;
case 0x64d4dd:c.instructions+=1;goto B64d4dd;
case 0x64d4e2:goto L64d4e2;
case 0x64d4e4:c.instructions+=1;goto B64d4e4;
case 0x64d4e6:goto L64d4e6;
case 0x64d4e9:c.instructions+=6;goto B64d4e9;
case 0x64d4ec:c.instructions+=5;goto B64d4ec;
case 0x64d4f2:c.instructions+=4;goto B64d4f2;
case 0x64d4f5:c.instructions+=3;goto B64d4f5;
case 0x64d4f8:c.instructions+=2;goto B64d4f8;
case 0x64d4fb:c.instructions+=1;goto B64d4fb;
case 0x64d4fd:goto L64d4fd;
case 0x64d4ff:c.instructions+=1;goto B64d4ff;
case 0x64d501:goto L64d501;
case 0x64d505:c.instructions+=1;goto B64d505;
case 0x64d507:goto L64d507;
case 0x64d50b:c.instructions+=1;goto B64d50b;
case 0x64d50d:goto L64d50d;
case 0x64d510:c.instructions+=4;goto B64d510;
case 0x64d513:c.instructions+=3;goto B64d513;
case 0x64d516:c.instructions+=2;goto B64d516;
case 0x64d517:c.instructions+=1;goto B64d517;
case 0x64d51c:goto L64d51c;
case 0x64d51e:goto L64d51e;
case 0x64d523:goto L64d523;
case 0x64d524:goto L64d524;
case 0x64d525:c.instructions+=1;goto B64d525;
case 0x64d528:goto L64d528;
case 0x64d52a:c.instructions+=6;goto B64d52a;
case 0x64d52b:c.instructions+=5;goto B64d52b;
case 0x64d52d:c.instructions+=4;goto B64d52d;
case 0x64d52e:c.instructions+=3;goto B64d52e;
case 0x64d531:c.instructions+=2;goto B64d531;
case 0x64d533:c.instructions+=1;goto B64d533;
case 0x64d535:goto L64d535;
case 0x64d53a:c.instructions+=1;goto B64d53a;
case 0x64d53f:goto L64d53f;
case 0x64d540:c.instructions+=8;goto B64d540;
case 0x64d541:c.instructions+=7;goto B64d541;
case 0x64d544:c.instructions+=6;goto B64d544;
case 0x64d546:c.instructions+=5;goto B64d546;
case 0x64d547:c.instructions+=4;goto B64d547;
case 0x64d548:c.instructions+=3;goto B64d548;
case 0x64d54b:c.instructions+=2;goto B64d54b;
case 0x64d54d:c.instructions+=1;goto B64d54d;
case 0x64d552:goto L64d552;
case 0x64d554:c.instructions+=1;goto B64d554;
case 0x64d556:goto L64d556;
case 0x64d55b:c.instructions+=1;goto B64d55b;
case 0x64d55d:goto L64d55d;
case 0x64d560:c.instructions+=5;goto B64d560;
case 0x64d563:c.instructions+=4;goto B64d563;
case 0x64d569:c.instructions+=3;goto B64d569;
case 0x64d56c:c.instructions+=2;goto B64d56c;
case 0x64d570:c.instructions+=1;goto B64d570;
case 0x64d572:goto L64d572;
case 0x64d576:c.instructions+=1;goto B64d576;
case 0x64d578:goto L64d578;
case 0x64d57b:c.instructions+=1;goto B64d57b;
case 0x64d57d:goto L64d57d;
case 0x64d580:c.instructions+=9;goto B64d580;
case 0x64d583:c.instructions+=8;goto B64d583;
case 0x64d586:c.instructions+=7;goto B64d586;
case 0x64d588:c.instructions+=6;goto B64d588;
case 0x64d589:c.instructions+=5;goto B64d589;
case 0x64d58b:c.instructions+=4;goto B64d58b;
case 0x64d58d:c.instructions+=3;goto B64d58d;
case 0x64d590:c.instructions+=2;goto B64d590;
case 0x64d593:c.instructions+=1;goto B64d593;
case 0x64d595:goto L64d595;
case 0x64d598:goto L64d598;
case 0x64d59a:c.instructions+=2;goto B64d59a;
case 0x64d59d:c.instructions+=1;goto B64d59d;
case 0x64d59f:goto L64d59f;
case 0x64d5a2:c.instructions+=5;goto B64d5a2;
case 0x64d5a5:c.instructions+=4;goto B64d5a5;
case 0x64d5a6:c.instructions+=3;goto B64d5a6;
case 0x64d5a9:c.instructions+=2;goto B64d5a9;
case 0x64d5aa:c.instructions+=1;goto B64d5aa;
case 0x64d5af:goto L64d5af;
case 0x64d5b1:c.instructions+=1;goto B64d5b1;
case 0x64d5b3:goto L64d5b3;
case 0x64d5b6:c.instructions+=3;goto B64d5b6;
case 0x64d5b7:c.instructions+=2;goto B64d5b7;
case 0x64d5ba:c.instructions+=1;goto B64d5ba;
case 0x64d5bc:goto L64d5bc;
case 0x64d5be:c.instructions+=1;goto B64d5be;
case 0x64d5c0:goto L64d5c0;
case 0x64d5c2:c.instructions+=1;goto B64d5c2;
case 0x64d5c4:goto L64d5c4;
case 0x64d5c5:c.instructions+=2;goto B64d5c5;
case 0x64d5c8:c.instructions+=1;goto B64d5c8;
case 0x64d5ca:goto L64d5ca;
case 0x64d5cd:c.instructions+=3;goto B64d5cd;
case 0x64d5d1:c.instructions+=2;goto B64d5d1;
case 0x64d5d5:c.instructions+=1;goto B64d5d5;
case 0x64d5d7:goto L64d5d7;
case 0x64d5d8:c.instructions+=1;goto B64d5d8;
case 0x64d5d9:goto L64d5d9;
case 0x64d5da:c.instructions+=2;goto B64d5da;
case 0x64d5db:c.instructions+=1;goto B64d5db;
case 0x64d5de:goto L64d5de;
case 0x64d5e0:c.instructions+=7;goto B64d5e0;
case 0x64d5e1:c.instructions+=6;goto B64d5e1;
case 0x64d5e3:c.instructions+=5;goto B64d5e3;
case 0x64d5e4:c.instructions+=4;goto B64d5e4;
case 0x64d5e5:c.instructions+=3;goto B64d5e5;
case 0x64d5e8:c.instructions+=2;goto B64d5e8;
case 0x64d5ea:c.instructions+=1;goto B64d5ea;
case 0x64d5ec:goto L64d5ec;
case 0x64d5f1:c.instructions+=1;goto B64d5f1;
case 0x64d5f6:goto L64d5f6;
case 0x64d5f7:c.instructions+=8;goto B64d5f7;
case 0x64d5f8:c.instructions+=7;goto B64d5f8;
case 0x64d5fb:c.instructions+=6;goto B64d5fb;
case 0x64d5fd:c.instructions+=5;goto B64d5fd;
case 0x64d5fe:c.instructions+=4;goto B64d5fe;
case 0x64d5ff:c.instructions+=3;goto B64d5ff;
case 0x64d602:c.instructions+=2;goto B64d602;
case 0x64d604:c.instructions+=1;goto B64d604;
case 0x64d609:goto L64d609;
case 0x64d60b:c.instructions+=2;goto B64d60b;
case 0x64d60d:c.instructions+=1;goto B64d60d;
case 0x64d60f:goto L64d60f;
case 0x64d612:c.instructions+=5;goto B64d612;
case 0x64d615:c.instructions+=4;goto B64d615;
case 0x64d61b:c.instructions+=3;goto B64d61b;
case 0x64d61e:c.instructions+=2;goto B64d61e;
case 0x64d621:c.instructions+=1;goto B64d621;
case 0x64d623:goto L64d623;
case 0x64d627:c.instructions+=1;goto B64d627;
case 0x64d629:goto L64d629;
case 0x64d62c:c.instructions+=1;goto B64d62c;
case 0x64d62e:goto L64d62e;
case 0x64d633:c.instructions+=1;goto B64d633;
case 0x64d635:goto L64d635;
case 0x64d638:c.instructions+=8;goto B64d638;
case 0x64d63a:c.instructions+=7;goto B64d63a;
case 0x64d63d:c.instructions+=6;goto B64d63d;
case 0x64d640:c.instructions+=5;goto B64d640;
case 0x64d641:c.instructions+=4;goto B64d641;
case 0x64d643:c.instructions+=3;goto B64d643;
case 0x64d646:c.instructions+=2;goto B64d646;
case 0x64d649:c.instructions+=1;goto B64d649;
case 0x64d64b:goto L64d64b;
case 0x64d64e:goto L64d64e;
case 0x64d650:c.instructions+=4;goto B64d650;
case 0x64d651:c.instructions+=3;goto B64d651;
case 0x64d652:c.instructions+=2;goto B64d652;
case 0x64d653:c.instructions+=1;goto B64d653;
case 0x64d654:goto L64d654;
case 0x64d656:c.instructions+=2;goto B64d656;
case 0x64d659:c.instructions+=1;goto B64d659;
case 0x64d65b:goto L64d65b;
case 0x64d65e:c.instructions+=1;goto B64d65e;
case 0x64d661:goto L64d661;
case 0x64d664:c.instructions+=2;goto B64d664;
case 0x64d665:c.instructions+=1;goto B64d665;
case 0x64d66a:goto L64d66a;
case 0x64d66c:c.instructions+=2;goto B64d66c;
case 0x64d66e:c.instructions+=1;goto B64d66e;
case 0x64d670:goto L64d670;
case 0x64d674:c.instructions+=4;goto B64d674;
case 0x64d677:c.instructions+=3;goto B64d677;
case 0x64d678:c.instructions+=2;goto B64d678;
case 0x64d67b:c.instructions+=1;goto B64d67b;
case 0x64d67d:goto L64d67d;
case 0x64d67f:c.instructions+=1;goto B64d67f;
case 0x64d681:goto L64d681;
case 0x64d683:c.instructions+=1;goto B64d683;
case 0x64d685:goto L64d685;
case 0x64d686:c.instructions+=2;goto B64d686;
case 0x64d689:c.instructions+=1;goto B64d689;
case 0x64d68b:goto L64d68b;
case 0x64d68e:c.instructions+=3;goto B64d68e;
case 0x64d692:c.instructions+=2;goto B64d692;
case 0x64d696:c.instructions+=1;goto B64d696;
case 0x64d698:goto L64d698;
case 0x64d69a:goto L64d69a;
case 0x64d69b:c.instructions+=1;goto B64d69b;
case 0x64d69c:goto L64d69c;
case 0x64d69d:c.instructions+=2;goto B64d69d;
case 0x64d69e:c.instructions+=1;goto B64d69e;
case 0x64d6a1:goto L64d6a1;
case 0x64d6a3:c.instructions+=14;goto B64d6a3;
case 0x64d6a4:c.instructions+=13;goto B64d6a4;
case 0x64d6a6:c.instructions+=12;goto B64d6a6;
case 0x64d6a7:c.instructions+=11;goto B64d6a7;
case 0x64d6a8:c.instructions+=10;goto B64d6a8;
case 0x64d6a9:c.instructions+=9;goto B64d6a9;
case 0x64d6aa:c.instructions+=8;goto B64d6aa;
case 0x64d6ad:c.instructions+=7;goto B64d6ad;
case 0x64d6ae:c.instructions+=6;goto B64d6ae;
case 0x64d6b0:c.instructions+=5;goto B64d6b0;
case 0x64d6b3:c.instructions+=4;goto B64d6b3;
case 0x64d6b5:c.instructions+=3;goto B64d6b5;
case 0x64d6b7:c.instructions+=2;goto B64d6b7;
case 0x64d6ba:c.instructions+=1;goto B64d6ba;
case 0x64d6bf:goto L64d6bf;
case 0x64d6c1:c.instructions+=1;goto B64d6c1;
case 0x64d6c7:goto L64d6c7;
case 0x64d6ca:c.instructions+=5;goto B64d6ca;
case 0x64d6cd:c.instructions+=4;goto B64d6cd;
case 0x64d6d3:c.instructions+=3;goto B64d6d3;
case 0x64d6d6:c.instructions+=2;goto B64d6d6;
case 0x64d6d9:c.instructions+=1;goto B64d6d9;
case 0x64d6db:goto L64d6db;
case 0x64d6df:c.instructions+=1;goto B64d6df;
case 0x64d6e5:goto L64d6e5;
case 0x64d6e9:c.instructions+=1;goto B64d6e9;
case 0x64d6ef:goto L64d6ef;
case 0x64d6f2:c.instructions+=1;goto B64d6f2;
case 0x64d6f4:goto L64d6f4;
case 0x64d6f7:c.instructions+=5;goto B64d6f7;
case 0x64d6fa:c.instructions+=4;goto B64d6fa;
case 0x64d6fc:c.instructions+=3;goto B64d6fc;
case 0x64d6ff:c.instructions+=2;goto B64d6ff;
case 0x64d702:c.instructions+=1;goto B64d702;
case 0x64d704:goto L64d704;
case 0x64d707:c.instructions+=3;goto B64d707;
case 0x64d708:c.instructions+=2;goto B64d708;
case 0x64d70b:c.instructions+=1;goto B64d70b;
case 0x64d710:goto L64d710;
case 0x64d713:c.instructions+=1;goto B64d713;
case 0x64d716:goto L64d716;
case 0x64d718:c.instructions+=3;goto B64d718;
case 0x64d719:c.instructions+=2;goto B64d719;
case 0x64d71b:c.instructions+=1;goto B64d71b;
case 0x64d71d:goto L64d71d;
case 0x64d71f:c.instructions+=5;goto B64d71f;
case 0x64d725:c.instructions+=4;goto B64d725;
case 0x64d728:c.instructions+=3;goto B64d728;
case 0x64d72a:c.instructions+=2;goto B64d72a;
case 0x64d72b:c.instructions+=1;goto B64d72b;
case 0x64d730:goto L64d730;
case 0x64d732:c.instructions+=3;goto B64d732;
case 0x64d734:c.instructions+=2;goto B64d734;
case 0x64d737:c.instructions+=1;goto B64d737;
case 0x64d739:goto L64d739;
case 0x64d73c:c.instructions+=2;goto B64d73c;
case 0x64d743:c.instructions+=1;goto B64d743;
case 0x64d748:goto L64d748;
case 0x64d74a:goto L64d74a;
case 0x64d74d:c.instructions+=3;goto B64d74d;
case 0x64d74f:c.instructions+=2;goto B64d74f;
case 0x64d751:c.instructions+=1;goto B64d751;
case 0x64d754:goto L64d754;
case 0x64d756:goto L64d756;
case 0x64d758:c.instructions+=1;goto B64d758;
case 0x64d75b:goto L64d75b;
case 0x64d75d:goto L64d75d;
case 0x64d760:c.instructions+=1;goto B64d760;
case 0x64d765:goto L64d765;
case 0x64d768:c.instructions+=1;goto B64d768;
case 0x64d76b:goto L64d76b;
case 0x64d76e:c.instructions+=2;goto B64d76e;
case 0x64d771:c.instructions+=1;goto B64d771;
case 0x64d773:goto L64d773;
case 0x64d77a:goto L64d77a;
case 0x64d77d:c.instructions+=5;goto B64d77d;
case 0x64d77e:c.instructions+=4;goto B64d77e;
case 0x64d77f:c.instructions+=3;goto B64d77f;
case 0x64d780:c.instructions+=2;goto B64d780;
case 0x64d781:c.instructions+=1;goto B64d781;
case 0x64d784:goto L64d784;
case 0x64d786:c.instructions+=8;goto B64d786;
case 0x64d787:c.instructions+=7;goto B64d787;
case 0x64d789:c.instructions+=6;goto B64d789;
case 0x64d78a:c.instructions+=5;goto B64d78a;
case 0x64d78b:c.instructions+=4;goto B64d78b;
case 0x64d78e:c.instructions+=3;goto B64d78e;
case 0x64d790:c.instructions+=2;goto B64d790;
case 0x64d792:c.instructions+=1;goto B64d792;
case 0x64d794:goto L64d794;
case 0x64d799:c.instructions+=1;goto B64d799;
case 0x64d79b:goto L64d79b;
case 0x64d79c:c.instructions+=5;goto B64d79c;
case 0x64d79f:c.instructions+=4;goto B64d79f;
case 0x64d7a1:c.instructions+=3;goto B64d7a1;
case 0x64d7a4:c.instructions+=2;goto B64d7a4;
case 0x64d7a6:c.instructions+=1;goto B64d7a6;
case 0x64d7ab:goto L64d7ab;
case 0x64d7ad:c.instructions+=1;goto B64d7ad;
case 0x64d7af:goto L64d7af;
case 0x64d7b2:c.instructions+=5;goto B64d7b2;
case 0x64d7b5:c.instructions+=4;goto B64d7b5;
case 0x64d7bb:c.instructions+=3;goto B64d7bb;
case 0x64d7be:c.instructions+=2;goto B64d7be;
case 0x64d7c2:c.instructions+=1;goto B64d7c2;
case 0x64d7c4:goto L64d7c4;
case 0x64d7c8:c.instructions+=1;goto B64d7c8;
case 0x64d7ca:goto L64d7ca;
case 0x64d7ce:c.instructions+=1;goto B64d7ce;
case 0x64d7d0:goto L64d7d0;
case 0x64d7d3:c.instructions+=1;goto B64d7d3;
case 0x64d7d5:goto L64d7d5;
case 0x64d7d8:c.instructions+=4;goto B64d7d8;
case 0x64d7db:c.instructions+=3;goto B64d7db;
case 0x64d7de:c.instructions+=2;goto B64d7de;
case 0x64d7e0:c.instructions+=1;goto B64d7e0;
case 0x64d7e2:goto L64d7e2;
case 0x64d7e7:goto L64d7e7;
case 0x64d7e8:goto L64d7e8;
case 0x64d7e9:c.instructions+=4;goto B64d7e9;
case 0x64d7eb:c.instructions+=3;goto B64d7eb;
case 0x64d7ec:c.instructions+=2;goto B64d7ec;
case 0x64d7ed:c.instructions+=1;goto B64d7ed;
case 0x64d7f0:goto L64d7f0;
case 0x64d7f2:c.instructions+=10;goto B64d7f2;
case 0x64d7f3:c.instructions+=9;goto B64d7f3;
case 0x64d7f5:c.instructions+=8;goto B64d7f5;
case 0x64d7f6:c.instructions+=7;goto B64d7f6;
case 0x64d7f9:c.instructions+=6;goto B64d7f9;
case 0x64d7fa:c.instructions+=5;goto B64d7fa;
case 0x64d7fc:c.instructions+=4;goto B64d7fc;
case 0x64d7ff:c.instructions+=3;goto B64d7ff;
case 0x64d801:c.instructions+=2;goto B64d801;
case 0x64d803:c.instructions+=1;goto B64d803;
case 0x64d808:goto L64d808;
case 0x64d80a:c.instructions+=1;goto B64d80a;
case 0x64d80c:goto L64d80c;
case 0x64d80f:c.instructions+=5;goto B64d80f;
case 0x64d812:c.instructions+=4;goto B64d812;
case 0x64d818:c.instructions+=3;goto B64d818;
case 0x64d81b:c.instructions+=2;goto B64d81b;
case 0x64d81e:c.instructions+=1;goto B64d81e;
case 0x64d820:goto L64d820;
case 0x64d824:c.instructions+=1;goto B64d824;
case 0x64d826:goto L64d826;
case 0x64d828:c.instructions+=7;goto B64d828;
case 0x64d82b:c.instructions+=6;goto B64d82b;
case 0x64d82e:c.instructions+=5;goto B64d82e;
case 0x64d830:c.instructions+=4;goto B64d830;
case 0x64d833:c.instructions+=3;goto B64d833;
case 0x64d835:c.instructions+=2;goto B64d835;
case 0x64d838:c.instructions+=1;goto B64d838;
case 0x64d83a:goto L64d83a;
case 0x64d83d:c.instructions+=1;goto B64d83d;
case 0x64d83f:goto L64d83f;
case 0x64d843:c.instructions+=1;goto B64d843;
case 0x64d845:goto L64d845;
case 0x64d849:c.instructions+=1;goto B64d849;
case 0x64d84b:goto L64d84b;
case 0x64d84e:c.instructions+=4;goto B64d84e;
case 0x64d851:c.instructions+=3;goto B64d851;
case 0x64d854:c.instructions+=2;goto B64d854;
case 0x64d856:c.instructions+=1;goto B64d856;
case 0x64d858:goto L64d858;
case 0x64d859:c.instructions+=1;goto B64d859;
case 0x64d85b:goto L64d85b;
case 0x64d85c:c.instructions+=1;goto B64d85c;
case 0x64d85e:goto L64d85e;
case 0x64d85f:c.instructions+=1;goto B64d85f;
case 0x64d861:goto L64d861;
case 0x64d864:c.instructions+=2;goto B64d864;
case 0x64d867:c.instructions+=1;goto B64d867;
case 0x64d869:goto L64d869;
case 0x64d86c:c.instructions+=1;goto B64d86c;
case 0x64d86e:goto L64d86e;
case 0x64d873:goto L64d873;
case 0x64d875:c.instructions+=4;goto B64d875;
case 0x64d876:c.instructions+=3;goto B64d876;
case 0x64d877:c.instructions+=2;goto B64d877;
case 0x64d878:c.instructions+=1;goto B64d878;
case 0x64d87b:goto L64d87b;
case 0x64d87d:c.instructions+=10;goto B64d87d;
case 0x64d87e:c.instructions+=9;goto B64d87e;
case 0x64d880:c.instructions+=8;goto B64d880;
case 0x64d881:c.instructions+=7;goto B64d881;
case 0x64d882:c.instructions+=6;goto B64d882;
case 0x64d883:c.instructions+=5;goto B64d883;
case 0x64d886:c.instructions+=4;goto B64d886;
case 0x64d888:c.instructions+=3;goto B64d888;
case 0x64d88a:c.instructions+=2;goto B64d88a;
case 0x64d88d:c.instructions+=1;goto B64d88d;
case 0x64d88f:goto L64d88f;
case 0x64d896:c.instructions+=1;goto B64d896;
case 0x64d89b:goto L64d89b;
case 0x64d89c:c.instructions+=5;goto B64d89c;
case 0x64d89f:c.instructions+=4;goto B64d89f;
case 0x64d8a1:c.instructions+=3;goto B64d8a1;
case 0x64d8a4:c.instructions+=2;goto B64d8a4;
case 0x64d8a6:c.instructions+=1;goto B64d8a6;
case 0x64d8ab:goto L64d8ab;
case 0x64d8ad:c.instructions+=1;goto B64d8ad;
case 0x64d8af:goto L64d8af;
case 0x64d8b2:c.instructions+=5;goto B64d8b2;
case 0x64d8b5:c.instructions+=4;goto B64d8b5;
case 0x64d8bb:c.instructions+=3;goto B64d8bb;
case 0x64d8be:c.instructions+=2;goto B64d8be;
case 0x64d8c1:c.instructions+=1;goto B64d8c1;
case 0x64d8c3:goto L64d8c3;
case 0x64d8c7:c.instructions+=1;goto B64d8c7;
case 0x64d8c9:goto L64d8c9;
case 0x64d8cc:c.instructions+=2;goto B64d8cc;
case 0x64d8ce:c.instructions+=1;goto B64d8ce;
case 0x64d8d0:goto L64d8d0;
case 0x64d8d3:c.instructions+=1;goto B64d8d3;
case 0x64d8d5:goto L64d8d5;
case 0x64d8d9:c.instructions+=1;goto B64d8d9;
case 0x64d8db:goto L64d8db;
case 0x64d8df:c.instructions+=1;goto B64d8df;
case 0x64d8e1:goto L64d8e1;
case 0x64d8e4:c.instructions+=4;goto B64d8e4;
case 0x64d8e7:c.instructions+=3;goto B64d8e7;
case 0x64d8ea:c.instructions+=2;goto B64d8ea;
case 0x64d8ec:c.instructions+=1;goto B64d8ec;
case 0x64d8ee:goto L64d8ee;
case 0x64d8ef:c.instructions+=1;goto B64d8ef;
case 0x64d8f1:goto L64d8f1;
case 0x64d8f2:c.instructions+=1;goto B64d8f2;
case 0x64d8f4:goto L64d8f4;
case 0x64d8f5:c.instructions+=1;goto B64d8f5;
case 0x64d8f7:goto L64d8f7;
case 0x64d8fa:c.instructions+=5;goto B64d8fa;
case 0x64d900:c.instructions+=4;goto B64d900;
case 0x64d902:c.instructions+=3;goto B64d902;
case 0x64d904:c.instructions+=2;goto B64d904;
case 0x64d907:c.instructions+=1;goto B64d907;
case 0x64d909:goto L64d909;
case 0x64d90b:c.instructions+=2;goto B64d90b;
case 0x64d90c:c.instructions+=1;goto B64d90c;
case 0x64d90e:goto L64d90e;
case 0x64d910:goto L64d910;
case 0x64d912:c.instructions+=1;goto B64d912;
case 0x64d914:goto L64d914;
case 0x64d916:c.instructions+=4;goto B64d916;
case 0x64d919:c.instructions+=3;goto B64d919;
case 0x64d91c:c.instructions+=2;goto B64d91c;
case 0x64d91e:c.instructions+=1;goto B64d91e;
case 0x64d920:goto L64d920;
case 0x64d927:goto L64d927;
case 0x64d928:goto L64d928;
case 0x64d92b:c.instructions+=4;goto B64d92b;
case 0x64d92c:c.instructions+=3;goto B64d92c;
case 0x64d92d:c.instructions+=2;goto B64d92d;
case 0x64d92e:c.instructions+=1;goto B64d92e;
case 0x64d931:goto L64d931;
case 0x64d933:c.instructions+=10;goto B64d933;
case 0x64d934:c.instructions+=9;goto B64d934;
case 0x64d936:c.instructions+=8;goto B64d936;
case 0x64d937:c.instructions+=7;goto B64d937;
case 0x64d93a:c.instructions+=6;goto B64d93a;
case 0x64d93b:c.instructions+=5;goto B64d93b;
case 0x64d93d:c.instructions+=4;goto B64d93d;
case 0x64d940:c.instructions+=3;goto B64d940;
case 0x64d942:c.instructions+=2;goto B64d942;
case 0x64d944:c.instructions+=1;goto B64d944;
case 0x64d949:goto L64d949;
case 0x64d94b:c.instructions+=1;goto B64d94b;
case 0x64d94d:goto L64d94d;
case 0x64d950:c.instructions+=5;goto B64d950;
case 0x64d953:c.instructions+=4;goto B64d953;
case 0x64d959:c.instructions+=3;goto B64d959;
case 0x64d95c:c.instructions+=2;goto B64d95c;
case 0x64d95f:c.instructions+=1;goto B64d95f;
case 0x64d961:goto L64d961;
case 0x64d965:c.instructions+=1;goto B64d965;
case 0x64d967:goto L64d967;
case 0x64d96a:c.instructions+=2;goto B64d96a;
case 0x64d96c:c.instructions+=1;goto B64d96c;
case 0x64d96e:goto L64d96e;
case 0x64d971:c.instructions+=1;goto B64d971;
case 0x64d973:goto L64d973;
case 0x64d977:c.instructions+=1;goto B64d977;
case 0x64d979:goto L64d979;
case 0x64d97d:c.instructions+=1;goto B64d97d;
case 0x64d97f:goto L64d97f;
case 0x64d982:c.instructions+=4;goto B64d982;
case 0x64d985:c.instructions+=3;goto B64d985;
case 0x64d988:c.instructions+=2;goto B64d988;
case 0x64d98a:c.instructions+=1;goto B64d98a;
case 0x64d98c:goto L64d98c;
case 0x64d98d:c.instructions+=1;goto B64d98d;
case 0x64d98f:goto L64d98f;
case 0x64d990:c.instructions+=1;goto B64d990;
case 0x64d992:goto L64d992;
case 0x64d993:c.instructions+=1;goto B64d993;
case 0x64d995:goto L64d995;
case 0x64d998:c.instructions+=2;goto B64d998;
case 0x64d99b:c.instructions+=1;goto B64d99b;
case 0x64d99d:goto L64d99d;
case 0x64d9a0:goto L64d9a0;
case 0x64d9a3:c.instructions+=1;goto B64d9a3;
case 0x64d9a5:goto L64d9a5;
case 0x64d9a7:c.instructions+=3;goto B64d9a7;
case 0x64d9aa:c.instructions+=2;goto B64d9aa;
case 0x64d9ad:c.instructions+=1;goto B64d9ad;
case 0x64d9af:goto L64d9af;
case 0x64d9b4:goto L64d9b4;
case 0x64d9b6:c.instructions+=4;goto B64d9b6;
case 0x64d9b7:c.instructions+=3;goto B64d9b7;
case 0x64d9b8:c.instructions+=2;goto B64d9b8;
case 0x64d9b9:c.instructions+=1;goto B64d9b9;
case 0x64d9bc:goto L64d9bc;
case 0x64d9be:c.instructions+=8;goto B64d9be;
case 0x64d9bf:c.instructions+=7;goto B64d9bf;
case 0x64d9c1:c.instructions+=6;goto B64d9c1;
case 0x64d9c2:c.instructions+=5;goto B64d9c2;
case 0x64d9c6:c.instructions+=4;goto B64d9c6;
case 0x64d9c7:c.instructions+=3;goto B64d9c7;
case 0x64d9ca:c.instructions+=2;goto B64d9ca;
case 0x64d9cc:c.instructions+=1;goto B64d9cc;
case 0x64d9ce:goto L64d9ce;
case 0x64d9d5:c.instructions+=1;goto B64d9d5;
case 0x64d9da:goto L64d9da;
case 0x64d9db:c.instructions+=5;goto B64d9db;
case 0x64d9de:c.instructions+=4;goto B64d9de;
case 0x64d9e0:c.instructions+=3;goto B64d9e0;
case 0x64d9e3:c.instructions+=2;goto B64d9e3;
case 0x64d9e5:c.instructions+=1;goto B64d9e5;
case 0x64d9ea:goto L64d9ea;
case 0x64d9ec:c.instructions+=1;goto B64d9ec;
case 0x64d9ee:goto L64d9ee;
case 0x64d9f1:c.instructions+=5;goto B64d9f1;
case 0x64d9f4:c.instructions+=4;goto B64d9f4;
case 0x64d9fa:c.instructions+=3;goto B64d9fa;
case 0x64d9fd:c.instructions+=2;goto B64d9fd;
case 0x64da01:c.instructions+=1;goto B64da01;
case 0x64da03:goto L64da03;
case 0x64da07:c.instructions+=1;goto B64da07;
case 0x64da09:goto L64da09;
case 0x64da0c:c.instructions+=2;goto B64da0c;
case 0x64da0e:c.instructions+=1;goto B64da0e;
case 0x64da10:goto L64da10;
case 0x64da13:c.instructions+=1;goto B64da13;
case 0x64da15:goto L64da15;
case 0x64da19:c.instructions+=1;goto B64da19;
case 0x64da1b:goto L64da1b;
case 0x64da1f:c.instructions+=1;goto B64da1f;
case 0x64da21:goto L64da21;
case 0x64da24:c.instructions+=4;goto B64da24;
case 0x64da27:c.instructions+=3;goto B64da27;
case 0x64da2a:c.instructions+=2;goto B64da2a;
case 0x64da2d:c.instructions+=1;goto B64da2d;
case 0x64da2f:goto L64da2f;
case 0x64da30:c.instructions+=1;goto B64da30;
case 0x64da32:goto L64da32;
case 0x64da33:c.instructions+=1;goto B64da33;
case 0x64da35:goto L64da35;
case 0x64da36:c.instructions+=1;goto B64da36;
case 0x64da38:goto L64da38;
case 0x64da3b:c.instructions+=1;goto B64da3b;
case 0x64da40:goto L64da40;
case 0x64da42:c.instructions+=1;goto B64da42;
case 0x64da44:goto L64da44;
case 0x64da47:c.instructions+=1;goto B64da47;
case 0x64da49:goto L64da49;
case 0x64da4b:c.instructions+=4;goto B64da4b;
case 0x64da4e:c.instructions+=3;goto B64da4e;
case 0x64da51:c.instructions+=2;goto B64da51;
case 0x64da53:c.instructions+=1;goto B64da53;
case 0x64da55:goto L64da55;
case 0x64da5c:goto L64da5c;
case 0x64da5d:goto L64da5d;
case 0x64da60:c.instructions+=3;goto B64da60;
case 0x64da61:c.instructions+=2;goto B64da61;
case 0x64da62:c.instructions+=1;goto B64da62;
case 0x64da65:goto L64da65;
case 0x64da67:c.instructions+=10;goto B64da67;
case 0x64da68:c.instructions+=9;goto B64da68;
case 0x64da6a:c.instructions+=8;goto B64da6a;
case 0x64da6b:c.instructions+=7;goto B64da6b;
case 0x64da6c:c.instructions+=6;goto B64da6c;
case 0x64da6f:c.instructions+=5;goto B64da6f;
case 0x64da71:c.instructions+=4;goto B64da71;
case 0x64da74:c.instructions+=3;goto B64da74;
case 0x64da76:c.instructions+=2;goto B64da76;
case 0x64da78:c.instructions+=1;goto B64da78;
case 0x64da7d:goto L64da7d;
case 0x64da7f:c.instructions+=1;goto B64da7f;
case 0x64da81:goto L64da81;
case 0x64da84:c.instructions+=5;goto B64da84;
case 0x64da87:c.instructions+=4;goto B64da87;
case 0x64da8d:c.instructions+=3;goto B64da8d;
case 0x64da90:c.instructions+=2;goto B64da90;
case 0x64da93:c.instructions+=1;goto B64da93;
case 0x64da95:goto L64da95;
case 0x64da99:c.instructions+=1;goto B64da99;
case 0x64da9b:goto L64da9b;
case 0x64da9e:c.instructions+=2;goto B64da9e;
case 0x64daa0:c.instructions+=1;goto B64daa0;
case 0x64daa2:goto L64daa2;
case 0x64daa5:c.instructions+=1;goto B64daa5;
case 0x64daa7:goto L64daa7;
case 0x64daab:c.instructions+=1;goto B64daab;
case 0x64daad:goto L64daad;
case 0x64dab1:c.instructions+=1;goto B64dab1;
case 0x64dab3:goto L64dab3;
case 0x64dab6:c.instructions+=4;goto B64dab6;
case 0x64dab9:c.instructions+=3;goto B64dab9;
case 0x64dabc:c.instructions+=2;goto B64dabc;
case 0x64dabf:c.instructions+=1;goto B64dabf;
case 0x64dac1:goto L64dac1;
case 0x64dac2:c.instructions+=1;goto B64dac2;
case 0x64dac4:goto L64dac4;
case 0x64dac5:c.instructions+=1;goto B64dac5;
case 0x64dac7:goto L64dac7;
case 0x64dac8:c.instructions+=1;goto B64dac8;
case 0x64daca:goto L64daca;
case 0x64dacd:c.instructions+=2;goto B64dacd;
case 0x64dad0:c.instructions+=1;goto B64dad0;
case 0x64dad2:goto L64dad2;
case 0x64dad5:c.instructions+=1;goto B64dad5;
case 0x64dada:goto L64dada;
case 0x64dadd:c.instructions+=1;goto B64dadd;
case 0x64dadf:goto L64dadf;
case 0x64dae2:c.instructions+=5;goto B64dae2;
case 0x64dae8:c.instructions+=4;goto B64dae8;
case 0x64daea:c.instructions+=3;goto B64daea;
case 0x64daec:c.instructions+=2;goto B64daec;
case 0x64daef:c.instructions+=1;goto B64daef;
case 0x64daf1:goto L64daf1;
case 0x64daf3:c.instructions+=2;goto B64daf3;
case 0x64daf4:c.instructions+=1;goto B64daf4;
case 0x64daf6:goto L64daf6;
case 0x64daf8:c.instructions+=1;goto B64daf8;
case 0x64dafa:goto L64dafa;
case 0x64daff:goto L64daff;
case 0x64db00:c.instructions+=4;goto B64db00;
case 0x64db02:c.instructions+=3;goto B64db02;
case 0x64db03:c.instructions+=2;goto B64db03;
case 0x64db04:c.instructions+=1;goto B64db04;
case 0x64db07:goto L64db07;
case 0x64db09:c.instructions+=8;goto B64db09;
case 0x64db0a:c.instructions+=7;goto B64db0a;
case 0x64db0c:c.instructions+=6;goto B64db0c;
case 0x64db0d:c.instructions+=5;goto B64db0d;
case 0x64db11:c.instructions+=4;goto B64db11;
case 0x64db12:c.instructions+=3;goto B64db12;
case 0x64db15:c.instructions+=2;goto B64db15;
case 0x64db17:c.instructions+=1;goto B64db17;
case 0x64db19:goto L64db19;
case 0x64db20:c.instructions+=1;goto B64db20;
case 0x64db25:goto L64db25;
case 0x64db26:c.instructions+=5;goto B64db26;
case 0x64db29:c.instructions+=4;goto B64db29;
case 0x64db2b:c.instructions+=3;goto B64db2b;
case 0x64db2e:c.instructions+=2;goto B64db2e;
case 0x64db30:c.instructions+=1;goto B64db30;
case 0x64db35:goto L64db35;
case 0x64db37:c.instructions+=1;goto B64db37;
case 0x64db39:goto L64db39;
case 0x64db3c:c.instructions+=5;goto B64db3c;
case 0x64db3f:c.instructions+=4;goto B64db3f;
case 0x64db45:c.instructions+=3;goto B64db45;
case 0x64db48:c.instructions+=2;goto B64db48;
case 0x64db4c:c.instructions+=1;goto B64db4c;
case 0x64db4e:goto L64db4e;
case 0x64db52:c.instructions+=1;goto B64db52;
case 0x64db54:goto L64db54;
case 0x64db57:c.instructions+=2;goto B64db57;
case 0x64db59:c.instructions+=1;goto B64db59;
case 0x64db5b:goto L64db5b;
case 0x64db5e:c.instructions+=1;goto B64db5e;
case 0x64db60:goto L64db60;
case 0x64db64:c.instructions+=1;goto B64db64;
case 0x64db66:goto L64db66;
case 0x64db6a:c.instructions+=1;goto B64db6a;
case 0x64db6c:goto L64db6c;
case 0x64db6f:c.instructions+=4;goto B64db6f;
case 0x64db72:c.instructions+=3;goto B64db72;
case 0x64db75:c.instructions+=2;goto B64db75;
case 0x64db78:c.instructions+=1;goto B64db78;
case 0x64db7a:goto L64db7a;
case 0x64db7b:c.instructions+=1;goto B64db7b;
case 0x64db7d:goto L64db7d;
case 0x64db7e:c.instructions+=1;goto B64db7e;
case 0x64db80:goto L64db80;
case 0x64db81:c.instructions+=1;goto B64db81;
case 0x64db83:goto L64db83;
case 0x64db86:goto L64db86;
case 0x64db88:c.instructions+=1;goto B64db88;
case 0x64db8a:goto L64db8a;
case 0x64db8d:c.instructions+=4;goto B64db8d;
case 0x64db8f:c.instructions+=3;goto B64db8f;
case 0x64db92:c.instructions+=2;goto B64db92;
case 0x64db95:c.instructions+=1;goto B64db95;
case 0x64db97:goto L64db97;
case 0x64db9d:c.instructions+=1;goto B64db9d;
case 0x64db9f:goto L64db9f;
case 0x64dba2:c.instructions+=1;goto B64dba2;
case 0x64dba4:goto L64dba4;
case 0x64dba6:c.instructions+=5;goto B64dba6;
case 0x64dba9:c.instructions+=4;goto B64dba9;
case 0x64dbac:c.instructions+=3;goto B64dbac;
case 0x64dbaf:c.instructions+=2;goto B64dbaf;
case 0x64dbb2:c.instructions+=1;goto B64dbb2;
case 0x64dbb4:goto L64dbb4;
case 0x64dbbb:goto L64dbbb;
case 0x64dbbc:goto L64dbbc;
case 0x64dbbf:c.instructions+=3;goto B64dbbf;
case 0x64dbc0:c.instructions+=2;goto B64dbc0;
case 0x64dbc1:c.instructions+=1;goto B64dbc1;
case 0x64dbc4:goto L64dbc4;
case 0x64dbc6:c.instructions+=9;goto B64dbc6;
case 0x64dbc7:c.instructions+=8;goto B64dbc7;
case 0x64dbc9:c.instructions+=7;goto B64dbc9;
case 0x64dbca:c.instructions+=6;goto B64dbca;
case 0x64dbcb:c.instructions+=5;goto B64dbcb;
case 0x64dbcc:c.instructions+=4;goto B64dbcc;
case 0x64dbce:c.instructions+=3;goto B64dbce;
case 0x64dbd1:c.instructions+=2;goto B64dbd1;
case 0x64dbd4:c.instructions+=1;goto B64dbd4;
case 0x64dbd6:goto L64dbd6;
case 0x64dbd9:c.instructions+=1;goto B64dbd9;
case 0x64dbdb:goto L64dbdb;
case 0x64dbe2:c.instructions+=1;goto B64dbe2;
case 0x64dbe7:goto L64dbe7;
case 0x64dbe8:c.instructions+=5;goto B64dbe8;
case 0x64dbeb:c.instructions+=4;goto B64dbeb;
case 0x64dbed:c.instructions+=3;goto B64dbed;
case 0x64dbf0:c.instructions+=2;goto B64dbf0;
case 0x64dbf2:c.instructions+=1;goto B64dbf2;
case 0x64dbf7:goto L64dbf7;
case 0x64dbf9:c.instructions+=1;goto B64dbf9;
case 0x64dbff:goto L64dbff;
case 0x64dc02:c.instructions+=6;goto B64dc02;
case 0x64dc05:c.instructions+=5;goto B64dc05;
case 0x64dc0b:c.instructions+=4;goto B64dc0b;
case 0x64dc0e:c.instructions+=3;goto B64dc0e;
case 0x64dc11:c.instructions+=2;goto B64dc11;
case 0x64dc13:c.instructions+=1;goto B64dc13;
case 0x64dc19:goto L64dc19;
case 0x64dc1c:c.instructions+=1;goto B64dc1c;
case 0x64dc22:goto L64dc22;
case 0x64dc25:c.instructions+=2;goto B64dc25;
case 0x64dc27:c.instructions+=1;goto B64dc27;
case 0x64dc29:goto L64dc29;
case 0x64dc2d:c.instructions+=1;goto B64dc2d;
case 0x64dc2f:goto L64dc2f;
case 0x64dc31:c.instructions+=1;goto B64dc31;
case 0x64dc32:goto L64dc32;
case 0x64dc35:c.instructions+=4;goto B64dc35;
case 0x64dc39:c.instructions+=3;goto B64dc39;
case 0x64dc3c:c.instructions+=2;goto B64dc3c;
case 0x64dc3f:c.instructions+=1;goto B64dc3f;
case 0x64dc41:goto L64dc41;
case 0x64dc44:goto L64dc44;
case 0x64dc48:c.instructions+=2;goto B64dc48;
case 0x64dc4b:c.instructions+=1;goto B64dc4b;
case 0x64dc4d:goto L64dc4d;
case 0x64dc4f:c.instructions+=1;goto B64dc4f;
case 0x64dc51:goto L64dc51;
case 0x64dc54:c.instructions+=3;goto B64dc54;
case 0x64dc57:c.instructions+=2;goto B64dc57;
case 0x64dc5a:c.instructions+=1;goto B64dc5a;
case 0x64dc5c:goto L64dc5c;
case 0x64dc5d:c.instructions+=1;goto B64dc5d;
case 0x64dc5f:goto L64dc5f;
case 0x64dc60:c.instructions+=1;goto B64dc60;
case 0x64dc62:goto L64dc62;
case 0x64dc63:c.instructions+=1;goto B64dc63;
case 0x64dc65:goto L64dc65;
case 0x64dc68:c.instructions+=3;goto B64dc68;
case 0x64dc6b:c.instructions+=2;goto B64dc6b;
case 0x64dc6e:c.instructions+=1;goto B64dc6e;
case 0x64dc70:goto L64dc70;
case 0x64dc73:c.instructions+=2;goto B64dc73;
case 0x64dc76:c.instructions+=1;goto B64dc76;
case 0x64dc7b:goto L64dc7b;
case 0x64dc7d:goto L64dc7d;
case 0x64dc80:c.instructions+=6;goto B64dc80;
case 0x64dc83:c.instructions+=5;goto B64dc83;
case 0x64dc89:c.instructions+=4;goto B64dc89;
case 0x64dc8b:c.instructions+=3;goto B64dc8b;
case 0x64dc8d:c.instructions+=2;goto B64dc8d;
case 0x64dc90:c.instructions+=1;goto B64dc90;
case 0x64dc92:goto L64dc92;
case 0x64dc94:c.instructions+=2;goto B64dc94;
case 0x64dc95:c.instructions+=1;goto B64dc95;
case 0x64dc97:goto L64dc97;
case 0x64dc99:goto L64dc99;
case 0x64dc9c:goto L64dc9c;
case 0x64dc9f:c.instructions+=3;goto B64dc9f;
case 0x64dca0:c.instructions+=2;goto B64dca0;
case 0x64dca3:c.instructions+=1;goto B64dca3;
case 0x64dca5:goto L64dca5;
case 0x64dca7:goto L64dca7;
case 0x64dcae:goto L64dcae;
case 0x64dcaf:goto L64dcaf;
case 0x64dcb2:c.instructions+=4;goto B64dcb2;
case 0x64dcb3:c.instructions+=3;goto B64dcb3;
case 0x64dcb4:c.instructions+=2;goto B64dcb4;
case 0x64dcb5:c.instructions+=1;goto B64dcb5;
case 0x64dcb8:goto L64dcb8;
case 0x64dcba:c.instructions+=8;goto B64dcba;
case 0x64dcbb:c.instructions+=7;goto B64dcbb;
case 0x64dcbd:c.instructions+=6;goto B64dcbd;
case 0x64dcbe:c.instructions+=5;goto B64dcbe;
case 0x64dcc2:c.instructions+=4;goto B64dcc2;
case 0x64dcc3:c.instructions+=3;goto B64dcc3;
case 0x64dcc6:c.instructions+=2;goto B64dcc6;
case 0x64dcc8:c.instructions+=1;goto B64dcc8;
case 0x64dcce:goto L64dcce;
case 0x64dccf:c.instructions+=3;goto B64dccf;
case 0x64dcd2:c.instructions+=2;goto B64dcd2;
case 0x64dcd4:c.instructions+=1;goto B64dcd4;
case 0x64dcd6:goto L64dcd6;
case 0x64dcdd:c.instructions+=1;goto B64dcdd;
case 0x64dce2:goto L64dce2;
case 0x64dce3:c.instructions+=5;goto B64dce3;
case 0x64dce6:c.instructions+=4;goto B64dce6;
case 0x64dce8:c.instructions+=3;goto B64dce8;
case 0x64dceb:c.instructions+=2;goto B64dceb;
case 0x64dced:c.instructions+=1;goto B64dced;
case 0x64dcf2:goto L64dcf2;
case 0x64dcf4:c.instructions+=1;goto B64dcf4;
case 0x64dcfa:goto L64dcfa;
case 0x64dcfd:c.instructions+=6;goto B64dcfd;
case 0x64dd00:c.instructions+=5;goto B64dd00;
case 0x64dd06:c.instructions+=4;goto B64dd06;
case 0x64dd09:c.instructions+=3;goto B64dd09;
case 0x64dd0c:c.instructions+=2;goto B64dd0c;
case 0x64dd0e:c.instructions+=1;goto B64dd0e;
case 0x64dd14:goto L64dd14;
case 0x64dd17:c.instructions+=1;goto B64dd17;
case 0x64dd19:goto L64dd19;
case 0x64dd1c:c.instructions+=2;goto B64dd1c;
case 0x64dd1e:c.instructions+=1;goto B64dd1e;
case 0x64dd20:goto L64dd20;
case 0x64dd24:c.instructions+=1;goto B64dd24;
case 0x64dd26:goto L64dd26;
case 0x64dd28:c.instructions+=1;goto B64dd28;
case 0x64dd29:goto L64dd29;
case 0x64dd2c:c.instructions+=4;goto B64dd2c;
case 0x64dd30:c.instructions+=3;goto B64dd30;
case 0x64dd33:c.instructions+=2;goto B64dd33;
case 0x64dd35:c.instructions+=1;goto B64dd35;
case 0x64dd37:goto L64dd37;
case 0x64dd39:goto L64dd39;
case 0x64dd3c:c.instructions+=3;goto B64dd3c;
case 0x64dd3e:c.instructions+=2;goto B64dd3e;
case 0x64dd40:c.instructions+=1;goto B64dd40;
case 0x64dd42:goto L64dd42;
case 0x64dd44:c.instructions+=1;goto B64dd44;
case 0x64dd46:goto L64dd46;
case 0x64dd49:c.instructions+=3;goto B64dd49;
case 0x64dd4c:c.instructions+=2;goto B64dd4c;
case 0x64dd4f:c.instructions+=1;goto B64dd4f;
case 0x64dd51:goto L64dd51;
case 0x64dd52:c.instructions+=1;goto B64dd52;
case 0x64dd54:goto L64dd54;
case 0x64dd55:c.instructions+=1;goto B64dd55;
case 0x64dd57:goto L64dd57;
case 0x64dd58:c.instructions+=1;goto B64dd58;
case 0x64dd5a:goto L64dd5a;
case 0x64dd5d:c.instructions+=1;goto B64dd5d;
case 0x64dd5f:goto L64dd5f;
case 0x64dd62:c.instructions+=4;goto B64dd62;
case 0x64dd64:c.instructions+=3;goto B64dd64;
case 0x64dd67:c.instructions+=2;goto B64dd67;
case 0x64dd6a:c.instructions+=1;goto B64dd6a;
case 0x64dd6c:goto L64dd6c;
case 0x64dd72:c.instructions+=1;goto B64dd72;
case 0x64dd74:goto L64dd74;
case 0x64dd77:c.instructions+=1;goto B64dd77;
case 0x64dd79:goto L64dd79;
case 0x64dd7b:c.instructions+=4;goto B64dd7b;
case 0x64dd7e:c.instructions+=3;goto B64dd7e;
case 0x64dd81:c.instructions+=2;goto B64dd81;
case 0x64dd84:c.instructions+=1;goto B64dd84;
case 0x64dd87:goto L64dd87;
case 0x64dd8a:c.instructions+=4;goto B64dd8a;
case 0x64dd8d:c.instructions+=3;goto B64dd8d;
case 0x64dd8e:c.instructions+=2;goto B64dd8e;
case 0x64dd90:c.instructions+=1;goto B64dd90;
case 0x64dd92:goto L64dd92;
case 0x64dd94:goto L64dd94;
case 0x64dd9b:goto L64dd9b;
case 0x64dd9c:goto L64dd9c;
case 0x64dd9d:goto L64dd9d;
case 0x64dda0:c.instructions+=3;goto B64dda0;
case 0x64dda1:c.instructions+=2;goto B64dda1;
case 0x64dda2:c.instructions+=1;goto B64dda2;
case 0x64dda5:goto L64dda5;
case 0x64dda7:c.instructions+=10;goto B64dda7;
case 0x64dda8:c.instructions+=9;goto B64dda8;
case 0x64ddaa:c.instructions+=8;goto B64ddaa;
case 0x64ddab:c.instructions+=7;goto B64ddab;
case 0x64ddac:c.instructions+=6;goto B64ddac;
case 0x64ddae:c.instructions+=5;goto B64ddae;
case 0x64ddb1:c.instructions+=4;goto B64ddb1;
case 0x64ddb2:c.instructions+=3;goto B64ddb2;
case 0x64ddb5:c.instructions+=2;goto B64ddb5;
case 0x64ddb8:c.instructions+=1;goto B64ddb8;
case 0x64ddba:goto L64ddba;
case 0x64ddbc:c.instructions+=1;goto B64ddbc;
case 0x64ddbe:goto L64ddbe;
case 0x64ddc5:c.instructions+=1;goto B64ddc5;
case 0x64ddca:goto L64ddca;
case 0x64ddcb:c.instructions+=5;goto B64ddcb;
case 0x64ddce:c.instructions+=4;goto B64ddce;
case 0x64ddd0:c.instructions+=3;goto B64ddd0;
case 0x64ddd3:c.instructions+=2;goto B64ddd3;
case 0x64ddd5:c.instructions+=1;goto B64ddd5;
case 0x64ddda:goto L64ddda;
case 0x64dddc:c.instructions+=1;goto B64dddc;
case 0x64dde2:goto L64dde2;
case 0x64dde5:c.instructions+=6;goto B64dde5;
case 0x64dde8:c.instructions+=5;goto B64dde8;
case 0x64ddee:c.instructions+=4;goto B64ddee;
case 0x64ddf1:c.instructions+=3;goto B64ddf1;
case 0x64ddf4:c.instructions+=2;goto B64ddf4;
case 0x64ddf6:c.instructions+=1;goto B64ddf6;
case 0x64ddf8:goto L64ddf8;
case 0x64ddfb:c.instructions+=1;goto B64ddfb;
case 0x64ddfd:goto L64ddfd;
case 0x64de00:c.instructions+=2;goto B64de00;
case 0x64de02:c.instructions+=1;goto B64de02;
case 0x64de04:goto L64de04;
case 0x64de08:c.instructions+=1;goto B64de08;
case 0x64de0a:goto L64de0a;
case 0x64de0c:c.instructions+=1;goto B64de0c;
case 0x64de0d:goto L64de0d;
case 0x64de10:c.instructions+=4;goto B64de10;
case 0x64de14:c.instructions+=3;goto B64de14;
case 0x64de17:c.instructions+=2;goto B64de17;
case 0x64de1a:c.instructions+=1;goto B64de1a;
case 0x64de1c:goto L64de1c;
case 0x64de1f:goto L64de1f;
case 0x64de22:c.instructions+=3;goto B64de22;
case 0x64de24:c.instructions+=2;goto B64de24;
case 0x64de27:c.instructions+=1;goto B64de27;
case 0x64de29:goto L64de29;
case 0x64de2b:c.instructions+=1;goto B64de2b;
case 0x64de2d:goto L64de2d;
case 0x64de30:c.instructions+=3;goto B64de30;
case 0x64de33:c.instructions+=2;goto B64de33;
case 0x64de35:c.instructions+=1;goto B64de35;
case 0x64de37:goto L64de37;
case 0x64de38:c.instructions+=1;goto B64de38;
case 0x64de3a:goto L64de3a;
case 0x64de3b:c.instructions+=1;goto B64de3b;
case 0x64de3d:goto L64de3d;
case 0x64de3e:c.instructions+=1;goto B64de3e;
case 0x64de40:goto L64de40;
case 0x64de42:c.instructions+=6;goto B64de42;
case 0x64de45:c.instructions+=5;goto B64de45;
case 0x64de48:c.instructions+=4;goto B64de48;
case 0x64de4b:c.instructions+=3;goto B64de4b;
case 0x64de4e:c.instructions+=2;goto B64de4e;
case 0x64de51:c.instructions+=1;goto B64de51;
case 0x64de53:goto L64de53;
case 0x64de55:c.instructions+=3;goto B64de55;
case 0x64de58:c.instructions+=2;goto B64de58;
case 0x64de5b:c.instructions+=1;goto B64de5b;
case 0x64de5e:goto L64de5e;
case 0x64de61:c.instructions+=3;goto B64de61;
case 0x64de62:c.instructions+=2;goto B64de62;
case 0x64de65:c.instructions+=1;goto B64de65;
case 0x64de67:goto L64de67;
case 0x64de69:goto L64de69;
case 0x64de70:goto L64de70;
case 0x64de71:goto L64de71;
case 0x64de74:c.instructions+=4;goto B64de74;
case 0x64de75:c.instructions+=3;goto B64de75;
case 0x64de76:c.instructions+=2;goto B64de76;
case 0x64de77:c.instructions+=1;goto B64de77;
case 0x64de7a:goto L64de7a;
case 0x64de7c:c.instructions+=8;goto B64de7c;
case 0x64de7d:c.instructions+=7;goto B64de7d;
case 0x64de7f:c.instructions+=6;goto B64de7f;
case 0x64de80:c.instructions+=5;goto B64de80;
case 0x64de81:c.instructions+=4;goto B64de81;
case 0x64de83:c.instructions+=3;goto B64de83;
case 0x64de86:c.instructions+=2;goto B64de86;
case 0x64de89:c.instructions+=1;goto B64de89;
case 0x64de8f:goto L64de8f;
case 0x64de90:c.instructions+=3;goto B64de90;
case 0x64de93:c.instructions+=2;goto B64de93;
case 0x64de95:c.instructions+=1;goto B64de95;
case 0x64de97:goto L64de97;
case 0x64de9e:c.instructions+=1;goto B64de9e;
case 0x64dea3:goto L64dea3;
case 0x64dea4:c.instructions+=5;goto B64dea4;
case 0x64dea7:c.instructions+=4;goto B64dea7;
case 0x64dea9:c.instructions+=3;goto B64dea9;
case 0x64deac:c.instructions+=2;goto B64deac;
case 0x64deae:c.instructions+=1;goto B64deae;
case 0x64deb3:goto L64deb3;
case 0x64deb5:c.instructions+=1;goto B64deb5;
case 0x64debb:goto L64debb;
case 0x64debe:c.instructions+=6;goto B64debe;
case 0x64dec1:c.instructions+=5;goto B64dec1;
case 0x64dec7:c.instructions+=4;goto B64dec7;
case 0x64deca:c.instructions+=3;goto B64deca;
case 0x64decd:c.instructions+=2;goto B64decd;
case 0x64decf:c.instructions+=1;goto B64decf;
case 0x64ded1:goto L64ded1;
case 0x64ded4:c.instructions+=1;goto B64ded4;
case 0x64ded6:goto L64ded6;
case 0x64ded9:c.instructions+=2;goto B64ded9;
case 0x64dedb:c.instructions+=1;goto B64dedb;
case 0x64dedd:goto L64dedd;
case 0x64dee1:c.instructions+=1;goto B64dee1;
case 0x64dee3:goto L64dee3;
case 0x64dee5:c.instructions+=1;goto B64dee5;
case 0x64dee6:goto L64dee6;
case 0x64dee9:c.instructions+=4;goto B64dee9;
case 0x64deed:c.instructions+=3;goto B64deed;
case 0x64def0:c.instructions+=2;goto B64def0;
case 0x64def3:c.instructions+=1;goto B64def3;
case 0x64def5:goto L64def5;
case 0x64def8:goto L64def8;
case 0x64defb:c.instructions+=3;goto B64defb;
case 0x64defd:c.instructions+=2;goto B64defd;
case 0x64df00:c.instructions+=1;goto B64df00;
case 0x64df02:goto L64df02;
case 0x64df04:c.instructions+=1;goto B64df04;
case 0x64df06:goto L64df06;
case 0x64df09:c.instructions+=3;goto B64df09;
case 0x64df0c:c.instructions+=2;goto B64df0c;
case 0x64df0e:c.instructions+=1;goto B64df0e;
case 0x64df10:goto L64df10;
case 0x64df11:c.instructions+=1;goto B64df11;
case 0x64df13:goto L64df13;
case 0x64df14:c.instructions+=1;goto B64df14;
case 0x64df16:goto L64df16;
case 0x64df17:c.instructions+=1;goto B64df17;
case 0x64df19:goto L64df19;
case 0x64df1c:c.instructions+=5;goto B64df1c;
case 0x64df22:c.instructions+=4;goto B64df22;
case 0x64df24:c.instructions+=3;goto B64df24;
case 0x64df26:c.instructions+=2;goto B64df26;
case 0x64df29:c.instructions+=1;goto B64df29;
case 0x64df2b:goto L64df2b;
case 0x64df2d:c.instructions+=2;goto B64df2d;
case 0x64df2e:c.instructions+=1;goto B64df2e;
case 0x64df30:goto L64df30;
case 0x64df32:goto L64df32;
case 0x64df35:c.instructions+=1;goto B64df35;
case 0x64df37:goto L64df37;
case 0x64df39:c.instructions+=3;goto B64df39;
case 0x64df3c:c.instructions+=2;goto B64df3c;
case 0x64df3f:c.instructions+=1;goto B64df3f;
case 0x64df42:goto L64df42;
case 0x64df45:c.instructions+=3;goto B64df45;
case 0x64df46:c.instructions+=2;goto B64df46;
case 0x64df49:c.instructions+=1;goto B64df49;
case 0x64df4b:goto L64df4b;
case 0x64df4d:goto L64df4d;
case 0x64df54:goto L64df54;
case 0x64df55:goto L64df55;
case 0x64df56:goto L64df56;
case 0x64df59:c.instructions+=3;goto B64df59;
case 0x64df5a:c.instructions+=2;goto B64df5a;
case 0x64df5b:c.instructions+=1;goto B64df5b;
case 0x64df5e:goto L64df5e;
case 0x64df60:c.instructions+=10;goto B64df60;
case 0x64df61:c.instructions+=9;goto B64df61;
case 0x64df63:c.instructions+=8;goto B64df63;
case 0x64df64:c.instructions+=7;goto B64df64;
case 0x64df68:c.instructions+=6;goto B64df68;
case 0x64df69:c.instructions+=5;goto B64df69;
case 0x64df6c:c.instructions+=4;goto B64df6c;
case 0x64df6e:c.instructions+=3;goto B64df6e;
case 0x64df6f:c.instructions+=2;goto B64df6f;
case 0x64df72:c.instructions+=1;goto B64df72;
case 0x64df74:goto L64df74;
case 0x64df76:c.instructions+=1;goto B64df76;
case 0x64df78:goto L64df78;
case 0x64df7f:c.instructions+=1;goto B64df7f;
case 0x64df84:goto L64df84;
case 0x64df85:c.instructions+=5;goto B64df85;
case 0x64df88:c.instructions+=4;goto B64df88;
case 0x64df8a:c.instructions+=3;goto B64df8a;
case 0x64df8d:c.instructions+=2;goto B64df8d;
case 0x64df8f:c.instructions+=1;goto B64df8f;
case 0x64df94:goto L64df94;
case 0x64df96:c.instructions+=1;goto B64df96;
case 0x64df98:goto L64df98;
case 0x64df9b:c.instructions+=6;goto B64df9b;
case 0x64df9e:c.instructions+=5;goto B64df9e;
case 0x64dfa4:c.instructions+=4;goto B64dfa4;
case 0x64dfa7:c.instructions+=3;goto B64dfa7;
case 0x64dfaa:c.instructions+=2;goto B64dfaa;
case 0x64dfac:c.instructions+=1;goto B64dfac;
case 0x64dfae:goto L64dfae;
case 0x64dfb1:c.instructions+=1;goto B64dfb1;
case 0x64dfb3:goto L64dfb3;
case 0x64dfb6:c.instructions+=2;goto B64dfb6;
case 0x64dfb8:c.instructions+=1;goto B64dfb8;
case 0x64dfba:goto L64dfba;
case 0x64dfbe:c.instructions+=1;goto B64dfbe;
case 0x64dfc0:goto L64dfc0;
case 0x64dfc2:c.instructions+=1;goto B64dfc2;
case 0x64dfc3:goto L64dfc3;
case 0x64dfc6:c.instructions+=4;goto B64dfc6;
case 0x64dfca:c.instructions+=3;goto B64dfca;
case 0x64dfcd:c.instructions+=2;goto B64dfcd;
case 0x64dfcf:c.instructions+=1;goto B64dfcf;
case 0x64dfd1:goto L64dfd1;
case 0x64dfd3:goto L64dfd3;
case 0x64dfd6:c.instructions+=3;goto B64dfd6;
case 0x64dfd8:c.instructions+=2;goto B64dfd8;
case 0x64dfda:c.instructions+=1;goto B64dfda;
case 0x64dfdc:goto L64dfdc;
case 0x64dfde:c.instructions+=1;goto B64dfde;
case 0x64dfe0:goto L64dfe0;
case 0x64dfe3:c.instructions+=3;goto B64dfe3;
case 0x64dfe6:c.instructions+=2;goto B64dfe6;
case 0x64dfe9:c.instructions+=1;goto B64dfe9;
case 0x64dfeb:goto L64dfeb;
case 0x64dfec:c.instructions+=1;goto B64dfec;
case 0x64dfee:goto L64dfee;
case 0x64dfef:c.instructions+=1;goto B64dfef;
case 0x64dff1:goto L64dff1;
case 0x64dff2:c.instructions+=1;goto B64dff2;
case 0x64dff4:goto L64dff4;
case 0x64dff7:c.instructions+=2;goto B64dff7;
case 0x64dffa:c.instructions+=1;goto B64dffa;
case 0x64dffc:goto L64dffc;
case 0x64dfff:c.instructions+=1;goto B64dfff;
default:missing_instruction(c.pc);}
B64d001:L64d001:{c.instructions+=5;NFSU2_TR(0x64d001);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64d004:{NFSU2_TR(0x64d004);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64d007:{NFSU2_TR(0x64d007);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64d00b:{NFSU2_TR(0x64d00b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B64d00e:{NFSU2_TR(0x64d00e);
if(r1(R+512)){TAIL_STATIC(0x64cfc9u,64c);}
}
B64d010:L64d010:{c.instructions+=2;NFSU2_TR(0x64d010);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B64d013:{NFSU2_TR(0x64d013);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64d029;}}
}
B64d015:L64d015:{c.instructions+=2;NFSU2_TR(0x64d015);
__builtin_memmove((R+0),(R+12),4);
}
B64d017:{NFSU2_TR(0x64d017);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B64d01a:L64d01a:{c.instructions+=2;NFSU2_TR(0x64d01a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64d01c:{NFSU2_TR(0x64d01c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64d026;}}
}
B64d01e:L64d01e:{c.instructions+=1;NFSU2_TR(0x64d01e);
__builtin_memmove((R+4),(R+8),4);
}
B64d020:L64d020:{c.instructions+=3;NFSU2_TR(0x64d020);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64d021:{NFSU2_TR(0x64d021);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64d024:{NFSU2_TR(0x64d024);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64d020u);}goto L64d020;}}
}
B64d026:L64d026:{c.instructions+=2;NFSU2_TR(0x64d026);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64d027:{NFSU2_TR(0x64d027);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64d01au);}goto L64d01a;}}
}
B64d029:L64d029:{c.instructions+=4;NFSU2_TR(0x64d029);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64d02c:{NFSU2_TR(0x64d02c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64d030:{NFSU2_TR(0x64d030);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B64d034:{NFSU2_TR(0x64d034);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x64cfb9u,64c);}
}
B64d036:L64d036:{c.instructions+=6;NFSU2_TR(0x64d036);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64d039:{NFSU2_TR(0x64d039);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64d03a:{NFSU2_TR(0x64d03a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64d03b:{NFSU2_TR(0x64d03b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64d03c:{NFSU2_TR(0x64d03c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64d03d:{NFSU2_TR(0x64d03d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64d040:L64d040:{c.instructions+=7;NFSU2_TR(0x64d040);
__builtin_memmove((R+28),(R+28),4);
}
B64d042:{NFSU2_TR(0x64d042);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d043:{NFSU2_TR(0x64d043);
__builtin_memmove((R+20),(R+16),4);
}
B64d045:{NFSU2_TR(0x64d045);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d046:{NFSU2_TR(0x64d046);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64d049:{NFSU2_TR(0x64d049);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64d04b:{NFSU2_TR(0x64d04b);
if(r1(R+518)){{goto L64d05a;}}
}
B64d04d:L64d04d:{c.instructions+=2;NFSU2_TR(0x64d04d);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
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
B64d051:{NFSU2_TR(0x64d051);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d05a;}}
}
B64d053:L64d053:{c.instructions+=2;NFSU2_TR(0x64d053);
w4(R+0,u32(0x8876086cull));
}
B64d058:{NFSU2_TR(0x64d058);
{goto L64d0bc;}
}
B64d05a:L64d05a:{c.instructions+=6;NFSU2_TR(0x64d05a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d05b:{NFSU2_TR(0x64d05b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64d05e:{NFSU2_TR(0x64d05e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d060:{NFSU2_TR(0x64d060);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d063:{NFSU2_TR(0x64d063);
__builtin_memmove((R+4),(R+24),4);
}
B64d065:{NFSU2_TR(0x64d065);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64d06aull));
TAIL_STATIC(0x64c399u,64c);
}
B64d06a:L64d06a:{c.instructions+=2;NFSU2_TR(0x64d06a);
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
B64d06c:{NFSU2_TR(0x64d06c);
if(r1(R+518)){{goto L64d0b6;}}
}
B64d06e:L64d06e:{c.instructions+=7;NFSU2_TR(0x64d06e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d071:{NFSU2_TR(0x64d071);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d074:{NFSU2_TR(0x64d074);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64d07a:{NFSU2_TR(0x64d07a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64d07d:{NFSU2_TR(0x64d07d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64d080:{NFSU2_TR(0x64d080);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B64d082:{NFSU2_TR(0x64d082);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64d0b6;}}
}
B64d084:L64d084:{c.instructions+=2;NFSU2_TR(0x64d084);
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
B64d086:{NFSU2_TR(0x64d086);
if(r1(R+518)){{goto L64d0b6;}}
}
B64d088:L64d088:{c.instructions+=2;NFSU2_TR(0x64d088);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
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
B64d08c:{NFSU2_TR(0x64d08c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d0b6;}}
}
B64d08e:L64d08e:{c.instructions+=4;NFSU2_TR(0x64d08e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64d091:{NFSU2_TR(0x64d091);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B64d092:{NFSU2_TR(0x64d092);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B64d093:{NFSU2_TR(0x64d093);
if(r1(R+518)){{goto L64d0a7;}}
}
B64d095:L64d095:{c.instructions+=2;NFSU2_TR(0x64d095);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64d096:{NFSU2_TR(0x64d096);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d0b6;}}
}
B64d098:L64d098:{c.instructions+=5;NFSU2_TR(0x64d098);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d099:{NFSU2_TR(0x64d099);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d09c:{NFSU2_TR(0x64d09c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d09f:{NFSU2_TR(0x64d09f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d0a0:{NFSU2_TR(0x64d0a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64d0a5ull));
TAIL_STATIC(0x64ab44u,64a);
}
B64d0a5:L64d0a5:{c.instructions+=1;NFSU2_TR(0x64d0a5);
{goto L64d0bb;}
}
B64d0a7:L64d0a7:{c.instructions+=5;NFSU2_TR(0x64d0a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d0a8:{NFSU2_TR(0x64d0a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d0ab:{NFSU2_TR(0x64d0ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d0ae:{NFSU2_TR(0x64d0ae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d0af:{NFSU2_TR(0x64d0af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64d0b4ull));
TAIL_STATIC(0x64a993u,64a);
}
B64d0b4:L64d0b4:{c.instructions+=1;NFSU2_TR(0x64d0b4);
{goto L64d0bb;}
}
B64d0b6:L64d0b6:{c.instructions+=1;NFSU2_TR(0x64d0b6);
w4(R+0,u32(0x8876086cull));
}
B64d0bb:L64d0bb:{c.instructions+=1;NFSU2_TR(0x64d0bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64d0bc:L64d0bc:{c.instructions+=3;NFSU2_TR(0x64d0bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64d0bd:{NFSU2_TR(0x64d0bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64d0be:{NFSU2_TR(0x64d0be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64d0c1:L64d0c1:{c.instructions+=7;NFSU2_TR(0x64d0c1);
__builtin_memmove((R+28),(R+28),4);
}
B64d0c3:{NFSU2_TR(0x64d0c3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d0c4:{NFSU2_TR(0x64d0c4);
__builtin_memmove((R+20),(R+16),4);
}
B64d0c6:{NFSU2_TR(0x64d0c6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d0c7:{NFSU2_TR(0x64d0c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64d0ca:{NFSU2_TR(0x64d0ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64d0cc:{NFSU2_TR(0x64d0cc);
if(r1(R+518)){{goto L64d0db;}}
}
B64d0ce:L64d0ce:{c.instructions+=2;NFSU2_TR(0x64d0ce);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
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
B64d0d2:{NFSU2_TR(0x64d0d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d0db;}}
}
B64d0d4:L64d0d4:{c.instructions+=2;NFSU2_TR(0x64d0d4);
w4(R+0,u32(0x8876086cull));
}
B64d0d9:{NFSU2_TR(0x64d0d9);
{goto L64d13d;}
}
B64d0db:L64d0db:{c.instructions+=6;NFSU2_TR(0x64d0db);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d0dc:{NFSU2_TR(0x64d0dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64d0df:{NFSU2_TR(0x64d0df);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d0e1:{NFSU2_TR(0x64d0e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d0e4:{NFSU2_TR(0x64d0e4);
__builtin_memmove((R+4),(R+24),4);
}
B64d0e6:{NFSU2_TR(0x64d0e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64d0ebull));
TAIL_STATIC(0x64c399u,64c);
}
B64d0eb:L64d0eb:{c.instructions+=2;NFSU2_TR(0x64d0eb);
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
B64d0ed:{NFSU2_TR(0x64d0ed);
if(r1(R+518)){{goto L64d137;}}
}
B64d0ef:L64d0ef:{c.instructions+=7;NFSU2_TR(0x64d0ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d0f2:{NFSU2_TR(0x64d0f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d0f5:{NFSU2_TR(0x64d0f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64d0fb:{NFSU2_TR(0x64d0fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64d0fe:{NFSU2_TR(0x64d0fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64d101:{NFSU2_TR(0x64d101);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B64d103:{NFSU2_TR(0x64d103);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64d137;}}
}
B64d105:L64d105:{c.instructions+=2;NFSU2_TR(0x64d105);
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
B64d107:{NFSU2_TR(0x64d107);
if(r1(R+518)){{goto L64d137;}}
}
B64d109:L64d109:{c.instructions+=2;NFSU2_TR(0x64d109);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
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
B64d10d:{NFSU2_TR(0x64d10d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d137;}}
}
B64d10f:L64d10f:{c.instructions+=4;NFSU2_TR(0x64d10f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64d112:{NFSU2_TR(0x64d112);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B64d113:{NFSU2_TR(0x64d113);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B64d114:{NFSU2_TR(0x64d114);
if(r1(R+518)){{goto L64d128;}}
}
B64d116:L64d116:{c.instructions+=2;NFSU2_TR(0x64d116);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64d117:{NFSU2_TR(0x64d117);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d137;}}
}
B64d119:L64d119:{c.instructions+=5;NFSU2_TR(0x64d119);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d11a:{NFSU2_TR(0x64d11a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d11d:{NFSU2_TR(0x64d11d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d120:{NFSU2_TR(0x64d120);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d121:{NFSU2_TR(0x64d121);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64d126ull));
TAIL_STATIC(0x64a993u,64a);
}
B64d126:L64d126:{c.instructions+=1;NFSU2_TR(0x64d126);
{goto L64d13c;}
}
B64d128:L64d128:{c.instructions+=5;NFSU2_TR(0x64d128);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d129:{NFSU2_TR(0x64d129);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d12c:{NFSU2_TR(0x64d12c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d12f:{NFSU2_TR(0x64d12f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d130:{NFSU2_TR(0x64d130);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64d135ull));
TAIL_STATIC(0x64ab44u,64a);
}
B64d135:L64d135:{c.instructions+=1;NFSU2_TR(0x64d135);
{goto L64d13c;}
}
B64d137:L64d137:{c.instructions+=1;NFSU2_TR(0x64d137);
w4(R+0,u32(0x8876086cull));
}
B64d13c:L64d13c:{c.instructions+=1;NFSU2_TR(0x64d13c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64d13d:L64d13d:{c.instructions+=3;NFSU2_TR(0x64d13d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64d13e:{NFSU2_TR(0x64d13e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64d13f:{NFSU2_TR(0x64d13f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64d142:L64d142:{c.instructions+=8;NFSU2_TR(0x64d142);
__builtin_memmove((R+28),(R+28),4);
}
B64d144:{NFSU2_TR(0x64d144);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d145:{NFSU2_TR(0x64d145);
__builtin_memmove((R+20),(R+16),4);
}
B64d147:{NFSU2_TR(0x64d147);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d148:{NFSU2_TR(0x64d148);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64d14b:{NFSU2_TR(0x64d14b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64d14d:{NFSU2_TR(0x64d14d);
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
B64d14f:{NFSU2_TR(0x64d14f);
if(r1(R+518)){{goto L64d1bf;}}
}
B64d151:L64d151:{c.instructions+=2;NFSU2_TR(0x64d151);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
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
B64d154:{NFSU2_TR(0x64d154);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d15d;}}
}
B64d156:L64d156:{c.instructions+=2;NFSU2_TR(0x64d156);
w4(R+0,u32(0x8876086cull));
}
B64d15b:{NFSU2_TR(0x64d15b);
{goto L64d1bf;}
}
B64d15d:L64d15d:{c.instructions+=6;NFSU2_TR(0x64d15d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d15e:{NFSU2_TR(0x64d15e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64d161:{NFSU2_TR(0x64d161);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d163:{NFSU2_TR(0x64d163);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d166:{NFSU2_TR(0x64d166);
__builtin_memmove((R+4),(R+24),4);
}
B64d168:{NFSU2_TR(0x64d168);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64d16dull));
TAIL_STATIC(0x64c399u,64c);
}
B64d16d:L64d16d:{c.instructions+=2;NFSU2_TR(0x64d16d);
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
B64d16f:{NFSU2_TR(0x64d16f);
if(r1(R+518)){{goto L64d1b9;}}
}
B64d171:L64d171:{c.instructions+=7;NFSU2_TR(0x64d171);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d174:{NFSU2_TR(0x64d174);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d177:{NFSU2_TR(0x64d177);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64d17d:{NFSU2_TR(0x64d17d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64d180:{NFSU2_TR(0x64d180);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64d183:{NFSU2_TR(0x64d183);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B64d185:{NFSU2_TR(0x64d185);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64d1b9;}}
}
B64d187:L64d187:{c.instructions+=2;NFSU2_TR(0x64d187);
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
B64d189:{NFSU2_TR(0x64d189);
if(r1(R+518)){{goto L64d1b9;}}
}
B64d18b:L64d18b:{c.instructions+=2;NFSU2_TR(0x64d18b);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
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
B64d18f:{NFSU2_TR(0x64d18f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d1b9;}}
}
B64d191:L64d191:{c.instructions+=4;NFSU2_TR(0x64d191);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64d194:{NFSU2_TR(0x64d194);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B64d195:{NFSU2_TR(0x64d195);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B64d196:{NFSU2_TR(0x64d196);
if(r1(R+518)){{goto L64d1aa;}}
}
B64d198:L64d198:{c.instructions+=2;NFSU2_TR(0x64d198);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64d199:{NFSU2_TR(0x64d199);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d1b9;}}
}
B64d19b:L64d19b:{c.instructions+=5;NFSU2_TR(0x64d19b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d19c:{NFSU2_TR(0x64d19c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d19f:{NFSU2_TR(0x64d19f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d1a2:{NFSU2_TR(0x64d1a2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d1a3:{NFSU2_TR(0x64d1a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64d1a8ull));
TAIL_STATIC(0x64ac15u,64a);
}
B64d1a8:L64d1a8:{c.instructions+=1;NFSU2_TR(0x64d1a8);
{goto L64d1be;}
}
B64d1aa:L64d1aa:{c.instructions+=5;NFSU2_TR(0x64d1aa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d1ab:{NFSU2_TR(0x64d1ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d1ae:{NFSU2_TR(0x64d1ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d1b1:{NFSU2_TR(0x64d1b1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d1b2:{NFSU2_TR(0x64d1b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64d1b7ull));
TAIL_STATIC(0x64aa64u,64a);
}
B64d1b7:L64d1b7:{c.instructions+=1;NFSU2_TR(0x64d1b7);
{goto L64d1be;}
}
B64d1b9:L64d1b9:{c.instructions+=1;NFSU2_TR(0x64d1b9);
w4(R+0,u32(0x8876086cull));
}
B64d1be:L64d1be:{c.instructions+=1;NFSU2_TR(0x64d1be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64d1bf:L64d1bf:{c.instructions+=3;NFSU2_TR(0x64d1bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64d1c0:{NFSU2_TR(0x64d1c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64d1c1:{NFSU2_TR(0x64d1c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64d1c4:L64d1c4:{c.instructions+=8;NFSU2_TR(0x64d1c4);
__builtin_memmove((R+28),(R+28),4);
}
B64d1c6:{NFSU2_TR(0x64d1c6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d1c7:{NFSU2_TR(0x64d1c7);
__builtin_memmove((R+20),(R+16),4);
}
B64d1c9:{NFSU2_TR(0x64d1c9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d1ca:{NFSU2_TR(0x64d1ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64d1cd:{NFSU2_TR(0x64d1cd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64d1cf:{NFSU2_TR(0x64d1cf);
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
B64d1d1:{NFSU2_TR(0x64d1d1);
if(r1(R+518)){{goto L64d241;}}
}
B64d1d3:L64d1d3:{c.instructions+=2;NFSU2_TR(0x64d1d3);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
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
B64d1d6:{NFSU2_TR(0x64d1d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d1df;}}
}
B64d1d8:L64d1d8:{c.instructions+=2;NFSU2_TR(0x64d1d8);
w4(R+0,u32(0x8876086cull));
}
B64d1dd:{NFSU2_TR(0x64d1dd);
{goto L64d241;}
}
B64d1df:L64d1df:{c.instructions+=6;NFSU2_TR(0x64d1df);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d1e0:{NFSU2_TR(0x64d1e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64d1e3:{NFSU2_TR(0x64d1e3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d1e5:{NFSU2_TR(0x64d1e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d1e8:{NFSU2_TR(0x64d1e8);
__builtin_memmove((R+4),(R+24),4);
}
B64d1ea:{NFSU2_TR(0x64d1ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64d1efull));
TAIL_STATIC(0x64c399u,64c);
}
B64d1ef:L64d1ef:{c.instructions+=2;NFSU2_TR(0x64d1ef);
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
B64d1f1:{NFSU2_TR(0x64d1f1);
if(r1(R+518)){{goto L64d23b;}}
}
B64d1f3:L64d1f3:{c.instructions+=7;NFSU2_TR(0x64d1f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d1f6:{NFSU2_TR(0x64d1f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d1f9:{NFSU2_TR(0x64d1f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64d1ff:{NFSU2_TR(0x64d1ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64d202:{NFSU2_TR(0x64d202);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64d205:{NFSU2_TR(0x64d205);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B64d207:{NFSU2_TR(0x64d207);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64d23b;}}
}
B64d209:L64d209:{c.instructions+=2;NFSU2_TR(0x64d209);
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
B64d20b:{NFSU2_TR(0x64d20b);
if(r1(R+518)){{goto L64d23b;}}
}
B64d20d:L64d20d:{c.instructions+=2;NFSU2_TR(0x64d20d);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
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
B64d211:{NFSU2_TR(0x64d211);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d23b;}}
}
B64d213:L64d213:{c.instructions+=4;NFSU2_TR(0x64d213);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64d216:{NFSU2_TR(0x64d216);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B64d217:{NFSU2_TR(0x64d217);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B64d218:{NFSU2_TR(0x64d218);
if(r1(R+518)){{goto L64d22c;}}
}
B64d21a:L64d21a:{c.instructions+=2;NFSU2_TR(0x64d21a);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64d21b:{NFSU2_TR(0x64d21b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d23b;}}
}
B64d21d:L64d21d:{c.instructions+=5;NFSU2_TR(0x64d21d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d21e:{NFSU2_TR(0x64d21e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d221:{NFSU2_TR(0x64d221);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d224:{NFSU2_TR(0x64d224);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d225:{NFSU2_TR(0x64d225);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64d22aull));
TAIL_STATIC(0x64aa64u,64a);
}
B64d22a:L64d22a:{c.instructions+=1;NFSU2_TR(0x64d22a);
{goto L64d240;}
}
B64d22c:L64d22c:{c.instructions+=5;NFSU2_TR(0x64d22c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d22d:{NFSU2_TR(0x64d22d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d230:{NFSU2_TR(0x64d230);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d233:{NFSU2_TR(0x64d233);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d234:{NFSU2_TR(0x64d234);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64d239ull));
TAIL_STATIC(0x64ac15u,64a);
}
B64d239:L64d239:{c.instructions+=1;NFSU2_TR(0x64d239);
{goto L64d240;}
}
B64d23b:L64d23b:{c.instructions+=1;NFSU2_TR(0x64d23b);
w4(R+0,u32(0x8876086cull));
}
B64d240:L64d240:{c.instructions+=1;NFSU2_TR(0x64d240);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64d241:L64d241:{c.instructions+=3;NFSU2_TR(0x64d241);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64d242:{NFSU2_TR(0x64d242);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64d243:{NFSU2_TR(0x64d243);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64d246:L64d246:{c.instructions+=7;NFSU2_TR(0x64d246);
__builtin_memmove((R+28),(R+28),4);
}
B64d248:{NFSU2_TR(0x64d248);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d249:{NFSU2_TR(0x64d249);
__builtin_memmove((R+20),(R+16),4);
}
B64d24b:{NFSU2_TR(0x64d24b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d24c:{NFSU2_TR(0x64d24c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64d24f:{NFSU2_TR(0x64d24f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64d251:{NFSU2_TR(0x64d251);
if(r1(R+518)){{goto L64d260;}}
}
B64d253:L64d253:{c.instructions+=2;NFSU2_TR(0x64d253);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
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
B64d257:{NFSU2_TR(0x64d257);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d260;}}
}
B64d259:L64d259:{c.instructions+=2;NFSU2_TR(0x64d259);
w4(R+0,u32(0x8876086cull));
}
B64d25e:{NFSU2_TR(0x64d25e);
{goto L64d2c2;}
}
B64d260:L64d260:{c.instructions+=6;NFSU2_TR(0x64d260);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d261:{NFSU2_TR(0x64d261);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64d264:{NFSU2_TR(0x64d264);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d266:{NFSU2_TR(0x64d266);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d269:{NFSU2_TR(0x64d269);
__builtin_memmove((R+4),(R+24),4);
}
B64d26b:{NFSU2_TR(0x64d26b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64d270ull));
TAIL_STATIC(0x64c399u,64c);
}
B64d270:L64d270:{c.instructions+=2;NFSU2_TR(0x64d270);
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
B64d272:{NFSU2_TR(0x64d272);
if(r1(R+518)){{goto L64d2bc;}}
}
B64d274:L64d274:{c.instructions+=7;NFSU2_TR(0x64d274);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d277:{NFSU2_TR(0x64d277);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d27a:{NFSU2_TR(0x64d27a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64d280:{NFSU2_TR(0x64d280);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64d283:{NFSU2_TR(0x64d283);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64d286:{NFSU2_TR(0x64d286);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B64d288:{NFSU2_TR(0x64d288);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64d2bc;}}
}
B64d28a:L64d28a:{c.instructions+=2;NFSU2_TR(0x64d28a);
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
B64d28c:{NFSU2_TR(0x64d28c);
if(r1(R+518)){{goto L64d2bc;}}
}
B64d28e:L64d28e:{c.instructions+=2;NFSU2_TR(0x64d28e);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
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
B64d292:{NFSU2_TR(0x64d292);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d2bc;}}
}
B64d294:L64d294:{c.instructions+=4;NFSU2_TR(0x64d294);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64d297:{NFSU2_TR(0x64d297);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B64d298:{NFSU2_TR(0x64d298);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B64d299:{NFSU2_TR(0x64d299);
if(r1(R+518)){{goto L64d2ad;}}
}
B64d29b:L64d29b:{c.instructions+=2;NFSU2_TR(0x64d29b);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64d29c:{NFSU2_TR(0x64d29c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d2bc;}}
}
B64d29e:L64d29e:{c.instructions+=5;NFSU2_TR(0x64d29e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d29f:{NFSU2_TR(0x64d29f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d2a2:{NFSU2_TR(0x64d2a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d2a5:{NFSU2_TR(0x64d2a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d2a6:{NFSU2_TR(0x64d2a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64d2abull));
TAIL_STATIC(0x64aed3u,64a);
}
B64d2ab:L64d2ab:{c.instructions+=1;NFSU2_TR(0x64d2ab);
{goto L64d2c1;}
}
B64d2ad:L64d2ad:{c.instructions+=5;NFSU2_TR(0x64d2ad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d2ae:{NFSU2_TR(0x64d2ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d2b1:{NFSU2_TR(0x64d2b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d2b4:{NFSU2_TR(0x64d2b4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d2b5:{NFSU2_TR(0x64d2b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64d2baull));
TAIL_STATIC(0x64acf5u,64a);
}
B64d2ba:L64d2ba:{c.instructions+=1;NFSU2_TR(0x64d2ba);
{goto L64d2c1;}
}
B64d2bc:L64d2bc:{c.instructions+=1;NFSU2_TR(0x64d2bc);
w4(R+0,u32(0x8876086cull));
}
B64d2c1:L64d2c1:{c.instructions+=1;NFSU2_TR(0x64d2c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64d2c2:L64d2c2:{c.instructions+=3;NFSU2_TR(0x64d2c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64d2c3:{NFSU2_TR(0x64d2c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64d2c4:{NFSU2_TR(0x64d2c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64d2c7:L64d2c7:{c.instructions+=7;NFSU2_TR(0x64d2c7);
__builtin_memmove((R+28),(R+28),4);
}
B64d2c9:{NFSU2_TR(0x64d2c9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d2ca:{NFSU2_TR(0x64d2ca);
__builtin_memmove((R+20),(R+16),4);
}
B64d2cc:{NFSU2_TR(0x64d2cc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d2cd:{NFSU2_TR(0x64d2cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64d2d0:{NFSU2_TR(0x64d2d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64d2d2:{NFSU2_TR(0x64d2d2);
if(r1(R+518)){{goto L64d2e1;}}
}
B64d2d4:L64d2d4:{c.instructions+=2;NFSU2_TR(0x64d2d4);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
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
B64d2d8:{NFSU2_TR(0x64d2d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d2e1;}}
}
B64d2da:L64d2da:{c.instructions+=2;NFSU2_TR(0x64d2da);
w4(R+0,u32(0x8876086cull));
}
B64d2df:{NFSU2_TR(0x64d2df);
{goto L64d343;}
}
B64d2e1:L64d2e1:{c.instructions+=6;NFSU2_TR(0x64d2e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d2e2:{NFSU2_TR(0x64d2e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64d2e5:{NFSU2_TR(0x64d2e5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d2e7:{NFSU2_TR(0x64d2e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d2ea:{NFSU2_TR(0x64d2ea);
__builtin_memmove((R+4),(R+24),4);
}
B64d2ec:{NFSU2_TR(0x64d2ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64d2f1ull));
TAIL_STATIC(0x64c399u,64c);
}
B64d2f1:L64d2f1:{c.instructions+=2;NFSU2_TR(0x64d2f1);
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
B64d2f3:{NFSU2_TR(0x64d2f3);
if(r1(R+518)){{goto L64d33d;}}
}
B64d2f5:L64d2f5:{c.instructions+=7;NFSU2_TR(0x64d2f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d2f8:{NFSU2_TR(0x64d2f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d2fb:{NFSU2_TR(0x64d2fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64d301:{NFSU2_TR(0x64d301);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64d304:{NFSU2_TR(0x64d304);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64d307:{NFSU2_TR(0x64d307);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B64d309:{NFSU2_TR(0x64d309);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64d33d;}}
}
B64d30b:L64d30b:{c.instructions+=2;NFSU2_TR(0x64d30b);
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
B64d30d:{NFSU2_TR(0x64d30d);
if(r1(R+518)){{goto L64d33d;}}
}
B64d30f:L64d30f:{c.instructions+=2;NFSU2_TR(0x64d30f);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
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
B64d313:{NFSU2_TR(0x64d313);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d33d;}}
}
B64d315:L64d315:{c.instructions+=4;NFSU2_TR(0x64d315);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64d318:{NFSU2_TR(0x64d318);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B64d319:{NFSU2_TR(0x64d319);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B64d31a:{NFSU2_TR(0x64d31a);
if(r1(R+518)){{goto L64d32e;}}
}
B64d31c:L64d31c:{c.instructions+=2;NFSU2_TR(0x64d31c);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64d31d:{NFSU2_TR(0x64d31d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d33d;}}
}
B64d31f:L64d31f:{c.instructions+=5;NFSU2_TR(0x64d31f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d320:{NFSU2_TR(0x64d320);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d323:{NFSU2_TR(0x64d323);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d326:{NFSU2_TR(0x64d326);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d327:{NFSU2_TR(0x64d327);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64d32cull));
TAIL_STATIC(0x64acf5u,64a);
}
B64d32c:L64d32c:{c.instructions+=1;NFSU2_TR(0x64d32c);
{goto L64d342;}
}
B64d32e:L64d32e:{c.instructions+=5;NFSU2_TR(0x64d32e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d32f:{NFSU2_TR(0x64d32f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d332:{NFSU2_TR(0x64d332);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d335:{NFSU2_TR(0x64d335);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d336:{NFSU2_TR(0x64d336);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64d33bull));
TAIL_STATIC(0x64aed3u,64a);
}
B64d33b:L64d33b:{c.instructions+=1;NFSU2_TR(0x64d33b);
{goto L64d342;}
}
B64d33d:L64d33d:{c.instructions+=1;NFSU2_TR(0x64d33d);
w4(R+0,u32(0x8876086cull));
}
B64d342:L64d342:{c.instructions+=1;NFSU2_TR(0x64d342);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64d343:L64d343:{c.instructions+=3;NFSU2_TR(0x64d343);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64d344:{NFSU2_TR(0x64d344);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64d345:{NFSU2_TR(0x64d345);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64d348:L64d348:{c.instructions+=8;NFSU2_TR(0x64d348);
__builtin_memmove((R+28),(R+28),4);
}
B64d34a:{NFSU2_TR(0x64d34a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d34b:{NFSU2_TR(0x64d34b);
__builtin_memmove((R+20),(R+16),4);
}
B64d34d:{NFSU2_TR(0x64d34d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d34e:{NFSU2_TR(0x64d34e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64d351:{NFSU2_TR(0x64d351);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64d353:{NFSU2_TR(0x64d353);
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
B64d355:{NFSU2_TR(0x64d355);
if(r1(R+518)){{goto L64d3c5;}}
}
B64d357:L64d357:{c.instructions+=2;NFSU2_TR(0x64d357);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
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
B64d35a:{NFSU2_TR(0x64d35a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d363;}}
}
B64d35c:L64d35c:{c.instructions+=2;NFSU2_TR(0x64d35c);
w4(R+0,u32(0x8876086cull));
}
B64d361:{NFSU2_TR(0x64d361);
{goto L64d3c5;}
}
B64d363:L64d363:{c.instructions+=6;NFSU2_TR(0x64d363);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d364:{NFSU2_TR(0x64d364);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64d367:{NFSU2_TR(0x64d367);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d369:{NFSU2_TR(0x64d369);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d36c:{NFSU2_TR(0x64d36c);
__builtin_memmove((R+4),(R+24),4);
}
B64d36e:{NFSU2_TR(0x64d36e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64d373ull));
TAIL_STATIC(0x64c399u,64c);
}
B64d373:L64d373:{c.instructions+=2;NFSU2_TR(0x64d373);
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
B64d375:{NFSU2_TR(0x64d375);
if(r1(R+518)){{goto L64d3bf;}}
}
B64d377:L64d377:{c.instructions+=7;NFSU2_TR(0x64d377);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d37a:{NFSU2_TR(0x64d37a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d37d:{NFSU2_TR(0x64d37d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64d383:{NFSU2_TR(0x64d383);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64d386:{NFSU2_TR(0x64d386);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64d389:{NFSU2_TR(0x64d389);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B64d38b:{NFSU2_TR(0x64d38b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64d3bf;}}
}
B64d38d:L64d38d:{c.instructions+=2;NFSU2_TR(0x64d38d);
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
B64d38f:{NFSU2_TR(0x64d38f);
if(r1(R+518)){{goto L64d3bf;}}
}
B64d391:L64d391:{c.instructions+=2;NFSU2_TR(0x64d391);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
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
B64d395:{NFSU2_TR(0x64d395);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d3bf;}}
}
B64d397:L64d397:{c.instructions+=4;NFSU2_TR(0x64d397);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64d39a:{NFSU2_TR(0x64d39a);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B64d39b:{NFSU2_TR(0x64d39b);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B64d39c:{NFSU2_TR(0x64d39c);
if(r1(R+518)){{goto L64d3b0;}}
}
B64d39e:L64d39e:{c.instructions+=2;NFSU2_TR(0x64d39e);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64d39f:{NFSU2_TR(0x64d39f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d3bf;}}
}
B64d3a1:L64d3a1:{c.instructions+=5;NFSU2_TR(0x64d3a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d3a2:{NFSU2_TR(0x64d3a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d3a5:{NFSU2_TR(0x64d3a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d3a8:{NFSU2_TR(0x64d3a8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d3a9:{NFSU2_TR(0x64d3a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64d3aeull));
TAIL_STATIC(0x64afc1u,64a);
}
B64d3ae:L64d3ae:{c.instructions+=1;NFSU2_TR(0x64d3ae);
{goto L64d3c4;}
}
B64d3b0:L64d3b0:{c.instructions+=5;NFSU2_TR(0x64d3b0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d3b1:{NFSU2_TR(0x64d3b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d3b4:{NFSU2_TR(0x64d3b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d3b7:{NFSU2_TR(0x64d3b7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d3b8:{NFSU2_TR(0x64d3b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64d3bdull));
TAIL_STATIC(0x64ade3u,64a);
}
B64d3bd:L64d3bd:{c.instructions+=1;NFSU2_TR(0x64d3bd);
{goto L64d3c4;}
}
B64d3bf:L64d3bf:{c.instructions+=1;NFSU2_TR(0x64d3bf);
w4(R+0,u32(0x8876086cull));
}
B64d3c4:L64d3c4:{c.instructions+=1;NFSU2_TR(0x64d3c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64d3c5:L64d3c5:{c.instructions+=3;NFSU2_TR(0x64d3c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64d3c6:{NFSU2_TR(0x64d3c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64d3c7:{NFSU2_TR(0x64d3c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64d3ca:L64d3ca:{c.instructions+=8;NFSU2_TR(0x64d3ca);
__builtin_memmove((R+28),(R+28),4);
}
B64d3cc:{NFSU2_TR(0x64d3cc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d3cd:{NFSU2_TR(0x64d3cd);
__builtin_memmove((R+20),(R+16),4);
}
B64d3cf:{NFSU2_TR(0x64d3cf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d3d0:{NFSU2_TR(0x64d3d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64d3d3:{NFSU2_TR(0x64d3d3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64d3d5:{NFSU2_TR(0x64d3d5);
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
B64d3d7:{NFSU2_TR(0x64d3d7);
if(r1(R+518)){{goto L64d447;}}
}
B64d3d9:L64d3d9:{c.instructions+=2;NFSU2_TR(0x64d3d9);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
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
B64d3dc:{NFSU2_TR(0x64d3dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d3e5;}}
}
B64d3de:L64d3de:{c.instructions+=2;NFSU2_TR(0x64d3de);
w4(R+0,u32(0x8876086cull));
}
B64d3e3:{NFSU2_TR(0x64d3e3);
{goto L64d447;}
}
B64d3e5:L64d3e5:{c.instructions+=6;NFSU2_TR(0x64d3e5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d3e6:{NFSU2_TR(0x64d3e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64d3e9:{NFSU2_TR(0x64d3e9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d3eb:{NFSU2_TR(0x64d3eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d3ee:{NFSU2_TR(0x64d3ee);
__builtin_memmove((R+4),(R+24),4);
}
B64d3f0:{NFSU2_TR(0x64d3f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64d3f5ull));
TAIL_STATIC(0x64c399u,64c);
}
B64d3f5:L64d3f5:{c.instructions+=2;NFSU2_TR(0x64d3f5);
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
B64d3f7:{NFSU2_TR(0x64d3f7);
if(r1(R+518)){{goto L64d441;}}
}
B64d3f9:L64d3f9:{c.instructions+=7;NFSU2_TR(0x64d3f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d3fc:{NFSU2_TR(0x64d3fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d3ff:{NFSU2_TR(0x64d3ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64d405:{NFSU2_TR(0x64d405);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64d408:{NFSU2_TR(0x64d408);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64d40b:{NFSU2_TR(0x64d40b);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B64d40d:{NFSU2_TR(0x64d40d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64d441;}}
}
B64d40f:L64d40f:{c.instructions+=2;NFSU2_TR(0x64d40f);
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
B64d411:{NFSU2_TR(0x64d411);
if(r1(R+518)){{goto L64d441;}}
}
B64d413:L64d413:{c.instructions+=2;NFSU2_TR(0x64d413);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
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
B64d417:{NFSU2_TR(0x64d417);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d441;}}
}
B64d419:L64d419:{c.instructions+=4;NFSU2_TR(0x64d419);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64d41c:{NFSU2_TR(0x64d41c);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B64d41d:{NFSU2_TR(0x64d41d);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B64d41e:{NFSU2_TR(0x64d41e);
if(r1(R+518)){{goto L64d432;}}
}
B64d420:L64d420:{c.instructions+=2;NFSU2_TR(0x64d420);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64d421:{NFSU2_TR(0x64d421);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d441;}}
}
B64d423:L64d423:{c.instructions+=5;NFSU2_TR(0x64d423);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d424:{NFSU2_TR(0x64d424);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d427:{NFSU2_TR(0x64d427);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d42a:{NFSU2_TR(0x64d42a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d42b:{NFSU2_TR(0x64d42b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64d430ull));
TAIL_STATIC(0x64ade3u,64a);
}
B64d430:L64d430:{c.instructions+=1;NFSU2_TR(0x64d430);
{goto L64d446;}
}
B64d432:L64d432:{c.instructions+=5;NFSU2_TR(0x64d432);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d433:{NFSU2_TR(0x64d433);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d436:{NFSU2_TR(0x64d436);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d439:{NFSU2_TR(0x64d439);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d43a:{NFSU2_TR(0x64d43a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64d43full));
TAIL_STATIC(0x64afc1u,64a);
}
B64d43f:L64d43f:{c.instructions+=1;NFSU2_TR(0x64d43f);
{goto L64d446;}
}
B64d441:L64d441:{c.instructions+=1;NFSU2_TR(0x64d441);
w4(R+0,u32(0x8876086cull));
}
B64d446:L64d446:{c.instructions+=1;NFSU2_TR(0x64d446);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64d447:L64d447:{c.instructions+=3;NFSU2_TR(0x64d447);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64d448:{NFSU2_TR(0x64d448);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64d449:{NFSU2_TR(0x64d449);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64d44c:L64d44c:{c.instructions+=5;NFSU2_TR(0x64d44c);
__builtin_memmove((R+28),(R+28),4);
}
B64d44e:{NFSU2_TR(0x64d44e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d44f:{NFSU2_TR(0x64d44f);
__builtin_memmove((R+20),(R+16),4);
}
B64d451:{NFSU2_TR(0x64d451);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64d455:{NFSU2_TR(0x64d455);
if(r1(R+518)){{goto L64d464;}}
}
B64d457:L64d457:{c.instructions+=2;NFSU2_TR(0x64d457);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
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
B64d45b:{NFSU2_TR(0x64d45b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d464;}}
}
B64d45d:L64d45d:{c.instructions+=2;NFSU2_TR(0x64d45d);
w4(R+0,u32(0x8876086cull));
}
B64d462:{NFSU2_TR(0x64d462);
{goto L64d4b6;}
}
B64d464:L64d464:{c.instructions+=6;NFSU2_TR(0x64d464);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d465:{NFSU2_TR(0x64d465);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64d468:{NFSU2_TR(0x64d468);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d46a:{NFSU2_TR(0x64d46a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d46d:{NFSU2_TR(0x64d46d);
__builtin_memmove((R+4),(R+24),4);
}
B64d46f:{NFSU2_TR(0x64d46f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64d474ull));
TAIL_STATIC(0x64c399u,64c);
}
B64d474:L64d474:{c.instructions+=2;NFSU2_TR(0x64d474);
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
B64d476:{NFSU2_TR(0x64d476);
if(r1(R+518)){{goto L64d4b0;}}
}
B64d478:L64d478:{c.instructions+=7;NFSU2_TR(0x64d478);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d47b:{NFSU2_TR(0x64d47b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d47e:{NFSU2_TR(0x64d47e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64d484:{NFSU2_TR(0x64d484);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64d487:{NFSU2_TR(0x64d487);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64d48a:{NFSU2_TR(0x64d48a);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
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
B64d48d:{NFSU2_TR(0x64d48d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64d4b0;}}
}
B64d48f:L64d48f:{c.instructions+=2;NFSU2_TR(0x64d48f);
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
B64d491:{NFSU2_TR(0x64d491);
if(r1(R+518)){{goto L64d4b0;}}
}
B64d493:L64d493:{c.instructions+=2;NFSU2_TR(0x64d493);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
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
B64d497:{NFSU2_TR(0x64d497);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d4b0;}}
}
B64d499:L64d499:{c.instructions+=2;NFSU2_TR(0x64d499);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64d49d:{NFSU2_TR(0x64d49d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d4b0;}}
}
B64d49f:L64d49f:{c.instructions+=5;NFSU2_TR(0x64d49f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d4a2:{NFSU2_TR(0x64d4a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d4a5:{NFSU2_TR(0x64d4a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d4a8:{NFSU2_TR(0x64d4a8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d4a9:{NFSU2_TR(0x64d4a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64d4aeull));
TAIL_STATIC(0x64b0b3u,64b);
}
B64d4ae:L64d4ae:{c.instructions+=1;NFSU2_TR(0x64d4ae);
{goto L64d4b5;}
}
B64d4b0:L64d4b0:{c.instructions+=1;NFSU2_TR(0x64d4b0);
w4(R+0,u32(0x8876086cull));
}
B64d4b5:L64d4b5:{c.instructions+=1;NFSU2_TR(0x64d4b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64d4b6:L64d4b6:{c.instructions+=2;NFSU2_TR(0x64d4b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64d4b7:{NFSU2_TR(0x64d4b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64d4ba:L64d4ba:{c.instructions+=6;NFSU2_TR(0x64d4ba);
__builtin_memmove((R+28),(R+28),4);
}
B64d4bc:{NFSU2_TR(0x64d4bc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d4bd:{NFSU2_TR(0x64d4bd);
__builtin_memmove((R+20),(R+16),4);
}
B64d4bf:{NFSU2_TR(0x64d4bf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64d4c1:{NFSU2_TR(0x64d4c1);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
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
B64d4c4:{NFSU2_TR(0x64d4c4);
if(r1(R+518)){{goto L64d524;}}
}
B64d4c6:L64d4c6:{c.instructions+=2;NFSU2_TR(0x64d4c6);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
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
B64d4c9:{NFSU2_TR(0x64d4c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d4d2;}}
}
B64d4cb:L64d4cb:{c.instructions+=2;NFSU2_TR(0x64d4cb);
w4(R+0,u32(0x8876086cull));
}
B64d4d0:{NFSU2_TR(0x64d4d0);
{goto L64d524;}
}
B64d4d2:L64d4d2:{c.instructions+=6;NFSU2_TR(0x64d4d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d4d3:{NFSU2_TR(0x64d4d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64d4d6:{NFSU2_TR(0x64d4d6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d4d8:{NFSU2_TR(0x64d4d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d4db:{NFSU2_TR(0x64d4db);
__builtin_memmove((R+4),(R+24),4);
}
B64d4dd:{NFSU2_TR(0x64d4dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64d4e2ull));
TAIL_STATIC(0x64c399u,64c);
}
B64d4e2:L64d4e2:{c.instructions+=2;NFSU2_TR(0x64d4e2);
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
B64d4e4:{NFSU2_TR(0x64d4e4);
if(r1(R+518)){{goto L64d51e;}}
}
B64d4e6:L64d4e6:{c.instructions+=7;NFSU2_TR(0x64d4e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d4e9:{NFSU2_TR(0x64d4e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d4ec:{NFSU2_TR(0x64d4ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64d4f2:{NFSU2_TR(0x64d4f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64d4f5:{NFSU2_TR(0x64d4f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64d4f8:{NFSU2_TR(0x64d4f8);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
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
B64d4fb:{NFSU2_TR(0x64d4fb);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64d51e;}}
}
B64d4fd:L64d4fd:{c.instructions+=2;NFSU2_TR(0x64d4fd);
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
B64d4ff:{NFSU2_TR(0x64d4ff);
if(r1(R+518)){{goto L64d51e;}}
}
B64d501:L64d501:{c.instructions+=2;NFSU2_TR(0x64d501);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
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
B64d505:{NFSU2_TR(0x64d505);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d51e;}}
}
B64d507:L64d507:{c.instructions+=2;NFSU2_TR(0x64d507);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64d50b:{NFSU2_TR(0x64d50b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d51e;}}
}
B64d50d:L64d50d:{c.instructions+=5;NFSU2_TR(0x64d50d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d510:{NFSU2_TR(0x64d510);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d513:{NFSU2_TR(0x64d513);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d516:{NFSU2_TR(0x64d516);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d517:{NFSU2_TR(0x64d517);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64d51cull));
TAIL_STATIC(0x64b124u,64b);
}
B64d51c:L64d51c:{c.instructions+=1;NFSU2_TR(0x64d51c);
{goto L64d523;}
}
B64d51e:L64d51e:{c.instructions+=1;NFSU2_TR(0x64d51e);
w4(R+0,u32(0x8876086cull));
}
B64d523:L64d523:{c.instructions+=1;NFSU2_TR(0x64d523);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64d524:L64d524:{c.instructions+=2;NFSU2_TR(0x64d524);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64d525:{NFSU2_TR(0x64d525);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64d528:L64d528:{c.instructions+=7;NFSU2_TR(0x64d528);
__builtin_memmove((R+28),(R+28),4);
}
B64d52a:{NFSU2_TR(0x64d52a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d52b:{NFSU2_TR(0x64d52b);
__builtin_memmove((R+20),(R+16),4);
}
B64d52d:{NFSU2_TR(0x64d52d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d52e:{NFSU2_TR(0x64d52e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64d531:{NFSU2_TR(0x64d531);
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
B64d533:{NFSU2_TR(0x64d533);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d53f;}}
}
B64d535:L64d535:{c.instructions+=2;NFSU2_TR(0x64d535);
w4(R+0,u32(0x8876086cull));
}
B64d53a:{NFSU2_TR(0x64d53a);
{goto L64d5d9;}
}
B64d53f:L64d53f:{c.instructions+=9;NFSU2_TR(0x64d53f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d540:{NFSU2_TR(0x64d540);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d541:{NFSU2_TR(0x64d541);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64d544:{NFSU2_TR(0x64d544);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64d546:{NFSU2_TR(0x64d546);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B64d547:{NFSU2_TR(0x64d547);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d548:{NFSU2_TR(0x64d548);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d54b:{NFSU2_TR(0x64d54b);
__builtin_memmove((R+4),(R+24),4);
}
B64d54d:{NFSU2_TR(0x64d54d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64d552ull));
TAIL_STATIC(0x64c399u,64c);
}
B64d552:L64d552:{c.instructions+=2;NFSU2_TR(0x64d552);
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
B64d554:{NFSU2_TR(0x64d554);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d55d;}}
}
B64d556:L64d556:{c.instructions+=2;NFSU2_TR(0x64d556);
w4(R+0,u32(0x8876086cull));
}
B64d55b:{NFSU2_TR(0x64d55b);
{goto L64d5d7;}
}
B64d55d:L64d55d:{c.instructions+=6;NFSU2_TR(0x64d55d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d560:{NFSU2_TR(0x64d560);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d563:{NFSU2_TR(0x64d563);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64d569:{NFSU2_TR(0x64d569);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64d56c:{NFSU2_TR(0x64d56c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64d570:{NFSU2_TR(0x64d570);
if(r1(R+518)){{goto L64d578;}}
}
B64d572:L64d572:{c.instructions+=2;NFSU2_TR(0x64d572);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
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
B64d576:{NFSU2_TR(0x64d576);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64d556u);}goto L64d556;}}
}
B64d578:L64d578:{c.instructions+=2;NFSU2_TR(0x64d578);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64d57b:{NFSU2_TR(0x64d57b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64d556u);}goto L64d556;}}
}
B64d57d:L64d57d:{c.instructions+=10;NFSU2_TR(0x64d57d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64d580:{NFSU2_TR(0x64d580);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64d583:{NFSU2_TR(0x64d583);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64d586:{NFSU2_TR(0x64d586);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d588:{NFSU2_TR(0x64d588);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64d589:{NFSU2_TR(0x64d589);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64d58b:{NFSU2_TR(0x64d58b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64d58d:{NFSU2_TR(0x64d58d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64d590:{NFSU2_TR(0x64d590);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64d593:{NFSU2_TR(0x64d593);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64d598;}}
}
B64d595:L64d595:{c.instructions+=1;NFSU2_TR(0x64d595);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64d598:L64d598:{c.instructions+=3;NFSU2_TR(0x64d598);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64d59a:{NFSU2_TR(0x64d59a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64d59d:{NFSU2_TR(0x64d59d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64d5bc;}}
}
B64d59f:L64d59f:{c.instructions+=6;NFSU2_TR(0x64d59f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64d5a2:{NFSU2_TR(0x64d5a2);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64d5a5:{NFSU2_TR(0x64d5a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d5a6:{NFSU2_TR(0x64d5a6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64d5a9:{NFSU2_TR(0x64d5a9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d5aa:{NFSU2_TR(0x64d5aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64d5afull));
TAIL_STATIC(0x64a8ddu,64a);
}
B64d5af:L64d5af:{c.instructions+=2;NFSU2_TR(0x64d5af);
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
B64d5b1:{NFSU2_TR(0x64d5b1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64d5d7;}}
}
B64d5b3:L64d5b3:{c.instructions+=4;NFSU2_TR(0x64d5b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64d5b6:{NFSU2_TR(0x64d5b6);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B64d5b7:{NFSU2_TR(0x64d5b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B64d5ba:{NFSU2_TR(0x64d5ba);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64d59fu);}goto L64d59f;}}
}
B64d5bc:L64d5bc:{c.instructions+=2;NFSU2_TR(0x64d5bc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B64d5be:{NFSU2_TR(0x64d5be);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64d5ca;}}
}
B64d5c0:L64d5c0:{c.instructions+=2;NFSU2_TR(0x64d5c0);
__builtin_memmove((R+4),(R+28),4);
}
B64d5c2:{NFSU2_TR(0x64d5c2);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B64d5c4:L64d5c4:{c.instructions+=3;NFSU2_TR(0x64d5c4);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64d5c5:{NFSU2_TR(0x64d5c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64d5c8:{NFSU2_TR(0x64d5c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64d5c4u);}goto L64d5c4;}}
}
B64d5ca:L64d5ca:{c.instructions+=4;NFSU2_TR(0x64d5ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64d5cd:{NFSU2_TR(0x64d5cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64d5d1:{NFSU2_TR(0x64d5d1);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B64d5d5:{NFSU2_TR(0x64d5d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64d598u);}goto L64d598;}}
}
B64d5d7:L64d5d7:{c.instructions+=2;NFSU2_TR(0x64d5d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64d5d8:{NFSU2_TR(0x64d5d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64d5d9:L64d5d9:{c.instructions+=3;NFSU2_TR(0x64d5d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64d5da:{NFSU2_TR(0x64d5da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64d5db:{NFSU2_TR(0x64d5db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64d5de:L64d5de:{c.instructions+=8;NFSU2_TR(0x64d5de);
__builtin_memmove((R+28),(R+28),4);
}
B64d5e0:{NFSU2_TR(0x64d5e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d5e1:{NFSU2_TR(0x64d5e1);
__builtin_memmove((R+20),(R+16),4);
}
B64d5e3:{NFSU2_TR(0x64d5e3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d5e4:{NFSU2_TR(0x64d5e4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d5e5:{NFSU2_TR(0x64d5e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64d5e8:{NFSU2_TR(0x64d5e8);
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
B64d5ea:{NFSU2_TR(0x64d5ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d5f6;}}
}
B64d5ec:L64d5ec:{c.instructions+=2;NFSU2_TR(0x64d5ec);
w4(R+0,u32(0x8876086cull));
}
B64d5f1:{NFSU2_TR(0x64d5f1);
{goto L64d69c;}
}
B64d5f6:L64d5f6:{c.instructions+=9;NFSU2_TR(0x64d5f6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d5f7:{NFSU2_TR(0x64d5f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d5f8:{NFSU2_TR(0x64d5f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64d5fb:{NFSU2_TR(0x64d5fb);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64d5fd:{NFSU2_TR(0x64d5fd);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B64d5fe:{NFSU2_TR(0x64d5fe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d5ff:{NFSU2_TR(0x64d5ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d602:{NFSU2_TR(0x64d602);
__builtin_memmove((R+4),(R+24),4);
}
B64d604:{NFSU2_TR(0x64d604);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64d609ull));
TAIL_STATIC(0x64c399u,64c);
}
B64d609:L64d609:{c.instructions+=3;NFSU2_TR(0x64d609);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B64d60b:{NFSU2_TR(0x64d60b);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B64d60d:{NFSU2_TR(0x64d60d);
if(r1(R+518)){{goto L64d62e;}}
}
B64d60f:L64d60f:{c.instructions+=6;NFSU2_TR(0x64d60f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d612:{NFSU2_TR(0x64d612);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d615:{NFSU2_TR(0x64d615);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64d61b:{NFSU2_TR(0x64d61b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64d61e:{NFSU2_TR(0x64d61e);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64d621:{NFSU2_TR(0x64d621);
if(r1(R+518)){{goto L64d629;}}
}
B64d623:L64d623:{c.instructions+=2;NFSU2_TR(0x64d623);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
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
B64d627:{NFSU2_TR(0x64d627);
if(r1(R+518)){{goto L64d62e;}}
}
B64d629:L64d629:{c.instructions+=2;NFSU2_TR(0x64d629);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64d62c:{NFSU2_TR(0x64d62c);
if(r1(R+518)){{goto L64d635;}}
}
B64d62e:L64d62e:{c.instructions+=2;NFSU2_TR(0x64d62e);
w4(R+0,u32(0x8876086cull));
}
B64d633:{NFSU2_TR(0x64d633);
{goto L64d69a;}
}
B64d635:L64d635:{c.instructions+=9;NFSU2_TR(0x64d635);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64d638:{NFSU2_TR(0x64d638);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d63a:{NFSU2_TR(0x64d63a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64d63d:{NFSU2_TR(0x64d63d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64d640:{NFSU2_TR(0x64d640);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64d641:{NFSU2_TR(0x64d641);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64d643:{NFSU2_TR(0x64d643);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64d646:{NFSU2_TR(0x64d646);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64d649:{NFSU2_TR(0x64d649);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64d64e;}}
}
B64d64b:L64d64b:{c.instructions+=1;NFSU2_TR(0x64d64b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64d64e:L64d64e:{c.instructions+=5;NFSU2_TR(0x64d64e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64d650:{NFSU2_TR(0x64d650);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B64d651:{NFSU2_TR(0x64d651);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B64d652:{NFSU2_TR(0x64d652);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B64d653:{NFSU2_TR(0x64d653);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B64d654:L64d654:{c.instructions+=3;NFSU2_TR(0x64d654);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B64d656:{NFSU2_TR(0x64d656);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64d659:{NFSU2_TR(0x64d659);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64d67d;}}
}
B64d65b:L64d65b:{c.instructions+=2;NFSU2_TR(0x64d65b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64d65e:{NFSU2_TR(0x64d65e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64d661:L64d661:{c.instructions+=3;NFSU2_TR(0x64d661);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d664:{NFSU2_TR(0x64d664);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d665:{NFSU2_TR(0x64d665);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64d66aull));
TAIL_STATIC(0x64a939u,64a);
}
B64d66a:L64d66a:{c.instructions+=3;NFSU2_TR(0x64d66a);
__builtin_memmove((R+8),(R+0),4);
}
B64d66c:{NFSU2_TR(0x64d66c);
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
B64d66e:{NFSU2_TR(0x64d66e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64d698;}}
}
B64d670:L64d670:{c.instructions+=5;NFSU2_TR(0x64d670);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64d674:{NFSU2_TR(0x64d674);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64d677:{NFSU2_TR(0x64d677);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B64d678:{NFSU2_TR(0x64d678);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B64d67b:{NFSU2_TR(0x64d67b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64d661u);}goto L64d661;}}
}
B64d67d:L64d67d:{c.instructions+=2;NFSU2_TR(0x64d67d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B64d67f:{NFSU2_TR(0x64d67f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64d68b;}}
}
B64d681:L64d681:{c.instructions+=2;NFSU2_TR(0x64d681);
__builtin_memmove((R+0),(R+12),4);
}
B64d683:{NFSU2_TR(0x64d683);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B64d685:L64d685:{c.instructions+=3;NFSU2_TR(0x64d685);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64d686:{NFSU2_TR(0x64d686);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64d689:{NFSU2_TR(0x64d689);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64d685u);}goto L64d685;}}
}
B64d68b:L64d68b:{c.instructions+=4;NFSU2_TR(0x64d68b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64d68e:{NFSU2_TR(0x64d68e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64d692:{NFSU2_TR(0x64d692);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B64d696:{NFSU2_TR(0x64d696);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64d654u);}goto L64d654;}}
}
B64d698:L64d698:{c.instructions+=1;NFSU2_TR(0x64d698);
__builtin_memmove((R+0),(R+8),4);
}
B64d69a:L64d69a:{c.instructions+=2;NFSU2_TR(0x64d69a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64d69b:{NFSU2_TR(0x64d69b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64d69c:L64d69c:{c.instructions+=3;NFSU2_TR(0x64d69c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64d69d:{NFSU2_TR(0x64d69d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64d69e:{NFSU2_TR(0x64d69e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64d6a1:L64d6a1:{c.instructions+=15;NFSU2_TR(0x64d6a1);
__builtin_memmove((R+28),(R+28),4);
}
B64d6a3:{NFSU2_TR(0x64d6a3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d6a4:{NFSU2_TR(0x64d6a4);
__builtin_memmove((R+20),(R+16),4);
}
B64d6a6:{NFSU2_TR(0x64d6a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d6a7:{NFSU2_TR(0x64d6a7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d6a8:{NFSU2_TR(0x64d6a8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d6a9:{NFSU2_TR(0x64d6a9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d6aa:{NFSU2_TR(0x64d6aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64d6ad:{NFSU2_TR(0x64d6ad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d6ae:{NFSU2_TR(0x64d6ae);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d6b0:{NFSU2_TR(0x64d6b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d6b3:{NFSU2_TR(0x64d6b3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64d6b5:{NFSU2_TR(0x64d6b5);
__builtin_memmove((R+4),(R+24),4);
}
B64d6b7:{NFSU2_TR(0x64d6b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64d6ba:{NFSU2_TR(0x64d6ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64d6bfull));
TAIL_STATIC(0x64c399u,64c);
}
B64d6bf:L64d6bf:{c.instructions+=2;NFSU2_TR(0x64d6bf);
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
B64d6c1:{NFSU2_TR(0x64d6c1);
if(r1(R+518)){{goto L64d773;}}
}
B64d6c7:L64d6c7:{c.instructions+=6;NFSU2_TR(0x64d6c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d6ca:{NFSU2_TR(0x64d6ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d6cd:{NFSU2_TR(0x64d6cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64d6d3:{NFSU2_TR(0x64d6d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64d6d6:{NFSU2_TR(0x64d6d6);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64d6d9:{NFSU2_TR(0x64d6d9);
if(r1(R+518)){{goto L64d6e5;}}
}
B64d6db:L64d6db:{c.instructions+=2;NFSU2_TR(0x64d6db);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
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
B64d6df:{NFSU2_TR(0x64d6df);
if(r1(R+518)){{goto L64d773;}}
}
B64d6e5:L64d6e5:{c.instructions+=2;NFSU2_TR(0x64d6e5);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x4ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64d6e9:{NFSU2_TR(0x64d6e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d773;}}
}
B64d6ef:L64d6ef:{c.instructions+=2;NFSU2_TR(0x64d6ef);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x4ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B64d6f2:{NFSU2_TR(0x64d6f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d773;}}
}
B64d6f4:L64d6f4:{c.instructions+=6;NFSU2_TR(0x64d6f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64d6f7:{NFSU2_TR(0x64d6f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64d6fa:{NFSU2_TR(0x64d6fa);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B64d6fc:{NFSU2_TR(0x64d6fc);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64d6ff:{NFSU2_TR(0x64d6ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64d702:{NFSU2_TR(0x64d702);
if(r1(R+518)){{goto L64d76b;}}
}
B64d704:L64d704:{c.instructions+=4;NFSU2_TR(0x64d704);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B64d707:{NFSU2_TR(0x64d707);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d708:{NFSU2_TR(0x64d708);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B64d70b:{NFSU2_TR(0x64d70b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64d710ull));
TAIL_STATIC(0x647643u,647);
}
B64d710:L64d710:{c.instructions+=2;NFSU2_TR(0x64d710);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64d713:{NFSU2_TR(0x64d713);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64d716:L64d716:{c.instructions+=4;NFSU2_TR(0x64d716);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B64d718:{NFSU2_TR(0x64d718);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B64d719:{NFSU2_TR(0x64d719);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B64d71b:{NFSU2_TR(0x64d71b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64d716u);}goto L64d716;}}
}
B64d71d:L64d71d:{c.instructions+=6;NFSU2_TR(0x64d71d);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B64d71f:{NFSU2_TR(0x64d71f);
__builtin_memmove((R+4),gp(0x8a5d00),4);
}
B64d725:{NFSU2_TR(0x64d725);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64d728:{NFSU2_TR(0x64d728);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d72a:{NFSU2_TR(0x64d72a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d72b:{NFSU2_TR(0x64d72b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64d730ull));
TAIL_STATIC(0x671ccbu,671);
}
B64d730:L64d730:{c.instructions+=4;NFSU2_TR(0x64d730);
__builtin_memmove((R+28),(R+0),4);
}
B64d732:{NFSU2_TR(0x64d732);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64d734:{NFSU2_TR(0x64d734);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64d737:{NFSU2_TR(0x64d737);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d74a;}}
}
B64d739:L64d739:{c.instructions+=3;NFSU2_TR(0x64d739);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d73c:{NFSU2_TR(0x64d73c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B64d743:{NFSU2_TR(0x64d743);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64d748ull));
TAIL_STATIC(0x64547fu,645);
}
B64d748:L64d748:{c.instructions+=1;NFSU2_TR(0x64d748);
{goto L64d77a;}
}
B64d74a:L64d74a:{c.instructions+=4;NFSU2_TR(0x64d74a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64d74d:{NFSU2_TR(0x64d74d);
__builtin_memmove((R+4),(R+12),4);
}
B64d74f:{NFSU2_TR(0x64d74f);
__builtin_memmove((R+0),(R+4),4);
}
B64d751:{NFSU2_TR(0x64d751);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B64d754:L64d754:{c.instructions+=1;NFSU2_TR(0x64d754);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L64d756;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64d754u);}goto L64d754;}
}
B64d756:L64d756:{c.instructions+=2;NFSU2_TR(0x64d756);
__builtin_memmove((R+4),(R+0),4);
}
B64d758:{NFSU2_TR(0x64d758);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B64d75b:L64d75b:{c.instructions+=1;NFSU2_TR(0x64d75b);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L64d75d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64d75bu);}goto L64d75b;}
}
B64d75d:L64d75d:{c.instructions+=2;NFSU2_TR(0x64d75d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d760:{NFSU2_TR(0x64d760);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64d765ull));
TAIL_STATIC(0x64547fu,645);
}
B64d765:L64d765:{c.instructions+=2;NFSU2_TR(0x64d765);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d768:{NFSU2_TR(0x64d768);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64d76b:L64d76b:{c.instructions+=3;NFSU2_TR(0x64d76b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64d76e:{NFSU2_TR(0x64d76e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64d771:{NFSU2_TR(0x64d771);
{goto L64d77a;}
}
B64d773:L64d773:{c.instructions+=1;NFSU2_TR(0x64d773);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B64d77a:L64d77a:{c.instructions+=6;NFSU2_TR(0x64d77a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64d77d:{NFSU2_TR(0x64d77d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64d77e:{NFSU2_TR(0x64d77e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64d77f:{NFSU2_TR(0x64d77f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64d780:{NFSU2_TR(0x64d780);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64d781:{NFSU2_TR(0x64d781);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64d784:L64d784:{c.instructions+=9;NFSU2_TR(0x64d784);
__builtin_memmove((R+28),(R+28),4);
}
B64d786:{NFSU2_TR(0x64d786);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d787:{NFSU2_TR(0x64d787);
__builtin_memmove((R+20),(R+16),4);
}
B64d789:{NFSU2_TR(0x64d789);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d78a:{NFSU2_TR(0x64d78a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d78b:{NFSU2_TR(0x64d78b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64d78e:{NFSU2_TR(0x64d78e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64d790:{NFSU2_TR(0x64d790);
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
B64d792:{NFSU2_TR(0x64d792);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d79b;}}
}
B64d794:L64d794:{c.instructions+=2;NFSU2_TR(0x64d794);
w4(R+12,u32(0x8876086cull));
}
B64d799:{NFSU2_TR(0x64d799);
{goto L64d7e8;}
}
B64d79b:L64d79b:{c.instructions+=6;NFSU2_TR(0x64d79b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d79c:{NFSU2_TR(0x64d79c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64d79f:{NFSU2_TR(0x64d79f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d7a1:{NFSU2_TR(0x64d7a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d7a4:{NFSU2_TR(0x64d7a4);
__builtin_memmove((R+4),(R+24),4);
}
B64d7a6:{NFSU2_TR(0x64d7a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64d7abull));
TAIL_STATIC(0x64c399u,64c);
}
B64d7ab:L64d7ab:{c.instructions+=2;NFSU2_TR(0x64d7ab);
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
B64d7ad:{NFSU2_TR(0x64d7ad);
if(r1(R+518)){{goto L64d7e2;}}
}
B64d7af:L64d7af:{c.instructions+=6;NFSU2_TR(0x64d7af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d7b2:{NFSU2_TR(0x64d7b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d7b5:{NFSU2_TR(0x64d7b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64d7bb:{NFSU2_TR(0x64d7bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64d7be:{NFSU2_TR(0x64d7be);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64d7c2:{NFSU2_TR(0x64d7c2);
if(r1(R+518)){{goto L64d7ca;}}
}
B64d7c4:L64d7c4:{c.instructions+=2;NFSU2_TR(0x64d7c4);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
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
B64d7c8:{NFSU2_TR(0x64d7c8);
if(r1(R+518)){{goto L64d7e2;}}
}
B64d7ca:L64d7ca:{c.instructions+=2;NFSU2_TR(0x64d7ca);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x4ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64d7ce:{NFSU2_TR(0x64d7ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d7e2;}}
}
B64d7d0:L64d7d0:{c.instructions+=2;NFSU2_TR(0x64d7d0);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x4ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B64d7d3:{NFSU2_TR(0x64d7d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d7e2;}}
}
B64d7d5:L64d7d5:{c.instructions+=5;NFSU2_TR(0x64d7d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64d7d8:{NFSU2_TR(0x64d7d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64d7db:{NFSU2_TR(0x64d7db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64d7de:{NFSU2_TR(0x64d7de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B64d7e0:{NFSU2_TR(0x64d7e0);
{goto L64d7e7;}
}
B64d7e2:L64d7e2:{c.instructions+=1;NFSU2_TR(0x64d7e2);
w4(R+12,u32(0x8876086cull));
}
B64d7e7:L64d7e7:{c.instructions+=1;NFSU2_TR(0x64d7e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64d7e8:L64d7e8:{c.instructions+=5;NFSU2_TR(0x64d7e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64d7e9:{NFSU2_TR(0x64d7e9);
__builtin_memmove((R+0),(R+12),4);
}
B64d7eb:{NFSU2_TR(0x64d7eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64d7ec:{NFSU2_TR(0x64d7ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64d7ed:{NFSU2_TR(0x64d7ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64d7f0:L64d7f0:{c.instructions+=11;NFSU2_TR(0x64d7f0);
__builtin_memmove((R+28),(R+28),4);
}
B64d7f2:{NFSU2_TR(0x64d7f2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d7f3:{NFSU2_TR(0x64d7f3);
__builtin_memmove((R+20),(R+16),4);
}
B64d7f5:{NFSU2_TR(0x64d7f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d7f6:{NFSU2_TR(0x64d7f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64d7f9:{NFSU2_TR(0x64d7f9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d7fa:{NFSU2_TR(0x64d7fa);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d7fc:{NFSU2_TR(0x64d7fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d7ff:{NFSU2_TR(0x64d7ff);
__builtin_memmove((R+4),(R+24),4);
}
B64d801:{NFSU2_TR(0x64d801);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B64d803:{NFSU2_TR(0x64d803);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64d808ull));
TAIL_STATIC(0x64c399u,64c);
}
B64d808:L64d808:{c.instructions+=2;NFSU2_TR(0x64d808);
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
B64d80a:{NFSU2_TR(0x64d80a);
if(r1(R+518)){{goto L64d86e;}}
}
B64d80c:L64d80c:{c.instructions+=6;NFSU2_TR(0x64d80c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d80f:{NFSU2_TR(0x64d80f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d812:{NFSU2_TR(0x64d812);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64d818:{NFSU2_TR(0x64d818);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64d81b:{NFSU2_TR(0x64d81b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64d81e:{NFSU2_TR(0x64d81e);
if(r1(R+518)){{goto L64d826;}}
}
B64d820:L64d820:{c.instructions+=2;NFSU2_TR(0x64d820);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
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
B64d824:{NFSU2_TR(0x64d824);
if(r1(R+518)){{goto L64d86e;}}
}
B64d826:L64d826:{c.instructions+=8;NFSU2_TR(0x64d826);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B64d828:{NFSU2_TR(0x64d828);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64d82b:{NFSU2_TR(0x64d82b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B64d82e:{NFSU2_TR(0x64d82e);
__builtin_memmove((R+24),(R+8),4);
}
B64d830:{NFSU2_TR(0x64d830);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64d833:{NFSU2_TR(0x64d833);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+6)));
w4(U+10,u32(u32(r4(R+8))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64d835:{NFSU2_TR(0x64d835);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64d838:{NFSU2_TR(0x64d838);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64d86e;}}
}
B64d83a:L64d83a:{c.instructions+=2;NFSU2_TR(0x64d83a);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64d83d:{NFSU2_TR(0x64d83d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L64d86e;}}
}
B64d83f:L64d83f:{c.instructions+=2;NFSU2_TR(0x64d83f);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64d843:{NFSU2_TR(0x64d843);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d86e;}}
}
B64d845:L64d845:{c.instructions+=2;NFSU2_TR(0x64d845);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64d849:{NFSU2_TR(0x64d849);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d86e;}}
}
B64d84b:L64d84b:{c.instructions+=5;NFSU2_TR(0x64d84b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64d84e:{NFSU2_TR(0x64d84e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64d851:{NFSU2_TR(0x64d851);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d854:{NFSU2_TR(0x64d854);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(R+4),r4(R+28)));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64d856:{NFSU2_TR(0x64d856);
if(r1(R+518)){{goto L64d869;}}
}
B64d858:L64d858:{c.instructions+=2;NFSU2_TR(0x64d858);
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
B64d859:{NFSU2_TR(0x64d859);
if(r1(R+518)){{goto L64d869;}}
}
B64d85b:L64d85b:{c.instructions+=2;NFSU2_TR(0x64d85b);
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
B64d85c:{NFSU2_TR(0x64d85c);
if(r1(R+518)){{goto L64d869;}}
}
B64d85e:L64d85e:{c.instructions+=2;NFSU2_TR(0x64d85e);
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
B64d85f:{NFSU2_TR(0x64d85f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d86e;}}
}
B64d861:L64d861:{c.instructions+=3;NFSU2_TR(0x64d861);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B64d864:{NFSU2_TR(0x64d864);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B64d867:{NFSU2_TR(0x64d867);
{goto L64d873;}
}
B64d869:L64d869:{c.instructions+=2;NFSU2_TR(0x64d869);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64d86c:{NFSU2_TR(0x64d86c);
{goto L64d873;}
}
B64d86e:L64d86e:{c.instructions+=1;NFSU2_TR(0x64d86e);
w4(R+28,u32(0x8876086cull));
}
B64d873:L64d873:{c.instructions+=5;NFSU2_TR(0x64d873);
__builtin_memmove((R+0),(R+28),4);
}
B64d875:{NFSU2_TR(0x64d875);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64d876:{NFSU2_TR(0x64d876);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64d877:{NFSU2_TR(0x64d877);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64d878:{NFSU2_TR(0x64d878);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64d87b:L64d87b:{c.instructions+=11;NFSU2_TR(0x64d87b);
__builtin_memmove((R+28),(R+28),4);
}
B64d87d:{NFSU2_TR(0x64d87d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d87e:{NFSU2_TR(0x64d87e);
__builtin_memmove((R+20),(R+16),4);
}
B64d880:{NFSU2_TR(0x64d880);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d881:{NFSU2_TR(0x64d881);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d882:{NFSU2_TR(0x64d882);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d883:{NFSU2_TR(0x64d883);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64d886:{NFSU2_TR(0x64d886);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64d888:{NFSU2_TR(0x64d888);
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
B64d88a:{NFSU2_TR(0x64d88a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64d88d:{NFSU2_TR(0x64d88d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d89b;}}
}
B64d88f:L64d88f:{c.instructions+=2;NFSU2_TR(0x64d88f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B64d896:{NFSU2_TR(0x64d896);
{goto L64d928;}
}
B64d89b:L64d89b:{c.instructions+=6;NFSU2_TR(0x64d89b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d89c:{NFSU2_TR(0x64d89c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64d89f:{NFSU2_TR(0x64d89f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d8a1:{NFSU2_TR(0x64d8a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d8a4:{NFSU2_TR(0x64d8a4);
__builtin_memmove((R+4),(R+24),4);
}
B64d8a6:{NFSU2_TR(0x64d8a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64d8abull));
TAIL_STATIC(0x64c399u,64c);
}
B64d8ab:L64d8ab:{c.instructions+=2;NFSU2_TR(0x64d8ab);
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
B64d8ad:{NFSU2_TR(0x64d8ad);
if(r1(R+518)){{goto L64d920;}}
}
B64d8af:L64d8af:{c.instructions+=6;NFSU2_TR(0x64d8af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d8b2:{NFSU2_TR(0x64d8b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d8b5:{NFSU2_TR(0x64d8b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64d8bb:{NFSU2_TR(0x64d8bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64d8be:{NFSU2_TR(0x64d8be);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64d8c1:{NFSU2_TR(0x64d8c1);
if(r1(R+518)){{goto L64d8c9;}}
}
B64d8c3:L64d8c3:{c.instructions+=2;NFSU2_TR(0x64d8c3);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
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
B64d8c7:{NFSU2_TR(0x64d8c7);
if(r1(R+518)){{goto L64d920;}}
}
B64d8c9:L64d8c9:{c.instructions+=3;NFSU2_TR(0x64d8c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64d8cc:{NFSU2_TR(0x64d8cc);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(R+8))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+6)));
w4(U+10,u32(u32(r4(R+8))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64d8ce:{NFSU2_TR(0x64d8ce);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64d920;}}
}
B64d8d0:L64d8d0:{c.instructions+=2;NFSU2_TR(0x64d8d0);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64d8d3:{NFSU2_TR(0x64d8d3);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L64d920;}}
}
B64d8d5:L64d8d5:{c.instructions+=2;NFSU2_TR(0x64d8d5);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64d8d9:{NFSU2_TR(0x64d8d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d920;}}
}
B64d8db:L64d8db:{c.instructions+=2;NFSU2_TR(0x64d8db);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64d8df:{NFSU2_TR(0x64d8df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d920;}}
}
B64d8e1:L64d8e1:{c.instructions+=5;NFSU2_TR(0x64d8e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64d8e4:{NFSU2_TR(0x64d8e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64d8e7:{NFSU2_TR(0x64d8e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d8ea:{NFSU2_TR(0x64d8ea);
w1(R+512,u8((r4(R+4))<(r4(R+12))));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64d8ec:{NFSU2_TR(0x64d8ec);
if(r1(R+518)){{goto L64d914;}}
}
B64d8ee:L64d8ee:{c.instructions+=2;NFSU2_TR(0x64d8ee);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64d8ef:{NFSU2_TR(0x64d8ef);
if(r1(R+518)){{goto L64d914;}}
}
B64d8f1:L64d8f1:{c.instructions+=2;NFSU2_TR(0x64d8f1);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64d8f2:{NFSU2_TR(0x64d8f2);
if(r1(R+518)){{goto L64d914;}}
}
B64d8f4:L64d8f4:{c.instructions+=2;NFSU2_TR(0x64d8f4);
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
B64d8f5:{NFSU2_TR(0x64d8f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d920;}}
}
B64d8f7:L64d8f7:{c.instructions+=6;NFSU2_TR(0x64d8f7);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B64d8fa:{NFSU2_TR(0x64d8fa);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B64d900:{NFSU2_TR(0x64d900);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B64d902:{NFSU2_TR(0x64d902);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B64d904:{NFSU2_TR(0x64d904);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B64d907:{NFSU2_TR(0x64d907);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L64d90e;}}
}
B64d909:L64d909:{c.instructions+=3;NFSU2_TR(0x64d909);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64d90b:{NFSU2_TR(0x64d90b);
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
B64d90c:{NFSU2_TR(0x64d90c);
{goto L64d910;}
}
B64d90e:L64d90e:{c.instructions+=1;NFSU2_TR(0x64d90e);
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
B64d910:L64d910:{c.instructions+=2;NFSU2_TR(0x64d910);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B64d912:{NFSU2_TR(0x64d912);
{goto L64d927;}
}
B64d914:L64d914:{c.instructions+=5;NFSU2_TR(0x64d914);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B64d916:{NFSU2_TR(0x64d916);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64d919:{NFSU2_TR(0x64d919);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B64d91c:{NFSU2_TR(0x64d91c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B64d91e:{NFSU2_TR(0x64d91e);
{goto L64d927;}
}
B64d920:L64d920:{c.instructions+=1;NFSU2_TR(0x64d920);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B64d927:L64d927:{c.instructions+=1;NFSU2_TR(0x64d927);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64d928:L64d928:{c.instructions+=5;NFSU2_TR(0x64d928);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64d92b:{NFSU2_TR(0x64d92b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64d92c:{NFSU2_TR(0x64d92c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64d92d:{NFSU2_TR(0x64d92d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64d92e:{NFSU2_TR(0x64d92e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64d931:L64d931:{c.instructions+=11;NFSU2_TR(0x64d931);
__builtin_memmove((R+28),(R+28),4);
}
B64d933:{NFSU2_TR(0x64d933);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d934:{NFSU2_TR(0x64d934);
__builtin_memmove((R+20),(R+16),4);
}
B64d936:{NFSU2_TR(0x64d936);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d937:{NFSU2_TR(0x64d937);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64d93a:{NFSU2_TR(0x64d93a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d93b:{NFSU2_TR(0x64d93b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d93d:{NFSU2_TR(0x64d93d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d940:{NFSU2_TR(0x64d940);
__builtin_memmove((R+4),(R+24),4);
}
B64d942:{NFSU2_TR(0x64d942);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B64d944:{NFSU2_TR(0x64d944);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64d949ull));
TAIL_STATIC(0x64c399u,64c);
}
B64d949:L64d949:{c.instructions+=2;NFSU2_TR(0x64d949);
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
B64d94b:{NFSU2_TR(0x64d94b);
if(r1(R+518)){{goto L64d9af;}}
}
B64d94d:L64d94d:{c.instructions+=6;NFSU2_TR(0x64d94d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d950:{NFSU2_TR(0x64d950);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d953:{NFSU2_TR(0x64d953);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64d959:{NFSU2_TR(0x64d959);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64d95c:{NFSU2_TR(0x64d95c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64d95f:{NFSU2_TR(0x64d95f);
if(r1(R+518)){{goto L64d967;}}
}
B64d961:L64d961:{c.instructions+=2;NFSU2_TR(0x64d961);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
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
B64d965:{NFSU2_TR(0x64d965);
if(r1(R+518)){{goto L64d9af;}}
}
B64d967:L64d967:{c.instructions+=3;NFSU2_TR(0x64d967);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64d96a:{NFSU2_TR(0x64d96a);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+6)));
w4(U+10,u32(u32(r4(R+8))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64d96c:{NFSU2_TR(0x64d96c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64d9af;}}
}
B64d96e:L64d96e:{c.instructions+=2;NFSU2_TR(0x64d96e);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64d971:{NFSU2_TR(0x64d971);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L64d9af;}}
}
B64d973:L64d973:{c.instructions+=2;NFSU2_TR(0x64d973);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64d977:{NFSU2_TR(0x64d977);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d9af;}}
}
B64d979:L64d979:{c.instructions+=2;NFSU2_TR(0x64d979);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64d97d:{NFSU2_TR(0x64d97d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d9af;}}
}
B64d97f:L64d97f:{c.instructions+=5;NFSU2_TR(0x64d97f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64d982:{NFSU2_TR(0x64d982);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64d985:{NFSU2_TR(0x64d985);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d988:{NFSU2_TR(0x64d988);
w1(R+512,u8((r4(R+4))<(r4(R+28))));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64d98a:{NFSU2_TR(0x64d98a);
if(r1(R+518)){{goto L64d9a5;}}
}
B64d98c:L64d98c:{c.instructions+=2;NFSU2_TR(0x64d98c);
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
B64d98d:{NFSU2_TR(0x64d98d);
if(r1(R+518)){{goto L64d99d;}}
}
B64d98f:L64d98f:{c.instructions+=2;NFSU2_TR(0x64d98f);
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
B64d990:{NFSU2_TR(0x64d990);
if(r1(R+518)){{goto L64d99d;}}
}
B64d992:L64d992:{c.instructions+=2;NFSU2_TR(0x64d992);
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
B64d993:{NFSU2_TR(0x64d993);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d9af;}}
}
B64d995:L64d995:{c.instructions+=3;NFSU2_TR(0x64d995);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B64d998:{NFSU2_TR(0x64d998);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B64d99b:{NFSU2_TR(0x64d99b);
{goto L64d9b4;}
}
B64d99d:L64d99d:{c.instructions+=1;NFSU2_TR(0x64d99d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d9a0:L64d9a0:{c.instructions+=2;NFSU2_TR(0x64d9a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64d9a3:{NFSU2_TR(0x64d9a3);
{goto L64d9b4;}
}
B64d9a5:L64d9a5:{c.instructions+=4;NFSU2_TR(0x64d9a5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B64d9a7:{NFSU2_TR(0x64d9a7);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
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
B64d9aa:{NFSU2_TR(0x64d9aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B64d9ad:{NFSU2_TR(0x64d9ad);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64d9a0u);}goto L64d9a0;}
}
B64d9af:L64d9af:{c.instructions+=1;NFSU2_TR(0x64d9af);
w4(R+28,u32(0x8876086cull));
}
B64d9b4:L64d9b4:{c.instructions+=5;NFSU2_TR(0x64d9b4);
__builtin_memmove((R+0),(R+28),4);
}
B64d9b6:{NFSU2_TR(0x64d9b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64d9b7:{NFSU2_TR(0x64d9b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64d9b8:{NFSU2_TR(0x64d9b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64d9b9:{NFSU2_TR(0x64d9b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64d9bc:L64d9bc:{c.instructions+=9;NFSU2_TR(0x64d9bc);
__builtin_memmove((R+28),(R+28),4);
}
B64d9be:{NFSU2_TR(0x64d9be);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d9bf:{NFSU2_TR(0x64d9bf);
__builtin_memmove((R+20),(R+16),4);
}
B64d9c1:{NFSU2_TR(0x64d9c1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d9c2:{NFSU2_TR(0x64d9c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64d9c6:{NFSU2_TR(0x64d9c6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d9c7:{NFSU2_TR(0x64d9c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64d9ca:{NFSU2_TR(0x64d9ca);
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
B64d9cc:{NFSU2_TR(0x64d9cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64d9da;}}
}
B64d9ce:L64d9ce:{c.instructions+=2;NFSU2_TR(0x64d9ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B64d9d5:{NFSU2_TR(0x64d9d5);
{goto L64da5d;}
}
B64d9da:L64d9da:{c.instructions+=6;NFSU2_TR(0x64d9da);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d9db:{NFSU2_TR(0x64d9db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64d9de:{NFSU2_TR(0x64d9de);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64d9e0:{NFSU2_TR(0x64d9e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64d9e3:{NFSU2_TR(0x64d9e3);
__builtin_memmove((R+4),(R+24),4);
}
B64d9e5:{NFSU2_TR(0x64d9e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64d9eaull));
TAIL_STATIC(0x64c399u,64c);
}
B64d9ea:L64d9ea:{c.instructions+=2;NFSU2_TR(0x64d9ea);
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
B64d9ec:{NFSU2_TR(0x64d9ec);
if(r1(R+518)){{goto L64da55;}}
}
B64d9ee:L64d9ee:{c.instructions+=6;NFSU2_TR(0x64d9ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d9f1:{NFSU2_TR(0x64d9f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64d9f4:{NFSU2_TR(0x64d9f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64d9fa:{NFSU2_TR(0x64d9fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64d9fd:{NFSU2_TR(0x64d9fd);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64da01:{NFSU2_TR(0x64da01);
if(r1(R+518)){{goto L64da09;}}
}
B64da03:L64da03:{c.instructions+=2;NFSU2_TR(0x64da03);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
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
B64da07:{NFSU2_TR(0x64da07);
if(r1(R+518)){{goto L64da55;}}
}
B64da09:L64da09:{c.instructions+=3;NFSU2_TR(0x64da09);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64da0c:{NFSU2_TR(0x64da0c);
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
B64da0e:{NFSU2_TR(0x64da0e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64da55;}}
}
B64da10:L64da10:{c.instructions+=2;NFSU2_TR(0x64da10);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64da13:{NFSU2_TR(0x64da13);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L64da55;}}
}
B64da15:L64da15:{c.instructions+=2;NFSU2_TR(0x64da15);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64da19:{NFSU2_TR(0x64da19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64da55;}}
}
B64da1b:L64da1b:{c.instructions+=2;NFSU2_TR(0x64da1b);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64da1f:{NFSU2_TR(0x64da1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64da55;}}
}
B64da21:L64da21:{c.instructions+=5;NFSU2_TR(0x64da21);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64da24:{NFSU2_TR(0x64da24);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64da27:{NFSU2_TR(0x64da27);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64da2a:{NFSU2_TR(0x64da2a);
w1(R+512,u8((r4(R+4))<(u32(0x0ull))));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64da2d:{NFSU2_TR(0x64da2d);
if(r1(R+518)){{goto L64da49;}}
}
B64da2f:L64da2f:{c.instructions+=2;NFSU2_TR(0x64da2f);
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
B64da30:{NFSU2_TR(0x64da30);
if(r1(R+518)){{goto L64da44;}}
}
B64da32:L64da32:{c.instructions+=2;NFSU2_TR(0x64da32);
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
B64da33:{NFSU2_TR(0x64da33);
if(r1(R+518)){{goto L64da44;}}
}
B64da35:L64da35:{c.instructions+=2;NFSU2_TR(0x64da35);
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
B64da36:{NFSU2_TR(0x64da36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64da55;}}
}
B64da38:L64da38:{c.instructions+=2;NFSU2_TR(0x64da38);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B64da3b:{NFSU2_TR(0x64da3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64da40ull));
TAIL_STATIC(0x75dd28u,75d);
}
B64da40:L64da40:{c.instructions+=2;NFSU2_TR(0x64da40);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B64da42:{NFSU2_TR(0x64da42);
{goto L64da5c;}
}
B64da44:L64da44:{c.instructions+=2;NFSU2_TR(0x64da44);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64da47:{NFSU2_TR(0x64da47);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64da40u);}goto L64da40;}
}
B64da49:L64da49:{c.instructions+=5;NFSU2_TR(0x64da49);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B64da4b:{NFSU2_TR(0x64da4b);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
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
B64da4e:{NFSU2_TR(0x64da4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B64da51:{NFSU2_TR(0x64da51);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B64da53:{NFSU2_TR(0x64da53);
{goto L64da5c;}
}
B64da55:L64da55:{c.instructions+=1;NFSU2_TR(0x64da55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B64da5c:L64da5c:{c.instructions+=1;NFSU2_TR(0x64da5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64da5d:L64da5d:{c.instructions+=4;NFSU2_TR(0x64da5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64da60:{NFSU2_TR(0x64da60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64da61:{NFSU2_TR(0x64da61);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64da62:{NFSU2_TR(0x64da62);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64da65:L64da65:{c.instructions+=11;NFSU2_TR(0x64da65);
__builtin_memmove((R+28),(R+28),4);
}
B64da67:{NFSU2_TR(0x64da67);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64da68:{NFSU2_TR(0x64da68);
__builtin_memmove((R+20),(R+16),4);
}
B64da6a:{NFSU2_TR(0x64da6a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64da6b:{NFSU2_TR(0x64da6b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64da6c:{NFSU2_TR(0x64da6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64da6f:{NFSU2_TR(0x64da6f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64da71:{NFSU2_TR(0x64da71);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64da74:{NFSU2_TR(0x64da74);
__builtin_memmove((R+4),(R+24),4);
}
B64da76:{NFSU2_TR(0x64da76);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64da78:{NFSU2_TR(0x64da78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64da7dull));
TAIL_STATIC(0x64c399u,64c);
}
B64da7d:L64da7d:{c.instructions+=2;NFSU2_TR(0x64da7d);
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
B64da7f:{NFSU2_TR(0x64da7f);
if(r1(R+518)){{goto L64dafa;}}
}
B64da81:L64da81:{c.instructions+=6;NFSU2_TR(0x64da81);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64da84:{NFSU2_TR(0x64da84);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64da87:{NFSU2_TR(0x64da87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64da8d:{NFSU2_TR(0x64da8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64da90:{NFSU2_TR(0x64da90);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64da93:{NFSU2_TR(0x64da93);
if(r1(R+518)){{goto L64da9b;}}
}
B64da95:L64da95:{c.instructions+=2;NFSU2_TR(0x64da95);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
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
B64da99:{NFSU2_TR(0x64da99);
if(r1(R+518)){{goto L64dafa;}}
}
B64da9b:L64da9b:{c.instructions+=3;NFSU2_TR(0x64da9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64da9e:{NFSU2_TR(0x64da9e);
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
B64daa0:{NFSU2_TR(0x64daa0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64dafa;}}
}
B64daa2:L64daa2:{c.instructions+=2;NFSU2_TR(0x64daa2);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64daa5:{NFSU2_TR(0x64daa5);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L64dafa;}}
}
B64daa7:L64daa7:{c.instructions+=2;NFSU2_TR(0x64daa7);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64daab:{NFSU2_TR(0x64daab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64dafa;}}
}
B64daad:L64daad:{c.instructions+=2;NFSU2_TR(0x64daad);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64dab1:{NFSU2_TR(0x64dab1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64dafa;}}
}
B64dab3:L64dab3:{c.instructions+=5;NFSU2_TR(0x64dab3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64dab6:{NFSU2_TR(0x64dab6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64dab9:{NFSU2_TR(0x64dab9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64dabc:{NFSU2_TR(0x64dabc);
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64dabf:{NFSU2_TR(0x64dabf);
if(r1(R+518)){{goto L64dadf;}}
}
B64dac1:L64dac1:{c.instructions+=2;NFSU2_TR(0x64dac1);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64dac2:{NFSU2_TR(0x64dac2);
if(r1(R+518)){{goto L64dad2;}}
}
B64dac4:L64dac4:{c.instructions+=2;NFSU2_TR(0x64dac4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64dac5:{NFSU2_TR(0x64dac5);
if(r1(R+518)){{goto L64dad2;}}
}
B64dac7:L64dac7:{c.instructions+=2;NFSU2_TR(0x64dac7);
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
B64dac8:{NFSU2_TR(0x64dac8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64dafa;}}
}
B64daca:L64daca:{c.instructions+=3;NFSU2_TR(0x64daca);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64dacd:{NFSU2_TR(0x64dacd);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B64dad0:{NFSU2_TR(0x64dad0);
{goto L64daff;}
}
B64dad2:L64dad2:{c.instructions+=2;NFSU2_TR(0x64dad2);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64dad5:{NFSU2_TR(0x64dad5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64dadaull));
TAIL_STATIC(0x75dd28u,75d);
}
B64dada:L64dada:{c.instructions+=2;NFSU2_TR(0x64dada);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64dadd:{NFSU2_TR(0x64dadd);
{goto L64daff;}
}
B64dadf:L64dadf:{c.instructions+=6;NFSU2_TR(0x64dadf);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64dae2:{NFSU2_TR(0x64dae2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64dae8:{NFSU2_TR(0x64dae8);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B64daea:{NFSU2_TR(0x64daea);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B64daec:{NFSU2_TR(0x64daec);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B64daef:{NFSU2_TR(0x64daef);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L64daf6;}}
}
B64daf1:L64daf1:{c.instructions+=3;NFSU2_TR(0x64daf1);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64daf3:{NFSU2_TR(0x64daf3);
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
B64daf4:{NFSU2_TR(0x64daf4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64dadau);}goto L64dada;}
}
B64daf6:L64daf6:{c.instructions+=2;NFSU2_TR(0x64daf6);
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
B64daf8:{NFSU2_TR(0x64daf8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64dadau);}goto L64dada;}
}
B64dafa:L64dafa:{c.instructions+=1;NFSU2_TR(0x64dafa);
w4(R+12,u32(0x8876086cull));
}
B64daff:L64daff:{c.instructions+=5;NFSU2_TR(0x64daff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64db00:{NFSU2_TR(0x64db00);
__builtin_memmove((R+0),(R+12),4);
}
B64db02:{NFSU2_TR(0x64db02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64db03:{NFSU2_TR(0x64db03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64db04:{NFSU2_TR(0x64db04);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64db07:L64db07:{c.instructions+=9;NFSU2_TR(0x64db07);
__builtin_memmove((R+28),(R+28),4);
}
B64db09:{NFSU2_TR(0x64db09);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64db0a:{NFSU2_TR(0x64db0a);
__builtin_memmove((R+20),(R+16),4);
}
B64db0c:{NFSU2_TR(0x64db0c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64db0d:{NFSU2_TR(0x64db0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64db11:{NFSU2_TR(0x64db11);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64db12:{NFSU2_TR(0x64db12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64db15:{NFSU2_TR(0x64db15);
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
B64db17:{NFSU2_TR(0x64db17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64db25;}}
}
B64db19:L64db19:{c.instructions+=2;NFSU2_TR(0x64db19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B64db20:{NFSU2_TR(0x64db20);
{goto L64dbbc;}
}
B64db25:L64db25:{c.instructions+=6;NFSU2_TR(0x64db25);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64db26:{NFSU2_TR(0x64db26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64db29:{NFSU2_TR(0x64db29);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64db2b:{NFSU2_TR(0x64db2b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64db2e:{NFSU2_TR(0x64db2e);
__builtin_memmove((R+4),(R+24),4);
}
B64db30:{NFSU2_TR(0x64db30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64db35ull));
TAIL_STATIC(0x64c399u,64c);
}
B64db35:L64db35:{c.instructions+=2;NFSU2_TR(0x64db35);
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
B64db37:{NFSU2_TR(0x64db37);
if(r1(R+518)){{goto L64dbb4;}}
}
B64db39:L64db39:{c.instructions+=6;NFSU2_TR(0x64db39);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64db3c:{NFSU2_TR(0x64db3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64db3f:{NFSU2_TR(0x64db3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64db45:{NFSU2_TR(0x64db45);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64db48:{NFSU2_TR(0x64db48);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64db4c:{NFSU2_TR(0x64db4c);
if(r1(R+518)){{goto L64db54;}}
}
B64db4e:L64db4e:{c.instructions+=2;NFSU2_TR(0x64db4e);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
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
B64db52:{NFSU2_TR(0x64db52);
if(r1(R+518)){{goto L64dbb4;}}
}
B64db54:L64db54:{c.instructions+=3;NFSU2_TR(0x64db54);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64db57:{NFSU2_TR(0x64db57);
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
B64db59:{NFSU2_TR(0x64db59);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64dbb4;}}
}
B64db5b:L64db5b:{c.instructions+=2;NFSU2_TR(0x64db5b);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64db5e:{NFSU2_TR(0x64db5e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L64dbb4;}}
}
B64db60:L64db60:{c.instructions+=2;NFSU2_TR(0x64db60);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64db64:{NFSU2_TR(0x64db64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64dbb4;}}
}
B64db66:L64db66:{c.instructions+=2;NFSU2_TR(0x64db66);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64db6a:{NFSU2_TR(0x64db6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64dbb4;}}
}
B64db6c:L64db6c:{c.instructions+=5;NFSU2_TR(0x64db6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64db6f:{NFSU2_TR(0x64db6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64db72:{NFSU2_TR(0x64db72);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64db75:{NFSU2_TR(0x64db75);
w1(R+512,u8((r4(R+4))<(u32(0x0ull))));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64db78:{NFSU2_TR(0x64db78);
if(r1(R+518)){{goto L64dba4;}}
}
B64db7a:L64db7a:{c.instructions+=2;NFSU2_TR(0x64db7a);
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
B64db7b:{NFSU2_TR(0x64db7b);
if(r1(R+518)){{goto L64db9f;}}
}
B64db7d:L64db7d:{c.instructions+=2;NFSU2_TR(0x64db7d);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64db7e:{NFSU2_TR(0x64db7e);
if(r1(R+518)){{goto L64db8a;}}
}
B64db80:L64db80:{c.instructions+=2;NFSU2_TR(0x64db80);
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
B64db81:{NFSU2_TR(0x64db81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64dbb4;}}
}
B64db83:L64db83:{c.instructions+=1;NFSU2_TR(0x64db83);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B64db86:L64db86:{c.instructions+=2;NFSU2_TR(0x64db86);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64db88:{NFSU2_TR(0x64db88);
{goto L64dbbb;}
}
B64db8a:L64db8a:{c.instructions+=5;NFSU2_TR(0x64db8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64db8d:{NFSU2_TR(0x64db8d);
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
B64db8f:{NFSU2_TR(0x64db8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64db92:{NFSU2_TR(0x64db92);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B64db95:{NFSU2_TR(0x64db95);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64db86u);}goto L64db86;}}
}
B64db97:L64db97:{c.instructions+=2;NFSU2_TR(0x64db97);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B64db9d:{NFSU2_TR(0x64db9d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64db86u);}goto L64db86;}
}
B64db9f:L64db9f:{c.instructions+=2;NFSU2_TR(0x64db9f);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B64dba2:{NFSU2_TR(0x64dba2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64db86u);}goto L64db86;}
}
B64dba4:L64dba4:{c.instructions+=6;NFSU2_TR(0x64dba4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B64dba6:{NFSU2_TR(0x64dba6);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
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
B64dba9:{NFSU2_TR(0x64dba9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B64dbac:{NFSU2_TR(0x64dbac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64dbaf:{NFSU2_TR(0x64dbaf);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B64dbb2:{NFSU2_TR(0x64dbb2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64db86u);}goto L64db86;}
}
B64dbb4:L64dbb4:{c.instructions+=1;NFSU2_TR(0x64dbb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B64dbbb:L64dbbb:{c.instructions+=1;NFSU2_TR(0x64dbbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64dbbc:L64dbbc:{c.instructions+=4;NFSU2_TR(0x64dbbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64dbbf:{NFSU2_TR(0x64dbbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64dbc0:{NFSU2_TR(0x64dbc0);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64dbc1:{NFSU2_TR(0x64dbc1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64dbc4:L64dbc4:{c.instructions+=10;NFSU2_TR(0x64dbc4);
__builtin_memmove((R+28),(R+28),4);
}
B64dbc6:{NFSU2_TR(0x64dbc6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64dbc7:{NFSU2_TR(0x64dbc7);
__builtin_memmove((R+20),(R+16),4);
}
B64dbc9:{NFSU2_TR(0x64dbc9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64dbca:{NFSU2_TR(0x64dbca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64dbcb:{NFSU2_TR(0x64dbcb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64dbcc:{NFSU2_TR(0x64dbcc);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B64dbce:{NFSU2_TR(0x64dbce);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64dbd1:{NFSU2_TR(0x64dbd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64dbd4:{NFSU2_TR(0x64dbd4);
if(r1(R+518)){{goto L64dbe7;}}
}
B64dbd6:L64dbd6:{c.instructions+=2;NFSU2_TR(0x64dbd6);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
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
B64dbd9:{NFSU2_TR(0x64dbd9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64dbe7;}}
}
B64dbdb:L64dbdb:{c.instructions+=2;NFSU2_TR(0x64dbdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B64dbe2:{NFSU2_TR(0x64dbe2);
{goto L64dcaf;}
}
B64dbe7:L64dbe7:{c.instructions+=6;NFSU2_TR(0x64dbe7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64dbe8:{NFSU2_TR(0x64dbe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64dbeb:{NFSU2_TR(0x64dbeb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64dbed:{NFSU2_TR(0x64dbed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64dbf0:{NFSU2_TR(0x64dbf0);
__builtin_memmove((R+4),(R+24),4);
}
B64dbf2:{NFSU2_TR(0x64dbf2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64dbf7ull));
TAIL_STATIC(0x64c399u,64c);
}
B64dbf7:L64dbf7:{c.instructions+=2;NFSU2_TR(0x64dbf7);
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
B64dbf9:{NFSU2_TR(0x64dbf9);
if(r1(R+518)){{goto L64dca7;}}
}
B64dbff:L64dbff:{c.instructions+=7;NFSU2_TR(0x64dbff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64dc02:{NFSU2_TR(0x64dc02);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64dc05:{NFSU2_TR(0x64dc05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64dc0b:{NFSU2_TR(0x64dc0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64dc0e:{NFSU2_TR(0x64dc0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64dc11:{NFSU2_TR(0x64dc11);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+6)));
w4(U+10,u32(u32(r4(R+8))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64dc13:{NFSU2_TR(0x64dc13);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64dca7;}}
}
B64dc19:L64dc19:{c.instructions+=2;NFSU2_TR(0x64dc19);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64dc1c:{NFSU2_TR(0x64dc1c);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L64dca7;}}
}
B64dc22:L64dc22:{c.instructions+=3;NFSU2_TR(0x64dc22);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64dc25:{NFSU2_TR(0x64dc25);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64dc27:{NFSU2_TR(0x64dc27);
if(r1(R+518)){{goto L64dc2f;}}
}
B64dc29:L64dc29:{c.instructions+=2;NFSU2_TR(0x64dc29);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64dc2d:{NFSU2_TR(0x64dc2d);
if(r1(R+518)){{goto L64dc32;}}
}
B64dc2f:L64dc2f:{c.instructions+=2;NFSU2_TR(0x64dc2f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B64dc31:{NFSU2_TR(0x64dc31);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B64dc32:L64dc32:{c.instructions+=5;NFSU2_TR(0x64dc32);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64dc35:{NFSU2_TR(0x64dc35);
u8 U[32];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B64dc39:{NFSU2_TR(0x64dc39);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B64dc3c:{NFSU2_TR(0x64dc3c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B64dc3f:{NFSU2_TR(0x64dc3f);
if(r1(R+512)){{goto L64dc44;}}
}
B64dc41:L64dc41:{c.instructions+=1;NFSU2_TR(0x64dc41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64dc44:L64dc44:{c.instructions+=3;NFSU2_TR(0x64dc44);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
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
B64dc48:{NFSU2_TR(0x64dc48);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64dc4b:{NFSU2_TR(0x64dc4b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64dcae;}}
}
B64dc4d:L64dc4d:{c.instructions+=2;NFSU2_TR(0x64dc4d);
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
B64dc4f:{NFSU2_TR(0x64dc4f);
if(r1(R+518)){{goto L64dcae;}}
}
B64dc51:L64dc51:{c.instructions+=4;NFSU2_TR(0x64dc51);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64dc54:{NFSU2_TR(0x64dc54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64dc57:{NFSU2_TR(0x64dc57);
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64dc5a:{NFSU2_TR(0x64dc5a);
if(r1(R+518)){{goto L64dc7d;}}
}
B64dc5c:L64dc5c:{c.instructions+=2;NFSU2_TR(0x64dc5c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64dc5d:{NFSU2_TR(0x64dc5d);
if(r1(R+518)){{goto L64dc70;}}
}
B64dc5f:L64dc5f:{c.instructions+=2;NFSU2_TR(0x64dc5f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64dc60:{NFSU2_TR(0x64dc60);
if(r1(R+518)){{goto L64dc70;}}
}
B64dc62:L64dc62:{c.instructions+=2;NFSU2_TR(0x64dc62);
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
B64dc63:{NFSU2_TR(0x64dc63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64dca7;}}
}
B64dc65:L64dc65:{c.instructions+=4;NFSU2_TR(0x64dc65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64dc68:{NFSU2_TR(0x64dc68);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64dc6b:{NFSU2_TR(0x64dc6b);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B64dc6e:{NFSU2_TR(0x64dc6e);
{goto L64dc9c;}
}
B64dc70:L64dc70:{c.instructions+=3;NFSU2_TR(0x64dc70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64dc73:{NFSU2_TR(0x64dc73);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64dc76:{NFSU2_TR(0x64dc76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64dc7bull));
TAIL_STATIC(0x75dd28u,75d);
}
B64dc7b:L64dc7b:{c.instructions+=1;NFSU2_TR(0x64dc7b);
{goto L64dc99;}
}
B64dc7d:L64dc7d:{c.instructions+=7;NFSU2_TR(0x64dc7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64dc80:{NFSU2_TR(0x64dc80);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64dc83:{NFSU2_TR(0x64dc83);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64dc89:{NFSU2_TR(0x64dc89);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B64dc8b:{NFSU2_TR(0x64dc8b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B64dc8d:{NFSU2_TR(0x64dc8d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B64dc90:{NFSU2_TR(0x64dc90);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L64dc97;}}
}
B64dc92:L64dc92:{c.instructions+=3;NFSU2_TR(0x64dc92);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64dc94:{NFSU2_TR(0x64dc94);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B64dc95:{NFSU2_TR(0x64dc95);
{goto L64dc99;}
}
B64dc97:L64dc97:{c.instructions+=1;NFSU2_TR(0x64dc97);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64dc99:L64dc99:{c.instructions+=1;NFSU2_TR(0x64dc99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64dc9c:L64dc9c:{c.instructions+=4;NFSU2_TR(0x64dc9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64dc9f:{NFSU2_TR(0x64dc9f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B64dca0:{NFSU2_TR(0x64dca0);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+14)));
w4(U+18,u32(u32(r4(R+28))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64dca3:{NFSU2_TR(0x64dca3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64dc4du);}goto L64dc4d;}}
}
B64dca5:L64dca5:{c.instructions+=1;NFSU2_TR(0x64dca5);
{goto L64dcae;}
}
B64dca7:L64dca7:{c.instructions+=1;NFSU2_TR(0x64dca7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B64dcae:L64dcae:{c.instructions+=1;NFSU2_TR(0x64dcae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64dcaf:L64dcaf:{c.instructions+=5;NFSU2_TR(0x64dcaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64dcb2:{NFSU2_TR(0x64dcb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64dcb3:{NFSU2_TR(0x64dcb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64dcb4:{NFSU2_TR(0x64dcb4);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64dcb5:{NFSU2_TR(0x64dcb5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64dcb8:L64dcb8:{c.instructions+=9;NFSU2_TR(0x64dcb8);
__builtin_memmove((R+28),(R+28),4);
}
B64dcba:{NFSU2_TR(0x64dcba);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64dcbb:{NFSU2_TR(0x64dcbb);
__builtin_memmove((R+20),(R+16),4);
}
B64dcbd:{NFSU2_TR(0x64dcbd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64dcbe:{NFSU2_TR(0x64dcbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64dcc2:{NFSU2_TR(0x64dcc2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64dcc3:{NFSU2_TR(0x64dcc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64dcc6:{NFSU2_TR(0x64dcc6);
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
B64dcc8:{NFSU2_TR(0x64dcc8);
if(r1(R+518)){{goto L64dd9d;}}
}
B64dcce:L64dcce:{c.instructions+=4;NFSU2_TR(0x64dcce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64dccf:{NFSU2_TR(0x64dccf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64dcd2:{NFSU2_TR(0x64dcd2);
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
B64dcd4:{NFSU2_TR(0x64dcd4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64dce2;}}
}
B64dcd6:L64dcd6:{c.instructions+=2;NFSU2_TR(0x64dcd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B64dcdd:{NFSU2_TR(0x64dcdd);
{goto L64dd9c;}
}
B64dce2:L64dce2:{c.instructions+=6;NFSU2_TR(0x64dce2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64dce3:{NFSU2_TR(0x64dce3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64dce6:{NFSU2_TR(0x64dce6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64dce8:{NFSU2_TR(0x64dce8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64dceb:{NFSU2_TR(0x64dceb);
__builtin_memmove((R+4),(R+24),4);
}
B64dced:{NFSU2_TR(0x64dced);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64dcf2ull));
TAIL_STATIC(0x64c399u,64c);
}
B64dcf2:L64dcf2:{c.instructions+=2;NFSU2_TR(0x64dcf2);
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
B64dcf4:{NFSU2_TR(0x64dcf4);
if(r1(R+518)){{goto L64dd94;}}
}
B64dcfa:L64dcfa:{c.instructions+=7;NFSU2_TR(0x64dcfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64dcfd:{NFSU2_TR(0x64dcfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64dd00:{NFSU2_TR(0x64dd00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64dd06:{NFSU2_TR(0x64dd06);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64dd09:{NFSU2_TR(0x64dd09);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64dd0c:{NFSU2_TR(0x64dd0c);
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
B64dd0e:{NFSU2_TR(0x64dd0e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64dd94;}}
}
B64dd14:L64dd14:{c.instructions+=2;NFSU2_TR(0x64dd14);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64dd17:{NFSU2_TR(0x64dd17);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L64dd94;}}
}
B64dd19:L64dd19:{c.instructions+=3;NFSU2_TR(0x64dd19);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64dd1c:{NFSU2_TR(0x64dd1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64dd1e:{NFSU2_TR(0x64dd1e);
if(r1(R+518)){{goto L64dd26;}}
}
B64dd20:L64dd20:{c.instructions+=2;NFSU2_TR(0x64dd20);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64dd24:{NFSU2_TR(0x64dd24);
if(r1(R+518)){{goto L64dd29;}}
}
B64dd26:L64dd26:{c.instructions+=2;NFSU2_TR(0x64dd26);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B64dd28:{NFSU2_TR(0x64dd28);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B64dd29:L64dd29:{c.instructions+=5;NFSU2_TR(0x64dd29);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64dd2c:{NFSU2_TR(0x64dd2c);
u8 U[32];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B64dd30:{NFSU2_TR(0x64dd30);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B64dd33:{NFSU2_TR(0x64dd33);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B64dd35:{NFSU2_TR(0x64dd35);
if(r1(R+512)){{goto L64dd39;}}
}
B64dd37:L64dd37:{c.instructions+=1;NFSU2_TR(0x64dd37);
__builtin_memmove((R+12),(R+8),4);
}
B64dd39:L64dd39:{c.instructions+=4;NFSU2_TR(0x64dd39);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64dd3c:{NFSU2_TR(0x64dd3c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B64dd3e:{NFSU2_TR(0x64dd3e);
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
B64dd40:{NFSU2_TR(0x64dd40);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64dd9b;}}
}
B64dd42:L64dd42:{c.instructions+=2;NFSU2_TR(0x64dd42);
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
B64dd44:{NFSU2_TR(0x64dd44);
if(r1(R+518)){{goto L64dd9b;}}
}
B64dd46:L64dd46:{c.instructions+=4;NFSU2_TR(0x64dd46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64dd49:{NFSU2_TR(0x64dd49);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64dd4c:{NFSU2_TR(0x64dd4c);
w1(R+512,u8((r4(R+8))<(u32(0x0ull))));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B64dd4f:{NFSU2_TR(0x64dd4f);
if(r1(R+518)){{goto L64dd79;}}
}
B64dd51:L64dd51:{c.instructions+=2;NFSU2_TR(0x64dd51);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B64dd52:{NFSU2_TR(0x64dd52);
if(r1(R+518)){{goto L64dd74;}}
}
B64dd54:L64dd54:{c.instructions+=2;NFSU2_TR(0x64dd54);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B64dd55:{NFSU2_TR(0x64dd55);
if(r1(R+518)){{goto L64dd5f;}}
}
B64dd57:L64dd57:{c.instructions+=2;NFSU2_TR(0x64dd57);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64dd58:{NFSU2_TR(0x64dd58);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64dd94;}}
}
B64dd5a:L64dd5a:{c.instructions+=2;NFSU2_TR(0x64dd5a);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B64dd5d:{NFSU2_TR(0x64dd5d);
{goto L64dd87;}
}
B64dd5f:L64dd5f:{c.instructions+=5;NFSU2_TR(0x64dd5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64dd62:{NFSU2_TR(0x64dd62);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64dd64:{NFSU2_TR(0x64dd64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64dd67:{NFSU2_TR(0x64dd67);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B64dd6a:{NFSU2_TR(0x64dd6a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L64dd87;}}
}
B64dd6c:L64dd6c:{c.instructions+=2;NFSU2_TR(0x64dd6c);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B64dd72:{NFSU2_TR(0x64dd72);
{goto L64dd87;}
}
B64dd74:L64dd74:{c.instructions+=2;NFSU2_TR(0x64dd74);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B64dd77:{NFSU2_TR(0x64dd77);
{goto L64dd87;}
}
B64dd79:L64dd79:{c.instructions+=5;NFSU2_TR(0x64dd79);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B64dd7b:{NFSU2_TR(0x64dd7b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64dd7e:{NFSU2_TR(0x64dd7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B64dd81:{NFSU2_TR(0x64dd81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64dd84:{NFSU2_TR(0x64dd84);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B64dd87:L64dd87:{c.instructions+=5;NFSU2_TR(0x64dd87);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64dd8a:{NFSU2_TR(0x64dd8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64dd8d:{NFSU2_TR(0x64dd8d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B64dd8e:{NFSU2_TR(0x64dd8e);
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
B64dd90:{NFSU2_TR(0x64dd90);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64dd42u);}goto L64dd42;}}
}
B64dd92:L64dd92:{c.instructions+=1;NFSU2_TR(0x64dd92);
{goto L64dd9b;}
}
B64dd94:L64dd94:{c.instructions+=1;NFSU2_TR(0x64dd94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B64dd9b:L64dd9b:{c.instructions+=1;NFSU2_TR(0x64dd9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64dd9c:L64dd9c:{c.instructions+=1;NFSU2_TR(0x64dd9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64dd9d:L64dd9d:{c.instructions+=4;NFSU2_TR(0x64dd9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64dda0:{NFSU2_TR(0x64dda0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64dda1:{NFSU2_TR(0x64dda1);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64dda2:{NFSU2_TR(0x64dda2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64dda5:L64dda5:{c.instructions+=11;NFSU2_TR(0x64dda5);
__builtin_memmove((R+28),(R+28),4);
}
B64dda7:{NFSU2_TR(0x64dda7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64dda8:{NFSU2_TR(0x64dda8);
__builtin_memmove((R+20),(R+16),4);
}
B64ddaa:{NFSU2_TR(0x64ddaa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ddab:{NFSU2_TR(0x64ddab);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ddac:{NFSU2_TR(0x64ddac);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64ddae:{NFSU2_TR(0x64ddae);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64ddb1:{NFSU2_TR(0x64ddb1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ddb2:{NFSU2_TR(0x64ddb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64ddb5:{NFSU2_TR(0x64ddb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ddb8:{NFSU2_TR(0x64ddb8);
if(r1(R+518)){{goto L64ddca;}}
}
B64ddba:L64ddba:{c.instructions+=2;NFSU2_TR(0x64ddba);
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
B64ddbc:{NFSU2_TR(0x64ddbc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64ddca;}}
}
B64ddbe:L64ddbe:{c.instructions+=2;NFSU2_TR(0x64ddbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B64ddc5:{NFSU2_TR(0x64ddc5);
{goto L64de71;}
}
B64ddca:L64ddca:{c.instructions+=6;NFSU2_TR(0x64ddca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ddcb:{NFSU2_TR(0x64ddcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64ddce:{NFSU2_TR(0x64ddce);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ddd0:{NFSU2_TR(0x64ddd0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64ddd3:{NFSU2_TR(0x64ddd3);
__builtin_memmove((R+4),(R+24),4);
}
B64ddd5:{NFSU2_TR(0x64ddd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64dddaull));
TAIL_STATIC(0x64c399u,64c);
}
B64ddda:L64ddda:{c.instructions+=2;NFSU2_TR(0x64ddda);
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
B64dddc:{NFSU2_TR(0x64dddc);
if(r1(R+518)){{goto L64de69;}}
}
B64dde2:L64dde2:{c.instructions+=7;NFSU2_TR(0x64dde2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64dde5:{NFSU2_TR(0x64dde5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64dde8:{NFSU2_TR(0x64dde8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64ddee:{NFSU2_TR(0x64ddee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64ddf1:{NFSU2_TR(0x64ddf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64ddf4:{NFSU2_TR(0x64ddf4);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(R+8))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+6)));
w4(U+10,u32(u32(r4(R+8))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64ddf6:{NFSU2_TR(0x64ddf6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64de69;}}
}
B64ddf8:L64ddf8:{c.instructions+=2;NFSU2_TR(0x64ddf8);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64ddfb:{NFSU2_TR(0x64ddfb);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L64de69;}}
}
B64ddfd:L64ddfd:{c.instructions+=3;NFSU2_TR(0x64ddfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64de00:{NFSU2_TR(0x64de00);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64de02:{NFSU2_TR(0x64de02);
if(r1(R+518)){{goto L64de0a;}}
}
B64de04:L64de04:{c.instructions+=2;NFSU2_TR(0x64de04);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64de08:{NFSU2_TR(0x64de08);
if(r1(R+518)){{goto L64de0d;}}
}
B64de0a:L64de0a:{c.instructions+=2;NFSU2_TR(0x64de0a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B64de0c:{NFSU2_TR(0x64de0c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B64de0d:L64de0d:{c.instructions+=5;NFSU2_TR(0x64de0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64de10:{NFSU2_TR(0x64de10);
u8 U[32];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B64de14:{NFSU2_TR(0x64de14);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B64de17:{NFSU2_TR(0x64de17);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B64de1a:{NFSU2_TR(0x64de1a);
if(r1(R+512)){{goto L64de1f;}}
}
B64de1c:L64de1c:{c.instructions+=1;NFSU2_TR(0x64de1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64de1f:L64de1f:{c.instructions+=4;NFSU2_TR(0x64de1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64de22:{NFSU2_TR(0x64de22);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B64de24:{NFSU2_TR(0x64de24);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64de27:{NFSU2_TR(0x64de27);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64de70;}}
}
B64de29:L64de29:{c.instructions+=2;NFSU2_TR(0x64de29);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B64de2b:{NFSU2_TR(0x64de2b);
if(r1(R+518)){{goto L64de70;}}
}
B64de2d:L64de2d:{c.instructions+=4;NFSU2_TR(0x64de2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64de30:{NFSU2_TR(0x64de30);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64de33:{NFSU2_TR(0x64de33);
w1(R+512,u8((r4(R+8))<(r4(R+12))));
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+12))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B64de35:{NFSU2_TR(0x64de35);
if(r1(R+518)){{goto L64de53;}}
}
B64de37:L64de37:{c.instructions+=2;NFSU2_TR(0x64de37);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B64de38:{NFSU2_TR(0x64de38);
if(r1(R+518)){{goto L64de53;}}
}
B64de3a:L64de3a:{c.instructions+=2;NFSU2_TR(0x64de3a);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B64de3b:{NFSU2_TR(0x64de3b);
if(r1(R+518)){{goto L64de53;}}
}
B64de3d:L64de3d:{c.instructions+=2;NFSU2_TR(0x64de3d);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64de3e:{NFSU2_TR(0x64de3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64de69;}}
}
B64de40:L64de40:{c.instructions+=7;NFSU2_TR(0x64de40);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B64de42:{NFSU2_TR(0x64de42);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B64de45:{NFSU2_TR(0x64de45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B64de48:{NFSU2_TR(0x64de48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64de4b:{NFSU2_TR(0x64de4b);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B64de4e:{NFSU2_TR(0x64de4e);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B64de51:{NFSU2_TR(0x64de51);
{goto L64de5e;}
}
B64de53:L64de53:{c.instructions+=4;NFSU2_TR(0x64de53);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B64de55:{NFSU2_TR(0x64de55);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B64de58:{NFSU2_TR(0x64de58);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B64de5b:{NFSU2_TR(0x64de5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64de5e:L64de5e:{c.instructions+=4;NFSU2_TR(0x64de5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64de61:{NFSU2_TR(0x64de61);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B64de62:{NFSU2_TR(0x64de62);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
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
B64de65:{NFSU2_TR(0x64de65);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64de29u);}goto L64de29;}}
}
B64de67:L64de67:{c.instructions+=1;NFSU2_TR(0x64de67);
{goto L64de70;}
}
B64de69:L64de69:{c.instructions+=1;NFSU2_TR(0x64de69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B64de70:L64de70:{c.instructions+=1;NFSU2_TR(0x64de70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64de71:L64de71:{c.instructions+=5;NFSU2_TR(0x64de71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64de74:{NFSU2_TR(0x64de74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64de75:{NFSU2_TR(0x64de75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64de76:{NFSU2_TR(0x64de76);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64de77:{NFSU2_TR(0x64de77);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64de7a:L64de7a:{c.instructions+=9;NFSU2_TR(0x64de7a);
__builtin_memmove((R+28),(R+28),4);
}
B64de7c:{NFSU2_TR(0x64de7c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64de7d:{NFSU2_TR(0x64de7d);
__builtin_memmove((R+20),(R+16),4);
}
B64de7f:{NFSU2_TR(0x64de7f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64de80:{NFSU2_TR(0x64de80);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64de81:{NFSU2_TR(0x64de81);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64de83:{NFSU2_TR(0x64de83);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64de86:{NFSU2_TR(0x64de86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64de89:{NFSU2_TR(0x64de89);
if(r1(R+518)){{goto L64df56;}}
}
B64de8f:L64de8f:{c.instructions+=4;NFSU2_TR(0x64de8f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64de90:{NFSU2_TR(0x64de90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64de93:{NFSU2_TR(0x64de93);
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
B64de95:{NFSU2_TR(0x64de95);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64dea3;}}
}
B64de97:L64de97:{c.instructions+=2;NFSU2_TR(0x64de97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B64de9e:{NFSU2_TR(0x64de9e);
{goto L64df55;}
}
B64dea3:L64dea3:{c.instructions+=6;NFSU2_TR(0x64dea3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64dea4:{NFSU2_TR(0x64dea4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64dea7:{NFSU2_TR(0x64dea7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64dea9:{NFSU2_TR(0x64dea9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64deac:{NFSU2_TR(0x64deac);
__builtin_memmove((R+4),(R+24),4);
}
B64deae:{NFSU2_TR(0x64deae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64deb3ull));
TAIL_STATIC(0x64c399u,64c);
}
B64deb3:L64deb3:{c.instructions+=2;NFSU2_TR(0x64deb3);
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
B64deb5:{NFSU2_TR(0x64deb5);
if(r1(R+518)){{goto L64df4d;}}
}
B64debb:L64debb:{c.instructions+=7;NFSU2_TR(0x64debb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64debe:{NFSU2_TR(0x64debe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64dec1:{NFSU2_TR(0x64dec1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64dec7:{NFSU2_TR(0x64dec7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64deca:{NFSU2_TR(0x64deca);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64decd:{NFSU2_TR(0x64decd);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(R+8))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+6)));
w4(U+10,u32(u32(r4(R+8))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64decf:{NFSU2_TR(0x64decf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64df4d;}}
}
B64ded1:L64ded1:{c.instructions+=2;NFSU2_TR(0x64ded1);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64ded4:{NFSU2_TR(0x64ded4);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L64df4d;}}
}
B64ded6:L64ded6:{c.instructions+=3;NFSU2_TR(0x64ded6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64ded9:{NFSU2_TR(0x64ded9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64dedb:{NFSU2_TR(0x64dedb);
if(r1(R+518)){{goto L64dee3;}}
}
B64dedd:L64dedd:{c.instructions+=2;NFSU2_TR(0x64dedd);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64dee1:{NFSU2_TR(0x64dee1);
if(r1(R+518)){{goto L64dee6;}}
}
B64dee3:L64dee3:{c.instructions+=2;NFSU2_TR(0x64dee3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B64dee5:{NFSU2_TR(0x64dee5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B64dee6:L64dee6:{c.instructions+=5;NFSU2_TR(0x64dee6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64dee9:{NFSU2_TR(0x64dee9);
u8 U[32];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B64deed:{NFSU2_TR(0x64deed);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B64def0:{NFSU2_TR(0x64def0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B64def3:{NFSU2_TR(0x64def3);
if(r1(R+512)){{goto L64def8;}}
}
B64def5:L64def5:{c.instructions+=1;NFSU2_TR(0x64def5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64def8:L64def8:{c.instructions+=4;NFSU2_TR(0x64def8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64defb:{NFSU2_TR(0x64defb);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B64defd:{NFSU2_TR(0x64defd);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64df00:{NFSU2_TR(0x64df00);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64df54;}}
}
B64df02:L64df02:{c.instructions+=2;NFSU2_TR(0x64df02);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B64df04:{NFSU2_TR(0x64df04);
if(r1(R+518)){{goto L64df54;}}
}
B64df06:L64df06:{c.instructions+=4;NFSU2_TR(0x64df06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64df09:{NFSU2_TR(0x64df09);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64df0c:{NFSU2_TR(0x64df0c);
w1(R+512,u8((r4(R+8))<(r4(R+12))));
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+12))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B64df0e:{NFSU2_TR(0x64df0e);
if(r1(R+518)){{goto L64df37;}}
}
B64df10:L64df10:{c.instructions+=2;NFSU2_TR(0x64df10);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B64df11:{NFSU2_TR(0x64df11);
if(r1(R+518)){{goto L64df37;}}
}
B64df13:L64df13:{c.instructions+=2;NFSU2_TR(0x64df13);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B64df14:{NFSU2_TR(0x64df14);
if(r1(R+518)){{goto L64df37;}}
}
B64df16:L64df16:{c.instructions+=2;NFSU2_TR(0x64df16);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64df17:{NFSU2_TR(0x64df17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64df4d;}}
}
B64df19:L64df19:{c.instructions+=6;NFSU2_TR(0x64df19);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B64df1c:{NFSU2_TR(0x64df1c);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B64df22:{NFSU2_TR(0x64df22);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B64df24:{NFSU2_TR(0x64df24);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B64df26:{NFSU2_TR(0x64df26);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B64df29:{NFSU2_TR(0x64df29);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L64df30;}}
}
B64df2b:L64df2b:{c.instructions+=3;NFSU2_TR(0x64df2b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64df2d:{NFSU2_TR(0x64df2d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B64df2e:{NFSU2_TR(0x64df2e);
{goto L64df32;}
}
B64df30:L64df30:{c.instructions+=1;NFSU2_TR(0x64df30);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64df32:L64df32:{c.instructions+=2;NFSU2_TR(0x64df32);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B64df35:{NFSU2_TR(0x64df35);
{goto L64df42;}
}
B64df37:L64df37:{c.instructions+=4;NFSU2_TR(0x64df37);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B64df39:{NFSU2_TR(0x64df39);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64df3c:{NFSU2_TR(0x64df3c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B64df3f:{NFSU2_TR(0x64df3f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B64df42:L64df42:{c.instructions+=4;NFSU2_TR(0x64df42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64df45:{NFSU2_TR(0x64df45);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B64df46:{NFSU2_TR(0x64df46);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
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
B64df49:{NFSU2_TR(0x64df49);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64df02u);}goto L64df02;}}
}
B64df4b:L64df4b:{c.instructions+=1;NFSU2_TR(0x64df4b);
{goto L64df54;}
}
B64df4d:L64df4d:{c.instructions+=1;NFSU2_TR(0x64df4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B64df54:L64df54:{c.instructions+=1;NFSU2_TR(0x64df54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64df55:L64df55:{c.instructions+=1;NFSU2_TR(0x64df55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64df56:L64df56:{c.instructions+=4;NFSU2_TR(0x64df56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64df59:{NFSU2_TR(0x64df59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64df5a:{NFSU2_TR(0x64df5a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64df5b:{NFSU2_TR(0x64df5b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64df5e:L64df5e:{c.instructions+=11;NFSU2_TR(0x64df5e);
__builtin_memmove((R+28),(R+28),4);
}
B64df60:{NFSU2_TR(0x64df60);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64df61:{NFSU2_TR(0x64df61);
__builtin_memmove((R+20),(R+16),4);
}
B64df63:{NFSU2_TR(0x64df63);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64df64:{NFSU2_TR(0x64df64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64df68:{NFSU2_TR(0x64df68);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64df69:{NFSU2_TR(0x64df69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64df6c:{NFSU2_TR(0x64df6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64df6e:{NFSU2_TR(0x64df6e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64df6f:{NFSU2_TR(0x64df6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64df72:{NFSU2_TR(0x64df72);
if(r1(R+518)){{goto L64df84;}}
}
B64df74:L64df74:{c.instructions+=2;NFSU2_TR(0x64df74);
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
B64df76:{NFSU2_TR(0x64df76);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64df84;}}
}
B64df78:L64df78:{c.instructions+=2;NFSU2_TR(0x64df78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B64df7f:{NFSU2_TR(0x64df7f);
TAIL_STATIC(0x64e01eu,64e);
}
B64df84:L64df84:{c.instructions+=6;NFSU2_TR(0x64df84);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64df85:{NFSU2_TR(0x64df85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64df88:{NFSU2_TR(0x64df88);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64df8a:{NFSU2_TR(0x64df8a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64df8d:{NFSU2_TR(0x64df8d);
__builtin_memmove((R+4),(R+24),4);
}
B64df8f:{NFSU2_TR(0x64df8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64df94ull));
TAIL_STATIC(0x64c399u,64c);
}
B64df94:L64df94:{c.instructions+=2;NFSU2_TR(0x64df94);
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
B64df96:{NFSU2_TR(0x64df96);
if(r1(R+518)){TAIL_STATIC(0x64e016u,64e);}
}
B64df98:L64df98:{c.instructions+=7;NFSU2_TR(0x64df98);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64df9b:{NFSU2_TR(0x64df9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64df9e:{NFSU2_TR(0x64df9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64dfa4:{NFSU2_TR(0x64dfa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64dfa7:{NFSU2_TR(0x64dfa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64dfaa:{NFSU2_TR(0x64dfaa);
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
B64dfac:{NFSU2_TR(0x64dfac);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x64e016u,64e);}
}
B64dfae:L64dfae:{c.instructions+=2;NFSU2_TR(0x64dfae);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64dfb1:{NFSU2_TR(0x64dfb1);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){TAIL_STATIC(0x64e016u,64e);}
}
B64dfb3:L64dfb3:{c.instructions+=3;NFSU2_TR(0x64dfb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64dfb6:{NFSU2_TR(0x64dfb6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64dfb8:{NFSU2_TR(0x64dfb8);
if(r1(R+518)){{goto L64dfc0;}}
}
B64dfba:L64dfba:{c.instructions+=2;NFSU2_TR(0x64dfba);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64dfbe:{NFSU2_TR(0x64dfbe);
if(r1(R+518)){{goto L64dfc3;}}
}
B64dfc0:L64dfc0:{c.instructions+=2;NFSU2_TR(0x64dfc0);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B64dfc2:{NFSU2_TR(0x64dfc2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B64dfc3:L64dfc3:{c.instructions+=5;NFSU2_TR(0x64dfc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64dfc6:{NFSU2_TR(0x64dfc6);
u8 U[32];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B64dfca:{NFSU2_TR(0x64dfca);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B64dfcd:{NFSU2_TR(0x64dfcd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B64dfcf:{NFSU2_TR(0x64dfcf);
if(r1(R+512)){{goto L64dfd3;}}
}
B64dfd1:L64dfd1:{c.instructions+=1;NFSU2_TR(0x64dfd1);
__builtin_memmove((R+12),(R+8),4);
}
B64dfd3:L64dfd3:{c.instructions+=4;NFSU2_TR(0x64dfd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64dfd6:{NFSU2_TR(0x64dfd6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B64dfd8:{NFSU2_TR(0x64dfd8);
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
B64dfda:{NFSU2_TR(0x64dfda);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x64e01du,64e);}
}
B64dfdc:L64dfdc:{c.instructions+=2;NFSU2_TR(0x64dfdc);
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
B64dfde:{NFSU2_TR(0x64dfde);
if(r1(R+518)){TAIL_STATIC(0x64e01du,64e);}
}
B64dfe0:L64dfe0:{c.instructions+=4;NFSU2_TR(0x64dfe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64dfe3:{NFSU2_TR(0x64dfe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64dfe6:{NFSU2_TR(0x64dfe6);
w1(R+512,u8((r4(R+8))<(u32(0x0ull))));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B64dfe9:{NFSU2_TR(0x64dfe9);
if(r1(R+518)){TAIL_STATIC(0x64e001u,64e);}
}
B64dfeb:L64dfeb:{c.instructions+=2;NFSU2_TR(0x64dfeb);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B64dfec:{NFSU2_TR(0x64dfec);
if(r1(R+518)){{goto L64dffc;}}
}
B64dfee:L64dfee:{c.instructions+=2;NFSU2_TR(0x64dfee);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B64dfef:{NFSU2_TR(0x64dfef);
if(r1(R+518)){{goto L64dffc;}}
}
B64dff1:L64dff1:{c.instructions+=2;NFSU2_TR(0x64dff1);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64dff2:{NFSU2_TR(0x64dff2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x64e016u,64e);}
}
B64dff4:L64dff4:{c.instructions+=3;NFSU2_TR(0x64dff4);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+28));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B64dff7:{NFSU2_TR(0x64dff7);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B64dffa:{NFSU2_TR(0x64dffa);
TAIL_STATIC(0x64e00cu,64e);
}
B64dffc:L64dffc:{c.instructions+=2;NFSU2_TR(0x64dffc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B64dfff:{NFSU2_TR(0x64dfff);
TAIL_STATIC(0x64e009u,64e);
}
XIT:NFSU2_TR_EXIT(0x64d,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
