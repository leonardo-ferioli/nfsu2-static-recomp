#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_512(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_518(u8* __restrict R,Cpu& c);
u32 body_51a(u8* __restrict R,Cpu& c);
u32 body_52a(u8* __restrict R,Cpu& c);
u32 body_534(u8* __restrict R,Cpu& c);
u32 body_53e(u8* __restrict R,Cpu& c);
u32 body_541(u8* __restrict R,Cpu& c);
u32 body_54b(u8* __restrict R,Cpu& c);
u32 body_54c(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x54d,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x54d,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_54d(u8* __restrict R,Cpu& c);
u32 page_54d(Cpu& c){return body_54d(c.regs.data(),c);}
__attribute__((noinline)) u32 body_54d(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x54d001:goto L54d001;
case 0x54d003:c.instructions+=1;goto B54d003;
case 0x54d005:goto L54d005;
case 0x54d007:c.instructions+=1;goto B54d007;
case 0x54d009:goto L54d009;
case 0x54d00c:c.instructions+=7;goto B54d00c;
case 0x54d00d:c.instructions+=6;goto B54d00d;
case 0x54d00e:c.instructions+=5;goto B54d00e;
case 0x54d00f:c.instructions+=4;goto B54d00f;
case 0x54d010:c.instructions+=3;goto B54d010;
case 0x54d011:c.instructions+=2;goto B54d011;
case 0x54d013:c.instructions+=1;goto B54d013;
case 0x54d018:goto L54d018;
case 0x54d01b:c.instructions+=4;goto B54d01b;
case 0x54d01d:c.instructions+=3;goto B54d01d;
case 0x54d01e:c.instructions+=2;goto B54d01e;
case 0x54d01f:c.instructions+=1;goto B54d01f;
case 0x54d021:goto L54d021;
case 0x54d023:c.instructions+=2;goto B54d023;
case 0x54d025:c.instructions+=1;goto B54d025;
case 0x54d027:goto L54d027;
case 0x54d02a:c.instructions+=7;goto B54d02a;
case 0x54d02c:c.instructions+=6;goto B54d02c;
case 0x54d02d:c.instructions+=5;goto B54d02d;
case 0x54d02e:c.instructions+=4;goto B54d02e;
case 0x54d02f:c.instructions+=3;goto B54d02f;
case 0x54d030:c.instructions+=2;goto B54d030;
case 0x54d031:c.instructions+=1;goto B54d031;
case 0x54d033:goto L54d033;
case 0x54d036:c.instructions+=7;goto B54d036;
case 0x54d038:c.instructions+=6;goto B54d038;
case 0x54d039:c.instructions+=5;goto B54d039;
case 0x54d03a:c.instructions+=4;goto B54d03a;
case 0x54d03b:c.instructions+=3;goto B54d03b;
case 0x54d03c:c.instructions+=2;goto B54d03c;
case 0x54d03e:c.instructions+=1;goto B54d03e;
case 0x54d043:goto L54d043;
case 0x54d046:c.instructions+=7;goto B54d046;
case 0x54d049:c.instructions+=6;goto B54d049;
case 0x54d04a:c.instructions+=5;goto B54d04a;
case 0x54d04c:c.instructions+=4;goto B54d04c;
case 0x54d04d:c.instructions+=3;goto B54d04d;
case 0x54d04e:c.instructions+=2;goto B54d04e;
case 0x54d04f:c.instructions+=1;goto B54d04f;
case 0x54d051:goto L54d051;
case 0x54d053:c.instructions+=1;goto B54d053;
case 0x54d055:goto L54d055;
case 0x54d058:c.instructions+=7;goto B54d058;
case 0x54d059:c.instructions+=6;goto B54d059;
case 0x54d05a:c.instructions+=5;goto B54d05a;
case 0x54d05b:c.instructions+=4;goto B54d05b;
case 0x54d05c:c.instructions+=3;goto B54d05c;
case 0x54d05d:c.instructions+=2;goto B54d05d;
case 0x54d05f:c.instructions+=1;goto B54d05f;
case 0x54d064:goto L54d064;
case 0x54d067:c.instructions+=7;goto B54d067;
case 0x54d06a:c.instructions+=6;goto B54d06a;
case 0x54d06b:c.instructions+=5;goto B54d06b;
case 0x54d06d:c.instructions+=4;goto B54d06d;
case 0x54d06e:c.instructions+=3;goto B54d06e;
case 0x54d06f:c.instructions+=2;goto B54d06f;
case 0x54d070:c.instructions+=1;goto B54d070;
case 0x54d072:goto L54d072;
case 0x54d073:c.instructions+=6;goto B54d073;
case 0x54d076:c.instructions+=5;goto B54d076;
case 0x54d077:c.instructions+=4;goto B54d077;
case 0x54d078:c.instructions+=3;goto B54d078;
case 0x54d079:c.instructions+=2;goto B54d079;
case 0x54d07a:c.instructions+=1;goto B54d07a;
case 0x54d07c:goto L54d07c;
case 0x54d07d:c.instructions+=1;goto B54d07d;
case 0x54d07e:goto L54d07e;
case 0x54d081:c.instructions+=3;goto B54d081;
case 0x54d082:c.instructions+=2;goto B54d082;
case 0x54d083:c.instructions+=1;goto B54d083;
case 0x54d084:goto L54d084;
case 0x54d086:c.instructions+=1;goto B54d086;
case 0x54d08b:goto L54d08b;
case 0x54d08f:c.instructions+=3;goto B54d08f;
case 0x54d092:c.instructions+=2;goto B54d092;
case 0x54d094:c.instructions+=1;goto B54d094;
case 0x54d096:goto L54d096;
case 0x54d099:c.instructions+=1;goto B54d099;
case 0x54d09b:goto L54d09b;
case 0x54d09e:c.instructions+=3;goto B54d09e;
case 0x54d09f:c.instructions+=2;goto B54d09f;
case 0x54d0a1:c.instructions+=1;goto B54d0a1;
case 0x54d0a3:goto L54d0a3;
case 0x54d0aa:c.instructions+=1;goto B54d0aa;
case 0x54d0ac:goto L54d0ac;
case 0x54d0ad:c.instructions+=3;goto B54d0ad;
case 0x54d0ae:c.instructions+=2;goto B54d0ae;
case 0x54d0b0:c.instructions+=1;goto B54d0b0;
case 0x54d0b5:goto L54d0b5;
case 0x54d0b9:goto L54d0b9;
case 0x54d0bc:c.instructions+=3;goto B54d0bc;
case 0x54d0bf:c.instructions+=2;goto B54d0bf;
case 0x54d0c2:c.instructions+=1;goto B54d0c2;
case 0x54d0c4:goto L54d0c4;
case 0x54d0cb:goto L54d0cb;
case 0x54d0cf:c.instructions+=4;goto B54d0cf;
case 0x54d0d0:c.instructions+=3;goto B54d0d0;
case 0x54d0d1:c.instructions+=2;goto B54d0d1;
case 0x54d0d3:c.instructions+=1;goto B54d0d3;
case 0x54d0d8:goto L54d0d8;
case 0x54d0dc:c.instructions+=1;goto B54d0dc;
case 0x54d0de:goto L54d0de;
case 0x54d0e2:c.instructions+=4;goto B54d0e2;
case 0x54d0e3:c.instructions+=3;goto B54d0e3;
case 0x54d0e5:c.instructions+=2;goto B54d0e5;
case 0x54d0e8:c.instructions+=1;goto B54d0e8;
case 0x54d0ed:goto L54d0ed;
case 0x54d0f1:c.instructions+=1;goto B54d0f1;
case 0x54d0f3:goto L54d0f3;
case 0x54d0f7:c.instructions+=4;goto B54d0f7;
case 0x54d0f8:c.instructions+=3;goto B54d0f8;
case 0x54d0fa:c.instructions+=2;goto B54d0fa;
case 0x54d0fd:c.instructions+=1;goto B54d0fd;
case 0x54d102:goto L54d102;
case 0x54d106:c.instructions+=1;goto B54d106;
case 0x54d108:goto L54d108;
case 0x54d10b:c.instructions+=2;goto B54d10b;
case 0x54d10d:c.instructions+=1;goto B54d10d;
case 0x54d10f:goto L54d10f;
case 0x54d112:c.instructions+=3;goto B54d112;
case 0x54d116:c.instructions+=2;goto B54d116;
case 0x54d118:c.instructions+=1;goto B54d118;
case 0x54d11b:goto L54d11b;
case 0x54d11f:c.instructions+=1;goto B54d11f;
case 0x54d121:goto L54d121;
case 0x54d124:c.instructions+=1;goto B54d124;
case 0x54d126:goto L54d126;
case 0x54d129:c.instructions+=3;goto B54d129;
case 0x54d12a:c.instructions+=2;goto B54d12a;
case 0x54d12c:c.instructions+=1;goto B54d12c;
case 0x54d12e:goto L54d12e;
case 0x54d131:c.instructions+=2;goto B54d131;
case 0x54d136:c.instructions+=1;goto B54d136;
case 0x54d138:goto L54d138;
case 0x54d13e:c.instructions+=3;goto B54d13e;
case 0x54d144:c.instructions+=2;goto B54d144;
case 0x54d146:c.instructions+=1;goto B54d146;
case 0x54d149:goto L54d149;
case 0x54d14f:c.instructions+=9;goto B54d14f;
case 0x54d152:c.instructions+=8;goto B54d152;
case 0x54d158:c.instructions+=7;goto B54d158;
case 0x54d15a:c.instructions+=6;goto B54d15a;
case 0x54d15c:c.instructions+=5;goto B54d15c;
case 0x54d161:c.instructions+=4;goto B54d161;
case 0x54d164:c.instructions+=3;goto B54d164;
case 0x54d165:c.instructions+=2;goto B54d165;
case 0x54d166:c.instructions+=1;goto B54d166;
case 0x54d168:goto L54d168;
case 0x54d16d:c.instructions+=1;goto B54d16d;
case 0x54d170:goto L54d170;
case 0x54d171:c.instructions+=3;goto B54d171;
case 0x54d172:c.instructions+=2;goto B54d172;
case 0x54d173:c.instructions+=1;goto B54d173;
case 0x54d190:goto L54d190;
case 0x54d194:c.instructions+=10;goto B54d194;
case 0x54d195:c.instructions+=9;goto B54d195;
case 0x54d199:c.instructions+=8;goto B54d199;
case 0x54d19a:c.instructions+=7;goto B54d19a;
case 0x54d19b:c.instructions+=6;goto B54d19b;
case 0x54d19d:c.instructions+=5;goto B54d19d;
case 0x54d1a0:c.instructions+=4;goto B54d1a0;
case 0x54d1a2:c.instructions+=3;goto B54d1a2;
case 0x54d1a5:c.instructions+=2;goto B54d1a5;
case 0x54d1a8:c.instructions+=1;goto B54d1a8;
case 0x54d1aa:goto L54d1aa;
case 0x54d1b0:goto L54d1b0;
case 0x54d1b1:c.instructions+=3;goto B54d1b1;
case 0x54d1b2:c.instructions+=2;goto B54d1b2;
case 0x54d1b4:c.instructions+=1;goto B54d1b4;
case 0x54d1b9:goto L54d1b9;
case 0x54d1bc:c.instructions+=2;goto B54d1bc;
case 0x54d1be:c.instructions+=1;goto B54d1be;
case 0x54d1c0:goto L54d1c0;
case 0x54d1c1:c.instructions+=3;goto B54d1c1;
case 0x54d1c2:c.instructions+=2;goto B54d1c2;
case 0x54d1c3:c.instructions+=1;goto B54d1c3;
case 0x54d1d0:goto L54d1d0;
case 0x54d1d1:c.instructions+=17;goto B54d1d1;
case 0x54d1d5:c.instructions+=16;goto B54d1d5;
case 0x54d1d6:c.instructions+=15;goto B54d1d6;
case 0x54d1d7:c.instructions+=14;goto B54d1d7;
case 0x54d1db:c.instructions+=13;goto B54d1db;
case 0x54d1dc:c.instructions+=12;goto B54d1dc;
case 0x54d1de:c.instructions+=11;goto B54d1de;
case 0x54d1e0:c.instructions+=10;goto B54d1e0;
case 0x54d1e1:c.instructions+=9;goto B54d1e1;
case 0x54d1e3:c.instructions+=8;goto B54d1e3;
case 0x54d1e5:c.instructions+=7;goto B54d1e5;
case 0x54d1e7:c.instructions+=6;goto B54d1e7;
case 0x54d1ea:c.instructions+=5;goto B54d1ea;
case 0x54d1ec:c.instructions+=4;goto B54d1ec;
case 0x54d1f0:c.instructions+=3;goto B54d1f0;
case 0x54d1f4:c.instructions+=2;goto B54d1f4;
case 0x54d1f8:c.instructions+=1;goto B54d1f8;
case 0x54d1fe:goto L54d1fe;
case 0x54d200:goto L54d200;
case 0x54d204:c.instructions+=2;goto B54d204;
case 0x54d208:c.instructions+=1;goto B54d208;
case 0x54d210:goto L54d210;
case 0x54d214:c.instructions+=2;goto B54d214;
case 0x54d219:c.instructions+=1;goto B54d219;
case 0x54d21f:goto L54d21f;
case 0x54d225:goto L54d225;
case 0x54d22a:c.instructions+=1;goto B54d22a;
case 0x54d230:goto L54d230;
case 0x54d235:c.instructions+=1;goto B54d235;
case 0x54d237:goto L54d237;
case 0x54d23a:c.instructions+=1;goto B54d23a;
case 0x54d240:goto L54d240;
case 0x54d243:c.instructions+=7;goto B54d243;
case 0x54d244:c.instructions+=6;goto B54d244;
case 0x54d247:c.instructions+=5;goto B54d247;
case 0x54d24a:c.instructions+=4;goto B54d24a;
case 0x54d24d:c.instructions+=3;goto B54d24d;
case 0x54d251:c.instructions+=2;goto B54d251;
case 0x54d253:c.instructions+=1;goto B54d253;
case 0x54d258:goto L54d258;
case 0x54d25c:c.instructions+=2;goto B54d25c;
case 0x54d25f:c.instructions+=1;goto B54d25f;
case 0x54d261:goto L54d261;
case 0x54d264:c.instructions+=1;goto B54d264;
case 0x54d266:goto L54d266;
case 0x54d269:c.instructions+=2;goto B54d269;
case 0x54d26a:c.instructions+=1;goto B54d26a;
case 0x54d26f:goto L54d26f;
case 0x54d271:c.instructions+=2;goto B54d271;
case 0x54d273:c.instructions+=1;goto B54d273;
case 0x54d275:goto L54d275;
case 0x54d27a:c.instructions+=1;goto B54d27a;
case 0x54d27f:goto L54d27f;
case 0x54d284:c.instructions+=11;goto B54d284;
case 0x54d287:c.instructions+=10;goto B54d287;
case 0x54d28a:c.instructions+=9;goto B54d28a;
case 0x54d28e:c.instructions+=8;goto B54d28e;
case 0x54d294:c.instructions+=7;goto B54d294;
case 0x54d297:c.instructions+=6;goto B54d297;
case 0x54d29a:c.instructions+=5;goto B54d29a;
case 0x54d29d:c.instructions+=4;goto B54d29d;
case 0x54d29f:c.instructions+=3;goto B54d29f;
case 0x54d2a2:c.instructions+=2;goto B54d2a2;
case 0x54d2a3:c.instructions+=1;goto B54d2a3;
case 0x54d2a5:goto L54d2a5;
case 0x54d2a9:c.instructions+=2;goto B54d2a9;
case 0x54d2ab:c.instructions+=1;goto B54d2ab;
case 0x54d2b0:goto L54d2b0;
case 0x54d2b3:c.instructions+=1;goto B54d2b3;
case 0x54d2b5:goto L54d2b5;
case 0x54d2b9:c.instructions+=3;goto B54d2b9;
case 0x54d2bc:c.instructions+=2;goto B54d2bc;
case 0x54d2bf:c.instructions+=1;goto B54d2bf;
case 0x54d2c4:goto L54d2c4;
case 0x54d2c7:c.instructions+=1;goto B54d2c7;
case 0x54d2c9:goto L54d2c9;
case 0x54d2cc:c.instructions+=2;goto B54d2cc;
case 0x54d2ce:c.instructions+=1;goto B54d2ce;
case 0x54d2d0:goto L54d2d0;
case 0x54d2d3:c.instructions+=6;goto B54d2d3;
case 0x54d2d6:c.instructions+=5;goto B54d2d6;
case 0x54d2db:c.instructions+=4;goto B54d2db;
case 0x54d2dc:c.instructions+=3;goto B54d2dc;
case 0x54d2de:c.instructions+=2;goto B54d2de;
case 0x54d2df:c.instructions+=1;goto B54d2df;
case 0x54d2e4:goto L54d2e4;
case 0x54d2e5:c.instructions+=1;goto B54d2e5;
case 0x54d2ea:goto L54d2ea;
case 0x54d2ed:goto L54d2ed;
case 0x54d2f0:c.instructions+=3;goto B54d2f0;
case 0x54d2f3:c.instructions+=2;goto B54d2f3;
case 0x54d2f6:c.instructions+=1;goto B54d2f6;
case 0x54d2f8:goto L54d2f8;
case 0x54d2fb:c.instructions+=3;goto B54d2fb;
case 0x54d2fc:c.instructions+=2;goto B54d2fc;
case 0x54d2fe:c.instructions+=1;goto B54d2fe;
case 0x54d303:goto L54d303;
case 0x54d305:goto L54d305;
case 0x54d308:c.instructions+=2;goto B54d308;
case 0x54d309:c.instructions+=1;goto B54d309;
case 0x54d30e:goto L54d30e;
case 0x54d310:goto L54d310;
case 0x54d315:c.instructions+=1;goto B54d315;
case 0x54d317:goto L54d317;
case 0x54d31c:c.instructions+=1;goto B54d31c;
case 0x54d31e:goto L54d31e;
case 0x54d321:c.instructions+=2;goto B54d321;
case 0x54d324:c.instructions+=1;goto B54d324;
case 0x54d326:goto L54d326;
case 0x54d329:c.instructions+=1;goto B54d329;
case 0x54d32c:goto L54d32c;
case 0x54d330:c.instructions+=4;goto B54d330;
case 0x54d334:c.instructions+=3;goto B54d334;
case 0x54d338:c.instructions+=2;goto B54d338;
case 0x54d33a:c.instructions+=1;goto B54d33a;
case 0x54d340:goto L54d340;
case 0x54d341:c.instructions+=6;goto B54d341;
case 0x54d342:c.instructions+=5;goto B54d342;
case 0x54d343:c.instructions+=4;goto B54d343;
case 0x54d345:c.instructions+=3;goto B54d345;
case 0x54d346:c.instructions+=2;goto B54d346;
case 0x54d347:c.instructions+=1;goto B54d347;
case 0x54d350:goto L54d350;
case 0x54d351:c.instructions+=7;goto B54d351;
case 0x54d352:c.instructions+=6;goto B54d352;
case 0x54d353:c.instructions+=5;goto B54d353;
case 0x54d355:c.instructions+=4;goto B54d355;
case 0x54d356:c.instructions+=3;goto B54d356;
case 0x54d359:c.instructions+=2;goto B54d359;
case 0x54d35b:c.instructions+=1;goto B54d35b;
case 0x54d360:goto L54d360;
case 0x54d364:c.instructions+=33;goto B54d364;
case 0x54d366:c.instructions+=32;goto B54d366;
case 0x54d369:c.instructions+=31;goto B54d369;
case 0x54d36b:c.instructions+=30;goto B54d36b;
case 0x54d36e:c.instructions+=29;goto B54d36e;
case 0x54d371:c.instructions+=28;goto B54d371;
case 0x54d374:c.instructions+=27;goto B54d374;
case 0x54d377:c.instructions+=26;goto B54d377;
case 0x54d37a:c.instructions+=25;goto B54d37a;
case 0x54d37d:c.instructions+=24;goto B54d37d;
case 0x54d380:c.instructions+=23;goto B54d380;
case 0x54d383:c.instructions+=22;goto B54d383;
case 0x54d386:c.instructions+=21;goto B54d386;
case 0x54d388:c.instructions+=20;goto B54d388;
case 0x54d38e:c.instructions+=19;goto B54d38e;
case 0x54d390:c.instructions+=18;goto B54d390;
case 0x54d392:c.instructions+=17;goto B54d392;
case 0x54d395:c.instructions+=16;goto B54d395;
case 0x54d398:c.instructions+=15;goto B54d398;
case 0x54d39b:c.instructions+=14;goto B54d39b;
case 0x54d39e:c.instructions+=13;goto B54d39e;
case 0x54d3a1:c.instructions+=12;goto B54d3a1;
case 0x54d3a4:c.instructions+=11;goto B54d3a4;
case 0x54d3a7:c.instructions+=10;goto B54d3a7;
case 0x54d3aa:c.instructions+=9;goto B54d3aa;
case 0x54d3ad:c.instructions+=8;goto B54d3ad;
case 0x54d3b0:c.instructions+=7;goto B54d3b0;
case 0x54d3b3:c.instructions+=6;goto B54d3b3;
case 0x54d3b6:c.instructions+=5;goto B54d3b6;
case 0x54d3b9:c.instructions+=4;goto B54d3b9;
case 0x54d3bc:c.instructions+=3;goto B54d3bc;
case 0x54d3be:c.instructions+=2;goto B54d3be;
case 0x54d3c0:c.instructions+=1;goto B54d3c0;
case 0x54d3c2:goto L54d3c2;
case 0x54d3c4:c.instructions+=1;goto B54d3c4;
case 0x54d3c6:goto L54d3c6;
case 0x54d3c8:c.instructions+=1;goto B54d3c8;
case 0x54d3ca:goto L54d3ca;
case 0x54d3cd:goto L54d3cd;
case 0x54d3cf:c.instructions+=1;goto B54d3cf;
case 0x54d3d1:goto L54d3d1;
case 0x54d3d4:c.instructions+=1;goto B54d3d4;
case 0x54d3d6:goto L54d3d6;
case 0x54d3d8:c.instructions+=1;goto B54d3d8;
case 0x54d3dd:goto L54d3dd;
case 0x54d3e0:c.instructions+=6;goto B54d3e0;
case 0x54d3e4:c.instructions+=5;goto B54d3e4;
case 0x54d3e5:c.instructions+=4;goto B54d3e5;
case 0x54d3e6:c.instructions+=3;goto B54d3e6;
case 0x54d3e7:c.instructions+=2;goto B54d3e7;
case 0x54d3e8:c.instructions+=1;goto B54d3e8;
case 0x54d3eb:goto L54d3eb;
case 0x54d3ee:c.instructions+=7;goto B54d3ee;
case 0x54d3f1:c.instructions+=6;goto B54d3f1;
case 0x54d3f4:c.instructions+=5;goto B54d3f4;
case 0x54d3f5:c.instructions+=4;goto B54d3f5;
case 0x54d3f6:c.instructions+=3;goto B54d3f6;
case 0x54d3f7:c.instructions+=2;goto B54d3f7;
case 0x54d3f8:c.instructions+=1;goto B54d3f8;
case 0x54d3fb:goto L54d3fb;
case 0x54d3fd:c.instructions+=1;goto B54d3fd;
case 0x54d3ff:goto L54d3ff;
case 0x54d402:c.instructions+=1;goto B54d402;
case 0x54d407:goto L54d407;
case 0x54d409:goto L54d409;
case 0x54d40c:goto L54d40c;
case 0x54d40e:c.instructions+=2;goto B54d40e;
case 0x54d410:c.instructions+=1;goto B54d410;
case 0x54d416:goto L54d416;
case 0x54d41b:c.instructions+=1;goto B54d41b;
case 0x54d420:goto L54d420;
case 0x54d425:c.instructions+=1;goto B54d425;
case 0x54d42a:goto L54d42a;
case 0x54d42c:c.instructions+=1;goto B54d42c;
case 0x54d42e:goto L54d42e;
case 0x54d431:c.instructions+=3;goto B54d431;
case 0x54d434:c.instructions+=2;goto B54d434;
case 0x54d43a:c.instructions+=1;goto B54d43a;
case 0x54d43c:goto L54d43c;
case 0x54d43e:goto L54d43e;
case 0x54d441:c.instructions+=12;goto B54d441;
case 0x54d444:c.instructions+=11;goto B54d444;
case 0x54d447:c.instructions+=10;goto B54d447;
case 0x54d44a:c.instructions+=9;goto B54d44a;
case 0x54d44d:c.instructions+=8;goto B54d44d;
case 0x54d450:c.instructions+=7;goto B54d450;
case 0x54d453:c.instructions+=6;goto B54d453;
case 0x54d456:c.instructions+=5;goto B54d456;
case 0x54d459:c.instructions+=4;goto B54d459;
case 0x54d45c:c.instructions+=3;goto B54d45c;
case 0x54d45f:c.instructions+=2;goto B54d45f;
case 0x54d461:c.instructions+=1;goto B54d461;
case 0x54d463:goto L54d463;
case 0x54d466:c.instructions+=3;goto B54d466;
case 0x54d468:c.instructions+=2;goto B54d468;
case 0x54d46b:c.instructions+=1;goto B54d46b;
case 0x54d46d:goto L54d46d;
case 0x54d470:goto L54d470;
case 0x54d473:c.instructions+=2;goto B54d473;
case 0x54d476:c.instructions+=1;goto B54d476;
case 0x54d478:goto L54d478;
case 0x54d47b:c.instructions+=3;goto B54d47b;
case 0x54d47d:c.instructions+=2;goto B54d47d;
case 0x54d480:c.instructions+=1;goto B54d480;
case 0x54d482:goto L54d482;
case 0x54d485:goto L54d485;
case 0x54d488:c.instructions+=1;goto B54d488;
case 0x54d48b:goto L54d48b;
case 0x54d48e:c.instructions+=1;goto B54d48e;
case 0x54d490:goto L54d490;
case 0x54d493:goto L54d493;
case 0x54d496:c.instructions+=2;goto B54d496;
case 0x54d498:c.instructions+=1;goto B54d498;
case 0x54d49a:goto L54d49a;
case 0x54d49b:c.instructions+=4;goto B54d49b;
case 0x54d49c:c.instructions+=3;goto B54d49c;
case 0x54d49d:c.instructions+=2;goto B54d49d;
case 0x54d49e:c.instructions+=1;goto B54d49e;
case 0x54d4b0:goto L54d4b0;
case 0x54d4b4:c.instructions+=7;goto B54d4b4;
case 0x54d4ba:c.instructions+=6;goto B54d4ba;
case 0x54d4bb:c.instructions+=5;goto B54d4bb;
case 0x54d4bc:c.instructions+=4;goto B54d4bc;
case 0x54d4bf:c.instructions+=3;goto B54d4bf;
case 0x54d4c1:c.instructions+=2;goto B54d4c1;
case 0x54d4c3:c.instructions+=1;goto B54d4c3;
case 0x54d4c9:goto L54d4c9;
case 0x54d4cf:c.instructions+=4;goto B54d4cf;
case 0x54d4d1:c.instructions+=3;goto B54d4d1;
case 0x54d4d3:c.instructions+=2;goto B54d4d3;
case 0x54d4d5:c.instructions+=1;goto B54d4d5;
case 0x54d4db:goto L54d4db;
case 0x54d4dc:c.instructions+=3;goto B54d4dc;
case 0x54d4dd:c.instructions+=2;goto B54d4dd;
case 0x54d4e3:c.instructions+=1;goto B54d4e3;
case 0x54d4e5:goto L54d4e5;
case 0x54d4ea:c.instructions+=3;goto B54d4ea;
case 0x54d4ec:c.instructions+=2;goto B54d4ec;
case 0x54d4ee:c.instructions+=1;goto B54d4ee;
case 0x54d4f0:goto L54d4f0;
case 0x54d4f3:c.instructions+=6;goto B54d4f3;
case 0x54d4f9:c.instructions+=5;goto B54d4f9;
case 0x54d4fb:c.instructions+=4;goto B54d4fb;
case 0x54d4fe:c.instructions+=3;goto B54d4fe;
case 0x54d500:c.instructions+=2;goto B54d500;
case 0x54d503:c.instructions+=1;goto B54d503;
case 0x54d505:goto L54d505;
case 0x54d507:c.instructions+=3;goto B54d507;
case 0x54d50a:c.instructions+=2;goto B54d50a;
case 0x54d50c:c.instructions+=1;goto B54d50c;
case 0x54d50e:goto L54d50e;
case 0x54d510:c.instructions+=1;goto B54d510;
case 0x54d516:goto L54d516;
case 0x54d518:c.instructions+=3;goto B54d518;
case 0x54d51a:c.instructions+=2;goto B54d51a;
case 0x54d51f:c.instructions+=1;goto B54d51f;
case 0x54d523:goto L54d523;
case 0x54d525:goto L54d525;
case 0x54d527:c.instructions+=20;goto B54d527;
case 0x54d52b:c.instructions+=19;goto B54d52b;
case 0x54d52f:c.instructions+=18;goto B54d52f;
case 0x54d533:c.instructions+=17;goto B54d533;
case 0x54d537:c.instructions+=16;goto B54d537;
case 0x54d53b:c.instructions+=15;goto B54d53b;
case 0x54d53f:c.instructions+=14;goto B54d53f;
case 0x54d543:c.instructions+=13;goto B54d543;
case 0x54d547:c.instructions+=12;goto B54d547;
case 0x54d54b:c.instructions+=11;goto B54d54b;
case 0x54d54f:c.instructions+=10;goto B54d54f;
case 0x54d553:c.instructions+=9;goto B54d553;
case 0x54d557:c.instructions+=8;goto B54d557;
case 0x54d55c:c.instructions+=7;goto B54d55c;
case 0x54d561:c.instructions+=6;goto B54d561;
case 0x54d566:c.instructions+=5;goto B54d566;
case 0x54d56a:c.instructions+=4;goto B54d56a;
case 0x54d56e:c.instructions+=3;goto B54d56e;
case 0x54d572:c.instructions+=2;goto B54d572;
case 0x54d57a:c.instructions+=1;goto B54d57a;
case 0x54d580:goto L54d580;
case 0x54d583:c.instructions+=2;goto B54d583;
case 0x54d585:c.instructions+=1;goto B54d585;
case 0x54d58b:goto L54d58b;
case 0x54d58f:c.instructions+=13;goto B54d58f;
case 0x54d596:c.instructions+=12;goto B54d596;
case 0x54d598:c.instructions+=11;goto B54d598;
case 0x54d59d:c.instructions+=10;goto B54d59d;
case 0x54d59f:c.instructions+=9;goto B54d59f;
case 0x54d5a2:c.instructions+=8;goto B54d5a2;
case 0x54d5a4:c.instructions+=7;goto B54d5a4;
case 0x54d5a8:c.instructions+=6;goto B54d5a8;
case 0x54d5ae:c.instructions+=5;goto B54d5ae;
case 0x54d5b2:c.instructions+=4;goto B54d5b2;
case 0x54d5b6:c.instructions+=3;goto B54d5b6;
case 0x54d5ba:c.instructions+=2;goto B54d5ba;
case 0x54d5bf:c.instructions+=1;goto B54d5bf;
case 0x54d5c5:goto L54d5c5;
case 0x54d5c7:c.instructions+=5;goto B54d5c7;
case 0x54d5cc:c.instructions+=4;goto B54d5cc;
case 0x54d5ce:c.instructions+=3;goto B54d5ce;
case 0x54d5d2:c.instructions+=2;goto B54d5d2;
case 0x54d5d4:c.instructions+=1;goto B54d5d4;
case 0x54d5da:goto L54d5da;
case 0x54d5dd:c.instructions+=7;goto B54d5dd;
case 0x54d5df:c.instructions+=6;goto B54d5df;
case 0x54d5e5:c.instructions+=5;goto B54d5e5;
case 0x54d5e8:c.instructions+=4;goto B54d5e8;
case 0x54d5eb:c.instructions+=3;goto B54d5eb;
case 0x54d5ed:c.instructions+=2;goto B54d5ed;
case 0x54d5ef:c.instructions+=1;goto B54d5ef;
case 0x54d5f1:goto L54d5f1;
case 0x54d5f3:c.instructions+=3;goto B54d5f3;
case 0x54d5f5:c.instructions+=2;goto B54d5f5;
case 0x54d5f7:c.instructions+=1;goto B54d5f7;
case 0x54d5f9:goto L54d5f9;
case 0x54d5fd:c.instructions+=4;goto B54d5fd;
case 0x54d5ff:c.instructions+=3;goto B54d5ff;
case 0x54d601:c.instructions+=2;goto B54d601;
case 0x54d603:c.instructions+=1;goto B54d603;
case 0x54d607:goto L54d607;
case 0x54d60a:c.instructions+=3;goto B54d60a;
case 0x54d60c:c.instructions+=2;goto B54d60c;
case 0x54d60e:c.instructions+=1;goto B54d60e;
case 0x54d610:goto L54d610;
case 0x54d612:c.instructions+=3;goto B54d612;
case 0x54d614:c.instructions+=2;goto B54d614;
case 0x54d616:c.instructions+=1;goto B54d616;
case 0x54d618:goto L54d618;
case 0x54d61c:c.instructions+=4;goto B54d61c;
case 0x54d61e:c.instructions+=3;goto B54d61e;
case 0x54d620:c.instructions+=2;goto B54d620;
case 0x54d622:c.instructions+=1;goto B54d622;
case 0x54d626:goto L54d626;
case 0x54d629:c.instructions+=3;goto B54d629;
case 0x54d62b:c.instructions+=2;goto B54d62b;
case 0x54d62d:c.instructions+=1;goto B54d62d;
case 0x54d62f:goto L54d62f;
case 0x54d631:c.instructions+=4;goto B54d631;
case 0x54d633:c.instructions+=3;goto B54d633;
case 0x54d635:c.instructions+=2;goto B54d635;
case 0x54d637:c.instructions+=1;goto B54d637;
case 0x54d639:goto L54d639;
case 0x54d63d:c.instructions+=3;goto B54d63d;
case 0x54d63e:c.instructions+=2;goto B54d63e;
case 0x54d640:c.instructions+=1;goto B54d640;
case 0x54d645:goto L54d645;
case 0x54d649:c.instructions+=2;goto B54d649;
case 0x54d64d:c.instructions+=1;goto B54d64d;
case 0x54d64f:goto L54d64f;
case 0x54d653:c.instructions+=1;goto B54d653;
case 0x54d655:goto L54d655;
case 0x54d656:c.instructions+=2;goto B54d656;
case 0x54d658:c.instructions+=1;goto B54d658;
case 0x54d65d:goto L54d65d;
case 0x54d661:goto L54d661;
case 0x54d665:c.instructions+=6;goto B54d665;
case 0x54d669:c.instructions+=5;goto B54d669;
case 0x54d66b:c.instructions+=4;goto B54d66b;
case 0x54d66d:c.instructions+=3;goto B54d66d;
case 0x54d66f:c.instructions+=2;goto B54d66f;
case 0x54d671:c.instructions+=1;goto B54d671;
case 0x54d675:goto L54d675;
case 0x54d679:c.instructions+=5;goto B54d679;
case 0x54d67b:c.instructions+=4;goto B54d67b;
case 0x54d67e:c.instructions+=3;goto B54d67e;
case 0x54d682:c.instructions+=2;goto B54d682;
case 0x54d688:c.instructions+=1;goto B54d688;
case 0x54d68e:goto L54d68e;
case 0x54d691:c.instructions+=1;goto B54d691;
case 0x54d697:goto L54d697;
case 0x54d69e:c.instructions+=3;goto B54d69e;
case 0x54d6a1:c.instructions+=2;goto B54d6a1;
case 0x54d6a3:c.instructions+=1;goto B54d6a3;
case 0x54d6a9:goto L54d6a9;
case 0x54d6af:c.instructions+=3;goto B54d6af;
case 0x54d6b1:c.instructions+=2;goto B54d6b1;
case 0x54d6b6:c.instructions+=1;goto B54d6b6;
case 0x54d6bc:goto L54d6bc;
case 0x54d6be:c.instructions+=1;goto B54d6be;
case 0x54d6c0:goto L54d6c0;
case 0x54d6c4:c.instructions+=5;goto B54d6c4;
case 0x54d6c9:c.instructions+=4;goto B54d6c9;
case 0x54d6cb:c.instructions+=3;goto B54d6cb;
case 0x54d6cd:c.instructions+=2;goto B54d6cd;
case 0x54d6cf:c.instructions+=1;goto B54d6cf;
case 0x54d6d5:goto L54d6d5;
case 0x54d6d8:c.instructions+=5;goto B54d6d8;
case 0x54d6da:c.instructions+=4;goto B54d6da;
case 0x54d6e0:c.instructions+=3;goto B54d6e0;
case 0x54d6e3:c.instructions+=2;goto B54d6e3;
case 0x54d6e7:c.instructions+=1;goto B54d6e7;
case 0x54d6e9:goto L54d6e9;
case 0x54d6ec:c.instructions+=1;goto B54d6ec;
case 0x54d6ee:goto L54d6ee;
case 0x54d6f2:c.instructions+=8;goto B54d6f2;
case 0x54d6f6:c.instructions+=7;goto B54d6f6;
case 0x54d6f8:c.instructions+=6;goto B54d6f8;
case 0x54d6fc:c.instructions+=5;goto B54d6fc;
case 0x54d6fe:c.instructions+=4;goto B54d6fe;
case 0x54d700:c.instructions+=3;goto B54d700;
case 0x54d702:c.instructions+=2;goto B54d702;
case 0x54d704:c.instructions+=1;goto B54d704;
case 0x54d708:goto L54d708;
case 0x54d70c:c.instructions+=1;goto B54d70c;
case 0x54d70e:goto L54d70e;
case 0x54d711:c.instructions+=1;goto B54d711;
case 0x54d713:goto L54d713;
case 0x54d717:c.instructions+=4;goto B54d717;
case 0x54d719:c.instructions+=3;goto B54d719;
case 0x54d71b:c.instructions+=2;goto B54d71b;
case 0x54d71d:c.instructions+=1;goto B54d71d;
case 0x54d721:goto L54d721;
case 0x54d725:c.instructions+=1;goto B54d725;
case 0x54d727:goto L54d727;
case 0x54d72a:c.instructions+=1;goto B54d72a;
case 0x54d72c:goto L54d72c;
case 0x54d730:c.instructions+=5;goto B54d730;
case 0x54d732:c.instructions+=4;goto B54d732;
case 0x54d734:c.instructions+=3;goto B54d734;
case 0x54d736:c.instructions+=2;goto B54d736;
case 0x54d73a:c.instructions+=1;goto B54d73a;
case 0x54d73f:goto L54d73f;
case 0x54d743:c.instructions+=2;goto B54d743;
case 0x54d745:c.instructions+=1;goto B54d745;
case 0x54d747:goto L54d747;
case 0x54d749:c.instructions+=1;goto B54d749;
case 0x54d74b:goto L54d74b;
case 0x54d74d:c.instructions+=2;goto B54d74d;
case 0x54d74f:c.instructions+=1;goto B54d74f;
case 0x54d754:goto L54d754;
case 0x54d756:c.instructions+=4;goto B54d756;
case 0x54d758:c.instructions+=3;goto B54d758;
case 0x54d75a:c.instructions+=2;goto B54d75a;
case 0x54d75e:c.instructions+=1;goto B54d75e;
case 0x54d762:goto L54d762;
case 0x54d766:c.instructions+=5;goto B54d766;
case 0x54d768:c.instructions+=4;goto B54d768;
case 0x54d76b:c.instructions+=3;goto B54d76b;
case 0x54d76f:c.instructions+=2;goto B54d76f;
case 0x54d775:c.instructions+=1;goto B54d775;
case 0x54d77b:goto L54d77b;
case 0x54d77f:c.instructions+=5;goto B54d77f;
case 0x54d783:c.instructions+=4;goto B54d783;
case 0x54d787:c.instructions+=3;goto B54d787;
case 0x54d789:c.instructions+=2;goto B54d789;
case 0x54d78b:c.instructions+=1;goto B54d78b;
case 0x54d791:goto L54d791;
case 0x54d798:c.instructions+=4;goto B54d798;
case 0x54d79e:c.instructions+=3;goto B54d79e;
case 0x54d7a0:c.instructions+=2;goto B54d7a0;
case 0x54d7a6:c.instructions+=1;goto B54d7a6;
case 0x54d7a8:goto L54d7a8;
case 0x54d7aa:goto L54d7aa;
case 0x54d7ae:c.instructions+=3;goto B54d7ae;
case 0x54d7b1:c.instructions+=2;goto B54d7b1;
case 0x54d7b4:c.instructions+=1;goto B54d7b4;
case 0x54d7ba:goto L54d7ba;
case 0x54d7c1:c.instructions+=1;goto B54d7c1;
case 0x54d7c8:goto L54d7c8;
case 0x54d7cd:c.instructions+=1;goto B54d7cd;
case 0x54d7d3:goto L54d7d3;
case 0x54d7d5:c.instructions+=3;goto B54d7d5;
case 0x54d7d9:c.instructions+=2;goto B54d7d9;
case 0x54d7e0:c.instructions+=1;goto B54d7e0;
case 0x54d7e2:goto L54d7e2;
case 0x54d7e5:c.instructions+=2;goto B54d7e5;
case 0x54d7e7:c.instructions+=1;goto B54d7e7;
case 0x54d7e9:goto L54d7e9;
case 0x54d7ee:c.instructions+=1;goto B54d7ee;
case 0x54d7f0:goto L54d7f0;
case 0x54d7f3:c.instructions+=1;goto B54d7f3;
case 0x54d7f5:goto L54d7f5;
case 0x54d7f8:c.instructions+=2;goto B54d7f8;
case 0x54d7fa:c.instructions+=1;goto B54d7fa;
case 0x54d7fc:goto L54d7fc;
case 0x54d803:c.instructions+=3;goto B54d803;
case 0x54d806:c.instructions+=2;goto B54d806;
case 0x54d808:c.instructions+=1;goto B54d808;
case 0x54d80e:goto L54d80e;
case 0x54d813:goto L54d813;
case 0x54d816:c.instructions+=1;goto B54d816;
case 0x54d818:goto L54d818;
case 0x54d81b:c.instructions+=2;goto B54d81b;
case 0x54d81d:c.instructions+=1;goto B54d81d;
case 0x54d81f:goto L54d81f;
case 0x54d824:goto L54d824;
case 0x54d829:c.instructions+=9;goto B54d829;
case 0x54d830:c.instructions+=8;goto B54d830;
case 0x54d836:c.instructions+=7;goto B54d836;
case 0x54d837:c.instructions+=6;goto B54d837;
case 0x54d838:c.instructions+=5;goto B54d838;
case 0x54d839:c.instructions+=4;goto B54d839;
case 0x54d83b:c.instructions+=3;goto B54d83b;
case 0x54d840:c.instructions+=2;goto B54d840;
case 0x54d842:c.instructions+=1;goto B54d842;
case 0x54d847:goto L54d847;
case 0x54d84e:c.instructions+=7;goto B54d84e;
case 0x54d854:c.instructions+=6;goto B54d854;
case 0x54d855:c.instructions+=5;goto B54d855;
case 0x54d857:c.instructions+=4;goto B54d857;
case 0x54d858:c.instructions+=3;goto B54d858;
case 0x54d859:c.instructions+=2;goto B54d859;
case 0x54d85e:c.instructions+=1;goto B54d85e;
case 0x54d863:goto L54d863;
case 0x54d868:c.instructions+=8;goto B54d868;
case 0x54d86f:c.instructions+=7;goto B54d86f;
case 0x54d870:c.instructions+=6;goto B54d870;
case 0x54d872:c.instructions+=5;goto B54d872;
case 0x54d873:c.instructions+=4;goto B54d873;
case 0x54d875:c.instructions+=3;goto B54d875;
case 0x54d87a:c.instructions+=2;goto B54d87a;
case 0x54d87c:c.instructions+=1;goto B54d87c;
case 0x54d881:goto L54d881;
case 0x54d888:c.instructions+=6;goto B54d888;
case 0x54d889:c.instructions+=5;goto B54d889;
case 0x54d88b:c.instructions+=4;goto B54d88b;
case 0x54d88c:c.instructions+=3;goto B54d88c;
case 0x54d88e:c.instructions+=2;goto B54d88e;
case 0x54d893:c.instructions+=1;goto B54d893;
case 0x54d898:goto L54d898;
case 0x54d89c:c.instructions+=1;goto B54d89c;
case 0x54d8a2:goto L54d8a2;
case 0x54d8a4:c.instructions+=5;goto B54d8a4;
case 0x54d8a8:c.instructions+=4;goto B54d8a8;
case 0x54d8ad:c.instructions+=3;goto B54d8ad;
case 0x54d8b4:c.instructions+=2;goto B54d8b4;
case 0x54d8b8:c.instructions+=1;goto B54d8b8;
case 0x54d8ba:goto L54d8ba;
case 0x54d8bd:c.instructions+=2;goto B54d8bd;
case 0x54d8bf:c.instructions+=1;goto B54d8bf;
case 0x54d8c1:goto L54d8c1;
case 0x54d8c4:c.instructions+=1;goto B54d8c4;
case 0x54d8c6:goto L54d8c6;
case 0x54d8c9:c.instructions+=2;goto B54d8c9;
case 0x54d8cb:c.instructions+=1;goto B54d8cb;
case 0x54d8cd:goto L54d8cd;
case 0x54d8d4:c.instructions+=3;goto B54d8d4;
case 0x54d8d7:c.instructions+=2;goto B54d8d7;
case 0x54d8d9:c.instructions+=1;goto B54d8d9;
case 0x54d8db:goto L54d8db;
case 0x54d8e0:goto L54d8e0;
case 0x54d8e3:c.instructions+=1;goto B54d8e3;
case 0x54d8e5:goto L54d8e5;
case 0x54d8e8:c.instructions+=2;goto B54d8e8;
case 0x54d8ea:c.instructions+=1;goto B54d8ea;
case 0x54d8ec:goto L54d8ec;
case 0x54d8ee:goto L54d8ee;
case 0x54d8f2:c.instructions+=8;goto B54d8f2;
case 0x54d8f9:c.instructions+=7;goto B54d8f9;
case 0x54d8fa:c.instructions+=6;goto B54d8fa;
case 0x54d8fb:c.instructions+=5;goto B54d8fb;
case 0x54d8fc:c.instructions+=4;goto B54d8fc;
case 0x54d8fe:c.instructions+=3;goto B54d8fe;
case 0x54d8ff:c.instructions+=2;goto B54d8ff;
case 0x54d901:c.instructions+=1;goto B54d901;
case 0x54d906:goto L54d906;
case 0x54d90a:c.instructions+=6;goto B54d90a;
case 0x54d911:c.instructions+=5;goto B54d911;
case 0x54d912:c.instructions+=4;goto B54d912;
case 0x54d914:c.instructions+=3;goto B54d914;
case 0x54d915:c.instructions+=2;goto B54d915;
case 0x54d916:c.instructions+=1;goto B54d916;
case 0x54d918:goto L54d918;
case 0x54d91c:c.instructions+=8;goto B54d91c;
case 0x54d923:c.instructions+=7;goto B54d923;
case 0x54d924:c.instructions+=6;goto B54d924;
case 0x54d926:c.instructions+=5;goto B54d926;
case 0x54d927:c.instructions+=4;goto B54d927;
case 0x54d929:c.instructions+=3;goto B54d929;
case 0x54d92a:c.instructions+=2;goto B54d92a;
case 0x54d92c:c.instructions+=1;goto B54d92c;
case 0x54d931:goto L54d931;
case 0x54d935:c.instructions+=5;goto B54d935;
case 0x54d93c:c.instructions+=4;goto B54d93c;
case 0x54d93d:c.instructions+=3;goto B54d93d;
case 0x54d93f:c.instructions+=2;goto B54d93f;
case 0x54d940:c.instructions+=1;goto B54d940;
case 0x54d942:goto L54d942;
case 0x54d944:c.instructions+=2;goto B54d944;
case 0x54d945:c.instructions+=1;goto B54d945;
case 0x54d94a:goto L54d94a;
case 0x54d94e:c.instructions+=1;goto B54d94e;
case 0x54d954:goto L54d954;
case 0x54d956:c.instructions+=6;goto B54d956;
case 0x54d95a:c.instructions+=5;goto B54d95a;
case 0x54d95f:c.instructions+=4;goto B54d95f;
case 0x54d966:c.instructions+=3;goto B54d966;
case 0x54d96d:c.instructions+=2;goto B54d96d;
case 0x54d971:c.instructions+=1;goto B54d971;
case 0x54d973:goto L54d973;
case 0x54d976:c.instructions+=2;goto B54d976;
case 0x54d978:c.instructions+=1;goto B54d978;
case 0x54d97a:goto L54d97a;
case 0x54d980:goto L54d980;
case 0x54d983:c.instructions+=1;goto B54d983;
case 0x54d985:goto L54d985;
case 0x54d988:c.instructions+=2;goto B54d988;
case 0x54d98a:c.instructions+=1;goto B54d98a;
case 0x54d98c:goto L54d98c;
case 0x54d993:c.instructions+=3;goto B54d993;
case 0x54d996:c.instructions+=2;goto B54d996;
case 0x54d998:c.instructions+=1;goto B54d998;
case 0x54d99a:goto L54d99a;
case 0x54d9a0:goto L54d9a0;
case 0x54d9a3:c.instructions+=1;goto B54d9a3;
case 0x54d9a5:goto L54d9a5;
case 0x54d9a8:c.instructions+=2;goto B54d9a8;
case 0x54d9aa:c.instructions+=1;goto B54d9aa;
case 0x54d9ac:goto L54d9ac;
case 0x54d9ae:goto L54d9ae;
case 0x54d9b2:c.instructions+=8;goto B54d9b2;
case 0x54d9b9:c.instructions+=7;goto B54d9b9;
case 0x54d9ba:c.instructions+=6;goto B54d9ba;
case 0x54d9bb:c.instructions+=5;goto B54d9bb;
case 0x54d9bc:c.instructions+=4;goto B54d9bc;
case 0x54d9be:c.instructions+=3;goto B54d9be;
case 0x54d9bf:c.instructions+=2;goto B54d9bf;
case 0x54d9c1:c.instructions+=1;goto B54d9c1;
case 0x54d9c6:goto L54d9c6;
case 0x54d9ca:c.instructions+=6;goto B54d9ca;
case 0x54d9d1:c.instructions+=5;goto B54d9d1;
case 0x54d9d2:c.instructions+=4;goto B54d9d2;
case 0x54d9d4:c.instructions+=3;goto B54d9d4;
case 0x54d9d5:c.instructions+=2;goto B54d9d5;
case 0x54d9d6:c.instructions+=1;goto B54d9d6;
case 0x54d9d8:goto L54d9d8;
case 0x54d9dc:c.instructions+=8;goto B54d9dc;
case 0x54d9e3:c.instructions+=7;goto B54d9e3;
case 0x54d9e4:c.instructions+=6;goto B54d9e4;
case 0x54d9e6:c.instructions+=5;goto B54d9e6;
case 0x54d9e7:c.instructions+=4;goto B54d9e7;
case 0x54d9e9:c.instructions+=3;goto B54d9e9;
case 0x54d9ea:c.instructions+=2;goto B54d9ea;
case 0x54d9ec:c.instructions+=1;goto B54d9ec;
case 0x54d9f1:goto L54d9f1;
case 0x54d9f5:c.instructions+=5;goto B54d9f5;
case 0x54d9fc:c.instructions+=4;goto B54d9fc;
case 0x54d9fd:c.instructions+=3;goto B54d9fd;
case 0x54d9ff:c.instructions+=2;goto B54d9ff;
case 0x54da00:c.instructions+=1;goto B54da00;
case 0x54da02:goto L54da02;
case 0x54da03:goto L54da03;
case 0x54da05:c.instructions+=1;goto B54da05;
case 0x54da0a:goto L54da0a;
case 0x54da0e:c.instructions+=1;goto B54da0e;
case 0x54da14:goto L54da14;
case 0x54da18:c.instructions+=4;goto B54da18;
case 0x54da1f:c.instructions+=3;goto B54da1f;
case 0x54da24:c.instructions+=2;goto B54da24;
case 0x54da2b:c.instructions+=1;goto B54da2b;
case 0x54da2d:goto L54da2d;
case 0x54da2f:c.instructions+=1;goto B54da2f;
case 0x54da31:goto L54da31;
case 0x54da34:c.instructions+=2;goto B54da34;
case 0x54da3f:c.instructions+=1;goto B54da3f;
case 0x54da41:goto L54da41;
case 0x54da46:goto L54da46;
case 0x54da49:c.instructions+=2;goto B54da49;
case 0x54da4b:c.instructions+=1;goto B54da4b;
case 0x54da4d:goto L54da4d;
case 0x54da50:goto L54da50;
case 0x54da53:c.instructions+=1;goto B54da53;
case 0x54da55:goto L54da55;
case 0x54da58:c.instructions+=2;goto B54da58;
case 0x54da5a:c.instructions+=1;goto B54da5a;
case 0x54da5c:goto L54da5c;
case 0x54da5e:goto L54da5e;
case 0x54da65:c.instructions+=7;goto B54da65;
case 0x54da66:c.instructions+=6;goto B54da66;
case 0x54da67:c.instructions+=5;goto B54da67;
case 0x54da68:c.instructions+=4;goto B54da68;
case 0x54da6a:c.instructions+=3;goto B54da6a;
case 0x54da6b:c.instructions+=2;goto B54da6b;
case 0x54da6d:c.instructions+=1;goto B54da6d;
case 0x54da72:goto L54da72;
case 0x54da79:c.instructions+=7;goto B54da79;
case 0x54da7a:c.instructions+=6;goto B54da7a;
case 0x54da7c:c.instructions+=5;goto B54da7c;
case 0x54da7d:c.instructions+=4;goto B54da7d;
case 0x54da7e:c.instructions+=3;goto B54da7e;
case 0x54da7f:c.instructions+=2;goto B54da7f;
case 0x54da81:c.instructions+=1;goto B54da81;
case 0x54da86:goto L54da86;
case 0x54da8d:c.instructions+=3;goto B54da8d;
case 0x54da90:c.instructions+=2;goto B54da90;
case 0x54da92:c.instructions+=1;goto B54da92;
case 0x54da94:goto L54da94;
case 0x54da97:c.instructions+=1;goto B54da97;
case 0x54da99:goto L54da99;
case 0x54da9c:c.instructions+=2;goto B54da9c;
case 0x54da9e:c.instructions+=1;goto B54da9e;
case 0x54daa0:goto L54daa0;
case 0x54daa2:goto L54daa2;
case 0x54daa9:c.instructions+=7;goto B54daa9;
case 0x54daaa:c.instructions+=6;goto B54daaa;
case 0x54daac:c.instructions+=5;goto B54daac;
case 0x54daad:c.instructions+=4;goto B54daad;
case 0x54daaf:c.instructions+=3;goto B54daaf;
case 0x54dab0:c.instructions+=2;goto B54dab0;
case 0x54dab2:c.instructions+=1;goto B54dab2;
case 0x54dab7:goto L54dab7;
case 0x54dab8:c.instructions+=6;goto B54dab8;
case 0x54daba:c.instructions+=5;goto B54daba;
case 0x54dabb:c.instructions+=4;goto B54dabb;
case 0x54dabd:c.instructions+=3;goto B54dabd;
case 0x54dabe:c.instructions+=2;goto B54dabe;
case 0x54dac0:c.instructions+=1;goto B54dac0;
case 0x54dac5:goto L54dac5;
case 0x54dacb:c.instructions+=2;goto B54dacb;
case 0x54dacd:c.instructions+=1;goto B54dacd;
case 0x54dacf:goto L54dacf;
case 0x54dad1:c.instructions+=1;goto B54dad1;
case 0x54dad6:goto L54dad6;
case 0x54dada:c.instructions+=4;goto B54dada;
case 0x54dadb:c.instructions+=3;goto B54dadb;
case 0x54dade:c.instructions+=2;goto B54dade;
case 0x54dae2:c.instructions+=1;goto B54dae2;
case 0x54dae8:goto L54dae8;
case 0x54daef:c.instructions+=5;goto B54daef;
case 0x54daf2:c.instructions+=4;goto B54daf2;
case 0x54daf4:c.instructions+=3;goto B54daf4;
case 0x54daf8:c.instructions+=2;goto B54daf8;
case 0x54dafc:c.instructions+=1;goto B54dafc;
case 0x54db00:goto L54db00;
case 0x54db03:c.instructions+=2;goto B54db03;
case 0x54db05:c.instructions+=1;goto B54db05;
case 0x54db0b:goto L54db0b;
case 0x54db0d:c.instructions+=6;goto B54db0d;
case 0x54db12:c.instructions+=5;goto B54db12;
case 0x54db14:c.instructions+=4;goto B54db14;
case 0x54db1a:c.instructions+=3;goto B54db1a;
case 0x54db1c:c.instructions+=2;goto B54db1c;
case 0x54db21:c.instructions+=1;goto B54db21;
case 0x54db27:goto L54db27;
case 0x54db29:c.instructions+=1;goto B54db29;
case 0x54db30:goto L54db30;
case 0x54db32:c.instructions+=5;goto B54db32;
case 0x54db37:c.instructions+=4;goto B54db37;
case 0x54db39:c.instructions+=3;goto B54db39;
case 0x54db3d:c.instructions+=2;goto B54db3d;
case 0x54db3f:c.instructions+=1;goto B54db3f;
case 0x54db41:goto L54db41;
case 0x54db44:c.instructions+=7;goto B54db44;
case 0x54db46:c.instructions+=6;goto B54db46;
case 0x54db4c:c.instructions+=5;goto B54db4c;
case 0x54db4f:c.instructions+=4;goto B54db4f;
case 0x54db52:c.instructions+=3;goto B54db52;
case 0x54db54:c.instructions+=2;goto B54db54;
case 0x54db56:c.instructions+=1;goto B54db56;
case 0x54db58:goto L54db58;
case 0x54db5a:c.instructions+=3;goto B54db5a;
case 0x54db5c:c.instructions+=2;goto B54db5c;
case 0x54db5e:c.instructions+=1;goto B54db5e;
case 0x54db60:goto L54db60;
case 0x54db64:c.instructions+=4;goto B54db64;
case 0x54db66:c.instructions+=3;goto B54db66;
case 0x54db68:c.instructions+=2;goto B54db68;
case 0x54db6a:c.instructions+=1;goto B54db6a;
case 0x54db6e:goto L54db6e;
case 0x54db71:c.instructions+=3;goto B54db71;
case 0x54db73:c.instructions+=2;goto B54db73;
case 0x54db75:c.instructions+=1;goto B54db75;
case 0x54db77:goto L54db77;
case 0x54db79:c.instructions+=3;goto B54db79;
case 0x54db7b:c.instructions+=2;goto B54db7b;
case 0x54db7d:c.instructions+=1;goto B54db7d;
case 0x54db7f:goto L54db7f;
case 0x54db80:c.instructions+=2;goto B54db80;
case 0x54db82:c.instructions+=1;goto B54db82;
case 0x54db87:goto L54db87;
case 0x54db8b:c.instructions+=2;goto B54db8b;
case 0x54db8f:c.instructions+=1;goto B54db8f;
case 0x54db91:goto L54db91;
case 0x54db95:c.instructions+=1;goto B54db95;
case 0x54db97:goto L54db97;
case 0x54db98:c.instructions+=2;goto B54db98;
case 0x54db9a:c.instructions+=1;goto B54db9a;
case 0x54db9f:goto L54db9f;
case 0x54dba3:goto L54dba3;
case 0x54dba7:c.instructions+=6;goto B54dba7;
case 0x54dbab:c.instructions+=5;goto B54dbab;
case 0x54dbad:c.instructions+=4;goto B54dbad;
case 0x54dbaf:c.instructions+=3;goto B54dbaf;
case 0x54dbb1:c.instructions+=2;goto B54dbb1;
case 0x54dbb3:c.instructions+=1;goto B54dbb3;
case 0x54dbb7:goto L54dbb7;
case 0x54dbbb:c.instructions+=5;goto B54dbbb;
case 0x54dbbd:c.instructions+=4;goto B54dbbd;
case 0x54dbc0:c.instructions+=3;goto B54dbc0;
case 0x54dbc4:c.instructions+=2;goto B54dbc4;
case 0x54dbca:c.instructions+=1;goto B54dbca;
case 0x54dbd0:goto L54dbd0;
case 0x54dbd1:c.instructions+=3;goto B54dbd1;
case 0x54dbd4:c.instructions+=2;goto B54dbd4;
case 0x54dbd8:c.instructions+=1;goto B54dbd8;
case 0x54dbde:goto L54dbde;
case 0x54dbe0:goto L54dbe0;
case 0x54dbe3:c.instructions+=2;goto B54dbe3;
case 0x54dbe5:c.instructions+=1;goto B54dbe5;
case 0x54dbeb:goto L54dbeb;
case 0x54dbf2:c.instructions+=5;goto B54dbf2;
case 0x54dbf8:c.instructions+=4;goto B54dbf8;
case 0x54dbff:c.instructions+=3;goto B54dbff;
case 0x54dc01:c.instructions+=2;goto B54dc01;
case 0x54dc05:c.instructions+=1;goto B54dc05;
case 0x54dc07:goto L54dc07;
case 0x54dc0f:c.instructions+=6;goto B54dc0f;
case 0x54dc13:c.instructions+=5;goto B54dc13;
case 0x54dc16:c.instructions+=4;goto B54dc16;
case 0x54dc1a:c.instructions+=3;goto B54dc1a;
case 0x54dc1c:c.instructions+=2;goto B54dc1c;
case 0x54dc20:c.instructions+=1;goto B54dc20;
case 0x54dc22:goto L54dc22;
case 0x54dc26:goto L54dc26;
case 0x54dc2a:c.instructions+=13;goto B54dc2a;
case 0x54dc2e:c.instructions+=12;goto B54dc2e;
case 0x54dc30:c.instructions+=11;goto B54dc30;
case 0x54dc32:c.instructions+=10;goto B54dc32;
case 0x54dc34:c.instructions+=9;goto B54dc34;
case 0x54dc36:c.instructions+=8;goto B54dc36;
case 0x54dc3b:c.instructions+=7;goto B54dc3b;
case 0x54dc3d:c.instructions+=6;goto B54dc3d;
case 0x54dc42:c.instructions+=5;goto B54dc42;
case 0x54dc47:c.instructions+=4;goto B54dc47;
case 0x54dc49:c.instructions+=3;goto B54dc49;
case 0x54dc4e:c.instructions+=2;goto B54dc4e;
case 0x54dc50:c.instructions+=1;goto B54dc50;
case 0x54dc52:goto L54dc52;
case 0x54dc5a:c.instructions+=6;goto B54dc5a;
case 0x54dc5e:c.instructions+=5;goto B54dc5e;
case 0x54dc63:c.instructions+=4;goto B54dc63;
case 0x54dc68:c.instructions+=3;goto B54dc68;
case 0x54dc6c:c.instructions+=2;goto B54dc6c;
case 0x54dc70:c.instructions+=1;goto B54dc70;
case 0x54dc72:goto L54dc72;
case 0x54dc74:c.instructions+=13;goto B54dc74;
case 0x54dc77:c.instructions+=12;goto B54dc77;
case 0x54dc79:c.instructions+=11;goto B54dc79;
case 0x54dc7e:c.instructions+=10;goto B54dc7e;
case 0x54dc80:c.instructions+=9;goto B54dc80;
case 0x54dc84:c.instructions+=8;goto B54dc84;
case 0x54dc87:c.instructions+=7;goto B54dc87;
case 0x54dc89:c.instructions+=6;goto B54dc89;
case 0x54dc8b:c.instructions+=5;goto B54dc8b;
case 0x54dc8d:c.instructions+=4;goto B54dc8d;
case 0x54dc92:c.instructions+=3;goto B54dc92;
case 0x54dc97:c.instructions+=2;goto B54dc97;
case 0x54dc99:c.instructions+=1;goto B54dc99;
case 0x54dc9b:goto L54dc9b;
case 0x54dc9d:c.instructions+=1;goto B54dc9d;
case 0x54dc9f:goto L54dc9f;
case 0x54dca1:c.instructions+=1;goto B54dca1;
case 0x54dca3:goto L54dca3;
case 0x54dca5:goto L54dca5;
case 0x54dca9:c.instructions+=2;goto B54dca9;
case 0x54dcab:c.instructions+=1;goto B54dcab;
case 0x54dcad:goto L54dcad;
case 0x54dcb0:c.instructions+=3;goto B54dcb0;
case 0x54dcb2:c.instructions+=2;goto B54dcb2;
case 0x54dcb4:c.instructions+=1;goto B54dcb4;
case 0x54dcb7:goto L54dcb7;
case 0x54dcbd:c.instructions+=2;goto B54dcbd;
case 0x54dcbf:c.instructions+=1;goto B54dcbf;
case 0x54dcc1:goto L54dcc1;
case 0x54dcc3:c.instructions+=1;goto B54dcc3;
case 0x54dcc8:goto L54dcc8;
case 0x54dcc9:c.instructions+=2;goto B54dcc9;
case 0x54dccc:c.instructions+=1;goto B54dccc;
case 0x54dcd2:goto L54dcd2;
case 0x54dcd3:c.instructions+=5;goto B54dcd3;
case 0x54dcd4:c.instructions+=4;goto B54dcd4;
case 0x54dcd5:c.instructions+=3;goto B54dcd5;
case 0x54dcd6:c.instructions+=2;goto B54dcd6;
case 0x54dcdc:c.instructions+=1;goto B54dcdc;
case 0x54dcdf:goto L54dcdf;
case 0x54dce3:c.instructions+=2;goto B54dce3;
case 0x54dce5:c.instructions+=1;goto B54dce5;
case 0x54dce7:goto L54dce7;
case 0x54dce9:c.instructions+=3;goto B54dce9;
case 0x54dcee:c.instructions+=2;goto B54dcee;
case 0x54dcf0:c.instructions+=1;goto B54dcf0;
case 0x54dcf3:goto L54dcf3;
case 0x54dcfb:c.instructions+=4;goto B54dcfb;
case 0x54dcff:c.instructions+=3;goto B54dcff;
case 0x54dd06:c.instructions+=2;goto B54dd06;
case 0x54dd09:c.instructions+=1;goto B54dd09;
case 0x54dd0b:goto L54dd0b;
case 0x54dd0e:c.instructions+=1;goto B54dd0e;
case 0x54dd12:goto L54dd12;
case 0x54dd19:c.instructions+=3;goto B54dd19;
case 0x54dd1b:c.instructions+=2;goto B54dd1b;
case 0x54dd23:c.instructions+=1;goto B54dd23;
case 0x54dd25:goto L54dd25;
case 0x54dd28:c.instructions+=13;goto B54dd28;
case 0x54dd2a:c.instructions+=12;goto B54dd2a;
case 0x54dd2e:c.instructions+=11;goto B54dd2e;
case 0x54dd33:c.instructions+=10;goto B54dd33;
case 0x54dd35:c.instructions+=9;goto B54dd35;
case 0x54dd3a:c.instructions+=8;goto B54dd3a;
case 0x54dd3e:c.instructions+=7;goto B54dd3e;
case 0x54dd42:c.instructions+=6;goto B54dd42;
case 0x54dd44:c.instructions+=5;goto B54dd44;
case 0x54dd48:c.instructions+=4;goto B54dd48;
case 0x54dd4a:c.instructions+=3;goto B54dd4a;
case 0x54dd4c:c.instructions+=2;goto B54dd4c;
case 0x54dd4f:c.instructions+=1;goto B54dd4f;
case 0x54dd51:goto L54dd51;
case 0x54dd56:c.instructions+=4;goto B54dd56;
case 0x54dd58:c.instructions+=3;goto B54dd58;
case 0x54dd60:c.instructions+=2;goto B54dd60;
case 0x54dd63:c.instructions+=1;goto B54dd63;
case 0x54dd65:goto L54dd65;
case 0x54dd69:c.instructions+=2;goto B54dd69;
case 0x54dd6b:c.instructions+=1;goto B54dd6b;
case 0x54dd71:goto L54dd71;
case 0x54dd79:c.instructions+=8;goto B54dd79;
case 0x54dd80:c.instructions+=7;goto B54dd80;
case 0x54dd87:c.instructions+=6;goto B54dd87;
case 0x54dd8b:c.instructions+=5;goto B54dd8b;
case 0x54dd8e:c.instructions+=4;goto B54dd8e;
case 0x54dd90:c.instructions+=3;goto B54dd90;
case 0x54dd94:c.instructions+=2;goto B54dd94;
case 0x54dd98:c.instructions+=1;goto B54dd98;
case 0x54dd9a:goto L54dd9a;
case 0x54dda0:goto L54dda0;
case 0x54dda3:c.instructions+=1;goto B54dda3;
case 0x54dda9:goto L54dda9;
case 0x54ddac:c.instructions+=2;goto B54ddac;
case 0x54ddae:c.instructions+=1;goto B54ddae;
case 0x54ddb0:goto L54ddb0;
case 0x54ddb7:c.instructions+=2;goto B54ddb7;
case 0x54ddbe:c.instructions+=1;goto B54ddbe;
case 0x54ddc0:goto L54ddc0;
case 0x54ddc6:c.instructions+=8;goto B54ddc6;
case 0x54ddcc:c.instructions+=7;goto B54ddcc;
case 0x54ddcd:c.instructions+=6;goto B54ddcd;
case 0x54ddce:c.instructions+=5;goto B54ddce;
case 0x54ddcf:c.instructions+=4;goto B54ddcf;
case 0x54ddd3:c.instructions+=3;goto B54ddd3;
case 0x54ddd4:c.instructions+=2;goto B54ddd4;
case 0x54ddda:c.instructions+=1;goto B54ddda;
case 0x54dddf:goto L54dddf;
case 0x54dde3:goto L54dde3;
case 0x54dde7:c.instructions+=7;goto B54dde7;
case 0x54dde8:c.instructions+=6;goto B54dde8;
case 0x54ddea:c.instructions+=5;goto B54ddea;
case 0x54ddeb:c.instructions+=4;goto B54ddeb;
case 0x54dded:c.instructions+=3;goto B54dded;
case 0x54ddee:c.instructions+=2;goto B54ddee;
case 0x54ddf0:c.instructions+=1;goto B54ddf0;
case 0x54ddf5:goto L54ddf5;
case 0x54ddf9:c.instructions+=8;goto B54ddf9;
case 0x54ddfd:c.instructions+=7;goto B54ddfd;
case 0x54ddfe:c.instructions+=6;goto B54ddfe;
case 0x54de00:c.instructions+=5;goto B54de00;
case 0x54de01:c.instructions+=4;goto B54de01;
case 0x54de02:c.instructions+=3;goto B54de02;
case 0x54de03:c.instructions+=2;goto B54de03;
case 0x54de05:c.instructions+=1;goto B54de05;
case 0x54de0a:goto L54de0a;
case 0x54de0e:c.instructions+=2;goto B54de0e;
case 0x54de10:c.instructions+=1;goto B54de10;
case 0x54de16:goto L54de16;
case 0x54de1b:c.instructions+=1;goto B54de1b;
case 0x54de20:goto L54de20;
case 0x54de27:c.instructions+=2;goto B54de27;
case 0x54de29:c.instructions+=1;goto B54de29;
case 0x54de2f:goto L54de2f;
case 0x54de32:c.instructions+=3;goto B54de32;
case 0x54de3d:c.instructions+=2;goto B54de3d;
case 0x54de44:c.instructions+=1;goto B54de44;
case 0x54de46:goto L54de46;
case 0x54de4b:goto L54de4b;
case 0x54de4f:c.instructions+=3;goto B54de4f;
case 0x54de52:c.instructions+=2;goto B54de52;
case 0x54de54:c.instructions+=1;goto B54de54;
case 0x54de5a:goto L54de5a;
case 0x54de60:goto L54de60;
case 0x54de63:c.instructions+=1;goto B54de63;
case 0x54de69:goto L54de69;
case 0x54de6c:c.instructions+=2;goto B54de6c;
case 0x54de6e:c.instructions+=1;goto B54de6e;
case 0x54de70:goto L54de70;
case 0x54de75:goto L54de75;
case 0x54de77:c.instructions+=1;goto B54de77;
case 0x54de7d:goto L54de7d;
case 0x54de81:c.instructions+=9;goto B54de81;
case 0x54de88:c.instructions+=8;goto B54de88;
case 0x54de8c:c.instructions+=7;goto B54de8c;
case 0x54de8d:c.instructions+=6;goto B54de8d;
case 0x54de8e:c.instructions+=5;goto B54de8e;
case 0x54de8f:c.instructions+=4;goto B54de8f;
case 0x54de91:c.instructions+=3;goto B54de91;
case 0x54de92:c.instructions+=2;goto B54de92;
case 0x54de94:c.instructions+=1;goto B54de94;
case 0x54de99:goto L54de99;
case 0x54de9d:c.instructions+=2;goto B54de9d;
case 0x54dea4:c.instructions+=1;goto B54dea4;
case 0x54deaa:goto L54deaa;
case 0x54dead:c.instructions+=3;goto B54dead;
case 0x54deaf:c.instructions+=2;goto B54deaf;
case 0x54deb1:c.instructions+=1;goto B54deb1;
case 0x54deb3:goto L54deb3;
case 0x54deb6:goto L54deb6;
case 0x54debc:c.instructions+=1;goto B54debc;
case 0x54debe:goto L54debe;
case 0x54debf:c.instructions+=3;goto B54debf;
case 0x54dec2:c.instructions+=2;goto B54dec2;
case 0x54dec4:c.instructions+=1;goto B54dec4;
case 0x54dec6:goto L54dec6;
case 0x54dec8:goto L54dec8;
case 0x54decb:c.instructions+=1;goto B54decb;
case 0x54ded1:goto L54ded1;
case 0x54ded7:c.instructions+=10;goto B54ded7;
case 0x54dedb:c.instructions+=9;goto B54dedb;
case 0x54dee1:c.instructions+=8;goto B54dee1;
case 0x54dee2:c.instructions+=7;goto B54dee2;
case 0x54dee5:c.instructions+=6;goto B54dee5;
case 0x54dee6:c.instructions+=5;goto B54dee6;
case 0x54deea:c.instructions+=4;goto B54deea;
case 0x54deeb:c.instructions+=3;goto B54deeb;
case 0x54deec:c.instructions+=2;goto B54deec;
case 0x54def2:c.instructions+=1;goto B54def2;
case 0x54def7:goto L54def7;
case 0x54defb:c.instructions+=1;goto B54defb;
case 0x54df00:goto L54df00;
case 0x54df05:c.instructions+=8;goto B54df05;
case 0x54df09:c.instructions+=7;goto B54df09;
case 0x54df0a:c.instructions+=6;goto B54df0a;
case 0x54df0b:c.instructions+=5;goto B54df0b;
case 0x54df0c:c.instructions+=4;goto B54df0c;
case 0x54df0e:c.instructions+=3;goto B54df0e;
case 0x54df0f:c.instructions+=2;goto B54df0f;
case 0x54df11:c.instructions+=1;goto B54df11;
case 0x54df16:goto L54df16;
case 0x54df1b:c.instructions+=8;goto B54df1b;
case 0x54df1c:c.instructions+=7;goto B54df1c;
case 0x54df20:c.instructions+=6;goto B54df20;
case 0x54df22:c.instructions+=5;goto B54df22;
case 0x54df23:c.instructions+=4;goto B54df23;
case 0x54df24:c.instructions+=3;goto B54df24;
case 0x54df25:c.instructions+=2;goto B54df25;
case 0x54df27:c.instructions+=1;goto B54df27;
case 0x54df2c:goto L54df2c;
case 0x54df2d:c.instructions+=2;goto B54df2d;
case 0x54df30:c.instructions+=1;goto B54df30;
case 0x54df36:goto L54df36;
case 0x54df3c:c.instructions+=2;goto B54df3c;
case 0x54df3e:c.instructions+=1;goto B54df3e;
case 0x54df40:goto L54df40;
case 0x54df42:c.instructions+=6;goto B54df42;
case 0x54df43:c.instructions+=5;goto B54df43;
case 0x54df44:c.instructions+=4;goto B54df44;
case 0x54df46:c.instructions+=3;goto B54df46;
case 0x54df4b:c.instructions+=2;goto B54df4b;
case 0x54df4d:c.instructions+=1;goto B54df4d;
case 0x54df52:goto L54df52;
case 0x54df58:c.instructions+=7;goto B54df58;
case 0x54df5a:c.instructions+=6;goto B54df5a;
case 0x54df5c:c.instructions+=5;goto B54df5c;
case 0x54df5d:c.instructions+=4;goto B54df5d;
case 0x54df5e:c.instructions+=3;goto B54df5e;
case 0x54df63:c.instructions+=2;goto B54df63;
case 0x54df65:c.instructions+=1;goto B54df65;
case 0x54df6a:goto L54df6a;
case 0x54df6e:c.instructions+=7;goto B54df6e;
case 0x54df70:c.instructions+=6;goto B54df70;
case 0x54df71:c.instructions+=5;goto B54df71;
case 0x54df72:c.instructions+=4;goto B54df72;
case 0x54df74:c.instructions+=3;goto B54df74;
case 0x54df79:c.instructions+=2;goto B54df79;
case 0x54df7b:c.instructions+=1;goto B54df7b;
case 0x54df80:goto L54df80;
case 0x54df82:c.instructions+=6;goto B54df82;
case 0x54df84:c.instructions+=5;goto B54df84;
case 0x54df85:c.instructions+=4;goto B54df85;
case 0x54df86:c.instructions+=3;goto B54df86;
case 0x54df8b:c.instructions+=2;goto B54df8b;
case 0x54df8d:c.instructions+=1;goto B54df8d;
case 0x54df92:goto L54df92;
case 0x54df98:c.instructions+=6;goto B54df98;
case 0x54df99:c.instructions+=5;goto B54df99;
case 0x54df9a:c.instructions+=4;goto B54df9a;
case 0x54df9b:c.instructions+=3;goto B54df9b;
case 0x54df9c:c.instructions+=2;goto B54df9c;
case 0x54dfa2:c.instructions+=1;goto B54dfa2;
case 0x54dfa5:goto L54dfa5;
case 0x54dfac:c.instructions+=5;goto B54dfac;
case 0x54dfb4:c.instructions+=4;goto B54dfb4;
case 0x54dfb7:c.instructions+=3;goto B54dfb7;
case 0x54dfb9:c.instructions+=2;goto B54dfb9;
case 0x54dfc0:c.instructions+=1;goto B54dfc0;
case 0x54dfc2:goto L54dfc2;
case 0x54dfc5:c.instructions+=1;goto B54dfc5;
case 0x54dfc7:goto L54dfc7;
case 0x54dfca:c.instructions+=2;goto B54dfca;
case 0x54dfcc:c.instructions+=1;goto B54dfcc;
case 0x54dfce:goto L54dfce;
case 0x54dfcf:c.instructions+=5;goto B54dfcf;
case 0x54dfd0:c.instructions+=4;goto B54dfd0;
case 0x54dfd1:c.instructions+=3;goto B54dfd1;
case 0x54dfd2:c.instructions+=2;goto B54dfd2;
case 0x54dfd8:c.instructions+=1;goto B54dfd8;
case 0x54dfdb:goto L54dfdb;
case 0x54dfdc:c.instructions+=6;goto B54dfdc;
case 0x54dfde:c.instructions+=5;goto B54dfde;
case 0x54dfdf:c.instructions+=4;goto B54dfdf;
case 0x54dfe1:c.instructions+=3;goto B54dfe1;
case 0x54dfe2:c.instructions+=2;goto B54dfe2;
case 0x54dfe4:c.instructions+=1;goto B54dfe4;
case 0x54dfe9:goto L54dfe9;
case 0x54dfea:c.instructions+=6;goto B54dfea;
case 0x54dfec:c.instructions+=5;goto B54dfec;
case 0x54dfed:c.instructions+=4;goto B54dfed;
case 0x54dfef:c.instructions+=3;goto B54dfef;
case 0x54dff0:c.instructions+=2;goto B54dff0;
case 0x54dff2:c.instructions+=1;goto B54dff2;
case 0x54dff7:goto L54dff7;
case 0x54dff8:c.instructions+=1;goto B54dff8;
case 0x54dff9:goto L54dff9;
case 0x54dffa:c.instructions+=2;goto B54dffa;
case 0x54dffb:c.instructions+=1;goto B54dffb;
default:missing_instruction(c.pc);}
B54d001:L54d001:{c.instructions+=2;NFSU2_TR(0x54d001);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B54d003:{NFSU2_TR(0x54d003);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L54d021;}}
}
B54d005:L54d005:{c.instructions+=2;NFSU2_TR(0x54d005);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B54d007:{NFSU2_TR(0x54d007);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L54d07c;}}
}
B54d009:L54d009:{c.instructions+=8;NFSU2_TR(0x54d009);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54d00c:{NFSU2_TR(0x54d00c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d00d:{NFSU2_TR(0x54d00d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d00e:{NFSU2_TR(0x54d00e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d00f:{NFSU2_TR(0x54d00f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d010:{NFSU2_TR(0x54d010);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d011:{NFSU2_TR(0x54d011);
__builtin_memmove((R+4),(R+28),4);
}
B54d013:{NFSU2_TR(0x54d013);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54d018ull));
TAIL_STATIC(0x534c70u,534);
}
B54d018:L54d018:{c.instructions+=5;NFSU2_TR(0x54d018);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d01b:{NFSU2_TR(0x54d01b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B54d01d:{NFSU2_TR(0x54d01d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d01e:{NFSU2_TR(0x54d01e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d01f:{NFSU2_TR(0x54d01f);
{goto L54d07e;}
}
B54d021:L54d021:{c.instructions+=3;NFSU2_TR(0x54d021);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B54d023:{NFSU2_TR(0x54d023);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B54d025:{NFSU2_TR(0x54d025);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L54d033;}}
}
B54d027:L54d027:{c.instructions+=8;NFSU2_TR(0x54d027);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54d02a:{NFSU2_TR(0x54d02a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B54d02c:{NFSU2_TR(0x54d02c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d02d:{NFSU2_TR(0x54d02d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d02e:{NFSU2_TR(0x54d02e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d02f:{NFSU2_TR(0x54d02f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d030:{NFSU2_TR(0x54d030);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d031:{NFSU2_TR(0x54d031);
{goto L54d084;}
}
B54d033:L54d033:{c.instructions+=8;NFSU2_TR(0x54d033);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d036:{NFSU2_TR(0x54d036);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d038:{NFSU2_TR(0x54d038);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d039:{NFSU2_TR(0x54d039);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d03a:{NFSU2_TR(0x54d03a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d03b:{NFSU2_TR(0x54d03b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d03c:{NFSU2_TR(0x54d03c);
__builtin_memmove((R+4),(R+28),4);
}
B54d03e:{NFSU2_TR(0x54d03e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54d043ull));
TAIL_STATIC(0x534c70u,534);
}
B54d043:L54d043:{c.instructions+=8;NFSU2_TR(0x54d043);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54d046:{NFSU2_TR(0x54d046);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54d049:{NFSU2_TR(0x54d049);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d04a:{NFSU2_TR(0x54d04a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d04c:{NFSU2_TR(0x54d04c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d04d:{NFSU2_TR(0x54d04d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d04e:{NFSU2_TR(0x54d04e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d04f:{NFSU2_TR(0x54d04f);
{goto L54d084;}
}
B54d051:L54d051:{c.instructions+=2;NFSU2_TR(0x54d051);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B54d053:{NFSU2_TR(0x54d053);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L54d072;}}
}
B54d055:L54d055:{c.instructions+=8;NFSU2_TR(0x54d055);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d058:{NFSU2_TR(0x54d058);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d059:{NFSU2_TR(0x54d059);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d05a:{NFSU2_TR(0x54d05a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d05b:{NFSU2_TR(0x54d05b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d05c:{NFSU2_TR(0x54d05c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d05d:{NFSU2_TR(0x54d05d);
__builtin_memmove((R+4),(R+28),4);
}
B54d05f:{NFSU2_TR(0x54d05f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54d064ull));
TAIL_STATIC(0x534c70u,534);
}
B54d064:L54d064:{c.instructions+=8;NFSU2_TR(0x54d064);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54d067:{NFSU2_TR(0x54d067);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54d06a:{NFSU2_TR(0x54d06a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d06b:{NFSU2_TR(0x54d06b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d06d:{NFSU2_TR(0x54d06d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d06e:{NFSU2_TR(0x54d06e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d06f:{NFSU2_TR(0x54d06f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d070:{NFSU2_TR(0x54d070);
{goto L54d084;}
}
B54d072:L54d072:{c.instructions+=7;NFSU2_TR(0x54d072);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d073:{NFSU2_TR(0x54d073);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d076:{NFSU2_TR(0x54d076);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d077:{NFSU2_TR(0x54d077);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d078:{NFSU2_TR(0x54d078);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d079:{NFSU2_TR(0x54d079);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d07a:{NFSU2_TR(0x54d07a);
{goto L54d084;}
}
B54d07c:L54d07c:{c.instructions+=2;NFSU2_TR(0x54d07c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d07d:{NFSU2_TR(0x54d07d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d07e:L54d07e:{c.instructions+=4;NFSU2_TR(0x54d07e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54d081:{NFSU2_TR(0x54d081);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d082:{NFSU2_TR(0x54d082);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d083:{NFSU2_TR(0x54d083);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d084:L54d084:{c.instructions+=2;NFSU2_TR(0x54d084);
__builtin_memmove((R+4),(R+28),4);
}
B54d086:{NFSU2_TR(0x54d086);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54d08bull));
TAIL_STATIC(0x534c70u,534);
}
B54d08b:L54d08b:{c.instructions+=4;NFSU2_TR(0x54d08b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54d08f:{NFSU2_TR(0x54d08f);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54d092:{NFSU2_TR(0x54d092);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54d094:{NFSU2_TR(0x54d094);
if(r1(R+518)){{goto L54d0ac;}}
}
B54d096:L54d096:{c.instructions+=2;NFSU2_TR(0x54d096);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54d099:{NFSU2_TR(0x54d099);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54d0ac;}}
}
B54d09b:L54d09b:{c.instructions+=4;NFSU2_TR(0x54d09b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54d09e:{NFSU2_TR(0x54d09e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B54d09f:{NFSU2_TR(0x54d09f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54d0a1:{NFSU2_TR(0x54d0a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54d0ac;}}
}
B54d0a3:L54d0a3:{c.instructions+=2;NFSU2_TR(0x54d0a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0x400000ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B54d0aa:{NFSU2_TR(0x54d0aa);
if(r1(R+518)){{goto L54d0b9;}}
}
B54d0ac:L54d0ac:{c.instructions+=4;NFSU2_TR(0x54d0ac);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d0ad:{NFSU2_TR(0x54d0ad);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d0ae:{NFSU2_TR(0x54d0ae);
__builtin_memmove((R+4),(R+28),4);
}
B54d0b0:{NFSU2_TR(0x54d0b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54d0b5ull));
TAIL_STATIC(0x541db0u,541);
}
B54d0b5:L54d0b5:{c.instructions+=1;NFSU2_TR(0x54d0b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54d0b9:L54d0b9:{c.instructions+=4;NFSU2_TR(0x54d0b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d0bc:{NFSU2_TR(0x54d0bc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B54d0bf:{NFSU2_TR(0x54d0bf);
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
B54d0c2:{NFSU2_TR(0x54d0c2);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L54d11b;}}
}
B54d0c4:L54d0c4:{c.instructions+=1;NFSU2_TR(0x54d0c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x54d178ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54d0cb:L54d0cb:{c.instructions+=5;NFSU2_TR(0x54d0cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d0cf:{NFSU2_TR(0x54d0cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d0d0:{NFSU2_TR(0x54d0d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d0d1:{NFSU2_TR(0x54d0d1);
__builtin_memmove((R+4),(R+28),4);
}
B54d0d3:{NFSU2_TR(0x54d0d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54d0d8ull));
TAIL_STATIC(0x504910u,504);
}
B54d0d8:L54d0d8:{c.instructions+=2;NFSU2_TR(0x54d0d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54d0dc:{NFSU2_TR(0x54d0dc);
{goto L54d11b;}
}
B54d0de:L54d0de:{c.instructions+=5;NFSU2_TR(0x54d0de);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B54d0e2:{NFSU2_TR(0x54d0e2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d0e3:{NFSU2_TR(0x54d0e3);
__builtin_memmove((R+4),(R+20),4);
}
B54d0e5:{NFSU2_TR(0x54d0e5);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B54d0e8:{NFSU2_TR(0x54d0e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54d0edull));
TAIL_STATIC(0x517230u,517);
}
B54d0ed:L54d0ed:{c.instructions+=2;NFSU2_TR(0x54d0ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54d0f1:{NFSU2_TR(0x54d0f1);
{goto L54d11b;}
}
B54d0f3:L54d0f3:{c.instructions+=5;NFSU2_TR(0x54d0f3);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B54d0f7:{NFSU2_TR(0x54d0f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d0f8:{NFSU2_TR(0x54d0f8);
__builtin_memmove((R+4),(R+20),4);
}
B54d0fa:{NFSU2_TR(0x54d0fa);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B54d0fd:{NFSU2_TR(0x54d0fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54d102ull));
TAIL_STATIC(0x504dc0u,504);
}
B54d102:L54d102:{c.instructions+=2;NFSU2_TR(0x54d102);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54d106:{NFSU2_TR(0x54d106);
{goto L54d11b;}
}
B54d108:L54d108:{c.instructions+=3;NFSU2_TR(0x54d108);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54d10b:{NFSU2_TR(0x54d10b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54d10d:{NFSU2_TR(0x54d10d);
if(r1(R+518)){{goto L54d11b;}}
}
B54d10f:L54d10f:{c.instructions+=4;NFSU2_TR(0x54d10f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d112:{NFSU2_TR(0x54d112);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54d116:{NFSU2_TR(0x54d116);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B54d118:{NFSU2_TR(0x54d118);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d11b:L54d11b:{c.instructions+=2;NFSU2_TR(0x54d11b);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B54d11f:{NFSU2_TR(0x54d11f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54d149;}}
}
B54d121:L54d121:{c.instructions+=2;NFSU2_TR(0x54d121);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54d124:{NFSU2_TR(0x54d124);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54d149;}}
}
B54d126:L54d126:{c.instructions+=4;NFSU2_TR(0x54d126);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d129:{NFSU2_TR(0x54d129);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B54d12a:{NFSU2_TR(0x54d12a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54d12c:{NFSU2_TR(0x54d12c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54d149;}}
}
B54d12e:L54d12e:{c.instructions+=3;NFSU2_TR(0x54d12e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d131:{NFSU2_TR(0x54d131);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54d136:{NFSU2_TR(0x54d136);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54d149;}}
}
B54d138:L54d138:{c.instructions+=4;NFSU2_TR(0x54d138);
__builtin_memmove((R+4),gp(0x7f7c8c),4);
}
B54d13e:{NFSU2_TR(0x54d13e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xfe7fffffull))));
}
B54d144:{NFSU2_TR(0x54d144);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
}
B54d146:{NFSU2_TR(0x54d146);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d149:L54d149:{c.instructions+=10;NFSU2_TR(0x54d149);
__builtin_memmove((R+8),gp(0x7f7c8c),4);
}
B54d14f:{NFSU2_TR(0x54d14f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54d152:{NFSU2_TR(0x54d152);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xffbfffffull))));
}
B54d158:{NFSU2_TR(0x54d158);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+8))));
}
B54d15a:{NFSU2_TR(0x54d15a);
__builtin_memmove((R+0),(R+24),4);
}
B54d15c:{NFSU2_TR(0x54d15c);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(u32(0x1c00000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B54d161:{NFSU2_TR(0x54d161);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d164:{NFSU2_TR(0x54d164);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54d165:{NFSU2_TR(0x54d165);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54d166:{NFSU2_TR(0x54d166);
if(r1(R+518)){{goto L54d170;}}
}
B54d168:L54d168:{c.instructions+=2;NFSU2_TR(0x54d168);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x2000000ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B54d16d:{NFSU2_TR(0x54d16d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d170:L54d170:{c.instructions+=4;NFSU2_TR(0x54d170);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54d171:{NFSU2_TR(0x54d171);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54d172:{NFSU2_TR(0x54d172);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B54d173:{NFSU2_TR(0x54d173);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54d190:L54d190:{c.instructions+=11;NFSU2_TR(0x54d190);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d194:{NFSU2_TR(0x54d194);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d195:{NFSU2_TR(0x54d195);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B54d199:{NFSU2_TR(0x54d199);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d19a:{NFSU2_TR(0x54d19a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d19b:{NFSU2_TR(0x54d19b);
__builtin_memmove((R+28),(R+4),4);
}
B54d19d:{NFSU2_TR(0x54d19d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54d1a0:{NFSU2_TR(0x54d1a0);
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
B54d1a2:{NFSU2_TR(0x54d1a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d1a5:{NFSU2_TR(0x54d1a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d1a8:{NFSU2_TR(0x54d1a8);
if(r1(R+518)){{goto L54d1c0;}}
}
B54d1aa:L54d1aa:{c.instructions+=1;NFSU2_TR(0x54d1aa);
__builtin_memmove((R+12),(R+12),4);
}
B54d1b0:L54d1b0:{c.instructions+=4;NFSU2_TR(0x54d1b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d1b1:{NFSU2_TR(0x54d1b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d1b2:{NFSU2_TR(0x54d1b2);
__builtin_memmove((R+4),(R+28),4);
}
B54d1b4:{NFSU2_TR(0x54d1b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54d1b9ull));
TAIL_STATIC(0x54ce60u,54c);
}
B54d1b9:L54d1b9:{c.instructions+=3;NFSU2_TR(0x54d1b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54d1bc:{NFSU2_TR(0x54d1bc);
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
B54d1be:{NFSU2_TR(0x54d1be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54d1b0u);}goto L54d1b0;}}
}
B54d1c0:L54d1c0:{c.instructions+=4;NFSU2_TR(0x54d1c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54d1c1:{NFSU2_TR(0x54d1c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54d1c2:{NFSU2_TR(0x54d1c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54d1c3:{NFSU2_TR(0x54d1c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54d1d0:L54d1d0:{c.instructions+=18;NFSU2_TR(0x54d1d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d1d1:{NFSU2_TR(0x54d1d1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d1d5:{NFSU2_TR(0x54d1d5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d1d6:{NFSU2_TR(0x54d1d6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d1d7:{NFSU2_TR(0x54d1d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B54d1db:{NFSU2_TR(0x54d1db);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d1dc:{NFSU2_TR(0x54d1dc);
__builtin_memmove((R+8),(R+4),4);
}
B54d1de:{NFSU2_TR(0x54d1de);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
}
B54d1e0:{NFSU2_TR(0x54d1e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d1e1:{NFSU2_TR(0x54d1e1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B54d1e3:{NFSU2_TR(0x54d1e3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B54d1e5:{NFSU2_TR(0x54d1e5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B54d1e7:{NFSU2_TR(0x54d1e7);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B54d1ea:{NFSU2_TR(0x54d1ea);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+20))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+6)));
w4(U+10,u32(u32(r4(R+20))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B54d1ec:{NFSU2_TR(0x54d1ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d1f0:{NFSU2_TR(0x54d1f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d1f4:{NFSU2_TR(0x54d1f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d1f8:{NFSU2_TR(0x54d1f8);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L54d340;}}
}
B54d1fe:L54d1fe:{c.instructions+=1;NFSU2_TR(0x54d1fe);
{goto L54d210;}
}
B54d200:L54d200:{c.instructions+=3;NFSU2_TR(0x54d200);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54d204:{NFSU2_TR(0x54d204);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54d208:{NFSU2_TR(0x54d208);
{goto L54d210;}
}
B54d210:L54d210:{c.instructions+=3;NFSU2_TR(0x54d210);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+20))),2);
w4(R+0,u32(r2(U+0)));
}
B54d214:{NFSU2_TR(0x54d214);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7352ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7352ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54d219:{NFSU2_TR(0x54d219);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L54d310;}}
}
B54d21f:L54d21f:{c.instructions+=1;NFSU2_TR(0x54d21f);
if(r1(R+518)){{goto L54d305;}}
}
B54d225:L54d225:{c.instructions+=2;NFSU2_TR(0x54d225);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x434dull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B54d22a:{NFSU2_TR(0x54d22a);
if(r1(R+518)){{goto L54d2f8;}}
}
B54d230:L54d230:{c.instructions+=2;NFSU2_TR(0x54d230);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2600ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B54d235:{NFSU2_TR(0x54d235);
if(r1(R+518)){{goto L54d258;}}
}
B54d237:L54d237:{c.instructions+=2;NFSU2_TR(0x54d237);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B54d23a:{NFSU2_TR(0x54d23a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54d32c;}}
}
B54d240:L54d240:{c.instructions+=8;NFSU2_TR(0x54d240);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54d243:{NFSU2_TR(0x54d243);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B54d244:{NFSU2_TR(0x54d244);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B54d247:{NFSU2_TR(0x54d247);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B54d24a:{NFSU2_TR(0x54d24a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54d24d:{NFSU2_TR(0x54d24d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d251:{NFSU2_TR(0x54d251);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B54d253:{NFSU2_TR(0x54d253);
{goto L54d32c;}
}
B54d258:L54d258:{c.instructions+=3;NFSU2_TR(0x54d258);
u8 U[7];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B54d25c:{NFSU2_TR(0x54d25c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54d25f:{NFSU2_TR(0x54d25f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54d275;}}
}
B54d261:L54d261:{c.instructions+=2;NFSU2_TR(0x54d261);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B54d264:{NFSU2_TR(0x54d264);
if(r1(R+518)){{goto L54d275;}}
}
B54d266:L54d266:{c.instructions+=3;NFSU2_TR(0x54d266);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54d269:{NFSU2_TR(0x54d269);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d26a:{NFSU2_TR(0x54d26a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54d26full));
TAIL_STATIC(0x5046d0u,504);
}
B54d26f:L54d26f:{c.instructions+=3;NFSU2_TR(0x54d26f);
__builtin_memmove((R+28),(R+0),4);
}
B54d271:{NFSU2_TR(0x54d271);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54d273:{NFSU2_TR(0x54d273);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54d2c9;}}
}
B54d275:L54d275:{c.instructions+=2;NFSU2_TR(0x54d275);
w4(R+4,u32(0x8637a0ull));
}
B54d27a:{NFSU2_TR(0x54d27a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54d27full));
TAIL_STATIC(0x54bdf0u,54b);
}
B54d27f:L54d27f:{c.instructions+=12;NFSU2_TR(0x54d27f);
w4(R+4,u32(0xabadcafeull));
}
B54d284:{NFSU2_TR(0x54d284);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d287:{NFSU2_TR(0x54d287);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d28a:{NFSU2_TR(0x54d28a);
u8 U[7];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B54d28e:{NFSU2_TR(0x54d28e);
u8 U[4];
w4(U+0,u32(0x79aa38ull));
s4(u32(r4(R+0)),r4(U+0));
}
B54d294:{NFSU2_TR(0x54d294);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d297:{NFSU2_TR(0x54d297);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d29a:{NFSU2_TR(0x54d29a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d29d:{NFSU2_TR(0x54d29d);
__builtin_memmove((R+28),(R+0),4);
}
B54d29f:{NFSU2_TR(0x54d29f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d2a2:{NFSU2_TR(0x54d2a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d2a3:{NFSU2_TR(0x54d2a3);
if(r1(R+518)){{goto L54d2b5;}}
}
B54d2a5:L54d2a5:{c.instructions+=3;NFSU2_TR(0x54d2a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54d2a9:{NFSU2_TR(0x54d2a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B54d2ab:{NFSU2_TR(0x54d2ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54d2b0ull));
TAIL_STATIC(0x512120u,512);
}
B54d2b0:L54d2b0:{c.instructions+=2;NFSU2_TR(0x54d2b0);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B54d2b3:{NFSU2_TR(0x54d2b3);
{goto L54d32c;}
}
B54d2b5:L54d2b5:{c.instructions+=4;NFSU2_TR(0x54d2b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d2b9:{NFSU2_TR(0x54d2b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54d2bc:{NFSU2_TR(0x54d2bc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x34ull))));
}
B54d2bf:{NFSU2_TR(0x54d2bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54d2c4ull));
TAIL_STATIC(0x4951b0u,495);
}
B54d2c4:L54d2c4:{c.instructions+=2;NFSU2_TR(0x54d2c4);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B54d2c7:{NFSU2_TR(0x54d2c7);
{goto L54d32c;}
}
B54d2c9:L54d2c9:{c.instructions+=3;NFSU2_TR(0x54d2c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d2cc:{NFSU2_TR(0x54d2cc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54d2ce:{NFSU2_TR(0x54d2ce);
if(r1(R+518)){{goto L54d2ed;}}
}
B54d2d0:L54d2d0:{c.instructions+=7;NFSU2_TR(0x54d2d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54d2d3:{NFSU2_TR(0x54d2d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B54d2d6:{NFSU2_TR(0x54d2d6);
u8 U[4];
w4(U+0,u32(0x517600ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d2db:{NFSU2_TR(0x54d2db);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d2dc:{NFSU2_TR(0x54d2dc);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d2de:{NFSU2_TR(0x54d2de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d2df:{NFSU2_TR(0x54d2df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54d2e4ull));
TAIL_STATIC(0x75c401u,75c);
}
B54d2e4:L54d2e4:{c.instructions+=2;NFSU2_TR(0x54d2e4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d2e5:{NFSU2_TR(0x54d2e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54d2eaull));
TAIL_STATIC(0x575630u,575);
}
B54d2ea:L54d2ea:{c.instructions+=1;NFSU2_TR(0x54d2ea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54d2ed:L54d2ed:{c.instructions+=4;NFSU2_TR(0x54d2ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d2f0:{NFSU2_TR(0x54d2f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d2f3:{NFSU2_TR(0x54d2f3);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B54d2f6:{NFSU2_TR(0x54d2f6);
{goto L54d32c;}
}
B54d2f8:L54d2f8:{c.instructions+=4;NFSU2_TR(0x54d2f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54d2fb:{NFSU2_TR(0x54d2fb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d2fc:{NFSU2_TR(0x54d2fc);
__builtin_memmove((R+4),(R+28),4);
}
B54d2fe:{NFSU2_TR(0x54d2fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54d303ull));
TAIL_STATIC(0x52ae00u,52a);
}
B54d303:L54d303:{c.instructions+=1;NFSU2_TR(0x54d303);
{goto L54d32c;}
}
B54d305:L54d305:{c.instructions+=3;NFSU2_TR(0x54d305);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B54d308:{NFSU2_TR(0x54d308);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d309:{NFSU2_TR(0x54d309);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54d30eull));
TAIL_STATIC(0x517630u,517);
}
B54d30e:L54d30e:{c.instructions+=1;NFSU2_TR(0x54d30e);
{goto L54d32c;}
}
B54d310:L54d310:{c.instructions+=2;NFSU2_TR(0x54d310);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7452ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54d315:{NFSU2_TR(0x54d315);
if(r1(R+518)){{goto L54d326;}}
}
B54d317:L54d317:{c.instructions+=2;NFSU2_TR(0x54d317);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7552ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54d31c:{NFSU2_TR(0x54d31c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54d32c;}}
}
B54d31e:L54d31e:{c.instructions+=3;NFSU2_TR(0x54d31e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54d321:{NFSU2_TR(0x54d321);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d324:{NFSU2_TR(0x54d324);
{goto L54d32c;}
}
B54d326:L54d326:{c.instructions+=2;NFSU2_TR(0x54d326);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d329:{NFSU2_TR(0x54d329);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d32c:L54d32c:{c.instructions+=5;NFSU2_TR(0x54d32c);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B54d330:{NFSU2_TR(0x54d330);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d334:{NFSU2_TR(0x54d334);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B54d338:{NFSU2_TR(0x54d338);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+20))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+6)));
w4(U+10,u32(u32(r4(R+20))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B54d33a:{NFSU2_TR(0x54d33a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54d200u);}goto L54d200;}}
}
B54d340:L54d340:{c.instructions+=7;NFSU2_TR(0x54d340);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54d341:{NFSU2_TR(0x54d341);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54d342:{NFSU2_TR(0x54d342);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54d343:{NFSU2_TR(0x54d343);
w1(R+0,u8(0x1ull));
}
B54d345:{NFSU2_TR(0x54d345);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54d346:{NFSU2_TR(0x54d346);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B54d347:{NFSU2_TR(0x54d347);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54d350:L54d350:{c.instructions+=8;NFSU2_TR(0x54d350);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d351:{NFSU2_TR(0x54d351);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d352:{NFSU2_TR(0x54d352);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d353:{NFSU2_TR(0x54d353);
__builtin_memmove((R+24),(R+4),4);
}
B54d355:{NFSU2_TR(0x54d355);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d356:{NFSU2_TR(0x54d356);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54d359:{NFSU2_TR(0x54d359);
__builtin_memmove((R+4),(R+28),4);
}
B54d35b:{NFSU2_TR(0x54d35b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54d360ull));
TAIL_STATIC(0x511d00u,511);
}
B54d360:L54d360:{c.instructions+=34;NFSU2_TR(0x54d360);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d364:{NFSU2_TR(0x54d364);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B54d366:{NFSU2_TR(0x54d366);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B54d369:{NFSU2_TR(0x54d369);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+24)),r1(U+0));
}
B54d36b:{NFSU2_TR(0x54d36b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B54d36e:{NFSU2_TR(0x54d36e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B54d371:{NFSU2_TR(0x54d371);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B54d374:{NFSU2_TR(0x54d374);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B54d377:{NFSU2_TR(0x54d377);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B54d37a:{NFSU2_TR(0x54d37a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B54d37d:{NFSU2_TR(0x54d37d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54d380:{NFSU2_TR(0x54d380);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B54d383:{NFSU2_TR(0x54d383);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B54d386:{NFSU2_TR(0x54d386);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+20))));
}
B54d388:{NFSU2_TR(0x54d388);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffffull))));
}
B54d38e:{NFSU2_TR(0x54d38e);
__builtin_memmove((R+8),(R+20),4);
}
B54d390:{NFSU2_TR(0x54d390);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+4))));
}
B54d392:{NFSU2_TR(0x54d392);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d395:{NFSU2_TR(0x54d395);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B54d398:{NFSU2_TR(0x54d398);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B54d39b:{NFSU2_TR(0x54d39b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54d39e:{NFSU2_TR(0x54d39e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d3a1:{NFSU2_TR(0x54d3a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54d3a4:{NFSU2_TR(0x54d3a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d3a7:{NFSU2_TR(0x54d3a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54d3aa:{NFSU2_TR(0x54d3aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d3ad:{NFSU2_TR(0x54d3ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54d3b0:{NFSU2_TR(0x54d3b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d3b3:{NFSU2_TR(0x54d3b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54d3b6:{NFSU2_TR(0x54d3b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d3b9:{NFSU2_TR(0x54d3b9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B54d3bc:{NFSU2_TR(0x54d3bc);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B54d3be:{NFSU2_TR(0x54d3be);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B54d3c0:{NFSU2_TR(0x54d3c0);
if(r1(R+518)){{goto L54d3fb;}}
}
B54d3c2:L54d3c2:{c.instructions+=2;NFSU2_TR(0x54d3c2);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B54d3c4:{NFSU2_TR(0x54d3c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54d3ca;}}
}
B54d3c6:L54d3c6:{c.instructions+=2;NFSU2_TR(0x54d3c6);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B54d3c8:{NFSU2_TR(0x54d3c8);
{goto L54d3cd;}
}
B54d3ca:L54d3ca:{c.instructions+=1;NFSU2_TR(0x54d3ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54d3cd:L54d3cd:{c.instructions+=2;NFSU2_TR(0x54d3cd);
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
B54d3cf:{NFSU2_TR(0x54d3cf);
if(r1(R+518)){{goto L54d3eb;}}
}
B54d3d1:L54d3d1:{c.instructions+=2;NFSU2_TR(0x54d3d1);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+12)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B54d3d4:{NFSU2_TR(0x54d3d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54d3dd;}}
}
B54d3d6:L54d3d6:{c.instructions+=2;NFSU2_TR(0x54d3d6);
__builtin_memmove((R+4),(R+28),4);
}
B54d3d8:{NFSU2_TR(0x54d3d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54d3ddull));
TAIL_STATIC(0x511d00u,511);
}
B54d3dd:L54d3dd:{c.instructions+=7;NFSU2_TR(0x54d3dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d3e0:{NFSU2_TR(0x54d3e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54d3e4:{NFSU2_TR(0x54d3e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54d3e5:{NFSU2_TR(0x54d3e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54d3e6:{NFSU2_TR(0x54d3e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54d3e7:{NFSU2_TR(0x54d3e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54d3e8:{NFSU2_TR(0x54d3e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54d3eb:L54d3eb:{c.instructions+=8;NFSU2_TR(0x54d3eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d3ee:{NFSU2_TR(0x54d3ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d3f1:{NFSU2_TR(0x54d3f1);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B54d3f4:{NFSU2_TR(0x54d3f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54d3f5:{NFSU2_TR(0x54d3f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54d3f6:{NFSU2_TR(0x54d3f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54d3f7:{NFSU2_TR(0x54d3f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54d3f8:{NFSU2_TR(0x54d3f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54d3fb:L54d3fb:{c.instructions+=2;NFSU2_TR(0x54d3fb);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B54d3fd:{NFSU2_TR(0x54d3fd);
if(r1(R+518)){{goto L54d409;}}
}
B54d3ff:L54d3ff:{c.instructions+=2;NFSU2_TR(0x54d3ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54d402:{NFSU2_TR(0x54d402);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54d407ull));
TAIL_STATIC(0x4fe890u,4fe);
}
B54d407:L54d407:{c.instructions+=1;NFSU2_TR(0x54d407);
{goto L54d40c;}
}
B54d409:L54d409:{c.instructions+=1;NFSU2_TR(0x54d409);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d40c:L54d40c:{c.instructions+=3;NFSU2_TR(0x54d40c);
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
B54d40e:{NFSU2_TR(0x54d40e);
__builtin_memmove((R+24),(R+0),4);
}
B54d410:{NFSU2_TR(0x54d410);
if(r1(R+518)){{goto L54d49a;}}
}
B54d416:L54d416:{c.instructions+=2;NFSU2_TR(0x54d416);
w4(R+20,u32(0xabadcafeull));
}
B54d41b:{NFSU2_TR(0x54d41b);
{goto L54d420;}
}
B54d420:L54d420:{c.instructions+=2;NFSU2_TR(0x54d420);
w4(R+4,u32(0x839bd0ull));
}
B54d425:{NFSU2_TR(0x54d425);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54d42aull));
TAIL_STATIC(0x53e650u,53e);
}
B54d42a:L54d42a:{c.instructions+=2;NFSU2_TR(0x54d42a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54d42c:{NFSU2_TR(0x54d42c);
if(r1(R+518)){{goto L54d43c;}}
}
B54d42e:L54d42e:{c.instructions+=4;NFSU2_TR(0x54d42e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d431:{NFSU2_TR(0x54d431);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d434:{NFSU2_TR(0x54d434);
u8 U[4];
w4(U+0,u32(0x79aa34ull));
s4(u32(r4(R+0)),r4(U+0));
}
B54d43a:{NFSU2_TR(0x54d43a);
{goto L54d43e;}
}
B54d43c:L54d43c:{c.instructions+=1;NFSU2_TR(0x54d43c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54d43e:L54d43e:{c.instructions+=13;NFSU2_TR(0x54d43e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54d441:{NFSU2_TR(0x54d441);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d444:{NFSU2_TR(0x54d444);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54d447:{NFSU2_TR(0x54d447);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d44a:{NFSU2_TR(0x54d44a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54d44d:{NFSU2_TR(0x54d44d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d450:{NFSU2_TR(0x54d450);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54d453:{NFSU2_TR(0x54d453);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d456:{NFSU2_TR(0x54d456);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54d459:{NFSU2_TR(0x54d459);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d45c:{NFSU2_TR(0x54d45c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54d45f:{NFSU2_TR(0x54d45f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54d461:{NFSU2_TR(0x54d461);
if(r1(R+518)){{goto L54d478;}}
}
B54d463:L54d463:{c.instructions+=4;NFSU2_TR(0x54d463);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54d466:{NFSU2_TR(0x54d466);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54d468:{NFSU2_TR(0x54d468);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d46b:{NFSU2_TR(0x54d46b);
if(r1(R+518)){{goto L54d470;}}
}
B54d46d:L54d46d:{c.instructions+=1;NFSU2_TR(0x54d46d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d470:L54d470:{c.instructions+=3;NFSU2_TR(0x54d470);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d473:{NFSU2_TR(0x54d473);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d476:{NFSU2_TR(0x54d476);
{goto L54d48b;}
}
B54d478:L54d478:{c.instructions+=4;NFSU2_TR(0x54d478);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54d47b:{NFSU2_TR(0x54d47b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54d47d:{NFSU2_TR(0x54d47d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d480:{NFSU2_TR(0x54d480);
if(r1(R+518)){{goto L54d485;}}
}
B54d482:L54d482:{c.instructions+=1;NFSU2_TR(0x54d482);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d485:L54d485:{c.instructions+=2;NFSU2_TR(0x54d485);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d488:{NFSU2_TR(0x54d488);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d48b:L54d48b:{c.instructions+=2;NFSU2_TR(0x54d48b);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54d48e:{NFSU2_TR(0x54d48e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54d493;}}
}
B54d490:L54d490:{c.instructions+=1;NFSU2_TR(0x54d490);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d493:L54d493:{c.instructions+=3;NFSU2_TR(0x54d493);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54d496:{NFSU2_TR(0x54d496);
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
B54d498:{NFSU2_TR(0x54d498);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54d420u);}goto L54d420;}}
}
B54d49a:L54d49a:{c.instructions+=5;NFSU2_TR(0x54d49a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54d49b:{NFSU2_TR(0x54d49b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54d49c:{NFSU2_TR(0x54d49c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54d49d:{NFSU2_TR(0x54d49d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54d49e:{NFSU2_TR(0x54d49e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54d4b0:L54d4b0:{c.instructions+=8;NFSU2_TR(0x54d4b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d4b4:{NFSU2_TR(0x54d4b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xa0ull))));
}
B54d4ba:{NFSU2_TR(0x54d4ba);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d4bb:{NFSU2_TR(0x54d4bb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d4bc:{NFSU2_TR(0x54d4bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54d4bf:{NFSU2_TR(0x54d4bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54d4c1:{NFSU2_TR(0x54d4c1);
__builtin_memmove((R+20),(R+4),4);
}
B54d4c3:{NFSU2_TR(0x54d4c3);
if(r1(R+518)){{goto L54dff9;}}
}
B54d4c9:L54d4c9:{c.instructions+=5;NFSU2_TR(0x54d4c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54d4cf:{NFSU2_TR(0x54d4cf);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B54d4d1:{NFSU2_TR(0x54d4d1);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B54d4d3:{NFSU2_TR(0x54d4d3);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54d4d5:{NFSU2_TR(0x54d4d5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L54dff9;}}
}
B54d4db:L54d4db:{c.instructions+=4;NFSU2_TR(0x54d4db);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d4dc:{NFSU2_TR(0x54d4dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d4dd:{NFSU2_TR(0x54d4dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54d4e3:{NFSU2_TR(0x54d4e3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B54d4e5:L54d4e5:{c.instructions+=4;NFSU2_TR(0x54d4e5);
w4(R+12,u32(0x1ull));
}
B54d4ea:{NFSU2_TR(0x54d4ea);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B54d4ec:{NFSU2_TR(0x54d4ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54d4ee:{NFSU2_TR(0x54d4ee);
if(r1(R+518)){{goto L54d505;}}
}
B54d4f0:L54d4f0:{c.instructions+=7;NFSU2_TR(0x54d4f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B54d4f3:{NFSU2_TR(0x54d4f3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B54d4f9:{NFSU2_TR(0x54d4f9);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B54d4fb:{NFSU2_TR(0x54d4fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B54d4fe:{NFSU2_TR(0x54d4fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(R+12,u32(u32(r4(R+12))|u32(r4(U+0))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B54d500:{NFSU2_TR(0x54d500);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B54d503:{NFSU2_TR(0x54d503);
w1(R+8,u8(u32(r1(R+8))|u32(r1(R+4))));
}
B54d505:L54d505:{c.instructions+=4;NFSU2_TR(0x54d505);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B54d507:{NFSU2_TR(0x54d507);
w4(R+4,u32(r1(R+0)));
}
B54d50a:{NFSU2_TR(0x54d50a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B54d50c:{NFSU2_TR(0x54d50c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54d4e5u);}goto L54d4e5;}}
}
B54d50e:L54d50e:{c.instructions+=2;NFSU2_TR(0x54d50e);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54d510:{NFSU2_TR(0x54d510);
if(r1(R+518)){{goto L54dff7;}}
}
B54d516:L54d516:{c.instructions+=4;NFSU2_TR(0x54d516);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54d518:{NFSU2_TR(0x54d518);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B54d51a:{NFSU2_TR(0x54d51a);
w4(R+4,u32(0x13ull));
}
B54d51f:{NFSU2_TR(0x54d51f);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B54d523:L54d523:{c.instructions+=1;NFSU2_TR(0x54d523);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L54d525;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54d523u);}goto L54d523;}
}
B54d525:L54d525:{c.instructions+=21;NFSU2_TR(0x54d525);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B54d527:{NFSU2_TR(0x54d527);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d52b:{NFSU2_TR(0x54d52b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d52f:{NFSU2_TR(0x54d52f);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d533:{NFSU2_TR(0x54d533);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d537:{NFSU2_TR(0x54d537);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d53b:{NFSU2_TR(0x54d53b);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d53f:{NFSU2_TR(0x54d53f);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d543:{NFSU2_TR(0x54d543);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d547:{NFSU2_TR(0x54d547);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d54b:{NFSU2_TR(0x54d54b);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d54f:{NFSU2_TR(0x54d54f);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d553:{NFSU2_TR(0x54d553);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d557:{NFSU2_TR(0x54d557);
u8 U[6];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B54d55c:{NFSU2_TR(0x54d55c);
u8 U[6];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B54d561:{NFSU2_TR(0x54d561);
u8 U[6];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B54d566:{NFSU2_TR(0x54d566);
u8 U[5];
w4(U+0,u32(u32(u32(0x62ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B54d56a:{NFSU2_TR(0x54d56a);
u8 U[5];
w4(U+0,u32(u32(u32(0x3aull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B54d56e:{NFSU2_TR(0x54d56e);
u8 U[5];
w4(U+0,u32(u32(u32(0x4eull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B54d572:{NFSU2_TR(0x54d572);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54d57a:{NFSU2_TR(0x54d57a);
__builtin_memmove((R+12),(R+12),4);
}
B54d580:L54d580:{c.instructions+=3;NFSU2_TR(0x54d580);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54d583:{NFSU2_TR(0x54d583);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54d585:{NFSU2_TR(0x54d585);
if(r1(R+518)){{goto L54dae8;}}
}
B54d58b:L54d58b:{c.instructions+=14;NFSU2_TR(0x54d58b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d58f:{NFSU2_TR(0x54d58f);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54d596:{NFSU2_TR(0x54d596);
__builtin_memmove((R+4),(R+0),4);
}
B54d598:{NFSU2_TR(0x54d598);
w4(R+24,u32(0x1ull));
}
B54d59d:{NFSU2_TR(0x54d59d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B54d59f:{NFSU2_TR(0x54d59f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54d5a2:{NFSU2_TR(0x54d5a2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B54d5a4:{NFSU2_TR(0x54d5a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d5a8:{NFSU2_TR(0x54d5a8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54d5ae:{NFSU2_TR(0x54d5ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d5b2:{NFSU2_TR(0x54d5b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d5b6:{NFSU2_TR(0x54d5b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d5ba:{NFSU2_TR(0x54d5ba);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54d5bf:{NFSU2_TR(0x54d5bf);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L54d68e;}}
}
B54d5c5:L54d5c5:{c.instructions+=6;NFSU2_TR(0x54d5c5);
__builtin_memmove((R+4),(R+28),4);
}
B54d5c7:{NFSU2_TR(0x54d5c7);
w4(R+8,u32(0x1ull));
}
B54d5cc:{NFSU2_TR(0x54d5cc);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B54d5ce:{NFSU2_TR(0x54d5ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54d5d2:{NFSU2_TR(0x54d5d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54d5d4:{NFSU2_TR(0x54d5d4);
if(r1(R+518)){{goto L54d675;}}
}
B54d5da:L54d5da:{c.instructions+=8;NFSU2_TR(0x54d5da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54d5dd:{NFSU2_TR(0x54d5dd);
__builtin_memmove((R+8),(R+28),4);
}
B54d5df:{NFSU2_TR(0x54d5df);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B54d5e5:{NFSU2_TR(0x54d5e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B54d5e8:{NFSU2_TR(0x54d5e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54d5eb:{NFSU2_TR(0x54d5eb);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+24))));
}
B54d5ed:{NFSU2_TR(0x54d5ed);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54d5ef:{NFSU2_TR(0x54d5ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54d607;}}
}
B54d5f1:L54d5f1:{c.instructions+=4;NFSU2_TR(0x54d5f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B54d5f3:{NFSU2_TR(0x54d5f3);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+24))));
}
B54d5f5:{NFSU2_TR(0x54d5f5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54d5f7:{NFSU2_TR(0x54d5f7);
if(r1(R+518)){{goto L54d607;}}
}
B54d5f9:L54d5f9:{c.instructions+=5;NFSU2_TR(0x54d5f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B54d5fd:{NFSU2_TR(0x54d5fd);
__builtin_memmove((R+4),(R+28),4);
}
B54d5ff:{NFSU2_TR(0x54d5ff);
w1(R+8,u8(0x1ull));
}
B54d601:{NFSU2_TR(0x54d601);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w1(R+8,shl<u8>(r1(R+8),u64(r1(U+0))));
}
B54d603:{NFSU2_TR(0x54d603);
u8 U[13];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+12,u8(u32(r1(U+12))|u32(r1(R+8))));
s1(u32(r4(U+8)),r1(U+12));
}
B54d607:L54d607:{c.instructions+=4;NFSU2_TR(0x54d607);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54d60a:{NFSU2_TR(0x54d60a);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+24))));
}
B54d60c:{NFSU2_TR(0x54d60c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54d60e:{NFSU2_TR(0x54d60e);
if(r1(R+518)){{goto L54d626;}}
}
B54d610:L54d610:{c.instructions+=4;NFSU2_TR(0x54d610);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B54d612:{NFSU2_TR(0x54d612);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+24))));
}
B54d614:{NFSU2_TR(0x54d614);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54d616:{NFSU2_TR(0x54d616);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54d626;}}
}
B54d618:L54d618:{c.instructions+=5;NFSU2_TR(0x54d618);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B54d61c:{NFSU2_TR(0x54d61c);
__builtin_memmove((R+4),(R+28),4);
}
B54d61e:{NFSU2_TR(0x54d61e);
w1(R+8,u8(0x1ull));
}
B54d620:{NFSU2_TR(0x54d620);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w1(R+8,shl<u8>(r1(R+8),u64(r1(U+0))));
}
B54d622:{NFSU2_TR(0x54d622);
u8 U[13];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+12,u8(u32(r1(U+12))|u32(r1(R+8))));
s1(u32(r4(U+8)),r1(U+12));
}
B54d626:L54d626:{c.instructions+=4;NFSU2_TR(0x54d626);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54d629:{NFSU2_TR(0x54d629);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+24))));
}
B54d62b:{NFSU2_TR(0x54d62b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54d62d:{NFSU2_TR(0x54d62d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54d675;}}
}
B54d62f:L54d62f:{c.instructions+=5;NFSU2_TR(0x54d62f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B54d631:{NFSU2_TR(0x54d631);
__builtin_memmove((R+8),(R+24),4);
}
B54d633:{NFSU2_TR(0x54d633);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+4))));
}
B54d635:{NFSU2_TR(0x54d635);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54d637:{NFSU2_TR(0x54d637);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54d675;}}
}
B54d639:L54d639:{c.instructions+=4;NFSU2_TR(0x54d639);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B54d63d:{NFSU2_TR(0x54d63d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d63e:{NFSU2_TR(0x54d63e);
__builtin_memmove((R+4),(R+12),4);
}
B54d640:{NFSU2_TR(0x54d640);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54d645ull));
TAIL_STATIC(0x504ff0u,504);
}
B54d645:L54d645:{c.instructions+=3;NFSU2_TR(0x54d645);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54d649:{NFSU2_TR(0x54d649);
u8 U[24];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w1(R+512,u8((r4(U+16))<(r4(R+0))));
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+0))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B54d64d:{NFSU2_TR(0x54d64d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L54d655;}}
}
B54d64f:L54d64f:{c.instructions+=2;NFSU2_TR(0x54d64f);
u8 U[16];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B54d653:{NFSU2_TR(0x54d653);
{goto L54d661;}
}
B54d655:L54d655:{c.instructions+=3;NFSU2_TR(0x54d655);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d656:{NFSU2_TR(0x54d656);
__builtin_memmove((R+4),(R+12),4);
}
B54d658:{NFSU2_TR(0x54d658);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54d65dull));
TAIL_STATIC(0x504ff0u,504);
}
B54d65d:L54d65d:{c.instructions+=1;NFSU2_TR(0x54d65d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54d661:L54d661:{c.instructions+=7;NFSU2_TR(0x54d661);
u8 U[16];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B54d665:{NFSU2_TR(0x54d665);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B54d669:{NFSU2_TR(0x54d669);
__builtin_memmove((R+4),(R+28),4);
}
B54d66b:{NFSU2_TR(0x54d66b);
w1(R+8,u8(0x1ull));
}
B54d66d:{NFSU2_TR(0x54d66d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w1(R+8,shl<u8>(r1(R+8),u64(r1(U+0))));
}
B54d66f:{NFSU2_TR(0x54d66f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))|u32(r1(R+8))));
s1(u32(r4(R+0)),r1(U+0));
}
B54d671:{NFSU2_TR(0x54d671);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d675:L54d675:{c.instructions+=6;NFSU2_TR(0x54d675);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B54d679:{NFSU2_TR(0x54d679);
w1(R+4,u8(u32(r1(R+4))+u32(u8(0x1ull))));
}
B54d67b:{NFSU2_TR(0x54d67b);
w4(R+28,u32(r1(R+4)));
}
B54d67e:{NFSU2_TR(0x54d67e);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B54d682:{NFSU2_TR(0x54d682);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B54d688:{NFSU2_TR(0x54d688);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54d5c5u);}goto L54d5c5;}}
}
B54d68e:L54d68e:{c.instructions+=2;NFSU2_TR(0x54d68e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54d691:{NFSU2_TR(0x54d691);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54d77b;}}
}
B54d697:L54d697:{c.instructions+=4;NFSU2_TR(0x54d697);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d69e:{NFSU2_TR(0x54d69e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B54d6a1:{NFSU2_TR(0x54d6a1);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54d6a3:{NFSU2_TR(0x54d6a3);
if(r1(R+518)){{goto L54d77b;}}
}
B54d6a9:L54d6a9:{c.instructions+=4;NFSU2_TR(0x54d6a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d6af:{NFSU2_TR(0x54d6af);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54d6b1:{NFSU2_TR(0x54d6b1);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54d6b6:{NFSU2_TR(0x54d6b6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L54d77b;}}
}
B54d6bc:L54d6bc:{c.instructions+=2;NFSU2_TR(0x54d6bc);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B54d6be:{NFSU2_TR(0x54d6be);
__builtin_memmove((R+28),(R+28),4);
}
B54d6c0:L54d6c0:{c.instructions+=6;NFSU2_TR(0x54d6c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d6c4:{NFSU2_TR(0x54d6c4);
w4(R+8,u32(0x1ull));
}
B54d6c9:{NFSU2_TR(0x54d6c9);
__builtin_memmove((R+4),(R+12),4);
}
B54d6cb:{NFSU2_TR(0x54d6cb);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B54d6cd:{NFSU2_TR(0x54d6cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54d6cf:{NFSU2_TR(0x54d6cf);
if(r1(R+518)){{goto L54d762;}}
}
B54d6d5:L54d6d5:{c.instructions+=6;NFSU2_TR(0x54d6d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54d6d8:{NFSU2_TR(0x54d6d8);
__builtin_memmove((R+0),(R+12),4);
}
B54d6da:{NFSU2_TR(0x54d6da);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B54d6e0:{NFSU2_TR(0x54d6e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B54d6e3:{NFSU2_TR(0x54d6e3);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B54d6e7:{NFSU2_TR(0x54d6e7);
if(r1(R+518)){{goto L54d70e;}}
}
B54d6e9:L54d6e9:{c.instructions+=2;NFSU2_TR(0x54d6e9);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B54d6ec:{NFSU2_TR(0x54d6ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54d708;}}
}
B54d6ee:L54d6ee:{c.instructions+=9;NFSU2_TR(0x54d6ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54d6f2:{NFSU2_TR(0x54d6f2);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54d6f6:{NFSU2_TR(0x54d6f6);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+24))));
}
B54d6f8:{NFSU2_TR(0x54d6f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d6fc:{NFSU2_TR(0x54d6fc);
w1(R+8,u8(0x1ull));
}
B54d6fe:{NFSU2_TR(0x54d6fe);
__builtin_memmove((R+4),(R+12),4);
}
B54d700:{NFSU2_TR(0x54d700);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w1(R+8,shl<u8>(r1(R+8),u64(r1(U+0))));
}
B54d702:{NFSU2_TR(0x54d702);
w1(R+0,u8(u32(r1(R+0))|u32(r1(R+8))));
}
B54d704:{NFSU2_TR(0x54d704);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B54d708:L54d708:{c.instructions+=2;NFSU2_TR(0x54d708);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B54d70c:{NFSU2_TR(0x54d70c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54d727;}}
}
B54d70e:L54d70e:{c.instructions+=2;NFSU2_TR(0x54d70e);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B54d711:{NFSU2_TR(0x54d711);
if(r1(R+518)){{goto L54d721;}}
}
B54d713:L54d713:{c.instructions+=5;NFSU2_TR(0x54d713);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B54d717:{NFSU2_TR(0x54d717);
__builtin_memmove((R+4),(R+12),4);
}
B54d719:{NFSU2_TR(0x54d719);
w1(R+0,u8(0x1ull));
}
B54d71b:{NFSU2_TR(0x54d71b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w1(R+0,shl<u8>(r1(R+0),u64(r1(U+0))));
}
B54d71d:{NFSU2_TR(0x54d71d);
u8 U[5];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(r1(R+0))));
s1(u32(r4(U+0)),r1(U+4));
}
B54d721:L54d721:{c.instructions+=2;NFSU2_TR(0x54d721);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B54d725:{NFSU2_TR(0x54d725);
if(r1(R+518)){{goto L54d762;}}
}
B54d727:L54d727:{c.instructions+=2;NFSU2_TR(0x54d727);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B54d72a:{NFSU2_TR(0x54d72a);
if(r1(R+518)){{goto L54d762;}}
}
B54d72c:L54d72c:{c.instructions+=6;NFSU2_TR(0x54d72c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d730:{NFSU2_TR(0x54d730);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+24))));
}
B54d732:{NFSU2_TR(0x54d732);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d734:{NFSU2_TR(0x54d734);
__builtin_memmove((R+4),(R+28),4);
}
B54d736:{NFSU2_TR(0x54d736);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d73a:{NFSU2_TR(0x54d73a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54d73full));
TAIL_STATIC(0x504ff0u,504);
}
B54d73f:L54d73f:{c.instructions+=3;NFSU2_TR(0x54d73f);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54d743:{NFSU2_TR(0x54d743);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54d745:{NFSU2_TR(0x54d745);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L54d74b;}}
}
B54d747:L54d747:{c.instructions+=2;NFSU2_TR(0x54d747);
__builtin_memmove((R+0),(R+4),4);
}
B54d749:{NFSU2_TR(0x54d749);
{goto L54d754;}
}
B54d74b:L54d74b:{c.instructions+=3;NFSU2_TR(0x54d74b);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d74d:{NFSU2_TR(0x54d74d);
__builtin_memmove((R+4),(R+28),4);
}
B54d74f:{NFSU2_TR(0x54d74f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54d754ull));
TAIL_STATIC(0x504ff0u,504);
}
B54d754:L54d754:{c.instructions+=5;NFSU2_TR(0x54d754);
w1(R+8,u8(0x1ull));
}
B54d756:{NFSU2_TR(0x54d756);
__builtin_memmove((R+4),(R+12),4);
}
B54d758:{NFSU2_TR(0x54d758);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w1(R+8,shl<u8>(r1(R+8),u64(r1(U+0))));
}
B54d75a:{NFSU2_TR(0x54d75a);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d75e:{NFSU2_TR(0x54d75e);
u8 U[5];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(r1(R+8))));
s1(u32(r4(U+0)),r1(U+4));
}
B54d762:L54d762:{c.instructions+=6;NFSU2_TR(0x54d762);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54d766:{NFSU2_TR(0x54d766);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B54d768:{NFSU2_TR(0x54d768);
w4(R+12,u32(r1(R+0)));
}
B54d76b:{NFSU2_TR(0x54d76b);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B54d76f:{NFSU2_TR(0x54d76f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B54d775:{NFSU2_TR(0x54d775);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54d6c0u);}goto L54d6c0;}}
}
B54d77b:L54d77b:{c.instructions+=6;NFSU2_TR(0x54d77b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d77f:{NFSU2_TR(0x54d77f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54d783:{NFSU2_TR(0x54d783);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54d787:{NFSU2_TR(0x54d787);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B54d789:{NFSU2_TR(0x54d789);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B54d78b:{NFSU2_TR(0x54d78b);
if(r1(R+518)){{goto L54dad6;}}
}
B54d791:L54d791:{c.instructions+=5;NFSU2_TR(0x54d791);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d798:{NFSU2_TR(0x54d798);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B54d79e:{NFSU2_TR(0x54d79e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54d7a0:{NFSU2_TR(0x54d7a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B54d7a6:{NFSU2_TR(0x54d7a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54d7aa;}}
}
B54d7a8:L54d7a8:{c.instructions+=1;NFSU2_TR(0x54d7a8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B54d7aa:L54d7aa:{c.instructions+=4;NFSU2_TR(0x54d7aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d7ae:{NFSU2_TR(0x54d7ae);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B54d7b1:{NFSU2_TR(0x54d7b1);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xeull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xeull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B54d7b4:{NFSU2_TR(0x54d7b4);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L54da0a;}}
}
B54d7ba:L54d7ba:{c.instructions+=2;NFSU2_TR(0x54d7ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54e010ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B54d7c1:{NFSU2_TR(0x54d7c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x54e004ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54d7c8:L54d7c8:{c.instructions+=2;NFSU2_TR(0x54d7c8);
u8 U[6];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B54d7cd:{NFSU2_TR(0x54d7cd);
if(r1(R+518)){{goto L54da0a;}}
}
B54d7d3:L54d7d3:{c.instructions+=4;NFSU2_TR(0x54d7d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54d7d5:{NFSU2_TR(0x54d7d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54d7d9:{NFSU2_TR(0x54d7d9);
u8 U[16];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B54d7e0:{NFSU2_TR(0x54d7e0);
if(r1(R+518)){{goto L54d7fc;}}
}
B54d7e2:L54d7e2:{c.instructions+=3;NFSU2_TR(0x54d7e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d7e5:{NFSU2_TR(0x54d7e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54d7e7:{NFSU2_TR(0x54d7e7);
if(r1(R+518)){{goto L54d7fc;}}
}
B54d7e9:L54d7e9:{c.instructions+=2;NFSU2_TR(0x54d7e9);
w4(R+4,u32(0xc407210ull));
}
B54d7ee:{NFSU2_TR(0x54d7ee);
__builtin_memmove((R+28),(R+28),4);
}
B54d7f0:L54d7f0:{c.instructions+=2;NFSU2_TR(0x54d7f0);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54d7f3:{NFSU2_TR(0x54d7f3);
if(r1(R+518)){{goto L54d824;}}
}
B54d7f5:L54d7f5:{c.instructions+=3;NFSU2_TR(0x54d7f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d7f8:{NFSU2_TR(0x54d7f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54d7fa:{NFSU2_TR(0x54d7fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54d7f0u);}goto L54d7f0;}}
}
B54d7fc:L54d7fc:{c.instructions+=4;NFSU2_TR(0x54d7fc);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d803:{NFSU2_TR(0x54d803);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d806:{NFSU2_TR(0x54d806);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54d808:{NFSU2_TR(0x54d808);
if(r1(R+518)){{goto L54da0a;}}
}
B54d80e:L54d80e:{c.instructions+=1;NFSU2_TR(0x54d80e);
w4(R+4,u32(0x406415e3ull));
}
B54d813:L54d813:{c.instructions+=2;NFSU2_TR(0x54d813);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54d816:{NFSU2_TR(0x54d816);
if(r1(R+518)){{goto L54d863;}}
}
B54d818:L54d818:{c.instructions+=3;NFSU2_TR(0x54d818);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d81b:{NFSU2_TR(0x54d81b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54d81d:{NFSU2_TR(0x54d81d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54d813u);}goto L54d813;}}
}
B54d81f:L54d81f:{c.instructions+=1;NFSU2_TR(0x54d81f);
{goto L54da0a;}
}
B54d824:L54d824:{c.instructions+=10;NFSU2_TR(0x54d824);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B54d829:{NFSU2_TR(0x54d829);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d830:{NFSU2_TR(0x54d830);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54d836:{NFSU2_TR(0x54d836);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d837:{NFSU2_TR(0x54d837);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d838:{NFSU2_TR(0x54d838);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d839:{NFSU2_TR(0x54d839);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d83b:{NFSU2_TR(0x54d83b);
u8 U[4];
w4(U+0,u32(0xc407210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d840:{NFSU2_TR(0x54d840);
__builtin_memmove((R+4),(R+20),4);
}
B54d842:{NFSU2_TR(0x54d842);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54d847ull));
TAIL_STATIC(0x51aa20u,51a);
}
B54d847:L54d847:{c.instructions+=8;NFSU2_TR(0x54d847);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d84e:{NFSU2_TR(0x54d84e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54d854:{NFSU2_TR(0x54d854);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d855:{NFSU2_TR(0x54d855);
u8 U[4];
w4(U+0,u32(0xfffffffbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d857:{NFSU2_TR(0x54d857);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d858:{NFSU2_TR(0x54d858);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d859:{NFSU2_TR(0x54d859);
u8 U[4];
w4(U+0,u32(0xc407210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d85e:{NFSU2_TR(0x54d85e);
{goto L54da03;}
}
B54d863:L54d863:{c.instructions+=9;NFSU2_TR(0x54d863);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B54d868:{NFSU2_TR(0x54d868);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54d86f:{NFSU2_TR(0x54d86f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d870:{NFSU2_TR(0x54d870);
u8 U[4];
w4(U+0,u32(0xfffffffdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d872:{NFSU2_TR(0x54d872);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d873:{NFSU2_TR(0x54d873);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d875:{NFSU2_TR(0x54d875);
u8 U[4];
w4(U+0,u32(0x406415e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d87a:{NFSU2_TR(0x54d87a);
__builtin_memmove((R+4),(R+20),4);
}
B54d87c:{NFSU2_TR(0x54d87c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54d881ull));
TAIL_STATIC(0x51aa20u,51a);
}
B54d881:L54d881:{c.instructions+=7;NFSU2_TR(0x54d881);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54d888:{NFSU2_TR(0x54d888);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d889:{NFSU2_TR(0x54d889);
u8 U[4];
w4(U+0,u32(0xfffffffbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d88b:{NFSU2_TR(0x54d88b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d88c:{NFSU2_TR(0x54d88c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d88e:{NFSU2_TR(0x54d88e);
u8 U[4];
w4(U+0,u32(0x406415e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d893:{NFSU2_TR(0x54d893);
{goto L54da03;}
}
B54d898:L54d898:{c.instructions+=2;NFSU2_TR(0x54d898);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B54d89c:{NFSU2_TR(0x54d89c);
if(r1(R+518)){{goto L54d94a;}}
}
B54d8a2:L54d8a2:{c.instructions+=6;NFSU2_TR(0x54d8a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54d8a4:{NFSU2_TR(0x54d8a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d8a8:{NFSU2_TR(0x54d8a8);
u8 U[13];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(r1(U+12)));
}
B54d8ad:{NFSU2_TR(0x54d8ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f7d50ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B54d8b4:{NFSU2_TR(0x54d8b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d8b8:{NFSU2_TR(0x54d8b8);
if(r1(R+518)){{goto L54d8cd;}}
}
B54d8ba:L54d8ba:{c.instructions+=3;NFSU2_TR(0x54d8ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d8bd:{NFSU2_TR(0x54d8bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54d8bf:{NFSU2_TR(0x54d8bf);
if(r1(R+518)){{goto L54d8cd;}}
}
B54d8c1:L54d8c1:{c.instructions+=2;NFSU2_TR(0x54d8c1);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54d8c4:{NFSU2_TR(0x54d8c4);
if(r1(R+518)){{goto L54d8ee;}}
}
B54d8c6:L54d8c6:{c.instructions+=3;NFSU2_TR(0x54d8c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d8c9:{NFSU2_TR(0x54d8c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54d8cb:{NFSU2_TR(0x54d8cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54d8c1u);}goto L54d8c1;}}
}
B54d8cd:L54d8cd:{c.instructions+=4;NFSU2_TR(0x54d8cd);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d8d4:{NFSU2_TR(0x54d8d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d8d7:{NFSU2_TR(0x54d8d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54d8d9:{NFSU2_TR(0x54d8d9);
if(r1(R+518)){{goto L54d94a;}}
}
B54d8db:L54d8db:{c.instructions+=1;NFSU2_TR(0x54d8db);
{goto L54d8e0;}
}
B54d8e0:L54d8e0:{c.instructions+=2;NFSU2_TR(0x54d8e0);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54d8e3:{NFSU2_TR(0x54d8e3);
if(r1(R+518)){{goto L54d918;}}
}
B54d8e5:L54d8e5:{c.instructions+=3;NFSU2_TR(0x54d8e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d8e8:{NFSU2_TR(0x54d8e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54d8ea:{NFSU2_TR(0x54d8ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54d8e0u);}goto L54d8e0;}}
}
B54d8ec:L54d8ec:{c.instructions+=1;NFSU2_TR(0x54d8ec);
{goto L54d94a;}
}
B54d8ee:L54d8ee:{c.instructions+=9;NFSU2_TR(0x54d8ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54d8f2:{NFSU2_TR(0x54d8f2);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d8f9:{NFSU2_TR(0x54d8f9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d8fa:{NFSU2_TR(0x54d8fa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d8fb:{NFSU2_TR(0x54d8fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d8fc:{NFSU2_TR(0x54d8fc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d8fe:{NFSU2_TR(0x54d8fe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d8ff:{NFSU2_TR(0x54d8ff);
__builtin_memmove((R+4),(R+20),4);
}
B54d901:{NFSU2_TR(0x54d901);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54d906ull));
TAIL_STATIC(0x51aa20u,51a);
}
B54d906:L54d906:{c.instructions+=7;NFSU2_TR(0x54d906);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54d90a:{NFSU2_TR(0x54d90a);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54d911:{NFSU2_TR(0x54d911);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d912:{NFSU2_TR(0x54d912);
u8 U[4];
w4(U+0,u32(0xfffffffbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d914:{NFSU2_TR(0x54d914);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d915:{NFSU2_TR(0x54d915);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d916:{NFSU2_TR(0x54d916);
{goto L54d942;}
}
B54d918:L54d918:{c.instructions+=9;NFSU2_TR(0x54d918);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54d91c:{NFSU2_TR(0x54d91c);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54d923:{NFSU2_TR(0x54d923);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d924:{NFSU2_TR(0x54d924);
u8 U[4];
w4(U+0,u32(0xfffffffdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d926:{NFSU2_TR(0x54d926);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d927:{NFSU2_TR(0x54d927);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d929:{NFSU2_TR(0x54d929);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d92a:{NFSU2_TR(0x54d92a);
__builtin_memmove((R+4),(R+20),4);
}
B54d92c:{NFSU2_TR(0x54d92c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54d931ull));
TAIL_STATIC(0x51aa20u,51a);
}
B54d931:L54d931:{c.instructions+=6;NFSU2_TR(0x54d931);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d935:{NFSU2_TR(0x54d935);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54d93c:{NFSU2_TR(0x54d93c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d93d:{NFSU2_TR(0x54d93d);
u8 U[4];
w4(U+0,u32(0xfffffffbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d93f:{NFSU2_TR(0x54d93f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d940:{NFSU2_TR(0x54d940);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d942:L54d942:{c.instructions+=3;NFSU2_TR(0x54d942);
__builtin_memmove((R+4),(R+20),4);
}
B54d944:{NFSU2_TR(0x54d944);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d945:{NFSU2_TR(0x54d945);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54d94aull));
TAIL_STATIC(0x51aa20u,51a);
}
B54d94a:L54d94a:{c.instructions+=2;NFSU2_TR(0x54d94a);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B54d94e:{NFSU2_TR(0x54d94e);
if(r1(R+518)){{goto L54da0a;}}
}
B54d954:L54d954:{c.instructions+=7;NFSU2_TR(0x54d954);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54d956:{NFSU2_TR(0x54d956);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d95a:{NFSU2_TR(0x54d95a);
u8 U[13];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(r1(U+12)));
}
B54d95f:{NFSU2_TR(0x54d95f);
u8 U[16];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B54d966:{NFSU2_TR(0x54d966);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f7d20ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B54d96d:{NFSU2_TR(0x54d96d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54d971:{NFSU2_TR(0x54d971);
if(r1(R+518)){{goto L54d98c;}}
}
B54d973:L54d973:{c.instructions+=3;NFSU2_TR(0x54d973);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d976:{NFSU2_TR(0x54d976);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54d978:{NFSU2_TR(0x54d978);
if(r1(R+518)){{goto L54d98c;}}
}
B54d97a:L54d97a:{c.instructions+=1;NFSU2_TR(0x54d97a);
__builtin_memmove((R+12),(R+12),4);
}
B54d980:L54d980:{c.instructions+=2;NFSU2_TR(0x54d980);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54d983:{NFSU2_TR(0x54d983);
if(r1(R+518)){{goto L54d9ae;}}
}
B54d985:L54d985:{c.instructions+=3;NFSU2_TR(0x54d985);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d988:{NFSU2_TR(0x54d988);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54d98a:{NFSU2_TR(0x54d98a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54d980u);}goto L54d980;}}
}
B54d98c:L54d98c:{c.instructions+=4;NFSU2_TR(0x54d98c);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54d993:{NFSU2_TR(0x54d993);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d996:{NFSU2_TR(0x54d996);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54d998:{NFSU2_TR(0x54d998);
if(r1(R+518)){{goto L54da0a;}}
}
B54d99a:L54d99a:{c.instructions+=1;NFSU2_TR(0x54d99a);
__builtin_memmove((R+12),(R+12),4);
}
B54d9a0:L54d9a0:{c.instructions+=2;NFSU2_TR(0x54d9a0);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54d9a3:{NFSU2_TR(0x54d9a3);
if(r1(R+518)){{goto L54d9d8;}}
}
B54d9a5:L54d9a5:{c.instructions+=3;NFSU2_TR(0x54d9a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d9a8:{NFSU2_TR(0x54d9a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54d9aa:{NFSU2_TR(0x54d9aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54d9a0u);}goto L54d9a0;}}
}
B54d9ac:L54d9ac:{c.instructions+=1;NFSU2_TR(0x54d9ac);
{goto L54da0a;}
}
B54d9ae:L54d9ae:{c.instructions+=9;NFSU2_TR(0x54d9ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d9b2:{NFSU2_TR(0x54d9b2);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54d9b9:{NFSU2_TR(0x54d9b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d9ba:{NFSU2_TR(0x54d9ba);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d9bb:{NFSU2_TR(0x54d9bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d9bc:{NFSU2_TR(0x54d9bc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d9be:{NFSU2_TR(0x54d9be);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d9bf:{NFSU2_TR(0x54d9bf);
__builtin_memmove((R+4),(R+20),4);
}
B54d9c1:{NFSU2_TR(0x54d9c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54d9c6ull));
TAIL_STATIC(0x51aa20u,51a);
}
B54d9c6:L54d9c6:{c.instructions+=7;NFSU2_TR(0x54d9c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54d9ca:{NFSU2_TR(0x54d9ca);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d9d1:{NFSU2_TR(0x54d9d1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d9d2:{NFSU2_TR(0x54d9d2);
u8 U[4];
w4(U+0,u32(0xfffffffbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d9d4:{NFSU2_TR(0x54d9d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d9d5:{NFSU2_TR(0x54d9d5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d9d6:{NFSU2_TR(0x54d9d6);
{goto L54da02;}
}
B54d9d8:L54d9d8:{c.instructions+=9;NFSU2_TR(0x54d9d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54d9dc:{NFSU2_TR(0x54d9dc);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54d9e3:{NFSU2_TR(0x54d9e3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d9e4:{NFSU2_TR(0x54d9e4);
u8 U[4];
w4(U+0,u32(0xfffffffdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d9e6:{NFSU2_TR(0x54d9e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d9e7:{NFSU2_TR(0x54d9e7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d9e9:{NFSU2_TR(0x54d9e9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d9ea:{NFSU2_TR(0x54d9ea);
__builtin_memmove((R+4),(R+20),4);
}
B54d9ec:{NFSU2_TR(0x54d9ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54d9f1ull));
TAIL_STATIC(0x51aa20u,51a);
}
B54d9f1:L54d9f1:{c.instructions+=6;NFSU2_TR(0x54d9f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54d9f5:{NFSU2_TR(0x54d9f5);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54d9fc:{NFSU2_TR(0x54d9fc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d9fd:{NFSU2_TR(0x54d9fd);
u8 U[4];
w4(U+0,u32(0xfffffffbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54d9ff:{NFSU2_TR(0x54d9ff);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54da00:{NFSU2_TR(0x54da00);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54da02:L54da02:{c.instructions+=1;NFSU2_TR(0x54da02);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54da03:L54da03:{c.instructions+=2;NFSU2_TR(0x54da03);
__builtin_memmove((R+4),(R+20),4);
}
B54da05:{NFSU2_TR(0x54da05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54da0aull));
TAIL_STATIC(0x51aa20u,51a);
}
B54da0a:L54da0a:{c.instructions+=2;NFSU2_TR(0x54da0a);
u8 U[12];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B54da0e:{NFSU2_TR(0x54da0e);
if(r1(R+518)){{goto L54dac5;}}
}
B54da14:L54da14:{c.instructions+=5;NFSU2_TR(0x54da14);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54da18:{NFSU2_TR(0x54da18);
u8 U[24];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+12))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B54da1f:{NFSU2_TR(0x54da1f);
u8 U[13];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+28,u32(r1(U+12)));
}
B54da24:{NFSU2_TR(0x54da24);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f7d78ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B54da2b:{NFSU2_TR(0x54da2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54da86;}}
}
B54da2d:L54da2d:{c.instructions+=2;NFSU2_TR(0x54da2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54da2f:{NFSU2_TR(0x54da2f);
if(r1(R+518)){{goto L54da86;}}
}
B54da31:L54da31:{c.instructions+=3;NFSU2_TR(0x54da31);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54da34:{NFSU2_TR(0x54da34);
u8 U[16];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x0ull));
s4(u32(r4(U+8)),r4(U+12));
}
B54da3f:{NFSU2_TR(0x54da3f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54da46;}}
}
B54da41:L54da41:{c.instructions+=1;NFSU2_TR(0x54da41);
w4(R+24,u32(0x936a6a7full));
}
B54da46:L54da46:{c.instructions+=3;NFSU2_TR(0x54da46);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54da49:{NFSU2_TR(0x54da49);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54da4b:{NFSU2_TR(0x54da4b);
if(r1(R+518)){{goto L54da86;}}
}
B54da4d:L54da4d:{c.instructions+=1;NFSU2_TR(0x54da4d);
__builtin_memmove((R+4),(R+4),4);
}
B54da50:L54da50:{c.instructions+=2;NFSU2_TR(0x54da50);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54da53:{NFSU2_TR(0x54da53);
if(r1(R+518)){{goto L54da5e;}}
}
B54da55:L54da55:{c.instructions+=3;NFSU2_TR(0x54da55);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54da58:{NFSU2_TR(0x54da58);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54da5a:{NFSU2_TR(0x54da5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54da50u);}goto L54da50;}}
}
B54da5c:L54da5c:{c.instructions+=1;NFSU2_TR(0x54da5c);
{goto L54da86;}
}
B54da5e:L54da5e:{c.instructions+=8;NFSU2_TR(0x54da5e);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54da65:{NFSU2_TR(0x54da65);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54da66:{NFSU2_TR(0x54da66);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54da67:{NFSU2_TR(0x54da67);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54da68:{NFSU2_TR(0x54da68);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54da6a:{NFSU2_TR(0x54da6a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54da6b:{NFSU2_TR(0x54da6b);
__builtin_memmove((R+4),(R+20),4);
}
B54da6d:{NFSU2_TR(0x54da6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54da72ull));
TAIL_STATIC(0x51aa20u,51a);
}
B54da72:L54da72:{c.instructions+=8;NFSU2_TR(0x54da72);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54da79:{NFSU2_TR(0x54da79);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54da7a:{NFSU2_TR(0x54da7a);
u8 U[4];
w4(U+0,u32(0xfffffffbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54da7c:{NFSU2_TR(0x54da7c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54da7d:{NFSU2_TR(0x54da7d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54da7e:{NFSU2_TR(0x54da7e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54da7f:{NFSU2_TR(0x54da7f);
__builtin_memmove((R+4),(R+20),4);
}
B54da81:{NFSU2_TR(0x54da81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54da86ull));
TAIL_STATIC(0x51aa20u,51a);
}
B54da86:L54da86:{c.instructions+=4;NFSU2_TR(0x54da86);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54da8d:{NFSU2_TR(0x54da8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54da90:{NFSU2_TR(0x54da90);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54da92:{NFSU2_TR(0x54da92);
if(r1(R+518)){{goto L54dac5;}}
}
B54da94:L54da94:{c.instructions+=2;NFSU2_TR(0x54da94);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54da97:{NFSU2_TR(0x54da97);
if(r1(R+518)){{goto L54daa2;}}
}
B54da99:L54da99:{c.instructions+=3;NFSU2_TR(0x54da99);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54da9c:{NFSU2_TR(0x54da9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54da9e:{NFSU2_TR(0x54da9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54da94u);}goto L54da94;}}
}
B54daa0:L54daa0:{c.instructions+=1;NFSU2_TR(0x54daa0);
{goto L54dac5;}
}
B54daa2:L54daa2:{c.instructions+=8;NFSU2_TR(0x54daa2);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B54daa9:{NFSU2_TR(0x54daa9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54daaa:{NFSU2_TR(0x54daaa);
u8 U[4];
w4(U+0,u32(0xfffffffdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54daac:{NFSU2_TR(0x54daac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54daad:{NFSU2_TR(0x54daad);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54daaf:{NFSU2_TR(0x54daaf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54dab0:{NFSU2_TR(0x54dab0);
__builtin_memmove((R+4),(R+20),4);
}
B54dab2:{NFSU2_TR(0x54dab2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54dab7ull));
TAIL_STATIC(0x51aa20u,51a);
}
B54dab7:L54dab7:{c.instructions+=7;NFSU2_TR(0x54dab7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54dab8:{NFSU2_TR(0x54dab8);
u8 U[4];
w4(U+0,u32(0xfffffffbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54daba:{NFSU2_TR(0x54daba);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54dabb:{NFSU2_TR(0x54dabb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54dabd:{NFSU2_TR(0x54dabd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54dabe:{NFSU2_TR(0x54dabe);
__builtin_memmove((R+4),(R+20),4);
}
B54dac0:{NFSU2_TR(0x54dac0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54dac5ull));
TAIL_STATIC(0x51aa20u,51a);
}
B54dac5:L54dac5:{c.instructions+=3;NFSU2_TR(0x54dac5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54dacb:{NFSU2_TR(0x54dacb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54dacd:{NFSU2_TR(0x54dacd);
if(r1(R+518)){{goto L54dad6;}}
}
B54dacf:L54dacf:{c.instructions+=2;NFSU2_TR(0x54dacf);
__builtin_memmove((R+4),(R+20),4);
}
B54dad1:{NFSU2_TR(0x54dad1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54dad6ull));
TAIL_STATIC(0x541fc0u,541);
}
B54dad6:L54dad6:{c.instructions+=5;NFSU2_TR(0x54dad6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54dada:{NFSU2_TR(0x54dada);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B54dadb:{NFSU2_TR(0x54dadb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x13ull))));
}
B54dade:{NFSU2_TR(0x54dade);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54dae2:{NFSU2_TR(0x54dae2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54d580u);}goto L54d580;}}
}
B54dae8:L54dae8:{c.instructions+=6;NFSU2_TR(0x54dae8);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54daef:{NFSU2_TR(0x54daef);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54daf2:{NFSU2_TR(0x54daf2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54daf4:{NFSU2_TR(0x54daf4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54daf8:{NFSU2_TR(0x54daf8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54dafc:{NFSU2_TR(0x54dafc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54db00:L54db00:{c.instructions+=3;NFSU2_TR(0x54db00);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B54db03:{NFSU2_TR(0x54db03);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54db05:{NFSU2_TR(0x54db05);
if(r1(R+518)){{goto L54dbde;}}
}
B54db0b:L54db0b:{c.instructions+=7;NFSU2_TR(0x54db0b);
__builtin_memmove((R+4),(R+0),4);
}
B54db0d:{NFSU2_TR(0x54db0d);
w4(R+24,u32(0x1ull));
}
B54db12:{NFSU2_TR(0x54db12);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B54db14:{NFSU2_TR(0x54db14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54db1a:{NFSU2_TR(0x54db1a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54db1c:{NFSU2_TR(0x54db1c);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54db21:{NFSU2_TR(0x54db21);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L54dbd0;}}
}
B54db27:L54db27:{c.instructions+=2;NFSU2_TR(0x54db27);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B54db29:{NFSU2_TR(0x54db29);
__builtin_memmove((R+16),(R+16),4);
}
B54db30:L54db30:{c.instructions+=6;NFSU2_TR(0x54db30);
__builtin_memmove((R+4),(R+28),4);
}
B54db32:{NFSU2_TR(0x54db32);
w4(R+8,u32(0x1ull));
}
B54db37:{NFSU2_TR(0x54db37);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B54db39:{NFSU2_TR(0x54db39);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54db3d:{NFSU2_TR(0x54db3d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54db3f:{NFSU2_TR(0x54db3f);
if(r1(R+518)){{goto L54dbb7;}}
}
B54db41:L54db41:{c.instructions+=8;NFSU2_TR(0x54db41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54db44:{NFSU2_TR(0x54db44);
__builtin_memmove((R+8),(R+28),4);
}
B54db46:{NFSU2_TR(0x54db46);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B54db4c:{NFSU2_TR(0x54db4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B54db4f:{NFSU2_TR(0x54db4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54db52:{NFSU2_TR(0x54db52);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+24))));
}
B54db54:{NFSU2_TR(0x54db54);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54db56:{NFSU2_TR(0x54db56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54db6e;}}
}
B54db58:L54db58:{c.instructions+=4;NFSU2_TR(0x54db58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B54db5a:{NFSU2_TR(0x54db5a);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+24))));
}
B54db5c:{NFSU2_TR(0x54db5c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54db5e:{NFSU2_TR(0x54db5e);
if(r1(R+518)){{goto L54db6e;}}
}
B54db60:L54db60:{c.instructions+=5;NFSU2_TR(0x54db60);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B54db64:{NFSU2_TR(0x54db64);
__builtin_memmove((R+4),(R+28),4);
}
B54db66:{NFSU2_TR(0x54db66);
w1(R+8,u8(0x1ull));
}
B54db68:{NFSU2_TR(0x54db68);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w1(R+8,shl<u8>(r1(R+8),u64(r1(U+0))));
}
B54db6a:{NFSU2_TR(0x54db6a);
u8 U[13];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+12,u8(u32(r1(U+12))|u32(r1(R+8))));
s1(u32(r4(U+8)),r1(U+12));
}
B54db6e:L54db6e:{c.instructions+=4;NFSU2_TR(0x54db6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54db71:{NFSU2_TR(0x54db71);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+24))));
}
B54db73:{NFSU2_TR(0x54db73);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54db75:{NFSU2_TR(0x54db75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54dbb7;}}
}
B54db77:L54db77:{c.instructions+=4;NFSU2_TR(0x54db77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B54db79:{NFSU2_TR(0x54db79);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+24))));
}
B54db7b:{NFSU2_TR(0x54db7b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54db7d:{NFSU2_TR(0x54db7d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54dbb7;}}
}
B54db7f:L54db7f:{c.instructions+=3;NFSU2_TR(0x54db7f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54db80:{NFSU2_TR(0x54db80);
__builtin_memmove((R+4),(R+12),4);
}
B54db82:{NFSU2_TR(0x54db82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54db87ull));
TAIL_STATIC(0x504ff0u,504);
}
B54db87:L54db87:{c.instructions+=3;NFSU2_TR(0x54db87);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54db8b:{NFSU2_TR(0x54db8b);
u8 U[24];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w1(R+512,u8((r4(U+16))<(r4(R+0))));
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+0))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B54db8f:{NFSU2_TR(0x54db8f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L54db97;}}
}
B54db91:L54db91:{c.instructions+=2;NFSU2_TR(0x54db91);
u8 U[16];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B54db95:{NFSU2_TR(0x54db95);
{goto L54dba3;}
}
B54db97:L54db97:{c.instructions+=3;NFSU2_TR(0x54db97);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54db98:{NFSU2_TR(0x54db98);
__builtin_memmove((R+4),(R+12),4);
}
B54db9a:{NFSU2_TR(0x54db9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54db9full));
TAIL_STATIC(0x504ff0u,504);
}
B54db9f:L54db9f:{c.instructions+=1;NFSU2_TR(0x54db9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54dba3:L54dba3:{c.instructions+=7;NFSU2_TR(0x54dba3);
u8 U[16];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B54dba7:{NFSU2_TR(0x54dba7);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B54dbab:{NFSU2_TR(0x54dbab);
__builtin_memmove((R+4),(R+28),4);
}
B54dbad:{NFSU2_TR(0x54dbad);
w1(R+8,u8(0x1ull));
}
B54dbaf:{NFSU2_TR(0x54dbaf);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w1(R+8,shl<u8>(r1(R+8),u64(r1(U+0))));
}
B54dbb1:{NFSU2_TR(0x54dbb1);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))|u32(r1(R+8))));
s1(u32(r4(R+0)),r1(U+0));
}
B54dbb3:{NFSU2_TR(0x54dbb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54dbb7:L54dbb7:{c.instructions+=6;NFSU2_TR(0x54dbb7);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B54dbbb:{NFSU2_TR(0x54dbbb);
w1(R+4,u8(u32(r1(R+4))+u32(u8(0x1ull))));
}
B54dbbd:{NFSU2_TR(0x54dbbd);
w4(R+28,u32(r1(R+4)));
}
B54dbc0:{NFSU2_TR(0x54dbc0);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B54dbc4:{NFSU2_TR(0x54dbc4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B54dbca:{NFSU2_TR(0x54dbca);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54db30u);}goto L54db30;}}
}
B54dbd0:L54dbd0:{c.instructions+=4;NFSU2_TR(0x54dbd0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B54dbd1:{NFSU2_TR(0x54dbd1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B54dbd4:{NFSU2_TR(0x54dbd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54dbd8:{NFSU2_TR(0x54dbd8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54db00u);}goto L54db00;}}
}
B54dbde:L54dbde:{c.instructions+=1;NFSU2_TR(0x54dbde);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B54dbe0:L54dbe0:{c.instructions+=3;NFSU2_TR(0x54dbe0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54dbe3:{NFSU2_TR(0x54dbe3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54dbe5:{NFSU2_TR(0x54dbe5);
if(r1(R+518)){{goto L54dff7;}}
}
B54dbeb:L54dbeb:{c.instructions+=6;NFSU2_TR(0x54dbeb);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54dbf2:{NFSU2_TR(0x54dbf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54dbf8:{NFSU2_TR(0x54dbf8);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f7cfdull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B54dbff:{NFSU2_TR(0x54dbff);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0xffull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54dc01:{NFSU2_TR(0x54dc01);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54dc05:{NFSU2_TR(0x54dc05);
if(r1(R+518)){{goto L54dc52;}}
}
B54dc07:L54dc07:{c.instructions+=7;NFSU2_TR(0x54dc07);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f7cfcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+12,u32(r1(U+8)));
}
B54dc0f:{NFSU2_TR(0x54dc0f);
u8 U[16];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B54dc13:{NFSU2_TR(0x54dc13);
w4(R+0,u32(r1(R+0)));
}
B54dc16:{NFSU2_TR(0x54dc16);
u8 U[16];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B54dc1a:{NFSU2_TR(0x54dc1a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B54dc1c:{NFSU2_TR(0x54dc1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54dc20:{NFSU2_TR(0x54dc20);
if(r1(R+512)){{goto L54dc26;}}
}
B54dc22:L54dc22:{c.instructions+=1;NFSU2_TR(0x54dc22);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54dc26:L54dc26:{c.instructions+=14;NFSU2_TR(0x54dc26);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54dc2a:{NFSU2_TR(0x54dc2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54dc2e:{NFSU2_TR(0x54dc2e);
__builtin_memmove((R+4),(R+12),4);
}
B54dc30:{NFSU2_TR(0x54dc30);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r1(U+0))));
}
B54dc32:{NFSU2_TR(0x54dc32);
__builtin_memmove((R+4),(R+0),4);
}
B54dc34:{NFSU2_TR(0x54dc34);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r1(U+0))));
}
B54dc36:{NFSU2_TR(0x54dc36);
u8 U[13];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(r1(U+12)));
}
B54dc3b:{NFSU2_TR(0x54dc3b);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+24))));
}
B54dc3d:{NFSU2_TR(0x54dc3d);
u8 U[13];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+24,u32(r1(U+12)));
}
B54dc42:{NFSU2_TR(0x54dc42);
u8 U[13];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B54dc47:{NFSU2_TR(0x54dc47);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+4))));
}
B54dc49:{NFSU2_TR(0x54dc49);
u8 U[13];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(r1(U+12)));
}
B54dc4e:{NFSU2_TR(0x54dc4e);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B54dc50:{NFSU2_TR(0x54dc50);
{goto L54dc72;}
}
B54dc52:L54dc52:{c.instructions+=7;NFSU2_TR(0x54dc52);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f7cfcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B54dc5a:{NFSU2_TR(0x54dc5a);
u8 U[16];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B54dc5e:{NFSU2_TR(0x54dc5e);
u8 U[13];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+24,u32(r1(U+12)));
}
B54dc63:{NFSU2_TR(0x54dc63);
u8 U[13];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B54dc68:{NFSU2_TR(0x54dc68);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54dc6c:{NFSU2_TR(0x54dc6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54dc70:{NFSU2_TR(0x54dc70);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r1(U+0))));
}
B54dc72:L54dc72:{c.instructions+=14;NFSU2_TR(0x54dc72);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
}
B54dc74:{NFSU2_TR(0x54dc74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54dc77:{NFSU2_TR(0x54dc77);
__builtin_memmove((R+4),(R+28),4);
}
B54dc79:{NFSU2_TR(0x54dc79);
w4(R+12,u32(0x1ull));
}
B54dc7e:{NFSU2_TR(0x54dc7e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B54dc80:{NFSU2_TR(0x54dc80);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54dc84:{NFSU2_TR(0x54dc84);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x1ull))));
}
B54dc87:{NFSU2_TR(0x54dc87);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B54dc89:{NFSU2_TR(0x54dc89);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B54dc8b:{NFSU2_TR(0x54dc8b);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B54dc8d:{NFSU2_TR(0x54dc8d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffff38ull))));
}
B54dc92:{NFSU2_TR(0x54dc92);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x140ull))));
}
B54dc97:{NFSU2_TR(0x54dc97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B54dc99:{NFSU2_TR(0x54dc99);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L54dcdf;}}
}
B54dc9b:L54dc9b:{c.instructions+=2;NFSU2_TR(0x54dc9b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54dc9d:{NFSU2_TR(0x54dc9d);
if(r1(R+518)){{goto L54dca5;}}
}
B54dc9f:L54dc9f:{c.instructions+=2;NFSU2_TR(0x54dc9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54dca1:{NFSU2_TR(0x54dca1);
if(r1(R+518)){{goto L54dcf3;}}
}
B54dca3:L54dca3:{c.instructions+=1;NFSU2_TR(0x54dca3);
{goto L54dcb7;}
}
B54dca5:L54dca5:{c.instructions+=3;NFSU2_TR(0x54dca5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54dca9:{NFSU2_TR(0x54dca9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54dcab:{NFSU2_TR(0x54dcab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54dcb7;}}
}
B54dcad:L54dcad:{c.instructions+=4;NFSU2_TR(0x54dcad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54dcb0:{NFSU2_TR(0x54dcb0);
w4(R+12,u32(~u32(r4(R+12))));
}
B54dcb2:{NFSU2_TR(0x54dcb2);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B54dcb4:{NFSU2_TR(0x54dcb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54dcb7:L54dcb7:{c.instructions+=3;NFSU2_TR(0x54dcb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54dcbd:{NFSU2_TR(0x54dcbd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54dcbf:{NFSU2_TR(0x54dcbf);
if(r1(R+518)){{goto L54dcc8;}}
}
B54dcc1:L54dcc1:{c.instructions+=2;NFSU2_TR(0x54dcc1);
__builtin_memmove((R+4),(R+20),4);
}
B54dcc3:{NFSU2_TR(0x54dcc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54dcc8ull));
TAIL_STATIC(0x541fc0u,541);
}
B54dcc8:L54dcc8:{c.instructions+=3;NFSU2_TR(0x54dcc8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B54dcc9:{NFSU2_TR(0x54dcc9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x8ull))));
}
B54dccc:{NFSU2_TR(0x54dccc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54dbe0u);}goto L54dbe0;}}
}
B54dcd2:L54dcd2:{c.instructions+=6;NFSU2_TR(0x54dcd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54dcd3:{NFSU2_TR(0x54dcd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54dcd4:{NFSU2_TR(0x54dcd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54dcd5:{NFSU2_TR(0x54dcd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54dcd6:{NFSU2_TR(0x54dcd6);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xa0ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xa0ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xa0ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B54dcdc:{NFSU2_TR(0x54dcdc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54dcdf:L54dcdf:{c.instructions+=3;NFSU2_TR(0x54dcdf);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54dce3:{NFSU2_TR(0x54dce3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54dce5:{NFSU2_TR(0x54dce5);
if(r1(R+518)){{goto L54dcf3;}}
}
B54dce7:L54dce7:{c.instructions+=4;NFSU2_TR(0x54dce7);
__builtin_memmove((R+4),(R+28),4);
}
B54dce9:{NFSU2_TR(0x54dce9);
w4(R+8,u32(0x1ull));
}
B54dcee:{NFSU2_TR(0x54dcee);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B54dcf0:{NFSU2_TR(0x54dcf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B54dcf3:L54dcf3:{c.instructions+=5;NFSU2_TR(0x54dcf3);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f7cfcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B54dcfb:{NFSU2_TR(0x54dcfb);
u8 U[16];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B54dcff:{NFSU2_TR(0x54dcff);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f7cfdull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+4),(U+8),1);
}
B54dd06:{NFSU2_TR(0x54dd06);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0xffull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B54dd09:{NFSU2_TR(0x54dd09);
if(r1(R+518)){{goto L54dd12;}}
}
B54dd0b:L54dd0b:{c.instructions+=2;NFSU2_TR(0x54dd0b);
w4(R+8,u32(r1(R+4)));
}
B54dd0e:{NFSU2_TR(0x54dd0e);
u8 U[16];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B54dd12:L54dd12:{c.instructions+=4;NFSU2_TR(0x54dd12);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f7cfdull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B54dd19:{NFSU2_TR(0x54dd19);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0xffull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54dd1b:{NFSU2_TR(0x54dd1b);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f7cfcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B54dd23:{NFSU2_TR(0x54dd23);
if(r1(R+518)){{goto L54dd51;}}
}
B54dd25:L54dd25:{c.instructions+=14;NFSU2_TR(0x54dd25);
w4(R+0,u32(r1(R+0)));
}
B54dd28:{NFSU2_TR(0x54dd28);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B54dd2a:{NFSU2_TR(0x54dd2a);
u8 U[16];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B54dd2e:{NFSU2_TR(0x54dd2e);
w4(R+8,u32(0x1ull));
}
B54dd33:{NFSU2_TR(0x54dd33);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B54dd35:{NFSU2_TR(0x54dd35);
w4(R+4,u32(0x1ull));
}
B54dd3a:{NFSU2_TR(0x54dd3a);
u8 U[16];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B54dd3e:{NFSU2_TR(0x54dd3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54dd42:{NFSU2_TR(0x54dd42);
__builtin_memmove((R+4),(R+0),4);
}
B54dd44:{NFSU2_TR(0x54dd44);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54dd48:{NFSU2_TR(0x54dd48);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B54dd4a:{NFSU2_TR(0x54dd4a);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B54dd4c:{NFSU2_TR(0x54dd4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B54dd4f:{NFSU2_TR(0x54dd4f);
{goto L54dd65;}
}
B54dd51:L54dd51:{c.instructions+=5;NFSU2_TR(0x54dd51);
w4(R+0,u32(0x1ull));
}
B54dd56:{NFSU2_TR(0x54dd56);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B54dd58:{NFSU2_TR(0x54dd58);
u8 U[16];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x0ull));
s4(u32(r4(U+8)),r4(U+12));
}
B54dd60:{NFSU2_TR(0x54dd60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B54dd63:{NFSU2_TR(0x54dd63);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B54dd65:L54dd65:{c.instructions+=3;NFSU2_TR(0x54dd65);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54dd69:{NFSU2_TR(0x54dd69);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54dd6b:{NFSU2_TR(0x54dd6b);
if(r1(R+518)){{goto L54dfa5;}}
}
B54dd71:L54dd71:{c.instructions+=9;NFSU2_TR(0x54dd71);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f7cfeull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(r2(U+8)));
}
B54dd79:{NFSU2_TR(0x54dd79);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f7c90ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B54dd80:{NFSU2_TR(0x54dd80);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f7cfeull))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B54dd87:{NFSU2_TR(0x54dd87);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54dd8b:{NFSU2_TR(0x54dd8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B54dd8e:{NFSU2_TR(0x54dd8e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54dd90:{NFSU2_TR(0x54dd90);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54dd94:{NFSU2_TR(0x54dd94);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54dd98:{NFSU2_TR(0x54dd98);
if(r1(R+518)){{goto L54ddb0;}}
}
B54dd9a:L54dd9a:{c.instructions+=1;NFSU2_TR(0x54dd9a);
__builtin_memmove((R+12),(R+12),4);
}
B54dda0:L54dda0:{c.instructions+=2;NFSU2_TR(0x54dda0);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54dda3:{NFSU2_TR(0x54dda3);
if(r1(R+518)){{goto L54de75;}}
}
B54dda9:L54dda9:{c.instructions+=3;NFSU2_TR(0x54dda9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B54ddac:{NFSU2_TR(0x54ddac);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54ddae:{NFSU2_TR(0x54ddae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54dda0u);}goto L54dda0;}}
}
B54ddb0:L54ddb0:{c.instructions+=3;NFSU2_TR(0x54ddb0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0x80000ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B54ddb7:{NFSU2_TR(0x54ddb7);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54ddbe:{NFSU2_TR(0x54ddbe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54dde3;}}
}
B54ddc0:L54ddc0:{c.instructions+=9;NFSU2_TR(0x54ddc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54ddc6:{NFSU2_TR(0x54ddc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54ddcc:{NFSU2_TR(0x54ddcc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ddcd:{NFSU2_TR(0x54ddcd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ddce:{NFSU2_TR(0x54ddce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ddcf:{NFSU2_TR(0x54ddcf);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ddd3:{NFSU2_TR(0x54ddd3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ddd4:{NFSU2_TR(0x54ddd4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((R+4),(U+0),4);
}
B54ddda:{NFSU2_TR(0x54ddda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54dddfull));
TAIL_STATIC(0x5189e0u,518);
}
B54dddf:L54dddf:{c.instructions+=1;NFSU2_TR(0x54dddf);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54dde3:L54dde3:{c.instructions+=8;NFSU2_TR(0x54dde3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54dde7:{NFSU2_TR(0x54dde7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54dde8:{NFSU2_TR(0x54dde8);
u8 U[4];
w4(U+0,u32(0xfffffffdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ddea:{NFSU2_TR(0x54ddea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ddeb:{NFSU2_TR(0x54ddeb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54dded:{NFSU2_TR(0x54dded);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ddee:{NFSU2_TR(0x54ddee);
__builtin_memmove((R+4),(R+20),4);
}
B54ddf0:{NFSU2_TR(0x54ddf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ddf5ull));
TAIL_STATIC(0x51aa20u,51a);
}
B54ddf5:L54ddf5:{c.instructions+=9;NFSU2_TR(0x54ddf5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54ddf9:{NFSU2_TR(0x54ddf9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ddfd:{NFSU2_TR(0x54ddfd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ddfe:{NFSU2_TR(0x54ddfe);
u8 U[4];
w4(U+0,u32(0xfffffffbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54de00:{NFSU2_TR(0x54de00);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54de01:{NFSU2_TR(0x54de01);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54de02:{NFSU2_TR(0x54de02);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54de03:{NFSU2_TR(0x54de03);
__builtin_memmove((R+4),(R+20),4);
}
B54de05:{NFSU2_TR(0x54de05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54de0aull));
TAIL_STATIC(0x51aa20u,51a);
}
B54de0a:L54de0a:{c.instructions+=3;NFSU2_TR(0x54de0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54de0e:{NFSU2_TR(0x54de0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54de10:{NFSU2_TR(0x54de10);
if(r1(R+518)){{goto L54dff7;}}
}
B54de16:L54de16:{c.instructions+=2;NFSU2_TR(0x54de16);
w4(R+12,u32(0x4ull));
}
B54de1b:{NFSU2_TR(0x54de1b);
{goto L54de20;}
}
B54de20:L54de20:{c.instructions+=3;NFSU2_TR(0x54de20);
u8 U[16];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B54de27:{NFSU2_TR(0x54de27);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54de29:{NFSU2_TR(0x54de29);
if(r1(R+518)){{goto L54df2c;}}
}
B54de2f:L54de2f:{c.instructions+=4;NFSU2_TR(0x54de2f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54de32:{NFSU2_TR(0x54de32);
u8 U[16];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x0ull));
s4(u32(r4(U+8)),r4(U+12));
}
B54de3d:{NFSU2_TR(0x54de3d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f7d78ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B54de44:{NFSU2_TR(0x54de44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54de4b;}}
}
B54de46:L54de46:{c.instructions+=1;NFSU2_TR(0x54de46);
w4(R+24,u32(0x936a6a7full));
}
B54de4b:L54de4b:{c.instructions+=4;NFSU2_TR(0x54de4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54de4f:{NFSU2_TR(0x54de4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54de52:{NFSU2_TR(0x54de52);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54de54:{NFSU2_TR(0x54de54);
if(r1(R+518)){{goto L54df2c;}}
}
B54de5a:L54de5a:{c.instructions+=1;NFSU2_TR(0x54de5a);
__builtin_memmove((R+12),(R+12),4);
}
B54de60:L54de60:{c.instructions+=2;NFSU2_TR(0x54de60);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54de63:{NFSU2_TR(0x54de63);
if(r1(R+518)){{goto L54df00;}}
}
B54de69:L54de69:{c.instructions+=3;NFSU2_TR(0x54de69);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54de6c:{NFSU2_TR(0x54de6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54de6e:{NFSU2_TR(0x54de6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54de60u);}goto L54de60;}}
}
B54de70:L54de70:{c.instructions+=1;NFSU2_TR(0x54de70);
{goto L54df2c;}
}
B54de75:L54de75:{c.instructions+=2;NFSU2_TR(0x54de75);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54de77:{NFSU2_TR(0x54de77);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54ddb0u);}goto L54ddb0;}}
}
B54de7d:L54de7d:{c.instructions+=10;NFSU2_TR(0x54de7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54de81:{NFSU2_TR(0x54de81);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54de88:{NFSU2_TR(0x54de88);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54de8c:{NFSU2_TR(0x54de8c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54de8d:{NFSU2_TR(0x54de8d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54de8e:{NFSU2_TR(0x54de8e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54de8f:{NFSU2_TR(0x54de8f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54de91:{NFSU2_TR(0x54de91);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54de92:{NFSU2_TR(0x54de92);
__builtin_memmove((R+4),(R+20),4);
}
B54de94:{NFSU2_TR(0x54de94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54de99ull));
TAIL_STATIC(0x51aa20u,51a);
}
B54de99:L54de99:{c.instructions+=3;NFSU2_TR(0x54de99);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54de9d:{NFSU2_TR(0x54de9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0x80000ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B54dea4:{NFSU2_TR(0x54dea4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54ddf5u);}goto L54ddf5;}}
}
B54deaa:L54deaa:{c.instructions+=4;NFSU2_TR(0x54deaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54dead:{NFSU2_TR(0x54dead);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54deaf:{NFSU2_TR(0x54deaf);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54deb1:{NFSU2_TR(0x54deb1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L54ded1;}}
}
B54deb3:L54deb3:{c.instructions+=1;NFSU2_TR(0x54deb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B54deb6:L54deb6:{c.instructions+=2;NFSU2_TR(0x54deb6);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x104ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B54debc:{NFSU2_TR(0x54debc);
if(r1(R+518)){{goto L54dec8;}}
}
B54debe:L54debe:{c.instructions+=4;NFSU2_TR(0x54debe);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B54debf:{NFSU2_TR(0x54debf);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xcull))));
}
B54dec2:{NFSU2_TR(0x54dec2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B54dec4:{NFSU2_TR(0x54dec4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54deb6u);}goto L54deb6;}}
}
B54dec6:L54dec6:{c.instructions+=1;NFSU2_TR(0x54dec6);
{goto L54ded1;}
}
B54dec8:L54dec8:{c.instructions+=2;NFSU2_TR(0x54dec8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54decb:{NFSU2_TR(0x54decb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54ddf5u);}goto L54ddf5;}}
}
B54ded1:L54ded1:{c.instructions+=11;NFSU2_TR(0x54ded1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54ded7:{NFSU2_TR(0x54ded7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54dedb:{NFSU2_TR(0x54dedb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54dee1:{NFSU2_TR(0x54dee1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54dee2:{NFSU2_TR(0x54dee2);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+4,u32(r2(U+0)));
}
B54dee5:{NFSU2_TR(0x54dee5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54dee6:{NFSU2_TR(0x54dee6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54deea:{NFSU2_TR(0x54deea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54deeb:{NFSU2_TR(0x54deeb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54deec:{NFSU2_TR(0x54deec);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((R+4),(U+0),4);
}
B54def2:{NFSU2_TR(0x54def2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54def7ull));
TAIL_STATIC(0x5189e0u,518);
}
B54def7:L54def7:{c.instructions+=2;NFSU2_TR(0x54def7);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54defb:{NFSU2_TR(0x54defb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54ddf5u);}goto L54ddf5;}
}
B54df00:L54df00:{c.instructions+=9;NFSU2_TR(0x54df00);
u8 U[13];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B54df05:{NFSU2_TR(0x54df05);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54df09:{NFSU2_TR(0x54df09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54df0a:{NFSU2_TR(0x54df0a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54df0b:{NFSU2_TR(0x54df0b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54df0c:{NFSU2_TR(0x54df0c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54df0e:{NFSU2_TR(0x54df0e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54df0f:{NFSU2_TR(0x54df0f);
__builtin_memmove((R+4),(R+20),4);
}
B54df11:{NFSU2_TR(0x54df11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54df16ull));
TAIL_STATIC(0x51aa20u,51a);
}
B54df16:L54df16:{c.instructions+=9;NFSU2_TR(0x54df16);
u8 U[13];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B54df1b:{NFSU2_TR(0x54df1b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54df1c:{NFSU2_TR(0x54df1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54df20:{NFSU2_TR(0x54df20);
u8 U[4];
w4(U+0,u32(0xfffffffbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54df22:{NFSU2_TR(0x54df22);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54df23:{NFSU2_TR(0x54df23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54df24:{NFSU2_TR(0x54df24);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54df25:{NFSU2_TR(0x54df25);
__builtin_memmove((R+4),(R+20),4);
}
B54df27:{NFSU2_TR(0x54df27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54df2cull));
TAIL_STATIC(0x51aa20u,51a);
}
B54df2c:L54df2c:{c.instructions+=3;NFSU2_TR(0x54df2c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B54df2d:{NFSU2_TR(0x54df2d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0x13ull))));
}
B54df30:{NFSU2_TR(0x54df30);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54de20u);}goto L54de20;}}
}
B54df36:L54df36:{c.instructions+=3;NFSU2_TR(0x54df36);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54df3c:{NFSU2_TR(0x54df3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54df3e:{NFSU2_TR(0x54df3e);
if(r1(R+518)){{goto L54df6a;}}
}
B54df40:L54df40:{c.instructions+=7;NFSU2_TR(0x54df40);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54df42:{NFSU2_TR(0x54df42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54df43:{NFSU2_TR(0x54df43);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54df44:{NFSU2_TR(0x54df44);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54df46:{NFSU2_TR(0x54df46);
u8 U[4];
w4(U+0,u32(0x55d1e635ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54df4b:{NFSU2_TR(0x54df4b);
__builtin_memmove((R+4),(R+20),4);
}
B54df4d:{NFSU2_TR(0x54df4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54df52ull));
TAIL_STATIC(0x51aa20u,51a);
}
B54df52:L54df52:{c.instructions+=8;NFSU2_TR(0x54df52);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54df58:{NFSU2_TR(0x54df58);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54df5a:{NFSU2_TR(0x54df5a);
u8 U[4];
w4(U+0,u32(0xfffffffbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54df5c:{NFSU2_TR(0x54df5c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54df5d:{NFSU2_TR(0x54df5d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54df5e:{NFSU2_TR(0x54df5e);
u8 U[4];
w4(U+0,u32(0x55d1e635ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54df63:{NFSU2_TR(0x54df63);
__builtin_memmove((R+4),(R+20),4);
}
B54df65:{NFSU2_TR(0x54df65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54df6aull));
TAIL_STATIC(0x51aa20u,51a);
}
B54df6a:L54df6a:{c.instructions+=8;NFSU2_TR(0x54df6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54df6e:{NFSU2_TR(0x54df6e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54df70:{NFSU2_TR(0x54df70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54df71:{NFSU2_TR(0x54df71);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54df72:{NFSU2_TR(0x54df72);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54df74:{NFSU2_TR(0x54df74);
u8 U[4];
w4(U+0,u32(0xabc08912ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54df79:{NFSU2_TR(0x54df79);
__builtin_memmove((R+4),(R+20),4);
}
B54df7b:{NFSU2_TR(0x54df7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54df80ull));
TAIL_STATIC(0x51aa20u,51a);
}
B54df80:L54df80:{c.instructions+=7;NFSU2_TR(0x54df80);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54df82:{NFSU2_TR(0x54df82);
u8 U[4];
w4(U+0,u32(0xfffffffbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54df84:{NFSU2_TR(0x54df84);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54df85:{NFSU2_TR(0x54df85);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54df86:{NFSU2_TR(0x54df86);
u8 U[4];
w4(U+0,u32(0xabc08912ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54df8b:{NFSU2_TR(0x54df8b);
__builtin_memmove((R+4),(R+20),4);
}
B54df8d:{NFSU2_TR(0x54df8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54df92ull));
TAIL_STATIC(0x51aa20u,51a);
}
B54df92:L54df92:{c.instructions+=7;NFSU2_TR(0x54df92);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54df98:{NFSU2_TR(0x54df98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54df99:{NFSU2_TR(0x54df99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54df9a:{NFSU2_TR(0x54df9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54df9b:{NFSU2_TR(0x54df9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54df9c:{NFSU2_TR(0x54df9c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xa0ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xa0ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xa0ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B54dfa2:{NFSU2_TR(0x54dfa2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54dfa5:L54dfa5:{c.instructions+=6;NFSU2_TR(0x54dfa5);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B54dfac:{NFSU2_TR(0x54dfac);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f7cfeull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+8,u32(r2(U+8)));
}
B54dfb4:{NFSU2_TR(0x54dfb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54dfb7:{NFSU2_TR(0x54dfb7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54dfb9:{NFSU2_TR(0x54dfb9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f7c90ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B54dfc0:{NFSU2_TR(0x54dfc0);
if(r1(R+518)){{goto L54dff7;}}
}
B54dfc2:L54dfc2:{c.instructions+=2;NFSU2_TR(0x54dfc2);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54dfc5:{NFSU2_TR(0x54dfc5);
if(r1(R+518)){{goto L54dfdb;}}
}
B54dfc7:L54dfc7:{c.instructions+=3;NFSU2_TR(0x54dfc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54dfca:{NFSU2_TR(0x54dfca);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54dfcc:{NFSU2_TR(0x54dfcc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54dfc2u);}goto L54dfc2;}}
}
B54dfce:L54dfce:{c.instructions+=6;NFSU2_TR(0x54dfce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54dfcf:{NFSU2_TR(0x54dfcf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54dfd0:{NFSU2_TR(0x54dfd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54dfd1:{NFSU2_TR(0x54dfd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54dfd2:{NFSU2_TR(0x54dfd2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xa0ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xa0ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xa0ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B54dfd8:{NFSU2_TR(0x54dfd8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54dfdb:L54dfdb:{c.instructions+=7;NFSU2_TR(0x54dfdb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54dfdc:{NFSU2_TR(0x54dfdc);
u8 U[4];
w4(U+0,u32(0xfffffffdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54dfde:{NFSU2_TR(0x54dfde);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54dfdf:{NFSU2_TR(0x54dfdf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54dfe1:{NFSU2_TR(0x54dfe1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54dfe2:{NFSU2_TR(0x54dfe2);
__builtin_memmove((R+4),(R+20),4);
}
B54dfe4:{NFSU2_TR(0x54dfe4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54dfe9ull));
TAIL_STATIC(0x51aa20u,51a);
}
B54dfe9:L54dfe9:{c.instructions+=7;NFSU2_TR(0x54dfe9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54dfea:{NFSU2_TR(0x54dfea);
u8 U[4];
w4(U+0,u32(0xfffffffbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54dfec:{NFSU2_TR(0x54dfec);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54dfed:{NFSU2_TR(0x54dfed);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54dfef:{NFSU2_TR(0x54dfef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54dff0:{NFSU2_TR(0x54dff0);
__builtin_memmove((R+4),(R+20),4);
}
B54dff2:{NFSU2_TR(0x54dff2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54dff7ull));
TAIL_STATIC(0x51aa20u,51a);
}
B54dff7:L54dff7:{c.instructions+=2;NFSU2_TR(0x54dff7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54dff8:{NFSU2_TR(0x54dff8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54dff9:L54dff9:{c.instructions+=3;NFSU2_TR(0x54dff9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54dffa:{NFSU2_TR(0x54dffa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54dffb:{NFSU2_TR(0x54dffb);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xa0ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xa0ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xa0ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
TAIL_STATIC(0x54e001u,54e);
}
XIT:NFSU2_TR_EXIT(0x54d,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
