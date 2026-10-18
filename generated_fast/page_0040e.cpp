#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_403(u8* __restrict R,Cpu& c);
u32 body_408(u8* __restrict R,Cpu& c);
u32 body_409(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_40d(u8* __restrict R,Cpu& c);
u32 body_40f(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_591(u8* __restrict R,Cpu& c);
u32 body_59f(u8* __restrict R,Cpu& c);
u32 body_5a0(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5ee(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_60b(u8* __restrict R,Cpu& c);
u32 body_60c(u8* __restrict R,Cpu& c);
u32 body_61f(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x40e,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x40e,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_40e(u8* __restrict R,Cpu& c);
u32 page_40e(Cpu& c){return body_40e(c.regs.data(),c);}
__attribute__((noinline)) u32 body_40e(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x40e001:goto L40e001;
case 0x40e005:c.instructions+=21;goto B40e005;
case 0x40e007:c.instructions+=20;goto B40e007;
case 0x40e00b:c.instructions+=19;goto B40e00b;
case 0x40e00d:c.instructions+=18;goto B40e00d;
case 0x40e011:c.instructions+=17;goto B40e011;
case 0x40e015:c.instructions+=16;goto B40e015;
case 0x40e017:c.instructions+=15;goto B40e017;
case 0x40e01b:c.instructions+=14;goto B40e01b;
case 0x40e01d:c.instructions+=13;goto B40e01d;
case 0x40e021:c.instructions+=12;goto B40e021;
case 0x40e023:c.instructions+=11;goto B40e023;
case 0x40e027:c.instructions+=10;goto B40e027;
case 0x40e02b:c.instructions+=9;goto B40e02b;
case 0x40e031:c.instructions+=8;goto B40e031;
case 0x40e035:c.instructions+=7;goto B40e035;
case 0x40e039:c.instructions+=6;goto B40e039;
case 0x40e03f:c.instructions+=5;goto B40e03f;
case 0x40e043:c.instructions+=4;goto B40e043;
case 0x40e049:c.instructions+=3;goto B40e049;
case 0x40e04b:c.instructions+=2;goto B40e04b;
case 0x40e04e:c.instructions+=1;goto B40e04e;
case 0x40e050:goto L40e050;
case 0x40e054:c.instructions+=4;goto B40e054;
case 0x40e05a:c.instructions+=3;goto B40e05a;
case 0x40e05c:c.instructions+=2;goto B40e05c;
case 0x40e05f:c.instructions+=1;goto B40e05f;
case 0x40e061:goto L40e061;
case 0x40e065:c.instructions+=4;goto B40e065;
case 0x40e06b:c.instructions+=3;goto B40e06b;
case 0x40e06d:c.instructions+=2;goto B40e06d;
case 0x40e070:c.instructions+=1;goto B40e070;
case 0x40e072:goto L40e072;
case 0x40e074:c.instructions+=3;goto B40e074;
case 0x40e078:c.instructions+=2;goto B40e078;
case 0x40e07c:c.instructions+=1;goto B40e07c;
case 0x40e07e:goto L40e07e;
case 0x40e082:c.instructions+=6;goto B40e082;
case 0x40e085:c.instructions+=5;goto B40e085;
case 0x40e088:c.instructions+=4;goto B40e088;
case 0x40e08c:c.instructions+=3;goto B40e08c;
case 0x40e090:c.instructions+=2;goto B40e090;
case 0x40e096:c.instructions+=1;goto B40e096;
case 0x40e09c:goto L40e09c;
case 0x40e0a0:c.instructions+=4;goto B40e0a0;
case 0x40e0a3:c.instructions+=3;goto B40e0a3;
case 0x40e0a7:c.instructions+=2;goto B40e0a7;
case 0x40e0ab:c.instructions+=1;goto B40e0ab;
case 0x40e0b0:goto L40e0b0;
case 0x40e0b4:c.instructions+=4;goto B40e0b4;
case 0x40e0ba:c.instructions+=3;goto B40e0ba;
case 0x40e0bc:c.instructions+=2;goto B40e0bc;
case 0x40e0bf:c.instructions+=1;goto B40e0bf;
case 0x40e0c1:goto L40e0c1;
case 0x40e0c5:c.instructions+=4;goto B40e0c5;
case 0x40e0cb:c.instructions+=3;goto B40e0cb;
case 0x40e0cd:c.instructions+=2;goto B40e0cd;
case 0x40e0d0:c.instructions+=1;goto B40e0d0;
case 0x40e0d2:goto L40e0d2;
case 0x40e0d6:c.instructions+=4;goto B40e0d6;
case 0x40e0dc:c.instructions+=3;goto B40e0dc;
case 0x40e0de:c.instructions+=2;goto B40e0de;
case 0x40e0e1:c.instructions+=1;goto B40e0e1;
case 0x40e0e3:goto L40e0e3;
case 0x40e0e5:c.instructions+=2;goto B40e0e5;
case 0x40e0e9:c.instructions+=1;goto B40e0e9;
case 0x40e0ed:goto L40e0ed;
case 0x40e0f3:c.instructions+=3;goto B40e0f3;
case 0x40e0f5:c.instructions+=2;goto B40e0f5;
case 0x40e0f8:c.instructions+=1;goto B40e0f8;
case 0x40e0fa:goto L40e0fa;
case 0x40e0fe:c.instructions+=4;goto B40e0fe;
case 0x40e104:c.instructions+=3;goto B40e104;
case 0x40e106:c.instructions+=2;goto B40e106;
case 0x40e109:c.instructions+=1;goto B40e109;
case 0x40e10b:goto L40e10b;
case 0x40e10f:c.instructions+=4;goto B40e10f;
case 0x40e113:c.instructions+=3;goto B40e113;
case 0x40e115:c.instructions+=2;goto B40e115;
case 0x40e118:c.instructions+=1;goto B40e118;
case 0x40e11a:goto L40e11a;
case 0x40e11e:c.instructions+=4;goto B40e11e;
case 0x40e124:c.instructions+=3;goto B40e124;
case 0x40e126:c.instructions+=2;goto B40e126;
case 0x40e129:c.instructions+=1;goto B40e129;
case 0x40e12f:goto L40e12f;
case 0x40e133:c.instructions+=4;goto B40e133;
case 0x40e137:c.instructions+=3;goto B40e137;
case 0x40e139:c.instructions+=2;goto B40e139;
case 0x40e13c:c.instructions+=1;goto B40e13c;
case 0x40e142:goto L40e142;
case 0x40e148:c.instructions+=4;goto B40e148;
case 0x40e14e:c.instructions+=3;goto B40e14e;
case 0x40e150:c.instructions+=2;goto B40e150;
case 0x40e153:c.instructions+=1;goto B40e153;
case 0x40e159:goto L40e159;
case 0x40e15f:c.instructions+=5;goto B40e15f;
case 0x40e163:c.instructions+=4;goto B40e163;
case 0x40e164:c.instructions+=3;goto B40e164;
case 0x40e165:c.instructions+=2;goto B40e165;
case 0x40e16a:c.instructions+=1;goto B40e16a;
case 0x40e16f:goto L40e16f;
case 0x40e173:c.instructions+=14;goto B40e173;
case 0x40e177:c.instructions+=13;goto B40e177;
case 0x40e17b:c.instructions+=12;goto B40e17b;
case 0x40e17f:c.instructions+=11;goto B40e17f;
case 0x40e180:c.instructions+=10;goto B40e180;
case 0x40e184:c.instructions+=9;goto B40e184;
case 0x40e188:c.instructions+=8;goto B40e188;
case 0x40e18c:c.instructions+=7;goto B40e18c;
case 0x40e192:c.instructions+=6;goto B40e192;
case 0x40e193:c.instructions+=5;goto B40e193;
case 0x40e197:c.instructions+=4;goto B40e197;
case 0x40e19b:c.instructions+=3;goto B40e19b;
case 0x40e1a1:c.instructions+=2;goto B40e1a1;
case 0x40e1a5:c.instructions+=1;goto B40e1a5;
case 0x40e1aa:goto L40e1aa;
case 0x40e1ae:c.instructions+=13;goto B40e1ae;
case 0x40e1b2:c.instructions+=12;goto B40e1b2;
case 0x40e1b5:c.instructions+=11;goto B40e1b5;
case 0x40e1b9:c.instructions+=10;goto B40e1b9;
case 0x40e1bb:c.instructions+=9;goto B40e1bb;
case 0x40e1bd:c.instructions+=8;goto B40e1bd;
case 0x40e1c1:c.instructions+=7;goto B40e1c1;
case 0x40e1c3:c.instructions+=6;goto B40e1c3;
case 0x40e1c5:c.instructions+=5;goto B40e1c5;
case 0x40e1cb:c.instructions+=4;goto B40e1cb;
case 0x40e1cd:c.instructions+=3;goto B40e1cd;
case 0x40e1cf:c.instructions+=2;goto B40e1cf;
case 0x40e1d2:c.instructions+=1;goto B40e1d2;
case 0x40e1d4:goto L40e1d4;
case 0x40e1d6:goto L40e1d6;
case 0x40e1d7:c.instructions+=6;goto B40e1d7;
case 0x40e1d8:c.instructions+=5;goto B40e1d8;
case 0x40e1da:c.instructions+=4;goto B40e1da;
case 0x40e1db:c.instructions+=3;goto B40e1db;
case 0x40e1dc:c.instructions+=2;goto B40e1dc;
case 0x40e1df:c.instructions+=1;goto B40e1df;
case 0x40e1e0:goto L40e1e0;
case 0x40e1e2:c.instructions+=3;goto B40e1e2;
case 0x40e1e9:c.instructions+=2;goto B40e1e9;
case 0x40e1ea:c.instructions+=1;goto B40e1ea;
case 0x40e1ef:goto L40e1ef;
case 0x40e1f3:c.instructions+=2;goto B40e1f3;
case 0x40e1f4:c.instructions+=1;goto B40e1f4;
case 0x40e1f9:goto L40e1f9;
case 0x40e1fd:c.instructions+=10;goto B40e1fd;
case 0x40e201:c.instructions+=9;goto B40e201;
case 0x40e206:c.instructions+=8;goto B40e206;
case 0x40e20a:c.instructions+=7;goto B40e20a;
case 0x40e20b:c.instructions+=6;goto B40e20b;
case 0x40e20f:c.instructions+=5;goto B40e20f;
case 0x40e213:c.instructions+=4;goto B40e213;
case 0x40e214:c.instructions+=3;goto B40e214;
case 0x40e218:c.instructions+=2;goto B40e218;
case 0x40e219:c.instructions+=1;goto B40e219;
case 0x40e21e:goto L40e21e;
case 0x40e222:c.instructions+=52;goto B40e222;
case 0x40e226:c.instructions+=51;goto B40e226;
case 0x40e22a:c.instructions+=50;goto B40e22a;
case 0x40e22e:c.instructions+=49;goto B40e22e;
case 0x40e232:c.instructions+=48;goto B40e232;
case 0x40e236:c.instructions+=47;goto B40e236;
case 0x40e23c:c.instructions+=46;goto B40e23c;
case 0x40e240:c.instructions+=45;goto B40e240;
case 0x40e243:c.instructions+=44;goto B40e243;
case 0x40e247:c.instructions+=43;goto B40e247;
case 0x40e24a:c.instructions+=42;goto B40e24a;
case 0x40e24e:c.instructions+=41;goto B40e24e;
case 0x40e252:c.instructions+=40;goto B40e252;
case 0x40e255:c.instructions+=39;goto B40e255;
case 0x40e25b:c.instructions+=38;goto B40e25b;
case 0x40e25d:c.instructions+=37;goto B40e25d;
case 0x40e261:c.instructions+=36;goto B40e261;
case 0x40e263:c.instructions+=35;goto B40e263;
case 0x40e265:c.instructions+=34;goto B40e265;
case 0x40e269:c.instructions+=33;goto B40e269;
case 0x40e26c:c.instructions+=32;goto B40e26c;
case 0x40e270:c.instructions+=31;goto B40e270;
case 0x40e272:c.instructions+=30;goto B40e272;
case 0x40e276:c.instructions+=29;goto B40e276;
case 0x40e278:c.instructions+=28;goto B40e278;
case 0x40e27a:c.instructions+=27;goto B40e27a;
case 0x40e27e:c.instructions+=26;goto B40e27e;
case 0x40e282:c.instructions+=25;goto B40e282;
case 0x40e284:c.instructions+=24;goto B40e284;
case 0x40e286:c.instructions+=23;goto B40e286;
case 0x40e28a:c.instructions+=22;goto B40e28a;
case 0x40e28d:c.instructions+=21;goto B40e28d;
case 0x40e291:c.instructions+=20;goto B40e291;
case 0x40e293:c.instructions+=19;goto B40e293;
case 0x40e297:c.instructions+=18;goto B40e297;
case 0x40e29b:c.instructions+=17;goto B40e29b;
case 0x40e2a1:c.instructions+=16;goto B40e2a1;
case 0x40e2a5:c.instructions+=15;goto B40e2a5;
case 0x40e2a7:c.instructions+=14;goto B40e2a7;
case 0x40e2ab:c.instructions+=13;goto B40e2ab;
case 0x40e2af:c.instructions+=12;goto B40e2af;
case 0x40e2b5:c.instructions+=11;goto B40e2b5;
case 0x40e2b9:c.instructions+=10;goto B40e2b9;
case 0x40e2bb:c.instructions+=9;goto B40e2bb;
case 0x40e2bf:c.instructions+=8;goto B40e2bf;
case 0x40e2c1:c.instructions+=7;goto B40e2c1;
case 0x40e2c5:c.instructions+=6;goto B40e2c5;
case 0x40e2c7:c.instructions+=5;goto B40e2c7;
case 0x40e2cb:c.instructions+=4;goto B40e2cb;
case 0x40e2d1:c.instructions+=3;goto B40e2d1;
case 0x40e2d3:c.instructions+=2;goto B40e2d3;
case 0x40e2d6:c.instructions+=1;goto B40e2d6;
case 0x40e2d8:goto L40e2d8;
case 0x40e2dc:c.instructions+=6;goto B40e2dc;
case 0x40e2e0:c.instructions+=5;goto B40e2e0;
case 0x40e2e4:c.instructions+=4;goto B40e2e4;
case 0x40e2ea:c.instructions+=3;goto B40e2ea;
case 0x40e2ec:c.instructions+=2;goto B40e2ec;
case 0x40e2ef:c.instructions+=1;goto B40e2ef;
case 0x40e2f1:goto L40e2f1;
case 0x40e2f5:c.instructions+=4;goto B40e2f5;
case 0x40e2fb:c.instructions+=3;goto B40e2fb;
case 0x40e2fd:c.instructions+=2;goto B40e2fd;
case 0x40e300:c.instructions+=1;goto B40e300;
case 0x40e306:goto L40e306;
case 0x40e30a:c.instructions+=5;goto B40e30a;
case 0x40e30e:c.instructions+=4;goto B40e30e;
case 0x40e314:c.instructions+=3;goto B40e314;
case 0x40e316:c.instructions+=2;goto B40e316;
case 0x40e319:c.instructions+=1;goto B40e319;
case 0x40e31f:goto L40e31f;
case 0x40e323:c.instructions+=3;goto B40e323;
case 0x40e325:c.instructions+=2;goto B40e325;
case 0x40e32a:c.instructions+=1;goto B40e32a;
case 0x40e330:goto L40e330;
case 0x40e333:c.instructions+=2;goto B40e333;
case 0x40e335:c.instructions+=1;goto B40e335;
case 0x40e33b:goto L40e33b;
case 0x40e33d:c.instructions+=9;goto B40e33d;
case 0x40e341:c.instructions+=8;goto B40e341;
case 0x40e344:c.instructions+=7;goto B40e344;
case 0x40e348:c.instructions+=6;goto B40e348;
case 0x40e349:c.instructions+=5;goto B40e349;
case 0x40e34d:c.instructions+=4;goto B40e34d;
case 0x40e34e:c.instructions+=3;goto B40e34e;
case 0x40e351:c.instructions+=2;goto B40e351;
case 0x40e355:c.instructions+=1;goto B40e355;
case 0x40e35a:goto L40e35a;
case 0x40e360:c.instructions+=5;goto B40e360;
case 0x40e363:c.instructions+=4;goto B40e363;
case 0x40e365:c.instructions+=3;goto B40e365;
case 0x40e366:c.instructions+=2;goto B40e366;
case 0x40e367:c.instructions+=1;goto B40e367;
case 0x40e36d:goto L40e36d;
case 0x40e36e:c.instructions+=1;goto B40e36e;
case 0x40e373:goto L40e373;
case 0x40e376:c.instructions+=2;goto B40e376;
case 0x40e378:c.instructions+=1;goto B40e378;
case 0x40e37e:goto L40e37e;
case 0x40e37f:c.instructions+=7;goto B40e37f;
case 0x40e381:c.instructions+=6;goto B40e381;
case 0x40e382:c.instructions+=5;goto B40e382;
case 0x40e384:c.instructions+=4;goto B40e384;
case 0x40e385:c.instructions+=3;goto B40e385;
case 0x40e386:c.instructions+=2;goto B40e386;
case 0x40e389:c.instructions+=1;goto B40e389;
case 0x40e390:goto L40e390;
case 0x40e391:c.instructions+=8;goto B40e391;
case 0x40e395:c.instructions+=7;goto B40e395;
case 0x40e396:c.instructions+=6;goto B40e396;
case 0x40e398:c.instructions+=5;goto B40e398;
case 0x40e39f:c.instructions+=4;goto B40e39f;
case 0x40e3a1:c.instructions+=3;goto B40e3a1;
case 0x40e3a4:c.instructions+=2;goto B40e3a4;
case 0x40e3a8:c.instructions+=1;goto B40e3a8;
case 0x40e3aa:goto L40e3aa;
case 0x40e3ab:c.instructions+=3;goto B40e3ab;
case 0x40e3ae:c.instructions+=2;goto B40e3ae;
case 0x40e3b1:c.instructions+=1;goto B40e3b1;
case 0x40e3b6:goto L40e3b6;
case 0x40e3b8:c.instructions+=1;goto B40e3b8;
case 0x40e3ba:goto L40e3ba;
case 0x40e3bc:c.instructions+=3;goto B40e3bc;
case 0x40e3bd:c.instructions+=2;goto B40e3bd;
case 0x40e3bf:c.instructions+=1;goto B40e3bf;
case 0x40e3c5:goto L40e3c5;
case 0x40e3c7:c.instructions+=1;goto B40e3c7;
case 0x40e3c9:goto L40e3c9;
case 0x40e3d0:goto L40e3d0;
case 0x40e3d1:goto L40e3d1;
case 0x40e3d2:c.instructions+=2;goto B40e3d2;
case 0x40e3d3:c.instructions+=1;goto B40e3d3;
case 0x40e3e0:goto L40e3e0;
case 0x40e3e1:c.instructions+=7;goto B40e3e1;
case 0x40e3e5:c.instructions+=6;goto B40e3e5;
case 0x40e3e6:c.instructions+=5;goto B40e3e6;
case 0x40e3eb:c.instructions+=4;goto B40e3eb;
case 0x40e3ed:c.instructions+=3;goto B40e3ed;
case 0x40e3ef:c.instructions+=2;goto B40e3ef;
case 0x40e3f1:c.instructions+=1;goto B40e3f1;
case 0x40e3f6:goto L40e3f6;
case 0x40e3f7:c.instructions+=2;goto B40e3f7;
case 0x40e3f9:c.instructions+=1;goto B40e3f9;
case 0x40e3fe:goto L40e3fe;
case 0x40e404:c.instructions+=3;goto B40e404;
case 0x40e405:c.instructions+=2;goto B40e405;
case 0x40e407:c.instructions+=1;goto B40e407;
case 0x40e40c:goto L40e40c;
case 0x40e40e:c.instructions+=1;goto B40e40e;
case 0x40e413:goto L40e413;
case 0x40e414:c.instructions+=2;goto B40e414;
case 0x40e415:c.instructions+=1;goto B40e415;
case 0x40e420:goto L40e420;
case 0x40e421:c.instructions+=7;goto B40e421;
case 0x40e425:c.instructions+=6;goto B40e425;
case 0x40e426:c.instructions+=5;goto B40e426;
case 0x40e42b:c.instructions+=4;goto B40e42b;
case 0x40e42d:c.instructions+=3;goto B40e42d;
case 0x40e42f:c.instructions+=2;goto B40e42f;
case 0x40e431:c.instructions+=1;goto B40e431;
case 0x40e436:goto L40e436;
case 0x40e437:c.instructions+=2;goto B40e437;
case 0x40e439:c.instructions+=1;goto B40e439;
case 0x40e43e:goto L40e43e;
case 0x40e440:c.instructions+=1;goto B40e440;
case 0x40e445:goto L40e445;
case 0x40e446:c.instructions+=2;goto B40e446;
case 0x40e447:c.instructions+=1;goto B40e447;
case 0x40e450:goto L40e450;
case 0x40e451:c.instructions+=7;goto B40e451;
case 0x40e455:c.instructions+=6;goto B40e455;
case 0x40e456:c.instructions+=5;goto B40e456;
case 0x40e45b:c.instructions+=4;goto B40e45b;
case 0x40e45d:c.instructions+=3;goto B40e45d;
case 0x40e45f:c.instructions+=2;goto B40e45f;
case 0x40e461:c.instructions+=1;goto B40e461;
case 0x40e466:goto L40e466;
case 0x40e46c:c.instructions+=3;goto B40e46c;
case 0x40e46d:c.instructions+=2;goto B40e46d;
case 0x40e46f:c.instructions+=1;goto B40e46f;
case 0x40e474:goto L40e474;
case 0x40e475:c.instructions+=2;goto B40e475;
case 0x40e47b:c.instructions+=1;goto B40e47b;
case 0x40e480:goto L40e480;
case 0x40e481:c.instructions+=2;goto B40e481;
case 0x40e483:c.instructions+=1;goto B40e483;
case 0x40e488:goto L40e488;
case 0x40e48a:c.instructions+=1;goto B40e48a;
case 0x40e48f:goto L40e48f;
case 0x40e490:c.instructions+=2;goto B40e490;
case 0x40e491:c.instructions+=1;goto B40e491;
case 0x40e4a0:goto L40e4a0;
case 0x40e4a1:c.instructions+=10;goto B40e4a1;
case 0x40e4a2:c.instructions+=9;goto B40e4a2;
case 0x40e4a6:c.instructions+=8;goto B40e4a6;
case 0x40e4a7:c.instructions+=7;goto B40e4a7;
case 0x40e4a8:c.instructions+=6;goto B40e4a8;
case 0x40e4aa:c.instructions+=5;goto B40e4aa;
case 0x40e4b0:c.instructions+=4;goto B40e4b0;
case 0x40e4b1:c.instructions+=3;goto B40e4b1;
case 0x40e4b3:c.instructions+=2;goto B40e4b3;
case 0x40e4b5:c.instructions+=1;goto B40e4b5;
case 0x40e4ba:goto L40e4ba;
case 0x40e4bc:c.instructions+=2;goto B40e4bc;
case 0x40e4be:c.instructions+=1;goto B40e4be;
case 0x40e4c0:goto L40e4c0;
case 0x40e4c5:c.instructions+=8;goto B40e4c5;
case 0x40e4cb:c.instructions+=7;goto B40e4cb;
case 0x40e4cf:c.instructions+=6;goto B40e4cf;
case 0x40e4d3:c.instructions+=5;goto B40e4d3;
case 0x40e4d9:c.instructions+=4;goto B40e4d9;
case 0x40e4df:c.instructions+=3;goto B40e4df;
case 0x40e4e1:c.instructions+=2;goto B40e4e1;
case 0x40e4e4:c.instructions+=1;goto B40e4e4;
case 0x40e4e6:goto L40e4e6;
case 0x40e4e7:c.instructions+=2;goto B40e4e7;
case 0x40e4e9:c.instructions+=1;goto B40e4e9;
case 0x40e4ee:goto L40e4ee;
case 0x40e4f2:c.instructions+=4;goto B40e4f2;
case 0x40e4f8:c.instructions+=3;goto B40e4f8;
case 0x40e4fa:c.instructions+=2;goto B40e4fa;
case 0x40e4fd:c.instructions+=1;goto B40e4fd;
case 0x40e4ff:goto L40e4ff;
case 0x40e503:c.instructions+=11;goto B40e503;
case 0x40e50a:c.instructions+=10;goto B40e50a;
case 0x40e50d:c.instructions+=9;goto B40e50d;
case 0x40e511:c.instructions+=8;goto B40e511;
case 0x40e514:c.instructions+=7;goto B40e514;
case 0x40e516:c.instructions+=6;goto B40e516;
case 0x40e51b:c.instructions+=5;goto B40e51b;
case 0x40e51c:c.instructions+=4;goto B40e51c;
case 0x40e51d:c.instructions+=3;goto B40e51d;
case 0x40e51e:c.instructions+=2;goto B40e51e;
case 0x40e51f:c.instructions+=1;goto B40e51f;
case 0x40e524:goto L40e524;
case 0x40e527:c.instructions+=2;goto B40e527;
case 0x40e529:c.instructions+=1;goto B40e529;
case 0x40e52b:goto L40e52b;
case 0x40e52f:c.instructions+=4;goto B40e52f;
case 0x40e535:c.instructions+=3;goto B40e535;
case 0x40e537:c.instructions+=2;goto B40e537;
case 0x40e53a:c.instructions+=1;goto B40e53a;
case 0x40e53c:goto L40e53c;
case 0x40e53d:c.instructions+=5;goto B40e53d;
case 0x40e53e:c.instructions+=4;goto B40e53e;
case 0x40e53f:c.instructions+=3;goto B40e53f;
case 0x40e541:c.instructions+=2;goto B40e541;
case 0x40e542:c.instructions+=1;goto B40e542;
case 0x40e545:goto L40e545;
case 0x40e546:c.instructions+=5;goto B40e546;
case 0x40e547:c.instructions+=4;goto B40e547;
case 0x40e548:c.instructions+=3;goto B40e548;
case 0x40e54a:c.instructions+=2;goto B40e54a;
case 0x40e54b:c.instructions+=1;goto B40e54b;
case 0x40e550:goto L40e550;
case 0x40e551:c.instructions+=7;goto B40e551;
case 0x40e555:c.instructions+=6;goto B40e555;
case 0x40e556:c.instructions+=5;goto B40e556;
case 0x40e55b:c.instructions+=4;goto B40e55b;
case 0x40e55d:c.instructions+=3;goto B40e55d;
case 0x40e55f:c.instructions+=2;goto B40e55f;
case 0x40e561:c.instructions+=1;goto B40e561;
case 0x40e566:goto L40e566;
case 0x40e567:c.instructions+=2;goto B40e567;
case 0x40e56d:c.instructions+=1;goto B40e56d;
case 0x40e572:goto L40e572;
case 0x40e573:c.instructions+=2;goto B40e573;
case 0x40e575:c.instructions+=1;goto B40e575;
case 0x40e57a:goto L40e57a;
case 0x40e57c:c.instructions+=1;goto B40e57c;
case 0x40e581:goto L40e581;
case 0x40e582:c.instructions+=2;goto B40e582;
case 0x40e583:c.instructions+=1;goto B40e583;
case 0x40e590:goto L40e590;
case 0x40e591:c.instructions+=7;goto B40e591;
case 0x40e595:c.instructions+=6;goto B40e595;
case 0x40e596:c.instructions+=5;goto B40e596;
case 0x40e59b:c.instructions+=4;goto B40e59b;
case 0x40e59d:c.instructions+=3;goto B40e59d;
case 0x40e59f:c.instructions+=2;goto B40e59f;
case 0x40e5a1:c.instructions+=1;goto B40e5a1;
case 0x40e5a6:goto L40e5a6;
case 0x40e5a7:c.instructions+=2;goto B40e5a7;
case 0x40e5ad:c.instructions+=1;goto B40e5ad;
case 0x40e5b2:goto L40e5b2;
case 0x40e5b3:c.instructions+=2;goto B40e5b3;
case 0x40e5b5:c.instructions+=1;goto B40e5b5;
case 0x40e5ba:goto L40e5ba;
case 0x40e5bc:c.instructions+=1;goto B40e5bc;
case 0x40e5c1:goto L40e5c1;
case 0x40e5c2:c.instructions+=2;goto B40e5c2;
case 0x40e5c3:c.instructions+=1;goto B40e5c3;
case 0x40e5d0:goto L40e5d0;
case 0x40e5d1:c.instructions+=15;goto B40e5d1;
case 0x40e5d2:c.instructions+=14;goto B40e5d2;
case 0x40e5d3:c.instructions+=13;goto B40e5d3;
case 0x40e5d4:c.instructions+=12;goto B40e5d4;
case 0x40e5d8:c.instructions+=11;goto B40e5d8;
case 0x40e5df:c.instructions+=10;goto B40e5df;
case 0x40e5e2:c.instructions+=9;goto B40e5e2;
case 0x40e5e3:c.instructions+=8;goto B40e5e3;
case 0x40e5e6:c.instructions+=7;goto B40e5e6;
case 0x40e5e8:c.instructions+=6;goto B40e5e8;
case 0x40e5ec:c.instructions+=5;goto B40e5ec;
case 0x40e5f2:c.instructions+=4;goto B40e5f2;
case 0x40e5f3:c.instructions+=3;goto B40e5f3;
case 0x40e5f5:c.instructions+=2;goto B40e5f5;
case 0x40e5f7:c.instructions+=1;goto B40e5f7;
case 0x40e5fc:goto L40e5fc;
case 0x40e5fe:c.instructions+=1;goto B40e5fe;
case 0x40e600:goto L40e600;
case 0x40e606:c.instructions+=2;goto B40e606;
case 0x40e608:c.instructions+=1;goto B40e608;
case 0x40e60a:goto L40e60a;
case 0x40e60d:c.instructions+=6;goto B40e60d;
case 0x40e610:c.instructions+=5;goto B40e610;
case 0x40e614:c.instructions+=4;goto B40e614;
case 0x40e615:c.instructions+=3;goto B40e615;
case 0x40e617:c.instructions+=2;goto B40e617;
case 0x40e61b:c.instructions+=1;goto B40e61b;
case 0x40e620:goto L40e620;
case 0x40e624:c.instructions+=5;goto B40e624;
case 0x40e628:c.instructions+=4;goto B40e628;
case 0x40e62e:c.instructions+=3;goto B40e62e;
case 0x40e630:c.instructions+=2;goto B40e630;
case 0x40e633:c.instructions+=1;goto B40e633;
case 0x40e635:goto L40e635;
case 0x40e636:c.instructions+=6;goto B40e636;
case 0x40e637:c.instructions+=5;goto B40e637;
case 0x40e638:c.instructions+=4;goto B40e638;
case 0x40e63a:c.instructions+=3;goto B40e63a;
case 0x40e63b:c.instructions+=2;goto B40e63b;
case 0x40e63c:c.instructions+=1;goto B40e63c;
case 0x40e63f:goto L40e63f;
case 0x40e640:c.instructions+=6;goto B40e640;
case 0x40e641:c.instructions+=5;goto B40e641;
case 0x40e642:c.instructions+=4;goto B40e642;
case 0x40e644:c.instructions+=3;goto B40e644;
case 0x40e645:c.instructions+=2;goto B40e645;
case 0x40e646:c.instructions+=1;goto B40e646;
case 0x40e649:goto L40e649;
case 0x40e64a:c.instructions+=6;goto B40e64a;
case 0x40e64b:c.instructions+=5;goto B40e64b;
case 0x40e64c:c.instructions+=4;goto B40e64c;
case 0x40e64e:c.instructions+=3;goto B40e64e;
case 0x40e64f:c.instructions+=2;goto B40e64f;
case 0x40e650:c.instructions+=1;goto B40e650;
case 0x40e660:goto L40e660;
case 0x40e661:c.instructions+=7;goto B40e661;
case 0x40e665:c.instructions+=6;goto B40e665;
case 0x40e666:c.instructions+=5;goto B40e666;
case 0x40e66b:c.instructions+=4;goto B40e66b;
case 0x40e66d:c.instructions+=3;goto B40e66d;
case 0x40e66f:c.instructions+=2;goto B40e66f;
case 0x40e671:c.instructions+=1;goto B40e671;
case 0x40e676:goto L40e676;
case 0x40e677:c.instructions+=2;goto B40e677;
case 0x40e679:c.instructions+=1;goto B40e679;
case 0x40e67e:goto L40e67e;
case 0x40e684:c.instructions+=3;goto B40e684;
case 0x40e685:c.instructions+=2;goto B40e685;
case 0x40e687:c.instructions+=1;goto B40e687;
case 0x40e68c:goto L40e68c;
case 0x40e692:c.instructions+=3;goto B40e692;
case 0x40e693:c.instructions+=2;goto B40e693;
case 0x40e695:c.instructions+=1;goto B40e695;
case 0x40e69a:goto L40e69a;
case 0x40e69c:c.instructions+=6;goto B40e69c;
case 0x40e69e:c.instructions+=5;goto B40e69e;
case 0x40e6a0:c.instructions+=4;goto B40e6a0;
case 0x40e6a6:c.instructions+=3;goto B40e6a6;
case 0x40e6a7:c.instructions+=2;goto B40e6a7;
case 0x40e6a9:c.instructions+=1;goto B40e6a9;
case 0x40e6ae:goto L40e6ae;
case 0x40e6b0:c.instructions+=6;goto B40e6b0;
case 0x40e6b2:c.instructions+=5;goto B40e6b2;
case 0x40e6b4:c.instructions+=4;goto B40e6b4;
case 0x40e6ba:c.instructions+=3;goto B40e6ba;
case 0x40e6bb:c.instructions+=2;goto B40e6bb;
case 0x40e6bd:c.instructions+=1;goto B40e6bd;
case 0x40e6c2:goto L40e6c2;
case 0x40e6c8:c.instructions+=3;goto B40e6c8;
case 0x40e6c9:c.instructions+=2;goto B40e6c9;
case 0x40e6cb:c.instructions+=1;goto B40e6cb;
case 0x40e6d0:goto L40e6d0;
case 0x40e6d2:c.instructions+=1;goto B40e6d2;
case 0x40e6d7:goto L40e6d7;
case 0x40e6d8:c.instructions+=2;goto B40e6d8;
case 0x40e6d9:c.instructions+=1;goto B40e6d9;
case 0x40e6e0:goto L40e6e0;
case 0x40e6e4:c.instructions+=33;goto B40e6e4;
case 0x40e6e8:c.instructions+=32;goto B40e6e8;
case 0x40e6e9:c.instructions+=31;goto B40e6e9;
case 0x40e6ed:c.instructions+=30;goto B40e6ed;
case 0x40e6ef:c.instructions+=29;goto B40e6ef;
case 0x40e6f3:c.instructions+=28;goto B40e6f3;
case 0x40e6f7:c.instructions+=27;goto B40e6f7;
case 0x40e6fb:c.instructions+=26;goto B40e6fb;
case 0x40e6ff:c.instructions+=25;goto B40e6ff;
case 0x40e703:c.instructions+=24;goto B40e703;
case 0x40e706:c.instructions+=23;goto B40e706;
case 0x40e70c:c.instructions+=22;goto B40e70c;
case 0x40e70f:c.instructions+=21;goto B40e70f;
case 0x40e713:c.instructions+=20;goto B40e713;
case 0x40e717:c.instructions+=19;goto B40e717;
case 0x40e71e:c.instructions+=18;goto B40e71e;
case 0x40e721:c.instructions+=17;goto B40e721;
case 0x40e727:c.instructions+=16;goto B40e727;
case 0x40e72a:c.instructions+=15;goto B40e72a;
case 0x40e72e:c.instructions+=14;goto B40e72e;
case 0x40e734:c.instructions+=13;goto B40e734;
case 0x40e738:c.instructions+=12;goto B40e738;
case 0x40e73a:c.instructions+=11;goto B40e73a;
case 0x40e73b:c.instructions+=10;goto B40e73b;
case 0x40e73d:c.instructions+=9;goto B40e73d;
case 0x40e73f:c.instructions+=8;goto B40e73f;
case 0x40e742:c.instructions+=7;goto B40e742;
case 0x40e745:c.instructions+=6;goto B40e745;
case 0x40e747:c.instructions+=5;goto B40e747;
case 0x40e749:c.instructions+=4;goto B40e749;
case 0x40e74b:c.instructions+=3;goto B40e74b;
case 0x40e74d:c.instructions+=2;goto B40e74d;
case 0x40e74f:c.instructions+=1;goto B40e74f;
case 0x40e760:goto L40e760;
case 0x40e761:c.instructions+=7;goto B40e761;
case 0x40e765:c.instructions+=6;goto B40e765;
case 0x40e766:c.instructions+=5;goto B40e766;
case 0x40e76b:c.instructions+=4;goto B40e76b;
case 0x40e76d:c.instructions+=3;goto B40e76d;
case 0x40e76f:c.instructions+=2;goto B40e76f;
case 0x40e771:c.instructions+=1;goto B40e771;
case 0x40e776:goto L40e776;
case 0x40e77c:c.instructions+=3;goto B40e77c;
case 0x40e77d:c.instructions+=2;goto B40e77d;
case 0x40e77f:c.instructions+=1;goto B40e77f;
case 0x40e784:goto L40e784;
case 0x40e78a:c.instructions+=3;goto B40e78a;
case 0x40e78b:c.instructions+=2;goto B40e78b;
case 0x40e78d:c.instructions+=1;goto B40e78d;
case 0x40e792:goto L40e792;
case 0x40e794:c.instructions+=6;goto B40e794;
case 0x40e796:c.instructions+=5;goto B40e796;
case 0x40e798:c.instructions+=4;goto B40e798;
case 0x40e79e:c.instructions+=3;goto B40e79e;
case 0x40e79f:c.instructions+=2;goto B40e79f;
case 0x40e7a1:c.instructions+=1;goto B40e7a1;
case 0x40e7a6:goto L40e7a6;
case 0x40e7a7:c.instructions+=2;goto B40e7a7;
case 0x40e7a9:c.instructions+=1;goto B40e7a9;
case 0x40e7ae:goto L40e7ae;
case 0x40e7b0:c.instructions+=1;goto B40e7b0;
case 0x40e7b5:goto L40e7b5;
case 0x40e7b6:c.instructions+=2;goto B40e7b6;
case 0x40e7b7:c.instructions+=1;goto B40e7b7;
case 0x40e7c0:goto L40e7c0;
case 0x40e7c3:c.instructions+=9;goto B40e7c3;
case 0x40e7c4:c.instructions+=8;goto B40e7c4;
case 0x40e7c8:c.instructions+=7;goto B40e7c8;
case 0x40e7c9:c.instructions+=6;goto B40e7c9;
case 0x40e7ca:c.instructions+=5;goto B40e7ca;
case 0x40e7cb:c.instructions+=4;goto B40e7cb;
case 0x40e7cd:c.instructions+=3;goto B40e7cd;
case 0x40e7cf:c.instructions+=2;goto B40e7cf;
case 0x40e7d3:c.instructions+=1;goto B40e7d3;
case 0x40e7d8:goto L40e7d8;
case 0x40e7de:c.instructions+=4;goto B40e7de;
case 0x40e7df:c.instructions+=3;goto B40e7df;
case 0x40e7e1:c.instructions+=2;goto B40e7e1;
case 0x40e7e6:c.instructions+=1;goto B40e7e6;
case 0x40e7eb:goto L40e7eb;
case 0x40e7ed:c.instructions+=1;goto B40e7ed;
case 0x40e7f3:goto L40e7f3;
case 0x40e7f5:c.instructions+=1;goto B40e7f5;
case 0x40e7fa:goto L40e7fa;
case 0x40e800:c.instructions+=3;goto B40e800;
case 0x40e802:c.instructions+=2;goto B40e802;
case 0x40e805:c.instructions+=1;goto B40e805;
case 0x40e80b:goto L40e80b;
case 0x40e812:c.instructions+=5;goto B40e812;
case 0x40e815:c.instructions+=4;goto B40e815;
case 0x40e818:c.instructions+=3;goto B40e818;
case 0x40e81d:c.instructions+=2;goto B40e81d;
case 0x40e824:c.instructions+=1;goto B40e824;
case 0x40e829:goto L40e829;
case 0x40e82b:c.instructions+=1;goto B40e82b;
case 0x40e831:goto L40e831;
case 0x40e836:c.instructions+=2;goto B40e836;
case 0x40e838:c.instructions+=1;goto B40e838;
case 0x40e83e:goto L40e83e;
case 0x40e843:c.instructions+=2;goto B40e843;
case 0x40e845:c.instructions+=1;goto B40e845;
case 0x40e84b:goto L40e84b;
case 0x40e850:c.instructions+=2;goto B40e850;
case 0x40e852:c.instructions+=1;goto B40e852;
case 0x40e858:goto L40e858;
case 0x40e85d:c.instructions+=2;goto B40e85d;
case 0x40e85f:c.instructions+=1;goto B40e85f;
case 0x40e865:goto L40e865;
case 0x40e867:c.instructions+=1;goto B40e867;
case 0x40e869:goto L40e869;
case 0x40e86c:c.instructions+=10;goto B40e86c;
case 0x40e86f:c.instructions+=9;goto B40e86f;
case 0x40e871:c.instructions+=8;goto B40e871;
case 0x40e873:c.instructions+=7;goto B40e873;
case 0x40e876:c.instructions+=6;goto B40e876;
case 0x40e878:c.instructions+=5;goto B40e878;
case 0x40e879:c.instructions+=4;goto B40e879;
case 0x40e87a:c.instructions+=3;goto B40e87a;
case 0x40e87d:c.instructions+=2;goto B40e87d;
case 0x40e87e:c.instructions+=1;goto B40e87e;
case 0x40e883:goto L40e883;
case 0x40e884:c.instructions+=3;goto B40e884;
case 0x40e886:c.instructions+=2;goto B40e886;
case 0x40e889:c.instructions+=1;goto B40e889;
case 0x40e88e:goto L40e88e;
case 0x40e894:c.instructions+=3;goto B40e894;
case 0x40e896:c.instructions+=2;goto B40e896;
case 0x40e899:c.instructions+=1;goto B40e899;
case 0x40e89b:goto L40e89b;
case 0x40e89d:c.instructions+=3;goto B40e89d;
case 0x40e8a0:c.instructions+=2;goto B40e8a0;
case 0x40e8a3:c.instructions+=1;goto B40e8a3;
case 0x40e8a5:goto L40e8a5;
case 0x40e8ab:c.instructions+=4;goto B40e8ab;
case 0x40e8b1:c.instructions+=3;goto B40e8b1;
case 0x40e8b3:c.instructions+=2;goto B40e8b3;
case 0x40e8b6:c.instructions+=1;goto B40e8b6;
case 0x40e8b8:goto L40e8b8;
case 0x40e8bb:c.instructions+=1;goto B40e8bb;
case 0x40e8bd:goto L40e8bd;
case 0x40e8c3:c.instructions+=4;goto B40e8c3;
case 0x40e8c9:c.instructions+=3;goto B40e8c9;
case 0x40e8cb:c.instructions+=2;goto B40e8cb;
case 0x40e8ce:c.instructions+=1;goto B40e8ce;
case 0x40e8d0:goto L40e8d0;
case 0x40e8d2:c.instructions+=2;goto B40e8d2;
case 0x40e8d3:c.instructions+=1;goto B40e8d3;
case 0x40e8d8:goto L40e8d8;
case 0x40e8db:c.instructions+=2;goto B40e8db;
case 0x40e8de:c.instructions+=1;goto B40e8de;
case 0x40e8e0:goto L40e8e0;
case 0x40e8e5:goto L40e8e5;
case 0x40e8e7:c.instructions+=5;goto B40e8e7;
case 0x40e8ea:c.instructions+=4;goto B40e8ea;
case 0x40e8ed:c.instructions+=3;goto B40e8ed;
case 0x40e8ef:c.instructions+=2;goto B40e8ef;
case 0x40e8f1:c.instructions+=1;goto B40e8f1;
case 0x40e8f7:goto L40e8f7;
case 0x40e900:goto L40e900;
case 0x40e904:c.instructions+=2;goto B40e904;
case 0x40e906:c.instructions+=1;goto B40e906;
case 0x40e90c:goto L40e90c;
case 0x40e90d:c.instructions+=2;goto B40e90d;
case 0x40e90f:c.instructions+=1;goto B40e90f;
case 0x40e914:goto L40e914;
case 0x40e916:c.instructions+=4;goto B40e916;
case 0x40e918:c.instructions+=3;goto B40e918;
case 0x40e919:c.instructions+=2;goto B40e919;
case 0x40e91a:c.instructions+=1;goto B40e91a;
case 0x40e91f:goto L40e91f;
case 0x40e922:c.instructions+=2;goto B40e922;
case 0x40e924:c.instructions+=1;goto B40e924;
case 0x40e926:goto L40e926;
case 0x40e929:c.instructions+=1;goto B40e929;
case 0x40e92b:goto L40e92b;
case 0x40e92e:c.instructions+=1;goto B40e92e;
case 0x40e934:goto L40e934;
case 0x40e93a:c.instructions+=10;goto B40e93a;
case 0x40e93d:c.instructions+=9;goto B40e93d;
case 0x40e93f:c.instructions+=8;goto B40e93f;
case 0x40e941:c.instructions+=7;goto B40e941;
case 0x40e945:c.instructions+=6;goto B40e945;
case 0x40e949:c.instructions+=5;goto B40e949;
case 0x40e94f:c.instructions+=4;goto B40e94f;
case 0x40e955:c.instructions+=3;goto B40e955;
case 0x40e957:c.instructions+=2;goto B40e957;
case 0x40e95a:c.instructions+=1;goto B40e95a;
case 0x40e95c:goto L40e95c;
case 0x40e95f:c.instructions+=7;goto B40e95f;
case 0x40e963:c.instructions+=6;goto B40e963;
case 0x40e967:c.instructions+=5;goto B40e967;
case 0x40e96d:c.instructions+=4;goto B40e96d;
case 0x40e973:c.instructions+=3;goto B40e973;
case 0x40e975:c.instructions+=2;goto B40e975;
case 0x40e978:c.instructions+=1;goto B40e978;
case 0x40e97a:goto L40e97a;
case 0x40e97e:c.instructions+=6;goto B40e97e;
case 0x40e984:c.instructions+=5;goto B40e984;
case 0x40e988:c.instructions+=4;goto B40e988;
case 0x40e98e:c.instructions+=3;goto B40e98e;
case 0x40e990:c.instructions+=2;goto B40e990;
case 0x40e993:c.instructions+=1;goto B40e993;
case 0x40e995:goto L40e995;
case 0x40e99b:c.instructions+=5;goto B40e99b;
case 0x40e99f:c.instructions+=4;goto B40e99f;
case 0x40e9a4:c.instructions+=3;goto B40e9a4;
case 0x40e9a5:c.instructions+=2;goto B40e9a5;
case 0x40e9a6:c.instructions+=1;goto B40e9a6;
case 0x40e9ab:goto L40e9ab;
case 0x40e9ae:c.instructions+=2;goto B40e9ae;
case 0x40e9b0:c.instructions+=1;goto B40e9b0;
case 0x40e9b2:goto L40e9b2;
case 0x40e9b7:goto L40e9b7;
case 0x40e9bb:c.instructions+=3;goto B40e9bb;
case 0x40e9bc:c.instructions+=2;goto B40e9bc;
case 0x40e9be:c.instructions+=1;goto B40e9be;
case 0x40e9c4:goto L40e9c4;
case 0x40e9c8:c.instructions+=2;goto B40e9c8;
case 0x40e9ca:c.instructions+=1;goto B40e9ca;
case 0x40e9cc:goto L40e9cc;
case 0x40e9cd:c.instructions+=6;goto B40e9cd;
case 0x40e9ce:c.instructions+=5;goto B40e9ce;
case 0x40e9cf:c.instructions+=4;goto B40e9cf;
case 0x40e9d4:c.instructions+=3;goto B40e9d4;
case 0x40e9d5:c.instructions+=2;goto B40e9d5;
case 0x40e9d8:c.instructions+=1;goto B40e9d8;
case 0x40e9d9:goto L40e9d9;
case 0x40e9da:c.instructions+=6;goto B40e9da;
case 0x40e9db:c.instructions+=5;goto B40e9db;
case 0x40e9dc:c.instructions+=4;goto B40e9dc;
case 0x40e9df:c.instructions+=3;goto B40e9df;
case 0x40e9e0:c.instructions+=2;goto B40e9e0;
case 0x40e9e3:c.instructions+=1;goto B40e9e3;
case 0x40e9f0:goto L40e9f0;
case 0x40e9f3:c.instructions+=9;goto B40e9f3;
case 0x40e9f4:c.instructions+=8;goto B40e9f4;
case 0x40e9f5:c.instructions+=7;goto B40e9f5;
case 0x40e9f6:c.instructions+=6;goto B40e9f6;
case 0x40e9fa:c.instructions+=5;goto B40e9fa;
case 0x40e9fc:c.instructions+=4;goto B40e9fc;
case 0x40e9fe:c.instructions+=3;goto B40e9fe;
case 0x40ea00:c.instructions+=2;goto B40ea00;
case 0x40ea04:c.instructions+=1;goto B40ea04;
case 0x40ea09:goto L40ea09;
case 0x40ea0b:c.instructions+=1;goto B40ea0b;
case 0x40ea11:goto L40ea11;
case 0x40ea18:c.instructions+=5;goto B40ea18;
case 0x40ea1b:c.instructions+=4;goto B40ea1b;
case 0x40ea1e:c.instructions+=3;goto B40ea1e;
case 0x40ea23:c.instructions+=2;goto B40ea23;
case 0x40ea2a:c.instructions+=1;goto B40ea2a;
case 0x40ea2f:goto L40ea2f;
case 0x40ea31:c.instructions+=1;goto B40ea31;
case 0x40ea37:goto L40ea37;
case 0x40ea3d:c.instructions+=2;goto B40ea3d;
case 0x40ea3f:c.instructions+=1;goto B40ea3f;
case 0x40ea41:goto L40ea41;
case 0x40ea47:c.instructions+=9;goto B40ea47;
case 0x40ea4d:c.instructions+=8;goto B40ea4d;
case 0x40ea4f:c.instructions+=7;goto B40ea4f;
case 0x40ea53:c.instructions+=6;goto B40ea53;
case 0x40ea57:c.instructions+=5;goto B40ea57;
case 0x40ea5d:c.instructions+=4;goto B40ea5d;
case 0x40ea63:c.instructions+=3;goto B40ea63;
case 0x40ea65:c.instructions+=2;goto B40ea65;
case 0x40ea68:c.instructions+=1;goto B40ea68;
case 0x40ea6e:goto L40ea6e;
case 0x40ea70:c.instructions+=3;goto B40ea70;
case 0x40ea72:c.instructions+=2;goto B40ea72;
case 0x40ea73:c.instructions+=1;goto B40ea73;
case 0x40ea78:goto L40ea78;
case 0x40ea7b:c.instructions+=2;goto B40ea7b;
case 0x40ea7e:c.instructions+=1;goto B40ea7e;
case 0x40ea84:goto L40ea84;
case 0x40ea86:c.instructions+=6;goto B40ea86;
case 0x40ea89:c.instructions+=5;goto B40ea89;
case 0x40ea8c:c.instructions+=4;goto B40ea8c;
case 0x40ea8d:c.instructions+=3;goto B40ea8d;
case 0x40ea8f:c.instructions+=2;goto B40ea8f;
case 0x40ea91:c.instructions+=1;goto B40ea91;
case 0x40ea97:goto L40ea97;
case 0x40eaa0:goto L40eaa0;
case 0x40eaa4:c.instructions+=2;goto B40eaa4;
case 0x40eaa6:c.instructions+=1;goto B40eaa6;
case 0x40eaac:goto L40eaac;
case 0x40eaad:c.instructions+=2;goto B40eaad;
case 0x40eaaf:c.instructions+=1;goto B40eaaf;
case 0x40eab4:goto L40eab4;
case 0x40eab6:c.instructions+=4;goto B40eab6;
case 0x40eab8:c.instructions+=3;goto B40eab8;
case 0x40eab9:c.instructions+=2;goto B40eab9;
case 0x40eaba:c.instructions+=1;goto B40eaba;
case 0x40eabf:goto L40eabf;
case 0x40eac2:c.instructions+=2;goto B40eac2;
case 0x40eac5:c.instructions+=1;goto B40eac5;
case 0x40eac7:goto L40eac7;
case 0x40eaca:c.instructions+=9;goto B40eaca;
case 0x40ead0:c.instructions+=8;goto B40ead0;
case 0x40ead2:c.instructions+=7;goto B40ead2;
case 0x40ead6:c.instructions+=6;goto B40ead6;
case 0x40eada:c.instructions+=5;goto B40eada;
case 0x40eae0:c.instructions+=4;goto B40eae0;
case 0x40eae6:c.instructions+=3;goto B40eae6;
case 0x40eae8:c.instructions+=2;goto B40eae8;
case 0x40eaeb:c.instructions+=1;goto B40eaeb;
case 0x40eaed:goto L40eaed;
case 0x40eaef:c.instructions+=8;goto B40eaef;
case 0x40eaf5:c.instructions+=7;goto B40eaf5;
case 0x40eaf9:c.instructions+=6;goto B40eaf9;
case 0x40eafd:c.instructions+=5;goto B40eafd;
case 0x40eaff:c.instructions+=4;goto B40eaff;
case 0x40eb05:c.instructions+=3;goto B40eb05;
case 0x40eb07:c.instructions+=2;goto B40eb07;
case 0x40eb0a:c.instructions+=1;goto B40eb0a;
case 0x40eb0c:goto L40eb0c;
case 0x40eb12:c.instructions+=5;goto B40eb12;
case 0x40eb16:c.instructions+=4;goto B40eb16;
case 0x40eb1b:c.instructions+=3;goto B40eb1b;
case 0x40eb1c:c.instructions+=2;goto B40eb1c;
case 0x40eb1d:c.instructions+=1;goto B40eb1d;
case 0x40eb22:goto L40eb22;
case 0x40eb25:c.instructions+=2;goto B40eb25;
case 0x40eb27:c.instructions+=1;goto B40eb27;
case 0x40eb29:goto L40eb29;
case 0x40eb2e:goto L40eb2e;
case 0x40eb32:c.instructions+=3;goto B40eb32;
case 0x40eb33:c.instructions+=2;goto B40eb33;
case 0x40eb35:c.instructions+=1;goto B40eb35;
case 0x40eb3b:goto L40eb3b;
case 0x40eb3f:goto L40eb3f;
case 0x40eb40:c.instructions+=5;goto B40eb40;
case 0x40eb41:c.instructions+=4;goto B40eb41;
case 0x40eb42:c.instructions+=3;goto B40eb42;
case 0x40eb43:c.instructions+=2;goto B40eb43;
case 0x40eb46:c.instructions+=1;goto B40eb46;
case 0x40eb49:goto L40eb49;
case 0x40eb4a:c.instructions+=5;goto B40eb4a;
case 0x40eb4b:c.instructions+=4;goto B40eb4b;
case 0x40eb4d:c.instructions+=3;goto B40eb4d;
case 0x40eb4e:c.instructions+=2;goto B40eb4e;
case 0x40eb51:c.instructions+=1;goto B40eb51;
case 0x40eb54:goto L40eb54;
case 0x40eb55:c.instructions+=5;goto B40eb55;
case 0x40eb56:c.instructions+=4;goto B40eb56;
case 0x40eb58:c.instructions+=3;goto B40eb58;
case 0x40eb59:c.instructions+=2;goto B40eb59;
case 0x40eb5c:c.instructions+=1;goto B40eb5c;
case 0x40eb60:goto L40eb60;
case 0x40eb61:c.instructions+=5;goto B40eb61;
case 0x40eb65:c.instructions+=4;goto B40eb65;
case 0x40eb67:c.instructions+=3;goto B40eb67;
case 0x40eb6a:c.instructions+=2;goto B40eb6a;
case 0x40eb6c:c.instructions+=1;goto B40eb6c;
case 0x40eb6f:goto L40eb6f;
case 0x40eb71:c.instructions+=3;goto B40eb71;
case 0x40eb73:c.instructions+=2;goto B40eb73;
case 0x40eb75:c.instructions+=1;goto B40eb75;
case 0x40eb7a:goto L40eb7a;
case 0x40eb7b:c.instructions+=1;goto B40eb7b;
case 0x40eb80:goto L40eb80;
case 0x40eb81:c.instructions+=7;goto B40eb81;
case 0x40eb85:c.instructions+=6;goto B40eb85;
case 0x40eb86:c.instructions+=5;goto B40eb86;
case 0x40eb8b:c.instructions+=4;goto B40eb8b;
case 0x40eb8d:c.instructions+=3;goto B40eb8d;
case 0x40eb8f:c.instructions+=2;goto B40eb8f;
case 0x40eb91:c.instructions+=1;goto B40eb91;
case 0x40eb96:goto L40eb96;
case 0x40eb97:c.instructions+=2;goto B40eb97;
case 0x40eb99:c.instructions+=1;goto B40eb99;
case 0x40eb9e:goto L40eb9e;
case 0x40eb9f:c.instructions+=2;goto B40eb9f;
case 0x40eba5:c.instructions+=1;goto B40eba5;
case 0x40ebaa:goto L40ebaa;
case 0x40ebb0:c.instructions+=3;goto B40ebb0;
case 0x40ebb1:c.instructions+=2;goto B40ebb1;
case 0x40ebb3:c.instructions+=1;goto B40ebb3;
case 0x40ebb8:goto L40ebb8;
case 0x40ebba:c.instructions+=1;goto B40ebba;
case 0x40ebbf:goto L40ebbf;
case 0x40ebc0:c.instructions+=2;goto B40ebc0;
case 0x40ebc1:c.instructions+=1;goto B40ebc1;
case 0x40ebd0:goto L40ebd0;
case 0x40ebd1:c.instructions+=7;goto B40ebd1;
case 0x40ebd5:c.instructions+=6;goto B40ebd5;
case 0x40ebd6:c.instructions+=5;goto B40ebd6;
case 0x40ebdb:c.instructions+=4;goto B40ebdb;
case 0x40ebdd:c.instructions+=3;goto B40ebdd;
case 0x40ebdf:c.instructions+=2;goto B40ebdf;
case 0x40ebe1:c.instructions+=1;goto B40ebe1;
case 0x40ebe6:goto L40ebe6;
case 0x40ebec:c.instructions+=3;goto B40ebec;
case 0x40ebed:c.instructions+=2;goto B40ebed;
case 0x40ebef:c.instructions+=1;goto B40ebef;
case 0x40ebf4:goto L40ebf4;
case 0x40ebf6:c.instructions+=6;goto B40ebf6;
case 0x40ebf8:c.instructions+=5;goto B40ebf8;
case 0x40ebfa:c.instructions+=4;goto B40ebfa;
case 0x40ec00:c.instructions+=3;goto B40ec00;
case 0x40ec01:c.instructions+=2;goto B40ec01;
case 0x40ec03:c.instructions+=1;goto B40ec03;
case 0x40ec08:goto L40ec08;
case 0x40ec09:c.instructions+=2;goto B40ec09;
case 0x40ec0b:c.instructions+=1;goto B40ec0b;
case 0x40ec10:goto L40ec10;
case 0x40ec12:c.instructions+=1;goto B40ec12;
case 0x40ec17:goto L40ec17;
case 0x40ec18:c.instructions+=2;goto B40ec18;
case 0x40ec19:c.instructions+=1;goto B40ec19;
case 0x40ec20:goto L40ec20;
case 0x40ec21:c.instructions+=7;goto B40ec21;
case 0x40ec25:c.instructions+=6;goto B40ec25;
case 0x40ec26:c.instructions+=5;goto B40ec26;
case 0x40ec2b:c.instructions+=4;goto B40ec2b;
case 0x40ec2d:c.instructions+=3;goto B40ec2d;
case 0x40ec2f:c.instructions+=2;goto B40ec2f;
case 0x40ec31:c.instructions+=1;goto B40ec31;
case 0x40ec36:goto L40ec36;
case 0x40ec37:c.instructions+=2;goto B40ec37;
case 0x40ec39:c.instructions+=1;goto B40ec39;
case 0x40ec3e:goto L40ec3e;
case 0x40ec40:c.instructions+=1;goto B40ec40;
case 0x40ec45:goto L40ec45;
case 0x40ec46:c.instructions+=2;goto B40ec46;
case 0x40ec47:c.instructions+=1;goto B40ec47;
case 0x40ec50:goto L40ec50;
case 0x40ec51:c.instructions+=7;goto B40ec51;
case 0x40ec55:c.instructions+=6;goto B40ec55;
case 0x40ec56:c.instructions+=5;goto B40ec56;
case 0x40ec5b:c.instructions+=4;goto B40ec5b;
case 0x40ec5d:c.instructions+=3;goto B40ec5d;
case 0x40ec5f:c.instructions+=2;goto B40ec5f;
case 0x40ec61:c.instructions+=1;goto B40ec61;
case 0x40ec66:goto L40ec66;
case 0x40ec67:c.instructions+=2;goto B40ec67;
case 0x40ec69:c.instructions+=1;goto B40ec69;
case 0x40ec6e:goto L40ec6e;
case 0x40ec6f:c.instructions+=2;goto B40ec6f;
case 0x40ec75:c.instructions+=1;goto B40ec75;
case 0x40ec7a:goto L40ec7a;
case 0x40ec80:c.instructions+=3;goto B40ec80;
case 0x40ec81:c.instructions+=2;goto B40ec81;
case 0x40ec83:c.instructions+=1;goto B40ec83;
case 0x40ec88:goto L40ec88;
case 0x40ec8e:c.instructions+=3;goto B40ec8e;
case 0x40ec8f:c.instructions+=2;goto B40ec8f;
case 0x40ec90:c.instructions+=1;goto B40ec90;
case 0x40ec95:goto L40ec95;
case 0x40ec98:c.instructions+=4;goto B40ec98;
case 0x40ec9e:c.instructions+=3;goto B40ec9e;
case 0x40ec9f:c.instructions+=2;goto B40ec9f;
case 0x40eca1:c.instructions+=1;goto B40eca1;
case 0x40eca6:goto L40eca6;
case 0x40ecac:c.instructions+=3;goto B40ecac;
case 0x40ecad:c.instructions+=2;goto B40ecad;
case 0x40ecaf:c.instructions+=1;goto B40ecaf;
case 0x40ecb4:goto L40ecb4;
case 0x40ecba:c.instructions+=3;goto B40ecba;
case 0x40ecbb:c.instructions+=2;goto B40ecbb;
case 0x40ecbd:c.instructions+=1;goto B40ecbd;
case 0x40ecc2:goto L40ecc2;
case 0x40ecc4:c.instructions+=1;goto B40ecc4;
case 0x40ecc9:goto L40ecc9;
case 0x40ecca:c.instructions+=2;goto B40ecca;
case 0x40eccb:c.instructions+=1;goto B40eccb;
case 0x40ecd0:goto L40ecd0;
case 0x40ecd1:c.instructions+=7;goto B40ecd1;
case 0x40ecd5:c.instructions+=6;goto B40ecd5;
case 0x40ecd6:c.instructions+=5;goto B40ecd6;
case 0x40ecdb:c.instructions+=4;goto B40ecdb;
case 0x40ecdd:c.instructions+=3;goto B40ecdd;
case 0x40ecdf:c.instructions+=2;goto B40ecdf;
case 0x40ece1:c.instructions+=1;goto B40ece1;
case 0x40ece6:goto L40ece6;
case 0x40ece7:c.instructions+=2;goto B40ece7;
case 0x40ece9:c.instructions+=1;goto B40ece9;
case 0x40ecee:goto L40ecee;
case 0x40ecef:c.instructions+=2;goto B40ecef;
case 0x40ecf5:c.instructions+=1;goto B40ecf5;
case 0x40ecfa:goto L40ecfa;
case 0x40ecfc:c.instructions+=1;goto B40ecfc;
case 0x40ed01:goto L40ed01;
case 0x40ed02:c.instructions+=2;goto B40ed02;
case 0x40ed03:c.instructions+=1;goto B40ed03;
case 0x40ed10:goto L40ed10;
case 0x40ed11:c.instructions+=7;goto B40ed11;
case 0x40ed15:c.instructions+=6;goto B40ed15;
case 0x40ed16:c.instructions+=5;goto B40ed16;
case 0x40ed1b:c.instructions+=4;goto B40ed1b;
case 0x40ed1d:c.instructions+=3;goto B40ed1d;
case 0x40ed1f:c.instructions+=2;goto B40ed1f;
case 0x40ed21:c.instructions+=1;goto B40ed21;
case 0x40ed26:goto L40ed26;
case 0x40ed27:c.instructions+=2;goto B40ed27;
case 0x40ed29:c.instructions+=1;goto B40ed29;
case 0x40ed2e:goto L40ed2e;
case 0x40ed30:c.instructions+=1;goto B40ed30;
case 0x40ed35:goto L40ed35;
case 0x40ed36:c.instructions+=2;goto B40ed36;
case 0x40ed37:c.instructions+=1;goto B40ed37;
case 0x40ed40:goto L40ed40;
case 0x40ed41:c.instructions+=7;goto B40ed41;
case 0x40ed45:c.instructions+=6;goto B40ed45;
case 0x40ed46:c.instructions+=5;goto B40ed46;
case 0x40ed4b:c.instructions+=4;goto B40ed4b;
case 0x40ed4d:c.instructions+=3;goto B40ed4d;
case 0x40ed4f:c.instructions+=2;goto B40ed4f;
case 0x40ed51:c.instructions+=1;goto B40ed51;
case 0x40ed56:goto L40ed56;
case 0x40ed5c:c.instructions+=3;goto B40ed5c;
case 0x40ed5d:c.instructions+=2;goto B40ed5d;
case 0x40ed5f:c.instructions+=1;goto B40ed5f;
case 0x40ed64:goto L40ed64;
case 0x40ed65:c.instructions+=2;goto B40ed65;
case 0x40ed67:c.instructions+=1;goto B40ed67;
case 0x40ed6c:goto L40ed6c;
case 0x40ed6e:c.instructions+=1;goto B40ed6e;
case 0x40ed73:goto L40ed73;
case 0x40ed74:c.instructions+=2;goto B40ed74;
case 0x40ed75:c.instructions+=1;goto B40ed75;
case 0x40ed80:goto L40ed80;
case 0x40ed81:c.instructions+=7;goto B40ed81;
case 0x40ed85:c.instructions+=6;goto B40ed85;
case 0x40ed86:c.instructions+=5;goto B40ed86;
case 0x40ed8b:c.instructions+=4;goto B40ed8b;
case 0x40ed8d:c.instructions+=3;goto B40ed8d;
case 0x40ed8f:c.instructions+=2;goto B40ed8f;
case 0x40ed91:c.instructions+=1;goto B40ed91;
case 0x40ed96:goto L40ed96;
case 0x40ed97:c.instructions+=2;goto B40ed97;
case 0x40ed99:c.instructions+=1;goto B40ed99;
case 0x40ed9e:goto L40ed9e;
case 0x40ed9f:c.instructions+=2;goto B40ed9f;
case 0x40eda5:c.instructions+=1;goto B40eda5;
case 0x40edaa:goto L40edaa;
case 0x40edb0:c.instructions+=3;goto B40edb0;
case 0x40edb1:c.instructions+=2;goto B40edb1;
case 0x40edb3:c.instructions+=1;goto B40edb3;
case 0x40edb8:goto L40edb8;
case 0x40edbe:c.instructions+=3;goto B40edbe;
case 0x40edbf:c.instructions+=2;goto B40edbf;
case 0x40edc1:c.instructions+=1;goto B40edc1;
case 0x40edc6:goto L40edc6;
case 0x40edc8:c.instructions+=1;goto B40edc8;
case 0x40edcd:goto L40edcd;
case 0x40edce:c.instructions+=2;goto B40edce;
case 0x40edcf:c.instructions+=1;goto B40edcf;
case 0x40ede0:goto L40ede0;
case 0x40ede1:c.instructions+=7;goto B40ede1;
case 0x40ede5:c.instructions+=6;goto B40ede5;
case 0x40ede6:c.instructions+=5;goto B40ede6;
case 0x40edeb:c.instructions+=4;goto B40edeb;
case 0x40eded:c.instructions+=3;goto B40eded;
case 0x40edef:c.instructions+=2;goto B40edef;
case 0x40edf1:c.instructions+=1;goto B40edf1;
case 0x40edf6:goto L40edf6;
case 0x40edf8:c.instructions+=6;goto B40edf8;
case 0x40edfa:c.instructions+=5;goto B40edfa;
case 0x40edfc:c.instructions+=4;goto B40edfc;
case 0x40ee02:c.instructions+=3;goto B40ee02;
case 0x40ee03:c.instructions+=2;goto B40ee03;
case 0x40ee05:c.instructions+=1;goto B40ee05;
case 0x40ee0a:goto L40ee0a;
case 0x40ee0c:c.instructions+=6;goto B40ee0c;
case 0x40ee0e:c.instructions+=5;goto B40ee0e;
case 0x40ee10:c.instructions+=4;goto B40ee10;
case 0x40ee16:c.instructions+=3;goto B40ee16;
case 0x40ee17:c.instructions+=2;goto B40ee17;
case 0x40ee19:c.instructions+=1;goto B40ee19;
case 0x40ee1e:goto L40ee1e;
case 0x40ee24:c.instructions+=3;goto B40ee24;
case 0x40ee25:c.instructions+=2;goto B40ee25;
case 0x40ee26:c.instructions+=1;goto B40ee26;
case 0x40ee2b:goto L40ee2b;
case 0x40ee2e:c.instructions+=3;goto B40ee2e;
case 0x40ee2f:c.instructions+=2;goto B40ee2f;
case 0x40ee31:c.instructions+=1;goto B40ee31;
case 0x40ee36:goto L40ee36;
case 0x40ee38:c.instructions+=1;goto B40ee38;
case 0x40ee3d:goto L40ee3d;
case 0x40ee3e:c.instructions+=2;goto B40ee3e;
case 0x40ee3f:c.instructions+=1;goto B40ee3f;
case 0x40ee50:goto L40ee50;
case 0x40ee51:c.instructions+=7;goto B40ee51;
case 0x40ee55:c.instructions+=6;goto B40ee55;
case 0x40ee56:c.instructions+=5;goto B40ee56;
case 0x40ee5b:c.instructions+=4;goto B40ee5b;
case 0x40ee5d:c.instructions+=3;goto B40ee5d;
case 0x40ee5f:c.instructions+=2;goto B40ee5f;
case 0x40ee61:c.instructions+=1;goto B40ee61;
case 0x40ee66:goto L40ee66;
case 0x40ee67:c.instructions+=2;goto B40ee67;
case 0x40ee69:c.instructions+=1;goto B40ee69;
case 0x40ee6e:goto L40ee6e;
case 0x40ee70:c.instructions+=6;goto B40ee70;
case 0x40ee72:c.instructions+=5;goto B40ee72;
case 0x40ee74:c.instructions+=4;goto B40ee74;
case 0x40ee7a:c.instructions+=3;goto B40ee7a;
case 0x40ee7b:c.instructions+=2;goto B40ee7b;
case 0x40ee7d:c.instructions+=1;goto B40ee7d;
case 0x40ee82:goto L40ee82;
case 0x40ee84:c.instructions+=1;goto B40ee84;
case 0x40ee89:goto L40ee89;
case 0x40ee8a:c.instructions+=2;goto B40ee8a;
case 0x40ee8b:c.instructions+=1;goto B40ee8b;
case 0x40ee90:goto L40ee90;
case 0x40ee94:c.instructions+=12;goto B40ee94;
case 0x40ee96:c.instructions+=11;goto B40ee96;
case 0x40ee99:c.instructions+=10;goto B40ee99;
case 0x40ee9b:c.instructions+=9;goto B40ee9b;
case 0x40eea0:c.instructions+=8;goto B40eea0;
case 0x40eea1:c.instructions+=7;goto B40eea1;
case 0x40eea3:c.instructions+=6;goto B40eea3;
case 0x40eea6:c.instructions+=5;goto B40eea6;
case 0x40eea9:c.instructions+=4;goto B40eea9;
case 0x40eeac:c.instructions+=3;goto B40eeac;
case 0x40eeae:c.instructions+=2;goto B40eeae;
case 0x40eeaf:c.instructions+=1;goto B40eeaf;
case 0x40eeb4:goto L40eeb4;
case 0x40eec0:goto L40eec0;
case 0x40eec1:c.instructions+=7;goto B40eec1;
case 0x40eec5:c.instructions+=6;goto B40eec5;
case 0x40eec6:c.instructions+=5;goto B40eec6;
case 0x40eecb:c.instructions+=4;goto B40eecb;
case 0x40eecd:c.instructions+=3;goto B40eecd;
case 0x40eecf:c.instructions+=2;goto B40eecf;
case 0x40eed1:c.instructions+=1;goto B40eed1;
case 0x40eed6:goto L40eed6;
case 0x40eedc:c.instructions+=4;goto B40eedc;
case 0x40eee2:c.instructions+=3;goto B40eee2;
case 0x40eee3:c.instructions+=2;goto B40eee3;
case 0x40eee4:c.instructions+=1;goto B40eee4;
case 0x40eee9:goto L40eee9;
case 0x40eeef:c.instructions+=3;goto B40eeef;
case 0x40eef0:c.instructions+=2;goto B40eef0;
case 0x40eef2:c.instructions+=1;goto B40eef2;
case 0x40eef7:goto L40eef7;
case 0x40eefd:c.instructions+=3;goto B40eefd;
case 0x40eefe:c.instructions+=2;goto B40eefe;
case 0x40ef00:c.instructions+=1;goto B40ef00;
case 0x40ef05:goto L40ef05;
case 0x40ef07:c.instructions+=6;goto B40ef07;
case 0x40ef09:c.instructions+=5;goto B40ef09;
case 0x40ef0b:c.instructions+=4;goto B40ef0b;
case 0x40ef11:c.instructions+=3;goto B40ef11;
case 0x40ef12:c.instructions+=2;goto B40ef12;
case 0x40ef14:c.instructions+=1;goto B40ef14;
case 0x40ef19:goto L40ef19;
case 0x40ef1a:c.instructions+=2;goto B40ef1a;
case 0x40ef1c:c.instructions+=1;goto B40ef1c;
case 0x40ef21:goto L40ef21;
case 0x40ef23:c.instructions+=1;goto B40ef23;
case 0x40ef28:goto L40ef28;
case 0x40ef29:c.instructions+=2;goto B40ef29;
case 0x40ef2a:c.instructions+=1;goto B40ef2a;
case 0x40ef30:goto L40ef30;
case 0x40ef31:c.instructions+=7;goto B40ef31;
case 0x40ef35:c.instructions+=6;goto B40ef35;
case 0x40ef36:c.instructions+=5;goto B40ef36;
case 0x40ef3b:c.instructions+=4;goto B40ef3b;
case 0x40ef3d:c.instructions+=3;goto B40ef3d;
case 0x40ef3f:c.instructions+=2;goto B40ef3f;
case 0x40ef41:c.instructions+=1;goto B40ef41;
case 0x40ef46:goto L40ef46;
case 0x40ef4c:c.instructions+=4;goto B40ef4c;
case 0x40ef52:c.instructions+=3;goto B40ef52;
case 0x40ef53:c.instructions+=2;goto B40ef53;
case 0x40ef54:c.instructions+=1;goto B40ef54;
case 0x40ef59:goto L40ef59;
case 0x40ef5f:c.instructions+=3;goto B40ef5f;
case 0x40ef60:c.instructions+=2;goto B40ef60;
case 0x40ef62:c.instructions+=1;goto B40ef62;
case 0x40ef67:goto L40ef67;
case 0x40ef6d:c.instructions+=3;goto B40ef6d;
case 0x40ef6e:c.instructions+=2;goto B40ef6e;
case 0x40ef70:c.instructions+=1;goto B40ef70;
case 0x40ef75:goto L40ef75;
case 0x40ef76:c.instructions+=2;goto B40ef76;
case 0x40ef78:c.instructions+=1;goto B40ef78;
case 0x40ef7d:goto L40ef7d;
case 0x40ef7f:c.instructions+=1;goto B40ef7f;
case 0x40ef84:goto L40ef84;
case 0x40ef85:c.instructions+=2;goto B40ef85;
case 0x40ef86:c.instructions+=1;goto B40ef86;
case 0x40ef90:goto L40ef90;
case 0x40ef91:c.instructions+=7;goto B40ef91;
case 0x40ef95:c.instructions+=6;goto B40ef95;
case 0x40ef96:c.instructions+=5;goto B40ef96;
case 0x40ef9b:c.instructions+=4;goto B40ef9b;
case 0x40ef9d:c.instructions+=3;goto B40ef9d;
case 0x40ef9f:c.instructions+=2;goto B40ef9f;
case 0x40efa1:c.instructions+=1;goto B40efa1;
case 0x40efa6:goto L40efa6;
case 0x40efac:c.instructions+=3;goto B40efac;
case 0x40efad:c.instructions+=2;goto B40efad;
case 0x40efaf:c.instructions+=1;goto B40efaf;
case 0x40efb4:goto L40efb4;
case 0x40efb6:c.instructions+=6;goto B40efb6;
case 0x40efb8:c.instructions+=5;goto B40efb8;
case 0x40efba:c.instructions+=4;goto B40efba;
case 0x40efc0:c.instructions+=3;goto B40efc0;
case 0x40efc1:c.instructions+=2;goto B40efc1;
case 0x40efc3:c.instructions+=1;goto B40efc3;
case 0x40efc8:goto L40efc8;
case 0x40efc9:c.instructions+=2;goto B40efc9;
case 0x40efcb:c.instructions+=1;goto B40efcb;
case 0x40efd0:goto L40efd0;
case 0x40efd2:c.instructions+=1;goto B40efd2;
case 0x40efd7:goto L40efd7;
case 0x40efd8:c.instructions+=2;goto B40efd8;
case 0x40efd9:c.instructions+=1;goto B40efd9;
case 0x40efe0:goto L40efe0;
case 0x40efe4:c.instructions+=6;goto B40efe4;
case 0x40efe5:c.instructions+=5;goto B40efe5;
case 0x40efe7:c.instructions+=4;goto B40efe7;
case 0x40efe8:c.instructions+=3;goto B40efe8;
case 0x40efeb:c.instructions+=2;goto B40efeb;
case 0x40efec:c.instructions+=1;goto B40efec;
case 0x40eff1:goto L40eff1;
case 0x40eff7:c.instructions+=3;goto B40eff7;
case 0x40effa:c.instructions+=2;goto B40effa;
case 0x40effc:c.instructions+=1;goto B40effc;
case 0x40effe:goto L40effe;
default:missing_instruction(c.pc);}
B40e001:L40e001:{c.instructions+=22;NFSU2_TR(0x40e001);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40e005:{NFSU2_TR(0x40e005);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B40e007:{NFSU2_TR(0x40e007);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40e00b:{NFSU2_TR(0x40e00b);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B40e00d:{NFSU2_TR(0x40e00d);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40e011:{NFSU2_TR(0x40e011);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40e015:{NFSU2_TR(0x40e015);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B40e017:{NFSU2_TR(0x40e017);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40e01b:{NFSU2_TR(0x40e01b);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B40e01d:{NFSU2_TR(0x40e01d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40e021:{NFSU2_TR(0x40e021);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40e023:{NFSU2_TR(0x40e023);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40e027:{NFSU2_TR(0x40e027);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40e02b:{NFSU2_TR(0x40e02b);
{u32 ea_=u32(u32(7878236u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B40e031:{NFSU2_TR(0x40e031);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40e035:{NFSU2_TR(0x40e035);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40e039:{NFSU2_TR(0x40e039);
{u32 ea_=u32(u32(7881568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40e03f:{NFSU2_TR(0x40e03f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40e043:{NFSU2_TR(0x40e043);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40e049:{NFSU2_TR(0x40e049);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40e04b:{NFSU2_TR(0x40e04b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40e04e:{NFSU2_TR(0x40e04e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40e0b0;}}
}
B40e050:L40e050:{c.instructions+=5;NFSU2_TR(0x40e050);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40e054:{NFSU2_TR(0x40e054);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40e05a:{NFSU2_TR(0x40e05a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40e05c:{NFSU2_TR(0x40e05c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40e05f:{NFSU2_TR(0x40e05f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40e0b0;}}
}
B40e061:L40e061:{c.instructions+=5;NFSU2_TR(0x40e061);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40e065:{NFSU2_TR(0x40e065);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40e06b:{NFSU2_TR(0x40e06b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40e06d:{NFSU2_TR(0x40e06d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40e070:{NFSU2_TR(0x40e070);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40e0b0;}}
}
B40e072:L40e072:{c.instructions+=4;NFSU2_TR(0x40e072);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40e074:{NFSU2_TR(0x40e074);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40e078:{NFSU2_TR(0x40e078);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B40e07c:{NFSU2_TR(0x40e07c);
{goto L40e0ed;}
}
B40e07e:L40e07e:{c.instructions+=7;NFSU2_TR(0x40e07e);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B40e082:{NFSU2_TR(0x40e082);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B40e085:{NFSU2_TR(0x40e085);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B40e088:{NFSU2_TR(0x40e088);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40e08c:{NFSU2_TR(0x40e08c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40e090:{NFSU2_TR(0x40e090);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40e096:{NFSU2_TR(0x40e096);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x40dfecu,40d);}
}
B40e09c:L40e09c:{c.instructions+=5;NFSU2_TR(0x40e09c);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B40e0a0:{NFSU2_TR(0x40e0a0);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B40e0a3:{NFSU2_TR(0x40e0a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40e0a7:{NFSU2_TR(0x40e0a7);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40e0ab:{NFSU2_TR(0x40e0ab);
TAIL_STATIC(0x40dffbu,40d);
}
B40e0b0:L40e0b0:{c.instructions+=5;NFSU2_TR(0x40e0b0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40e0b4:{NFSU2_TR(0x40e0b4);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40e0ba:{NFSU2_TR(0x40e0ba);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40e0bc:{NFSU2_TR(0x40e0bc);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40e0bf:{NFSU2_TR(0x40e0bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40e0ed;}}
}
B40e0c1:L40e0c1:{c.instructions+=5;NFSU2_TR(0x40e0c1);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40e0c5:{NFSU2_TR(0x40e0c5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40e0cb:{NFSU2_TR(0x40e0cb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40e0cd:{NFSU2_TR(0x40e0cd);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40e0d0:{NFSU2_TR(0x40e0d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40e0ed;}}
}
B40e0d2:L40e0d2:{c.instructions+=5;NFSU2_TR(0x40e0d2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40e0d6:{NFSU2_TR(0x40e0d6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40e0dc:{NFSU2_TR(0x40e0dc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40e0de:{NFSU2_TR(0x40e0de);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40e0e1:{NFSU2_TR(0x40e0e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40e0ed;}}
}
B40e0e3:L40e0e3:{c.instructions+=3;NFSU2_TR(0x40e0e3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40e0e5:{NFSU2_TR(0x40e0e5);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40e0e9:{NFSU2_TR(0x40e0e9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B40e0ed:L40e0ed:{c.instructions+=4;NFSU2_TR(0x40e0ed);
{u32 ea_=u32(u32(7878240u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40e0f3:{NFSU2_TR(0x40e0f3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40e0f5:{NFSU2_TR(0x40e0f5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40e0f8:{NFSU2_TR(0x40e0f8);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L40e142;}}
}
B40e0fa:L40e0fa:{c.instructions+=5;NFSU2_TR(0x40e0fa);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40e0fe:{NFSU2_TR(0x40e0fe);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40e104:{NFSU2_TR(0x40e104);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40e106:{NFSU2_TR(0x40e106);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40e109:{NFSU2_TR(0x40e109);
if(r1(R+514)){{goto L40e11a;}}
}
B40e10b:L40e10b:{c.instructions+=5;NFSU2_TR(0x40e10b);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40e10f:{NFSU2_TR(0x40e10f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40e113:{NFSU2_TR(0x40e113);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40e115:{NFSU2_TR(0x40e115);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40e118:{NFSU2_TR(0x40e118);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L40e142;}}
}
B40e11a:L40e11a:{c.instructions+=5;NFSU2_TR(0x40e11a);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40e11e:{NFSU2_TR(0x40e11e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40e124:{NFSU2_TR(0x40e124);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40e126:{NFSU2_TR(0x40e126);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40e129:{NFSU2_TR(0x40e129);
if(r1(R+514)){{goto L40e1d6;}}
}
B40e12f:L40e12f:{c.instructions+=5;NFSU2_TR(0x40e12f);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40e133:{NFSU2_TR(0x40e133);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40e137:{NFSU2_TR(0x40e137);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40e139:{NFSU2_TR(0x40e139);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40e13c:{NFSU2_TR(0x40e13c);
if(r1(R+514)){{goto L40e1d6;}}
}
B40e142:L40e142:{c.instructions+=5;NFSU2_TR(0x40e142);
{u32 ea_=u32(r4(R+24)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40e148:{NFSU2_TR(0x40e148);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40e14e:{NFSU2_TR(0x40e14e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40e150:{NFSU2_TR(0x40e150);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40e153:{NFSU2_TR(0x40e153);
if(r1(R+518)){{goto L40e31f;}}
}
B40e159:L40e159:{c.instructions+=6;NFSU2_TR(0x40e159);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x90ull))));
}
B40e15f:{NFSU2_TR(0x40e15f);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B40e163:{NFSU2_TR(0x40e163);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e164:{NFSU2_TR(0x40e164);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e165:{NFSU2_TR(0x40e165);
w4(R+20,u32(0x2ull));
}
B40e16a:{NFSU2_TR(0x40e16a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e16full));
TAIL_STATIC(0x43ce50u,43c);
}
B40e16f:L40e16f:{c.instructions+=15;NFSU2_TR(0x40e16f);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B40e173:{NFSU2_TR(0x40e173);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B40e177:{NFSU2_TR(0x40e177);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40e17b:{NFSU2_TR(0x40e17b);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B40e17f:{NFSU2_TR(0x40e17f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e180:{NFSU2_TR(0x40e180);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40e184:{NFSU2_TR(0x40e184);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40e188:{NFSU2_TR(0x40e188);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B40e18c:{NFSU2_TR(0x40e18c);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40e192:{NFSU2_TR(0x40e192);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e193:{NFSU2_TR(0x40e193);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40e197:{NFSU2_TR(0x40e197);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40e19b:{NFSU2_TR(0x40e19b);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40e1a1:{NFSU2_TR(0x40e1a1);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40e1a5:{NFSU2_TR(0x40e1a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e1aaull));
TAIL_STATIC(0x43ce50u,43c);
}
B40e1aa:L40e1aa:{c.instructions+=14;NFSU2_TR(0x40e1aa);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40e1ae:{NFSU2_TR(0x40e1ae);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40e1b2:{NFSU2_TR(0x40e1b2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B40e1b5:{NFSU2_TR(0x40e1b5);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40e1b9:{NFSU2_TR(0x40e1b9);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40e1bb:{NFSU2_TR(0x40e1bb);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B40e1bd:{NFSU2_TR(0x40e1bd);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40e1c1:{NFSU2_TR(0x40e1c1);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B40e1c3:{NFSU2_TR(0x40e1c3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B40e1c5:{NFSU2_TR(0x40e1c5);
{u32 ea_=u32(u32(7878248u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40e1cb:{NFSU2_TR(0x40e1cb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40e1cd:{NFSU2_TR(0x40e1cd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40e1cf:{NFSU2_TR(0x40e1cf);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40e1d2:{NFSU2_TR(0x40e1d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40e1d6;}}
}
B40e1d4:L40e1d4:{c.instructions+=1;NFSU2_TR(0x40e1d4);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B40e1d6:L40e1d6:{c.instructions+=7;NFSU2_TR(0x40e1d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40e1d7:{NFSU2_TR(0x40e1d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40e1d8:{NFSU2_TR(0x40e1d8);
__builtin_memmove((R+0),(R+20),4);
}
B40e1da:{NFSU2_TR(0x40e1da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40e1db:{NFSU2_TR(0x40e1db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40e1dc:{NFSU2_TR(0x40e1dc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40e1df:{NFSU2_TR(0x40e1df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40e1e0:L40e1e0:{c.instructions+=4;NFSU2_TR(0x40e1e0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B40e1e2:{NFSU2_TR(0x40e1e2);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+12),(U+4),2);
}
B40e1e9:{NFSU2_TR(0x40e1e9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e1ea:{NFSU2_TR(0x40e1ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e1efull));
TAIL_STATIC(0x43c2b0u,43c);
}
B40e1ef:L40e1ef:{c.instructions+=3;NFSU2_TR(0x40e1ef);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40e1f3:{NFSU2_TR(0x40e1f3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e1f4:{NFSU2_TR(0x40e1f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e1f9ull));
TAIL_STATIC(0x43c370u,43c);
}
B40e1f9:L40e1f9:{c.instructions+=11;NFSU2_TR(0x40e1f9);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40e1fd:{NFSU2_TR(0x40e1fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40e201:{NFSU2_TR(0x40e201);
u8 U[4];
w4(U+0,u32(0x40000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e206:{NFSU2_TR(0x40e206);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B40e20a:{NFSU2_TR(0x40e20a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e20b:{NFSU2_TR(0x40e20b);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B40e20f:{NFSU2_TR(0x40e20f);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40e213:{NFSU2_TR(0x40e213);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e214:{NFSU2_TR(0x40e214);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B40e218:{NFSU2_TR(0x40e218);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e219:{NFSU2_TR(0x40e219);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e21eull));
TAIL_STATIC(0x43d090u,43d);
}
B40e21e:L40e21e:{c.instructions+=53;NFSU2_TR(0x40e21e);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B40e222:{NFSU2_TR(0x40e222);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B40e226:{NFSU2_TR(0x40e226);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40e22a:{NFSU2_TR(0x40e22a);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B40e22e:{NFSU2_TR(0x40e22e);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40e232:{NFSU2_TR(0x40e232);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40e236:{NFSU2_TR(0x40e236);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40e23c:{NFSU2_TR(0x40e23c);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B40e240:{NFSU2_TR(0x40e240);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B40e243:{NFSU2_TR(0x40e243);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40e247:{NFSU2_TR(0x40e247);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B40e24a:{NFSU2_TR(0x40e24a);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40e24e:{NFSU2_TR(0x40e24e);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40e252:{NFSU2_TR(0x40e252);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B40e255:{NFSU2_TR(0x40e255);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40e25b:{NFSU2_TR(0x40e25b);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B40e25d:{NFSU2_TR(0x40e25d);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40e261:{NFSU2_TR(0x40e261);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40e263:{NFSU2_TR(0x40e263);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40e265:{NFSU2_TR(0x40e265);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40e269:{NFSU2_TR(0x40e269);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40e26c:{NFSU2_TR(0x40e26c);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40e270:{NFSU2_TR(0x40e270);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B40e272:{NFSU2_TR(0x40e272);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40e276:{NFSU2_TR(0x40e276);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40e278:{NFSU2_TR(0x40e278);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B40e27a:{NFSU2_TR(0x40e27a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40e27e:{NFSU2_TR(0x40e27e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40e282:{NFSU2_TR(0x40e282);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40e284:{NFSU2_TR(0x40e284);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B40e286:{NFSU2_TR(0x40e286);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40e28a:{NFSU2_TR(0x40e28a);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40e28d:{NFSU2_TR(0x40e28d);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40e291:{NFSU2_TR(0x40e291);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B40e293:{NFSU2_TR(0x40e293);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40e297:{NFSU2_TR(0x40e297);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40e29b:{NFSU2_TR(0x40e29b);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40e2a1:{NFSU2_TR(0x40e2a1);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40e2a5:{NFSU2_TR(0x40e2a5);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B40e2a7:{NFSU2_TR(0x40e2a7);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40e2ab:{NFSU2_TR(0x40e2ab);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40e2af:{NFSU2_TR(0x40e2af);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40e2b5:{NFSU2_TR(0x40e2b5);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40e2b9:{NFSU2_TR(0x40e2b9);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B40e2bb:{NFSU2_TR(0x40e2bb);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40e2bf:{NFSU2_TR(0x40e2bf);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B40e2c1:{NFSU2_TR(0x40e2c1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40e2c5:{NFSU2_TR(0x40e2c5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40e2c7:{NFSU2_TR(0x40e2c7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40e2cb:{NFSU2_TR(0x40e2cb);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40e2d1:{NFSU2_TR(0x40e2d1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40e2d3:{NFSU2_TR(0x40e2d3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40e2d6:{NFSU2_TR(0x40e2d6);
if(r1(R+514)){{goto L40e2f1;}}
}
B40e2d8:L40e2d8:{c.instructions+=7;NFSU2_TR(0x40e2d8);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40e2dc:{NFSU2_TR(0x40e2dc);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40e2e0:{NFSU2_TR(0x40e2e0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B40e2e4:{NFSU2_TR(0x40e2e4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40e2ea:{NFSU2_TR(0x40e2ea);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40e2ec:{NFSU2_TR(0x40e2ec);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40e2ef:{NFSU2_TR(0x40e2ef);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L40e31f;}}
}
B40e2f1:L40e2f1:{c.instructions+=5;NFSU2_TR(0x40e2f1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40e2f5:{NFSU2_TR(0x40e2f5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40e2fb:{NFSU2_TR(0x40e2fb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40e2fd:{NFSU2_TR(0x40e2fd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40e300:{NFSU2_TR(0x40e300);
if(r1(R+514)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40e1d6u);}goto L40e1d6;}}
}
B40e306:L40e306:{c.instructions+=6;NFSU2_TR(0x40e306);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40e30a:{NFSU2_TR(0x40e30a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40e30e:{NFSU2_TR(0x40e30e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40e314:{NFSU2_TR(0x40e314);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40e316:{NFSU2_TR(0x40e316);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40e319:{NFSU2_TR(0x40e319);
if(r1(R+514)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40e1d6u);}goto L40e1d6;}}
}
B40e31f:L40e31f:{c.instructions+=4;NFSU2_TR(0x40e31f);
u8 U[5];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B40e323:{NFSU2_TR(0x40e323);
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
B40e325:{NFSU2_TR(0x40e325);
w4(R+20,u32(0x1ull));
}
B40e32a:{NFSU2_TR(0x40e32a);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40e1d6u);}goto L40e1d6;}}
}
B40e330:L40e330:{c.instructions+=3;NFSU2_TR(0x40e330);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40e333:{NFSU2_TR(0x40e333);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B40e335:{NFSU2_TR(0x40e335);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e33bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B40e33b:L40e33b:{c.instructions+=10;NFSU2_TR(0x40e33b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B40e33d:{NFSU2_TR(0x40e33d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40e341:{NFSU2_TR(0x40e341);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40e344:{NFSU2_TR(0x40e344);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B40e348:{NFSU2_TR(0x40e348);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e349:{NFSU2_TR(0x40e349);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B40e34d:{NFSU2_TR(0x40e34d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e34e:{NFSU2_TR(0x40e34e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40e351:{NFSU2_TR(0x40e351);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40e355:{NFSU2_TR(0x40e355);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e35aull));
TAIL_STATIC(0x591fc0u,591);
}
B40e35a:L40e35a:{c.instructions+=6;NFSU2_TR(0x40e35a);
__builtin_memmove((R+8),gp(0x783664),4);
}
B40e360:{NFSU2_TR(0x40e360);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40e363:{NFSU2_TR(0x40e363);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40e365:{NFSU2_TR(0x40e365);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e366:{NFSU2_TR(0x40e366);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e367:{NFSU2_TR(0x40e367);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e36dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B40e36d:L40e36d:{c.instructions+=2;NFSU2_TR(0x40e36d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e36e:{NFSU2_TR(0x40e36e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e373ull));
TAIL_STATIC(0x4036e0u,403);
}
B40e373:L40e373:{c.instructions+=3;NFSU2_TR(0x40e373);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B40e376:{NFSU2_TR(0x40e376);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40e378:{NFSU2_TR(0x40e378);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40e1d6u);}goto L40e1d6;}}
}
B40e37e:L40e37e:{c.instructions+=8;NFSU2_TR(0x40e37e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40e37f:{NFSU2_TR(0x40e37f);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B40e381:{NFSU2_TR(0x40e381);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40e382:{NFSU2_TR(0x40e382);
__builtin_memmove((R+0),(R+20),4);
}
B40e384:{NFSU2_TR(0x40e384);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40e385:{NFSU2_TR(0x40e385);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40e386:{NFSU2_TR(0x40e386);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40e389:{NFSU2_TR(0x40e389);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40e390:L40e390:{c.instructions+=9;NFSU2_TR(0x40e390);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e391:{NFSU2_TR(0x40e391);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B40e395:{NFSU2_TR(0x40e395);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e396:{NFSU2_TR(0x40e396);
__builtin_memmove((R+28),(R+4),4);
}
B40e398:{NFSU2_TR(0x40e398);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ffull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B40e39f:{NFSU2_TR(0x40e39f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40e3a1:{NFSU2_TR(0x40e3a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40e3a4:{NFSU2_TR(0x40e3a4);
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
B40e3a8:{NFSU2_TR(0x40e3a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40e3d1;}}
}
B40e3aa:L40e3aa:{c.instructions+=4;NFSU2_TR(0x40e3aa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e3ab:{NFSU2_TR(0x40e3ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40e3ae:{NFSU2_TR(0x40e3ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40e3b1:{NFSU2_TR(0x40e3b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e3b6ull));
TAIL_STATIC(0x59fa30u,59f);
}
B40e3b6:L40e3b6:{c.instructions+=2;NFSU2_TR(0x40e3b6);
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
B40e3b8:{NFSU2_TR(0x40e3b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40e3d0;}}
}
B40e3ba:L40e3ba:{c.instructions+=4;NFSU2_TR(0x40e3ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B40e3bc:{NFSU2_TR(0x40e3bc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e3bd:{NFSU2_TR(0x40e3bd);
__builtin_memmove((R+4),(R+24),4);
}
B40e3bf:{NFSU2_TR(0x40e3bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e3c5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B40e3c5:L40e3c5:{c.instructions+=2;NFSU2_TR(0x40e3c5);
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
B40e3c7:{NFSU2_TR(0x40e3c7);
if(r1(R+518)){{goto L40e3d0;}}
}
B40e3c9:L40e3c9:{c.instructions+=1;NFSU2_TR(0x40e3c9);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ffull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B40e3d0:L40e3d0:{c.instructions+=1;NFSU2_TR(0x40e3d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40e3d1:L40e3d1:{c.instructions+=3;NFSU2_TR(0x40e3d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40e3d2:{NFSU2_TR(0x40e3d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40e3d3:{NFSU2_TR(0x40e3d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40e3e0:L40e3e0:{c.instructions+=8;NFSU2_TR(0x40e3e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e3e1:{NFSU2_TR(0x40e3e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40e3e5:{NFSU2_TR(0x40e3e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e3e6:{NFSU2_TR(0x40e3e6);
u8 U[4];
w4(U+0,u32(0x784ca4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e3eb:{NFSU2_TR(0x40e3eb);
__builtin_memmove((R+28),(R+4),4);
}
B40e3ed:{NFSU2_TR(0x40e3ed);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e3ef:{NFSU2_TR(0x40e3ef);
__builtin_memmove((R+4),(R+24),4);
}
B40e3f1:{NFSU2_TR(0x40e3f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e3f6ull));
TAIL_STATIC(0x578ce0u,578);
}
B40e3f6:L40e3f6:{c.instructions+=3;NFSU2_TR(0x40e3f6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e3f7:{NFSU2_TR(0x40e3f7);
__builtin_memmove((R+4),(R+28),4);
}
B40e3f9:{NFSU2_TR(0x40e3f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e3feull));
TAIL_STATIC(0x40de20u,40d);
}
B40e3fe:L40e3fe:{c.instructions+=4;NFSU2_TR(0x40e3fe);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x210ull))));
}
B40e404:{NFSU2_TR(0x40e404);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e405:{NFSU2_TR(0x40e405);
__builtin_memmove((R+4),(R+24),4);
}
B40e407:{NFSU2_TR(0x40e407);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e40cull));
TAIL_STATIC(0x571770u,571);
}
B40e40c:L40e40c:{c.instructions+=2;NFSU2_TR(0x40e40c);
__builtin_memmove((R+4),(R+24),4);
}
B40e40e:{NFSU2_TR(0x40e40e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e413ull));
TAIL_STATIC(0x578d90u,578);
}
B40e413:L40e413:{c.instructions+=3;NFSU2_TR(0x40e413);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40e414:{NFSU2_TR(0x40e414);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40e415:{NFSU2_TR(0x40e415);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40e420:L40e420:{c.instructions+=8;NFSU2_TR(0x40e420);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e421:{NFSU2_TR(0x40e421);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40e425:{NFSU2_TR(0x40e425);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e426:{NFSU2_TR(0x40e426);
u8 U[4];
w4(U+0,u32(0x784cb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e42b:{NFSU2_TR(0x40e42b);
__builtin_memmove((R+28),(R+4),4);
}
B40e42d:{NFSU2_TR(0x40e42d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e42f:{NFSU2_TR(0x40e42f);
__builtin_memmove((R+4),(R+24),4);
}
B40e431:{NFSU2_TR(0x40e431);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e436ull));
TAIL_STATIC(0x578ce0u,578);
}
B40e436:L40e436:{c.instructions+=3;NFSU2_TR(0x40e436);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e437:{NFSU2_TR(0x40e437);
__builtin_memmove((R+4),(R+28),4);
}
B40e439:{NFSU2_TR(0x40e439);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e43eull));
TAIL_STATIC(0x40de20u,40d);
}
B40e43e:L40e43e:{c.instructions+=2;NFSU2_TR(0x40e43e);
__builtin_memmove((R+4),(R+24),4);
}
B40e440:{NFSU2_TR(0x40e440);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e445ull));
TAIL_STATIC(0x578d90u,578);
}
B40e445:L40e445:{c.instructions+=3;NFSU2_TR(0x40e445);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40e446:{NFSU2_TR(0x40e446);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40e447:{NFSU2_TR(0x40e447);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40e450:L40e450:{c.instructions+=8;NFSU2_TR(0x40e450);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e451:{NFSU2_TR(0x40e451);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40e455:{NFSU2_TR(0x40e455);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e456:{NFSU2_TR(0x40e456);
u8 U[4];
w4(U+0,u32(0x784cc8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e45b:{NFSU2_TR(0x40e45b);
__builtin_memmove((R+28),(R+4),4);
}
B40e45d:{NFSU2_TR(0x40e45d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e45f:{NFSU2_TR(0x40e45f);
__builtin_memmove((R+4),(R+24),4);
}
B40e461:{NFSU2_TR(0x40e461);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e466ull));
TAIL_STATIC(0x578ce0u,578);
}
B40e466:L40e466:{c.instructions+=4;NFSU2_TR(0x40e466);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x21cull))));
__builtin_memmove((R+0),(U+0),4);
}
B40e46c:{NFSU2_TR(0x40e46c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e46d:{NFSU2_TR(0x40e46d);
__builtin_memmove((R+4),(R+24),4);
}
B40e46f:{NFSU2_TR(0x40e46f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e474ull));
TAIL_STATIC(0x571770u,571);
}
B40e474:L40e474:{c.instructions+=3;NFSU2_TR(0x40e474);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e475:{NFSU2_TR(0x40e475);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x210ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40e47b:{NFSU2_TR(0x40e47b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e480ull));
TAIL_STATIC(0x61f760u,61f);
}
B40e480:L40e480:{c.instructions+=3;NFSU2_TR(0x40e480);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e481:{NFSU2_TR(0x40e481);
__builtin_memmove((R+4),(R+28),4);
}
B40e483:{NFSU2_TR(0x40e483);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e488ull));
TAIL_STATIC(0x40de20u,40d);
}
B40e488:L40e488:{c.instructions+=2;NFSU2_TR(0x40e488);
__builtin_memmove((R+4),(R+24),4);
}
B40e48a:{NFSU2_TR(0x40e48a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e48full));
TAIL_STATIC(0x578d90u,578);
}
B40e48f:L40e48f:{c.instructions+=3;NFSU2_TR(0x40e48f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40e490:{NFSU2_TR(0x40e490);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40e491:{NFSU2_TR(0x40e491);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40e4a0:L40e4a0:{c.instructions+=11;NFSU2_TR(0x40e4a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e4a1:{NFSU2_TR(0x40e4a1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e4a2:{NFSU2_TR(0x40e4a2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B40e4a6:{NFSU2_TR(0x40e4a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e4a7:{NFSU2_TR(0x40e4a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e4a8:{NFSU2_TR(0x40e4a8);
__builtin_memmove((R+28),(R+4),4);
}
B40e4aa:{NFSU2_TR(0x40e4aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40e4b0:{NFSU2_TR(0x40e4b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e4b1:{NFSU2_TR(0x40e4b1);
__builtin_memmove((R+4),(R+20),4);
}
B40e4b3:{NFSU2_TR(0x40e4b3);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B40e4b5:{NFSU2_TR(0x40e4b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e4baull));
TAIL_STATIC(0x60c120u,60c);
}
B40e4ba:L40e4ba:{c.instructions+=3;NFSU2_TR(0x40e4ba);
__builtin_memmove((R+24),(R+0),4);
}
B40e4bc:{NFSU2_TR(0x40e4bc);
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
B40e4be:{NFSU2_TR(0x40e4be);
if(r1(R+518)){{goto L40e53c;}}
}
B40e4c0:L40e4c0:{c.instructions+=9;NFSU2_TR(0x40e4c0);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B40e4c5:{NFSU2_TR(0x40e4c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x21cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B40e4cb:{NFSU2_TR(0x40e4cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40e4cf:{NFSU2_TR(0x40e4cf);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40e4d3:{NFSU2_TR(0x40e4d3);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40e4d9:{NFSU2_TR(0x40e4d9);
{u32 ea_=u32(u32(7878280u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40e4df:{NFSU2_TR(0x40e4df);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40e4e1:{NFSU2_TR(0x40e4e1);
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
B40e4e4:{NFSU2_TR(0x40e4e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40e545;}}
}
B40e4e6:L40e4e6:{c.instructions+=3;NFSU2_TR(0x40e4e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e4e7:{NFSU2_TR(0x40e4e7);
__builtin_memmove((R+4),(R+20),4);
}
B40e4e9:{NFSU2_TR(0x40e4e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e4eeull));
TAIL_STATIC(0x60bff0u,60b);
}
B40e4ee:L40e4ee:{c.instructions+=5;NFSU2_TR(0x40e4ee);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40e4f2:{NFSU2_TR(0x40e4f2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40e4f8:{NFSU2_TR(0x40e4f8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40e4fa:{NFSU2_TR(0x40e4fa);
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
B40e4fd:{NFSU2_TR(0x40e4fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40e545;}}
}
B40e4ff:L40e4ff:{c.instructions+=12;NFSU2_TR(0x40e4ff);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B40e503:{NFSU2_TR(0x40e503);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e970ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B40e50a:{NFSU2_TR(0x40e50a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40e50d:{NFSU2_TR(0x40e50d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40e511:{NFSU2_TR(0x40e511);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+20),(U+0),4);
}
B40e514:{NFSU2_TR(0x40e514);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e516:{NFSU2_TR(0x40e516);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e51b:{NFSU2_TR(0x40e51b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e51c:{NFSU2_TR(0x40e51c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e51d:{NFSU2_TR(0x40e51d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e51e:{NFSU2_TR(0x40e51e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e51f:{NFSU2_TR(0x40e51f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e524ull));
TAIL_STATIC(0x403a40u,403);
}
B40e524:L40e524:{c.instructions+=3;NFSU2_TR(0x40e524);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B40e527:{NFSU2_TR(0x40e527);
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
B40e529:{NFSU2_TR(0x40e529);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40e545;}}
}
B40e52b:L40e52b:{c.instructions+=5;NFSU2_TR(0x40e52b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40e52f:{NFSU2_TR(0x40e52f);
{u32 ea_=u32(u32(7878284u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40e535:{NFSU2_TR(0x40e535);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40e537:{NFSU2_TR(0x40e537);
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
B40e53a:{NFSU2_TR(0x40e53a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40e545;}}
}
B40e53c:L40e53c:{c.instructions+=6;NFSU2_TR(0x40e53c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40e53d:{NFSU2_TR(0x40e53d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40e53e:{NFSU2_TR(0x40e53e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40e53f:{NFSU2_TR(0x40e53f);
w1(R+0,u8(0x1ull));
}
B40e541:{NFSU2_TR(0x40e541);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40e542:{NFSU2_TR(0x40e542);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40e545:L40e545:{c.instructions+=6;NFSU2_TR(0x40e545);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40e546:{NFSU2_TR(0x40e546);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40e547:{NFSU2_TR(0x40e547);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40e548:{NFSU2_TR(0x40e548);
__builtin_memmove((R+0),(R+12),1);
}
B40e54a:{NFSU2_TR(0x40e54a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40e54b:{NFSU2_TR(0x40e54b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40e550:L40e550:{c.instructions+=8;NFSU2_TR(0x40e550);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e551:{NFSU2_TR(0x40e551);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40e555:{NFSU2_TR(0x40e555);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e556:{NFSU2_TR(0x40e556);
u8 U[4];
w4(U+0,u32(0x784cd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e55b:{NFSU2_TR(0x40e55b);
__builtin_memmove((R+28),(R+4),4);
}
B40e55d:{NFSU2_TR(0x40e55d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e55f:{NFSU2_TR(0x40e55f);
__builtin_memmove((R+4),(R+24),4);
}
B40e561:{NFSU2_TR(0x40e561);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e566ull));
TAIL_STATIC(0x578ce0u,578);
}
B40e566:L40e566:{c.instructions+=3;NFSU2_TR(0x40e566);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e567:{NFSU2_TR(0x40e567);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x210ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40e56d:{NFSU2_TR(0x40e56d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e572ull));
TAIL_STATIC(0x61f760u,61f);
}
B40e572:L40e572:{c.instructions+=3;NFSU2_TR(0x40e572);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e573:{NFSU2_TR(0x40e573);
__builtin_memmove((R+4),(R+28),4);
}
B40e575:{NFSU2_TR(0x40e575);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e57aull));
TAIL_STATIC(0x40de20u,40d);
}
B40e57a:L40e57a:{c.instructions+=2;NFSU2_TR(0x40e57a);
__builtin_memmove((R+4),(R+24),4);
}
B40e57c:{NFSU2_TR(0x40e57c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e581ull));
TAIL_STATIC(0x578d90u,578);
}
B40e581:L40e581:{c.instructions+=3;NFSU2_TR(0x40e581);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40e582:{NFSU2_TR(0x40e582);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40e583:{NFSU2_TR(0x40e583);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40e590:L40e590:{c.instructions+=8;NFSU2_TR(0x40e590);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e591:{NFSU2_TR(0x40e591);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40e595:{NFSU2_TR(0x40e595);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e596:{NFSU2_TR(0x40e596);
u8 U[4];
w4(U+0,u32(0x784cf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e59b:{NFSU2_TR(0x40e59b);
__builtin_memmove((R+28),(R+4),4);
}
B40e59d:{NFSU2_TR(0x40e59d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e59f:{NFSU2_TR(0x40e59f);
__builtin_memmove((R+4),(R+24),4);
}
B40e5a1:{NFSU2_TR(0x40e5a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e5a6ull));
TAIL_STATIC(0x578ce0u,578);
}
B40e5a6:L40e5a6:{c.instructions+=3;NFSU2_TR(0x40e5a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e5a7:{NFSU2_TR(0x40e5a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x210ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40e5ad:{NFSU2_TR(0x40e5ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e5b2ull));
TAIL_STATIC(0x61f760u,61f);
}
B40e5b2:L40e5b2:{c.instructions+=3;NFSU2_TR(0x40e5b2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e5b3:{NFSU2_TR(0x40e5b3);
__builtin_memmove((R+4),(R+28),4);
}
B40e5b5:{NFSU2_TR(0x40e5b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e5baull));
TAIL_STATIC(0x40de20u,40d);
}
B40e5ba:L40e5ba:{c.instructions+=2;NFSU2_TR(0x40e5ba);
__builtin_memmove((R+4),(R+24),4);
}
B40e5bc:{NFSU2_TR(0x40e5bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e5c1ull));
TAIL_STATIC(0x578d90u,578);
}
B40e5c1:L40e5c1:{c.instructions+=3;NFSU2_TR(0x40e5c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40e5c2:{NFSU2_TR(0x40e5c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40e5c3:{NFSU2_TR(0x40e5c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40e5d0:L40e5d0:{c.instructions+=16;NFSU2_TR(0x40e5d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e5d1:{NFSU2_TR(0x40e5d1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e5d2:{NFSU2_TR(0x40e5d2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e5d3:{NFSU2_TR(0x40e5d3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e5d4:{NFSU2_TR(0x40e5d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40e5d8:{NFSU2_TR(0x40e5d8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B40e5df:{NFSU2_TR(0x40e5df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B40e5e2:{NFSU2_TR(0x40e5e2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e5e3:{NFSU2_TR(0x40e5e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B40e5e6:{NFSU2_TR(0x40e5e6);
__builtin_memmove((R+28),(R+4),4);
}
B40e5e8:{NFSU2_TR(0x40e5e8);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B40e5ec:{NFSU2_TR(0x40e5ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40e5f2:{NFSU2_TR(0x40e5f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e5f3:{NFSU2_TR(0x40e5f3);
__builtin_memmove((R+4),(R+24),4);
}
B40e5f5:{NFSU2_TR(0x40e5f5);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B40e5f7:{NFSU2_TR(0x40e5f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e5fcull));
TAIL_STATIC(0x60c120u,60c);
}
B40e5fc:L40e5fc:{c.instructions+=2;NFSU2_TR(0x40e5fc);
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
B40e5fe:{NFSU2_TR(0x40e5fe);
if(r1(R+518)){{goto L40e649;}}
}
B40e600:L40e600:{c.instructions+=3;NFSU2_TR(0x40e600);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40e606:{NFSU2_TR(0x40e606);
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
B40e608:{NFSU2_TR(0x40e608);
if(r1(R+518)){{goto L40e649;}}
}
B40e60a:L40e60a:{c.instructions+=7;NFSU2_TR(0x40e60a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40e60d:{NFSU2_TR(0x40e60d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40e610:{NFSU2_TR(0x40e610);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40e614:{NFSU2_TR(0x40e614);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e615:{NFSU2_TR(0x40e615);
__builtin_memmove((R+4),(R+24),4);
}
B40e617:{NFSU2_TR(0x40e617);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40e61b:{NFSU2_TR(0x40e61b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e620ull));
TAIL_STATIC(0x60bff0u,60b);
}
B40e620:L40e620:{c.instructions+=6;NFSU2_TR(0x40e620);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40e624:{NFSU2_TR(0x40e624);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40e628:{NFSU2_TR(0x40e628);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40e62e:{NFSU2_TR(0x40e62e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40e630:{NFSU2_TR(0x40e630);
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
B40e633:{NFSU2_TR(0x40e633);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40e63f;}}
}
B40e635:L40e635:{c.instructions+=7;NFSU2_TR(0x40e635);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40e636:{NFSU2_TR(0x40e636);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40e637:{NFSU2_TR(0x40e637);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40e638:{NFSU2_TR(0x40e638);
w1(R+0,u8(0x1ull));
}
B40e63a:{NFSU2_TR(0x40e63a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40e63b:{NFSU2_TR(0x40e63b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40e63c:{NFSU2_TR(0x40e63c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40e63f:L40e63f:{c.instructions+=7;NFSU2_TR(0x40e63f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40e640:{NFSU2_TR(0x40e640);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40e641:{NFSU2_TR(0x40e641);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40e642:{NFSU2_TR(0x40e642);
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
B40e644:{NFSU2_TR(0x40e644);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40e645:{NFSU2_TR(0x40e645);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40e646:{NFSU2_TR(0x40e646);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40e649:L40e649:{c.instructions+=7;NFSU2_TR(0x40e649);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40e64a:{NFSU2_TR(0x40e64a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40e64b:{NFSU2_TR(0x40e64b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40e64c:{NFSU2_TR(0x40e64c);
__builtin_memmove((R+0),(R+12),1);
}
B40e64e:{NFSU2_TR(0x40e64e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40e64f:{NFSU2_TR(0x40e64f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40e650:{NFSU2_TR(0x40e650);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40e660:L40e660:{c.instructions+=8;NFSU2_TR(0x40e660);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e661:{NFSU2_TR(0x40e661);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40e665:{NFSU2_TR(0x40e665);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e666:{NFSU2_TR(0x40e666);
u8 U[4];
w4(U+0,u32(0x784d00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e66b:{NFSU2_TR(0x40e66b);
__builtin_memmove((R+28),(R+4),4);
}
B40e66d:{NFSU2_TR(0x40e66d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e66f:{NFSU2_TR(0x40e66f);
__builtin_memmove((R+4),(R+24),4);
}
B40e671:{NFSU2_TR(0x40e671);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e676ull));
TAIL_STATIC(0x578ce0u,578);
}
B40e676:L40e676:{c.instructions+=3;NFSU2_TR(0x40e676);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e677:{NFSU2_TR(0x40e677);
__builtin_memmove((R+4),(R+28),4);
}
B40e679:{NFSU2_TR(0x40e679);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e67eull));
TAIL_STATIC(0x40de20u,40d);
}
B40e67e:L40e67e:{c.instructions+=4;NFSU2_TR(0x40e67e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x210ull))));
__builtin_memmove((R+0),(U+0),4);
}
B40e684:{NFSU2_TR(0x40e684);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e685:{NFSU2_TR(0x40e685);
__builtin_memmove((R+4),(R+24),4);
}
B40e687:{NFSU2_TR(0x40e687);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e68cull));
TAIL_STATIC(0x571770u,571);
}
B40e68c:L40e68c:{c.instructions+=4;NFSU2_TR(0x40e68c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x214ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40e692:{NFSU2_TR(0x40e692);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e693:{NFSU2_TR(0x40e693);
__builtin_memmove((R+4),(R+24),4);
}
B40e695:{NFSU2_TR(0x40e695);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e69aull));
TAIL_STATIC(0x571770u,571);
}
B40e69a:L40e69a:{c.instructions+=7;NFSU2_TR(0x40e69a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e69c:{NFSU2_TR(0x40e69c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e69e:{NFSU2_TR(0x40e69e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e6a0:{NFSU2_TR(0x40e6a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x218ull))));
__builtin_memmove((R+8),(U+0),4);
}
B40e6a6:{NFSU2_TR(0x40e6a6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e6a7:{NFSU2_TR(0x40e6a7);
__builtin_memmove((R+4),(R+24),4);
}
B40e6a9:{NFSU2_TR(0x40e6a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e6aeull));
TAIL_STATIC(0x571640u,571);
}
B40e6ae:L40e6ae:{c.instructions+=7;NFSU2_TR(0x40e6ae);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e6b0:{NFSU2_TR(0x40e6b0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e6b2:{NFSU2_TR(0x40e6b2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e6b4:{NFSU2_TR(0x40e6b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x219ull))));
__builtin_memmove((R+0),(U+0),4);
}
B40e6ba:{NFSU2_TR(0x40e6ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e6bb:{NFSU2_TR(0x40e6bb);
__builtin_memmove((R+4),(R+24),4);
}
B40e6bd:{NFSU2_TR(0x40e6bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e6c2ull));
TAIL_STATIC(0x571640u,571);
}
B40e6c2:L40e6c2:{c.instructions+=4;NFSU2_TR(0x40e6c2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x21cull))));
}
B40e6c8:{NFSU2_TR(0x40e6c8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e6c9:{NFSU2_TR(0x40e6c9);
__builtin_memmove((R+4),(R+24),4);
}
B40e6cb:{NFSU2_TR(0x40e6cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e6d0ull));
TAIL_STATIC(0x571770u,571);
}
B40e6d0:L40e6d0:{c.instructions+=2;NFSU2_TR(0x40e6d0);
__builtin_memmove((R+4),(R+24),4);
}
B40e6d2:{NFSU2_TR(0x40e6d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e6d7ull));
TAIL_STATIC(0x578d90u,578);
}
B40e6d7:L40e6d7:{c.instructions+=3;NFSU2_TR(0x40e6d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40e6d8:{NFSU2_TR(0x40e6d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40e6d9:{NFSU2_TR(0x40e6d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40e6e0:L40e6e0:{c.instructions+=34;NFSU2_TR(0x40e6e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40e6e4:{NFSU2_TR(0x40e6e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40e6e8:{NFSU2_TR(0x40e6e8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e6e9:{NFSU2_TR(0x40e6e9);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B40e6ed:{NFSU2_TR(0x40e6ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40e6ef:{NFSU2_TR(0x40e6ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40e6f3:{NFSU2_TR(0x40e6f3);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B40e6f7:{NFSU2_TR(0x40e6f7);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40e6fb:{NFSU2_TR(0x40e6fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40e6ff:{NFSU2_TR(0x40e6ff);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B40e703:{NFSU2_TR(0x40e703);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B40e706:{NFSU2_TR(0x40e706);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40e70c:{NFSU2_TR(0x40e70c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x60ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40e70f:{NFSU2_TR(0x40e70f);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40e713:{NFSU2_TR(0x40e713);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40e717:{NFSU2_TR(0x40e717);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(s32(s8(r1(U+4)))));
}
B40e71e:{NFSU2_TR(0x40e71e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B40e721:{NFSU2_TR(0x40e721);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40e727:{NFSU2_TR(0x40e727);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+24),4);
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+24))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B40e72a:{NFSU2_TR(0x40e72a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40e72e:{NFSU2_TR(0x40e72e);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40e734:{NFSU2_TR(0x40e734);
{u32 ea_=u32(r4(R+8)+r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40e738:{NFSU2_TR(0x40e738);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40e73a:{NFSU2_TR(0x40e73a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40e73b:{NFSU2_TR(0x40e73b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40e73d:{NFSU2_TR(0x40e73d);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B40e73f:{NFSU2_TR(0x40e73f);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40e742:{NFSU2_TR(0x40e742);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40e745:{NFSU2_TR(0x40e745);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B40e747:{NFSU2_TR(0x40e747);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B40e749:{NFSU2_TR(0x40e749);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B40e74b:{NFSU2_TR(0x40e74b);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B40e74d:{NFSU2_TR(0x40e74d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40e74f:{NFSU2_TR(0x40e74f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40e760:L40e760:{c.instructions+=8;NFSU2_TR(0x40e760);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e761:{NFSU2_TR(0x40e761);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40e765:{NFSU2_TR(0x40e765);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e766:{NFSU2_TR(0x40e766);
u8 U[4];
w4(U+0,u32(0x784d14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e76b:{NFSU2_TR(0x40e76b);
__builtin_memmove((R+28),(R+4),4);
}
B40e76d:{NFSU2_TR(0x40e76d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e76f:{NFSU2_TR(0x40e76f);
__builtin_memmove((R+4),(R+24),4);
}
B40e771:{NFSU2_TR(0x40e771);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e776ull));
TAIL_STATIC(0x578ce0u,578);
}
B40e776:L40e776:{c.instructions+=4;NFSU2_TR(0x40e776);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x210ull))));
__builtin_memmove((R+0),(U+0),4);
}
B40e77c:{NFSU2_TR(0x40e77c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e77d:{NFSU2_TR(0x40e77d);
__builtin_memmove((R+4),(R+24),4);
}
B40e77f:{NFSU2_TR(0x40e77f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e784ull));
TAIL_STATIC(0x571770u,571);
}
B40e784:L40e784:{c.instructions+=4;NFSU2_TR(0x40e784);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x214ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40e78a:{NFSU2_TR(0x40e78a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e78b:{NFSU2_TR(0x40e78b);
__builtin_memmove((R+4),(R+24),4);
}
B40e78d:{NFSU2_TR(0x40e78d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e792ull));
TAIL_STATIC(0x571770u,571);
}
B40e792:L40e792:{c.instructions+=7;NFSU2_TR(0x40e792);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e794:{NFSU2_TR(0x40e794);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e796:{NFSU2_TR(0x40e796);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e798:{NFSU2_TR(0x40e798);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x218ull))));
__builtin_memmove((R+8),(U+0),4);
}
B40e79e:{NFSU2_TR(0x40e79e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e79f:{NFSU2_TR(0x40e79f);
__builtin_memmove((R+4),(R+24),4);
}
B40e7a1:{NFSU2_TR(0x40e7a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e7a6ull));
TAIL_STATIC(0x571640u,571);
}
B40e7a6:L40e7a6:{c.instructions+=3;NFSU2_TR(0x40e7a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e7a7:{NFSU2_TR(0x40e7a7);
__builtin_memmove((R+4),(R+28),4);
}
B40e7a9:{NFSU2_TR(0x40e7a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e7aeull));
TAIL_STATIC(0x40de20u,40d);
}
B40e7ae:L40e7ae:{c.instructions+=2;NFSU2_TR(0x40e7ae);
__builtin_memmove((R+4),(R+24),4);
}
B40e7b0:{NFSU2_TR(0x40e7b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e7b5ull));
TAIL_STATIC(0x578d90u,578);
}
B40e7b5:L40e7b5:{c.instructions+=3;NFSU2_TR(0x40e7b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40e7b6:{NFSU2_TR(0x40e7b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40e7b7:{NFSU2_TR(0x40e7b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40e7c0:L40e7c0:{c.instructions+=10;NFSU2_TR(0x40e7c0);
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
B40e7c3:{NFSU2_TR(0x40e7c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e7c4:{NFSU2_TR(0x40e7c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B40e7c8:{NFSU2_TR(0x40e7c8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e7c9:{NFSU2_TR(0x40e7c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e7ca:{NFSU2_TR(0x40e7ca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e7cb:{NFSU2_TR(0x40e7cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+28),(U+0),4);
}
B40e7cd:{NFSU2_TR(0x40e7cd);
__builtin_memmove((R+4),(R+28),4);
}
B40e7cf:{NFSU2_TR(0x40e7cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40e7d3:{NFSU2_TR(0x40e7d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e7d8ull));
TAIL_STATIC(0x5ec0b0u,5ec);
}
B40e7d8:L40e7d8:{c.instructions+=5;NFSU2_TR(0x40e7d8);
__builtin_memmove((R+4),gp(0x890118),4);
}
B40e7de:{NFSU2_TR(0x40e7de);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e7df:{NFSU2_TR(0x40e7df);
__builtin_memmove((R+24),(R+0),4);
}
B40e7e1:{NFSU2_TR(0x40e7e1);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B40e7e6:{NFSU2_TR(0x40e7e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e7ebull));
TAIL_STATIC(0x5eeff0u,5ee);
}
B40e7eb:L40e7eb:{c.instructions+=2;NFSU2_TR(0x40e7eb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40e7ed:{NFSU2_TR(0x40e7ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40e9d9;}}
}
B40e7f3:L40e7f3:{c.instructions+=2;NFSU2_TR(0x40e7f3);
__builtin_memmove((R+4),(R+28),4);
}
B40e7f5:{NFSU2_TR(0x40e7f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e7faull));
TAIL_STATIC(0x5ed580u,5ed);
}
B40e7fa:L40e7fa:{c.instructions+=4;NFSU2_TR(0x40e7fa);
{u32 ea_=u32(u32(7878392u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40e800:{NFSU2_TR(0x40e800);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40e802:{NFSU2_TR(0x40e802);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40e805:{NFSU2_TR(0x40e805);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40e9d9;}}
}
B40e80b:L40e80b:{c.instructions+=6;NFSU2_TR(0x40e80b);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B40e812:{NFSU2_TR(0x40e812);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B40e815:{NFSU2_TR(0x40e815);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B40e818:{NFSU2_TR(0x40e818);
u8 U[14];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+4,u32(s32(s16(r2(U+12)))));
}
B40e81d:{NFSU2_TR(0x40e81d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e970ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B40e824:{NFSU2_TR(0x40e824);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e829ull));
TAIL_STATIC(0x60bef0u,60b);
}
B40e829:L40e829:{c.instructions+=2;NFSU2_TR(0x40e829);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40e82b:{NFSU2_TR(0x40e82b);
if(r1(R+518)){{goto L40e9d9;}}
}
B40e831:L40e831:{c.instructions+=3;NFSU2_TR(0x40e831);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B40e836:{NFSU2_TR(0x40e836);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40e838:{NFSU2_TR(0x40e838);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40e8e5;}}
}
B40e83e:L40e83e:{c.instructions+=3;NFSU2_TR(0x40e83e);
__builtin_memmove((R+0),gp(0x890104),4);
}
B40e843:{NFSU2_TR(0x40e843);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40e845:{NFSU2_TR(0x40e845);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40e8e5;}}
}
B40e84b:L40e84b:{c.instructions+=3;NFSU2_TR(0x40e84b);
__builtin_memmove((R+0),gp(0x89e7e3),1);
}
B40e850:{NFSU2_TR(0x40e850);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40e852:{NFSU2_TR(0x40e852);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40e8e5;}}
}
B40e858:L40e858:{c.instructions+=3;NFSU2_TR(0x40e858);
__builtin_memmove((R+0),gp(0x89010c),4);
}
B40e85d:{NFSU2_TR(0x40e85d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40e85f:{NFSU2_TR(0x40e85f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40e8e5;}}
}
B40e865:L40e865:{c.instructions+=2;NFSU2_TR(0x40e865);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40e867:{NFSU2_TR(0x40e867);
if(r1(R+518)){{goto L40e89b;}}
}
B40e869:L40e869:{c.instructions+=11;NFSU2_TR(0x40e869);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40e86c:{NFSU2_TR(0x40e86c);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B40e86f:{NFSU2_TR(0x40e86f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B40e871:{NFSU2_TR(0x40e871);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40e873:{NFSU2_TR(0x40e873);
__builtin_memmove((R+0),(R+518),1);
}
B40e876:{NFSU2_TR(0x40e876);
__builtin_memmove((R+4),(R+24),4);
}
B40e878:{NFSU2_TR(0x40e878);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e879:{NFSU2_TR(0x40e879);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e87a:{NFSU2_TR(0x40e87a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B40e87d:{NFSU2_TR(0x40e87d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e87e:{NFSU2_TR(0x40e87e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e883ull));
TAIL_STATIC(0x40cc40u,40c);
}
B40e883:L40e883:{c.instructions+=4;NFSU2_TR(0x40e883);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e884:{NFSU2_TR(0x40e884);
__builtin_memmove((R+4),(R+24),4);
}
B40e886:{NFSU2_TR(0x40e886);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40e889:{NFSU2_TR(0x40e889);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e88eull));
TAIL_STATIC(0x401c10u,401);
}
B40e88e:L40e88e:{c.instructions+=4;NFSU2_TR(0x40e88e);
{u32 ea_=u32(u32(7878388u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40e894:{NFSU2_TR(0x40e894);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40e896:{NFSU2_TR(0x40e896);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40e899:{NFSU2_TR(0x40e899);
if(r1(R+518)){{goto L40e8e0;}}
}
B40e89b:L40e89b:{c.instructions+=4;NFSU2_TR(0x40e89b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B40e89d:{NFSU2_TR(0x40e89d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40e8a0:{NFSU2_TR(0x40e8a0);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B40e8a3:{NFSU2_TR(0x40e8a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40e8b8;}}
}
B40e8a5:L40e8a5:{c.instructions+=5;NFSU2_TR(0x40e8a5);
{u32 ea_=u32(r4(R+4)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40e8ab:{NFSU2_TR(0x40e8ab);
{u32 ea_=u32(u32(7878380u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40e8b1:{NFSU2_TR(0x40e8b1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40e8b3:{NFSU2_TR(0x40e8b3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40e8b6:{NFSU2_TR(0x40e8b6);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L40e8d0;}}
}
B40e8b8:L40e8b8:{c.instructions+=2;NFSU2_TR(0x40e8b8);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B40e8bb:{NFSU2_TR(0x40e8bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40e8e5;}}
}
B40e8bd:L40e8bd:{c.instructions+=5;NFSU2_TR(0x40e8bd);
{u32 ea_=u32(r4(R+4)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40e8c3:{NFSU2_TR(0x40e8c3);
{u32 ea_=u32(u32(7878384u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40e8c9:{NFSU2_TR(0x40e8c9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40e8cb:{NFSU2_TR(0x40e8cb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40e8ce:{NFSU2_TR(0x40e8ce);
if(r1(R+514)){{goto L40e8e5;}}
}
B40e8d0:L40e8d0:{c.instructions+=3;NFSU2_TR(0x40e8d0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e8d2:{NFSU2_TR(0x40e8d2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e8d3:{NFSU2_TR(0x40e8d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e8d8ull));
TAIL_STATIC(0x40df50u,40d);
}
B40e8d8:L40e8d8:{c.instructions+=3;NFSU2_TR(0x40e8d8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B40e8db:{NFSU2_TR(0x40e8db);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B40e8de:{NFSU2_TR(0x40e8de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40e8e5;}}
}
B40e8e0:L40e8e0:{c.instructions+=1;NFSU2_TR(0x40e8e0);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B40e8e5:L40e8e5:{c.instructions+=6;NFSU2_TR(0x40e8e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B40e8e7:{NFSU2_TR(0x40e8e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B40e8ea:{NFSU2_TR(0x40e8ea);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B40e8ed:{NFSU2_TR(0x40e8ed);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B40e8ef:{NFSU2_TR(0x40e8ef);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40e8f1:{NFSU2_TR(0x40e8f1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L40e9c4;}}
}
B40e8f7:L40e8f7:{c.instructions+=1;NFSU2_TR(0x40e8f7);
{goto L40e900;}
}
B40e900:L40e900:{c.instructions+=3;NFSU2_TR(0x40e900);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B40e904:{NFSU2_TR(0x40e904);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40e906:{NFSU2_TR(0x40e906);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40e9cc;}}
}
B40e90c:L40e90c:{c.instructions+=3;NFSU2_TR(0x40e90c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e90d:{NFSU2_TR(0x40e90d);
__builtin_memmove((R+4),(R+20),4);
}
B40e90f:{NFSU2_TR(0x40e90f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e914ull));
TAIL_STATIC(0x5a0820u,5a0);
}
B40e914:L40e914:{c.instructions+=5;NFSU2_TR(0x40e914);
__builtin_memmove((R+24),(R+0),4);
}
B40e916:{NFSU2_TR(0x40e916);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40e918:{NFSU2_TR(0x40e918);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e919:{NFSU2_TR(0x40e919);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e91a:{NFSU2_TR(0x40e91a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e91full));
TAIL_STATIC(0x402a40u,402);
}
B40e91f:L40e91f:{c.instructions+=3;NFSU2_TR(0x40e91f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B40e922:{NFSU2_TR(0x40e922);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40e924:{NFSU2_TR(0x40e924);
if(r1(R+518)){{goto L40e934;}}
}
B40e926:L40e926:{c.instructions+=2;NFSU2_TR(0x40e926);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B40e929:{NFSU2_TR(0x40e929);
if(r1(R+518)){{goto L40e934;}}
}
B40e92b:L40e92b:{c.instructions+=2;NFSU2_TR(0x40e92b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B40e92e:{NFSU2_TR(0x40e92e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40e9b7;}}
}
B40e934:L40e934:{c.instructions+=11;NFSU2_TR(0x40e934);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B40e93a:{NFSU2_TR(0x40e93a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40e93d:{NFSU2_TR(0x40e93d);
__builtin_memmove((R+8),(R+4),4);
}
B40e93f:{NFSU2_TR(0x40e93f);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B40e941:{NFSU2_TR(0x40e941);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40e945:{NFSU2_TR(0x40e945);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40e949:{NFSU2_TR(0x40e949);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40e94f:{NFSU2_TR(0x40e94f);
{u32 ea_=u32(u32(7878372u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40e955:{NFSU2_TR(0x40e955);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40e957:{NFSU2_TR(0x40e957);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40e95a:{NFSU2_TR(0x40e95a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40e9b7;}}
}
B40e95c:L40e95c:{c.instructions+=8;NFSU2_TR(0x40e95c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B40e95f:{NFSU2_TR(0x40e95f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40e963:{NFSU2_TR(0x40e963);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40e967:{NFSU2_TR(0x40e967);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40e96d:{NFSU2_TR(0x40e96d);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40e973:{NFSU2_TR(0x40e973);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40e975:{NFSU2_TR(0x40e975);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40e978:{NFSU2_TR(0x40e978);
if(r1(R+514)){{goto L40e9b7;}}
}
B40e97a:L40e97a:{c.instructions+=7;NFSU2_TR(0x40e97a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40e97e:{NFSU2_TR(0x40e97e);
{u32 ea_=u32(r4(R+0)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40e984:{NFSU2_TR(0x40e984);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40e988:{NFSU2_TR(0x40e988);
{u32 ea_=u32(u32(7878376u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40e98e:{NFSU2_TR(0x40e98e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40e990:{NFSU2_TR(0x40e990);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40e993:{NFSU2_TR(0x40e993);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L40e9b2;}}
}
B40e995:L40e995:{c.instructions+=6;NFSU2_TR(0x40e995);
__builtin_memmove((R+4),gp(0x7836e8),4);
}
B40e99b:{NFSU2_TR(0x40e99b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40e99f:{NFSU2_TR(0x40e99f);
u8 U[4];
w4(U+0,u32(0x3a83126full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e9a4:{NFSU2_TR(0x40e9a4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e9a5:{NFSU2_TR(0x40e9a5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e9a6:{NFSU2_TR(0x40e9a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40e9abull));
TAIL_STATIC(0x4010c0u,401);
}
B40e9ab:L40e9ab:{c.instructions+=3;NFSU2_TR(0x40e9ab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B40e9ae:{NFSU2_TR(0x40e9ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40e9b0:{NFSU2_TR(0x40e9b0);
if(r1(R+518)){{goto L40e9b7;}}
}
B40e9b2:L40e9b2:{c.instructions+=1;NFSU2_TR(0x40e9b2);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B40e9b7:L40e9b7:{c.instructions+=4;NFSU2_TR(0x40e9b7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B40e9bb:{NFSU2_TR(0x40e9bb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B40e9bc:{NFSU2_TR(0x40e9bc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40e9be:{NFSU2_TR(0x40e9be);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40e900u);}goto L40e900;}}
}
B40e9c4:L40e9c4:{c.instructions+=3;NFSU2_TR(0x40e9c4);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B40e9c8:{NFSU2_TR(0x40e9c8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40e9ca:{NFSU2_TR(0x40e9ca);
if(r1(R+518)){{goto L40e9d9;}}
}
B40e9cc:L40e9cc:{c.instructions+=7;NFSU2_TR(0x40e9cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40e9cd:{NFSU2_TR(0x40e9cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40e9ce:{NFSU2_TR(0x40e9ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40e9cf:{NFSU2_TR(0x40e9cf);
w4(R+0,u32(0x1f4ull));
}
B40e9d4:{NFSU2_TR(0x40e9d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40e9d5:{NFSU2_TR(0x40e9d5);
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
B40e9d8:{NFSU2_TR(0x40e9d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40e9d9:L40e9d9:{c.instructions+=7;NFSU2_TR(0x40e9d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40e9da:{NFSU2_TR(0x40e9da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40e9db:{NFSU2_TR(0x40e9db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40e9dc:{NFSU2_TR(0x40e9dc);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B40e9df:{NFSU2_TR(0x40e9df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40e9e0:{NFSU2_TR(0x40e9e0);
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
B40e9e3:{NFSU2_TR(0x40e9e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40e9f0:L40e9f0:{c.instructions+=10;NFSU2_TR(0x40e9f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B40e9f3:{NFSU2_TR(0x40e9f3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e9f4:{NFSU2_TR(0x40e9f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e9f5:{NFSU2_TR(0x40e9f5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40e9f6:{NFSU2_TR(0x40e9f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B40e9fa:{NFSU2_TR(0x40e9fa);
__builtin_memmove((R+24),(R+4),4);
}
B40e9fc:{NFSU2_TR(0x40e9fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B40e9fe:{NFSU2_TR(0x40e9fe);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
w1(R+519,u8(s8(r1(R+12))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+12))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+12))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40ea00:{NFSU2_TR(0x40ea00);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40ea04:{NFSU2_TR(0x40ea04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ea09ull));
TAIL_STATIC(0x5ec0b0u,5ec);
}
B40ea09:L40ea09:{c.instructions+=2;NFSU2_TR(0x40ea09);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40ea0b:{NFSU2_TR(0x40ea0b);
if(r1(R+518)){{goto L40eb49;}}
}
B40ea11:L40ea11:{c.instructions+=6;NFSU2_TR(0x40ea11);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B40ea18:{NFSU2_TR(0x40ea18);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B40ea1b:{NFSU2_TR(0x40ea1b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B40ea1e:{NFSU2_TR(0x40ea1e);
u8 U[14];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+4,u32(s32(s16(r2(U+12)))));
}
B40ea23:{NFSU2_TR(0x40ea23);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e970ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B40ea2a:{NFSU2_TR(0x40ea2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ea2full));
TAIL_STATIC(0x60bef0u,60b);
}
B40ea2f:L40ea2f:{c.instructions+=2;NFSU2_TR(0x40ea2f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40ea31:{NFSU2_TR(0x40ea31);
if(r1(R+518)){{goto L40eb49;}}
}
B40ea37:L40ea37:{c.instructions+=3;NFSU2_TR(0x40ea37);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B40ea3d:{NFSU2_TR(0x40ea3d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40ea3f:{NFSU2_TR(0x40ea3f);
if(r1(R+518)){{goto L40ea6e;}}
}
B40ea41:L40ea41:{c.instructions+=10;NFSU2_TR(0x40ea41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40ea47:{NFSU2_TR(0x40ea47);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B40ea4d:{NFSU2_TR(0x40ea4d);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B40ea4f:{NFSU2_TR(0x40ea4f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40ea53:{NFSU2_TR(0x40ea53);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40ea57:{NFSU2_TR(0x40ea57);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40ea5d:{NFSU2_TR(0x40ea5d);
{u32 ea_=u32(r4(R+24)+u32(532u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40ea63:{NFSU2_TR(0x40ea63);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40ea65:{NFSU2_TR(0x40ea65);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40ea68:{NFSU2_TR(0x40ea68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40eb54;}}
}
B40ea6e:L40ea6e:{c.instructions+=4;NFSU2_TR(0x40ea6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40ea70:{NFSU2_TR(0x40ea70);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ea72:{NFSU2_TR(0x40ea72);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ea73:{NFSU2_TR(0x40ea73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ea78ull));
TAIL_STATIC(0x40df50u,40d);
}
B40ea78:L40ea78:{c.instructions+=3;NFSU2_TR(0x40ea78);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B40ea7b:{NFSU2_TR(0x40ea7b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B40ea7e:{NFSU2_TR(0x40ea7e);
if(r1(R+518)){{goto L40eb49;}}
}
B40ea84:L40ea84:{c.instructions+=7;NFSU2_TR(0x40ea84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40ea86:{NFSU2_TR(0x40ea86);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B40ea89:{NFSU2_TR(0x40ea89);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B40ea8c:{NFSU2_TR(0x40ea8c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ea8d:{NFSU2_TR(0x40ea8d);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B40ea8f:{NFSU2_TR(0x40ea8f);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40ea91:{NFSU2_TR(0x40ea91);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L40eb3b;}}
}
B40ea97:L40ea97:{c.instructions+=1;NFSU2_TR(0x40ea97);
{goto L40eaa0;}
}
B40eaa0:L40eaa0:{c.instructions+=3;NFSU2_TR(0x40eaa0);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B40eaa4:{NFSU2_TR(0x40eaa4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40eaa6:{NFSU2_TR(0x40eaa6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40eb3f;}}
}
B40eaac:L40eaac:{c.instructions+=3;NFSU2_TR(0x40eaac);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40eaad:{NFSU2_TR(0x40eaad);
__builtin_memmove((R+4),(R+12),4);
}
B40eaaf:{NFSU2_TR(0x40eaaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40eab4ull));
TAIL_STATIC(0x5a0820u,5a0);
}
B40eab4:L40eab4:{c.instructions+=5;NFSU2_TR(0x40eab4);
__builtin_memmove((R+24),(R+0),4);
}
B40eab6:{NFSU2_TR(0x40eab6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40eab8:{NFSU2_TR(0x40eab8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40eab9:{NFSU2_TR(0x40eab9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40eaba:{NFSU2_TR(0x40eaba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40eabfull));
TAIL_STATIC(0x402a40u,402);
}
B40eabf:L40eabf:{c.instructions+=3;NFSU2_TR(0x40eabf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B40eac2:{NFSU2_TR(0x40eac2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B40eac5:{NFSU2_TR(0x40eac5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40eb2e;}}
}
B40eac7:L40eac7:{c.instructions+=10;NFSU2_TR(0x40eac7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40eaca:{NFSU2_TR(0x40eaca);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B40ead0:{NFSU2_TR(0x40ead0);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B40ead2:{NFSU2_TR(0x40ead2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40ead6:{NFSU2_TR(0x40ead6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40eada:{NFSU2_TR(0x40eada);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40eae0:{NFSU2_TR(0x40eae0);
{u32 ea_=u32(u32(7878372u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40eae6:{NFSU2_TR(0x40eae6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40eae8:{NFSU2_TR(0x40eae8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40eaeb:{NFSU2_TR(0x40eaeb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40eb2e;}}
}
B40eaed:L40eaed:{c.instructions+=9;NFSU2_TR(0x40eaed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B40eaef:{NFSU2_TR(0x40eaef);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40eaf5:{NFSU2_TR(0x40eaf5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40eaf9:{NFSU2_TR(0x40eaf9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40eafd:{NFSU2_TR(0x40eafd);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B40eaff:{NFSU2_TR(0x40eaff);
{u32 ea_=u32(u32(7878376u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40eb05:{NFSU2_TR(0x40eb05);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40eb07:{NFSU2_TR(0x40eb07);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40eb0a:{NFSU2_TR(0x40eb0a);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L40eb29;}}
}
B40eb0c:L40eb0c:{c.instructions+=6;NFSU2_TR(0x40eb0c);
__builtin_memmove((R+4),gp(0x7836e8),4);
}
B40eb12:{NFSU2_TR(0x40eb12);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40eb16:{NFSU2_TR(0x40eb16);
u8 U[4];
w4(U+0,u32(0x3a83126full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40eb1b:{NFSU2_TR(0x40eb1b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40eb1c:{NFSU2_TR(0x40eb1c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40eb1d:{NFSU2_TR(0x40eb1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40eb22ull));
TAIL_STATIC(0x4010c0u,401);
}
B40eb22:L40eb22:{c.instructions+=3;NFSU2_TR(0x40eb22);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B40eb25:{NFSU2_TR(0x40eb25);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40eb27:{NFSU2_TR(0x40eb27);
if(r1(R+518)){{goto L40eb2e;}}
}
B40eb29:L40eb29:{c.instructions+=1;NFSU2_TR(0x40eb29);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B40eb2e:L40eb2e:{c.instructions+=4;NFSU2_TR(0x40eb2e);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B40eb32:{NFSU2_TR(0x40eb32);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B40eb33:{NFSU2_TR(0x40eb33);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40eb35:{NFSU2_TR(0x40eb35);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40eaa0u);}goto L40eaa0;}}
}
B40eb3b:L40eb3b:{c.instructions+=1;NFSU2_TR(0x40eb3b);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B40eb3f:L40eb3f:{c.instructions+=6;NFSU2_TR(0x40eb3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40eb40:{NFSU2_TR(0x40eb40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40eb41:{NFSU2_TR(0x40eb41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40eb42:{NFSU2_TR(0x40eb42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40eb43:{NFSU2_TR(0x40eb43);
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
B40eb46:{NFSU2_TR(0x40eb46);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40eb49:L40eb49:{c.instructions+=6;NFSU2_TR(0x40eb49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40eb4a:{NFSU2_TR(0x40eb4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40eb4b:{NFSU2_TR(0x40eb4b);
w1(R+0,u8(0x1ull));
}
B40eb4d:{NFSU2_TR(0x40eb4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40eb4e:{NFSU2_TR(0x40eb4e);
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
B40eb51:{NFSU2_TR(0x40eb51);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40eb54:L40eb54:{c.instructions+=6;NFSU2_TR(0x40eb54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40eb55:{NFSU2_TR(0x40eb55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40eb56:{NFSU2_TR(0x40eb56);
__builtin_memmove((R+0),(R+12),1);
}
B40eb58:{NFSU2_TR(0x40eb58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40eb59:{NFSU2_TR(0x40eb59);
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
B40eb5c:{NFSU2_TR(0x40eb5c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40eb60:L40eb60:{c.instructions+=6;NFSU2_TR(0x40eb60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40eb61:{NFSU2_TR(0x40eb61);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40eb65:{NFSU2_TR(0x40eb65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40eb67:{NFSU2_TR(0x40eb67);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40eb6a:{NFSU2_TR(0x40eb6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B40eb6c:{NFSU2_TR(0x40eb6c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40eb6full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B40eb6f:L40eb6f:{c.instructions+=4;NFSU2_TR(0x40eb6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B40eb71:{NFSU2_TR(0x40eb71);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40eb73:{NFSU2_TR(0x40eb73);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40eb75:{NFSU2_TR(0x40eb75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40eb7aull));
TAIL_STATIC(0x5ecf20u,5ec);
}
B40eb7a:L40eb7a:{c.instructions+=2;NFSU2_TR(0x40eb7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40eb7b:{NFSU2_TR(0x40eb7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40eb80:L40eb80:{c.instructions+=8;NFSU2_TR(0x40eb80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40eb81:{NFSU2_TR(0x40eb81);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40eb85:{NFSU2_TR(0x40eb85);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40eb86:{NFSU2_TR(0x40eb86);
u8 U[4];
w4(U+0,u32(0x784d2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40eb8b:{NFSU2_TR(0x40eb8b);
__builtin_memmove((R+28),(R+4),4);
}
B40eb8d:{NFSU2_TR(0x40eb8d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40eb8f:{NFSU2_TR(0x40eb8f);
__builtin_memmove((R+4),(R+24),4);
}
B40eb91:{NFSU2_TR(0x40eb91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40eb96ull));
TAIL_STATIC(0x578ce0u,578);
}
B40eb96:L40eb96:{c.instructions+=3;NFSU2_TR(0x40eb96);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40eb97:{NFSU2_TR(0x40eb97);
__builtin_memmove((R+4),(R+28),4);
}
B40eb99:{NFSU2_TR(0x40eb99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40eb9eull));
TAIL_STATIC(0x40de20u,40d);
}
B40eb9e:L40eb9e:{c.instructions+=3;NFSU2_TR(0x40eb9e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40eb9f:{NFSU2_TR(0x40eb9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x210ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40eba5:{NFSU2_TR(0x40eba5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ebaaull));
TAIL_STATIC(0x61f760u,61f);
}
B40ebaa:L40ebaa:{c.instructions+=4;NFSU2_TR(0x40ebaa);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x21cull))));
}
B40ebb0:{NFSU2_TR(0x40ebb0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ebb1:{NFSU2_TR(0x40ebb1);
__builtin_memmove((R+4),(R+24),4);
}
B40ebb3:{NFSU2_TR(0x40ebb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ebb8ull));
TAIL_STATIC(0x571770u,571);
}
B40ebb8:L40ebb8:{c.instructions+=2;NFSU2_TR(0x40ebb8);
__builtin_memmove((R+4),(R+24),4);
}
B40ebba:{NFSU2_TR(0x40ebba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ebbfull));
TAIL_STATIC(0x578d90u,578);
}
B40ebbf:L40ebbf:{c.instructions+=3;NFSU2_TR(0x40ebbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40ebc0:{NFSU2_TR(0x40ebc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40ebc1:{NFSU2_TR(0x40ebc1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40ebd0:L40ebd0:{c.instructions+=8;NFSU2_TR(0x40ebd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ebd1:{NFSU2_TR(0x40ebd1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40ebd5:{NFSU2_TR(0x40ebd5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ebd6:{NFSU2_TR(0x40ebd6);
u8 U[4];
w4(U+0,u32(0x784d40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ebdb:{NFSU2_TR(0x40ebdb);
__builtin_memmove((R+28),(R+4),4);
}
B40ebdd:{NFSU2_TR(0x40ebdd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ebdf:{NFSU2_TR(0x40ebdf);
__builtin_memmove((R+4),(R+24),4);
}
B40ebe1:{NFSU2_TR(0x40ebe1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ebe6ull));
TAIL_STATIC(0x578ce0u,578);
}
B40ebe6:L40ebe6:{c.instructions+=4;NFSU2_TR(0x40ebe6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x210ull))));
__builtin_memmove((R+0),(U+0),4);
}
B40ebec:{NFSU2_TR(0x40ebec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ebed:{NFSU2_TR(0x40ebed);
__builtin_memmove((R+4),(R+24),4);
}
B40ebef:{NFSU2_TR(0x40ebef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ebf4ull));
TAIL_STATIC(0x571770u,571);
}
B40ebf4:L40ebf4:{c.instructions+=7;NFSU2_TR(0x40ebf4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ebf6:{NFSU2_TR(0x40ebf6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ebf8:{NFSU2_TR(0x40ebf8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ebfa:{NFSU2_TR(0x40ebfa);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x214ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40ec00:{NFSU2_TR(0x40ec00);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ec01:{NFSU2_TR(0x40ec01);
__builtin_memmove((R+4),(R+24),4);
}
B40ec03:{NFSU2_TR(0x40ec03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ec08ull));
TAIL_STATIC(0x571640u,571);
}
B40ec08:L40ec08:{c.instructions+=3;NFSU2_TR(0x40ec08);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ec09:{NFSU2_TR(0x40ec09);
__builtin_memmove((R+4),(R+28),4);
}
B40ec0b:{NFSU2_TR(0x40ec0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ec10ull));
TAIL_STATIC(0x40de20u,40d);
}
B40ec10:L40ec10:{c.instructions+=2;NFSU2_TR(0x40ec10);
__builtin_memmove((R+4),(R+24),4);
}
B40ec12:{NFSU2_TR(0x40ec12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ec17ull));
TAIL_STATIC(0x578d90u,578);
}
B40ec17:L40ec17:{c.instructions+=3;NFSU2_TR(0x40ec17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40ec18:{NFSU2_TR(0x40ec18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40ec19:{NFSU2_TR(0x40ec19);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40ec20:L40ec20:{c.instructions+=8;NFSU2_TR(0x40ec20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ec21:{NFSU2_TR(0x40ec21);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40ec25:{NFSU2_TR(0x40ec25);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ec26:{NFSU2_TR(0x40ec26);
u8 U[4];
w4(U+0,u32(0x784d5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ec2b:{NFSU2_TR(0x40ec2b);
__builtin_memmove((R+28),(R+4),4);
}
B40ec2d:{NFSU2_TR(0x40ec2d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ec2f:{NFSU2_TR(0x40ec2f);
__builtin_memmove((R+4),(R+24),4);
}
B40ec31:{NFSU2_TR(0x40ec31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ec36ull));
TAIL_STATIC(0x578ce0u,578);
}
B40ec36:L40ec36:{c.instructions+=3;NFSU2_TR(0x40ec36);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ec37:{NFSU2_TR(0x40ec37);
__builtin_memmove((R+4),(R+28),4);
}
B40ec39:{NFSU2_TR(0x40ec39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ec3eull));
TAIL_STATIC(0x40de20u,40d);
}
B40ec3e:L40ec3e:{c.instructions+=2;NFSU2_TR(0x40ec3e);
__builtin_memmove((R+4),(R+24),4);
}
B40ec40:{NFSU2_TR(0x40ec40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ec45ull));
TAIL_STATIC(0x578d90u,578);
}
B40ec45:L40ec45:{c.instructions+=3;NFSU2_TR(0x40ec45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40ec46:{NFSU2_TR(0x40ec46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40ec47:{NFSU2_TR(0x40ec47);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40ec50:L40ec50:{c.instructions+=8;NFSU2_TR(0x40ec50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ec51:{NFSU2_TR(0x40ec51);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40ec55:{NFSU2_TR(0x40ec55);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ec56:{NFSU2_TR(0x40ec56);
u8 U[4];
w4(U+0,u32(0x784d78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ec5b:{NFSU2_TR(0x40ec5b);
__builtin_memmove((R+28),(R+4),4);
}
B40ec5d:{NFSU2_TR(0x40ec5d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ec5f:{NFSU2_TR(0x40ec5f);
__builtin_memmove((R+4),(R+24),4);
}
B40ec61:{NFSU2_TR(0x40ec61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ec66ull));
TAIL_STATIC(0x578ce0u,578);
}
B40ec66:L40ec66:{c.instructions+=3;NFSU2_TR(0x40ec66);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ec67:{NFSU2_TR(0x40ec67);
__builtin_memmove((R+4),(R+28),4);
}
B40ec69:{NFSU2_TR(0x40ec69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ec6eull));
TAIL_STATIC(0x40de20u,40d);
}
B40ec6e:L40ec6e:{c.instructions+=3;NFSU2_TR(0x40ec6e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ec6f:{NFSU2_TR(0x40ec6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x210ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40ec75:{NFSU2_TR(0x40ec75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ec7aull));
TAIL_STATIC(0x61f760u,61f);
}
B40ec7a:L40ec7a:{c.instructions+=4;NFSU2_TR(0x40ec7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x21cull))));
__builtin_memmove((R+0),(U+0),4);
}
B40ec80:{NFSU2_TR(0x40ec80);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ec81:{NFSU2_TR(0x40ec81);
__builtin_memmove((R+4),(R+24),4);
}
B40ec83:{NFSU2_TR(0x40ec83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ec88ull));
TAIL_STATIC(0x571770u,571);
}
B40ec88:L40ec88:{c.instructions+=4;NFSU2_TR(0x40ec88);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x220ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40ec8e:{NFSU2_TR(0x40ec8e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ec8f:{NFSU2_TR(0x40ec8f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ec90:{NFSU2_TR(0x40ec90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ec95ull));
TAIL_STATIC(0x409240u,409);
}
B40ec95:L40ec95:{c.instructions+=5;NFSU2_TR(0x40ec95);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B40ec98:{NFSU2_TR(0x40ec98);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x224ull))));
__builtin_memmove((R+8),(U+0),4);
}
B40ec9e:{NFSU2_TR(0x40ec9e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ec9f:{NFSU2_TR(0x40ec9f);
__builtin_memmove((R+4),(R+24),4);
}
B40eca1:{NFSU2_TR(0x40eca1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40eca6ull));
TAIL_STATIC(0x571770u,571);
}
B40eca6:L40eca6:{c.instructions+=4;NFSU2_TR(0x40eca6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x22cull))));
__builtin_memmove((R+0),(U+0),4);
}
B40ecac:{NFSU2_TR(0x40ecac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ecad:{NFSU2_TR(0x40ecad);
__builtin_memmove((R+4),(R+24),4);
}
B40ecaf:{NFSU2_TR(0x40ecaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ecb4ull));
TAIL_STATIC(0x571770u,571);
}
B40ecb4:L40ecb4:{c.instructions+=4;NFSU2_TR(0x40ecb4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x228ull))));
}
B40ecba:{NFSU2_TR(0x40ecba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ecbb:{NFSU2_TR(0x40ecbb);
__builtin_memmove((R+4),(R+24),4);
}
B40ecbd:{NFSU2_TR(0x40ecbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ecc2ull));
TAIL_STATIC(0x571770u,571);
}
B40ecc2:L40ecc2:{c.instructions+=2;NFSU2_TR(0x40ecc2);
__builtin_memmove((R+4),(R+24),4);
}
B40ecc4:{NFSU2_TR(0x40ecc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ecc9ull));
TAIL_STATIC(0x578d90u,578);
}
B40ecc9:L40ecc9:{c.instructions+=3;NFSU2_TR(0x40ecc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40ecca:{NFSU2_TR(0x40ecca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40eccb:{NFSU2_TR(0x40eccb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40ecd0:L40ecd0:{c.instructions+=8;NFSU2_TR(0x40ecd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ecd1:{NFSU2_TR(0x40ecd1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40ecd5:{NFSU2_TR(0x40ecd5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ecd6:{NFSU2_TR(0x40ecd6);
u8 U[4];
w4(U+0,u32(0x784d90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ecdb:{NFSU2_TR(0x40ecdb);
__builtin_memmove((R+28),(R+4),4);
}
B40ecdd:{NFSU2_TR(0x40ecdd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ecdf:{NFSU2_TR(0x40ecdf);
__builtin_memmove((R+4),(R+24),4);
}
B40ece1:{NFSU2_TR(0x40ece1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ece6ull));
TAIL_STATIC(0x578ce0u,578);
}
B40ece6:L40ece6:{c.instructions+=3;NFSU2_TR(0x40ece6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ece7:{NFSU2_TR(0x40ece7);
__builtin_memmove((R+4),(R+28),4);
}
B40ece9:{NFSU2_TR(0x40ece9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40eceeull));
TAIL_STATIC(0x40de20u,40d);
}
B40ecee:L40ecee:{c.instructions+=3;NFSU2_TR(0x40ecee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ecef:{NFSU2_TR(0x40ecef);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x210ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40ecf5:{NFSU2_TR(0x40ecf5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ecfaull));
TAIL_STATIC(0x61f760u,61f);
}
B40ecfa:L40ecfa:{c.instructions+=2;NFSU2_TR(0x40ecfa);
__builtin_memmove((R+4),(R+24),4);
}
B40ecfc:{NFSU2_TR(0x40ecfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ed01ull));
TAIL_STATIC(0x578d90u,578);
}
B40ed01:L40ed01:{c.instructions+=3;NFSU2_TR(0x40ed01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40ed02:{NFSU2_TR(0x40ed02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40ed03:{NFSU2_TR(0x40ed03);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40ed10:L40ed10:{c.instructions+=8;NFSU2_TR(0x40ed10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ed11:{NFSU2_TR(0x40ed11);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40ed15:{NFSU2_TR(0x40ed15);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ed16:{NFSU2_TR(0x40ed16);
u8 U[4];
w4(U+0,u32(0x784dacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ed1b:{NFSU2_TR(0x40ed1b);
__builtin_memmove((R+28),(R+4),4);
}
B40ed1d:{NFSU2_TR(0x40ed1d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ed1f:{NFSU2_TR(0x40ed1f);
__builtin_memmove((R+4),(R+24),4);
}
B40ed21:{NFSU2_TR(0x40ed21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ed26ull));
TAIL_STATIC(0x578ce0u,578);
}
B40ed26:L40ed26:{c.instructions+=3;NFSU2_TR(0x40ed26);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ed27:{NFSU2_TR(0x40ed27);
__builtin_memmove((R+4),(R+28),4);
}
B40ed29:{NFSU2_TR(0x40ed29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ed2eull));
TAIL_STATIC(0x40de20u,40d);
}
B40ed2e:L40ed2e:{c.instructions+=2;NFSU2_TR(0x40ed2e);
__builtin_memmove((R+4),(R+24),4);
}
B40ed30:{NFSU2_TR(0x40ed30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ed35ull));
TAIL_STATIC(0x578d90u,578);
}
B40ed35:L40ed35:{c.instructions+=3;NFSU2_TR(0x40ed35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40ed36:{NFSU2_TR(0x40ed36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40ed37:{NFSU2_TR(0x40ed37);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40ed40:L40ed40:{c.instructions+=8;NFSU2_TR(0x40ed40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ed41:{NFSU2_TR(0x40ed41);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40ed45:{NFSU2_TR(0x40ed45);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ed46:{NFSU2_TR(0x40ed46);
u8 U[4];
w4(U+0,u32(0x784dc4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ed4b:{NFSU2_TR(0x40ed4b);
__builtin_memmove((R+28),(R+4),4);
}
B40ed4d:{NFSU2_TR(0x40ed4d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ed4f:{NFSU2_TR(0x40ed4f);
__builtin_memmove((R+4),(R+24),4);
}
B40ed51:{NFSU2_TR(0x40ed51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ed56ull));
TAIL_STATIC(0x578ce0u,578);
}
B40ed56:L40ed56:{c.instructions+=4;NFSU2_TR(0x40ed56);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x210ull))));
__builtin_memmove((R+0),(U+0),4);
}
B40ed5c:{NFSU2_TR(0x40ed5c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ed5d:{NFSU2_TR(0x40ed5d);
__builtin_memmove((R+4),(R+24),4);
}
B40ed5f:{NFSU2_TR(0x40ed5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ed64ull));
TAIL_STATIC(0x571770u,571);
}
B40ed64:L40ed64:{c.instructions+=3;NFSU2_TR(0x40ed64);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ed65:{NFSU2_TR(0x40ed65);
__builtin_memmove((R+4),(R+28),4);
}
B40ed67:{NFSU2_TR(0x40ed67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ed6cull));
TAIL_STATIC(0x40de20u,40d);
}
B40ed6c:L40ed6c:{c.instructions+=2;NFSU2_TR(0x40ed6c);
__builtin_memmove((R+4),(R+24),4);
}
B40ed6e:{NFSU2_TR(0x40ed6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ed73ull));
TAIL_STATIC(0x578d90u,578);
}
B40ed73:L40ed73:{c.instructions+=3;NFSU2_TR(0x40ed73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40ed74:{NFSU2_TR(0x40ed74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40ed75:{NFSU2_TR(0x40ed75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40ed80:L40ed80:{c.instructions+=8;NFSU2_TR(0x40ed80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ed81:{NFSU2_TR(0x40ed81);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40ed85:{NFSU2_TR(0x40ed85);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ed86:{NFSU2_TR(0x40ed86);
u8 U[4];
w4(U+0,u32(0x784dd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ed8b:{NFSU2_TR(0x40ed8b);
__builtin_memmove((R+28),(R+4),4);
}
B40ed8d:{NFSU2_TR(0x40ed8d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ed8f:{NFSU2_TR(0x40ed8f);
__builtin_memmove((R+4),(R+24),4);
}
B40ed91:{NFSU2_TR(0x40ed91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ed96ull));
TAIL_STATIC(0x578ce0u,578);
}
B40ed96:L40ed96:{c.instructions+=3;NFSU2_TR(0x40ed96);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ed97:{NFSU2_TR(0x40ed97);
__builtin_memmove((R+4),(R+28),4);
}
B40ed99:{NFSU2_TR(0x40ed99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ed9eull));
TAIL_STATIC(0x40de20u,40d);
}
B40ed9e:L40ed9e:{c.instructions+=3;NFSU2_TR(0x40ed9e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ed9f:{NFSU2_TR(0x40ed9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x210ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40eda5:{NFSU2_TR(0x40eda5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40edaaull));
TAIL_STATIC(0x61f760u,61f);
}
B40edaa:L40edaa:{c.instructions+=4;NFSU2_TR(0x40edaa);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x21cull))));
__builtin_memmove((R+0),(U+0),4);
}
B40edb0:{NFSU2_TR(0x40edb0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40edb1:{NFSU2_TR(0x40edb1);
__builtin_memmove((R+4),(R+24),4);
}
B40edb3:{NFSU2_TR(0x40edb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40edb8ull));
TAIL_STATIC(0x571770u,571);
}
B40edb8:L40edb8:{c.instructions+=4;NFSU2_TR(0x40edb8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x220ull))));
}
B40edbe:{NFSU2_TR(0x40edbe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40edbf:{NFSU2_TR(0x40edbf);
__builtin_memmove((R+4),(R+24),4);
}
B40edc1:{NFSU2_TR(0x40edc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40edc6ull));
TAIL_STATIC(0x571770u,571);
}
B40edc6:L40edc6:{c.instructions+=2;NFSU2_TR(0x40edc6);
__builtin_memmove((R+4),(R+24),4);
}
B40edc8:{NFSU2_TR(0x40edc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40edcdull));
TAIL_STATIC(0x578d90u,578);
}
B40edcd:L40edcd:{c.instructions+=3;NFSU2_TR(0x40edcd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40edce:{NFSU2_TR(0x40edce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40edcf:{NFSU2_TR(0x40edcf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40ede0:L40ede0:{c.instructions+=8;NFSU2_TR(0x40ede0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ede1:{NFSU2_TR(0x40ede1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40ede5:{NFSU2_TR(0x40ede5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ede6:{NFSU2_TR(0x40ede6);
u8 U[4];
w4(U+0,u32(0x784df8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40edeb:{NFSU2_TR(0x40edeb);
__builtin_memmove((R+28),(R+4),4);
}
B40eded:{NFSU2_TR(0x40eded);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40edef:{NFSU2_TR(0x40edef);
__builtin_memmove((R+4),(R+24),4);
}
B40edf1:{NFSU2_TR(0x40edf1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40edf6ull));
TAIL_STATIC(0x578ce0u,578);
}
B40edf6:L40edf6:{c.instructions+=7;NFSU2_TR(0x40edf6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40edf8:{NFSU2_TR(0x40edf8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40edfa:{NFSU2_TR(0x40edfa);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40edfc:{NFSU2_TR(0x40edfc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x214ull))));
__builtin_memmove((R+0),(U+0),4);
}
B40ee02:{NFSU2_TR(0x40ee02);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ee03:{NFSU2_TR(0x40ee03);
__builtin_memmove((R+4),(R+24),4);
}
B40ee05:{NFSU2_TR(0x40ee05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ee0aull));
TAIL_STATIC(0x571640u,571);
}
B40ee0a:L40ee0a:{c.instructions+=7;NFSU2_TR(0x40ee0a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ee0c:{NFSU2_TR(0x40ee0c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ee0e:{NFSU2_TR(0x40ee0e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ee10:{NFSU2_TR(0x40ee10);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x218ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40ee16:{NFSU2_TR(0x40ee16);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ee17:{NFSU2_TR(0x40ee17);
__builtin_memmove((R+4),(R+24),4);
}
B40ee19:{NFSU2_TR(0x40ee19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ee1eull));
TAIL_STATIC(0x571640u,571);
}
B40ee1e:L40ee1e:{c.instructions+=4;NFSU2_TR(0x40ee1e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x210ull))));
__builtin_memmove((R+8),(U+0),4);
}
B40ee24:{NFSU2_TR(0x40ee24);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ee25:{NFSU2_TR(0x40ee25);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ee26:{NFSU2_TR(0x40ee26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ee2bull));
TAIL_STATIC(0x408ef0u,408);
}
B40ee2b:L40ee2b:{c.instructions+=4;NFSU2_TR(0x40ee2b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B40ee2e:{NFSU2_TR(0x40ee2e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ee2f:{NFSU2_TR(0x40ee2f);
__builtin_memmove((R+4),(R+28),4);
}
B40ee31:{NFSU2_TR(0x40ee31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ee36ull));
TAIL_STATIC(0x40de20u,40d);
}
B40ee36:L40ee36:{c.instructions+=2;NFSU2_TR(0x40ee36);
__builtin_memmove((R+4),(R+24),4);
}
B40ee38:{NFSU2_TR(0x40ee38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ee3dull));
TAIL_STATIC(0x578d90u,578);
}
B40ee3d:L40ee3d:{c.instructions+=3;NFSU2_TR(0x40ee3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40ee3e:{NFSU2_TR(0x40ee3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40ee3f:{NFSU2_TR(0x40ee3f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40ee50:L40ee50:{c.instructions+=8;NFSU2_TR(0x40ee50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ee51:{NFSU2_TR(0x40ee51);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40ee55:{NFSU2_TR(0x40ee55);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ee56:{NFSU2_TR(0x40ee56);
u8 U[4];
w4(U+0,u32(0x784e1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ee5b:{NFSU2_TR(0x40ee5b);
__builtin_memmove((R+28),(R+4),4);
}
B40ee5d:{NFSU2_TR(0x40ee5d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ee5f:{NFSU2_TR(0x40ee5f);
__builtin_memmove((R+4),(R+24),4);
}
B40ee61:{NFSU2_TR(0x40ee61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ee66ull));
TAIL_STATIC(0x578ce0u,578);
}
B40ee66:L40ee66:{c.instructions+=3;NFSU2_TR(0x40ee66);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ee67:{NFSU2_TR(0x40ee67);
__builtin_memmove((R+4),(R+28),4);
}
B40ee69:{NFSU2_TR(0x40ee69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ee6eull));
TAIL_STATIC(0x40de20u,40d);
}
B40ee6e:L40ee6e:{c.instructions+=7;NFSU2_TR(0x40ee6e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ee70:{NFSU2_TR(0x40ee70);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ee72:{NFSU2_TR(0x40ee72);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ee74:{NFSU2_TR(0x40ee74);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x210ull))));
}
B40ee7a:{NFSU2_TR(0x40ee7a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ee7b:{NFSU2_TR(0x40ee7b);
__builtin_memmove((R+4),(R+24),4);
}
B40ee7d:{NFSU2_TR(0x40ee7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ee82ull));
TAIL_STATIC(0x571640u,571);
}
B40ee82:L40ee82:{c.instructions+=2;NFSU2_TR(0x40ee82);
__builtin_memmove((R+4),(R+24),4);
}
B40ee84:{NFSU2_TR(0x40ee84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ee89ull));
TAIL_STATIC(0x578d90u,578);
}
B40ee89:L40ee89:{c.instructions+=3;NFSU2_TR(0x40ee89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40ee8a:{NFSU2_TR(0x40ee8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40ee8b:{NFSU2_TR(0x40ee8b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40ee90:L40ee90:{c.instructions+=13;NFSU2_TR(0x40ee90);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40ee94:{NFSU2_TR(0x40ee94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40ee96:{NFSU2_TR(0x40ee96);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40ee99:{NFSU2_TR(0x40ee99);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B40ee9b:{NFSU2_TR(0x40ee9b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x780ull))));
}
B40eea0:{NFSU2_TR(0x40eea0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40eea1:{NFSU2_TR(0x40eea1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B40eea3:{NFSU2_TR(0x40eea3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40eea6:{NFSU2_TR(0x40eea6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40eea9:{NFSU2_TR(0x40eea9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40eeac:{NFSU2_TR(0x40eeac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B40eeae:{NFSU2_TR(0x40eeae);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40eeaf:{NFSU2_TR(0x40eeaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40eeb4ull));
TAIL_STATIC(0x5ecf20u,5ec);
}
B40eeb4:L40eeb4:{c.instructions+=1;NFSU2_TR(0x40eeb4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40eec0:L40eec0:{c.instructions+=8;NFSU2_TR(0x40eec0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40eec1:{NFSU2_TR(0x40eec1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40eec5:{NFSU2_TR(0x40eec5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40eec6:{NFSU2_TR(0x40eec6);
u8 U[4];
w4(U+0,u32(0x784e40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40eecb:{NFSU2_TR(0x40eecb);
__builtin_memmove((R+28),(R+4),4);
}
B40eecd:{NFSU2_TR(0x40eecd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40eecf:{NFSU2_TR(0x40eecf);
__builtin_memmove((R+4),(R+24),4);
}
B40eed1:{NFSU2_TR(0x40eed1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40eed6ull));
TAIL_STATIC(0x578ce0u,578);
}
B40eed6:L40eed6:{c.instructions+=5;NFSU2_TR(0x40eed6);
__builtin_memmove((R+4),gp(0x890080),4);
}
B40eedc:{NFSU2_TR(0x40eedc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x210ull))));
__builtin_memmove((R+0),(U+0),4);
}
B40eee2:{NFSU2_TR(0x40eee2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40eee3:{NFSU2_TR(0x40eee3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40eee4:{NFSU2_TR(0x40eee4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40eee9ull));
TAIL_STATIC(0x5f0e60u,5f0);
}
B40eee9:L40eee9:{c.instructions+=4;NFSU2_TR(0x40eee9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x214ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40eeef:{NFSU2_TR(0x40eeef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40eef0:{NFSU2_TR(0x40eef0);
__builtin_memmove((R+4),(R+24),4);
}
B40eef2:{NFSU2_TR(0x40eef2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40eef7ull));
TAIL_STATIC(0x571770u,571);
}
B40eef7:L40eef7:{c.instructions+=4;NFSU2_TR(0x40eef7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x218ull))));
__builtin_memmove((R+8),(U+0),4);
}
B40eefd:{NFSU2_TR(0x40eefd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40eefe:{NFSU2_TR(0x40eefe);
__builtin_memmove((R+4),(R+24),4);
}
B40ef00:{NFSU2_TR(0x40ef00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ef05ull));
TAIL_STATIC(0x571770u,571);
}
B40ef05:L40ef05:{c.instructions+=7;NFSU2_TR(0x40ef05);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ef07:{NFSU2_TR(0x40ef07);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ef09:{NFSU2_TR(0x40ef09);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ef0b:{NFSU2_TR(0x40ef0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x21cull))));
__builtin_memmove((R+0),(U+0),4);
}
B40ef11:{NFSU2_TR(0x40ef11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ef12:{NFSU2_TR(0x40ef12);
__builtin_memmove((R+4),(R+24),4);
}
B40ef14:{NFSU2_TR(0x40ef14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ef19ull));
TAIL_STATIC(0x571640u,571);
}
B40ef19:L40ef19:{c.instructions+=3;NFSU2_TR(0x40ef19);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ef1a:{NFSU2_TR(0x40ef1a);
__builtin_memmove((R+4),(R+28),4);
}
B40ef1c:{NFSU2_TR(0x40ef1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ef21ull));
TAIL_STATIC(0x40de20u,40d);
}
B40ef21:L40ef21:{c.instructions+=2;NFSU2_TR(0x40ef21);
__builtin_memmove((R+4),(R+24),4);
}
B40ef23:{NFSU2_TR(0x40ef23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ef28ull));
TAIL_STATIC(0x578d90u,578);
}
B40ef28:L40ef28:{c.instructions+=3;NFSU2_TR(0x40ef28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40ef29:{NFSU2_TR(0x40ef29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40ef2a:{NFSU2_TR(0x40ef2a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40ef30:L40ef30:{c.instructions+=8;NFSU2_TR(0x40ef30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ef31:{NFSU2_TR(0x40ef31);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40ef35:{NFSU2_TR(0x40ef35);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ef36:{NFSU2_TR(0x40ef36);
u8 U[4];
w4(U+0,u32(0x784e58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ef3b:{NFSU2_TR(0x40ef3b);
__builtin_memmove((R+28),(R+4),4);
}
B40ef3d:{NFSU2_TR(0x40ef3d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ef3f:{NFSU2_TR(0x40ef3f);
__builtin_memmove((R+4),(R+24),4);
}
B40ef41:{NFSU2_TR(0x40ef41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ef46ull));
TAIL_STATIC(0x578ce0u,578);
}
B40ef46:L40ef46:{c.instructions+=5;NFSU2_TR(0x40ef46);
__builtin_memmove((R+4),gp(0x890080),4);
}
B40ef4c:{NFSU2_TR(0x40ef4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x210ull))));
__builtin_memmove((R+0),(U+0),4);
}
B40ef52:{NFSU2_TR(0x40ef52);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ef53:{NFSU2_TR(0x40ef53);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ef54:{NFSU2_TR(0x40ef54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ef59ull));
TAIL_STATIC(0x5f0e60u,5f0);
}
B40ef59:L40ef59:{c.instructions+=4;NFSU2_TR(0x40ef59);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x214ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40ef5f:{NFSU2_TR(0x40ef5f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ef60:{NFSU2_TR(0x40ef60);
__builtin_memmove((R+4),(R+24),4);
}
B40ef62:{NFSU2_TR(0x40ef62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ef67ull));
TAIL_STATIC(0x571770u,571);
}
B40ef67:L40ef67:{c.instructions+=4;NFSU2_TR(0x40ef67);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x218ull))));
__builtin_memmove((R+8),(U+0),4);
}
B40ef6d:{NFSU2_TR(0x40ef6d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ef6e:{NFSU2_TR(0x40ef6e);
__builtin_memmove((R+4),(R+24),4);
}
B40ef70:{NFSU2_TR(0x40ef70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ef75ull));
TAIL_STATIC(0x571770u,571);
}
B40ef75:L40ef75:{c.instructions+=3;NFSU2_TR(0x40ef75);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ef76:{NFSU2_TR(0x40ef76);
__builtin_memmove((R+4),(R+28),4);
}
B40ef78:{NFSU2_TR(0x40ef78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ef7dull));
TAIL_STATIC(0x40de20u,40d);
}
B40ef7d:L40ef7d:{c.instructions+=2;NFSU2_TR(0x40ef7d);
__builtin_memmove((R+4),(R+24),4);
}
B40ef7f:{NFSU2_TR(0x40ef7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ef84ull));
TAIL_STATIC(0x578d90u,578);
}
B40ef84:L40ef84:{c.instructions+=3;NFSU2_TR(0x40ef84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40ef85:{NFSU2_TR(0x40ef85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40ef86:{NFSU2_TR(0x40ef86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40ef90:L40ef90:{c.instructions+=8;NFSU2_TR(0x40ef90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ef91:{NFSU2_TR(0x40ef91);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40ef95:{NFSU2_TR(0x40ef95);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ef96:{NFSU2_TR(0x40ef96);
u8 U[4];
w4(U+0,u32(0x784e74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ef9b:{NFSU2_TR(0x40ef9b);
__builtin_memmove((R+28),(R+4),4);
}
B40ef9d:{NFSU2_TR(0x40ef9d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ef9f:{NFSU2_TR(0x40ef9f);
__builtin_memmove((R+4),(R+24),4);
}
B40efa1:{NFSU2_TR(0x40efa1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40efa6ull));
TAIL_STATIC(0x578ce0u,578);
}
B40efa6:L40efa6:{c.instructions+=4;NFSU2_TR(0x40efa6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x210ull))));
__builtin_memmove((R+0),(U+0),4);
}
B40efac:{NFSU2_TR(0x40efac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40efad:{NFSU2_TR(0x40efad);
__builtin_memmove((R+4),(R+24),4);
}
B40efaf:{NFSU2_TR(0x40efaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40efb4ull));
TAIL_STATIC(0x571770u,571);
}
B40efb4:L40efb4:{c.instructions+=7;NFSU2_TR(0x40efb4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40efb6:{NFSU2_TR(0x40efb6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40efb8:{NFSU2_TR(0x40efb8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40efba:{NFSU2_TR(0x40efba);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x214ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40efc0:{NFSU2_TR(0x40efc0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40efc1:{NFSU2_TR(0x40efc1);
__builtin_memmove((R+4),(R+24),4);
}
B40efc3:{NFSU2_TR(0x40efc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40efc8ull));
TAIL_STATIC(0x571640u,571);
}
B40efc8:L40efc8:{c.instructions+=3;NFSU2_TR(0x40efc8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40efc9:{NFSU2_TR(0x40efc9);
__builtin_memmove((R+4),(R+28),4);
}
B40efcb:{NFSU2_TR(0x40efcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40efd0ull));
TAIL_STATIC(0x40de20u,40d);
}
B40efd0:L40efd0:{c.instructions+=2;NFSU2_TR(0x40efd0);
__builtin_memmove((R+4),(R+24),4);
}
B40efd2:{NFSU2_TR(0x40efd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40efd7ull));
TAIL_STATIC(0x578d90u,578);
}
B40efd7:L40efd7:{c.instructions+=3;NFSU2_TR(0x40efd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40efd8:{NFSU2_TR(0x40efd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40efd9:{NFSU2_TR(0x40efd9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40efe0:L40efe0:{c.instructions+=7;NFSU2_TR(0x40efe0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40efe4:{NFSU2_TR(0x40efe4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40efe5:{NFSU2_TR(0x40efe5);
__builtin_memmove((R+24),(R+4),4);
}
B40efe7:{NFSU2_TR(0x40efe7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40efe8:{NFSU2_TR(0x40efe8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40efeb:{NFSU2_TR(0x40efeb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40efec:{NFSU2_TR(0x40efec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40eff1ull));
TAIL_STATIC(0x4012b0u,401);
}
B40eff1:L40eff1:{c.instructions+=4;NFSU2_TR(0x40eff1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40eff7:{NFSU2_TR(0x40eff7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B40effa:{NFSU2_TR(0x40effa);
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
B40effc:{NFSU2_TR(0x40effc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x40f005u,40f);}
}
B40effe:L40effe:{c.instructions+=1;NFSU2_TR(0x40effe);
__builtin_memmove((R+4),(R+24),4);
TAIL_STATIC(0x40f000u,40f);
}
XIT:NFSU2_TR_EXIT(0x40e,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
