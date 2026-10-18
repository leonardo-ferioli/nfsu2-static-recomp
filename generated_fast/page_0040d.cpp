#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_403(u8* __restrict R,Cpu& c);
u32 body_404(u8* __restrict R,Cpu& c);
u32 body_409(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_40e(u8* __restrict R,Cpu& c);
u32 body_425(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_59f(u8* __restrict R,Cpu& c);
u32 body_5a0(u8* __restrict R,Cpu& c);
u32 body_5d4(u8* __restrict R,Cpu& c);
u32 body_5d5(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5dc(u8* __restrict R,Cpu& c);
u32 body_5dd(u8* __restrict R,Cpu& c);
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_60b(u8* __restrict R,Cpu& c);
u32 body_60c(u8* __restrict R,Cpu& c);
u32 body_614(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x40d,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x40d,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_40d(u8* __restrict R,Cpu& c);
u32 page_40d(Cpu& c){return body_40d(c.regs.data(),c);}
__attribute__((noinline)) u32 body_40d(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x40d000:goto L40d000;
case 0x40d005:goto L40d005;
case 0x40d008:c.instructions+=3;goto B40d008;
case 0x40d00a:c.instructions+=2;goto B40d00a;
case 0x40d00b:c.instructions+=1;goto B40d00b;
case 0x40d010:goto L40d010;
case 0x40d016:c.instructions+=1;goto B40d016;
case 0x40d020:goto L40d020;
case 0x40d021:c.instructions+=2;goto B40d021;
case 0x40d023:c.instructions+=1;goto B40d023;
case 0x40d028:goto L40d028;
case 0x40d02d:c.instructions+=1;goto B40d02d;
case 0x40d02f:goto L40d02f;
case 0x40d030:c.instructions+=1;goto B40d030;
case 0x40d035:goto L40d035;
case 0x40d038:goto L40d038;
case 0x40d03a:c.instructions+=2;goto B40d03a;
case 0x40d03b:c.instructions+=1;goto B40d03b;
case 0x40d040:goto L40d040;
case 0x40d041:c.instructions+=5;goto B40d041;
case 0x40d043:c.instructions+=4;goto B40d043;
case 0x40d046:c.instructions+=3;goto B40d046;
case 0x40d048:c.instructions+=2;goto B40d048;
case 0x40d04e:c.instructions+=1;goto B40d04e;
case 0x40d050:goto L40d050;
case 0x40d057:goto L40d057;
case 0x40d05c:c.instructions+=1;goto B40d05c;
case 0x40d05e:goto L40d05e;
case 0x40d063:c.instructions+=3;goto B40d063;
case 0x40d064:c.instructions+=2;goto B40d064;
case 0x40d065:c.instructions+=1;goto B40d065;
case 0x40d06a:goto L40d06a;
case 0x40d06d:goto L40d06d;
case 0x40d06f:c.instructions+=2;goto B40d06f;
case 0x40d070:c.instructions+=1;goto B40d070;
case 0x40d080:goto L40d080;
case 0x40d084:c.instructions+=1;goto B40d084;
case 0x40d090:goto L40d090;
case 0x40d094:c.instructions+=4;goto B40d094;
case 0x40d095:c.instructions+=3;goto B40d095;
case 0x40d099:c.instructions+=2;goto B40d099;
case 0x40d09a:c.instructions+=1;goto B40d09a;
case 0x40d09f:goto L40d09f;
case 0x40d0a1:c.instructions+=2;goto B40d0a1;
case 0x40d0a2:c.instructions+=1;goto B40d0a2;
case 0x40d0b0:goto L40d0b0;
case 0x40d0b4:c.instructions+=6;goto B40d0b4;
case 0x40d0b8:c.instructions+=5;goto B40d0b8;
case 0x40d0bb:c.instructions+=4;goto B40d0bb;
case 0x40d0bf:c.instructions+=3;goto B40d0bf;
case 0x40d0c3:c.instructions+=2;goto B40d0c3;
case 0x40d0c9:c.instructions+=1;goto B40d0c9;
case 0x40d0d0:goto L40d0d0;
case 0x40d0d4:c.instructions+=7;goto B40d0d4;
case 0x40d0d8:c.instructions+=6;goto B40d0d8;
case 0x40d0dc:c.instructions+=5;goto B40d0dc;
case 0x40d0dd:c.instructions+=4;goto B40d0dd;
case 0x40d0de:c.instructions+=3;goto B40d0de;
case 0x40d0e2:c.instructions+=2;goto B40d0e2;
case 0x40d0e3:c.instructions+=1;goto B40d0e3;
case 0x40d0e8:goto L40d0e8;
case 0x40d0f0:goto L40d0f0;
case 0x40d0f4:c.instructions+=7;goto B40d0f4;
case 0x40d0f8:c.instructions+=6;goto B40d0f8;
case 0x40d0fc:c.instructions+=5;goto B40d0fc;
case 0x40d0fd:c.instructions+=4;goto B40d0fd;
case 0x40d0fe:c.instructions+=3;goto B40d0fe;
case 0x40d102:c.instructions+=2;goto B40d102;
case 0x40d103:c.instructions+=1;goto B40d103;
case 0x40d108:goto L40d108;
case 0x40d110:goto L40d110;
case 0x40d114:c.instructions+=6;goto B40d114;
case 0x40d118:c.instructions+=5;goto B40d118;
case 0x40d11b:c.instructions+=4;goto B40d11b;
case 0x40d11f:c.instructions+=3;goto B40d11f;
case 0x40d123:c.instructions+=2;goto B40d123;
case 0x40d129:c.instructions+=1;goto B40d129;
case 0x40d130:goto L40d130;
case 0x40d134:c.instructions+=7;goto B40d134;
case 0x40d138:c.instructions+=6;goto B40d138;
case 0x40d13d:c.instructions+=5;goto B40d13d;
case 0x40d140:c.instructions+=4;goto B40d140;
case 0x40d144:c.instructions+=3;goto B40d144;
case 0x40d148:c.instructions+=2;goto B40d148;
case 0x40d14e:c.instructions+=1;goto B40d14e;
case 0x40d160:goto L40d160;
case 0x40d164:c.instructions+=19;goto B40d164;
case 0x40d168:c.instructions+=18;goto B40d168;
case 0x40d16c:c.instructions+=17;goto B40d16c;
case 0x40d170:c.instructions+=16;goto B40d170;
case 0x40d174:c.instructions+=15;goto B40d174;
case 0x40d178:c.instructions+=14;goto B40d178;
case 0x40d17c:c.instructions+=13;goto B40d17c;
case 0x40d182:c.instructions+=12;goto B40d182;
case 0x40d186:c.instructions+=11;goto B40d186;
case 0x40d18c:c.instructions+=10;goto B40d18c;
case 0x40d18f:c.instructions+=9;goto B40d18f;
case 0x40d192:c.instructions+=8;goto B40d192;
case 0x40d194:c.instructions+=7;goto B40d194;
case 0x40d196:c.instructions+=6;goto B40d196;
case 0x40d198:c.instructions+=5;goto B40d198;
case 0x40d19a:c.instructions+=4;goto B40d19a;
case 0x40d19c:c.instructions+=3;goto B40d19c;
case 0x40d19e:c.instructions+=2;goto B40d19e;
case 0x40d1a0:c.instructions+=1;goto B40d1a0;
case 0x40d1b0:goto L40d1b0;
case 0x40d1b4:c.instructions+=19;goto B40d1b4;
case 0x40d1b8:c.instructions+=18;goto B40d1b8;
case 0x40d1bc:c.instructions+=17;goto B40d1bc;
case 0x40d1c0:c.instructions+=16;goto B40d1c0;
case 0x40d1c4:c.instructions+=15;goto B40d1c4;
case 0x40d1c8:c.instructions+=14;goto B40d1c8;
case 0x40d1cc:c.instructions+=13;goto B40d1cc;
case 0x40d1d2:c.instructions+=12;goto B40d1d2;
case 0x40d1d6:c.instructions+=11;goto B40d1d6;
case 0x40d1dc:c.instructions+=10;goto B40d1dc;
case 0x40d1de:c.instructions+=9;goto B40d1de;
case 0x40d1e0:c.instructions+=8;goto B40d1e0;
case 0x40d1e2:c.instructions+=7;goto B40d1e2;
case 0x40d1e5:c.instructions+=6;goto B40d1e5;
case 0x40d1e8:c.instructions+=5;goto B40d1e8;
case 0x40d1ea:c.instructions+=4;goto B40d1ea;
case 0x40d1ec:c.instructions+=3;goto B40d1ec;
case 0x40d1ee:c.instructions+=2;goto B40d1ee;
case 0x40d1f0:c.instructions+=1;goto B40d1f0;
case 0x40d200:goto L40d200;
case 0x40d201:c.instructions+=3;goto B40d201;
case 0x40d205:c.instructions+=2;goto B40d205;
case 0x40d207:c.instructions+=1;goto B40d207;
case 0x40d20c:goto L40d20c;
case 0x40d20e:c.instructions+=1;goto B40d20e;
case 0x40d210:goto L40d210;
case 0x40d214:c.instructions+=6;goto B40d214;
case 0x40d217:c.instructions+=5;goto B40d217;
case 0x40d21b:c.instructions+=4;goto B40d21b;
case 0x40d21c:c.instructions+=3;goto B40d21c;
case 0x40d220:c.instructions+=2;goto B40d220;
case 0x40d226:c.instructions+=1;goto B40d226;
case 0x40d229:goto L40d229;
case 0x40d22d:c.instructions+=6;goto B40d22d;
case 0x40d230:c.instructions+=5;goto B40d230;
case 0x40d234:c.instructions+=4;goto B40d234;
case 0x40d235:c.instructions+=3;goto B40d235;
case 0x40d239:c.instructions+=2;goto B40d239;
case 0x40d23f:c.instructions+=1;goto B40d23f;
case 0x40d250:goto L40d250;
case 0x40d254:c.instructions+=5;goto B40d254;
case 0x40d257:c.instructions+=4;goto B40d257;
case 0x40d25a:c.instructions+=3;goto B40d25a;
case 0x40d25c:c.instructions+=2;goto B40d25c;
case 0x40d25f:c.instructions+=1;goto B40d25f;
case 0x40d270:goto L40d270;
case 0x40d271:c.instructions+=2;goto B40d271;
case 0x40d273:c.instructions+=1;goto B40d273;
case 0x40d278:goto L40d278;
case 0x40d27d:c.instructions+=1;goto B40d27d;
case 0x40d27f:goto L40d27f;
case 0x40d284:c.instructions+=3;goto B40d284;
case 0x40d285:c.instructions+=2;goto B40d285;
case 0x40d286:c.instructions+=1;goto B40d286;
case 0x40d28b:goto L40d28b;
case 0x40d28e:goto L40d28e;
case 0x40d290:c.instructions+=2;goto B40d290;
case 0x40d291:c.instructions+=1;goto B40d291;
case 0x40d2a0:goto L40d2a0;
case 0x40d2a3:c.instructions+=3;goto B40d2a3;
case 0x40d2a5:c.instructions+=2;goto B40d2a5;
case 0x40d2ab:c.instructions+=1;goto B40d2ab;
case 0x40d2ad:goto L40d2ad;
case 0x40d2b4:goto L40d2b4;
case 0x40d2c0:goto L40d2c0;
case 0x40d2c4:c.instructions+=12;goto B40d2c4;
case 0x40d2c8:c.instructions+=11;goto B40d2c8;
case 0x40d2cc:c.instructions+=10;goto B40d2cc;
case 0x40d2d0:c.instructions+=9;goto B40d2d0;
case 0x40d2d4:c.instructions+=8;goto B40d2d4;
case 0x40d2d8:c.instructions+=7;goto B40d2d8;
case 0x40d2dc:c.instructions+=6;goto B40d2dc;
case 0x40d2e2:c.instructions+=5;goto B40d2e2;
case 0x40d2e6:c.instructions+=4;goto B40d2e6;
case 0x40d2ec:c.instructions+=3;goto B40d2ec;
case 0x40d2ee:c.instructions+=2;goto B40d2ee;
case 0x40d2f1:c.instructions+=1;goto B40d2f1;
case 0x40d300:goto L40d300;
case 0x40d304:c.instructions+=1;goto B40d304;
case 0x40d309:goto L40d309;
case 0x40d310:goto L40d310;
case 0x40d311:c.instructions+=3;goto B40d311;
case 0x40d312:c.instructions+=2;goto B40d312;
case 0x40d314:c.instructions+=1;goto B40d314;
case 0x40d319:goto L40d319;
case 0x40d31b:c.instructions+=1;goto B40d31b;
case 0x40d31d:goto L40d31d;
case 0x40d321:c.instructions+=8;goto B40d321;
case 0x40d324:c.instructions+=7;goto B40d324;
case 0x40d328:c.instructions+=6;goto B40d328;
case 0x40d329:c.instructions+=5;goto B40d329;
case 0x40d32d:c.instructions+=4;goto B40d32d;
case 0x40d333:c.instructions+=3;goto B40d333;
case 0x40d335:c.instructions+=2;goto B40d335;
case 0x40d336:c.instructions+=1;goto B40d336;
case 0x40d337:goto L40d337;
case 0x40d33b:c.instructions+=8;goto B40d33b;
case 0x40d33e:c.instructions+=7;goto B40d33e;
case 0x40d342:c.instructions+=6;goto B40d342;
case 0x40d343:c.instructions+=5;goto B40d343;
case 0x40d347:c.instructions+=4;goto B40d347;
case 0x40d34d:c.instructions+=3;goto B40d34d;
case 0x40d34f:c.instructions+=2;goto B40d34f;
case 0x40d350:c.instructions+=1;goto B40d350;
case 0x40d360:goto L40d360;
case 0x40d364:c.instructions+=7;goto B40d364;
case 0x40d368:c.instructions+=6;goto B40d368;
case 0x40d36c:c.instructions+=5;goto B40d36c;
case 0x40d36d:c.instructions+=4;goto B40d36d;
case 0x40d36e:c.instructions+=3;goto B40d36e;
case 0x40d372:c.instructions+=2;goto B40d372;
case 0x40d373:c.instructions+=1;goto B40d373;
case 0x40d378:goto L40d378;
case 0x40d380:goto L40d380;
case 0x40d384:c.instructions+=7;goto B40d384;
case 0x40d388:c.instructions+=6;goto B40d388;
case 0x40d38c:c.instructions+=5;goto B40d38c;
case 0x40d38d:c.instructions+=4;goto B40d38d;
case 0x40d38e:c.instructions+=3;goto B40d38e;
case 0x40d392:c.instructions+=2;goto B40d392;
case 0x40d393:c.instructions+=1;goto B40d393;
case 0x40d398:goto L40d398;
case 0x40d3a0:goto L40d3a0;
case 0x40d3a4:c.instructions+=2;goto B40d3a4;
case 0x40d3a6:c.instructions+=1;goto B40d3a6;
case 0x40d3a8:goto L40d3a8;
case 0x40d3ab:c.instructions+=1;goto B40d3ab;
case 0x40d3ad:goto L40d3ad;
case 0x40d3ae:c.instructions+=1;goto B40d3ae;
case 0x40d3b1:goto L40d3b1;
case 0x40d3b4:c.instructions+=1;goto B40d3b4;
case 0x40d3b6:goto L40d3b6;
case 0x40d3b9:c.instructions+=1;goto B40d3b9;
case 0x40d3bb:goto L40d3bb;
case 0x40d3be:goto L40d3be;
case 0x40d3d0:goto L40d3d0;
case 0x40d3d3:c.instructions+=6;goto B40d3d3;
case 0x40d3d4:c.instructions+=5;goto B40d3d4;
case 0x40d3d8:c.instructions+=4;goto B40d3d8;
case 0x40d3dc:c.instructions+=3;goto B40d3dc;
case 0x40d3dd:c.instructions+=2;goto B40d3dd;
case 0x40d3df:c.instructions+=1;goto B40d3df;
case 0x40d3e4:goto L40d3e4;
case 0x40d3e8:c.instructions+=10;goto B40d3e8;
case 0x40d3eb:c.instructions+=9;goto B40d3eb;
case 0x40d3ee:c.instructions+=8;goto B40d3ee;
case 0x40d3f2:c.instructions+=7;goto B40d3f2;
case 0x40d3f4:c.instructions+=6;goto B40d3f4;
case 0x40d3f6:c.instructions+=5;goto B40d3f6;
case 0x40d3f7:c.instructions+=4;goto B40d3f7;
case 0x40d3fb:c.instructions+=3;goto B40d3fb;
case 0x40d3fd:c.instructions+=2;goto B40d3fd;
case 0x40d400:c.instructions+=1;goto B40d400;
case 0x40d410:goto L40d410;
case 0x40d413:c.instructions+=6;goto B40d413;
case 0x40d414:c.instructions+=5;goto B40d414;
case 0x40d418:c.instructions+=4;goto B40d418;
case 0x40d41c:c.instructions+=3;goto B40d41c;
case 0x40d41d:c.instructions+=2;goto B40d41d;
case 0x40d41f:c.instructions+=1;goto B40d41f;
case 0x40d424:goto L40d424;
case 0x40d428:c.instructions+=10;goto B40d428;
case 0x40d42a:c.instructions+=9;goto B40d42a;
case 0x40d42c:c.instructions+=8;goto B40d42c;
case 0x40d430:c.instructions+=7;goto B40d430;
case 0x40d433:c.instructions+=6;goto B40d433;
case 0x40d436:c.instructions+=5;goto B40d436;
case 0x40d437:c.instructions+=4;goto B40d437;
case 0x40d43b:c.instructions+=3;goto B40d43b;
case 0x40d43d:c.instructions+=2;goto B40d43d;
case 0x40d440:c.instructions+=1;goto B40d440;
case 0x40d450:goto L40d450;
case 0x40d454:c.instructions+=2;goto B40d454;
case 0x40d456:c.instructions+=1;goto B40d456;
case 0x40d458:goto L40d458;
case 0x40d45b:c.instructions+=1;goto B40d45b;
case 0x40d45d:goto L40d45d;
case 0x40d45e:c.instructions+=1;goto B40d45e;
case 0x40d460:goto L40d460;
case 0x40d463:c.instructions+=1;goto B40d463;
case 0x40d465:goto L40d465;
case 0x40d468:c.instructions+=1;goto B40d468;
case 0x40d46a:goto L40d46a;
case 0x40d46d:goto L40d46d;
case 0x40d471:c.instructions+=6;goto B40d471;
case 0x40d476:c.instructions+=5;goto B40d476;
case 0x40d479:c.instructions+=4;goto B40d479;
case 0x40d47d:c.instructions+=3;goto B40d47d;
case 0x40d481:c.instructions+=2;goto B40d481;
case 0x40d487:c.instructions+=1;goto B40d487;
case 0x40d490:goto L40d490;
case 0x40d494:c.instructions+=4;goto B40d494;
case 0x40d497:c.instructions+=3;goto B40d497;
case 0x40d49a:c.instructions+=2;goto B40d49a;
case 0x40d49d:c.instructions+=1;goto B40d49d;
case 0x40d4a0:goto L40d4a0;
case 0x40d4a6:c.instructions+=12;goto B40d4a6;
case 0x40d4ac:c.instructions+=11;goto B40d4ac;
case 0x40d4b0:c.instructions+=10;goto B40d4b0;
case 0x40d4b3:c.instructions+=9;goto B40d4b3;
case 0x40d4b5:c.instructions+=8;goto B40d4b5;
case 0x40d4b7:c.instructions+=7;goto B40d4b7;
case 0x40d4ba:c.instructions+=6;goto B40d4ba;
case 0x40d4c0:c.instructions+=5;goto B40d4c0;
case 0x40d4c2:c.instructions+=4;goto B40d4c2;
case 0x40d4c8:c.instructions+=3;goto B40d4c8;
case 0x40d4ca:c.instructions+=2;goto B40d4ca;
case 0x40d4cd:c.instructions+=1;goto B40d4cd;
case 0x40d4cf:goto L40d4cf;
case 0x40d4d2:c.instructions+=2;goto B40d4d2;
case 0x40d4d4:c.instructions+=1;goto B40d4d4;
case 0x40d4d6:goto L40d4d6;
case 0x40d4db:c.instructions+=1;goto B40d4db;
case 0x40d4dd:goto L40d4dd;
case 0x40d4e3:goto L40d4e3;
case 0x40d4e6:goto L40d4e6;
case 0x40d4f0:goto L40d4f0;
case 0x40d4f1:c.instructions+=5;goto B40d4f1;
case 0x40d4f2:c.instructions+=4;goto B40d4f2;
case 0x40d4f4:c.instructions+=3;goto B40d4f4;
case 0x40d4f7:c.instructions+=2;goto B40d4f7;
case 0x40d4f9:c.instructions+=1;goto B40d4f9;
case 0x40d4fb:goto L40d4fb;
case 0x40d4fe:c.instructions+=10;goto B40d4fe;
case 0x40d500:c.instructions+=9;goto B40d500;
case 0x40d502:c.instructions+=8;goto B40d502;
case 0x40d505:c.instructions+=7;goto B40d505;
case 0x40d508:c.instructions+=6;goto B40d508;
case 0x40d509:c.instructions+=5;goto B40d509;
case 0x40d50c:c.instructions+=4;goto B40d50c;
case 0x40d50e:c.instructions+=3;goto B40d50e;
case 0x40d50f:c.instructions+=2;goto B40d50f;
case 0x40d510:c.instructions+=1;goto B40d510;
case 0x40d515:goto L40d515;
case 0x40d519:c.instructions+=4;goto B40d519;
case 0x40d51c:c.instructions+=3;goto B40d51c;
case 0x40d51e:c.instructions+=2;goto B40d51e;
case 0x40d51f:c.instructions+=1;goto B40d51f;
case 0x40d521:goto L40d521;
case 0x40d525:c.instructions+=2;goto B40d525;
case 0x40d526:c.instructions+=1;goto B40d526;
case 0x40d52b:goto L40d52b;
case 0x40d52c:c.instructions+=2;goto B40d52c;
case 0x40d52d:c.instructions+=1;goto B40d52d;
case 0x40d52e:goto L40d52e;
case 0x40d532:c.instructions+=2;goto B40d532;
case 0x40d533:c.instructions+=1;goto B40d533;
case 0x40d538:goto L40d538;
case 0x40d539:c.instructions+=2;goto B40d539;
case 0x40d53a:c.instructions+=1;goto B40d53a;
case 0x40d53b:goto L40d53b;
case 0x40d541:c.instructions+=3;goto B40d541;
case 0x40d542:c.instructions+=2;goto B40d542;
case 0x40d543:c.instructions+=1;goto B40d543;
case 0x40d550:goto L40d550;
case 0x40d551:c.instructions+=12;goto B40d551;
case 0x40d552:c.instructions+=11;goto B40d552;
case 0x40d554:c.instructions+=10;goto B40d554;
case 0x40d557:c.instructions+=9;goto B40d557;
case 0x40d55b:c.instructions+=8;goto B40d55b;
case 0x40d55f:c.instructions+=7;goto B40d55f;
case 0x40d562:c.instructions+=6;goto B40d562;
case 0x40d566:c.instructions+=5;goto B40d566;
case 0x40d56c:c.instructions+=4;goto B40d56c;
case 0x40d572:c.instructions+=3;goto B40d572;
case 0x40d578:c.instructions+=2;goto B40d578;
case 0x40d57a:c.instructions+=1;goto B40d57a;
case 0x40d57d:goto L40d57d;
case 0x40d580:c.instructions+=1;goto B40d580;
case 0x40d585:goto L40d585;
case 0x40d588:c.instructions+=3;goto B40d588;
case 0x40d58b:c.instructions+=2;goto B40d58b;
case 0x40d58c:c.instructions+=1;goto B40d58c;
case 0x40d58e:goto L40d58e;
case 0x40d590:c.instructions+=8;goto B40d590;
case 0x40d596:c.instructions+=7;goto B40d596;
case 0x40d59c:c.instructions+=6;goto B40d59c;
case 0x40d59f:c.instructions+=5;goto B40d59f;
case 0x40d5a5:c.instructions+=4;goto B40d5a5;
case 0x40d5a7:c.instructions+=3;goto B40d5a7;
case 0x40d5a8:c.instructions+=2;goto B40d5a8;
case 0x40d5ac:c.instructions+=1;goto B40d5ac;
case 0x40d5b1:goto L40d5b1;
case 0x40d5b4:c.instructions+=4;goto B40d5b4;
case 0x40d5ba:c.instructions+=3;goto B40d5ba;
case 0x40d5bb:c.instructions+=2;goto B40d5bb;
case 0x40d5bc:c.instructions+=1;goto B40d5bc;
case 0x40d5c0:goto L40d5c0;
case 0x40d5c3:c.instructions+=6;goto B40d5c3;
case 0x40d5c4:c.instructions+=5;goto B40d5c4;
case 0x40d5c8:c.instructions+=4;goto B40d5c8;
case 0x40d5c9:c.instructions+=3;goto B40d5c9;
case 0x40d5cb:c.instructions+=2;goto B40d5cb;
case 0x40d5cd:c.instructions+=1;goto B40d5cd;
case 0x40d5d2:goto L40d5d2;
case 0x40d5d4:c.instructions+=1;goto B40d5d4;
case 0x40d5da:goto L40d5da;
case 0x40d5dc:c.instructions+=1;goto B40d5dc;
case 0x40d5e1:goto L40d5e1;
case 0x40d5e3:c.instructions+=1;goto B40d5e3;
case 0x40d5e9:goto L40d5e9;
case 0x40d5eb:c.instructions+=1;goto B40d5eb;
case 0x40d5f0:goto L40d5f0;
case 0x40d5f2:c.instructions+=1;goto B40d5f2;
case 0x40d5f8:goto L40d5f8;
case 0x40d5fe:c.instructions+=3;goto B40d5fe;
case 0x40d5ff:c.instructions+=2;goto B40d5ff;
case 0x40d600:c.instructions+=1;goto B40d600;
case 0x40d605:goto L40d605;
case 0x40d609:c.instructions+=5;goto B40d609;
case 0x40d60b:c.instructions+=4;goto B40d60b;
case 0x40d60e:c.instructions+=3;goto B40d60e;
case 0x40d611:c.instructions+=2;goto B40d611;
case 0x40d614:c.instructions+=1;goto B40d614;
case 0x40d616:goto L40d616;
case 0x40d617:c.instructions+=2;goto B40d617;
case 0x40d618:c.instructions+=1;goto B40d618;
case 0x40d61d:goto L40d61d;
case 0x40d620:c.instructions+=2;goto B40d620;
case 0x40d622:c.instructions+=1;goto B40d622;
case 0x40d628:goto L40d628;
case 0x40d62a:goto L40d62a;
case 0x40d62d:c.instructions+=1;goto B40d62d;
case 0x40d633:goto L40d633;
case 0x40d639:c.instructions+=7;goto B40d639;
case 0x40d63a:c.instructions+=6;goto B40d63a;
case 0x40d63c:c.instructions+=5;goto B40d63c;
case 0x40d63d:c.instructions+=4;goto B40d63d;
case 0x40d643:c.instructions+=3;goto B40d643;
case 0x40d648:c.instructions+=2;goto B40d648;
case 0x40d64b:c.instructions+=1;goto B40d64b;
case 0x40d650:goto L40d650;
case 0x40d656:c.instructions+=8;goto B40d656;
case 0x40d657:c.instructions+=7;goto B40d657;
case 0x40d65d:c.instructions+=6;goto B40d65d;
case 0x40d663:c.instructions+=5;goto B40d663;
case 0x40d667:c.instructions+=4;goto B40d667;
case 0x40d66d:c.instructions+=3;goto B40d66d;
case 0x40d66f:c.instructions+=2;goto B40d66f;
case 0x40d672:c.instructions+=1;goto B40d672;
case 0x40d677:goto L40d677;
case 0x40d67d:c.instructions+=8;goto B40d67d;
case 0x40d67e:c.instructions+=7;goto B40d67e;
case 0x40d684:c.instructions+=6;goto B40d684;
case 0x40d68a:c.instructions+=5;goto B40d68a;
case 0x40d68e:c.instructions+=4;goto B40d68e;
case 0x40d694:c.instructions+=3;goto B40d694;
case 0x40d696:c.instructions+=2;goto B40d696;
case 0x40d699:c.instructions+=1;goto B40d699;
case 0x40d69e:goto L40d69e;
case 0x40d6a4:c.instructions+=5;goto B40d6a4;
case 0x40d6aa:c.instructions+=4;goto B40d6aa;
case 0x40d6af:c.instructions+=3;goto B40d6af;
case 0x40d6b5:c.instructions+=2;goto B40d6b5;
case 0x40d6b9:c.instructions+=1;goto B40d6b9;
case 0x40d6be:goto L40d6be;
case 0x40d6c4:c.instructions+=5;goto B40d6c4;
case 0x40d6c6:c.instructions+=4;goto B40d6c6;
case 0x40d6ca:c.instructions+=3;goto B40d6ca;
case 0x40d6cc:c.instructions+=2;goto B40d6cc;
case 0x40d6cf:c.instructions+=1;goto B40d6cf;
case 0x40d6d1:goto L40d6d1;
case 0x40d6d6:goto L40d6d6;
case 0x40d6d9:c.instructions+=4;goto B40d6d9;
case 0x40d6df:c.instructions+=3;goto B40d6df;
case 0x40d6e1:c.instructions+=2;goto B40d6e1;
case 0x40d6e4:c.instructions+=1;goto B40d6e4;
case 0x40d6e6:goto L40d6e6;
case 0x40d6ec:c.instructions+=6;goto B40d6ec;
case 0x40d6f4:c.instructions+=5;goto B40d6f4;
case 0x40d6f6:c.instructions+=4;goto B40d6f6;
case 0x40d6fa:c.instructions+=3;goto B40d6fa;
case 0x40d6fe:c.instructions+=2;goto B40d6fe;
case 0x40d702:c.instructions+=1;goto B40d702;
case 0x40d704:goto L40d704;
case 0x40d707:c.instructions+=3;goto B40d707;
case 0x40d70a:c.instructions+=2;goto B40d70a;
case 0x40d70e:c.instructions+=1;goto B40d70e;
case 0x40d710:goto L40d710;
case 0x40d713:c.instructions+=4;goto B40d713;
case 0x40d719:c.instructions+=3;goto B40d719;
case 0x40d71b:c.instructions+=2;goto B40d71b;
case 0x40d71e:c.instructions+=1;goto B40d71e;
case 0x40d720:goto L40d720;
case 0x40d728:c.instructions+=1;goto B40d728;
case 0x40d72a:goto L40d72a;
case 0x40d72e:c.instructions+=2;goto B40d72e;
case 0x40d735:c.instructions+=1;goto B40d735;
case 0x40d73a:goto L40d73a;
case 0x40d73c:c.instructions+=1;goto B40d73c;
case 0x40d73e:goto L40d73e;
case 0x40d746:c.instructions+=1;goto B40d746;
case 0x40d748:goto L40d748;
case 0x40d74c:c.instructions+=2;goto B40d74c;
case 0x40d754:c.instructions+=1;goto B40d754;
case 0x40d756:goto L40d756;
case 0x40d75e:goto L40d75e;
case 0x40d764:c.instructions+=2;goto B40d764;
case 0x40d769:c.instructions+=1;goto B40d769;
case 0x40d76e:goto L40d76e;
case 0x40d772:c.instructions+=3;goto B40d772;
case 0x40d774:c.instructions+=2;goto B40d774;
case 0x40d777:c.instructions+=1;goto B40d777;
case 0x40d779:goto L40d779;
case 0x40d77c:c.instructions+=6;goto B40d77c;
case 0x40d780:c.instructions+=5;goto B40d780;
case 0x40d786:c.instructions+=4;goto B40d786;
case 0x40d78e:c.instructions+=3;goto B40d78e;
case 0x40d790:c.instructions+=2;goto B40d790;
case 0x40d793:c.instructions+=1;goto B40d793;
case 0x40d795:goto L40d795;
case 0x40d79d:goto L40d79d;
case 0x40d7a3:c.instructions+=2;goto B40d7a3;
case 0x40d7a8:c.instructions+=1;goto B40d7a8;
case 0x40d7ad:goto L40d7ad;
case 0x40d7b1:c.instructions+=4;goto B40d7b1;
case 0x40d7b5:c.instructions+=3;goto B40d7b5;
case 0x40d7b7:c.instructions+=2;goto B40d7b7;
case 0x40d7ba:c.instructions+=1;goto B40d7ba;
case 0x40d7bc:goto L40d7bc;
case 0x40d7c1:goto L40d7c1;
case 0x40d7c5:c.instructions+=13;goto B40d7c5;
case 0x40d7c9:c.instructions+=12;goto B40d7c9;
case 0x40d7cd:c.instructions+=11;goto B40d7cd;
case 0x40d7ce:c.instructions+=10;goto B40d7ce;
case 0x40d7d2:c.instructions+=9;goto B40d7d2;
case 0x40d7d3:c.instructions+=8;goto B40d7d3;
case 0x40d7d7:c.instructions+=7;goto B40d7d7;
case 0x40d7d8:c.instructions+=6;goto B40d7d8;
case 0x40d7dc:c.instructions+=5;goto B40d7dc;
case 0x40d7dd:c.instructions+=4;goto B40d7dd;
case 0x40d7e0:c.instructions+=3;goto B40d7e0;
case 0x40d7e1:c.instructions+=2;goto B40d7e1;
case 0x40d7e2:c.instructions+=1;goto B40d7e2;
case 0x40d7e7:goto L40d7e7;
case 0x40d7e8:goto L40d7e8;
case 0x40d7e9:goto L40d7e9;
case 0x40d7ea:c.instructions+=3;goto B40d7ea;
case 0x40d7eb:c.instructions+=2;goto B40d7eb;
case 0x40d7ee:c.instructions+=1;goto B40d7ee;
case 0x40d7f1:goto L40d7f1;
case 0x40d7f6:c.instructions+=1;goto B40d7f6;
case 0x40d800:goto L40d800;
case 0x40d803:c.instructions+=3;goto B40d803;
case 0x40d805:c.instructions+=2;goto B40d805;
case 0x40d807:c.instructions+=1;goto B40d807;
case 0x40d809:goto L40d809;
case 0x40d80c:c.instructions+=2;goto B40d80c;
case 0x40d80e:c.instructions+=1;goto B40d80e;
case 0x40d810:goto L40d810;
case 0x40d811:c.instructions+=3;goto B40d811;
case 0x40d815:c.instructions+=2;goto B40d815;
case 0x40d81b:c.instructions+=1;goto B40d81b;
case 0x40d81c:goto L40d81c;
case 0x40d822:c.instructions+=1;goto B40d822;
case 0x40d830:goto L40d830;
case 0x40d833:c.instructions+=2;goto B40d833;
case 0x40d835:c.instructions+=1;goto B40d835;
case 0x40d837:goto L40d837;
case 0x40d83a:c.instructions+=2;goto B40d83a;
case 0x40d83c:c.instructions+=1;goto B40d83c;
case 0x40d83e:goto L40d83e;
case 0x40d848:goto L40d848;
case 0x40d84f:c.instructions+=1;goto B40d84f;
case 0x40d850:goto L40d850;
case 0x40d853:c.instructions+=8;goto B40d853;
case 0x40d854:c.instructions+=7;goto B40d854;
case 0x40d855:c.instructions+=6;goto B40d855;
case 0x40d857:c.instructions+=5;goto B40d857;
case 0x40d859:c.instructions+=4;goto B40d859;
case 0x40d85a:c.instructions+=3;goto B40d85a;
case 0x40d85d:c.instructions+=2;goto B40d85d;
case 0x40d860:c.instructions+=1;goto B40d860;
case 0x40d863:goto L40d863;
case 0x40d869:c.instructions+=10;goto B40d869;
case 0x40d86b:c.instructions+=9;goto B40d86b;
case 0x40d86d:c.instructions+=8;goto B40d86d;
case 0x40d870:c.instructions+=7;goto B40d870;
case 0x40d871:c.instructions+=6;goto B40d871;
case 0x40d873:c.instructions+=5;goto B40d873;
case 0x40d876:c.instructions+=4;goto B40d876;
case 0x40d878:c.instructions+=3;goto B40d878;
case 0x40d87f:c.instructions+=2;goto B40d87f;
case 0x40d883:c.instructions+=1;goto B40d883;
case 0x40d888:goto L40d888;
case 0x40d88c:c.instructions+=4;goto B40d88c;
case 0x40d891:c.instructions+=3;goto B40d891;
case 0x40d893:c.instructions+=2;goto B40d893;
case 0x40d896:c.instructions+=1;goto B40d896;
case 0x40d898:goto L40d898;
case 0x40d89d:goto L40d89d;
case 0x40d89f:c.instructions+=1;goto B40d89f;
case 0x40d8a4:goto L40d8a4;
case 0x40d8a6:c.instructions+=1;goto B40d8a6;
case 0x40d8a8:goto L40d8a8;
case 0x40d8ac:c.instructions+=2;goto B40d8ac;
case 0x40d8ae:c.instructions+=1;goto B40d8ae;
case 0x40d8b4:goto L40d8b4;
case 0x40d8bb:c.instructions+=1;goto B40d8bb;
case 0x40d8c1:goto L40d8c1;
case 0x40d8c2:c.instructions+=6;goto B40d8c2;
case 0x40d8c5:c.instructions+=5;goto B40d8c5;
case 0x40d8c8:c.instructions+=4;goto B40d8c8;
case 0x40d8ca:c.instructions+=3;goto B40d8ca;
case 0x40d8cc:c.instructions+=2;goto B40d8cc;
case 0x40d8ce:c.instructions+=1;goto B40d8ce;
case 0x40d8d0:goto L40d8d0;
case 0x40d8d2:c.instructions+=1;goto B40d8d2;
case 0x40d8d8:goto L40d8d8;
case 0x40d8d9:c.instructions+=2;goto B40d8d9;
case 0x40d8db:c.instructions+=1;goto B40d8db;
case 0x40d8e0:goto L40d8e0;
case 0x40d8e2:c.instructions+=1;goto B40d8e2;
case 0x40d8e7:goto L40d8e7;
case 0x40d8eb:c.instructions+=3;goto B40d8eb;
case 0x40d8ec:c.instructions+=2;goto B40d8ec;
case 0x40d8ee:c.instructions+=1;goto B40d8ee;
case 0x40d8f0:goto L40d8f0;
case 0x40d8f2:c.instructions+=1;goto B40d8f2;
case 0x40d8f4:goto L40d8f4;
case 0x40d8f6:c.instructions+=1;goto B40d8f6;
case 0x40d8fb:goto L40d8fb;
case 0x40d8fd:c.instructions+=1;goto B40d8fd;
case 0x40d8ff:goto L40d8ff;
case 0x40d904:c.instructions+=3;goto B40d904;
case 0x40d906:c.instructions+=2;goto B40d906;
case 0x40d90c:c.instructions+=1;goto B40d90c;
case 0x40d90e:goto L40d90e;
case 0x40d913:c.instructions+=2;goto B40d913;
case 0x40d915:c.instructions+=1;goto B40d915;
case 0x40d917:goto L40d917;
case 0x40d919:c.instructions+=2;goto B40d919;
case 0x40d91b:c.instructions+=1;goto B40d91b;
case 0x40d91e:goto L40d91e;
case 0x40d924:c.instructions+=9;goto B40d924;
case 0x40d926:c.instructions+=8;goto B40d926;
case 0x40d928:c.instructions+=7;goto B40d928;
case 0x40d92b:c.instructions+=6;goto B40d92b;
case 0x40d92c:c.instructions+=5;goto B40d92c;
case 0x40d92e:c.instructions+=4;goto B40d92e;
case 0x40d931:c.instructions+=3;goto B40d931;
case 0x40d939:c.instructions+=2;goto B40d939;
case 0x40d93a:c.instructions+=1;goto B40d93a;
case 0x40d93c:goto L40d93c;
case 0x40d941:goto L40d941;
case 0x40d943:c.instructions+=3;goto B40d943;
case 0x40d946:c.instructions+=2;goto B40d946;
case 0x40d948:c.instructions+=1;goto B40d948;
case 0x40d94a:goto L40d94a;
case 0x40d94c:c.instructions+=1;goto B40d94c;
case 0x40d951:goto L40d951;
case 0x40d953:c.instructions+=1;goto B40d953;
case 0x40d955:goto L40d955;
case 0x40d956:c.instructions+=6;goto B40d956;
case 0x40d957:c.instructions+=5;goto B40d957;
case 0x40d958:c.instructions+=4;goto B40d958;
case 0x40d95a:c.instructions+=3;goto B40d95a;
case 0x40d95b:c.instructions+=2;goto B40d95b;
case 0x40d95e:c.instructions+=1;goto B40d95e;
case 0x40d95f:goto L40d95f;
case 0x40d960:c.instructions+=5;goto B40d960;
case 0x40d961:c.instructions+=4;goto B40d961;
case 0x40d963:c.instructions+=3;goto B40d963;
case 0x40d964:c.instructions+=2;goto B40d964;
case 0x40d967:c.instructions+=1;goto B40d967;
case 0x40d968:goto L40d968;
case 0x40d969:c.instructions+=6;goto B40d969;
case 0x40d96a:c.instructions+=5;goto B40d96a;
case 0x40d96b:c.instructions+=4;goto B40d96b;
case 0x40d96d:c.instructions+=3;goto B40d96d;
case 0x40d96e:c.instructions+=2;goto B40d96e;
case 0x40d971:c.instructions+=1;goto B40d971;
case 0x40d980:goto L40d980;
case 0x40d981:c.instructions+=6;goto B40d981;
case 0x40d982:c.instructions+=5;goto B40d982;
case 0x40d984:c.instructions+=4;goto B40d984;
case 0x40d987:c.instructions+=3;goto B40d987;
case 0x40d98a:c.instructions+=2;goto B40d98a;
case 0x40d98e:c.instructions+=1;goto B40d98e;
case 0x40d990:goto L40d990;
case 0x40d993:c.instructions+=3;goto B40d993;
case 0x40d999:c.instructions+=2;goto B40d999;
case 0x40d99b:c.instructions+=1;goto B40d99b;
case 0x40d99d:goto L40d99d;
case 0x40d9a2:c.instructions+=8;goto B40d9a2;
case 0x40d9a8:c.instructions+=7;goto B40d9a8;
case 0x40d9ac:c.instructions+=6;goto B40d9ac;
case 0x40d9b0:c.instructions+=5;goto B40d9b0;
case 0x40d9b6:c.instructions+=4;goto B40d9b6;
case 0x40d9bc:c.instructions+=3;goto B40d9bc;
case 0x40d9be:c.instructions+=2;goto B40d9be;
case 0x40d9c1:c.instructions+=1;goto B40d9c1;
case 0x40d9c3:goto L40d9c3;
case 0x40d9c9:c.instructions+=5;goto B40d9c9;
case 0x40d9ca:c.instructions+=4;goto B40d9ca;
case 0x40d9d0:c.instructions+=3;goto B40d9d0;
case 0x40d9d2:c.instructions+=2;goto B40d9d2;
case 0x40d9d5:c.instructions+=1;goto B40d9d5;
case 0x40d9da:goto L40d9da;
case 0x40d9e0:c.instructions+=7;goto B40d9e0;
case 0x40d9e6:c.instructions+=6;goto B40d9e6;
case 0x40d9ec:c.instructions+=5;goto B40d9ec;
case 0x40d9f2:c.instructions+=4;goto B40d9f2;
case 0x40d9f8:c.instructions+=3;goto B40d9f8;
case 0x40d9f9:c.instructions+=2;goto B40d9f9;
case 0x40d9fa:c.instructions+=1;goto B40d9fa;
case 0x40d9fb:goto L40d9fb;
case 0x40da05:goto L40da05;
case 0x40da06:c.instructions+=2;goto B40da06;
case 0x40da07:c.instructions+=1;goto B40da07;
case 0x40da10:goto L40da10;
case 0x40da11:c.instructions+=5;goto B40da11;
case 0x40da12:c.instructions+=4;goto B40da12;
case 0x40da16:c.instructions+=3;goto B40da16;
case 0x40da17:c.instructions+=2;goto B40da17;
case 0x40da19:c.instructions+=1;goto B40da19;
case 0x40da1e:goto L40da1e;
case 0x40da22:c.instructions+=9;goto B40da22;
case 0x40da24:c.instructions+=8;goto B40da24;
case 0x40da27:c.instructions+=7;goto B40da27;
case 0x40da29:c.instructions+=6;goto B40da29;
case 0x40da2c:c.instructions+=5;goto B40da2c;
case 0x40da2e:c.instructions+=4;goto B40da2e;
case 0x40da31:c.instructions+=3;goto B40da31;
case 0x40da33:c.instructions+=2;goto B40da33;
case 0x40da36:c.instructions+=1;goto B40da36;
case 0x40da3b:goto L40da3b;
case 0x40da3e:c.instructions+=1;goto B40da3e;
case 0x40da40:goto L40da40;
case 0x40da43:c.instructions+=1;goto B40da43;
case 0x40da45:goto L40da45;
case 0x40da47:c.instructions+=1;goto B40da47;
case 0x40da49:goto L40da49;
case 0x40da50:c.instructions+=7;goto B40da50;
case 0x40da53:c.instructions+=6;goto B40da53;
case 0x40da54:c.instructions+=5;goto B40da54;
case 0x40da56:c.instructions+=4;goto B40da56;
case 0x40da57:c.instructions+=3;goto B40da57;
case 0x40da5a:c.instructions+=2;goto B40da5a;
case 0x40da5b:c.instructions+=1;goto B40da5b;
case 0x40da5e:goto L40da5e;
case 0x40da63:goto L40da63;
case 0x40da6a:c.instructions+=6;goto B40da6a;
case 0x40da6b:c.instructions+=5;goto B40da6b;
case 0x40da6d:c.instructions+=4;goto B40da6d;
case 0x40da6e:c.instructions+=3;goto B40da6e;
case 0x40da71:c.instructions+=2;goto B40da71;
case 0x40da72:c.instructions+=1;goto B40da72;
case 0x40da80:goto L40da80;
case 0x40da84:c.instructions+=4;goto B40da84;
case 0x40da85:c.instructions+=3;goto B40da85;
case 0x40da86:c.instructions+=2;goto B40da86;
case 0x40da88:c.instructions+=1;goto B40da88;
case 0x40da8d:goto L40da8d;
case 0x40da91:c.instructions+=6;goto B40da91;
case 0x40da98:c.instructions+=5;goto B40da98;
case 0x40da9e:c.instructions+=4;goto B40da9e;
case 0x40daa1:c.instructions+=3;goto B40daa1;
case 0x40daa3:c.instructions+=2;goto B40daa3;
case 0x40daa4:c.instructions+=1;goto B40daa4;
case 0x40dab0:goto L40dab0;
case 0x40dab3:c.instructions+=1;goto B40dab3;
case 0x40dac0:goto L40dac0;
case 0x40dac1:c.instructions+=7;goto B40dac1;
case 0x40dac5:c.instructions+=6;goto B40dac5;
case 0x40dac6:c.instructions+=5;goto B40dac6;
case 0x40dacb:c.instructions+=4;goto B40dacb;
case 0x40dacd:c.instructions+=3;goto B40dacd;
case 0x40dacf:c.instructions+=2;goto B40dacf;
case 0x40dad1:c.instructions+=1;goto B40dad1;
case 0x40dad6:goto L40dad6;
case 0x40dad7:c.instructions+=2;goto B40dad7;
case 0x40dad9:c.instructions+=1;goto B40dad9;
case 0x40dade:goto L40dade;
case 0x40dae0:c.instructions+=1;goto B40dae0;
case 0x40dae5:goto L40dae5;
case 0x40dae6:c.instructions+=2;goto B40dae6;
case 0x40dae7:c.instructions+=1;goto B40dae7;
case 0x40daf0:goto L40daf0;
case 0x40daf4:c.instructions+=4;goto B40daf4;
case 0x40daf5:c.instructions+=3;goto B40daf5;
case 0x40daf6:c.instructions+=2;goto B40daf6;
case 0x40daf8:c.instructions+=1;goto B40daf8;
case 0x40dafd:goto L40dafd;
case 0x40db01:c.instructions+=6;goto B40db01;
case 0x40db08:c.instructions+=5;goto B40db08;
case 0x40db0e:c.instructions+=4;goto B40db0e;
case 0x40db11:c.instructions+=3;goto B40db11;
case 0x40db13:c.instructions+=2;goto B40db13;
case 0x40db14:c.instructions+=1;goto B40db14;
case 0x40db20:goto L40db20;
case 0x40db21:c.instructions+=2;goto B40db21;
case 0x40db23:c.instructions+=1;goto B40db23;
case 0x40db28:goto L40db28;
case 0x40db2d:c.instructions+=1;goto B40db2d;
case 0x40db2f:goto L40db2f;
case 0x40db34:c.instructions+=3;goto B40db34;
case 0x40db35:c.instructions+=2;goto B40db35;
case 0x40db36:c.instructions+=1;goto B40db36;
case 0x40db3b:goto L40db3b;
case 0x40db3e:goto L40db3e;
case 0x40db40:c.instructions+=2;goto B40db40;
case 0x40db41:c.instructions+=1;goto B40db41;
case 0x40db50:goto L40db50;
case 0x40db54:c.instructions+=3;goto B40db54;
case 0x40db56:c.instructions+=2;goto B40db56;
case 0x40db59:c.instructions+=1;goto B40db59;
case 0x40db5e:goto L40db5e;
case 0x40db70:goto L40db70;
case 0x40db74:c.instructions+=4;goto B40db74;
case 0x40db75:c.instructions+=3;goto B40db75;
case 0x40db76:c.instructions+=2;goto B40db76;
case 0x40db78:c.instructions+=1;goto B40db78;
case 0x40db7d:goto L40db7d;
case 0x40db81:c.instructions+=6;goto B40db81;
case 0x40db88:c.instructions+=5;goto B40db88;
case 0x40db8e:c.instructions+=4;goto B40db8e;
case 0x40db91:c.instructions+=3;goto B40db91;
case 0x40db93:c.instructions+=2;goto B40db93;
case 0x40db94:c.instructions+=1;goto B40db94;
case 0x40dba0:goto L40dba0;
case 0x40dba4:c.instructions+=4;goto B40dba4;
case 0x40dba5:c.instructions+=3;goto B40dba5;
case 0x40dba6:c.instructions+=2;goto B40dba6;
case 0x40dba8:c.instructions+=1;goto B40dba8;
case 0x40dbad:goto L40dbad;
case 0x40dbb1:c.instructions+=14;goto B40dbb1;
case 0x40dbb5:c.instructions+=13;goto B40dbb5;
case 0x40dbb9:c.instructions+=12;goto B40dbb9;
case 0x40dbc0:c.instructions+=11;goto B40dbc0;
case 0x40dbc6:c.instructions+=10;goto B40dbc6;
case 0x40dbcd:c.instructions+=9;goto B40dbcd;
case 0x40dbd0:c.instructions+=8;goto B40dbd0;
case 0x40dbd3:c.instructions+=7;goto B40dbd3;
case 0x40dbd6:c.instructions+=6;goto B40dbd6;
case 0x40dbdc:c.instructions+=5;goto B40dbdc;
case 0x40dbe2:c.instructions+=4;goto B40dbe2;
case 0x40dbe6:c.instructions+=3;goto B40dbe6;
case 0x40dbec:c.instructions+=2;goto B40dbec;
case 0x40dbf2:c.instructions+=1;goto B40dbf2;
case 0x40dbf7:goto L40dbf7;
case 0x40dbfa:c.instructions+=3;goto B40dbfa;
case 0x40dbfc:c.instructions+=2;goto B40dbfc;
case 0x40dbfd:c.instructions+=1;goto B40dbfd;
case 0x40dc00:goto L40dc00;
case 0x40dc03:c.instructions+=10;goto B40dc03;
case 0x40dc07:c.instructions+=9;goto B40dc07;
case 0x40dc0d:c.instructions+=8;goto B40dc0d;
case 0x40dc0e:c.instructions+=7;goto B40dc0e;
case 0x40dc10:c.instructions+=6;goto B40dc10;
case 0x40dc12:c.instructions+=5;goto B40dc12;
case 0x40dc15:c.instructions+=4;goto B40dc15;
case 0x40dc19:c.instructions+=3;goto B40dc19;
case 0x40dc1d:c.instructions+=2;goto B40dc1d;
case 0x40dc25:c.instructions+=1;goto B40dc25;
case 0x40dc27:goto L40dc27;
case 0x40dc2a:c.instructions+=17;goto B40dc2a;
case 0x40dc2d:c.instructions+=16;goto B40dc2d;
case 0x40dc30:c.instructions+=15;goto B40dc30;
case 0x40dc33:c.instructions+=14;goto B40dc33;
case 0x40dc36:c.instructions+=13;goto B40dc36;
case 0x40dc39:c.instructions+=12;goto B40dc39;
case 0x40dc3b:c.instructions+=11;goto B40dc3b;
case 0x40dc3d:c.instructions+=10;goto B40dc3d;
case 0x40dc3f:c.instructions+=9;goto B40dc3f;
case 0x40dc41:c.instructions+=8;goto B40dc41;
case 0x40dc43:c.instructions+=7;goto B40dc43;
case 0x40dc45:c.instructions+=6;goto B40dc45;
case 0x40dc47:c.instructions+=5;goto B40dc47;
case 0x40dc49:c.instructions+=4;goto B40dc49;
case 0x40dc4f:c.instructions+=3;goto B40dc4f;
case 0x40dc51:c.instructions+=2;goto B40dc51;
case 0x40dc54:c.instructions+=1;goto B40dc54;
case 0x40dc56:goto L40dc56;
case 0x40dc5c:c.instructions+=2;goto B40dc5c;
case 0x40dc60:c.instructions+=1;goto B40dc60;
case 0x40dc62:goto L40dc62;
case 0x40dc67:c.instructions+=1;goto B40dc67;
case 0x40dc6b:goto L40dc6b;
case 0x40dc70:c.instructions+=2;goto B40dc70;
case 0x40dc72:c.instructions+=1;goto B40dc72;
case 0x40dc78:goto L40dc78;
case 0x40dc7b:c.instructions+=10;goto B40dc7b;
case 0x40dc81:c.instructions+=9;goto B40dc81;
case 0x40dc87:c.instructions+=8;goto B40dc87;
case 0x40dc89:c.instructions+=7;goto B40dc89;
case 0x40dc8d:c.instructions+=6;goto B40dc8d;
case 0x40dc8f:c.instructions+=5;goto B40dc8f;
case 0x40dc90:c.instructions+=4;goto B40dc90;
case 0x40dc94:c.instructions+=3;goto B40dc94;
case 0x40dc95:c.instructions+=2;goto B40dc95;
case 0x40dc9a:c.instructions+=1;goto B40dc9a;
case 0x40dc9f:goto L40dc9f;
case 0x40dca5:c.instructions+=16;goto B40dca5;
case 0x40dca8:c.instructions+=15;goto B40dca8;
case 0x40dcad:c.instructions+=14;goto B40dcad;
case 0x40dcb0:c.instructions+=13;goto B40dcb0;
case 0x40dcb2:c.instructions+=12;goto B40dcb2;
case 0x40dcb4:c.instructions+=11;goto B40dcb4;
case 0x40dcb8:c.instructions+=10;goto B40dcb8;
case 0x40dcbc:c.instructions+=9;goto B40dcbc;
case 0x40dcbe:c.instructions+=8;goto B40dcbe;
case 0x40dcc2:c.instructions+=7;goto B40dcc2;
case 0x40dcc8:c.instructions+=6;goto B40dcc8;
case 0x40dccc:c.instructions+=5;goto B40dccc;
case 0x40dcd0:c.instructions+=4;goto B40dcd0;
case 0x40dcd6:c.instructions+=3;goto B40dcd6;
case 0x40dcd8:c.instructions+=2;goto B40dcd8;
case 0x40dcdb:c.instructions+=1;goto B40dcdb;
case 0x40dce1:goto L40dce1;
case 0x40dce5:c.instructions+=4;goto B40dce5;
case 0x40dceb:c.instructions+=3;goto B40dceb;
case 0x40dced:c.instructions+=2;goto B40dced;
case 0x40dcf0:c.instructions+=1;goto B40dcf0;
case 0x40dcf2:goto L40dcf2;
case 0x40dcf5:c.instructions+=5;goto B40dcf5;
case 0x40dcfb:c.instructions+=4;goto B40dcfb;
case 0x40dcff:c.instructions+=3;goto B40dcff;
case 0x40dd03:c.instructions+=2;goto B40dd03;
case 0x40dd05:c.instructions+=1;goto B40dd05;
case 0x40dd07:goto L40dd07;
case 0x40dd0a:c.instructions+=6;goto B40dd0a;
case 0x40dd10:c.instructions+=5;goto B40dd10;
case 0x40dd16:c.instructions+=4;goto B40dd16;
case 0x40dd1c:c.instructions+=3;goto B40dd1c;
case 0x40dd1e:c.instructions+=2;goto B40dd1e;
case 0x40dd21:c.instructions+=1;goto B40dd21;
case 0x40dd23:goto L40dd23;
case 0x40dd25:c.instructions+=4;goto B40dd25;
case 0x40dd26:c.instructions+=3;goto B40dd26;
case 0x40dd2c:c.instructions+=2;goto B40dd2c;
case 0x40dd2f:c.instructions+=1;goto B40dd2f;
case 0x40dd32:goto L40dd32;
case 0x40dd35:c.instructions+=17;goto B40dd35;
case 0x40dd38:c.instructions+=16;goto B40dd38;
case 0x40dd3b:c.instructions+=15;goto B40dd3b;
case 0x40dd3e:c.instructions+=14;goto B40dd3e;
case 0x40dd41:c.instructions+=13;goto B40dd41;
case 0x40dd42:c.instructions+=12;goto B40dd42;
case 0x40dd45:c.instructions+=11;goto B40dd45;
case 0x40dd4a:c.instructions+=10;goto B40dd4a;
case 0x40dd4c:c.instructions+=9;goto B40dd4c;
case 0x40dd4e:c.instructions+=8;goto B40dd4e;
case 0x40dd50:c.instructions+=7;goto B40dd50;
case 0x40dd52:c.instructions+=6;goto B40dd52;
case 0x40dd54:c.instructions+=5;goto B40dd54;
case 0x40dd56:c.instructions+=4;goto B40dd56;
case 0x40dd58:c.instructions+=3;goto B40dd58;
case 0x40dd5a:c.instructions+=2;goto B40dd5a;
case 0x40dd5d:c.instructions+=1;goto B40dd5d;
case 0x40dd62:goto L40dd62;
case 0x40dd65:c.instructions+=1;goto B40dd65;
case 0x40dd6b:goto L40dd6b;
case 0x40dd6f:c.instructions+=3;goto B40dd6f;
case 0x40dd71:c.instructions+=2;goto B40dd71;
case 0x40dd74:c.instructions+=1;goto B40dd74;
case 0x40dd76:goto L40dd76;
case 0x40dd78:c.instructions+=4;goto B40dd78;
case 0x40dd79:c.instructions+=3;goto B40dd79;
case 0x40dd7d:c.instructions+=2;goto B40dd7d;
case 0x40dd80:c.instructions+=1;goto B40dd80;
case 0x40dd83:goto L40dd83;
case 0x40dd87:goto L40dd87;
case 0x40dd88:c.instructions+=2;goto B40dd88;
case 0x40dd8b:c.instructions+=1;goto B40dd8b;
case 0x40dd90:goto L40dd90;
case 0x40dd94:c.instructions+=4;goto B40dd94;
case 0x40dd95:c.instructions+=3;goto B40dd95;
case 0x40dd96:c.instructions+=2;goto B40dd96;
case 0x40dd98:c.instructions+=1;goto B40dd98;
case 0x40dd9d:goto L40dd9d;
case 0x40dda1:c.instructions+=10;goto B40dda1;
case 0x40dda5:c.instructions+=9;goto B40dda5;
case 0x40dda9:c.instructions+=8;goto B40dda9;
case 0x40ddac:c.instructions+=7;goto B40ddac;
case 0x40ddb3:c.instructions+=6;goto B40ddb3;
case 0x40ddb9:c.instructions+=5;goto B40ddb9;
case 0x40ddbc:c.instructions+=4;goto B40ddbc;
case 0x40ddbf:c.instructions+=3;goto B40ddbf;
case 0x40ddc1:c.instructions+=2;goto B40ddc1;
case 0x40ddc2:c.instructions+=1;goto B40ddc2;
case 0x40ddd0:goto L40ddd0;
case 0x40ddd6:c.instructions+=1;goto B40ddd6;
case 0x40dde0:goto L40dde0;
case 0x40dde4:c.instructions+=2;goto B40dde4;
case 0x40dde6:c.instructions+=1;goto B40dde6;
case 0x40ddeb:goto L40ddeb;
case 0x40ddf0:goto L40ddf0;
case 0x40ddf4:c.instructions+=5;goto B40ddf4;
case 0x40ddf7:c.instructions+=4;goto B40ddf7;
case 0x40ddfa:c.instructions+=3;goto B40ddfa;
case 0x40ddff:c.instructions+=2;goto B40ddff;
case 0x40de01:c.instructions+=1;goto B40de01;
case 0x40de03:goto L40de03;
case 0x40de09:c.instructions+=2;goto B40de09;
case 0x40de0b:c.instructions+=1;goto B40de0b;
case 0x40de0d:goto L40de0d;
case 0x40de13:c.instructions+=2;goto B40de13;
case 0x40de15:c.instructions+=1;goto B40de15;
case 0x40de17:goto L40de17;
case 0x40de1c:goto L40de1c;
case 0x40de20:goto L40de20;
case 0x40de21:c.instructions+=7;goto B40de21;
case 0x40de25:c.instructions+=6;goto B40de25;
case 0x40de26:c.instructions+=5;goto B40de26;
case 0x40de2b:c.instructions+=4;goto B40de2b;
case 0x40de2d:c.instructions+=3;goto B40de2d;
case 0x40de2f:c.instructions+=2;goto B40de2f;
case 0x40de31:c.instructions+=1;goto B40de31;
case 0x40de36:goto L40de36;
case 0x40de37:c.instructions+=2;goto B40de37;
case 0x40de3a:c.instructions+=1;goto B40de3a;
case 0x40de3f:goto L40de3f;
case 0x40de45:c.instructions+=3;goto B40de45;
case 0x40de46:c.instructions+=2;goto B40de46;
case 0x40de48:c.instructions+=1;goto B40de48;
case 0x40de4d:goto L40de4d;
case 0x40de53:c.instructions+=3;goto B40de53;
case 0x40de54:c.instructions+=2;goto B40de54;
case 0x40de56:c.instructions+=1;goto B40de56;
case 0x40de5b:goto L40de5b;
case 0x40de61:c.instructions+=3;goto B40de61;
case 0x40de62:c.instructions+=2;goto B40de62;
case 0x40de64:c.instructions+=1;goto B40de64;
case 0x40de69:goto L40de69;
case 0x40de6b:c.instructions+=6;goto B40de6b;
case 0x40de6d:c.instructions+=5;goto B40de6d;
case 0x40de6f:c.instructions+=4;goto B40de6f;
case 0x40de75:c.instructions+=3;goto B40de75;
case 0x40de76:c.instructions+=2;goto B40de76;
case 0x40de78:c.instructions+=1;goto B40de78;
case 0x40de7d:goto L40de7d;
case 0x40de7f:c.instructions+=6;goto B40de7f;
case 0x40de81:c.instructions+=5;goto B40de81;
case 0x40de83:c.instructions+=4;goto B40de83;
case 0x40de89:c.instructions+=3;goto B40de89;
case 0x40de8a:c.instructions+=2;goto B40de8a;
case 0x40de8c:c.instructions+=1;goto B40de8c;
case 0x40de91:goto L40de91;
case 0x40de93:c.instructions+=6;goto B40de93;
case 0x40de95:c.instructions+=5;goto B40de95;
case 0x40de97:c.instructions+=4;goto B40de97;
case 0x40de9d:c.instructions+=3;goto B40de9d;
case 0x40de9e:c.instructions+=2;goto B40de9e;
case 0x40dea0:c.instructions+=1;goto B40dea0;
case 0x40dea5:goto L40dea5;
case 0x40dea7:c.instructions+=6;goto B40dea7;
case 0x40dea9:c.instructions+=5;goto B40dea9;
case 0x40deab:c.instructions+=4;goto B40deab;
case 0x40deb1:c.instructions+=3;goto B40deb1;
case 0x40deb2:c.instructions+=2;goto B40deb2;
case 0x40deb4:c.instructions+=1;goto B40deb4;
case 0x40deb9:goto L40deb9;
case 0x40debf:c.instructions+=3;goto B40debf;
case 0x40dec0:c.instructions+=2;goto B40dec0;
case 0x40dec2:c.instructions+=1;goto B40dec2;
case 0x40dec7:goto L40dec7;
case 0x40dec8:c.instructions+=2;goto B40dec8;
case 0x40deca:c.instructions+=1;goto B40deca;
case 0x40decf:goto L40decf;
case 0x40ded1:c.instructions+=1;goto B40ded1;
case 0x40ded6:goto L40ded6;
case 0x40ded7:c.instructions+=2;goto B40ded7;
case 0x40ded8:c.instructions+=1;goto B40ded8;
case 0x40dee0:goto L40dee0;
case 0x40dee4:c.instructions+=22;goto B40dee4;
case 0x40dee7:c.instructions+=21;goto B40dee7;
case 0x40deed:c.instructions+=20;goto B40deed;
case 0x40deef:c.instructions+=19;goto B40deef;
case 0x40def5:c.instructions+=18;goto B40def5;
case 0x40defb:c.instructions+=17;goto B40defb;
case 0x40defd:c.instructions+=16;goto B40defd;
case 0x40df03:c.instructions+=15;goto B40df03;
case 0x40df09:c.instructions+=14;goto B40df09;
case 0x40df0f:c.instructions+=13;goto B40df0f;
case 0x40df11:c.instructions+=12;goto B40df11;
case 0x40df17:c.instructions+=11;goto B40df17;
case 0x40df1d:c.instructions+=10;goto B40df1d;
case 0x40df23:c.instructions+=9;goto B40df23;
case 0x40df25:c.instructions+=8;goto B40df25;
case 0x40df2b:c.instructions+=7;goto B40df2b;
case 0x40df2f:c.instructions+=6;goto B40df2f;
case 0x40df31:c.instructions+=5;goto B40df31;
case 0x40df35:c.instructions+=4;goto B40df35;
case 0x40df3b:c.instructions+=3;goto B40df3b;
case 0x40df41:c.instructions+=2;goto B40df41;
case 0x40df47:c.instructions+=1;goto B40df47;
case 0x40df50:goto L40df50;
case 0x40df53:c.instructions+=22;goto B40df53;
case 0x40df54:c.instructions+=21;goto B40df54;
case 0x40df55:c.instructions+=20;goto B40df55;
case 0x40df56:c.instructions+=19;goto B40df56;
case 0x40df5a:c.instructions+=18;goto B40df5a;
case 0x40df60:c.instructions+=17;goto B40df60;
case 0x40df63:c.instructions+=16;goto B40df63;
case 0x40df66:c.instructions+=15;goto B40df66;
case 0x40df68:c.instructions+=14;goto B40df68;
case 0x40df6c:c.instructions+=13;goto B40df6c;
case 0x40df6f:c.instructions+=12;goto B40df6f;
case 0x40df75:c.instructions+=11;goto B40df75;
case 0x40df79:c.instructions+=10;goto B40df79;
case 0x40df7c:c.instructions+=9;goto B40df7c;
case 0x40df7e:c.instructions+=8;goto B40df7e;
case 0x40df7f:c.instructions+=7;goto B40df7f;
case 0x40df82:c.instructions+=6;goto B40df82;
case 0x40df84:c.instructions+=5;goto B40df84;
case 0x40df86:c.instructions+=4;goto B40df86;
case 0x40df88:c.instructions+=3;goto B40df88;
case 0x40df8b:c.instructions+=2;goto B40df8b;
case 0x40df8e:c.instructions+=1;goto B40df8e;
case 0x40df94:goto L40df94;
case 0x40df9a:c.instructions+=8;goto B40df9a;
case 0x40df9b:c.instructions+=7;goto B40df9b;
case 0x40df9e:c.instructions+=6;goto B40df9e;
case 0x40df9f:c.instructions+=5;goto B40df9f;
case 0x40dfa3:c.instructions+=4;goto B40dfa3;
case 0x40dfa4:c.instructions+=3;goto B40dfa4;
case 0x40dfa8:c.instructions+=2;goto B40dfa8;
case 0x40dfa9:c.instructions+=1;goto B40dfa9;
case 0x40dfae:goto L40dfae;
case 0x40dfb1:c.instructions+=5;goto B40dfb1;
case 0x40dfb2:c.instructions+=4;goto B40dfb2;
case 0x40dfb6:c.instructions+=3;goto B40dfb6;
case 0x40dfb7:c.instructions+=2;goto B40dfb7;
case 0x40dfb9:c.instructions+=1;goto B40dfb9;
case 0x40dfbe:goto L40dfbe;
case 0x40dfc2:c.instructions+=5;goto B40dfc2;
case 0x40dfc3:c.instructions+=4;goto B40dfc3;
case 0x40dfc7:c.instructions+=3;goto B40dfc7;
case 0x40dfc8:c.instructions+=2;goto B40dfc8;
case 0x40dfca:c.instructions+=1;goto B40dfca;
case 0x40dfcf:goto L40dfcf;
case 0x40dfd1:c.instructions+=1;goto B40dfd1;
case 0x40dfd7:goto L40dfd7;
case 0x40dfdb:c.instructions+=9;goto B40dfdb;
case 0x40dfde:c.instructions+=8;goto B40dfde;
case 0x40dfe2:c.instructions+=7;goto B40dfe2;
case 0x40dfe6:c.instructions+=6;goto B40dfe6;
case 0x40dfec:c.instructions+=5;goto B40dfec;
case 0x40dff0:c.instructions+=4;goto B40dff0;
case 0x40dff3:c.instructions+=3;goto B40dff3;
case 0x40dff7:c.instructions+=2;goto B40dff7;
case 0x40dffb:c.instructions+=1;goto B40dffb;
default:missing_instruction(c.pc);}
B40d000:L40d000:{c.instructions+=1;NFSU2_TR(0x40d000);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d005ull));
TAIL_STATIC(0x575630u,575);
}
B40d005:L40d005:{c.instructions+=4;NFSU2_TR(0x40d005);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40d008:{NFSU2_TR(0x40d008);
__builtin_memmove((R+0),(R+24),4);
}
B40d00a:{NFSU2_TR(0x40d00a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40d00b:{NFSU2_TR(0x40d00b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40d010:L40d010:{c.instructions+=2;NFSU2_TR(0x40d010);
u8 U[4];
w4(U+0,u32(0x78463cull));
s4(u32(r4(R+4)),r4(U+0));
}
B40d016:{NFSU2_TR(0x40d016);
TAIL_STATIC(0x409c50u,409);
}
B40d020:L40d020:{c.instructions+=3;NFSU2_TR(0x40d020);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d021:{NFSU2_TR(0x40d021);
__builtin_memmove((R+24),(R+4),4);
}
B40d023:{NFSU2_TR(0x40d023);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d028ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40d010u);}goto L40d010;}
}
B40d028:L40d028:{c.instructions+=2;NFSU2_TR(0x40d028);
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
B40d02d:{NFSU2_TR(0x40d02d);
if(r1(R+518)){{goto L40d038;}}
}
B40d02f:L40d02f:{c.instructions+=2;NFSU2_TR(0x40d02f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d030:{NFSU2_TR(0x40d030);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d035ull));
TAIL_STATIC(0x575630u,575);
}
B40d035:L40d035:{c.instructions+=1;NFSU2_TR(0x40d035);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40d038:L40d038:{c.instructions+=3;NFSU2_TR(0x40d038);
__builtin_memmove((R+0),(R+24),4);
}
B40d03a:{NFSU2_TR(0x40d03a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40d03b:{NFSU2_TR(0x40d03b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40d040:L40d040:{c.instructions+=6;NFSU2_TR(0x40d040);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d041:{NFSU2_TR(0x40d041);
__builtin_memmove((R+24),(R+4),4);
}
B40d043:{NFSU2_TR(0x40d043);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40d046:{NFSU2_TR(0x40d046);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40d048:{NFSU2_TR(0x40d048);
u8 U[4];
w4(U+0,u32(0x7846f0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B40d04e:{NFSU2_TR(0x40d04e);
if(r1(R+518)){{goto L40d057;}}
}
B40d050:L40d050:{c.instructions+=1;NFSU2_TR(0x40d050);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40d057:L40d057:{c.instructions+=2;NFSU2_TR(0x40d057);
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
B40d05c:{NFSU2_TR(0x40d05c);
if(r1(R+518)){{goto L40d06d;}}
}
B40d05e:L40d05e:{c.instructions+=4;NFSU2_TR(0x40d05e);
__builtin_memmove((R+0),gp(0x81cbb4),4);
}
B40d063:{NFSU2_TR(0x40d063);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d064:{NFSU2_TR(0x40d064);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d065:{NFSU2_TR(0x40d065);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d06aull));
TAIL_STATIC(0x43f920u,43f);
}
B40d06a:L40d06a:{c.instructions+=1;NFSU2_TR(0x40d06a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40d06d:L40d06d:{c.instructions+=3;NFSU2_TR(0x40d06d);
__builtin_memmove((R+0),(R+24),4);
}
B40d06f:{NFSU2_TR(0x40d06f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40d070:{NFSU2_TR(0x40d070);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40d080:L40d080:{c.instructions+=2;NFSU2_TR(0x40d080);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40d084:{NFSU2_TR(0x40d084);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40d090:L40d090:{c.instructions+=5;NFSU2_TR(0x40d090);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40d094:{NFSU2_TR(0x40d094);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d095:{NFSU2_TR(0x40d095);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40d099:{NFSU2_TR(0x40d099);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d09a:{NFSU2_TR(0x40d09a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d09full));
TAIL_STATIC(0x401aa0u,401);
}
B40d09f:L40d09f:{c.instructions+=3;NFSU2_TR(0x40d09f);
__builtin_memmove((R+0),(R+24),4);
}
B40d0a1:{NFSU2_TR(0x40d0a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40d0a2:{NFSU2_TR(0x40d0a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40d0b0:L40d0b0:{c.instructions+=7;NFSU2_TR(0x40d0b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40d0b4:{NFSU2_TR(0x40d0b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B40d0b8:{NFSU2_TR(0x40d0b8);
u8 U[45];
w4(U+37,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+4),4);
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
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
B40d0bb:{NFSU2_TR(0x40d0bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40d0bf:{NFSU2_TR(0x40d0bf);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40d0c3:{NFSU2_TR(0x40d0c3);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40d0c9:{NFSU2_TR(0x40d0c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40d0d0:L40d0d0:{c.instructions+=8;NFSU2_TR(0x40d0d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40d0d4:{NFSU2_TR(0x40d0d4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40d0d8:{NFSU2_TR(0x40d0d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40d0dc:{NFSU2_TR(0x40d0dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d0dd:{NFSU2_TR(0x40d0dd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d0de:{NFSU2_TR(0x40d0de);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40d0e2:{NFSU2_TR(0x40d0e2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d0e3:{NFSU2_TR(0x40d0e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d0e8ull));
TAIL_STATIC(0x5dd2f0u,5dd);
}
B40d0e8:L40d0e8:{c.instructions+=1;NFSU2_TR(0x40d0e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40d0f0:L40d0f0:{c.instructions+=8;NFSU2_TR(0x40d0f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40d0f4:{NFSU2_TR(0x40d0f4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40d0f8:{NFSU2_TR(0x40d0f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40d0fc:{NFSU2_TR(0x40d0fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d0fd:{NFSU2_TR(0x40d0fd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d0fe:{NFSU2_TR(0x40d0fe);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40d102:{NFSU2_TR(0x40d102);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d103:{NFSU2_TR(0x40d103);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d108ull));
TAIL_STATIC(0x5dd360u,5dd);
}
B40d108:L40d108:{c.instructions+=1;NFSU2_TR(0x40d108);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40d110:L40d110:{c.instructions+=7;NFSU2_TR(0x40d110);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40d114:{NFSU2_TR(0x40d114);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B40d118:{NFSU2_TR(0x40d118);
u8 U[45];
w4(U+37,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+4),4);
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
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
B40d11b:{NFSU2_TR(0x40d11b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40d11f:{NFSU2_TR(0x40d11f);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40d123:{NFSU2_TR(0x40d123);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40d129:{NFSU2_TR(0x40d129);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40d130:L40d130:{c.instructions+=8;NFSU2_TR(0x40d130);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40d134:{NFSU2_TR(0x40d134);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40d138:{NFSU2_TR(0x40d138);
u8 U[13];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(r1(U+12)));
}
B40d13d:{NFSU2_TR(0x40d13d);
u8 U[45];
w4(U+37,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+8),4);
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+8))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B40d140:{NFSU2_TR(0x40d140);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40d144:{NFSU2_TR(0x40d144);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40d148:{NFSU2_TR(0x40d148);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40d14e:{NFSU2_TR(0x40d14e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40d160:L40d160:{c.instructions+=20;NFSU2_TR(0x40d160);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40d164:{NFSU2_TR(0x40d164);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B40d168:{NFSU2_TR(0x40d168);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B40d16c:{NFSU2_TR(0x40d16c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40d170:{NFSU2_TR(0x40d170);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40d174:{NFSU2_TR(0x40d174);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40d178:{NFSU2_TR(0x40d178);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40d17c:{NFSU2_TR(0x40d17c);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40d182:{NFSU2_TR(0x40d182);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40d186:{NFSU2_TR(0x40d186);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40d18c:{NFSU2_TR(0x40d18c);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40d18f:{NFSU2_TR(0x40d18f);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40d192:{NFSU2_TR(0x40d192);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40d194:{NFSU2_TR(0x40d194);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40d196:{NFSU2_TR(0x40d196);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40d198:{NFSU2_TR(0x40d198);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B40d19a:{NFSU2_TR(0x40d19a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40d19c:{NFSU2_TR(0x40d19c);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B40d19e:{NFSU2_TR(0x40d19e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40d1a0:{NFSU2_TR(0x40d1a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40d1b0:L40d1b0:{c.instructions+=20;NFSU2_TR(0x40d1b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40d1b4:{NFSU2_TR(0x40d1b4);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B40d1b8:{NFSU2_TR(0x40d1b8);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B40d1bc:{NFSU2_TR(0x40d1bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40d1c0:{NFSU2_TR(0x40d1c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40d1c4:{NFSU2_TR(0x40d1c4);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40d1c8:{NFSU2_TR(0x40d1c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40d1cc:{NFSU2_TR(0x40d1cc);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40d1d2:{NFSU2_TR(0x40d1d2);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40d1d6:{NFSU2_TR(0x40d1d6);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40d1dc:{NFSU2_TR(0x40d1dc);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40d1de:{NFSU2_TR(0x40d1de);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40d1e0:{NFSU2_TR(0x40d1e0);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40d1e2:{NFSU2_TR(0x40d1e2);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40d1e5:{NFSU2_TR(0x40d1e5);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40d1e8:{NFSU2_TR(0x40d1e8);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B40d1ea:{NFSU2_TR(0x40d1ea);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B40d1ec:{NFSU2_TR(0x40d1ec);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B40d1ee:{NFSU2_TR(0x40d1ee);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40d1f0:{NFSU2_TR(0x40d1f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40d200:L40d200:{c.instructions+=4;NFSU2_TR(0x40d200);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d201:{NFSU2_TR(0x40d201);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40d205:{NFSU2_TR(0x40d205);
__builtin_memmove((R+4),(R+24),4);
}
B40d207:{NFSU2_TR(0x40d207);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d20cull));
TAIL_STATIC(0x5d89f0u,5d8);
}
B40d20c:L40d20c:{c.instructions+=2;NFSU2_TR(0x40d20c);
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
B40d20e:{NFSU2_TR(0x40d20e);
if(r1(R+518)){{goto L40d229;}}
}
B40d210:L40d210:{c.instructions+=7;NFSU2_TR(0x40d210);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B40d214:{NFSU2_TR(0x40d214);
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
B40d217:{NFSU2_TR(0x40d217);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40d21b:{NFSU2_TR(0x40d21b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40d21c:{NFSU2_TR(0x40d21c);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40d220:{NFSU2_TR(0x40d220);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40d226:{NFSU2_TR(0x40d226);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40d229:L40d229:{c.instructions+=7;NFSU2_TR(0x40d229);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B40d22d:{NFSU2_TR(0x40d22d);
u8 U[45];
w4(U+37,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+4),4);
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
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
B40d230:{NFSU2_TR(0x40d230);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40d234:{NFSU2_TR(0x40d234);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40d235:{NFSU2_TR(0x40d235);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40d239:{NFSU2_TR(0x40d239);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40d23f:{NFSU2_TR(0x40d23f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40d250:L40d250:{c.instructions+=6;NFSU2_TR(0x40d250);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40d254:{NFSU2_TR(0x40d254);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40d257:{NFSU2_TR(0x40d257);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B40d25a:{NFSU2_TR(0x40d25a);
w1(R+0,u8(~u32(r1(R+0))));
}
B40d25c:{NFSU2_TR(0x40d25c);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40d25f:{NFSU2_TR(0x40d25f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40d270:L40d270:{c.instructions+=3;NFSU2_TR(0x40d270);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d271:{NFSU2_TR(0x40d271);
__builtin_memmove((R+24),(R+4),4);
}
B40d273:{NFSU2_TR(0x40d273);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d278ull));
{goto L40d2a0;}
}
B40d278:L40d278:{c.instructions+=2;NFSU2_TR(0x40d278);
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
B40d27d:{NFSU2_TR(0x40d27d);
if(r1(R+518)){{goto L40d28e;}}
}
B40d27f:L40d27f:{c.instructions+=4;NFSU2_TR(0x40d27f);
__builtin_memmove((R+0),gp(0x81cbb4),4);
}
B40d284:{NFSU2_TR(0x40d284);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d285:{NFSU2_TR(0x40d285);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d286:{NFSU2_TR(0x40d286);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d28bull));
TAIL_STATIC(0x43f920u,43f);
}
B40d28b:L40d28b:{c.instructions+=1;NFSU2_TR(0x40d28b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40d28e:L40d28e:{c.instructions+=3;NFSU2_TR(0x40d28e);
__builtin_memmove((R+0),(R+24),4);
}
B40d290:{NFSU2_TR(0x40d290);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40d291:{NFSU2_TR(0x40d291);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40d2a0:L40d2a0:{c.instructions+=4;NFSU2_TR(0x40d2a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40d2a3:{NFSU2_TR(0x40d2a3);
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
B40d2a5:{NFSU2_TR(0x40d2a5);
u8 U[4];
w4(U+0,u32(0x7846f0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B40d2ab:{NFSU2_TR(0x40d2ab);
if(r1(R+518)){{goto L40d2b4;}}
}
B40d2ad:L40d2ad:{c.instructions+=1;NFSU2_TR(0x40d2ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40d2b4:L40d2b4:{c.instructions+=1;NFSU2_TR(0x40d2b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40d2c0:L40d2c0:{c.instructions+=13;NFSU2_TR(0x40d2c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40d2c4:{NFSU2_TR(0x40d2c4);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B40d2c8:{NFSU2_TR(0x40d2c8);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B40d2cc:{NFSU2_TR(0x40d2cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40d2d0:{NFSU2_TR(0x40d2d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40d2d4:{NFSU2_TR(0x40d2d4);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40d2d8:{NFSU2_TR(0x40d2d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40d2dc:{NFSU2_TR(0x40d2dc);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40d2e2:{NFSU2_TR(0x40d2e2);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40d2e6:{NFSU2_TR(0x40d2e6);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40d2ec:{NFSU2_TR(0x40d2ec);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40d2ee:{NFSU2_TR(0x40d2ee);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40d2f1:{NFSU2_TR(0x40d2f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40d300:L40d300:{c.instructions+=2;NFSU2_TR(0x40d300);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40d304:{NFSU2_TR(0x40d304);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d309ull));
{goto L40d310;}
}
B40d309:L40d309:{c.instructions+=1;NFSU2_TR(0x40d309);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40d310:L40d310:{c.instructions+=4;NFSU2_TR(0x40d310);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d311:{NFSU2_TR(0x40d311);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d312:{NFSU2_TR(0x40d312);
__builtin_memmove((R+24),(R+4),4);
}
B40d314:{NFSU2_TR(0x40d314);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d319ull));
TAIL_STATIC(0x5d89f0u,5d8);
}
B40d319:L40d319:{c.instructions+=2;NFSU2_TR(0x40d319);
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
B40d31b:{NFSU2_TR(0x40d31b);
if(r1(R+518)){{goto L40d337;}}
}
B40d31d:L40d31d:{c.instructions+=9;NFSU2_TR(0x40d31d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B40d321:{NFSU2_TR(0x40d321);
u8 U[45];
w4(U+37,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
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
B40d324:{NFSU2_TR(0x40d324);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40d328:{NFSU2_TR(0x40d328);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40d329:{NFSU2_TR(0x40d329);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40d32d:{NFSU2_TR(0x40d32d);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40d333:{NFSU2_TR(0x40d333);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B40d335:{NFSU2_TR(0x40d335);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40d336:{NFSU2_TR(0x40d336);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40d337:L40d337:{c.instructions+=9;NFSU2_TR(0x40d337);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B40d33b:{NFSU2_TR(0x40d33b);
u8 U[45];
w4(U+37,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+4),4);
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
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
B40d33e:{NFSU2_TR(0x40d33e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40d342:{NFSU2_TR(0x40d342);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40d343:{NFSU2_TR(0x40d343);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40d347:{NFSU2_TR(0x40d347);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40d34d:{NFSU2_TR(0x40d34d);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B40d34f:{NFSU2_TR(0x40d34f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40d350:{NFSU2_TR(0x40d350);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40d360:L40d360:{c.instructions+=8;NFSU2_TR(0x40d360);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40d364:{NFSU2_TR(0x40d364);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40d368:{NFSU2_TR(0x40d368);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40d36c:{NFSU2_TR(0x40d36c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d36d:{NFSU2_TR(0x40d36d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d36e:{NFSU2_TR(0x40d36e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40d372:{NFSU2_TR(0x40d372);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d373:{NFSU2_TR(0x40d373);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d378ull));
TAIL_STATIC(0x5dd430u,5dd);
}
B40d378:L40d378:{c.instructions+=1;NFSU2_TR(0x40d378);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40d380:L40d380:{c.instructions+=8;NFSU2_TR(0x40d380);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40d384:{NFSU2_TR(0x40d384);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40d388:{NFSU2_TR(0x40d388);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40d38c:{NFSU2_TR(0x40d38c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d38d:{NFSU2_TR(0x40d38d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d38e:{NFSU2_TR(0x40d38e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40d392:{NFSU2_TR(0x40d392);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d393:{NFSU2_TR(0x40d393);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d398ull));
TAIL_STATIC(0x5dd490u,5dd);
}
B40d398:L40d398:{c.instructions+=1;NFSU2_TR(0x40d398);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40d3a0:L40d3a0:{c.instructions+=3;NFSU2_TR(0x40d3a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40d3a4:{NFSU2_TR(0x40d3a4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B40d3a6:{NFSU2_TR(0x40d3a6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40d3b1;}}
}
B40d3a8:L40d3a8:{c.instructions+=2;NFSU2_TR(0x40d3a8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40d3ab:{NFSU2_TR(0x40d3ab);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40d3b1;}}
}
B40d3ad:L40d3ad:{c.instructions+=2;NFSU2_TR(0x40d3ad);
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
B40d3ae:{NFSU2_TR(0x40d3ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40d3b1:L40d3b1:{c.instructions+=2;NFSU2_TR(0x40d3b1);
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
B40d3b4:{NFSU2_TR(0x40d3b4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40d3be;}}
}
B40d3b6:L40d3b6:{c.instructions+=2;NFSU2_TR(0x40d3b6);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40d3b9:{NFSU2_TR(0x40d3b9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40d3be;}}
}
B40d3bb:L40d3bb:{c.instructions+=1;NFSU2_TR(0x40d3bb);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40d3be:L40d3be:{c.instructions+=1;NFSU2_TR(0x40d3be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40d3d0:L40d3d0:{c.instructions+=7;NFSU2_TR(0x40d3d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B40d3d3:{NFSU2_TR(0x40d3d3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d3d4:{NFSU2_TR(0x40d3d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40d3d8:{NFSU2_TR(0x40d3d8);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B40d3dc:{NFSU2_TR(0x40d3dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d3dd:{NFSU2_TR(0x40d3dd);
__builtin_memmove((R+4),(R+24),4);
}
B40d3df:{NFSU2_TR(0x40d3df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d3e4ull));
TAIL_STATIC(0x401aa0u,401);
}
B40d3e4:L40d3e4:{c.instructions+=11;NFSU2_TR(0x40d3e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40d3e8:{NFSU2_TR(0x40d3e8);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40d3eb:{NFSU2_TR(0x40d3eb);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40d3ee:{NFSU2_TR(0x40d3ee);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40d3f2:{NFSU2_TR(0x40d3f2);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40d3f4:{NFSU2_TR(0x40d3f4);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40d3f6:{NFSU2_TR(0x40d3f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40d3f7:{NFSU2_TR(0x40d3f7);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40d3fb:{NFSU2_TR(0x40d3fb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40d3fd:{NFSU2_TR(0x40d3fd);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40d400:{NFSU2_TR(0x40d400);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40d410:L40d410:{c.instructions+=7;NFSU2_TR(0x40d410);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B40d413:{NFSU2_TR(0x40d413);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d414:{NFSU2_TR(0x40d414);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40d418:{NFSU2_TR(0x40d418);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B40d41c:{NFSU2_TR(0x40d41c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d41d:{NFSU2_TR(0x40d41d);
__builtin_memmove((R+4),(R+24),4);
}
B40d41f:{NFSU2_TR(0x40d41f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d424ull));
TAIL_STATIC(0x401aa0u,401);
}
B40d424:L40d424:{c.instructions+=11;NFSU2_TR(0x40d424);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40d428:{NFSU2_TR(0x40d428);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40d42a:{NFSU2_TR(0x40d42a);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40d42c:{NFSU2_TR(0x40d42c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40d430:{NFSU2_TR(0x40d430);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40d433:{NFSU2_TR(0x40d433);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40d436:{NFSU2_TR(0x40d436);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40d437:{NFSU2_TR(0x40d437);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40d43b:{NFSU2_TR(0x40d43b);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B40d43d:{NFSU2_TR(0x40d43d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40d440:{NFSU2_TR(0x40d440);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40d450:L40d450:{c.instructions+=3;NFSU2_TR(0x40d450);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40d454:{NFSU2_TR(0x40d454);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B40d456:{NFSU2_TR(0x40d456);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40d460;}}
}
B40d458:L40d458:{c.instructions+=2;NFSU2_TR(0x40d458);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40d45b:{NFSU2_TR(0x40d45b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40d460;}}
}
B40d45d:L40d45d:{c.instructions+=2;NFSU2_TR(0x40d45d);
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
B40d45e:{NFSU2_TR(0x40d45e);
{goto L40d46d;}
}
B40d460:L40d460:{c.instructions+=2;NFSU2_TR(0x40d460);
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
B40d463:{NFSU2_TR(0x40d463);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40d46d;}}
}
B40d465:L40d465:{c.instructions+=2;NFSU2_TR(0x40d465);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40d468:{NFSU2_TR(0x40d468);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40d46d;}}
}
B40d46a:L40d46a:{c.instructions+=1;NFSU2_TR(0x40d46a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40d46d:L40d46d:{c.instructions+=7;NFSU2_TR(0x40d46d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40d471:{NFSU2_TR(0x40d471);
u8 U[13];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(r1(U+12)));
}
B40d476:{NFSU2_TR(0x40d476);
u8 U[45];
w4(U+37,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+8),4);
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+8))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B40d479:{NFSU2_TR(0x40d479);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40d47d:{NFSU2_TR(0x40d47d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40d481:{NFSU2_TR(0x40d481);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40d487:{NFSU2_TR(0x40d487);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40d490:L40d490:{c.instructions+=5;NFSU2_TR(0x40d490);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40d494:{NFSU2_TR(0x40d494);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40d497:{NFSU2_TR(0x40d497);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B40d49a:{NFSU2_TR(0x40d49a);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40d49d:{NFSU2_TR(0x40d49d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40d4a0:L40d4a0:{c.instructions+=13;NFSU2_TR(0x40d4a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40d4a6:{NFSU2_TR(0x40d4a6);
{u32 ea_=u32(u32(7878616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40d4ac:{NFSU2_TR(0x40d4ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40d4b0:{NFSU2_TR(0x40d4b0);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40d4b3:{NFSU2_TR(0x40d4b3);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B40d4b5:{NFSU2_TR(0x40d4b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B40d4b7:{NFSU2_TR(0x40d4b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40d4ba:{NFSU2_TR(0x40d4ba);
{u32 ea_=u32(u32(8293992u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40d4c0:{NFSU2_TR(0x40d4c0);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B40d4c2:{NFSU2_TR(0x40d4c2);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40d4c8:{NFSU2_TR(0x40d4c8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40d4ca:{NFSU2_TR(0x40d4ca);
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
B40d4cd:{NFSU2_TR(0x40d4cd);
if(r1(R+514)){{goto L40d4e3;}}
}
B40d4cf:L40d4cf:{c.instructions+=3;NFSU2_TR(0x40d4cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40d4d2:{NFSU2_TR(0x40d4d2);
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
B40d4d4:{NFSU2_TR(0x40d4d4);
if(r1(R+518)){{goto L40d4dd;}}
}
B40d4d6:L40d4d6:{c.instructions+=2;NFSU2_TR(0x40d4d6);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7fffffffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffffffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40d4db:{NFSU2_TR(0x40d4db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40d4e6;}}
}
B40d4dd:L40d4dd:{c.instructions+=1;NFSU2_TR(0x40d4dd);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B40d4e3:L40d4e3:{c.instructions+=1;NFSU2_TR(0x40d4e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40d4e6:L40d4e6:{c.instructions+=1;NFSU2_TR(0x40d4e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40d4f0:L40d4f0:{c.instructions+=6;NFSU2_TR(0x40d4f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d4f1:{NFSU2_TR(0x40d4f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d4f2:{NFSU2_TR(0x40d4f2);
__builtin_memmove((R+24),(R+4),4);
}
B40d4f4:{NFSU2_TR(0x40d4f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40d4f7:{NFSU2_TR(0x40d4f7);
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
B40d4f9:{NFSU2_TR(0x40d4f9);
if(r1(R+518)){{goto L40d53b;}}
}
B40d4fb:L40d4fb:{c.instructions+=11;NFSU2_TR(0x40d4fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B40d4fe:{NFSU2_TR(0x40d4fe);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B40d500:{NFSU2_TR(0x40d500);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40d502:{NFSU2_TR(0x40d502);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40d505:{NFSU2_TR(0x40d505);
__builtin_memmove((R+0),(R+518),1);
}
B40d508:{NFSU2_TR(0x40d508);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d509:{NFSU2_TR(0x40d509);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x60ull))));
}
B40d50c:{NFSU2_TR(0x40d50c);
__builtin_memmove((R+28),(R+0),4);
}
B40d50e:{NFSU2_TR(0x40d50e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d50f:{NFSU2_TR(0x40d50f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d510:{NFSU2_TR(0x40d510);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d515ull));
TAIL_STATIC(0x40cc40u,40c);
}
B40d515:L40d515:{c.instructions+=5;NFSU2_TR(0x40d515);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40d519:{NFSU2_TR(0x40d519);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40d51c:{NFSU2_TR(0x40d51c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40d51e:{NFSU2_TR(0x40d51e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40d51f:{NFSU2_TR(0x40d51f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40d52e;}}
}
B40d521:L40d521:{c.instructions+=3;NFSU2_TR(0x40d521);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40d525:{NFSU2_TR(0x40d525);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d526:{NFSU2_TR(0x40d526);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d52bull));
TAIL_STATIC(0x401b70u,401);
}
B40d52b:L40d52b:{c.instructions+=3;NFSU2_TR(0x40d52b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40d52c:{NFSU2_TR(0x40d52c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40d52d:{NFSU2_TR(0x40d52d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40d52e:L40d52e:{c.instructions+=3;NFSU2_TR(0x40d52e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40d532:{NFSU2_TR(0x40d532);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d533:{NFSU2_TR(0x40d533);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d538ull));
TAIL_STATIC(0x401bc0u,401);
}
B40d538:L40d538:{c.instructions+=3;NFSU2_TR(0x40d538);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40d539:{NFSU2_TR(0x40d539);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40d53a:{NFSU2_TR(0x40d53a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40d53b:L40d53b:{c.instructions+=4;NFSU2_TR(0x40d53b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40d541:{NFSU2_TR(0x40d541);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40d542:{NFSU2_TR(0x40d542);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40d543:{NFSU2_TR(0x40d543);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40d550:L40d550:{c.instructions+=13;NFSU2_TR(0x40d550);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d551:{NFSU2_TR(0x40d551);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d552:{NFSU2_TR(0x40d552);
__builtin_memmove((R+24),(R+4),4);
}
B40d554:{NFSU2_TR(0x40d554);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40d557:{NFSU2_TR(0x40d557);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B40d55b:{NFSU2_TR(0x40d55b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40d55f:{NFSU2_TR(0x40d55f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40d562:{NFSU2_TR(0x40d562);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40d566:{NFSU2_TR(0x40d566);
{u32 ea_=u32(u32(7877780u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40d56c:{NFSU2_TR(0x40d56c);
{u32 ea_=u32(u32(7883508u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40d572:{NFSU2_TR(0x40d572);
{u32 ea_=u32(r4(R+24)+u32(1776u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40d578:{NFSU2_TR(0x40d578);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B40d57a:{NFSU2_TR(0x40d57a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d57dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B40d57d:L40d57d:{c.instructions+=2;NFSU2_TR(0x40d57d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B40d580:{NFSU2_TR(0x40d580);
w4(R+4,u32(0x10ull));
}
B40d585:L40d585:{c.instructions+=4;NFSU2_TR(0x40d585);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0xfffffffcull))));
s4(u32(r4(R+0)),r4(U+0));
}
B40d588:{NFSU2_TR(0x40d588);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B40d58b:{NFSU2_TR(0x40d58b);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B40d58c:{NFSU2_TR(0x40d58c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40d585u);}goto L40d585;}}
}
B40d58e:L40d58e:{c.instructions+=9;NFSU2_TR(0x40d58e);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B40d590:{NFSU2_TR(0x40d590);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x710ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40d596:{NFSU2_TR(0x40d596);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x77cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40d59c:{NFSU2_TR(0x40d59c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40d59f:{NFSU2_TR(0x40d59f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40d5a5:{NFSU2_TR(0x40d5a5);
__builtin_memmove((R+8),(R+4),4);
}
B40d5a7:{NFSU2_TR(0x40d5a7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d5a8:{NFSU2_TR(0x40d5a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40d5ac:{NFSU2_TR(0x40d5ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d5b1ull));
TAIL_STATIC(0x5d42d0u,5d4);
}
B40d5b1:L40d5b1:{c.instructions+=5;NFSU2_TR(0x40d5b1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40d5b4:{NFSU2_TR(0x40d5b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40d5ba:{NFSU2_TR(0x40d5ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40d5bb:{NFSU2_TR(0x40d5bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40d5bc:{NFSU2_TR(0x40d5bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40d5c0:L40d5c0:{c.instructions+=7;NFSU2_TR(0x40d5c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B40d5c3:{NFSU2_TR(0x40d5c3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d5c4:{NFSU2_TR(0x40d5c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40d5c8:{NFSU2_TR(0x40d5c8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d5c9:{NFSU2_TR(0x40d5c9);
__builtin_memmove((R+28),(R+4),4);
}
B40d5cb:{NFSU2_TR(0x40d5cb);
__builtin_memmove((R+4),(R+24),4);
}
B40d5cd:{NFSU2_TR(0x40d5cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d5d2ull));
TAIL_STATIC(0x60bec0u,60b);
}
B40d5d2:L40d5d2:{c.instructions+=2;NFSU2_TR(0x40d5d2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40d5d4:{NFSU2_TR(0x40d5d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40d7e9;}}
}
B40d5da:L40d5da:{c.instructions+=2;NFSU2_TR(0x40d5da);
__builtin_memmove((R+4),(R+24),4);
}
B40d5dc:{NFSU2_TR(0x40d5dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d5e1ull));
TAIL_STATIC(0x6148c0u,614);
}
B40d5e1:L40d5e1:{c.instructions+=2;NFSU2_TR(0x40d5e1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40d5e3:{NFSU2_TR(0x40d5e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40d7e9;}}
}
B40d5e9:L40d5e9:{c.instructions+=2;NFSU2_TR(0x40d5e9);
__builtin_memmove((R+4),(R+24),4);
}
B40d5eb:{NFSU2_TR(0x40d5eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d5f0ull));
TAIL_STATIC(0x614880u,614);
}
B40d5f0:L40d5f0:{c.instructions+=2;NFSU2_TR(0x40d5f0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40d5f2:{NFSU2_TR(0x40d5f2);
if(r1(R+518)){{goto L40d7e9;}}
}
B40d5f8:L40d5f8:{c.instructions+=4;NFSU2_TR(0x40d5f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40d5fe:{NFSU2_TR(0x40d5fe);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d5ff:{NFSU2_TR(0x40d5ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d600:{NFSU2_TR(0x40d600);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d605ull));
TAIL_STATIC(0x60c120u,60c);
}
B40d605:L40d605:{c.instructions+=6;NFSU2_TR(0x40d605);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B40d609:{NFSU2_TR(0x40d609);
__builtin_memmove((R+24),(R+0),4);
}
B40d60b:{NFSU2_TR(0x40d60b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40d60e:{NFSU2_TR(0x40d60e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40d611:{NFSU2_TR(0x40d611);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B40d614:{NFSU2_TR(0x40d614);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40d62a;}}
}
B40d616:L40d616:{c.instructions+=3;NFSU2_TR(0x40d616);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d617:{NFSU2_TR(0x40d617);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d618:{NFSU2_TR(0x40d618);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d61dull));
TAIL_STATIC(0x403820u,403);
}
B40d61d:L40d61d:{c.instructions+=3;NFSU2_TR(0x40d61d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B40d620:{NFSU2_TR(0x40d620);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40d622:{NFSU2_TR(0x40d622);
if(r1(R+518)){{goto L40d7e8;}}
}
B40d628:L40d628:{c.instructions+=1;NFSU2_TR(0x40d628);
{goto L40d633;}
}
B40d62a:L40d62a:{c.instructions+=2;NFSU2_TR(0x40d62a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B40d62d:{NFSU2_TR(0x40d62d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40d7e8;}}
}
B40d633:L40d633:{c.instructions+=8;NFSU2_TR(0x40d633);
{u32 ea_=u32(u32(7877924u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40d639:{NFSU2_TR(0x40d639);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d63a:{NFSU2_TR(0x40d63a);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B40d63c:{NFSU2_TR(0x40d63c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d63d:{NFSU2_TR(0x40d63d);
__builtin_memmove((R+4),gp(0x890080),4);
}
B40d643:{NFSU2_TR(0x40d643);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B40d648:{NFSU2_TR(0x40d648);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40d64b:{NFSU2_TR(0x40d64b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d650ull));
TAIL_STATIC(0x5ea500u,5ea);
}
B40d650:L40d650:{c.instructions+=9;NFSU2_TR(0x40d650);
{u32 ea_=u32(u32(7877920u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40d656:{NFSU2_TR(0x40d656);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d657:{NFSU2_TR(0x40d657);
__builtin_memmove((R+4),gp(0x890080),4);
}
B40d65d:{NFSU2_TR(0x40d65d);
{u32 ea_=u32(u32(7877924u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40d663:{NFSU2_TR(0x40d663);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40d667:{NFSU2_TR(0x40d667);
{u32 ea_=u32(u32(7877932u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40d66d:{NFSU2_TR(0x40d66d);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B40d66f:{NFSU2_TR(0x40d66f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40d672:{NFSU2_TR(0x40d672);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d677ull));
TAIL_STATIC(0x5ea500u,5ea);
}
B40d677:L40d677:{c.instructions+=9;NFSU2_TR(0x40d677);
{u32 ea_=u32(u32(7877928u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40d67d:{NFSU2_TR(0x40d67d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d67e:{NFSU2_TR(0x40d67e);
__builtin_memmove((R+4),gp(0x890080),4);
}
B40d684:{NFSU2_TR(0x40d684);
{u32 ea_=u32(u32(7877932u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40d68a:{NFSU2_TR(0x40d68a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40d68e:{NFSU2_TR(0x40d68e);
{u32 ea_=u32(u32(7877924u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40d694:{NFSU2_TR(0x40d694);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B40d696:{NFSU2_TR(0x40d696);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40d699:{NFSU2_TR(0x40d699);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d69eull));
TAIL_STATIC(0x5ea500u,5ea);
}
B40d69e:L40d69e:{c.instructions+=6;NFSU2_TR(0x40d69e);
{u32 ea_=u32(u32(7877920u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40d6a4:{NFSU2_TR(0x40d6a4);
__builtin_memmove((R+4),gp(0x890080),4);
}
B40d6aa:{NFSU2_TR(0x40d6aa);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d6af:{NFSU2_TR(0x40d6af);
{u32 ea_=u32(u32(7877924u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40d6b5:{NFSU2_TR(0x40d6b5);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40d6b9:{NFSU2_TR(0x40d6b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d6beull));
TAIL_STATIC(0x5ea500u,5ea);
}
B40d6be:L40d6be:{c.instructions+=6;NFSU2_TR(0x40d6be);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40d6c4:{NFSU2_TR(0x40d6c4);
w1(R+12,u8(0x1ull));
}
B40d6c6:{NFSU2_TR(0x40d6c6);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40d6ca:{NFSU2_TR(0x40d6ca);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40d6cc:{NFSU2_TR(0x40d6cc);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40d6cf:{NFSU2_TR(0x40d6cf);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L40d6d6;}}
}
B40d6d1:L40d6d1:{c.instructions+=1;NFSU2_TR(0x40d6d1);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B40d6d6:L40d6d6:{c.instructions+=5;NFSU2_TR(0x40d6d6);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40d6d9:{NFSU2_TR(0x40d6d9);
{u32 ea_=u32(u32(7877936u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40d6df:{NFSU2_TR(0x40d6df);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40d6e1:{NFSU2_TR(0x40d6e1);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40d6e4:{NFSU2_TR(0x40d6e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40d704;}}
}
B40d6e6:L40d6e6:{c.instructions+=7;NFSU2_TR(0x40d6e6);
{u32 ea_=u32(u32(7877920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40d6ec:{NFSU2_TR(0x40d6ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40d6f4:{NFSU2_TR(0x40d6f4);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B40d6f6:{NFSU2_TR(0x40d6f6);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40d6fa:{NFSU2_TR(0x40d6fa);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40d6fe:{NFSU2_TR(0x40d6fe);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40d702:{NFSU2_TR(0x40d702);
{goto L40d75e;}
}
B40d704:L40d704:{c.instructions+=4;NFSU2_TR(0x40d704);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40d707:{NFSU2_TR(0x40d707);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40d70a:{NFSU2_TR(0x40d70a);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B40d70e:{NFSU2_TR(0x40d70e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40d72a;}}
}
B40d710:L40d710:{c.instructions+=5;NFSU2_TR(0x40d710);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40d713:{NFSU2_TR(0x40d713);
{u32 ea_=u32(u32(7877940u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40d719:{NFSU2_TR(0x40d719);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40d71b:{NFSU2_TR(0x40d71b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40d71e:{NFSU2_TR(0x40d71e);
if(r1(R+514)){{goto L40d72a;}}
}
B40d720:L40d720:{c.instructions+=2;NFSU2_TR(0x40d720);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40d728:{NFSU2_TR(0x40d728);
{goto L40d75e;}
}
B40d72a:L40d72a:{c.instructions+=3;NFSU2_TR(0x40d72a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B40d72e:{NFSU2_TR(0x40d72e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e970ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B40d735:{NFSU2_TR(0x40d735);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d73aull));
TAIL_STATIC(0x614880u,614);
}
B40d73a:L40d73a:{c.instructions+=2;NFSU2_TR(0x40d73a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40d73c:{NFSU2_TR(0x40d73c);
if(r1(R+518)){{goto L40d748;}}
}
B40d73e:L40d73e:{c.instructions+=2;NFSU2_TR(0x40d73e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f400000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40d746:{NFSU2_TR(0x40d746);
{goto L40d75e;}
}
B40d748:L40d748:{c.instructions+=3;NFSU2_TR(0x40d748);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x5ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B40d74c:{NFSU2_TR(0x40d74c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x3d4ccccdull));
s4(u32(r4(U+0)),r4(U+4));
}
B40d754:{NFSU2_TR(0x40d754);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L40d75e;}}
}
B40d756:L40d756:{c.instructions+=1;NFSU2_TR(0x40d756);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x3d99999aull));
s4(u32(r4(U+0)),r4(U+4));
}
B40d75e:L40d75e:{c.instructions+=3;NFSU2_TR(0x40d75e);
__builtin_memmove((R+4),gp(0x890080),4);
}
B40d764:{NFSU2_TR(0x40d764);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d769:{NFSU2_TR(0x40d769);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d76eull));
TAIL_STATIC(0x5ea500u,5ea);
}
B40d76e:L40d76e:{c.instructions+=4;NFSU2_TR(0x40d76e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40d772:{NFSU2_TR(0x40d772);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40d774:{NFSU2_TR(0x40d774);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40d777:{NFSU2_TR(0x40d777);
if(r1(R+514)){{goto L40d7f1;}}
}
B40d779:L40d779:{c.instructions+=7;NFSU2_TR(0x40d779);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40d77c:{NFSU2_TR(0x40d77c);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40d780:{NFSU2_TR(0x40d780);
{u32 ea_=u32(u32(7877936u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40d786:{NFSU2_TR(0x40d786);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f666666ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40d78e:{NFSU2_TR(0x40d78e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40d790:{NFSU2_TR(0x40d790);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40d793:{NFSU2_TR(0x40d793);
if(r1(R+518)){{goto L40d79d;}}
}
B40d795:L40d795:{c.instructions+=1;NFSU2_TR(0x40d795);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40d79d:L40d79d:{c.instructions+=3;NFSU2_TR(0x40d79d);
__builtin_memmove((R+4),gp(0x890080),4);
}
B40d7a3:{NFSU2_TR(0x40d7a3);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d7a8:{NFSU2_TR(0x40d7a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d7adull));
TAIL_STATIC(0x5ea500u,5ea);
}
B40d7ad:L40d7ad:{c.instructions+=5;NFSU2_TR(0x40d7ad);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40d7b1:{NFSU2_TR(0x40d7b1);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40d7b5:{NFSU2_TR(0x40d7b5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40d7b7:{NFSU2_TR(0x40d7b7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40d7ba:{NFSU2_TR(0x40d7ba);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L40d7c1;}}
}
B40d7bc:L40d7bc:{c.instructions+=1;NFSU2_TR(0x40d7bc);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B40d7c1:L40d7c1:{c.instructions+=14;NFSU2_TR(0x40d7c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40d7c5:{NFSU2_TR(0x40d7c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40d7c9:{NFSU2_TR(0x40d7c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40d7cd:{NFSU2_TR(0x40d7cd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d7ce:{NFSU2_TR(0x40d7ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40d7d2:{NFSU2_TR(0x40d7d2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d7d3:{NFSU2_TR(0x40d7d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40d7d7:{NFSU2_TR(0x40d7d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d7d8:{NFSU2_TR(0x40d7d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40d7dc:{NFSU2_TR(0x40d7dc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d7dd:{NFSU2_TR(0x40d7dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40d7e0:{NFSU2_TR(0x40d7e0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d7e1:{NFSU2_TR(0x40d7e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d7e2:{NFSU2_TR(0x40d7e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d7e7ull));
TAIL_STATIC(0x5ec160u,5ec);
}
B40d7e7:L40d7e7:{c.instructions+=1;NFSU2_TR(0x40d7e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40d7e8:L40d7e8:{c.instructions+=1;NFSU2_TR(0x40d7e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40d7e9:L40d7e9:{c.instructions+=4;NFSU2_TR(0x40d7e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40d7ea:{NFSU2_TR(0x40d7ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40d7eb:{NFSU2_TR(0x40d7eb);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40d7ee:{NFSU2_TR(0x40d7ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40d7f1:L40d7f1:{c.instructions+=2;NFSU2_TR(0x40d7f1);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B40d7f6:{NFSU2_TR(0x40d7f6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40d7c1u);}goto L40d7c1;}
}
B40d800:L40d800:{c.instructions+=4;NFSU2_TR(0x40d800);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40d803:{NFSU2_TR(0x40d803);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B40d805:{NFSU2_TR(0x40d805);
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
B40d807:{NFSU2_TR(0x40d807);
if(r1(R+518)){{goto L40d81c;}}
}
B40d809:L40d809:{c.instructions+=3;NFSU2_TR(0x40d809);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B40d80c:{NFSU2_TR(0x40d80c);
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
B40d80e:{NFSU2_TR(0x40d80e);
if(r1(R+518)){{goto L40d81c;}}
}
B40d810:L40d810:{c.instructions+=4;NFSU2_TR(0x40d810);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d811:{NFSU2_TR(0x40d811);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40d815:{NFSU2_TR(0x40d815);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x428ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40d81b:{NFSU2_TR(0x40d81b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40d81c:L40d81c:{c.instructions+=2;NFSU2_TR(0x40d81c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x744ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40d822:{NFSU2_TR(0x40d822);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40d830:L40d830:{c.instructions+=3;NFSU2_TR(0x40d830);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40d833:{NFSU2_TR(0x40d833);
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
B40d835:{NFSU2_TR(0x40d835);
if(r1(R+518)){{goto L40d848;}}
}
B40d837:L40d837:{c.instructions+=3;NFSU2_TR(0x40d837);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B40d83a:{NFSU2_TR(0x40d83a);
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
B40d83c:{NFSU2_TR(0x40d83c);
if(r1(R+518)){{goto L40d848;}}
}
B40d83e:L40d83e:{c.instructions+=1;NFSU2_TR(0x40d83e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x428ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40d848:L40d848:{c.instructions+=2;NFSU2_TR(0x40d848);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x744ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B40d84f:{NFSU2_TR(0x40d84f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40d850:L40d850:{c.instructions+=9;NFSU2_TR(0x40d850);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40d853:{NFSU2_TR(0x40d853);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d854:{NFSU2_TR(0x40d854);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d855:{NFSU2_TR(0x40d855);
__builtin_memmove((R+24),(R+4),4);
}
B40d857:{NFSU2_TR(0x40d857);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40d859:{NFSU2_TR(0x40d859);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d85a:{NFSU2_TR(0x40d85a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B40d85d:{NFSU2_TR(0x40d85d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40d860:{NFSU2_TR(0x40d860);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d863ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B40d863:L40d863:{c.instructions+=11;NFSU2_TR(0x40d863);
__builtin_memmove((R+8),gp(0x81cb60),4);
}
B40d869:{NFSU2_TR(0x40d869);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B40d86b:{NFSU2_TR(0x40d86b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40d86d:{NFSU2_TR(0x40d86d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+4),(U+1),1);
}
B40d870:{NFSU2_TR(0x40d870);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B40d871:{NFSU2_TR(0x40d871);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B40d873:{NFSU2_TR(0x40d873);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x68ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B40d876:{NFSU2_TR(0x40d876);
__builtin_memmove((R+4),(R+12),4);
}
B40d878:{NFSU2_TR(0x40d878);
{u32 ea_=u32(r4(R+8)+r4(R+0)+u32(1392u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40d87f:{NFSU2_TR(0x40d87f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40d883:{NFSU2_TR(0x40d883);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d888ull));
TAIL_STATIC(0x592480u,592);
}
B40d888:L40d888:{c.instructions+=5;NFSU2_TR(0x40d888);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40d88c:{NFSU2_TR(0x40d88c);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B40d891:{NFSU2_TR(0x40d891);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40d893:{NFSU2_TR(0x40d893);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40d896:{NFSU2_TR(0x40d896);
if(r1(R+518)){{goto L40d89d;}}
}
B40d898:L40d898:{c.instructions+=1;NFSU2_TR(0x40d898);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B40d89d:L40d89d:{c.instructions+=2;NFSU2_TR(0x40d89d);
__builtin_memmove((R+4),(R+12),4);
}
B40d89f:{NFSU2_TR(0x40d89f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d8a4ull));
TAIL_STATIC(0x59fa30u,59f);
}
B40d8a4:L40d8a4:{c.instructions+=2;NFSU2_TR(0x40d8a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40d8a6:{NFSU2_TR(0x40d8a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40d8b4;}}
}
B40d8a8:L40d8a8:{c.instructions+=3;NFSU2_TR(0x40d8a8);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B40d8ac:{NFSU2_TR(0x40d8ac);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40d8ae:{NFSU2_TR(0x40d8ae);
if(r1(R+518)){{goto L40d95f;}}
}
B40d8b4:L40d8b4:{c.instructions+=2;NFSU2_TR(0x40d8b4);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B40d8bb:{NFSU2_TR(0x40d8bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40d95f;}}
}
B40d8c1:L40d8c1:{c.instructions+=7;NFSU2_TR(0x40d8c1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d8c2:{NFSU2_TR(0x40d8c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B40d8c5:{NFSU2_TR(0x40d8c5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B40d8c8:{NFSU2_TR(0x40d8c8);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B40d8ca:{NFSU2_TR(0x40d8ca);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B40d8cc:{NFSU2_TR(0x40d8cc);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40d8ce:{NFSU2_TR(0x40d8ce);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L40d8f4;}}
}
B40d8d0:L40d8d0:{c.instructions+=2;NFSU2_TR(0x40d8d0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40d8d2:{NFSU2_TR(0x40d8d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40d968;}}
}
B40d8d8:L40d8d8:{c.instructions+=3;NFSU2_TR(0x40d8d8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d8d9:{NFSU2_TR(0x40d8d9);
__builtin_memmove((R+4),(R+20),4);
}
B40d8db:{NFSU2_TR(0x40d8db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d8e0ull));
TAIL_STATIC(0x5a0820u,5a0);
}
B40d8e0:L40d8e0:{c.instructions+=2;NFSU2_TR(0x40d8e0);
__builtin_memmove((R+4),(R+0),4);
}
B40d8e2:{NFSU2_TR(0x40d8e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d8e7ull));
TAIL_STATIC(0x5a0160u,5a0);
}
B40d8e7:L40d8e7:{c.instructions+=4;NFSU2_TR(0x40d8e7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B40d8eb:{NFSU2_TR(0x40d8eb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B40d8ec:{NFSU2_TR(0x40d8ec);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40d8ee:{NFSU2_TR(0x40d8ee);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40d8d0u);}goto L40d8d0;}}
}
B40d8f0:L40d8f0:{c.instructions+=2;NFSU2_TR(0x40d8f0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40d8f2:{NFSU2_TR(0x40d8f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40d968;}}
}
B40d8f4:L40d8f4:{c.instructions+=2;NFSU2_TR(0x40d8f4);
__builtin_memmove((R+4),(R+24),4);
}
B40d8f6:{NFSU2_TR(0x40d8f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d8fbull));
TAIL_STATIC(0x402660u,402);
}
B40d8fb:L40d8fb:{c.instructions+=2;NFSU2_TR(0x40d8fb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40d8fd:{NFSU2_TR(0x40d8fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40d968;}}
}
B40d8ff:L40d8ff:{c.instructions+=4;NFSU2_TR(0x40d8ff);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B40d904:{NFSU2_TR(0x40d904);
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
B40d906:{NFSU2_TR(0x40d906);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B40d90c:{NFSU2_TR(0x40d90c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40d917;}}
}
B40d90e:L40d90e:{c.instructions+=3;NFSU2_TR(0x40d90e);
__builtin_memmove((R+0),gp(0x890108),4);
}
B40d913:{NFSU2_TR(0x40d913);
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
B40d915:{NFSU2_TR(0x40d915);
if(r1(R+518)){{goto L40d93c;}}
}
B40d917:L40d917:{c.instructions+=3;NFSU2_TR(0x40d917);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B40d919:{NFSU2_TR(0x40d919);
__builtin_memmove((R+4),(R+24),4);
}
B40d91b:{NFSU2_TR(0x40d91b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d91eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B40d91e:L40d91e:{c.instructions+=10;NFSU2_TR(0x40d91e);
__builtin_memmove((R+8),gp(0x81cb60),4);
}
B40d924:{NFSU2_TR(0x40d924);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B40d926:{NFSU2_TR(0x40d926);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40d928:{NFSU2_TR(0x40d928);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+4),(U+1),1);
}
B40d92b:{NFSU2_TR(0x40d92b);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B40d92c:{NFSU2_TR(0x40d92c);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B40d92e:{NFSU2_TR(0x40d92e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x68ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B40d931:{NFSU2_TR(0x40d931);
u8 U[13];
w4(U+0,u32(u32(u32(0x588ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B40d939:{NFSU2_TR(0x40d939);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B40d93a:{NFSU2_TR(0x40d93a);
{goto L40d941;}
}
B40d93c:L40d93c:{c.instructions+=1;NFSU2_TR(0x40d93c);
__builtin_memmove((R+0),gp(0x7e8d90),4);
}
B40d941:L40d941:{c.instructions+=4;NFSU2_TR(0x40d941);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40d943:{NFSU2_TR(0x40d943);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+0),(U+0),1);
}
B40d946:{NFSU2_TR(0x40d946);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40d948:{NFSU2_TR(0x40d948);
if(r1(R+518)){{goto L40d968;}}
}
B40d94a:L40d94a:{c.instructions+=2;NFSU2_TR(0x40d94a);
__builtin_memmove((R+4),(R+24),4);
}
B40d94c:{NFSU2_TR(0x40d94c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d951ull));
TAIL_STATIC(0x402590u,402);
}
B40d951:L40d951:{c.instructions+=2;NFSU2_TR(0x40d951);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40d953:{NFSU2_TR(0x40d953);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40d968;}}
}
B40d955:L40d955:{c.instructions+=7;NFSU2_TR(0x40d955);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40d956:{NFSU2_TR(0x40d956);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40d957:{NFSU2_TR(0x40d957);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40d958:{NFSU2_TR(0x40d958);
w1(R+0,u8(0x1ull));
}
B40d95a:{NFSU2_TR(0x40d95a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40d95b:{NFSU2_TR(0x40d95b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40d95e:{NFSU2_TR(0x40d95e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40d95f:L40d95f:{c.instructions+=6;NFSU2_TR(0x40d95f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40d960:{NFSU2_TR(0x40d960);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40d961:{NFSU2_TR(0x40d961);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B40d963:{NFSU2_TR(0x40d963);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40d964:{NFSU2_TR(0x40d964);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40d967:{NFSU2_TR(0x40d967);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40d968:L40d968:{c.instructions+=7;NFSU2_TR(0x40d968);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40d969:{NFSU2_TR(0x40d969);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40d96a:{NFSU2_TR(0x40d96a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40d96b:{NFSU2_TR(0x40d96b);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B40d96d:{NFSU2_TR(0x40d96d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40d96e:{NFSU2_TR(0x40d96e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40d971:{NFSU2_TR(0x40d971);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40d980:L40d980:{c.instructions+=7;NFSU2_TR(0x40d980);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d981:{NFSU2_TR(0x40d981);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d982:{NFSU2_TR(0x40d982);
__builtin_memmove((R+24),(R+4),4);
}
B40d984:{NFSU2_TR(0x40d984);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40d987:{NFSU2_TR(0x40d987);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40d98a:{NFSU2_TR(0x40d98a);
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
B40d98e:{NFSU2_TR(0x40d98e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40d9fb;}}
}
B40d990:L40d990:{c.instructions+=4;NFSU2_TR(0x40d990);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40d993:{NFSU2_TR(0x40d993);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B40d999:{NFSU2_TR(0x40d999);
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
B40d99b:{NFSU2_TR(0x40d99b);
if(r1(R+518)){{goto L40d9fb;}}
}
B40d99d:L40d99d:{c.instructions+=9;NFSU2_TR(0x40d99d);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B40d9a2:{NFSU2_TR(0x40d9a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x794ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B40d9a8:{NFSU2_TR(0x40d9a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40d9ac:{NFSU2_TR(0x40d9ac);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40d9b0:{NFSU2_TR(0x40d9b0);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40d9b6:{NFSU2_TR(0x40d9b6);
{u32 ea_=u32(u32(7877808u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40d9bc:{NFSU2_TR(0x40d9bc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40d9be:{NFSU2_TR(0x40d9be);
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
B40d9c1:{NFSU2_TR(0x40d9c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40da05;}}
}
B40d9c3:L40d9c3:{c.instructions+=6;NFSU2_TR(0x40d9c3);
{u32 ea_=u32(u32(7877804u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40d9c9:{NFSU2_TR(0x40d9c9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40d9ca:{NFSU2_TR(0x40d9ca);
__builtin_memmove((R+4),gp(0x890080),4);
}
B40d9d0:{NFSU2_TR(0x40d9d0);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B40d9d2:{NFSU2_TR(0x40d9d2);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40d9d5:{NFSU2_TR(0x40d9d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40d9daull));
TAIL_STATIC(0x5ea500u,5ea);
}
B40d9da:L40d9da:{c.instructions+=8;NFSU2_TR(0x40d9da);
{u32 ea_=u32(u32(7877800u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40d9e0:{NFSU2_TR(0x40d9e0);
{u32 ea_=u32(u32(7877804u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40d9e6:{NFSU2_TR(0x40d9e6);
{u32 ea_=u32(r4(R+24)+u32(1936u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40d9ec:{NFSU2_TR(0x40d9ec);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B40d9f2:{NFSU2_TR(0x40d9f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x794ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40d9f8:{NFSU2_TR(0x40d9f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40d9f9:{NFSU2_TR(0x40d9f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40d9fa:{NFSU2_TR(0x40d9fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40d9fb:L40d9fb:{c.instructions+=1;NFSU2_TR(0x40d9fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x790ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40da05:L40da05:{c.instructions+=3;NFSU2_TR(0x40da05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40da06:{NFSU2_TR(0x40da06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40da07:{NFSU2_TR(0x40da07);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40da10:L40da10:{c.instructions+=6;NFSU2_TR(0x40da10);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40da11:{NFSU2_TR(0x40da11);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40da12:{NFSU2_TR(0x40da12);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40da16:{NFSU2_TR(0x40da16);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40da17:{NFSU2_TR(0x40da17);
__builtin_memmove((R+4),(R+24),4);
}
B40da19:{NFSU2_TR(0x40da19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40da1eull));
TAIL_STATIC(0x5d86a0u,5d8);
}
B40da1e:L40da1e:{c.instructions+=10;NFSU2_TR(0x40da1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40da22:{NFSU2_TR(0x40da22);
__builtin_memmove((R+28),(R+0),4);
}
B40da24:{NFSU2_TR(0x40da24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40da27:{NFSU2_TR(0x40da27);
__builtin_memmove((R+12),(R+0),4);
}
B40da29:{NFSU2_TR(0x40da29);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B40da2c:{NFSU2_TR(0x40da2c);
w1(R+12,u8(~u32(r1(R+12))));
}
B40da2e:{NFSU2_TR(0x40da2e);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B40da31:{NFSU2_TR(0x40da31);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+0))));
}
B40da33:{NFSU2_TR(0x40da33);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+12,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(R+12))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+12))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+12))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40da36:{NFSU2_TR(0x40da36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40da3bull));
TAIL_STATIC(0x5ec0d0u,5ec);
}
B40da3b:L40da3b:{c.instructions+=2;NFSU2_TR(0x40da3b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40da3e:{NFSU2_TR(0x40da3e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40da5e;}}
}
B40da40:L40da40:{c.instructions+=2;NFSU2_TR(0x40da40);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40da43:{NFSU2_TR(0x40da43);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40da5e;}}
}
B40da45:L40da45:{c.instructions+=2;NFSU2_TR(0x40da45);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40da47:{NFSU2_TR(0x40da47);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40da63;}}
}
B40da49:L40da49:{c.instructions+=8;NFSU2_TR(0x40da49);
u8 U[13];
w4(U+0,u32(u32(u32(0x86ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B40da50:{NFSU2_TR(0x40da50);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B40da53:{NFSU2_TR(0x40da53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40da54:{NFSU2_TR(0x40da54);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40da56:{NFSU2_TR(0x40da56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40da57:{NFSU2_TR(0x40da57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B40da5a:{NFSU2_TR(0x40da5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40da5b:{NFSU2_TR(0x40da5b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40da5e:L40da5e:{c.instructions+=1;NFSU2_TR(0x40da5e);
w4(R+0,u32(0x2ull));
}
B40da63:L40da63:{c.instructions+=7;NFSU2_TR(0x40da63);
u8 U[13];
w4(U+0,u32(u32(u32(0x82ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B40da6a:{NFSU2_TR(0x40da6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40da6b:{NFSU2_TR(0x40da6b);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40da6d:{NFSU2_TR(0x40da6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40da6e:{NFSU2_TR(0x40da6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B40da71:{NFSU2_TR(0x40da71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40da72:{NFSU2_TR(0x40da72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40da80:L40da80:{c.instructions+=5;NFSU2_TR(0x40da80);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40da84:{NFSU2_TR(0x40da84);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40da85:{NFSU2_TR(0x40da85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40da86:{NFSU2_TR(0x40da86);
__builtin_memmove((R+24),(R+4),4);
}
B40da88:{NFSU2_TR(0x40da88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40da8dull));
TAIL_STATIC(0x40c960u,40c);
}
B40da8d:L40da8d:{c.instructions+=7;NFSU2_TR(0x40da8d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40da91:{NFSU2_TR(0x40da91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40da98:{NFSU2_TR(0x40da98);
u8 U[4];
w4(U+0,u32(0x784af8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B40da9e:{NFSU2_TR(0x40da9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40daa1:{NFSU2_TR(0x40daa1);
__builtin_memmove((R+0),(R+24),4);
}
B40daa3:{NFSU2_TR(0x40daa3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40daa4:{NFSU2_TR(0x40daa4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40dab0:L40dab0:{c.instructions+=2;NFSU2_TR(0x40dab0);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40dab3:{NFSU2_TR(0x40dab3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40dac0:L40dac0:{c.instructions+=8;NFSU2_TR(0x40dac0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40dac1:{NFSU2_TR(0x40dac1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40dac5:{NFSU2_TR(0x40dac5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40dac6:{NFSU2_TR(0x40dac6);
u8 U[4];
w4(U+0,u32(0x7842b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40dacb:{NFSU2_TR(0x40dacb);
__builtin_memmove((R+28),(R+4),4);
}
B40dacd:{NFSU2_TR(0x40dacd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40dacf:{NFSU2_TR(0x40dacf);
__builtin_memmove((R+4),(R+24),4);
}
B40dad1:{NFSU2_TR(0x40dad1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40dad6ull));
TAIL_STATIC(0x578ce0u,578);
}
B40dad6:L40dad6:{c.instructions+=3;NFSU2_TR(0x40dad6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40dad7:{NFSU2_TR(0x40dad7);
__builtin_memmove((R+4),(R+28),4);
}
B40dad9:{NFSU2_TR(0x40dad9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40dadeull));
TAIL_STATIC(0x402720u,402);
}
B40dade:L40dade:{c.instructions+=2;NFSU2_TR(0x40dade);
__builtin_memmove((R+4),(R+24),4);
}
B40dae0:{NFSU2_TR(0x40dae0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40dae5ull));
TAIL_STATIC(0x578d90u,578);
}
B40dae5:L40dae5:{c.instructions+=3;NFSU2_TR(0x40dae5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40dae6:{NFSU2_TR(0x40dae6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40dae7:{NFSU2_TR(0x40dae7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40daf0:L40daf0:{c.instructions+=5;NFSU2_TR(0x40daf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40daf4:{NFSU2_TR(0x40daf4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40daf5:{NFSU2_TR(0x40daf5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40daf6:{NFSU2_TR(0x40daf6);
__builtin_memmove((R+24),(R+4),4);
}
B40daf8:{NFSU2_TR(0x40daf8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40dafdull));
TAIL_STATIC(0x40c960u,40c);
}
B40dafd:L40dafd:{c.instructions+=7;NFSU2_TR(0x40dafd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40db01:{NFSU2_TR(0x40db01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40db08:{NFSU2_TR(0x40db08);
u8 U[4];
w4(U+0,u32(0x784b58ull));
s4(u32(r4(R+24)),r4(U+0));
}
B40db0e:{NFSU2_TR(0x40db0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40db11:{NFSU2_TR(0x40db11);
__builtin_memmove((R+0),(R+24),4);
}
B40db13:{NFSU2_TR(0x40db13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40db14:{NFSU2_TR(0x40db14);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40db20:L40db20:{c.instructions+=3;NFSU2_TR(0x40db20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40db21:{NFSU2_TR(0x40db21);
__builtin_memmove((R+24),(R+4),4);
}
B40db23:{NFSU2_TR(0x40db23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40db28ull));
TAIL_STATIC(0x425860u,425);
}
B40db28:L40db28:{c.instructions+=2;NFSU2_TR(0x40db28);
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
B40db2d:{NFSU2_TR(0x40db2d);
if(r1(R+518)){{goto L40db3e;}}
}
B40db2f:L40db2f:{c.instructions+=4;NFSU2_TR(0x40db2f);
__builtin_memmove((R+0),gp(0x81cb70),4);
}
B40db34:{NFSU2_TR(0x40db34);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40db35:{NFSU2_TR(0x40db35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40db36:{NFSU2_TR(0x40db36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40db3bull));
TAIL_STATIC(0x43f920u,43f);
}
B40db3b:L40db3b:{c.instructions+=1;NFSU2_TR(0x40db3b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40db3e:L40db3e:{c.instructions+=3;NFSU2_TR(0x40db3e);
__builtin_memmove((R+0),(R+24),4);
}
B40db40:{NFSU2_TR(0x40db40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40db41:{NFSU2_TR(0x40db41);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40db50:L40db50:{c.instructions+=4;NFSU2_TR(0x40db50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40db54:{NFSU2_TR(0x40db54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B40db56:{NFSU2_TR(0x40db56);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40db59:{NFSU2_TR(0x40db59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40db5eull));
TAIL_STATIC(0x404970u,404);
}
B40db5e:L40db5e:{c.instructions+=1;NFSU2_TR(0x40db5e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40db70:L40db70:{c.instructions+=5;NFSU2_TR(0x40db70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40db74:{NFSU2_TR(0x40db74);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40db75:{NFSU2_TR(0x40db75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40db76:{NFSU2_TR(0x40db76);
__builtin_memmove((R+24),(R+4),4);
}
B40db78:{NFSU2_TR(0x40db78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40db7dull));
TAIL_STATIC(0x40c960u,40c);
}
B40db7d:L40db7d:{c.instructions+=7;NFSU2_TR(0x40db7d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40db81:{NFSU2_TR(0x40db81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40db88:{NFSU2_TR(0x40db88);
u8 U[4];
w4(U+0,u32(0x784ba8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B40db8e:{NFSU2_TR(0x40db8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40db91:{NFSU2_TR(0x40db91);
__builtin_memmove((R+0),(R+24),4);
}
B40db93:{NFSU2_TR(0x40db93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40db94:{NFSU2_TR(0x40db94);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40dba0:L40dba0:{c.instructions+=5;NFSU2_TR(0x40dba0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40dba4:{NFSU2_TR(0x40dba4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40dba5:{NFSU2_TR(0x40dba5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40dba6:{NFSU2_TR(0x40dba6);
__builtin_memmove((R+24),(R+4),4);
}
B40dba8:{NFSU2_TR(0x40dba8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40dbadull));
TAIL_STATIC(0x40c960u,40c);
}
B40dbad:L40dbad:{c.instructions+=15;NFSU2_TR(0x40dbad);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40dbb1:{NFSU2_TR(0x40dbb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40dbb5:{NFSU2_TR(0x40dbb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40dbb9:{NFSU2_TR(0x40dbb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40dbc0:{NFSU2_TR(0x40dbc0);
u8 U[4];
w4(U+0,u32(0x784bf8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B40dbc6:{NFSU2_TR(0x40dbc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40dbcd:{NFSU2_TR(0x40dbcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40dbd0:{NFSU2_TR(0x40dbd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40dbd3:{NFSU2_TR(0x40dbd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40dbd6:{NFSU2_TR(0x40dbd6);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40dbdc:{NFSU2_TR(0x40dbdc);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40dbe2:{NFSU2_TR(0x40dbe2);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40dbe6:{NFSU2_TR(0x40dbe6);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40dbec:{NFSU2_TR(0x40dbec);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40dbf2:{NFSU2_TR(0x40dbf2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40dbf7ull));
TAIL_STATIC(0x75bed4u,75b);
}
B40dbf7:L40dbf7:{c.instructions+=4;NFSU2_TR(0x40dbf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40dbfa:{NFSU2_TR(0x40dbfa);
__builtin_memmove((R+0),(R+24),4);
}
B40dbfc:{NFSU2_TR(0x40dbfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40dbfd:{NFSU2_TR(0x40dbfd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40dc00:L40dc00:{c.instructions+=11;NFSU2_TR(0x40dc00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B40dc03:{NFSU2_TR(0x40dc03);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40dc07:{NFSU2_TR(0x40dc07);
__builtin_memmove((R+8),gp(0x7835bc),4);
}
B40dc0d:{NFSU2_TR(0x40dc0d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40dc0e:{NFSU2_TR(0x40dc0e);
__builtin_memmove((R+24),(R+4),4);
}
B40dc10:{NFSU2_TR(0x40dc10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B40dc12:{NFSU2_TR(0x40dc12);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40dc15:{NFSU2_TR(0x40dc15);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40dc19:{NFSU2_TR(0x40dc19);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B40dc1d:{NFSU2_TR(0x40dc1d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x4e6e6b28ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40dc25:{NFSU2_TR(0x40dc25);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40dc6b;}}
}
B40dc27:L40dc27:{c.instructions+=18;NFSU2_TR(0x40dc27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40dc2a:{NFSU2_TR(0x40dc2a);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40dc2d:{NFSU2_TR(0x40dc2d);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40dc30:{NFSU2_TR(0x40dc30);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B40dc33:{NFSU2_TR(0x40dc33);
{u32 ea_=u32(r4(R+4)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40dc36:{NFSU2_TR(0x40dc36);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40dc39:{NFSU2_TR(0x40dc39);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B40dc3b:{NFSU2_TR(0x40dc3b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40dc3d:{NFSU2_TR(0x40dc3d);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B40dc3f:{NFSU2_TR(0x40dc3f);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B40dc41:{NFSU2_TR(0x40dc41);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40dc43:{NFSU2_TR(0x40dc43);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B40dc45:{NFSU2_TR(0x40dc45);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B40dc47:{NFSU2_TR(0x40dc47);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40dc49:{NFSU2_TR(0x40dc49);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40dc4f:{NFSU2_TR(0x40dc4f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40dc51:{NFSU2_TR(0x40dc51);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40dc54:{NFSU2_TR(0x40dc54);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40dc62;}}
}
B40dc56:L40dc56:{c.instructions+=3;NFSU2_TR(0x40dc56);
__builtin_memmove((R+8),gp(0x7835c8),4);
}
B40dc5c:{NFSU2_TR(0x40dc5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40dc60:{NFSU2_TR(0x40dc60);
{goto L40dc6b;}
}
B40dc62:L40dc62:{c.instructions+=2;NFSU2_TR(0x40dc62);
__builtin_memmove((R+0),gp(0x7835c4),4);
}
B40dc67:{NFSU2_TR(0x40dc67);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40dc6b:L40dc6b:{c.instructions+=3;NFSU2_TR(0x40dc6b);
__builtin_memmove((R+0),gp(0x88f2be),1);
}
B40dc70:{NFSU2_TR(0x40dc70);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40dc72:{NFSU2_TR(0x40dc72);
if(r1(R+518)){{goto L40dd32;}}
}
B40dc78:L40dc78:{c.instructions+=11;NFSU2_TR(0x40dc78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40dc7b:{NFSU2_TR(0x40dc7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40dc81:{NFSU2_TR(0x40dc81);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40dc87:{NFSU2_TR(0x40dc87);
__builtin_memmove((R+8),(R+0),4);
}
B40dc89:{NFSU2_TR(0x40dc89);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40dc8d:{NFSU2_TR(0x40dc8d);
__builtin_memmove((R+0),(R+4),4);
}
B40dc8f:{NFSU2_TR(0x40dc8f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40dc90:{NFSU2_TR(0x40dc90);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40dc94:{NFSU2_TR(0x40dc94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40dc95:{NFSU2_TR(0x40dc95);
w4(R+4,u32(0x88f298ull));
}
B40dc9a:{NFSU2_TR(0x40dc9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40dc9full));
TAIL_STATIC(0x5d5cd0u,5d5);
}
B40dc9f:L40dc9f:{c.instructions+=17;NFSU2_TR(0x40dc9f);
{u32 ea_=u32(u32(7878068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40dca5:{NFSU2_TR(0x40dca5);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40dca8:{NFSU2_TR(0x40dca8);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B40dcad:{NFSU2_TR(0x40dcad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40dcb0:{NFSU2_TR(0x40dcb0);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B40dcb2:{NFSU2_TR(0x40dcb2);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B40dcb4:{NFSU2_TR(0x40dcb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40dcb8:{NFSU2_TR(0x40dcb8);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40dcbc:{NFSU2_TR(0x40dcbc);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40dcbe:{NFSU2_TR(0x40dcbe);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40dcc2:{NFSU2_TR(0x40dcc2);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40dcc8:{NFSU2_TR(0x40dcc8);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40dccc:{NFSU2_TR(0x40dccc);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40dcd0:{NFSU2_TR(0x40dcd0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40dcd6:{NFSU2_TR(0x40dcd6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40dcd8:{NFSU2_TR(0x40dcd8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40dcdb:{NFSU2_TR(0x40dcdb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40dd83;}}
}
B40dce1:L40dce1:{c.instructions+=5;NFSU2_TR(0x40dce1);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40dce5:{NFSU2_TR(0x40dce5);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40dceb:{NFSU2_TR(0x40dceb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40dced:{NFSU2_TR(0x40dced);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40dcf0:{NFSU2_TR(0x40dcf0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40dd07;}}
}
B40dcf2:L40dcf2:{c.instructions+=6;NFSU2_TR(0x40dcf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40dcf5:{NFSU2_TR(0x40dcf5);
{u32 ea_=u32(r4(R+8)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40dcfb:{NFSU2_TR(0x40dcfb);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40dcff:{NFSU2_TR(0x40dcff);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B40dd03:{NFSU2_TR(0x40dd03);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B40dd05:{NFSU2_TR(0x40dd05);
{goto L40dd6b;}
}
B40dd07:L40dd07:{c.instructions+=7;NFSU2_TR(0x40dd07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40dd0a:{NFSU2_TR(0x40dd0a);
{u32 ea_=u32(r4(R+0)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40dd10:{NFSU2_TR(0x40dd10);
{u32 ea_=u32(u32(7878080u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40dd16:{NFSU2_TR(0x40dd16);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B40dd1c:{NFSU2_TR(0x40dd1c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40dd1e:{NFSU2_TR(0x40dd1e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40dd21:{NFSU2_TR(0x40dd21);
if(r1(R+518)){{goto L40dd87;}}
}
B40dd23:L40dd23:{c.instructions+=5;NFSU2_TR(0x40dd23);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40dd25:{NFSU2_TR(0x40dd25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40dd26:{NFSU2_TR(0x40dd26);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40dd2c:{NFSU2_TR(0x40dd2c);
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
B40dd2f:{NFSU2_TR(0x40dd2f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40dd32:L40dd32:{c.instructions+=18;NFSU2_TR(0x40dd32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40dd35:{NFSU2_TR(0x40dd35);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40dd38:{NFSU2_TR(0x40dd38);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40dd3b:{NFSU2_TR(0x40dd3b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B40dd3e:{NFSU2_TR(0x40dd3e);
{u32 ea_=u32(r4(R+4)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40dd41:{NFSU2_TR(0x40dd41);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40dd42:{NFSU2_TR(0x40dd42);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40dd45:{NFSU2_TR(0x40dd45);
w4(R+4,u32(0x81e378ull));
}
B40dd4a:{NFSU2_TR(0x40dd4a);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B40dd4c:{NFSU2_TR(0x40dd4c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40dd4e:{NFSU2_TR(0x40dd4e);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B40dd50:{NFSU2_TR(0x40dd50);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B40dd52:{NFSU2_TR(0x40dd52);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40dd54:{NFSU2_TR(0x40dd54);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B40dd56:{NFSU2_TR(0x40dd56);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B40dd58:{NFSU2_TR(0x40dd58);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40dd5a:{NFSU2_TR(0x40dd5a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40dd5d:{NFSU2_TR(0x40dd5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40dd62ull));
TAIL_STATIC(0x576790u,576);
}
B40dd62:L40dd62:{c.instructions+=2;NFSU2_TR(0x40dd62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40dd65:{NFSU2_TR(0x40dd65);
{u32 ea_=u32(r4(R+4)+u32(1072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40dd6b:L40dd6b:{c.instructions+=4;NFSU2_TR(0x40dd6b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B40dd6f:{NFSU2_TR(0x40dd6f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40dd71:{NFSU2_TR(0x40dd71);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40dd74:{NFSU2_TR(0x40dd74);
if(r1(R+518)){{goto L40dd87;}}
}
B40dd76:L40dd76:{c.instructions+=5;NFSU2_TR(0x40dd76);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40dd78:{NFSU2_TR(0x40dd78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40dd79:{NFSU2_TR(0x40dd79);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40dd7d:{NFSU2_TR(0x40dd7d);
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
B40dd80:{NFSU2_TR(0x40dd80);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40dd83:L40dd83:{c.instructions+=1;NFSU2_TR(0x40dd83);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40dd87:L40dd87:{c.instructions+=3;NFSU2_TR(0x40dd87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40dd88:{NFSU2_TR(0x40dd88);
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
B40dd8b:{NFSU2_TR(0x40dd8b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40dd90:L40dd90:{c.instructions+=5;NFSU2_TR(0x40dd90);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40dd94:{NFSU2_TR(0x40dd94);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40dd95:{NFSU2_TR(0x40dd95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40dd96:{NFSU2_TR(0x40dd96);
__builtin_memmove((R+24),(R+4),4);
}
B40dd98:{NFSU2_TR(0x40dd98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40dd9dull));
TAIL_STATIC(0x40c960u,40c);
}
B40dd9d:L40dd9d:{c.instructions+=11;NFSU2_TR(0x40dd9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40dda1:{NFSU2_TR(0x40dda1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40dda5:{NFSU2_TR(0x40dda5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40dda9:{NFSU2_TR(0x40dda9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40ddac:{NFSU2_TR(0x40ddac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B40ddb3:{NFSU2_TR(0x40ddb3);
u8 U[4];
w4(U+0,u32(0x784c48ull));
s4(u32(r4(R+24)),r4(U+0));
}
B40ddb9:{NFSU2_TR(0x40ddb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40ddbc:{NFSU2_TR(0x40ddbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40ddbf:{NFSU2_TR(0x40ddbf);
__builtin_memmove((R+0),(R+24),4);
}
B40ddc1:{NFSU2_TR(0x40ddc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40ddc2:{NFSU2_TR(0x40ddc2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40ddd0:L40ddd0:{c.instructions+=2;NFSU2_TR(0x40ddd0);
{u32 ea_=u32(u32(7882696u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40ddd6:{NFSU2_TR(0x40ddd6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40dde0:L40dde0:{c.instructions+=3;NFSU2_TR(0x40dde0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40dde4:{NFSU2_TR(0x40dde4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40dde6:{NFSU2_TR(0x40dde6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ddebull));
TAIL_STATIC(0x5dcbe0u,5dc);
}
B40ddeb:L40ddeb:{c.instructions+=1;NFSU2_TR(0x40ddeb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40ddf0:L40ddf0:{c.instructions+=6;NFSU2_TR(0x40ddf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40ddf4:{NFSU2_TR(0x40ddf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40ddf7:{NFSU2_TR(0x40ddf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40ddfa:{NFSU2_TR(0x40ddfa);
w4(R+0,u32(0x1ull));
}
B40ddff:{NFSU2_TR(0x40ddff);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B40de01:{NFSU2_TR(0x40de01);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40de17;}}
}
B40de03:L40de03:{c.instructions+=3;NFSU2_TR(0x40de03);
__builtin_memmove((R+4),gp(0x89e7d8),1);
}
B40de09:{NFSU2_TR(0x40de09);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40de0b:{NFSU2_TR(0x40de0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40de17;}}
}
B40de0d:L40de0d:{c.instructions+=3;NFSU2_TR(0x40de0d);
__builtin_memmove((R+4),gp(0x890108),4);
}
B40de13:{NFSU2_TR(0x40de13);
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
B40de15:{NFSU2_TR(0x40de15);
if(r1(R+518)){{goto L40de1c;}}
}
B40de17:L40de17:{c.instructions+=1;NFSU2_TR(0x40de17);
w4(R+0,u32(0x2ull));
}
B40de1c:L40de1c:{c.instructions+=1;NFSU2_TR(0x40de1c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40de20:L40de20:{c.instructions+=8;NFSU2_TR(0x40de20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40de21:{NFSU2_TR(0x40de21);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40de25:{NFSU2_TR(0x40de25);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40de26:{NFSU2_TR(0x40de26);
u8 U[4];
w4(U+0,u32(0x784c98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40de2b:{NFSU2_TR(0x40de2b);
__builtin_memmove((R+28),(R+4),4);
}
B40de2d:{NFSU2_TR(0x40de2d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40de2f:{NFSU2_TR(0x40de2f);
__builtin_memmove((R+4),(R+24),4);
}
B40de31:{NFSU2_TR(0x40de31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40de36ull));
TAIL_STATIC(0x578ce0u,578);
}
B40de36:L40de36:{c.instructions+=3;NFSU2_TR(0x40de36);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40de37:{NFSU2_TR(0x40de37);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40de3a:{NFSU2_TR(0x40de3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40de3full));
TAIL_STATIC(0x4049f0u,404);
}
B40de3f:L40de3f:{c.instructions+=4;NFSU2_TR(0x40de3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1f0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B40de45:{NFSU2_TR(0x40de45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40de46:{NFSU2_TR(0x40de46);
__builtin_memmove((R+4),(R+24),4);
}
B40de48:{NFSU2_TR(0x40de48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40de4dull));
TAIL_STATIC(0x571770u,571);
}
B40de4d:L40de4d:{c.instructions+=4;NFSU2_TR(0x40de4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1f8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40de53:{NFSU2_TR(0x40de53);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40de54:{NFSU2_TR(0x40de54);
__builtin_memmove((R+4),(R+24),4);
}
B40de56:{NFSU2_TR(0x40de56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40de5bull));
TAIL_STATIC(0x571770u,571);
}
B40de5b:L40de5b:{c.instructions+=4;NFSU2_TR(0x40de5b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1f4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B40de61:{NFSU2_TR(0x40de61);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40de62:{NFSU2_TR(0x40de62);
__builtin_memmove((R+4),(R+24),4);
}
B40de64:{NFSU2_TR(0x40de64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40de69ull));
TAIL_STATIC(0x571770u,571);
}
B40de69:L40de69:{c.instructions+=7;NFSU2_TR(0x40de69);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40de6b:{NFSU2_TR(0x40de6b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40de6d:{NFSU2_TR(0x40de6d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40de6f:{NFSU2_TR(0x40de6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1fcull))));
__builtin_memmove((R+0),(U+0),4);
}
B40de75:{NFSU2_TR(0x40de75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40de76:{NFSU2_TR(0x40de76);
__builtin_memmove((R+4),(R+24),4);
}
B40de78:{NFSU2_TR(0x40de78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40de7dull));
TAIL_STATIC(0x571640u,571);
}
B40de7d:L40de7d:{c.instructions+=7;NFSU2_TR(0x40de7d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40de7f:{NFSU2_TR(0x40de7f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40de81:{NFSU2_TR(0x40de81);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40de83:{NFSU2_TR(0x40de83);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1feull))));
__builtin_memmove((R+4),(U+0),4);
}
B40de89:{NFSU2_TR(0x40de89);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40de8a:{NFSU2_TR(0x40de8a);
__builtin_memmove((R+4),(R+24),4);
}
B40de8c:{NFSU2_TR(0x40de8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40de91ull));
TAIL_STATIC(0x571640u,571);
}
B40de91:L40de91:{c.instructions+=7;NFSU2_TR(0x40de91);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40de93:{NFSU2_TR(0x40de93);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40de95:{NFSU2_TR(0x40de95);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40de97:{NFSU2_TR(0x40de97);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1fdull))));
__builtin_memmove((R+8),(U+0),4);
}
B40de9d:{NFSU2_TR(0x40de9d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40de9e:{NFSU2_TR(0x40de9e);
__builtin_memmove((R+4),(R+24),4);
}
B40dea0:{NFSU2_TR(0x40dea0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40dea5ull));
TAIL_STATIC(0x571640u,571);
}
B40dea5:L40dea5:{c.instructions+=7;NFSU2_TR(0x40dea5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40dea7:{NFSU2_TR(0x40dea7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40dea9:{NFSU2_TR(0x40dea9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40deab:{NFSU2_TR(0x40deab);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ffull))));
__builtin_memmove((R+0),(U+0),4);
}
B40deb1:{NFSU2_TR(0x40deb1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40deb2:{NFSU2_TR(0x40deb2);
__builtin_memmove((R+4),(R+24),4);
}
B40deb4:{NFSU2_TR(0x40deb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40deb9ull));
TAIL_STATIC(0x571640u,571);
}
B40deb9:L40deb9:{c.instructions+=4;NFSU2_TR(0x40deb9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x200ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40debf:{NFSU2_TR(0x40debf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40dec0:{NFSU2_TR(0x40dec0);
__builtin_memmove((R+4),(R+24),4);
}
B40dec2:{NFSU2_TR(0x40dec2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40dec7ull));
TAIL_STATIC(0x571770u,571);
}
B40dec7:L40dec7:{c.instructions+=3;NFSU2_TR(0x40dec7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40dec8:{NFSU2_TR(0x40dec8);
__builtin_memmove((R+4),(R+28),4);
}
B40deca:{NFSU2_TR(0x40deca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40decfull));
TAIL_STATIC(0x402720u,402);
}
B40decf:L40decf:{c.instructions+=2;NFSU2_TR(0x40decf);
__builtin_memmove((R+4),(R+24),4);
}
B40ded1:{NFSU2_TR(0x40ded1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ded6ull));
TAIL_STATIC(0x578d90u,578);
}
B40ded6:L40ded6:{c.instructions+=3;NFSU2_TR(0x40ded6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40ded7:{NFSU2_TR(0x40ded7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40ded8:{NFSU2_TR(0x40ded8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40dee0:L40dee0:{c.instructions+=23;NFSU2_TR(0x40dee0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40dee4:{NFSU2_TR(0x40dee4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40dee7:{NFSU2_TR(0x40dee7);
{u32 ea_=u32(r4(R+8)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40deed:{NFSU2_TR(0x40deed);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B40deef:{NFSU2_TR(0x40deef);
{u32 ea_=u32(r4(R+0)+u32(616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40def5:{NFSU2_TR(0x40def5);
{u32 ea_=u32(r4(R+0)+u32(612u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40defb:{NFSU2_TR(0x40defb);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B40defd:{NFSU2_TR(0x40defd);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40df03:{NFSU2_TR(0x40df03);
{u32 ea_=u32(u32(8371952u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40df09:{NFSU2_TR(0x40df09);
{u32 ea_=u32(r4(R+0)+u32(272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40df0f:{NFSU2_TR(0x40df0f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40df11:{NFSU2_TR(0x40df11);
{u32 ea_=u32(r4(R+0)+u32(252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40df17:{NFSU2_TR(0x40df17);
{u32 ea_=u32(r4(R+0)+u32(220u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40df1d:{NFSU2_TR(0x40df1d);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40df23:{NFSU2_TR(0x40df23);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B40df25:{NFSU2_TR(0x40df25);
{u32 ea_=u32(r4(R+0)+u32(272u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B40df2b:{NFSU2_TR(0x40df2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40df2f:{NFSU2_TR(0x40df2f);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B40df31:{NFSU2_TR(0x40df31);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40df35:{NFSU2_TR(0x40df35);
{u32 ea_=u32(r4(R+8)+u32(1072u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40df3b:{NFSU2_TR(0x40df3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1f4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40df41:{NFSU2_TR(0x40df41);
{u32 ea_=u32(r4(R+4)+u32(496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40df47:{NFSU2_TR(0x40df47);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40df50:L40df50:{c.instructions+=23;NFSU2_TR(0x40df50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B40df53:{NFSU2_TR(0x40df53);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40df54:{NFSU2_TR(0x40df54);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40df55:{NFSU2_TR(0x40df55);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40df56:{NFSU2_TR(0x40df56);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40df5a:{NFSU2_TR(0x40df5a);
{u32 ea_=u32(r4(R+24)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40df60:{NFSU2_TR(0x40df60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40df63:{NFSU2_TR(0x40df63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40df66:{NFSU2_TR(0x40df66);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B40df68:{NFSU2_TR(0x40df68);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40df6c:{NFSU2_TR(0x40df6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40df6f:{NFSU2_TR(0x40df6f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40df75:{NFSU2_TR(0x40df75);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40df79:{NFSU2_TR(0x40df79);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B40df7c:{NFSU2_TR(0x40df7c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B40df7e:{NFSU2_TR(0x40df7e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40df7f:{NFSU2_TR(0x40df7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B40df82:{NFSU2_TR(0x40df82);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40df84:{NFSU2_TR(0x40df84);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B40df86:{NFSU2_TR(0x40df86);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40df88:{NFSU2_TR(0x40df88);
__builtin_memmove((R+12),(R+518),1);
}
B40df8b:{NFSU2_TR(0x40df8b);
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
B40df8e:{NFSU2_TR(0x40df8e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x40e1e0u,40e);}
}
B40df94:L40df94:{c.instructions+=9;NFSU2_TR(0x40df94);
__builtin_memmove((R+8),gp(0x78365c),4);
}
B40df9a:{NFSU2_TR(0x40df9a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40df9b:{NFSU2_TR(0x40df9b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+0),(U+0),4);
}
B40df9e:{NFSU2_TR(0x40df9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40df9f:{NFSU2_TR(0x40df9f);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B40dfa3:{NFSU2_TR(0x40dfa3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40dfa4:{NFSU2_TR(0x40dfa4);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B40dfa8:{NFSU2_TR(0x40dfa8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40dfa9:{NFSU2_TR(0x40dfa9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40dfaeull));
TAIL_STATIC(0x43d090u,43d);
}
B40dfae:L40dfae:{c.instructions+=6;NFSU2_TR(0x40dfae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B40dfb1:{NFSU2_TR(0x40dfb1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40dfb2:{NFSU2_TR(0x40dfb2);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B40dfb6:{NFSU2_TR(0x40dfb6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40dfb7:{NFSU2_TR(0x40dfb7);
__builtin_memmove((R+4),(R+28),4);
}
B40dfb9:{NFSU2_TR(0x40dfb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40dfbeull));
TAIL_STATIC(0x40cc40u,40c);
}
B40dfbe:L40dfbe:{c.instructions+=6;NFSU2_TR(0x40dfbe);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40dfc2:{NFSU2_TR(0x40dfc2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40dfc3:{NFSU2_TR(0x40dfc3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B40dfc7:{NFSU2_TR(0x40dfc7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40dfc8:{NFSU2_TR(0x40dfc8);
__builtin_memmove((R+4),(R+28),4);
}
B40dfca:{NFSU2_TR(0x40dfca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40dfcfull));
TAIL_STATIC(0x40cc40u,40c);
}
B40dfcf:L40dfcf:{c.instructions+=2;NFSU2_TR(0x40dfcf);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40dfd1:{NFSU2_TR(0x40dfd1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x40e07eu,40e);}
}
B40dfd7:L40dfd7:{c.instructions+=10;NFSU2_TR(0x40dfd7);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B40dfdb:{NFSU2_TR(0x40dfdb);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B40dfde:{NFSU2_TR(0x40dfde);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40dfe2:{NFSU2_TR(0x40dfe2);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40dfe6:{NFSU2_TR(0x40dfe6);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40dfec:{NFSU2_TR(0x40dfec);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B40dff0:{NFSU2_TR(0x40dff0);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B40dff3:{NFSU2_TR(0x40dff3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40dff7:{NFSU2_TR(0x40dff7);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40dffb:{NFSU2_TR(0x40dffb);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
TAIL_STATIC(0x40e001u,40e);
}
XIT:NFSU2_TR_EXIT(0x40d,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
