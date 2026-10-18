#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_59e(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_5e6(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x59d,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x59d,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_59d(u8* __restrict R,Cpu& c);
u32 page_59d(Cpu& c){return body_59d(c.regs.data(),c);}
__attribute__((noinline)) u32 body_59d(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x59d004:goto L59d004;
case 0x59d00a:c.instructions+=10;goto B59d00a;
case 0x59d010:c.instructions+=9;goto B59d010;
case 0x59d016:c.instructions+=8;goto B59d016;
case 0x59d01a:c.instructions+=7;goto B59d01a;
case 0x59d01b:c.instructions+=6;goto B59d01b;
case 0x59d01c:c.instructions+=5;goto B59d01c;
case 0x59d022:c.instructions+=4;goto B59d022;
case 0x59d023:c.instructions+=3;goto B59d023;
case 0x59d025:c.instructions+=2;goto B59d025;
case 0x59d026:c.instructions+=1;goto B59d026;
case 0x59d030:goto L59d030;
case 0x59d031:c.instructions+=6;goto B59d031;
case 0x59d032:c.instructions+=5;goto B59d032;
case 0x59d034:c.instructions+=4;goto B59d034;
case 0x59d035:c.instructions+=3;goto B59d035;
case 0x59d038:c.instructions+=2;goto B59d038;
case 0x59d039:c.instructions+=1;goto B59d039;
case 0x59d03e:goto L59d03e;
case 0x59d041:c.instructions+=3;goto B59d041;
case 0x59d047:c.instructions+=2;goto B59d047;
case 0x59d04a:c.instructions+=1;goto B59d04a;
case 0x59d04f:goto L59d04f;
case 0x59d052:c.instructions+=3;goto B59d052;
case 0x59d056:c.instructions+=2;goto B59d056;
case 0x59d057:c.instructions+=1;goto B59d057;
case 0x59d05c:goto L59d05c;
case 0x59d05f:c.instructions+=18;goto B59d05f;
case 0x59d063:c.instructions+=17;goto B59d063;
case 0x59d065:c.instructions+=16;goto B59d065;
case 0x59d068:c.instructions+=15;goto B59d068;
case 0x59d06a:c.instructions+=14;goto B59d06a;
case 0x59d06c:c.instructions+=13;goto B59d06c;
case 0x59d06e:c.instructions+=12;goto B59d06e;
case 0x59d071:c.instructions+=11;goto B59d071;
case 0x59d077:c.instructions+=10;goto B59d077;
case 0x59d07d:c.instructions+=9;goto B59d07d;
case 0x59d080:c.instructions+=8;goto B59d080;
case 0x59d086:c.instructions+=7;goto B59d086;
case 0x59d089:c.instructions+=6;goto B59d089;
case 0x59d08c:c.instructions+=5;goto B59d08c;
case 0x59d092:c.instructions+=4;goto B59d092;
case 0x59d098:c.instructions+=3;goto B59d098;
case 0x59d09a:c.instructions+=2;goto B59d09a;
case 0x59d09d:c.instructions+=1;goto B59d09d;
case 0x59d09f:goto L59d09f;
case 0x59d0a5:c.instructions+=5;goto B59d0a5;
case 0x59d0a8:c.instructions+=4;goto B59d0a8;
case 0x59d0ae:c.instructions+=3;goto B59d0ae;
case 0x59d0b0:c.instructions+=2;goto B59d0b0;
case 0x59d0b3:c.instructions+=1;goto B59d0b3;
case 0x59d0b5:goto L59d0b5;
case 0x59d0b7:goto L59d0b7;
case 0x59d0bd:c.instructions+=3;goto B59d0bd;
case 0x59d0bf:c.instructions+=2;goto B59d0bf;
case 0x59d0c2:c.instructions+=1;goto B59d0c2;
case 0x59d0c4:goto L59d0c4;
case 0x59d0c7:c.instructions+=6;goto B59d0c7;
case 0x59d0cd:c.instructions+=5;goto B59d0cd;
case 0x59d0d0:c.instructions+=4;goto B59d0d0;
case 0x59d0d6:c.instructions+=3;goto B59d0d6;
case 0x59d0d8:c.instructions+=2;goto B59d0d8;
case 0x59d0db:c.instructions+=1;goto B59d0db;
case 0x59d0dd:goto L59d0dd;
case 0x59d0e0:goto L59d0e0;
case 0x59d0e6:c.instructions+=2;goto B59d0e6;
case 0x59d0e8:c.instructions+=1;goto B59d0e8;
case 0x59d0ea:goto L59d0ea;
case 0x59d0ed:c.instructions+=4;goto B59d0ed;
case 0x59d0f3:c.instructions+=3;goto B59d0f3;
case 0x59d0f5:c.instructions+=2;goto B59d0f5;
case 0x59d0f8:c.instructions+=1;goto B59d0f8;
case 0x59d0fa:goto L59d0fa;
case 0x59d0fc:goto L59d0fc;
case 0x59d0ff:c.instructions+=1;goto B59d0ff;
case 0x59d101:goto L59d101;
case 0x59d104:c.instructions+=4;goto B59d104;
case 0x59d10a:c.instructions+=3;goto B59d10a;
case 0x59d10c:c.instructions+=2;goto B59d10c;
case 0x59d10f:c.instructions+=1;goto B59d10f;
case 0x59d111:goto L59d111;
case 0x59d114:goto L59d114;
case 0x59d117:c.instructions+=4;goto B59d117;
case 0x59d11d:c.instructions+=3;goto B59d11d;
case 0x59d11f:c.instructions+=2;goto B59d11f;
case 0x59d122:c.instructions+=1;goto B59d122;
case 0x59d124:goto L59d124;
case 0x59d125:c.instructions+=4;goto B59d125;
case 0x59d12b:c.instructions+=3;goto B59d12b;
case 0x59d12c:c.instructions+=2;goto B59d12c;
case 0x59d12d:c.instructions+=1;goto B59d12d;
case 0x59d12e:goto L59d12e;
case 0x59d131:c.instructions+=4;goto B59d131;
case 0x59d137:c.instructions+=3;goto B59d137;
case 0x59d139:c.instructions+=2;goto B59d139;
case 0x59d13c:c.instructions+=1;goto B59d13c;
case 0x59d13e:goto L59d13e;
case 0x59d13f:c.instructions+=4;goto B59d13f;
case 0x59d149:c.instructions+=3;goto B59d149;
case 0x59d14a:c.instructions+=2;goto B59d14a;
case 0x59d14b:c.instructions+=1;goto B59d14b;
case 0x59d14c:goto L59d14c;
case 0x59d14d:c.instructions+=4;goto B59d14d;
case 0x59d157:c.instructions+=3;goto B59d157;
case 0x59d158:c.instructions+=2;goto B59d158;
case 0x59d159:c.instructions+=1;goto B59d159;
case 0x59d160:goto L59d160;
case 0x59d161:c.instructions+=11;goto B59d161;
case 0x59d163:c.instructions+=10;goto B59d163;
case 0x59d166:c.instructions+=9;goto B59d166;
case 0x59d169:c.instructions+=8;goto B59d169;
case 0x59d16c:c.instructions+=7;goto B59d16c;
case 0x59d16e:c.instructions+=6;goto B59d16e;
case 0x59d16f:c.instructions+=5;goto B59d16f;
case 0x59d170:c.instructions+=4;goto B59d170;
case 0x59d172:c.instructions+=3;goto B59d172;
case 0x59d173:c.instructions+=2;goto B59d173;
case 0x59d179:c.instructions+=1;goto B59d179;
case 0x59d17b:goto L59d17b;
case 0x59d17e:c.instructions+=11;goto B59d17e;
case 0x59d181:c.instructions+=10;goto B59d181;
case 0x59d182:c.instructions+=9;goto B59d182;
case 0x59d184:c.instructions+=8;goto B59d184;
case 0x59d187:c.instructions+=7;goto B59d187;
case 0x59d18d:c.instructions+=6;goto B59d18d;
case 0x59d18e:c.instructions+=5;goto B59d18e;
case 0x59d194:c.instructions+=4;goto B59d194;
case 0x59d195:c.instructions+=3;goto B59d195;
case 0x59d19b:c.instructions+=2;goto B59d19b;
case 0x59d19c:c.instructions+=1;goto B59d19c;
case 0x59d1a1:goto L59d1a1;
case 0x59d1a4:goto L59d1a4;
case 0x59d1a7:c.instructions+=4;goto B59d1a7;
case 0x59d1ad:c.instructions+=3;goto B59d1ad;
case 0x59d1af:c.instructions+=2;goto B59d1af;
case 0x59d1b2:c.instructions+=1;goto B59d1b2;
case 0x59d1b4:goto L59d1b4;
case 0x59d1ba:c.instructions+=6;goto B59d1ba;
case 0x59d1bb:c.instructions+=5;goto B59d1bb;
case 0x59d1c1:c.instructions+=4;goto B59d1c1;
case 0x59d1c5:c.instructions+=3;goto B59d1c5;
case 0x59d1c6:c.instructions+=2;goto B59d1c6;
case 0x59d1c7:c.instructions+=1;goto B59d1c7;
case 0x59d1cc:goto L59d1cc;
case 0x59d1cd:c.instructions+=5;goto B59d1cd;
case 0x59d1d1:c.instructions+=4;goto B59d1d1;
case 0x59d1d2:c.instructions+=3;goto B59d1d2;
case 0x59d1d6:c.instructions+=2;goto B59d1d6;
case 0x59d1d7:c.instructions+=1;goto B59d1d7;
case 0x59d1dc:goto L59d1dc;
case 0x59d1e0:c.instructions+=14;goto B59d1e0;
case 0x59d1e3:c.instructions+=13;goto B59d1e3;
case 0x59d1e6:c.instructions+=12;goto B59d1e6;
case 0x59d1ea:c.instructions+=11;goto B59d1ea;
case 0x59d1ed:c.instructions+=10;goto B59d1ed;
case 0x59d1ef:c.instructions+=9;goto B59d1ef;
case 0x59d1f3:c.instructions+=8;goto B59d1f3;
case 0x59d1f5:c.instructions+=7;goto B59d1f5;
case 0x59d1f7:c.instructions+=6;goto B59d1f7;
case 0x59d1fd:c.instructions+=5;goto B59d1fd;
case 0x59d203:c.instructions+=4;goto B59d203;
case 0x59d209:c.instructions+=3;goto B59d209;
case 0x59d20b:c.instructions+=2;goto B59d20b;
case 0x59d20e:c.instructions+=1;goto B59d20e;
case 0x59d210:goto L59d210;
case 0x59d212:c.instructions+=1;goto B59d212;
case 0x59d218:goto L59d218;
case 0x59d21b:c.instructions+=8;goto B59d21b;
case 0x59d221:c.instructions+=7;goto B59d221;
case 0x59d227:c.instructions+=6;goto B59d227;
case 0x59d228:c.instructions+=5;goto B59d228;
case 0x59d229:c.instructions+=4;goto B59d229;
case 0x59d22a:c.instructions+=3;goto B59d22a;
case 0x59d22c:c.instructions+=2;goto B59d22c;
case 0x59d22d:c.instructions+=1;goto B59d22d;
case 0x59d230:goto L59d230;
case 0x59d236:c.instructions+=7;goto B59d236;
case 0x59d237:c.instructions+=6;goto B59d237;
case 0x59d241:c.instructions+=5;goto B59d241;
case 0x59d242:c.instructions+=4;goto B59d242;
case 0x59d243:c.instructions+=3;goto B59d243;
case 0x59d245:c.instructions+=2;goto B59d245;
case 0x59d246:c.instructions+=1;goto B59d246;
case 0x59d250:goto L59d250;
case 0x59d251:c.instructions+=18;goto B59d251;
case 0x59d253:c.instructions+=17;goto B59d253;
case 0x59d256:c.instructions+=16;goto B59d256;
case 0x59d259:c.instructions+=15;goto B59d259;
case 0x59d25a:c.instructions+=14;goto B59d25a;
case 0x59d25d:c.instructions+=13;goto B59d25d;
case 0x59d25e:c.instructions+=12;goto B59d25e;
case 0x59d25f:c.instructions+=11;goto B59d25f;
case 0x59d262:c.instructions+=10;goto B59d262;
case 0x59d264:c.instructions+=9;goto B59d264;
case 0x59d267:c.instructions+=8;goto B59d267;
case 0x59d26a:c.instructions+=7;goto B59d26a;
case 0x59d26d:c.instructions+=6;goto B59d26d;
case 0x59d271:c.instructions+=5;goto B59d271;
case 0x59d272:c.instructions+=4;goto B59d272;
case 0x59d273:c.instructions+=3;goto B59d273;
case 0x59d274:c.instructions+=2;goto B59d274;
case 0x59d275:c.instructions+=1;goto B59d275;
case 0x59d27a:goto L59d27a;
case 0x59d280:c.instructions+=3;goto B59d280;
case 0x59d284:c.instructions+=2;goto B59d284;
case 0x59d286:c.instructions+=1;goto B59d286;
case 0x59d288:goto L59d288;
case 0x59d28a:c.instructions+=1;goto B59d28a;
case 0x59d290:goto L59d290;
case 0x59d292:c.instructions+=10;goto B59d292;
case 0x59d296:c.instructions+=9;goto B59d296;
case 0x59d299:c.instructions+=8;goto B59d299;
case 0x59d29c:c.instructions+=7;goto B59d29c;
case 0x59d2a0:c.instructions+=6;goto B59d2a0;
case 0x59d2a2:c.instructions+=5;goto B59d2a2;
case 0x59d2a6:c.instructions+=4;goto B59d2a6;
case 0x59d2a7:c.instructions+=3;goto B59d2a7;
case 0x59d2ab:c.instructions+=2;goto B59d2ab;
case 0x59d2ac:c.instructions+=1;goto B59d2ac;
case 0x59d2b1:goto L59d2b1;
case 0x59d2b7:c.instructions+=6;goto B59d2b7;
case 0x59d2bb:c.instructions+=5;goto B59d2bb;
case 0x59d2c0:c.instructions+=4;goto B59d2c0;
case 0x59d2c3:c.instructions+=3;goto B59d2c3;
case 0x59d2c5:c.instructions+=2;goto B59d2c5;
case 0x59d2c9:c.instructions+=1;goto B59d2c9;
case 0x59d2cb:goto L59d2cb;
case 0x59d2d0:c.instructions+=2;goto B59d2d0;
case 0x59d2d2:c.instructions+=1;goto B59d2d2;
case 0x59d2d4:goto L59d2d4;
case 0x59d2d7:c.instructions+=1;goto B59d2d7;
case 0x59d2dd:goto L59d2dd;
case 0x59d2e0:c.instructions+=12;goto B59d2e0;
case 0x59d2e3:c.instructions+=11;goto B59d2e3;
case 0x59d2e6:c.instructions+=10;goto B59d2e6;
case 0x59d2e9:c.instructions+=9;goto B59d2e9;
case 0x59d2ec:c.instructions+=8;goto B59d2ec;
case 0x59d2ee:c.instructions+=7;goto B59d2ee;
case 0x59d2f1:c.instructions+=6;goto B59d2f1;
case 0x59d2f3:c.instructions+=5;goto B59d2f3;
case 0x59d2f5:c.instructions+=4;goto B59d2f5;
case 0x59d2fb:c.instructions+=3;goto B59d2fb;
case 0x59d2fd:c.instructions+=2;goto B59d2fd;
case 0x59d300:c.instructions+=1;goto B59d300;
case 0x59d302:goto L59d302;
case 0x59d305:c.instructions+=9;goto B59d305;
case 0x59d307:c.instructions+=8;goto B59d307;
case 0x59d30d:c.instructions+=7;goto B59d30d;
case 0x59d313:c.instructions+=6;goto B59d313;
case 0x59d314:c.instructions+=5;goto B59d314;
case 0x59d315:c.instructions+=4;goto B59d315;
case 0x59d316:c.instructions+=3;goto B59d316;
case 0x59d318:c.instructions+=2;goto B59d318;
case 0x59d319:c.instructions+=1;goto B59d319;
case 0x59d31c:goto L59d31c;
case 0x59d320:c.instructions+=19;goto B59d320;
case 0x59d322:c.instructions+=18;goto B59d322;
case 0x59d326:c.instructions+=17;goto B59d326;
case 0x59d329:c.instructions+=16;goto B59d329;
case 0x59d32c:c.instructions+=15;goto B59d32c;
case 0x59d32d:c.instructions+=14;goto B59d32d;
case 0x59d331:c.instructions+=13;goto B59d331;
case 0x59d333:c.instructions+=12;goto B59d333;
case 0x59d334:c.instructions+=11;goto B59d334;
case 0x59d337:c.instructions+=10;goto B59d337;
case 0x59d339:c.instructions+=9;goto B59d339;
case 0x59d33b:c.instructions+=8;goto B59d33b;
case 0x59d33d:c.instructions+=7;goto B59d33d;
case 0x59d340:c.instructions+=6;goto B59d340;
case 0x59d341:c.instructions+=5;goto B59d341;
case 0x59d343:c.instructions+=4;goto B59d343;
case 0x59d345:c.instructions+=3;goto B59d345;
case 0x59d347:c.instructions+=2;goto B59d347;
case 0x59d348:c.instructions+=1;goto B59d348;
case 0x59d350:goto L59d350;
case 0x59d353:c.instructions+=25;goto B59d353;
case 0x59d357:c.instructions+=24;goto B59d357;
case 0x59d359:c.instructions+=23;goto B59d359;
case 0x59d35c:c.instructions+=22;goto B59d35c;
case 0x59d35f:c.instructions+=21;goto B59d35f;
case 0x59d365:c.instructions+=20;goto B59d365;
case 0x59d36b:c.instructions+=19;goto B59d36b;
case 0x59d371:c.instructions+=18;goto B59d371;
case 0x59d377:c.instructions+=17;goto B59d377;
case 0x59d37d:c.instructions+=16;goto B59d37d;
case 0x59d383:c.instructions+=15;goto B59d383;
case 0x59d389:c.instructions+=14;goto B59d389;
case 0x59d38f:c.instructions+=13;goto B59d38f;
case 0x59d395:c.instructions+=12;goto B59d395;
case 0x59d398:c.instructions+=11;goto B59d398;
case 0x59d39a:c.instructions+=10;goto B59d39a;
case 0x59d3a0:c.instructions+=9;goto B59d3a0;
case 0x59d3a6:c.instructions+=8;goto B59d3a6;
case 0x59d3a9:c.instructions+=7;goto B59d3a9;
case 0x59d3ab:c.instructions+=6;goto B59d3ab;
case 0x59d3ae:c.instructions+=5;goto B59d3ae;
case 0x59d3b1:c.instructions+=4;goto B59d3b1;
case 0x59d3b7:c.instructions+=3;goto B59d3b7;
case 0x59d3b9:c.instructions+=2;goto B59d3b9;
case 0x59d3bb:c.instructions+=1;goto B59d3bb;
case 0x59d3bd:goto L59d3bd;
case 0x59d3c4:goto L59d3c4;
case 0x59d3ca:c.instructions+=2;goto B59d3ca;
case 0x59d3cc:c.instructions+=1;goto B59d3cc;
case 0x59d3ce:goto L59d3ce;
case 0x59d3d4:c.instructions+=4;goto B59d3d4;
case 0x59d3da:c.instructions+=3;goto B59d3da;
case 0x59d3dc:c.instructions+=2;goto B59d3dc;
case 0x59d3df:c.instructions+=1;goto B59d3df;
case 0x59d3e1:goto L59d3e1;
case 0x59d3e4:c.instructions+=5;goto B59d3e4;
case 0x59d3e7:c.instructions+=4;goto B59d3e7;
case 0x59d3ed:c.instructions+=3;goto B59d3ed;
case 0x59d3f3:c.instructions+=2;goto B59d3f3;
case 0x59d3f6:c.instructions+=1;goto B59d3f6;
case 0x59d3f9:goto L59d3f9;
case 0x59d3fb:c.instructions+=1;goto B59d3fb;
case 0x59d400:goto L59d400;
case 0x59d403:c.instructions+=20;goto B59d403;
case 0x59d406:c.instructions+=19;goto B59d406;
case 0x59d40c:c.instructions+=18;goto B59d40c;
case 0x59d412:c.instructions+=17;goto B59d412;
case 0x59d415:c.instructions+=16;goto B59d415;
case 0x59d418:c.instructions+=15;goto B59d418;
case 0x59d41e:c.instructions+=14;goto B59d41e;
case 0x59d424:c.instructions+=13;goto B59d424;
case 0x59d426:c.instructions+=12;goto B59d426;
case 0x59d42c:c.instructions+=11;goto B59d42c;
case 0x59d42f:c.instructions+=10;goto B59d42f;
case 0x59d431:c.instructions+=9;goto B59d431;
case 0x59d437:c.instructions+=8;goto B59d437;
case 0x59d43a:c.instructions+=7;goto B59d43a;
case 0x59d43e:c.instructions+=6;goto B59d43e;
case 0x59d440:c.instructions+=5;goto B59d440;
case 0x59d442:c.instructions+=4;goto B59d442;
case 0x59d444:c.instructions+=3;goto B59d444;
case 0x59d446:c.instructions+=2;goto B59d446;
case 0x59d449:c.instructions+=1;goto B59d449;
case 0x59d44b:goto L59d44b;
case 0x59d451:c.instructions+=4;goto B59d451;
case 0x59d453:c.instructions+=3;goto B59d453;
case 0x59d455:c.instructions+=2;goto B59d455;
case 0x59d458:c.instructions+=1;goto B59d458;
case 0x59d45a:goto L59d45a;
case 0x59d464:c.instructions+=2;goto B59d464;
case 0x59d467:c.instructions+=1;goto B59d467;
case 0x59d46a:goto L59d46a;
case 0x59d470:c.instructions+=2;goto B59d470;
case 0x59d473:c.instructions+=1;goto B59d473;
case 0x59d476:goto L59d476;
case 0x59d478:c.instructions+=2;goto B59d478;
case 0x59d482:c.instructions+=1;goto B59d482;
case 0x59d490:goto L59d490;
case 0x59d496:c.instructions+=2;goto B59d496;
case 0x59d498:c.instructions+=1;goto B59d498;
case 0x59d49a:goto L59d49a;
case 0x59d49d:c.instructions+=4;goto B59d49d;
case 0x59d4a3:c.instructions+=3;goto B59d4a3;
case 0x59d4a5:c.instructions+=2;goto B59d4a5;
case 0x59d4a8:c.instructions+=1;goto B59d4a8;
case 0x59d4aa:goto L59d4aa;
case 0x59d4ad:c.instructions+=2;goto B59d4ad;
case 0x59d4b1:c.instructions+=1;goto B59d4b1;
case 0x59d4b3:goto L59d4b3;
case 0x59d4b9:c.instructions+=1;goto B59d4b9;
case 0x59d4ba:goto L59d4ba;
case 0x59d4bd:c.instructions+=7;goto B59d4bd;
case 0x59d4c3:c.instructions+=6;goto B59d4c3;
case 0x59d4c9:c.instructions+=5;goto B59d4c9;
case 0x59d4cf:c.instructions+=4;goto B59d4cf;
case 0x59d4d5:c.instructions+=3;goto B59d4d5;
case 0x59d4d7:c.instructions+=2;goto B59d4d7;
case 0x59d4da:c.instructions+=1;goto B59d4da;
case 0x59d4dc:goto L59d4dc;
case 0x59d4de:c.instructions+=2;goto B59d4de;
case 0x59d4e4:c.instructions+=1;goto B59d4e4;
case 0x59d4e6:goto L59d4e6;
case 0x59d4ec:c.instructions+=3;goto B59d4ec;
case 0x59d4ee:c.instructions+=2;goto B59d4ee;
case 0x59d4f1:c.instructions+=1;goto B59d4f1;
case 0x59d4f3:goto L59d4f3;
case 0x59d4f5:c.instructions+=1;goto B59d4f5;
case 0x59d4fb:goto L59d4fb;
case 0x59d501:c.instructions+=4;goto B59d501;
case 0x59d507:c.instructions+=3;goto B59d507;
case 0x59d509:c.instructions+=2;goto B59d509;
case 0x59d50f:c.instructions+=1;goto B59d50f;
case 0x59d510:goto L59d510;
case 0x59d511:c.instructions+=5;goto B59d511;
case 0x59d516:c.instructions+=4;goto B59d516;
case 0x59d518:c.instructions+=3;goto B59d518;
case 0x59d519:c.instructions+=2;goto B59d519;
case 0x59d51b:c.instructions+=1;goto B59d51b;
case 0x59d51d:goto L59d51d;
case 0x59d521:c.instructions+=3;goto B59d521;
case 0x59d522:c.instructions+=2;goto B59d522;
case 0x59d527:c.instructions+=1;goto B59d527;
case 0x59d52c:goto L59d52c;
case 0x59d532:c.instructions+=5;goto B59d532;
case 0x59d533:c.instructions+=4;goto B59d533;
case 0x59d539:c.instructions+=3;goto B59d539;
case 0x59d53f:c.instructions+=2;goto B59d53f;
case 0x59d540:c.instructions+=1;goto B59d540;
case 0x59d543:goto L59d543;
case 0x59d547:c.instructions+=9;goto B59d547;
case 0x59d548:c.instructions+=8;goto B59d548;
case 0x59d54e:c.instructions+=7;goto B59d54e;
case 0x59d54f:c.instructions+=6;goto B59d54f;
case 0x59d552:c.instructions+=5;goto B59d552;
case 0x59d554:c.instructions+=4;goto B59d554;
case 0x59d55a:c.instructions+=3;goto B59d55a;
case 0x59d560:c.instructions+=2;goto B59d560;
case 0x59d564:c.instructions+=1;goto B59d564;
case 0x59d569:goto L59d569;
case 0x59d56f:c.instructions+=7;goto B59d56f;
case 0x59d573:c.instructions+=6;goto B59d573;
case 0x59d575:c.instructions+=5;goto B59d575;
case 0x59d578:c.instructions+=4;goto B59d578;
case 0x59d57c:c.instructions+=3;goto B59d57c;
case 0x59d57f:c.instructions+=2;goto B59d57f;
case 0x59d583:c.instructions+=1;goto B59d583;
case 0x59d585:goto L59d585;
case 0x59d589:c.instructions+=3;goto B59d589;
case 0x59d58a:c.instructions+=2;goto B59d58a;
case 0x59d590:c.instructions+=1;goto B59d590;
case 0x59d595:goto L59d595;
case 0x59d598:c.instructions+=7;goto B59d598;
case 0x59d59b:c.instructions+=6;goto B59d59b;
case 0x59d59c:c.instructions+=5;goto B59d59c;
case 0x59d59d:c.instructions+=4;goto B59d59d;
case 0x59d59e:c.instructions+=3;goto B59d59e;
case 0x59d5a4:c.instructions+=2;goto B59d5a4;
case 0x59d5a5:c.instructions+=1;goto B59d5a5;
case 0x59d5a8:goto L59d5a8;
case 0x59d5ac:c.instructions+=3;goto B59d5ac;
case 0x59d5b3:c.instructions+=2;goto B59d5b3;
case 0x59d5b4:c.instructions+=1;goto B59d5b4;
case 0x59d5b9:goto L59d5b9;
case 0x59d5bd:c.instructions+=3;goto B59d5bd;
case 0x59d5c4:c.instructions+=2;goto B59d5c4;
case 0x59d5c5:c.instructions+=1;goto B59d5c5;
case 0x59d5ca:goto L59d5ca;
case 0x59d5ce:c.instructions+=13;goto B59d5ce;
case 0x59d5d1:c.instructions+=12;goto B59d5d1;
case 0x59d5d2:c.instructions+=11;goto B59d5d2;
case 0x59d5d6:c.instructions+=10;goto B59d5d6;
case 0x59d5d7:c.instructions+=9;goto B59d5d7;
case 0x59d5d9:c.instructions+=8;goto B59d5d9;
case 0x59d5da:c.instructions+=7;goto B59d5da;
case 0x59d5de:c.instructions+=6;goto B59d5de;
case 0x59d5e0:c.instructions+=5;goto B59d5e0;
case 0x59d5e4:c.instructions+=4;goto B59d5e4;
case 0x59d5e7:c.instructions+=3;goto B59d5e7;
case 0x59d5ed:c.instructions+=2;goto B59d5ed;
case 0x59d5ee:c.instructions+=1;goto B59d5ee;
case 0x59d600:goto L59d600;
case 0x59d601:c.instructions+=13;goto B59d601;
case 0x59d603:c.instructions+=12;goto B59d603;
case 0x59d606:c.instructions+=11;goto B59d606;
case 0x59d60c:c.instructions+=10;goto B59d60c;
case 0x59d60d:c.instructions+=9;goto B59d60d;
case 0x59d60e:c.instructions+=8;goto B59d60e;
case 0x59d610:c.instructions+=7;goto B59d610;
case 0x59d616:c.instructions+=6;goto B59d616;
case 0x59d618:c.instructions+=5;goto B59d618;
case 0x59d61e:c.instructions+=4;goto B59d61e;
case 0x59d61f:c.instructions+=3;goto B59d61f;
case 0x59d621:c.instructions+=2;goto B59d621;
case 0x59d624:c.instructions+=1;goto B59d624;
case 0x59d626:goto L59d626;
case 0x59d62c:c.instructions+=2;goto B59d62c;
case 0x59d62e:c.instructions+=1;goto B59d62e;
case 0x59d630:goto L59d630;
case 0x59d636:c.instructions+=3;goto B59d636;
case 0x59d638:c.instructions+=2;goto B59d638;
case 0x59d63e:c.instructions+=1;goto B59d63e;
case 0x59d644:goto L59d644;
case 0x59d64a:c.instructions+=25;goto B59d64a;
case 0x59d650:c.instructions+=24;goto B59d650;
case 0x59d656:c.instructions+=23;goto B59d656;
case 0x59d659:c.instructions+=22;goto B59d659;
case 0x59d65f:c.instructions+=21;goto B59d65f;
case 0x59d661:c.instructions+=20;goto B59d661;
case 0x59d663:c.instructions+=19;goto B59d663;
case 0x59d665:c.instructions+=18;goto B59d665;
case 0x59d667:c.instructions+=17;goto B59d667;
case 0x59d669:c.instructions+=16;goto B59d669;
case 0x59d66b:c.instructions+=15;goto B59d66b;
case 0x59d66d:c.instructions+=14;goto B59d66d;
case 0x59d66f:c.instructions+=13;goto B59d66f;
case 0x59d673:c.instructions+=12;goto B59d673;
case 0x59d679:c.instructions+=11;goto B59d679;
case 0x59d67c:c.instructions+=10;goto B59d67c;
case 0x59d67f:c.instructions+=9;goto B59d67f;
case 0x59d685:c.instructions+=8;goto B59d685;
case 0x59d688:c.instructions+=7;goto B59d688;
case 0x59d68e:c.instructions+=6;goto B59d68e;
case 0x59d694:c.instructions+=5;goto B59d694;
case 0x59d69a:c.instructions+=4;goto B59d69a;
case 0x59d6a0:c.instructions+=3;goto B59d6a0;
case 0x59d6a6:c.instructions+=2;goto B59d6a6;
case 0x59d6aa:c.instructions+=1;goto B59d6aa;
case 0x59d6ac:goto L59d6ac;
case 0x59d6ae:c.instructions+=1;goto B59d6ae;
case 0x59d6b3:goto L59d6b3;
case 0x59d6b7:c.instructions+=1;goto B59d6b7;
case 0x59d6bb:goto L59d6bb;
case 0x59d6bf:c.instructions+=4;goto B59d6bf;
case 0x59d6c3:c.instructions+=3;goto B59d6c3;
case 0x59d6c5:c.instructions+=2;goto B59d6c5;
case 0x59d6c8:c.instructions+=1;goto B59d6c8;
case 0x59d6ca:goto L59d6ca;
case 0x59d6ce:c.instructions+=4;goto B59d6ce;
case 0x59d6d4:c.instructions+=3;goto B59d6d4;
case 0x59d6d6:c.instructions+=2;goto B59d6d6;
case 0x59d6d9:c.instructions+=1;goto B59d6d9;
case 0x59d6db:goto L59d6db;
case 0x59d6df:c.instructions+=9;goto B59d6df;
case 0x59d6e3:c.instructions+=8;goto B59d6e3;
case 0x59d6e9:c.instructions+=7;goto B59d6e9;
case 0x59d6eb:c.instructions+=6;goto B59d6eb;
case 0x59d6f1:c.instructions+=5;goto B59d6f1;
case 0x59d6f7:c.instructions+=4;goto B59d6f7;
case 0x59d6f9:c.instructions+=3;goto B59d6f9;
case 0x59d6ff:c.instructions+=2;goto B59d6ff;
case 0x59d701:c.instructions+=1;goto B59d701;
case 0x59d703:goto L59d703;
case 0x59d705:c.instructions+=1;goto B59d705;
case 0x59d707:goto L59d707;
case 0x59d70d:c.instructions+=2;goto B59d70d;
case 0x59d713:c.instructions+=1;goto B59d713;
case 0x59d719:goto L59d719;
case 0x59d71d:c.instructions+=5;goto B59d71d;
case 0x59d722:c.instructions+=4;goto B59d722;
case 0x59d728:c.instructions+=3;goto B59d728;
case 0x59d72a:c.instructions+=2;goto B59d72a;
case 0x59d72d:c.instructions+=1;goto B59d72d;
case 0x59d72f:goto L59d72f;
case 0x59d733:c.instructions+=6;goto B59d733;
case 0x59d737:c.instructions+=5;goto B59d737;
case 0x59d73d:c.instructions+=4;goto B59d73d;
case 0x59d743:c.instructions+=3;goto B59d743;
case 0x59d745:c.instructions+=2;goto B59d745;
case 0x59d748:c.instructions+=1;goto B59d748;
case 0x59d74a:goto L59d74a;
case 0x59d750:goto L59d750;
case 0x59d756:c.instructions+=2;goto B59d756;
case 0x59d758:c.instructions+=1;goto B59d758;
case 0x59d75a:goto L59d75a;
case 0x59d760:c.instructions+=2;goto B59d760;
case 0x59d762:c.instructions+=1;goto B59d762;
case 0x59d764:goto L59d764;
case 0x59d76a:goto L59d76a;
case 0x59d770:c.instructions+=2;goto B59d770;
case 0x59d772:c.instructions+=1;goto B59d772;
case 0x59d774:goto L59d774;
case 0x59d77e:goto L59d77e;
case 0x59d781:c.instructions+=4;goto B59d781;
case 0x59d788:c.instructions+=3;goto B59d788;
case 0x59d789:c.instructions+=2;goto B59d789;
case 0x59d78a:c.instructions+=1;goto B59d78a;
case 0x59d78f:goto L59d78f;
case 0x59d795:c.instructions+=9;goto B59d795;
case 0x59d796:c.instructions+=8;goto B59d796;
case 0x59d79d:c.instructions+=7;goto B59d79d;
case 0x59d79e:c.instructions+=6;goto B59d79e;
case 0x59d7a2:c.instructions+=5;goto B59d7a2;
case 0x59d7a3:c.instructions+=4;goto B59d7a3;
case 0x59d7ae:c.instructions+=3;goto B59d7ae;
case 0x59d7b9:c.instructions+=2;goto B59d7b9;
case 0x59d7c4:c.instructions+=1;goto B59d7c4;
case 0x59d7c9:goto L59d7c9;
case 0x59d7cd:c.instructions+=4;goto B59d7cd;
case 0x59d7d1:c.instructions+=3;goto B59d7d1;
case 0x59d7d2:c.instructions+=2;goto B59d7d2;
case 0x59d7d3:c.instructions+=1;goto B59d7d3;
case 0x59d7d8:goto L59d7d8;
case 0x59d7db:c.instructions+=9;goto B59d7db;
case 0x59d7df:c.instructions+=8;goto B59d7df;
case 0x59d7e2:c.instructions+=7;goto B59d7e2;
case 0x59d7e6:c.instructions+=6;goto B59d7e6;
case 0x59d7ec:c.instructions+=5;goto B59d7ec;
case 0x59d7f0:c.instructions+=4;goto B59d7f0;
case 0x59d7f6:c.instructions+=3;goto B59d7f6;
case 0x59d7f8:c.instructions+=2;goto B59d7f8;
case 0x59d7fb:c.instructions+=1;goto B59d7fb;
case 0x59d7fd:goto L59d7fd;
case 0x59d803:c.instructions+=3;goto B59d803;
case 0x59d805:c.instructions+=2;goto B59d805;
case 0x59d809:c.instructions+=1;goto B59d809;
case 0x59d80d:goto L59d80d;
case 0x59d811:c.instructions+=4;goto B59d811;
case 0x59d817:c.instructions+=3;goto B59d817;
case 0x59d819:c.instructions+=2;goto B59d819;
case 0x59d81c:c.instructions+=1;goto B59d81c;
case 0x59d81e:goto L59d81e;
case 0x59d824:c.instructions+=6;goto B59d824;
case 0x59d828:c.instructions+=5;goto B59d828;
case 0x59d82c:c.instructions+=4;goto B59d82c;
case 0x59d832:c.instructions+=3;goto B59d832;
case 0x59d834:c.instructions+=2;goto B59d834;
case 0x59d837:c.instructions+=1;goto B59d837;
case 0x59d839:goto L59d839;
case 0x59d83f:c.instructions+=3;goto B59d83f;
case 0x59d841:c.instructions+=2;goto B59d841;
case 0x59d845:c.instructions+=1;goto B59d845;
case 0x59d849:goto L59d849;
case 0x59d84d:c.instructions+=4;goto B59d84d;
case 0x59d84e:c.instructions+=3;goto B59d84e;
case 0x59d854:c.instructions+=2;goto B59d854;
case 0x59d857:c.instructions+=1;goto B59d857;
case 0x59d85c:goto L59d85c;
case 0x59d860:c.instructions+=3;goto B59d860;
case 0x59d862:c.instructions+=2;goto B59d862;
case 0x59d863:c.instructions+=1;goto B59d863;
case 0x59d868:goto L59d868;
case 0x59d86e:c.instructions+=7;goto B59d86e;
case 0x59d872:c.instructions+=6;goto B59d872;
case 0x59d875:c.instructions+=5;goto B59d875;
case 0x59d877:c.instructions+=4;goto B59d877;
case 0x59d87d:c.instructions+=3;goto B59d87d;
case 0x59d87f:c.instructions+=2;goto B59d87f;
case 0x59d882:c.instructions+=1;goto B59d882;
case 0x59d884:goto L59d884;
case 0x59d88a:c.instructions+=3;goto B59d88a;
case 0x59d890:c.instructions+=2;goto B59d890;
case 0x59d896:c.instructions+=1;goto B59d896;
case 0x59d898:goto L59d898;
case 0x59d89a:goto L59d89a;
case 0x59d89e:c.instructions+=2;goto B59d89e;
case 0x59d89f:c.instructions+=1;goto B59d89f;
case 0x59d8a4:goto L59d8a4;
case 0x59d8a9:c.instructions+=3;goto B59d8a9;
case 0x59d8ac:c.instructions+=2;goto B59d8ac;
case 0x59d8af:c.instructions+=1;goto B59d8af;
case 0x59d8b1:goto L59d8b1;
case 0x59d8b4:c.instructions+=24;goto B59d8b4;
case 0x59d8b6:c.instructions+=23;goto B59d8b6;
case 0x59d8bc:c.instructions+=22;goto B59d8bc;
case 0x59d8c2:c.instructions+=21;goto B59d8c2;
case 0x59d8c6:c.instructions+=20;goto B59d8c6;
case 0x59d8c9:c.instructions+=19;goto B59d8c9;
case 0x59d8cd:c.instructions+=18;goto B59d8cd;
case 0x59d8d1:c.instructions+=17;goto B59d8d1;
case 0x59d8d4:c.instructions+=16;goto B59d8d4;
case 0x59d8d8:c.instructions+=15;goto B59d8d8;
case 0x59d8dc:c.instructions+=14;goto B59d8dc;
case 0x59d8e2:c.instructions+=13;goto B59d8e2;
case 0x59d8e6:c.instructions+=12;goto B59d8e6;
case 0x59d8ea:c.instructions+=11;goto B59d8ea;
case 0x59d8f0:c.instructions+=10;goto B59d8f0;
case 0x59d8f4:c.instructions+=9;goto B59d8f4;
case 0x59d8fa:c.instructions+=8;goto B59d8fa;
case 0x59d8fe:c.instructions+=7;goto B59d8fe;
case 0x59d904:c.instructions+=6;goto B59d904;
case 0x59d908:c.instructions+=5;goto B59d908;
case 0x59d90e:c.instructions+=4;goto B59d90e;
case 0x59d912:c.instructions+=3;goto B59d912;
case 0x59d918:c.instructions+=2;goto B59d918;
case 0x59d91c:c.instructions+=1;goto B59d91c;
case 0x59d921:goto L59d921;
case 0x59d924:c.instructions+=1;goto B59d924;
case 0x59d92a:goto L59d92a;
case 0x59d930:c.instructions+=16;goto B59d930;
case 0x59d936:c.instructions+=15;goto B59d936;
case 0x59d939:c.instructions+=14;goto B59d939;
case 0x59d93a:c.instructions+=13;goto B59d93a;
case 0x59d93d:c.instructions+=12;goto B59d93d;
case 0x59d941:c.instructions+=11;goto B59d941;
case 0x59d944:c.instructions+=10;goto B59d944;
case 0x59d946:c.instructions+=9;goto B59d946;
case 0x59d948:c.instructions+=8;goto B59d948;
case 0x59d94a:c.instructions+=7;goto B59d94a;
case 0x59d94c:c.instructions+=6;goto B59d94c;
case 0x59d94e:c.instructions+=5;goto B59d94e;
case 0x59d951:c.instructions+=4;goto B59d951;
case 0x59d952:c.instructions+=3;goto B59d952;
case 0x59d953:c.instructions+=2;goto B59d953;
case 0x59d954:c.instructions+=1;goto B59d954;
case 0x59d959:goto L59d959;
case 0x59d95c:c.instructions+=17;goto B59d95c;
case 0x59d962:c.instructions+=16;goto B59d962;
case 0x59d968:c.instructions+=15;goto B59d968;
case 0x59d96b:c.instructions+=14;goto B59d96b;
case 0x59d96e:c.instructions+=13;goto B59d96e;
case 0x59d971:c.instructions+=12;goto B59d971;
case 0x59d975:c.instructions+=11;goto B59d975;
case 0x59d97d:c.instructions+=10;goto B59d97d;
case 0x59d97f:c.instructions+=9;goto B59d97f;
case 0x59d981:c.instructions+=8;goto B59d981;
case 0x59d983:c.instructions+=7;goto B59d983;
case 0x59d985:c.instructions+=6;goto B59d985;
case 0x59d987:c.instructions+=5;goto B59d987;
case 0x59d98a:c.instructions+=4;goto B59d98a;
case 0x59d98b:c.instructions+=3;goto B59d98b;
case 0x59d98c:c.instructions+=2;goto B59d98c;
case 0x59d98d:c.instructions+=1;goto B59d98d;
case 0x59d992:goto L59d992;
case 0x59d995:c.instructions+=7;goto B59d995;
case 0x59d997:c.instructions+=6;goto B59d997;
case 0x59d99b:c.instructions+=5;goto B59d99b;
case 0x59d99e:c.instructions+=4;goto B59d99e;
case 0x59d9a1:c.instructions+=3;goto B59d9a1;
case 0x59d9a9:c.instructions+=2;goto B59d9a9;
case 0x59d9ad:c.instructions+=1;goto B59d9ad;
case 0x59d9b2:goto L59d9b2;
case 0x59d9b5:c.instructions+=1;goto B59d9b5;
case 0x59d9bb:goto L59d9bb;
case 0x59d9be:c.instructions+=16;goto B59d9be;
case 0x59d9c4:c.instructions+=15;goto B59d9c4;
case 0x59d9c7:c.instructions+=14;goto B59d9c7;
case 0x59d9c8:c.instructions+=13;goto B59d9c8;
case 0x59d9cb:c.instructions+=12;goto B59d9cb;
case 0x59d9cf:c.instructions+=11;goto B59d9cf;
case 0x59d9d2:c.instructions+=10;goto B59d9d2;
case 0x59d9d4:c.instructions+=9;goto B59d9d4;
case 0x59d9d6:c.instructions+=8;goto B59d9d6;
case 0x59d9d8:c.instructions+=7;goto B59d9d8;
case 0x59d9da:c.instructions+=6;goto B59d9da;
case 0x59d9dc:c.instructions+=5;goto B59d9dc;
case 0x59d9df:c.instructions+=4;goto B59d9df;
case 0x59d9e0:c.instructions+=3;goto B59d9e0;
case 0x59d9e1:c.instructions+=2;goto B59d9e1;
case 0x59d9e2:c.instructions+=1;goto B59d9e2;
case 0x59d9e7:goto L59d9e7;
case 0x59d9eb:c.instructions+=4;goto B59d9eb;
case 0x59d9ec:c.instructions+=3;goto B59d9ec;
case 0x59d9f0:c.instructions+=2;goto B59d9f0;
case 0x59d9f1:c.instructions+=1;goto B59d9f1;
case 0x59d9f6:goto L59d9f6;
case 0x59d9f9:c.instructions+=14;goto B59d9f9;
case 0x59d9fb:c.instructions+=13;goto B59d9fb;
case 0x59d9ff:c.instructions+=12;goto B59d9ff;
case 0x59da00:c.instructions+=11;goto B59da00;
case 0x59da04:c.instructions+=10;goto B59da04;
case 0x59da08:c.instructions+=9;goto B59da08;
case 0x59da0c:c.instructions+=8;goto B59da0c;
case 0x59da0f:c.instructions+=7;goto B59da0f;
case 0x59da10:c.instructions+=6;goto B59da10;
case 0x59da14:c.instructions+=5;goto B59da14;
case 0x59da18:c.instructions+=4;goto B59da18;
case 0x59da19:c.instructions+=3;goto B59da19;
case 0x59da21:c.instructions+=2;goto B59da21;
case 0x59da29:c.instructions+=1;goto B59da29;
case 0x59da2e:goto L59da2e;
case 0x59da31:c.instructions+=2;goto B59da31;
case 0x59da39:c.instructions+=1;goto B59da39;
case 0x59da3b:goto L59da3b;
case 0x59da3e:c.instructions+=1;goto B59da3e;
case 0x59da40:goto L59da40;
case 0x59da43:c.instructions+=20;goto B59da43;
case 0x59da45:c.instructions+=19;goto B59da45;
case 0x59da4b:c.instructions+=18;goto B59da4b;
case 0x59da51:c.instructions+=17;goto B59da51;
case 0x59da55:c.instructions+=16;goto B59da55;
case 0x59da58:c.instructions+=15;goto B59da58;
case 0x59da5c:c.instructions+=14;goto B59da5c;
case 0x59da60:c.instructions+=13;goto B59da60;
case 0x59da63:c.instructions+=12;goto B59da63;
case 0x59da67:c.instructions+=11;goto B59da67;
case 0x59da6b:c.instructions+=10;goto B59da6b;
case 0x59da71:c.instructions+=9;goto B59da71;
case 0x59da75:c.instructions+=8;goto B59da75;
case 0x59da79:c.instructions+=7;goto B59da79;
case 0x59da7f:c.instructions+=6;goto B59da7f;
case 0x59da83:c.instructions+=5;goto B59da83;
case 0x59da89:c.instructions+=4;goto B59da89;
case 0x59da8d:c.instructions+=3;goto B59da8d;
case 0x59da93:c.instructions+=2;goto B59da93;
case 0x59da97:c.instructions+=1;goto B59da97;
case 0x59da9d:goto L59da9d;
case 0x59daa1:c.instructions+=1;goto B59daa1;
case 0x59daa9:goto L59daa9;
case 0x59daaf:c.instructions+=12;goto B59daaf;
case 0x59dab5:c.instructions+=11;goto B59dab5;
case 0x59dabb:c.instructions+=10;goto B59dabb;
case 0x59dabf:c.instructions+=9;goto B59dabf;
case 0x59dac3:c.instructions+=8;goto B59dac3;
case 0x59dac7:c.instructions+=7;goto B59dac7;
case 0x59dac8:c.instructions+=6;goto B59dac8;
case 0x59dacc:c.instructions+=5;goto B59dacc;
case 0x59dacd:c.instructions+=4;goto B59dacd;
case 0x59dad3:c.instructions+=3;goto B59dad3;
case 0x59dad4:c.instructions+=2;goto B59dad4;
case 0x59dadb:c.instructions+=1;goto B59dadb;
case 0x59dae0:goto L59dae0;
case 0x59dae3:c.instructions+=6;goto B59dae3;
case 0x59dae4:c.instructions+=5;goto B59dae4;
case 0x59dae5:c.instructions+=4;goto B59dae5;
case 0x59dae6:c.instructions+=3;goto B59dae6;
case 0x59dae8:c.instructions+=2;goto B59dae8;
case 0x59dae9:c.instructions+=1;goto B59dae9;
case 0x59daf0:goto L59daf0;
case 0x59daf6:c.instructions+=20;goto B59daf6;
case 0x59dafa:c.instructions+=19;goto B59dafa;
case 0x59db00:c.instructions+=18;goto B59db00;
case 0x59db06:c.instructions+=17;goto B59db06;
case 0x59db0c:c.instructions+=16;goto B59db0c;
case 0x59db0e:c.instructions+=15;goto B59db0e;
case 0x59db14:c.instructions+=14;goto B59db14;
case 0x59db1a:c.instructions+=13;goto B59db1a;
case 0x59db20:c.instructions+=12;goto B59db20;
case 0x59db26:c.instructions+=11;goto B59db26;
case 0x59db28:c.instructions+=10;goto B59db28;
case 0x59db2e:c.instructions+=9;goto B59db2e;
case 0x59db34:c.instructions+=8;goto B59db34;
case 0x59db3a:c.instructions+=7;goto B59db3a;
case 0x59db40:c.instructions+=6;goto B59db40;
case 0x59db42:c.instructions+=5;goto B59db42;
case 0x59db44:c.instructions+=4;goto B59db44;
case 0x59db46:c.instructions+=3;goto B59db46;
case 0x59db49:c.instructions+=2;goto B59db49;
case 0x59db4c:c.instructions+=1;goto B59db4c;
case 0x59db50:goto L59db50;
case 0x59db54:c.instructions+=30;goto B59db54;
case 0x59db58:c.instructions+=29;goto B59db58;
case 0x59db5b:c.instructions+=28;goto B59db5b;
case 0x59db5e:c.instructions+=27;goto B59db5e;
case 0x59db62:c.instructions+=26;goto B59db62;
case 0x59db65:c.instructions+=25;goto B59db65;
case 0x59db68:c.instructions+=24;goto B59db68;
case 0x59db6a:c.instructions+=23;goto B59db6a;
case 0x59db6c:c.instructions+=22;goto B59db6c;
case 0x59db6e:c.instructions+=21;goto B59db6e;
case 0x59db70:c.instructions+=20;goto B59db70;
case 0x59db72:c.instructions+=19;goto B59db72;
case 0x59db75:c.instructions+=18;goto B59db75;
case 0x59db78:c.instructions+=17;goto B59db78;
case 0x59db7b:c.instructions+=16;goto B59db7b;
case 0x59db7d:c.instructions+=15;goto B59db7d;
case 0x59db7f:c.instructions+=14;goto B59db7f;
case 0x59db82:c.instructions+=13;goto B59db82;
case 0x59db85:c.instructions+=12;goto B59db85;
case 0x59db87:c.instructions+=11;goto B59db87;
case 0x59db8a:c.instructions+=10;goto B59db8a;
case 0x59db8d:c.instructions+=9;goto B59db8d;
case 0x59db90:c.instructions+=8;goto B59db90;
case 0x59db93:c.instructions+=7;goto B59db93;
case 0x59db95:c.instructions+=6;goto B59db95;
case 0x59db97:c.instructions+=5;goto B59db97;
case 0x59db9a:c.instructions+=4;goto B59db9a;
case 0x59db9d:c.instructions+=3;goto B59db9d;
case 0x59db9f:c.instructions+=2;goto B59db9f;
case 0x59dba2:c.instructions+=1;goto B59dba2;
case 0x59dbb0:goto L59dbb0;
case 0x59dbb1:c.instructions+=20;goto B59dbb1;
case 0x59dbb3:c.instructions+=19;goto B59dbb3;
case 0x59dbb6:c.instructions+=18;goto B59dbb6;
case 0x59dbb9:c.instructions+=17;goto B59dbb9;
case 0x59dbba:c.instructions+=16;goto B59dbba;
case 0x59dbbd:c.instructions+=15;goto B59dbbd;
case 0x59dbbe:c.instructions+=14;goto B59dbbe;
case 0x59dbc0:c.instructions+=13;goto B59dbc0;
case 0x59dbc6:c.instructions+=12;goto B59dbc6;
case 0x59dbc9:c.instructions+=11;goto B59dbc9;
case 0x59dbcf:c.instructions+=10;goto B59dbcf;
case 0x59dbd2:c.instructions+=9;goto B59dbd2;
case 0x59dbd7:c.instructions+=8;goto B59dbd7;
case 0x59dbd9:c.instructions+=7;goto B59dbd9;
case 0x59dbdf:c.instructions+=6;goto B59dbdf;
case 0x59dbe6:c.instructions+=5;goto B59dbe6;
case 0x59dbe8:c.instructions+=4;goto B59dbe8;
case 0x59dbe9:c.instructions+=3;goto B59dbe9;
case 0x59dbeb:c.instructions+=2;goto B59dbeb;
case 0x59dbee:c.instructions+=1;goto B59dbee;
case 0x59dbf0:goto L59dbf0;
case 0x59dbf2:c.instructions+=1;goto B59dbf2;
case 0x59dbf4:goto L59dbf4;
case 0x59dbf6:goto L59dbf6;
case 0x59dbfc:c.instructions+=2;goto B59dbfc;
case 0x59dbfe:c.instructions+=1;goto B59dbfe;
case 0x59dc00:goto L59dc00;
case 0x59dc02:c.instructions+=1;goto B59dc02;
case 0x59dc08:goto L59dc08;
case 0x59dc0e:c.instructions+=2;goto B59dc0e;
case 0x59dc10:c.instructions+=1;goto B59dc10;
case 0x59dc16:goto L59dc16;
case 0x59dc18:c.instructions+=1;goto B59dc18;
case 0x59dc1e:goto L59dc1e;
case 0x59dc24:c.instructions+=13;goto B59dc24;
case 0x59dc2a:c.instructions+=12;goto B59dc2a;
case 0x59dc2c:c.instructions+=11;goto B59dc2c;
case 0x59dc2e:c.instructions+=10;goto B59dc2e;
case 0x59dc30:c.instructions+=9;goto B59dc30;
case 0x59dc32:c.instructions+=8;goto B59dc32;
case 0x59dc34:c.instructions+=7;goto B59dc34;
case 0x59dc36:c.instructions+=6;goto B59dc36;
case 0x59dc38:c.instructions+=5;goto B59dc38;
case 0x59dc3a:c.instructions+=4;goto B59dc3a;
case 0x59dc40:c.instructions+=3;goto B59dc40;
case 0x59dc42:c.instructions+=2;goto B59dc42;
case 0x59dc45:c.instructions+=1;goto B59dc45;
case 0x59dc4b:goto L59dc4b;
case 0x59dc51:c.instructions+=10;goto B59dc51;
case 0x59dc57:c.instructions+=9;goto B59dc57;
case 0x59dc5b:c.instructions+=8;goto B59dc5b;
case 0x59dc5d:c.instructions+=7;goto B59dc5d;
case 0x59dc5e:c.instructions+=6;goto B59dc5e;
case 0x59dc62:c.instructions+=5;goto B59dc62;
case 0x59dc66:c.instructions+=4;goto B59dc66;
case 0x59dc67:c.instructions+=3;goto B59dc67;
case 0x59dc6b:c.instructions+=2;goto B59dc6b;
case 0x59dc73:c.instructions+=1;goto B59dc73;
case 0x59dc78:goto L59dc78;
case 0x59dc7c:c.instructions+=9;goto B59dc7c;
case 0x59dc7d:c.instructions+=8;goto B59dc7d;
case 0x59dc80:c.instructions+=7;goto B59dc80;
case 0x59dc81:c.instructions+=6;goto B59dc81;
case 0x59dc85:c.instructions+=5;goto B59dc85;
case 0x59dc86:c.instructions+=4;goto B59dc86;
case 0x59dc8e:c.instructions+=3;goto B59dc8e;
case 0x59dc96:c.instructions+=2;goto B59dc96;
case 0x59dc9e:c.instructions+=1;goto B59dc9e;
case 0x59dca3:goto L59dca3;
case 0x59dca7:c.instructions+=21;goto B59dca7;
case 0x59dcab:c.instructions+=20;goto B59dcab;
case 0x59dcb1:c.instructions+=19;goto B59dcb1;
case 0x59dcb5:c.instructions+=18;goto B59dcb5;
case 0x59dcb8:c.instructions+=17;goto B59dcb8;
case 0x59dcbe:c.instructions+=16;goto B59dcbe;
case 0x59dcc2:c.instructions+=15;goto B59dcc2;
case 0x59dcc4:c.instructions+=14;goto B59dcc4;
case 0x59dcc8:c.instructions+=13;goto B59dcc8;
case 0x59dccc:c.instructions+=12;goto B59dccc;
case 0x59dcce:c.instructions+=11;goto B59dcce;
case 0x59dcd1:c.instructions+=10;goto B59dcd1;
case 0x59dcd3:c.instructions+=9;goto B59dcd3;
case 0x59dcd7:c.instructions+=8;goto B59dcd7;
case 0x59dcda:c.instructions+=7;goto B59dcda;
case 0x59dce0:c.instructions+=6;goto B59dce0;
case 0x59dce4:c.instructions+=5;goto B59dce4;
case 0x59dce8:c.instructions+=4;goto B59dce8;
case 0x59dcee:c.instructions+=3;goto B59dcee;
case 0x59dcf0:c.instructions+=2;goto B59dcf0;
case 0x59dcf3:c.instructions+=1;goto B59dcf3;
case 0x59dcf5:goto L59dcf5;
case 0x59dcf7:c.instructions+=1;goto B59dcf7;
case 0x59dcfd:goto L59dcfd;
case 0x59dd01:c.instructions+=11;goto B59dd01;
case 0x59dd05:c.instructions+=10;goto B59dd05;
case 0x59dd07:c.instructions+=9;goto B59dd07;
case 0x59dd0b:c.instructions+=8;goto B59dd0b;
case 0x59dd11:c.instructions+=7;goto B59dd11;
case 0x59dd15:c.instructions+=6;goto B59dd15;
case 0x59dd19:c.instructions+=5;goto B59dd19;
case 0x59dd1a:c.instructions+=4;goto B59dd1a;
case 0x59dd1c:c.instructions+=3;goto B59dd1c;
case 0x59dd1d:c.instructions+=2;goto B59dd1d;
case 0x59dd1e:c.instructions+=1;goto B59dd1e;
case 0x59dd23:goto L59dd23;
case 0x59dd27:c.instructions+=26;goto B59dd27;
case 0x59dd2d:c.instructions+=25;goto B59dd2d;
case 0x59dd30:c.instructions+=24;goto B59dd30;
case 0x59dd33:c.instructions+=23;goto B59dd33;
case 0x59dd35:c.instructions+=22;goto B59dd35;
case 0x59dd39:c.instructions+=21;goto B59dd39;
case 0x59dd3f:c.instructions+=20;goto B59dd3f;
case 0x59dd41:c.instructions+=19;goto B59dd41;
case 0x59dd45:c.instructions+=18;goto B59dd45;
case 0x59dd47:c.instructions+=17;goto B59dd47;
case 0x59dd4b:c.instructions+=16;goto B59dd4b;
case 0x59dd4f:c.instructions+=15;goto B59dd4f;
case 0x59dd55:c.instructions+=14;goto B59dd55;
case 0x59dd56:c.instructions+=13;goto B59dd56;
case 0x59dd5a:c.instructions+=12;goto B59dd5a;
case 0x59dd5e:c.instructions+=11;goto B59dd5e;
case 0x59dd64:c.instructions+=10;goto B59dd64;
case 0x59dd68:c.instructions+=9;goto B59dd68;
case 0x59dd6c:c.instructions+=8;goto B59dd6c;
case 0x59dd72:c.instructions+=7;goto B59dd72;
case 0x59dd76:c.instructions+=6;goto B59dd76;
case 0x59dd7a:c.instructions+=5;goto B59dd7a;
case 0x59dd80:c.instructions+=4;goto B59dd80;
case 0x59dd84:c.instructions+=3;goto B59dd84;
case 0x59dd88:c.instructions+=2;goto B59dd88;
case 0x59dd8b:c.instructions+=1;goto B59dd8b;
case 0x59dd90:goto L59dd90;
case 0x59dd96:c.instructions+=9;goto B59dd96;
case 0x59dd99:c.instructions+=8;goto B59dd99;
case 0x59dd9c:c.instructions+=7;goto B59dd9c;
case 0x59dd9e:c.instructions+=6;goto B59dd9e;
case 0x59dda2:c.instructions+=5;goto B59dda2;
case 0x59dda4:c.instructions+=4;goto B59dda4;
case 0x59dda6:c.instructions+=3;goto B59dda6;
case 0x59ddaa:c.instructions+=2;goto B59ddaa;
case 0x59ddab:c.instructions+=1;goto B59ddab;
case 0x59ddb0:goto L59ddb0;
case 0x59ddb6:c.instructions+=20;goto B59ddb6;
case 0x59ddbc:c.instructions+=19;goto B59ddbc;
case 0x59ddc2:c.instructions+=18;goto B59ddc2;
case 0x59ddc6:c.instructions+=17;goto B59ddc6;
case 0x59ddca:c.instructions+=16;goto B59ddca;
case 0x59ddcb:c.instructions+=15;goto B59ddcb;
case 0x59ddcd:c.instructions+=14;goto B59ddcd;
case 0x59ddd1:c.instructions+=13;goto B59ddd1;
case 0x59ddd2:c.instructions+=12;goto B59ddd2;
case 0x59ddd6:c.instructions+=11;goto B59ddd6;
case 0x59dddc:c.instructions+=10;goto B59dddc;
case 0x59dde0:c.instructions+=9;goto B59dde0;
case 0x59dde1:c.instructions+=8;goto B59dde1;
case 0x59dde8:c.instructions+=7;goto B59dde8;
case 0x59ddec:c.instructions+=6;goto B59ddec;
case 0x59ddf2:c.instructions+=5;goto B59ddf2;
case 0x59ddf4:c.instructions+=4;goto B59ddf4;
case 0x59ddfa:c.instructions+=3;goto B59ddfa;
case 0x59ddfc:c.instructions+=2;goto B59ddfc;
case 0x59de00:c.instructions+=1;goto B59de00;
case 0x59de05:goto L59de05;
case 0x59de09:c.instructions+=5;goto B59de09;
case 0x59de0d:c.instructions+=4;goto B59de0d;
case 0x59de13:c.instructions+=3;goto B59de13;
case 0x59de16:c.instructions+=2;goto B59de16;
case 0x59de18:c.instructions+=1;goto B59de18;
case 0x59de1a:goto L59de1a;
case 0x59de1e:c.instructions+=2;goto B59de1e;
case 0x59de24:c.instructions+=1;goto B59de24;
case 0x59de28:goto L59de28;
case 0x59de2e:c.instructions+=2;goto B59de2e;
case 0x59de31:c.instructions+=1;goto B59de31;
case 0x59de33:goto L59de33;
case 0x59de3b:c.instructions+=1;goto B59de3b;
case 0x59de3d:goto L59de3d;
case 0x59de41:c.instructions+=4;goto B59de41;
case 0x59de47:c.instructions+=3;goto B59de47;
case 0x59de49:c.instructions+=2;goto B59de49;
case 0x59de4c:c.instructions+=1;goto B59de4c;
case 0x59de4e:goto L59de4e;
case 0x59de54:c.instructions+=1;goto B59de54;
case 0x59de58:goto L59de58;
case 0x59de5c:c.instructions+=9;goto B59de5c;
case 0x59de5d:c.instructions+=8;goto B59de5d;
case 0x59de5e:c.instructions+=7;goto B59de5e;
case 0x59de62:c.instructions+=6;goto B59de62;
case 0x59de63:c.instructions+=5;goto B59de63;
case 0x59de67:c.instructions+=4;goto B59de67;
case 0x59de68:c.instructions+=3;goto B59de68;
case 0x59de69:c.instructions+=2;goto B59de69;
case 0x59de6f:c.instructions+=1;goto B59de6f;
case 0x59de74:goto L59de74;
case 0x59de75:c.instructions+=5;goto B59de75;
case 0x59de76:c.instructions+=4;goto B59de76;
case 0x59de77:c.instructions+=3;goto B59de77;
case 0x59de79:c.instructions+=2;goto B59de79;
case 0x59de7a:c.instructions+=1;goto B59de7a;
case 0x59de7d:goto L59de7d;
case 0x59de83:c.instructions+=1;goto B59de83;
case 0x59de88:goto L59de88;
case 0x59de89:c.instructions+=5;goto B59de89;
case 0x59de8a:c.instructions+=4;goto B59de8a;
case 0x59de8b:c.instructions+=3;goto B59de8b;
case 0x59de8d:c.instructions+=2;goto B59de8d;
case 0x59de8e:c.instructions+=1;goto B59de8e;
case 0x59dea0:goto L59dea0;
case 0x59dea1:c.instructions+=7;goto B59dea1;
case 0x59dea5:c.instructions+=6;goto B59dea5;
case 0x59dea6:c.instructions+=5;goto B59dea6;
case 0x59deab:c.instructions+=4;goto B59deab;
case 0x59dead:c.instructions+=3;goto B59dead;
case 0x59deaf:c.instructions+=2;goto B59deaf;
case 0x59deb1:c.instructions+=1;goto B59deb1;
case 0x59deb6:goto L59deb6;
case 0x59deb9:c.instructions+=3;goto B59deb9;
case 0x59deba:c.instructions+=2;goto B59deba;
case 0x59debc:c.instructions+=1;goto B59debc;
case 0x59dec1:goto L59dec1;
case 0x59dec4:c.instructions+=3;goto B59dec4;
case 0x59dec5:c.instructions+=2;goto B59dec5;
case 0x59dec7:c.instructions+=1;goto B59dec7;
case 0x59decc:goto L59decc;
case 0x59ded2:c.instructions+=3;goto B59ded2;
case 0x59ded3:c.instructions+=2;goto B59ded3;
case 0x59ded5:c.instructions+=1;goto B59ded5;
case 0x59deda:goto L59deda;
case 0x59dedc:c.instructions+=1;goto B59dedc;
case 0x59dee1:goto L59dee1;
case 0x59dee2:c.instructions+=2;goto B59dee2;
case 0x59dee3:c.instructions+=1;goto B59dee3;
case 0x59def0:goto L59def0;
case 0x59def3:c.instructions+=21;goto B59def3;
case 0x59def4:c.instructions+=20;goto B59def4;
case 0x59def6:c.instructions+=19;goto B59def6;
case 0x59def9:c.instructions+=18;goto B59def9;
case 0x59defe:c.instructions+=17;goto B59defe;
case 0x59df05:c.instructions+=16;goto B59df05;
case 0x59df08:c.instructions+=15;goto B59df08;
case 0x59df0e:c.instructions+=14;goto B59df0e;
case 0x59df0f:c.instructions+=13;goto B59df0f;
case 0x59df14:c.instructions+=12;goto B59df14;
case 0x59df18:c.instructions+=11;goto B59df18;
case 0x59df1b:c.instructions+=10;goto B59df1b;
case 0x59df1e:c.instructions+=9;goto B59df1e;
case 0x59df21:c.instructions+=8;goto B59df21;
case 0x59df25:c.instructions+=7;goto B59df25;
case 0x59df29:c.instructions+=6;goto B59df29;
case 0x59df2d:c.instructions+=5;goto B59df2d;
case 0x59df33:c.instructions+=4;goto B59df33;
case 0x59df39:c.instructions+=3;goto B59df39;
case 0x59df3b:c.instructions+=2;goto B59df3b;
case 0x59df3e:c.instructions+=1;goto B59df3e;
case 0x59df40:goto L59df40;
case 0x59df46:c.instructions+=2;goto B59df46;
case 0x59df48:c.instructions+=1;goto B59df48;
case 0x59df4a:goto L59df4a;
case 0x59df50:c.instructions+=3;goto B59df50;
case 0x59df52:c.instructions+=2;goto B59df52;
case 0x59df55:c.instructions+=1;goto B59df55;
case 0x59df57:goto L59df57;
case 0x59df59:c.instructions+=1;goto B59df59;
case 0x59df5b:goto L59df5b;
case 0x59df5d:c.instructions+=8;goto B59df5d;
case 0x59df61:c.instructions+=7;goto B59df61;
case 0x59df63:c.instructions+=6;goto B59df63;
case 0x59df65:c.instructions+=5;goto B59df65;
case 0x59df69:c.instructions+=4;goto B59df69;
case 0x59df6d:c.instructions+=3;goto B59df6d;
case 0x59df6f:c.instructions+=2;goto B59df6f;
case 0x59df73:c.instructions+=1;goto B59df73;
case 0x59df75:goto L59df75;
case 0x59df79:c.instructions+=2;goto B59df79;
case 0x59df7d:c.instructions+=1;goto B59df7d;
case 0x59df7f:goto L59df7f;
case 0x59df81:c.instructions+=3;goto B59df81;
case 0x59df85:c.instructions+=2;goto B59df85;
case 0x59df89:c.instructions+=1;goto B59df89;
case 0x59df8b:goto L59df8b;
case 0x59df8e:c.instructions+=3;goto B59df8e;
case 0x59df92:c.instructions+=2;goto B59df92;
case 0x59df93:c.instructions+=1;goto B59df93;
case 0x59df98:goto L59df98;
case 0x59df9c:c.instructions+=3;goto B59df9c;
case 0x59dfa2:c.instructions+=2;goto B59dfa2;
case 0x59dfa5:c.instructions+=1;goto B59dfa5;
case 0x59dfaa:goto L59dfaa;
case 0x59dfae:c.instructions+=3;goto B59dfae;
case 0x59dfb2:c.instructions+=2;goto B59dfb2;
case 0x59dfb3:c.instructions+=1;goto B59dfb3;
case 0x59dfb8:goto L59dfb8;
case 0x59dfba:c.instructions+=10;goto B59dfba;
case 0x59dfbe:c.instructions+=9;goto B59dfbe;
case 0x59dfc0:c.instructions+=8;goto B59dfc0;
case 0x59dfc2:c.instructions+=7;goto B59dfc2;
case 0x59dfc5:c.instructions+=6;goto B59dfc5;
case 0x59dfc7:c.instructions+=5;goto B59dfc7;
case 0x59dfca:c.instructions+=4;goto B59dfca;
case 0x59dfcd:c.instructions+=3;goto B59dfcd;
case 0x59dfce:c.instructions+=2;goto B59dfce;
case 0x59dfd1:c.instructions+=1;goto B59dfd1;
case 0x59dfd6:goto L59dfd6;
case 0x59dfda:c.instructions+=4;goto B59dfda;
case 0x59dfe0:c.instructions+=3;goto B59dfe0;
case 0x59dfe3:c.instructions+=2;goto B59dfe3;
case 0x59dfe6:c.instructions+=1;goto B59dfe6;
case 0x59dfeb:goto L59dfeb;
case 0x59dfef:c.instructions+=3;goto B59dfef;
case 0x59dff3:c.instructions+=2;goto B59dff3;
case 0x59dff4:c.instructions+=1;goto B59dff4;
case 0x59dff9:goto L59dff9;
case 0x59dffb:c.instructions+=2;goto B59dffb;
case 0x59dfff:c.instructions+=1;goto B59dfff;
default:missing_instruction(c.pc);}
B59d004:L59d004:{c.instructions+=11;NFSU2_TR(0x59d004);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59d00a:{NFSU2_TR(0x59d00a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59d010:{NFSU2_TR(0x59d010);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B59d016:{NFSU2_TR(0x59d016);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59d01a:{NFSU2_TR(0x59d01a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59d01b:{NFSU2_TR(0x59d01b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59d01c:{NFSU2_TR(0x59d01c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59d022:{NFSU2_TR(0x59d022);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59d023:{NFSU2_TR(0x59d023);
__builtin_memmove((R+16),(R+20),4);
}
B59d025:{NFSU2_TR(0x59d025);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59d026:{NFSU2_TR(0x59d026);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59d030:L59d030:{c.instructions+=7;NFSU2_TR(0x59d030);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d031:{NFSU2_TR(0x59d031);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d032:{NFSU2_TR(0x59d032);
__builtin_memmove((R+24),(R+4),4);
}
B59d034:{NFSU2_TR(0x59d034);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d035:{NFSU2_TR(0x59d035);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59d038:{NFSU2_TR(0x59d038);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d039:{NFSU2_TR(0x59d039);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59d03eull));
TAIL_STATIC(0x43c780u,43c);
}
B59d03e:L59d03e:{c.instructions+=4;NFSU2_TR(0x59d03e);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d041:{NFSU2_TR(0x59d041);
{u32 ea_=u32(u32(7881300u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59d047:{NFSU2_TR(0x59d047);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59d04a:{NFSU2_TR(0x59d04a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59d04full));
TAIL_STATIC(0x43c350u,43c);
}
B59d04f:L59d04f:{c.instructions+=4;NFSU2_TR(0x59d04f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59d052:{NFSU2_TR(0x59d052);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59d056:{NFSU2_TR(0x59d056);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d057:{NFSU2_TR(0x59d057);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59d05cull));
TAIL_STATIC(0x43c350u,43c);
}
B59d05c:L59d05c:{c.instructions+=19;NFSU2_TR(0x59d05c);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59d05f:{NFSU2_TR(0x59d05f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59d063:{NFSU2_TR(0x59d063);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59d065:{NFSU2_TR(0x59d065);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59d068:{NFSU2_TR(0x59d068);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B59d06a:{NFSU2_TR(0x59d06a);
__builtin_memmove((R+8),(R+4),4);
}
B59d06c:{NFSU2_TR(0x59d06c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B59d06e:{NFSU2_TR(0x59d06e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59d071:{NFSU2_TR(0x59d071);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59d077:{NFSU2_TR(0x59d077);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59d07d:{NFSU2_TR(0x59d07d);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d080:{NFSU2_TR(0x59d080);
{u32 ea_=u32(u32(8003240u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59d086:{NFSU2_TR(0x59d086);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B59d089:{NFSU2_TR(0x59d089);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d08c:{NFSU2_TR(0x59d08c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59d092:{NFSU2_TR(0x59d092);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59d098:{NFSU2_TR(0x59d098);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59d09a:{NFSU2_TR(0x59d09a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59d09d:{NFSU2_TR(0x59d09d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59d0b7;}}
}
B59d09f:L59d09f:{c.instructions+=6;NFSU2_TR(0x59d09f);
{u32 ea_=u32(u32(8003240u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59d0a5:{NFSU2_TR(0x59d0a5);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59d0a8:{NFSU2_TR(0x59d0a8);
{u32 ea_=u32(u32(8003236u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59d0ae:{NFSU2_TR(0x59d0ae);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59d0b0:{NFSU2_TR(0x59d0b0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59d0b3:{NFSU2_TR(0x59d0b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59d0e0;}}
}
B59d0b5:L59d0b5:{c.instructions+=1;NFSU2_TR(0x59d0b5);
{goto L59d0dd;}
}
B59d0b7:L59d0b7:{c.instructions+=4;NFSU2_TR(0x59d0b7);
{u32 ea_=u32(u32(8003232u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59d0bd:{NFSU2_TR(0x59d0bd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59d0bf:{NFSU2_TR(0x59d0bf);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59d0c2:{NFSU2_TR(0x59d0c2);
if(r1(R+514)){{goto L59d0e0;}}
}
B59d0c4:L59d0c4:{c.instructions+=7;NFSU2_TR(0x59d0c4);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d0c7:{NFSU2_TR(0x59d0c7);
{u32 ea_=u32(u32(8003240u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59d0cd:{NFSU2_TR(0x59d0cd);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59d0d0:{NFSU2_TR(0x59d0d0);
{u32 ea_=u32(u32(8003228u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59d0d6:{NFSU2_TR(0x59d0d6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59d0d8:{NFSU2_TR(0x59d0d8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59d0db:{NFSU2_TR(0x59d0db);
if(r1(R+514)){{goto L59d0e0;}}
}
B59d0dd:L59d0dd:{c.instructions+=1;NFSU2_TR(0x59d0dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59d0e0:L59d0e0:{c.instructions+=3;NFSU2_TR(0x59d0e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59d0e6:{NFSU2_TR(0x59d0e6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B59d0e8:{NFSU2_TR(0x59d0e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59d0fc;}}
}
B59d0ea:L59d0ea:{c.instructions+=5;NFSU2_TR(0x59d0ea);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d0ed:{NFSU2_TR(0x59d0ed);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59d0f3:{NFSU2_TR(0x59d0f3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59d0f5:{NFSU2_TR(0x59d0f5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59d0f8:{NFSU2_TR(0x59d0f8);
if(r1(R+514)){{goto L59d114;}}
}
B59d0fa:L59d0fa:{c.instructions+=1;NFSU2_TR(0x59d0fa);
{goto L59d111;}
}
B59d0fc:L59d0fc:{c.instructions+=2;NFSU2_TR(0x59d0fc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B59d0ff:{NFSU2_TR(0x59d0ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59d114;}}
}
B59d101:L59d101:{c.instructions+=5;NFSU2_TR(0x59d101);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d104:{NFSU2_TR(0x59d104);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59d10a:{NFSU2_TR(0x59d10a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59d10c:{NFSU2_TR(0x59d10c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59d10f:{NFSU2_TR(0x59d10f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59d114;}}
}
B59d111:L59d111:{c.instructions+=1;NFSU2_TR(0x59d111);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59d114:L59d114:{c.instructions+=5;NFSU2_TR(0x59d114);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d117:{NFSU2_TR(0x59d117);
{u32 ea_=u32(u32(7882144u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59d11d:{NFSU2_TR(0x59d11d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59d11f:{NFSU2_TR(0x59d11f);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59d122:{NFSU2_TR(0x59d122);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59d12e;}}
}
B59d124:L59d124:{c.instructions+=5;NFSU2_TR(0x59d124);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59d125:{NFSU2_TR(0x59d125);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59d12b:{NFSU2_TR(0x59d12b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59d12c:{NFSU2_TR(0x59d12c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59d12d:{NFSU2_TR(0x59d12d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59d12e:L59d12e:{c.instructions+=5;NFSU2_TR(0x59d12e);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d131:{NFSU2_TR(0x59d131);
{u32 ea_=u32(u32(8003224u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59d137:{NFSU2_TR(0x59d137);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59d139:{NFSU2_TR(0x59d139);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59d13c:{NFSU2_TR(0x59d13c);
if(r1(R+514)){{goto L59d14c;}}
}
B59d13e:L59d13e:{c.instructions+=5;NFSU2_TR(0x59d13e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59d13f:{NFSU2_TR(0x59d13f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59d149:{NFSU2_TR(0x59d149);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59d14a:{NFSU2_TR(0x59d14a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59d14b:{NFSU2_TR(0x59d14b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59d14c:L59d14c:{c.instructions+=5;NFSU2_TR(0x59d14c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59d14d:{NFSU2_TR(0x59d14d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59d157:{NFSU2_TR(0x59d157);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59d158:{NFSU2_TR(0x59d158);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59d159:{NFSU2_TR(0x59d159);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59d160:L59d160:{c.instructions+=12;NFSU2_TR(0x59d160);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d161:{NFSU2_TR(0x59d161);
__builtin_memmove((R+20),(R+16),4);
}
B59d163:{NFSU2_TR(0x59d163);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B59d166:{NFSU2_TR(0x59d166);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B59d169:{NFSU2_TR(0x59d169);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59d16c:{NFSU2_TR(0x59d16c);
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
B59d16e:{NFSU2_TR(0x59d16e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d16f:{NFSU2_TR(0x59d16f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d170:{NFSU2_TR(0x59d170);
__builtin_memmove((R+24),(R+4),4);
}
B59d172:{NFSU2_TR(0x59d172);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d173:{NFSU2_TR(0x59d173);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B59d179:{NFSU2_TR(0x59d179);
if(r1(R+518)){{goto L59d1a4;}}
}
B59d17b:L59d17b:{c.instructions+=12;NFSU2_TR(0x59d17b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59d17e:{NFSU2_TR(0x59d17e);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d181:{NFSU2_TR(0x59d181);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d182:{NFSU2_TR(0x59d182);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59d184:{NFSU2_TR(0x59d184);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59d187:{NFSU2_TR(0x59d187);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59d18d:{NFSU2_TR(0x59d18d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d18e:{NFSU2_TR(0x59d18e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B59d194:{NFSU2_TR(0x59d194);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d195:{NFSU2_TR(0x59d195);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59d19b:{NFSU2_TR(0x59d19b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d19c:{NFSU2_TR(0x59d19c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59d1a1ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B59d1a1:L59d1a1:{c.instructions+=1;NFSU2_TR(0x59d1a1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B59d1a4:L59d1a4:{c.instructions+=5;NFSU2_TR(0x59d1a4);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d1a7:{NFSU2_TR(0x59d1a7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59d1ad:{NFSU2_TR(0x59d1ad);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59d1af:{NFSU2_TR(0x59d1af);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59d1b2:{NFSU2_TR(0x59d1b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59d230;}}
}
B59d1b4:L59d1b4:{c.instructions+=7;NFSU2_TR(0x59d1b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59d1ba:{NFSU2_TR(0x59d1ba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d1bb:{NFSU2_TR(0x59d1bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59d1c1:{NFSU2_TR(0x59d1c1);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59d1c5:{NFSU2_TR(0x59d1c5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d1c6:{NFSU2_TR(0x59d1c6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d1c7:{NFSU2_TR(0x59d1c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59d1ccull));
TAIL_STATIC(0x43d1e0u,43d);
}
B59d1cc:L59d1cc:{c.instructions+=6;NFSU2_TR(0x59d1cc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d1cd:{NFSU2_TR(0x59d1cd);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59d1d1:{NFSU2_TR(0x59d1d1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d1d2:{NFSU2_TR(0x59d1d2);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59d1d6:{NFSU2_TR(0x59d1d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d1d7:{NFSU2_TR(0x59d1d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59d1dcull));
TAIL_STATIC(0x43d1e0u,43d);
}
B59d1dc:L59d1dc:{c.instructions+=15;NFSU2_TR(0x59d1dc);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d1e0:{NFSU2_TR(0x59d1e0);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d1e3:{NFSU2_TR(0x59d1e3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B59d1e6:{NFSU2_TR(0x59d1e6);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d1ea:{NFSU2_TR(0x59d1ea);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d1ed:{NFSU2_TR(0x59d1ed);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59d1ef:{NFSU2_TR(0x59d1ef);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d1f3:{NFSU2_TR(0x59d1f3);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d1f5:{NFSU2_TR(0x59d1f5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59d1f7:{NFSU2_TR(0x59d1f7);
{u32 ea_=u32(u32(7881976u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d1fd:{NFSU2_TR(0x59d1fd);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59d203:{NFSU2_TR(0x59d203);
{u32 ea_=u32(u32(7894412u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B59d209:{NFSU2_TR(0x59d209);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59d20b:{NFSU2_TR(0x59d20b);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59d20e:{NFSU2_TR(0x59d20e);
if(r1(R+514)){{goto L59d218;}}
}
B59d210:L59d210:{c.instructions+=2;NFSU2_TR(0x59d210);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59d212:{NFSU2_TR(0x59d212);
{u32 ea_=u32(u32(7894412u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d218:L59d218:{c.instructions+=9;NFSU2_TR(0x59d218);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d21b:{NFSU2_TR(0x59d21b);
{u32 ea_=u32(r4(R+24)+u32(356u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59d221:{NFSU2_TR(0x59d221);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d227:{NFSU2_TR(0x59d227);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59d228:{NFSU2_TR(0x59d228);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59d229:{NFSU2_TR(0x59d229);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59d22a:{NFSU2_TR(0x59d22a);
__builtin_memmove((R+16),(R+20),4);
}
B59d22c:{NFSU2_TR(0x59d22c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59d22d:{NFSU2_TR(0x59d22d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59d230:L59d230:{c.instructions+=8;NFSU2_TR(0x59d230);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d236:{NFSU2_TR(0x59d236);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59d237:{NFSU2_TR(0x59d237);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59d241:{NFSU2_TR(0x59d241);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59d242:{NFSU2_TR(0x59d242);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59d243:{NFSU2_TR(0x59d243);
__builtin_memmove((R+16),(R+20),4);
}
B59d245:{NFSU2_TR(0x59d245);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59d246:{NFSU2_TR(0x59d246);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59d250:L59d250:{c.instructions+=19;NFSU2_TR(0x59d250);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d251:{NFSU2_TR(0x59d251);
__builtin_memmove((R+20),(R+16),4);
}
B59d253:{NFSU2_TR(0x59d253);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B59d256:{NFSU2_TR(0x59d256);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B59d259:{NFSU2_TR(0x59d259);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d25a:{NFSU2_TR(0x59d25a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B59d25d:{NFSU2_TR(0x59d25d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d25e:{NFSU2_TR(0x59d25e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d25f:{NFSU2_TR(0x59d25f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B59d262:{NFSU2_TR(0x59d262);
__builtin_memmove((R+24),(R+4),4);
}
B59d264:{NFSU2_TR(0x59d264);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59d267:{NFSU2_TR(0x59d267);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59d26a:{NFSU2_TR(0x59d26a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59d26d:{NFSU2_TR(0x59d26d);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59d271:{NFSU2_TR(0x59d271);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d272:{NFSU2_TR(0x59d272);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d273:{NFSU2_TR(0x59d273);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d274:{NFSU2_TR(0x59d274);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d275:{NFSU2_TR(0x59d275);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59d27aull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B59d27a:L59d27a:{c.instructions+=4;NFSU2_TR(0x59d27a);
{u32 ea_=u32(r4(R+24)+u32(396u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59d280:{NFSU2_TR(0x59d280);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B59d284:{NFSU2_TR(0x59d284);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59d286:{NFSU2_TR(0x59d286);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59d290;}}
}
B59d288:L59d288:{c.instructions+=2;NFSU2_TR(0x59d288);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59d28a:{NFSU2_TR(0x59d28a);
{u32 ea_=u32(u32(8002724u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d290:L59d290:{c.instructions+=11;NFSU2_TR(0x59d290);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B59d292:{NFSU2_TR(0x59d292);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59d296:{NFSU2_TR(0x59d296);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59d299:{NFSU2_TR(0x59d299);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59d29c:{NFSU2_TR(0x59d29c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59d2a0:{NFSU2_TR(0x59d2a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B59d2a2:{NFSU2_TR(0x59d2a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59d2a6:{NFSU2_TR(0x59d2a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d2a7:{NFSU2_TR(0x59d2a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59d2ab:{NFSU2_TR(0x59d2ab);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d2ac:{NFSU2_TR(0x59d2ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59d2b1ull));
TAIL_STATIC(0x5d3ca0u,5d3);
}
B59d2b1:L59d2b1:{c.instructions+=7;NFSU2_TR(0x59d2b1);
{u32 ea_=u32(r4(R+24)+u32(360u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59d2b7:{NFSU2_TR(0x59d2b7);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59d2bb:{NFSU2_TR(0x59d2bb);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B59d2c0:{NFSU2_TR(0x59d2c0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B59d2c3:{NFSU2_TR(0x59d2c3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59d2c5:{NFSU2_TR(0x59d2c5);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59d2c9:{NFSU2_TR(0x59d2c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59d2d4;}}
}
B59d2cb:L59d2cb:{c.instructions+=3;NFSU2_TR(0x59d2cb);
__builtin_memmove((R+0),gp(0x890108),4);
}
B59d2d0:{NFSU2_TR(0x59d2d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59d2d2:{NFSU2_TR(0x59d2d2);
if(r1(R+518)){{goto L59d2dd;}}
}
B59d2d4:L59d2d4:{c.instructions+=2;NFSU2_TR(0x59d2d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59d2d7:{NFSU2_TR(0x59d2d7);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+0)),r4(U+0));
}
B59d2dd:L59d2dd:{c.instructions+=13;NFSU2_TR(0x59d2dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59d2e0:{NFSU2_TR(0x59d2e0);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d2e3:{NFSU2_TR(0x59d2e3);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d2e6:{NFSU2_TR(0x59d2e6);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d2e9:{NFSU2_TR(0x59d2e9);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d2ec:{NFSU2_TR(0x59d2ec);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59d2ee:{NFSU2_TR(0x59d2ee);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d2f1:{NFSU2_TR(0x59d2f1);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d2f3:{NFSU2_TR(0x59d2f3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59d2f5:{NFSU2_TR(0x59d2f5);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B59d2fb:{NFSU2_TR(0x59d2fb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59d2fd:{NFSU2_TR(0x59d2fd);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59d300:{NFSU2_TR(0x59d300);
if(r1(R+514)){{goto L59d31c;}}
}
B59d302:L59d302:{c.instructions+=10;NFSU2_TR(0x59d302);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59d305:{NFSU2_TR(0x59d305);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59d307:{NFSU2_TR(0x59d307);
{u32 ea_=u32(u32(8003244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d30d:{NFSU2_TR(0x59d30d);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B59d313:{NFSU2_TR(0x59d313);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59d314:{NFSU2_TR(0x59d314);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59d315:{NFSU2_TR(0x59d315);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59d316:{NFSU2_TR(0x59d316);
__builtin_memmove((R+16),(R+20),4);
}
B59d318:{NFSU2_TR(0x59d318);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59d319:{NFSU2_TR(0x59d319);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59d31c:L59d31c:{c.instructions+=20;NFSU2_TR(0x59d31c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d320:{NFSU2_TR(0x59d320);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59d322:{NFSU2_TR(0x59d322);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d326:{NFSU2_TR(0x59d326);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59d329:{NFSU2_TR(0x59d329);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d32c:{NFSU2_TR(0x59d32c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59d32d:{NFSU2_TR(0x59d32d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B59d331:{NFSU2_TR(0x59d331);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59d333:{NFSU2_TR(0x59d333);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59d334:{NFSU2_TR(0x59d334);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d337:{NFSU2_TR(0x59d337);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B59d339:{NFSU2_TR(0x59d339);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d33b:{NFSU2_TR(0x59d33b);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B59d33d:{NFSU2_TR(0x59d33d);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d340:{NFSU2_TR(0x59d340);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59d341:{NFSU2_TR(0x59d341);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59d343:{NFSU2_TR(0x59d343);
__asm__ volatile(".byte 0xde,0xf1":::"memory");
}
B59d345:{NFSU2_TR(0x59d345);
__builtin_memmove((R+16),(R+20),4);
}
B59d347:{NFSU2_TR(0x59d347);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59d348:{NFSU2_TR(0x59d348);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59d350:L59d350:{c.instructions+=26;NFSU2_TR(0x59d350);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59d353:{NFSU2_TR(0x59d353);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59d357:{NFSU2_TR(0x59d357);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B59d359:{NFSU2_TR(0x59d359);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59d35c:{NFSU2_TR(0x59d35c);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d35f:{NFSU2_TR(0x59d35f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59d365:{NFSU2_TR(0x59d365);
{u32 ea_=u32(r4(R+4)+u32(292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d36b:{NFSU2_TR(0x59d36b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x98ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B59d371:{NFSU2_TR(0x59d371);
{u32 ea_=u32(r4(R+4)+u32(264u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B59d377:{NFSU2_TR(0x59d377);
{u32 ea_=u32(r4(R+4)+u32(288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59d37d:{NFSU2_TR(0x59d37d);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d383:{NFSU2_TR(0x59d383);
{u32 ea_=u32(r4(R+4)+u32(288u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59d389:{NFSU2_TR(0x59d389);
{u32 ea_=u32(u32(8002336u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d38f:{NFSU2_TR(0x59d38f);
{u32 ea_=u32(r4(R+0)+u32(8392460u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d395:{NFSU2_TR(0x59d395);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d398:{NFSU2_TR(0x59d398);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B59d39a:{NFSU2_TR(0x59d39a);
{u32 ea_=u32(r4(R+4)+u32(372u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d3a0:{NFSU2_TR(0x59d3a0);
{u32 ea_=u32(u32(8002340u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d3a6:{NFSU2_TR(0x59d3a6);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d3a9:{NFSU2_TR(0x59d3a9);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B59d3ab:{NFSU2_TR(0x59d3ab);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B59d3ae:{NFSU2_TR(0x59d3ae);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59d3b1:{NFSU2_TR(0x59d3b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59d3b7:{NFSU2_TR(0x59d3b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59d3b9:{NFSU2_TR(0x59d3b9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59d3bb:{NFSU2_TR(0x59d3bb);
if(r1(R+518)){{goto L59d3c4;}}
}
B59d3bd:L59d3bd:{c.instructions+=1;NFSU2_TR(0x59d3bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59d3c4:L59d3c4:{c.instructions+=3;NFSU2_TR(0x59d3c4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B59d3ca:{NFSU2_TR(0x59d3ca);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59d3cc:{NFSU2_TR(0x59d3cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59d3f9;}}
}
B59d3ce:L59d3ce:{c.instructions+=5;NFSU2_TR(0x59d3ce);
{u32 ea_=u32(u32(8374272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d3d4:{NFSU2_TR(0x59d3d4);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59d3da:{NFSU2_TR(0x59d3da);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59d3dc:{NFSU2_TR(0x59d3dc);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59d3df:{NFSU2_TR(0x59d3df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59d3f9;}}
}
B59d3e1:L59d3e1:{c.instructions+=6;NFSU2_TR(0x59d3e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59d3e4:{NFSU2_TR(0x59d3e4);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d3e7:{NFSU2_TR(0x59d3e7);
{u32 ea_=u32(u32(8374272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d3ed:{NFSU2_TR(0x59d3ed);
{u32 ea_=u32(r4(R+4)+u32(280u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B59d3f3:{NFSU2_TR(0x59d3f3);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B59d3f6:{NFSU2_TR(0x59d3f6);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59d3f9:L59d3f9:{c.instructions+=2;NFSU2_TR(0x59d3f9);
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
B59d3fb:{NFSU2_TR(0x59d3fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59d400:L59d400:{c.instructions+=21;NFSU2_TR(0x59d400);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59d403:{NFSU2_TR(0x59d403);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d406:{NFSU2_TR(0x59d406);
{u32 ea_=u32(r4(R+4)+u32(380u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d40c:{NFSU2_TR(0x59d40c);
{u32 ea_=u32(u32(8374028u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d412:{NFSU2_TR(0x59d412);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d415:{NFSU2_TR(0x59d415);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59d418:{NFSU2_TR(0x59d418);
{u32 ea_=u32(r4(R+4)+u32(376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d41e:{NFSU2_TR(0x59d41e);
{u32 ea_=u32(u32(8374024u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d424:{NFSU2_TR(0x59d424);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59d426:{NFSU2_TR(0x59d426);
{u32 ea_=u32(u32(8374032u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d42c:{NFSU2_TR(0x59d42c);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d42f:{NFSU2_TR(0x59d42f);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B59d431:{NFSU2_TR(0x59d431);
{u32 ea_=u32(u32(8374036u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d437:{NFSU2_TR(0x59d437);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d43a:{NFSU2_TR(0x59d43a);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d43e:{NFSU2_TR(0x59d43e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59d440:{NFSU2_TR(0x59d440);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B59d442:{NFSU2_TR(0x59d442);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B59d444:{NFSU2_TR(0x59d444);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59d446:{NFSU2_TR(0x59d446);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59d449:{NFSU2_TR(0x59d449);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59d476;}}
}
B59d44b:L59d44b:{c.instructions+=5;NFSU2_TR(0x59d44b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59d451:{NFSU2_TR(0x59d451);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B59d453:{NFSU2_TR(0x59d453);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59d455:{NFSU2_TR(0x59d455);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59d458:{NFSU2_TR(0x59d458);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59d46a;}}
}
B59d45a:L59d45a:{c.instructions+=3;NFSU2_TR(0x59d45a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59d464:{NFSU2_TR(0x59d464);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59d467:{NFSU2_TR(0x59d467);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59d46a:L59d46a:{c.instructions+=3;NFSU2_TR(0x59d46a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59d470:{NFSU2_TR(0x59d470);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59d473:{NFSU2_TR(0x59d473);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59d476:L59d476:{c.instructions+=3;NFSU2_TR(0x59d476);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59d478:{NFSU2_TR(0x59d478);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59d482:{NFSU2_TR(0x59d482);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59d490:L59d490:{c.instructions+=3;NFSU2_TR(0x59d490);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59d496:{NFSU2_TR(0x59d496);
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
B59d498:{NFSU2_TR(0x59d498);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59d4b3;}}
}
B59d49a:L59d49a:{c.instructions+=5;NFSU2_TR(0x59d49a);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d49d:{NFSU2_TR(0x59d49d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59d4a3:{NFSU2_TR(0x59d4a3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59d4a5:{NFSU2_TR(0x59d4a5);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59d4a8:{NFSU2_TR(0x59d4a8);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L59d4b3;}}
}
B59d4aa:L59d4aa:{c.instructions+=3;NFSU2_TR(0x59d4aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59d4ad:{NFSU2_TR(0x59d4ad);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x2ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B59d4b1:{NFSU2_TR(0x59d4b1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L59d4ba;}}
}
B59d4b3:L59d4b3:{c.instructions+=2;NFSU2_TR(0x59d4b3);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d4b9:{NFSU2_TR(0x59d4b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59d4ba:L59d4ba:{c.instructions+=8;NFSU2_TR(0x59d4ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59d4bd:{NFSU2_TR(0x59d4bd);
{u32 ea_=u32(r4(R+4)+u32(1004u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d4c3:{NFSU2_TR(0x59d4c3);
{u32 ea_=u32(u32(8003248u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59d4c9:{NFSU2_TR(0x59d4c9);
{u32 ea_=u32(u32(7885052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d4cf:{NFSU2_TR(0x59d4cf);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B59d4d5:{NFSU2_TR(0x59d4d5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59d4d7:{NFSU2_TR(0x59d4d7);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59d4da:{NFSU2_TR(0x59d4da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59d4e6;}}
}
B59d4dc:L59d4dc:{c.instructions+=3;NFSU2_TR(0x59d4dc);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59d4de:{NFSU2_TR(0x59d4de);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d4e4:{NFSU2_TR(0x59d4e4);
{goto L59d4fb;}
}
B59d4e6:L59d4e6:{c.instructions+=4;NFSU2_TR(0x59d4e6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B59d4ec:{NFSU2_TR(0x59d4ec);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59d4ee:{NFSU2_TR(0x59d4ee);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59d4f1:{NFSU2_TR(0x59d4f1);
if(r1(R+514)){{goto L59d4fb;}}
}
B59d4f3:L59d4f3:{c.instructions+=2;NFSU2_TR(0x59d4f3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59d4f5:{NFSU2_TR(0x59d4f5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d4fb:L59d4fb:{c.instructions+=5;NFSU2_TR(0x59d4fb);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d501:{NFSU2_TR(0x59d501);
{u32 ea_=u32(u32(8374044u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59d507:{NFSU2_TR(0x59d507);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B59d509:{NFSU2_TR(0x59d509);
{u32 ea_=u32(u32(8374044u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59d50f:{NFSU2_TR(0x59d50f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59d510:L59d510:{c.instructions+=6;NFSU2_TR(0x59d510);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d511:{NFSU2_TR(0x59d511);
__builtin_memmove((R+0),gp(0x7fc7f0),4);
}
B59d516:{NFSU2_TR(0x59d516);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59d518:{NFSU2_TR(0x59d518);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d519:{NFSU2_TR(0x59d519);
__builtin_memmove((R+12),(R+4),4);
}
B59d51b:{NFSU2_TR(0x59d51b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59d543;}}
}
B59d51d:L59d51d:{c.instructions+=4;NFSU2_TR(0x59d51d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59d521:{NFSU2_TR(0x59d521);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d522:{NFSU2_TR(0x59d522);
w4(R+4,u32(0x7fc954ull));
}
B59d527:{NFSU2_TR(0x59d527);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59d52cull));
TAIL_STATIC(0x5764d0u,576);
}
B59d52c:L59d52c:{c.instructions+=6;NFSU2_TR(0x59d52c);
{u32 ea_=u32(r4(R+12)+u32(356u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d532:{NFSU2_TR(0x59d532);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59d533:{NFSU2_TR(0x59d533);
{u32 ea_=u32(u32(8374040u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d539:{NFSU2_TR(0x59d539);
{u32 ea_=u32(u32(8374080u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d53f:{NFSU2_TR(0x59d53f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59d540:{NFSU2_TR(0x59d540);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59d543:L59d543:{c.instructions+=10;NFSU2_TR(0x59d543);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d547:{NFSU2_TR(0x59d547);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d548:{NFSU2_TR(0x59d548);
{u32 ea_=u32(u32(7881292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d54e:{NFSU2_TR(0x59d54e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d54f:{NFSU2_TR(0x59d54f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B59d552:{NFSU2_TR(0x59d552);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B59d554:{NFSU2_TR(0x59d554);
{u32 ea_=u32(u32(7897628u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d55a:{NFSU2_TR(0x59d55a);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d560:{NFSU2_TR(0x59d560);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59d564:{NFSU2_TR(0x59d564);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59d569ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59d569:L59d569:{c.instructions+=8;NFSU2_TR(0x59d569);
{u32 ea_=u32(u32(8374264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d56f:{NFSU2_TR(0x59d56f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d573:{NFSU2_TR(0x59d573);
__builtin_memmove((R+24),(R+0),4);
}
B59d575:{NFSU2_TR(0x59d575);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B59d578:{NFSU2_TR(0x59d578);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59d57c:{NFSU2_TR(0x59d57c);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B59d57f:{NFSU2_TR(0x59d57f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59d583:{NFSU2_TR(0x59d583);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L59d5a8;}}
}
B59d585:L59d585:{c.instructions+=4;NFSU2_TR(0x59d585);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59d589:{NFSU2_TR(0x59d589);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d58a:{NFSU2_TR(0x59d58a);
__builtin_memmove((R+4),gp(0x7fc7ec),4);
}
B59d590:{NFSU2_TR(0x59d590);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59d595ull));
TAIL_STATIC(0x5764d0u,576);
}
B59d595:L59d595:{c.instructions+=8;NFSU2_TR(0x59d595);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59d598:{NFSU2_TR(0x59d598);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d59b:{NFSU2_TR(0x59d59b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59d59c:{NFSU2_TR(0x59d59c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59d59d:{NFSU2_TR(0x59d59d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59d59e:{NFSU2_TR(0x59d59e);
{u32 ea_=u32(u32(8374260u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d5a4:{NFSU2_TR(0x59d5a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59d5a5:{NFSU2_TR(0x59d5a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59d5a8:L59d5a8:{c.instructions+=4;NFSU2_TR(0x59d5a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B59d5ac:{NFSU2_TR(0x59d5ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7fc7d4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B59d5b3:{NFSU2_TR(0x59d5b3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d5b4:{NFSU2_TR(0x59d5b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59d5b9ull));
TAIL_STATIC(0x5764d0u,576);
}
B59d5b9:L59d5b9:{c.instructions+=4;NFSU2_TR(0x59d5b9);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59d5bd:{NFSU2_TR(0x59d5bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7fc7d8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B59d5c4:{NFSU2_TR(0x59d5c4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d5c5:{NFSU2_TR(0x59d5c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59d5caull));
TAIL_STATIC(0x5764d0u,576);
}
B59d5ca:L59d5ca:{c.instructions+=14;NFSU2_TR(0x59d5ca);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B59d5ce:{NFSU2_TR(0x59d5ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59d5d1:{NFSU2_TR(0x59d5d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59d5d2:{NFSU2_TR(0x59d5d2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B59d5d6:{NFSU2_TR(0x59d5d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59d5d7:{NFSU2_TR(0x59d5d7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59d5d9:{NFSU2_TR(0x59d5d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59d5da:{NFSU2_TR(0x59d5da);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59d5de:{NFSU2_TR(0x59d5de);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B59d5e0:{NFSU2_TR(0x59d5e0);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59d5e4:{NFSU2_TR(0x59d5e4);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d5e7:{NFSU2_TR(0x59d5e7);
{u32 ea_=u32(u32(8374260u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d5ed:{NFSU2_TR(0x59d5ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59d5ee:{NFSU2_TR(0x59d5ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59d600:L59d600:{c.instructions+=14;NFSU2_TR(0x59d600);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d601:{NFSU2_TR(0x59d601);
__builtin_memmove((R+20),(R+16),4);
}
B59d603:{NFSU2_TR(0x59d603);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B59d606:{NFSU2_TR(0x59d606);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xb4ull))));
}
B59d60c:{NFSU2_TR(0x59d60c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d60d:{NFSU2_TR(0x59d60d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d60e:{NFSU2_TR(0x59d60e);
__builtin_memmove((R+24),(R+4),4);
}
B59d610:{NFSU2_TR(0x59d610);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d616:{NFSU2_TR(0x59d616);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B59d618:{NFSU2_TR(0x59d618);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59d61e:{NFSU2_TR(0x59d61e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d61f:{NFSU2_TR(0x59d61f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59d621:{NFSU2_TR(0x59d621);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59d624:{NFSU2_TR(0x59d624);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59d644;}}
}
B59d626:L59d626:{c.instructions+=3;NFSU2_TR(0x59d626);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59d62c:{NFSU2_TR(0x59d62c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59d62e:{NFSU2_TR(0x59d62e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59d644;}}
}
B59d630:L59d630:{c.instructions+=4;NFSU2_TR(0x59d630);
{u32 ea_=u32(u32(8374048u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d636:{NFSU2_TR(0x59d636);
w1(R+8,u8(0x1ull));
}
B59d638:{NFSU2_TR(0x59d638);
{u32 ea_=u32(r4(R+24)+u32(292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d63e:{NFSU2_TR(0x59d63e);
{u32 ea_=u32(r4(R+24)+u32(292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59d644:L59d644:{c.instructions+=26;NFSU2_TR(0x59d644);
{u32 ea_=u32(r4(R+24)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d64a:{NFSU2_TR(0x59d64a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59d650:{NFSU2_TR(0x59d650);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d656:{NFSU2_TR(0x59d656);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59d659:{NFSU2_TR(0x59d659);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x98ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B59d65f:{NFSU2_TR(0x59d65f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59d661:{NFSU2_TR(0x59d661);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59d663:{NFSU2_TR(0x59d663);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B59d665:{NFSU2_TR(0x59d665);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B59d667:{NFSU2_TR(0x59d667);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59d669:{NFSU2_TR(0x59d669);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B59d66b:{NFSU2_TR(0x59d66b);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B59d66d:{NFSU2_TR(0x59d66d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59d66f:{NFSU2_TR(0x59d66f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59d673:{NFSU2_TR(0x59d673);
{u32 ea_=u32(r4(R+0)+u32(8392452u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d679:{NFSU2_TR(0x59d679);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59d67c:{NFSU2_TR(0x59d67c);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d67f:{NFSU2_TR(0x59d67f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59d685:{NFSU2_TR(0x59d685);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B59d688:{NFSU2_TR(0x59d688);
{u32 ea_=u32(r4(R+24)+u32(392u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d68e:{NFSU2_TR(0x59d68e);
{u32 ea_=u32(r4(R+24)+u32(388u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d694:{NFSU2_TR(0x59d694);
{u32 ea_=u32(r4(R+24)+u32(384u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d69a:{NFSU2_TR(0x59d69a);
{u32 ea_=u32(r4(R+24)+u32(356u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d6a0:{NFSU2_TR(0x59d6a0);
{u32 ea_=u32(u32(8374040u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d6a6:{NFSU2_TR(0x59d6a6);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59d6aa:{NFSU2_TR(0x59d6aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59d6bb;}}
}
B59d6ac:L59d6ac:{c.instructions+=2;NFSU2_TR(0x59d6ac);
__builtin_memmove((R+4),(R+24),4);
}
B59d6ae:{NFSU2_TR(0x59d6ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59d6b3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x59d490u);}goto L59d490;}
}
B59d6b3:L59d6b3:{c.instructions+=2;NFSU2_TR(0x59d6b3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d6b7:{NFSU2_TR(0x59d6b7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59d6bb:L59d6bb:{c.instructions+=5;NFSU2_TR(0x59d6bb);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d6bf:{NFSU2_TR(0x59d6bf);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59d6c3:{NFSU2_TR(0x59d6c3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59d6c5:{NFSU2_TR(0x59d6c5);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59d6c8:{NFSU2_TR(0x59d6c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59d703;}}
}
B59d6ca:L59d6ca:{c.instructions+=5;NFSU2_TR(0x59d6ca);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d6ce:{NFSU2_TR(0x59d6ce);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59d6d4:{NFSU2_TR(0x59d6d4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59d6d6:{NFSU2_TR(0x59d6d6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59d6d9:{NFSU2_TR(0x59d6d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59d703;}}
}
B59d6db:L59d6db:{c.instructions+=10;NFSU2_TR(0x59d6db);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d6df:{NFSU2_TR(0x59d6df);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B59d6e3:{NFSU2_TR(0x59d6e3);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d6e9:{NFSU2_TR(0x59d6e9);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B59d6eb:{NFSU2_TR(0x59d6eb);
{u32 ea_=u32(r4(R+24)+u32(292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d6f1:{NFSU2_TR(0x59d6f1);
{u32 ea_=u32(r4(R+24)+u32(292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59d6f7:{NFSU2_TR(0x59d6f7);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59d6f9:{NFSU2_TR(0x59d6f9);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59d6ff:{NFSU2_TR(0x59d6ff);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59d701:{NFSU2_TR(0x59d701);
{goto L59d719;}
}
B59d703:L59d703:{c.instructions+=2;NFSU2_TR(0x59d703);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59d705:{NFSU2_TR(0x59d705);
if(r1(R+518)){{goto L59d719;}}
}
B59d707:L59d707:{c.instructions+=3;NFSU2_TR(0x59d707);
{u32 ea_=u32(r4(R+24)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d70d:{NFSU2_TR(0x59d70d);
{u32 ea_=u32(u32(8374048u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B59d713:{NFSU2_TR(0x59d713);
{u32 ea_=u32(r4(R+24)+u32(292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59d719:L59d719:{c.instructions+=6;NFSU2_TR(0x59d719);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d71d:{NFSU2_TR(0x59d71d);
w4(R+4,u32(0x3f800000ull));
}
B59d722:{NFSU2_TR(0x59d722);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59d728:{NFSU2_TR(0x59d728);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59d72a:{NFSU2_TR(0x59d72a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59d72d:{NFSU2_TR(0x59d72d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59d74a;}}
}
B59d72f:L59d72f:{c.instructions+=7;NFSU2_TR(0x59d72f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d733:{NFSU2_TR(0x59d733);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B59d737:{NFSU2_TR(0x59d737);
{u32 ea_=u32(r4(R+24)+u32(368u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59d73d:{NFSU2_TR(0x59d73d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59d743:{NFSU2_TR(0x59d743);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59d745:{NFSU2_TR(0x59d745);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59d748:{NFSU2_TR(0x59d748);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59d750;}}
}
B59d74a:L59d74a:{c.instructions+=1;NFSU2_TR(0x59d74a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59d750:L59d750:{c.instructions+=3;NFSU2_TR(0x59d750);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B59d756:{NFSU2_TR(0x59d756);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59d758:{NFSU2_TR(0x59d758);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59d764;}}
}
B59d75a:L59d75a:{c.instructions+=3;NFSU2_TR(0x59d75a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59d760:{NFSU2_TR(0x59d760);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59d762:{NFSU2_TR(0x59d762);
if(r1(R+518)){{goto L59d76a;}}
}
B59d764:L59d764:{c.instructions+=1;NFSU2_TR(0x59d764);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59d76a:L59d76a:{c.instructions+=3;NFSU2_TR(0x59d76a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B59d770:{NFSU2_TR(0x59d770);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59d772:{NFSU2_TR(0x59d772);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59d77e;}}
}
B59d774:L59d774:{c.instructions+=1;NFSU2_TR(0x59d774);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59d77e:L59d77e:{c.instructions+=5;NFSU2_TR(0x59d77e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59d781:{NFSU2_TR(0x59d781);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59d788:{NFSU2_TR(0x59d788);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d789:{NFSU2_TR(0x59d789);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d78a:{NFSU2_TR(0x59d78a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59d78full));
TAIL_STATIC(0x43c9d0u,43c);
}
B59d78f:L59d78f:{c.instructions+=10;NFSU2_TR(0x59d78f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B59d795:{NFSU2_TR(0x59d795);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d796:{NFSU2_TR(0x59d796);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59d79d:{NFSU2_TR(0x59d79d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d79e:{NFSU2_TR(0x59d79e);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59d7a2:{NFSU2_TR(0x59d7a2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d7a3:{NFSU2_TR(0x59d7a3);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59d7ae:{NFSU2_TR(0x59d7ae);
u8 U[8];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59d7b9:{NFSU2_TR(0x59d7b9);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59d7c4:{NFSU2_TR(0x59d7c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59d7c9ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B59d7c9:L59d7c9:{c.instructions+=5;NFSU2_TR(0x59d7c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59d7cd:{NFSU2_TR(0x59d7cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59d7d1:{NFSU2_TR(0x59d7d1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d7d2:{NFSU2_TR(0x59d7d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d7d3:{NFSU2_TR(0x59d7d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59d7d8ull));
TAIL_STATIC(0x43c570u,43c);
}
B59d7d8:L59d7d8:{c.instructions+=10;NFSU2_TR(0x59d7d8);
w4(R+4,u32(r2(R+0)));
}
B59d7db:{NFSU2_TR(0x59d7db);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59d7df:{NFSU2_TR(0x59d7df);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B59d7e2:{NFSU2_TR(0x59d7e2);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B59d7e6:{NFSU2_TR(0x59d7e6);
{u32 ea_=u32(u32(7881280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d7ec:{NFSU2_TR(0x59d7ec);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59d7f0:{NFSU2_TR(0x59d7f0);
{u32 ea_=u32(u32(8001416u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59d7f6:{NFSU2_TR(0x59d7f6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59d7f8:{NFSU2_TR(0x59d7f8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59d7fb:{NFSU2_TR(0x59d7fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59d80d;}}
}
B59d7fd:L59d7fd:{c.instructions+=4;NFSU2_TR(0x59d7fd);
{u32 ea_=u32(u32(8001416u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d803:{NFSU2_TR(0x59d803);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B59d805:{NFSU2_TR(0x59d805);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B59d809:{NFSU2_TR(0x59d809);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59d80d:L59d80d:{c.instructions+=5;NFSU2_TR(0x59d80d);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d811:{NFSU2_TR(0x59d811);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59d817:{NFSU2_TR(0x59d817);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59d819:{NFSU2_TR(0x59d819);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59d81c:{NFSU2_TR(0x59d81c);
if(r1(R+514)){{goto L59d849;}}
}
B59d81e:L59d81e:{c.instructions+=7;NFSU2_TR(0x59d81e);
{u32 ea_=u32(u32(8001416u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d824:{NFSU2_TR(0x59d824);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59d828:{NFSU2_TR(0x59d828);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59d82c:{NFSU2_TR(0x59d82c);
{u32 ea_=u32(u32(8001416u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59d832:{NFSU2_TR(0x59d832);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59d834:{NFSU2_TR(0x59d834);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59d837:{NFSU2_TR(0x59d837);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59d849;}}
}
B59d839:L59d839:{c.instructions+=4;NFSU2_TR(0x59d839);
{u32 ea_=u32(u32(8001416u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d83f:{NFSU2_TR(0x59d83f);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B59d841:{NFSU2_TR(0x59d841);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B59d845:{NFSU2_TR(0x59d845);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59d849:L59d849:{c.instructions+=5;NFSU2_TR(0x59d849);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d84d:{NFSU2_TR(0x59d84d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d84e:{NFSU2_TR(0x59d84e);
{u32 ea_=u32(u32(7881300u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59d854:{NFSU2_TR(0x59d854);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59d857:{NFSU2_TR(0x59d857);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59d85cull));
TAIL_STATIC(0x43c350u,43c);
}
B59d85c:L59d85c:{c.instructions+=4;NFSU2_TR(0x59d85c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59d860:{NFSU2_TR(0x59d860);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59d862:{NFSU2_TR(0x59d862);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d863:{NFSU2_TR(0x59d863);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59d868ull));
TAIL_STATIC(0x43c350u,43c);
}
B59d868:L59d868:{c.instructions+=8;NFSU2_TR(0x59d868);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d86e:{NFSU2_TR(0x59d86e);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d872:{NFSU2_TR(0x59d872);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B59d875:{NFSU2_TR(0x59d875);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B59d877:{NFSU2_TR(0x59d877);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59d87d:{NFSU2_TR(0x59d87d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59d87f:{NFSU2_TR(0x59d87f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59d882:{NFSU2_TR(0x59d882);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59d898;}}
}
B59d884:L59d884:{c.instructions+=4;NFSU2_TR(0x59d884);
{u32 ea_=u32(u32(7881968u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d88a:{NFSU2_TR(0x59d88a);
{u32 ea_=u32(r4(R+24)+u32(292u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B59d890:{NFSU2_TR(0x59d890);
{u32 ea_=u32(r4(R+24)+u32(292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59d896:{NFSU2_TR(0x59d896);
{goto L59d89a;}
}
B59d898:L59d898:{c.instructions+=1;NFSU2_TR(0x59d898);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59d89a:L59d89a:{c.instructions+=3;NFSU2_TR(0x59d89a);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59d89e:{NFSU2_TR(0x59d89e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d89f:{NFSU2_TR(0x59d89f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59d8a4ull));
TAIL_STATIC(0x43c780u,43c);
}
B59d8a4:L59d8a4:{c.instructions+=4;NFSU2_TR(0x59d8a4);
__builtin_memmove((R+0),gp(0x7fc7fc),4);
}
B59d8a9:{NFSU2_TR(0x59d8a9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B59d8ac:{NFSU2_TR(0x59d8ac);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B59d8af:{NFSU2_TR(0x59d8af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59d921;}}
}
B59d8b1:L59d8b1:{c.instructions+=25;NFSU2_TR(0x59d8b1);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d8b4:{NFSU2_TR(0x59d8b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B59d8b6:{NFSU2_TR(0x59d8b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59d8bc:{NFSU2_TR(0x59d8bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59d8c2:{NFSU2_TR(0x59d8c2);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59d8c6:{NFSU2_TR(0x59d8c6);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d8c9:{NFSU2_TR(0x59d8c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59d8cd:{NFSU2_TR(0x59d8cd);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59d8d1:{NFSU2_TR(0x59d8d1);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d8d4:{NFSU2_TR(0x59d8d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59d8d8:{NFSU2_TR(0x59d8d8);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59d8dc:{NFSU2_TR(0x59d8dc);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d8e2:{NFSU2_TR(0x59d8e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59d8e6:{NFSU2_TR(0x59d8e6);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59d8ea:{NFSU2_TR(0x59d8ea);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d8f0:{NFSU2_TR(0x59d8f0);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59d8f4:{NFSU2_TR(0x59d8f4);
{u32 ea_=u32(r4(R+24)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d8fa:{NFSU2_TR(0x59d8fa);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59d8fe:{NFSU2_TR(0x59d8fe);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d904:{NFSU2_TR(0x59d904);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59d908:{NFSU2_TR(0x59d908);
{u32 ea_=u32(r4(R+24)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d90e:{NFSU2_TR(0x59d90e);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59d912:{NFSU2_TR(0x59d912);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d918:{NFSU2_TR(0x59d918);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59d91c:{NFSU2_TR(0x59d91c);
{goto L59daa9;}
}
B59d921:L59d921:{c.instructions+=2;NFSU2_TR(0x59d921);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B59d924:{NFSU2_TR(0x59d924);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59d9b2;}}
}
B59d92a:L59d92a:{c.instructions+=17;NFSU2_TR(0x59d92a);
{u32 ea_=u32(r4(R+24)+u32(344u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d930:{NFSU2_TR(0x59d930);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59d936:{NFSU2_TR(0x59d936);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d939:{NFSU2_TR(0x59d939);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d93a:{NFSU2_TR(0x59d93a);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d93d:{NFSU2_TR(0x59d93d);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59d941:{NFSU2_TR(0x59d941);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d944:{NFSU2_TR(0x59d944);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59d946:{NFSU2_TR(0x59d946);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d948:{NFSU2_TR(0x59d948);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d94a:{NFSU2_TR(0x59d94a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59d94c:{NFSU2_TR(0x59d94c);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59d94e:{NFSU2_TR(0x59d94e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59d951:{NFSU2_TR(0x59d951);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d952:{NFSU2_TR(0x59d952);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d953:{NFSU2_TR(0x59d953);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d954:{NFSU2_TR(0x59d954);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59d959ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B59d959:L59d959:{c.instructions+=18;NFSU2_TR(0x59d959);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d95c:{NFSU2_TR(0x59d95c);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d962:{NFSU2_TR(0x59d962);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59d968:{NFSU2_TR(0x59d968);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d96b:{NFSU2_TR(0x59d96b);
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
B59d96e:{NFSU2_TR(0x59d96e);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d971:{NFSU2_TR(0x59d971);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59d975:{NFSU2_TR(0x59d975);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59d97d:{NFSU2_TR(0x59d97d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59d97f:{NFSU2_TR(0x59d97f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d981:{NFSU2_TR(0x59d981);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d983:{NFSU2_TR(0x59d983);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59d985:{NFSU2_TR(0x59d985);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59d987:{NFSU2_TR(0x59d987);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59d98a:{NFSU2_TR(0x59d98a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d98b:{NFSU2_TR(0x59d98b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d98c:{NFSU2_TR(0x59d98c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d98d:{NFSU2_TR(0x59d98d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59d992ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B59d992:L59d992:{c.instructions+=8;NFSU2_TR(0x59d992);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d995:{NFSU2_TR(0x59d995);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B59d997:{NFSU2_TR(0x59d997);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59d99b:{NFSU2_TR(0x59d99b);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d99e:{NFSU2_TR(0x59d99e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B59d9a1:{NFSU2_TR(0x59d9a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59d9a9:{NFSU2_TR(0x59d9a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59d9ad:{NFSU2_TR(0x59d9ad);
{goto L59da9d;}
}
B59d9b2:L59d9b2:{c.instructions+=2;NFSU2_TR(0x59d9b2);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B59d9b5:{NFSU2_TR(0x59d9b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59da3b;}}
}
B59d9bb:L59d9bb:{c.instructions+=17;NFSU2_TR(0x59d9bb);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d9be:{NFSU2_TR(0x59d9be);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59d9c4:{NFSU2_TR(0x59d9c4);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d9c7:{NFSU2_TR(0x59d9c7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d9c8:{NFSU2_TR(0x59d9c8);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d9cb:{NFSU2_TR(0x59d9cb);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59d9cf:{NFSU2_TR(0x59d9cf);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d9d2:{NFSU2_TR(0x59d9d2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59d9d4:{NFSU2_TR(0x59d9d4);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d9d6:{NFSU2_TR(0x59d9d6);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59d9d8:{NFSU2_TR(0x59d9d8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59d9da:{NFSU2_TR(0x59d9da);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59d9dc:{NFSU2_TR(0x59d9dc);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59d9df:{NFSU2_TR(0x59d9df);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d9e0:{NFSU2_TR(0x59d9e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d9e1:{NFSU2_TR(0x59d9e1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d9e2:{NFSU2_TR(0x59d9e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59d9e7ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B59d9e7:L59d9e7:{c.instructions+=5;NFSU2_TR(0x59d9e7);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59d9eb:{NFSU2_TR(0x59d9eb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d9ec:{NFSU2_TR(0x59d9ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59d9f0:{NFSU2_TR(0x59d9f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59d9f1:{NFSU2_TR(0x59d9f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59d9f6ull));
TAIL_STATIC(0x43cf10u,43c);
}
B59d9f6:L59d9f6:{c.instructions+=15;NFSU2_TR(0x59d9f6);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59d9f9:{NFSU2_TR(0x59d9f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B59d9fb:{NFSU2_TR(0x59d9fb);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59d9ff:{NFSU2_TR(0x59d9ff);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59da00:{NFSU2_TR(0x59da00);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59da04:{NFSU2_TR(0x59da04);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59da08:{NFSU2_TR(0x59da08);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59da0c:{NFSU2_TR(0x59da0c);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59da0f:{NFSU2_TR(0x59da0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59da10:{NFSU2_TR(0x59da10);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59da14:{NFSU2_TR(0x59da14);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59da18:{NFSU2_TR(0x59da18);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59da19:{NFSU2_TR(0x59da19);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59da21:{NFSU2_TR(0x59da21);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59da29:{NFSU2_TR(0x59da29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59da2eull));
TAIL_STATIC(0x43d1e0u,43d);
}
B59da2e:L59da2e:{c.instructions+=3;NFSU2_TR(0x59da2e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B59da31:{NFSU2_TR(0x59da31);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59da39:{NFSU2_TR(0x59da39);
{goto L59daa9;}
}
B59da3b:L59da3b:{c.instructions+=2;NFSU2_TR(0x59da3b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B59da3e:{NFSU2_TR(0x59da3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59daa9;}}
}
B59da40:L59da40:{c.instructions+=21;NFSU2_TR(0x59da40);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59da43:{NFSU2_TR(0x59da43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B59da45:{NFSU2_TR(0x59da45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59da4b:{NFSU2_TR(0x59da4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59da51:{NFSU2_TR(0x59da51);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59da55:{NFSU2_TR(0x59da55);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59da58:{NFSU2_TR(0x59da58);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59da5c:{NFSU2_TR(0x59da5c);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59da60:{NFSU2_TR(0x59da60);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59da63:{NFSU2_TR(0x59da63);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59da67:{NFSU2_TR(0x59da67);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59da6b:{NFSU2_TR(0x59da6b);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59da71:{NFSU2_TR(0x59da71);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59da75:{NFSU2_TR(0x59da75);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59da79:{NFSU2_TR(0x59da79);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59da7f:{NFSU2_TR(0x59da7f);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59da83:{NFSU2_TR(0x59da83);
{u32 ea_=u32(r4(R+24)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59da89:{NFSU2_TR(0x59da89);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59da8d:{NFSU2_TR(0x59da8d);
{u32 ea_=u32(r4(R+24)+u32(340u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59da93:{NFSU2_TR(0x59da93);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59da97:{NFSU2_TR(0x59da97);
{u32 ea_=u32(r4(R+24)+u32(344u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59da9d:L59da9d:{c.instructions+=2;NFSU2_TR(0x59da9d);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59daa1:{NFSU2_TR(0x59daa1);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59daa9:L59daa9:{c.instructions+=13;NFSU2_TR(0x59daa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59daaf:{NFSU2_TR(0x59daaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59dab5:{NFSU2_TR(0x59dab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59dabb:{NFSU2_TR(0x59dabb);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59dabf:{NFSU2_TR(0x59dabf);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59dac3:{NFSU2_TR(0x59dac3);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59dac7:{NFSU2_TR(0x59dac7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59dac8:{NFSU2_TR(0x59dac8);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59dacc:{NFSU2_TR(0x59dacc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59dacd:{NFSU2_TR(0x59dacd);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x130ull))));
}
B59dad3:{NFSU2_TR(0x59dad3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59dad4:{NFSU2_TR(0x59dad4);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59dadb:{NFSU2_TR(0x59dadb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59dae0ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B59dae0:L59dae0:{c.instructions+=7;NFSU2_TR(0x59dae0);
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
B59dae3:{NFSU2_TR(0x59dae3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59dae4:{NFSU2_TR(0x59dae4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59dae5:{NFSU2_TR(0x59dae5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59dae6:{NFSU2_TR(0x59dae6);
__builtin_memmove((R+16),(R+20),4);
}
B59dae8:{NFSU2_TR(0x59dae8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59dae9:{NFSU2_TR(0x59dae9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59daf0:L59daf0:{c.instructions+=21;NFSU2_TR(0x59daf0);
{u32 ea_=u32(r4(R+4)+u32(196u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59daf6:{NFSU2_TR(0x59daf6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59dafa:{NFSU2_TR(0x59dafa);
{u32 ea_=u32(r4(R+4)+u32(296u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59db00:{NFSU2_TR(0x59db00);
{u32 ea_=u32(r4(R+4)+u32(180u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59db06:{NFSU2_TR(0x59db06);
{u32 ea_=u32(r4(R+4)+u32(292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59db0c:{NFSU2_TR(0x59db0c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59db0e:{NFSU2_TR(0x59db0e);
{u32 ea_=u32(r4(R+4)+u32(200u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59db14:{NFSU2_TR(0x59db14);
{u32 ea_=u32(r4(R+4)+u32(296u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59db1a:{NFSU2_TR(0x59db1a);
{u32 ea_=u32(r4(R+4)+u32(184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59db20:{NFSU2_TR(0x59db20);
{u32 ea_=u32(r4(R+4)+u32(292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59db26:{NFSU2_TR(0x59db26);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59db28:{NFSU2_TR(0x59db28);
{u32 ea_=u32(r4(R+4)+u32(192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59db2e:{NFSU2_TR(0x59db2e);
{u32 ea_=u32(r4(R+4)+u32(296u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59db34:{NFSU2_TR(0x59db34);
{u32 ea_=u32(r4(R+4)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59db3a:{NFSU2_TR(0x59db3a);
{u32 ea_=u32(r4(R+4)+u32(176u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59db40:{NFSU2_TR(0x59db40);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59db42:{NFSU2_TR(0x59db42);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59db44:{NFSU2_TR(0x59db44);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59db46:{NFSU2_TR(0x59db46);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59db49:{NFSU2_TR(0x59db49);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59db4c:{NFSU2_TR(0x59db4c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59db50:L59db50:{c.instructions+=31;NFSU2_TR(0x59db50);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59db54:{NFSU2_TR(0x59db54);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59db58:{NFSU2_TR(0x59db58);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59db5b:{NFSU2_TR(0x59db5b);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59db5e:{NFSU2_TR(0x59db5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59db62:{NFSU2_TR(0x59db62);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59db65:{NFSU2_TR(0x59db65);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59db68:{NFSU2_TR(0x59db68);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59db6a:{NFSU2_TR(0x59db6a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59db6c:{NFSU2_TR(0x59db6c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59db6e:{NFSU2_TR(0x59db6e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59db70:{NFSU2_TR(0x59db70);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59db72:{NFSU2_TR(0x59db72);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59db75:{NFSU2_TR(0x59db75);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59db78:{NFSU2_TR(0x59db78);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59db7b:{NFSU2_TR(0x59db7b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59db7d:{NFSU2_TR(0x59db7d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59db7f:{NFSU2_TR(0x59db7f);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59db82:{NFSU2_TR(0x59db82);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59db85:{NFSU2_TR(0x59db85);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59db87:{NFSU2_TR(0x59db87);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59db8a:{NFSU2_TR(0x59db8a);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59db8d:{NFSU2_TR(0x59db8d);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59db90:{NFSU2_TR(0x59db90);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59db93:{NFSU2_TR(0x59db93);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59db95:{NFSU2_TR(0x59db95);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59db97:{NFSU2_TR(0x59db97);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59db9a:{NFSU2_TR(0x59db9a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59db9d:{NFSU2_TR(0x59db9d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59db9f:{NFSU2_TR(0x59db9f);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59dba2:{NFSU2_TR(0x59dba2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59dbb0:L59dbb0:{c.instructions+=21;NFSU2_TR(0x59dbb0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59dbb1:{NFSU2_TR(0x59dbb1);
__builtin_memmove((R+20),(R+16),4);
}
B59dbb3:{NFSU2_TR(0x59dbb3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B59dbb6:{NFSU2_TR(0x59dbb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x74ull))));
}
B59dbb9:{NFSU2_TR(0x59dbb9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59dbba:{NFSU2_TR(0x59dbba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B59dbbd:{NFSU2_TR(0x59dbbd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59dbbe:{NFSU2_TR(0x59dbbe);
__builtin_memmove((R+24),(R+4),4);
}
B59dbc0:{NFSU2_TR(0x59dbc0);
{u32 ea_=u32(r4(R+24)+u32(368u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59dbc6:{NFSU2_TR(0x59dbc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59dbc9:{NFSU2_TR(0x59dbc9);
{u32 ea_=u32(r4(R+24)+u32(356u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59dbcf:{NFSU2_TR(0x59dbcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59dbd2:{NFSU2_TR(0x59dbd2);
w4(R+8,u32(0x1ull));
}
B59dbd7:{NFSU2_TR(0x59dbd7);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B59dbd9:{NFSU2_TR(0x59dbd9);
{u32 ea_=u32(u32(7897588u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59dbdf:{NFSU2_TR(0x59dbdf);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x95cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B59dbe6:{NFSU2_TR(0x59dbe6);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+4))));
}
B59dbe8:{NFSU2_TR(0x59dbe8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59dbe9:{NFSU2_TR(0x59dbe9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59dbeb:{NFSU2_TR(0x59dbeb);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59dbee:{NFSU2_TR(0x59dbee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59dbf4;}}
}
B59dbf0:L59dbf0:{c.instructions+=2;NFSU2_TR(0x59dbf0);
w1(R+0,u8(0x1ull));
}
B59dbf2:{NFSU2_TR(0x59dbf2);
{goto L59dbf6;}
}
B59dbf4:L59dbf4:{c.instructions+=1;NFSU2_TR(0x59dbf4);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B59dbf6:L59dbf6:{c.instructions+=3;NFSU2_TR(0x59dbf6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B59dbfc:{NFSU2_TR(0x59dbfc);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59dbfe:{NFSU2_TR(0x59dbfe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59dc08;}}
}
B59dc00:L59dc00:{c.instructions+=2;NFSU2_TR(0x59dc00);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59dc02:{NFSU2_TR(0x59dc02);
if(r1(R+518)){{goto L59de7d;}}
}
B59dc08:L59dc08:{c.instructions+=3;NFSU2_TR(0x59dc08);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B59dc0e:{NFSU2_TR(0x59dc0e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59dc10:{NFSU2_TR(0x59dc10);
if(r1(R+518)){{goto L59de7d;}}
}
B59dc16:L59dc16:{c.instructions+=2;NFSU2_TR(0x59dc16);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59dc18:{NFSU2_TR(0x59dc18);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59de7d;}}
}
B59dc1e:L59dc1e:{c.instructions+=14;NFSU2_TR(0x59dc1e);
{u32 ea_=u32(r4(R+24)+u32(240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59dc24:{NFSU2_TR(0x59dc24);
{u32 ea_=u32(r4(R+24)+u32(244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59dc2a:{NFSU2_TR(0x59dc2a);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59dc2c:{NFSU2_TR(0x59dc2c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59dc2e:{NFSU2_TR(0x59dc2e);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B59dc30:{NFSU2_TR(0x59dc30);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B59dc32:{NFSU2_TR(0x59dc32);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59dc34:{NFSU2_TR(0x59dc34);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B59dc36:{NFSU2_TR(0x59dc36);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B59dc38:{NFSU2_TR(0x59dc38);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59dc3a:{NFSU2_TR(0x59dc3a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59dc40:{NFSU2_TR(0x59dc40);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59dc42:{NFSU2_TR(0x59dc42);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59dc45:{NFSU2_TR(0x59dc45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59de7d;}}
}
B59dc4b:L59dc4b:{c.instructions+=11;NFSU2_TR(0x59dc4b);
{u32 ea_=u32(r4(R+24)+u32(244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59dc51:{NFSU2_TR(0x59dc51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59dc57:{NFSU2_TR(0x59dc57);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59dc5b:{NFSU2_TR(0x59dc5b);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59dc5d:{NFSU2_TR(0x59dc5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59dc5e:{NFSU2_TR(0x59dc5e);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59dc62:{NFSU2_TR(0x59dc62);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59dc66:{NFSU2_TR(0x59dc66);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59dc67:{NFSU2_TR(0x59dc67);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59dc6b:{NFSU2_TR(0x59dc6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59dc73:{NFSU2_TR(0x59dc73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59dc78ull));
TAIL_STATIC(0x43cf10u,43c);
}
B59dc78:L59dc78:{c.instructions+=10;NFSU2_TR(0x59dc78);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59dc7c:{NFSU2_TR(0x59dc7c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59dc7d:{NFSU2_TR(0x59dc7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59dc80:{NFSU2_TR(0x59dc80);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59dc81:{NFSU2_TR(0x59dc81);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59dc85:{NFSU2_TR(0x59dc85);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59dc86:{NFSU2_TR(0x59dc86);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59dc8e:{NFSU2_TR(0x59dc8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59dc96:{NFSU2_TR(0x59dc96);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59dc9e:{NFSU2_TR(0x59dc9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59dca3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x59db50u);}goto L59db50;}
}
B59dca3:L59dca3:{c.instructions+=22;NFSU2_TR(0x59dca3);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59dca7:{NFSU2_TR(0x59dca7);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59dcab:{NFSU2_TR(0x59dcab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59dcb1:{NFSU2_TR(0x59dcb1);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59dcb5:{NFSU2_TR(0x59dcb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59dcb8:{NFSU2_TR(0x59dcb8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x98ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B59dcbe:{NFSU2_TR(0x59dcbe);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59dcc2:{NFSU2_TR(0x59dcc2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59dcc4:{NFSU2_TR(0x59dcc4);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59dcc8:{NFSU2_TR(0x59dcc8);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59dccc:{NFSU2_TR(0x59dccc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59dcce:{NFSU2_TR(0x59dcce);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B59dcd1:{NFSU2_TR(0x59dcd1);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B59dcd3:{NFSU2_TR(0x59dcd3);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59dcd7:{NFSU2_TR(0x59dcd7);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59dcda:{NFSU2_TR(0x59dcda);
{u32 ea_=u32(r4(R+8)+u32(8392436u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59dce0:{NFSU2_TR(0x59dce0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59dce4:{NFSU2_TR(0x59dce4);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59dce8:{NFSU2_TR(0x59dce8);
{u32 ea_=u32(u32(8002344u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59dcee:{NFSU2_TR(0x59dcee);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59dcf0:{NFSU2_TR(0x59dcf0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59dcf3:{NFSU2_TR(0x59dcf3);
if(r1(R+514)){{goto L59dcfd;}}
}
B59dcf5:L59dcf5:{c.instructions+=2;NFSU2_TR(0x59dcf5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59dcf7:{NFSU2_TR(0x59dcf7);
{u32 ea_=u32(u32(8002344u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59dcfd:L59dcfd:{c.instructions+=12;NFSU2_TR(0x59dcfd);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59dd01:{NFSU2_TR(0x59dd01);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59dd05:{NFSU2_TR(0x59dd05);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59dd07:{NFSU2_TR(0x59dd07);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59dd0b:{NFSU2_TR(0x59dd0b);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59dd11:{NFSU2_TR(0x59dd11);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59dd15:{NFSU2_TR(0x59dd15);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B59dd19:{NFSU2_TR(0x59dd19);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59dd1a:{NFSU2_TR(0x59dd1a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59dd1c:{NFSU2_TR(0x59dd1c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59dd1d:{NFSU2_TR(0x59dd1d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59dd1e:{NFSU2_TR(0x59dd1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59dd23ull));
TAIL_STATIC(0x43cf90u,43c);
}
B59dd23:L59dd23:{c.instructions+=27;NFSU2_TR(0x59dd23);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59dd27:{NFSU2_TR(0x59dd27);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59dd2d:{NFSU2_TR(0x59dd2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59dd30:{NFSU2_TR(0x59dd30);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B59dd33:{NFSU2_TR(0x59dd33);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59dd35:{NFSU2_TR(0x59dd35);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59dd39:{NFSU2_TR(0x59dd39);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59dd3f:{NFSU2_TR(0x59dd3f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59dd41:{NFSU2_TR(0x59dd41);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59dd45:{NFSU2_TR(0x59dd45);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59dd47:{NFSU2_TR(0x59dd47);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59dd4b:{NFSU2_TR(0x59dd4b);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59dd4f:{NFSU2_TR(0x59dd4f);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59dd55:{NFSU2_TR(0x59dd55);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59dd56:{NFSU2_TR(0x59dd56);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59dd5a:{NFSU2_TR(0x59dd5a);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59dd5e:{NFSU2_TR(0x59dd5e);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59dd64:{NFSU2_TR(0x59dd64);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59dd68:{NFSU2_TR(0x59dd68);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59dd6c:{NFSU2_TR(0x59dd6c);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59dd72:{NFSU2_TR(0x59dd72);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59dd76:{NFSU2_TR(0x59dd76);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59dd7a:{NFSU2_TR(0x59dd7a);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59dd80:{NFSU2_TR(0x59dd80);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59dd84:{NFSU2_TR(0x59dd84);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59dd88:{NFSU2_TR(0x59dd88);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59dd8b:{NFSU2_TR(0x59dd8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59dd90ull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B59dd90:L59dd90:{c.instructions+=10;NFSU2_TR(0x59dd90);
{u32 ea_=u32(r4(R+24)+u32(396u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59dd96:{NFSU2_TR(0x59dd96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59dd99:{NFSU2_TR(0x59dd99);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59dd9c:{NFSU2_TR(0x59dd9c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59dd9e:{NFSU2_TR(0x59dd9e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59dda2:{NFSU2_TR(0x59dda2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59dda4:{NFSU2_TR(0x59dda4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59dda6:{NFSU2_TR(0x59dda6);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59ddaa:{NFSU2_TR(0x59ddaa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ddab:{NFSU2_TR(0x59ddab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ddb0ull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B59ddb0:L59ddb0:{c.instructions+=21;NFSU2_TR(0x59ddb0);
{u32 ea_=u32(r4(R+24)+u32(396u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59ddb6:{NFSU2_TR(0x59ddb6);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ddbc:{NFSU2_TR(0x59ddbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59ddc2:{NFSU2_TR(0x59ddc2);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59ddc6:{NFSU2_TR(0x59ddc6);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ddca:{NFSU2_TR(0x59ddca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ddcb:{NFSU2_TR(0x59ddcb);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B59ddcd:{NFSU2_TR(0x59ddcd);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59ddd1:{NFSU2_TR(0x59ddd1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ddd2:{NFSU2_TR(0x59ddd2);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59ddd6:{NFSU2_TR(0x59ddd6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59dddc:{NFSU2_TR(0x59dddc);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59dde0:{NFSU2_TR(0x59dde0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59dde1:{NFSU2_TR(0x59dde1);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59dde8:{NFSU2_TR(0x59dde8);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ddec:{NFSU2_TR(0x59ddec);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ddf2:{NFSU2_TR(0x59ddf2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59ddf4:{NFSU2_TR(0x59ddf4);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ddfa:{NFSU2_TR(0x59ddfa);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B59ddfc:{NFSU2_TR(0x59ddfc);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59de00:{NFSU2_TR(0x59de00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59de05ull));
TAIL_STATIC(0x43cf90u,43c);
}
B59de05:L59de05:{c.instructions+=6;NFSU2_TR(0x59de05);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59de09:{NFSU2_TR(0x59de09);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59de0d:{NFSU2_TR(0x59de0d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B59de13:{NFSU2_TR(0x59de13);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B59de16:{NFSU2_TR(0x59de16);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59de18:{NFSU2_TR(0x59de18);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59de28;}}
}
B59de1a:L59de1a:{c.instructions+=3;NFSU2_TR(0x59de1a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59de1e:{NFSU2_TR(0x59de1e);
{u32 ea_=u32(u32(7889736u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59de24:{NFSU2_TR(0x59de24);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59de28:L59de28:{c.instructions+=3;NFSU2_TR(0x59de28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59de2e:{NFSU2_TR(0x59de2e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B59de31:{NFSU2_TR(0x59de31);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59de3d;}}
}
B59de33:L59de33:{c.instructions+=2;NFSU2_TR(0x59de33);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59de3b:{NFSU2_TR(0x59de3b);
{goto L59de58;}
}
B59de3d:L59de3d:{c.instructions+=5;NFSU2_TR(0x59de3d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59de41:{NFSU2_TR(0x59de41);
{u32 ea_=u32(u32(8002348u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59de47:{NFSU2_TR(0x59de47);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59de49:{NFSU2_TR(0x59de49);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59de4c:{NFSU2_TR(0x59de4c);
if(r1(R+514)){{goto L59de58;}}
}
B59de4e:L59de4e:{c.instructions+=2;NFSU2_TR(0x59de4e);
__builtin_memmove((R+8),gp(0x7a1b2c),4);
}
B59de54:{NFSU2_TR(0x59de54);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59de58:L59de58:{c.instructions+=10;NFSU2_TR(0x59de58);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59de5c:{NFSU2_TR(0x59de5c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59de5d:{NFSU2_TR(0x59de5d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59de5e:{NFSU2_TR(0x59de5e);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59de62:{NFSU2_TR(0x59de62);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59de63:{NFSU2_TR(0x59de63);
u8 U[4];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59de67:{NFSU2_TR(0x59de67);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59de68:{NFSU2_TR(0x59de68);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59de69:{NFSU2_TR(0x59de69);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59de6f:{NFSU2_TR(0x59de6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59de74ull));
TAIL_STATIC(0x5e6e70u,5e6);
}
B59de74:L59de74:{c.instructions+=6;NFSU2_TR(0x59de74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59de75:{NFSU2_TR(0x59de75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59de76:{NFSU2_TR(0x59de76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59de77:{NFSU2_TR(0x59de77);
__builtin_memmove((R+16),(R+20),4);
}
B59de79:{NFSU2_TR(0x59de79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59de7a:{NFSU2_TR(0x59de7a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59de7d:L59de7d:{c.instructions+=2;NFSU2_TR(0x59de7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59de83:{NFSU2_TR(0x59de83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59de88ull));
TAIL_STATIC(0x5d3230u,5d3);
}
B59de88:L59de88:{c.instructions+=6;NFSU2_TR(0x59de88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59de89:{NFSU2_TR(0x59de89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59de8a:{NFSU2_TR(0x59de8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59de8b:{NFSU2_TR(0x59de8b);
__builtin_memmove((R+16),(R+20),4);
}
B59de8d:{NFSU2_TR(0x59de8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59de8e:{NFSU2_TR(0x59de8e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59dea0:L59dea0:{c.instructions+=8;NFSU2_TR(0x59dea0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59dea1:{NFSU2_TR(0x59dea1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B59dea5:{NFSU2_TR(0x59dea5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59dea6:{NFSU2_TR(0x59dea6);
u8 U[4];
w4(U+0,u32(0x7a1eb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59deab:{NFSU2_TR(0x59deab);
__builtin_memmove((R+28),(R+4),4);
}
B59dead:{NFSU2_TR(0x59dead);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59deaf:{NFSU2_TR(0x59deaf);
__builtin_memmove((R+4),(R+24),4);
}
B59deb1:{NFSU2_TR(0x59deb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59deb6ull));
TAIL_STATIC(0x578ce0u,578);
}
B59deb6:L59deb6:{c.instructions+=4;NFSU2_TR(0x59deb6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59deb9:{NFSU2_TR(0x59deb9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59deba:{NFSU2_TR(0x59deba);
__builtin_memmove((R+4),(R+24),4);
}
B59debc:{NFSU2_TR(0x59debc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59dec1ull));
TAIL_STATIC(0x578460u,578);
}
B59dec1:L59dec1:{c.instructions+=4;NFSU2_TR(0x59dec1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59dec4:{NFSU2_TR(0x59dec4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59dec5:{NFSU2_TR(0x59dec5);
__builtin_memmove((R+4),(R+24),4);
}
B59dec7:{NFSU2_TR(0x59dec7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59deccull));
TAIL_STATIC(0x578460u,578);
}
B59decc:L59decc:{c.instructions+=4;NFSU2_TR(0x59decc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x90ull))));
}
B59ded2:{NFSU2_TR(0x59ded2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ded3:{NFSU2_TR(0x59ded3);
__builtin_memmove((R+4),(R+24),4);
}
B59ded5:{NFSU2_TR(0x59ded5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59dedaull));
TAIL_STATIC(0x571710u,571);
}
B59deda:L59deda:{c.instructions+=2;NFSU2_TR(0x59deda);
__builtin_memmove((R+4),(R+24),4);
}
B59dedc:{NFSU2_TR(0x59dedc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59dee1ull));
TAIL_STATIC(0x578d90u,578);
}
B59dee1:L59dee1:{c.instructions+=3;NFSU2_TR(0x59dee1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59dee2:{NFSU2_TR(0x59dee2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59dee3:{NFSU2_TR(0x59dee3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59def0:L59def0:{c.instructions+=22;NFSU2_TR(0x59def0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B59def3:{NFSU2_TR(0x59def3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59def4:{NFSU2_TR(0x59def4);
__builtin_memmove((R+24),(R+4),4);
}
B59def6:{NFSU2_TR(0x59def6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59def9:{NFSU2_TR(0x59def9);
u8 U[6];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B59defe:{NFSU2_TR(0x59defe);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B59df05:{NFSU2_TR(0x59df05);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59df08:{NFSU2_TR(0x59df08);
{u32 ea_=u32(r4(R+0)+u32(160u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59df0e:{NFSU2_TR(0x59df0e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59df0f:{NFSU2_TR(0x59df0f);
w4(R+8,u32(0x1ull));
}
B59df14:{NFSU2_TR(0x59df14);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59df18:{NFSU2_TR(0x59df18);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59df1b:{NFSU2_TR(0x59df1b);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59df1e:{NFSU2_TR(0x59df1e);
w4(R+0,u32(r2(R+4)));
}
B59df21:{NFSU2_TR(0x59df21);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59df25:{NFSU2_TR(0x59df25);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59df29:{NFSU2_TR(0x59df29);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B59df2d:{NFSU2_TR(0x59df2d);
{u32 ea_=u32(u32(7881280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59df33:{NFSU2_TR(0x59df33);
{u32 ea_=u32(u32(8001416u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B59df39:{NFSU2_TR(0x59df39);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59df3b:{NFSU2_TR(0x59df3b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59df3e:{NFSU2_TR(0x59df3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59df4a;}}
}
B59df40:L59df40:{c.instructions+=3;NFSU2_TR(0x59df40);
{u32 ea_=u32(u32(8001416u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59df46:{NFSU2_TR(0x59df46);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B59df48:{NFSU2_TR(0x59df48);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B59df4a:L59df4a:{c.instructions+=4;NFSU2_TR(0x59df4a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B59df50:{NFSU2_TR(0x59df50);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59df52:{NFSU2_TR(0x59df52);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59df55:{NFSU2_TR(0x59df55);
if(r1(R+514)){{goto L59df5b;}}
}
B59df57:L59df57:{c.instructions+=2;NFSU2_TR(0x59df57);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B59df59:{NFSU2_TR(0x59df59);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59df5b:L59df5b:{c.instructions+=9;NFSU2_TR(0x59df5b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59df5d:{NFSU2_TR(0x59df5d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59df61:{NFSU2_TR(0x59df61);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59df63:{NFSU2_TR(0x59df63);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B59df65:{NFSU2_TR(0x59df65);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59df69:{NFSU2_TR(0x59df69);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59df6d:{NFSU2_TR(0x59df6d);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B59df6f:{NFSU2_TR(0x59df6f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59df73:{NFSU2_TR(0x59df73);
if(r1(R+518)){{goto L59df7f;}}
}
B59df75:L59df75:{c.instructions+=3;NFSU2_TR(0x59df75);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59df79:{NFSU2_TR(0x59df79);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59df7d:{NFSU2_TR(0x59df7d);
{goto L59df8b;}
}
B59df7f:L59df7f:{c.instructions+=4;NFSU2_TR(0x59df7f);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59df81:{NFSU2_TR(0x59df81);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59df85:{NFSU2_TR(0x59df85);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59df89:{NFSU2_TR(0x59df89);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59df8b:L59df8b:{c.instructions+=4;NFSU2_TR(0x59df8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59df8e:{NFSU2_TR(0x59df8e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59df92:{NFSU2_TR(0x59df92);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59df93:{NFSU2_TR(0x59df93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59df98ull));
TAIL_STATIC(0x43c780u,43c);
}
B59df98:L59df98:{c.instructions+=4;NFSU2_TR(0x59df98);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59df9c:{NFSU2_TR(0x59df9c);
{u32 ea_=u32(u32(7881300u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59dfa2:{NFSU2_TR(0x59dfa2);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59dfa5:{NFSU2_TR(0x59dfa5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59dfaaull));
TAIL_STATIC(0x43c350u,43c);
}
B59dfaa:L59dfaa:{c.instructions+=4;NFSU2_TR(0x59dfaa);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59dfae:{NFSU2_TR(0x59dfae);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59dfb2:{NFSU2_TR(0x59dfb2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59dfb3:{NFSU2_TR(0x59dfb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59dfb8ull));
TAIL_STATIC(0x43c350u,43c);
}
B59dfb8:L59dfb8:{c.instructions+=11;NFSU2_TR(0x59dfb8);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59dfba:{NFSU2_TR(0x59dfba);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59dfbe:{NFSU2_TR(0x59dfbe);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59dfc0:{NFSU2_TR(0x59dfc0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B59dfc2:{NFSU2_TR(0x59dfc2);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59dfc5:{NFSU2_TR(0x59dfc5);
__builtin_memmove((R+4),(R+0),4);
}
B59dfc7:{NFSU2_TR(0x59dfc7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59dfca:{NFSU2_TR(0x59dfca);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59dfcd:{NFSU2_TR(0x59dfcd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59dfce:{NFSU2_TR(0x59dfce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59dfd1:{NFSU2_TR(0x59dfd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59dfd6ull));
TAIL_STATIC(0x43c780u,43c);
}
B59dfd6:L59dfd6:{c.instructions+=5;NFSU2_TR(0x59dfd6);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59dfda:{NFSU2_TR(0x59dfda);
{u32 ea_=u32(u32(7881300u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59dfe0:{NFSU2_TR(0x59dfe0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B59dfe3:{NFSU2_TR(0x59dfe3);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59dfe6:{NFSU2_TR(0x59dfe6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59dfebull));
TAIL_STATIC(0x43c350u,43c);
}
B59dfeb:L59dfeb:{c.instructions+=4;NFSU2_TR(0x59dfeb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59dfef:{NFSU2_TR(0x59dfef);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59dff3:{NFSU2_TR(0x59dff3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59dff4:{NFSU2_TR(0x59dff4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59dff9ull));
TAIL_STATIC(0x43c350u,43c);
}
B59dff9:L59dff9:{c.instructions+=3;NFSU2_TR(0x59dff9);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59dffb:{NFSU2_TR(0x59dffb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59dfff:{NFSU2_TR(0x59dfff);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
TAIL_STATIC(0x59e001u,59e);
}
XIT:NFSU2_TR_EXIT(0x59d,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
