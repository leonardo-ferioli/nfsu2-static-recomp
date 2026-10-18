#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_65c(u8* __restrict R,Cpu& c);
u32 body_65d(u8* __restrict R,Cpu& c);
u32 body_660(u8* __restrict R,Cpu& c);
u32 body_666(u8* __restrict R,Cpu& c);
u32 body_66b(u8* __restrict R,Cpu& c);
u32 body_66e(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x66d,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x66d,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_66d(u8* __restrict R,Cpu& c);
u32 page_66d(Cpu& c){return body_66d(c.regs.data(),c);}
__attribute__((noinline)) u32 body_66d(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x66d002:goto L66d002;
case 0x66d004:goto L66d004;
case 0x66d007:c.instructions+=1;goto B66d007;
case 0x66d009:goto L66d009;
case 0x66d00d:c.instructions+=1;goto B66d00d;
case 0x66d00f:goto L66d00f;
case 0x66d012:c.instructions+=5;goto B66d012;
case 0x66d015:c.instructions+=4;goto B66d015;
case 0x66d017:c.instructions+=3;goto B66d017;
case 0x66d018:c.instructions+=2;goto B66d018;
case 0x66d01b:c.instructions+=1;goto B66d01b;
case 0x66d020:goto L66d020;
case 0x66d022:goto L66d022;
case 0x66d027:goto L66d027;
case 0x66d028:c.instructions+=1;goto B66d028;
case 0x66d02b:goto L66d02b;
case 0x66d02d:c.instructions+=10;goto B66d02d;
case 0x66d02e:c.instructions+=9;goto B66d02e;
case 0x66d030:c.instructions+=8;goto B66d030;
case 0x66d031:c.instructions+=7;goto B66d031;
case 0x66d034:c.instructions+=6;goto B66d034;
case 0x66d035:c.instructions+=5;goto B66d035;
case 0x66d038:c.instructions+=4;goto B66d038;
case 0x66d03a:c.instructions+=3;goto B66d03a;
case 0x66d03b:c.instructions+=2;goto B66d03b;
case 0x66d03e:c.instructions+=1;goto B66d03e;
case 0x66d040:goto L66d040;
case 0x66d042:c.instructions+=1;goto B66d042;
case 0x66d044:goto L66d044;
case 0x66d04a:c.instructions+=17;goto B66d04a;
case 0x66d04c:c.instructions+=16;goto B66d04c;
case 0x66d053:c.instructions+=15;goto B66d053;
case 0x66d055:c.instructions+=14;goto B66d055;
case 0x66d05b:c.instructions+=13;goto B66d05b;
case 0x66d05d:c.instructions+=12;goto B66d05d;
case 0x66d060:c.instructions+=11;goto B66d060;
case 0x66d062:c.instructions+=10;goto B66d062;
case 0x66d064:c.instructions+=9;goto B66d064;
case 0x66d065:c.instructions+=8;goto B66d065;
case 0x66d068:c.instructions+=7;goto B66d068;
case 0x66d06a:c.instructions+=6;goto B66d06a;
case 0x66d06c:c.instructions+=5;goto B66d06c;
case 0x66d06e:c.instructions+=4;goto B66d06e;
case 0x66d071:c.instructions+=3;goto B66d071;
case 0x66d072:c.instructions+=2;goto B66d072;
case 0x66d074:c.instructions+=1;goto B66d074;
case 0x66d079:goto L66d079;
case 0x66d07b:c.instructions+=2;goto B66d07b;
case 0x66d07d:c.instructions+=1;goto B66d07d;
case 0x66d07f:goto L66d07f;
case 0x66d082:c.instructions+=2;goto B66d082;
case 0x66d086:c.instructions+=1;goto B66d086;
case 0x66d088:goto L66d088;
case 0x66d08b:c.instructions+=1;goto B66d08b;
case 0x66d08d:goto L66d08d;
case 0x66d091:c.instructions+=1;goto B66d091;
case 0x66d093:goto L66d093;
case 0x66d097:c.instructions+=4;goto B66d097;
case 0x66d098:c.instructions+=3;goto B66d098;
case 0x66d09b:c.instructions+=2;goto B66d09b;
case 0x66d09d:c.instructions+=1;goto B66d09d;
case 0x66d09f:goto L66d09f;
case 0x66d0a1:c.instructions+=2;goto B66d0a1;
case 0x66d0a2:c.instructions+=1;goto B66d0a2;
case 0x66d0a7:goto L66d0a7;
case 0x66d0a9:goto L66d0a9;
case 0x66d0ab:c.instructions+=2;goto B66d0ab;
case 0x66d0ac:c.instructions+=1;goto B66d0ac;
case 0x66d0b1:goto L66d0b1;
case 0x66d0b3:c.instructions+=1;goto B66d0b3;
case 0x66d0b5:goto L66d0b5;
case 0x66d0b6:c.instructions+=2;goto B66d0b6;
case 0x66d0b8:c.instructions+=1;goto B66d0b8;
case 0x66d0bd:goto L66d0bd;
case 0x66d0bf:goto L66d0bf;
case 0x66d0c4:goto L66d0c4;
case 0x66d0c5:c.instructions+=4;goto B66d0c5;
case 0x66d0c6:c.instructions+=3;goto B66d0c6;
case 0x66d0c7:c.instructions+=2;goto B66d0c7;
case 0x66d0c8:c.instructions+=1;goto B66d0c8;
case 0x66d0cb:goto L66d0cb;
case 0x66d0cd:c.instructions+=4;goto B66d0cd;
case 0x66d0ce:c.instructions+=3;goto B66d0ce;
case 0x66d0d0:c.instructions+=2;goto B66d0d0;
case 0x66d0d4:c.instructions+=1;goto B66d0d4;
case 0x66d0d6:goto L66d0d6;
case 0x66d0d8:c.instructions+=1;goto B66d0d8;
case 0x66d0da:goto L66d0da;
case 0x66d0de:c.instructions+=1;goto B66d0de;
case 0x66d0e0:goto L66d0e0;
case 0x66d0e3:c.instructions+=4;goto B66d0e3;
case 0x66d0e5:c.instructions+=3;goto B66d0e5;
case 0x66d0e7:c.instructions+=2;goto B66d0e7;
case 0x66d0ea:c.instructions+=1;goto B66d0ea;
case 0x66d0ef:goto L66d0ef;
case 0x66d0f1:c.instructions+=1;goto B66d0f1;
case 0x66d0f3:goto L66d0f3;
case 0x66d0f6:c.instructions+=3;goto B66d0f6;
case 0x66d0f9:c.instructions+=2;goto B66d0f9;
case 0x66d0fb:c.instructions+=1;goto B66d0fb;
case 0x66d0fd:goto L66d0fd;
case 0x66d101:c.instructions+=1;goto B66d101;
case 0x66d103:goto L66d103;
case 0x66d106:c.instructions+=1;goto B66d106;
case 0x66d108:goto L66d108;
case 0x66d10c:c.instructions+=1;goto B66d10c;
case 0x66d10e:goto L66d10e;
case 0x66d111:c.instructions+=5;goto B66d111;
case 0x66d114:c.instructions+=4;goto B66d114;
case 0x66d116:c.instructions+=3;goto B66d116;
case 0x66d117:c.instructions+=2;goto B66d117;
case 0x66d11a:c.instructions+=1;goto B66d11a;
case 0x66d11f:goto L66d11f;
case 0x66d121:goto L66d121;
case 0x66d126:goto L66d126;
case 0x66d127:c.instructions+=1;goto B66d127;
case 0x66d12a:goto L66d12a;
case 0x66d12c:c.instructions+=8;goto B66d12c;
case 0x66d12d:c.instructions+=7;goto B66d12d;
case 0x66d12f:c.instructions+=6;goto B66d12f;
case 0x66d130:c.instructions+=5;goto B66d130;
case 0x66d133:c.instructions+=4;goto B66d133;
case 0x66d135:c.instructions+=3;goto B66d135;
case 0x66d136:c.instructions+=2;goto B66d136;
case 0x66d139:c.instructions+=1;goto B66d139;
case 0x66d13b:goto L66d13b;
case 0x66d13d:c.instructions+=1;goto B66d13d;
case 0x66d13f:goto L66d13f;
case 0x66d145:c.instructions+=17;goto B66d145;
case 0x66d147:c.instructions+=16;goto B66d147;
case 0x66d14e:c.instructions+=15;goto B66d14e;
case 0x66d150:c.instructions+=14;goto B66d150;
case 0x66d156:c.instructions+=13;goto B66d156;
case 0x66d158:c.instructions+=12;goto B66d158;
case 0x66d15c:c.instructions+=11;goto B66d15c;
case 0x66d15e:c.instructions+=10;goto B66d15e;
case 0x66d160:c.instructions+=9;goto B66d160;
case 0x66d161:c.instructions+=8;goto B66d161;
case 0x66d164:c.instructions+=7;goto B66d164;
case 0x66d166:c.instructions+=6;goto B66d166;
case 0x66d168:c.instructions+=5;goto B66d168;
case 0x66d16a:c.instructions+=4;goto B66d16a;
case 0x66d16d:c.instructions+=3;goto B66d16d;
case 0x66d16e:c.instructions+=2;goto B66d16e;
case 0x66d170:c.instructions+=1;goto B66d170;
case 0x66d175:goto L66d175;
case 0x66d177:c.instructions+=2;goto B66d177;
case 0x66d179:c.instructions+=1;goto B66d179;
case 0x66d17b:goto L66d17b;
case 0x66d17e:c.instructions+=2;goto B66d17e;
case 0x66d182:c.instructions+=1;goto B66d182;
case 0x66d184:goto L66d184;
case 0x66d188:c.instructions+=1;goto B66d188;
case 0x66d18a:goto L66d18a;
case 0x66d18e:c.instructions+=1;goto B66d18e;
case 0x66d190:goto L66d190;
case 0x66d194:c.instructions+=3;goto B66d194;
case 0x66d197:c.instructions+=2;goto B66d197;
case 0x66d199:c.instructions+=1;goto B66d199;
case 0x66d19b:goto L66d19b;
case 0x66d19d:c.instructions+=2;goto B66d19d;
case 0x66d19e:c.instructions+=1;goto B66d19e;
case 0x66d1a3:goto L66d1a3;
case 0x66d1a5:goto L66d1a5;
case 0x66d1a7:c.instructions+=2;goto B66d1a7;
case 0x66d1a8:c.instructions+=1;goto B66d1a8;
case 0x66d1ad:goto L66d1ad;
case 0x66d1ae:c.instructions+=2;goto B66d1ae;
case 0x66d1b0:c.instructions+=1;goto B66d1b0;
case 0x66d1b5:goto L66d1b5;
case 0x66d1b7:goto L66d1b7;
case 0x66d1bc:goto L66d1bc;
case 0x66d1bd:c.instructions+=3;goto B66d1bd;
case 0x66d1be:c.instructions+=2;goto B66d1be;
case 0x66d1bf:c.instructions+=1;goto B66d1bf;
case 0x66d1c2:goto L66d1c2;
case 0x66d1c4:c.instructions+=7;goto B66d1c4;
case 0x66d1c5:c.instructions+=6;goto B66d1c5;
case 0x66d1c7:c.instructions+=5;goto B66d1c7;
case 0x66d1ca:c.instructions+=4;goto B66d1ca;
case 0x66d1cc:c.instructions+=3;goto B66d1cc;
case 0x66d1ce:c.instructions+=2;goto B66d1ce;
case 0x66d1d1:c.instructions+=1;goto B66d1d1;
case 0x66d1d6:goto L66d1d6;
case 0x66d1d8:c.instructions+=1;goto B66d1d8;
case 0x66d1da:goto L66d1da;
case 0x66d1dd:c.instructions+=2;goto B66d1dd;
case 0x66d1e1:c.instructions+=1;goto B66d1e1;
case 0x66d1e3:goto L66d1e3;
case 0x66d1e7:c.instructions+=1;goto B66d1e7;
case 0x66d1e9:goto L66d1e9;
case 0x66d1ed:c.instructions+=1;goto B66d1ed;
case 0x66d1ef:goto L66d1ef;
case 0x66d1f4:c.instructions+=1;goto B66d1f4;
case 0x66d1f6:goto L66d1f6;
case 0x66d1f8:c.instructions+=5;goto B66d1f8;
case 0x66d1fb:c.instructions+=4;goto B66d1fb;
case 0x66d1fd:c.instructions+=3;goto B66d1fd;
case 0x66d1fe:c.instructions+=2;goto B66d1fe;
case 0x66d201:c.instructions+=1;goto B66d201;
case 0x66d206:goto L66d206;
case 0x66d207:c.instructions+=1;goto B66d207;
case 0x66d20a:goto L66d20a;
case 0x66d20c:c.instructions+=8;goto B66d20c;
case 0x66d20d:c.instructions+=7;goto B66d20d;
case 0x66d20f:c.instructions+=6;goto B66d20f;
case 0x66d210:c.instructions+=5;goto B66d210;
case 0x66d213:c.instructions+=4;goto B66d213;
case 0x66d215:c.instructions+=3;goto B66d215;
case 0x66d216:c.instructions+=2;goto B66d216;
case 0x66d219:c.instructions+=1;goto B66d219;
case 0x66d21b:goto L66d21b;
case 0x66d21d:c.instructions+=1;goto B66d21d;
case 0x66d21f:goto L66d21f;
case 0x66d225:c.instructions+=17;goto B66d225;
case 0x66d227:c.instructions+=16;goto B66d227;
case 0x66d22e:c.instructions+=15;goto B66d22e;
case 0x66d230:c.instructions+=14;goto B66d230;
case 0x66d236:c.instructions+=13;goto B66d236;
case 0x66d238:c.instructions+=12;goto B66d238;
case 0x66d23c:c.instructions+=11;goto B66d23c;
case 0x66d23e:c.instructions+=10;goto B66d23e;
case 0x66d240:c.instructions+=9;goto B66d240;
case 0x66d241:c.instructions+=8;goto B66d241;
case 0x66d244:c.instructions+=7;goto B66d244;
case 0x66d246:c.instructions+=6;goto B66d246;
case 0x66d248:c.instructions+=5;goto B66d248;
case 0x66d24a:c.instructions+=4;goto B66d24a;
case 0x66d24d:c.instructions+=3;goto B66d24d;
case 0x66d24e:c.instructions+=2;goto B66d24e;
case 0x66d250:c.instructions+=1;goto B66d250;
case 0x66d255:goto L66d255;
case 0x66d257:c.instructions+=2;goto B66d257;
case 0x66d259:c.instructions+=1;goto B66d259;
case 0x66d25b:goto L66d25b;
case 0x66d25e:c.instructions+=2;goto B66d25e;
case 0x66d262:c.instructions+=1;goto B66d262;
case 0x66d264:goto L66d264;
case 0x66d268:c.instructions+=1;goto B66d268;
case 0x66d26a:goto L66d26a;
case 0x66d26e:c.instructions+=1;goto B66d26e;
case 0x66d270:goto L66d270;
case 0x66d274:c.instructions+=2;goto B66d274;
case 0x66d276:c.instructions+=1;goto B66d276;
case 0x66d278:goto L66d278;
case 0x66d27b:c.instructions+=3;goto B66d27b;
case 0x66d27d:c.instructions+=2;goto B66d27d;
case 0x66d27e:c.instructions+=1;goto B66d27e;
case 0x66d283:goto L66d283;
case 0x66d285:goto L66d285;
case 0x66d287:c.instructions+=4;goto B66d287;
case 0x66d28a:c.instructions+=3;goto B66d28a;
case 0x66d28c:c.instructions+=2;goto B66d28c;
case 0x66d28d:c.instructions+=1;goto B66d28d;
case 0x66d292:goto L66d292;
case 0x66d294:c.instructions+=1;goto B66d294;
case 0x66d296:goto L66d296;
case 0x66d297:c.instructions+=2;goto B66d297;
case 0x66d299:c.instructions+=1;goto B66d299;
case 0x66d29e:goto L66d29e;
case 0x66d2a0:goto L66d2a0;
case 0x66d2a5:goto L66d2a5;
case 0x66d2a6:c.instructions+=3;goto B66d2a6;
case 0x66d2a7:c.instructions+=2;goto B66d2a7;
case 0x66d2a8:c.instructions+=1;goto B66d2a8;
case 0x66d2ab:goto L66d2ab;
case 0x66d2ad:c.instructions+=4;goto B66d2ad;
case 0x66d2ae:c.instructions+=3;goto B66d2ae;
case 0x66d2b0:c.instructions+=2;goto B66d2b0;
case 0x66d2b4:c.instructions+=1;goto B66d2b4;
case 0x66d2b6:goto L66d2b6;
case 0x66d2b9:c.instructions+=4;goto B66d2b9;
case 0x66d2bb:c.instructions+=3;goto B66d2bb;
case 0x66d2bd:c.instructions+=2;goto B66d2bd;
case 0x66d2c0:c.instructions+=1;goto B66d2c0;
case 0x66d2c5:goto L66d2c5;
case 0x66d2c7:c.instructions+=1;goto B66d2c7;
case 0x66d2c9:goto L66d2c9;
case 0x66d2cc:c.instructions+=2;goto B66d2cc;
case 0x66d2d0:c.instructions+=1;goto B66d2d0;
case 0x66d2d2:goto L66d2d2;
case 0x66d2d6:c.instructions+=1;goto B66d2d6;
case 0x66d2d8:goto L66d2d8;
case 0x66d2dd:c.instructions+=1;goto B66d2dd;
case 0x66d2df:goto L66d2df;
case 0x66d2e1:c.instructions+=5;goto B66d2e1;
case 0x66d2e4:c.instructions+=4;goto B66d2e4;
case 0x66d2e6:c.instructions+=3;goto B66d2e6;
case 0x66d2e7:c.instructions+=2;goto B66d2e7;
case 0x66d2ea:c.instructions+=1;goto B66d2ea;
case 0x66d2ef:goto L66d2ef;
case 0x66d2f0:c.instructions+=1;goto B66d2f0;
case 0x66d2f3:goto L66d2f3;
case 0x66d2f5:c.instructions+=13;goto B66d2f5;
case 0x66d2f6:c.instructions+=12;goto B66d2f6;
case 0x66d2f8:c.instructions+=11;goto B66d2f8;
case 0x66d2fb:c.instructions+=10;goto B66d2fb;
case 0x66d2fc:c.instructions+=9;goto B66d2fc;
case 0x66d2ff:c.instructions+=8;goto B66d2ff;
case 0x66d300:c.instructions+=7;goto B66d300;
case 0x66d301:c.instructions+=6;goto B66d301;
case 0x66d303:c.instructions+=5;goto B66d303;
case 0x66d304:c.instructions+=4;goto B66d304;
case 0x66d306:c.instructions+=3;goto B66d306;
case 0x66d308:c.instructions+=2;goto B66d308;
case 0x66d309:c.instructions+=1;goto B66d309;
case 0x66d30b:goto L66d30b;
case 0x66d30d:c.instructions+=1;goto B66d30d;
case 0x66d30f:goto L66d30f;
case 0x66d312:c.instructions+=15;goto B66d312;
case 0x66d318:c.instructions+=14;goto B66d318;
case 0x66d31a:c.instructions+=13;goto B66d31a;
case 0x66d31d:c.instructions+=12;goto B66d31d;
case 0x66d31f:c.instructions+=11;goto B66d31f;
case 0x66d321:c.instructions+=10;goto B66d321;
case 0x66d323:c.instructions+=9;goto B66d323;
case 0x66d327:c.instructions+=8;goto B66d327;
case 0x66d329:c.instructions+=7;goto B66d329;
case 0x66d32a:c.instructions+=6;goto B66d32a;
case 0x66d331:c.instructions+=5;goto B66d331;
case 0x66d333:c.instructions+=4;goto B66d333;
case 0x66d334:c.instructions+=3;goto B66d334;
case 0x66d335:c.instructions+=2;goto B66d335;
case 0x66d338:c.instructions+=1;goto B66d338;
case 0x66d33d:goto L66d33d;
case 0x66d33f:c.instructions+=2;goto B66d33f;
case 0x66d341:c.instructions+=1;goto B66d341;
case 0x66d347:goto L66d347;
case 0x66d34a:c.instructions+=4;goto B66d34a;
case 0x66d34d:c.instructions+=3;goto B66d34d;
case 0x66d34f:c.instructions+=2;goto B66d34f;
case 0x66d352:c.instructions+=1;goto B66d352;
case 0x66d354:goto L66d354;
case 0x66d358:c.instructions+=1;goto B66d358;
case 0x66d35e:goto L66d35e;
case 0x66d360:c.instructions+=1;goto B66d360;
case 0x66d362:goto L66d362;
case 0x66d364:c.instructions+=1;goto B66d364;
case 0x66d36a:goto L66d36a;
case 0x66d36d:c.instructions+=2;goto B66d36d;
case 0x66d370:c.instructions+=1;goto B66d370;
case 0x66d372:goto L66d372;
case 0x66d375:c.instructions+=3;goto B66d375;
case 0x66d377:c.instructions+=2;goto B66d377;
case 0x66d378:c.instructions+=1;goto B66d378;
case 0x66d37d:goto L66d37d;
case 0x66d382:goto L66d382;
case 0x66d385:c.instructions+=3;goto B66d385;
case 0x66d387:c.instructions+=2;goto B66d387;
case 0x66d389:c.instructions+=1;goto B66d389;
case 0x66d38b:goto L66d38b;
case 0x66d38e:c.instructions+=1;goto B66d38e;
case 0x66d390:goto L66d390;
case 0x66d392:goto L66d392;
case 0x66d397:goto L66d397;
case 0x66d39a:c.instructions+=1;goto B66d39a;
case 0x66d3a0:goto L66d3a0;
case 0x66d3a2:c.instructions+=1;goto B66d3a2;
case 0x66d3a8:goto L66d3a8;
case 0x66d3ab:c.instructions+=15;goto B66d3ab;
case 0x66d3ad:c.instructions+=14;goto B66d3ad;
case 0x66d3b0:c.instructions+=13;goto B66d3b0;
case 0x66d3b6:c.instructions+=12;goto B66d3b6;
case 0x66d3b9:c.instructions+=11;goto B66d3b9;
case 0x66d3bc:c.instructions+=10;goto B66d3bc;
case 0x66d3bf:c.instructions+=9;goto B66d3bf;
case 0x66d3c1:c.instructions+=8;goto B66d3c1;
case 0x66d3c4:c.instructions+=7;goto B66d3c4;
case 0x66d3c7:c.instructions+=6;goto B66d3c7;
case 0x66d3cd:c.instructions+=5;goto B66d3cd;
case 0x66d3d0:c.instructions+=4;goto B66d3d0;
case 0x66d3d5:c.instructions+=3;goto B66d3d5;
case 0x66d3d7:c.instructions+=2;goto B66d3d7;
case 0x66d3da:c.instructions+=1;goto B66d3da;
case 0x66d3dc:goto L66d3dc;
case 0x66d3df:c.instructions+=1;goto B66d3df;
case 0x66d3e1:goto L66d3e1;
case 0x66d3e4:c.instructions+=4;goto B66d3e4;
case 0x66d3e6:c.instructions+=3;goto B66d3e6;
case 0x66d3e8:c.instructions+=2;goto B66d3e8;
case 0x66d3eb:c.instructions+=1;goto B66d3eb;
case 0x66d3ed:goto L66d3ed;
case 0x66d3f0:c.instructions+=1;goto B66d3f0;
case 0x66d3f2:goto L66d3f2;
case 0x66d3f5:c.instructions+=3;goto B66d3f5;
case 0x66d3fb:c.instructions+=2;goto B66d3fb;
case 0x66d401:c.instructions+=1;goto B66d401;
case 0x66d406:goto L66d406;
case 0x66d409:goto L66d409;
case 0x66d40c:c.instructions+=4;goto B66d40c;
case 0x66d40e:c.instructions+=3;goto B66d40e;
case 0x66d410:c.instructions+=2;goto B66d410;
case 0x66d413:c.instructions+=1;goto B66d413;
case 0x66d415:goto L66d415;
case 0x66d418:c.instructions+=1;goto B66d418;
case 0x66d41a:goto L66d41a;
case 0x66d41d:c.instructions+=4;goto B66d41d;
case 0x66d41f:c.instructions+=3;goto B66d41f;
case 0x66d421:c.instructions+=2;goto B66d421;
case 0x66d424:c.instructions+=1;goto B66d424;
case 0x66d426:goto L66d426;
case 0x66d42a:c.instructions+=1;goto B66d42a;
case 0x66d42c:goto L66d42c;
case 0x66d42f:c.instructions+=3;goto B66d42f;
case 0x66d435:c.instructions+=2;goto B66d435;
case 0x66d43b:c.instructions+=1;goto B66d43b;
case 0x66d440:goto L66d440;
case 0x66d443:goto L66d443;
case 0x66d446:c.instructions+=4;goto B66d446;
case 0x66d448:c.instructions+=3;goto B66d448;
case 0x66d44a:c.instructions+=2;goto B66d44a;
case 0x66d44d:c.instructions+=1;goto B66d44d;
case 0x66d44f:goto L66d44f;
case 0x66d451:c.instructions+=2;goto B66d451;
case 0x66d453:c.instructions+=1;goto B66d453;
case 0x66d455:goto L66d455;
case 0x66d458:c.instructions+=4;goto B66d458;
case 0x66d45a:c.instructions+=3;goto B66d45a;
case 0x66d45c:c.instructions+=2;goto B66d45c;
case 0x66d45f:c.instructions+=1;goto B66d45f;
case 0x66d461:goto L66d461;
case 0x66d463:c.instructions+=1;goto B66d463;
case 0x66d465:goto L66d465;
case 0x66d468:c.instructions+=3;goto B66d468;
case 0x66d46e:c.instructions+=2;goto B66d46e;
case 0x66d474:c.instructions+=1;goto B66d474;
case 0x66d479:goto L66d479;
case 0x66d47b:goto L66d47b;
case 0x66d47d:c.instructions+=4;goto B66d47d;
case 0x66d47f:c.instructions+=3;goto B66d47f;
case 0x66d481:c.instructions+=2;goto B66d481;
case 0x66d484:c.instructions+=1;goto B66d484;
case 0x66d486:goto L66d486;
case 0x66d488:c.instructions+=2;goto B66d488;
case 0x66d48a:c.instructions+=1;goto B66d48a;
case 0x66d48c:goto L66d48c;
case 0x66d492:c.instructions+=3;goto B66d492;
case 0x66d494:c.instructions+=2;goto B66d494;
case 0x66d497:c.instructions+=1;goto B66d497;
case 0x66d499:goto L66d499;
case 0x66d49b:c.instructions+=2;goto B66d49b;
case 0x66d49d:c.instructions+=1;goto B66d49d;
case 0x66d49f:goto L66d49f;
case 0x66d4a5:c.instructions+=2;goto B66d4a5;
case 0x66d4ab:c.instructions+=1;goto B66d4ab;
case 0x66d4b0:goto L66d4b0;
case 0x66d4b2:c.instructions+=8;goto B66d4b2;
case 0x66d4b5:c.instructions+=7;goto B66d4b5;
case 0x66d4b8:c.instructions+=6;goto B66d4b8;
case 0x66d4bb:c.instructions+=5;goto B66d4bb;
case 0x66d4be:c.instructions+=4;goto B66d4be;
case 0x66d4c1:c.instructions+=3;goto B66d4c1;
case 0x66d4c3:c.instructions+=2;goto B66d4c3;
case 0x66d4c5:c.instructions+=1;goto B66d4c5;
case 0x66d4c7:goto L66d4c7;
case 0x66d4ca:c.instructions+=8;goto B66d4ca;
case 0x66d4cd:c.instructions+=7;goto B66d4cd;
case 0x66d4d2:c.instructions+=6;goto B66d4d2;
case 0x66d4d5:c.instructions+=5;goto B66d4d5;
case 0x66d4d8:c.instructions+=4;goto B66d4d8;
case 0x66d4da:c.instructions+=3;goto B66d4da;
case 0x66d4dd:c.instructions+=2;goto B66d4dd;
case 0x66d4e0:c.instructions+=1;goto B66d4e0;
case 0x66d4e2:goto L66d4e2;
case 0x66d4e5:c.instructions+=10;goto B66d4e5;
case 0x66d4e8:c.instructions+=9;goto B66d4e8;
case 0x66d4eb:c.instructions+=8;goto B66d4eb;
case 0x66d4ee:c.instructions+=7;goto B66d4ee;
case 0x66d4f1:c.instructions+=6;goto B66d4f1;
case 0x66d4f4:c.instructions+=5;goto B66d4f4;
case 0x66d4f6:c.instructions+=4;goto B66d4f6;
case 0x66d4f9:c.instructions+=3;goto B66d4f9;
case 0x66d4fa:c.instructions+=2;goto B66d4fa;
case 0x66d4fc:c.instructions+=1;goto B66d4fc;
case 0x66d4fe:goto L66d4fe;
case 0x66d501:c.instructions+=1;goto B66d501;
case 0x66d503:goto L66d503;
case 0x66d505:c.instructions+=1;goto B66d505;
case 0x66d507:goto L66d507;
case 0x66d509:c.instructions+=2;goto B66d509;
case 0x66d50c:c.instructions+=1;goto B66d50c;
case 0x66d50e:goto L66d50e;
case 0x66d511:c.instructions+=8;goto B66d511;
case 0x66d514:c.instructions+=7;goto B66d514;
case 0x66d517:c.instructions+=6;goto B66d517;
case 0x66d51a:c.instructions+=5;goto B66d51a;
case 0x66d520:c.instructions+=4;goto B66d520;
case 0x66d522:c.instructions+=3;goto B66d522;
case 0x66d524:c.instructions+=2;goto B66d524;
case 0x66d527:c.instructions+=1;goto B66d527;
case 0x66d529:goto L66d529;
case 0x66d52b:c.instructions+=1;goto B66d52b;
case 0x66d52d:goto L66d52d;
case 0x66d52f:goto L66d52f;
case 0x66d531:c.instructions+=4;goto B66d531;
case 0x66d534:c.instructions+=3;goto B66d534;
case 0x66d537:c.instructions+=2;goto B66d537;
case 0x66d53a:c.instructions+=1;goto B66d53a;
case 0x66d53c:goto L66d53c;
case 0x66d53f:c.instructions+=2;goto B66d53f;
case 0x66d540:c.instructions+=1;goto B66d540;
case 0x66d545:goto L66d545;
case 0x66d547:goto L66d547;
case 0x66d54c:goto L66d54c;
case 0x66d54d:c.instructions+=4;goto B66d54d;
case 0x66d54e:c.instructions+=3;goto B66d54e;
case 0x66d54f:c.instructions+=2;goto B66d54f;
case 0x66d550:c.instructions+=1;goto B66d550;
case 0x66d553:goto L66d553;
case 0x66d555:c.instructions+=11;goto B66d555;
case 0x66d556:c.instructions+=10;goto B66d556;
case 0x66d558:c.instructions+=9;goto B66d558;
case 0x66d55b:c.instructions+=8;goto B66d55b;
case 0x66d55c:c.instructions+=7;goto B66d55c;
case 0x66d55d:c.instructions+=6;goto B66d55d;
case 0x66d55e:c.instructions+=5;goto B66d55e;
case 0x66d561:c.instructions+=4;goto B66d561;
case 0x66d563:c.instructions+=3;goto B66d563;
case 0x66d565:c.instructions+=2;goto B66d565;
case 0x66d568:c.instructions+=1;goto B66d568;
case 0x66d56e:goto L66d56e;
case 0x66d571:c.instructions+=4;goto B66d571;
case 0x66d572:c.instructions+=3;goto B66d572;
case 0x66d574:c.instructions+=2;goto B66d574;
case 0x66d577:c.instructions+=1;goto B66d577;
case 0x66d57c:goto L66d57c;
case 0x66d57e:c.instructions+=2;goto B66d57e;
case 0x66d580:c.instructions+=1;goto B66d580;
case 0x66d586:goto L66d586;
case 0x66d589:c.instructions+=2;goto B66d589;
case 0x66d58c:c.instructions+=1;goto B66d58c;
case 0x66d58e:goto L66d58e;
case 0x66d592:c.instructions+=1;goto B66d592;
case 0x66d598:goto L66d598;
case 0x66d59b:c.instructions+=2;goto B66d59b;
case 0x66d59d:c.instructions+=1;goto B66d59d;
case 0x66d5a3:goto L66d5a3;
case 0x66d5a6:c.instructions+=1;goto B66d5a6;
case 0x66d5ac:goto L66d5ac;
case 0x66d5af:c.instructions+=4;goto B66d5af;
case 0x66d5b2:c.instructions+=3;goto B66d5b2;
case 0x66d5b5:c.instructions+=2;goto B66d5b5;
case 0x66d5b7:c.instructions+=1;goto B66d5b7;
case 0x66d5bd:goto L66d5bd;
case 0x66d5c0:c.instructions+=1;goto B66d5c0;
case 0x66d5c2:goto L66d5c2;
case 0x66d5c4:c.instructions+=1;goto B66d5c4;
case 0x66d5c5:goto L66d5c5;
case 0x66d5c7:c.instructions+=6;goto B66d5c7;
case 0x66d5c8:c.instructions+=5;goto B66d5c8;
case 0x66d5c9:c.instructions+=4;goto B66d5c9;
case 0x66d5ca:c.instructions+=3;goto B66d5ca;
case 0x66d5cb:c.instructions+=2;goto B66d5cb;
case 0x66d5cc:c.instructions+=1;goto B66d5cc;
case 0x66d5d2:goto L66d5d2;
case 0x66d5d3:c.instructions+=1;goto B66d5d3;
case 0x66d5d5:goto L66d5d5;
case 0x66d5d6:c.instructions+=1;goto B66d5d6;
case 0x66d5dc:goto L66d5dc;
case 0x66d5de:c.instructions+=2;goto B66d5de;
case 0x66d5e0:c.instructions+=1;goto B66d5e0;
case 0x66d5e6:goto L66d5e6;
case 0x66d5e8:c.instructions+=6;goto B66d5e8;
case 0x66d5eb:c.instructions+=5;goto B66d5eb;
case 0x66d5ee:c.instructions+=4;goto B66d5ee;
case 0x66d5f1:c.instructions+=3;goto B66d5f1;
case 0x66d5f2:c.instructions+=2;goto B66d5f2;
case 0x66d5f4:c.instructions+=1;goto B66d5f4;
case 0x66d5f6:goto L66d5f6;
case 0x66d5fb:goto L66d5fb;
case 0x66d5fe:c.instructions+=1;goto B66d5fe;
case 0x66d600:goto L66d600;
case 0x66d602:c.instructions+=34;goto B66d602;
case 0x66d608:c.instructions+=33;goto B66d608;
case 0x66d60a:c.instructions+=32;goto B66d60a;
case 0x66d60c:c.instructions+=31;goto B66d60c;
case 0x66d60f:c.instructions+=30;goto B66d60f;
case 0x66d612:c.instructions+=29;goto B66d612;
case 0x66d615:c.instructions+=28;goto B66d615;
case 0x66d617:c.instructions+=27;goto B66d617;
case 0x66d61a:c.instructions+=26;goto B66d61a;
case 0x66d61d:c.instructions+=25;goto B66d61d;
case 0x66d620:c.instructions+=24;goto B66d620;
case 0x66d622:c.instructions+=23;goto B66d622;
case 0x66d625:c.instructions+=22;goto B66d625;
case 0x66d628:c.instructions+=21;goto B66d628;
case 0x66d62b:c.instructions+=20;goto B66d62b;
case 0x66d62e:c.instructions+=19;goto B66d62e;
case 0x66d631:c.instructions+=18;goto B66d631;
case 0x66d634:c.instructions+=17;goto B66d634;
case 0x66d637:c.instructions+=16;goto B66d637;
case 0x66d639:c.instructions+=15;goto B66d639;
case 0x66d63c:c.instructions+=14;goto B66d63c;
case 0x66d63f:c.instructions+=13;goto B66d63f;
case 0x66d642:c.instructions+=12;goto B66d642;
case 0x66d645:c.instructions+=11;goto B66d645;
case 0x66d647:c.instructions+=10;goto B66d647;
case 0x66d64a:c.instructions+=9;goto B66d64a;
case 0x66d64d:c.instructions+=8;goto B66d64d;
case 0x66d64f:c.instructions+=7;goto B66d64f;
case 0x66d652:c.instructions+=6;goto B66d652;
case 0x66d653:c.instructions+=5;goto B66d653;
case 0x66d654:c.instructions+=4;goto B66d654;
case 0x66d656:c.instructions+=3;goto B66d656;
case 0x66d657:c.instructions+=2;goto B66d657;
case 0x66d658:c.instructions+=1;goto B66d658;
case 0x66d65a:goto L66d65a;
case 0x66d65c:c.instructions+=2;goto B66d65c;
case 0x66d65e:c.instructions+=1;goto B66d65e;
case 0x66d660:goto L66d660;
case 0x66d662:c.instructions+=6;goto B66d662;
case 0x66d665:c.instructions+=5;goto B66d665;
case 0x66d668:c.instructions+=4;goto B66d668;
case 0x66d66b:c.instructions+=3;goto B66d66b;
case 0x66d66c:c.instructions+=2;goto B66d66c;
case 0x66d66e:c.instructions+=1;goto B66d66e;
case 0x66d670:goto L66d670;
case 0x66d672:goto L66d672;
case 0x66d674:c.instructions+=2;goto B66d674;
case 0x66d676:c.instructions+=1;goto B66d676;
case 0x66d678:goto L66d678;
case 0x66d67a:c.instructions+=10;goto B66d67a;
case 0x66d67c:c.instructions+=9;goto B66d67c;
case 0x66d67f:c.instructions+=8;goto B66d67f;
case 0x66d682:c.instructions+=7;goto B66d682;
case 0x66d685:c.instructions+=6;goto B66d685;
case 0x66d688:c.instructions+=5;goto B66d688;
case 0x66d68b:c.instructions+=4;goto B66d68b;
case 0x66d68e:c.instructions+=3;goto B66d68e;
case 0x66d68f:c.instructions+=2;goto B66d68f;
case 0x66d691:c.instructions+=1;goto B66d691;
case 0x66d693:goto L66d693;
case 0x66d695:goto L66d695;
case 0x66d69c:goto L66d69c;
case 0x66d69f:c.instructions+=5;goto B66d69f;
case 0x66d6a0:c.instructions+=4;goto B66d6a0;
case 0x66d6a1:c.instructions+=3;goto B66d6a1;
case 0x66d6a2:c.instructions+=2;goto B66d6a2;
case 0x66d6a3:c.instructions+=1;goto B66d6a3;
case 0x66d6a6:goto L66d6a6;
case 0x66d6a8:c.instructions+=20;goto B66d6a8;
case 0x66d6a9:c.instructions+=19;goto B66d6a9;
case 0x66d6ab:c.instructions+=18;goto B66d6ab;
case 0x66d6ac:c.instructions+=17;goto B66d6ac;
case 0x66d6ad:c.instructions+=16;goto B66d6ad;
case 0x66d6ae:c.instructions+=15;goto B66d6ae;
case 0x66d6b1:c.instructions+=14;goto B66d6b1;
case 0x66d6b3:c.instructions+=13;goto B66d6b3;
case 0x66d6b4:c.instructions+=12;goto B66d6b4;
case 0x66d6ba:c.instructions+=11;goto B66d6ba;
case 0x66d6bc:c.instructions+=10;goto B66d6bc;
case 0x66d6bf:c.instructions+=9;goto B66d6bf;
case 0x66d6c1:c.instructions+=8;goto B66d6c1;
case 0x66d6c3:c.instructions+=7;goto B66d6c3;
case 0x66d6c5:c.instructions+=6;goto B66d6c5;
case 0x66d6c7:c.instructions+=5;goto B66d6c7;
case 0x66d6cb:c.instructions+=4;goto B66d6cb;
case 0x66d6cd:c.instructions+=3;goto B66d6cd;
case 0x66d6d0:c.instructions+=2;goto B66d6d0;
case 0x66d6d2:c.instructions+=1;goto B66d6d2;
case 0x66d6d7:goto L66d6d7;
case 0x66d6d9:c.instructions+=2;goto B66d6d9;
case 0x66d6db:c.instructions+=1;goto B66d6db;
case 0x66d6dd:goto L66d6dd;
case 0x66d6e0:c.instructions+=2;goto B66d6e0;
case 0x66d6e4:c.instructions+=1;goto B66d6e4;
case 0x66d6e6:goto L66d6e6;
case 0x66d6ea:c.instructions+=1;goto B66d6ea;
case 0x66d6ec:goto L66d6ec;
case 0x66d6ef:c.instructions+=1;goto B66d6ef;
case 0x66d6f1:goto L66d6f1;
case 0x66d6f3:c.instructions+=1;goto B66d6f3;
case 0x66d6f5:goto L66d6f5;
case 0x66d6f9:c.instructions+=1;goto B66d6f9;
case 0x66d6fb:goto L66d6fb;
case 0x66d6fe:c.instructions+=4;goto B66d6fe;
case 0x66d700:c.instructions+=3;goto B66d700;
case 0x66d701:c.instructions+=2;goto B66d701;
case 0x66d703:c.instructions+=1;goto B66d703;
case 0x66d708:goto L66d708;
case 0x66d70a:goto L66d70a;
case 0x66d710:c.instructions+=8;goto B66d710;
case 0x66d713:c.instructions+=7;goto B66d713;
case 0x66d716:c.instructions+=6;goto B66d716;
case 0x66d719:c.instructions+=5;goto B66d719;
case 0x66d71b:c.instructions+=4;goto B66d71b;
case 0x66d71d:c.instructions+=3;goto B66d71d;
case 0x66d71f:c.instructions+=2;goto B66d71f;
case 0x66d722:c.instructions+=1;goto B66d722;
case 0x66d727:goto L66d727;
case 0x66d729:c.instructions+=1;goto B66d729;
case 0x66d72b:goto L66d72b;
case 0x66d72c:c.instructions+=2;goto B66d72c;
case 0x66d72e:c.instructions+=1;goto B66d72e;
case 0x66d733:goto L66d733;
case 0x66d735:goto L66d735;
case 0x66d73a:goto L66d73a;
case 0x66d73b:c.instructions+=4;goto B66d73b;
case 0x66d73c:c.instructions+=3;goto B66d73c;
case 0x66d73d:c.instructions+=2;goto B66d73d;
case 0x66d73e:c.instructions+=1;goto B66d73e;
case 0x66d741:goto L66d741;
case 0x66d743:c.instructions+=10;goto B66d743;
case 0x66d744:c.instructions+=9;goto B66d744;
case 0x66d746:c.instructions+=8;goto B66d746;
case 0x66d747:c.instructions+=7;goto B66d747;
case 0x66d748:c.instructions+=6;goto B66d748;
case 0x66d74b:c.instructions+=5;goto B66d74b;
case 0x66d74c:c.instructions+=4;goto B66d74c;
case 0x66d74e:c.instructions+=3;goto B66d74e;
case 0x66d750:c.instructions+=2;goto B66d750;
case 0x66d753:c.instructions+=1;goto B66d753;
case 0x66d755:goto L66d755;
case 0x66d75c:c.instructions+=1;goto B66d75c;
case 0x66d75e:goto L66d75e;
case 0x66d75f:c.instructions+=6;goto B66d75f;
case 0x66d762:c.instructions+=5;goto B66d762;
case 0x66d763:c.instructions+=4;goto B66d763;
case 0x66d765:c.instructions+=3;goto B66d765;
case 0x66d768:c.instructions+=2;goto B66d768;
case 0x66d76a:c.instructions+=1;goto B66d76a;
case 0x66d76f:goto L66d76f;
case 0x66d771:c.instructions+=1;goto B66d771;
case 0x66d773:goto L66d773;
case 0x66d776:c.instructions+=2;goto B66d776;
case 0x66d779:c.instructions+=1;goto B66d779;
case 0x66d77b:goto L66d77b;
case 0x66d77f:c.instructions+=1;goto B66d77f;
case 0x66d781:goto L66d781;
case 0x66d785:c.instructions+=1;goto B66d785;
case 0x66d787:goto L66d787;
case 0x66d78a:c.instructions+=1;goto B66d78a;
case 0x66d78c:goto L66d78c;
case 0x66d78f:c.instructions+=7;goto B66d78f;
case 0x66d795:c.instructions+=6;goto B66d795;
case 0x66d798:c.instructions+=5;goto B66d798;
case 0x66d79b:c.instructions+=4;goto B66d79b;
case 0x66d79d:c.instructions+=3;goto B66d79d;
case 0x66d79f:c.instructions+=2;goto B66d79f;
case 0x66d7a1:c.instructions+=1;goto B66d7a1;
case 0x66d7a3:goto L66d7a3;
case 0x66d7a6:c.instructions+=1;goto B66d7a6;
case 0x66d7a9:goto L66d7a9;
case 0x66d7ac:c.instructions+=4;goto B66d7ac;
case 0x66d7af:c.instructions+=3;goto B66d7af;
case 0x66d7b2:c.instructions+=2;goto B66d7b2;
case 0x66d7b5:c.instructions+=1;goto B66d7b5;
case 0x66d7b7:goto L66d7b7;
case 0x66d7b9:c.instructions+=1;goto B66d7b9;
case 0x66d7bb:goto L66d7bb;
case 0x66d7be:c.instructions+=3;goto B66d7be;
case 0x66d7c0:c.instructions+=2;goto B66d7c0;
case 0x66d7c1:c.instructions+=1;goto B66d7c1;
case 0x66d7c4:goto L66d7c4;
case 0x66d7c6:c.instructions+=1;goto B66d7c6;
case 0x66d7c8:goto L66d7c8;
case 0x66d7cf:goto L66d7cf;
case 0x66d7d0:goto L66d7d0;
case 0x66d7d3:c.instructions+=4;goto B66d7d3;
case 0x66d7d4:c.instructions+=3;goto B66d7d4;
case 0x66d7d5:c.instructions+=2;goto B66d7d5;
case 0x66d7d6:c.instructions+=1;goto B66d7d6;
case 0x66d7d9:goto L66d7d9;
case 0x66d7db:c.instructions+=11;goto B66d7db;
case 0x66d7dc:c.instructions+=10;goto B66d7dc;
case 0x66d7de:c.instructions+=9;goto B66d7de;
case 0x66d7df:c.instructions+=8;goto B66d7df;
case 0x66d7e0:c.instructions+=7;goto B66d7e0;
case 0x66d7e3:c.instructions+=6;goto B66d7e3;
case 0x66d7e5:c.instructions+=5;goto B66d7e5;
case 0x66d7e6:c.instructions+=4;goto B66d7e6;
case 0x66d7e9:c.instructions+=3;goto B66d7e9;
case 0x66d7eb:c.instructions+=2;goto B66d7eb;
case 0x66d7ec:c.instructions+=1;goto B66d7ec;
case 0x66d7ee:goto L66d7ee;
case 0x66d7f0:c.instructions+=1;goto B66d7f0;
case 0x66d7f2:goto L66d7f2;
case 0x66d7f8:c.instructions+=11;goto B66d7f8;
case 0x66d7fa:c.instructions+=10;goto B66d7fa;
case 0x66d801:c.instructions+=9;goto B66d801;
case 0x66d803:c.instructions+=8;goto B66d803;
case 0x66d805:c.instructions+=7;goto B66d805;
case 0x66d807:c.instructions+=6;goto B66d807;
case 0x66d809:c.instructions+=5;goto B66d809;
case 0x66d80d:c.instructions+=4;goto B66d80d;
case 0x66d80f:c.instructions+=3;goto B66d80f;
case 0x66d810:c.instructions+=2;goto B66d810;
case 0x66d812:c.instructions+=1;goto B66d812;
case 0x66d817:goto L66d817;
case 0x66d819:c.instructions+=2;goto B66d819;
case 0x66d81b:c.instructions+=1;goto B66d81b;
case 0x66d821:goto L66d821;
case 0x66d824:c.instructions+=2;goto B66d824;
case 0x66d828:c.instructions+=1;goto B66d828;
case 0x66d82a:goto L66d82a;
case 0x66d82e:c.instructions+=1;goto B66d82e;
case 0x66d830:goto L66d830;
case 0x66d832:c.instructions+=2;goto B66d832;
case 0x66d834:c.instructions+=1;goto B66d834;
case 0x66d836:goto L66d836;
case 0x66d839:c.instructions+=1;goto B66d839;
case 0x66d83b:goto L66d83b;
case 0x66d83f:c.instructions+=1;goto B66d83f;
case 0x66d841:goto L66d841;
case 0x66d844:c.instructions+=4;goto B66d844;
case 0x66d846:c.instructions+=3;goto B66d846;
case 0x66d847:c.instructions+=2;goto B66d847;
case 0x66d849:c.instructions+=1;goto B66d849;
case 0x66d84e:goto L66d84e;
case 0x66d850:goto L66d850;
case 0x66d856:c.instructions+=8;goto B66d856;
case 0x66d859:c.instructions+=7;goto B66d859;
case 0x66d85c:c.instructions+=6;goto B66d85c;
case 0x66d85f:c.instructions+=5;goto B66d85f;
case 0x66d861:c.instructions+=4;goto B66d861;
case 0x66d863:c.instructions+=3;goto B66d863;
case 0x66d865:c.instructions+=2;goto B66d865;
case 0x66d868:c.instructions+=1;goto B66d868;
case 0x66d86a:goto L66d86a;
case 0x66d86c:c.instructions+=1;goto B66d86c;
case 0x66d86e:goto L66d86e;
case 0x66d871:c.instructions+=1;goto B66d871;
case 0x66d874:goto L66d874;
case 0x66d877:c.instructions+=4;goto B66d877;
case 0x66d87a:c.instructions+=3;goto B66d87a;
case 0x66d87d:c.instructions+=2;goto B66d87d;
case 0x66d881:c.instructions+=1;goto B66d881;
case 0x66d883:goto L66d883;
case 0x66d885:c.instructions+=1;goto B66d885;
case 0x66d887:goto L66d887;
case 0x66d88a:c.instructions+=4;goto B66d88a;
case 0x66d88b:c.instructions+=3;goto B66d88b;
case 0x66d88c:c.instructions+=2;goto B66d88c;
case 0x66d88e:c.instructions+=1;goto B66d88e;
case 0x66d893:goto L66d893;
case 0x66d895:c.instructions+=1;goto B66d895;
case 0x66d897:goto L66d897;
case 0x66d898:c.instructions+=2;goto B66d898;
case 0x66d89a:c.instructions+=1;goto B66d89a;
case 0x66d89f:goto L66d89f;
case 0x66d8a1:goto L66d8a1;
case 0x66d8a6:goto L66d8a6;
case 0x66d8a7:c.instructions+=4;goto B66d8a7;
case 0x66d8a8:c.instructions+=3;goto B66d8a8;
case 0x66d8a9:c.instructions+=2;goto B66d8a9;
case 0x66d8aa:c.instructions+=1;goto B66d8aa;
case 0x66d8ad:goto L66d8ad;
case 0x66d8af:c.instructions+=8;goto B66d8af;
case 0x66d8b0:c.instructions+=7;goto B66d8b0;
case 0x66d8b2:c.instructions+=6;goto B66d8b2;
case 0x66d8b3:c.instructions+=5;goto B66d8b3;
case 0x66d8b4:c.instructions+=4;goto B66d8b4;
case 0x66d8b7:c.instructions+=3;goto B66d8b7;
case 0x66d8b9:c.instructions+=2;goto B66d8b9;
case 0x66d8bb:c.instructions+=1;goto B66d8bb;
case 0x66d8bd:goto L66d8bd;
case 0x66d8c2:c.instructions+=1;goto B66d8c2;
case 0x66d8c7:goto L66d8c7;
case 0x66d8c8:c.instructions+=6;goto B66d8c8;
case 0x66d8cb:c.instructions+=5;goto B66d8cb;
case 0x66d8cc:c.instructions+=4;goto B66d8cc;
case 0x66d8ce:c.instructions+=3;goto B66d8ce;
case 0x66d8d1:c.instructions+=2;goto B66d8d1;
case 0x66d8d3:c.instructions+=1;goto B66d8d3;
case 0x66d8d8:goto L66d8d8;
case 0x66d8da:c.instructions+=1;goto B66d8da;
case 0x66d8dc:goto L66d8dc;
case 0x66d8df:c.instructions+=2;goto B66d8df;
case 0x66d8e3:c.instructions+=1;goto B66d8e3;
case 0x66d8e5:goto L66d8e5;
case 0x66d8e9:c.instructions+=1;goto B66d8e9;
case 0x66d8eb:goto L66d8eb;
case 0x66d8ef:c.instructions+=2;goto B66d8ef;
case 0x66d8f1:c.instructions+=1;goto B66d8f1;
case 0x66d8f3:goto L66d8f3;
case 0x66d8f6:c.instructions+=1;goto B66d8f6;
case 0x66d8f8:goto L66d8f8;
case 0x66d8fb:c.instructions+=1;goto B66d8fb;
case 0x66d8fd:goto L66d8fd;
case 0x66d900:c.instructions+=1;goto B66d900;
case 0x66d902:goto L66d902;
case 0x66d905:c.instructions+=1;goto B66d905;
case 0x66d907:goto L66d907;
case 0x66d90a:c.instructions+=1;goto B66d90a;
case 0x66d90c:goto L66d90c;
case 0x66d90f:c.instructions+=7;goto B66d90f;
case 0x66d915:c.instructions+=6;goto B66d915;
case 0x66d918:c.instructions+=5;goto B66d918;
case 0x66d91b:c.instructions+=4;goto B66d91b;
case 0x66d91d:c.instructions+=3;goto B66d91d;
case 0x66d91f:c.instructions+=2;goto B66d91f;
case 0x66d921:c.instructions+=1;goto B66d921;
case 0x66d923:goto L66d923;
case 0x66d926:c.instructions+=1;goto B66d926;
case 0x66d929:goto L66d929;
case 0x66d92c:c.instructions+=5;goto B66d92c;
case 0x66d92f:c.instructions+=4;goto B66d92f;
case 0x66d933:c.instructions+=3;goto B66d933;
case 0x66d935:c.instructions+=2;goto B66d935;
case 0x66d937:c.instructions+=1;goto B66d937;
case 0x66d939:goto L66d939;
case 0x66d93b:c.instructions+=2;goto B66d93b;
case 0x66d93c:c.instructions+=1;goto B66d93c;
case 0x66d93f:goto L66d93f;
case 0x66d941:goto L66d941;
case 0x66d946:goto L66d946;
case 0x66d947:goto L66d947;
case 0x66d948:c.instructions+=4;goto B66d948;
case 0x66d94a:c.instructions+=3;goto B66d94a;
case 0x66d94b:c.instructions+=2;goto B66d94b;
case 0x66d94c:c.instructions+=1;goto B66d94c;
case 0x66d94f:goto L66d94f;
case 0x66d951:c.instructions+=22;goto B66d951;
case 0x66d952:c.instructions+=21;goto B66d952;
case 0x66d954:c.instructions+=20;goto B66d954;
case 0x66d955:c.instructions+=19;goto B66d955;
case 0x66d959:c.instructions+=18;goto B66d959;
case 0x66d95a:c.instructions+=17;goto B66d95a;
case 0x66d95b:c.instructions+=16;goto B66d95b;
case 0x66d95e:c.instructions+=15;goto B66d95e;
case 0x66d95f:c.instructions+=14;goto B66d95f;
case 0x66d961:c.instructions+=13;goto B66d961;
case 0x66d967:c.instructions+=12;goto B66d967;
case 0x66d969:c.instructions+=11;goto B66d969;
case 0x66d96a:c.instructions+=10;goto B66d96a;
case 0x66d96d:c.instructions+=9;goto B66d96d;
case 0x66d96f:c.instructions+=8;goto B66d96f;
case 0x66d971:c.instructions+=7;goto B66d971;
case 0x66d977:c.instructions+=6;goto B66d977;
case 0x66d979:c.instructions+=5;goto B66d979;
case 0x66d97d:c.instructions+=4;goto B66d97d;
case 0x66d97f:c.instructions+=3;goto B66d97f;
case 0x66d982:c.instructions+=2;goto B66d982;
case 0x66d984:c.instructions+=1;goto B66d984;
case 0x66d989:goto L66d989;
case 0x66d98b:c.instructions+=2;goto B66d98b;
case 0x66d98d:c.instructions+=1;goto B66d98d;
case 0x66d993:goto L66d993;
case 0x66d996:c.instructions+=2;goto B66d996;
case 0x66d99a:c.instructions+=1;goto B66d99a;
case 0x66d99c:goto L66d99c;
case 0x66d9a0:c.instructions+=1;goto B66d9a0;
case 0x66d9a6:goto L66d9a6;
case 0x66d9a9:c.instructions+=1;goto B66d9a9;
case 0x66d9af:goto L66d9af;
case 0x66d9b2:c.instructions+=1;goto B66d9b2;
case 0x66d9b8:goto L66d9b8;
case 0x66d9bc:c.instructions+=1;goto B66d9bc;
case 0x66d9be:goto L66d9be;
case 0x66d9c1:c.instructions+=4;goto B66d9c1;
case 0x66d9c3:c.instructions+=3;goto B66d9c3;
case 0x66d9c4:c.instructions+=2;goto B66d9c4;
case 0x66d9c6:c.instructions+=1;goto B66d9c6;
case 0x66d9cb:goto L66d9cb;
case 0x66d9d0:goto L66d9d0;
case 0x66d9d6:c.instructions+=7;goto B66d9d6;
case 0x66d9d9:c.instructions+=6;goto B66d9d9;
case 0x66d9dc:c.instructions+=5;goto B66d9dc;
case 0x66d9df:c.instructions+=4;goto B66d9df;
case 0x66d9e1:c.instructions+=3;goto B66d9e1;
case 0x66d9e4:c.instructions+=2;goto B66d9e4;
case 0x66d9e7:c.instructions+=1;goto B66d9e7;
case 0x66d9e9:goto L66d9e9;
case 0x66d9ec:c.instructions+=5;goto B66d9ec;
case 0x66d9ef:c.instructions+=4;goto B66d9ef;
case 0x66d9f2:c.instructions+=3;goto B66d9f2;
case 0x66d9f4:c.instructions+=2;goto B66d9f4;
case 0x66d9f7:c.instructions+=1;goto B66d9f7;
case 0x66d9f9:goto L66d9f9;
case 0x66d9fc:c.instructions+=11;goto B66d9fc;
case 0x66d9ff:c.instructions+=10;goto B66d9ff;
case 0x66da05:c.instructions+=9;goto B66da05;
case 0x66da08:c.instructions+=8;goto B66da08;
case 0x66da0b:c.instructions+=7;goto B66da0b;
case 0x66da0e:c.instructions+=6;goto B66da0e;
case 0x66da11:c.instructions+=5;goto B66da11;
case 0x66da14:c.instructions+=4;goto B66da14;
case 0x66da17:c.instructions+=3;goto B66da17;
case 0x66da19:c.instructions+=2;goto B66da19;
case 0x66da1c:c.instructions+=1;goto B66da1c;
case 0x66da1f:goto L66da1f;
case 0x66da22:c.instructions+=4;goto B66da22;
case 0x66da25:c.instructions+=3;goto B66da25;
case 0x66da28:c.instructions+=2;goto B66da28;
case 0x66da2c:c.instructions+=1;goto B66da2c;
case 0x66da2e:goto L66da2e;
case 0x66da32:c.instructions+=1;goto B66da32;
case 0x66da34:goto L66da34;
case 0x66da37:c.instructions+=5;goto B66da37;
case 0x66da3a:c.instructions+=4;goto B66da3a;
case 0x66da3d:c.instructions+=3;goto B66da3d;
case 0x66da3f:c.instructions+=2;goto B66da3f;
case 0x66da42:c.instructions+=1;goto B66da42;
case 0x66da44:goto L66da44;
case 0x66da47:c.instructions+=10;goto B66da47;
case 0x66da4a:c.instructions+=9;goto B66da4a;
case 0x66da50:c.instructions+=8;goto B66da50;
case 0x66da53:c.instructions+=7;goto B66da53;
case 0x66da56:c.instructions+=6;goto B66da56;
case 0x66da59:c.instructions+=5;goto B66da59;
case 0x66da5c:c.instructions+=4;goto B66da5c;
case 0x66da5f:c.instructions+=3;goto B66da5f;
case 0x66da61:c.instructions+=2;goto B66da61;
case 0x66da64:c.instructions+=1;goto B66da64;
case 0x66da67:goto L66da67;
case 0x66da6a:c.instructions+=3;goto B66da6a;
case 0x66da6d:c.instructions+=2;goto B66da6d;
case 0x66da72:c.instructions+=1;goto B66da72;
case 0x66da74:goto L66da74;
case 0x66da77:c.instructions+=5;goto B66da77;
case 0x66da79:c.instructions+=4;goto B66da79;
case 0x66da7b:c.instructions+=3;goto B66da7b;
case 0x66da7d:c.instructions+=2;goto B66da7d;
case 0x66da80:c.instructions+=1;goto B66da80;
case 0x66da85:goto L66da85;
case 0x66da87:c.instructions+=1;goto B66da87;
case 0x66da89:goto L66da89;
case 0x66da8a:c.instructions+=2;goto B66da8a;
case 0x66da8c:c.instructions+=1;goto B66da8c;
case 0x66da91:goto L66da91;
case 0x66da93:goto L66da93;
case 0x66da98:c.instructions+=1;goto B66da98;
case 0x66da9a:goto L66da9a;
case 0x66da9d:goto L66da9d;
case 0x66da9e:c.instructions+=4;goto B66da9e;
case 0x66da9f:c.instructions+=3;goto B66da9f;
case 0x66daa0:c.instructions+=2;goto B66daa0;
case 0x66daa1:c.instructions+=1;goto B66daa1;
case 0x66daa4:goto L66daa4;
case 0x66daa6:c.instructions+=8;goto B66daa6;
case 0x66daa7:c.instructions+=7;goto B66daa7;
case 0x66daa9:c.instructions+=6;goto B66daa9;
case 0x66daaa:c.instructions+=5;goto B66daaa;
case 0x66daab:c.instructions+=4;goto B66daab;
case 0x66daad:c.instructions+=3;goto B66daad;
case 0x66dab0:c.instructions+=2;goto B66dab0;
case 0x66dab3:c.instructions+=1;goto B66dab3;
case 0x66dab5:goto L66dab5;
case 0x66dabc:c.instructions+=1;goto B66dabc;
case 0x66dac1:goto L66dac1;
case 0x66dac2:c.instructions+=6;goto B66dac2;
case 0x66dac5:c.instructions+=5;goto B66dac5;
case 0x66dac6:c.instructions+=4;goto B66dac6;
case 0x66dac8:c.instructions+=3;goto B66dac8;
case 0x66dacb:c.instructions+=2;goto B66dacb;
case 0x66dacd:c.instructions+=1;goto B66dacd;
case 0x66dad2:goto L66dad2;
case 0x66dad4:c.instructions+=1;goto B66dad4;
case 0x66dad6:goto L66dad6;
case 0x66dad9:c.instructions+=2;goto B66dad9;
case 0x66dadc:c.instructions+=1;goto B66dadc;
case 0x66dade:goto L66dade;
case 0x66dae2:c.instructions+=1;goto B66dae2;
case 0x66dae4:goto L66dae4;
case 0x66dae8:c.instructions+=1;goto B66dae8;
case 0x66daea:goto L66daea;
case 0x66daed:c.instructions+=1;goto B66daed;
case 0x66daef:goto L66daef;
case 0x66daf2:c.instructions+=4;goto B66daf2;
case 0x66daf8:c.instructions+=3;goto B66daf8;
case 0x66dafb:c.instructions+=2;goto B66dafb;
case 0x66dafe:c.instructions+=1;goto B66dafe;
case 0x66db00:goto L66db00;
case 0x66db03:c.instructions+=4;goto B66db03;
case 0x66db06:c.instructions+=3;goto B66db06;
case 0x66db09:c.instructions+=2;goto B66db09;
case 0x66db0c:c.instructions+=1;goto B66db0c;
case 0x66db0e:goto L66db0e;
case 0x66db11:c.instructions+=12;goto B66db11;
case 0x66db14:c.instructions+=11;goto B66db14;
case 0x66db17:c.instructions+=10;goto B66db17;
case 0x66db18:c.instructions+=9;goto B66db18;
case 0x66db1e:c.instructions+=8;goto B66db1e;
case 0x66db21:c.instructions+=7;goto B66db21;
case 0x66db24:c.instructions+=6;goto B66db24;
case 0x66db27:c.instructions+=5;goto B66db27;
case 0x66db2a:c.instructions+=4;goto B66db2a;
case 0x66db2d:c.instructions+=3;goto B66db2d;
case 0x66db30:c.instructions+=2;goto B66db30;
case 0x66db33:c.instructions+=1;goto B66db33;
case 0x66db34:goto L66db34;
case 0x66db37:c.instructions+=6;goto B66db37;
case 0x66db3a:c.instructions+=5;goto B66db3a;
case 0x66db3e:c.instructions+=4;goto B66db3e;
case 0x66db40:c.instructions+=3;goto B66db40;
case 0x66db43:c.instructions+=2;goto B66db43;
case 0x66db45:c.instructions+=1;goto B66db45;
case 0x66db47:goto L66db47;
case 0x66db49:c.instructions+=2;goto B66db49;
case 0x66db4a:c.instructions+=1;goto B66db4a;
case 0x66db4d:goto L66db4d;
case 0x66db4f:goto L66db4f;
case 0x66db56:goto L66db56;
case 0x66db57:goto L66db57;
case 0x66db5a:c.instructions+=3;goto B66db5a;
case 0x66db5b:c.instructions+=2;goto B66db5b;
case 0x66db5c:c.instructions+=1;goto B66db5c;
case 0x66db5f:goto L66db5f;
case 0x66db61:c.instructions+=22;goto B66db61;
case 0x66db62:c.instructions+=21;goto B66db62;
case 0x66db64:c.instructions+=20;goto B66db64;
case 0x66db65:c.instructions+=19;goto B66db65;
case 0x66db69:c.instructions+=18;goto B66db69;
case 0x66db6a:c.instructions+=17;goto B66db6a;
case 0x66db6b:c.instructions+=16;goto B66db6b;
case 0x66db6e:c.instructions+=15;goto B66db6e;
case 0x66db6f:c.instructions+=14;goto B66db6f;
case 0x66db71:c.instructions+=13;goto B66db71;
case 0x66db77:c.instructions+=12;goto B66db77;
case 0x66db79:c.instructions+=11;goto B66db79;
case 0x66db7a:c.instructions+=10;goto B66db7a;
case 0x66db7d:c.instructions+=9;goto B66db7d;
case 0x66db7f:c.instructions+=8;goto B66db7f;
case 0x66db81:c.instructions+=7;goto B66db81;
case 0x66db87:c.instructions+=6;goto B66db87;
case 0x66db89:c.instructions+=5;goto B66db89;
case 0x66db8d:c.instructions+=4;goto B66db8d;
case 0x66db8f:c.instructions+=3;goto B66db8f;
case 0x66db92:c.instructions+=2;goto B66db92;
case 0x66db94:c.instructions+=1;goto B66db94;
case 0x66db99:goto L66db99;
case 0x66db9b:c.instructions+=2;goto B66db9b;
case 0x66db9d:c.instructions+=1;goto B66db9d;
case 0x66dba3:goto L66dba3;
case 0x66dba6:c.instructions+=2;goto B66dba6;
case 0x66dbaa:c.instructions+=1;goto B66dbaa;
case 0x66dbac:goto L66dbac;
case 0x66dbb0:c.instructions+=1;goto B66dbb0;
case 0x66dbb6:goto L66dbb6;
case 0x66dbb9:c.instructions+=1;goto B66dbb9;
case 0x66dbbf:goto L66dbbf;
case 0x66dbc2:c.instructions+=1;goto B66dbc2;
case 0x66dbc8:goto L66dbc8;
case 0x66dbcc:c.instructions+=1;goto B66dbcc;
case 0x66dbce:goto L66dbce;
case 0x66dbd1:c.instructions+=4;goto B66dbd1;
case 0x66dbd3:c.instructions+=3;goto B66dbd3;
case 0x66dbd4:c.instructions+=2;goto B66dbd4;
case 0x66dbd6:c.instructions+=1;goto B66dbd6;
case 0x66dbdb:goto L66dbdb;
case 0x66dbe0:goto L66dbe0;
case 0x66dbe6:c.instructions+=7;goto B66dbe6;
case 0x66dbe9:c.instructions+=6;goto B66dbe9;
case 0x66dbec:c.instructions+=5;goto B66dbec;
case 0x66dbef:c.instructions+=4;goto B66dbef;
case 0x66dbf1:c.instructions+=3;goto B66dbf1;
case 0x66dbf4:c.instructions+=2;goto B66dbf4;
case 0x66dbf7:c.instructions+=1;goto B66dbf7;
case 0x66dbf9:goto L66dbf9;
case 0x66dbfc:c.instructions+=5;goto B66dbfc;
case 0x66dbff:c.instructions+=4;goto B66dbff;
case 0x66dc02:c.instructions+=3;goto B66dc02;
case 0x66dc04:c.instructions+=2;goto B66dc04;
case 0x66dc07:c.instructions+=1;goto B66dc07;
case 0x66dc09:goto L66dc09;
case 0x66dc0c:c.instructions+=11;goto B66dc0c;
case 0x66dc0f:c.instructions+=10;goto B66dc0f;
case 0x66dc15:c.instructions+=9;goto B66dc15;
case 0x66dc18:c.instructions+=8;goto B66dc18;
case 0x66dc1b:c.instructions+=7;goto B66dc1b;
case 0x66dc1e:c.instructions+=6;goto B66dc1e;
case 0x66dc21:c.instructions+=5;goto B66dc21;
case 0x66dc24:c.instructions+=4;goto B66dc24;
case 0x66dc27:c.instructions+=3;goto B66dc27;
case 0x66dc29:c.instructions+=2;goto B66dc29;
case 0x66dc2c:c.instructions+=1;goto B66dc2c;
case 0x66dc2f:goto L66dc2f;
case 0x66dc32:c.instructions+=4;goto B66dc32;
case 0x66dc35:c.instructions+=3;goto B66dc35;
case 0x66dc38:c.instructions+=2;goto B66dc38;
case 0x66dc3c:c.instructions+=1;goto B66dc3c;
case 0x66dc3e:goto L66dc3e;
case 0x66dc42:c.instructions+=1;goto B66dc42;
case 0x66dc44:goto L66dc44;
case 0x66dc47:c.instructions+=5;goto B66dc47;
case 0x66dc4a:c.instructions+=4;goto B66dc4a;
case 0x66dc4d:c.instructions+=3;goto B66dc4d;
case 0x66dc4f:c.instructions+=2;goto B66dc4f;
case 0x66dc52:c.instructions+=1;goto B66dc52;
case 0x66dc54:goto L66dc54;
case 0x66dc57:c.instructions+=10;goto B66dc57;
case 0x66dc5a:c.instructions+=9;goto B66dc5a;
case 0x66dc60:c.instructions+=8;goto B66dc60;
case 0x66dc63:c.instructions+=7;goto B66dc63;
case 0x66dc66:c.instructions+=6;goto B66dc66;
case 0x66dc69:c.instructions+=5;goto B66dc69;
case 0x66dc6c:c.instructions+=4;goto B66dc6c;
case 0x66dc6f:c.instructions+=3;goto B66dc6f;
case 0x66dc71:c.instructions+=2;goto B66dc71;
case 0x66dc74:c.instructions+=1;goto B66dc74;
case 0x66dc77:goto L66dc77;
case 0x66dc7a:c.instructions+=3;goto B66dc7a;
case 0x66dc7d:c.instructions+=2;goto B66dc7d;
case 0x66dc82:c.instructions+=1;goto B66dc82;
case 0x66dc84:goto L66dc84;
case 0x66dc87:c.instructions+=5;goto B66dc87;
case 0x66dc89:c.instructions+=4;goto B66dc89;
case 0x66dc8b:c.instructions+=3;goto B66dc8b;
case 0x66dc8d:c.instructions+=2;goto B66dc8d;
case 0x66dc90:c.instructions+=1;goto B66dc90;
case 0x66dc95:goto L66dc95;
case 0x66dc97:c.instructions+=1;goto B66dc97;
case 0x66dc99:goto L66dc99;
case 0x66dc9a:c.instructions+=2;goto B66dc9a;
case 0x66dc9c:c.instructions+=1;goto B66dc9c;
case 0x66dca1:goto L66dca1;
case 0x66dca3:goto L66dca3;
case 0x66dca8:c.instructions+=1;goto B66dca8;
case 0x66dcaa:goto L66dcaa;
case 0x66dcad:goto L66dcad;
case 0x66dcae:c.instructions+=4;goto B66dcae;
case 0x66dcaf:c.instructions+=3;goto B66dcaf;
case 0x66dcb0:c.instructions+=2;goto B66dcb0;
case 0x66dcb1:c.instructions+=1;goto B66dcb1;
case 0x66dcb4:goto L66dcb4;
case 0x66dcb6:c.instructions+=8;goto B66dcb6;
case 0x66dcb7:c.instructions+=7;goto B66dcb7;
case 0x66dcb9:c.instructions+=6;goto B66dcb9;
case 0x66dcba:c.instructions+=5;goto B66dcba;
case 0x66dcbb:c.instructions+=4;goto B66dcbb;
case 0x66dcbd:c.instructions+=3;goto B66dcbd;
case 0x66dcc0:c.instructions+=2;goto B66dcc0;
case 0x66dcc3:c.instructions+=1;goto B66dcc3;
case 0x66dcc5:goto L66dcc5;
case 0x66dccc:c.instructions+=1;goto B66dccc;
case 0x66dcd1:goto L66dcd1;
case 0x66dcd2:c.instructions+=6;goto B66dcd2;
case 0x66dcd5:c.instructions+=5;goto B66dcd5;
case 0x66dcd6:c.instructions+=4;goto B66dcd6;
case 0x66dcd8:c.instructions+=3;goto B66dcd8;
case 0x66dcdb:c.instructions+=2;goto B66dcdb;
case 0x66dcdd:c.instructions+=1;goto B66dcdd;
case 0x66dce2:goto L66dce2;
case 0x66dce4:c.instructions+=1;goto B66dce4;
case 0x66dce6:goto L66dce6;
case 0x66dce9:c.instructions+=2;goto B66dce9;
case 0x66dcec:c.instructions+=1;goto B66dcec;
case 0x66dcee:goto L66dcee;
case 0x66dcf2:c.instructions+=1;goto B66dcf2;
case 0x66dcf4:goto L66dcf4;
case 0x66dcf8:c.instructions+=1;goto B66dcf8;
case 0x66dcfa:goto L66dcfa;
case 0x66dcfd:c.instructions+=1;goto B66dcfd;
case 0x66dcff:goto L66dcff;
case 0x66dd02:c.instructions+=4;goto B66dd02;
case 0x66dd08:c.instructions+=3;goto B66dd08;
case 0x66dd0b:c.instructions+=2;goto B66dd0b;
case 0x66dd0e:c.instructions+=1;goto B66dd0e;
case 0x66dd10:goto L66dd10;
case 0x66dd13:c.instructions+=4;goto B66dd13;
case 0x66dd16:c.instructions+=3;goto B66dd16;
case 0x66dd19:c.instructions+=2;goto B66dd19;
case 0x66dd1c:c.instructions+=1;goto B66dd1c;
case 0x66dd1e:goto L66dd1e;
case 0x66dd21:c.instructions+=12;goto B66dd21;
case 0x66dd24:c.instructions+=11;goto B66dd24;
case 0x66dd27:c.instructions+=10;goto B66dd27;
case 0x66dd28:c.instructions+=9;goto B66dd28;
case 0x66dd2e:c.instructions+=8;goto B66dd2e;
case 0x66dd31:c.instructions+=7;goto B66dd31;
case 0x66dd34:c.instructions+=6;goto B66dd34;
case 0x66dd37:c.instructions+=5;goto B66dd37;
case 0x66dd3a:c.instructions+=4;goto B66dd3a;
case 0x66dd3d:c.instructions+=3;goto B66dd3d;
case 0x66dd40:c.instructions+=2;goto B66dd40;
case 0x66dd43:c.instructions+=1;goto B66dd43;
case 0x66dd44:goto L66dd44;
case 0x66dd47:c.instructions+=6;goto B66dd47;
case 0x66dd4a:c.instructions+=5;goto B66dd4a;
case 0x66dd4e:c.instructions+=4;goto B66dd4e;
case 0x66dd50:c.instructions+=3;goto B66dd50;
case 0x66dd53:c.instructions+=2;goto B66dd53;
case 0x66dd55:c.instructions+=1;goto B66dd55;
case 0x66dd57:goto L66dd57;
case 0x66dd59:c.instructions+=2;goto B66dd59;
case 0x66dd5a:c.instructions+=1;goto B66dd5a;
case 0x66dd5d:goto L66dd5d;
case 0x66dd5f:goto L66dd5f;
case 0x66dd66:goto L66dd66;
case 0x66dd67:goto L66dd67;
case 0x66dd6a:c.instructions+=3;goto B66dd6a;
case 0x66dd6b:c.instructions+=2;goto B66dd6b;
case 0x66dd6c:c.instructions+=1;goto B66dd6c;
case 0x66dd6f:goto L66dd6f;
case 0x66dd71:c.instructions+=14;goto B66dd71;
case 0x66dd72:c.instructions+=13;goto B66dd72;
case 0x66dd74:c.instructions+=12;goto B66dd74;
case 0x66dd77:c.instructions+=11;goto B66dd77;
case 0x66dd7a:c.instructions+=10;goto B66dd7a;
case 0x66dd7b:c.instructions+=9;goto B66dd7b;
case 0x66dd7c:c.instructions+=8;goto B66dd7c;
case 0x66dd7e:c.instructions+=7;goto B66dd7e;
case 0x66dd80:c.instructions+=6;goto B66dd80;
case 0x66dd81:c.instructions+=5;goto B66dd81;
case 0x66dd83:c.instructions+=4;goto B66dd83;
case 0x66dd84:c.instructions+=3;goto B66dd84;
case 0x66dd87:c.instructions+=2;goto B66dd87;
case 0x66dd8a:c.instructions+=1;goto B66dd8a;
case 0x66dd8c:goto L66dd8c;
case 0x66dd8e:c.instructions+=1;goto B66dd8e;
case 0x66dd90:goto L66dd90;
case 0x66dd96:c.instructions+=15;goto B66dd96;
case 0x66dd98:c.instructions+=14;goto B66dd98;
case 0x66dd9b:c.instructions+=13;goto B66dd9b;
case 0x66dd9d:c.instructions+=12;goto B66dd9d;
case 0x66dda3:c.instructions+=11;goto B66dda3;
case 0x66dda5:c.instructions+=10;goto B66dda5;
case 0x66dda8:c.instructions+=9;goto B66dda8;
case 0x66ddaa:c.instructions+=8;goto B66ddaa;
case 0x66ddab:c.instructions+=7;goto B66ddab;
case 0x66ddae:c.instructions+=6;goto B66ddae;
case 0x66ddb0:c.instructions+=5;goto B66ddb0;
case 0x66ddb1:c.instructions+=4;goto B66ddb1;
case 0x66ddb2:c.instructions+=3;goto B66ddb2;
case 0x66ddb4:c.instructions+=2;goto B66ddb4;
case 0x66ddb7:c.instructions+=1;goto B66ddb7;
case 0x66ddbc:goto L66ddbc;
case 0x66ddbe:c.instructions+=2;goto B66ddbe;
case 0x66ddc0:c.instructions+=1;goto B66ddc0;
case 0x66ddc6:goto L66ddc6;
case 0x66ddc9:c.instructions+=2;goto B66ddc9;
case 0x66ddcc:c.instructions+=1;goto B66ddcc;
case 0x66ddce:goto L66ddce;
case 0x66ddd2:c.instructions+=1;goto B66ddd2;
case 0x66ddd8:goto L66ddd8;
case 0x66ddda:c.instructions+=3;goto B66ddda;
case 0x66dddb:c.instructions+=2;goto B66dddb;
case 0x66ddde:c.instructions+=1;goto B66ddde;
case 0x66dde0:goto L66dde0;
case 0x66dde3:c.instructions+=4;goto B66dde3;
case 0x66dde5:c.instructions+=3;goto B66dde5;
case 0x66dde6:c.instructions+=2;goto B66dde6;
case 0x66dde8:c.instructions+=1;goto B66dde8;
case 0x66dded:goto L66dded;
case 0x66ddf0:c.instructions+=1;goto B66ddf0;
case 0x66ddf5:goto L66ddf5;
case 0x66ddf8:c.instructions+=2;goto B66ddf8;
case 0x66ddfa:c.instructions+=1;goto B66ddfa;
case 0x66de00:goto L66de00;
case 0x66de02:c.instructions+=1;goto B66de02;
case 0x66de08:goto L66de08;
case 0x66de0b:c.instructions+=4;goto B66de0b;
case 0x66de0e:c.instructions+=3;goto B66de0e;
case 0x66de10:c.instructions+=2;goto B66de10;
case 0x66de12:c.instructions+=1;goto B66de12;
case 0x66de14:goto L66de14;
case 0x66de16:c.instructions+=1;goto B66de16;
case 0x66de18:goto L66de18;
case 0x66de1a:c.instructions+=1;goto B66de1a;
case 0x66de1c:goto L66de1c;
case 0x66de1f:c.instructions+=1;goto B66de1f;
case 0x66de21:goto L66de21;
case 0x66de24:c.instructions+=29;goto B66de24;
case 0x66de2a:c.instructions+=28;goto B66de2a;
case 0x66de2c:c.instructions+=27;goto B66de2c;
case 0x66de2f:c.instructions+=26;goto B66de2f;
case 0x66de32:c.instructions+=25;goto B66de32;
case 0x66de35:c.instructions+=24;goto B66de35;
case 0x66de37:c.instructions+=23;goto B66de37;
case 0x66de3a:c.instructions+=22;goto B66de3a;
case 0x66de3d:c.instructions+=21;goto B66de3d;
case 0x66de40:c.instructions+=20;goto B66de40;
case 0x66de42:c.instructions+=19;goto B66de42;
case 0x66de45:c.instructions+=18;goto B66de45;
case 0x66de48:c.instructions+=17;goto B66de48;
case 0x66de4b:c.instructions+=16;goto B66de4b;
case 0x66de4e:c.instructions+=15;goto B66de4e;
case 0x66de51:c.instructions+=14;goto B66de51;
case 0x66de54:c.instructions+=13;goto B66de54;
case 0x66de56:c.instructions+=12;goto B66de56;
case 0x66de59:c.instructions+=11;goto B66de59;
case 0x66de5c:c.instructions+=10;goto B66de5c;
case 0x66de5f:c.instructions+=9;goto B66de5f;
case 0x66de61:c.instructions+=8;goto B66de61;
case 0x66de63:c.instructions+=7;goto B66de63;
case 0x66de65:c.instructions+=6;goto B66de65;
case 0x66de68:c.instructions+=5;goto B66de68;
case 0x66de6b:c.instructions+=4;goto B66de6b;
case 0x66de6d:c.instructions+=3;goto B66de6d;
case 0x66de70:c.instructions+=2;goto B66de70;
case 0x66de72:c.instructions+=1;goto B66de72;
case 0x66de74:goto L66de74;
case 0x66de78:c.instructions+=5;goto B66de78;
case 0x66de7a:c.instructions+=4;goto B66de7a;
case 0x66de7d:c.instructions+=3;goto B66de7d;
case 0x66de7e:c.instructions+=2;goto B66de7e;
case 0x66de80:c.instructions+=1;goto B66de80;
case 0x66de82:goto L66de82;
case 0x66de84:goto L66de84;
case 0x66de86:c.instructions+=1;goto B66de86;
case 0x66de88:goto L66de88;
case 0x66de8a:c.instructions+=1;goto B66de8a;
case 0x66de8c:goto L66de8c;
case 0x66de8d:c.instructions+=1;goto B66de8d;
case 0x66de8f:goto L66de8f;
case 0x66de90:c.instructions+=1;goto B66de90;
case 0x66de92:goto L66de92;
case 0x66de93:c.instructions+=1;goto B66de93;
case 0x66de95:goto L66de95;
case 0x66de98:c.instructions+=7;goto B66de98;
case 0x66de9a:c.instructions+=6;goto B66de9a;
case 0x66de9c:c.instructions+=5;goto B66de9c;
case 0x66de9e:c.instructions+=4;goto B66de9e;
case 0x66dea0:c.instructions+=3;goto B66dea0;
case 0x66dea2:c.instructions+=2;goto B66dea2;
case 0x66dea5:c.instructions+=1;goto B66dea5;
case 0x66dea7:goto L66dea7;
case 0x66dea9:c.instructions+=1;goto B66dea9;
case 0x66deab:goto L66deab;
case 0x66dead:c.instructions+=3;goto B66dead;
case 0x66deb0:c.instructions+=2;goto B66deb0;
case 0x66deb2:c.instructions+=1;goto B66deb2;
case 0x66deb4:goto L66deb4;
case 0x66deb6:c.instructions+=1;goto B66deb6;
case 0x66deb8:goto L66deb8;
case 0x66deba:c.instructions+=9;goto B66deba;
case 0x66debc:c.instructions+=8;goto B66debc;
case 0x66debe:c.instructions+=7;goto B66debe;
case 0x66dec0:c.instructions+=6;goto B66dec0;
case 0x66dec3:c.instructions+=5;goto B66dec3;
case 0x66dec5:c.instructions+=4;goto B66dec5;
case 0x66dec8:c.instructions+=3;goto B66dec8;
case 0x66decb:c.instructions+=2;goto B66decb;
case 0x66decd:c.instructions+=1;goto B66decd;
case 0x66decf:goto L66decf;
case 0x66ded1:c.instructions+=3;goto B66ded1;
case 0x66ded4:c.instructions+=2;goto B66ded4;
case 0x66ded7:c.instructions+=1;goto B66ded7;
case 0x66ded9:goto L66ded9;
case 0x66deda:c.instructions+=2;goto B66deda;
case 0x66dedd:c.instructions+=1;goto B66dedd;
case 0x66dee2:goto L66dee2;
case 0x66dee7:goto L66dee7;
case 0x66deee:c.instructions+=1;goto B66deee;
case 0x66def0:goto L66def0;
case 0x66def2:goto L66def2;
case 0x66def5:c.instructions+=5;goto B66def5;
case 0x66def6:c.instructions+=4;goto B66def6;
case 0x66def7:c.instructions+=3;goto B66def7;
case 0x66def8:c.instructions+=2;goto B66def8;
case 0x66def9:c.instructions+=1;goto B66def9;
case 0x66defc:goto L66defc;
case 0x66defe:c.instructions+=10;goto B66defe;
case 0x66deff:c.instructions+=9;goto B66deff;
case 0x66df01:c.instructions+=8;goto B66df01;
case 0x66df04:c.instructions+=7;goto B66df04;
case 0x66df05:c.instructions+=6;goto B66df05;
case 0x66df06:c.instructions+=5;goto B66df06;
case 0x66df09:c.instructions+=4;goto B66df09;
case 0x66df0b:c.instructions+=3;goto B66df0b;
case 0x66df0d:c.instructions+=2;goto B66df0d;
case 0x66df10:c.instructions+=1;goto B66df10;
case 0x66df12:goto L66df12;
case 0x66df19:c.instructions+=1;goto B66df19;
case 0x66df1e:goto L66df1e;
case 0x66df21:c.instructions+=7;goto B66df21;
case 0x66df22:c.instructions+=6;goto B66df22;
case 0x66df23:c.instructions+=5;goto B66df23;
case 0x66df25:c.instructions+=4;goto B66df25;
case 0x66df26:c.instructions+=3;goto B66df26;
case 0x66df27:c.instructions+=2;goto B66df27;
case 0x66df2a:c.instructions+=1;goto B66df2a;
case 0x66df2f:goto L66df2f;
case 0x66df31:c.instructions+=1;goto B66df31;
case 0x66df37:goto L66df37;
case 0x66df3a:c.instructions+=2;goto B66df3a;
case 0x66df3d:c.instructions+=1;goto B66df3d;
case 0x66df3f:goto L66df3f;
case 0x66df43:c.instructions+=1;goto B66df43;
case 0x66df49:goto L66df49;
case 0x66df4c:c.instructions+=2;goto B66df4c;
case 0x66df4e:c.instructions+=1;goto B66df4e;
case 0x66df54:goto L66df54;
case 0x66df57:c.instructions+=1;goto B66df57;
case 0x66df5d:goto L66df5d;
case 0x66df60:c.instructions+=4;goto B66df60;
case 0x66df63:c.instructions+=3;goto B66df63;
case 0x66df65:c.instructions+=2;goto B66df65;
case 0x66df68:c.instructions+=1;goto B66df68;
case 0x66df6e:goto L66df6e;
case 0x66df70:c.instructions+=1;goto B66df70;
case 0x66df76:goto L66df76;
case 0x66df78:c.instructions+=1;goto B66df78;
case 0x66df7a:goto L66df7a;
case 0x66df7d:c.instructions+=1;goto B66df7d;
case 0x66df83:goto L66df83;
case 0x66df85:c.instructions+=12;goto B66df85;
case 0x66df87:c.instructions+=11;goto B66df87;
case 0x66df8a:c.instructions+=10;goto B66df8a;
case 0x66df8f:c.instructions+=9;goto B66df8f;
case 0x66df91:c.instructions+=8;goto B66df91;
case 0x66df94:c.instructions+=7;goto B66df94;
case 0x66df96:c.instructions+=6;goto B66df96;
case 0x66df99:c.instructions+=5;goto B66df99;
case 0x66df9b:c.instructions+=4;goto B66df9b;
case 0x66df9e:c.instructions+=3;goto B66df9e;
case 0x66dfa4:c.instructions+=2;goto B66dfa4;
case 0x66dfaa:c.instructions+=1;goto B66dfaa;
case 0x66dfac:goto L66dfac;
case 0x66dfae:c.instructions+=2;goto B66dfae;
case 0x66dfb0:c.instructions+=1;goto B66dfb0;
case 0x66dfb3:goto L66dfb3;
case 0x66dfb5:goto L66dfb5;
case 0x66dfb8:c.instructions+=4;goto B66dfb8;
case 0x66dfba:c.instructions+=3;goto B66dfba;
case 0x66dfbc:c.instructions+=2;goto B66dfbc;
case 0x66dfbf:c.instructions+=1;goto B66dfbf;
case 0x66dfc1:goto L66dfc1;
case 0x66dfc4:c.instructions+=1;goto B66dfc4;
case 0x66dfc6:goto L66dfc6;
case 0x66dfc9:c.instructions+=4;goto B66dfc9;
case 0x66dfcb:c.instructions+=3;goto B66dfcb;
case 0x66dfcd:c.instructions+=2;goto B66dfcd;
case 0x66dfd0:c.instructions+=1;goto B66dfd0;
case 0x66dfd2:goto L66dfd2;
case 0x66dfd6:c.instructions+=1;goto B66dfd6;
case 0x66dfd8:goto L66dfd8;
case 0x66dfdb:c.instructions+=3;goto B66dfdb;
case 0x66dfe1:c.instructions+=2;goto B66dfe1;
case 0x66dfe7:c.instructions+=1;goto B66dfe7;
case 0x66dfec:goto L66dfec;
case 0x66dfef:goto L66dfef;
case 0x66dff2:c.instructions+=4;goto B66dff2;
case 0x66dff4:c.instructions+=3;goto B66dff4;
case 0x66dff6:c.instructions+=2;goto B66dff6;
case 0x66dff9:c.instructions+=1;goto B66dff9;
case 0x66dffb:goto L66dffb;
case 0x66dffd:c.instructions+=1;goto B66dffd;
case 0x66dfff:goto L66dfff;
default:missing_instruction(c.pc);}
B66d002:L66d002:{c.instructions+=1;NFSU2_TR(0x66d002);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66d022;}}
}
B66d004:L66d004:{c.instructions+=2;NFSU2_TR(0x66d004);
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
B66d007:{NFSU2_TR(0x66d007);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66d022;}}
}
B66d009:L66d009:{c.instructions+=2;NFSU2_TR(0x66d009);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
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
B66d00d:{NFSU2_TR(0x66d00d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66d022;}}
}
B66d00f:L66d00f:{c.instructions+=6;NFSU2_TR(0x66d00f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66d012:{NFSU2_TR(0x66d012);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66d015:{NFSU2_TR(0x66d015);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B66d017:{NFSU2_TR(0x66d017);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d018:{NFSU2_TR(0x66d018);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66d01b:{NFSU2_TR(0x66d01b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66d020ull));
TAIL_STATIC(0x65d10bu,65d);
}
B66d020:L66d020:{c.instructions+=1;NFSU2_TR(0x66d020);
{goto L66d027;}
}
B66d022:L66d022:{c.instructions+=1;NFSU2_TR(0x66d022);
w4(R+0,u32(0x8876086cull));
}
B66d027:L66d027:{c.instructions+=2;NFSU2_TR(0x66d027);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B66d028:{NFSU2_TR(0x66d028);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66d02b:L66d02b:{c.instructions+=11;NFSU2_TR(0x66d02b);
__builtin_memmove((R+28),(R+28),4);
}
B66d02d:{NFSU2_TR(0x66d02d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d02e:{NFSU2_TR(0x66d02e);
__builtin_memmove((R+20),(R+16),4);
}
B66d030:{NFSU2_TR(0x66d030);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d031:{NFSU2_TR(0x66d031);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66d034:{NFSU2_TR(0x66d034);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d035:{NFSU2_TR(0x66d035);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66d038:{NFSU2_TR(0x66d038);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B66d03a:{NFSU2_TR(0x66d03a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d03b:{NFSU2_TR(0x66d03b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66d03e:{NFSU2_TR(0x66d03e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L66d044;}}
}
B66d040:L66d040:{c.instructions+=2;NFSU2_TR(0x66d040);
w4(R+24,u32(~u32(r4(R+24))));
}
B66d042:{NFSU2_TR(0x66d042);
{goto L66d07f;}
}
B66d044:L66d044:{c.instructions+=18;NFSU2_TR(0x66d044);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66d04a:{NFSU2_TR(0x66d04a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66d04c:{NFSU2_TR(0x66d04c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B66d053:{NFSU2_TR(0x66d053);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66d055:{NFSU2_TR(0x66d055);
u8 U[4];
w4(U+0,u32(0x3ull));
s4(u32(r4(R+4)),r4(U+0));
}
B66d05b:{NFSU2_TR(0x66d05b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66d05d:{NFSU2_TR(0x66d05d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66d060:{NFSU2_TR(0x66d060);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66d062:{NFSU2_TR(0x66d062);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d064:{NFSU2_TR(0x66d064);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66d065:{NFSU2_TR(0x66d065);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66d068:{NFSU2_TR(0x66d068);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66d06a:{NFSU2_TR(0x66d06a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d06c:{NFSU2_TR(0x66d06c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d06e:{NFSU2_TR(0x66d06e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66d071:{NFSU2_TR(0x66d071);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d072:{NFSU2_TR(0x66d072);
__builtin_memmove((R+4),(R+28),4);
}
B66d074:{NFSU2_TR(0x66d074);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66d079ull));
TAIL_STATIC(0x66bbeeu,66b);
}
B66d079:L66d079:{c.instructions+=3;NFSU2_TR(0x66d079);
__builtin_memmove((R+24),(R+0),4);
}
B66d07b:{NFSU2_TR(0x66d07b);
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
B66d07d:{NFSU2_TR(0x66d07d);
if(r1(R+518)){{goto L66d0bf;}}
}
B66d07f:L66d07f:{c.instructions+=3;NFSU2_TR(0x66d07f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66d082:{NFSU2_TR(0x66d082);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
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
B66d086:{NFSU2_TR(0x66d086);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66d0bf;}}
}
B66d088:L66d088:{c.instructions+=2;NFSU2_TR(0x66d088);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+14)));
w4(U+18,u32(u32(r4(R+12))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66d08b:{NFSU2_TR(0x66d08b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66d0bf;}}
}
B66d08d:L66d08d:{c.instructions+=2;NFSU2_TR(0x66d08d);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
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
B66d091:{NFSU2_TR(0x66d091);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66d0bf;}}
}
B66d093:L66d093:{c.instructions+=5;NFSU2_TR(0x66d093);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66d097:{NFSU2_TR(0x66d097);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d098:{NFSU2_TR(0x66d098);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66d09b:{NFSU2_TR(0x66d09b);
__builtin_memmove((R+4),(R+28),4);
}
B66d09d:{NFSU2_TR(0x66d09d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66d0a9;}}
}
B66d09f:L66d09f:{c.instructions+=3;NFSU2_TR(0x66d09f);
w4(R+24,u32(~u32(r4(R+24))));
}
B66d0a1:{NFSU2_TR(0x66d0a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d0a2:{NFSU2_TR(0x66d0a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66d0a7ull));
TAIL_STATIC(0x666893u,666);
}
B66d0a7:L66d0a7:{c.instructions+=1;NFSU2_TR(0x66d0a7);
{goto L66d0c4;}
}
B66d0a9:L66d0a9:{c.instructions+=3;NFSU2_TR(0x66d0a9);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B66d0ab:{NFSU2_TR(0x66d0ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d0ac:{NFSU2_TR(0x66d0ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66d0b1ull));
TAIL_STATIC(0x65d41du,65d);
}
B66d0b1:L66d0b1:{c.instructions+=2;NFSU2_TR(0x66d0b1);
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
B66d0b3:{NFSU2_TR(0x66d0b3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66d0c4;}}
}
B66d0b5:L66d0b5:{c.instructions+=3;NFSU2_TR(0x66d0b5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d0b6:{NFSU2_TR(0x66d0b6);
__builtin_memmove((R+4),(R+28),4);
}
B66d0b8:{NFSU2_TR(0x66d0b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66d0bdull));
TAIL_STATIC(0x66055cu,660);
}
B66d0bd:L66d0bd:{c.instructions+=1;NFSU2_TR(0x66d0bd);
{goto L66d0c4;}
}
B66d0bf:L66d0bf:{c.instructions+=1;NFSU2_TR(0x66d0bf);
w4(R+0,u32(0x8876086cull));
}
B66d0c4:L66d0c4:{c.instructions+=5;NFSU2_TR(0x66d0c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66d0c5:{NFSU2_TR(0x66d0c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66d0c6:{NFSU2_TR(0x66d0c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66d0c7:{NFSU2_TR(0x66d0c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B66d0c8:{NFSU2_TR(0x66d0c8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66d0cb:L66d0cb:{c.instructions+=5;NFSU2_TR(0x66d0cb);
__builtin_memmove((R+28),(R+28),4);
}
B66d0cd:{NFSU2_TR(0x66d0cd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d0ce:{NFSU2_TR(0x66d0ce);
__builtin_memmove((R+20),(R+16),4);
}
B66d0d0:{NFSU2_TR(0x66d0d0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66d0d4:{NFSU2_TR(0x66d0d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66d0da;}}
}
B66d0d6:L66d0d6:{c.instructions+=2;NFSU2_TR(0x66d0d6);
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
B66d0d8:{NFSU2_TR(0x66d0d8);
{goto L66d126;}
}
B66d0da:L66d0da:{c.instructions+=2;NFSU2_TR(0x66d0da);
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
B66d0de:{NFSU2_TR(0x66d0de);
if(r1(R+518)){{goto L66d121;}}
}
B66d0e0:L66d0e0:{c.instructions+=5;NFSU2_TR(0x66d0e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66d0e3:{NFSU2_TR(0x66d0e3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d0e5:{NFSU2_TR(0x66d0e5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d0e7:{NFSU2_TR(0x66d0e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66d0ea:{NFSU2_TR(0x66d0ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66d0efull));
TAIL_STATIC(0x66bbeeu,66b);
}
B66d0ef:L66d0ef:{c.instructions+=2;NFSU2_TR(0x66d0ef);
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
B66d0f1:{NFSU2_TR(0x66d0f1);
if(r1(R+518)){{goto L66d121;}}
}
B66d0f3:L66d0f3:{c.instructions+=4;NFSU2_TR(0x66d0f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66d0f6:{NFSU2_TR(0x66d0f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66d0f9:{NFSU2_TR(0x66d0f9);
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
B66d0fb:{NFSU2_TR(0x66d0fb);
if(r1(R+518)){{goto L66d121;}}
}
B66d0fd:L66d0fd:{c.instructions+=2;NFSU2_TR(0x66d0fd);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
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
B66d101:{NFSU2_TR(0x66d101);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66d121;}}
}
B66d103:L66d103:{c.instructions+=2;NFSU2_TR(0x66d103);
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
B66d106:{NFSU2_TR(0x66d106);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66d121;}}
}
B66d108:L66d108:{c.instructions+=2;NFSU2_TR(0x66d108);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
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
B66d10c:{NFSU2_TR(0x66d10c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66d121;}}
}
B66d10e:L66d10e:{c.instructions+=6;NFSU2_TR(0x66d10e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66d111:{NFSU2_TR(0x66d111);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66d114:{NFSU2_TR(0x66d114);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B66d116:{NFSU2_TR(0x66d116);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d117:{NFSU2_TR(0x66d117);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66d11a:{NFSU2_TR(0x66d11a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66d11full));
TAIL_STATIC(0x65d64cu,65d);
}
B66d11f:L66d11f:{c.instructions+=1;NFSU2_TR(0x66d11f);
{goto L66d126;}
}
B66d121:L66d121:{c.instructions+=1;NFSU2_TR(0x66d121);
w4(R+0,u32(0x8876086cull));
}
B66d126:L66d126:{c.instructions+=2;NFSU2_TR(0x66d126);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B66d127:{NFSU2_TR(0x66d127);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66d12a:L66d12a:{c.instructions+=9;NFSU2_TR(0x66d12a);
__builtin_memmove((R+28),(R+28),4);
}
B66d12c:{NFSU2_TR(0x66d12c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d12d:{NFSU2_TR(0x66d12d);
__builtin_memmove((R+20),(R+16),4);
}
B66d12f:{NFSU2_TR(0x66d12f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d130:{NFSU2_TR(0x66d130);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66d133:{NFSU2_TR(0x66d133);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B66d135:{NFSU2_TR(0x66d135);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d136:{NFSU2_TR(0x66d136);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66d139:{NFSU2_TR(0x66d139);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L66d13f;}}
}
B66d13b:L66d13b:{c.instructions+=2;NFSU2_TR(0x66d13b);
w4(R+24,u32(~u32(r4(R+24))));
}
B66d13d:{NFSU2_TR(0x66d13d);
{goto L66d17b;}
}
B66d13f:L66d13f:{c.instructions+=18;NFSU2_TR(0x66d13f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66d145:{NFSU2_TR(0x66d145);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66d147:{NFSU2_TR(0x66d147);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B66d14e:{NFSU2_TR(0x66d14e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66d150:{NFSU2_TR(0x66d150);
u8 U[4];
w4(U+0,u32(0x3ull));
s4(u32(r4(R+4)),r4(U+0));
}
B66d156:{NFSU2_TR(0x66d156);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66d158:{NFSU2_TR(0x66d158);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66d15c:{NFSU2_TR(0x66d15c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66d15e:{NFSU2_TR(0x66d15e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d160:{NFSU2_TR(0x66d160);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66d161:{NFSU2_TR(0x66d161);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66d164:{NFSU2_TR(0x66d164);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66d166:{NFSU2_TR(0x66d166);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d168:{NFSU2_TR(0x66d168);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d16a:{NFSU2_TR(0x66d16a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66d16d:{NFSU2_TR(0x66d16d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d16e:{NFSU2_TR(0x66d16e);
__builtin_memmove((R+4),(R+28),4);
}
B66d170:{NFSU2_TR(0x66d170);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66d175ull));
TAIL_STATIC(0x66bbeeu,66b);
}
B66d175:L66d175:{c.instructions+=3;NFSU2_TR(0x66d175);
__builtin_memmove((R+24),(R+0),4);
}
B66d177:{NFSU2_TR(0x66d177);
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
B66d179:{NFSU2_TR(0x66d179);
if(r1(R+518)){{goto L66d1b7;}}
}
B66d17b:L66d17b:{c.instructions+=3;NFSU2_TR(0x66d17b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66d17e:{NFSU2_TR(0x66d17e);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
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
B66d182:{NFSU2_TR(0x66d182);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66d1b7;}}
}
B66d184:L66d184:{c.instructions+=2;NFSU2_TR(0x66d184);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66d188:{NFSU2_TR(0x66d188);
if(r1(R+518)){{goto L66d190;}}
}
B66d18a:L66d18a:{c.instructions+=2;NFSU2_TR(0x66d18a);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
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
B66d18e:{NFSU2_TR(0x66d18e);
if(r1(R+518)){{goto L66d1b7;}}
}
B66d190:L66d190:{c.instructions+=4;NFSU2_TR(0x66d190);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x3ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66d194:{NFSU2_TR(0x66d194);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66d197:{NFSU2_TR(0x66d197);
__builtin_memmove((R+4),(R+28),4);
}
B66d199:{NFSU2_TR(0x66d199);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66d1a5;}}
}
B66d19b:L66d19b:{c.instructions+=3;NFSU2_TR(0x66d19b);
w4(R+24,u32(~u32(r4(R+24))));
}
B66d19d:{NFSU2_TR(0x66d19d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d19e:{NFSU2_TR(0x66d19e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66d1a3ull));
TAIL_STATIC(0x66653eu,666);
}
B66d1a3:L66d1a3:{c.instructions+=1;NFSU2_TR(0x66d1a3);
{goto L66d1bc;}
}
B66d1a5:L66d1a5:{c.instructions+=3;NFSU2_TR(0x66d1a5);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B66d1a7:{NFSU2_TR(0x66d1a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d1a8:{NFSU2_TR(0x66d1a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66d1adull));
TAIL_STATIC(0x65cf34u,65c);
}
B66d1ad:L66d1ad:{c.instructions+=3;NFSU2_TR(0x66d1ad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d1ae:{NFSU2_TR(0x66d1ae);
__builtin_memmove((R+4),(R+28),4);
}
B66d1b0:{NFSU2_TR(0x66d1b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66d1b5ull));
TAIL_STATIC(0x66055cu,660);
}
B66d1b5:L66d1b5:{c.instructions+=1;NFSU2_TR(0x66d1b5);
{goto L66d1bc;}
}
B66d1b7:L66d1b7:{c.instructions+=1;NFSU2_TR(0x66d1b7);
w4(R+0,u32(0x8876086cull));
}
B66d1bc:L66d1bc:{c.instructions+=4;NFSU2_TR(0x66d1bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66d1bd:{NFSU2_TR(0x66d1bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66d1be:{NFSU2_TR(0x66d1be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B66d1bf:{NFSU2_TR(0x66d1bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66d1c2:L66d1c2:{c.instructions+=8;NFSU2_TR(0x66d1c2);
__builtin_memmove((R+28),(R+28),4);
}
B66d1c4:{NFSU2_TR(0x66d1c4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d1c5:{NFSU2_TR(0x66d1c5);
__builtin_memmove((R+20),(R+16),4);
}
B66d1c7:{NFSU2_TR(0x66d1c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66d1ca:{NFSU2_TR(0x66d1ca);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d1cc:{NFSU2_TR(0x66d1cc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d1ce:{NFSU2_TR(0x66d1ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66d1d1:{NFSU2_TR(0x66d1d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66d1d6ull));
TAIL_STATIC(0x66bbeeu,66b);
}
B66d1d6:L66d1d6:{c.instructions+=2;NFSU2_TR(0x66d1d6);
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
B66d1d8:{NFSU2_TR(0x66d1d8);
if(r1(R+518)){{goto L66d1ef;}}
}
B66d1da:L66d1da:{c.instructions+=3;NFSU2_TR(0x66d1da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66d1dd:{NFSU2_TR(0x66d1dd);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66d1e1:{NFSU2_TR(0x66d1e1);
if(r1(R+518)){{goto L66d1e9;}}
}
B66d1e3:L66d1e3:{c.instructions+=2;NFSU2_TR(0x66d1e3);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
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
B66d1e7:{NFSU2_TR(0x66d1e7);
if(r1(R+518)){{goto L66d1ef;}}
}
B66d1e9:L66d1e9:{c.instructions+=2;NFSU2_TR(0x66d1e9);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
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
B66d1ed:{NFSU2_TR(0x66d1ed);
if(r1(R+518)){{goto L66d1f6;}}
}
B66d1ef:L66d1ef:{c.instructions+=2;NFSU2_TR(0x66d1ef);
w4(R+0,u32(0x8876086cull));
}
B66d1f4:{NFSU2_TR(0x66d1f4);
{goto L66d206;}
}
B66d1f6:L66d1f6:{c.instructions+=6;NFSU2_TR(0x66d1f6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d1f8:{NFSU2_TR(0x66d1f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66d1fb:{NFSU2_TR(0x66d1fb);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B66d1fd:{NFSU2_TR(0x66d1fd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d1fe:{NFSU2_TR(0x66d1fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66d201:{NFSU2_TR(0x66d201);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66d206ull));
TAIL_STATIC(0x65d28au,65d);
}
B66d206:L66d206:{c.instructions+=2;NFSU2_TR(0x66d206);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B66d207:{NFSU2_TR(0x66d207);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66d20a:L66d20a:{c.instructions+=9;NFSU2_TR(0x66d20a);
__builtin_memmove((R+28),(R+28),4);
}
B66d20c:{NFSU2_TR(0x66d20c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d20d:{NFSU2_TR(0x66d20d);
__builtin_memmove((R+20),(R+16),4);
}
B66d20f:{NFSU2_TR(0x66d20f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d210:{NFSU2_TR(0x66d210);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66d213:{NFSU2_TR(0x66d213);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B66d215:{NFSU2_TR(0x66d215);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d216:{NFSU2_TR(0x66d216);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66d219:{NFSU2_TR(0x66d219);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L66d21f;}}
}
B66d21b:L66d21b:{c.instructions+=2;NFSU2_TR(0x66d21b);
w4(R+24,u32(~u32(r4(R+24))));
}
B66d21d:{NFSU2_TR(0x66d21d);
{goto L66d25b;}
}
B66d21f:L66d21f:{c.instructions+=18;NFSU2_TR(0x66d21f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66d225:{NFSU2_TR(0x66d225);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66d227:{NFSU2_TR(0x66d227);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B66d22e:{NFSU2_TR(0x66d22e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66d230:{NFSU2_TR(0x66d230);
u8 U[4];
w4(U+0,u32(0x3ull));
s4(u32(r4(R+4)),r4(U+0));
}
B66d236:{NFSU2_TR(0x66d236);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66d238:{NFSU2_TR(0x66d238);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66d23c:{NFSU2_TR(0x66d23c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66d23e:{NFSU2_TR(0x66d23e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d240:{NFSU2_TR(0x66d240);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66d241:{NFSU2_TR(0x66d241);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66d244:{NFSU2_TR(0x66d244);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66d246:{NFSU2_TR(0x66d246);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d248:{NFSU2_TR(0x66d248);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d24a:{NFSU2_TR(0x66d24a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66d24d:{NFSU2_TR(0x66d24d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d24e:{NFSU2_TR(0x66d24e);
__builtin_memmove((R+4),(R+28),4);
}
B66d250:{NFSU2_TR(0x66d250);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66d255ull));
TAIL_STATIC(0x66bbeeu,66b);
}
B66d255:L66d255:{c.instructions+=3;NFSU2_TR(0x66d255);
__builtin_memmove((R+24),(R+0),4);
}
B66d257:{NFSU2_TR(0x66d257);
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
B66d259:{NFSU2_TR(0x66d259);
if(r1(R+518)){{goto L66d2a0;}}
}
B66d25b:L66d25b:{c.instructions+=3;NFSU2_TR(0x66d25b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66d25e:{NFSU2_TR(0x66d25e);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
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
B66d262:{NFSU2_TR(0x66d262);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66d2a0;}}
}
B66d264:L66d264:{c.instructions+=2;NFSU2_TR(0x66d264);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66d268:{NFSU2_TR(0x66d268);
if(r1(R+518)){{goto L66d270;}}
}
B66d26a:L66d26a:{c.instructions+=2;NFSU2_TR(0x66d26a);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
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
B66d26e:{NFSU2_TR(0x66d26e);
if(r1(R+518)){{goto L66d2a0;}}
}
B66d270:L66d270:{c.instructions+=3;NFSU2_TR(0x66d270);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x3ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66d274:{NFSU2_TR(0x66d274);
__builtin_memmove((R+4),(R+28),4);
}
B66d276:{NFSU2_TR(0x66d276);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66d285;}}
}
B66d278:L66d278:{c.instructions+=4;NFSU2_TR(0x66d278);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66d27b:{NFSU2_TR(0x66d27b);
w4(R+24,u32(~u32(r4(R+24))));
}
B66d27d:{NFSU2_TR(0x66d27d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d27e:{NFSU2_TR(0x66d27e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66d283ull));
TAIL_STATIC(0x666742u,666);
}
B66d283:L66d283:{c.instructions+=1;NFSU2_TR(0x66d283);
{goto L66d2a5;}
}
B66d285:L66d285:{c.instructions+=5;NFSU2_TR(0x66d285);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d287:{NFSU2_TR(0x66d287);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66d28a:{NFSU2_TR(0x66d28a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B66d28c:{NFSU2_TR(0x66d28c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d28d:{NFSU2_TR(0x66d28d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66d292ull));
TAIL_STATIC(0x65ce9bu,65c);
}
B66d292:L66d292:{c.instructions+=2;NFSU2_TR(0x66d292);
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
B66d294:{NFSU2_TR(0x66d294);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66d2a5;}}
}
B66d296:L66d296:{c.instructions+=3;NFSU2_TR(0x66d296);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d297:{NFSU2_TR(0x66d297);
__builtin_memmove((R+4),(R+28),4);
}
B66d299:{NFSU2_TR(0x66d299);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66d29eull));
TAIL_STATIC(0x66055cu,660);
}
B66d29e:L66d29e:{c.instructions+=1;NFSU2_TR(0x66d29e);
{goto L66d2a5;}
}
B66d2a0:L66d2a0:{c.instructions+=1;NFSU2_TR(0x66d2a0);
w4(R+0,u32(0x8876086cull));
}
B66d2a5:L66d2a5:{c.instructions+=4;NFSU2_TR(0x66d2a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66d2a6:{NFSU2_TR(0x66d2a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66d2a7:{NFSU2_TR(0x66d2a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B66d2a8:{NFSU2_TR(0x66d2a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66d2ab:L66d2ab:{c.instructions+=5;NFSU2_TR(0x66d2ab);
__builtin_memmove((R+28),(R+28),4);
}
B66d2ad:{NFSU2_TR(0x66d2ad);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d2ae:{NFSU2_TR(0x66d2ae);
__builtin_memmove((R+20),(R+16),4);
}
B66d2b0:{NFSU2_TR(0x66d2b0);
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
B66d2b4:{NFSU2_TR(0x66d2b4);
if(r1(R+518)){{goto L66d2d8;}}
}
B66d2b6:L66d2b6:{c.instructions+=5;NFSU2_TR(0x66d2b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66d2b9:{NFSU2_TR(0x66d2b9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d2bb:{NFSU2_TR(0x66d2bb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d2bd:{NFSU2_TR(0x66d2bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66d2c0:{NFSU2_TR(0x66d2c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66d2c5ull));
TAIL_STATIC(0x66bbeeu,66b);
}
B66d2c5:L66d2c5:{c.instructions+=2;NFSU2_TR(0x66d2c5);
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
B66d2c7:{NFSU2_TR(0x66d2c7);
if(r1(R+518)){{goto L66d2d8;}}
}
B66d2c9:L66d2c9:{c.instructions+=3;NFSU2_TR(0x66d2c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66d2cc:{NFSU2_TR(0x66d2cc);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66d2d0:{NFSU2_TR(0x66d2d0);
if(r1(R+518)){{goto L66d2df;}}
}
B66d2d2:L66d2d2:{c.instructions+=2;NFSU2_TR(0x66d2d2);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
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
B66d2d6:{NFSU2_TR(0x66d2d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66d2df;}}
}
B66d2d8:L66d2d8:{c.instructions+=2;NFSU2_TR(0x66d2d8);
w4(R+0,u32(0x8876086cull));
}
B66d2dd:{NFSU2_TR(0x66d2dd);
{goto L66d2ef;}
}
B66d2df:L66d2df:{c.instructions+=6;NFSU2_TR(0x66d2df);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d2e1:{NFSU2_TR(0x66d2e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66d2e4:{NFSU2_TR(0x66d2e4);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B66d2e6:{NFSU2_TR(0x66d2e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d2e7:{NFSU2_TR(0x66d2e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66d2ea:{NFSU2_TR(0x66d2ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66d2efull));
TAIL_STATIC(0x65d10bu,65d);
}
B66d2ef:L66d2ef:{c.instructions+=2;NFSU2_TR(0x66d2ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B66d2f0:{NFSU2_TR(0x66d2f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66d2f3:L66d2f3:{c.instructions+=14;NFSU2_TR(0x66d2f3);
__builtin_memmove((R+28),(R+28),4);
}
B66d2f5:{NFSU2_TR(0x66d2f5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d2f6:{NFSU2_TR(0x66d2f6);
__builtin_memmove((R+20),(R+16),4);
}
B66d2f8:{NFSU2_TR(0x66d2f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B66d2fb:{NFSU2_TR(0x66d2fb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d2fc:{NFSU2_TR(0x66d2fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66d2ff:{NFSU2_TR(0x66d2ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d300:{NFSU2_TR(0x66d300);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d301:{NFSU2_TR(0x66d301);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B66d303:{NFSU2_TR(0x66d303);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B66d304:{NFSU2_TR(0x66d304);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B66d306:{NFSU2_TR(0x66d306);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d308:{NFSU2_TR(0x66d308);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66d309:{NFSU2_TR(0x66d309);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L66d30f;}}
}
B66d30b:L66d30b:{c.instructions+=2;NFSU2_TR(0x66d30b);
w4(R+12,u32(~u32(r4(R+12))));
}
B66d30d:{NFSU2_TR(0x66d30d);
{goto L66d347;}
}
B66d30f:L66d30f:{c.instructions+=16;NFSU2_TR(0x66d30f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66d312:{NFSU2_TR(0x66d312);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66d318:{NFSU2_TR(0x66d318);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66d31a:{NFSU2_TR(0x66d31a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66d31d:{NFSU2_TR(0x66d31d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66d31f:{NFSU2_TR(0x66d31f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+8)),r4(U+0));
}
B66d321:{NFSU2_TR(0x66d321);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66d323:{NFSU2_TR(0x66d323);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66d327:{NFSU2_TR(0x66d327);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66d329:{NFSU2_TR(0x66d329);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d32a:{NFSU2_TR(0x66d32a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B66d331:{NFSU2_TR(0x66d331);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66d333:{NFSU2_TR(0x66d333);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d334:{NFSU2_TR(0x66d334);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d335:{NFSU2_TR(0x66d335);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66d338:{NFSU2_TR(0x66d338);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66d33dull));
TAIL_STATIC(0x66bbeeu,66b);
}
B66d33d:L66d33d:{c.instructions+=3;NFSU2_TR(0x66d33d);
__builtin_memmove((R+12),(R+0),4);
}
B66d33f:{NFSU2_TR(0x66d33f);
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
B66d341:{NFSU2_TR(0x66d341);
if(r1(R+518)){{goto L66d547;}}
}
B66d347:L66d347:{c.instructions+=5;NFSU2_TR(0x66d347);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66d34a:{NFSU2_TR(0x66d34a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66d34d:{NFSU2_TR(0x66d34d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B66d34f:{NFSU2_TR(0x66d34f);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66d352:{NFSU2_TR(0x66d352);
if(r1(R+518)){{goto L66d35e;}}
}
B66d354:L66d354:{c.instructions+=2;NFSU2_TR(0x66d354);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
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
B66d358:{NFSU2_TR(0x66d358);
if(r1(R+518)){{goto L66d547;}}
}
B66d35e:L66d35e:{c.instructions+=2;NFSU2_TR(0x66d35e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66d360:{NFSU2_TR(0x66d360);
if(r1(R+518)){{goto L66d36a;}}
}
B66d362:L66d362:{c.instructions+=2;NFSU2_TR(0x66d362);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B66d364:{NFSU2_TR(0x66d364);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66d547;}}
}
B66d36a:L66d36a:{c.instructions+=3;NFSU2_TR(0x66d36a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66d36d:{NFSU2_TR(0x66d36d);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66d370:{NFSU2_TR(0x66d370);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66d382;}}
}
B66d372:L66d372:{c.instructions+=4;NFSU2_TR(0x66d372);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66d375:{NFSU2_TR(0x66d375);
w4(R+12,u32(~u32(r4(R+12))));
}
B66d377:{NFSU2_TR(0x66d377);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d378:{NFSU2_TR(0x66d378);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66d37dull));
TAIL_STATIC(0x6663fau,666);
}
B66d37d:L66d37d:{c.instructions+=1;NFSU2_TR(0x66d37d);
{goto L66d54c;}
}
B66d382:L66d382:{c.instructions+=4;NFSU2_TR(0x66d382);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66d385:{NFSU2_TR(0x66d385);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66d387:{NFSU2_TR(0x66d387);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66d389:{NFSU2_TR(0x66d389);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66d397;}}
}
B66d38b:L66d38b:{c.instructions+=2;NFSU2_TR(0x66d38b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66d38e:{NFSU2_TR(0x66d38e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+28),(U+0),4);
}
B66d390:L66d390:{c.instructions+=1;NFSU2_TR(0x66d390);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L66d392;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66d390u);}goto L66d390;}
}
B66d392:L66d392:{c.instructions+=1;NFSU2_TR(0x66d392);
{goto L66d53c;}
}
B66d397:L66d397:{c.instructions+=2;NFSU2_TR(0x66d397);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66d39a:{NFSU2_TR(0x66d39a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66d503;}}
}
B66d3a0:L66d3a0:{c.instructions+=2;NFSU2_TR(0x66d3a0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66d3a2:{NFSU2_TR(0x66d3a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66d4c7;}}
}
B66d3a8:L66d3a8:{c.instructions+=16;NFSU2_TR(0x66d3a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66d3ab:{NFSU2_TR(0x66d3ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66d3ad:{NFSU2_TR(0x66d3ad);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66d3b0:{NFSU2_TR(0x66d3b0);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66d3b6:{NFSU2_TR(0x66d3b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66d3b9:{NFSU2_TR(0x66d3b9);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66d3bc:{NFSU2_TR(0x66d3bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66d3bf:{NFSU2_TR(0x66d3bf);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B66d3c1:{NFSU2_TR(0x66d3c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66d3c4:{NFSU2_TR(0x66d3c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66d3c7:{NFSU2_TR(0x66d3c7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66d3cd:{NFSU2_TR(0x66d3cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66d3d0:{NFSU2_TR(0x66d3d0);
w4(R+24,u32(0xffull));
}
B66d3d5:{NFSU2_TR(0x66d3d5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B66d3d7:{NFSU2_TR(0x66d3d7);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B66d3da:{NFSU2_TR(0x66d3da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66d3e1;}}
}
B66d3dc:L66d3dc:{c.instructions+=2;NFSU2_TR(0x66d3dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66d3df:{NFSU2_TR(0x66d3df);
{goto L66d409;}
}
B66d3e1:L66d3e1:{c.instructions+=5;NFSU2_TR(0x66d3e1);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66d3e4:{NFSU2_TR(0x66d3e4);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B66d3e6:{NFSU2_TR(0x66d3e6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B66d3e8:{NFSU2_TR(0x66d3e8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B66d3eb:{NFSU2_TR(0x66d3eb);
if(r1(R+514)){{goto L66d3f2;}}
}
B66d3ed:L66d3ed:{c.instructions+=2;NFSU2_TR(0x66d3ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66d3f0:{NFSU2_TR(0x66d3f0);
{goto L66d409;}
}
B66d3f2:L66d3f2:{c.instructions+=4;NFSU2_TR(0x66d3f2);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66d3f5:{NFSU2_TR(0x66d3f5);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B66d3fb:{NFSU2_TR(0x66d3fb);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B66d401:{NFSU2_TR(0x66d401);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66d406ull));
TAIL_STATIC(0x75dd28u,75d);
}
B66d406:L66d406:{c.instructions+=1;NFSU2_TR(0x66d406);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66d409:L66d409:{c.instructions+=5;NFSU2_TR(0x66d409);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66d40c:{NFSU2_TR(0x66d40c);
__asm__ volatile(".byte 0xd8,0xda":::"memory");
}
B66d40e:{NFSU2_TR(0x66d40e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B66d410:{NFSU2_TR(0x66d410);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B66d413:{NFSU2_TR(0x66d413);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66d41a;}}
}
B66d415:L66d415:{c.instructions+=2;NFSU2_TR(0x66d415);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66d418:{NFSU2_TR(0x66d418);
{goto L66d443;}
}
B66d41a:L66d41a:{c.instructions+=5;NFSU2_TR(0x66d41a);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66d41d:{NFSU2_TR(0x66d41d);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B66d41f:{NFSU2_TR(0x66d41f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B66d421:{NFSU2_TR(0x66d421);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B66d424:{NFSU2_TR(0x66d424);
if(r1(R+514)){{goto L66d42c;}}
}
B66d426:L66d426:{c.instructions+=2;NFSU2_TR(0x66d426);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66d42a:{NFSU2_TR(0x66d42a);
{goto L66d443;}
}
B66d42c:L66d42c:{c.instructions+=4;NFSU2_TR(0x66d42c);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66d42f:{NFSU2_TR(0x66d42f);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B66d435:{NFSU2_TR(0x66d435);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B66d43b:{NFSU2_TR(0x66d43b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66d440ull));
TAIL_STATIC(0x75dd28u,75d);
}
B66d440:L66d440:{c.instructions+=1;NFSU2_TR(0x66d440);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66d443:L66d443:{c.instructions+=5;NFSU2_TR(0x66d443);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66d446:{NFSU2_TR(0x66d446);
__asm__ volatile(".byte 0xd8,0xda":::"memory");
}
B66d448:{NFSU2_TR(0x66d448);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B66d44a:{NFSU2_TR(0x66d44a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B66d44d:{NFSU2_TR(0x66d44d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66d455;}}
}
B66d44f:L66d44f:{c.instructions+=3;NFSU2_TR(0x66d44f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B66d451:{NFSU2_TR(0x66d451);
__builtin_memmove((R+28),(R+24),4);
}
B66d453:{NFSU2_TR(0x66d453);
{goto L66d47b;}
}
B66d455:L66d455:{c.instructions+=5;NFSU2_TR(0x66d455);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66d458:{NFSU2_TR(0x66d458);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B66d45a:{NFSU2_TR(0x66d45a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B66d45c:{NFSU2_TR(0x66d45c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B66d45f:{NFSU2_TR(0x66d45f);
if(r1(R+514)){{goto L66d465;}}
}
B66d461:L66d461:{c.instructions+=2;NFSU2_TR(0x66d461);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B66d463:{NFSU2_TR(0x66d463);
{goto L66d47b;}
}
B66d465:L66d465:{c.instructions+=4;NFSU2_TR(0x66d465);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66d468:{NFSU2_TR(0x66d468);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B66d46e:{NFSU2_TR(0x66d46e);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B66d474:{NFSU2_TR(0x66d474);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66d479ull));
TAIL_STATIC(0x75dd28u,75d);
}
B66d479:L66d479:{c.instructions+=1;NFSU2_TR(0x66d479);
__builtin_memmove((R+28),(R+0),4);
}
B66d47b:L66d47b:{c.instructions+=5;NFSU2_TR(0x66d47b);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B66d47d:{NFSU2_TR(0x66d47d);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B66d47f:{NFSU2_TR(0x66d47f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B66d481:{NFSU2_TR(0x66d481);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B66d484:{NFSU2_TR(0x66d484);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66d48c;}}
}
B66d486:L66d486:{c.instructions+=3;NFSU2_TR(0x66d486);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B66d488:{NFSU2_TR(0x66d488);
__builtin_memmove((R+0),(R+24),4);
}
B66d48a:{NFSU2_TR(0x66d48a);
{goto L66d4b0;}
}
B66d48c:L66d48c:{c.instructions+=4;NFSU2_TR(0x66d48c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B66d492:{NFSU2_TR(0x66d492);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B66d494:{NFSU2_TR(0x66d494);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B66d497:{NFSU2_TR(0x66d497);
if(r1(R+514)){{goto L66d49f;}}
}
B66d499:L66d499:{c.instructions+=3;NFSU2_TR(0x66d499);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B66d49b:{NFSU2_TR(0x66d49b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66d49d:{NFSU2_TR(0x66d49d);
{goto L66d4b0;}
}
B66d49f:L66d49f:{c.instructions+=3;NFSU2_TR(0x66d49f);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B66d4a5:{NFSU2_TR(0x66d4a5);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B66d4ab:{NFSU2_TR(0x66d4ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66d4b0ull));
TAIL_STATIC(0x75dd28u,75d);
}
B66d4b0:L66d4b0:{c.instructions+=9;NFSU2_TR(0x66d4b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66d4b2:{NFSU2_TR(0x66d4b2);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66d4b5:{NFSU2_TR(0x66d4b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))|u32(r4(U+4))));
}
B66d4b8:{NFSU2_TR(0x66d4b8);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66d4bb:{NFSU2_TR(0x66d4bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))|u32(r4(U+4))));
}
B66d4be:{NFSU2_TR(0x66d4be);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66d4c1:{NFSU2_TR(0x66d4c1);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
}
B66d4c3:{NFSU2_TR(0x66d4c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B66d4c5:{NFSU2_TR(0x66d4c5);
{goto L66d53c;}
}
B66d4c7:L66d4c7:{c.instructions+=9;NFSU2_TR(0x66d4c7);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x38"::"a"(ea_):"memory");}
}
B66d4ca:{NFSU2_TR(0x66d4ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66d4cd:{NFSU2_TR(0x66d4cd);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xc00ull))));
}
B66d4d2:{NFSU2_TR(0x66d4d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66d4d5:{NFSU2_TR(0x66d4d5);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x28"::"a"(ea_):"memory");}
}
B66d4d8:{NFSU2_TR(0x66d4d8);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66d4da:{NFSU2_TR(0x66d4da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66d4dd:{NFSU2_TR(0x66d4dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66d4e0:{NFSU2_TR(0x66d4e0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66d4fe;}}
}
B66d4e2:L66d4e2:{c.instructions+=11;NFSU2_TR(0x66d4e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66d4e5:{NFSU2_TR(0x66d4e5);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66d4e8:{NFSU2_TR(0x66d4e8);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B66d4eb:{NFSU2_TR(0x66d4eb);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66d4ee:{NFSU2_TR(0x66d4ee);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B66d4f1:{NFSU2_TR(0x66d4f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66d4f4:{NFSU2_TR(0x66d4f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B66d4f6:{NFSU2_TR(0x66d4f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B66d4f9:{NFSU2_TR(0x66d4f9);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B66d4fa:{NFSU2_TR(0x66d4fa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B66d4fc:{NFSU2_TR(0x66d4fc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66d4e2u);}goto L66d4e2;}}
}
B66d4fe:L66d4fe:{c.instructions+=2;NFSU2_TR(0x66d4fe);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x28"::"a"(ea_):"memory");}
}
B66d501:{NFSU2_TR(0x66d501);
{goto L66d53c;}
}
B66d503:L66d503:{c.instructions+=2;NFSU2_TR(0x66d503);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B66d505:{NFSU2_TR(0x66d505);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66d547;}}
}
B66d507:L66d507:{c.instructions+=3;NFSU2_TR(0x66d507);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66d509:{NFSU2_TR(0x66d509);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66d50c:{NFSU2_TR(0x66d50c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66d53c;}}
}
B66d50e:L66d50e:{c.instructions+=9;NFSU2_TR(0x66d50e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66d511:{NFSU2_TR(0x66d511);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66d514:{NFSU2_TR(0x66d514);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B66d517:{NFSU2_TR(0x66d517);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66d51a:{NFSU2_TR(0x66d51a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66d520:{NFSU2_TR(0x66d520);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B66d522:{NFSU2_TR(0x66d522);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B66d524:{NFSU2_TR(0x66d524);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B66d527:{NFSU2_TR(0x66d527);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L66d52d;}}
}
B66d529:L66d529:{c.instructions+=2;NFSU2_TR(0x66d529);
__builtin_memmove((R+0),(R+24),4);
}
B66d52b:{NFSU2_TR(0x66d52b);
{goto L66d52f;}
}
B66d52d:L66d52d:{c.instructions+=1;NFSU2_TR(0x66d52d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66d52f:L66d52f:{c.instructions+=5;NFSU2_TR(0x66d52f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+28),(U+0),4);
}
B66d531:{NFSU2_TR(0x66d531);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66d534:{NFSU2_TR(0x66d534);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B66d537:{NFSU2_TR(0x66d537);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B66d53a:{NFSU2_TR(0x66d53a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66d50eu);}goto L66d50e;}}
}
B66d53c:L66d53c:{c.instructions+=3;NFSU2_TR(0x66d53c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66d53f:{NFSU2_TR(0x66d53f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d540:{NFSU2_TR(0x66d540);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66d545ull));
TAIL_STATIC(0x66055cu,660);
}
B66d545:L66d545:{c.instructions+=1;NFSU2_TR(0x66d545);
{goto L66d54c;}
}
B66d547:L66d547:{c.instructions+=1;NFSU2_TR(0x66d547);
w4(R+0,u32(0x8876086cull));
}
B66d54c:L66d54c:{c.instructions+=5;NFSU2_TR(0x66d54c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66d54d:{NFSU2_TR(0x66d54d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66d54e:{NFSU2_TR(0x66d54e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66d54f:{NFSU2_TR(0x66d54f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66d550:{NFSU2_TR(0x66d550);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66d553:L66d553:{c.instructions+=12;NFSU2_TR(0x66d553);
__builtin_memmove((R+28),(R+28),4);
}
B66d555:{NFSU2_TR(0x66d555);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d556:{NFSU2_TR(0x66d556);
__builtin_memmove((R+20),(R+16),4);
}
B66d558:{NFSU2_TR(0x66d558);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B66d55b:{NFSU2_TR(0x66d55b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d55c:{NFSU2_TR(0x66d55c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d55d:{NFSU2_TR(0x66d55d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d55e:{NFSU2_TR(0x66d55e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66d561:{NFSU2_TR(0x66d561);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B66d563:{NFSU2_TR(0x66d563);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B66d565:{NFSU2_TR(0x66d565);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66d568:{NFSU2_TR(0x66d568);
if(r1(R+518)){{goto L66d695;}}
}
B66d56e:L66d56e:{c.instructions+=5;NFSU2_TR(0x66d56e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66d571:{NFSU2_TR(0x66d571);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d572:{NFSU2_TR(0x66d572);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d574:{NFSU2_TR(0x66d574);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66d577:{NFSU2_TR(0x66d577);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66d57cull));
TAIL_STATIC(0x66bbeeu,66b);
}
B66d57c:L66d57c:{c.instructions+=3;NFSU2_TR(0x66d57c);
__builtin_memmove((R+4),(R+0),4);
}
B66d57e:{NFSU2_TR(0x66d57e);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B66d580:{NFSU2_TR(0x66d580);
if(r1(R+518)){{goto L66d695;}}
}
B66d586:L66d586:{c.instructions+=3;NFSU2_TR(0x66d586);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66d589:{NFSU2_TR(0x66d589);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66d58c:{NFSU2_TR(0x66d58c);
if(r1(R+518)){{goto L66d598;}}
}
B66d58e:L66d58e:{c.instructions+=2;NFSU2_TR(0x66d58e);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
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
B66d592:{NFSU2_TR(0x66d592);
if(r1(R+518)){{goto L66d695;}}
}
B66d598:L66d598:{c.instructions+=3;NFSU2_TR(0x66d598);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66d59b:{NFSU2_TR(0x66d59b);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B66d59d:{NFSU2_TR(0x66d59d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66d695;}}
}
B66d5a3:L66d5a3:{c.instructions+=2;NFSU2_TR(0x66d5a3);
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
B66d5a6:{NFSU2_TR(0x66d5a6);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L66d695;}}
}
B66d5ac:L66d5ac:{c.instructions+=5;NFSU2_TR(0x66d5ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66d5af:{NFSU2_TR(0x66d5af);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B66d5b2:{NFSU2_TR(0x66d5b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66d5b5:{NFSU2_TR(0x66d5b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B66d5b7:{NFSU2_TR(0x66d5b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66d695;}}
}
B66d5bd:L66d5bd:{c.instructions+=2;NFSU2_TR(0x66d5bd);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66d5c0:{NFSU2_TR(0x66d5c0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66d5c5;}}
}
B66d5c2:L66d5c2:{c.instructions+=2;NFSU2_TR(0x66d5c2);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d5c4:{NFSU2_TR(0x66d5c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B66d5c5:L66d5c5:{c.instructions+=7;NFSU2_TR(0x66d5c5);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66d5c7:{NFSU2_TR(0x66d5c7);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B66d5c8:{NFSU2_TR(0x66d5c8);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B66d5c9:{NFSU2_TR(0x66d5c9);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B66d5ca:{NFSU2_TR(0x66d5ca);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B66d5cb:{NFSU2_TR(0x66d5cb);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B66d5cc:{NFSU2_TR(0x66d5cc);
if(r1(R+518)){{goto L66d672;}}
}
B66d5d2:L66d5d2:{c.instructions+=2;NFSU2_TR(0x66d5d2);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B66d5d3:{NFSU2_TR(0x66d5d3);
if(r1(R+518)){{goto L66d5fb;}}
}
B66d5d5:L66d5d5:{c.instructions+=2;NFSU2_TR(0x66d5d5);
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
B66d5d6:{NFSU2_TR(0x66d5d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66d695;}}
}
B66d5dc:L66d5dc:{c.instructions+=3;NFSU2_TR(0x66d5dc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66d5de:{NFSU2_TR(0x66d5de);
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
B66d5e0:{NFSU2_TR(0x66d5e0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66d69c;}}
}
B66d5e6:L66d5e6:{c.instructions+=7;NFSU2_TR(0x66d5e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B66d5e8:{NFSU2_TR(0x66d5e8);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66d5eb:{NFSU2_TR(0x66d5eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66d5ee:{NFSU2_TR(0x66d5ee);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B66d5f1:{NFSU2_TR(0x66d5f1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B66d5f2:{NFSU2_TR(0x66d5f2);
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
B66d5f4:{NFSU2_TR(0x66d5f4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66d5e6u);}goto L66d5e6;}}
}
B66d5f6:L66d5f6:{c.instructions+=1;NFSU2_TR(0x66d5f6);
{goto L66d69c;}
}
B66d5fb:L66d5fb:{c.instructions+=2;NFSU2_TR(0x66d5fb);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x1ull))));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B66d5fe:{NFSU2_TR(0x66d5fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66d65a;}}
}
B66d600:L66d600:{c.instructions+=35;NFSU2_TR(0x66d600);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66d602:{NFSU2_TR(0x66d602);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66d608:{NFSU2_TR(0x66d608);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66d60a:{NFSU2_TR(0x66d60a);
__builtin_memmove((R+4),(R+0),4);
}
B66d60c:{NFSU2_TR(0x66d60c);
u8 U[46];
w4(U+38,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
__builtin_memmove((U+42),(R+4),4);
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+38))));
w1(U+24,u8((r4(U+38))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+38))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+42),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+38))!=(u32(0x0ull))));
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
B66d60f:{NFSU2_TR(0x66d60f);
w4(R+4,u32(r1(R+4)));
}
B66d612:{NFSU2_TR(0x66d612);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66d615:{NFSU2_TR(0x66d615);
__builtin_memmove((R+4),(R+0),4);
}
B66d617:{NFSU2_TR(0x66d617);
u8 U[46];
w4(U+38,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
__builtin_memmove((U+42),(R+4),4);
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+38))));
w1(U+24,u8((r4(U+38))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+38))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+42),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+38))!=(u32(0x0ull))));
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
B66d61a:{NFSU2_TR(0x66d61a);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B66d61d:{NFSU2_TR(0x66d61d);
w4(R+4,u32(r1(R+4)));
}
B66d620:{NFSU2_TR(0x66d620);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B66d622:{NFSU2_TR(0x66d622);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66d625:{NFSU2_TR(0x66d625);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66d628:{NFSU2_TR(0x66d628);
w4(R+4,u32(r1(R+0)));
}
B66d62b:{NFSU2_TR(0x66d62b);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B66d62e:{NFSU2_TR(0x66d62e);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B66d631:{NFSU2_TR(0x66d631);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66d634:{NFSU2_TR(0x66d634);
u8 U[48];
w4(U+40,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
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
B66d637:{NFSU2_TR(0x66d637);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B66d639:{NFSU2_TR(0x66d639);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+24),(U+0),4);
}
B66d63c:{NFSU2_TR(0x66d63c);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B66d63f:{NFSU2_TR(0x66d63f);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B66d642:{NFSU2_TR(0x66d642);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66d645:{NFSU2_TR(0x66d645);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B66d647:{NFSU2_TR(0x66d647);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B66d64a:{NFSU2_TR(0x66d64a);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B66d64d:{NFSU2_TR(0x66d64d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B66d64f:{NFSU2_TR(0x66d64f);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B66d652:{NFSU2_TR(0x66d652);
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
B66d653:{NFSU2_TR(0x66d653);
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
B66d654:{NFSU2_TR(0x66d654);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B66d656:{NFSU2_TR(0x66d656);
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
B66d657:{NFSU2_TR(0x66d657);
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
B66d658:{NFSU2_TR(0x66d658);
{goto L66d69c;}
}
B66d65a:L66d65a:{c.instructions+=3;NFSU2_TR(0x66d65a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66d65c:{NFSU2_TR(0x66d65c);
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
B66d65e:{NFSU2_TR(0x66d65e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66d69c;}}
}
B66d660:L66d660:{c.instructions+=7;NFSU2_TR(0x66d660);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B66d662:{NFSU2_TR(0x66d662);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+24));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B66d665:{NFSU2_TR(0x66d665);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66d668:{NFSU2_TR(0x66d668);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B66d66b:{NFSU2_TR(0x66d66b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B66d66c:{NFSU2_TR(0x66d66c);
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
B66d66e:{NFSU2_TR(0x66d66e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66d660u);}goto L66d660;}}
}
B66d670:L66d670:{c.instructions+=1;NFSU2_TR(0x66d670);
{goto L66d69c;}
}
B66d672:L66d672:{c.instructions+=3;NFSU2_TR(0x66d672);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B66d674:{NFSU2_TR(0x66d674);
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
B66d676:{NFSU2_TR(0x66d676);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66d69c;}}
}
B66d678:L66d678:{c.instructions+=11;NFSU2_TR(0x66d678);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66d67a:{NFSU2_TR(0x66d67a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B66d67c:{NFSU2_TR(0x66d67c);
u8 U[20];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B66d67f:{NFSU2_TR(0x66d67f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66d682:{NFSU2_TR(0x66d682);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+12),(U+0),1);
}
B66d685:{NFSU2_TR(0x66d685);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66d688:{NFSU2_TR(0x66d688);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B66d68b:{NFSU2_TR(0x66d68b);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B66d68e:{NFSU2_TR(0x66d68e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B66d68f:{NFSU2_TR(0x66d68f);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B66d691:{NFSU2_TR(0x66d691);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66d678u);}goto L66d678;}}
}
B66d693:L66d693:{c.instructions+=1;NFSU2_TR(0x66d693);
{goto L66d69c;}
}
B66d695:L66d695:{c.instructions+=1;NFSU2_TR(0x66d695);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B66d69c:L66d69c:{c.instructions+=6;NFSU2_TR(0x66d69c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66d69f:{NFSU2_TR(0x66d69f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66d6a0:{NFSU2_TR(0x66d6a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66d6a1:{NFSU2_TR(0x66d6a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66d6a2:{NFSU2_TR(0x66d6a2);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66d6a3:{NFSU2_TR(0x66d6a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66d6a6:L66d6a6:{c.instructions+=21;NFSU2_TR(0x66d6a6);
__builtin_memmove((R+28),(R+28),4);
}
B66d6a8:{NFSU2_TR(0x66d6a8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d6a9:{NFSU2_TR(0x66d6a9);
__builtin_memmove((R+20),(R+16),4);
}
B66d6ab:{NFSU2_TR(0x66d6ab);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d6ac:{NFSU2_TR(0x66d6ac);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d6ad:{NFSU2_TR(0x66d6ad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d6ae:{NFSU2_TR(0x66d6ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66d6b1:{NFSU2_TR(0x66d6b1);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d6b3:{NFSU2_TR(0x66d6b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66d6b4:{NFSU2_TR(0x66d6b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66d6ba:{NFSU2_TR(0x66d6ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66d6bc:{NFSU2_TR(0x66d6bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66d6bf:{NFSU2_TR(0x66d6bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66d6c1:{NFSU2_TR(0x66d6c1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d6c3:{NFSU2_TR(0x66d6c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B66d6c5:{NFSU2_TR(0x66d6c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66d6c7:{NFSU2_TR(0x66d6c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66d6cb:{NFSU2_TR(0x66d6cb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d6cd:{NFSU2_TR(0x66d6cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66d6d0:{NFSU2_TR(0x66d6d0);
__builtin_memmove((R+4),(R+28),4);
}
B66d6d2:{NFSU2_TR(0x66d6d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66d6d7ull));
TAIL_STATIC(0x66bbeeu,66b);
}
B66d6d7:L66d6d7:{c.instructions+=3;NFSU2_TR(0x66d6d7);
__builtin_memmove((R+24),(R+0),4);
}
B66d6d9:{NFSU2_TR(0x66d6d9);
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
B66d6db:{NFSU2_TR(0x66d6db);
if(r1(R+518)){{goto L66d735;}}
}
B66d6dd:L66d6dd:{c.instructions+=3;NFSU2_TR(0x66d6dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66d6e0:{NFSU2_TR(0x66d6e0);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66d6e4:{NFSU2_TR(0x66d6e4);
if(r1(R+518)){{goto L66d6ec;}}
}
B66d6e6:L66d6e6:{c.instructions+=2;NFSU2_TR(0x66d6e6);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
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
B66d6ea:{NFSU2_TR(0x66d6ea);
if(r1(R+518)){{goto L66d735;}}
}
B66d6ec:L66d6ec:{c.instructions+=2;NFSU2_TR(0x66d6ec);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
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
B66d6ef:{NFSU2_TR(0x66d6ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66d735;}}
}
B66d6f1:L66d6f1:{c.instructions+=2;NFSU2_TR(0x66d6f1);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+12)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B66d6f3:{NFSU2_TR(0x66d6f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66d735;}}
}
B66d6f5:L66d6f5:{c.instructions+=2;NFSU2_TR(0x66d6f5);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66d6f9:{NFSU2_TR(0x66d6f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66d70a;}}
}
B66d6fb:L66d6fb:{c.instructions+=5;NFSU2_TR(0x66d6fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66d6fe:{NFSU2_TR(0x66d6fe);
w4(R+24,u32(~u32(r4(R+24))));
}
B66d700:{NFSU2_TR(0x66d700);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d701:{NFSU2_TR(0x66d701);
__builtin_memmove((R+4),(R+28),4);
}
B66d703:{NFSU2_TR(0x66d703);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66d708ull));
TAIL_STATIC(0x666950u,666);
}
B66d708:L66d708:{c.instructions+=1;NFSU2_TR(0x66d708);
{goto L66d73a;}
}
B66d70a:L66d70a:{c.instructions+=9;NFSU2_TR(0x66d70a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66d710:{NFSU2_TR(0x66d710);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66d713:{NFSU2_TR(0x66d713);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66d716:{NFSU2_TR(0x66d716);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66d719:{NFSU2_TR(0x66d719);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66d71b:{NFSU2_TR(0x66d71b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B66d71d:{NFSU2_TR(0x66d71d);
__builtin_memmove((R+4),(R+28),4);
}
B66d71f:{NFSU2_TR(0x66d71f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66d722:{NFSU2_TR(0x66d722);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66d727ull));
TAIL_STATIC(0x65cd6cu,65c);
}
B66d727:L66d727:{c.instructions+=2;NFSU2_TR(0x66d727);
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
B66d729:{NFSU2_TR(0x66d729);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66d73a;}}
}
B66d72b:L66d72b:{c.instructions+=3;NFSU2_TR(0x66d72b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d72c:{NFSU2_TR(0x66d72c);
__builtin_memmove((R+4),(R+28),4);
}
B66d72e:{NFSU2_TR(0x66d72e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66d733ull));
TAIL_STATIC(0x66055cu,660);
}
B66d733:L66d733:{c.instructions+=1;NFSU2_TR(0x66d733);
{goto L66d73a;}
}
B66d735:L66d735:{c.instructions+=1;NFSU2_TR(0x66d735);
w4(R+0,u32(0x8876086cull));
}
B66d73a:L66d73a:{c.instructions+=5;NFSU2_TR(0x66d73a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66d73b:{NFSU2_TR(0x66d73b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66d73c:{NFSU2_TR(0x66d73c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66d73d:{NFSU2_TR(0x66d73d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B66d73e:{NFSU2_TR(0x66d73e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66d741:L66d741:{c.instructions+=11;NFSU2_TR(0x66d741);
__builtin_memmove((R+28),(R+28),4);
}
B66d743:{NFSU2_TR(0x66d743);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d744:{NFSU2_TR(0x66d744);
__builtin_memmove((R+20),(R+16),4);
}
B66d746:{NFSU2_TR(0x66d746);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d747:{NFSU2_TR(0x66d747);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d748:{NFSU2_TR(0x66d748);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66d74b:{NFSU2_TR(0x66d74b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d74c:{NFSU2_TR(0x66d74c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B66d74e:{NFSU2_TR(0x66d74e);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B66d750:{NFSU2_TR(0x66d750);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66d753:{NFSU2_TR(0x66d753);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66d75e;}}
}
B66d755:L66d755:{c.instructions+=2;NFSU2_TR(0x66d755);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B66d75c:{NFSU2_TR(0x66d75c);
{goto L66d7d0;}
}
B66d75e:L66d75e:{c.instructions+=7;NFSU2_TR(0x66d75e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d75f:{NFSU2_TR(0x66d75f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66d762:{NFSU2_TR(0x66d762);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d763:{NFSU2_TR(0x66d763);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d765:{NFSU2_TR(0x66d765);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66d768:{NFSU2_TR(0x66d768);
__builtin_memmove((R+4),(R+24),4);
}
B66d76a:{NFSU2_TR(0x66d76a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66d76full));
TAIL_STATIC(0x66bbeeu,66b);
}
B66d76f:L66d76f:{c.instructions+=2;NFSU2_TR(0x66d76f);
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
B66d771:{NFSU2_TR(0x66d771);
if(r1(R+518)){{goto L66d7c8;}}
}
B66d773:L66d773:{c.instructions+=3;NFSU2_TR(0x66d773);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66d776:{NFSU2_TR(0x66d776);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66d779:{NFSU2_TR(0x66d779);
if(r1(R+518)){{goto L66d781;}}
}
B66d77b:L66d77b:{c.instructions+=2;NFSU2_TR(0x66d77b);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
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
B66d77f:{NFSU2_TR(0x66d77f);
if(r1(R+518)){{goto L66d7c8;}}
}
B66d781:L66d781:{c.instructions+=2;NFSU2_TR(0x66d781);
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
B66d785:{NFSU2_TR(0x66d785);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66d7c8;}}
}
B66d787:L66d787:{c.instructions+=2;NFSU2_TR(0x66d787);
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
B66d78a:{NFSU2_TR(0x66d78a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66d7c8;}}
}
B66d78c:L66d78c:{c.instructions+=8;NFSU2_TR(0x66d78c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66d78f:{NFSU2_TR(0x66d78f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66d795:{NFSU2_TR(0x66d795);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B66d798:{NFSU2_TR(0x66d798);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66d79b:{NFSU2_TR(0x66d79b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66d79d:{NFSU2_TR(0x66d79d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66d79f:{NFSU2_TR(0x66d79f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66d7a1:{NFSU2_TR(0x66d7a1);
if(r1(R+518)){{goto L66d7a9;}}
}
B66d7a3:L66d7a3:{c.instructions+=2;NFSU2_TR(0x66d7a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66d7a6:{NFSU2_TR(0x66d7a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66d7a9:L66d7a9:{c.instructions+=5;NFSU2_TR(0x66d7a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66d7ac:{NFSU2_TR(0x66d7ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66d7af:{NFSU2_TR(0x66d7af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66d7b2:{NFSU2_TR(0x66d7b2);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
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
B66d7b5:{NFSU2_TR(0x66d7b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66d7bb;}}
}
B66d7b7:L66d7b7:{c.instructions+=2;NFSU2_TR(0x66d7b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B66d7b9:{NFSU2_TR(0x66d7b9);
{goto L66d7cf;}
}
B66d7bb:L66d7bb:{c.instructions+=4;NFSU2_TR(0x66d7bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66d7be:{NFSU2_TR(0x66d7be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66d7c0:{NFSU2_TR(0x66d7c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d7c1:{NFSU2_TR(0x66d7c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66d7c4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66d7c4:L66d7c4:{c.instructions+=2;NFSU2_TR(0x66d7c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B66d7c6:{NFSU2_TR(0x66d7c6);
{goto L66d7cf;}
}
B66d7c8:L66d7c8:{c.instructions+=1;NFSU2_TR(0x66d7c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B66d7cf:L66d7cf:{c.instructions+=1;NFSU2_TR(0x66d7cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66d7d0:L66d7d0:{c.instructions+=5;NFSU2_TR(0x66d7d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66d7d3:{NFSU2_TR(0x66d7d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66d7d4:{NFSU2_TR(0x66d7d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66d7d5:{NFSU2_TR(0x66d7d5);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66d7d6:{NFSU2_TR(0x66d7d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66d7d9:L66d7d9:{c.instructions+=12;NFSU2_TR(0x66d7d9);
__builtin_memmove((R+28),(R+28),4);
}
B66d7db:{NFSU2_TR(0x66d7db);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d7dc:{NFSU2_TR(0x66d7dc);
__builtin_memmove((R+20),(R+16),4);
}
B66d7de:{NFSU2_TR(0x66d7de);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d7df:{NFSU2_TR(0x66d7df);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d7e0:{NFSU2_TR(0x66d7e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66d7e3:{NFSU2_TR(0x66d7e3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B66d7e5:{NFSU2_TR(0x66d7e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d7e6:{NFSU2_TR(0x66d7e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66d7e9:{NFSU2_TR(0x66d7e9);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d7eb:{NFSU2_TR(0x66d7eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66d7ec:{NFSU2_TR(0x66d7ec);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L66d7f2;}}
}
B66d7ee:L66d7ee:{c.instructions+=2;NFSU2_TR(0x66d7ee);
w4(R+24,u32(~u32(r4(R+24))));
}
B66d7f0:{NFSU2_TR(0x66d7f0);
{goto L66d821;}
}
B66d7f2:L66d7f2:{c.instructions+=12;NFSU2_TR(0x66d7f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66d7f8:{NFSU2_TR(0x66d7f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66d7fa:{NFSU2_TR(0x66d7fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B66d801:{NFSU2_TR(0x66d801);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66d803:{NFSU2_TR(0x66d803);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d805:{NFSU2_TR(0x66d805);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B66d807:{NFSU2_TR(0x66d807);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66d809:{NFSU2_TR(0x66d809);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66d80d:{NFSU2_TR(0x66d80d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d80f:{NFSU2_TR(0x66d80f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d810:{NFSU2_TR(0x66d810);
__builtin_memmove((R+4),(R+28),4);
}
B66d812:{NFSU2_TR(0x66d812);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66d817ull));
TAIL_STATIC(0x66bbeeu,66b);
}
B66d817:L66d817:{c.instructions+=3;NFSU2_TR(0x66d817);
__builtin_memmove((R+24),(R+0),4);
}
B66d819:{NFSU2_TR(0x66d819);
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
B66d81b:{NFSU2_TR(0x66d81b);
if(r1(R+518)){{goto L66d8a1;}}
}
B66d821:L66d821:{c.instructions+=3;NFSU2_TR(0x66d821);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66d824:{NFSU2_TR(0x66d824);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66d828:{NFSU2_TR(0x66d828);
if(r1(R+518)){{goto L66d830;}}
}
B66d82a:L66d82a:{c.instructions+=2;NFSU2_TR(0x66d82a);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
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
B66d82e:{NFSU2_TR(0x66d82e);
if(r1(R+518)){{goto L66d8a1;}}
}
B66d830:L66d830:{c.instructions+=3;NFSU2_TR(0x66d830);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66d832:{NFSU2_TR(0x66d832);
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
B66d834:{NFSU2_TR(0x66d834);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66d8a1;}}
}
B66d836:L66d836:{c.instructions+=2;NFSU2_TR(0x66d836);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x9ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B66d839:{NFSU2_TR(0x66d839);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L66d8a1;}}
}
B66d83b:L66d83b:{c.instructions+=2;NFSU2_TR(0x66d83b);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66d83f:{NFSU2_TR(0x66d83f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66d850;}}
}
B66d841:L66d841:{c.instructions+=5;NFSU2_TR(0x66d841);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66d844:{NFSU2_TR(0x66d844);
w4(R+24,u32(~u32(r4(R+24))));
}
B66d846:{NFSU2_TR(0x66d846);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d847:{NFSU2_TR(0x66d847);
__builtin_memmove((R+4),(R+28),4);
}
B66d849:{NFSU2_TR(0x66d849);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66d84eull));
TAIL_STATIC(0x666a68u,666);
}
B66d84e:L66d84e:{c.instructions+=1;NFSU2_TR(0x66d84e);
{goto L66d8a6;}
}
B66d850:L66d850:{c.instructions+=9;NFSU2_TR(0x66d850);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66d856:{NFSU2_TR(0x66d856);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66d859:{NFSU2_TR(0x66d859);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66d85c:{NFSU2_TR(0x66d85c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66d85f:{NFSU2_TR(0x66d85f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66d861:{NFSU2_TR(0x66d861);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66d863:{NFSU2_TR(0x66d863);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66d865:{NFSU2_TR(0x66d865);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66d868:{NFSU2_TR(0x66d868);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66d86e;}}
}
B66d86a:L66d86a:{c.instructions+=2;NFSU2_TR(0x66d86a);
__builtin_memmove((R+4),(R+0),4);
}
B66d86c:{NFSU2_TR(0x66d86c);
{goto L66d874;}
}
B66d86e:L66d86e:{c.instructions+=2;NFSU2_TR(0x66d86e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66d871:{NFSU2_TR(0x66d871);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B66d874:L66d874:{c.instructions+=5;NFSU2_TR(0x66d874);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66d877:{NFSU2_TR(0x66d877);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B66d87a:{NFSU2_TR(0x66d87a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66d87d:{NFSU2_TR(0x66d87d);
u8 U[24];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+4))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B66d881:{NFSU2_TR(0x66d881);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66d887;}}
}
B66d883:L66d883:{c.instructions+=2;NFSU2_TR(0x66d883);
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
B66d885:{NFSU2_TR(0x66d885);
{goto L66d8a6;}
}
B66d887:L66d887:{c.instructions+=5;NFSU2_TR(0x66d887);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66d88a:{NFSU2_TR(0x66d88a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d88b:{NFSU2_TR(0x66d88b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d88c:{NFSU2_TR(0x66d88c);
__builtin_memmove((R+4),(R+28),4);
}
B66d88e:{NFSU2_TR(0x66d88e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66d893ull));
TAIL_STATIC(0x65ccc8u,65c);
}
B66d893:L66d893:{c.instructions+=2;NFSU2_TR(0x66d893);
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
B66d895:{NFSU2_TR(0x66d895);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66d8a6;}}
}
B66d897:L66d897:{c.instructions+=3;NFSU2_TR(0x66d897);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d898:{NFSU2_TR(0x66d898);
__builtin_memmove((R+4),(R+28),4);
}
B66d89a:{NFSU2_TR(0x66d89a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66d89full));
TAIL_STATIC(0x66055cu,660);
}
B66d89f:L66d89f:{c.instructions+=1;NFSU2_TR(0x66d89f);
{goto L66d8a6;}
}
B66d8a1:L66d8a1:{c.instructions+=1;NFSU2_TR(0x66d8a1);
w4(R+0,u32(0x8876086cull));
}
B66d8a6:L66d8a6:{c.instructions+=5;NFSU2_TR(0x66d8a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66d8a7:{NFSU2_TR(0x66d8a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66d8a8:{NFSU2_TR(0x66d8a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66d8a9:{NFSU2_TR(0x66d8a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B66d8aa:{NFSU2_TR(0x66d8aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66d8ad:L66d8ad:{c.instructions+=9;NFSU2_TR(0x66d8ad);
__builtin_memmove((R+28),(R+28),4);
}
B66d8af:{NFSU2_TR(0x66d8af);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d8b0:{NFSU2_TR(0x66d8b0);
__builtin_memmove((R+20),(R+16),4);
}
B66d8b2:{NFSU2_TR(0x66d8b2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d8b3:{NFSU2_TR(0x66d8b3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d8b4:{NFSU2_TR(0x66d8b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66d8b7:{NFSU2_TR(0x66d8b7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B66d8b9:{NFSU2_TR(0x66d8b9);
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
B66d8bb:{NFSU2_TR(0x66d8bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66d8c7;}}
}
B66d8bd:L66d8bd:{c.instructions+=2;NFSU2_TR(0x66d8bd);
w4(R+12,u32(0x8876086cull));
}
B66d8c2:{NFSU2_TR(0x66d8c2);
{goto L66d947;}
}
B66d8c7:L66d8c7:{c.instructions+=7;NFSU2_TR(0x66d8c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d8c8:{NFSU2_TR(0x66d8c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66d8cb:{NFSU2_TR(0x66d8cb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d8cc:{NFSU2_TR(0x66d8cc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d8ce:{NFSU2_TR(0x66d8ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66d8d1:{NFSU2_TR(0x66d8d1);
__builtin_memmove((R+4),(R+24),4);
}
B66d8d3:{NFSU2_TR(0x66d8d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66d8d8ull));
TAIL_STATIC(0x66bbeeu,66b);
}
B66d8d8:L66d8d8:{c.instructions+=2;NFSU2_TR(0x66d8d8);
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
B66d8da:{NFSU2_TR(0x66d8da);
if(r1(R+518)){{goto L66d941;}}
}
B66d8dc:L66d8dc:{c.instructions+=3;NFSU2_TR(0x66d8dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66d8df:{NFSU2_TR(0x66d8df);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66d8e3:{NFSU2_TR(0x66d8e3);
if(r1(R+518)){{goto L66d8eb;}}
}
B66d8e5:L66d8e5:{c.instructions+=2;NFSU2_TR(0x66d8e5);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
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
B66d8e9:{NFSU2_TR(0x66d8e9);
if(r1(R+518)){{goto L66d941;}}
}
B66d8eb:L66d8eb:{c.instructions+=3;NFSU2_TR(0x66d8eb);
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
B66d8ef:{NFSU2_TR(0x66d8ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66d8f1:{NFSU2_TR(0x66d8f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66d941;}}
}
B66d8f3:L66d8f3:{c.instructions+=2;NFSU2_TR(0x66d8f3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66d8f6:{NFSU2_TR(0x66d8f6);
if(r1(R+518)){{goto L66d90c;}}
}
B66d8f8:L66d8f8:{c.instructions+=2;NFSU2_TR(0x66d8f8);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66d8fb:{NFSU2_TR(0x66d8fb);
if(r1(R+518)){{goto L66d90c;}}
}
B66d8fd:L66d8fd:{c.instructions+=2;NFSU2_TR(0x66d8fd);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66d900:{NFSU2_TR(0x66d900);
if(r1(R+518)){{goto L66d90c;}}
}
B66d902:L66d902:{c.instructions+=2;NFSU2_TR(0x66d902);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66d905:{NFSU2_TR(0x66d905);
if(r1(R+518)){{goto L66d90c;}}
}
B66d907:L66d907:{c.instructions+=2;NFSU2_TR(0x66d907);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x9ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B66d90a:{NFSU2_TR(0x66d90a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66d941;}}
}
B66d90c:L66d90c:{c.instructions+=8;NFSU2_TR(0x66d90c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66d90f:{NFSU2_TR(0x66d90f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66d915:{NFSU2_TR(0x66d915);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B66d918:{NFSU2_TR(0x66d918);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66d91b:{NFSU2_TR(0x66d91b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66d91d:{NFSU2_TR(0x66d91d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66d91f:{NFSU2_TR(0x66d91f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66d921:{NFSU2_TR(0x66d921);
if(r1(R+518)){{goto L66d929;}}
}
B66d923:L66d923:{c.instructions+=2;NFSU2_TR(0x66d923);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66d926:{NFSU2_TR(0x66d926);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66d929:L66d929:{c.instructions+=6;NFSU2_TR(0x66d929);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66d92c:{NFSU2_TR(0x66d92c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66d92f:{NFSU2_TR(0x66d92f);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B66d933:{NFSU2_TR(0x66d933);
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
B66d935:{NFSU2_TR(0x66d935);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B66d937:{NFSU2_TR(0x66d937);
if(r1(R+518)){{goto L66d946;}}
}
B66d939:L66d939:{c.instructions+=3;NFSU2_TR(0x66d939);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66d93b:{NFSU2_TR(0x66d93b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d93c:{NFSU2_TR(0x66d93c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66d93full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66d93f:L66d93f:{c.instructions+=1;NFSU2_TR(0x66d93f);
{goto L66d946;}
}
B66d941:L66d941:{c.instructions+=1;NFSU2_TR(0x66d941);
w4(R+12,u32(0x8876086cull));
}
B66d946:L66d946:{c.instructions+=1;NFSU2_TR(0x66d946);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66d947:L66d947:{c.instructions+=5;NFSU2_TR(0x66d947);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66d948:{NFSU2_TR(0x66d948);
__builtin_memmove((R+0),(R+12),4);
}
B66d94a:{NFSU2_TR(0x66d94a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66d94b:{NFSU2_TR(0x66d94b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B66d94c:{NFSU2_TR(0x66d94c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66d94f:L66d94f:{c.instructions+=23;NFSU2_TR(0x66d94f);
__builtin_memmove((R+28),(R+28),4);
}
B66d951:{NFSU2_TR(0x66d951);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d952:{NFSU2_TR(0x66d952);
__builtin_memmove((R+20),(R+16),4);
}
B66d954:{NFSU2_TR(0x66d954);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d955:{NFSU2_TR(0x66d955);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66d959:{NFSU2_TR(0x66d959);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d95a:{NFSU2_TR(0x66d95a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d95b:{NFSU2_TR(0x66d95b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66d95e:{NFSU2_TR(0x66d95e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d95f:{NFSU2_TR(0x66d95f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d961:{NFSU2_TR(0x66d961);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66d967:{NFSU2_TR(0x66d967);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66d969:{NFSU2_TR(0x66d969);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66d96a:{NFSU2_TR(0x66d96a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66d96d:{NFSU2_TR(0x66d96d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66d96f:{NFSU2_TR(0x66d96f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d971:{NFSU2_TR(0x66d971);
u8 U[4];
w4(U+0,u32(0xfull));
s4(u32(r4(R+4)),r4(U+0));
}
B66d977:{NFSU2_TR(0x66d977);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66d979:{NFSU2_TR(0x66d979);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66d97d:{NFSU2_TR(0x66d97d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d97f:{NFSU2_TR(0x66d97f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66d982:{NFSU2_TR(0x66d982);
__builtin_memmove((R+4),(R+24),4);
}
B66d984:{NFSU2_TR(0x66d984);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66d989ull));
TAIL_STATIC(0x66bbeeu,66b);
}
B66d989:L66d989:{c.instructions+=3;NFSU2_TR(0x66d989);
__builtin_memmove((R+28),(R+0),4);
}
B66d98b:{NFSU2_TR(0x66d98b);
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
B66d98d:{NFSU2_TR(0x66d98d);
if(r1(R+518)){{goto L66da93;}}
}
B66d993:L66d993:{c.instructions+=3;NFSU2_TR(0x66d993);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66d996:{NFSU2_TR(0x66d996);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66d99a:{NFSU2_TR(0x66d99a);
if(r1(R+518)){{goto L66d9a6;}}
}
B66d99c:L66d99c:{c.instructions+=2;NFSU2_TR(0x66d99c);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
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
B66d9a0:{NFSU2_TR(0x66d9a0);
if(r1(R+518)){{goto L66da93;}}
}
B66d9a6:L66d9a6:{c.instructions+=2;NFSU2_TR(0x66d9a6);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
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
B66d9a9:{NFSU2_TR(0x66d9a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66da93;}}
}
B66d9af:L66d9af:{c.instructions+=2;NFSU2_TR(0x66d9af);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0xfull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0xfull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B66d9b2:{NFSU2_TR(0x66d9b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66da93;}}
}
B66d9b8:L66d9b8:{c.instructions+=2;NFSU2_TR(0x66d9b8);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66d9bc:{NFSU2_TR(0x66d9bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66d9d0;}}
}
B66d9be:L66d9be:{c.instructions+=5;NFSU2_TR(0x66d9be);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66d9c1:{NFSU2_TR(0x66d9c1);
w4(R+28,u32(~u32(r4(R+28))));
}
B66d9c3:{NFSU2_TR(0x66d9c3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66d9c4:{NFSU2_TR(0x66d9c4);
__builtin_memmove((R+4),(R+24),4);
}
B66d9c6:{NFSU2_TR(0x66d9c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66d9cbull));
TAIL_STATIC(0x666b1bu,666);
}
B66d9cb:L66d9cb:{c.instructions+=1;NFSU2_TR(0x66d9cb);
{goto L66da9d;}
}
B66d9d0:L66d9d0:{c.instructions+=8;NFSU2_TR(0x66d9d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66d9d6:{NFSU2_TR(0x66d9d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66d9d9:{NFSU2_TR(0x66d9d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66d9dc:{NFSU2_TR(0x66d9dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66d9df:{NFSU2_TR(0x66d9df);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66d9e1:{NFSU2_TR(0x66d9e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66d9e4:{NFSU2_TR(0x66d9e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66d9e7:{NFSU2_TR(0x66d9e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66d9f9;}}
}
B66d9e9:L66d9e9:{c.instructions+=6;NFSU2_TR(0x66d9e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66d9ec:{NFSU2_TR(0x66d9ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66d9ef:{NFSU2_TR(0x66d9ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66d9f2:{NFSU2_TR(0x66d9f2);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B66d9f4:{NFSU2_TR(0x66d9f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66d9f7:{NFSU2_TR(0x66d9f7);
{goto L66da1f;}
}
B66d9f9:L66d9f9:{c.instructions+=12;NFSU2_TR(0x66d9f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66d9fc:{NFSU2_TR(0x66d9fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66d9ff:{NFSU2_TR(0x66d9ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66da05:{NFSU2_TR(0x66da05);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66da08:{NFSU2_TR(0x66da08);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66da0b:{NFSU2_TR(0x66da0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66da0e:{NFSU2_TR(0x66da0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66da11:{NFSU2_TR(0x66da11);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66da14:{NFSU2_TR(0x66da14);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66da17:{NFSU2_TR(0x66da17);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B66da19:{NFSU2_TR(0x66da19);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B66da1c:{NFSU2_TR(0x66da1c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66da1f:L66da1f:{c.instructions+=5;NFSU2_TR(0x66da1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66da22:{NFSU2_TR(0x66da22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66da25:{NFSU2_TR(0x66da25);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66da28:{NFSU2_TR(0x66da28);
u8 U[24];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+12))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B66da2c:{NFSU2_TR(0x66da2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66da74;}}
}
B66da2e:L66da2e:{c.instructions+=2;NFSU2_TR(0x66da2e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66da32:{NFSU2_TR(0x66da32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66da44;}}
}
B66da34:L66da34:{c.instructions+=6;NFSU2_TR(0x66da34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66da37:{NFSU2_TR(0x66da37);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66da3a:{NFSU2_TR(0x66da3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66da3d:{NFSU2_TR(0x66da3d);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B66da3f:{NFSU2_TR(0x66da3f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66da42:{NFSU2_TR(0x66da42);
{goto L66da67;}
}
B66da44:L66da44:{c.instructions+=11;NFSU2_TR(0x66da44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66da47:{NFSU2_TR(0x66da47);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66da4a:{NFSU2_TR(0x66da4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66da50:{NFSU2_TR(0x66da50);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66da53:{NFSU2_TR(0x66da53);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66da56:{NFSU2_TR(0x66da56);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66da59:{NFSU2_TR(0x66da59);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66da5c:{NFSU2_TR(0x66da5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66da5f:{NFSU2_TR(0x66da5f);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B66da61:{NFSU2_TR(0x66da61);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B66da64:{NFSU2_TR(0x66da64);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66da67:L66da67:{c.instructions+=4;NFSU2_TR(0x66da67);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B66da6a:{NFSU2_TR(0x66da6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66da6d:{NFSU2_TR(0x66da6d);
u8 U[17];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+16,u8(u32(r1(U+12))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+16))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+16))==(u8(0x0ull))));
w1(U+13,u8(u32(r1(U+16))&u32(u8(0xffull))));
w1(U+14,u8(__builtin_popcountll(u64(r1(U+13)))));
w1(U+15,u8(u32(r1(U+14))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+15))==(u8(0x0ull))));
}
B66da72:{NFSU2_TR(0x66da72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66da9a;}}
}
B66da74:L66da74:{c.instructions+=6;NFSU2_TR(0x66da74);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66da77:{NFSU2_TR(0x66da77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66da79:{NFSU2_TR(0x66da79);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B66da7b:{NFSU2_TR(0x66da7b);
__builtin_memmove((R+4),(R+24),4);
}
B66da7d:{NFSU2_TR(0x66da7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66da80:{NFSU2_TR(0x66da80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66da85ull));
TAIL_STATIC(0x65cc10u,65c);
}
B66da85:L66da85:{c.instructions+=2;NFSU2_TR(0x66da85);
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
B66da87:{NFSU2_TR(0x66da87);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66da9d;}}
}
B66da89:L66da89:{c.instructions+=3;NFSU2_TR(0x66da89);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66da8a:{NFSU2_TR(0x66da8a);
__builtin_memmove((R+4),(R+24),4);
}
B66da8c:{NFSU2_TR(0x66da8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66da91ull));
TAIL_STATIC(0x66055cu,660);
}
B66da91:L66da91:{c.instructions+=1;NFSU2_TR(0x66da91);
{goto L66da9d;}
}
B66da93:L66da93:{c.instructions+=2;NFSU2_TR(0x66da93);
w4(R+0,u32(0x8876086cull));
}
B66da98:{NFSU2_TR(0x66da98);
{goto L66da9d;}
}
B66da9a:L66da9a:{c.instructions+=1;NFSU2_TR(0x66da9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66da9d:L66da9d:{c.instructions+=5;NFSU2_TR(0x66da9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66da9e:{NFSU2_TR(0x66da9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66da9f:{NFSU2_TR(0x66da9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66daa0:{NFSU2_TR(0x66daa0);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66daa1:{NFSU2_TR(0x66daa1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66daa4:L66daa4:{c.instructions+=9;NFSU2_TR(0x66daa4);
__builtin_memmove((R+28),(R+28),4);
}
B66daa6:{NFSU2_TR(0x66daa6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66daa7:{NFSU2_TR(0x66daa7);
__builtin_memmove((R+20),(R+16),4);
}
B66daa9:{NFSU2_TR(0x66daa9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66daaa:{NFSU2_TR(0x66daaa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66daab:{NFSU2_TR(0x66daab);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B66daad:{NFSU2_TR(0x66daad);
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
B66dab0:{NFSU2_TR(0x66dab0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66dab3:{NFSU2_TR(0x66dab3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66dac1;}}
}
B66dab5:L66dab5:{c.instructions+=2;NFSU2_TR(0x66dab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B66dabc:{NFSU2_TR(0x66dabc);
{goto L66db57;}
}
B66dac1:L66dac1:{c.instructions+=7;NFSU2_TR(0x66dac1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66dac2:{NFSU2_TR(0x66dac2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66dac5:{NFSU2_TR(0x66dac5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66dac6:{NFSU2_TR(0x66dac6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66dac8:{NFSU2_TR(0x66dac8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66dacb:{NFSU2_TR(0x66dacb);
__builtin_memmove((R+4),(R+24),4);
}
B66dacd:{NFSU2_TR(0x66dacd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66dad2ull));
TAIL_STATIC(0x66bbeeu,66b);
}
B66dad2:L66dad2:{c.instructions+=2;NFSU2_TR(0x66dad2);
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
B66dad4:{NFSU2_TR(0x66dad4);
if(r1(R+518)){{goto L66db4f;}}
}
B66dad6:L66dad6:{c.instructions+=3;NFSU2_TR(0x66dad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66dad9:{NFSU2_TR(0x66dad9);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66dadc:{NFSU2_TR(0x66dadc);
if(r1(R+518)){{goto L66dae4;}}
}
B66dade:L66dade:{c.instructions+=2;NFSU2_TR(0x66dade);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
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
B66dae2:{NFSU2_TR(0x66dae2);
if(r1(R+518)){{goto L66db4f;}}
}
B66dae4:L66dae4:{c.instructions+=2;NFSU2_TR(0x66dae4);
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
B66dae8:{NFSU2_TR(0x66dae8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66db4f;}}
}
B66daea:L66daea:{c.instructions+=2;NFSU2_TR(0x66daea);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0xfull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0xfull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B66daed:{NFSU2_TR(0x66daed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66db4f;}}
}
B66daef:L66daef:{c.instructions+=5;NFSU2_TR(0x66daef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66daf2:{NFSU2_TR(0x66daf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66daf8:{NFSU2_TR(0x66daf8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B66dafb:{NFSU2_TR(0x66dafb);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66dafe:{NFSU2_TR(0x66dafe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66db0e;}}
}
B66db00:L66db00:{c.instructions+=5;NFSU2_TR(0x66db00);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66db03:{NFSU2_TR(0x66db03);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B66db06:{NFSU2_TR(0x66db06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66db09:{NFSU2_TR(0x66db09);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66db0c:{NFSU2_TR(0x66db0c);
{goto L66db34;}
}
B66db0e:L66db0e:{c.instructions+=13;NFSU2_TR(0x66db0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66db11:{NFSU2_TR(0x66db11);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66db14:{NFSU2_TR(0x66db14);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66db17:{NFSU2_TR(0x66db17);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66db18:{NFSU2_TR(0x66db18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66db1e:{NFSU2_TR(0x66db1e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B66db21:{NFSU2_TR(0x66db21);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66db24:{NFSU2_TR(0x66db24);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B66db27:{NFSU2_TR(0x66db27);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66db2a:{NFSU2_TR(0x66db2a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66db2d:{NFSU2_TR(0x66db2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66db30:{NFSU2_TR(0x66db30);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66db33:{NFSU2_TR(0x66db33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66db34:L66db34:{c.instructions+=7;NFSU2_TR(0x66db34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66db37:{NFSU2_TR(0x66db37);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66db3a:{NFSU2_TR(0x66db3a);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B66db3e:{NFSU2_TR(0x66db3e);
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
B66db40:{NFSU2_TR(0x66db40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66db43:{NFSU2_TR(0x66db43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B66db45:{NFSU2_TR(0x66db45);
if(r1(R+518)){{goto L66db56;}}
}
B66db47:L66db47:{c.instructions+=3;NFSU2_TR(0x66db47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66db49:{NFSU2_TR(0x66db49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66db4a:{NFSU2_TR(0x66db4a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66db4dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66db4d:L66db4d:{c.instructions+=1;NFSU2_TR(0x66db4d);
{goto L66db56;}
}
B66db4f:L66db4f:{c.instructions+=1;NFSU2_TR(0x66db4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B66db56:L66db56:{c.instructions+=1;NFSU2_TR(0x66db56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66db57:L66db57:{c.instructions+=4;NFSU2_TR(0x66db57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66db5a:{NFSU2_TR(0x66db5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66db5b:{NFSU2_TR(0x66db5b);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66db5c:{NFSU2_TR(0x66db5c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66db5f:L66db5f:{c.instructions+=23;NFSU2_TR(0x66db5f);
__builtin_memmove((R+28),(R+28),4);
}
B66db61:{NFSU2_TR(0x66db61);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66db62:{NFSU2_TR(0x66db62);
__builtin_memmove((R+20),(R+16),4);
}
B66db64:{NFSU2_TR(0x66db64);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66db65:{NFSU2_TR(0x66db65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66db69:{NFSU2_TR(0x66db69);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66db6a:{NFSU2_TR(0x66db6a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66db6b:{NFSU2_TR(0x66db6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66db6e:{NFSU2_TR(0x66db6e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66db6f:{NFSU2_TR(0x66db6f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66db71:{NFSU2_TR(0x66db71);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66db77:{NFSU2_TR(0x66db77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66db79:{NFSU2_TR(0x66db79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66db7a:{NFSU2_TR(0x66db7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66db7d:{NFSU2_TR(0x66db7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66db7f:{NFSU2_TR(0x66db7f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66db81:{NFSU2_TR(0x66db81);
u8 U[4];
w4(U+0,u32(0x10ull));
s4(u32(r4(R+4)),r4(U+0));
}
B66db87:{NFSU2_TR(0x66db87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66db89:{NFSU2_TR(0x66db89);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66db8d:{NFSU2_TR(0x66db8d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66db8f:{NFSU2_TR(0x66db8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66db92:{NFSU2_TR(0x66db92);
__builtin_memmove((R+4),(R+24),4);
}
B66db94:{NFSU2_TR(0x66db94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66db99ull));
TAIL_STATIC(0x66bbeeu,66b);
}
B66db99:L66db99:{c.instructions+=3;NFSU2_TR(0x66db99);
__builtin_memmove((R+28),(R+0),4);
}
B66db9b:{NFSU2_TR(0x66db9b);
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
B66db9d:{NFSU2_TR(0x66db9d);
if(r1(R+518)){{goto L66dca3;}}
}
B66dba3:L66dba3:{c.instructions+=3;NFSU2_TR(0x66dba3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66dba6:{NFSU2_TR(0x66dba6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66dbaa:{NFSU2_TR(0x66dbaa);
if(r1(R+518)){{goto L66dbb6;}}
}
B66dbac:L66dbac:{c.instructions+=2;NFSU2_TR(0x66dbac);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
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
B66dbb0:{NFSU2_TR(0x66dbb0);
if(r1(R+518)){{goto L66dca3;}}
}
B66dbb6:L66dbb6:{c.instructions+=2;NFSU2_TR(0x66dbb6);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
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
B66dbb9:{NFSU2_TR(0x66dbb9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66dca3;}}
}
B66dbbf:L66dbbf:{c.instructions+=2;NFSU2_TR(0x66dbbf);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x10ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B66dbc2:{NFSU2_TR(0x66dbc2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66dca3;}}
}
B66dbc8:L66dbc8:{c.instructions+=2;NFSU2_TR(0x66dbc8);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66dbcc:{NFSU2_TR(0x66dbcc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66dbe0;}}
}
B66dbce:L66dbce:{c.instructions+=5;NFSU2_TR(0x66dbce);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66dbd1:{NFSU2_TR(0x66dbd1);
w4(R+28,u32(~u32(r4(R+28))));
}
B66dbd3:{NFSU2_TR(0x66dbd3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66dbd4:{NFSU2_TR(0x66dbd4);
__builtin_memmove((R+4),(R+24),4);
}
B66dbd6:{NFSU2_TR(0x66dbd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66dbdbull));
TAIL_STATIC(0x666bceu,666);
}
B66dbdb:L66dbdb:{c.instructions+=1;NFSU2_TR(0x66dbdb);
{goto L66dcad;}
}
B66dbe0:L66dbe0:{c.instructions+=8;NFSU2_TR(0x66dbe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66dbe6:{NFSU2_TR(0x66dbe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66dbe9:{NFSU2_TR(0x66dbe9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66dbec:{NFSU2_TR(0x66dbec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66dbef:{NFSU2_TR(0x66dbef);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66dbf1:{NFSU2_TR(0x66dbf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66dbf4:{NFSU2_TR(0x66dbf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66dbf7:{NFSU2_TR(0x66dbf7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66dc09;}}
}
B66dbf9:L66dbf9:{c.instructions+=6;NFSU2_TR(0x66dbf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66dbfc:{NFSU2_TR(0x66dbfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66dbff:{NFSU2_TR(0x66dbff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66dc02:{NFSU2_TR(0x66dc02);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B66dc04:{NFSU2_TR(0x66dc04);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66dc07:{NFSU2_TR(0x66dc07);
{goto L66dc2f;}
}
B66dc09:L66dc09:{c.instructions+=12;NFSU2_TR(0x66dc09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66dc0c:{NFSU2_TR(0x66dc0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66dc0f:{NFSU2_TR(0x66dc0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66dc15:{NFSU2_TR(0x66dc15);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66dc18:{NFSU2_TR(0x66dc18);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66dc1b:{NFSU2_TR(0x66dc1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66dc1e:{NFSU2_TR(0x66dc1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66dc21:{NFSU2_TR(0x66dc21);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66dc24:{NFSU2_TR(0x66dc24);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66dc27:{NFSU2_TR(0x66dc27);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B66dc29:{NFSU2_TR(0x66dc29);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B66dc2c:{NFSU2_TR(0x66dc2c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66dc2f:L66dc2f:{c.instructions+=5;NFSU2_TR(0x66dc2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66dc32:{NFSU2_TR(0x66dc32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66dc35:{NFSU2_TR(0x66dc35);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66dc38:{NFSU2_TR(0x66dc38);
u8 U[24];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+12))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B66dc3c:{NFSU2_TR(0x66dc3c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66dc84;}}
}
B66dc3e:L66dc3e:{c.instructions+=2;NFSU2_TR(0x66dc3e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66dc42:{NFSU2_TR(0x66dc42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66dc54;}}
}
B66dc44:L66dc44:{c.instructions+=6;NFSU2_TR(0x66dc44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66dc47:{NFSU2_TR(0x66dc47);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66dc4a:{NFSU2_TR(0x66dc4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66dc4d:{NFSU2_TR(0x66dc4d);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B66dc4f:{NFSU2_TR(0x66dc4f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66dc52:{NFSU2_TR(0x66dc52);
{goto L66dc77;}
}
B66dc54:L66dc54:{c.instructions+=11;NFSU2_TR(0x66dc54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66dc57:{NFSU2_TR(0x66dc57);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66dc5a:{NFSU2_TR(0x66dc5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66dc60:{NFSU2_TR(0x66dc60);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66dc63:{NFSU2_TR(0x66dc63);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66dc66:{NFSU2_TR(0x66dc66);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66dc69:{NFSU2_TR(0x66dc69);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66dc6c:{NFSU2_TR(0x66dc6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66dc6f:{NFSU2_TR(0x66dc6f);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B66dc71:{NFSU2_TR(0x66dc71);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B66dc74:{NFSU2_TR(0x66dc74);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66dc77:L66dc77:{c.instructions+=4;NFSU2_TR(0x66dc77);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B66dc7a:{NFSU2_TR(0x66dc7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66dc7d:{NFSU2_TR(0x66dc7d);
u8 U[17];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+16,u8(u32(r1(U+12))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+16))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+16))==(u8(0x0ull))));
w1(U+13,u8(u32(r1(U+16))&u32(u8(0xffull))));
w1(U+14,u8(__builtin_popcountll(u64(r1(U+13)))));
w1(U+15,u8(u32(r1(U+14))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+15))==(u8(0x0ull))));
}
B66dc82:{NFSU2_TR(0x66dc82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66dcaa;}}
}
B66dc84:L66dc84:{c.instructions+=6;NFSU2_TR(0x66dc84);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66dc87:{NFSU2_TR(0x66dc87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66dc89:{NFSU2_TR(0x66dc89);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B66dc8b:{NFSU2_TR(0x66dc8b);
__builtin_memmove((R+4),(R+24),4);
}
B66dc8d:{NFSU2_TR(0x66dc8d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66dc90:{NFSU2_TR(0x66dc90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66dc95ull));
TAIL_STATIC(0x65cc10u,65c);
}
B66dc95:L66dc95:{c.instructions+=2;NFSU2_TR(0x66dc95);
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
B66dc97:{NFSU2_TR(0x66dc97);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66dcad;}}
}
B66dc99:L66dc99:{c.instructions+=3;NFSU2_TR(0x66dc99);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66dc9a:{NFSU2_TR(0x66dc9a);
__builtin_memmove((R+4),(R+24),4);
}
B66dc9c:{NFSU2_TR(0x66dc9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66dca1ull));
TAIL_STATIC(0x66055cu,660);
}
B66dca1:L66dca1:{c.instructions+=1;NFSU2_TR(0x66dca1);
{goto L66dcad;}
}
B66dca3:L66dca3:{c.instructions+=2;NFSU2_TR(0x66dca3);
w4(R+0,u32(0x8876086cull));
}
B66dca8:{NFSU2_TR(0x66dca8);
{goto L66dcad;}
}
B66dcaa:L66dcaa:{c.instructions+=1;NFSU2_TR(0x66dcaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66dcad:L66dcad:{c.instructions+=5;NFSU2_TR(0x66dcad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66dcae:{NFSU2_TR(0x66dcae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66dcaf:{NFSU2_TR(0x66dcaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66dcb0:{NFSU2_TR(0x66dcb0);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66dcb1:{NFSU2_TR(0x66dcb1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66dcb4:L66dcb4:{c.instructions+=9;NFSU2_TR(0x66dcb4);
__builtin_memmove((R+28),(R+28),4);
}
B66dcb6:{NFSU2_TR(0x66dcb6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66dcb7:{NFSU2_TR(0x66dcb7);
__builtin_memmove((R+20),(R+16),4);
}
B66dcb9:{NFSU2_TR(0x66dcb9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66dcba:{NFSU2_TR(0x66dcba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66dcbb:{NFSU2_TR(0x66dcbb);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B66dcbd:{NFSU2_TR(0x66dcbd);
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
B66dcc0:{NFSU2_TR(0x66dcc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66dcc3:{NFSU2_TR(0x66dcc3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66dcd1;}}
}
B66dcc5:L66dcc5:{c.instructions+=2;NFSU2_TR(0x66dcc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B66dccc:{NFSU2_TR(0x66dccc);
{goto L66dd67;}
}
B66dcd1:L66dcd1:{c.instructions+=7;NFSU2_TR(0x66dcd1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66dcd2:{NFSU2_TR(0x66dcd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66dcd5:{NFSU2_TR(0x66dcd5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66dcd6:{NFSU2_TR(0x66dcd6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66dcd8:{NFSU2_TR(0x66dcd8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66dcdb:{NFSU2_TR(0x66dcdb);
__builtin_memmove((R+4),(R+24),4);
}
B66dcdd:{NFSU2_TR(0x66dcdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66dce2ull));
TAIL_STATIC(0x66bbeeu,66b);
}
B66dce2:L66dce2:{c.instructions+=2;NFSU2_TR(0x66dce2);
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
B66dce4:{NFSU2_TR(0x66dce4);
if(r1(R+518)){{goto L66dd5f;}}
}
B66dce6:L66dce6:{c.instructions+=3;NFSU2_TR(0x66dce6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66dce9:{NFSU2_TR(0x66dce9);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66dcec:{NFSU2_TR(0x66dcec);
if(r1(R+518)){{goto L66dcf4;}}
}
B66dcee:L66dcee:{c.instructions+=2;NFSU2_TR(0x66dcee);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
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
B66dcf2:{NFSU2_TR(0x66dcf2);
if(r1(R+518)){{goto L66dd5f;}}
}
B66dcf4:L66dcf4:{c.instructions+=2;NFSU2_TR(0x66dcf4);
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
B66dcf8:{NFSU2_TR(0x66dcf8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66dd5f;}}
}
B66dcfa:L66dcfa:{c.instructions+=2;NFSU2_TR(0x66dcfa);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x10ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B66dcfd:{NFSU2_TR(0x66dcfd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66dd5f;}}
}
B66dcff:L66dcff:{c.instructions+=5;NFSU2_TR(0x66dcff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66dd02:{NFSU2_TR(0x66dd02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66dd08:{NFSU2_TR(0x66dd08);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B66dd0b:{NFSU2_TR(0x66dd0b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66dd0e:{NFSU2_TR(0x66dd0e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66dd1e;}}
}
B66dd10:L66dd10:{c.instructions+=5;NFSU2_TR(0x66dd10);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66dd13:{NFSU2_TR(0x66dd13);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B66dd16:{NFSU2_TR(0x66dd16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66dd19:{NFSU2_TR(0x66dd19);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66dd1c:{NFSU2_TR(0x66dd1c);
{goto L66dd44;}
}
B66dd1e:L66dd1e:{c.instructions+=13;NFSU2_TR(0x66dd1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66dd21:{NFSU2_TR(0x66dd21);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66dd24:{NFSU2_TR(0x66dd24);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66dd27:{NFSU2_TR(0x66dd27);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66dd28:{NFSU2_TR(0x66dd28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66dd2e:{NFSU2_TR(0x66dd2e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B66dd31:{NFSU2_TR(0x66dd31);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66dd34:{NFSU2_TR(0x66dd34);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B66dd37:{NFSU2_TR(0x66dd37);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66dd3a:{NFSU2_TR(0x66dd3a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66dd3d:{NFSU2_TR(0x66dd3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66dd40:{NFSU2_TR(0x66dd40);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66dd43:{NFSU2_TR(0x66dd43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66dd44:L66dd44:{c.instructions+=7;NFSU2_TR(0x66dd44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66dd47:{NFSU2_TR(0x66dd47);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66dd4a:{NFSU2_TR(0x66dd4a);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B66dd4e:{NFSU2_TR(0x66dd4e);
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
B66dd50:{NFSU2_TR(0x66dd50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66dd53:{NFSU2_TR(0x66dd53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B66dd55:{NFSU2_TR(0x66dd55);
if(r1(R+518)){{goto L66dd66;}}
}
B66dd57:L66dd57:{c.instructions+=3;NFSU2_TR(0x66dd57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66dd59:{NFSU2_TR(0x66dd59);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66dd5a:{NFSU2_TR(0x66dd5a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66dd5dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66dd5d:L66dd5d:{c.instructions+=1;NFSU2_TR(0x66dd5d);
{goto L66dd66;}
}
B66dd5f:L66dd5f:{c.instructions+=1;NFSU2_TR(0x66dd5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B66dd66:L66dd66:{c.instructions+=1;NFSU2_TR(0x66dd66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66dd67:L66dd67:{c.instructions+=4;NFSU2_TR(0x66dd67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66dd6a:{NFSU2_TR(0x66dd6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66dd6b:{NFSU2_TR(0x66dd6b);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66dd6c:{NFSU2_TR(0x66dd6c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66dd6f:L66dd6f:{c.instructions+=15;NFSU2_TR(0x66dd6f);
__builtin_memmove((R+28),(R+28),4);
}
B66dd71:{NFSU2_TR(0x66dd71);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66dd72:{NFSU2_TR(0x66dd72);
__builtin_memmove((R+20),(R+16),4);
}
B66dd74:{NFSU2_TR(0x66dd74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B66dd77:{NFSU2_TR(0x66dd77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66dd7a:{NFSU2_TR(0x66dd7a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66dd7b:{NFSU2_TR(0x66dd7b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66dd7c:{NFSU2_TR(0x66dd7c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B66dd7e:{NFSU2_TR(0x66dd7e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B66dd80:{NFSU2_TR(0x66dd80);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B66dd81:{NFSU2_TR(0x66dd81);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B66dd83:{NFSU2_TR(0x66dd83);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66dd84:{NFSU2_TR(0x66dd84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66dd87:{NFSU2_TR(0x66dd87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66dd8a:{NFSU2_TR(0x66dd8a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L66dd90;}}
}
B66dd8c:L66dd8c:{c.instructions+=2;NFSU2_TR(0x66dd8c);
w4(R+4,u32(~u32(r4(R+4))));
}
B66dd8e:{NFSU2_TR(0x66dd8e);
{goto L66ddc6;}
}
B66dd90:L66dd90:{c.instructions+=16;NFSU2_TR(0x66dd90);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66dd96:{NFSU2_TR(0x66dd96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66dd98:{NFSU2_TR(0x66dd98);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66dd9b:{NFSU2_TR(0x66dd9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66dd9d:{NFSU2_TR(0x66dd9d);
u8 U[4];
w4(U+0,u32(0x2ull));
s4(u32(r4(R+8)),r4(U+0));
}
B66dda3:{NFSU2_TR(0x66dda3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66dda5:{NFSU2_TR(0x66dda5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66dda8:{NFSU2_TR(0x66dda8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66ddaa:{NFSU2_TR(0x66ddaa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ddab:{NFSU2_TR(0x66ddab);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ddae:{NFSU2_TR(0x66ddae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66ddb0:{NFSU2_TR(0x66ddb0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ddb1:{NFSU2_TR(0x66ddb1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ddb2:{NFSU2_TR(0x66ddb2);
__builtin_memmove((R+4),(R+28),4);
}
B66ddb4:{NFSU2_TR(0x66ddb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ddb7:{NFSU2_TR(0x66ddb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66ddbcull));
TAIL_STATIC(0x66bbeeu,66b);
}
B66ddbc:L66ddbc:{c.instructions+=3;NFSU2_TR(0x66ddbc);
__builtin_memmove((R+4),(R+0),4);
}
B66ddbe:{NFSU2_TR(0x66ddbe);
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
B66ddc0:{NFSU2_TR(0x66ddc0);
if(r1(R+518)){{goto L66dee7;}}
}
B66ddc6:L66ddc6:{c.instructions+=3;NFSU2_TR(0x66ddc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66ddc9:{NFSU2_TR(0x66ddc9);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66ddcc:{NFSU2_TR(0x66ddcc);
if(r1(R+518)){{goto L66ddd8;}}
}
B66ddce:L66ddce:{c.instructions+=2;NFSU2_TR(0x66ddce);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
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
B66ddd2:{NFSU2_TR(0x66ddd2);
if(r1(R+518)){{goto L66dee7;}}
}
B66ddd8:L66ddd8:{c.instructions+=4;NFSU2_TR(0x66ddd8);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ddda:{NFSU2_TR(0x66ddda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66dddb:{NFSU2_TR(0x66dddb);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66ddde:{NFSU2_TR(0x66ddde);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66ddf5;}}
}
B66dde0:L66dde0:{c.instructions+=5;NFSU2_TR(0x66dde0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66dde3:{NFSU2_TR(0x66dde3);
w4(R+4,u32(~u32(r4(R+4))));
}
B66dde5:{NFSU2_TR(0x66dde5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66dde6:{NFSU2_TR(0x66dde6);
__builtin_memmove((R+4),(R+28),4);
}
B66dde8:{NFSU2_TR(0x66dde8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66ddedull));
TAIL_STATIC(0x6661abu,666);
}
B66dded:L66dded:{c.instructions+=2;NFSU2_TR(0x66dded);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ddf0:{NFSU2_TR(0x66ddf0);
{goto L66def2;}
}
B66ddf5:L66ddf5:{c.instructions+=3;NFSU2_TR(0x66ddf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66ddf8:{NFSU2_TR(0x66ddf8);
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
B66ddfa:{NFSU2_TR(0x66ddfa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66dee7;}}
}
B66de00:L66de00:{c.instructions+=2;NFSU2_TR(0x66de00);
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
B66de02:{NFSU2_TR(0x66de02);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L66dee7;}}
}
B66de08:L66de08:{c.instructions+=5;NFSU2_TR(0x66de08);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66de0b:{NFSU2_TR(0x66de0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66de0e:{NFSU2_TR(0x66de0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66de10:{NFSU2_TR(0x66de10);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66de12:{NFSU2_TR(0x66de12);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66de84;}}
}
B66de14:L66de14:{c.instructions+=2;NFSU2_TR(0x66de14);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66de16:{NFSU2_TR(0x66de16);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66de84;}}
}
B66de18:L66de18:{c.instructions+=2;NFSU2_TR(0x66de18);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66de1a:{NFSU2_TR(0x66de1a);
if(r1(R+518)){{goto L66de21;}}
}
B66de1c:L66de1c:{c.instructions+=2;NFSU2_TR(0x66de1c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66de1f:{NFSU2_TR(0x66de1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66de84;}}
}
B66de21:L66de21:{c.instructions+=30;NFSU2_TR(0x66de21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66de24:{NFSU2_TR(0x66de24);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66de2a:{NFSU2_TR(0x66de2a);
__builtin_memmove((R+8),(R+0),4);
}
B66de2c:{NFSU2_TR(0x66de2c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B66de2f:{NFSU2_TR(0x66de2f);
w4(R+8,u32(r1(R+8)));
}
B66de32:{NFSU2_TR(0x66de32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66de35:{NFSU2_TR(0x66de35);
__builtin_memmove((R+8),(R+0),4);
}
B66de37:{NFSU2_TR(0x66de37);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B66de3a:{NFSU2_TR(0x66de3a);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B66de3d:{NFSU2_TR(0x66de3d);
w4(R+8,u32(r1(R+8)));
}
B66de40:{NFSU2_TR(0x66de40);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B66de42:{NFSU2_TR(0x66de42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66de45:{NFSU2_TR(0x66de45);
w4(R+8,u32(r1(R+0)));
}
B66de48:{NFSU2_TR(0x66de48);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B66de4b:{NFSU2_TR(0x66de4b);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B66de4e:{NFSU2_TR(0x66de4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66de51:{NFSU2_TR(0x66de51);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B66de54:{NFSU2_TR(0x66de54);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B66de56:{NFSU2_TR(0x66de56);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B66de59:{NFSU2_TR(0x66de59);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B66de5c:{NFSU2_TR(0x66de5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66de5f:{NFSU2_TR(0x66de5f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66de61:{NFSU2_TR(0x66de61);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66de63:{NFSU2_TR(0x66de63);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B66de65:{NFSU2_TR(0x66de65);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B66de68:{NFSU2_TR(0x66de68);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B66de6b:{NFSU2_TR(0x66de6b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B66de6d:{NFSU2_TR(0x66de6d);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B66de70:{NFSU2_TR(0x66de70);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B66de72:{NFSU2_TR(0x66de72);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66ded9;}}
}
B66de74:L66de74:{c.instructions+=6;NFSU2_TR(0x66de74);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66de78:{NFSU2_TR(0x66de78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66de7a:{NFSU2_TR(0x66de7a);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B66de7d:{NFSU2_TR(0x66de7d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B66de7e:{NFSU2_TR(0x66de7e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B66de80:{NFSU2_TR(0x66de80);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66de74u);}goto L66de74;}}
}
B66de82:L66de82:{c.instructions+=1;NFSU2_TR(0x66de82);
{goto L66ded9;}
}
B66de84:L66de84:{c.instructions+=2;NFSU2_TR(0x66de84);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B66de86:{NFSU2_TR(0x66de86);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66dee7;}}
}
B66de88:L66de88:{c.instructions+=2;NFSU2_TR(0x66de88);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B66de8a:{NFSU2_TR(0x66de8a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66dee7;}}
}
B66de8c:L66de8c:{c.instructions+=2;NFSU2_TR(0x66de8c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B66de8d:{NFSU2_TR(0x66de8d);
if(r1(R+518)){{goto L66deb8;}}
}
B66de8f:L66de8f:{c.instructions+=2;NFSU2_TR(0x66de8f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B66de90:{NFSU2_TR(0x66de90);
if(r1(R+518)){{goto L66deab;}}
}
B66de92:L66de92:{c.instructions+=2;NFSU2_TR(0x66de92);
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
B66de93:{NFSU2_TR(0x66de93);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66dee7;}}
}
B66de95:L66de95:{c.instructions+=8;NFSU2_TR(0x66de95);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B66de98:{NFSU2_TR(0x66de98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66de9a:{NFSU2_TR(0x66de9a);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B66de9c:{NFSU2_TR(0x66de9c);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66de9e:{NFSU2_TR(0x66de9e);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B66dea0:{NFSU2_TR(0x66dea0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B66dea2:{NFSU2_TR(0x66dea2);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B66dea5:{NFSU2_TR(0x66dea5);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L66def0;}}
}
B66dea7:L66dea7:{c.instructions+=2;NFSU2_TR(0x66dea7);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B66dea9:{NFSU2_TR(0x66dea9);
{goto L66ded9;}
}
B66deab:L66deab:{c.instructions+=4;NFSU2_TR(0x66deab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66dead:{NFSU2_TR(0x66dead);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66deb0:{NFSU2_TR(0x66deb0);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+8)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B66deb2:{NFSU2_TR(0x66deb2);
if(r1(R+518)){{goto L66def2;}}
}
B66deb4:L66deb4:{c.instructions+=2;NFSU2_TR(0x66deb4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B66deb6:{NFSU2_TR(0x66deb6);
{goto L66ded9;}
}
B66deb8:L66deb8:{c.instructions+=10;NFSU2_TR(0x66deb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B66deba:{NFSU2_TR(0x66deba);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66debc:{NFSU2_TR(0x66debc);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B66debe:{NFSU2_TR(0x66debe);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B66dec0:{NFSU2_TR(0x66dec0);
__builtin_memmove((R+0),(R+518),1);
}
B66dec3:{NFSU2_TR(0x66dec3);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B66dec5:{NFSU2_TR(0x66dec5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66dec8:{NFSU2_TR(0x66dec8);
__builtin_memmove((R+8),(R+518),1);
}
B66decb:{NFSU2_TR(0x66decb);
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
B66decd:{NFSU2_TR(0x66decd);
if(r1(R+518)){{goto L66def2;}}
}
B66decf:L66decf:{c.instructions+=4;NFSU2_TR(0x66decf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66ded1:{NFSU2_TR(0x66ded1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66ded4:{NFSU2_TR(0x66ded4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B66ded7:{NFSU2_TR(0x66ded7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B66ded9:L66ded9:{c.instructions+=3;NFSU2_TR(0x66ded9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66deda:{NFSU2_TR(0x66deda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66dedd:{NFSU2_TR(0x66dedd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66dee2ull));
TAIL_STATIC(0x66055cu,660);
}
B66dee2:L66dee2:{c.instructions+=1;NFSU2_TR(0x66dee2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ddedu);}goto L66dded;}
}
B66dee7:L66dee7:{c.instructions+=2;NFSU2_TR(0x66dee7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B66deee:{NFSU2_TR(0x66deee);
{goto L66def2;}
}
B66def0:L66def0:{c.instructions+=1;NFSU2_TR(0x66def0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B66def2:L66def2:{c.instructions+=6;NFSU2_TR(0x66def2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66def5:{NFSU2_TR(0x66def5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66def6:{NFSU2_TR(0x66def6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66def7:{NFSU2_TR(0x66def7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66def8:{NFSU2_TR(0x66def8);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66def9:{NFSU2_TR(0x66def9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66defc:L66defc:{c.instructions+=11;NFSU2_TR(0x66defc);
__builtin_memmove((R+28),(R+28),4);
}
B66defe:{NFSU2_TR(0x66defe);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66deff:{NFSU2_TR(0x66deff);
__builtin_memmove((R+20),(R+16),4);
}
B66df01:{NFSU2_TR(0x66df01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B66df04:{NFSU2_TR(0x66df04);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66df05:{NFSU2_TR(0x66df05);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66df06:{NFSU2_TR(0x66df06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66df09:{NFSU2_TR(0x66df09);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B66df0b:{NFSU2_TR(0x66df0b);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B66df0d:{NFSU2_TR(0x66df0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66df10:{NFSU2_TR(0x66df10);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66df1e;}}
}
B66df12:L66df12:{c.instructions+=2;NFSU2_TR(0x66df12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B66df19:{NFSU2_TR(0x66df19);
TAIL_STATIC(0x66e0e5u,66e);
}
B66df1e:L66df1e:{c.instructions+=8;NFSU2_TR(0x66df1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66df21:{NFSU2_TR(0x66df21);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66df22:{NFSU2_TR(0x66df22);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66df23:{NFSU2_TR(0x66df23);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B66df25:{NFSU2_TR(0x66df25);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B66df26:{NFSU2_TR(0x66df26);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66df27:{NFSU2_TR(0x66df27);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66df2a:{NFSU2_TR(0x66df2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66df2full));
TAIL_STATIC(0x66bbeeu,66b);
}
B66df2f:L66df2f:{c.instructions+=2;NFSU2_TR(0x66df2f);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B66df31:{NFSU2_TR(0x66df31);
if(r1(R+518)){TAIL_STATIC(0x66e0ddu,66e);}
}
B66df37:L66df37:{c.instructions+=3;NFSU2_TR(0x66df37);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66df3a:{NFSU2_TR(0x66df3a);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66df3d:{NFSU2_TR(0x66df3d);
if(r1(R+518)){{goto L66df49;}}
}
B66df3f:L66df3f:{c.instructions+=2;NFSU2_TR(0x66df3f);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
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
B66df43:{NFSU2_TR(0x66df43);
if(r1(R+518)){TAIL_STATIC(0x66e0ddu,66e);}
}
B66df49:L66df49:{c.instructions+=3;NFSU2_TR(0x66df49);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66df4c:{NFSU2_TR(0x66df4c);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B66df4e:{NFSU2_TR(0x66df4e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x66e0ddu,66e);}
}
B66df54:L66df54:{c.instructions+=2;NFSU2_TR(0x66df54);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B66df57:{NFSU2_TR(0x66df57);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){TAIL_STATIC(0x66e0ddu,66e);}
}
B66df5d:L66df5d:{c.instructions+=5;NFSU2_TR(0x66df5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66df60:{NFSU2_TR(0x66df60);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66df63:{NFSU2_TR(0x66df63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66df65:{NFSU2_TR(0x66df65);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66df68:{NFSU2_TR(0x66df68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x66e0acu,66e);}
}
B66df6e:L66df6e:{c.instructions+=2;NFSU2_TR(0x66df6e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66df70:{NFSU2_TR(0x66df70);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x66e0acu,66e);}
}
B66df76:L66df76:{c.instructions+=2;NFSU2_TR(0x66df76);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66df78:{NFSU2_TR(0x66df78);
if(r1(R+518)){{goto L66df83;}}
}
B66df7a:L66df7a:{c.instructions+=2;NFSU2_TR(0x66df7a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66df7d:{NFSU2_TR(0x66df7d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x66e0acu,66e);}
}
B66df83:L66df83:{c.instructions+=13;NFSU2_TR(0x66df83);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66df85:{NFSU2_TR(0x66df85);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B66df87:{NFSU2_TR(0x66df87);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B66df8a:{NFSU2_TR(0x66df8a);
w4(R+12,u32(0xffull));
}
B66df8f:{NFSU2_TR(0x66df8f);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B66df91:{NFSU2_TR(0x66df91);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B66df94:{NFSU2_TR(0x66df94);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B66df96:{NFSU2_TR(0x66df96);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B66df99:{NFSU2_TR(0x66df99);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B66df9b:{NFSU2_TR(0x66df9b);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B66df9e:{NFSU2_TR(0x66df9e);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66dfa4:{NFSU2_TR(0x66dfa4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66dfaa:{NFSU2_TR(0x66dfaa);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66dfd2;}}
}
B66dfac:L66dfac:{c.instructions+=3;NFSU2_TR(0x66dfac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66dfae:{NFSU2_TR(0x66dfae);
__builtin_memmove((R+24),(R+0),4);
}
B66dfb0:{NFSU2_TR(0x66dfb0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+28),(U+0),4);
}
B66dfb3:L66dfb3:{c.instructions+=1;NFSU2_TR(0x66dfb3);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L66dfb5;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66dfb3u);}goto L66dfb3;}
}
B66dfb5:L66dfb5:{c.instructions+=5;NFSU2_TR(0x66dfb5);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66dfb8:{NFSU2_TR(0x66dfb8);
__asm__ volatile(".byte 0xd8,0xda":::"memory");
}
B66dfba:{NFSU2_TR(0x66dfba);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B66dfbc:{NFSU2_TR(0x66dfbc);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B66dfbf:{NFSU2_TR(0x66dfbf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66dfc6;}}
}
B66dfc1:L66dfc1:{c.instructions+=2;NFSU2_TR(0x66dfc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66dfc4:{NFSU2_TR(0x66dfc4);
{goto L66dfef;}
}
B66dfc6:L66dfc6:{c.instructions+=5;NFSU2_TR(0x66dfc6);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66dfc9:{NFSU2_TR(0x66dfc9);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B66dfcb:{NFSU2_TR(0x66dfcb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B66dfcd:{NFSU2_TR(0x66dfcd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B66dfd0:{NFSU2_TR(0x66dfd0);
if(r1(R+514)){{goto L66dfd8;}}
}
B66dfd2:L66dfd2:{c.instructions+=2;NFSU2_TR(0x66dfd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66dfd6:{NFSU2_TR(0x66dfd6);
{goto L66dfef;}
}
B66dfd8:L66dfd8:{c.instructions+=4;NFSU2_TR(0x66dfd8);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66dfdb:{NFSU2_TR(0x66dfdb);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B66dfe1:{NFSU2_TR(0x66dfe1);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B66dfe7:{NFSU2_TR(0x66dfe7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66dfecull));
TAIL_STATIC(0x75dd28u,75d);
}
B66dfec:L66dfec:{c.instructions+=1;NFSU2_TR(0x66dfec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66dfef:L66dfef:{c.instructions+=5;NFSU2_TR(0x66dfef);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66dff2:{NFSU2_TR(0x66dff2);
__asm__ volatile(".byte 0xd8,0xda":::"memory");
}
B66dff4:{NFSU2_TR(0x66dff4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B66dff6:{NFSU2_TR(0x66dff6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B66dff9:{NFSU2_TR(0x66dff9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66dfff;}}
}
B66dffb:L66dffb:{c.instructions+=2;NFSU2_TR(0x66dffb);
__builtin_memmove((R+28),(R+12),4);
}
B66dffd:{NFSU2_TR(0x66dffd);
TAIL_STATIC(0x66e025u,66e);
}
B66dfff:L66dfff:{c.instructions+=1;NFSU2_TR(0x66dfff);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
TAIL_STATIC(0x66e002u,66e);
}
XIT:NFSU2_TR_EXIT(0x66d,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
