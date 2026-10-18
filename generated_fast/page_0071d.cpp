#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_71e(u8* __restrict R,Cpu& c);
u32 body_75f(u8* __restrict R,Cpu& c);
u32 body_760(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x71d,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x71d,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_71d(u8* __restrict R,Cpu& c);
u32 page_71d(Cpu& c){return body_71d(c.regs.data(),c);}
__attribute__((noinline)) u32 body_71d(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x71d02a:goto L71d02a;
case 0x71d02c:c.instructions+=2;goto B71d02c;
case 0x71d031:c.instructions+=1;goto B71d031;
case 0x71d036:goto L71d036;
case 0x71d03a:c.instructions+=13;goto B71d03a;
case 0x71d03e:c.instructions+=12;goto B71d03e;
case 0x71d041:c.instructions+=11;goto B71d041;
case 0x71d046:c.instructions+=10;goto B71d046;
case 0x71d048:c.instructions+=9;goto B71d048;
case 0x71d04a:c.instructions+=8;goto B71d04a;
case 0x71d04d:c.instructions+=7;goto B71d04d;
case 0x71d050:c.instructions+=6;goto B71d050;
case 0x71d054:c.instructions+=5;goto B71d054;
case 0x71d056:c.instructions+=4;goto B71d056;
case 0x71d05b:c.instructions+=3;goto B71d05b;
case 0x71d05e:c.instructions+=2;goto B71d05e;
case 0x71d05f:c.instructions+=1;goto B71d05f;
case 0x71d064:goto L71d064;
case 0x71d067:c.instructions+=2;goto B71d067;
case 0x71d069:c.instructions+=1;goto B71d069;
case 0x71d06b:goto L71d06b;
case 0x71d06d:c.instructions+=4;goto B71d06d;
case 0x71d072:c.instructions+=3;goto B71d072;
case 0x71d075:c.instructions+=2;goto B71d075;
case 0x71d076:c.instructions+=1;goto B71d076;
case 0x71d07b:goto L71d07b;
case 0x71d07e:c.instructions+=2;goto B71d07e;
case 0x71d080:c.instructions+=1;goto B71d080;
case 0x71d082:goto L71d082;
case 0x71d087:c.instructions+=3;goto B71d087;
case 0x71d089:c.instructions+=2;goto B71d089;
case 0x71d08f:c.instructions+=1;goto B71d08f;
case 0x71d091:goto L71d091;
case 0x71d098:goto L71d098;
case 0x71d099:goto L71d099;
case 0x71d09c:c.instructions+=1;goto B71d09c;
case 0x71d09e:goto L71d09e;
case 0x71d0a1:c.instructions+=6;goto B71d0a1;
case 0x71d0a3:c.instructions+=5;goto B71d0a3;
case 0x71d0a5:c.instructions+=4;goto B71d0a5;
case 0x71d0a8:c.instructions+=3;goto B71d0a8;
case 0x71d0aa:c.instructions+=2;goto B71d0aa;
case 0x71d0ab:c.instructions+=1;goto B71d0ab;
case 0x71d0ac:goto L71d0ac;
case 0x71d0af:c.instructions+=2;goto B71d0af;
case 0x71d0b3:c.instructions+=1;goto B71d0b3;
case 0x71d0b5:goto L71d0b5;
case 0x71d0ba:goto L71d0ba;
case 0x71d0d8:goto L71d0d8;
case 0x71d0db:c.instructions+=6;goto B71d0db;
case 0x71d0dd:c.instructions+=5;goto B71d0dd;
case 0x71d0df:c.instructions+=4;goto B71d0df;
case 0x71d0e2:c.instructions+=3;goto B71d0e2;
case 0x71d0e4:c.instructions+=2;goto B71d0e4;
case 0x71d0e5:c.instructions+=1;goto B71d0e5;
case 0x71d0e6:goto L71d0e6;
case 0x71d0e9:c.instructions+=3;goto B71d0e9;
case 0x71d0ed:c.instructions+=2;goto B71d0ed;
case 0x71d0ef:c.instructions+=1;goto B71d0ef;
case 0x71d0f4:goto L71d0f4;
case 0x71d0f5:goto L71d0f5;
case 0x71d0f7:c.instructions+=1;goto B71d0f7;
case 0x71d0f8:goto L71d0f8;
case 0x71d0f9:c.instructions+=34;goto B71d0f9;
case 0x71d0fb:c.instructions+=33;goto B71d0fb;
case 0x71d0fc:c.instructions+=32;goto B71d0fc;
case 0x71d0ff:c.instructions+=31;goto B71d0ff;
case 0x71d102:c.instructions+=30;goto B71d102;
case 0x71d105:c.instructions+=29;goto B71d105;
case 0x71d108:c.instructions+=28;goto B71d108;
case 0x71d10b:c.instructions+=27;goto B71d10b;
case 0x71d10c:c.instructions+=26;goto B71d10c;
case 0x71d10f:c.instructions+=25;goto B71d10f;
case 0x71d112:c.instructions+=24;goto B71d112;
case 0x71d115:c.instructions+=23;goto B71d115;
case 0x71d118:c.instructions+=22;goto B71d118;
case 0x71d11b:c.instructions+=21;goto B71d11b;
case 0x71d11e:c.instructions+=20;goto B71d11e;
case 0x71d122:c.instructions+=19;goto B71d122;
case 0x71d126:c.instructions+=18;goto B71d126;
case 0x71d12a:c.instructions+=17;goto B71d12a;
case 0x71d12d:c.instructions+=16;goto B71d12d;
case 0x71d130:c.instructions+=15;goto B71d130;
case 0x71d134:c.instructions+=14;goto B71d134;
case 0x71d138:c.instructions+=13;goto B71d138;
case 0x71d13c:c.instructions+=12;goto B71d13c;
case 0x71d13f:c.instructions+=11;goto B71d13f;
case 0x71d142:c.instructions+=10;goto B71d142;
case 0x71d146:c.instructions+=9;goto B71d146;
case 0x71d14a:c.instructions+=8;goto B71d14a;
case 0x71d14e:c.instructions+=7;goto B71d14e;
case 0x71d151:c.instructions+=6;goto B71d151;
case 0x71d155:c.instructions+=5;goto B71d155;
case 0x71d159:c.instructions+=4;goto B71d159;
case 0x71d15d:c.instructions+=3;goto B71d15d;
case 0x71d15e:c.instructions+=2;goto B71d15e;
case 0x71d15f:c.instructions+=1;goto B71d15f;
case 0x71d160:goto L71d160;
case 0x71d161:c.instructions+=6;goto B71d161;
case 0x71d163:c.instructions+=5;goto B71d163;
case 0x71d166:c.instructions+=4;goto B71d166;
case 0x71d169:c.instructions+=3;goto B71d169;
case 0x71d16b:c.instructions+=2;goto B71d16b;
case 0x71d16c:c.instructions+=1;goto B71d16c;
case 0x71d16d:goto L71d16d;
case 0x71d16f:c.instructions+=9;goto B71d16f;
case 0x71d171:c.instructions+=8;goto B71d171;
case 0x71d174:c.instructions+=7;goto B71d174;
case 0x71d177:c.instructions+=6;goto B71d177;
case 0x71d17a:c.instructions+=5;goto B71d17a;
case 0x71d17d:c.instructions+=4;goto B71d17d;
case 0x71d180:c.instructions+=3;goto B71d180;
case 0x71d183:c.instructions+=2;goto B71d183;
case 0x71d184:c.instructions+=1;goto B71d184;
case 0x71d186:goto L71d186;
case 0x71d187:c.instructions+=2;goto B71d187;
case 0x71d188:c.instructions+=1;goto B71d188;
case 0x71d189:goto L71d189;
case 0x71d18a:c.instructions+=9;goto B71d18a;
case 0x71d18c:c.instructions+=8;goto B71d18c;
case 0x71d18d:c.instructions+=7;goto B71d18d;
case 0x71d18e:c.instructions+=6;goto B71d18e;
case 0x71d191:c.instructions+=5;goto B71d191;
case 0x71d194:c.instructions+=4;goto B71d194;
case 0x71d197:c.instructions+=3;goto B71d197;
case 0x71d19c:c.instructions+=2;goto B71d19c;
case 0x71d19f:c.instructions+=1;goto B71d19f;
case 0x71d1a2:goto L71d1a2;
case 0x71d1a5:c.instructions+=18;goto B71d1a5;
case 0x71d1a8:c.instructions+=17;goto B71d1a8;
case 0x71d1ab:c.instructions+=16;goto B71d1ab;
case 0x71d1ae:c.instructions+=15;goto B71d1ae;
case 0x71d1b1:c.instructions+=14;goto B71d1b1;
case 0x71d1b4:c.instructions+=13;goto B71d1b4;
case 0x71d1b7:c.instructions+=12;goto B71d1b7;
case 0x71d1ba:c.instructions+=11;goto B71d1ba;
case 0x71d1be:c.instructions+=10;goto B71d1be;
case 0x71d1c1:c.instructions+=9;goto B71d1c1;
case 0x71d1c4:c.instructions+=8;goto B71d1c4;
case 0x71d1c7:c.instructions+=7;goto B71d1c7;
case 0x71d1cb:c.instructions+=6;goto B71d1cb;
case 0x71d1cd:c.instructions+=5;goto B71d1cd;
case 0x71d1cf:c.instructions+=4;goto B71d1cf;
case 0x71d1d2:c.instructions+=3;goto B71d1d2;
case 0x71d1d6:c.instructions+=2;goto B71d1d6;
case 0x71d1d7:c.instructions+=1;goto B71d1d7;
case 0x71d1d9:goto L71d1d9;
case 0x71d1da:c.instructions+=3;goto B71d1da;
case 0x71d1db:c.instructions+=2;goto B71d1db;
case 0x71d1dc:c.instructions+=1;goto B71d1dc;
case 0x71d1dd:goto L71d1dd;
case 0x71d1de:c.instructions+=8;goto B71d1de;
case 0x71d1e0:c.instructions+=7;goto B71d1e0;
case 0x71d1e1:c.instructions+=6;goto B71d1e1;
case 0x71d1e2:c.instructions+=5;goto B71d1e2;
case 0x71d1e5:c.instructions+=4;goto B71d1e5;
case 0x71d1e8:c.instructions+=3;goto B71d1e8;
case 0x71d1ed:c.instructions+=2;goto B71d1ed;
case 0x71d1f0:c.instructions+=1;goto B71d1f0;
case 0x71d1f3:goto L71d1f3;
case 0x71d1f6:c.instructions+=9;goto B71d1f6;
case 0x71d1f9:c.instructions+=8;goto B71d1f9;
case 0x71d1fc:c.instructions+=7;goto B71d1fc;
case 0x71d1ff:c.instructions+=6;goto B71d1ff;
case 0x71d202:c.instructions+=5;goto B71d202;
case 0x71d204:c.instructions+=4;goto B71d204;
case 0x71d208:c.instructions+=3;goto B71d208;
case 0x71d20b:c.instructions+=2;goto B71d20b;
case 0x71d20c:c.instructions+=1;goto B71d20c;
case 0x71d20e:goto L71d20e;
case 0x71d20f:c.instructions+=3;goto B71d20f;
case 0x71d210:c.instructions+=2;goto B71d210;
case 0x71d211:c.instructions+=1;goto B71d211;
case 0x71d212:goto L71d212;
case 0x71d213:c.instructions+=8;goto B71d213;
case 0x71d215:c.instructions+=7;goto B71d215;
case 0x71d216:c.instructions+=6;goto B71d216;
case 0x71d217:c.instructions+=5;goto B71d217;
case 0x71d21a:c.instructions+=4;goto B71d21a;
case 0x71d21d:c.instructions+=3;goto B71d21d;
case 0x71d220:c.instructions+=2;goto B71d220;
case 0x71d225:c.instructions+=1;goto B71d225;
case 0x71d228:goto L71d228;
case 0x71d22b:c.instructions+=13;goto B71d22b;
case 0x71d22e:c.instructions+=12;goto B71d22e;
case 0x71d231:c.instructions+=11;goto B71d231;
case 0x71d234:c.instructions+=10;goto B71d234;
case 0x71d238:c.instructions+=9;goto B71d238;
case 0x71d23b:c.instructions+=8;goto B71d23b;
case 0x71d23e:c.instructions+=7;goto B71d23e;
case 0x71d241:c.instructions+=6;goto B71d241;
case 0x71d244:c.instructions+=5;goto B71d244;
case 0x71d246:c.instructions+=4;goto B71d246;
case 0x71d24a:c.instructions+=3;goto B71d24a;
case 0x71d24d:c.instructions+=2;goto B71d24d;
case 0x71d24e:c.instructions+=1;goto B71d24e;
case 0x71d250:goto L71d250;
case 0x71d251:c.instructions+=3;goto B71d251;
case 0x71d252:c.instructions+=2;goto B71d252;
case 0x71d253:c.instructions+=1;goto B71d253;
case 0x71d254:goto L71d254;
case 0x71d255:c.instructions+=9;goto B71d255;
case 0x71d257:c.instructions+=8;goto B71d257;
case 0x71d258:c.instructions+=7;goto B71d258;
case 0x71d259:c.instructions+=6;goto B71d259;
case 0x71d25c:c.instructions+=5;goto B71d25c;
case 0x71d25f:c.instructions+=4;goto B71d25f;
case 0x71d262:c.instructions+=3;goto B71d262;
case 0x71d267:c.instructions+=2;goto B71d267;
case 0x71d26a:c.instructions+=1;goto B71d26a;
case 0x71d26d:goto L71d26d;
case 0x71d270:c.instructions+=12;goto B71d270;
case 0x71d273:c.instructions+=11;goto B71d273;
case 0x71d277:c.instructions+=10;goto B71d277;
case 0x71d27b:c.instructions+=9;goto B71d27b;
case 0x71d27e:c.instructions+=8;goto B71d27e;
case 0x71d281:c.instructions+=7;goto B71d281;
case 0x71d284:c.instructions+=6;goto B71d284;
case 0x71d287:c.instructions+=5;goto B71d287;
case 0x71d28a:c.instructions+=4;goto B71d28a;
case 0x71d28d:c.instructions+=3;goto B71d28d;
case 0x71d28f:c.instructions+=2;goto B71d28f;
case 0x71d290:c.instructions+=1;goto B71d290;
case 0x71d292:goto L71d292;
case 0x71d293:c.instructions+=3;goto B71d293;
case 0x71d294:c.instructions+=2;goto B71d294;
case 0x71d295:c.instructions+=1;goto B71d295;
case 0x71d296:goto L71d296;
case 0x71d297:c.instructions+=11;goto B71d297;
case 0x71d299:c.instructions+=10;goto B71d299;
case 0x71d29c:c.instructions+=9;goto B71d29c;
case 0x71d29f:c.instructions+=8;goto B71d29f;
case 0x71d2a0:c.instructions+=7;goto B71d2a0;
case 0x71d2a1:c.instructions+=6;goto B71d2a1;
case 0x71d2a2:c.instructions+=5;goto B71d2a2;
case 0x71d2a5:c.instructions+=4;goto B71d2a5;
case 0x71d2a7:c.instructions+=3;goto B71d2a7;
case 0x71d2a9:c.instructions+=2;goto B71d2a9;
case 0x71d2aa:c.instructions+=1;goto B71d2aa;
case 0x71d2af:goto L71d2af;
case 0x71d2b2:c.instructions+=2;goto B71d2b2;
case 0x71d2b5:c.instructions+=1;goto B71d2b5;
case 0x71d2b7:goto L71d2b7;
case 0x71d2b9:c.instructions+=1;goto B71d2b9;
case 0x71d2bb:goto L71d2bb;
case 0x71d2be:c.instructions+=1;goto B71d2be;
case 0x71d2c0:goto L71d2c0;
case 0x71d2c2:c.instructions+=1;goto B71d2c2;
case 0x71d2c4:goto L71d2c4;
case 0x71d2c7:goto L71d2c7;
case 0x71d2c9:c.instructions+=3;goto B71d2c9;
case 0x71d2cd:c.instructions+=2;goto B71d2cd;
case 0x71d2d0:c.instructions+=1;goto B71d2d0;
case 0x71d2d2:goto L71d2d2;
case 0x71d2d4:c.instructions+=1;goto B71d2d4;
case 0x71d2d6:goto L71d2d6;
case 0x71d2d9:c.instructions+=1;goto B71d2d9;
case 0x71d2db:goto L71d2db;
case 0x71d2dd:c.instructions+=1;goto B71d2dd;
case 0x71d2df:goto L71d2df;
case 0x71d2e2:goto L71d2e2;
case 0x71d2e5:c.instructions+=3;goto B71d2e5;
case 0x71d2e9:c.instructions+=2;goto B71d2e9;
case 0x71d2ec:c.instructions+=1;goto B71d2ec;
case 0x71d2ee:goto L71d2ee;
case 0x71d2f0:c.instructions+=1;goto B71d2f0;
case 0x71d2f2:goto L71d2f2;
case 0x71d2f5:c.instructions+=1;goto B71d2f5;
case 0x71d2f7:goto L71d2f7;
case 0x71d2f9:c.instructions+=1;goto B71d2f9;
case 0x71d2fb:goto L71d2fb;
case 0x71d2fe:goto L71d2fe;
case 0x71d301:c.instructions+=3;goto B71d301;
case 0x71d305:c.instructions+=2;goto B71d305;
case 0x71d308:c.instructions+=1;goto B71d308;
case 0x71d30a:goto L71d30a;
case 0x71d30c:c.instructions+=1;goto B71d30c;
case 0x71d30e:goto L71d30e;
case 0x71d311:c.instructions+=1;goto B71d311;
case 0x71d313:goto L71d313;
case 0x71d315:c.instructions+=1;goto B71d315;
case 0x71d317:goto L71d317;
case 0x71d31a:goto L71d31a;
case 0x71d31d:c.instructions+=3;goto B71d31d;
case 0x71d321:c.instructions+=2;goto B71d321;
case 0x71d324:c.instructions+=1;goto B71d324;
case 0x71d326:goto L71d326;
case 0x71d328:c.instructions+=1;goto B71d328;
case 0x71d32a:goto L71d32a;
case 0x71d32d:c.instructions+=1;goto B71d32d;
case 0x71d32f:goto L71d32f;
case 0x71d331:c.instructions+=1;goto B71d331;
case 0x71d333:goto L71d333;
case 0x71d336:goto L71d336;
case 0x71d339:c.instructions+=3;goto B71d339;
case 0x71d33d:c.instructions+=2;goto B71d33d;
case 0x71d340:c.instructions+=1;goto B71d340;
case 0x71d342:goto L71d342;
case 0x71d344:c.instructions+=1;goto B71d344;
case 0x71d346:goto L71d346;
case 0x71d349:c.instructions+=1;goto B71d349;
case 0x71d34b:goto L71d34b;
case 0x71d34d:c.instructions+=1;goto B71d34d;
case 0x71d34f:goto L71d34f;
case 0x71d352:goto L71d352;
case 0x71d355:c.instructions+=3;goto B71d355;
case 0x71d359:c.instructions+=2;goto B71d359;
case 0x71d35c:c.instructions+=1;goto B71d35c;
case 0x71d35e:goto L71d35e;
case 0x71d360:c.instructions+=1;goto B71d360;
case 0x71d362:goto L71d362;
case 0x71d365:c.instructions+=1;goto B71d365;
case 0x71d367:goto L71d367;
case 0x71d369:c.instructions+=1;goto B71d369;
case 0x71d36b:goto L71d36b;
case 0x71d36e:goto L71d36e;
case 0x71d371:c.instructions+=3;goto B71d371;
case 0x71d375:c.instructions+=2;goto B71d375;
case 0x71d378:c.instructions+=1;goto B71d378;
case 0x71d37a:goto L71d37a;
case 0x71d37c:c.instructions+=1;goto B71d37c;
case 0x71d37e:goto L71d37e;
case 0x71d381:c.instructions+=1;goto B71d381;
case 0x71d383:goto L71d383;
case 0x71d385:c.instructions+=1;goto B71d385;
case 0x71d387:goto L71d387;
case 0x71d38a:goto L71d38a;
case 0x71d38d:c.instructions+=4;goto B71d38d;
case 0x71d390:c.instructions+=3;goto B71d390;
case 0x71d392:c.instructions+=2;goto B71d392;
case 0x71d393:c.instructions+=1;goto B71d393;
case 0x71d399:goto L71d399;
case 0x71d39a:c.instructions+=4;goto B71d39a;
case 0x71d39b:c.instructions+=3;goto B71d39b;
case 0x71d39c:c.instructions+=2;goto B71d39c;
case 0x71d39d:c.instructions+=1;goto B71d39d;
case 0x71d39e:goto L71d39e;
case 0x71d39f:c.instructions+=10;goto B71d39f;
case 0x71d3a1:c.instructions+=9;goto B71d3a1;
case 0x71d3a4:c.instructions+=8;goto B71d3a4;
case 0x71d3a5:c.instructions+=7;goto B71d3a5;
case 0x71d3a6:c.instructions+=6;goto B71d3a6;
case 0x71d3a7:c.instructions+=5;goto B71d3a7;
case 0x71d3aa:c.instructions+=4;goto B71d3aa;
case 0x71d3ac:c.instructions+=3;goto B71d3ac;
case 0x71d3af:c.instructions+=2;goto B71d3af;
case 0x71d3b0:c.instructions+=1;goto B71d3b0;
case 0x71d3b5:goto L71d3b5;
case 0x71d3b8:c.instructions+=27;goto B71d3b8;
case 0x71d3bb:c.instructions+=26;goto B71d3bb;
case 0x71d3bf:c.instructions+=25;goto B71d3bf;
case 0x71d3c3:c.instructions+=24;goto B71d3c3;
case 0x71d3c6:c.instructions+=23;goto B71d3c6;
case 0x71d3ca:c.instructions+=22;goto B71d3ca;
case 0x71d3ce:c.instructions+=21;goto B71d3ce;
case 0x71d3d1:c.instructions+=20;goto B71d3d1;
case 0x71d3d4:c.instructions+=19;goto B71d3d4;
case 0x71d3d8:c.instructions+=18;goto B71d3d8;
case 0x71d3db:c.instructions+=17;goto B71d3db;
case 0x71d3df:c.instructions+=16;goto B71d3df;
case 0x71d3e3:c.instructions+=15;goto B71d3e3;
case 0x71d3e6:c.instructions+=14;goto B71d3e6;
case 0x71d3ea:c.instructions+=13;goto B71d3ea;
case 0x71d3ee:c.instructions+=12;goto B71d3ee;
case 0x71d3f1:c.instructions+=11;goto B71d3f1;
case 0x71d3f5:c.instructions+=10;goto B71d3f5;
case 0x71d3f9:c.instructions+=9;goto B71d3f9;
case 0x71d3fc:c.instructions+=8;goto B71d3fc;
case 0x71d400:c.instructions+=7;goto B71d400;
case 0x71d404:c.instructions+=6;goto B71d404;
case 0x71d407:c.instructions+=5;goto B71d407;
case 0x71d40b:c.instructions+=4;goto B71d40b;
case 0x71d40e:c.instructions+=3;goto B71d40e;
case 0x71d411:c.instructions+=2;goto B71d411;
case 0x71d412:c.instructions+=1;goto B71d412;
case 0x71d414:goto L71d414;
case 0x71d416:c.instructions+=4;goto B71d416;
case 0x71d419:c.instructions+=3;goto B71d419;
case 0x71d41a:c.instructions+=2;goto B71d41a;
case 0x71d41d:c.instructions+=1;goto B71d41d;
case 0x71d422:goto L71d422;
case 0x71d425:c.instructions+=5;goto B71d425;
case 0x71d426:c.instructions+=4;goto B71d426;
case 0x71d427:c.instructions+=3;goto B71d427;
case 0x71d428:c.instructions+=2;goto B71d428;
case 0x71d429:c.instructions+=1;goto B71d429;
case 0x71d42a:goto L71d42a;
case 0x71d42b:c.instructions+=10;goto B71d42b;
case 0x71d42d:c.instructions+=9;goto B71d42d;
case 0x71d430:c.instructions+=8;goto B71d430;
case 0x71d433:c.instructions+=7;goto B71d433;
case 0x71d434:c.instructions+=6;goto B71d434;
case 0x71d435:c.instructions+=5;goto B71d435;
case 0x71d436:c.instructions+=4;goto B71d436;
case 0x71d439:c.instructions+=3;goto B71d439;
case 0x71d43b:c.instructions+=2;goto B71d43b;
case 0x71d43e:c.instructions+=1;goto B71d43e;
case 0x71d43f:goto L71d43f;
case 0x71d443:c.instructions+=28;goto B71d443;
case 0x71d446:c.instructions+=27;goto B71d446;
case 0x71d449:c.instructions+=26;goto B71d449;
case 0x71d44d:c.instructions+=25;goto B71d44d;
case 0x71d452:c.instructions+=24;goto B71d452;
case 0x71d456:c.instructions+=23;goto B71d456;
case 0x71d45a:c.instructions+=22;goto B71d45a;
case 0x71d45f:c.instructions+=21;goto B71d45f;
case 0x71d463:c.instructions+=20;goto B71d463;
case 0x71d466:c.instructions+=19;goto B71d466;
case 0x71d46b:c.instructions+=18;goto B71d46b;
case 0x71d46f:c.instructions+=17;goto B71d46f;
case 0x71d472:c.instructions+=16;goto B71d472;
case 0x71d476:c.instructions+=15;goto B71d476;
case 0x71d47b:c.instructions+=14;goto B71d47b;
case 0x71d47f:c.instructions+=13;goto B71d47f;
case 0x71d483:c.instructions+=12;goto B71d483;
case 0x71d488:c.instructions+=11;goto B71d488;
case 0x71d48c:c.instructions+=10;goto B71d48c;
case 0x71d490:c.instructions+=9;goto B71d490;
case 0x71d495:c.instructions+=8;goto B71d495;
case 0x71d499:c.instructions+=7;goto B71d499;
case 0x71d49d:c.instructions+=6;goto B71d49d;
case 0x71d4a2:c.instructions+=5;goto B71d4a2;
case 0x71d4a6:c.instructions+=4;goto B71d4a6;
case 0x71d4a9:c.instructions+=3;goto B71d4a9;
case 0x71d4aa:c.instructions+=2;goto B71d4aa;
case 0x71d4ae:c.instructions+=1;goto B71d4ae;
case 0x71d4b0:goto L71d4b0;
case 0x71d4b2:c.instructions+=4;goto B71d4b2;
case 0x71d4b5:c.instructions+=3;goto B71d4b5;
case 0x71d4b6:c.instructions+=2;goto B71d4b6;
case 0x71d4b9:c.instructions+=1;goto B71d4b9;
case 0x71d4be:goto L71d4be;
case 0x71d4c1:c.instructions+=5;goto B71d4c1;
case 0x71d4c2:c.instructions+=4;goto B71d4c2;
case 0x71d4c3:c.instructions+=3;goto B71d4c3;
case 0x71d4c4:c.instructions+=2;goto B71d4c4;
case 0x71d4c5:c.instructions+=1;goto B71d4c5;
case 0x71d4c6:goto L71d4c6;
case 0x71d4c7:c.instructions+=11;goto B71d4c7;
case 0x71d4c9:c.instructions+=10;goto B71d4c9;
case 0x71d4ca:c.instructions+=9;goto B71d4ca;
case 0x71d4cd:c.instructions+=8;goto B71d4cd;
case 0x71d4d0:c.instructions+=7;goto B71d4d0;
case 0x71d4d3:c.instructions+=6;goto B71d4d3;
case 0x71d4d4:c.instructions+=5;goto B71d4d4;
case 0x71d4d5:c.instructions+=4;goto B71d4d5;
case 0x71d4d8:c.instructions+=3;goto B71d4d8;
case 0x71d4d9:c.instructions+=2;goto B71d4d9;
case 0x71d4dc:c.instructions+=1;goto B71d4dc;
case 0x71d4e3:goto L71d4e3;
case 0x71d4e6:c.instructions+=53;goto B71d4e6;
case 0x71d4e9:c.instructions+=52;goto B71d4e9;
case 0x71d4eb:c.instructions+=51;goto B71d4eb;
case 0x71d4ed:c.instructions+=50;goto B71d4ed;
case 0x71d4f0:c.instructions+=49;goto B71d4f0;
case 0x71d4f3:c.instructions+=48;goto B71d4f3;
case 0x71d4f7:c.instructions+=47;goto B71d4f7;
case 0x71d4fb:c.instructions+=46;goto B71d4fb;
case 0x71d4ff:c.instructions+=45;goto B71d4ff;
case 0x71d501:c.instructions+=44;goto B71d501;
case 0x71d503:c.instructions+=43;goto B71d503;
case 0x71d507:c.instructions+=42;goto B71d507;
case 0x71d50b:c.instructions+=41;goto B71d50b;
case 0x71d50f:c.instructions+=40;goto B71d50f;
case 0x71d513:c.instructions+=39;goto B71d513;
case 0x71d515:c.instructions+=38;goto B71d515;
case 0x71d517:c.instructions+=37;goto B71d517;
case 0x71d51b:c.instructions+=36;goto B71d51b;
case 0x71d51e:c.instructions+=35;goto B71d51e;
case 0x71d522:c.instructions+=34;goto B71d522;
case 0x71d526:c.instructions+=33;goto B71d526;
case 0x71d528:c.instructions+=32;goto B71d528;
case 0x71d52a:c.instructions+=31;goto B71d52a;
case 0x71d52e:c.instructions+=30;goto B71d52e;
case 0x71d531:c.instructions+=29;goto B71d531;
case 0x71d535:c.instructions+=28;goto B71d535;
case 0x71d539:c.instructions+=27;goto B71d539;
case 0x71d53d:c.instructions+=26;goto B71d53d;
case 0x71d53f:c.instructions+=25;goto B71d53f;
case 0x71d541:c.instructions+=24;goto B71d541;
case 0x71d545:c.instructions+=23;goto B71d545;
case 0x71d549:c.instructions+=22;goto B71d549;
case 0x71d54d:c.instructions+=21;goto B71d54d;
case 0x71d551:c.instructions+=20;goto B71d551;
case 0x71d553:c.instructions+=19;goto B71d553;
case 0x71d555:c.instructions+=18;goto B71d555;
case 0x71d559:c.instructions+=17;goto B71d559;
case 0x71d55d:c.instructions+=16;goto B71d55d;
case 0x71d561:c.instructions+=15;goto B71d561;
case 0x71d565:c.instructions+=14;goto B71d565;
case 0x71d567:c.instructions+=13;goto B71d567;
case 0x71d569:c.instructions+=12;goto B71d569;
case 0x71d56d:c.instructions+=11;goto B71d56d;
case 0x71d571:c.instructions+=10;goto B71d571;
case 0x71d575:c.instructions+=9;goto B71d575;
case 0x71d579:c.instructions+=8;goto B71d579;
case 0x71d57c:c.instructions+=7;goto B71d57c;
case 0x71d57f:c.instructions+=6;goto B71d57f;
case 0x71d581:c.instructions+=5;goto B71d581;
case 0x71d583:c.instructions+=4;goto B71d583;
case 0x71d587:c.instructions+=3;goto B71d587;
case 0x71d58a:c.instructions+=2;goto B71d58a;
case 0x71d58e:c.instructions+=1;goto B71d58e;
case 0x71d594:goto L71d594;
case 0x71d596:c.instructions+=4;goto B71d596;
case 0x71d599:c.instructions+=3;goto B71d599;
case 0x71d59c:c.instructions+=2;goto B71d59c;
case 0x71d59f:c.instructions+=1;goto B71d59f;
case 0x71d5a4:goto L71d5a4;
case 0x71d5a7:c.instructions+=5;goto B71d5a7;
case 0x71d5a8:c.instructions+=4;goto B71d5a8;
case 0x71d5a9:c.instructions+=3;goto B71d5a9;
case 0x71d5aa:c.instructions+=2;goto B71d5aa;
case 0x71d5ab:c.instructions+=1;goto B71d5ab;
case 0x71d5ac:goto L71d5ac;
case 0x71d5ad:c.instructions+=8;goto B71d5ad;
case 0x71d5af:c.instructions+=7;goto B71d5af;
case 0x71d5b2:c.instructions+=6;goto B71d5b2;
case 0x71d5b5:c.instructions+=5;goto B71d5b5;
case 0x71d5b6:c.instructions+=4;goto B71d5b6;
case 0x71d5b7:c.instructions+=3;goto B71d5b7;
case 0x71d5b9:c.instructions+=2;goto B71d5b9;
case 0x71d5bb:c.instructions+=1;goto B71d5bb;
case 0x71d5bc:goto L71d5bc;
case 0x71d5bf:c.instructions+=19;goto B71d5bf;
case 0x71d5c2:c.instructions+=18;goto B71d5c2;
case 0x71d5c6:c.instructions+=17;goto B71d5c6;
case 0x71d5ca:c.instructions+=16;goto B71d5ca;
case 0x71d5ce:c.instructions+=15;goto B71d5ce;
case 0x71d5d2:c.instructions+=14;goto B71d5d2;
case 0x71d5d6:c.instructions+=13;goto B71d5d6;
case 0x71d5da:c.instructions+=12;goto B71d5da;
case 0x71d5de:c.instructions+=11;goto B71d5de;
case 0x71d5e2:c.instructions+=10;goto B71d5e2;
case 0x71d5e6:c.instructions+=9;goto B71d5e6;
case 0x71d5ea:c.instructions+=8;goto B71d5ea;
case 0x71d5ee:c.instructions+=7;goto B71d5ee;
case 0x71d5f2:c.instructions+=6;goto B71d5f2;
case 0x71d5f6:c.instructions+=5;goto B71d5f6;
case 0x71d5fa:c.instructions+=4;goto B71d5fa;
case 0x71d5fd:c.instructions+=3;goto B71d5fd;
case 0x71d600:c.instructions+=2;goto B71d600;
case 0x71d601:c.instructions+=1;goto B71d601;
case 0x71d603:goto L71d603;
case 0x71d605:c.instructions+=4;goto B71d605;
case 0x71d608:c.instructions+=3;goto B71d608;
case 0x71d609:c.instructions+=2;goto B71d609;
case 0x71d60c:c.instructions+=1;goto B71d60c;
case 0x71d611:goto L71d611;
case 0x71d614:c.instructions+=4;goto B71d614;
case 0x71d615:c.instructions+=3;goto B71d615;
case 0x71d616:c.instructions+=2;goto B71d616;
case 0x71d617:c.instructions+=1;goto B71d617;
case 0x71d618:goto L71d618;
case 0x71d619:c.instructions+=266;goto B71d619;
case 0x71d61b:c.instructions+=265;goto B71d61b;
case 0x71d61e:c.instructions+=264;goto B71d61e;
case 0x71d621:c.instructions+=263;goto B71d621;
case 0x71d624:c.instructions+=262;goto B71d624;
case 0x71d625:c.instructions+=261;goto B71d625;
case 0x71d628:c.instructions+=260;goto B71d628;
case 0x71d62b:c.instructions+=259;goto B71d62b;
case 0x71d62e:c.instructions+=258;goto B71d62e;
case 0x71d630:c.instructions+=257;goto B71d630;
case 0x71d634:c.instructions+=256;goto B71d634;
case 0x71d635:c.instructions+=255;goto B71d635;
case 0x71d639:c.instructions+=254;goto B71d639;
case 0x71d63c:c.instructions+=253;goto B71d63c;
case 0x71d63f:c.instructions+=252;goto B71d63f;
case 0x71d643:c.instructions+=251;goto B71d643;
case 0x71d647:c.instructions+=250;goto B71d647;
case 0x71d64a:c.instructions+=249;goto B71d64a;
case 0x71d64d:c.instructions+=248;goto B71d64d;
case 0x71d651:c.instructions+=247;goto B71d651;
case 0x71d655:c.instructions+=246;goto B71d655;
case 0x71d658:c.instructions+=245;goto B71d658;
case 0x71d65b:c.instructions+=244;goto B71d65b;
case 0x71d65f:c.instructions+=243;goto B71d65f;
case 0x71d663:c.instructions+=242;goto B71d663;
case 0x71d666:c.instructions+=241;goto B71d666;
case 0x71d669:c.instructions+=240;goto B71d669;
case 0x71d66d:c.instructions+=239;goto B71d66d;
case 0x71d671:c.instructions+=238;goto B71d671;
case 0x71d674:c.instructions+=237;goto B71d674;
case 0x71d677:c.instructions+=236;goto B71d677;
case 0x71d67b:c.instructions+=235;goto B71d67b;
case 0x71d67f:c.instructions+=234;goto B71d67f;
case 0x71d682:c.instructions+=233;goto B71d682;
case 0x71d685:c.instructions+=232;goto B71d685;
case 0x71d689:c.instructions+=231;goto B71d689;
case 0x71d68d:c.instructions+=230;goto B71d68d;
case 0x71d690:c.instructions+=229;goto B71d690;
case 0x71d693:c.instructions+=228;goto B71d693;
case 0x71d697:c.instructions+=227;goto B71d697;
case 0x71d69b:c.instructions+=226;goto B71d69b;
case 0x71d69e:c.instructions+=225;goto B71d69e;
case 0x71d6a1:c.instructions+=224;goto B71d6a1;
case 0x71d6a5:c.instructions+=223;goto B71d6a5;
case 0x71d6a9:c.instructions+=222;goto B71d6a9;
case 0x71d6ac:c.instructions+=221;goto B71d6ac;
case 0x71d6af:c.instructions+=220;goto B71d6af;
case 0x71d6b3:c.instructions+=219;goto B71d6b3;
case 0x71d6b7:c.instructions+=218;goto B71d6b7;
case 0x71d6ba:c.instructions+=217;goto B71d6ba;
case 0x71d6c0:c.instructions+=216;goto B71d6c0;
case 0x71d6c4:c.instructions+=215;goto B71d6c4;
case 0x71d6c8:c.instructions+=214;goto B71d6c8;
case 0x71d6cb:c.instructions+=213;goto B71d6cb;
case 0x71d6ce:c.instructions+=212;goto B71d6ce;
case 0x71d6d2:c.instructions+=211;goto B71d6d2;
case 0x71d6d6:c.instructions+=210;goto B71d6d6;
case 0x71d6d9:c.instructions+=209;goto B71d6d9;
case 0x71d6dc:c.instructions+=208;goto B71d6dc;
case 0x71d6e0:c.instructions+=207;goto B71d6e0;
case 0x71d6e4:c.instructions+=206;goto B71d6e4;
case 0x71d6e7:c.instructions+=205;goto B71d6e7;
case 0x71d6ea:c.instructions+=204;goto B71d6ea;
case 0x71d6ee:c.instructions+=203;goto B71d6ee;
case 0x71d6f2:c.instructions+=202;goto B71d6f2;
case 0x71d6f5:c.instructions+=201;goto B71d6f5;
case 0x71d6f8:c.instructions+=200;goto B71d6f8;
case 0x71d6fc:c.instructions+=199;goto B71d6fc;
case 0x71d700:c.instructions+=198;goto B71d700;
case 0x71d703:c.instructions+=197;goto B71d703;
case 0x71d706:c.instructions+=196;goto B71d706;
case 0x71d70a:c.instructions+=195;goto B71d70a;
case 0x71d70e:c.instructions+=194;goto B71d70e;
case 0x71d711:c.instructions+=193;goto B71d711;
case 0x71d714:c.instructions+=192;goto B71d714;
case 0x71d718:c.instructions+=191;goto B71d718;
case 0x71d71c:c.instructions+=190;goto B71d71c;
case 0x71d71f:c.instructions+=189;goto B71d71f;
case 0x71d722:c.instructions+=188;goto B71d722;
case 0x71d726:c.instructions+=187;goto B71d726;
case 0x71d72a:c.instructions+=186;goto B71d72a;
case 0x71d72d:c.instructions+=185;goto B71d72d;
case 0x71d730:c.instructions+=184;goto B71d730;
case 0x71d734:c.instructions+=183;goto B71d734;
case 0x71d738:c.instructions+=182;goto B71d738;
case 0x71d73b:c.instructions+=181;goto B71d73b;
case 0x71d741:c.instructions+=180;goto B71d741;
case 0x71d745:c.instructions+=179;goto B71d745;
case 0x71d749:c.instructions+=178;goto B71d749;
case 0x71d74c:c.instructions+=177;goto B71d74c;
case 0x71d752:c.instructions+=176;goto B71d752;
case 0x71d756:c.instructions+=175;goto B71d756;
case 0x71d75a:c.instructions+=174;goto B71d75a;
case 0x71d75d:c.instructions+=173;goto B71d75d;
case 0x71d763:c.instructions+=172;goto B71d763;
case 0x71d767:c.instructions+=171;goto B71d767;
case 0x71d76b:c.instructions+=170;goto B71d76b;
case 0x71d76e:c.instructions+=169;goto B71d76e;
case 0x71d774:c.instructions+=168;goto B71d774;
case 0x71d778:c.instructions+=167;goto B71d778;
case 0x71d77c:c.instructions+=166;goto B71d77c;
case 0x71d77f:c.instructions+=165;goto B71d77f;
case 0x71d785:c.instructions+=164;goto B71d785;
case 0x71d789:c.instructions+=163;goto B71d789;
case 0x71d78d:c.instructions+=162;goto B71d78d;
case 0x71d790:c.instructions+=161;goto B71d790;
case 0x71d793:c.instructions+=160;goto B71d793;
case 0x71d797:c.instructions+=159;goto B71d797;
case 0x71d79b:c.instructions+=158;goto B71d79b;
case 0x71d79e:c.instructions+=157;goto B71d79e;
case 0x71d7a1:c.instructions+=156;goto B71d7a1;
case 0x71d7a5:c.instructions+=155;goto B71d7a5;
case 0x71d7a9:c.instructions+=154;goto B71d7a9;
case 0x71d7ac:c.instructions+=153;goto B71d7ac;
case 0x71d7af:c.instructions+=152;goto B71d7af;
case 0x71d7b3:c.instructions+=151;goto B71d7b3;
case 0x71d7b7:c.instructions+=150;goto B71d7b7;
case 0x71d7ba:c.instructions+=149;goto B71d7ba;
case 0x71d7bd:c.instructions+=148;goto B71d7bd;
case 0x71d7c1:c.instructions+=147;goto B71d7c1;
case 0x71d7c5:c.instructions+=146;goto B71d7c5;
case 0x71d7c8:c.instructions+=145;goto B71d7c8;
case 0x71d7cb:c.instructions+=144;goto B71d7cb;
case 0x71d7cf:c.instructions+=143;goto B71d7cf;
case 0x71d7d3:c.instructions+=142;goto B71d7d3;
case 0x71d7d6:c.instructions+=141;goto B71d7d6;
case 0x71d7d9:c.instructions+=140;goto B71d7d9;
case 0x71d7dd:c.instructions+=139;goto B71d7dd;
case 0x71d7e1:c.instructions+=138;goto B71d7e1;
case 0x71d7e4:c.instructions+=137;goto B71d7e4;
case 0x71d7e7:c.instructions+=136;goto B71d7e7;
case 0x71d7eb:c.instructions+=135;goto B71d7eb;
case 0x71d7ef:c.instructions+=134;goto B71d7ef;
case 0x71d7f2:c.instructions+=133;goto B71d7f2;
case 0x71d7f5:c.instructions+=132;goto B71d7f5;
case 0x71d7f9:c.instructions+=131;goto B71d7f9;
case 0x71d7fd:c.instructions+=130;goto B71d7fd;
case 0x71d800:c.instructions+=129;goto B71d800;
case 0x71d806:c.instructions+=128;goto B71d806;
case 0x71d80a:c.instructions+=127;goto B71d80a;
case 0x71d80e:c.instructions+=126;goto B71d80e;
case 0x71d811:c.instructions+=125;goto B71d811;
case 0x71d817:c.instructions+=124;goto B71d817;
case 0x71d81b:c.instructions+=123;goto B71d81b;
case 0x71d81f:c.instructions+=122;goto B71d81f;
case 0x71d822:c.instructions+=121;goto B71d822;
case 0x71d828:c.instructions+=120;goto B71d828;
case 0x71d82c:c.instructions+=119;goto B71d82c;
case 0x71d830:c.instructions+=118;goto B71d830;
case 0x71d833:c.instructions+=117;goto B71d833;
case 0x71d839:c.instructions+=116;goto B71d839;
case 0x71d83d:c.instructions+=115;goto B71d83d;
case 0x71d841:c.instructions+=114;goto B71d841;
case 0x71d844:c.instructions+=113;goto B71d844;
case 0x71d84a:c.instructions+=112;goto B71d84a;
case 0x71d84e:c.instructions+=111;goto B71d84e;
case 0x71d852:c.instructions+=110;goto B71d852;
case 0x71d855:c.instructions+=109;goto B71d855;
case 0x71d85b:c.instructions+=108;goto B71d85b;
case 0x71d85f:c.instructions+=107;goto B71d85f;
case 0x71d863:c.instructions+=106;goto B71d863;
case 0x71d866:c.instructions+=105;goto B71d866;
case 0x71d86c:c.instructions+=104;goto B71d86c;
case 0x71d870:c.instructions+=103;goto B71d870;
case 0x71d874:c.instructions+=102;goto B71d874;
case 0x71d877:c.instructions+=101;goto B71d877;
case 0x71d87d:c.instructions+=100;goto B71d87d;
case 0x71d881:c.instructions+=99;goto B71d881;
case 0x71d885:c.instructions+=98;goto B71d885;
case 0x71d888:c.instructions+=97;goto B71d888;
case 0x71d88b:c.instructions+=96;goto B71d88b;
case 0x71d88f:c.instructions+=95;goto B71d88f;
case 0x71d893:c.instructions+=94;goto B71d893;
case 0x71d896:c.instructions+=93;goto B71d896;
case 0x71d899:c.instructions+=92;goto B71d899;
case 0x71d89d:c.instructions+=91;goto B71d89d;
case 0x71d8a1:c.instructions+=90;goto B71d8a1;
case 0x71d8a4:c.instructions+=89;goto B71d8a4;
case 0x71d8a7:c.instructions+=88;goto B71d8a7;
case 0x71d8ab:c.instructions+=87;goto B71d8ab;
case 0x71d8af:c.instructions+=86;goto B71d8af;
case 0x71d8b2:c.instructions+=85;goto B71d8b2;
case 0x71d8b5:c.instructions+=84;goto B71d8b5;
case 0x71d8b9:c.instructions+=83;goto B71d8b9;
case 0x71d8bd:c.instructions+=82;goto B71d8bd;
case 0x71d8c0:c.instructions+=81;goto B71d8c0;
case 0x71d8c3:c.instructions+=80;goto B71d8c3;
case 0x71d8c7:c.instructions+=79;goto B71d8c7;
case 0x71d8cb:c.instructions+=78;goto B71d8cb;
case 0x71d8ce:c.instructions+=77;goto B71d8ce;
case 0x71d8d4:c.instructions+=76;goto B71d8d4;
case 0x71d8d8:c.instructions+=75;goto B71d8d8;
case 0x71d8dc:c.instructions+=74;goto B71d8dc;
case 0x71d8df:c.instructions+=73;goto B71d8df;
case 0x71d8e5:c.instructions+=72;goto B71d8e5;
case 0x71d8e9:c.instructions+=71;goto B71d8e9;
case 0x71d8ed:c.instructions+=70;goto B71d8ed;
case 0x71d8f0:c.instructions+=69;goto B71d8f0;
case 0x71d8f6:c.instructions+=68;goto B71d8f6;
case 0x71d8fa:c.instructions+=67;goto B71d8fa;
case 0x71d8fe:c.instructions+=66;goto B71d8fe;
case 0x71d901:c.instructions+=65;goto B71d901;
case 0x71d907:c.instructions+=64;goto B71d907;
case 0x71d90b:c.instructions+=63;goto B71d90b;
case 0x71d90f:c.instructions+=62;goto B71d90f;
case 0x71d912:c.instructions+=61;goto B71d912;
case 0x71d918:c.instructions+=60;goto B71d918;
case 0x71d91c:c.instructions+=59;goto B71d91c;
case 0x71d920:c.instructions+=58;goto B71d920;
case 0x71d923:c.instructions+=57;goto B71d923;
case 0x71d929:c.instructions+=56;goto B71d929;
case 0x71d92d:c.instructions+=55;goto B71d92d;
case 0x71d931:c.instructions+=54;goto B71d931;
case 0x71d934:c.instructions+=53;goto B71d934;
case 0x71d93a:c.instructions+=52;goto B71d93a;
case 0x71d93e:c.instructions+=51;goto B71d93e;
case 0x71d942:c.instructions+=50;goto B71d942;
case 0x71d945:c.instructions+=49;goto B71d945;
case 0x71d94b:c.instructions+=48;goto B71d94b;
case 0x71d94f:c.instructions+=47;goto B71d94f;
case 0x71d953:c.instructions+=46;goto B71d953;
case 0x71d956:c.instructions+=45;goto B71d956;
case 0x71d959:c.instructions+=44;goto B71d959;
case 0x71d95d:c.instructions+=43;goto B71d95d;
case 0x71d961:c.instructions+=42;goto B71d961;
case 0x71d964:c.instructions+=41;goto B71d964;
case 0x71d96a:c.instructions+=40;goto B71d96a;
case 0x71d96e:c.instructions+=39;goto B71d96e;
case 0x71d972:c.instructions+=38;goto B71d972;
case 0x71d975:c.instructions+=37;goto B71d975;
case 0x71d97b:c.instructions+=36;goto B71d97b;
case 0x71d97f:c.instructions+=35;goto B71d97f;
case 0x71d983:c.instructions+=34;goto B71d983;
case 0x71d986:c.instructions+=33;goto B71d986;
case 0x71d98c:c.instructions+=32;goto B71d98c;
case 0x71d990:c.instructions+=31;goto B71d990;
case 0x71d994:c.instructions+=30;goto B71d994;
case 0x71d997:c.instructions+=29;goto B71d997;
case 0x71d99d:c.instructions+=28;goto B71d99d;
case 0x71d9a1:c.instructions+=27;goto B71d9a1;
case 0x71d9a5:c.instructions+=26;goto B71d9a5;
case 0x71d9a8:c.instructions+=25;goto B71d9a8;
case 0x71d9ae:c.instructions+=24;goto B71d9ae;
case 0x71d9b2:c.instructions+=23;goto B71d9b2;
case 0x71d9b6:c.instructions+=22;goto B71d9b6;
case 0x71d9b9:c.instructions+=21;goto B71d9b9;
case 0x71d9bf:c.instructions+=20;goto B71d9bf;
case 0x71d9c3:c.instructions+=19;goto B71d9c3;
case 0x71d9c7:c.instructions+=18;goto B71d9c7;
case 0x71d9ca:c.instructions+=17;goto B71d9ca;
case 0x71d9d0:c.instructions+=16;goto B71d9d0;
case 0x71d9d4:c.instructions+=15;goto B71d9d4;
case 0x71d9d8:c.instructions+=14;goto B71d9d8;
case 0x71d9db:c.instructions+=13;goto B71d9db;
case 0x71d9e1:c.instructions+=12;goto B71d9e1;
case 0x71d9e5:c.instructions+=11;goto B71d9e5;
case 0x71d9e9:c.instructions+=10;goto B71d9e9;
case 0x71d9ec:c.instructions+=9;goto B71d9ec;
case 0x71d9f2:c.instructions+=8;goto B71d9f2;
case 0x71d9f6:c.instructions+=7;goto B71d9f6;
case 0x71d9fa:c.instructions+=6;goto B71d9fa;
case 0x71d9fd:c.instructions+=5;goto B71d9fd;
case 0x71d9fe:c.instructions+=4;goto B71d9fe;
case 0x71da04:c.instructions+=3;goto B71da04;
case 0x71da05:c.instructions+=2;goto B71da05;
case 0x71da06:c.instructions+=1;goto B71da06;
case 0x71da07:goto L71da07;
case 0x71da08:c.instructions+=7;goto B71da08;
case 0x71da0a:c.instructions+=6;goto B71da0a;
case 0x71da10:c.instructions+=5;goto B71da10;
case 0x71da16:c.instructions+=4;goto B71da16;
case 0x71da17:c.instructions+=3;goto B71da17;
case 0x71da1a:c.instructions+=2;goto B71da1a;
case 0x71da1d:c.instructions+=1;goto B71da1d;
case 0x71da22:goto L71da22;
case 0x71da25:c.instructions+=5;goto B71da25;
case 0x71da26:c.instructions+=4;goto B71da26;
case 0x71da27:c.instructions+=3;goto B71da27;
case 0x71da2d:c.instructions+=2;goto B71da2d;
case 0x71da34:c.instructions+=1;goto B71da34;
case 0x71da35:goto L71da35;
case 0x71da38:c.instructions+=19;goto B71da38;
case 0x71da3b:c.instructions+=18;goto B71da3b;
case 0x71da3e:c.instructions+=17;goto B71da3e;
case 0x71da40:c.instructions+=16;goto B71da40;
case 0x71da43:c.instructions+=15;goto B71da43;
case 0x71da46:c.instructions+=14;goto B71da46;
case 0x71da49:c.instructions+=13;goto B71da49;
case 0x71da4c:c.instructions+=12;goto B71da4c;
case 0x71da4f:c.instructions+=11;goto B71da4f;
case 0x71da52:c.instructions+=10;goto B71da52;
case 0x71da54:c.instructions+=9;goto B71da54;
case 0x71da56:c.instructions+=8;goto B71da56;
case 0x71da58:c.instructions+=7;goto B71da58;
case 0x71da5b:c.instructions+=6;goto B71da5b;
case 0x71da5e:c.instructions+=5;goto B71da5e;
case 0x71da61:c.instructions+=4;goto B71da61;
case 0x71da64:c.instructions+=3;goto B71da64;
case 0x71da67:c.instructions+=2;goto B71da67;
case 0x71da69:c.instructions+=1;goto B71da69;
case 0x71da6f:goto L71da6f;
case 0x71da72:c.instructions+=106;goto B71da72;
case 0x71da74:c.instructions+=105;goto B71da74;
case 0x71da7a:c.instructions+=104;goto B71da7a;
case 0x71da80:c.instructions+=103;goto B71da80;
case 0x71da83:c.instructions+=102;goto B71da83;
case 0x71da89:c.instructions+=101;goto B71da89;
case 0x71da8c:c.instructions+=100;goto B71da8c;
case 0x71da8e:c.instructions+=99;goto B71da8e;
case 0x71da91:c.instructions+=98;goto B71da91;
case 0x71da97:c.instructions+=97;goto B71da97;
case 0x71da9a:c.instructions+=96;goto B71da9a;
case 0x71da9d:c.instructions+=95;goto B71da9d;
case 0x71da9f:c.instructions+=94;goto B71da9f;
case 0x71daa2:c.instructions+=93;goto B71daa2;
case 0x71daa5:c.instructions+=92;goto B71daa5;
case 0x71daab:c.instructions+=91;goto B71daab;
case 0x71daad:c.instructions+=90;goto B71daad;
case 0x71dab3:c.instructions+=89;goto B71dab3;
case 0x71dab9:c.instructions+=88;goto B71dab9;
case 0x71dabc:c.instructions+=87;goto B71dabc;
case 0x71dabf:c.instructions+=86;goto B71dabf;
case 0x71dac1:c.instructions+=85;goto B71dac1;
case 0x71dac4:c.instructions+=84;goto B71dac4;
case 0x71daca:c.instructions+=83;goto B71daca;
case 0x71dacd:c.instructions+=82;goto B71dacd;
case 0x71dad0:c.instructions+=81;goto B71dad0;
case 0x71dad2:c.instructions+=80;goto B71dad2;
case 0x71dad4:c.instructions+=79;goto B71dad4;
case 0x71dad6:c.instructions+=78;goto B71dad6;
case 0x71dad8:c.instructions+=77;goto B71dad8;
case 0x71dade:c.instructions+=76;goto B71dade;
case 0x71dae0:c.instructions+=75;goto B71dae0;
case 0x71dae3:c.instructions+=74;goto B71dae3;
case 0x71dae6:c.instructions+=73;goto B71dae6;
case 0x71dae9:c.instructions+=72;goto B71dae9;
case 0x71daec:c.instructions+=71;goto B71daec;
case 0x71daef:c.instructions+=70;goto B71daef;
case 0x71daf2:c.instructions+=69;goto B71daf2;
case 0x71daf4:c.instructions+=68;goto B71daf4;
case 0x71daf6:c.instructions+=67;goto B71daf6;
case 0x71dafc:c.instructions+=66;goto B71dafc;
case 0x71daff:c.instructions+=65;goto B71daff;
case 0x71db01:c.instructions+=64;goto B71db01;
case 0x71db07:c.instructions+=63;goto B71db07;
case 0x71db0a:c.instructions+=62;goto B71db0a;
case 0x71db10:c.instructions+=61;goto B71db10;
case 0x71db13:c.instructions+=60;goto B71db13;
case 0x71db19:c.instructions+=59;goto B71db19;
case 0x71db1c:c.instructions+=58;goto B71db1c;
case 0x71db1f:c.instructions+=57;goto B71db1f;
case 0x71db22:c.instructions+=56;goto B71db22;
case 0x71db24:c.instructions+=55;goto B71db24;
case 0x71db2a:c.instructions+=54;goto B71db2a;
case 0x71db30:c.instructions+=53;goto B71db30;
case 0x71db33:c.instructions+=52;goto B71db33;
case 0x71db36:c.instructions+=51;goto B71db36;
case 0x71db38:c.instructions+=50;goto B71db38;
case 0x71db3b:c.instructions+=49;goto B71db3b;
case 0x71db41:c.instructions+=48;goto B71db41;
case 0x71db44:c.instructions+=47;goto B71db44;
case 0x71db47:c.instructions+=46;goto B71db47;
case 0x71db49:c.instructions+=45;goto B71db49;
case 0x71db4c:c.instructions+=44;goto B71db4c;
case 0x71db4f:c.instructions+=43;goto B71db4f;
case 0x71db52:c.instructions+=42;goto B71db52;
case 0x71db54:c.instructions+=41;goto B71db54;
case 0x71db56:c.instructions+=40;goto B71db56;
case 0x71db58:c.instructions+=39;goto B71db58;
case 0x71db5b:c.instructions+=38;goto B71db5b;
case 0x71db5d:c.instructions+=37;goto B71db5d;
case 0x71db60:c.instructions+=36;goto B71db60;
case 0x71db63:c.instructions+=35;goto B71db63;
case 0x71db65:c.instructions+=34;goto B71db65;
case 0x71db68:c.instructions+=33;goto B71db68;
case 0x71db6b:c.instructions+=32;goto B71db6b;
case 0x71db6e:c.instructions+=31;goto B71db6e;
case 0x71db70:c.instructions+=30;goto B71db70;
case 0x71db73:c.instructions+=29;goto B71db73;
case 0x71db75:c.instructions+=28;goto B71db75;
case 0x71db78:c.instructions+=27;goto B71db78;
case 0x71db7a:c.instructions+=26;goto B71db7a;
case 0x71db7d:c.instructions+=25;goto B71db7d;
case 0x71db80:c.instructions+=24;goto B71db80;
case 0x71db83:c.instructions+=23;goto B71db83;
case 0x71db86:c.instructions+=22;goto B71db86;
case 0x71db89:c.instructions+=21;goto B71db89;
case 0x71db8c:c.instructions+=20;goto B71db8c;
case 0x71db8f:c.instructions+=19;goto B71db8f;
case 0x71db91:c.instructions+=18;goto B71db91;
case 0x71db94:c.instructions+=17;goto B71db94;
case 0x71db97:c.instructions+=16;goto B71db97;
case 0x71db9a:c.instructions+=15;goto B71db9a;
case 0x71db9d:c.instructions+=14;goto B71db9d;
case 0x71db9f:c.instructions+=13;goto B71db9f;
case 0x71dba2:c.instructions+=12;goto B71dba2;
case 0x71dba5:c.instructions+=11;goto B71dba5;
case 0x71dba8:c.instructions+=10;goto B71dba8;
case 0x71dbab:c.instructions+=9;goto B71dbab;
case 0x71dbad:c.instructions+=8;goto B71dbad;
case 0x71dbb0:c.instructions+=7;goto B71dbb0;
case 0x71dbb3:c.instructions+=6;goto B71dbb3;
case 0x71dbb6:c.instructions+=5;goto B71dbb6;
case 0x71dbb9:c.instructions+=4;goto B71dbb9;
case 0x71dbbb:c.instructions+=3;goto B71dbbb;
case 0x71dbbe:c.instructions+=2;goto B71dbbe;
case 0x71dbc1:c.instructions+=1;goto B71dbc1;
case 0x71dbc4:goto L71dbc4;
case 0x71dbc7:c.instructions+=2;goto B71dbc7;
case 0x71dbca:c.instructions+=1;goto B71dbca;
case 0x71dbd0:goto L71dbd0;
case 0x71dbd3:c.instructions+=4;goto B71dbd3;
case 0x71dbd6:c.instructions+=3;goto B71dbd6;
case 0x71dbdc:c.instructions+=2;goto B71dbdc;
case 0x71dbe3:c.instructions+=1;goto B71dbe3;
case 0x71dbe5:goto L71dbe5;
case 0x71dbeb:c.instructions+=10;goto B71dbeb;
case 0x71dbf1:c.instructions+=9;goto B71dbf1;
case 0x71dbf4:c.instructions+=8;goto B71dbf4;
case 0x71dbfa:c.instructions+=7;goto B71dbfa;
case 0x71dbfd:c.instructions+=6;goto B71dbfd;
case 0x71dc00:c.instructions+=5;goto B71dc00;
case 0x71dc03:c.instructions+=4;goto B71dc03;
case 0x71dc05:c.instructions+=3;goto B71dc05;
case 0x71dc07:c.instructions+=2;goto B71dc07;
case 0x71dc0a:c.instructions+=1;goto B71dc0a;
case 0x71dc10:goto L71dc10;
case 0x71dc12:c.instructions+=115;goto B71dc12;
case 0x71dc18:c.instructions+=114;goto B71dc18;
case 0x71dc1a:c.instructions+=113;goto B71dc1a;
case 0x71dc20:c.instructions+=112;goto B71dc20;
case 0x71dc22:c.instructions+=111;goto B71dc22;
case 0x71dc28:c.instructions+=110;goto B71dc28;
case 0x71dc2e:c.instructions+=109;goto B71dc2e;
case 0x71dc34:c.instructions+=108;goto B71dc34;
case 0x71dc37:c.instructions+=107;goto B71dc37;
case 0x71dc3a:c.instructions+=106;goto B71dc3a;
case 0x71dc3c:c.instructions+=105;goto B71dc3c;
case 0x71dc42:c.instructions+=104;goto B71dc42;
case 0x71dc45:c.instructions+=103;goto B71dc45;
case 0x71dc48:c.instructions+=102;goto B71dc48;
case 0x71dc4b:c.instructions+=101;goto B71dc4b;
case 0x71dc4e:c.instructions+=100;goto B71dc4e;
case 0x71dc54:c.instructions+=99;goto B71dc54;
case 0x71dc57:c.instructions+=98;goto B71dc57;
case 0x71dc59:c.instructions+=97;goto B71dc59;
case 0x71dc5b:c.instructions+=96;goto B71dc5b;
case 0x71dc61:c.instructions+=95;goto B71dc61;
case 0x71dc67:c.instructions+=94;goto B71dc67;
case 0x71dc6a:c.instructions+=93;goto B71dc6a;
case 0x71dc6d:c.instructions+=92;goto B71dc6d;
case 0x71dc6f:c.instructions+=91;goto B71dc6f;
case 0x71dc72:c.instructions+=90;goto B71dc72;
case 0x71dc78:c.instructions+=89;goto B71dc78;
case 0x71dc7b:c.instructions+=88;goto B71dc7b;
case 0x71dc7e:c.instructions+=87;goto B71dc7e;
case 0x71dc80:c.instructions+=86;goto B71dc80;
case 0x71dc82:c.instructions+=85;goto B71dc82;
case 0x71dc84:c.instructions+=84;goto B71dc84;
case 0x71dc8a:c.instructions+=83;goto B71dc8a;
case 0x71dc8c:c.instructions+=82;goto B71dc8c;
case 0x71dc8f:c.instructions+=81;goto B71dc8f;
case 0x71dc92:c.instructions+=80;goto B71dc92;
case 0x71dc95:c.instructions+=79;goto B71dc95;
case 0x71dc98:c.instructions+=78;goto B71dc98;
case 0x71dc9a:c.instructions+=77;goto B71dc9a;
case 0x71dc9c:c.instructions+=76;goto B71dc9c;
case 0x71dca2:c.instructions+=75;goto B71dca2;
case 0x71dca5:c.instructions+=74;goto B71dca5;
case 0x71dca8:c.instructions+=73;goto B71dca8;
case 0x71dcab:c.instructions+=72;goto B71dcab;
case 0x71dcae:c.instructions+=71;goto B71dcae;
case 0x71dcb1:c.instructions+=70;goto B71dcb1;
case 0x71dcb3:c.instructions+=69;goto B71dcb3;
case 0x71dcb9:c.instructions+=68;goto B71dcb9;
case 0x71dcbf:c.instructions+=67;goto B71dcbf;
case 0x71dcc5:c.instructions+=66;goto B71dcc5;
case 0x71dcc8:c.instructions+=65;goto B71dcc8;
case 0x71dccb:c.instructions+=64;goto B71dccb;
case 0x71dcce:c.instructions+=63;goto B71dcce;
case 0x71dcd1:c.instructions+=62;goto B71dcd1;
case 0x71dcd7:c.instructions+=61;goto B71dcd7;
case 0x71dcda:c.instructions+=60;goto B71dcda;
case 0x71dce0:c.instructions+=59;goto B71dce0;
case 0x71dce3:c.instructions+=58;goto B71dce3;
case 0x71dce6:c.instructions+=57;goto B71dce6;
case 0x71dce8:c.instructions+=56;goto B71dce8;
case 0x71dceb:c.instructions+=55;goto B71dceb;
case 0x71dcee:c.instructions+=54;goto B71dcee;
case 0x71dcf4:c.instructions+=53;goto B71dcf4;
case 0x71dcf7:c.instructions+=52;goto B71dcf7;
case 0x71dcfd:c.instructions+=51;goto B71dcfd;
case 0x71dd00:c.instructions+=50;goto B71dd00;
case 0x71dd03:c.instructions+=49;goto B71dd03;
case 0x71dd05:c.instructions+=48;goto B71dd05;
case 0x71dd08:c.instructions+=47;goto B71dd08;
case 0x71dd0a:c.instructions+=46;goto B71dd0a;
case 0x71dd0c:c.instructions+=45;goto B71dd0c;
case 0x71dd0e:c.instructions+=44;goto B71dd0e;
case 0x71dd11:c.instructions+=43;goto B71dd11;
case 0x71dd14:c.instructions+=42;goto B71dd14;
case 0x71dd17:c.instructions+=41;goto B71dd17;
case 0x71dd1a:c.instructions+=40;goto B71dd1a;
case 0x71dd1d:c.instructions+=39;goto B71dd1d;
case 0x71dd20:c.instructions+=38;goto B71dd20;
case 0x71dd24:c.instructions+=37;goto B71dd24;
case 0x71dd27:c.instructions+=36;goto B71dd27;
case 0x71dd2b:c.instructions+=35;goto B71dd2b;
case 0x71dd2e:c.instructions+=34;goto B71dd2e;
case 0x71dd31:c.instructions+=33;goto B71dd31;
case 0x71dd34:c.instructions+=32;goto B71dd34;
case 0x71dd37:c.instructions+=31;goto B71dd37;
case 0x71dd3a:c.instructions+=30;goto B71dd3a;
case 0x71dd3c:c.instructions+=29;goto B71dd3c;
case 0x71dd3f:c.instructions+=28;goto B71dd3f;
case 0x71dd42:c.instructions+=27;goto B71dd42;
case 0x71dd45:c.instructions+=26;goto B71dd45;
case 0x71dd49:c.instructions+=25;goto B71dd49;
case 0x71dd4c:c.instructions+=24;goto B71dd4c;
case 0x71dd50:c.instructions+=23;goto B71dd50;
case 0x71dd53:c.instructions+=22;goto B71dd53;
case 0x71dd55:c.instructions+=21;goto B71dd55;
case 0x71dd58:c.instructions+=20;goto B71dd58;
case 0x71dd5b:c.instructions+=19;goto B71dd5b;
case 0x71dd5f:c.instructions+=18;goto B71dd5f;
case 0x71dd62:c.instructions+=17;goto B71dd62;
case 0x71dd64:c.instructions+=16;goto B71dd64;
case 0x71dd67:c.instructions+=15;goto B71dd67;
case 0x71dd6a:c.instructions+=14;goto B71dd6a;
case 0x71dd6d:c.instructions+=13;goto B71dd6d;
case 0x71dd71:c.instructions+=12;goto B71dd71;
case 0x71dd74:c.instructions+=11;goto B71dd74;
case 0x71dd78:c.instructions+=10;goto B71dd78;
case 0x71dd7b:c.instructions+=9;goto B71dd7b;
case 0x71dd7d:c.instructions+=8;goto B71dd7d;
case 0x71dd80:c.instructions+=7;goto B71dd80;
case 0x71dd83:c.instructions+=6;goto B71dd83;
case 0x71dd86:c.instructions+=5;goto B71dd86;
case 0x71dd8a:c.instructions+=4;goto B71dd8a;
case 0x71dd8d:c.instructions+=3;goto B71dd8d;
case 0x71dd91:c.instructions+=2;goto B71dd91;
case 0x71dd93:c.instructions+=1;goto B71dd93;
case 0x71dd95:goto L71dd95;
case 0x71dd99:c.instructions+=7;goto B71dd99;
case 0x71dd9d:c.instructions+=6;goto B71dd9d;
case 0x71dda0:c.instructions+=5;goto B71dda0;
case 0x71dda4:c.instructions+=4;goto B71dda4;
case 0x71dda8:c.instructions+=3;goto B71dda8;
case 0x71ddac:c.instructions+=2;goto B71ddac;
case 0x71ddb0:c.instructions+=1;goto B71ddb0;
case 0x71ddb4:goto L71ddb4;
case 0x71ddb7:c.instructions+=4;goto B71ddb7;
case 0x71ddb8:c.instructions+=3;goto B71ddb8;
case 0x71ddb9:c.instructions+=2;goto B71ddb9;
case 0x71ddbc:c.instructions+=1;goto B71ddbc;
case 0x71ddc2:goto L71ddc2;
case 0x71ddc3:c.instructions+=4;goto B71ddc3;
case 0x71ddc4:c.instructions+=3;goto B71ddc4;
case 0x71ddc5:c.instructions+=2;goto B71ddc5;
case 0x71ddc6:c.instructions+=1;goto B71ddc6;
case 0x71ddc7:goto L71ddc7;
case 0x71ddc8:c.instructions+=8;goto B71ddc8;
case 0x71ddca:c.instructions+=7;goto B71ddca;
case 0x71ddcd:c.instructions+=6;goto B71ddcd;
case 0x71ddce:c.instructions+=5;goto B71ddce;
case 0x71ddcf:c.instructions+=4;goto B71ddcf;
case 0x71ddd1:c.instructions+=3;goto B71ddd1;
case 0x71ddd3:c.instructions+=2;goto B71ddd3;
case 0x71ddd4:c.instructions+=1;goto B71ddd4;
case 0x71ddd6:goto L71ddd6;
case 0x71ddd8:goto L71ddd8;
case 0x71dddb:c.instructions+=49;goto B71dddb;
case 0x71ddde:c.instructions+=48;goto B71ddde;
case 0x71dde1:c.instructions+=47;goto B71dde1;
case 0x71dde4:c.instructions+=46;goto B71dde4;
case 0x71dde7:c.instructions+=45;goto B71dde7;
case 0x71dde9:c.instructions+=44;goto B71dde9;
case 0x71dded:c.instructions+=43;goto B71dded;
case 0x71ddf1:c.instructions+=42;goto B71ddf1;
case 0x71ddf4:c.instructions+=41;goto B71ddf4;
case 0x71ddf7:c.instructions+=40;goto B71ddf7;
case 0x71ddfb:c.instructions+=39;goto B71ddfb;
case 0x71ddff:c.instructions+=38;goto B71ddff;
case 0x71de02:c.instructions+=37;goto B71de02;
case 0x71de05:c.instructions+=36;goto B71de05;
case 0x71de09:c.instructions+=35;goto B71de09;
case 0x71de0d:c.instructions+=34;goto B71de0d;
case 0x71de10:c.instructions+=33;goto B71de10;
case 0x71de13:c.instructions+=32;goto B71de13;
case 0x71de17:c.instructions+=31;goto B71de17;
case 0x71de1b:c.instructions+=30;goto B71de1b;
case 0x71de1e:c.instructions+=29;goto B71de1e;
case 0x71de21:c.instructions+=28;goto B71de21;
case 0x71de25:c.instructions+=27;goto B71de25;
case 0x71de29:c.instructions+=26;goto B71de29;
case 0x71de2c:c.instructions+=25;goto B71de2c;
case 0x71de2f:c.instructions+=24;goto B71de2f;
case 0x71de33:c.instructions+=23;goto B71de33;
case 0x71de37:c.instructions+=22;goto B71de37;
case 0x71de3a:c.instructions+=21;goto B71de3a;
case 0x71de3d:c.instructions+=20;goto B71de3d;
case 0x71de41:c.instructions+=19;goto B71de41;
case 0x71de45:c.instructions+=18;goto B71de45;
case 0x71de48:c.instructions+=17;goto B71de48;
case 0x71de4b:c.instructions+=16;goto B71de4b;
case 0x71de4f:c.instructions+=15;goto B71de4f;
case 0x71de53:c.instructions+=14;goto B71de53;
case 0x71de56:c.instructions+=13;goto B71de56;
case 0x71de59:c.instructions+=12;goto B71de59;
case 0x71de5d:c.instructions+=11;goto B71de5d;
case 0x71de61:c.instructions+=10;goto B71de61;
case 0x71de64:c.instructions+=9;goto B71de64;
case 0x71de67:c.instructions+=8;goto B71de67;
case 0x71de6b:c.instructions+=7;goto B71de6b;
case 0x71de6f:c.instructions+=6;goto B71de6f;
case 0x71de72:c.instructions+=5;goto B71de72;
case 0x71de73:c.instructions+=4;goto B71de73;
case 0x71de79:c.instructions+=3;goto B71de79;
case 0x71de7a:c.instructions+=2;goto B71de7a;
case 0x71de7b:c.instructions+=1;goto B71de7b;
case 0x71de7c:goto L71de7c;
case 0x71de7d:c.instructions+=7;goto B71de7d;
case 0x71de7f:c.instructions+=6;goto B71de7f;
case 0x71de85:c.instructions+=5;goto B71de85;
case 0x71de8b:c.instructions+=4;goto B71de8b;
case 0x71de8c:c.instructions+=3;goto B71de8c;
case 0x71de8f:c.instructions+=2;goto B71de8f;
case 0x71de92:c.instructions+=1;goto B71de92;
case 0x71de97:goto L71de97;
case 0x71de9a:c.instructions+=5;goto B71de9a;
case 0x71de9b:c.instructions+=4;goto B71de9b;
case 0x71de9c:c.instructions+=3;goto B71de9c;
case 0x71dea2:c.instructions+=2;goto B71dea2;
case 0x71dea9:c.instructions+=1;goto B71dea9;
case 0x71deaa:goto L71deaa;
case 0x71dead:c.instructions+=8;goto B71dead;
case 0x71deb0:c.instructions+=7;goto B71deb0;
case 0x71deb3:c.instructions+=6;goto B71deb3;
case 0x71deb5:c.instructions+=5;goto B71deb5;
case 0x71deb8:c.instructions+=4;goto B71deb8;
case 0x71deba:c.instructions+=3;goto B71deba;
case 0x71debc:c.instructions+=2;goto B71debc;
case 0x71debe:c.instructions+=1;goto B71debe;
case 0x71dec4:goto L71dec4;
case 0x71dec6:c.instructions+=78;goto B71dec6;
case 0x71decc:c.instructions+=77;goto B71decc;
case 0x71dece:c.instructions+=76;goto B71dece;
case 0x71ded4:c.instructions+=75;goto B71ded4;
case 0x71deda:c.instructions+=74;goto B71deda;
case 0x71dee0:c.instructions+=73;goto B71dee0;
case 0x71dee3:c.instructions+=72;goto B71dee3;
case 0x71dee6:c.instructions+=71;goto B71dee6;
case 0x71dee9:c.instructions+=70;goto B71dee9;
case 0x71deec:c.instructions+=69;goto B71deec;
case 0x71deee:c.instructions+=68;goto B71deee;
case 0x71def1:c.instructions+=67;goto B71def1;
case 0x71def3:c.instructions+=66;goto B71def3;
case 0x71def6:c.instructions+=65;goto B71def6;
case 0x71def9:c.instructions+=64;goto B71def9;
case 0x71defb:c.instructions+=63;goto B71defb;
case 0x71df01:c.instructions+=62;goto B71df01;
case 0x71df03:c.instructions+=61;goto B71df03;
case 0x71df09:c.instructions+=60;goto B71df09;
case 0x71df0c:c.instructions+=59;goto B71df0c;
case 0x71df0f:c.instructions+=58;goto B71df0f;
case 0x71df12:c.instructions+=57;goto B71df12;
case 0x71df14:c.instructions+=56;goto B71df14;
case 0x71df17:c.instructions+=55;goto B71df17;
case 0x71df1a:c.instructions+=54;goto B71df1a;
case 0x71df20:c.instructions+=53;goto B71df20;
case 0x71df23:c.instructions+=52;goto B71df23;
case 0x71df25:c.instructions+=51;goto B71df25;
case 0x71df27:c.instructions+=50;goto B71df27;
case 0x71df2d:c.instructions+=49;goto B71df2d;
case 0x71df33:c.instructions+=48;goto B71df33;
case 0x71df36:c.instructions+=47;goto B71df36;
case 0x71df39:c.instructions+=46;goto B71df39;
case 0x71df3c:c.instructions+=45;goto B71df3c;
case 0x71df3f:c.instructions+=44;goto B71df3f;
case 0x71df42:c.instructions+=43;goto B71df42;
case 0x71df44:c.instructions+=42;goto B71df44;
case 0x71df46:c.instructions+=41;goto B71df46;
case 0x71df49:c.instructions+=40;goto B71df49;
case 0x71df4c:c.instructions+=39;goto B71df4c;
case 0x71df4f:c.instructions+=38;goto B71df4f;
case 0x71df52:c.instructions+=37;goto B71df52;
case 0x71df54:c.instructions+=36;goto B71df54;
case 0x71df56:c.instructions+=35;goto B71df56;
case 0x71df59:c.instructions+=34;goto B71df59;
case 0x71df5b:c.instructions+=33;goto B71df5b;
case 0x71df5e:c.instructions+=32;goto B71df5e;
case 0x71df61:c.instructions+=31;goto B71df61;
case 0x71df64:c.instructions+=30;goto B71df64;
case 0x71df66:c.instructions+=29;goto B71df66;
case 0x71df69:c.instructions+=28;goto B71df69;
case 0x71df6b:c.instructions+=27;goto B71df6b;
case 0x71df6e:c.instructions+=26;goto B71df6e;
case 0x71df71:c.instructions+=25;goto B71df71;
case 0x71df74:c.instructions+=24;goto B71df74;
case 0x71df77:c.instructions+=23;goto B71df77;
case 0x71df7a:c.instructions+=22;goto B71df7a;
case 0x71df7d:c.instructions+=21;goto B71df7d;
case 0x71df80:c.instructions+=20;goto B71df80;
case 0x71df83:c.instructions+=19;goto B71df83;
case 0x71df85:c.instructions+=18;goto B71df85;
case 0x71df88:c.instructions+=17;goto B71df88;
case 0x71df8b:c.instructions+=16;goto B71df8b;
case 0x71df8e:c.instructions+=15;goto B71df8e;
case 0x71df91:c.instructions+=14;goto B71df91;
case 0x71df94:c.instructions+=13;goto B71df94;
case 0x71df96:c.instructions+=12;goto B71df96;
case 0x71df99:c.instructions+=11;goto B71df99;
case 0x71df9b:c.instructions+=10;goto B71df9b;
case 0x71df9e:c.instructions+=9;goto B71df9e;
case 0x71dfa1:c.instructions+=8;goto B71dfa1;
case 0x71dfa4:c.instructions+=7;goto B71dfa4;
case 0x71dfa6:c.instructions+=6;goto B71dfa6;
case 0x71dfa9:c.instructions+=5;goto B71dfa9;
case 0x71dfac:c.instructions+=4;goto B71dfac;
case 0x71dfaf:c.instructions+=3;goto B71dfaf;
case 0x71dfb2:c.instructions+=2;goto B71dfb2;
case 0x71dfb5:c.instructions+=1;goto B71dfb5;
case 0x71dfb8:goto L71dfb8;
case 0x71dfbb:c.instructions+=2;goto B71dfbb;
case 0x71dfbe:c.instructions+=1;goto B71dfbe;
case 0x71dfc4:goto L71dfc4;
case 0x71dfc7:c.instructions+=12;goto B71dfc7;
case 0x71dfcd:c.instructions+=11;goto B71dfcd;
case 0x71dfd0:c.instructions+=10;goto B71dfd0;
case 0x71dfd3:c.instructions+=9;goto B71dfd3;
case 0x71dfda:c.instructions+=8;goto B71dfda;
case 0x71dfdc:c.instructions+=7;goto B71dfdc;
case 0x71dfdf:c.instructions+=6;goto B71dfdf;
case 0x71dfe1:c.instructions+=5;goto B71dfe1;
case 0x71dfe3:c.instructions+=4;goto B71dfe3;
case 0x71dfe6:c.instructions+=3;goto B71dfe6;
case 0x71dfe9:c.instructions+=2;goto B71dfe9;
case 0x71dfec:c.instructions+=1;goto B71dfec;
case 0x71dff2:goto L71dff2;
case 0x71dff5:c.instructions+=3;goto B71dff5;
case 0x71dff7:c.instructions+=2;goto B71dff7;
case 0x71dffd:c.instructions+=1;goto B71dffd;
default:missing_instruction(c.pc);}
B71d02a:L71d02a:{c.instructions+=3;NFSU2_TR(0x71d02a);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d02c:{NFSU2_TR(0x71d02c);
u8 U[4];
w4(U+0,u32(0x7c67c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d031:{NFSU2_TR(0x71d031);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71d036ull));
TAIL_STATIC(0x760da0u,760);
}
B71d036:L71d036:{c.instructions+=14;NFSU2_TR(0x71d036);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B71d03a:{NFSU2_TR(0x71d03a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B71d03e:{NFSU2_TR(0x71d03e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71d041:{NFSU2_TR(0x71d041);
w4(R+0,u32(0x0ull));
}
B71d046:{NFSU2_TR(0x71d046);
u8 U[32];
w4(U+0,u32(0x0ull));
w1(U+4,u8((r4(R+0))==(u32(0x0ull))));
if(r1(U+4)){goto L71d046_35;}
w1(U+5,u8((r4(R+0))==(u32(0x1ull))));
if(r1(U+5)){goto L71d046_37;}
w1(U+6,u8((r4(R+0))==(u32(0x2ull))));
if(r1(U+6)){goto L71d046_39;}
w1(U+7,u8((r4(R+0))==(u32(0x3ull))));
if(r1(U+7)){goto L71d046_41;}
w1(U+8,u8((r4(R+0))==(u32(0x4ull))));
if(r1(U+8)){goto L71d046_43;}
w1(U+9,u8((r4(R+0))==(u32(0x5ull))));
if(r1(U+9)){goto L71d046_45;}
w1(U+10,u8((r4(R+0))==(u32(0x6ull))));
if(r1(U+10)){goto L71d046_47;}
w1(U+11,u8((r4(R+0))==(u32(0x7ull))));
if(r1(U+11)){goto L71d046_49;}
w1(U+12,u8((r4(R+0))==(u32(0x9ull))));
if(r1(U+12)){goto L71d046_51;}
w1(U+13,u8((r4(R+0))==(u32(0xaull))));
if(r1(U+13)){goto L71d046_53;}
w1(U+14,u8((r4(R+0))==(u32(0xbull))));
if(r1(U+14)){goto L71d046_55;}
w1(U+15,u8((r4(R+0))==(u32(0xdull))));
if(r1(U+15)){goto L71d046_57;}
w1(U+16,u8((r4(R+0))==(u32(0xfull))));
if(r1(U+16)){goto L71d046_59;}
w1(U+17,u8((r4(R+0))==(u32(0x80000002ull))));
if(r1(U+17)){goto L71d046_61;}
w1(U+18,u8((r4(R+0))==(u32(0x80000003ull))));
if(r1(U+18)){goto L71d046_63;}
w1(U+19,u8((r4(R+0))==(u32(0x80000004ull))));
if(r1(U+19)){goto L71d046_65;}
{SPILL();c.pc=0x71d046u;V r_=user_op(c,262189,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L71d046_67;
L71d046_35:;
{SPILL();c.pc=0x71d046u;V r_=user_op(c,262190,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L71d046_67;
L71d046_37:;
{SPILL();c.pc=0x71d046u;V r_=user_op(c,262191,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L71d046_67;
L71d046_39:;
{SPILL();c.pc=0x71d046u;V r_=user_op(c,262192,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L71d046_67;
L71d046_41:;
{SPILL();c.pc=0x71d046u;V r_=user_op(c,262193,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L71d046_67;
L71d046_43:;
{SPILL();c.pc=0x71d046u;V r_=user_op(c,262194,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L71d046_67;
L71d046_45:;
{SPILL();c.pc=0x71d046u;V r_=user_op(c,262195,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L71d046_67;
L71d046_47:;
{SPILL();c.pc=0x71d046u;V r_=user_op(c,262196,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L71d046_67;
L71d046_49:;
{SPILL();c.pc=0x71d046u;V r_=user_op(c,262197,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L71d046_67;
L71d046_51:;
{SPILL();c.pc=0x71d046u;V r_=user_op(c,262198,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L71d046_67;
L71d046_53:;
{SPILL();c.pc=0x71d046u;V r_=user_op(c,262199,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L71d046_67;
L71d046_55:;
{SPILL();c.pc=0x71d046u;V r_=user_op(c,262200,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L71d046_67;
L71d046_57:;
{SPILL();c.pc=0x71d046u;V r_=user_op(c,262201,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L71d046_67;
L71d046_59:;
{SPILL();c.pc=0x71d046u;V r_=user_op(c,262202,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L71d046_67;
L71d046_61:;
{SPILL();c.pc=0x71d046u;V r_=user_op(c,262203,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L71d046_67;
L71d046_63:;
{SPILL();c.pc=0x71d046u;V r_=user_op(c,262204,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L71d046_67;
L71d046_65:;
{SPILL();c.pc=0x71d046u;V r_=user_op(c,262205,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L71d046_67;
L71d046_67:;
__builtin_memmove((R+0),gp(u32(r4(U+0))),4);
w4(U+20,u32(u32(r4(U+0))+u32(u32(0x4ull))));
__builtin_memmove((R+12),gp(u32(r4(U+20))),4);
w4(U+24,u32(u32(r4(U+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),gp(u32(r4(U+24))),4);
w4(U+28,u32(u32(r4(U+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),gp(u32(r4(U+28))),4);
}
B71d048:{NFSU2_TR(0x71d048);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B71d04a:{NFSU2_TR(0x71d04a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d04d:{NFSU2_TR(0x71d04d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d050:{NFSU2_TR(0x71d050);
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
B71d054:{NFSU2_TR(0x71d054);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d056:{NFSU2_TR(0x71d056);
u8 U[4];
w4(U+0,u32(0x7ab4bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d05b:{NFSU2_TR(0x71d05b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B71d05e:{NFSU2_TR(0x71d05e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d05f:{NFSU2_TR(0x71d05f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71d064ull));
TAIL_STATIC(0x75f1d0u,75f);
}
B71d064:L71d064:{c.instructions+=3;NFSU2_TR(0x71d064);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B71d067:{NFSU2_TR(0x71d067);
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
B71d069:{NFSU2_TR(0x71d069);
if(r1(R+518)){{goto L71d082;}}
}
B71d06b:L71d06b:{c.instructions+=5;NFSU2_TR(0x71d06b);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d06d:{NFSU2_TR(0x71d06d);
u8 U[4];
w4(U+0,u32(0x7b7258ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d072:{NFSU2_TR(0x71d072);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B71d075:{NFSU2_TR(0x71d075);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d076:{NFSU2_TR(0x71d076);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71d07bull));
TAIL_STATIC(0x75f1d0u,75f);
}
B71d07b:L71d07b:{c.instructions+=3;NFSU2_TR(0x71d07b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B71d07e:{NFSU2_TR(0x71d07e);
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
B71d080:{NFSU2_TR(0x71d080);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L71d099;}}
}
B71d082:L71d082:{c.instructions+=4;NFSU2_TR(0x71d082);
w4(R+0,u32(0x1ull));
}
B71d087:{NFSU2_TR(0x71d087);
u8 U[32];
w4(U+0,u32(0x0ull));
w1(U+4,u8((r4(R+0))==(u32(0x0ull))));
if(r1(U+4)){goto L71d087_35;}
w1(U+5,u8((r4(R+0))==(u32(0x1ull))));
if(r1(U+5)){goto L71d087_37;}
w1(U+6,u8((r4(R+0))==(u32(0x2ull))));
if(r1(U+6)){goto L71d087_39;}
w1(U+7,u8((r4(R+0))==(u32(0x3ull))));
if(r1(U+7)){goto L71d087_41;}
w1(U+8,u8((r4(R+0))==(u32(0x4ull))));
if(r1(U+8)){goto L71d087_43;}
w1(U+9,u8((r4(R+0))==(u32(0x5ull))));
if(r1(U+9)){goto L71d087_45;}
w1(U+10,u8((r4(R+0))==(u32(0x6ull))));
if(r1(U+10)){goto L71d087_47;}
w1(U+11,u8((r4(R+0))==(u32(0x7ull))));
if(r1(U+11)){goto L71d087_49;}
w1(U+12,u8((r4(R+0))==(u32(0x9ull))));
if(r1(U+12)){goto L71d087_51;}
w1(U+13,u8((r4(R+0))==(u32(0xaull))));
if(r1(U+13)){goto L71d087_53;}
w1(U+14,u8((r4(R+0))==(u32(0xbull))));
if(r1(U+14)){goto L71d087_55;}
w1(U+15,u8((r4(R+0))==(u32(0xdull))));
if(r1(U+15)){goto L71d087_57;}
w1(U+16,u8((r4(R+0))==(u32(0xfull))));
if(r1(U+16)){goto L71d087_59;}
w1(U+17,u8((r4(R+0))==(u32(0x80000002ull))));
if(r1(U+17)){goto L71d087_61;}
w1(U+18,u8((r4(R+0))==(u32(0x80000003ull))));
if(r1(U+18)){goto L71d087_63;}
w1(U+19,u8((r4(R+0))==(u32(0x80000004ull))));
if(r1(U+19)){goto L71d087_65;}
{SPILL();c.pc=0x71d087u;V r_=user_op(c,262189,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L71d087_67;
L71d087_35:;
{SPILL();c.pc=0x71d087u;V r_=user_op(c,262190,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L71d087_67;
L71d087_37:;
{SPILL();c.pc=0x71d087u;V r_=user_op(c,262191,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L71d087_67;
L71d087_39:;
{SPILL();c.pc=0x71d087u;V r_=user_op(c,262192,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L71d087_67;
L71d087_41:;
{SPILL();c.pc=0x71d087u;V r_=user_op(c,262193,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L71d087_67;
L71d087_43:;
{SPILL();c.pc=0x71d087u;V r_=user_op(c,262194,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L71d087_67;
L71d087_45:;
{SPILL();c.pc=0x71d087u;V r_=user_op(c,262195,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L71d087_67;
L71d087_47:;
{SPILL();c.pc=0x71d087u;V r_=user_op(c,262196,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L71d087_67;
L71d087_49:;
{SPILL();c.pc=0x71d087u;V r_=user_op(c,262197,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L71d087_67;
L71d087_51:;
{SPILL();c.pc=0x71d087u;V r_=user_op(c,262198,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L71d087_67;
L71d087_53:;
{SPILL();c.pc=0x71d087u;V r_=user_op(c,262199,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L71d087_67;
L71d087_55:;
{SPILL();c.pc=0x71d087u;V r_=user_op(c,262200,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L71d087_67;
L71d087_57:;
{SPILL();c.pc=0x71d087u;V r_=user_op(c,262201,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L71d087_67;
L71d087_59:;
{SPILL();c.pc=0x71d087u;V r_=user_op(c,262202,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L71d087_67;
L71d087_61:;
{SPILL();c.pc=0x71d087u;V r_=user_op(c,262203,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L71d087_67;
L71d087_63:;
{SPILL();c.pc=0x71d087u;V r_=user_op(c,262204,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L71d087_67;
L71d087_65:;
{SPILL();c.pc=0x71d087u;V r_=user_op(c,262205,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L71d087_67;
L71d087_67:;
__builtin_memmove((R+0),gp(u32(r4(U+0))),4);
w4(U+20,u32(u32(r4(U+0))+u32(u32(0x4ull))));
__builtin_memmove((R+12),gp(u32(r4(U+20))),4);
w4(U+24,u32(u32(r4(U+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),gp(u32(r4(U+24))),4);
w4(U+28,u32(u32(r4(U+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),gp(u32(r4(U+28))),4);
}
B71d089:{NFSU2_TR(0x71d089);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(u32(0x4000000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B71d08f:{NFSU2_TR(0x71d08f);
if(r1(R+518)){{goto L71d098;}}
}
B71d091:L71d091:{c.instructions+=1;NFSU2_TR(0x71d091);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B71d098:L71d098:{c.instructions+=1;NFSU2_TR(0x71d098);
}
B71d099:L71d099:{c.instructions+=2;NFSU2_TR(0x71d099);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71d09c:{NFSU2_TR(0x71d09c);
{goto L71d0b5;}
}
B71d09e:L71d09e:{c.instructions+=7;NFSU2_TR(0x71d09e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71d0a1:{NFSU2_TR(0x71d0a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B71d0a3:{NFSU2_TR(0x71d0a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B71d0a5:{NFSU2_TR(0x71d0a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d0a8:{NFSU2_TR(0x71d0a8);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B71d0aa:{NFSU2_TR(0x71d0aa);
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
B71d0ab:{NFSU2_TR(0x71d0ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71d0ac:L71d0ac:{c.instructions+=3;NFSU2_TR(0x71d0ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+16),(U+4),4);
}
B71d0af:{NFSU2_TR(0x71d0af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B71d0b3:{NFSU2_TR(0x71d0b3);
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
B71d0b5:L71d0b5:{c.instructions+=1;NFSU2_TR(0x71d0b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71d0baull));
TAIL_STATIC(0x760ddbu,760);
}
B71d0ba:L71d0ba:{c.instructions+=1;NFSU2_TR(0x71d0ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71d0d8:L71d0d8:{c.instructions+=7;NFSU2_TR(0x71d0d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71d0db:{NFSU2_TR(0x71d0db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B71d0dd:{NFSU2_TR(0x71d0dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B71d0df:{NFSU2_TR(0x71d0df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d0e2:{NFSU2_TR(0x71d0e2);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B71d0e4:{NFSU2_TR(0x71d0e4);
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
B71d0e5:{NFSU2_TR(0x71d0e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71d0e6:L71d0e6:{c.instructions+=4;NFSU2_TR(0x71d0e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+16),(U+4),4);
}
B71d0e9:{NFSU2_TR(0x71d0e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B71d0ed:{NFSU2_TR(0x71d0ed);
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
B71d0ef:{NFSU2_TR(0x71d0ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71d0f4ull));
TAIL_STATIC(0x760ddbu,760);
}
B71d0f4:L71d0f4:{c.instructions+=1;NFSU2_TR(0x71d0f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71d0f5:L71d0f5:{c.instructions+=2;NFSU2_TR(0x71d0f5);
w2(R+4260,u16(0xffffull));
}
B71d0f7:{NFSU2_TR(0x71d0f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71d0f8:L71d0f8:{c.instructions+=35;NFSU2_TR(0x71d0f8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d0f9:{NFSU2_TR(0x71d0f9);
__builtin_memmove((R+20),(R+16),4);
}
B71d0fb:{NFSU2_TR(0x71d0fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d0fc:{NFSU2_TR(0x71d0fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71d0ff:{NFSU2_TR(0x71d0ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d102:{NFSU2_TR(0x71d102);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71d105:{NFSU2_TR(0x71d105);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d108:{NFSU2_TR(0x71d108);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71d10b:{NFSU2_TR(0x71d10b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d10c:{NFSU2_TR(0x71d10c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d10f:{NFSU2_TR(0x71d10f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71d112:{NFSU2_TR(0x71d112);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71d115:{NFSU2_TR(0x71d115);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71d118:{NFSU2_TR(0x71d118);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B71d11b:{NFSU2_TR(0x71d11b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B71d11e:{NFSU2_TR(0x71d11e);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4368),(U+8),8);
}
B71d122:{NFSU2_TR(0x71d122);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B71d126:{NFSU2_TR(0x71d126);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4400),(U+8),8);
}
B71d12a:{NFSU2_TR(0x71d12a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B71d12d:{NFSU2_TR(0x71d12d);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+12)),r8(U+0));
}
B71d130:{NFSU2_TR(0x71d130);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4368),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B71d134:{NFSU2_TR(0x71d134);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4384),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B71d138:{NFSU2_TR(0x71d138);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4400),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B71d13c:{NFSU2_TR(0x71d13c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B71d13f:{NFSU2_TR(0x71d13f);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B71d142:{NFSU2_TR(0x71d142);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4368),(U+8),8);
}
B71d146:{NFSU2_TR(0x71d146);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B71d14a:{NFSU2_TR(0x71d14a);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4400),(U+8),8);
}
B71d14e:{NFSU2_TR(0x71d14e);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+12)),r8(U+0));
}
B71d151:{NFSU2_TR(0x71d151);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4368),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B71d155:{NFSU2_TR(0x71d155);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4384),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B71d159:{NFSU2_TR(0x71d159);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4400),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B71d15d:{NFSU2_TR(0x71d15d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71d15e:{NFSU2_TR(0x71d15e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B71d15f:{NFSU2_TR(0x71d15f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71d160:L71d160:{c.instructions+=7;NFSU2_TR(0x71d160);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d161:{NFSU2_TR(0x71d161);
__builtin_memmove((R+20),(R+16),4);
}
B71d163:{NFSU2_TR(0x71d163);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71d166:{NFSU2_TR(0x71d166);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71d169:{NFSU2_TR(0x71d169);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d16b:{NFSU2_TR(0x71d16b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B71d16c:{NFSU2_TR(0x71d16c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d16d:L71d16d:{c.instructions+=10;NFSU2_TR(0x71d16d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B71d16f:{NFSU2_TR(0x71d16f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B71d171:{NFSU2_TR(0x71d171);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71d174:{NFSU2_TR(0x71d174);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d177:{NFSU2_TR(0x71d177);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71d17a:{NFSU2_TR(0x71d17a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B71d17d:{NFSU2_TR(0x71d17d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d180:{NFSU2_TR(0x71d180);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+4),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B71d183:{NFSU2_TR(0x71d183);
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
B71d184:{NFSU2_TR(0x71d184);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71d16du);}goto L71d16d;}}
}
B71d186:L71d186:{c.instructions+=3;NFSU2_TR(0x71d186);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71d187:{NFSU2_TR(0x71d187);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71d188:{NFSU2_TR(0x71d188);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71d189:L71d189:{c.instructions+=10;NFSU2_TR(0x71d189);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d18a:{NFSU2_TR(0x71d18a);
__builtin_memmove((R+20),(R+16),4);
}
B71d18c:{NFSU2_TR(0x71d18c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d18d:{NFSU2_TR(0x71d18d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d18e:{NFSU2_TR(0x71d18e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71d191:{NFSU2_TR(0x71d191);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71d194:{NFSU2_TR(0x71d194);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71d197:{NFSU2_TR(0x71d197);
w4(R+4,u32(0x8ull));
}
B71d19c:{NFSU2_TR(0x71d19c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71d19f:{NFSU2_TR(0x71d19f);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B71d1a2:L71d1a2:{c.instructions+=19;NFSU2_TR(0x71d1a2);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B71d1a5:{NFSU2_TR(0x71d1a5);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4368),(U+0),8);
}
B71d1a8:{NFSU2_TR(0x71d1a8);
__builtin_memmove((R+4384),(R+4352),8);
}
B71d1ab:{NFSU2_TR(0x71d1ab);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B71d1ae:{NFSU2_TR(0x71d1ae);
__builtin_memmove((R+4400),(R+4368),8);
}
B71d1b1:{NFSU2_TR(0x71d1b1);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B71d1b4:{NFSU2_TR(0x71d1b4);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4374))));
}
B71d1b7:{NFSU2_TR(0x71d1b7);
__builtin_memmove((R+4384),(R+4388),1);
__builtin_memmove((R+4385),(R+4468),1);
__builtin_memmove((R+4386),(R+4389),1);
__builtin_memmove((R+4387),(R+4469),1);
__builtin_memmove((R+4388),(R+4390),1);
__builtin_memmove((R+4389),(R+4470),1);
__builtin_memmove((R+4390),(R+4391),1);
__builtin_memmove((R+4391),(R+4471),1);
}
B71d1ba:{NFSU2_TR(0x71d1ba);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0x1ull)));}
}
B71d1be:{NFSU2_TR(0x71d1be);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B71d1c1:{NFSU2_TR(0x71d1c1);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4406))));
}
B71d1c4:{NFSU2_TR(0x71d1c4);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B71d1c7:{NFSU2_TR(0x71d1c7);
{wv<8>((R+4384),uo::psraw<8>(rv<8>((R+4384)),V(0x1ull)));}
}
B71d1cb:{NFSU2_TR(0x71d1cb);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B71d1cd:{NFSU2_TR(0x71d1cd);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B71d1cf:{NFSU2_TR(0x71d1cf);
w1(R+512,carry<u32>(r4(R+28),u32(0x10ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B71d1d2:{NFSU2_TR(0x71d1d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71d1d6:{NFSU2_TR(0x71d1d6);
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
B71d1d7:{NFSU2_TR(0x71d1d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71d1a2u);}goto L71d1a2;}}
}
B71d1d9:L71d1d9:{c.instructions+=4;NFSU2_TR(0x71d1d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71d1da:{NFSU2_TR(0x71d1da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71d1db:{NFSU2_TR(0x71d1db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71d1dc:{NFSU2_TR(0x71d1dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71d1dd:L71d1dd:{c.instructions+=9;NFSU2_TR(0x71d1dd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d1de:{NFSU2_TR(0x71d1de);
__builtin_memmove((R+20),(R+16),4);
}
B71d1e0:{NFSU2_TR(0x71d1e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d1e1:{NFSU2_TR(0x71d1e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d1e2:{NFSU2_TR(0x71d1e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71d1e5:{NFSU2_TR(0x71d1e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71d1e8:{NFSU2_TR(0x71d1e8);
w4(R+4,u32(0x8ull));
}
B71d1ed:{NFSU2_TR(0x71d1ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71d1f0:{NFSU2_TR(0x71d1f0);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B71d1f3:L71d1f3:{c.instructions+=10;NFSU2_TR(0x71d1f3);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B71d1f6:{NFSU2_TR(0x71d1f6);
__builtin_memmove((R+4384),(R+4352),8);
}
B71d1f9:{NFSU2_TR(0x71d1f9);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B71d1fc:{NFSU2_TR(0x71d1fc);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B71d1ff:{NFSU2_TR(0x71d1ff);
__builtin_memmove((R+4384),(R+4388),1);
__builtin_memmove((R+4385),(R+4468),1);
__builtin_memmove((R+4386),(R+4389),1);
__builtin_memmove((R+4387),(R+4469),1);
__builtin_memmove((R+4388),(R+4390),1);
__builtin_memmove((R+4389),(R+4470),1);
__builtin_memmove((R+4390),(R+4391),1);
__builtin_memmove((R+4391),(R+4471),1);
}
B71d202:{NFSU2_TR(0x71d202);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B71d204:{NFSU2_TR(0x71d204);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71d208:{NFSU2_TR(0x71d208);
w1(R+512,carry<u32>(r4(R+28),u32(0x10ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B71d20b:{NFSU2_TR(0x71d20b);
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
B71d20c:{NFSU2_TR(0x71d20c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71d1f3u);}goto L71d1f3;}}
}
B71d20e:L71d20e:{c.instructions+=4;NFSU2_TR(0x71d20e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71d20f:{NFSU2_TR(0x71d20f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71d210:{NFSU2_TR(0x71d210);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71d211:{NFSU2_TR(0x71d211);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71d212:L71d212:{c.instructions+=9;NFSU2_TR(0x71d212);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d213:{NFSU2_TR(0x71d213);
__builtin_memmove((R+20),(R+16),4);
}
B71d215:{NFSU2_TR(0x71d215);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d216:{NFSU2_TR(0x71d216);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d217:{NFSU2_TR(0x71d217);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71d21a:{NFSU2_TR(0x71d21a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71d21d:{NFSU2_TR(0x71d21d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71d220:{NFSU2_TR(0x71d220);
w4(R+4,u32(0x8ull));
}
B71d225:{NFSU2_TR(0x71d225);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B71d228:L71d228:{c.instructions+=14;NFSU2_TR(0x71d228);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B71d22b:{NFSU2_TR(0x71d22b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),8);
__builtin_memmove((R+4368),(U+0),8);
}
B71d22e:{NFSU2_TR(0x71d22e);
__builtin_memmove((R+4384),(R+4352),8);
}
B71d231:{NFSU2_TR(0x71d231);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B71d234:{NFSU2_TR(0x71d234);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71d238:{NFSU2_TR(0x71d238);
w2(R+4352,u16(u32(r2(R+4352))-u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))-u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))-u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))-u32(r2(R+4374))));
}
B71d23b:{NFSU2_TR(0x71d23b);
__builtin_memmove((R+4384),(R+4388),1);
__builtin_memmove((R+4385),(R+4468),1);
__builtin_memmove((R+4386),(R+4389),1);
__builtin_memmove((R+4387),(R+4469),1);
__builtin_memmove((R+4388),(R+4390),1);
__builtin_memmove((R+4389),(R+4470),1);
__builtin_memmove((R+4390),(R+4391),1);
__builtin_memmove((R+4391),(R+4471),1);
}
B71d23e:{NFSU2_TR(0x71d23e);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B71d241:{NFSU2_TR(0x71d241);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4406))));
}
B71d244:{NFSU2_TR(0x71d244);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B71d246:{NFSU2_TR(0x71d246);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71d24a:{NFSU2_TR(0x71d24a);
w1(R+512,carry<u32>(r4(R+28),u32(0x10ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B71d24d:{NFSU2_TR(0x71d24d);
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
B71d24e:{NFSU2_TR(0x71d24e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71d228u);}goto L71d228;}}
}
B71d250:L71d250:{c.instructions+=4;NFSU2_TR(0x71d250);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71d251:{NFSU2_TR(0x71d251);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71d252:{NFSU2_TR(0x71d252);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71d253:{NFSU2_TR(0x71d253);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71d254:L71d254:{c.instructions+=10;NFSU2_TR(0x71d254);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d255:{NFSU2_TR(0x71d255);
__builtin_memmove((R+20),(R+16),4);
}
B71d257:{NFSU2_TR(0x71d257);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d258:{NFSU2_TR(0x71d258);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d259:{NFSU2_TR(0x71d259);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71d25c:{NFSU2_TR(0x71d25c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71d25f:{NFSU2_TR(0x71d25f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71d262:{NFSU2_TR(0x71d262);
w4(R+4,u32(0x8ull));
}
B71d267:{NFSU2_TR(0x71d267);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71d26a:{NFSU2_TR(0x71d26a);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B71d26d:L71d26d:{c.instructions+=13;NFSU2_TR(0x71d26d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B71d270:{NFSU2_TR(0x71d270);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4368),(U+0),8);
}
B71d273:{NFSU2_TR(0x71d273);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71d277:{NFSU2_TR(0x71d277);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71d27b:{NFSU2_TR(0x71d27b);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4374))));
}
B71d27e:{NFSU2_TR(0x71d27e);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4406))));
}
B71d281:{NFSU2_TR(0x71d281);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4384),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4352),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4353),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4354),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4355),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4356),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4357),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4358),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4359),(U+21),1);
}
B71d284:{NFSU2_TR(0x71d284);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B71d287:{NFSU2_TR(0x71d287);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B71d28a:{NFSU2_TR(0x71d28a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B71d28d:{NFSU2_TR(0x71d28d);
w1(R+512,carry<u32>(r4(R+28),r4(R+8)));
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B71d28f:{NFSU2_TR(0x71d28f);
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
B71d290:{NFSU2_TR(0x71d290);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71d26du);}goto L71d26d;}}
}
B71d292:L71d292:{c.instructions+=4;NFSU2_TR(0x71d292);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71d293:{NFSU2_TR(0x71d293);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71d294:{NFSU2_TR(0x71d294);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71d295:{NFSU2_TR(0x71d295);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71d296:L71d296:{c.instructions+=12;NFSU2_TR(0x71d296);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d297:{NFSU2_TR(0x71d297);
__builtin_memmove((R+20),(R+16),4);
}
B71d299:{NFSU2_TR(0x71d299);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71d29c:{NFSU2_TR(0x71d29c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71d29f:{NFSU2_TR(0x71d29f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d2a0:{NFSU2_TR(0x71d2a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d2a1:{NFSU2_TR(0x71d2a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d2a2:{NFSU2_TR(0x71d2a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71d2a5:{NFSU2_TR(0x71d2a5);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d2a7:{NFSU2_TR(0x71d2a7);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+28))));
}
B71d2a9:{NFSU2_TR(0x71d2a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71d2aa:{NFSU2_TR(0x71d2aa);
w4(R+24,u32(0xffull));
}
B71d2af:L71d2af:{c.instructions+=3;NFSU2_TR(0x71d2af);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((R+8),(U+0),2);
}
B71d2b2:{NFSU2_TR(0x71d2b2);
u8 U[2];
w1(R+523,u8(0x0ull));
w2(U+0,u16(u32(r2(R+8))&u32(r2(R+8))));
w1(R+519,u8(s16(r2(U+0))<s16(u16(0x0ull))));
}
B71d2b5:{NFSU2_TR(0x71d2b5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L71d2bb;}}
}
B71d2b7:L71d2b7:{c.instructions+=2;NFSU2_TR(0x71d2b7);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B71d2b9:{NFSU2_TR(0x71d2b9);
{goto L71d2c7;}
}
B71d2bb:L71d2bb:{c.instructions+=2;NFSU2_TR(0x71d2bb);
u8 U[4];
__builtin_memmove((U+0),(R+24),2);
w1(R+523,sborrow<u16>(r2(R+8),r2(U+0)));
w2(U+2,u16(u32(r2(R+8))-u32(r2(U+0))));
w1(R+519,u8(s16(r2(U+2))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B71d2be:{NFSU2_TR(0x71d2be);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L71d2c4;}}
}
B71d2c0:L71d2c0:{c.instructions+=2;NFSU2_TR(0x71d2c0);
__builtin_memmove((R+8),(R+24),4);
}
B71d2c2:{NFSU2_TR(0x71d2c2);
{goto L71d2c7;}
}
B71d2c4:L71d2c4:{c.instructions+=1;NFSU2_TR(0x71d2c4);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B71d2c7:L71d2c7:{c.instructions+=4;NFSU2_TR(0x71d2c7);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B71d2c9:{NFSU2_TR(0x71d2c9);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B71d2cd:{NFSU2_TR(0x71d2cd);
u8 U[2];
w1(R+523,u8(0x0ull));
w2(U+0,u16(u32(r2(R+8))&u32(r2(R+8))));
w1(R+519,u8(s16(r2(U+0))<s16(u16(0x0ull))));
}
B71d2d0:{NFSU2_TR(0x71d2d0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L71d2d6;}}
}
B71d2d2:L71d2d2:{c.instructions+=2;NFSU2_TR(0x71d2d2);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B71d2d4:{NFSU2_TR(0x71d2d4);
{goto L71d2e2;}
}
B71d2d6:L71d2d6:{c.instructions+=2;NFSU2_TR(0x71d2d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),2);
w1(R+523,sborrow<u16>(r2(R+8),r2(U+0)));
w2(U+2,u16(u32(r2(R+8))-u32(r2(U+0))));
w1(R+519,u8(s16(r2(U+2))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B71d2d9:{NFSU2_TR(0x71d2d9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L71d2df;}}
}
B71d2db:L71d2db:{c.instructions+=2;NFSU2_TR(0x71d2db);
__builtin_memmove((R+8),(R+24),4);
}
B71d2dd:{NFSU2_TR(0x71d2dd);
{goto L71d2e2;}
}
B71d2df:L71d2df:{c.instructions+=1;NFSU2_TR(0x71d2df);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B71d2e2:L71d2e2:{c.instructions+=4;NFSU2_TR(0x71d2e2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71d2e5:{NFSU2_TR(0x71d2e5);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B71d2e9:{NFSU2_TR(0x71d2e9);
u8 U[2];
w1(R+523,u8(0x0ull));
w2(U+0,u16(u32(r2(R+8))&u32(r2(R+8))));
w1(R+519,u8(s16(r2(U+0))<s16(u16(0x0ull))));
}
B71d2ec:{NFSU2_TR(0x71d2ec);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L71d2f2;}}
}
B71d2ee:L71d2ee:{c.instructions+=2;NFSU2_TR(0x71d2ee);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B71d2f0:{NFSU2_TR(0x71d2f0);
{goto L71d2fe;}
}
B71d2f2:L71d2f2:{c.instructions+=2;NFSU2_TR(0x71d2f2);
u8 U[4];
__builtin_memmove((U+0),(R+24),2);
w1(R+523,sborrow<u16>(r2(R+8),r2(U+0)));
w2(U+2,u16(u32(r2(R+8))-u32(r2(U+0))));
w1(R+519,u8(s16(r2(U+2))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B71d2f5:{NFSU2_TR(0x71d2f5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L71d2fb;}}
}
B71d2f7:L71d2f7:{c.instructions+=2;NFSU2_TR(0x71d2f7);
__builtin_memmove((R+8),(R+24),4);
}
B71d2f9:{NFSU2_TR(0x71d2f9);
{goto L71d2fe;}
}
B71d2fb:L71d2fb:{c.instructions+=1;NFSU2_TR(0x71d2fb);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B71d2fe:L71d2fe:{c.instructions+=4;NFSU2_TR(0x71d2fe);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71d301:{NFSU2_TR(0x71d301);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B71d305:{NFSU2_TR(0x71d305);
u8 U[2];
w1(R+523,u8(0x0ull));
w2(U+0,u16(u32(r2(R+8))&u32(r2(R+8))));
w1(R+519,u8(s16(r2(U+0))<s16(u16(0x0ull))));
}
B71d308:{NFSU2_TR(0x71d308);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L71d30e;}}
}
B71d30a:L71d30a:{c.instructions+=2;NFSU2_TR(0x71d30a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B71d30c:{NFSU2_TR(0x71d30c);
{goto L71d31a;}
}
B71d30e:L71d30e:{c.instructions+=2;NFSU2_TR(0x71d30e);
u8 U[4];
__builtin_memmove((U+0),(R+24),2);
w1(R+523,sborrow<u16>(r2(R+8),r2(U+0)));
w2(U+2,u16(u32(r2(R+8))-u32(r2(U+0))));
w1(R+519,u8(s16(r2(U+2))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B71d311:{NFSU2_TR(0x71d311);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L71d317;}}
}
B71d313:L71d313:{c.instructions+=2;NFSU2_TR(0x71d313);
__builtin_memmove((R+8),(R+24),4);
}
B71d315:{NFSU2_TR(0x71d315);
{goto L71d31a;}
}
B71d317:L71d317:{c.instructions+=1;NFSU2_TR(0x71d317);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B71d31a:L71d31a:{c.instructions+=4;NFSU2_TR(0x71d31a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71d31d:{NFSU2_TR(0x71d31d);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B71d321:{NFSU2_TR(0x71d321);
u8 U[2];
w1(R+523,u8(0x0ull));
w2(U+0,u16(u32(r2(R+8))&u32(r2(R+8))));
w1(R+519,u8(s16(r2(U+0))<s16(u16(0x0ull))));
}
B71d324:{NFSU2_TR(0x71d324);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L71d32a;}}
}
B71d326:L71d326:{c.instructions+=2;NFSU2_TR(0x71d326);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B71d328:{NFSU2_TR(0x71d328);
{goto L71d336;}
}
B71d32a:L71d32a:{c.instructions+=2;NFSU2_TR(0x71d32a);
u8 U[4];
__builtin_memmove((U+0),(R+24),2);
w1(R+523,sborrow<u16>(r2(R+8),r2(U+0)));
w2(U+2,u16(u32(r2(R+8))-u32(r2(U+0))));
w1(R+519,u8(s16(r2(U+2))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B71d32d:{NFSU2_TR(0x71d32d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L71d333;}}
}
B71d32f:L71d32f:{c.instructions+=2;NFSU2_TR(0x71d32f);
__builtin_memmove((R+8),(R+24),4);
}
B71d331:{NFSU2_TR(0x71d331);
{goto L71d336;}
}
B71d333:L71d333:{c.instructions+=1;NFSU2_TR(0x71d333);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B71d336:L71d336:{c.instructions+=4;NFSU2_TR(0x71d336);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71d339:{NFSU2_TR(0x71d339);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B71d33d:{NFSU2_TR(0x71d33d);
u8 U[2];
w1(R+523,u8(0x0ull));
w2(U+0,u16(u32(r2(R+8))&u32(r2(R+8))));
w1(R+519,u8(s16(r2(U+0))<s16(u16(0x0ull))));
}
B71d340:{NFSU2_TR(0x71d340);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L71d346;}}
}
B71d342:L71d342:{c.instructions+=2;NFSU2_TR(0x71d342);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B71d344:{NFSU2_TR(0x71d344);
{goto L71d352;}
}
B71d346:L71d346:{c.instructions+=2;NFSU2_TR(0x71d346);
u8 U[4];
__builtin_memmove((U+0),(R+24),2);
w1(R+523,sborrow<u16>(r2(R+8),r2(U+0)));
w2(U+2,u16(u32(r2(R+8))-u32(r2(U+0))));
w1(R+519,u8(s16(r2(U+2))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B71d349:{NFSU2_TR(0x71d349);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L71d34f;}}
}
B71d34b:L71d34b:{c.instructions+=2;NFSU2_TR(0x71d34b);
__builtin_memmove((R+8),(R+24),4);
}
B71d34d:{NFSU2_TR(0x71d34d);
{goto L71d352;}
}
B71d34f:L71d34f:{c.instructions+=1;NFSU2_TR(0x71d34f);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B71d352:L71d352:{c.instructions+=4;NFSU2_TR(0x71d352);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71d355:{NFSU2_TR(0x71d355);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B71d359:{NFSU2_TR(0x71d359);
u8 U[2];
w1(R+523,u8(0x0ull));
w2(U+0,u16(u32(r2(R+8))&u32(r2(R+8))));
w1(R+519,u8(s16(r2(U+0))<s16(u16(0x0ull))));
}
B71d35c:{NFSU2_TR(0x71d35c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L71d362;}}
}
B71d35e:L71d35e:{c.instructions+=2;NFSU2_TR(0x71d35e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B71d360:{NFSU2_TR(0x71d360);
{goto L71d36e;}
}
B71d362:L71d362:{c.instructions+=2;NFSU2_TR(0x71d362);
u8 U[4];
__builtin_memmove((U+0),(R+24),2);
w1(R+523,sborrow<u16>(r2(R+8),r2(U+0)));
w2(U+2,u16(u32(r2(R+8))-u32(r2(U+0))));
w1(R+519,u8(s16(r2(U+2))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B71d365:{NFSU2_TR(0x71d365);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L71d36b;}}
}
B71d367:L71d367:{c.instructions+=2;NFSU2_TR(0x71d367);
__builtin_memmove((R+8),(R+24),4);
}
B71d369:{NFSU2_TR(0x71d369);
{goto L71d36e;}
}
B71d36b:L71d36b:{c.instructions+=1;NFSU2_TR(0x71d36b);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B71d36e:L71d36e:{c.instructions+=4;NFSU2_TR(0x71d36e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71d371:{NFSU2_TR(0x71d371);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B71d375:{NFSU2_TR(0x71d375);
u8 U[2];
w1(R+523,u8(0x0ull));
w2(U+0,u16(u32(r2(R+8))&u32(r2(R+8))));
w1(R+519,u8(s16(r2(U+0))<s16(u16(0x0ull))));
}
B71d378:{NFSU2_TR(0x71d378);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L71d37e;}}
}
B71d37a:L71d37a:{c.instructions+=2;NFSU2_TR(0x71d37a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B71d37c:{NFSU2_TR(0x71d37c);
{goto L71d38a;}
}
B71d37e:L71d37e:{c.instructions+=2;NFSU2_TR(0x71d37e);
u8 U[4];
__builtin_memmove((U+0),(R+24),2);
w1(R+523,sborrow<u16>(r2(R+8),r2(U+0)));
w2(U+2,u16(u32(r2(R+8))-u32(r2(U+0))));
w1(R+519,u8(s16(r2(U+2))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B71d381:{NFSU2_TR(0x71d381);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L71d387;}}
}
B71d383:L71d383:{c.instructions+=2;NFSU2_TR(0x71d383);
__builtin_memmove((R+8),(R+24),4);
}
B71d385:{NFSU2_TR(0x71d385);
{goto L71d38a;}
}
B71d387:L71d387:{c.instructions+=1;NFSU2_TR(0x71d387);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B71d38a:L71d38a:{c.instructions+=5;NFSU2_TR(0x71d38a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71d38d:{NFSU2_TR(0x71d38d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B71d390:{NFSU2_TR(0x71d390);
w1(R+512,carry<u32>(r4(R+4),r4(R+28)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B71d392:{NFSU2_TR(0x71d392);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+12),u32(0x1ull)));
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B71d393:{NFSU2_TR(0x71d393);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71d2afu);}goto L71d2af;}}
}
B71d399:L71d399:{c.instructions+=5;NFSU2_TR(0x71d399);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71d39a:{NFSU2_TR(0x71d39a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71d39b:{NFSU2_TR(0x71d39b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71d39c:{NFSU2_TR(0x71d39c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71d39d:{NFSU2_TR(0x71d39d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71d39e:L71d39e:{c.instructions+=11;NFSU2_TR(0x71d39e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d39f:{NFSU2_TR(0x71d39f);
__builtin_memmove((R+20),(R+16),4);
}
B71d3a1:{NFSU2_TR(0x71d3a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71d3a4:{NFSU2_TR(0x71d3a4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d3a5:{NFSU2_TR(0x71d3a5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d3a6:{NFSU2_TR(0x71d3a6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d3a7:{NFSU2_TR(0x71d3a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71d3aa:{NFSU2_TR(0x71d3aa);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d3ac:{NFSU2_TR(0x71d3ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B71d3af:{NFSU2_TR(0x71d3af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71d3b0:{NFSU2_TR(0x71d3b0);
w4(R+8,u32(0x80ull));
}
B71d3b5:L71d3b5:{c.instructions+=28;NFSU2_TR(0x71d3b5);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((R+12),(U+0),2);
}
B71d3b8:{NFSU2_TR(0x71d3b8);
w2(R+12,u16(u32(r2(R+12))+u32(r2(R+8))));
}
B71d3bb:{NFSU2_TR(0x71d3bb);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71d3bf:{NFSU2_TR(0x71d3bf);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+12),(U+4),2);
}
B71d3c3:{NFSU2_TR(0x71d3c3);
w2(R+12,u16(u32(r2(R+12))+u32(r2(R+8))));
}
B71d3c6:{NFSU2_TR(0x71d3c6);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71d3ca:{NFSU2_TR(0x71d3ca);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+12),(U+4),2);
}
B71d3ce:{NFSU2_TR(0x71d3ce);
w2(R+12,u16(u32(r2(R+12))+u32(r2(R+8))));
}
B71d3d1:{NFSU2_TR(0x71d3d1);
u8 U[2];
__builtin_memmove((U+0),(R+12),2);
s2(u32(r4(R+0)),r2(U+0));
}
B71d3d4:{NFSU2_TR(0x71d3d4);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+12),(U+4),2);
}
B71d3d8:{NFSU2_TR(0x71d3d8);
w2(R+12,u16(u32(r2(R+12))+u32(r2(R+8))));
}
B71d3db:{NFSU2_TR(0x71d3db);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71d3df:{NFSU2_TR(0x71d3df);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+12),(U+4),2);
}
B71d3e3:{NFSU2_TR(0x71d3e3);
w2(R+12,u16(u32(r2(R+12))+u32(r2(R+8))));
}
B71d3e6:{NFSU2_TR(0x71d3e6);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71d3ea:{NFSU2_TR(0x71d3ea);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+12),(U+4),2);
}
B71d3ee:{NFSU2_TR(0x71d3ee);
w2(R+12,u16(u32(r2(R+12))+u32(r2(R+8))));
}
B71d3f1:{NFSU2_TR(0x71d3f1);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71d3f5:{NFSU2_TR(0x71d3f5);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+12),(U+4),2);
}
B71d3f9:{NFSU2_TR(0x71d3f9);
w2(R+12,u16(u32(r2(R+12))+u32(r2(R+8))));
}
B71d3fc:{NFSU2_TR(0x71d3fc);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71d400:{NFSU2_TR(0x71d400);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+12),(U+4),2);
}
B71d404:{NFSU2_TR(0x71d404);
w2(R+12,u16(u32(r2(R+12))+u32(r2(R+8))));
}
B71d407:{NFSU2_TR(0x71d407);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71d40b:{NFSU2_TR(0x71d40b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B71d40e:{NFSU2_TR(0x71d40e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B71d411:{NFSU2_TR(0x71d411);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B71d412:{NFSU2_TR(0x71d412);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71d3b5u);}goto L71d3b5;}}
}
B71d414:L71d414:{c.instructions+=5;NFSU2_TR(0x71d414);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d416:{NFSU2_TR(0x71d416);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B71d419:{NFSU2_TR(0x71d419);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d41a:{NFSU2_TR(0x71d41a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B71d41d:{NFSU2_TR(0x71d41d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71d422ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71d296u);}goto L71d296;}
}
B71d422:L71d422:{c.instructions+=6;NFSU2_TR(0x71d422);
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
B71d425:{NFSU2_TR(0x71d425);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71d426:{NFSU2_TR(0x71d426);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71d427:{NFSU2_TR(0x71d427);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71d428:{NFSU2_TR(0x71d428);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71d429:{NFSU2_TR(0x71d429);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71d42a:L71d42a:{c.instructions+=11;NFSU2_TR(0x71d42a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d42b:{NFSU2_TR(0x71d42b);
__builtin_memmove((R+20),(R+16),4);
}
B71d42d:{NFSU2_TR(0x71d42d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71d430:{NFSU2_TR(0x71d430);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71d433:{NFSU2_TR(0x71d433);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d434:{NFSU2_TR(0x71d434);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d435:{NFSU2_TR(0x71d435);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d436:{NFSU2_TR(0x71d436);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71d439:{NFSU2_TR(0x71d439);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d43b:{NFSU2_TR(0x71d43b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B71d43e:{NFSU2_TR(0x71d43e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71d43f:L71d43f:{c.instructions+=29;NFSU2_TR(0x71d43f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w2(R+12,u16(r1(U+0)));
}
B71d443:{NFSU2_TR(0x71d443);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w2(R+12,u16(u32(r2(R+12))+u32(r2(U+0))));
}
B71d446:{NFSU2_TR(0x71d446);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B71d449:{NFSU2_TR(0x71d449);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71d44d:{NFSU2_TR(0x71d44d);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+12,u16(r1(U+4)));
}
B71d452:{NFSU2_TR(0x71d452);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(R+12,u16(u32(r2(R+12))+u32(r2(U+4))));
}
B71d456:{NFSU2_TR(0x71d456);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71d45a:{NFSU2_TR(0x71d45a);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+12,u16(r1(U+4)));
}
B71d45f:{NFSU2_TR(0x71d45f);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(R+12,u16(u32(r2(R+12))+u32(r2(U+4))));
}
B71d463:{NFSU2_TR(0x71d463);
u8 U[2];
__builtin_memmove((U+0),(R+12),2);
s2(u32(r4(R+0)),r2(U+0));
}
B71d466:{NFSU2_TR(0x71d466);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+12,u16(r1(U+4)));
}
B71d46b:{NFSU2_TR(0x71d46b);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(R+12,u16(u32(r2(R+12))+u32(r2(U+4))));
}
B71d46f:{NFSU2_TR(0x71d46f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B71d472:{NFSU2_TR(0x71d472);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff2ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71d476:{NFSU2_TR(0x71d476);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+12,u16(r1(U+4)));
}
B71d47b:{NFSU2_TR(0x71d47b);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(R+12,u16(u32(r2(R+12))+u32(r2(U+4))));
}
B71d47f:{NFSU2_TR(0x71d47f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71d483:{NFSU2_TR(0x71d483);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+12,u16(r1(U+4)));
}
B71d488:{NFSU2_TR(0x71d488);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(R+12,u16(u32(r2(R+12))+u32(r2(U+4))));
}
B71d48c:{NFSU2_TR(0x71d48c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff6ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71d490:{NFSU2_TR(0x71d490);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+12,u16(r1(U+4)));
}
B71d495:{NFSU2_TR(0x71d495);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(R+12,u16(u32(r2(R+12))+u32(r2(U+4))));
}
B71d499:{NFSU2_TR(0x71d499);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71d49d:{NFSU2_TR(0x71d49d);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+12,u16(r1(U+4)));
}
B71d4a2:{NFSU2_TR(0x71d4a2);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(R+12,u16(u32(r2(R+12))+u32(r2(U+4))));
}
B71d4a6:{NFSU2_TR(0x71d4a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B71d4a9:{NFSU2_TR(0x71d4a9);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B71d4aa:{NFSU2_TR(0x71d4aa);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71d4ae:{NFSU2_TR(0x71d4ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71d43fu);}goto L71d43f;}}
}
B71d4b0:L71d4b0:{c.instructions+=5;NFSU2_TR(0x71d4b0);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d4b2:{NFSU2_TR(0x71d4b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B71d4b5:{NFSU2_TR(0x71d4b5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d4b6:{NFSU2_TR(0x71d4b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B71d4b9:{NFSU2_TR(0x71d4b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71d4beull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71d296u);}goto L71d296;}
}
B71d4be:L71d4be:{c.instructions+=6;NFSU2_TR(0x71d4be);
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
B71d4c1:{NFSU2_TR(0x71d4c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71d4c2:{NFSU2_TR(0x71d4c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71d4c3:{NFSU2_TR(0x71d4c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71d4c4:{NFSU2_TR(0x71d4c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71d4c5:{NFSU2_TR(0x71d4c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71d4c6:L71d4c6:{c.instructions+=12;NFSU2_TR(0x71d4c6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d4c7:{NFSU2_TR(0x71d4c7);
__builtin_memmove((R+20),(R+16),4);
}
B71d4c9:{NFSU2_TR(0x71d4c9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d4ca:{NFSU2_TR(0x71d4ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71d4cd:{NFSU2_TR(0x71d4cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71d4d0:{NFSU2_TR(0x71d4d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71d4d3:{NFSU2_TR(0x71d4d3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d4d4:{NFSU2_TR(0x71d4d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d4d5:{NFSU2_TR(0x71d4d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71d4d8:{NFSU2_TR(0x71d4d8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d4d9:{NFSU2_TR(0x71d4d9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B71d4dc:{NFSU2_TR(0x71d4dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B71d4e3:L71d4e3:{c.instructions+=54;NFSU2_TR(0x71d4e3);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+12,u32(r1(U+0)));
}
B71d4e6:{NFSU2_TR(0x71d4e6);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+28,u32(r1(U+0)));
}
B71d4e9:{NFSU2_TR(0x71d4e9);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B71d4eb:{NFSU2_TR(0x71d4eb);
w4(R+28,sar<u32>(r4(R+28),u64(u32(0x1ull))));
}
B71d4ed:{NFSU2_TR(0x71d4ed);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w2(R+28,u16(u32(r2(R+28))+u32(r2(U+0))));
}
B71d4f0:{NFSU2_TR(0x71d4f0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B71d4f3:{NFSU2_TR(0x71d4f3);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71d4f7:{NFSU2_TR(0x71d4f7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B71d4fb:{NFSU2_TR(0x71d4fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B71d4ff:{NFSU2_TR(0x71d4ff);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B71d501:{NFSU2_TR(0x71d501);
w4(R+28,sar<u32>(r4(R+28),u64(u32(0x1ull))));
}
B71d503:{NFSU2_TR(0x71d503);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(R+28,u16(u32(r2(R+28))+u32(r2(U+4))));
}
B71d507:{NFSU2_TR(0x71d507);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71d50b:{NFSU2_TR(0x71d50b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B71d50f:{NFSU2_TR(0x71d50f);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B71d513:{NFSU2_TR(0x71d513);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B71d515:{NFSU2_TR(0x71d515);
w4(R+28,sar<u32>(r4(R+28),u64(u32(0x1ull))));
}
B71d517:{NFSU2_TR(0x71d517);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(R+28,u16(u32(r2(R+28))+u32(r2(U+4))));
}
B71d51b:{NFSU2_TR(0x71d51b);
u8 U[2];
__builtin_memmove((U+0),(R+28),2);
s2(u32(r4(R+0)),r2(U+0));
}
B71d51e:{NFSU2_TR(0x71d51e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B71d522:{NFSU2_TR(0x71d522);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B71d526:{NFSU2_TR(0x71d526);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B71d528:{NFSU2_TR(0x71d528);
w4(R+28,sar<u32>(r4(R+28),u64(u32(0x1ull))));
}
B71d52a:{NFSU2_TR(0x71d52a);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(R+28,u16(u32(r2(R+28))+u32(r2(U+4))));
}
B71d52e:{NFSU2_TR(0x71d52e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B71d531:{NFSU2_TR(0x71d531);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff2ull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71d535:{NFSU2_TR(0x71d535);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B71d539:{NFSU2_TR(0x71d539);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B71d53d:{NFSU2_TR(0x71d53d);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B71d53f:{NFSU2_TR(0x71d53f);
w4(R+28,sar<u32>(r4(R+28),u64(u32(0x1ull))));
}
B71d541:{NFSU2_TR(0x71d541);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(R+28,u16(u32(r2(R+28))+u32(r2(U+4))));
}
B71d545:{NFSU2_TR(0x71d545);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71d549:{NFSU2_TR(0x71d549);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B71d54d:{NFSU2_TR(0x71d54d);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B71d551:{NFSU2_TR(0x71d551);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B71d553:{NFSU2_TR(0x71d553);
w4(R+28,sar<u32>(r4(R+28),u64(u32(0x1ull))));
}
B71d555:{NFSU2_TR(0x71d555);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(R+28,u16(u32(r2(R+28))+u32(r2(U+4))));
}
B71d559:{NFSU2_TR(0x71d559);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff6ull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71d55d:{NFSU2_TR(0x71d55d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B71d561:{NFSU2_TR(0x71d561);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B71d565:{NFSU2_TR(0x71d565);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B71d567:{NFSU2_TR(0x71d567);
w4(R+28,sar<u32>(r4(R+28),u64(u32(0x1ull))));
}
B71d569:{NFSU2_TR(0x71d569);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(R+28,u16(u32(r2(R+28))+u32(r2(U+4))));
}
B71d56d:{NFSU2_TR(0x71d56d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71d571:{NFSU2_TR(0x71d571);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B71d575:{NFSU2_TR(0x71d575);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B71d579:{NFSU2_TR(0x71d579);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B71d57c:{NFSU2_TR(0x71d57c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B71d57f:{NFSU2_TR(0x71d57f);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B71d581:{NFSU2_TR(0x71d581);
w4(R+28,sar<u32>(r4(R+28),u64(u32(0x1ull))));
}
B71d583:{NFSU2_TR(0x71d583);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(R+28,u16(u32(r2(R+28))+u32(r2(U+4))));
}
B71d587:{NFSU2_TR(0x71d587);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B71d58a:{NFSU2_TR(0x71d58a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71d58e:{NFSU2_TR(0x71d58e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71d4e3u);}goto L71d4e3;}}
}
B71d594:L71d594:{c.instructions+=5;NFSU2_TR(0x71d594);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d596:{NFSU2_TR(0x71d596);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B71d599:{NFSU2_TR(0x71d599);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B71d59c:{NFSU2_TR(0x71d59c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B71d59f:{NFSU2_TR(0x71d59f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71d5a4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71d296u);}goto L71d296;}
}
B71d5a4:L71d5a4:{c.instructions+=6;NFSU2_TR(0x71d5a4);
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
B71d5a7:{NFSU2_TR(0x71d5a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71d5a8:{NFSU2_TR(0x71d5a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71d5a9:{NFSU2_TR(0x71d5a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71d5aa:{NFSU2_TR(0x71d5aa);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B71d5ab:{NFSU2_TR(0x71d5ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71d5ac:L71d5ac:{c.instructions+=9;NFSU2_TR(0x71d5ac);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d5ad:{NFSU2_TR(0x71d5ad);
__builtin_memmove((R+20),(R+16),4);
}
B71d5af:{NFSU2_TR(0x71d5af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71d5b2:{NFSU2_TR(0x71d5b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71d5b5:{NFSU2_TR(0x71d5b5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d5b6:{NFSU2_TR(0x71d5b6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d5b7:{NFSU2_TR(0x71d5b7);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d5b9:{NFSU2_TR(0x71d5b9);
__builtin_memmove((R+24),(R+0),4);
}
B71d5bb:{NFSU2_TR(0x71d5bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B71d5bc:L71d5bc:{c.instructions+=20;NFSU2_TR(0x71d5bc);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((R+28),(U+0),2);
}
B71d5bf:{NFSU2_TR(0x71d5bf);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w2(U+0,u16(u32(r2(U+0))+u32(r2(R+28))));
s2(u32(r4(R+0)),r2(U+0));
}
B71d5c2:{NFSU2_TR(0x71d5c2);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B71d5c6:{NFSU2_TR(0x71d5c6);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(r2(R+28))));
s2(u32(r4(U+0)),r2(U+4));
}
B71d5ca:{NFSU2_TR(0x71d5ca);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B71d5ce:{NFSU2_TR(0x71d5ce);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(r2(R+28))));
s2(u32(r4(U+0)),r2(U+4));
}
B71d5d2:{NFSU2_TR(0x71d5d2);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B71d5d6:{NFSU2_TR(0x71d5d6);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(r2(R+28))));
s2(u32(r4(U+0)),r2(U+4));
}
B71d5da:{NFSU2_TR(0x71d5da);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B71d5de:{NFSU2_TR(0x71d5de);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(r2(R+28))));
s2(u32(r4(U+0)),r2(U+4));
}
B71d5e2:{NFSU2_TR(0x71d5e2);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B71d5e6:{NFSU2_TR(0x71d5e6);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(r2(R+28))));
s2(u32(r4(U+0)),r2(U+4));
}
B71d5ea:{NFSU2_TR(0x71d5ea);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B71d5ee:{NFSU2_TR(0x71d5ee);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(r2(R+28))));
s2(u32(r4(U+0)),r2(U+4));
}
B71d5f2:{NFSU2_TR(0x71d5f2);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B71d5f6:{NFSU2_TR(0x71d5f6);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(r2(R+28))));
s2(u32(r4(U+0)),r2(U+4));
}
B71d5fa:{NFSU2_TR(0x71d5fa);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B71d5fd:{NFSU2_TR(0x71d5fd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B71d600:{NFSU2_TR(0x71d600);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B71d601:{NFSU2_TR(0x71d601);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71d5bcu);}goto L71d5bc;}}
}
B71d603:L71d603:{c.instructions+=5;NFSU2_TR(0x71d603);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d605:{NFSU2_TR(0x71d605);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B71d608:{NFSU2_TR(0x71d608);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d609:{NFSU2_TR(0x71d609);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B71d60c:{NFSU2_TR(0x71d60c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71d611ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71d296u);}goto L71d296;}
}
B71d611:L71d611:{c.instructions+=5;NFSU2_TR(0x71d611);
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
B71d614:{NFSU2_TR(0x71d614);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71d615:{NFSU2_TR(0x71d615);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71d616:{NFSU2_TR(0x71d616);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71d617:{NFSU2_TR(0x71d617);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71d618:L71d618:{c.instructions+=267;NFSU2_TR(0x71d618);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d619:{NFSU2_TR(0x71d619);
__builtin_memmove((R+20),(R+16),4);
}
B71d61b:{NFSU2_TR(0x71d61b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71d61e:{NFSU2_TR(0x71d61e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71d621:{NFSU2_TR(0x71d621);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B71d624:{NFSU2_TR(0x71d624);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d625:{NFSU2_TR(0x71d625);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+24,u32(s32(s16(r2(U+0)))));
}
B71d628:{NFSU2_TR(0x71d628);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d62b:{NFSU2_TR(0x71d62b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71d62e:{NFSU2_TR(0x71d62e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B71d630:{NFSU2_TR(0x71d630);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d634:{NFSU2_TR(0x71d634);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71d635:{NFSU2_TR(0x71d635);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d639:{NFSU2_TR(0x71d639);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d63c:{NFSU2_TR(0x71d63c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d63f:{NFSU2_TR(0x71d63f);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d643:{NFSU2_TR(0x71d643);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d647:{NFSU2_TR(0x71d647);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d64a:{NFSU2_TR(0x71d64a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d64d:{NFSU2_TR(0x71d64d);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d651:{NFSU2_TR(0x71d651);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d655:{NFSU2_TR(0x71d655);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d658:{NFSU2_TR(0x71d658);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d65b:{NFSU2_TR(0x71d65b);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d65f:{NFSU2_TR(0x71d65f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d663:{NFSU2_TR(0x71d663);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d666:{NFSU2_TR(0x71d666);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d669:{NFSU2_TR(0x71d669);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d66d:{NFSU2_TR(0x71d66d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d671:{NFSU2_TR(0x71d671);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d674:{NFSU2_TR(0x71d674);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d677:{NFSU2_TR(0x71d677);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d67b:{NFSU2_TR(0x71d67b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d67f:{NFSU2_TR(0x71d67f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d682:{NFSU2_TR(0x71d682);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d685:{NFSU2_TR(0x71d685);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d689:{NFSU2_TR(0x71d689);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d68d:{NFSU2_TR(0x71d68d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d690:{NFSU2_TR(0x71d690);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d693:{NFSU2_TR(0x71d693);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d697:{NFSU2_TR(0x71d697);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d69b:{NFSU2_TR(0x71d69b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d69e:{NFSU2_TR(0x71d69e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d6a1:{NFSU2_TR(0x71d6a1);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d6a5:{NFSU2_TR(0x71d6a5);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d6a9:{NFSU2_TR(0x71d6a9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d6ac:{NFSU2_TR(0x71d6ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d6af:{NFSU2_TR(0x71d6af);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d6b3:{NFSU2_TR(0x71d6b3);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d6b7:{NFSU2_TR(0x71d6b7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d6ba:{NFSU2_TR(0x71d6ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d6c0:{NFSU2_TR(0x71d6c0);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d6c4:{NFSU2_TR(0x71d6c4);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d6c8:{NFSU2_TR(0x71d6c8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d6cb:{NFSU2_TR(0x71d6cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d6ce:{NFSU2_TR(0x71d6ce);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d6d2:{NFSU2_TR(0x71d6d2);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d6d6:{NFSU2_TR(0x71d6d6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d6d9:{NFSU2_TR(0x71d6d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d6dc:{NFSU2_TR(0x71d6dc);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d6e0:{NFSU2_TR(0x71d6e0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d6e4:{NFSU2_TR(0x71d6e4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d6e7:{NFSU2_TR(0x71d6e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d6ea:{NFSU2_TR(0x71d6ea);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d6ee:{NFSU2_TR(0x71d6ee);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d6f2:{NFSU2_TR(0x71d6f2);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d6f5:{NFSU2_TR(0x71d6f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d6f8:{NFSU2_TR(0x71d6f8);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d6fc:{NFSU2_TR(0x71d6fc);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d700:{NFSU2_TR(0x71d700);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d703:{NFSU2_TR(0x71d703);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d706:{NFSU2_TR(0x71d706);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d70a:{NFSU2_TR(0x71d70a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d70e:{NFSU2_TR(0x71d70e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d711:{NFSU2_TR(0x71d711);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d714:{NFSU2_TR(0x71d714);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d718:{NFSU2_TR(0x71d718);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d71c:{NFSU2_TR(0x71d71c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d71f:{NFSU2_TR(0x71d71f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d722:{NFSU2_TR(0x71d722);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d726:{NFSU2_TR(0x71d726);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d72a:{NFSU2_TR(0x71d72a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d72d:{NFSU2_TR(0x71d72d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d730:{NFSU2_TR(0x71d730);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x26ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d734:{NFSU2_TR(0x71d734);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x26ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d738:{NFSU2_TR(0x71d738);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d73b:{NFSU2_TR(0x71d73b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d741:{NFSU2_TR(0x71d741);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d745:{NFSU2_TR(0x71d745);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d749:{NFSU2_TR(0x71d749);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d74c:{NFSU2_TR(0x71d74c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d752:{NFSU2_TR(0x71d752);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d756:{NFSU2_TR(0x71d756);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d75a:{NFSU2_TR(0x71d75a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d75d:{NFSU2_TR(0x71d75d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d763:{NFSU2_TR(0x71d763);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d767:{NFSU2_TR(0x71d767);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d76b:{NFSU2_TR(0x71d76b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d76e:{NFSU2_TR(0x71d76e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d774:{NFSU2_TR(0x71d774);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d778:{NFSU2_TR(0x71d778);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d77c:{NFSU2_TR(0x71d77c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d77f:{NFSU2_TR(0x71d77f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d785:{NFSU2_TR(0x71d785);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d789:{NFSU2_TR(0x71d789);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d78d:{NFSU2_TR(0x71d78d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d790:{NFSU2_TR(0x71d790);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d793:{NFSU2_TR(0x71d793);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x32ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d797:{NFSU2_TR(0x71d797);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x32ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d79b:{NFSU2_TR(0x71d79b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d79e:{NFSU2_TR(0x71d79e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d7a1:{NFSU2_TR(0x71d7a1);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d7a5:{NFSU2_TR(0x71d7a5);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d7a9:{NFSU2_TR(0x71d7a9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d7ac:{NFSU2_TR(0x71d7ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d7af:{NFSU2_TR(0x71d7af);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d7b3:{NFSU2_TR(0x71d7b3);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d7b7:{NFSU2_TR(0x71d7b7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d7ba:{NFSU2_TR(0x71d7ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d7bd:{NFSU2_TR(0x71d7bd);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d7c1:{NFSU2_TR(0x71d7c1);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d7c5:{NFSU2_TR(0x71d7c5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d7c8:{NFSU2_TR(0x71d7c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d7cb:{NFSU2_TR(0x71d7cb);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d7cf:{NFSU2_TR(0x71d7cf);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d7d3:{NFSU2_TR(0x71d7d3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d7d6:{NFSU2_TR(0x71d7d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d7d9:{NFSU2_TR(0x71d7d9);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d7dd:{NFSU2_TR(0x71d7dd);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d7e1:{NFSU2_TR(0x71d7e1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d7e4:{NFSU2_TR(0x71d7e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d7e7:{NFSU2_TR(0x71d7e7);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d7eb:{NFSU2_TR(0x71d7eb);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d7ef:{NFSU2_TR(0x71d7ef);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d7f2:{NFSU2_TR(0x71d7f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d7f5:{NFSU2_TR(0x71d7f5);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d7f9:{NFSU2_TR(0x71d7f9);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d7fd:{NFSU2_TR(0x71d7fd);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d800:{NFSU2_TR(0x71d800);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d806:{NFSU2_TR(0x71d806);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d80a:{NFSU2_TR(0x71d80a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d80e:{NFSU2_TR(0x71d80e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d811:{NFSU2_TR(0x71d811);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d817:{NFSU2_TR(0x71d817);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d81b:{NFSU2_TR(0x71d81b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d81f:{NFSU2_TR(0x71d81f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d822:{NFSU2_TR(0x71d822);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d828:{NFSU2_TR(0x71d828);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x46ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d82c:{NFSU2_TR(0x71d82c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x46ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d830:{NFSU2_TR(0x71d830);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d833:{NFSU2_TR(0x71d833);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d839:{NFSU2_TR(0x71d839);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d83d:{NFSU2_TR(0x71d83d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d841:{NFSU2_TR(0x71d841);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d844:{NFSU2_TR(0x71d844);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d84a:{NFSU2_TR(0x71d84a);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d84e:{NFSU2_TR(0x71d84e);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d852:{NFSU2_TR(0x71d852);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d855:{NFSU2_TR(0x71d855);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d85b:{NFSU2_TR(0x71d85b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d85f:{NFSU2_TR(0x71d85f);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d863:{NFSU2_TR(0x71d863);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d866:{NFSU2_TR(0x71d866);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d86c:{NFSU2_TR(0x71d86c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d870:{NFSU2_TR(0x71d870);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d874:{NFSU2_TR(0x71d874);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d877:{NFSU2_TR(0x71d877);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d87d:{NFSU2_TR(0x71d87d);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d881:{NFSU2_TR(0x71d881);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d885:{NFSU2_TR(0x71d885);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d888:{NFSU2_TR(0x71d888);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d88b:{NFSU2_TR(0x71d88b);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x52ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d88f:{NFSU2_TR(0x71d88f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x52ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d893:{NFSU2_TR(0x71d893);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d896:{NFSU2_TR(0x71d896);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d899:{NFSU2_TR(0x71d899);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d89d:{NFSU2_TR(0x71d89d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d8a1:{NFSU2_TR(0x71d8a1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d8a4:{NFSU2_TR(0x71d8a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d8a7:{NFSU2_TR(0x71d8a7);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d8ab:{NFSU2_TR(0x71d8ab);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d8af:{NFSU2_TR(0x71d8af);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d8b2:{NFSU2_TR(0x71d8b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d8b5:{NFSU2_TR(0x71d8b5);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d8b9:{NFSU2_TR(0x71d8b9);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d8bd:{NFSU2_TR(0x71d8bd);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d8c0:{NFSU2_TR(0x71d8c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d8c3:{NFSU2_TR(0x71d8c3);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d8c7:{NFSU2_TR(0x71d8c7);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d8cb:{NFSU2_TR(0x71d8cb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d8ce:{NFSU2_TR(0x71d8ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d8d4:{NFSU2_TR(0x71d8d4);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d8d8:{NFSU2_TR(0x71d8d8);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d8dc:{NFSU2_TR(0x71d8dc);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d8df:{NFSU2_TR(0x71d8df);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d8e5:{NFSU2_TR(0x71d8e5);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d8e9:{NFSU2_TR(0x71d8e9);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d8ed:{NFSU2_TR(0x71d8ed);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d8f0:{NFSU2_TR(0x71d8f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d8f6:{NFSU2_TR(0x71d8f6);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d8fa:{NFSU2_TR(0x71d8fa);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d8fe:{NFSU2_TR(0x71d8fe);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d901:{NFSU2_TR(0x71d901);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d907:{NFSU2_TR(0x71d907);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x62ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d90b:{NFSU2_TR(0x71d90b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x62ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d90f:{NFSU2_TR(0x71d90f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d912:{NFSU2_TR(0x71d912);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d918:{NFSU2_TR(0x71d918);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d91c:{NFSU2_TR(0x71d91c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d920:{NFSU2_TR(0x71d920);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d923:{NFSU2_TR(0x71d923);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d929:{NFSU2_TR(0x71d929);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x66ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d92d:{NFSU2_TR(0x71d92d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x66ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d931:{NFSU2_TR(0x71d931);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d934:{NFSU2_TR(0x71d934);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d93a:{NFSU2_TR(0x71d93a);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d93e:{NFSU2_TR(0x71d93e);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d942:{NFSU2_TR(0x71d942);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d945:{NFSU2_TR(0x71d945);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d94b:{NFSU2_TR(0x71d94b);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d94f:{NFSU2_TR(0x71d94f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d953:{NFSU2_TR(0x71d953);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d956:{NFSU2_TR(0x71d956);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d959:{NFSU2_TR(0x71d959);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d95d:{NFSU2_TR(0x71d95d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d961:{NFSU2_TR(0x71d961);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d964:{NFSU2_TR(0x71d964);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d96a:{NFSU2_TR(0x71d96a);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d96e:{NFSU2_TR(0x71d96e);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d972:{NFSU2_TR(0x71d972);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d975:{NFSU2_TR(0x71d975);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d97b:{NFSU2_TR(0x71d97b);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d97f:{NFSU2_TR(0x71d97f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d983:{NFSU2_TR(0x71d983);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d986:{NFSU2_TR(0x71d986);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d98c:{NFSU2_TR(0x71d98c);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x72ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d990:{NFSU2_TR(0x71d990);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x72ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d994:{NFSU2_TR(0x71d994);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d997:{NFSU2_TR(0x71d997);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d99d:{NFSU2_TR(0x71d99d);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d9a1:{NFSU2_TR(0x71d9a1);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d9a5:{NFSU2_TR(0x71d9a5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d9a8:{NFSU2_TR(0x71d9a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d9ae:{NFSU2_TR(0x71d9ae);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x76ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d9b2:{NFSU2_TR(0x71d9b2);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x76ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d9b6:{NFSU2_TR(0x71d9b6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d9b9:{NFSU2_TR(0x71d9b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d9bf:{NFSU2_TR(0x71d9bf);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d9c3:{NFSU2_TR(0x71d9c3);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d9c7:{NFSU2_TR(0x71d9c7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d9ca:{NFSU2_TR(0x71d9ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d9d0:{NFSU2_TR(0x71d9d0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d9d4:{NFSU2_TR(0x71d9d4);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d9d8:{NFSU2_TR(0x71d9d8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d9db:{NFSU2_TR(0x71d9db);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d9e1:{NFSU2_TR(0x71d9e1);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71d9e5:{NFSU2_TR(0x71d9e5);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71d9e9:{NFSU2_TR(0x71d9e9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71d9ec:{NFSU2_TR(0x71d9ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71d9f2:{NFSU2_TR(0x71d9f2);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B71d9f6:{NFSU2_TR(0x71d9f6);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B71d9fa:{NFSU2_TR(0x71d9fa);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(r4(R+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B71d9fd:{NFSU2_TR(0x71d9fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71d9fe:{NFSU2_TR(0x71d9fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71da04:{NFSU2_TR(0x71da04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71da05:{NFSU2_TR(0x71da05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71da06:{NFSU2_TR(0x71da06);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71da07:L71da07:{c.instructions+=8;NFSU2_TR(0x71da07);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71da08:{NFSU2_TR(0x71da08);
__builtin_memmove((R+20),(R+16),4);
}
B71da0a:{NFSU2_TR(0x71da0a);
u8 U[6];
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x120ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B71da10:{NFSU2_TR(0x71da10);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B71da16:{NFSU2_TR(0x71da16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71da17:{NFSU2_TR(0x71da17);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B71da1a:{NFSU2_TR(0x71da1a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B71da1d:{NFSU2_TR(0x71da1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71da22ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71d618u);}goto L71d618;}
}
B71da22:L71da22:{c.instructions+=6;NFSU2_TR(0x71da22);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B71da25:{NFSU2_TR(0x71da25);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71da26:{NFSU2_TR(0x71da26);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71da27:{NFSU2_TR(0x71da27);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B71da2d:{NFSU2_TR(0x71da2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B71da34:{NFSU2_TR(0x71da34);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71da35:L71da35:{c.instructions+=20;NFSU2_TR(0x71da35);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71da38:{NFSU2_TR(0x71da38);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71da3b:{NFSU2_TR(0x71da3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71da3e:{NFSU2_TR(0x71da3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B71da40:{NFSU2_TR(0x71da40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71da43:{NFSU2_TR(0x71da43);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71da46:{NFSU2_TR(0x71da46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71da49:{NFSU2_TR(0x71da49);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71da4c:{NFSU2_TR(0x71da4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71da4f:{NFSU2_TR(0x71da4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71da52:{NFSU2_TR(0x71da52);
__builtin_memmove((R+12),(R+8),4);
}
B71da54:{NFSU2_TR(0x71da54);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+4))));
}
B71da56:{NFSU2_TR(0x71da56);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+28))));
}
B71da58:{NFSU2_TR(0x71da58);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))|u32(r4(U+4))));
}
B71da5b:{NFSU2_TR(0x71da5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71da5e:{NFSU2_TR(0x71da5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))|u32(r4(U+4))));
}
B71da61:{NFSU2_TR(0x71da61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))|u32(r4(U+4))));
}
B71da64:{NFSU2_TR(0x71da64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))|u32(r4(U+4))));
}
B71da67:{NFSU2_TR(0x71da67);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+24))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B71da69:{NFSU2_TR(0x71da69);
if(r1(R+518)){{goto L71dbc4;}}
}
B71da6f:L71da6f:{c.instructions+=107;NFSU2_TR(0x71da6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71da72:{NFSU2_TR(0x71da72);
__builtin_memmove((R+4),(R+24),4);
}
B71da74:{NFSU2_TR(0x71da74);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x31f1ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B71da7a:{NFSU2_TR(0x71da7a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x31f1ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71da80:{NFSU2_TR(0x71da80);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B71da83:{NFSU2_TR(0x71da83);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0xfb15ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B71da89:{NFSU2_TR(0x71da89);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B71da8c:{NFSU2_TR(0x71da8c);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B71da8e:{NFSU2_TR(0x71da8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71da91:{NFSU2_TR(0x71da91);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0xfb15ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B71da97:{NFSU2_TR(0x71da97);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B71da9a:{NFSU2_TR(0x71da9a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B71da9d:{NFSU2_TR(0x71da9d);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+12))));
}
B71da9f:{NFSU2_TR(0x71da9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71daa2:{NFSU2_TR(0x71daa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71daa5:{NFSU2_TR(0x71daa5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0xd4dbull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71daab:{NFSU2_TR(0x71daab);
__builtin_memmove((R+12),(R+28),4);
}
B71daad:{NFSU2_TR(0x71daad);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0xd4dbull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B71dab3:{NFSU2_TR(0x71dab3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x8e3aull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B71dab9:{NFSU2_TR(0x71dab9);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B71dabc:{NFSU2_TR(0x71dabc);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B71dabf:{NFSU2_TR(0x71dabf);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B71dac1:{NFSU2_TR(0x71dac1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71dac4:{NFSU2_TR(0x71dac4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x8e3aull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B71daca:{NFSU2_TR(0x71daca);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B71dacd:{NFSU2_TR(0x71dacd);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B71dad0:{NFSU2_TR(0x71dad0);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+12))));
}
B71dad2:{NFSU2_TR(0x71dad2);
__builtin_memmove((R+12),(R+28),4);
}
B71dad4:{NFSU2_TR(0x71dad4);
__builtin_memmove((R+28),(R+4),4);
}
B71dad6:{NFSU2_TR(0x71dad6);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B71dad8:{NFSU2_TR(0x71dad8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0xb505ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B71dade:{NFSU2_TR(0x71dade);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B71dae0:{NFSU2_TR(0x71dae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71dae3:{NFSU2_TR(0x71dae3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71dae6:{NFSU2_TR(0x71dae6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71dae9:{NFSU2_TR(0x71dae9);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B71daec:{NFSU2_TR(0x71daec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71daef:{NFSU2_TR(0x71daef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71daf2:{NFSU2_TR(0x71daf2);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+12))));
}
B71daf4:{NFSU2_TR(0x71daf4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B71daf6:{NFSU2_TR(0x71daf6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0xb505ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B71dafc:{NFSU2_TR(0x71dafc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B71daff:{NFSU2_TR(0x71daff);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B71db01:{NFSU2_TR(0x71db01);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0xb505ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B71db07:{NFSU2_TR(0x71db07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71db0a:{NFSU2_TR(0x71db0a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0xb505ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B71db10:{NFSU2_TR(0x71db10);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B71db13:{NFSU2_TR(0x71db13);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x61f8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71db19:{NFSU2_TR(0x71db19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71db1c:{NFSU2_TR(0x71db1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71db1f:{NFSU2_TR(0x71db1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71db22:{NFSU2_TR(0x71db22);
__builtin_memmove((R+12),(R+8),4);
}
B71db24:{NFSU2_TR(0x71db24);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x61f8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B71db2a:{NFSU2_TR(0x71db2a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0xec83ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B71db30:{NFSU2_TR(0x71db30);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B71db33:{NFSU2_TR(0x71db33);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B71db36:{NFSU2_TR(0x71db36);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+24))));
}
B71db38:{NFSU2_TR(0x71db38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71db3b:{NFSU2_TR(0x71db3b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0xec83ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71db41:{NFSU2_TR(0x71db41);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B71db44:{NFSU2_TR(0x71db44);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B71db47:{NFSU2_TR(0x71db47);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B71db49:{NFSU2_TR(0x71db49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71db4c:{NFSU2_TR(0x71db4c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B71db4f:{NFSU2_TR(0x71db4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71db52:{NFSU2_TR(0x71db52);
__builtin_memmove((R+8),(R+4),4);
}
B71db54:{NFSU2_TR(0x71db54);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+12))));
}
B71db56:{NFSU2_TR(0x71db56);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B71db58:{NFSU2_TR(0x71db58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71db5b:{NFSU2_TR(0x71db5b);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B71db5d:{NFSU2_TR(0x71db5d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B71db60:{NFSU2_TR(0x71db60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71db63:{NFSU2_TR(0x71db63);
__builtin_memmove((R+24),(R+28),4);
}
B71db65:{NFSU2_TR(0x71db65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))-u32(r4(U+4))));
}
B71db68:{NFSU2_TR(0x71db68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71db6b:{NFSU2_TR(0x71db6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71db6e:{NFSU2_TR(0x71db6e);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+12))));
}
B71db70:{NFSU2_TR(0x71db70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71db73:{NFSU2_TR(0x71db73);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B71db75:{NFSU2_TR(0x71db75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71db78:{NFSU2_TR(0x71db78);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B71db7a:{NFSU2_TR(0x71db7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B71db7d:{NFSU2_TR(0x71db7d);
w4(R+12,u32(s32(s16(r2(R+12)))));
}
B71db80:{NFSU2_TR(0x71db80);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B71db83:{NFSU2_TR(0x71db83);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71db86:{NFSU2_TR(0x71db86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71db89:{NFSU2_TR(0x71db89);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71db8c:{NFSU2_TR(0x71db8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B71db8f:{NFSU2_TR(0x71db8f);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B71db91:{NFSU2_TR(0x71db91);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B71db94:{NFSU2_TR(0x71db94);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71db97:{NFSU2_TR(0x71db97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71db9a:{NFSU2_TR(0x71db9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B71db9d:{NFSU2_TR(0x71db9d);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B71db9f:{NFSU2_TR(0x71db9f);
w4(R+4,u32(s32(s16(r2(R+8)))));
}
B71dba2:{NFSU2_TR(0x71dba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71dba5:{NFSU2_TR(0x71dba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71dba8:{NFSU2_TR(0x71dba8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B71dbab:{NFSU2_TR(0x71dbab);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B71dbad:{NFSU2_TR(0x71dbad);
w4(R+12,u32(s32(s16(r2(R+12)))));
}
B71dbb0:{NFSU2_TR(0x71dbb0);
w4(R+28,u32(s32(s16(r2(R+28)))));
}
B71dbb3:{NFSU2_TR(0x71dbb3);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B71dbb6:{NFSU2_TR(0x71dbb6);
w4(R+4,u32(s32(s16(r2(R+24)))));
}
B71dbb9:{NFSU2_TR(0x71dbb9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B71dbbb:{NFSU2_TR(0x71dbbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71dbbe:{NFSU2_TR(0x71dbbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71dbc1:{NFSU2_TR(0x71dbc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71dbc4:L71dbc4:{c.instructions+=3;NFSU2_TR(0x71dbc4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B71dbc7:{NFSU2_TR(0x71dbc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B71dbca:{NFSU2_TR(0x71dbca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71da35u);}goto L71da35;}}
}
B71dbd0:L71dbd0:{c.instructions+=5;NFSU2_TR(0x71dbd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71dbd3:{NFSU2_TR(0x71dbd3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B71dbd6:{NFSU2_TR(0x71dbd6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+8),(U+0),4);
}
B71dbdc:{NFSU2_TR(0x71dbdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B71dbe3:{NFSU2_TR(0x71dbe3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B71dbe5:L71dbe5:{c.instructions+=11;NFSU2_TR(0x71dbe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71dbeb:{NFSU2_TR(0x71dbeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))|u32(r4(U+4))));
}
B71dbf1:{NFSU2_TR(0x71dbf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71dbf4:{NFSU2_TR(0x71dbf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))|u32(r4(U+4))));
}
B71dbfa:{NFSU2_TR(0x71dbfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71dbfd:{NFSU2_TR(0x71dbfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))|u32(r4(U+4))));
}
B71dc00:{NFSU2_TR(0x71dc00);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))|u32(r4(U+4))));
}
B71dc03:{NFSU2_TR(0x71dc03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(R+28,u32(u32(r4(R+28))|u32(r4(U+0))));
}
B71dc05:{NFSU2_TR(0x71dc05);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+24))));
}
B71dc07:{NFSU2_TR(0x71dc07);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))|u32(r4(U+4))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B71dc0a:{NFSU2_TR(0x71dc0a);
if(r1(R+518)){{goto L71dd95;}}
}
B71dc10:L71dc10:{c.instructions+=116;NFSU2_TR(0x71dc10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B71dc12:{NFSU2_TR(0x71dc12);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71dc18:{NFSU2_TR(0x71dc18);
__builtin_memmove((R+4),(R+28),4);
}
B71dc1a:{NFSU2_TR(0x71dc1a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0xfb15ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B71dc20:{NFSU2_TR(0x71dc20);
__builtin_memmove((R+12),(R+24),4);
}
B71dc22:{NFSU2_TR(0x71dc22);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x31f1ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71dc28:{NFSU2_TR(0x71dc28);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x31f1ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B71dc2e:{NFSU2_TR(0x71dc2e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0xfb15ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B71dc34:{NFSU2_TR(0x71dc34);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B71dc37:{NFSU2_TR(0x71dc37);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B71dc3a:{NFSU2_TR(0x71dc3a);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+28))));
}
B71dc3c:{NFSU2_TR(0x71dc3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71dc42:{NFSU2_TR(0x71dc42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71dc45:{NFSU2_TR(0x71dc45);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71dc48:{NFSU2_TR(0x71dc48);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B71dc4b:{NFSU2_TR(0x71dc4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71dc4e:{NFSU2_TR(0x71dc4e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0xd4dbull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71dc54:{NFSU2_TR(0x71dc54);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B71dc57:{NFSU2_TR(0x71dc57);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B71dc59:{NFSU2_TR(0x71dc59);
__builtin_memmove((R+12),(R+28),4);
}
B71dc5b:{NFSU2_TR(0x71dc5b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0xd4dbull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B71dc61:{NFSU2_TR(0x71dc61);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x8e3aull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B71dc67:{NFSU2_TR(0x71dc67);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B71dc6a:{NFSU2_TR(0x71dc6a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B71dc6d:{NFSU2_TR(0x71dc6d);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B71dc6f:{NFSU2_TR(0x71dc6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71dc72:{NFSU2_TR(0x71dc72);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x8e3aull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B71dc78:{NFSU2_TR(0x71dc78);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B71dc7b:{NFSU2_TR(0x71dc7b);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B71dc7e:{NFSU2_TR(0x71dc7e);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+12))));
}
B71dc80:{NFSU2_TR(0x71dc80);
__builtin_memmove((R+12),(R+4),4);
}
B71dc82:{NFSU2_TR(0x71dc82);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+24))));
}
B71dc84:{NFSU2_TR(0x71dc84);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0xb505ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B71dc8a:{NFSU2_TR(0x71dc8a);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B71dc8c:{NFSU2_TR(0x71dc8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71dc8f:{NFSU2_TR(0x71dc8f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B71dc92:{NFSU2_TR(0x71dc92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71dc95:{NFSU2_TR(0x71dc95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71dc98:{NFSU2_TR(0x71dc98);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B71dc9a:{NFSU2_TR(0x71dc9a);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B71dc9c:{NFSU2_TR(0x71dc9c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0xb505ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B71dca2:{NFSU2_TR(0x71dca2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71dca5:{NFSU2_TR(0x71dca5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71dca8:{NFSU2_TR(0x71dca8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71dcab:{NFSU2_TR(0x71dcab);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71dcae:{NFSU2_TR(0x71dcae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B71dcb1:{NFSU2_TR(0x71dcb1);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B71dcb3:{NFSU2_TR(0x71dcb3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0xb505ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B71dcb9:{NFSU2_TR(0x71dcb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71dcbf:{NFSU2_TR(0x71dcbf);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0xb505ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B71dcc5:{NFSU2_TR(0x71dcc5);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B71dcc8:{NFSU2_TR(0x71dcc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71dccb:{NFSU2_TR(0x71dccb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71dcce:{NFSU2_TR(0x71dcce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71dcd1:{NFSU2_TR(0x71dcd1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0xec83ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B71dcd7:{NFSU2_TR(0x71dcd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71dcda:{NFSU2_TR(0x71dcda);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x61f8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71dce0:{NFSU2_TR(0x71dce0);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B71dce3:{NFSU2_TR(0x71dce3);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B71dce6:{NFSU2_TR(0x71dce6);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B71dce8:{NFSU2_TR(0x71dce8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71dceb:{NFSU2_TR(0x71dceb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71dcee:{NFSU2_TR(0x71dcee);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0xec83ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B71dcf4:{NFSU2_TR(0x71dcf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71dcf7:{NFSU2_TR(0x71dcf7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x61f8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71dcfd:{NFSU2_TR(0x71dcfd);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B71dd00:{NFSU2_TR(0x71dd00);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B71dd03:{NFSU2_TR(0x71dd03);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+28))));
}
B71dd05:{NFSU2_TR(0x71dd05);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B71dd08:{NFSU2_TR(0x71dd08);
__builtin_memmove((R+28),(R+12),4);
}
B71dd0a:{NFSU2_TR(0x71dd0a);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B71dd0c:{NFSU2_TR(0x71dd0c);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B71dd0e:{NFSU2_TR(0x71dd0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71dd11:{NFSU2_TR(0x71dd11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71dd14:{NFSU2_TR(0x71dd14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71dd17:{NFSU2_TR(0x71dd17);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B71dd1a:{NFSU2_TR(0x71dd1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71dd1d:{NFSU2_TR(0x71dd1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71dd20:{NFSU2_TR(0x71dd20);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B71dd24:{NFSU2_TR(0x71dd24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B71dd27:{NFSU2_TR(0x71dd27);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B71dd2b:{NFSU2_TR(0x71dd2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))-u32(r4(U+4))));
}
B71dd2e:{NFSU2_TR(0x71dd2e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B71dd31:{NFSU2_TR(0x71dd31);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
}
B71dd34:{NFSU2_TR(0x71dd34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71dd37:{NFSU2_TR(0x71dd37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71dd3a:{NFSU2_TR(0x71dd3a);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+24))));
}
B71dd3c:{NFSU2_TR(0x71dd3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))-u32(r4(U+4))));
}
B71dd3f:{NFSU2_TR(0x71dd3f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B71dd42:{NFSU2_TR(0x71dd42);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B71dd45:{NFSU2_TR(0x71dd45);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71dd49:{NFSU2_TR(0x71dd49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71dd4c:{NFSU2_TR(0x71dd4c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71dd50:{NFSU2_TR(0x71dd50);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B71dd53:{NFSU2_TR(0x71dd53);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B71dd55:{NFSU2_TR(0x71dd55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71dd58:{NFSU2_TR(0x71dd58);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B71dd5b:{NFSU2_TR(0x71dd5b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71dd5f:{NFSU2_TR(0x71dd5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B71dd62:{NFSU2_TR(0x71dd62);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B71dd64:{NFSU2_TR(0x71dd64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71dd67:{NFSU2_TR(0x71dd67);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B71dd6a:{NFSU2_TR(0x71dd6a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B71dd6d:{NFSU2_TR(0x71dd6d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71dd71:{NFSU2_TR(0x71dd71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71dd74:{NFSU2_TR(0x71dd74);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71dd78:{NFSU2_TR(0x71dd78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B71dd7b:{NFSU2_TR(0x71dd7b);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B71dd7d:{NFSU2_TR(0x71dd7d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B71dd80:{NFSU2_TR(0x71dd80);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B71dd83:{NFSU2_TR(0x71dd83);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B71dd86:{NFSU2_TR(0x71dd86);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71dd8a:{NFSU2_TR(0x71dd8a);
u8 U[2];
__builtin_memmove((U+0),(R+12),2);
s2(u32(r4(R+0)),r2(U+0));
}
B71dd8d:{NFSU2_TR(0x71dd8d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71dd91:{NFSU2_TR(0x71dd91);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B71dd93:{NFSU2_TR(0x71dd93);
{goto L71ddb4;}
}
B71dd95:L71dd95:{c.instructions+=8;NFSU2_TR(0x71dd95);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71dd99:{NFSU2_TR(0x71dd99);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71dd9d:{NFSU2_TR(0x71dd9d);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
s2(u32(r4(R+0)),r2(U+0));
}
B71dda0:{NFSU2_TR(0x71dda0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71dda4:{NFSU2_TR(0x71dda4);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71dda8:{NFSU2_TR(0x71dda8);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71ddac:{NFSU2_TR(0x71ddac);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71ddb0:{NFSU2_TR(0x71ddb0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71ddb4:L71ddb4:{c.instructions+=5;NFSU2_TR(0x71ddb4);
w1(R+512,carry<u32>(r4(R+8),u32(0x4ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B71ddb7:{NFSU2_TR(0x71ddb7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B71ddb8:{NFSU2_TR(0x71ddb8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B71ddb9:{NFSU2_TR(0x71ddb9);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
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
B71ddbc:{NFSU2_TR(0x71ddbc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71dbe5u);}goto L71dbe5;}}
}
B71ddc2:L71ddc2:{c.instructions+=5;NFSU2_TR(0x71ddc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71ddc3:{NFSU2_TR(0x71ddc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71ddc4:{NFSU2_TR(0x71ddc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71ddc5:{NFSU2_TR(0x71ddc5);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B71ddc6:{NFSU2_TR(0x71ddc6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71ddc7:L71ddc7:{c.instructions+=9;NFSU2_TR(0x71ddc7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ddc8:{NFSU2_TR(0x71ddc8);
__builtin_memmove((R+20),(R+16),4);
}
B71ddca:{NFSU2_TR(0x71ddca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71ddcd:{NFSU2_TR(0x71ddcd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ddce:{NFSU2_TR(0x71ddce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ddcf:{NFSU2_TR(0x71ddcf);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ddd1:{NFSU2_TR(0x71ddd1);
u8 U[6];
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B71ddd3:{NFSU2_TR(0x71ddd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B71ddd4:{NFSU2_TR(0x71ddd4);
__builtin_memmove((R+28),(R+8),4);
}
B71ddd6:L71ddd6:{c.instructions+=1;NFSU2_TR(0x71ddd6);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L71ddd8;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71ddd6u);}goto L71ddd6;}
}
B71ddd8:L71ddd8:{c.instructions+=50;NFSU2_TR(0x71ddd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71dddb:{NFSU2_TR(0x71dddb);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+24,u32(s32(s16(r2(U+0)))));
}
B71ddde:{NFSU2_TR(0x71ddde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71dde1:{NFSU2_TR(0x71dde1);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+28,u32(s32(s16(r2(U+0)))));
}
B71dde4:{NFSU2_TR(0x71dde4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71dde7:{NFSU2_TR(0x71dde7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B71dde9:{NFSU2_TR(0x71dde9);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71dded:{NFSU2_TR(0x71dded);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71ddf1:{NFSU2_TR(0x71ddf1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71ddf4:{NFSU2_TR(0x71ddf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71ddf7:{NFSU2_TR(0x71ddf7);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71ddfb:{NFSU2_TR(0x71ddfb);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71ddff:{NFSU2_TR(0x71ddff);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71de02:{NFSU2_TR(0x71de02);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71de05:{NFSU2_TR(0x71de05);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71de09:{NFSU2_TR(0x71de09);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71de0d:{NFSU2_TR(0x71de0d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71de10:{NFSU2_TR(0x71de10);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71de13:{NFSU2_TR(0x71de13);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71de17:{NFSU2_TR(0x71de17);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71de1b:{NFSU2_TR(0x71de1b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71de1e:{NFSU2_TR(0x71de1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71de21:{NFSU2_TR(0x71de21);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71de25:{NFSU2_TR(0x71de25);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71de29:{NFSU2_TR(0x71de29);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71de2c:{NFSU2_TR(0x71de2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71de2f:{NFSU2_TR(0x71de2f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71de33:{NFSU2_TR(0x71de33);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71de37:{NFSU2_TR(0x71de37);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71de3a:{NFSU2_TR(0x71de3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71de3d:{NFSU2_TR(0x71de3d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71de41:{NFSU2_TR(0x71de41);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71de45:{NFSU2_TR(0x71de45);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71de48:{NFSU2_TR(0x71de48);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71de4b:{NFSU2_TR(0x71de4b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71de4f:{NFSU2_TR(0x71de4f);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71de53:{NFSU2_TR(0x71de53);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71de56:{NFSU2_TR(0x71de56);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71de59:{NFSU2_TR(0x71de59);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B71de5d:{NFSU2_TR(0x71de5d);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B71de61:{NFSU2_TR(0x71de61);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71de64:{NFSU2_TR(0x71de64);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71de67:{NFSU2_TR(0x71de67);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B71de6b:{NFSU2_TR(0x71de6b);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B71de6f:{NFSU2_TR(0x71de6f);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(r4(R+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B71de72:{NFSU2_TR(0x71de72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71de73:{NFSU2_TR(0x71de73);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71de79:{NFSU2_TR(0x71de79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71de7a:{NFSU2_TR(0x71de7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71de7b:{NFSU2_TR(0x71de7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71de7c:L71de7c:{c.instructions+=8;NFSU2_TR(0x71de7c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71de7d:{NFSU2_TR(0x71de7d);
__builtin_memmove((R+20),(R+16),4);
}
B71de7f:{NFSU2_TR(0x71de7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x11cull))));
}
B71de85:{NFSU2_TR(0x71de85);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B71de8b:{NFSU2_TR(0x71de8b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71de8c:{NFSU2_TR(0x71de8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B71de8f:{NFSU2_TR(0x71de8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B71de92:{NFSU2_TR(0x71de92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71de97ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71ddc7u);}goto L71ddc7;}
}
B71de97:L71de97:{c.instructions+=6;NFSU2_TR(0x71de97);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B71de9a:{NFSU2_TR(0x71de9a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71de9b:{NFSU2_TR(0x71de9b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71de9c:{NFSU2_TR(0x71de9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B71dea2:{NFSU2_TR(0x71dea2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B71dea9:{NFSU2_TR(0x71dea9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71deaa:L71deaa:{c.instructions+=9;NFSU2_TR(0x71deaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71dead:{NFSU2_TR(0x71dead);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71deb0:{NFSU2_TR(0x71deb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71deb3:{NFSU2_TR(0x71deb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B71deb5:{NFSU2_TR(0x71deb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71deb8:{NFSU2_TR(0x71deb8);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+4))));
}
B71deba:{NFSU2_TR(0x71deba);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+12))));
}
B71debc:{NFSU2_TR(0x71debc);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+8))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B71debe:{NFSU2_TR(0x71debe);
if(r1(R+518)){{goto L71dfb8;}}
}
B71dec4:L71dec4:{c.instructions+=79;NFSU2_TR(0x71dec4);
__builtin_memmove((R+24),(R+8),4);
}
B71dec6:{NFSU2_TR(0x71dec6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x31f1ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B71decc:{NFSU2_TR(0x71decc);
__builtin_memmove((R+28),(R+4),4);
}
B71dece:{NFSU2_TR(0x71dece);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0xfb15ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71ded4:{NFSU2_TR(0x71ded4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x8e3aull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B71deda:{NFSU2_TR(0x71deda);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0xd4dbull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B71dee0:{NFSU2_TR(0x71dee0);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B71dee3:{NFSU2_TR(0x71dee3);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B71dee6:{NFSU2_TR(0x71dee6);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B71dee9:{NFSU2_TR(0x71dee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71deec:{NFSU2_TR(0x71deec);
w4(R+4,u32(0-u32(r4(R+4))));
}
B71deee:{NFSU2_TR(0x71deee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71def1:{NFSU2_TR(0x71def1);
__builtin_memmove((R+4),(R+24),4);
}
B71def3:{NFSU2_TR(0x71def3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B71def6:{NFSU2_TR(0x71def6);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B71def9:{NFSU2_TR(0x71def9);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B71defb:{NFSU2_TR(0x71defb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0xb505ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B71df01:{NFSU2_TR(0x71df01);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B71df03:{NFSU2_TR(0x71df03);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0xb505ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B71df09:{NFSU2_TR(0x71df09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71df0c:{NFSU2_TR(0x71df0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71df0f:{NFSU2_TR(0x71df0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71df12:{NFSU2_TR(0x71df12);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B71df14:{NFSU2_TR(0x71df14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71df17:{NFSU2_TR(0x71df17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71df1a:{NFSU2_TR(0x71df1a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0xb505ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71df20:{NFSU2_TR(0x71df20);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B71df23:{NFSU2_TR(0x71df23);
__builtin_memmove((R+28),(R+24),4);
}
B71df25:{NFSU2_TR(0x71df25);
__builtin_memmove((R+24),(R+12),4);
}
B71df27:{NFSU2_TR(0x71df27);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x61f8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B71df2d:{NFSU2_TR(0x71df2d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0xec83ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71df33:{NFSU2_TR(0x71df33);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B71df36:{NFSU2_TR(0x71df36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71df39:{NFSU2_TR(0x71df39);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B71df3c:{NFSU2_TR(0x71df3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71df3f:{NFSU2_TR(0x71df3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71df42:{NFSU2_TR(0x71df42);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B71df44:{NFSU2_TR(0x71df44);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B71df46:{NFSU2_TR(0x71df46);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B71df49:{NFSU2_TR(0x71df49);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B71df4c:{NFSU2_TR(0x71df4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71df4f:{NFSU2_TR(0x71df4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B71df52:{NFSU2_TR(0x71df52);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+4))));
}
B71df54:{NFSU2_TR(0x71df54);
__builtin_memmove((R+4),(R+12),4);
}
B71df56:{NFSU2_TR(0x71df56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71df59:{NFSU2_TR(0x71df59);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B71df5b:{NFSU2_TR(0x71df5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71df5e:{NFSU2_TR(0x71df5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71df61:{NFSU2_TR(0x71df61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71df64:{NFSU2_TR(0x71df64);
__builtin_memmove((R+24),(R+8),4);
}
B71df66:{NFSU2_TR(0x71df66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71df69:{NFSU2_TR(0x71df69);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B71df6b:{NFSU2_TR(0x71df6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B71df6e:{NFSU2_TR(0x71df6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))-u32(r4(U+4))));
}
B71df71:{NFSU2_TR(0x71df71);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B71df74:{NFSU2_TR(0x71df74);
w4(R+12,u32(s32(s16(r2(R+12)))));
}
B71df77:{NFSU2_TR(0x71df77);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71df7a:{NFSU2_TR(0x71df7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71df7d:{NFSU2_TR(0x71df7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71df80:{NFSU2_TR(0x71df80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71df83:{NFSU2_TR(0x71df83);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B71df85:{NFSU2_TR(0x71df85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B71df88:{NFSU2_TR(0x71df88);
w4(R+12,u32(s32(s16(r2(R+12)))));
}
B71df8b:{NFSU2_TR(0x71df8b);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B71df8e:{NFSU2_TR(0x71df8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71df91:{NFSU2_TR(0x71df91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71df94:{NFSU2_TR(0x71df94);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B71df96:{NFSU2_TR(0x71df96);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B71df99:{NFSU2_TR(0x71df99);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+8))));
}
B71df9b:{NFSU2_TR(0x71df9b);
w4(R+8,u32(s32(s16(r2(R+28)))));
}
B71df9e:{NFSU2_TR(0x71df9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71dfa1:{NFSU2_TR(0x71dfa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B71dfa4:{NFSU2_TR(0x71dfa4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B71dfa6:{NFSU2_TR(0x71dfa6);
w4(R+12,u32(s32(s16(r2(R+12)))));
}
B71dfa9:{NFSU2_TR(0x71dfa9);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B71dfac:{NFSU2_TR(0x71dfac);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B71dfaf:{NFSU2_TR(0x71dfaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71dfb2:{NFSU2_TR(0x71dfb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71dfb5:{NFSU2_TR(0x71dfb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71dfb8:L71dfb8:{c.instructions+=3;NFSU2_TR(0x71dfb8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B71dfbb:{NFSU2_TR(0x71dfbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B71dfbe:{NFSU2_TR(0x71dfbe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71deaau);}goto L71deaa;}}
}
B71dfc4:L71dfc4:{c.instructions+=13;NFSU2_TR(0x71dfc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71dfc7:{NFSU2_TR(0x71dfc7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff44ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71dfcd:{NFSU2_TR(0x71dfcd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B71dfd0:{NFSU2_TR(0x71dfd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71dfd3:{NFSU2_TR(0x71dfd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B71dfda:{NFSU2_TR(0x71dfda);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B71dfdc:{NFSU2_TR(0x71dfdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71dfdf:{NFSU2_TR(0x71dfdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B71dfe1:{NFSU2_TR(0x71dfe1);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+8))));
}
B71dfe3:{NFSU2_TR(0x71dfe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))|u32(r4(U+4))));
}
B71dfe6:{NFSU2_TR(0x71dfe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71dfe9:{NFSU2_TR(0x71dfe9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))|u32(r4(U+4))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B71dfec:{NFSU2_TR(0x71dfec);
if(r1(R+518)){TAIL_STATIC(0x71e101u,71e);}
}
B71dff2:L71dff2:{c.instructions+=4;NFSU2_TR(0x71dff2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71dff5:{NFSU2_TR(0x71dff5);
__builtin_memmove((R+24),(R+4),4);
}
B71dff7:{NFSU2_TR(0x71dff7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x31f1ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B71dffd:{NFSU2_TR(0x71dffd);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
TAIL_STATIC(0x71e000u,71e);
}
XIT:NFSU2_TR_EXIT(0x71d,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
