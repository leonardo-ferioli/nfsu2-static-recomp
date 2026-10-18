#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_675(u8* __restrict R,Cpu& c);
u32 body_677(u8* __restrict R,Cpu& c);
u32 body_67a(u8* __restrict R,Cpu& c);
u32 body_67b(u8* __restrict R,Cpu& c);
u32 body_67c(u8* __restrict R,Cpu& c);
u32 body_67e(u8* __restrict R,Cpu& c);
u32 body_67f(u8* __restrict R,Cpu& c);
u32 body_680(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x67d,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x67d,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_67d(u8* __restrict R,Cpu& c);
u32 page_67d(Cpu& c){return body_67d(c.regs.data(),c);}
__attribute__((noinline)) u32 body_67d(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x67d000:goto L67d000;
case 0x67d006:goto L67d006;
case 0x67d009:c.instructions+=3;goto B67d009;
case 0x67d00b:c.instructions+=2;goto B67d00b;
case 0x67d00e:c.instructions+=1;goto B67d00e;
case 0x67d013:goto L67d013;
case 0x67d015:c.instructions+=2;goto B67d015;
case 0x67d017:c.instructions+=1;goto B67d017;
case 0x67d01d:goto L67d01d;
case 0x67d020:c.instructions+=11;goto B67d020;
case 0x67d021:c.instructions+=10;goto B67d021;
case 0x67d022:c.instructions+=9;goto B67d022;
case 0x67d025:c.instructions+=8;goto B67d025;
case 0x67d02a:c.instructions+=7;goto B67d02a;
case 0x67d02d:c.instructions+=6;goto B67d02d;
case 0x67d030:c.instructions+=5;goto B67d030;
case 0x67d035:c.instructions+=4;goto B67d035;
case 0x67d036:c.instructions+=3;goto B67d036;
case 0x67d039:c.instructions+=2;goto B67d039;
case 0x67d03b:c.instructions+=1;goto B67d03b;
case 0x67d040:goto L67d040;
case 0x67d042:c.instructions+=2;goto B67d042;
case 0x67d044:c.instructions+=1;goto B67d044;
case 0x67d04a:goto L67d04a;
case 0x67d04d:c.instructions+=10;goto B67d04d;
case 0x67d04e:c.instructions+=9;goto B67d04e;
case 0x67d04f:c.instructions+=8;goto B67d04f;
case 0x67d052:c.instructions+=7;goto B67d052;
case 0x67d057:c.instructions+=6;goto B67d057;
case 0x67d05a:c.instructions+=5;goto B67d05a;
case 0x67d05c:c.instructions+=4;goto B67d05c;
case 0x67d05d:c.instructions+=3;goto B67d05d;
case 0x67d060:c.instructions+=2;goto B67d060;
case 0x67d063:c.instructions+=1;goto B67d063;
case 0x67d068:goto L67d068;
case 0x67d06a:c.instructions+=2;goto B67d06a;
case 0x67d06c:c.instructions+=1;goto B67d06c;
case 0x67d072:goto L67d072;
case 0x67d075:c.instructions+=10;goto B67d075;
case 0x67d077:c.instructions+=9;goto B67d077;
case 0x67d07a:c.instructions+=8;goto B67d07a;
case 0x67d07f:c.instructions+=7;goto B67d07f;
case 0x67d082:c.instructions+=6;goto B67d082;
case 0x67d084:c.instructions+=5;goto B67d084;
case 0x67d087:c.instructions+=4;goto B67d087;
case 0x67d08a:c.instructions+=3;goto B67d08a;
case 0x67d08b:c.instructions+=2;goto B67d08b;
case 0x67d08e:c.instructions+=1;goto B67d08e;
case 0x67d093:goto L67d093;
case 0x67d095:c.instructions+=2;goto B67d095;
case 0x67d097:c.instructions+=1;goto B67d097;
case 0x67d09d:goto L67d09d;
case 0x67d0a0:c.instructions+=9;goto B67d0a0;
case 0x67d0a1:c.instructions+=8;goto B67d0a1;
case 0x67d0a2:c.instructions+=7;goto B67d0a2;
case 0x67d0a5:c.instructions+=6;goto B67d0a5;
case 0x67d0aa:c.instructions+=5;goto B67d0aa;
case 0x67d0ad:c.instructions+=4;goto B67d0ad;
case 0x67d0af:c.instructions+=3;goto B67d0af;
case 0x67d0b0:c.instructions+=2;goto B67d0b0;
case 0x67d0b3:c.instructions+=1;goto B67d0b3;
case 0x67d0b8:goto L67d0b8;
case 0x67d0ba:c.instructions+=2;goto B67d0ba;
case 0x67d0bc:c.instructions+=1;goto B67d0bc;
case 0x67d0c2:goto L67d0c2;
case 0x67d0c3:c.instructions+=7;goto B67d0c3;
case 0x67d0c4:c.instructions+=6;goto B67d0c4;
case 0x67d0c7:c.instructions+=5;goto B67d0c7;
case 0x67d0c9:c.instructions+=4;goto B67d0c9;
case 0x67d0cc:c.instructions+=3;goto B67d0cc;
case 0x67d0cf:c.instructions+=2;goto B67d0cf;
case 0x67d0d2:c.instructions+=1;goto B67d0d2;
case 0x67d0d7:goto L67d0d7;
case 0x67d0d9:c.instructions+=2;goto B67d0d9;
case 0x67d0db:c.instructions+=1;goto B67d0db;
case 0x67d0e1:goto L67d0e1;
case 0x67d0e3:c.instructions+=7;goto B67d0e3;
case 0x67d0e6:c.instructions+=6;goto B67d0e6;
case 0x67d0e8:c.instructions+=5;goto B67d0e8;
case 0x67d0eb:c.instructions+=4;goto B67d0eb;
case 0x67d0ee:c.instructions+=3;goto B67d0ee;
case 0x67d0f1:c.instructions+=2;goto B67d0f1;
case 0x67d0f4:c.instructions+=1;goto B67d0f4;
case 0x67d0f9:goto L67d0f9;
case 0x67d0fb:c.instructions+=2;goto B67d0fb;
case 0x67d0fd:c.instructions+=1;goto B67d0fd;
case 0x67d103:goto L67d103;
case 0x67d105:c.instructions+=3;goto B67d105;
case 0x67d108:c.instructions+=2;goto B67d108;
case 0x67d10b:c.instructions+=1;goto B67d10b;
case 0x67d110:goto L67d110;
case 0x67d112:c.instructions+=2;goto B67d112;
case 0x67d115:c.instructions+=1;goto B67d115;
case 0x67d11b:goto L67d11b;
case 0x67d11e:c.instructions+=2;goto B67d11e;
case 0x67d120:c.instructions+=1;goto B67d120;
case 0x67d126:goto L67d126;
case 0x67d129:c.instructions+=2;goto B67d129;
case 0x67d12d:c.instructions+=1;goto B67d12d;
case 0x67d133:goto L67d133;
case 0x67d136:c.instructions+=4;goto B67d136;
case 0x67d139:c.instructions+=3;goto B67d139;
case 0x67d13a:c.instructions+=2;goto B67d13a;
case 0x67d13c:c.instructions+=1;goto B67d13c;
case 0x67d141:goto L67d141;
case 0x67d143:c.instructions+=1;goto B67d143;
case 0x67d149:goto L67d149;
case 0x67d14b:goto L67d14b;
case 0x67d14f:c.instructions+=4;goto B67d14f;
case 0x67d150:c.instructions+=3;goto B67d150;
case 0x67d152:c.instructions+=2;goto B67d152;
case 0x67d155:c.instructions+=1;goto B67d155;
case 0x67d157:goto L67d157;
case 0x67d15a:c.instructions+=3;goto B67d15a;
case 0x67d15c:c.instructions+=2;goto B67d15c;
case 0x67d15f:c.instructions+=1;goto B67d15f;
case 0x67d164:goto L67d164;
case 0x67d166:c.instructions+=2;goto B67d166;
case 0x67d168:c.instructions+=1;goto B67d168;
case 0x67d16e:goto L67d16e;
case 0x67d171:c.instructions+=3;goto B67d171;
case 0x67d173:c.instructions+=2;goto B67d173;
case 0x67d176:c.instructions+=1;goto B67d176;
case 0x67d17b:goto L67d17b;
case 0x67d17d:c.instructions+=2;goto B67d17d;
case 0x67d17f:c.instructions+=1;goto B67d17f;
case 0x67d185:goto L67d185;
case 0x67d188:c.instructions+=3;goto B67d188;
case 0x67d18a:c.instructions+=2;goto B67d18a;
case 0x67d18d:c.instructions+=1;goto B67d18d;
case 0x67d192:goto L67d192;
case 0x67d194:c.instructions+=2;goto B67d194;
case 0x67d196:c.instructions+=1;goto B67d196;
case 0x67d19c:goto L67d19c;
case 0x67d19f:c.instructions+=3;goto B67d19f;
case 0x67d1a1:c.instructions+=2;goto B67d1a1;
case 0x67d1a4:c.instructions+=1;goto B67d1a4;
case 0x67d1a9:goto L67d1a9;
case 0x67d1ab:c.instructions+=2;goto B67d1ab;
case 0x67d1ad:c.instructions+=1;goto B67d1ad;
case 0x67d1b3:goto L67d1b3;
case 0x67d1b6:c.instructions+=3;goto B67d1b6;
case 0x67d1b8:c.instructions+=2;goto B67d1b8;
case 0x67d1bb:c.instructions+=1;goto B67d1bb;
case 0x67d1c0:goto L67d1c0;
case 0x67d1c2:c.instructions+=2;goto B67d1c2;
case 0x67d1c4:c.instructions+=1;goto B67d1c4;
case 0x67d1ca:goto L67d1ca;
case 0x67d1cd:c.instructions+=12;goto B67d1cd;
case 0x67d1cf:c.instructions+=11;goto B67d1cf;
case 0x67d1d0:c.instructions+=10;goto B67d1d0;
case 0x67d1d3:c.instructions+=9;goto B67d1d3;
case 0x67d1d8:c.instructions+=8;goto B67d1d8;
case 0x67d1db:c.instructions+=7;goto B67d1db;
case 0x67d1de:c.instructions+=6;goto B67d1de;
case 0x67d1e3:c.instructions+=5;goto B67d1e3;
case 0x67d1e4:c.instructions+=4;goto B67d1e4;
case 0x67d1e7:c.instructions+=3;goto B67d1e7;
case 0x67d1e9:c.instructions+=2;goto B67d1e9;
case 0x67d1ec:c.instructions+=1;goto B67d1ec;
case 0x67d1f1:goto L67d1f1;
case 0x67d1f3:c.instructions+=2;goto B67d1f3;
case 0x67d1f5:c.instructions+=1;goto B67d1f5;
case 0x67d1fb:goto L67d1fb;
case 0x67d1fe:c.instructions+=9;goto B67d1fe;
case 0x67d200:c.instructions+=8;goto B67d200;
case 0x67d203:c.instructions+=7;goto B67d203;
case 0x67d208:c.instructions+=6;goto B67d208;
case 0x67d20b:c.instructions+=5;goto B67d20b;
case 0x67d20d:c.instructions+=4;goto B67d20d;
case 0x67d210:c.instructions+=3;goto B67d210;
case 0x67d211:c.instructions+=2;goto B67d211;
case 0x67d214:c.instructions+=1;goto B67d214;
case 0x67d219:goto L67d219;
case 0x67d21b:c.instructions+=2;goto B67d21b;
case 0x67d21d:c.instructions+=1;goto B67d21d;
case 0x67d223:goto L67d223;
case 0x67d226:c.instructions+=9;goto B67d226;
case 0x67d228:c.instructions+=8;goto B67d228;
case 0x67d22b:c.instructions+=7;goto B67d22b;
case 0x67d230:c.instructions+=6;goto B67d230;
case 0x67d233:c.instructions+=5;goto B67d233;
case 0x67d235:c.instructions+=4;goto B67d235;
case 0x67d238:c.instructions+=3;goto B67d238;
case 0x67d239:c.instructions+=2;goto B67d239;
case 0x67d23c:c.instructions+=1;goto B67d23c;
case 0x67d241:goto L67d241;
case 0x67d243:c.instructions+=2;goto B67d243;
case 0x67d245:c.instructions+=1;goto B67d245;
case 0x67d24b:goto L67d24b;
case 0x67d24d:c.instructions+=7;goto B67d24d;
case 0x67d24e:c.instructions+=6;goto B67d24e;
case 0x67d251:c.instructions+=5;goto B67d251;
case 0x67d253:c.instructions+=4;goto B67d253;
case 0x67d256:c.instructions+=3;goto B67d256;
case 0x67d259:c.instructions+=2;goto B67d259;
case 0x67d25c:c.instructions+=1;goto B67d25c;
case 0x67d261:goto L67d261;
case 0x67d263:c.instructions+=2;goto B67d263;
case 0x67d265:c.instructions+=1;goto B67d265;
case 0x67d26b:goto L67d26b;
case 0x67d26e:c.instructions+=9;goto B67d26e;
case 0x67d270:c.instructions+=8;goto B67d270;
case 0x67d273:c.instructions+=7;goto B67d273;
case 0x67d278:c.instructions+=6;goto B67d278;
case 0x67d27b:c.instructions+=5;goto B67d27b;
case 0x67d27d:c.instructions+=4;goto B67d27d;
case 0x67d280:c.instructions+=3;goto B67d280;
case 0x67d281:c.instructions+=2;goto B67d281;
case 0x67d284:c.instructions+=1;goto B67d284;
case 0x67d289:goto L67d289;
case 0x67d28b:c.instructions+=2;goto B67d28b;
case 0x67d28d:c.instructions+=1;goto B67d28d;
case 0x67d293:goto L67d293;
case 0x67d296:c.instructions+=2;goto B67d296;
case 0x67d299:c.instructions+=1;goto B67d299;
case 0x67d29f:goto L67d29f;
case 0x67d2a2:c.instructions+=4;goto B67d2a2;
case 0x67d2a5:c.instructions+=3;goto B67d2a5;
case 0x67d2a7:c.instructions+=2;goto B67d2a7;
case 0x67d2aa:c.instructions+=1;goto B67d2aa;
case 0x67d2ad:goto L67d2ad;
case 0x67d2b0:c.instructions+=6;goto B67d2b0;
case 0x67d2b3:c.instructions+=5;goto B67d2b3;
case 0x67d2b4:c.instructions+=4;goto B67d2b4;
case 0x67d2b7:c.instructions+=3;goto B67d2b7;
case 0x67d2ba:c.instructions+=2;goto B67d2ba;
case 0x67d2bc:c.instructions+=1;goto B67d2bc;
case 0x67d2c1:goto L67d2c1;
case 0x67d2c3:c.instructions+=2;goto B67d2c3;
case 0x67d2c5:c.instructions+=1;goto B67d2c5;
case 0x67d2cb:goto L67d2cb;
case 0x67d2ce:c.instructions+=4;goto B67d2ce;
case 0x67d2d4:c.instructions+=3;goto B67d2d4;
case 0x67d2d6:c.instructions+=2;goto B67d2d6;
case 0x67d2d9:c.instructions+=1;goto B67d2d9;
case 0x67d2db:goto L67d2db;
case 0x67d2de:c.instructions+=4;goto B67d2de;
case 0x67d2e4:c.instructions+=3;goto B67d2e4;
case 0x67d2e6:c.instructions+=2;goto B67d2e6;
case 0x67d2e9:c.instructions+=1;goto B67d2e9;
case 0x67d2eb:goto L67d2eb;
case 0x67d2ee:c.instructions+=1;goto B67d2ee;
case 0x67d2f0:goto L67d2f0;
case 0x67d2f6:c.instructions+=5;goto B67d2f6;
case 0x67d2f9:c.instructions+=4;goto B67d2f9;
case 0x67d2fb:c.instructions+=3;goto B67d2fb;
case 0x67d2fd:c.instructions+=2;goto B67d2fd;
case 0x67d300:c.instructions+=1;goto B67d300;
case 0x67d302:goto L67d302;
case 0x67d308:c.instructions+=5;goto B67d308;
case 0x67d30b:c.instructions+=4;goto B67d30b;
case 0x67d30d:c.instructions+=3;goto B67d30d;
case 0x67d30f:c.instructions+=2;goto B67d30f;
case 0x67d312:c.instructions+=1;goto B67d312;
case 0x67d314:goto L67d314;
case 0x67d317:goto L67d317;
case 0x67d31a:c.instructions+=1;goto B67d31a;
case 0x67d31c:goto L67d31c;
case 0x67d31f:c.instructions+=4;goto B67d31f;
case 0x67d322:c.instructions+=3;goto B67d322;
case 0x67d326:c.instructions+=2;goto B67d326;
case 0x67d329:c.instructions+=1;goto B67d329;
case 0x67d32b:goto L67d32b;
case 0x67d330:goto L67d330;
case 0x67d332:c.instructions+=2;goto B67d332;
case 0x67d335:c.instructions+=1;goto B67d335;
case 0x67d33b:goto L67d33b;
case 0x67d33e:c.instructions+=4;goto B67d33e;
case 0x67d341:c.instructions+=3;goto B67d341;
case 0x67d342:c.instructions+=2;goto B67d342;
case 0x67d345:c.instructions+=1;goto B67d345;
case 0x67d347:goto L67d347;
case 0x67d34c:goto L67d34c;
case 0x67d34e:c.instructions+=2;goto B67d34e;
case 0x67d351:c.instructions+=1;goto B67d351;
case 0x67d357:goto L67d357;
case 0x67d35a:c.instructions+=2;goto B67d35a;
case 0x67d35c:c.instructions+=1;goto B67d35c;
case 0x67d362:goto L67d362;
case 0x67d365:c.instructions+=2;goto B67d365;
case 0x67d369:c.instructions+=1;goto B67d369;
case 0x67d36f:goto L67d36f;
case 0x67d372:c.instructions+=4;goto B67d372;
case 0x67d375:c.instructions+=3;goto B67d375;
case 0x67d376:c.instructions+=2;goto B67d376;
case 0x67d378:c.instructions+=1;goto B67d378;
case 0x67d37d:goto L67d37d;
case 0x67d37f:c.instructions+=1;goto B67d37f;
case 0x67d385:goto L67d385;
case 0x67d387:goto L67d387;
case 0x67d38b:c.instructions+=4;goto B67d38b;
case 0x67d38c:c.instructions+=3;goto B67d38c;
case 0x67d38e:c.instructions+=2;goto B67d38e;
case 0x67d391:c.instructions+=1;goto B67d391;
case 0x67d393:goto L67d393;
case 0x67d396:c.instructions+=3;goto B67d396;
case 0x67d398:c.instructions+=2;goto B67d398;
case 0x67d39b:c.instructions+=1;goto B67d39b;
case 0x67d3a0:goto L67d3a0;
case 0x67d3a2:c.instructions+=2;goto B67d3a2;
case 0x67d3a4:c.instructions+=1;goto B67d3a4;
case 0x67d3aa:goto L67d3aa;
case 0x67d3ad:c.instructions+=3;goto B67d3ad;
case 0x67d3af:c.instructions+=2;goto B67d3af;
case 0x67d3b2:c.instructions+=1;goto B67d3b2;
case 0x67d3b7:goto L67d3b7;
case 0x67d3b9:c.instructions+=2;goto B67d3b9;
case 0x67d3bb:c.instructions+=1;goto B67d3bb;
case 0x67d3c1:goto L67d3c1;
case 0x67d3c4:c.instructions+=3;goto B67d3c4;
case 0x67d3c6:c.instructions+=2;goto B67d3c6;
case 0x67d3c9:c.instructions+=1;goto B67d3c9;
case 0x67d3ce:goto L67d3ce;
case 0x67d3d0:c.instructions+=2;goto B67d3d0;
case 0x67d3d2:c.instructions+=1;goto B67d3d2;
case 0x67d3d8:goto L67d3d8;
case 0x67d3db:c.instructions+=3;goto B67d3db;
case 0x67d3dd:c.instructions+=2;goto B67d3dd;
case 0x67d3e0:c.instructions+=1;goto B67d3e0;
case 0x67d3e5:goto L67d3e5;
case 0x67d3e7:c.instructions+=2;goto B67d3e7;
case 0x67d3e9:c.instructions+=1;goto B67d3e9;
case 0x67d3ef:goto L67d3ef;
case 0x67d3f2:c.instructions+=3;goto B67d3f2;
case 0x67d3f4:c.instructions+=2;goto B67d3f4;
case 0x67d3f7:c.instructions+=1;goto B67d3f7;
case 0x67d3fc:goto L67d3fc;
case 0x67d3fe:c.instructions+=2;goto B67d3fe;
case 0x67d400:c.instructions+=1;goto B67d400;
case 0x67d406:goto L67d406;
case 0x67d409:c.instructions+=11;goto B67d409;
case 0x67d40b:c.instructions+=10;goto B67d40b;
case 0x67d40c:c.instructions+=9;goto B67d40c;
case 0x67d40f:c.instructions+=8;goto B67d40f;
case 0x67d414:c.instructions+=7;goto B67d414;
case 0x67d417:c.instructions+=6;goto B67d417;
case 0x67d41a:c.instructions+=5;goto B67d41a;
case 0x67d41f:c.instructions+=4;goto B67d41f;
case 0x67d420:c.instructions+=3;goto B67d420;
case 0x67d423:c.instructions+=2;goto B67d423;
case 0x67d425:c.instructions+=1;goto B67d425;
case 0x67d42a:goto L67d42a;
case 0x67d42c:c.instructions+=2;goto B67d42c;
case 0x67d42e:c.instructions+=1;goto B67d42e;
case 0x67d434:goto L67d434;
case 0x67d437:c.instructions+=9;goto B67d437;
case 0x67d439:c.instructions+=8;goto B67d439;
case 0x67d43c:c.instructions+=7;goto B67d43c;
case 0x67d441:c.instructions+=6;goto B67d441;
case 0x67d444:c.instructions+=5;goto B67d444;
case 0x67d446:c.instructions+=4;goto B67d446;
case 0x67d449:c.instructions+=3;goto B67d449;
case 0x67d44a:c.instructions+=2;goto B67d44a;
case 0x67d44d:c.instructions+=1;goto B67d44d;
case 0x67d452:goto L67d452;
case 0x67d454:c.instructions+=2;goto B67d454;
case 0x67d456:c.instructions+=1;goto B67d456;
case 0x67d45c:goto L67d45c;
case 0x67d45f:c.instructions+=9;goto B67d45f;
case 0x67d461:c.instructions+=8;goto B67d461;
case 0x67d462:c.instructions+=7;goto B67d462;
case 0x67d465:c.instructions+=6;goto B67d465;
case 0x67d46a:c.instructions+=5;goto B67d46a;
case 0x67d46d:c.instructions+=4;goto B67d46d;
case 0x67d46f:c.instructions+=3;goto B67d46f;
case 0x67d470:c.instructions+=2;goto B67d470;
case 0x67d473:c.instructions+=1;goto B67d473;
case 0x67d478:goto L67d478;
case 0x67d47a:c.instructions+=2;goto B67d47a;
case 0x67d47c:c.instructions+=1;goto B67d47c;
case 0x67d482:goto L67d482;
case 0x67d485:c.instructions+=9;goto B67d485;
case 0x67d487:c.instructions+=8;goto B67d487;
case 0x67d48a:c.instructions+=7;goto B67d48a;
case 0x67d48f:c.instructions+=6;goto B67d48f;
case 0x67d492:c.instructions+=5;goto B67d492;
case 0x67d494:c.instructions+=4;goto B67d494;
case 0x67d497:c.instructions+=3;goto B67d497;
case 0x67d498:c.instructions+=2;goto B67d498;
case 0x67d49b:c.instructions+=1;goto B67d49b;
case 0x67d4a0:goto L67d4a0;
case 0x67d4a2:c.instructions+=2;goto B67d4a2;
case 0x67d4a4:c.instructions+=1;goto B67d4a4;
case 0x67d4aa:goto L67d4aa;
case 0x67d4ad:c.instructions+=2;goto B67d4ad;
case 0x67d4b0:c.instructions+=1;goto B67d4b0;
case 0x67d4b6:goto L67d4b6;
case 0x67d4b9:c.instructions+=4;goto B67d4b9;
case 0x67d4bc:c.instructions+=3;goto B67d4bc;
case 0x67d4be:c.instructions+=2;goto B67d4be;
case 0x67d4c1:c.instructions+=1;goto B67d4c1;
case 0x67d4c4:goto L67d4c4;
case 0x67d4c7:c.instructions+=6;goto B67d4c7;
case 0x67d4ca:c.instructions+=5;goto B67d4ca;
case 0x67d4cb:c.instructions+=4;goto B67d4cb;
case 0x67d4ce:c.instructions+=3;goto B67d4ce;
case 0x67d4d1:c.instructions+=2;goto B67d4d1;
case 0x67d4d3:c.instructions+=1;goto B67d4d3;
case 0x67d4d8:goto L67d4d8;
case 0x67d4da:c.instructions+=2;goto B67d4da;
case 0x67d4dc:c.instructions+=1;goto B67d4dc;
case 0x67d4e2:goto L67d4e2;
case 0x67d4e5:c.instructions+=4;goto B67d4e5;
case 0x67d4eb:c.instructions+=3;goto B67d4eb;
case 0x67d4ed:c.instructions+=2;goto B67d4ed;
case 0x67d4f0:c.instructions+=1;goto B67d4f0;
case 0x67d4f2:goto L67d4f2;
case 0x67d4f5:c.instructions+=4;goto B67d4f5;
case 0x67d4fb:c.instructions+=3;goto B67d4fb;
case 0x67d4fd:c.instructions+=2;goto B67d4fd;
case 0x67d500:c.instructions+=1;goto B67d500;
case 0x67d502:goto L67d502;
case 0x67d505:c.instructions+=1;goto B67d505;
case 0x67d507:goto L67d507;
case 0x67d50d:c.instructions+=5;goto B67d50d;
case 0x67d510:c.instructions+=4;goto B67d510;
case 0x67d512:c.instructions+=3;goto B67d512;
case 0x67d514:c.instructions+=2;goto B67d514;
case 0x67d517:c.instructions+=1;goto B67d517;
case 0x67d519:goto L67d519;
case 0x67d51f:c.instructions+=5;goto B67d51f;
case 0x67d522:c.instructions+=4;goto B67d522;
case 0x67d524:c.instructions+=3;goto B67d524;
case 0x67d526:c.instructions+=2;goto B67d526;
case 0x67d529:c.instructions+=1;goto B67d529;
case 0x67d52b:goto L67d52b;
case 0x67d52e:goto L67d52e;
case 0x67d531:c.instructions+=1;goto B67d531;
case 0x67d533:goto L67d533;
case 0x67d536:c.instructions+=4;goto B67d536;
case 0x67d539:c.instructions+=3;goto B67d539;
case 0x67d53d:c.instructions+=2;goto B67d53d;
case 0x67d540:c.instructions+=1;goto B67d540;
case 0x67d542:goto L67d542;
case 0x67d547:goto L67d547;
case 0x67d549:c.instructions+=2;goto B67d549;
case 0x67d54c:c.instructions+=1;goto B67d54c;
case 0x67d552:goto L67d552;
case 0x67d555:c.instructions+=4;goto B67d555;
case 0x67d558:c.instructions+=3;goto B67d558;
case 0x67d559:c.instructions+=2;goto B67d559;
case 0x67d55c:c.instructions+=1;goto B67d55c;
case 0x67d55e:goto L67d55e;
case 0x67d563:goto L67d563;
case 0x67d565:c.instructions+=2;goto B67d565;
case 0x67d568:c.instructions+=1;goto B67d568;
case 0x67d56e:goto L67d56e;
case 0x67d571:c.instructions+=2;goto B67d571;
case 0x67d573:c.instructions+=1;goto B67d573;
case 0x67d579:goto L67d579;
case 0x67d57c:c.instructions+=2;goto B67d57c;
case 0x67d580:c.instructions+=1;goto B67d580;
case 0x67d586:goto L67d586;
case 0x67d589:c.instructions+=4;goto B67d589;
case 0x67d58c:c.instructions+=3;goto B67d58c;
case 0x67d58d:c.instructions+=2;goto B67d58d;
case 0x67d58f:c.instructions+=1;goto B67d58f;
case 0x67d594:goto L67d594;
case 0x67d596:c.instructions+=1;goto B67d596;
case 0x67d59c:goto L67d59c;
case 0x67d59e:goto L67d59e;
case 0x67d5a2:c.instructions+=4;goto B67d5a2;
case 0x67d5a3:c.instructions+=3;goto B67d5a3;
case 0x67d5a5:c.instructions+=2;goto B67d5a5;
case 0x67d5a8:c.instructions+=1;goto B67d5a8;
case 0x67d5aa:goto L67d5aa;
case 0x67d5ad:c.instructions+=3;goto B67d5ad;
case 0x67d5af:c.instructions+=2;goto B67d5af;
case 0x67d5b2:c.instructions+=1;goto B67d5b2;
case 0x67d5b7:goto L67d5b7;
case 0x67d5b9:c.instructions+=2;goto B67d5b9;
case 0x67d5bb:c.instructions+=1;goto B67d5bb;
case 0x67d5c1:goto L67d5c1;
case 0x67d5c4:c.instructions+=3;goto B67d5c4;
case 0x67d5c6:c.instructions+=2;goto B67d5c6;
case 0x67d5c9:c.instructions+=1;goto B67d5c9;
case 0x67d5ce:goto L67d5ce;
case 0x67d5d0:c.instructions+=2;goto B67d5d0;
case 0x67d5d2:c.instructions+=1;goto B67d5d2;
case 0x67d5d8:goto L67d5d8;
case 0x67d5db:c.instructions+=3;goto B67d5db;
case 0x67d5dd:c.instructions+=2;goto B67d5dd;
case 0x67d5e0:c.instructions+=1;goto B67d5e0;
case 0x67d5e5:goto L67d5e5;
case 0x67d5e7:c.instructions+=2;goto B67d5e7;
case 0x67d5e9:c.instructions+=1;goto B67d5e9;
case 0x67d5ef:goto L67d5ef;
case 0x67d5f2:c.instructions+=3;goto B67d5f2;
case 0x67d5f4:c.instructions+=2;goto B67d5f4;
case 0x67d5f7:c.instructions+=1;goto B67d5f7;
case 0x67d5fc:goto L67d5fc;
case 0x67d5fe:c.instructions+=2;goto B67d5fe;
case 0x67d600:c.instructions+=1;goto B67d600;
case 0x67d606:goto L67d606;
case 0x67d609:c.instructions+=3;goto B67d609;
case 0x67d60b:c.instructions+=2;goto B67d60b;
case 0x67d60e:c.instructions+=1;goto B67d60e;
case 0x67d613:goto L67d613;
case 0x67d615:c.instructions+=2;goto B67d615;
case 0x67d617:c.instructions+=1;goto B67d617;
case 0x67d61d:goto L67d61d;
case 0x67d620:c.instructions+=11;goto B67d620;
case 0x67d622:c.instructions+=10;goto B67d622;
case 0x67d625:c.instructions+=9;goto B67d625;
case 0x67d62a:c.instructions+=8;goto B67d62a;
case 0x67d62d:c.instructions+=7;goto B67d62d;
case 0x67d630:c.instructions+=6;goto B67d630;
case 0x67d633:c.instructions+=5;goto B67d633;
case 0x67d638:c.instructions+=4;goto B67d638;
case 0x67d639:c.instructions+=3;goto B67d639;
case 0x67d63c:c.instructions+=2;goto B67d63c;
case 0x67d63e:c.instructions+=1;goto B67d63e;
case 0x67d643:goto L67d643;
case 0x67d645:c.instructions+=2;goto B67d645;
case 0x67d647:c.instructions+=1;goto B67d647;
case 0x67d64d:goto L67d64d;
case 0x67d650:c.instructions+=10;goto B67d650;
case 0x67d652:c.instructions+=9;goto B67d652;
case 0x67d653:c.instructions+=8;goto B67d653;
case 0x67d656:c.instructions+=7;goto B67d656;
case 0x67d65b:c.instructions+=6;goto B67d65b;
case 0x67d65e:c.instructions+=5;goto B67d65e;
case 0x67d660:c.instructions+=4;goto B67d660;
case 0x67d661:c.instructions+=3;goto B67d661;
case 0x67d664:c.instructions+=2;goto B67d664;
case 0x67d667:c.instructions+=1;goto B67d667;
case 0x67d66c:goto L67d66c;
case 0x67d66e:c.instructions+=2;goto B67d66e;
case 0x67d670:c.instructions+=1;goto B67d670;
case 0x67d676:goto L67d676;
case 0x67d679:c.instructions+=10;goto B67d679;
case 0x67d67b:c.instructions+=9;goto B67d67b;
case 0x67d67e:c.instructions+=8;goto B67d67e;
case 0x67d683:c.instructions+=7;goto B67d683;
case 0x67d686:c.instructions+=6;goto B67d686;
case 0x67d688:c.instructions+=5;goto B67d688;
case 0x67d68b:c.instructions+=4;goto B67d68b;
case 0x67d68e:c.instructions+=3;goto B67d68e;
case 0x67d68f:c.instructions+=2;goto B67d68f;
case 0x67d692:c.instructions+=1;goto B67d692;
case 0x67d697:goto L67d697;
case 0x67d699:c.instructions+=2;goto B67d699;
case 0x67d69b:c.instructions+=1;goto B67d69b;
case 0x67d6a1:goto L67d6a1;
case 0x67d6a3:c.instructions+=7;goto B67d6a3;
case 0x67d6a4:c.instructions+=6;goto B67d6a4;
case 0x67d6a7:c.instructions+=5;goto B67d6a7;
case 0x67d6a9:c.instructions+=4;goto B67d6a9;
case 0x67d6ac:c.instructions+=3;goto B67d6ac;
case 0x67d6af:c.instructions+=2;goto B67d6af;
case 0x67d6b2:c.instructions+=1;goto B67d6b2;
case 0x67d6b7:goto L67d6b7;
case 0x67d6b9:c.instructions+=2;goto B67d6b9;
case 0x67d6bb:c.instructions+=1;goto B67d6bb;
case 0x67d6c1:goto L67d6c1;
case 0x67d6c3:c.instructions+=7;goto B67d6c3;
case 0x67d6c6:c.instructions+=6;goto B67d6c6;
case 0x67d6c8:c.instructions+=5;goto B67d6c8;
case 0x67d6cb:c.instructions+=4;goto B67d6cb;
case 0x67d6ce:c.instructions+=3;goto B67d6ce;
case 0x67d6d1:c.instructions+=2;goto B67d6d1;
case 0x67d6d4:c.instructions+=1;goto B67d6d4;
case 0x67d6d9:goto L67d6d9;
case 0x67d6db:c.instructions+=2;goto B67d6db;
case 0x67d6dd:c.instructions+=1;goto B67d6dd;
case 0x67d6e3:goto L67d6e3;
case 0x67d6e6:c.instructions+=2;goto B67d6e6;
case 0x67d6e9:c.instructions+=1;goto B67d6e9;
case 0x67d6ef:goto L67d6ef;
case 0x67d6f2:c.instructions+=4;goto B67d6f2;
case 0x67d6f5:c.instructions+=3;goto B67d6f5;
case 0x67d6f7:c.instructions+=2;goto B67d6f7;
case 0x67d6fa:c.instructions+=1;goto B67d6fa;
case 0x67d6fd:goto L67d6fd;
case 0x67d700:c.instructions+=6;goto B67d700;
case 0x67d703:c.instructions+=5;goto B67d703;
case 0x67d704:c.instructions+=4;goto B67d704;
case 0x67d707:c.instructions+=3;goto B67d707;
case 0x67d70a:c.instructions+=2;goto B67d70a;
case 0x67d70c:c.instructions+=1;goto B67d70c;
case 0x67d711:goto L67d711;
case 0x67d713:c.instructions+=2;goto B67d713;
case 0x67d715:c.instructions+=1;goto B67d715;
case 0x67d71b:goto L67d71b;
case 0x67d71e:c.instructions+=4;goto B67d71e;
case 0x67d724:c.instructions+=3;goto B67d724;
case 0x67d726:c.instructions+=2;goto B67d726;
case 0x67d729:c.instructions+=1;goto B67d729;
case 0x67d72b:goto L67d72b;
case 0x67d72e:c.instructions+=5;goto B67d72e;
case 0x67d734:c.instructions+=4;goto B67d734;
case 0x67d736:c.instructions+=3;goto B67d736;
case 0x67d738:c.instructions+=2;goto B67d738;
case 0x67d73b:c.instructions+=1;goto B67d73b;
case 0x67d73d:goto L67d73d;
case 0x67d73f:c.instructions+=5;goto B67d73f;
case 0x67d742:c.instructions+=4;goto B67d742;
case 0x67d744:c.instructions+=3;goto B67d744;
case 0x67d746:c.instructions+=2;goto B67d746;
case 0x67d749:c.instructions+=1;goto B67d749;
case 0x67d74b:goto L67d74b;
case 0x67d751:c.instructions+=5;goto B67d751;
case 0x67d754:c.instructions+=4;goto B67d754;
case 0x67d756:c.instructions+=3;goto B67d756;
case 0x67d758:c.instructions+=2;goto B67d758;
case 0x67d75b:c.instructions+=1;goto B67d75b;
case 0x67d75d:goto L67d75d;
case 0x67d760:c.instructions+=2;goto B67d760;
case 0x67d763:c.instructions+=1;goto B67d763;
case 0x67d765:goto L67d765;
case 0x67d768:c.instructions+=4;goto B67d768;
case 0x67d76b:c.instructions+=3;goto B67d76b;
case 0x67d76f:c.instructions+=2;goto B67d76f;
case 0x67d772:c.instructions+=1;goto B67d772;
case 0x67d774:goto L67d774;
case 0x67d779:goto L67d779;
case 0x67d77b:c.instructions+=2;goto B67d77b;
case 0x67d77e:c.instructions+=1;goto B67d77e;
case 0x67d784:goto L67d784;
case 0x67d787:c.instructions+=4;goto B67d787;
case 0x67d78a:c.instructions+=3;goto B67d78a;
case 0x67d78b:c.instructions+=2;goto B67d78b;
case 0x67d78e:c.instructions+=1;goto B67d78e;
case 0x67d790:goto L67d790;
case 0x67d795:goto L67d795;
case 0x67d797:c.instructions+=2;goto B67d797;
case 0x67d79a:c.instructions+=1;goto B67d79a;
case 0x67d7a0:goto L67d7a0;
case 0x67d7a3:c.instructions+=1;goto B67d7a3;
case 0x67d7a9:goto L67d7a9;
case 0x67d7ac:c.instructions+=2;goto B67d7ac;
case 0x67d7ae:c.instructions+=1;goto B67d7ae;
case 0x67d7b3:goto L67d7b3;
case 0x67d7b5:c.instructions+=2;goto B67d7b5;
case 0x67d7b8:c.instructions+=1;goto B67d7b8;
case 0x67d7be:goto L67d7be;
case 0x67d7c1:c.instructions+=3;goto B67d7c1;
case 0x67d7c3:c.instructions+=2;goto B67d7c3;
case 0x67d7c4:c.instructions+=1;goto B67d7c4;
case 0x67d7c9:goto L67d7c9;
case 0x67d7cb:c.instructions+=2;goto B67d7cb;
case 0x67d7cd:c.instructions+=1;goto B67d7cd;
case 0x67d7d3:goto L67d7d3;
case 0x67d7d6:c.instructions+=3;goto B67d7d6;
case 0x67d7d8:c.instructions+=2;goto B67d7d8;
case 0x67d7db:c.instructions+=1;goto B67d7db;
case 0x67d7e0:goto L67d7e0;
case 0x67d7e2:c.instructions+=2;goto B67d7e2;
case 0x67d7e4:c.instructions+=1;goto B67d7e4;
case 0x67d7ea:goto L67d7ea;
case 0x67d7ed:c.instructions+=11;goto B67d7ed;
case 0x67d7ef:c.instructions+=10;goto B67d7ef;
case 0x67d7f0:c.instructions+=9;goto B67d7f0;
case 0x67d7f3:c.instructions+=8;goto B67d7f3;
case 0x67d7f8:c.instructions+=7;goto B67d7f8;
case 0x67d7fb:c.instructions+=6;goto B67d7fb;
case 0x67d7fe:c.instructions+=5;goto B67d7fe;
case 0x67d803:c.instructions+=4;goto B67d803;
case 0x67d804:c.instructions+=3;goto B67d804;
case 0x67d807:c.instructions+=2;goto B67d807;
case 0x67d809:c.instructions+=1;goto B67d809;
case 0x67d80e:goto L67d80e;
case 0x67d810:c.instructions+=2;goto B67d810;
case 0x67d812:c.instructions+=1;goto B67d812;
case 0x67d818:goto L67d818;
case 0x67d819:c.instructions+=2;goto B67d819;
case 0x67d81c:c.instructions+=1;goto B67d81c;
case 0x67d821:goto L67d821;
case 0x67d823:c.instructions+=2;goto B67d823;
case 0x67d826:c.instructions+=1;goto B67d826;
case 0x67d82c:goto L67d82c;
case 0x67d82f:c.instructions+=1;goto B67d82f;
case 0x67d835:goto L67d835;
case 0x67d83b:c.instructions+=5;goto B67d83b;
case 0x67d83e:c.instructions+=4;goto B67d83e;
case 0x67d840:c.instructions+=3;goto B67d840;
case 0x67d842:c.instructions+=2;goto B67d842;
case 0x67d843:c.instructions+=1;goto B67d843;
case 0x67d848:goto L67d848;
case 0x67d84b:c.instructions+=2;goto B67d84b;
case 0x67d84d:c.instructions+=1;goto B67d84d;
case 0x67d84f:goto L67d84f;
case 0x67d851:c.instructions+=1;goto B67d851;
case 0x67d857:goto L67d857;
case 0x67d858:c.instructions+=3;goto B67d858;
case 0x67d85b:c.instructions+=2;goto B67d85b;
case 0x67d85d:c.instructions+=1;goto B67d85d;
case 0x67d862:goto L67d862;
case 0x67d864:c.instructions+=2;goto B67d864;
case 0x67d866:c.instructions+=1;goto B67d866;
case 0x67d86c:goto L67d86c;
case 0x67d86d:c.instructions+=8;goto B67d86d;
case 0x67d86e:c.instructions+=7;goto B67d86e;
case 0x67d871:c.instructions+=6;goto B67d871;
case 0x67d874:c.instructions+=5;goto B67d874;
case 0x67d875:c.instructions+=4;goto B67d875;
case 0x67d87a:c.instructions+=3;goto B67d87a;
case 0x67d87d:c.instructions+=2;goto B67d87d;
case 0x67d87f:c.instructions+=1;goto B67d87f;
case 0x67d884:goto L67d884;
case 0x67d886:c.instructions+=2;goto B67d886;
case 0x67d888:c.instructions+=1;goto B67d888;
case 0x67d88e:goto L67d88e;
case 0x67d890:c.instructions+=6;goto B67d890;
case 0x67d893:c.instructions+=5;goto B67d893;
case 0x67d894:c.instructions+=4;goto B67d894;
case 0x67d897:c.instructions+=3;goto B67d897;
case 0x67d89a:c.instructions+=2;goto B67d89a;
case 0x67d89f:c.instructions+=1;goto B67d89f;
case 0x67d8a4:goto L67d8a4;
case 0x67d8a6:c.instructions+=1;goto B67d8a6;
case 0x67d8ac:goto L67d8ac;
case 0x67d8ae:c.instructions+=4;goto B67d8ae;
case 0x67d8b1:c.instructions+=3;goto B67d8b1;
case 0x67d8b2:c.instructions+=2;goto B67d8b2;
case 0x67d8b4:c.instructions+=1;goto B67d8b4;
case 0x67d8b9:goto L67d8b9;
case 0x67d8bb:c.instructions+=2;goto B67d8bb;
case 0x67d8bd:c.instructions+=1;goto B67d8bd;
case 0x67d8c3:goto L67d8c3;
case 0x67d8c6:c.instructions+=3;goto B67d8c6;
case 0x67d8c8:c.instructions+=2;goto B67d8c8;
case 0x67d8cb:c.instructions+=1;goto B67d8cb;
case 0x67d8d0:goto L67d8d0;
case 0x67d8d2:c.instructions+=2;goto B67d8d2;
case 0x67d8d4:c.instructions+=1;goto B67d8d4;
case 0x67d8da:goto L67d8da;
case 0x67d8dc:c.instructions+=8;goto B67d8dc;
case 0x67d8df:c.instructions+=7;goto B67d8df;
case 0x67d8e2:c.instructions+=6;goto B67d8e2;
case 0x67d8e5:c.instructions+=5;goto B67d8e5;
case 0x67d8eb:c.instructions+=4;goto B67d8eb;
case 0x67d8ec:c.instructions+=3;goto B67d8ec;
case 0x67d8f2:c.instructions+=2;goto B67d8f2;
case 0x67d8f3:c.instructions+=1;goto B67d8f3;
case 0x67d8f8:goto L67d8f8;
case 0x67d8fa:c.instructions+=2;goto B67d8fa;
case 0x67d8fd:c.instructions+=1;goto B67d8fd;
case 0x67d903:goto L67d903;
case 0x67d906:c.instructions+=1;goto B67d906;
case 0x67d90c:goto L67d90c;
case 0x67d90f:c.instructions+=1;goto B67d90f;
case 0x67d915:goto L67d915;
case 0x67d918:c.instructions+=1;goto B67d918;
case 0x67d91e:goto L67d91e;
case 0x67d921:c.instructions+=7;goto B67d921;
case 0x67d923:c.instructions+=6;goto B67d923;
case 0x67d926:c.instructions+=5;goto B67d926;
case 0x67d929:c.instructions+=4;goto B67d929;
case 0x67d92c:c.instructions+=3;goto B67d92c;
case 0x67d92f:c.instructions+=2;goto B67d92f;
case 0x67d932:c.instructions+=1;goto B67d932;
case 0x67d937:goto L67d937;
case 0x67d93c:goto L67d93c;
case 0x67d93e:c.instructions+=2;goto B67d93e;
case 0x67d941:c.instructions+=1;goto B67d941;
case 0x67d947:goto L67d947;
case 0x67d94a:c.instructions+=1;goto B67d94a;
case 0x67d950:goto L67d950;
case 0x67d953:c.instructions+=1;goto B67d953;
case 0x67d959:goto L67d959;
case 0x67d95d:c.instructions+=1;goto B67d95d;
case 0x67d963:goto L67d963;
case 0x67d966:c.instructions+=1;goto B67d966;
case 0x67d96c:goto L67d96c;
case 0x67d96f:c.instructions+=2;goto B67d96f;
case 0x67d973:c.instructions+=1;goto B67d973;
case 0x67d975:goto L67d975;
case 0x67d978:c.instructions+=14;goto B67d978;
case 0x67d97a:c.instructions+=13;goto B67d97a;
case 0x67d97d:c.instructions+=12;goto B67d97d;
case 0x67d980:c.instructions+=11;goto B67d980;
case 0x67d982:c.instructions+=10;goto B67d982;
case 0x67d985:c.instructions+=9;goto B67d985;
case 0x67d988:c.instructions+=8;goto B67d988;
case 0x67d98a:c.instructions+=7;goto B67d98a;
case 0x67d98d:c.instructions+=6;goto B67d98d;
case 0x67d98f:c.instructions+=5;goto B67d98f;
case 0x67d991:c.instructions+=4;goto B67d991;
case 0x67d994:c.instructions+=3;goto B67d994;
case 0x67d996:c.instructions+=2;goto B67d996;
case 0x67d999:c.instructions+=1;goto B67d999;
case 0x67d99e:goto L67d99e;
case 0x67d9a0:c.instructions+=2;goto B67d9a0;
case 0x67d9a2:c.instructions+=1;goto B67d9a2;
case 0x67d9a8:goto L67d9a8;
case 0x67d9a9:c.instructions+=6;goto B67d9a9;
case 0x67d9aa:c.instructions+=5;goto B67d9aa;
case 0x67d9ad:c.instructions+=4;goto B67d9ad;
case 0x67d9ae:c.instructions+=3;goto B67d9ae;
case 0x67d9b1:c.instructions+=2;goto B67d9b1;
case 0x67d9b6:c.instructions+=1;goto B67d9b6;
case 0x67d9bb:goto L67d9bb;
case 0x67d9bd:c.instructions+=2;goto B67d9bd;
case 0x67d9bf:c.instructions+=1;goto B67d9bf;
case 0x67d9c4:goto L67d9c4;
case 0x67d9c6:c.instructions+=1;goto B67d9c6;
case 0x67d9cc:goto L67d9cc;
case 0x67d9ce:c.instructions+=3;goto B67d9ce;
case 0x67d9d1:c.instructions+=2;goto B67d9d1;
case 0x67d9d3:c.instructions+=1;goto B67d9d3;
case 0x67d9d5:goto L67d9d5;
case 0x67d9d8:c.instructions+=5;goto B67d9d8;
case 0x67d9dc:c.instructions+=4;goto B67d9dc;
case 0x67d9e0:c.instructions+=3;goto B67d9e0;
case 0x67d9e1:c.instructions+=2;goto B67d9e1;
case 0x67d9e4:c.instructions+=1;goto B67d9e4;
case 0x67d9e6:goto L67d9e6;
case 0x67d9e8:c.instructions+=3;goto B67d9e8;
case 0x67d9e9:c.instructions+=2;goto B67d9e9;
case 0x67d9eb:c.instructions+=1;goto B67d9eb;
case 0x67d9f0:goto L67d9f0;
case 0x67d9f2:c.instructions+=2;goto B67d9f2;
case 0x67d9f4:c.instructions+=1;goto B67d9f4;
case 0x67d9fa:goto L67d9fa;
case 0x67d9fc:c.instructions+=3;goto B67d9fc;
case 0x67d9ff:c.instructions+=2;goto B67d9ff;
case 0x67da01:c.instructions+=1;goto B67da01;
case 0x67da06:goto L67da06;
case 0x67da08:c.instructions+=2;goto B67da08;
case 0x67da0a:c.instructions+=1;goto B67da0a;
case 0x67da10:goto L67da10;
case 0x67da11:c.instructions+=7;goto B67da11;
case 0x67da12:c.instructions+=6;goto B67da12;
case 0x67da15:c.instructions+=5;goto B67da15;
case 0x67da17:c.instructions+=4;goto B67da17;
case 0x67da1a:c.instructions+=3;goto B67da1a;
case 0x67da1f:c.instructions+=2;goto B67da1f;
case 0x67da22:c.instructions+=1;goto B67da22;
case 0x67da27:goto L67da27;
case 0x67da29:c.instructions+=2;goto B67da29;
case 0x67da2b:c.instructions+=1;goto B67da2b;
case 0x67da31:goto L67da31;
case 0x67da33:c.instructions+=7;goto B67da33;
case 0x67da36:c.instructions+=6;goto B67da36;
case 0x67da38:c.instructions+=5;goto B67da38;
case 0x67da3b:c.instructions+=4;goto B67da3b;
case 0x67da3e:c.instructions+=3;goto B67da3e;
case 0x67da43:c.instructions+=2;goto B67da43;
case 0x67da46:c.instructions+=1;goto B67da46;
case 0x67da4b:goto L67da4b;
case 0x67da4d:c.instructions+=2;goto B67da4d;
case 0x67da4f:c.instructions+=1;goto B67da4f;
case 0x67da55:goto L67da55;
case 0x67da58:c.instructions+=9;goto B67da58;
case 0x67da59:c.instructions+=8;goto B67da59;
case 0x67da5c:c.instructions+=7;goto B67da5c;
case 0x67da5f:c.instructions+=6;goto B67da5f;
case 0x67da62:c.instructions+=5;goto B67da62;
case 0x67da64:c.instructions+=4;goto B67da64;
case 0x67da65:c.instructions+=3;goto B67da65;
case 0x67da6a:c.instructions+=2;goto B67da6a;
case 0x67da6d:c.instructions+=1;goto B67da6d;
case 0x67da72:goto L67da72;
case 0x67da74:c.instructions+=2;goto B67da74;
case 0x67da76:c.instructions+=1;goto B67da76;
case 0x67da7c:goto L67da7c;
case 0x67da7d:c.instructions+=7;goto B67da7d;
case 0x67da7e:c.instructions+=6;goto B67da7e;
case 0x67da81:c.instructions+=5;goto B67da81;
case 0x67da83:c.instructions+=4;goto B67da83;
case 0x67da86:c.instructions+=3;goto B67da86;
case 0x67da8b:c.instructions+=2;goto B67da8b;
case 0x67da8e:c.instructions+=1;goto B67da8e;
case 0x67da93:goto L67da93;
case 0x67da95:c.instructions+=2;goto B67da95;
case 0x67da97:c.instructions+=1;goto B67da97;
case 0x67da9d:goto L67da9d;
case 0x67da9f:c.instructions+=7;goto B67da9f;
case 0x67daa2:c.instructions+=6;goto B67daa2;
case 0x67daa4:c.instructions+=5;goto B67daa4;
case 0x67daa7:c.instructions+=4;goto B67daa7;
case 0x67daaa:c.instructions+=3;goto B67daaa;
case 0x67daaf:c.instructions+=2;goto B67daaf;
case 0x67dab2:c.instructions+=1;goto B67dab2;
case 0x67dab7:goto L67dab7;
case 0x67dab9:c.instructions+=2;goto B67dab9;
case 0x67dabb:c.instructions+=1;goto B67dabb;
case 0x67dac1:goto L67dac1;
case 0x67dac3:c.instructions+=7;goto B67dac3;
case 0x67dac6:c.instructions+=6;goto B67dac6;
case 0x67dac8:c.instructions+=5;goto B67dac8;
case 0x67dacb:c.instructions+=4;goto B67dacb;
case 0x67dace:c.instructions+=3;goto B67dace;
case 0x67dad3:c.instructions+=2;goto B67dad3;
case 0x67dad6:c.instructions+=1;goto B67dad6;
case 0x67dadb:goto L67dadb;
case 0x67dadd:c.instructions+=2;goto B67dadd;
case 0x67dadf:c.instructions+=1;goto B67dadf;
case 0x67dae5:goto L67dae5;
case 0x67dae7:c.instructions+=6;goto B67dae7;
case 0x67daea:c.instructions+=5;goto B67daea;
case 0x67daec:c.instructions+=4;goto B67daec;
case 0x67daef:c.instructions+=3;goto B67daef;
case 0x67daf2:c.instructions+=2;goto B67daf2;
case 0x67daf5:c.instructions+=1;goto B67daf5;
case 0x67dafa:goto L67dafa;
case 0x67dafc:c.instructions+=2;goto B67dafc;
case 0x67dafe:c.instructions+=1;goto B67dafe;
case 0x67db04:goto L67db04;
case 0x67db07:c.instructions+=9;goto B67db07;
case 0x67db09:c.instructions+=8;goto B67db09;
case 0x67db0c:c.instructions+=7;goto B67db0c;
case 0x67db0f:c.instructions+=6;goto B67db0f;
case 0x67db12:c.instructions+=5;goto B67db12;
case 0x67db14:c.instructions+=4;goto B67db14;
case 0x67db15:c.instructions+=3;goto B67db15;
case 0x67db1a:c.instructions+=2;goto B67db1a;
case 0x67db1d:c.instructions+=1;goto B67db1d;
case 0x67db22:goto L67db22;
case 0x67db24:c.instructions+=2;goto B67db24;
case 0x67db26:c.instructions+=1;goto B67db26;
case 0x67db2c:goto L67db2c;
case 0x67db2e:c.instructions+=8;goto B67db2e;
case 0x67db2f:c.instructions+=7;goto B67db2f;
case 0x67db32:c.instructions+=6;goto B67db32;
case 0x67db33:c.instructions+=5;goto B67db33;
case 0x67db36:c.instructions+=4;goto B67db36;
case 0x67db38:c.instructions+=3;goto B67db38;
case 0x67db3d:c.instructions+=2;goto B67db3d;
case 0x67db40:c.instructions+=1;goto B67db40;
case 0x67db45:goto L67db45;
case 0x67db47:c.instructions+=2;goto B67db47;
case 0x67db49:c.instructions+=1;goto B67db49;
case 0x67db4f:goto L67db4f;
case 0x67db51:c.instructions+=8;goto B67db51;
case 0x67db52:c.instructions+=7;goto B67db52;
case 0x67db55:c.instructions+=6;goto B67db55;
case 0x67db56:c.instructions+=5;goto B67db56;
case 0x67db59:c.instructions+=4;goto B67db59;
case 0x67db5c:c.instructions+=3;goto B67db5c;
case 0x67db5d:c.instructions+=2;goto B67db5d;
case 0x67db62:c.instructions+=1;goto B67db62;
case 0x67db67:goto L67db67;
case 0x67db69:c.instructions+=2;goto B67db69;
case 0x67db6c:c.instructions+=1;goto B67db6c;
case 0x67db72:goto L67db72;
case 0x67db75:c.instructions+=1;goto B67db75;
case 0x67db7b:goto L67db7b;
case 0x67db81:c.instructions+=11;goto B67db81;
case 0x67db84:c.instructions+=10;goto B67db84;
case 0x67db86:c.instructions+=9;goto B67db86;
case 0x67db87:c.instructions+=8;goto B67db87;
case 0x67db89:c.instructions+=7;goto B67db89;
case 0x67db8a:c.instructions+=6;goto B67db8a;
case 0x67db8c:c.instructions+=5;goto B67db8c;
case 0x67db8f:c.instructions+=4;goto B67db8f;
case 0x67db90:c.instructions+=3;goto B67db90;
case 0x67db91:c.instructions+=2;goto B67db91;
case 0x67db94:c.instructions+=1;goto B67db94;
case 0x67db99:goto L67db99;
case 0x67db9c:c.instructions+=5;goto B67db9c;
case 0x67db9f:c.instructions+=4;goto B67db9f;
case 0x67dba2:c.instructions+=3;goto B67dba2;
case 0x67dba3:c.instructions+=2;goto B67dba3;
case 0x67dba5:c.instructions+=1;goto B67dba5;
case 0x67dbaa:goto L67dbaa;
case 0x67dbac:c.instructions+=1;goto B67dbac;
case 0x67dbb2:goto L67dbb2;
case 0x67dbb4:c.instructions+=2;goto B67dbb4;
case 0x67dbb6:c.instructions+=1;goto B67dbb6;
case 0x67dbb9:goto L67dbb9;
case 0x67dbbd:c.instructions+=4;goto B67dbbd;
case 0x67dbbe:c.instructions+=3;goto B67dbbe;
case 0x67dbc0:c.instructions+=2;goto B67dbc0;
case 0x67dbc3:c.instructions+=1;goto B67dbc3;
case 0x67dbc5:goto L67dbc5;
case 0x67dbc7:c.instructions+=1;goto B67dbc7;
case 0x67dbc9:goto L67dbc9;
case 0x67dbcc:c.instructions+=2;goto B67dbcc;
case 0x67dbcf:c.instructions+=1;goto B67dbcf;
case 0x67dbd2:goto L67dbd2;
case 0x67dbd4:goto L67dbd4;
case 0x67dbd6:goto L67dbd6;
case 0x67dbd9:c.instructions+=3;goto B67dbd9;
case 0x67dbdb:c.instructions+=2;goto B67dbdb;
case 0x67dbde:c.instructions+=1;goto B67dbde;
case 0x67dbe3:goto L67dbe3;
case 0x67dbe5:c.instructions+=2;goto B67dbe5;
case 0x67dbe7:c.instructions+=1;goto B67dbe7;
case 0x67dbed:goto L67dbed;
case 0x67dbf0:c.instructions+=3;goto B67dbf0;
case 0x67dbf2:c.instructions+=2;goto B67dbf2;
case 0x67dbf5:c.instructions+=1;goto B67dbf5;
case 0x67dbfa:goto L67dbfa;
case 0x67dbfc:c.instructions+=2;goto B67dbfc;
case 0x67dbfe:c.instructions+=1;goto B67dbfe;
case 0x67dc04:goto L67dc04;
case 0x67dc07:c.instructions+=11;goto B67dc07;
case 0x67dc08:c.instructions+=10;goto B67dc08;
case 0x67dc09:c.instructions+=9;goto B67dc09;
case 0x67dc0c:c.instructions+=8;goto B67dc0c;
case 0x67dc11:c.instructions+=7;goto B67dc11;
case 0x67dc14:c.instructions+=6;goto B67dc14;
case 0x67dc17:c.instructions+=5;goto B67dc17;
case 0x67dc1c:c.instructions+=4;goto B67dc1c;
case 0x67dc1d:c.instructions+=3;goto B67dc1d;
case 0x67dc20:c.instructions+=2;goto B67dc20;
case 0x67dc22:c.instructions+=1;goto B67dc22;
case 0x67dc27:goto L67dc27;
case 0x67dc29:c.instructions+=2;goto B67dc29;
case 0x67dc2b:c.instructions+=1;goto B67dc2b;
case 0x67dc31:goto L67dc31;
case 0x67dc32:c.instructions+=3;goto B67dc32;
case 0x67dc35:c.instructions+=2;goto B67dc35;
case 0x67dc38:c.instructions+=1;goto B67dc38;
case 0x67dc3d:goto L67dc3d;
case 0x67dc3f:c.instructions+=2;goto B67dc3f;
case 0x67dc42:c.instructions+=1;goto B67dc42;
case 0x67dc48:goto L67dc48;
case 0x67dc4b:c.instructions+=1;goto B67dc4b;
case 0x67dc51:goto L67dc51;
case 0x67dc57:c.instructions+=16;goto B67dc57;
case 0x67dc5a:c.instructions+=15;goto B67dc5a;
case 0x67dc5c:c.instructions+=14;goto B67dc5c;
case 0x67dc5d:c.instructions+=13;goto B67dc5d;
case 0x67dc5f:c.instructions+=12;goto B67dc5f;
case 0x67dc60:c.instructions+=11;goto B67dc60;
case 0x67dc62:c.instructions+=10;goto B67dc62;
case 0x67dc68:c.instructions+=9;goto B67dc68;
case 0x67dc6a:c.instructions+=8;goto B67dc6a;
case 0x67dc6c:c.instructions+=7;goto B67dc6c;
case 0x67dc6e:c.instructions+=6;goto B67dc6e;
case 0x67dc70:c.instructions+=5;goto B67dc70;
case 0x67dc73:c.instructions+=4;goto B67dc73;
case 0x67dc74:c.instructions+=3;goto B67dc74;
case 0x67dc75:c.instructions+=2;goto B67dc75;
case 0x67dc78:c.instructions+=1;goto B67dc78;
case 0x67dc7d:goto L67dc7d;
case 0x67dc80:c.instructions+=5;goto B67dc80;
case 0x67dc83:c.instructions+=4;goto B67dc83;
case 0x67dc86:c.instructions+=3;goto B67dc86;
case 0x67dc87:c.instructions+=2;goto B67dc87;
case 0x67dc89:c.instructions+=1;goto B67dc89;
case 0x67dc8e:goto L67dc8e;
case 0x67dc90:c.instructions+=1;goto B67dc90;
case 0x67dc96:goto L67dc96;
case 0x67dc98:c.instructions+=2;goto B67dc98;
case 0x67dc9a:c.instructions+=1;goto B67dc9a;
case 0x67dc9d:goto L67dc9d;
case 0x67dca1:c.instructions+=4;goto B67dca1;
case 0x67dca2:c.instructions+=3;goto B67dca2;
case 0x67dca4:c.instructions+=2;goto B67dca4;
case 0x67dca7:c.instructions+=1;goto B67dca7;
case 0x67dca9:goto L67dca9;
case 0x67dcae:goto L67dcae;
case 0x67dcb0:c.instructions+=2;goto B67dcb0;
case 0x67dcb3:c.instructions+=1;goto B67dcb3;
case 0x67dcb9:goto L67dcb9;
case 0x67dcbc:c.instructions+=1;goto B67dcbc;
case 0x67dcc2:goto L67dcc2;
case 0x67dcc5:c.instructions+=4;goto B67dcc5;
case 0x67dcc6:c.instructions+=3;goto B67dcc6;
case 0x67dcc9:c.instructions+=2;goto B67dcc9;
case 0x67dccb:c.instructions+=1;goto B67dccb;
case 0x67dcd0:goto L67dcd0;
case 0x67dcd2:c.instructions+=2;goto B67dcd2;
case 0x67dcd4:c.instructions+=1;goto B67dcd4;
case 0x67dcda:goto L67dcda;
case 0x67dcdb:c.instructions+=5;goto B67dcdb;
case 0x67dcdc:c.instructions+=4;goto B67dcdc;
case 0x67dcdf:c.instructions+=3;goto B67dcdf;
case 0x67dce5:c.instructions+=2;goto B67dce5;
case 0x67dceb:c.instructions+=1;goto B67dceb;
case 0x67dcf0:goto L67dcf0;
case 0x67dcf2:c.instructions+=2;goto B67dcf2;
case 0x67dcf5:c.instructions+=1;goto B67dcf5;
case 0x67dcfb:goto L67dcfb;
case 0x67dcfe:c.instructions+=1;goto B67dcfe;
case 0x67dd04:goto L67dd04;
case 0x67dd07:c.instructions+=1;goto B67dd07;
case 0x67dd0d:goto L67dd0d;
case 0x67dd10:c.instructions+=4;goto B67dd10;
case 0x67dd11:c.instructions+=3;goto B67dd11;
case 0x67dd14:c.instructions+=2;goto B67dd14;
case 0x67dd16:c.instructions+=1;goto B67dd16;
case 0x67dd1b:goto L67dd1b;
case 0x67dd1d:c.instructions+=2;goto B67dd1d;
case 0x67dd1f:c.instructions+=1;goto B67dd1f;
case 0x67dd25:goto L67dd25;
case 0x67dd26:c.instructions+=5;goto B67dd26;
case 0x67dd29:c.instructions+=4;goto B67dd29;
case 0x67dd2f:c.instructions+=3;goto B67dd2f;
case 0x67dd32:c.instructions+=2;goto B67dd32;
case 0x67dd38:c.instructions+=1;goto B67dd38;
case 0x67dd3d:goto L67dd3d;
case 0x67dd3f:c.instructions+=2;goto B67dd3f;
case 0x67dd42:c.instructions+=1;goto B67dd42;
case 0x67dd48:goto L67dd48;
case 0x67dd4b:c.instructions+=1;goto B67dd4b;
case 0x67dd51:goto L67dd51;
case 0x67dd54:c.instructions+=1;goto B67dd54;
case 0x67dd5a:goto L67dd5a;
case 0x67dd5d:c.instructions+=4;goto B67dd5d;
case 0x67dd5e:c.instructions+=3;goto B67dd5e;
case 0x67dd61:c.instructions+=2;goto B67dd61;
case 0x67dd63:c.instructions+=1;goto B67dd63;
case 0x67dd68:goto L67dd68;
case 0x67dd6a:c.instructions+=2;goto B67dd6a;
case 0x67dd6c:c.instructions+=1;goto B67dd6c;
case 0x67dd72:goto L67dd72;
case 0x67dd73:c.instructions+=5;goto B67dd73;
case 0x67dd76:c.instructions+=4;goto B67dd76;
case 0x67dd7c:c.instructions+=3;goto B67dd7c;
case 0x67dd7f:c.instructions+=2;goto B67dd7f;
case 0x67dd85:c.instructions+=1;goto B67dd85;
case 0x67dd8a:goto L67dd8a;
case 0x67dd8c:c.instructions+=2;goto B67dd8c;
case 0x67dd8f:c.instructions+=1;goto B67dd8f;
case 0x67dd95:goto L67dd95;
case 0x67dd98:c.instructions+=5;goto B67dd98;
case 0x67dd9a:c.instructions+=4;goto B67dd9a;
case 0x67dd9d:c.instructions+=3;goto B67dd9d;
case 0x67dd9e:c.instructions+=2;goto B67dd9e;
case 0x67dda1:c.instructions+=1;goto B67dda1;
case 0x67dda6:goto L67dda6;
case 0x67dda8:c.instructions+=3;goto B67dda8;
case 0x67dda9:c.instructions+=2;goto B67dda9;
case 0x67ddac:c.instructions+=1;goto B67ddac;
case 0x67ddb2:goto L67ddb2;
case 0x67ddb5:c.instructions+=4;goto B67ddb5;
case 0x67ddb7:c.instructions+=3;goto B67ddb7;
case 0x67ddb8:c.instructions+=2;goto B67ddb8;
case 0x67ddba:c.instructions+=1;goto B67ddba;
case 0x67ddbf:goto L67ddbf;
case 0x67ddc1:c.instructions+=1;goto B67ddc1;
case 0x67ddc7:goto L67ddc7;
case 0x67ddc9:goto L67ddc9;
case 0x67ddd0:c.instructions+=4;goto B67ddd0;
case 0x67ddd3:c.instructions+=3;goto B67ddd3;
case 0x67ddd4:c.instructions+=2;goto B67ddd4;
case 0x67ddd7:c.instructions+=1;goto B67ddd7;
case 0x67ddd9:goto L67ddd9;
case 0x67dddc:c.instructions+=3;goto B67dddc;
case 0x67ddde:c.instructions+=2;goto B67ddde;
case 0x67dde4:c.instructions+=1;goto B67dde4;
case 0x67dde9:goto L67dde9;
case 0x67ddeb:c.instructions+=2;goto B67ddeb;
case 0x67dded:c.instructions+=1;goto B67dded;
case 0x67ddf3:goto L67ddf3;
case 0x67ddf6:c.instructions+=3;goto B67ddf6;
case 0x67ddf8:c.instructions+=2;goto B67ddf8;
case 0x67ddfe:c.instructions+=1;goto B67ddfe;
case 0x67de03:goto L67de03;
case 0x67de05:c.instructions+=2;goto B67de05;
case 0x67de07:c.instructions+=1;goto B67de07;
case 0x67de0d:goto L67de0d;
case 0x67de10:c.instructions+=3;goto B67de10;
case 0x67de12:c.instructions+=2;goto B67de12;
case 0x67de18:c.instructions+=1;goto B67de18;
case 0x67de1d:goto L67de1d;
case 0x67de1f:c.instructions+=2;goto B67de1f;
case 0x67de21:c.instructions+=1;goto B67de21;
case 0x67de27:goto L67de27;
case 0x67de2a:c.instructions+=3;goto B67de2a;
case 0x67de2c:c.instructions+=2;goto B67de2c;
case 0x67de32:c.instructions+=1;goto B67de32;
case 0x67de37:goto L67de37;
case 0x67de39:c.instructions+=2;goto B67de39;
case 0x67de3b:c.instructions+=1;goto B67de3b;
case 0x67de41:goto L67de41;
case 0x67de44:c.instructions+=3;goto B67de44;
case 0x67de46:c.instructions+=2;goto B67de46;
case 0x67de4c:c.instructions+=1;goto B67de4c;
case 0x67de51:goto L67de51;
case 0x67de53:c.instructions+=2;goto B67de53;
case 0x67de55:c.instructions+=1;goto B67de55;
case 0x67de5b:goto L67de5b;
case 0x67de5e:c.instructions+=3;goto B67de5e;
case 0x67de60:c.instructions+=2;goto B67de60;
case 0x67de66:c.instructions+=1;goto B67de66;
case 0x67de6b:goto L67de6b;
case 0x67de6d:c.instructions+=2;goto B67de6d;
case 0x67de6f:c.instructions+=1;goto B67de6f;
case 0x67de75:goto L67de75;
case 0x67de78:c.instructions+=3;goto B67de78;
case 0x67de7a:c.instructions+=2;goto B67de7a;
case 0x67de80:c.instructions+=1;goto B67de80;
case 0x67de85:goto L67de85;
case 0x67de87:c.instructions+=2;goto B67de87;
case 0x67de89:c.instructions+=1;goto B67de89;
case 0x67de8f:goto L67de8f;
case 0x67de92:c.instructions+=3;goto B67de92;
case 0x67de94:c.instructions+=2;goto B67de94;
case 0x67de9a:c.instructions+=1;goto B67de9a;
case 0x67de9f:goto L67de9f;
case 0x67dea1:c.instructions+=2;goto B67dea1;
case 0x67dea3:c.instructions+=1;goto B67dea3;
case 0x67dea9:goto L67dea9;
case 0x67deac:c.instructions+=3;goto B67deac;
case 0x67deae:c.instructions+=2;goto B67deae;
case 0x67deb4:c.instructions+=1;goto B67deb4;
case 0x67deb9:goto L67deb9;
case 0x67debb:c.instructions+=2;goto B67debb;
case 0x67debd:c.instructions+=1;goto B67debd;
case 0x67dec3:goto L67dec3;
case 0x67dec6:c.instructions+=3;goto B67dec6;
case 0x67dec8:c.instructions+=2;goto B67dec8;
case 0x67decb:c.instructions+=1;goto B67decb;
case 0x67ded0:goto L67ded0;
case 0x67ded2:c.instructions+=2;goto B67ded2;
case 0x67ded4:c.instructions+=1;goto B67ded4;
case 0x67deda:goto L67deda;
case 0x67dedd:c.instructions+=11;goto B67dedd;
case 0x67dede:c.instructions+=10;goto B67dede;
case 0x67dedf:c.instructions+=9;goto B67dedf;
case 0x67dee2:c.instructions+=8;goto B67dee2;
case 0x67dee7:c.instructions+=7;goto B67dee7;
case 0x67deed:c.instructions+=6;goto B67deed;
case 0x67def0:c.instructions+=5;goto B67def0;
case 0x67def5:c.instructions+=4;goto B67def5;
case 0x67def6:c.instructions+=3;goto B67def6;
case 0x67def9:c.instructions+=2;goto B67def9;
case 0x67defb:c.instructions+=1;goto B67defb;
case 0x67df00:goto L67df00;
case 0x67df02:c.instructions+=2;goto B67df02;
case 0x67df04:c.instructions+=1;goto B67df04;
case 0x67df0a:goto L67df0a;
case 0x67df0d:c.instructions+=9;goto B67df0d;
case 0x67df0f:c.instructions+=8;goto B67df0f;
case 0x67df10:c.instructions+=7;goto B67df10;
case 0x67df16:c.instructions+=6;goto B67df16;
case 0x67df1b:c.instructions+=5;goto B67df1b;
case 0x67df21:c.instructions+=4;goto B67df21;
case 0x67df23:c.instructions+=3;goto B67df23;
case 0x67df24:c.instructions+=2;goto B67df24;
case 0x67df27:c.instructions+=1;goto B67df27;
case 0x67df2c:goto L67df2c;
case 0x67df2e:c.instructions+=2;goto B67df2e;
case 0x67df30:c.instructions+=1;goto B67df30;
case 0x67df36:goto L67df36;
case 0x67df39:c.instructions+=10;goto B67df39;
case 0x67df3b:c.instructions+=9;goto B67df3b;
case 0x67df3c:c.instructions+=8;goto B67df3c;
case 0x67df42:c.instructions+=7;goto B67df42;
case 0x67df47:c.instructions+=6;goto B67df47;
case 0x67df4d:c.instructions+=5;goto B67df4d;
case 0x67df4f:c.instructions+=4;goto B67df4f;
case 0x67df50:c.instructions+=3;goto B67df50;
case 0x67df53:c.instructions+=2;goto B67df53;
case 0x67df56:c.instructions+=1;goto B67df56;
case 0x67df5b:goto L67df5b;
case 0x67df5d:c.instructions+=2;goto B67df5d;
case 0x67df5f:c.instructions+=1;goto B67df5f;
case 0x67df65:goto L67df65;
case 0x67df68:c.instructions+=10;goto B67df68;
case 0x67df6a:c.instructions+=9;goto B67df6a;
case 0x67df70:c.instructions+=8;goto B67df70;
case 0x67df75:c.instructions+=7;goto B67df75;
case 0x67df7b:c.instructions+=6;goto B67df7b;
case 0x67df7d:c.instructions+=5;goto B67df7d;
case 0x67df83:c.instructions+=4;goto B67df83;
case 0x67df86:c.instructions+=3;goto B67df86;
case 0x67df87:c.instructions+=2;goto B67df87;
case 0x67df8a:c.instructions+=1;goto B67df8a;
case 0x67df8f:goto L67df8f;
case 0x67df91:c.instructions+=2;goto B67df91;
case 0x67df93:c.instructions+=1;goto B67df93;
case 0x67df99:goto L67df99;
case 0x67df9a:c.instructions+=7;goto B67df9a;
case 0x67df9b:c.instructions+=6;goto B67df9b;
case 0x67df9e:c.instructions+=5;goto B67df9e;
case 0x67dfa0:c.instructions+=4;goto B67dfa0;
case 0x67dfa6:c.instructions+=3;goto B67dfa6;
case 0x67dfa9:c.instructions+=2;goto B67dfa9;
case 0x67dfac:c.instructions+=1;goto B67dfac;
case 0x67dfb1:goto L67dfb1;
case 0x67dfb3:c.instructions+=2;goto B67dfb3;
case 0x67dfb5:c.instructions+=1;goto B67dfb5;
case 0x67dfbb:goto L67dfbb;
case 0x67dfbe:c.instructions+=10;goto B67dfbe;
case 0x67dfc0:c.instructions+=9;goto B67dfc0;
case 0x67dfc6:c.instructions+=8;goto B67dfc6;
case 0x67dfcb:c.instructions+=7;goto B67dfcb;
case 0x67dfce:c.instructions+=6;goto B67dfce;
case 0x67dfd0:c.instructions+=5;goto B67dfd0;
case 0x67dfd6:c.instructions+=4;goto B67dfd6;
case 0x67dfd9:c.instructions+=3;goto B67dfd9;
case 0x67dfda:c.instructions+=2;goto B67dfda;
case 0x67dfdd:c.instructions+=1;goto B67dfdd;
case 0x67dfe2:goto L67dfe2;
case 0x67dfe4:c.instructions+=2;goto B67dfe4;
case 0x67dfe6:c.instructions+=1;goto B67dfe6;
case 0x67dfec:goto L67dfec;
case 0x67dfed:c.instructions+=6;goto B67dfed;
case 0x67dfee:c.instructions+=5;goto B67dfee;
case 0x67dff4:c.instructions+=4;goto B67dff4;
case 0x67dff6:c.instructions+=3;goto B67dff6;
case 0x67dffc:c.instructions+=2;goto B67dffc;
case 0x67dfff:c.instructions+=1;goto B67dfff;
default:missing_instruction(c.pc);}
B67d000:L67d000:{c.instructions+=1;NFSU2_TR(0x67d000);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d006:L67d006:{c.instructions+=4;NFSU2_TR(0x67d006);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d009:{NFSU2_TR(0x67d009);
__builtin_memmove((R+4),(R+12),4);
}
B67d00b:{NFSU2_TR(0x67d00b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d00e:{NFSU2_TR(0x67d00e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d013ull));
TAIL_STATIC(0x673b2cu,673);
}
B67d013:L67d013:{c.instructions+=3;NFSU2_TR(0x67d013);
__builtin_memmove((R+24),(R+0),4);
}
B67d015:{NFSU2_TR(0x67d015);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d017:{NFSU2_TR(0x67d017);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d01d:L67d01d:{c.instructions+=12;NFSU2_TR(0x67d01d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67d020:{NFSU2_TR(0x67d020);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d021:{NFSU2_TR(0x67d021);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d022:{NFSU2_TR(0x67d022);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d025:{NFSU2_TR(0x67d025);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B67d02a:{NFSU2_TR(0x67d02a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d02d:{NFSU2_TR(0x67d02d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67d030:{NFSU2_TR(0x67d030);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10d00000ull))));
}
B67d035:{NFSU2_TR(0x67d035);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d036:{NFSU2_TR(0x67d036);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d039:{NFSU2_TR(0x67d039);
__builtin_memmove((R+4),(R+12),4);
}
B67d03b:{NFSU2_TR(0x67d03b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d040ull));
TAIL_STATIC(0x6758ceu,675);
}
B67d040:L67d040:{c.instructions+=3;NFSU2_TR(0x67d040);
__builtin_memmove((R+24),(R+0),4);
}
B67d042:{NFSU2_TR(0x67d042);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d044:{NFSU2_TR(0x67d044);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d04a:L67d04a:{c.instructions+=11;NFSU2_TR(0x67d04a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67d04d:{NFSU2_TR(0x67d04d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d04e:{NFSU2_TR(0x67d04e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d04f:{NFSU2_TR(0x67d04f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d052:{NFSU2_TR(0x67d052);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10100000ull))));
}
B67d057:{NFSU2_TR(0x67d057);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d05a:{NFSU2_TR(0x67d05a);
__builtin_memmove((R+4),(R+12),4);
}
B67d05c:{NFSU2_TR(0x67d05c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d05d:{NFSU2_TR(0x67d05d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d060:{NFSU2_TR(0x67d060);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67d063:{NFSU2_TR(0x67d063);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d068ull));
TAIL_STATIC(0x6758ceu,675);
}
B67d068:L67d068:{c.instructions+=3;NFSU2_TR(0x67d068);
__builtin_memmove((R+24),(R+0),4);
}
B67d06a:{NFSU2_TR(0x67d06a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d06c:{NFSU2_TR(0x67d06c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d072:L67d072:{c.instructions+=11;NFSU2_TR(0x67d072);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67d075:{NFSU2_TR(0x67d075);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d077:{NFSU2_TR(0x67d077);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d07a:{NFSU2_TR(0x67d07a);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20100000ull))));
}
B67d07f:{NFSU2_TR(0x67d07f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d082:{NFSU2_TR(0x67d082);
__builtin_memmove((R+4),(R+12),4);
}
B67d084:{NFSU2_TR(0x67d084);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d087:{NFSU2_TR(0x67d087);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67d08a:{NFSU2_TR(0x67d08a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d08b:{NFSU2_TR(0x67d08b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d08e:{NFSU2_TR(0x67d08e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d093ull));
TAIL_STATIC(0x6758ceu,675);
}
B67d093:L67d093:{c.instructions+=3;NFSU2_TR(0x67d093);
__builtin_memmove((R+24),(R+0),4);
}
B67d095:{NFSU2_TR(0x67d095);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d097:{NFSU2_TR(0x67d097);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d09d:L67d09d:{c.instructions+=10;NFSU2_TR(0x67d09d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67d0a0:{NFSU2_TR(0x67d0a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d0a1:{NFSU2_TR(0x67d0a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d0a2:{NFSU2_TR(0x67d0a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d0a5:{NFSU2_TR(0x67d0a5);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10e00000ull))));
}
B67d0aa:{NFSU2_TR(0x67d0aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d0ad:{NFSU2_TR(0x67d0ad);
__builtin_memmove((R+4),(R+12),4);
}
B67d0af:{NFSU2_TR(0x67d0af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d0b0:{NFSU2_TR(0x67d0b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d0b3:{NFSU2_TR(0x67d0b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d0b8ull));
TAIL_STATIC(0x6758ceu,675);
}
B67d0b8:L67d0b8:{c.instructions+=3;NFSU2_TR(0x67d0b8);
__builtin_memmove((R+24),(R+0),4);
}
B67d0ba:{NFSU2_TR(0x67d0ba);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d0bc:{NFSU2_TR(0x67d0bc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d0c2:L67d0c2:{c.instructions+=8;NFSU2_TR(0x67d0c2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d0c3:{NFSU2_TR(0x67d0c3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d0c4:{NFSU2_TR(0x67d0c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d0c7:{NFSU2_TR(0x67d0c7);
__builtin_memmove((R+4),(R+12),4);
}
B67d0c9:{NFSU2_TR(0x67d0c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d0cc:{NFSU2_TR(0x67d0cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d0cf:{NFSU2_TR(0x67d0cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d0d2:{NFSU2_TR(0x67d0d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d0d7ull));
TAIL_STATIC(0x6758ceu,675);
}
B67d0d7:L67d0d7:{c.instructions+=3;NFSU2_TR(0x67d0d7);
__builtin_memmove((R+24),(R+0),4);
}
B67d0d9:{NFSU2_TR(0x67d0d9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d0db:{NFSU2_TR(0x67d0db);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d0e1:L67d0e1:{c.instructions+=8;NFSU2_TR(0x67d0e1);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d0e3:{NFSU2_TR(0x67d0e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d0e6:{NFSU2_TR(0x67d0e6);
__builtin_memmove((R+4),(R+12),4);
}
B67d0e8:{NFSU2_TR(0x67d0e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d0eb:{NFSU2_TR(0x67d0eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d0ee:{NFSU2_TR(0x67d0ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d0f1:{NFSU2_TR(0x67d0f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d0f4:{NFSU2_TR(0x67d0f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d0f9ull));
TAIL_STATIC(0x6758ceu,675);
}
B67d0f9:L67d0f9:{c.instructions+=3;NFSU2_TR(0x67d0f9);
__builtin_memmove((R+24),(R+0),4);
}
B67d0fb:{NFSU2_TR(0x67d0fb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d0fd:{NFSU2_TR(0x67d0fd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d103:L67d103:{c.instructions+=4;NFSU2_TR(0x67d103);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d105:{NFSU2_TR(0x67d105);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d108:{NFSU2_TR(0x67d108);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d10b:{NFSU2_TR(0x67d10b);
TAIL_STATIC(0x67b599u,67b);
}
B67d110:L67d110:{c.instructions+=3;NFSU2_TR(0x67d110);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67d112:{NFSU2_TR(0x67d112);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67d115:{NFSU2_TR(0x67d115);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67d11b:L67d11b:{c.instructions+=3;NFSU2_TR(0x67d11b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67d11e:{NFSU2_TR(0x67d11e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67d120:{NFSU2_TR(0x67d120);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67d126:L67d126:{c.instructions+=3;NFSU2_TR(0x67d126);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67d129:{NFSU2_TR(0x67d129);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B67d12d:{NFSU2_TR(0x67d12d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67d330;}}
}
B67d133:L67d133:{c.instructions+=5;NFSU2_TR(0x67d133);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67d136:{NFSU2_TR(0x67d136);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B67d139:{NFSU2_TR(0x67d139);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d13a:{NFSU2_TR(0x67d13a);
__builtin_memmove((R+4),(R+12),4);
}
B67d13c:{NFSU2_TR(0x67d13c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d141ull));
TAIL_STATIC(0x673a0fu,673);
}
B67d141:L67d141:{c.instructions+=2;NFSU2_TR(0x67d141);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67d143:{NFSU2_TR(0x67d143);
if(r1(R+518)){TAIL_STATIC(0x67fc7cu,67f);}
}
B67d149:L67d149:{c.instructions+=1;NFSU2_TR(0x67d149);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B67d14b:L67d14b:{c.instructions+=5;NFSU2_TR(0x67d14b);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B67d14f:{NFSU2_TR(0x67d14f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B67d150:{NFSU2_TR(0x67d150);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B67d152:{NFSU2_TR(0x67d152);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B67d155:{NFSU2_TR(0x67d155);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67d14bu);}goto L67d14b;}}
}
B67d157:L67d157:{c.instructions+=4;NFSU2_TR(0x67d157);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d15a:{NFSU2_TR(0x67d15a);
__builtin_memmove((R+4),(R+12),4);
}
B67d15c:{NFSU2_TR(0x67d15c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d15f:{NFSU2_TR(0x67d15f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d164ull));
TAIL_STATIC(0x673b2cu,673);
}
B67d164:L67d164:{c.instructions+=3;NFSU2_TR(0x67d164);
__builtin_memmove((R+24),(R+0),4);
}
B67d166:{NFSU2_TR(0x67d166);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d168:{NFSU2_TR(0x67d168);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d16e:L67d16e:{c.instructions+=4;NFSU2_TR(0x67d16e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d171:{NFSU2_TR(0x67d171);
__builtin_memmove((R+4),(R+12),4);
}
B67d173:{NFSU2_TR(0x67d173);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d176:{NFSU2_TR(0x67d176);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d17bull));
TAIL_STATIC(0x673b2cu,673);
}
B67d17b:L67d17b:{c.instructions+=3;NFSU2_TR(0x67d17b);
__builtin_memmove((R+24),(R+0),4);
}
B67d17d:{NFSU2_TR(0x67d17d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d17f:{NFSU2_TR(0x67d17f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d185:L67d185:{c.instructions+=4;NFSU2_TR(0x67d185);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d188:{NFSU2_TR(0x67d188);
__builtin_memmove((R+4),(R+12),4);
}
B67d18a:{NFSU2_TR(0x67d18a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d18d:{NFSU2_TR(0x67d18d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d192ull));
TAIL_STATIC(0x673b2cu,673);
}
B67d192:L67d192:{c.instructions+=3;NFSU2_TR(0x67d192);
__builtin_memmove((R+24),(R+0),4);
}
B67d194:{NFSU2_TR(0x67d194);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d196:{NFSU2_TR(0x67d196);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d19c:L67d19c:{c.instructions+=4;NFSU2_TR(0x67d19c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d19f:{NFSU2_TR(0x67d19f);
__builtin_memmove((R+4),(R+12),4);
}
B67d1a1:{NFSU2_TR(0x67d1a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d1a4:{NFSU2_TR(0x67d1a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d1a9ull));
TAIL_STATIC(0x673b2cu,673);
}
B67d1a9:L67d1a9:{c.instructions+=3;NFSU2_TR(0x67d1a9);
__builtin_memmove((R+24),(R+0),4);
}
B67d1ab:{NFSU2_TR(0x67d1ab);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d1ad:{NFSU2_TR(0x67d1ad);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d1b3:L67d1b3:{c.instructions+=4;NFSU2_TR(0x67d1b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d1b6:{NFSU2_TR(0x67d1b6);
__builtin_memmove((R+4),(R+12),4);
}
B67d1b8:{NFSU2_TR(0x67d1b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d1bb:{NFSU2_TR(0x67d1bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d1c0ull));
TAIL_STATIC(0x673b2cu,673);
}
B67d1c0:L67d1c0:{c.instructions+=3;NFSU2_TR(0x67d1c0);
__builtin_memmove((R+24),(R+0),4);
}
B67d1c2:{NFSU2_TR(0x67d1c2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d1c4:{NFSU2_TR(0x67d1c4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d1ca:L67d1ca:{c.instructions+=13;NFSU2_TR(0x67d1ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67d1cd:{NFSU2_TR(0x67d1cd);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d1cf:{NFSU2_TR(0x67d1cf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d1d0:{NFSU2_TR(0x67d1d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d1d3:{NFSU2_TR(0x67d1d3);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B67d1d8:{NFSU2_TR(0x67d1d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d1db:{NFSU2_TR(0x67d1db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67d1de:{NFSU2_TR(0x67d1de);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10100000ull))));
}
B67d1e3:{NFSU2_TR(0x67d1e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d1e4:{NFSU2_TR(0x67d1e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d1e7:{NFSU2_TR(0x67d1e7);
__builtin_memmove((R+4),(R+12),4);
}
B67d1e9:{NFSU2_TR(0x67d1e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67d1ec:{NFSU2_TR(0x67d1ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d1f1ull));
TAIL_STATIC(0x6758ceu,675);
}
B67d1f1:L67d1f1:{c.instructions+=3;NFSU2_TR(0x67d1f1);
__builtin_memmove((R+24),(R+0),4);
}
B67d1f3:{NFSU2_TR(0x67d1f3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d1f5:{NFSU2_TR(0x67d1f5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d1fb:L67d1fb:{c.instructions+=10;NFSU2_TR(0x67d1fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67d1fe:{NFSU2_TR(0x67d1fe);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d200:{NFSU2_TR(0x67d200);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d203:{NFSU2_TR(0x67d203);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20400000ull))));
}
B67d208:{NFSU2_TR(0x67d208);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d20b:{NFSU2_TR(0x67d20b);
__builtin_memmove((R+4),(R+12),4);
}
B67d20d:{NFSU2_TR(0x67d20d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d210:{NFSU2_TR(0x67d210);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d211:{NFSU2_TR(0x67d211);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d214:{NFSU2_TR(0x67d214);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d219ull));
TAIL_STATIC(0x6758ceu,675);
}
B67d219:L67d219:{c.instructions+=3;NFSU2_TR(0x67d219);
__builtin_memmove((R+24),(R+0),4);
}
B67d21b:{NFSU2_TR(0x67d21b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d21d:{NFSU2_TR(0x67d21d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d223:L67d223:{c.instructions+=10;NFSU2_TR(0x67d223);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67d226:{NFSU2_TR(0x67d226);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d228:{NFSU2_TR(0x67d228);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d22b:{NFSU2_TR(0x67d22b);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20500000ull))));
}
B67d230:{NFSU2_TR(0x67d230);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d233:{NFSU2_TR(0x67d233);
__builtin_memmove((R+4),(R+12),4);
}
B67d235:{NFSU2_TR(0x67d235);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d238:{NFSU2_TR(0x67d238);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d239:{NFSU2_TR(0x67d239);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d23c:{NFSU2_TR(0x67d23c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d241ull));
TAIL_STATIC(0x6758ceu,675);
}
B67d241:L67d241:{c.instructions+=3;NFSU2_TR(0x67d241);
__builtin_memmove((R+24),(R+0),4);
}
B67d243:{NFSU2_TR(0x67d243);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d245:{NFSU2_TR(0x67d245);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d24b:L67d24b:{c.instructions+=8;NFSU2_TR(0x67d24b);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d24d:{NFSU2_TR(0x67d24d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d24e:{NFSU2_TR(0x67d24e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d251:{NFSU2_TR(0x67d251);
__builtin_memmove((R+4),(R+12),4);
}
B67d253:{NFSU2_TR(0x67d253);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d256:{NFSU2_TR(0x67d256);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d259:{NFSU2_TR(0x67d259);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d25c:{NFSU2_TR(0x67d25c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d261ull));
TAIL_STATIC(0x6758ceu,675);
}
B67d261:L67d261:{c.instructions+=3;NFSU2_TR(0x67d261);
__builtin_memmove((R+24),(R+0),4);
}
B67d263:{NFSU2_TR(0x67d263);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d265:{NFSU2_TR(0x67d265);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d26b:L67d26b:{c.instructions+=10;NFSU2_TR(0x67d26b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67d26e:{NFSU2_TR(0x67d26e);
u8 U[4];
w4(U+0,u32(0x57ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d270:{NFSU2_TR(0x67d270);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d273:{NFSU2_TR(0x67d273);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20300000ull))));
}
B67d278:{NFSU2_TR(0x67d278);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d27b:{NFSU2_TR(0x67d27b);
__builtin_memmove((R+4),(R+12),4);
}
B67d27d:{NFSU2_TR(0x67d27d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d280:{NFSU2_TR(0x67d280);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d281:{NFSU2_TR(0x67d281);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d284:{NFSU2_TR(0x67d284);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d289ull));
TAIL_STATIC(0x6758ceu,675);
}
B67d289:L67d289:{c.instructions+=3;NFSU2_TR(0x67d289);
__builtin_memmove((R+24),(R+0),4);
}
B67d28b:{NFSU2_TR(0x67d28b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d28d:{NFSU2_TR(0x67d28d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d293:L67d293:{c.instructions+=3;NFSU2_TR(0x67d293);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67d296:{NFSU2_TR(0x67d296);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67d299:{NFSU2_TR(0x67d299);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x67af18u,67a);}
}
B67d29f:L67d29f:{c.instructions+=5;NFSU2_TR(0x67d29f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67d2a2:{NFSU2_TR(0x67d2a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67d2a5:{NFSU2_TR(0x67d2a5);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B67d2a7:{NFSU2_TR(0x67d2a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67d2aa:{NFSU2_TR(0x67d2aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67d2ad:L67d2ad:{c.instructions+=7;NFSU2_TR(0x67d2ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67d2b0:{NFSU2_TR(0x67d2b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B67d2b3:{NFSU2_TR(0x67d2b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d2b4:{NFSU2_TR(0x67d2b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67d2b7:{NFSU2_TR(0x67d2b7);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B67d2ba:{NFSU2_TR(0x67d2ba);
__builtin_memmove((R+4),(R+12),4);
}
B67d2bc:{NFSU2_TR(0x67d2bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d2c1ull));
TAIL_STATIC(0x673e90u,673);
}
B67d2c1:L67d2c1:{c.instructions+=3;NFSU2_TR(0x67d2c1);
__builtin_memmove((R+24),(R+0),4);
}
B67d2c3:{NFSU2_TR(0x67d2c3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d2c5:{NFSU2_TR(0x67d2c5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d2cb:L67d2cb:{c.instructions+=5;NFSU2_TR(0x67d2cb);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67d2ce:{NFSU2_TR(0x67d2ce);
{u32 ea_=u32(r4(R+12)+u32(168u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B67d2d4:{NFSU2_TR(0x67d2d4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B67d2d6:{NFSU2_TR(0x67d2d6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B67d2d9:{NFSU2_TR(0x67d2d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67d2f0;}}
}
B67d2db:L67d2db:{c.instructions+=5;NFSU2_TR(0x67d2db);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67d2de:{NFSU2_TR(0x67d2de);
{u32 ea_=u32(r4(R+12)+u32(160u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B67d2e4:{NFSU2_TR(0x67d2e4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B67d2e6:{NFSU2_TR(0x67d2e6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B67d2e9:{NFSU2_TR(0x67d2e9);
if(r1(R+514)){{goto L67d2f0;}}
}
B67d2eb:L67d2eb:{c.instructions+=2;NFSU2_TR(0x67d2eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67d2ee:{NFSU2_TR(0x67d2ee);
{goto L67d317;}
}
B67d2f0:L67d2f0:{c.instructions+=6;NFSU2_TR(0x67d2f0);
{u32 ea_=u32(r4(R+12)+u32(160u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67d2f6:{NFSU2_TR(0x67d2f6);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67d2f9:{NFSU2_TR(0x67d2f9);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B67d2fb:{NFSU2_TR(0x67d2fb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B67d2fd:{NFSU2_TR(0x67d2fd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B67d300:{NFSU2_TR(0x67d300);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L67d314;}}
}
B67d302:L67d302:{c.instructions+=6;NFSU2_TR(0x67d302);
{u32 ea_=u32(r4(R+12)+u32(168u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67d308:{NFSU2_TR(0x67d308);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67d30b:{NFSU2_TR(0x67d30b);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B67d30d:{NFSU2_TR(0x67d30d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B67d30f:{NFSU2_TR(0x67d30f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B67d312:{NFSU2_TR(0x67d312);
if(r1(R+514)){{goto L67d31c;}}
}
B67d314:L67d314:{c.instructions+=1;NFSU2_TR(0x67d314);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67d317:L67d317:{c.instructions+=2;NFSU2_TR(0x67d317);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67d31a:{NFSU2_TR(0x67d31a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B67d31c:L67d31c:{c.instructions+=5;NFSU2_TR(0x67d31c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67d31f:{NFSU2_TR(0x67d31f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67d322:{NFSU2_TR(0x67d322);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67d326:{NFSU2_TR(0x67d326);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B67d329:{NFSU2_TR(0x67d329);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67d2adu);}goto L67d2ad;}}
}
B67d32b:L67d32b:{c.instructions+=1;NFSU2_TR(0x67d32b);
TAIL_STATIC(0x67af18u,67a);
}
B67d330:L67d330:{c.instructions+=3;NFSU2_TR(0x67d330);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B67d332:{NFSU2_TR(0x67d332);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67d335:{NFSU2_TR(0x67d335);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x67af18u,67a);}
}
B67d33b:L67d33b:{c.instructions+=5;NFSU2_TR(0x67d33b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67d33e:{NFSU2_TR(0x67d33e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B67d341:{NFSU2_TR(0x67d341);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B67d342:{NFSU2_TR(0x67d342);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B67d345:{NFSU2_TR(0x67d345);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67d33bu);}goto L67d33b;}}
}
B67d347:L67d347:{c.instructions+=1;NFSU2_TR(0x67d347);
TAIL_STATIC(0x67af18u,67a);
}
B67d34c:L67d34c:{c.instructions+=3;NFSU2_TR(0x67d34c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67d34e:{NFSU2_TR(0x67d34e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67d351:{NFSU2_TR(0x67d351);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67d357:L67d357:{c.instructions+=3;NFSU2_TR(0x67d357);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67d35a:{NFSU2_TR(0x67d35a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67d35c:{NFSU2_TR(0x67d35c);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67d362:L67d362:{c.instructions+=3;NFSU2_TR(0x67d362);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67d365:{NFSU2_TR(0x67d365);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B67d369:{NFSU2_TR(0x67d369);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67d547;}}
}
B67d36f:L67d36f:{c.instructions+=5;NFSU2_TR(0x67d36f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67d372:{NFSU2_TR(0x67d372);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B67d375:{NFSU2_TR(0x67d375);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d376:{NFSU2_TR(0x67d376);
__builtin_memmove((R+4),(R+12),4);
}
B67d378:{NFSU2_TR(0x67d378);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d37dull));
TAIL_STATIC(0x673a0fu,673);
}
B67d37d:L67d37d:{c.instructions+=2;NFSU2_TR(0x67d37d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67d37f:{NFSU2_TR(0x67d37f);
if(r1(R+518)){TAIL_STATIC(0x67fc7cu,67f);}
}
B67d385:L67d385:{c.instructions+=1;NFSU2_TR(0x67d385);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B67d387:L67d387:{c.instructions+=5;NFSU2_TR(0x67d387);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B67d38b:{NFSU2_TR(0x67d38b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B67d38c:{NFSU2_TR(0x67d38c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B67d38e:{NFSU2_TR(0x67d38e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B67d391:{NFSU2_TR(0x67d391);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67d387u);}goto L67d387;}}
}
B67d393:L67d393:{c.instructions+=4;NFSU2_TR(0x67d393);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d396:{NFSU2_TR(0x67d396);
__builtin_memmove((R+4),(R+12),4);
}
B67d398:{NFSU2_TR(0x67d398);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d39b:{NFSU2_TR(0x67d39b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d3a0ull));
TAIL_STATIC(0x673b2cu,673);
}
B67d3a0:L67d3a0:{c.instructions+=3;NFSU2_TR(0x67d3a0);
__builtin_memmove((R+24),(R+0),4);
}
B67d3a2:{NFSU2_TR(0x67d3a2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d3a4:{NFSU2_TR(0x67d3a4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d3aa:L67d3aa:{c.instructions+=4;NFSU2_TR(0x67d3aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d3ad:{NFSU2_TR(0x67d3ad);
__builtin_memmove((R+4),(R+12),4);
}
B67d3af:{NFSU2_TR(0x67d3af);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d3b2:{NFSU2_TR(0x67d3b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d3b7ull));
TAIL_STATIC(0x673b2cu,673);
}
B67d3b7:L67d3b7:{c.instructions+=3;NFSU2_TR(0x67d3b7);
__builtin_memmove((R+24),(R+0),4);
}
B67d3b9:{NFSU2_TR(0x67d3b9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d3bb:{NFSU2_TR(0x67d3bb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d3c1:L67d3c1:{c.instructions+=4;NFSU2_TR(0x67d3c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d3c4:{NFSU2_TR(0x67d3c4);
__builtin_memmove((R+4),(R+12),4);
}
B67d3c6:{NFSU2_TR(0x67d3c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d3c9:{NFSU2_TR(0x67d3c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d3ceull));
TAIL_STATIC(0x673b2cu,673);
}
B67d3ce:L67d3ce:{c.instructions+=3;NFSU2_TR(0x67d3ce);
__builtin_memmove((R+24),(R+0),4);
}
B67d3d0:{NFSU2_TR(0x67d3d0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d3d2:{NFSU2_TR(0x67d3d2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d3d8:L67d3d8:{c.instructions+=4;NFSU2_TR(0x67d3d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d3db:{NFSU2_TR(0x67d3db);
__builtin_memmove((R+4),(R+12),4);
}
B67d3dd:{NFSU2_TR(0x67d3dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d3e0:{NFSU2_TR(0x67d3e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d3e5ull));
TAIL_STATIC(0x673b2cu,673);
}
B67d3e5:L67d3e5:{c.instructions+=3;NFSU2_TR(0x67d3e5);
__builtin_memmove((R+24),(R+0),4);
}
B67d3e7:{NFSU2_TR(0x67d3e7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d3e9:{NFSU2_TR(0x67d3e9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d3ef:L67d3ef:{c.instructions+=4;NFSU2_TR(0x67d3ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d3f2:{NFSU2_TR(0x67d3f2);
__builtin_memmove((R+4),(R+12),4);
}
B67d3f4:{NFSU2_TR(0x67d3f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d3f7:{NFSU2_TR(0x67d3f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d3fcull));
TAIL_STATIC(0x673b2cu,673);
}
B67d3fc:L67d3fc:{c.instructions+=3;NFSU2_TR(0x67d3fc);
__builtin_memmove((R+24),(R+0),4);
}
B67d3fe:{NFSU2_TR(0x67d3fe);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d400:{NFSU2_TR(0x67d400);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d406:L67d406:{c.instructions+=12;NFSU2_TR(0x67d406);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67d409:{NFSU2_TR(0x67d409);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d40b:{NFSU2_TR(0x67d40b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d40c:{NFSU2_TR(0x67d40c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d40f:{NFSU2_TR(0x67d40f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B67d414:{NFSU2_TR(0x67d414);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d417:{NFSU2_TR(0x67d417);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67d41a:{NFSU2_TR(0x67d41a);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10300000ull))));
}
B67d41f:{NFSU2_TR(0x67d41f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d420:{NFSU2_TR(0x67d420);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d423:{NFSU2_TR(0x67d423);
__builtin_memmove((R+4),(R+12),4);
}
B67d425:{NFSU2_TR(0x67d425);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d42aull));
TAIL_STATIC(0x6758ceu,675);
}
B67d42a:L67d42a:{c.instructions+=3;NFSU2_TR(0x67d42a);
__builtin_memmove((R+24),(R+0),4);
}
B67d42c:{NFSU2_TR(0x67d42c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d42e:{NFSU2_TR(0x67d42e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d434:L67d434:{c.instructions+=10;NFSU2_TR(0x67d434);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67d437:{NFSU2_TR(0x67d437);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d439:{NFSU2_TR(0x67d439);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d43c:{NFSU2_TR(0x67d43c);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20500000ull))));
}
B67d441:{NFSU2_TR(0x67d441);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d444:{NFSU2_TR(0x67d444);
__builtin_memmove((R+4),(R+12),4);
}
B67d446:{NFSU2_TR(0x67d446);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d449:{NFSU2_TR(0x67d449);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d44a:{NFSU2_TR(0x67d44a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d44d:{NFSU2_TR(0x67d44d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d452ull));
TAIL_STATIC(0x6758ceu,675);
}
B67d452:L67d452:{c.instructions+=3;NFSU2_TR(0x67d452);
__builtin_memmove((R+24),(R+0),4);
}
B67d454:{NFSU2_TR(0x67d454);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d456:{NFSU2_TR(0x67d456);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d45c:L67d45c:{c.instructions+=10;NFSU2_TR(0x67d45c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67d45f:{NFSU2_TR(0x67d45f);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d461:{NFSU2_TR(0x67d461);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d462:{NFSU2_TR(0x67d462);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d465:{NFSU2_TR(0x67d465);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10100000ull))));
}
B67d46a:{NFSU2_TR(0x67d46a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d46d:{NFSU2_TR(0x67d46d);
__builtin_memmove((R+4),(R+12),4);
}
B67d46f:{NFSU2_TR(0x67d46f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d470:{NFSU2_TR(0x67d470);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d473:{NFSU2_TR(0x67d473);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d478ull));
TAIL_STATIC(0x6758ceu,675);
}
B67d478:L67d478:{c.instructions+=3;NFSU2_TR(0x67d478);
__builtin_memmove((R+24),(R+0),4);
}
B67d47a:{NFSU2_TR(0x67d47a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d47c:{NFSU2_TR(0x67d47c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d482:L67d482:{c.instructions+=10;NFSU2_TR(0x67d482);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67d485:{NFSU2_TR(0x67d485);
u8 U[4];
w4(U+0,u32(0x57ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d487:{NFSU2_TR(0x67d487);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d48a:{NFSU2_TR(0x67d48a);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20300000ull))));
}
B67d48f:{NFSU2_TR(0x67d48f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d492:{NFSU2_TR(0x67d492);
__builtin_memmove((R+4),(R+12),4);
}
B67d494:{NFSU2_TR(0x67d494);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d497:{NFSU2_TR(0x67d497);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d498:{NFSU2_TR(0x67d498);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d49b:{NFSU2_TR(0x67d49b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d4a0ull));
TAIL_STATIC(0x6758ceu,675);
}
B67d4a0:L67d4a0:{c.instructions+=3;NFSU2_TR(0x67d4a0);
__builtin_memmove((R+24),(R+0),4);
}
B67d4a2:{NFSU2_TR(0x67d4a2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d4a4:{NFSU2_TR(0x67d4a4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d4aa:L67d4aa:{c.instructions+=3;NFSU2_TR(0x67d4aa);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67d4ad:{NFSU2_TR(0x67d4ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67d4b0:{NFSU2_TR(0x67d4b0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x67af18u,67a);}
}
B67d4b6:L67d4b6:{c.instructions+=5;NFSU2_TR(0x67d4b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67d4b9:{NFSU2_TR(0x67d4b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67d4bc:{NFSU2_TR(0x67d4bc);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B67d4be:{NFSU2_TR(0x67d4be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67d4c1:{NFSU2_TR(0x67d4c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67d4c4:L67d4c4:{c.instructions+=7;NFSU2_TR(0x67d4c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67d4c7:{NFSU2_TR(0x67d4c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B67d4ca:{NFSU2_TR(0x67d4ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d4cb:{NFSU2_TR(0x67d4cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67d4ce:{NFSU2_TR(0x67d4ce);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B67d4d1:{NFSU2_TR(0x67d4d1);
__builtin_memmove((R+4),(R+12),4);
}
B67d4d3:{NFSU2_TR(0x67d4d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d4d8ull));
TAIL_STATIC(0x673e90u,673);
}
B67d4d8:L67d4d8:{c.instructions+=3;NFSU2_TR(0x67d4d8);
__builtin_memmove((R+24),(R+0),4);
}
B67d4da:{NFSU2_TR(0x67d4da);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d4dc:{NFSU2_TR(0x67d4dc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d4e2:L67d4e2:{c.instructions+=5;NFSU2_TR(0x67d4e2);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67d4e5:{NFSU2_TR(0x67d4e5);
{u32 ea_=u32(r4(R+12)+u32(168u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B67d4eb:{NFSU2_TR(0x67d4eb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B67d4ed:{NFSU2_TR(0x67d4ed);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B67d4f0:{NFSU2_TR(0x67d4f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67d507;}}
}
B67d4f2:L67d4f2:{c.instructions+=5;NFSU2_TR(0x67d4f2);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67d4f5:{NFSU2_TR(0x67d4f5);
{u32 ea_=u32(r4(R+12)+u32(160u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B67d4fb:{NFSU2_TR(0x67d4fb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B67d4fd:{NFSU2_TR(0x67d4fd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B67d500:{NFSU2_TR(0x67d500);
if(r1(R+514)){{goto L67d507;}}
}
B67d502:L67d502:{c.instructions+=2;NFSU2_TR(0x67d502);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67d505:{NFSU2_TR(0x67d505);
{goto L67d52e;}
}
B67d507:L67d507:{c.instructions+=6;NFSU2_TR(0x67d507);
{u32 ea_=u32(r4(R+12)+u32(160u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67d50d:{NFSU2_TR(0x67d50d);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67d510:{NFSU2_TR(0x67d510);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B67d512:{NFSU2_TR(0x67d512);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B67d514:{NFSU2_TR(0x67d514);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B67d517:{NFSU2_TR(0x67d517);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L67d52b;}}
}
B67d519:L67d519:{c.instructions+=6;NFSU2_TR(0x67d519);
{u32 ea_=u32(r4(R+12)+u32(168u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67d51f:{NFSU2_TR(0x67d51f);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67d522:{NFSU2_TR(0x67d522);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B67d524:{NFSU2_TR(0x67d524);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B67d526:{NFSU2_TR(0x67d526);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B67d529:{NFSU2_TR(0x67d529);
if(r1(R+514)){{goto L67d533;}}
}
B67d52b:L67d52b:{c.instructions+=1;NFSU2_TR(0x67d52b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67d52e:L67d52e:{c.instructions+=2;NFSU2_TR(0x67d52e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67d531:{NFSU2_TR(0x67d531);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B67d533:L67d533:{c.instructions+=5;NFSU2_TR(0x67d533);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67d536:{NFSU2_TR(0x67d536);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67d539:{NFSU2_TR(0x67d539);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67d53d:{NFSU2_TR(0x67d53d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B67d540:{NFSU2_TR(0x67d540);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67d4c4u);}goto L67d4c4;}}
}
B67d542:L67d542:{c.instructions+=1;NFSU2_TR(0x67d542);
TAIL_STATIC(0x67af18u,67a);
}
B67d547:L67d547:{c.instructions+=3;NFSU2_TR(0x67d547);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B67d549:{NFSU2_TR(0x67d549);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67d54c:{NFSU2_TR(0x67d54c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x67af18u,67a);}
}
B67d552:L67d552:{c.instructions+=5;NFSU2_TR(0x67d552);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67d555:{NFSU2_TR(0x67d555);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B67d558:{NFSU2_TR(0x67d558);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B67d559:{NFSU2_TR(0x67d559);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B67d55c:{NFSU2_TR(0x67d55c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67d552u);}goto L67d552;}}
}
B67d55e:L67d55e:{c.instructions+=1;NFSU2_TR(0x67d55e);
TAIL_STATIC(0x67af18u,67a);
}
B67d563:L67d563:{c.instructions+=3;NFSU2_TR(0x67d563);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67d565:{NFSU2_TR(0x67d565);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67d568:{NFSU2_TR(0x67d568);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67d56e:L67d56e:{c.instructions+=3;NFSU2_TR(0x67d56e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67d571:{NFSU2_TR(0x67d571);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67d573:{NFSU2_TR(0x67d573);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67d579:L67d579:{c.instructions+=3;NFSU2_TR(0x67d579);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67d57c:{NFSU2_TR(0x67d57c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B67d580:{NFSU2_TR(0x67d580);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67d779;}}
}
B67d586:L67d586:{c.instructions+=5;NFSU2_TR(0x67d586);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67d589:{NFSU2_TR(0x67d589);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B67d58c:{NFSU2_TR(0x67d58c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d58d:{NFSU2_TR(0x67d58d);
__builtin_memmove((R+4),(R+12),4);
}
B67d58f:{NFSU2_TR(0x67d58f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d594ull));
TAIL_STATIC(0x673a0fu,673);
}
B67d594:L67d594:{c.instructions+=2;NFSU2_TR(0x67d594);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67d596:{NFSU2_TR(0x67d596);
if(r1(R+518)){TAIL_STATIC(0x67fc7cu,67f);}
}
B67d59c:L67d59c:{c.instructions+=1;NFSU2_TR(0x67d59c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B67d59e:L67d59e:{c.instructions+=5;NFSU2_TR(0x67d59e);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B67d5a2:{NFSU2_TR(0x67d5a2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B67d5a3:{NFSU2_TR(0x67d5a3);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B67d5a5:{NFSU2_TR(0x67d5a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B67d5a8:{NFSU2_TR(0x67d5a8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67d59eu);}goto L67d59e;}}
}
B67d5aa:L67d5aa:{c.instructions+=4;NFSU2_TR(0x67d5aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d5ad:{NFSU2_TR(0x67d5ad);
__builtin_memmove((R+4),(R+12),4);
}
B67d5af:{NFSU2_TR(0x67d5af);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d5b2:{NFSU2_TR(0x67d5b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d5b7ull));
TAIL_STATIC(0x673b2cu,673);
}
B67d5b7:L67d5b7:{c.instructions+=3;NFSU2_TR(0x67d5b7);
__builtin_memmove((R+24),(R+0),4);
}
B67d5b9:{NFSU2_TR(0x67d5b9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d5bb:{NFSU2_TR(0x67d5bb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d5c1:L67d5c1:{c.instructions+=4;NFSU2_TR(0x67d5c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d5c4:{NFSU2_TR(0x67d5c4);
__builtin_memmove((R+4),(R+12),4);
}
B67d5c6:{NFSU2_TR(0x67d5c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d5c9:{NFSU2_TR(0x67d5c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d5ceull));
TAIL_STATIC(0x673b2cu,673);
}
B67d5ce:L67d5ce:{c.instructions+=3;NFSU2_TR(0x67d5ce);
__builtin_memmove((R+24),(R+0),4);
}
B67d5d0:{NFSU2_TR(0x67d5d0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d5d2:{NFSU2_TR(0x67d5d2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d5d8:L67d5d8:{c.instructions+=4;NFSU2_TR(0x67d5d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d5db:{NFSU2_TR(0x67d5db);
__builtin_memmove((R+4),(R+12),4);
}
B67d5dd:{NFSU2_TR(0x67d5dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d5e0:{NFSU2_TR(0x67d5e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d5e5ull));
TAIL_STATIC(0x673b2cu,673);
}
B67d5e5:L67d5e5:{c.instructions+=3;NFSU2_TR(0x67d5e5);
__builtin_memmove((R+24),(R+0),4);
}
B67d5e7:{NFSU2_TR(0x67d5e7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d5e9:{NFSU2_TR(0x67d5e9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d5ef:L67d5ef:{c.instructions+=4;NFSU2_TR(0x67d5ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d5f2:{NFSU2_TR(0x67d5f2);
__builtin_memmove((R+4),(R+12),4);
}
B67d5f4:{NFSU2_TR(0x67d5f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d5f7:{NFSU2_TR(0x67d5f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d5fcull));
TAIL_STATIC(0x673b2cu,673);
}
B67d5fc:L67d5fc:{c.instructions+=3;NFSU2_TR(0x67d5fc);
__builtin_memmove((R+24),(R+0),4);
}
B67d5fe:{NFSU2_TR(0x67d5fe);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d600:{NFSU2_TR(0x67d600);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d606:L67d606:{c.instructions+=4;NFSU2_TR(0x67d606);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d609:{NFSU2_TR(0x67d609);
__builtin_memmove((R+4),(R+12),4);
}
B67d60b:{NFSU2_TR(0x67d60b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d60e:{NFSU2_TR(0x67d60e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d613ull));
TAIL_STATIC(0x673b2cu,673);
}
B67d613:L67d613:{c.instructions+=3;NFSU2_TR(0x67d613);
__builtin_memmove((R+24),(R+0),4);
}
B67d615:{NFSU2_TR(0x67d615);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d617:{NFSU2_TR(0x67d617);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d61d:L67d61d:{c.instructions+=12;NFSU2_TR(0x67d61d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67d620:{NFSU2_TR(0x67d620);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d622:{NFSU2_TR(0x67d622);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d625:{NFSU2_TR(0x67d625);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B67d62a:{NFSU2_TR(0x67d62a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d62d:{NFSU2_TR(0x67d62d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67d630:{NFSU2_TR(0x67d630);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d633:{NFSU2_TR(0x67d633);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20500000ull))));
}
B67d638:{NFSU2_TR(0x67d638);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d639:{NFSU2_TR(0x67d639);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d63c:{NFSU2_TR(0x67d63c);
__builtin_memmove((R+4),(R+12),4);
}
B67d63e:{NFSU2_TR(0x67d63e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d643ull));
TAIL_STATIC(0x6758ceu,675);
}
B67d643:L67d643:{c.instructions+=3;NFSU2_TR(0x67d643);
__builtin_memmove((R+24),(R+0),4);
}
B67d645:{NFSU2_TR(0x67d645);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d647:{NFSU2_TR(0x67d647);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d64d:L67d64d:{c.instructions+=11;NFSU2_TR(0x67d64d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67d650:{NFSU2_TR(0x67d650);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d652:{NFSU2_TR(0x67d652);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d653:{NFSU2_TR(0x67d653);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d656:{NFSU2_TR(0x67d656);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10100000ull))));
}
B67d65b:{NFSU2_TR(0x67d65b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d65e:{NFSU2_TR(0x67d65e);
__builtin_memmove((R+4),(R+12),4);
}
B67d660:{NFSU2_TR(0x67d660);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d661:{NFSU2_TR(0x67d661);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d664:{NFSU2_TR(0x67d664);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67d667:{NFSU2_TR(0x67d667);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d66cull));
TAIL_STATIC(0x6758ceu,675);
}
B67d66c:L67d66c:{c.instructions+=3;NFSU2_TR(0x67d66c);
__builtin_memmove((R+24),(R+0),4);
}
B67d66e:{NFSU2_TR(0x67d66e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d670:{NFSU2_TR(0x67d670);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d676:L67d676:{c.instructions+=11;NFSU2_TR(0x67d676);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67d679:{NFSU2_TR(0x67d679);
u8 U[4];
w4(U+0,u32(0x57ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d67b:{NFSU2_TR(0x67d67b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d67e:{NFSU2_TR(0x67d67e);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20300000ull))));
}
B67d683:{NFSU2_TR(0x67d683);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d686:{NFSU2_TR(0x67d686);
__builtin_memmove((R+4),(R+12),4);
}
B67d688:{NFSU2_TR(0x67d688);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d68b:{NFSU2_TR(0x67d68b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67d68e:{NFSU2_TR(0x67d68e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d68f:{NFSU2_TR(0x67d68f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d692:{NFSU2_TR(0x67d692);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d697ull));
TAIL_STATIC(0x6758ceu,675);
}
B67d697:L67d697:{c.instructions+=3;NFSU2_TR(0x67d697);
__builtin_memmove((R+24),(R+0),4);
}
B67d699:{NFSU2_TR(0x67d699);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d69b:{NFSU2_TR(0x67d69b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d6a1:L67d6a1:{c.instructions+=8;NFSU2_TR(0x67d6a1);
u8 U[4];
w4(U+0,u32(0x5aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d6a3:{NFSU2_TR(0x67d6a3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d6a4:{NFSU2_TR(0x67d6a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d6a7:{NFSU2_TR(0x67d6a7);
__builtin_memmove((R+4),(R+12),4);
}
B67d6a9:{NFSU2_TR(0x67d6a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d6ac:{NFSU2_TR(0x67d6ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d6af:{NFSU2_TR(0x67d6af);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d6b2:{NFSU2_TR(0x67d6b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d6b7ull));
TAIL_STATIC(0x6758ceu,675);
}
B67d6b7:L67d6b7:{c.instructions+=3;NFSU2_TR(0x67d6b7);
__builtin_memmove((R+24),(R+0),4);
}
B67d6b9:{NFSU2_TR(0x67d6b9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d6bb:{NFSU2_TR(0x67d6bb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d6c1:L67d6c1:{c.instructions+=8;NFSU2_TR(0x67d6c1);
u8 U[4];
w4(U+0,u32(0x57ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d6c3:{NFSU2_TR(0x67d6c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d6c6:{NFSU2_TR(0x67d6c6);
__builtin_memmove((R+4),(R+12),4);
}
B67d6c8:{NFSU2_TR(0x67d6c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d6cb:{NFSU2_TR(0x67d6cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d6ce:{NFSU2_TR(0x67d6ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d6d1:{NFSU2_TR(0x67d6d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d6d4:{NFSU2_TR(0x67d6d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d6d9ull));
TAIL_STATIC(0x6758ceu,675);
}
B67d6d9:L67d6d9:{c.instructions+=3;NFSU2_TR(0x67d6d9);
__builtin_memmove((R+24),(R+0),4);
}
B67d6db:{NFSU2_TR(0x67d6db);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d6dd:{NFSU2_TR(0x67d6dd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d6e3:L67d6e3:{c.instructions+=3;NFSU2_TR(0x67d6e3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67d6e6:{NFSU2_TR(0x67d6e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67d6e9:{NFSU2_TR(0x67d6e9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x67af18u,67a);}
}
B67d6ef:L67d6ef:{c.instructions+=5;NFSU2_TR(0x67d6ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67d6f2:{NFSU2_TR(0x67d6f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67d6f5:{NFSU2_TR(0x67d6f5);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B67d6f7:{NFSU2_TR(0x67d6f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67d6fa:{NFSU2_TR(0x67d6fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67d6fd:L67d6fd:{c.instructions+=7;NFSU2_TR(0x67d6fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67d700:{NFSU2_TR(0x67d700);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B67d703:{NFSU2_TR(0x67d703);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d704:{NFSU2_TR(0x67d704);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67d707:{NFSU2_TR(0x67d707);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B67d70a:{NFSU2_TR(0x67d70a);
__builtin_memmove((R+4),(R+12),4);
}
B67d70c:{NFSU2_TR(0x67d70c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d711ull));
TAIL_STATIC(0x673e90u,673);
}
B67d711:L67d711:{c.instructions+=3;NFSU2_TR(0x67d711);
__builtin_memmove((R+24),(R+0),4);
}
B67d713:{NFSU2_TR(0x67d713);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d715:{NFSU2_TR(0x67d715);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d71b:L67d71b:{c.instructions+=5;NFSU2_TR(0x67d71b);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67d71e:{NFSU2_TR(0x67d71e);
{u32 ea_=u32(r4(R+12)+u32(168u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B67d724:{NFSU2_TR(0x67d724);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B67d726:{NFSU2_TR(0x67d726);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B67d729:{NFSU2_TR(0x67d729);
if(r1(R+518)){{goto L67d75d;}}
}
B67d72b:L67d72b:{c.instructions+=6;NFSU2_TR(0x67d72b);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67d72e:{NFSU2_TR(0x67d72e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B67d734:{NFSU2_TR(0x67d734);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B67d736:{NFSU2_TR(0x67d736);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B67d738:{NFSU2_TR(0x67d738);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B67d73b:{NFSU2_TR(0x67d73b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L67d75d;}}
}
B67d73d:L67d73d:{c.instructions+=6;NFSU2_TR(0x67d73d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67d73f:{NFSU2_TR(0x67d73f);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67d742:{NFSU2_TR(0x67d742);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B67d744:{NFSU2_TR(0x67d744);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B67d746:{NFSU2_TR(0x67d746);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B67d749:{NFSU2_TR(0x67d749);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L67d75d;}}
}
B67d74b:L67d74b:{c.instructions+=6;NFSU2_TR(0x67d74b);
{u32 ea_=u32(r4(R+12)+u32(168u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67d751:{NFSU2_TR(0x67d751);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67d754:{NFSU2_TR(0x67d754);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B67d756:{NFSU2_TR(0x67d756);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B67d758:{NFSU2_TR(0x67d758);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B67d75b:{NFSU2_TR(0x67d75b);
if(r1(R+514)){{goto L67d765;}}
}
B67d75d:L67d75d:{c.instructions+=3;NFSU2_TR(0x67d75d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67d760:{NFSU2_TR(0x67d760);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67d763:{NFSU2_TR(0x67d763);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B67d765:L67d765:{c.instructions+=5;NFSU2_TR(0x67d765);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67d768:{NFSU2_TR(0x67d768);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67d76b:{NFSU2_TR(0x67d76b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67d76f:{NFSU2_TR(0x67d76f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B67d772:{NFSU2_TR(0x67d772);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67d6fdu);}goto L67d6fd;}}
}
B67d774:L67d774:{c.instructions+=1;NFSU2_TR(0x67d774);
TAIL_STATIC(0x67af18u,67a);
}
B67d779:L67d779:{c.instructions+=3;NFSU2_TR(0x67d779);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B67d77b:{NFSU2_TR(0x67d77b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67d77e:{NFSU2_TR(0x67d77e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x67af18u,67a);}
}
B67d784:L67d784:{c.instructions+=5;NFSU2_TR(0x67d784);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67d787:{NFSU2_TR(0x67d787);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B67d78a:{NFSU2_TR(0x67d78a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B67d78b:{NFSU2_TR(0x67d78b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B67d78e:{NFSU2_TR(0x67d78e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67d784u);}goto L67d784;}}
}
B67d790:L67d790:{c.instructions+=1;NFSU2_TR(0x67d790);
TAIL_STATIC(0x67af18u,67a);
}
B67d795:L67d795:{c.instructions+=3;NFSU2_TR(0x67d795);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67d797:{NFSU2_TR(0x67d797);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67d79a:{NFSU2_TR(0x67d79a);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67d7a0:L67d7a0:{c.instructions+=2;NFSU2_TR(0x67d7a0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67d7a3:{NFSU2_TR(0x67d7a3);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67d7a9:L67d7a9:{c.instructions+=3;NFSU2_TR(0x67d7a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d7ac:{NFSU2_TR(0x67d7ac);
__builtin_memmove((R+4),(R+12),4);
}
B67d7ae:{NFSU2_TR(0x67d7ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d7b3ull));
TAIL_STATIC(0x673a0fu,673);
}
B67d7b3:L67d7b3:{c.instructions+=3;NFSU2_TR(0x67d7b3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67d7b5:{NFSU2_TR(0x67d7b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67d7b8:{NFSU2_TR(0x67d7b8);
if(r1(R+518)){TAIL_STATIC(0x67fc7cu,67f);}
}
B67d7be:L67d7be:{c.instructions+=4;NFSU2_TR(0x67d7be);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d7c1:{NFSU2_TR(0x67d7c1);
__builtin_memmove((R+4),(R+12),4);
}
B67d7c3:{NFSU2_TR(0x67d7c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d7c4:{NFSU2_TR(0x67d7c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d7c9ull));
TAIL_STATIC(0x673b2cu,673);
}
B67d7c9:L67d7c9:{c.instructions+=3;NFSU2_TR(0x67d7c9);
__builtin_memmove((R+24),(R+0),4);
}
B67d7cb:{NFSU2_TR(0x67d7cb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d7cd:{NFSU2_TR(0x67d7cd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d7d3:L67d7d3:{c.instructions+=4;NFSU2_TR(0x67d7d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d7d6:{NFSU2_TR(0x67d7d6);
__builtin_memmove((R+4),(R+12),4);
}
B67d7d8:{NFSU2_TR(0x67d7d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d7db:{NFSU2_TR(0x67d7db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d7e0ull));
TAIL_STATIC(0x673b2cu,673);
}
B67d7e0:L67d7e0:{c.instructions+=3;NFSU2_TR(0x67d7e0);
__builtin_memmove((R+24),(R+0),4);
}
B67d7e2:{NFSU2_TR(0x67d7e2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d7e4:{NFSU2_TR(0x67d7e4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d7ea:L67d7ea:{c.instructions+=12;NFSU2_TR(0x67d7ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67d7ed:{NFSU2_TR(0x67d7ed);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d7ef:{NFSU2_TR(0x67d7ef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d7f0:{NFSU2_TR(0x67d7f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d7f3:{NFSU2_TR(0x67d7f3);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B67d7f8:{NFSU2_TR(0x67d7f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d7fb:{NFSU2_TR(0x67d7fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67d7fe:{NFSU2_TR(0x67d7fe);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10500000ull))));
}
B67d803:{NFSU2_TR(0x67d803);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d804:{NFSU2_TR(0x67d804);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d807:{NFSU2_TR(0x67d807);
__builtin_memmove((R+4),(R+12),4);
}
B67d809:{NFSU2_TR(0x67d809);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d80eull));
TAIL_STATIC(0x6758ceu,675);
}
B67d80e:L67d80e:{c.instructions+=3;NFSU2_TR(0x67d80e);
__builtin_memmove((R+24),(R+0),4);
}
B67d810:{NFSU2_TR(0x67d810);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d812:{NFSU2_TR(0x67d812);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d818:L67d818:{c.instructions+=3;NFSU2_TR(0x67d818);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d819:{NFSU2_TR(0x67d819);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d81c:{NFSU2_TR(0x67d81c);
TAIL_STATIC(0x67cf35u,67c);
}
B67d821:L67d821:{c.instructions+=3;NFSU2_TR(0x67d821);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67d823:{NFSU2_TR(0x67d823);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67d826:{NFSU2_TR(0x67d826);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67d82c:L67d82c:{c.instructions+=2;NFSU2_TR(0x67d82c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67d82f:{NFSU2_TR(0x67d82f);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67d835:L67d835:{c.instructions+=6;NFSU2_TR(0x67d835);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67d83b:{NFSU2_TR(0x67d83b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B67d83e:{NFSU2_TR(0x67d83e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d840:{NFSU2_TR(0x67d840);
__builtin_memmove((R+4),(R+12),4);
}
B67d842:{NFSU2_TR(0x67d842);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d843:{NFSU2_TR(0x67d843);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d848ull));
TAIL_STATIC(0x673b2cu,673);
}
B67d848:L67d848:{c.instructions+=3;NFSU2_TR(0x67d848);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67d84b:{NFSU2_TR(0x67d84b);
__builtin_memmove((R+24),(R+0),4);
}
B67d84d:{NFSU2_TR(0x67d84d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67d8a4;}}
}
B67d84f:L67d84f:{c.instructions+=2;NFSU2_TR(0x67d84f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d851:{NFSU2_TR(0x67d851);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d857:L67d857:{c.instructions+=4;NFSU2_TR(0x67d857);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d858:{NFSU2_TR(0x67d858);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d85b:{NFSU2_TR(0x67d85b);
__builtin_memmove((R+4),(R+12),4);
}
B67d85d:{NFSU2_TR(0x67d85d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d862ull));
TAIL_STATIC(0x673b2cu,673);
}
B67d862:L67d862:{c.instructions+=3;NFSU2_TR(0x67d862);
__builtin_memmove((R+24),(R+0),4);
}
B67d864:{NFSU2_TR(0x67d864);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d866:{NFSU2_TR(0x67d866);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d86c:L67d86c:{c.instructions+=9;NFSU2_TR(0x67d86c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d86d:{NFSU2_TR(0x67d86d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d86e:{NFSU2_TR(0x67d86e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d871:{NFSU2_TR(0x67d871);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B67d874:{NFSU2_TR(0x67d874);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d875:{NFSU2_TR(0x67d875);
u8 U[4];
w4(U+0,u32(0x10100001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d87a:{NFSU2_TR(0x67d87a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d87d:{NFSU2_TR(0x67d87d);
__builtin_memmove((R+4),(R+12),4);
}
B67d87f:{NFSU2_TR(0x67d87f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d884ull));
TAIL_STATIC(0x6758ceu,675);
}
B67d884:L67d884:{c.instructions+=3;NFSU2_TR(0x67d884);
__builtin_memmove((R+24),(R+0),4);
}
B67d886:{NFSU2_TR(0x67d886);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d888:{NFSU2_TR(0x67d888);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d88e:L67d88e:{c.instructions+=7;NFSU2_TR(0x67d88e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d890:{NFSU2_TR(0x67d890);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B67d893:{NFSU2_TR(0x67d893);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d894:{NFSU2_TR(0x67d894);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d897:{NFSU2_TR(0x67d897);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d89a:{NFSU2_TR(0x67d89a);
u8 U[4];
w4(U+0,u32(0x20100001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d89f:{NFSU2_TR(0x67d89f);
TAIL_STATIC(0x67af04u,67a);
}
B67d8a4:L67d8a4:{c.instructions+=2;NFSU2_TR(0x67d8a4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d8a6:{NFSU2_TR(0x67d8a6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d8ac:L67d8ac:{c.instructions+=5;NFSU2_TR(0x67d8ac);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d8ae:{NFSU2_TR(0x67d8ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67d8b1:{NFSU2_TR(0x67d8b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d8b2:{NFSU2_TR(0x67d8b2);
__builtin_memmove((R+4),(R+12),4);
}
B67d8b4:{NFSU2_TR(0x67d8b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d8b9ull));
TAIL_STATIC(0x673b2cu,673);
}
B67d8b9:L67d8b9:{c.instructions+=3;NFSU2_TR(0x67d8b9);
__builtin_memmove((R+24),(R+0),4);
}
B67d8bb:{NFSU2_TR(0x67d8bb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d8bd:{NFSU2_TR(0x67d8bd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d8c3:L67d8c3:{c.instructions+=4;NFSU2_TR(0x67d8c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d8c6:{NFSU2_TR(0x67d8c6);
__builtin_memmove((R+4),(R+12),4);
}
B67d8c8:{NFSU2_TR(0x67d8c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d8cb:{NFSU2_TR(0x67d8cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d8d0ull));
TAIL_STATIC(0x673b2cu,673);
}
B67d8d0:L67d8d0:{c.instructions+=3;NFSU2_TR(0x67d8d0);
__builtin_memmove((R+24),(R+0),4);
}
B67d8d2:{NFSU2_TR(0x67d8d2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d8d4:{NFSU2_TR(0x67d8d4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d8da:L67d8da:{c.instructions+=9;NFSU2_TR(0x67d8da);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d8dc:{NFSU2_TR(0x67d8dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d8df:{NFSU2_TR(0x67d8df);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B67d8e2:{NFSU2_TR(0x67d8e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d8e5:{NFSU2_TR(0x67d8e5);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffull))));
}
B67d8eb:{NFSU2_TR(0x67d8eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d8ec:{NFSU2_TR(0x67d8ec);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x50000000ull))));
}
B67d8f2:{NFSU2_TR(0x67d8f2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d8f3:{NFSU2_TR(0x67d8f3);
TAIL_STATIC(0x67c4fbu,67c);
}
B67d8f8:L67d8f8:{c.instructions+=3;NFSU2_TR(0x67d8f8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67d8fa:{NFSU2_TR(0x67d8fa);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67d8fd:{NFSU2_TR(0x67d8fd);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67d903:L67d903:{c.instructions+=2;NFSU2_TR(0x67d903);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67d906:{NFSU2_TR(0x67d906);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67d90c:L67d90c:{c.instructions+=2;NFSU2_TR(0x67d90c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67d90f:{NFSU2_TR(0x67d90f);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67d915:L67d915:{c.instructions+=2;NFSU2_TR(0x67d915);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67d918:{NFSU2_TR(0x67d918);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67d91e:L67d91e:{c.instructions+=8;NFSU2_TR(0x67d91e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d921:{NFSU2_TR(0x67d921);
__builtin_memmove((R+4),(R+12),4);
}
B67d923:{NFSU2_TR(0x67d923);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d926:{NFSU2_TR(0x67d926);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d929:{NFSU2_TR(0x67d929);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d92c:{NFSU2_TR(0x67d92c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d92f:{NFSU2_TR(0x67d92f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d932:{NFSU2_TR(0x67d932);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d937ull));
TAIL_STATIC(0x6779e0u,677);
}
B67d937:L67d937:{c.instructions+=1;NFSU2_TR(0x67d937);
TAIL_STATIC(0x67af0eu,67a);
}
B67d93c:L67d93c:{c.instructions+=3;NFSU2_TR(0x67d93c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67d93e:{NFSU2_TR(0x67d93e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67d941:{NFSU2_TR(0x67d941);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67d947:L67d947:{c.instructions+=2;NFSU2_TR(0x67d947);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67d94a:{NFSU2_TR(0x67d94a);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67d950:L67d950:{c.instructions+=2;NFSU2_TR(0x67d950);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67d953:{NFSU2_TR(0x67d953);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67d959:L67d959:{c.instructions+=2;NFSU2_TR(0x67d959);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67d95d:{NFSU2_TR(0x67d95d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6808fdu,680);}
}
B67d963:L67d963:{c.instructions+=2;NFSU2_TR(0x67d963);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67d966:{NFSU2_TR(0x67d966);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67d96c:L67d96c:{c.instructions+=3;NFSU2_TR(0x67d96c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67d96f:{NFSU2_TR(0x67d96f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B67d973:{NFSU2_TR(0x67d973);
if(r1(R+518)){{goto L67d9bb;}}
}
B67d975:L67d975:{c.instructions+=15;NFSU2_TR(0x67d975);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67d978:{NFSU2_TR(0x67d978);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B67d97a:{NFSU2_TR(0x67d97a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67d97d:{NFSU2_TR(0x67d97d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67d980:{NFSU2_TR(0x67d980);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B67d982:{NFSU2_TR(0x67d982);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67d985:{NFSU2_TR(0x67d985);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67d988:{NFSU2_TR(0x67d988);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B67d98a:{NFSU2_TR(0x67d98a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67d98d:{NFSU2_TR(0x67d98d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B67d98f:{NFSU2_TR(0x67d98f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d991:{NFSU2_TR(0x67d991);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d994:{NFSU2_TR(0x67d994);
__builtin_memmove((R+4),(R+12),4);
}
B67d996:{NFSU2_TR(0x67d996);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67d999:{NFSU2_TR(0x67d999);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d99eull));
TAIL_STATIC(0x673b2cu,673);
}
B67d99e:L67d99e:{c.instructions+=3;NFSU2_TR(0x67d99e);
__builtin_memmove((R+24),(R+0),4);
}
B67d9a0:{NFSU2_TR(0x67d9a0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d9a2:{NFSU2_TR(0x67d9a2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d9a8:L67d9a8:{c.instructions+=7;NFSU2_TR(0x67d9a8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d9a9:{NFSU2_TR(0x67d9a9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d9aa:{NFSU2_TR(0x67d9aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B67d9ad:{NFSU2_TR(0x67d9ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d9ae:{NFSU2_TR(0x67d9ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d9b1:{NFSU2_TR(0x67d9b1);
u8 U[4];
w4(U+0,u32(0x50100004ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d9b6:{NFSU2_TR(0x67d9b6);
TAIL_STATIC(0x67af04u,67a);
}
B67d9bb:L67d9bb:{c.instructions+=3;NFSU2_TR(0x67d9bb);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d9bd:{NFSU2_TR(0x67d9bd);
__builtin_memmove((R+4),(R+12),4);
}
B67d9bf:{NFSU2_TR(0x67d9bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d9c4ull));
TAIL_STATIC(0x673a0fu,673);
}
B67d9c4:L67d9c4:{c.instructions+=2;NFSU2_TR(0x67d9c4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67d9c6:{NFSU2_TR(0x67d9c6);
if(r1(R+518)){TAIL_STATIC(0x67fc7cu,67f);}
}
B67d9cc:L67d9cc:{c.instructions+=4;NFSU2_TR(0x67d9cc);
__builtin_memmove((R+8),(R+0),4);
}
B67d9ce:{NFSU2_TR(0x67d9ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B67d9d1:{NFSU2_TR(0x67d9d1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B67d9d3:{NFSU2_TR(0x67d9d3);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B67d9d5:L67d9d5:{c.instructions+=6;NFSU2_TR(0x67d9d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B67d9d8:{NFSU2_TR(0x67d9d8);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffd4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B67d9dc:{NFSU2_TR(0x67d9dc);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffd4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B67d9e0:{NFSU2_TR(0x67d9e0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B67d9e1:{NFSU2_TR(0x67d9e1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x6ull))));
}
B67d9e4:{NFSU2_TR(0x67d9e4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67d9d5u);}goto L67d9d5;}}
}
B67d9e6:L67d9e6:{c.instructions+=4;NFSU2_TR(0x67d9e6);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d9e8:{NFSU2_TR(0x67d9e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d9e9:{NFSU2_TR(0x67d9e9);
__builtin_memmove((R+4),(R+12),4);
}
B67d9eb:{NFSU2_TR(0x67d9eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67d9f0ull));
TAIL_STATIC(0x673b2cu,673);
}
B67d9f0:L67d9f0:{c.instructions+=3;NFSU2_TR(0x67d9f0);
__builtin_memmove((R+24),(R+0),4);
}
B67d9f2:{NFSU2_TR(0x67d9f2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67d9f4:{NFSU2_TR(0x67d9f4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67d9fa:L67d9fa:{c.instructions+=4;NFSU2_TR(0x67d9fa);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67d9fc:{NFSU2_TR(0x67d9fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67d9ff:{NFSU2_TR(0x67d9ff);
__builtin_memmove((R+4),(R+12),4);
}
B67da01:{NFSU2_TR(0x67da01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67da06ull));
TAIL_STATIC(0x673b2cu,673);
}
B67da06:L67da06:{c.instructions+=3;NFSU2_TR(0x67da06);
__builtin_memmove((R+24),(R+0),4);
}
B67da08:{NFSU2_TR(0x67da08);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67da0a:{NFSU2_TR(0x67da0a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67da10:L67da10:{c.instructions+=8;NFSU2_TR(0x67da10);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67da11:{NFSU2_TR(0x67da11);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67da12:{NFSU2_TR(0x67da12);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67da15:{NFSU2_TR(0x67da15);
__builtin_memmove((R+4),(R+12),4);
}
B67da17:{NFSU2_TR(0x67da17);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67da1a:{NFSU2_TR(0x67da1a);
u8 U[4];
w4(U+0,u32(0x10100001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67da1f:{NFSU2_TR(0x67da1f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67da22:{NFSU2_TR(0x67da22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67da27ull));
TAIL_STATIC(0x6758ceu,675);
}
B67da27:L67da27:{c.instructions+=3;NFSU2_TR(0x67da27);
__builtin_memmove((R+24),(R+0),4);
}
B67da29:{NFSU2_TR(0x67da29);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67da2b:{NFSU2_TR(0x67da2b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67da31:L67da31:{c.instructions+=8;NFSU2_TR(0x67da31);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67da33:{NFSU2_TR(0x67da33);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67da36:{NFSU2_TR(0x67da36);
__builtin_memmove((R+4),(R+12),4);
}
B67da38:{NFSU2_TR(0x67da38);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67da3b:{NFSU2_TR(0x67da3b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67da3e:{NFSU2_TR(0x67da3e);
u8 U[4];
w4(U+0,u32(0x20200001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67da43:{NFSU2_TR(0x67da43);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67da46:{NFSU2_TR(0x67da46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67da4bull));
TAIL_STATIC(0x6758ceu,675);
}
B67da4b:L67da4b:{c.instructions+=3;NFSU2_TR(0x67da4b);
__builtin_memmove((R+24),(R+0),4);
}
B67da4d:{NFSU2_TR(0x67da4d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67da4f:{NFSU2_TR(0x67da4f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67da55:L67da55:{c.instructions+=10;NFSU2_TR(0x67da55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67da58:{NFSU2_TR(0x67da58);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67da59:{NFSU2_TR(0x67da59);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67da5c:{NFSU2_TR(0x67da5c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B67da5f:{NFSU2_TR(0x67da5f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67da62:{NFSU2_TR(0x67da62);
__builtin_memmove((R+4),(R+12),4);
}
B67da64:{NFSU2_TR(0x67da64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67da65:{NFSU2_TR(0x67da65);
u8 U[4];
w4(U+0,u32(0x20500001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67da6a:{NFSU2_TR(0x67da6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67da6d:{NFSU2_TR(0x67da6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67da72ull));
TAIL_STATIC(0x6758ceu,675);
}
B67da72:L67da72:{c.instructions+=3;NFSU2_TR(0x67da72);
__builtin_memmove((R+24),(R+0),4);
}
B67da74:{NFSU2_TR(0x67da74);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67da76:{NFSU2_TR(0x67da76);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67da7c:L67da7c:{c.instructions+=8;NFSU2_TR(0x67da7c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67da7d:{NFSU2_TR(0x67da7d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67da7e:{NFSU2_TR(0x67da7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67da81:{NFSU2_TR(0x67da81);
__builtin_memmove((R+4),(R+12),4);
}
B67da83:{NFSU2_TR(0x67da83);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67da86:{NFSU2_TR(0x67da86);
u8 U[4];
w4(U+0,u32(0x10100001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67da8b:{NFSU2_TR(0x67da8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67da8e:{NFSU2_TR(0x67da8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67da93ull));
TAIL_STATIC(0x6758ceu,675);
}
B67da93:L67da93:{c.instructions+=3;NFSU2_TR(0x67da93);
__builtin_memmove((R+24),(R+0),4);
}
B67da95:{NFSU2_TR(0x67da95);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67da97:{NFSU2_TR(0x67da97);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67da9d:L67da9d:{c.instructions+=8;NFSU2_TR(0x67da9d);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67da9f:{NFSU2_TR(0x67da9f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67daa2:{NFSU2_TR(0x67daa2);
__builtin_memmove((R+4),(R+12),4);
}
B67daa4:{NFSU2_TR(0x67daa4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67daa7:{NFSU2_TR(0x67daa7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67daaa:{NFSU2_TR(0x67daaa);
u8 U[4];
w4(U+0,u32(0x20200001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67daaf:{NFSU2_TR(0x67daaf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67dab2:{NFSU2_TR(0x67dab2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67dab7ull));
TAIL_STATIC(0x6758ceu,675);
}
B67dab7:L67dab7:{c.instructions+=3;NFSU2_TR(0x67dab7);
__builtin_memmove((R+24),(R+0),4);
}
B67dab9:{NFSU2_TR(0x67dab9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67dabb:{NFSU2_TR(0x67dabb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67dac1:L67dac1:{c.instructions+=8;NFSU2_TR(0x67dac1);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67dac3:{NFSU2_TR(0x67dac3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67dac6:{NFSU2_TR(0x67dac6);
__builtin_memmove((R+4),(R+12),4);
}
B67dac8:{NFSU2_TR(0x67dac8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67dacb:{NFSU2_TR(0x67dacb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67dace:{NFSU2_TR(0x67dace);
u8 U[4];
w4(U+0,u32(0x20500001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67dad3:{NFSU2_TR(0x67dad3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67dad6:{NFSU2_TR(0x67dad6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67dadbull));
TAIL_STATIC(0x6758ceu,675);
}
B67dadb:L67dadb:{c.instructions+=3;NFSU2_TR(0x67dadb);
__builtin_memmove((R+24),(R+0),4);
}
B67dadd:{NFSU2_TR(0x67dadd);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67dadf:{NFSU2_TR(0x67dadf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67dae5:L67dae5:{c.instructions+=7;NFSU2_TR(0x67dae5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67dae7:{NFSU2_TR(0x67dae7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67daea:{NFSU2_TR(0x67daea);
__builtin_memmove((R+4),(R+12),4);
}
B67daec:{NFSU2_TR(0x67daec);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67daef:{NFSU2_TR(0x67daef);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67daf2:{NFSU2_TR(0x67daf2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67daf5:{NFSU2_TR(0x67daf5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67dafaull));
TAIL_STATIC(0x677d89u,677);
}
B67dafa:L67dafa:{c.instructions+=3;NFSU2_TR(0x67dafa);
__builtin_memmove((R+24),(R+0),4);
}
B67dafc:{NFSU2_TR(0x67dafc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67dafe:{NFSU2_TR(0x67dafe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67db04:L67db04:{c.instructions+=10;NFSU2_TR(0x67db04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67db07:{NFSU2_TR(0x67db07);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67db09:{NFSU2_TR(0x67db09);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67db0c:{NFSU2_TR(0x67db0c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B67db0f:{NFSU2_TR(0x67db0f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67db12:{NFSU2_TR(0x67db12);
__builtin_memmove((R+4),(R+12),4);
}
B67db14:{NFSU2_TR(0x67db14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67db15:{NFSU2_TR(0x67db15);
u8 U[4];
w4(U+0,u32(0x20500001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67db1a:{NFSU2_TR(0x67db1a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67db1d:{NFSU2_TR(0x67db1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67db22ull));
TAIL_STATIC(0x6758ceu,675);
}
B67db22:L67db22:{c.instructions+=3;NFSU2_TR(0x67db22);
__builtin_memmove((R+24),(R+0),4);
}
B67db24:{NFSU2_TR(0x67db24);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67db26:{NFSU2_TR(0x67db26);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67db2c:L67db2c:{c.instructions+=9;NFSU2_TR(0x67db2c);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67db2e:{NFSU2_TR(0x67db2e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67db2f:{NFSU2_TR(0x67db2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67db32:{NFSU2_TR(0x67db32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67db33:{NFSU2_TR(0x67db33);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67db36:{NFSU2_TR(0x67db36);
__builtin_memmove((R+4),(R+12),4);
}
B67db38:{NFSU2_TR(0x67db38);
u8 U[4];
w4(U+0,u32(0x10000001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67db3d:{NFSU2_TR(0x67db3d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67db40:{NFSU2_TR(0x67db40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67db45ull));
TAIL_STATIC(0x6758ceu,675);
}
B67db45:L67db45:{c.instructions+=3;NFSU2_TR(0x67db45);
__builtin_memmove((R+24),(R+0),4);
}
B67db47:{NFSU2_TR(0x67db47);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67db49:{NFSU2_TR(0x67db49);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67db4f:L67db4f:{c.instructions+=9;NFSU2_TR(0x67db4f);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67db51:{NFSU2_TR(0x67db51);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67db52:{NFSU2_TR(0x67db52);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67db55:{NFSU2_TR(0x67db55);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67db56:{NFSU2_TR(0x67db56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67db59:{NFSU2_TR(0x67db59);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B67db5c:{NFSU2_TR(0x67db5c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67db5d:{NFSU2_TR(0x67db5d);
u8 U[4];
w4(U+0,u32(0x10000001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67db62:{NFSU2_TR(0x67db62);
TAIL_STATIC(0x67af04u,67a);
}
B67db67:L67db67:{c.instructions+=3;NFSU2_TR(0x67db67);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67db69:{NFSU2_TR(0x67db69);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67db6c:{NFSU2_TR(0x67db6c);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67db72:L67db72:{c.instructions+=2;NFSU2_TR(0x67db72);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67db75:{NFSU2_TR(0x67db75);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67db7b:L67db7b:{c.instructions+=12;NFSU2_TR(0x67db7b);
{u32 ea_=u32(u32(7895760u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67db81:{NFSU2_TR(0x67db81);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67db84:{NFSU2_TR(0x67db84);
__asm__ volatile(".byte 0xd9,0xed":::"memory");
}
B67db86:{NFSU2_TR(0x67db86);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67db87:{NFSU2_TR(0x67db87);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B67db89:{NFSU2_TR(0x67db89);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67db8a:{NFSU2_TR(0x67db8a);
__asm__ volatile(".byte 0xd9,0xf1":::"memory");
}
B67db8c:{NFSU2_TR(0x67db8c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67db8f:{NFSU2_TR(0x67db8f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67db90:{NFSU2_TR(0x67db90);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67db91:{NFSU2_TR(0x67db91);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67db94:{NFSU2_TR(0x67db94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67db99ull));
TAIL_STATIC(0x699c39u,699);
}
B67db99:L67db99:{c.instructions+=6;NFSU2_TR(0x67db99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67db9c:{NFSU2_TR(0x67db9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67db9f:{NFSU2_TR(0x67db9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B67dba2:{NFSU2_TR(0x67dba2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67dba3:{NFSU2_TR(0x67dba3);
__builtin_memmove((R+4),(R+12),4);
}
B67dba5:{NFSU2_TR(0x67dba5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67dbaaull));
TAIL_STATIC(0x673a0fu,673);
}
B67dbaa:L67dbaa:{c.instructions+=2;NFSU2_TR(0x67dbaa);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67dbac:{NFSU2_TR(0x67dbac);
if(r1(R+518)){TAIL_STATIC(0x67fc7cu,67f);}
}
B67dbb2:L67dbb2:{c.instructions+=3;NFSU2_TR(0x67dbb2);
__builtin_memmove((R+8),(R+24),4);
}
B67dbb4:{NFSU2_TR(0x67dbb4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B67dbb6:{NFSU2_TR(0x67dbb6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B67dbb9:L67dbb9:{c.instructions+=5;NFSU2_TR(0x67dbb9);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B67dbbd:{NFSU2_TR(0x67dbbd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B67dbbe:{NFSU2_TR(0x67dbbe);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B67dbc0:{NFSU2_TR(0x67dbc0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x2ull))));
}
B67dbc3:{NFSU2_TR(0x67dbc3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67dbb9u);}goto L67dbb9;}}
}
B67dbc5:L67dbc5:{c.instructions+=2;NFSU2_TR(0x67dbc5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67dbc7:{NFSU2_TR(0x67dbc7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67dbd6;}}
}
B67dbc9:L67dbc9:{c.instructions+=3;NFSU2_TR(0x67dbc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67dbcc:{NFSU2_TR(0x67dbcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67dbcf:{NFSU2_TR(0x67dbcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B67dbd2:L67dbd2:{c.instructions+=1;NFSU2_TR(0x67dbd2);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L67dbd4;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67dbd2u);}goto L67dbd2;}
}
B67dbd4:L67dbd4:{c.instructions+=1;NFSU2_TR(0x67dbd4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67dbd6:L67dbd6:{c.instructions+=4;NFSU2_TR(0x67dbd6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67dbd9:{NFSU2_TR(0x67dbd9);
__builtin_memmove((R+4),(R+12),4);
}
B67dbdb:{NFSU2_TR(0x67dbdb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67dbde:{NFSU2_TR(0x67dbde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67dbe3ull));
TAIL_STATIC(0x673b2cu,673);
}
B67dbe3:L67dbe3:{c.instructions+=3;NFSU2_TR(0x67dbe3);
__builtin_memmove((R+24),(R+0),4);
}
B67dbe5:{NFSU2_TR(0x67dbe5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67dbe7:{NFSU2_TR(0x67dbe7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67dbed:L67dbed:{c.instructions+=4;NFSU2_TR(0x67dbed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67dbf0:{NFSU2_TR(0x67dbf0);
__builtin_memmove((R+4),(R+12),4);
}
B67dbf2:{NFSU2_TR(0x67dbf2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67dbf5:{NFSU2_TR(0x67dbf5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67dbfaull));
TAIL_STATIC(0x673b2cu,673);
}
B67dbfa:L67dbfa:{c.instructions+=3;NFSU2_TR(0x67dbfa);
__builtin_memmove((R+24),(R+0),4);
}
B67dbfc:{NFSU2_TR(0x67dbfc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67dbfe:{NFSU2_TR(0x67dbfe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67dc04:L67dc04:{c.instructions+=12;NFSU2_TR(0x67dc04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67dc07:{NFSU2_TR(0x67dc07);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67dc08:{NFSU2_TR(0x67dc08);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67dc09:{NFSU2_TR(0x67dc09);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67dc0c:{NFSU2_TR(0x67dc0c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B67dc11:{NFSU2_TR(0x67dc11);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67dc14:{NFSU2_TR(0x67dc14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67dc17:{NFSU2_TR(0x67dc17);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10600000ull))));
}
B67dc1c:{NFSU2_TR(0x67dc1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67dc1d:{NFSU2_TR(0x67dc1d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67dc20:{NFSU2_TR(0x67dc20);
__builtin_memmove((R+4),(R+12),4);
}
B67dc22:{NFSU2_TR(0x67dc22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67dc27ull));
TAIL_STATIC(0x6758ceu,675);
}
B67dc27:L67dc27:{c.instructions+=3;NFSU2_TR(0x67dc27);
__builtin_memmove((R+24),(R+0),4);
}
B67dc29:{NFSU2_TR(0x67dc29);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67dc2b:{NFSU2_TR(0x67dc2b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67dc31:L67dc31:{c.instructions+=4;NFSU2_TR(0x67dc31);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67dc32:{NFSU2_TR(0x67dc32);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67dc35:{NFSU2_TR(0x67dc35);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67dc38:{NFSU2_TR(0x67dc38);
TAIL_STATIC(0x67fc22u,67f);
}
B67dc3d:L67dc3d:{c.instructions+=3;NFSU2_TR(0x67dc3d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67dc3f:{NFSU2_TR(0x67dc3f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67dc42:{NFSU2_TR(0x67dc42);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67dc48:L67dc48:{c.instructions+=2;NFSU2_TR(0x67dc48);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67dc4b:{NFSU2_TR(0x67dc4b);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67dc51:L67dc51:{c.instructions+=17;NFSU2_TR(0x67dc51);
{u32 ea_=u32(u32(7895760u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67dc57:{NFSU2_TR(0x67dc57);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67dc5a:{NFSU2_TR(0x67dc5a);
__asm__ volatile(".byte 0xd9,0xed":::"memory");
}
B67dc5c:{NFSU2_TR(0x67dc5c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67dc5d:{NFSU2_TR(0x67dc5d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B67dc5f:{NFSU2_TR(0x67dc5f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67dc60:{NFSU2_TR(0x67dc60);
__asm__ volatile(".byte 0xd9,0xf1":::"memory");
}
B67dc62:{NFSU2_TR(0x67dc62);
{u32 ea_=u32(u32(7892560u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67dc68:{NFSU2_TR(0x67dc68);
__asm__ volatile(".byte 0xd9,0xed":::"memory");
}
B67dc6a:{NFSU2_TR(0x67dc6a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B67dc6c:{NFSU2_TR(0x67dc6c);
__asm__ volatile(".byte 0xd9,0xf1":::"memory");
}
B67dc6e:{NFSU2_TR(0x67dc6e);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B67dc70:{NFSU2_TR(0x67dc70);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67dc73:{NFSU2_TR(0x67dc73);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67dc74:{NFSU2_TR(0x67dc74);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67dc75:{NFSU2_TR(0x67dc75);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67dc78:{NFSU2_TR(0x67dc78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67dc7dull));
TAIL_STATIC(0x699c39u,699);
}
B67dc7d:L67dc7d:{c.instructions+=6;NFSU2_TR(0x67dc7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67dc80:{NFSU2_TR(0x67dc80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67dc83:{NFSU2_TR(0x67dc83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B67dc86:{NFSU2_TR(0x67dc86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67dc87:{NFSU2_TR(0x67dc87);
__builtin_memmove((R+4),(R+12),4);
}
B67dc89:{NFSU2_TR(0x67dc89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67dc8eull));
TAIL_STATIC(0x673a0fu,673);
}
B67dc8e:L67dc8e:{c.instructions+=2;NFSU2_TR(0x67dc8e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67dc90:{NFSU2_TR(0x67dc90);
if(r1(R+518)){TAIL_STATIC(0x67fc7cu,67f);}
}
B67dc96:L67dc96:{c.instructions+=3;NFSU2_TR(0x67dc96);
__builtin_memmove((R+8),(R+24),4);
}
B67dc98:{NFSU2_TR(0x67dc98);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B67dc9a:{NFSU2_TR(0x67dc9a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B67dc9d:L67dc9d:{c.instructions+=5;NFSU2_TR(0x67dc9d);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B67dca1:{NFSU2_TR(0x67dca1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B67dca2:{NFSU2_TR(0x67dca2);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B67dca4:{NFSU2_TR(0x67dca4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x2ull))));
}
B67dca7:{NFSU2_TR(0x67dca7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67dc9du);}goto L67dc9d;}}
}
B67dca9:L67dca9:{c.instructions+=1;NFSU2_TR(0x67dca9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67dbc5u);}goto L67dbc5;}
}
B67dcae:L67dcae:{c.instructions+=3;NFSU2_TR(0x67dcae);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67dcb0:{NFSU2_TR(0x67dcb0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67dcb3:{NFSU2_TR(0x67dcb3);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67dcb9:L67dcb9:{c.instructions+=2;NFSU2_TR(0x67dcb9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67dcbc:{NFSU2_TR(0x67dcbc);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67dcc2:L67dcc2:{c.instructions+=5;NFSU2_TR(0x67dcc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67dcc5:{NFSU2_TR(0x67dcc5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67dcc6:{NFSU2_TR(0x67dcc6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67dcc9:{NFSU2_TR(0x67dcc9);
__builtin_memmove((R+4),(R+12),4);
}
B67dccb:{NFSU2_TR(0x67dccb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67dcd0ull));
TAIL_STATIC(0x673b2cu,673);
}
B67dcd0:L67dcd0:{c.instructions+=3;NFSU2_TR(0x67dcd0);
__builtin_memmove((R+24),(R+0),4);
}
B67dcd2:{NFSU2_TR(0x67dcd2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67dcd4:{NFSU2_TR(0x67dcd4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67dcda:L67dcda:{c.instructions+=6;NFSU2_TR(0x67dcda);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67dcdb:{NFSU2_TR(0x67dcdb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67dcdc:{NFSU2_TR(0x67dcdc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67dcdf:{NFSU2_TR(0x67dcdf);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffull))));
}
B67dce5:{NFSU2_TR(0x67dce5);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x10600000ull))));
}
B67dceb:{NFSU2_TR(0x67dceb);
TAIL_STATIC(0x67fb35u,67f);
}
B67dcf0:L67dcf0:{c.instructions+=3;NFSU2_TR(0x67dcf0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67dcf2:{NFSU2_TR(0x67dcf2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67dcf5:{NFSU2_TR(0x67dcf5);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67dcfb:L67dcfb:{c.instructions+=2;NFSU2_TR(0x67dcfb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67dcfe:{NFSU2_TR(0x67dcfe);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67dd04:L67dd04:{c.instructions+=2;NFSU2_TR(0x67dd04);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67dd07:{NFSU2_TR(0x67dd07);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67dd0d:L67dd0d:{c.instructions+=5;NFSU2_TR(0x67dd0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67dd10:{NFSU2_TR(0x67dd10);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67dd11:{NFSU2_TR(0x67dd11);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67dd14:{NFSU2_TR(0x67dd14);
__builtin_memmove((R+4),(R+12),4);
}
B67dd16:{NFSU2_TR(0x67dd16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67dd1bull));
TAIL_STATIC(0x673b2cu,673);
}
B67dd1b:L67dd1b:{c.instructions+=3;NFSU2_TR(0x67dd1b);
__builtin_memmove((R+24),(R+0),4);
}
B67dd1d:{NFSU2_TR(0x67dd1d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67dd1f:{NFSU2_TR(0x67dd1f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67dd25:L67dd25:{c.instructions+=6;NFSU2_TR(0x67dd25);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67dd26:{NFSU2_TR(0x67dd26);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67dd29:{NFSU2_TR(0x67dd29);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffull))));
}
B67dd2f:{NFSU2_TR(0x67dd2f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67dd32:{NFSU2_TR(0x67dd32);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x20100000ull))));
}
B67dd38:{NFSU2_TR(0x67dd38);
TAIL_STATIC(0x67fb35u,67f);
}
B67dd3d:L67dd3d:{c.instructions+=3;NFSU2_TR(0x67dd3d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67dd3f:{NFSU2_TR(0x67dd3f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67dd42:{NFSU2_TR(0x67dd42);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67dd48:L67dd48:{c.instructions+=2;NFSU2_TR(0x67dd48);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67dd4b:{NFSU2_TR(0x67dd4b);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67dd51:L67dd51:{c.instructions+=2;NFSU2_TR(0x67dd51);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67dd54:{NFSU2_TR(0x67dd54);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67dd5a:L67dd5a:{c.instructions+=5;NFSU2_TR(0x67dd5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67dd5d:{NFSU2_TR(0x67dd5d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67dd5e:{NFSU2_TR(0x67dd5e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67dd61:{NFSU2_TR(0x67dd61);
__builtin_memmove((R+4),(R+12),4);
}
B67dd63:{NFSU2_TR(0x67dd63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67dd68ull));
TAIL_STATIC(0x673b2cu,673);
}
B67dd68:L67dd68:{c.instructions+=3;NFSU2_TR(0x67dd68);
__builtin_memmove((R+24),(R+0),4);
}
B67dd6a:{NFSU2_TR(0x67dd6a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67dd6c:{NFSU2_TR(0x67dd6c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67dd72:L67dd72:{c.instructions+=6;NFSU2_TR(0x67dd72);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67dd73:{NFSU2_TR(0x67dd73);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67dd76:{NFSU2_TR(0x67dd76);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffull))));
}
B67dd7c:{NFSU2_TR(0x67dd7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67dd7f:{NFSU2_TR(0x67dd7f);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x20000000ull))));
}
B67dd85:{NFSU2_TR(0x67dd85);
TAIL_STATIC(0x67fb35u,67f);
}
B67dd8a:L67dd8a:{c.instructions+=3;NFSU2_TR(0x67dd8a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67dd8c:{NFSU2_TR(0x67dd8c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67dd8f:{NFSU2_TR(0x67dd8f);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67dd95:L67dd95:{c.instructions+=6;NFSU2_TR(0x67dd95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67dd98:{NFSU2_TR(0x67dd98);
__builtin_memmove((R+0),(R+24),4);
}
B67dd9a:{NFSU2_TR(0x67dd9a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B67dd9d:{NFSU2_TR(0x67dd9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67dd9e:{NFSU2_TR(0x67dd9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67dda1:{NFSU2_TR(0x67dda1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67dda6ull));
TAIL_STATIC(0x575620u,575);
}
B67dda6:L67dda6:{c.instructions+=4;NFSU2_TR(0x67dda6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67dda8:{NFSU2_TR(0x67dda8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B67dda9:{NFSU2_TR(0x67dda9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67ddac:{NFSU2_TR(0x67ddac);
if(r1(R+518)){TAIL_STATIC(0x67fc7cu,67f);}
}
B67ddb2:L67ddb2:{c.instructions+=5;NFSU2_TR(0x67ddb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B67ddb5:{NFSU2_TR(0x67ddb5);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B67ddb7:{NFSU2_TR(0x67ddb7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ddb8:{NFSU2_TR(0x67ddb8);
__builtin_memmove((R+4),(R+12),4);
}
B67ddba:{NFSU2_TR(0x67ddba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ddbfull));
TAIL_STATIC(0x673a0fu,673);
}
B67ddbf:L67ddbf:{c.instructions+=2;NFSU2_TR(0x67ddbf);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67ddc1:{NFSU2_TR(0x67ddc1);
if(r1(R+518)){TAIL_STATIC(0x67fc7cu,67f);}
}
B67ddc7:L67ddc7:{c.instructions+=1;NFSU2_TR(0x67ddc7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B67ddc9:L67ddc9:{c.instructions+=5;NFSU2_TR(0x67ddc9);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff5cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B67ddd0:{NFSU2_TR(0x67ddd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B67ddd3:{NFSU2_TR(0x67ddd3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B67ddd4:{NFSU2_TR(0x67ddd4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0xaull))));
}
B67ddd7:{NFSU2_TR(0x67ddd7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67ddc9u);}goto L67ddc9;}}
}
B67ddd9:L67ddd9:{c.instructions+=4;NFSU2_TR(0x67ddd9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67dddc:{NFSU2_TR(0x67dddc);
__builtin_memmove((R+4),(R+12),4);
}
B67ddde:{NFSU2_TR(0x67ddde);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67dde4:{NFSU2_TR(0x67dde4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67dde9ull));
TAIL_STATIC(0x673b2cu,673);
}
B67dde9:L67dde9:{c.instructions+=3;NFSU2_TR(0x67dde9);
__builtin_memmove((R+24),(R+0),4);
}
B67ddeb:{NFSU2_TR(0x67ddeb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67dded:{NFSU2_TR(0x67dded);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67ddf3:L67ddf3:{c.instructions+=4;NFSU2_TR(0x67ddf3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ddf6:{NFSU2_TR(0x67ddf6);
__builtin_memmove((R+4),(R+12),4);
}
B67ddf8:{NFSU2_TR(0x67ddf8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ddfe:{NFSU2_TR(0x67ddfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67de03ull));
TAIL_STATIC(0x673b2cu,673);
}
B67de03:L67de03:{c.instructions+=3;NFSU2_TR(0x67de03);
__builtin_memmove((R+24),(R+0),4);
}
B67de05:{NFSU2_TR(0x67de05);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67de07:{NFSU2_TR(0x67de07);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67de0d:L67de0d:{c.instructions+=4;NFSU2_TR(0x67de0d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67de10:{NFSU2_TR(0x67de10);
__builtin_memmove((R+4),(R+12),4);
}
B67de12:{NFSU2_TR(0x67de12);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67de18:{NFSU2_TR(0x67de18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67de1dull));
TAIL_STATIC(0x673b2cu,673);
}
B67de1d:L67de1d:{c.instructions+=3;NFSU2_TR(0x67de1d);
__builtin_memmove((R+24),(R+0),4);
}
B67de1f:{NFSU2_TR(0x67de1f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67de21:{NFSU2_TR(0x67de21);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67de27:L67de27:{c.instructions+=4;NFSU2_TR(0x67de27);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67de2a:{NFSU2_TR(0x67de2a);
__builtin_memmove((R+4),(R+12),4);
}
B67de2c:{NFSU2_TR(0x67de2c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67de32:{NFSU2_TR(0x67de32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67de37ull));
TAIL_STATIC(0x673b2cu,673);
}
B67de37:L67de37:{c.instructions+=3;NFSU2_TR(0x67de37);
__builtin_memmove((R+24),(R+0),4);
}
B67de39:{NFSU2_TR(0x67de39);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67de3b:{NFSU2_TR(0x67de3b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67de41:L67de41:{c.instructions+=4;NFSU2_TR(0x67de41);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67de44:{NFSU2_TR(0x67de44);
__builtin_memmove((R+4),(R+12),4);
}
B67de46:{NFSU2_TR(0x67de46);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67de4c:{NFSU2_TR(0x67de4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67de51ull));
TAIL_STATIC(0x673b2cu,673);
}
B67de51:L67de51:{c.instructions+=3;NFSU2_TR(0x67de51);
__builtin_memmove((R+24),(R+0),4);
}
B67de53:{NFSU2_TR(0x67de53);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67de55:{NFSU2_TR(0x67de55);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67de5b:L67de5b:{c.instructions+=4;NFSU2_TR(0x67de5b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67de5e:{NFSU2_TR(0x67de5e);
__builtin_memmove((R+4),(R+12),4);
}
B67de60:{NFSU2_TR(0x67de60);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67de66:{NFSU2_TR(0x67de66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67de6bull));
TAIL_STATIC(0x673b2cu,673);
}
B67de6b:L67de6b:{c.instructions+=3;NFSU2_TR(0x67de6b);
__builtin_memmove((R+24),(R+0),4);
}
B67de6d:{NFSU2_TR(0x67de6d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67de6f:{NFSU2_TR(0x67de6f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67de75:L67de75:{c.instructions+=4;NFSU2_TR(0x67de75);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67de78:{NFSU2_TR(0x67de78);
__builtin_memmove((R+4),(R+12),4);
}
B67de7a:{NFSU2_TR(0x67de7a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67de80:{NFSU2_TR(0x67de80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67de85ull));
TAIL_STATIC(0x673b2cu,673);
}
B67de85:L67de85:{c.instructions+=3;NFSU2_TR(0x67de85);
__builtin_memmove((R+24),(R+0),4);
}
B67de87:{NFSU2_TR(0x67de87);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67de89:{NFSU2_TR(0x67de89);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67de8f:L67de8f:{c.instructions+=4;NFSU2_TR(0x67de8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67de92:{NFSU2_TR(0x67de92);
__builtin_memmove((R+4),(R+12),4);
}
B67de94:{NFSU2_TR(0x67de94);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67de9a:{NFSU2_TR(0x67de9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67de9full));
TAIL_STATIC(0x673b2cu,673);
}
B67de9f:L67de9f:{c.instructions+=3;NFSU2_TR(0x67de9f);
__builtin_memmove((R+24),(R+0),4);
}
B67dea1:{NFSU2_TR(0x67dea1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67dea3:{NFSU2_TR(0x67dea3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67dea9:L67dea9:{c.instructions+=4;NFSU2_TR(0x67dea9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67deac:{NFSU2_TR(0x67deac);
__builtin_memmove((R+4),(R+12),4);
}
B67deae:{NFSU2_TR(0x67deae);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67deb4:{NFSU2_TR(0x67deb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67deb9ull));
TAIL_STATIC(0x673b2cu,673);
}
B67deb9:L67deb9:{c.instructions+=3;NFSU2_TR(0x67deb9);
__builtin_memmove((R+24),(R+0),4);
}
B67debb:{NFSU2_TR(0x67debb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67debd:{NFSU2_TR(0x67debd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67dec3:L67dec3:{c.instructions+=4;NFSU2_TR(0x67dec3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67dec6:{NFSU2_TR(0x67dec6);
__builtin_memmove((R+4),(R+12),4);
}
B67dec8:{NFSU2_TR(0x67dec8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67decb:{NFSU2_TR(0x67decb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ded0ull));
TAIL_STATIC(0x673b2cu,673);
}
B67ded0:L67ded0:{c.instructions+=3;NFSU2_TR(0x67ded0);
__builtin_memmove((R+24),(R+0),4);
}
B67ded2:{NFSU2_TR(0x67ded2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ded4:{NFSU2_TR(0x67ded4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67deda:L67deda:{c.instructions+=12;NFSU2_TR(0x67deda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67dedd:{NFSU2_TR(0x67dedd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67dede:{NFSU2_TR(0x67dede);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67dedf:{NFSU2_TR(0x67dedf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67dee2:{NFSU2_TR(0x67dee2);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B67dee7:{NFSU2_TR(0x67dee7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67deed:{NFSU2_TR(0x67deed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67def0:{NFSU2_TR(0x67def0);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10200000ull))));
}
B67def5:{NFSU2_TR(0x67def5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67def6:{NFSU2_TR(0x67def6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67def9:{NFSU2_TR(0x67def9);
__builtin_memmove((R+4),(R+12),4);
}
B67defb:{NFSU2_TR(0x67defb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67df00ull));
TAIL_STATIC(0x6758ceu,675);
}
B67df00:L67df00:{c.instructions+=3;NFSU2_TR(0x67df00);
__builtin_memmove((R+24),(R+0),4);
}
B67df02:{NFSU2_TR(0x67df02);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67df04:{NFSU2_TR(0x67df04);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67df0a:L67df0a:{c.instructions+=10;NFSU2_TR(0x67df0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67df0d:{NFSU2_TR(0x67df0d);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67df0f:{NFSU2_TR(0x67df0f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67df10:{NFSU2_TR(0x67df10);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67df16:{NFSU2_TR(0x67df16);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10400000ull))));
}
B67df1b:{NFSU2_TR(0x67df1b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67df21:{NFSU2_TR(0x67df21);
__builtin_memmove((R+4),(R+12),4);
}
B67df23:{NFSU2_TR(0x67df23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67df24:{NFSU2_TR(0x67df24);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67df27:{NFSU2_TR(0x67df27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67df2cull));
TAIL_STATIC(0x6758ceu,675);
}
B67df2c:L67df2c:{c.instructions+=3;NFSU2_TR(0x67df2c);
__builtin_memmove((R+24),(R+0),4);
}
B67df2e:{NFSU2_TR(0x67df2e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67df30:{NFSU2_TR(0x67df30);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67df36:L67df36:{c.instructions+=11;NFSU2_TR(0x67df36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67df39:{NFSU2_TR(0x67df39);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67df3b:{NFSU2_TR(0x67df3b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67df3c:{NFSU2_TR(0x67df3c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67df42:{NFSU2_TR(0x67df42);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10100000ull))));
}
B67df47:{NFSU2_TR(0x67df47);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67df4d:{NFSU2_TR(0x67df4d);
__builtin_memmove((R+4),(R+12),4);
}
B67df4f:{NFSU2_TR(0x67df4f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67df50:{NFSU2_TR(0x67df50);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67df53:{NFSU2_TR(0x67df53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67df56:{NFSU2_TR(0x67df56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67df5bull));
TAIL_STATIC(0x6758ceu,675);
}
B67df5b:L67df5b:{c.instructions+=3;NFSU2_TR(0x67df5b);
__builtin_memmove((R+24),(R+0),4);
}
B67df5d:{NFSU2_TR(0x67df5d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67df5f:{NFSU2_TR(0x67df5f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67df65:L67df65:{c.instructions+=11;NFSU2_TR(0x67df65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67df68:{NFSU2_TR(0x67df68);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67df6a:{NFSU2_TR(0x67df6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67df70:{NFSU2_TR(0x67df70);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20400000ull))));
}
B67df75:{NFSU2_TR(0x67df75);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67df7b:{NFSU2_TR(0x67df7b);
__builtin_memmove((R+4),(R+12),4);
}
B67df7d:{NFSU2_TR(0x67df7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67df83:{NFSU2_TR(0x67df83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67df86:{NFSU2_TR(0x67df86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67df87:{NFSU2_TR(0x67df87);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67df8a:{NFSU2_TR(0x67df8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67df8full));
TAIL_STATIC(0x6758ceu,675);
}
B67df8f:L67df8f:{c.instructions+=3;NFSU2_TR(0x67df8f);
__builtin_memmove((R+24),(R+0),4);
}
B67df91:{NFSU2_TR(0x67df91);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67df93:{NFSU2_TR(0x67df93);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67df99:L67df99:{c.instructions+=8;NFSU2_TR(0x67df99);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67df9a:{NFSU2_TR(0x67df9a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67df9b:{NFSU2_TR(0x67df9b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67df9e:{NFSU2_TR(0x67df9e);
__builtin_memmove((R+4),(R+12),4);
}
B67dfa0:{NFSU2_TR(0x67dfa0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67dfa6:{NFSU2_TR(0x67dfa6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67dfa9:{NFSU2_TR(0x67dfa9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67dfac:{NFSU2_TR(0x67dfac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67dfb1ull));
TAIL_STATIC(0x6758ceu,675);
}
B67dfb1:L67dfb1:{c.instructions+=3;NFSU2_TR(0x67dfb1);
__builtin_memmove((R+24),(R+0),4);
}
B67dfb3:{NFSU2_TR(0x67dfb3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67dfb5:{NFSU2_TR(0x67dfb5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67dfbb:L67dfbb:{c.instructions+=11;NFSU2_TR(0x67dfbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67dfbe:{NFSU2_TR(0x67dfbe);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67dfc0:{NFSU2_TR(0x67dfc0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67dfc6:{NFSU2_TR(0x67dfc6);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20200000ull))));
}
B67dfcb:{NFSU2_TR(0x67dfcb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67dfce:{NFSU2_TR(0x67dfce);
__builtin_memmove((R+4),(R+12),4);
}
B67dfd0:{NFSU2_TR(0x67dfd0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67dfd6:{NFSU2_TR(0x67dfd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67dfd9:{NFSU2_TR(0x67dfd9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67dfda:{NFSU2_TR(0x67dfda);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67dfdd:{NFSU2_TR(0x67dfdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67dfe2ull));
TAIL_STATIC(0x6758ceu,675);
}
B67dfe2:L67dfe2:{c.instructions+=3;NFSU2_TR(0x67dfe2);
__builtin_memmove((R+24),(R+0),4);
}
B67dfe4:{NFSU2_TR(0x67dfe4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67dfe6:{NFSU2_TR(0x67dfe6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67dfec:L67dfec:{c.instructions+=7;NFSU2_TR(0x67dfec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67dfed:{NFSU2_TR(0x67dfed);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67dfee:{NFSU2_TR(0x67dfee);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67dff4:{NFSU2_TR(0x67dff4);
__builtin_memmove((R+4),(R+12),4);
}
B67dff6:{NFSU2_TR(0x67dff6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67dffc:{NFSU2_TR(0x67dffc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67dfff:{NFSU2_TR(0x67dfff);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
TAIL_STATIC(0x67e002u,67e);
}
XIT:NFSU2_TR_EXIT(0x67d,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
