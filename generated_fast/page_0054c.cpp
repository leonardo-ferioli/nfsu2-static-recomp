#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4a7(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_512(u8* __restrict R,Cpu& c);
u32 body_513(u8* __restrict R,Cpu& c);
u32 body_515(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_525(u8* __restrict R,Cpu& c);
u32 body_528(u8* __restrict R,Cpu& c);
u32 body_529(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_531(u8* __restrict R,Cpu& c);
u32 body_533(u8* __restrict R,Cpu& c);
u32 body_534(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_541(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_54d(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5ee(u8* __restrict R,Cpu& c);
u32 body_6fe(u8* __restrict R,Cpu& c);
u32 body_743(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x54c,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x54c,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_54c(u8* __restrict R,Cpu& c);
u32 page_54c(Cpu& c){return body_54c(c.regs.data(),c);}
__attribute__((noinline)) u32 body_54c(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x54c000:goto L54c000;
case 0x54c001:c.instructions+=6;goto B54c001;
case 0x54c006:c.instructions+=5;goto B54c006;
case 0x54c007:c.instructions+=4;goto B54c007;
case 0x54c00c:c.instructions+=3;goto B54c00c;
case 0x54c00d:c.instructions+=2;goto B54c00d;
case 0x54c00f:c.instructions+=1;goto B54c00f;
case 0x54c014:goto L54c014;
case 0x54c016:goto L54c016;
case 0x54c018:goto L54c018;
case 0x54c01a:c.instructions+=5;goto B54c01a;
case 0x54c022:c.instructions+=4;goto B54c022;
case 0x54c025:c.instructions+=3;goto B54c025;
case 0x54c028:c.instructions+=2;goto B54c028;
case 0x54c02c:c.instructions+=1;goto B54c02c;
case 0x54c031:goto L54c031;
case 0x54c035:c.instructions+=7;goto B54c035;
case 0x54c036:c.instructions+=6;goto B54c036;
case 0x54c037:c.instructions+=5;goto B54c037;
case 0x54c039:c.instructions+=4;goto B54c039;
case 0x54c040:c.instructions+=3;goto B54c040;
case 0x54c041:c.instructions+=2;goto B54c041;
case 0x54c044:c.instructions+=1;goto B54c044;
case 0x54c050:goto L54c050;
case 0x54c053:c.instructions+=29;goto B54c053;
case 0x54c058:c.instructions+=28;goto B54c058;
case 0x54c05e:c.instructions+=27;goto B54c05e;
case 0x54c062:c.instructions+=26;goto B54c062;
case 0x54c067:c.instructions+=25;goto B54c067;
case 0x54c068:c.instructions+=24;goto B54c068;
case 0x54c06a:c.instructions+=23;goto B54c06a;
case 0x54c070:c.instructions+=22;goto B54c070;
case 0x54c074:c.instructions+=21;goto B54c074;
case 0x54c079:c.instructions+=20;goto B54c079;
case 0x54c07d:c.instructions+=19;goto B54c07d;
case 0x54c083:c.instructions+=18;goto B54c083;
case 0x54c087:c.instructions+=17;goto B54c087;
case 0x54c08d:c.instructions+=16;goto B54c08d;
case 0x54c091:c.instructions+=15;goto B54c091;
case 0x54c096:c.instructions+=14;goto B54c096;
case 0x54c09a:c.instructions+=13;goto B54c09a;
case 0x54c0a0:c.instructions+=12;goto B54c0a0;
case 0x54c0a4:c.instructions+=11;goto B54c0a4;
case 0x54c0ab:c.instructions+=10;goto B54c0ab;
case 0x54c0af:c.instructions+=9;goto B54c0af;
case 0x54c0b3:c.instructions+=8;goto B54c0b3;
case 0x54c0b8:c.instructions+=7;goto B54c0b8;
case 0x54c0bc:c.instructions+=6;goto B54c0bc;
case 0x54c0c2:c.instructions+=5;goto B54c0c2;
case 0x54c0c7:c.instructions+=4;goto B54c0c7;
case 0x54c0cd:c.instructions+=3;goto B54c0cd;
case 0x54c0d1:c.instructions+=2;goto B54c0d1;
case 0x54c0d5:c.instructions+=1;goto B54c0d5;
case 0x54c0d7:goto L54c0d7;
case 0x54c0dd:c.instructions+=2;goto B54c0dd;
case 0x54c0de:c.instructions+=1;goto B54c0de;
case 0x54c0e3:goto L54c0e3;
case 0x54c0e6:c.instructions+=3;goto B54c0e6;
case 0x54c0e7:c.instructions+=2;goto B54c0e7;
case 0x54c0ea:c.instructions+=1;goto B54c0ea;
case 0x54c0ed:goto L54c0ed;
case 0x54c0f0:c.instructions+=2;goto B54c0f0;
case 0x54c0f2:c.instructions+=1;goto B54c0f2;
case 0x54c0f4:goto L54c0f4;
case 0x54c0f9:c.instructions+=1;goto B54c0f9;
case 0x54c0fb:goto L54c0fb;
case 0x54c0fc:c.instructions+=4;goto B54c0fc;
case 0x54c0ff:c.instructions+=3;goto B54c0ff;
case 0x54c100:c.instructions+=2;goto B54c100;
case 0x54c105:c.instructions+=1;goto B54c105;
case 0x54c10a:goto L54c10a;
case 0x54c110:c.instructions+=2;goto B54c110;
case 0x54c111:c.instructions+=1;goto B54c111;
case 0x54c116:goto L54c116;
case 0x54c119:c.instructions+=1;goto B54c119;
case 0x54c11e:goto L54c11e;
case 0x54c123:c.instructions+=1;goto B54c123;
case 0x54c129:goto L54c129;
case 0x54c12f:goto L54c12f;
case 0x54c134:c.instructions+=1;goto B54c134;
case 0x54c13a:goto L54c13a;
case 0x54c140:goto L54c140;
case 0x54c145:c.instructions+=1;goto B54c145;
case 0x54c147:goto L54c147;
case 0x54c14c:c.instructions+=1;goto B54c14c;
case 0x54c152:goto L54c152;
case 0x54c155:c.instructions+=7;goto B54c155;
case 0x54c157:c.instructions+=6;goto B54c157;
case 0x54c15b:c.instructions+=5;goto B54c15b;
case 0x54c15c:c.instructions+=4;goto B54c15c;
case 0x54c160:c.instructions+=3;goto B54c160;
case 0x54c161:c.instructions+=2;goto B54c161;
case 0x54c162:c.instructions+=1;goto B54c162;
case 0x54c167:goto L54c167;
case 0x54c16a:c.instructions+=7;goto B54c16a;
case 0x54c16c:c.instructions+=6;goto B54c16c;
case 0x54c170:c.instructions+=5;goto B54c170;
case 0x54c171:c.instructions+=4;goto B54c171;
case 0x54c175:c.instructions+=3;goto B54c175;
case 0x54c176:c.instructions+=2;goto B54c176;
case 0x54c177:c.instructions+=1;goto B54c177;
case 0x54c17c:goto L54c17c;
case 0x54c17f:c.instructions+=7;goto B54c17f;
case 0x54c181:c.instructions+=6;goto B54c181;
case 0x54c185:c.instructions+=5;goto B54c185;
case 0x54c186:c.instructions+=4;goto B54c186;
case 0x54c18a:c.instructions+=3;goto B54c18a;
case 0x54c18b:c.instructions+=2;goto B54c18b;
case 0x54c18c:c.instructions+=1;goto B54c18c;
case 0x54c191:goto L54c191;
case 0x54c194:c.instructions+=2;goto B54c194;
case 0x54c195:c.instructions+=1;goto B54c195;
case 0x54c19a:goto L54c19a;
case 0x54c19d:c.instructions+=2;goto B54c19d;
case 0x54c19f:c.instructions+=1;goto B54c19f;
case 0x54c1a5:goto L54c1a5;
case 0x54c1a7:c.instructions+=4;goto B54c1a7;
case 0x54c1ab:c.instructions+=3;goto B54c1ab;
case 0x54c1ac:c.instructions+=2;goto B54c1ac;
case 0x54c1ad:c.instructions+=1;goto B54c1ad;
case 0x54c1b2:goto L54c1b2;
case 0x54c1b5:c.instructions+=3;goto B54c1b5;
case 0x54c1b6:c.instructions+=2;goto B54c1b6;
case 0x54c1b9:c.instructions+=1;goto B54c1b9;
case 0x54c1bc:goto L54c1bc;
case 0x54c1c0:c.instructions+=3;goto B54c1c0;
case 0x54c1c3:c.instructions+=2;goto B54c1c3;
case 0x54c1c8:c.instructions+=1;goto B54c1c8;
case 0x54c1ce:goto L54c1ce;
case 0x54c1d3:c.instructions+=1;goto B54c1d3;
case 0x54c1d5:goto L54c1d5;
case 0x54c1da:c.instructions+=1;goto B54c1da;
case 0x54c1e0:goto L54c1e0;
case 0x54c1e6:c.instructions+=2;goto B54c1e6;
case 0x54c1e8:c.instructions+=1;goto B54c1e8;
case 0x54c1ee:goto L54c1ee;
case 0x54c1f2:c.instructions+=6;goto B54c1f2;
case 0x54c1f5:c.instructions+=5;goto B54c1f5;
case 0x54c1fb:c.instructions+=4;goto B54c1fb;
case 0x54c1fc:c.instructions+=3;goto B54c1fc;
case 0x54c201:c.instructions+=2;goto B54c201;
case 0x54c204:c.instructions+=1;goto B54c204;
case 0x54c209:goto L54c209;
case 0x54c20c:c.instructions+=5;goto B54c20c;
case 0x54c20f:c.instructions+=4;goto B54c20f;
case 0x54c210:c.instructions+=3;goto B54c210;
case 0x54c212:c.instructions+=2;goto B54c212;
case 0x54c213:c.instructions+=1;goto B54c213;
case 0x54c218:goto L54c218;
case 0x54c21b:c.instructions+=3;goto B54c21b;
case 0x54c21c:c.instructions+=2;goto B54c21c;
case 0x54c21f:c.instructions+=1;goto B54c21f;
case 0x54c222:goto L54c222;
case 0x54c228:c.instructions+=2;goto B54c228;
case 0x54c22a:c.instructions+=1;goto B54c22a;
case 0x54c230:goto L54c230;
case 0x54c234:c.instructions+=6;goto B54c234;
case 0x54c237:c.instructions+=5;goto B54c237;
case 0x54c23d:c.instructions+=4;goto B54c23d;
case 0x54c23e:c.instructions+=3;goto B54c23e;
case 0x54c243:c.instructions+=2;goto B54c243;
case 0x54c246:c.instructions+=1;goto B54c246;
case 0x54c24b:goto L54c24b;
case 0x54c24e:c.instructions+=5;goto B54c24e;
case 0x54c251:c.instructions+=4;goto B54c251;
case 0x54c252:c.instructions+=3;goto B54c252;
case 0x54c254:c.instructions+=2;goto B54c254;
case 0x54c255:c.instructions+=1;goto B54c255;
case 0x54c25a:goto L54c25a;
case 0x54c25d:c.instructions+=3;goto B54c25d;
case 0x54c25e:c.instructions+=2;goto B54c25e;
case 0x54c261:c.instructions+=1;goto B54c261;
case 0x54c264:goto L54c264;
case 0x54c26a:c.instructions+=2;goto B54c26a;
case 0x54c26c:c.instructions+=1;goto B54c26c;
case 0x54c272:goto L54c272;
case 0x54c276:c.instructions+=6;goto B54c276;
case 0x54c279:c.instructions+=5;goto B54c279;
case 0x54c27f:c.instructions+=4;goto B54c27f;
case 0x54c280:c.instructions+=3;goto B54c280;
case 0x54c285:c.instructions+=2;goto B54c285;
case 0x54c288:c.instructions+=1;goto B54c288;
case 0x54c28d:goto L54c28d;
case 0x54c290:c.instructions+=5;goto B54c290;
case 0x54c293:c.instructions+=4;goto B54c293;
case 0x54c294:c.instructions+=3;goto B54c294;
case 0x54c296:c.instructions+=2;goto B54c296;
case 0x54c297:c.instructions+=1;goto B54c297;
case 0x54c29c:goto L54c29c;
case 0x54c29f:c.instructions+=3;goto B54c29f;
case 0x54c2a0:c.instructions+=2;goto B54c2a0;
case 0x54c2a3:c.instructions+=1;goto B54c2a3;
case 0x54c2a6:goto L54c2a6;
case 0x54c2ad:c.instructions+=1;goto B54c2ad;
case 0x54c2b3:goto L54c2b3;
case 0x54c2b6:c.instructions+=5;goto B54c2b6;
case 0x54c2b9:c.instructions+=4;goto B54c2b9;
case 0x54c2ba:c.instructions+=3;goto B54c2ba;
case 0x54c2bc:c.instructions+=2;goto B54c2bc;
case 0x54c2bd:c.instructions+=1;goto B54c2bd;
case 0x54c2c2:goto L54c2c2;
case 0x54c2c5:c.instructions+=3;goto B54c2c5;
case 0x54c2c6:c.instructions+=2;goto B54c2c6;
case 0x54c2c9:c.instructions+=1;goto B54c2c9;
case 0x54c2cc:goto L54c2cc;
case 0x54c2d1:c.instructions+=1;goto B54c2d1;
case 0x54c2d7:goto L54c2d7;
case 0x54c2dd:c.instructions+=2;goto B54c2dd;
case 0x54c2df:c.instructions+=1;goto B54c2df;
case 0x54c2e5:goto L54c2e5;
case 0x54c2e8:c.instructions+=5;goto B54c2e8;
case 0x54c2eb:c.instructions+=4;goto B54c2eb;
case 0x54c2ec:c.instructions+=3;goto B54c2ec;
case 0x54c2ee:c.instructions+=2;goto B54c2ee;
case 0x54c2ef:c.instructions+=1;goto B54c2ef;
case 0x54c2f4:goto L54c2f4;
case 0x54c2fa:c.instructions+=7;goto B54c2fa;
case 0x54c2fe:c.instructions+=6;goto B54c2fe;
case 0x54c301:c.instructions+=5;goto B54c301;
case 0x54c304:c.instructions+=4;goto B54c304;
case 0x54c307:c.instructions+=3;goto B54c307;
case 0x54c308:c.instructions+=2;goto B54c308;
case 0x54c30b:c.instructions+=1;goto B54c30b;
case 0x54c30e:goto L54c30e;
case 0x54c315:c.instructions+=1;goto B54c315;
case 0x54c31b:goto L54c31b;
case 0x54c31e:c.instructions+=5;goto B54c31e;
case 0x54c321:c.instructions+=4;goto B54c321;
case 0x54c322:c.instructions+=3;goto B54c322;
case 0x54c324:c.instructions+=2;goto B54c324;
case 0x54c325:c.instructions+=1;goto B54c325;
case 0x54c32a:goto L54c32a;
case 0x54c32d:c.instructions+=3;goto B54c32d;
case 0x54c32e:c.instructions+=2;goto B54c32e;
case 0x54c331:c.instructions+=1;goto B54c331;
case 0x54c334:goto L54c334;
case 0x54c339:c.instructions+=1;goto B54c339;
case 0x54c33b:goto L54c33b;
case 0x54c340:c.instructions+=1;goto B54c340;
case 0x54c342:goto L54c342;
case 0x54c347:c.instructions+=1;goto B54c347;
case 0x54c349:goto L54c349;
case 0x54c34f:c.instructions+=2;goto B54c34f;
case 0x54c351:c.instructions+=1;goto B54c351;
case 0x54c353:goto L54c353;
case 0x54c355:c.instructions+=1;goto B54c355;
case 0x54c35a:goto L54c35a;
case 0x54c35b:c.instructions+=1;goto B54c35b;
case 0x54c360:goto L54c360;
case 0x54c363:c.instructions+=2;goto B54c363;
case 0x54c365:c.instructions+=1;goto B54c365;
case 0x54c367:goto L54c367;
case 0x54c369:c.instructions+=1;goto B54c369;
case 0x54c36e:goto L54c36e;
case 0x54c36f:c.instructions+=1;goto B54c36f;
case 0x54c374:goto L54c374;
case 0x54c377:c.instructions+=2;goto B54c377;
case 0x54c379:c.instructions+=1;goto B54c379;
case 0x54c37b:goto L54c37b;
case 0x54c381:c.instructions+=4;goto B54c381;
case 0x54c384:c.instructions+=3;goto B54c384;
case 0x54c385:c.instructions+=2;goto B54c385;
case 0x54c388:c.instructions+=1;goto B54c388;
case 0x54c38b:goto L54c38b;
case 0x54c392:c.instructions+=1;goto B54c392;
case 0x54c394:goto L54c394;
case 0x54c397:c.instructions+=5;goto B54c397;
case 0x54c39a:c.instructions+=4;goto B54c39a;
case 0x54c39b:c.instructions+=3;goto B54c39b;
case 0x54c39d:c.instructions+=2;goto B54c39d;
case 0x54c39e:c.instructions+=1;goto B54c39e;
case 0x54c3a3:goto L54c3a3;
case 0x54c3a6:c.instructions+=3;goto B54c3a6;
case 0x54c3a7:c.instructions+=2;goto B54c3a7;
case 0x54c3aa:c.instructions+=1;goto B54c3aa;
case 0x54c3ad:goto L54c3ad;
case 0x54c3b4:c.instructions+=1;goto B54c3b4;
case 0x54c3b6:goto L54c3b6;
case 0x54c3b9:c.instructions+=5;goto B54c3b9;
case 0x54c3bc:c.instructions+=4;goto B54c3bc;
case 0x54c3bd:c.instructions+=3;goto B54c3bd;
case 0x54c3bf:c.instructions+=2;goto B54c3bf;
case 0x54c3c0:c.instructions+=1;goto B54c3c0;
case 0x54c3c5:goto L54c3c5;
case 0x54c3c8:goto L54c3c8;
case 0x54c3c9:c.instructions+=2;goto B54c3c9;
case 0x54c3cc:c.instructions+=1;goto B54c3cc;
case 0x54c3d0:goto L54c3d0;
case 0x54c3d1:c.instructions+=6;goto B54c3d1;
case 0x54c3d2:c.instructions+=5;goto B54c3d2;
case 0x54c3d4:c.instructions+=4;goto B54c3d4;
case 0x54c3da:c.instructions+=3;goto B54c3da;
case 0x54c3dc:c.instructions+=2;goto B54c3dc;
case 0x54c3dd:c.instructions+=1;goto B54c3dd;
case 0x54c3df:goto L54c3df;
case 0x54c3e2:c.instructions+=4;goto B54c3e2;
case 0x54c3e3:c.instructions+=3;goto B54c3e3;
case 0x54c3e8:c.instructions+=2;goto B54c3e8;
case 0x54c3e9:c.instructions+=1;goto B54c3e9;
case 0x54c3ee:goto L54c3ee;
case 0x54c3f1:c.instructions+=3;goto B54c3f1;
case 0x54c3f2:c.instructions+=2;goto B54c3f2;
case 0x54c3f4:c.instructions+=1;goto B54c3f4;
case 0x54c3f9:goto L54c3f9;
case 0x54c3fc:c.instructions+=4;goto B54c3fc;
case 0x54c3ff:c.instructions+=3;goto B54c3ff;
case 0x54c402:c.instructions+=2;goto B54c402;
case 0x54c403:c.instructions+=1;goto B54c403;
case 0x54c408:goto L54c408;
case 0x54c40b:c.instructions+=4;goto B54c40b;
case 0x54c40c:c.instructions+=3;goto B54c40c;
case 0x54c40d:c.instructions+=2;goto B54c40d;
case 0x54c40e:c.instructions+=1;goto B54c40e;
case 0x54c413:goto L54c413;
case 0x54c416:c.instructions+=5;goto B54c416;
case 0x54c419:c.instructions+=4;goto B54c419;
case 0x54c41c:c.instructions+=3;goto B54c41c;
case 0x54c41f:c.instructions+=2;goto B54c41f;
case 0x54c420:c.instructions+=1;goto B54c420;
case 0x54c422:goto L54c422;
case 0x54c425:c.instructions+=5;goto B54c425;
case 0x54c428:c.instructions+=4;goto B54c428;
case 0x54c429:c.instructions+=3;goto B54c429;
case 0x54c42e:c.instructions+=2;goto B54c42e;
case 0x54c42f:c.instructions+=1;goto B54c42f;
case 0x54c434:goto L54c434;
case 0x54c437:goto L54c437;
case 0x54c43d:c.instructions+=2;goto B54c43d;
case 0x54c440:c.instructions+=1;goto B54c440;
case 0x54c442:goto L54c442;
case 0x54c448:c.instructions+=5;goto B54c448;
case 0x54c44b:c.instructions+=4;goto B54c44b;
case 0x54c44c:c.instructions+=3;goto B54c44c;
case 0x54c451:c.instructions+=2;goto B54c451;
case 0x54c452:c.instructions+=1;goto B54c452;
case 0x54c457:goto L54c457;
case 0x54c45d:c.instructions+=5;goto B54c45d;
case 0x54c460:c.instructions+=4;goto B54c460;
case 0x54c461:c.instructions+=3;goto B54c461;
case 0x54c466:c.instructions+=2;goto B54c466;
case 0x54c467:c.instructions+=1;goto B54c467;
case 0x54c46c:goto L54c46c;
case 0x54c472:c.instructions+=5;goto B54c472;
case 0x54c475:c.instructions+=4;goto B54c475;
case 0x54c476:c.instructions+=3;goto B54c476;
case 0x54c47b:c.instructions+=2;goto B54c47b;
case 0x54c47c:c.instructions+=1;goto B54c47c;
case 0x54c481:goto L54c481;
case 0x54c487:c.instructions+=3;goto B54c487;
case 0x54c48a:c.instructions+=2;goto B54c48a;
case 0x54c48c:c.instructions+=1;goto B54c48c;
case 0x54c492:goto L54c492;
case 0x54c495:c.instructions+=3;goto B54c495;
case 0x54c49a:c.instructions+=2;goto B54c49a;
case 0x54c49b:c.instructions+=1;goto B54c49b;
case 0x54c4a0:goto L54c4a0;
case 0x54c4a1:c.instructions+=3;goto B54c4a1;
case 0x54c4a2:c.instructions+=2;goto B54c4a2;
case 0x54c4a3:c.instructions+=1;goto B54c4a3;
case 0x54c4a4:goto L54c4a4;
case 0x54c4a7:c.instructions+=1;goto B54c4a7;
case 0x54c4ad:goto L54c4ad;
case 0x54c4b0:c.instructions+=3;goto B54c4b0;
case 0x54c4b5:c.instructions+=2;goto B54c4b5;
case 0x54c4b6:c.instructions+=1;goto B54c4b6;
case 0x54c4bb:goto L54c4bb;
case 0x54c4be:c.instructions+=5;goto B54c4be;
case 0x54c4c1:c.instructions+=4;goto B54c4c1;
case 0x54c4c6:c.instructions+=3;goto B54c4c6;
case 0x54c4c9:c.instructions+=2;goto B54c4c9;
case 0x54c4cb:c.instructions+=1;goto B54c4cb;
case 0x54c4d0:goto L54c4d0;
case 0x54c4d3:c.instructions+=2;goto B54c4d3;
case 0x54c4d5:c.instructions+=1;goto B54c4d5;
case 0x54c4d7:goto L54c4d7;
case 0x54c4d9:c.instructions+=1;goto B54c4d9;
case 0x54c4db:goto L54c4db;
case 0x54c4dd:goto L54c4dd;
case 0x54c4e0:c.instructions+=5;goto B54c4e0;
case 0x54c4e2:c.instructions+=4;goto B54c4e2;
case 0x54c4e5:c.instructions+=3;goto B54c4e5;
case 0x54c4e6:c.instructions+=2;goto B54c4e6;
case 0x54c4e8:c.instructions+=1;goto B54c4e8;
case 0x54c4ea:goto L54c4ea;
case 0x54c4f0:c.instructions+=2;goto B54c4f0;
case 0x54c4f2:c.instructions+=1;goto B54c4f2;
case 0x54c4f4:goto L54c4f4;
case 0x54c4f6:c.instructions+=3;goto B54c4f6;
case 0x54c4f7:c.instructions+=2;goto B54c4f7;
case 0x54c4f8:c.instructions+=1;goto B54c4f8;
case 0x54c4fd:goto L54c4fd;
case 0x54c500:c.instructions+=4;goto B54c500;
case 0x54c505:c.instructions+=3;goto B54c505;
case 0x54c50a:c.instructions+=2;goto B54c50a;
case 0x54c50b:c.instructions+=1;goto B54c50b;
case 0x54c510:goto L54c510;
case 0x54c516:c.instructions+=5;goto B54c516;
case 0x54c519:c.instructions+=4;goto B54c519;
case 0x54c51a:c.instructions+=3;goto B54c51a;
case 0x54c51f:c.instructions+=2;goto B54c51f;
case 0x54c520:c.instructions+=1;goto B54c520;
case 0x54c525:goto L54c525;
case 0x54c52b:c.instructions+=5;goto B54c52b;
case 0x54c52e:c.instructions+=4;goto B54c52e;
case 0x54c52f:c.instructions+=3;goto B54c52f;
case 0x54c534:c.instructions+=2;goto B54c534;
case 0x54c535:c.instructions+=1;goto B54c535;
case 0x54c53a:goto L54c53a;
case 0x54c540:c.instructions+=3;goto B54c540;
case 0x54c543:c.instructions+=2;goto B54c543;
case 0x54c545:c.instructions+=1;goto B54c545;
case 0x54c54b:goto L54c54b;
case 0x54c54e:c.instructions+=3;goto B54c54e;
case 0x54c553:c.instructions+=2;goto B54c553;
case 0x54c554:c.instructions+=1;goto B54c554;
case 0x54c559:goto L54c559;
case 0x54c55a:c.instructions+=3;goto B54c55a;
case 0x54c55b:c.instructions+=2;goto B54c55b;
case 0x54c55c:c.instructions+=1;goto B54c55c;
case 0x54c55d:goto L54c55d;
case 0x54c560:c.instructions+=2;goto B54c560;
case 0x54c565:c.instructions+=1;goto B54c565;
case 0x54c56b:goto L54c56b;
case 0x54c56e:c.instructions+=2;goto B54c56e;
case 0x54c56f:c.instructions+=1;goto B54c56f;
case 0x54c574:goto L54c574;
case 0x54c577:c.instructions+=3;goto B54c577;
case 0x54c57c:c.instructions+=2;goto B54c57c;
case 0x54c57d:c.instructions+=1;goto B54c57d;
case 0x54c582:goto L54c582;
case 0x54c585:c.instructions+=4;goto B54c585;
case 0x54c588:c.instructions+=3;goto B54c588;
case 0x54c58d:c.instructions+=2;goto B54c58d;
case 0x54c590:c.instructions+=1;goto B54c590;
case 0x54c592:goto L54c592;
case 0x54c595:c.instructions+=2;goto B54c595;
case 0x54c597:c.instructions+=1;goto B54c597;
case 0x54c599:goto L54c599;
case 0x54c59b:c.instructions+=1;goto B54c59b;
case 0x54c59d:goto L54c59d;
case 0x54c59f:goto L54c59f;
case 0x54c5a2:c.instructions+=5;goto B54c5a2;
case 0x54c5a4:c.instructions+=4;goto B54c5a4;
case 0x54c5a7:c.instructions+=3;goto B54c5a7;
case 0x54c5a8:c.instructions+=2;goto B54c5a8;
case 0x54c5aa:c.instructions+=1;goto B54c5aa;
case 0x54c5ac:goto L54c5ac;
case 0x54c5b2:c.instructions+=2;goto B54c5b2;
case 0x54c5b4:c.instructions+=1;goto B54c5b4;
case 0x54c5b6:goto L54c5b6;
case 0x54c5b8:c.instructions+=3;goto B54c5b8;
case 0x54c5b9:c.instructions+=2;goto B54c5b9;
case 0x54c5ba:c.instructions+=1;goto B54c5ba;
case 0x54c5bf:goto L54c5bf;
case 0x54c5c5:goto L54c5c5;
case 0x54c5c8:c.instructions+=3;goto B54c5c8;
case 0x54c5cd:c.instructions+=2;goto B54c5cd;
case 0x54c5d0:c.instructions+=1;goto B54c5d0;
case 0x54c5d2:goto L54c5d2;
case 0x54c5d5:c.instructions+=2;goto B54c5d5;
case 0x54c5d7:c.instructions+=1;goto B54c5d7;
case 0x54c5d9:goto L54c5d9;
case 0x54c5db:c.instructions+=1;goto B54c5db;
case 0x54c5dd:goto L54c5dd;
case 0x54c5df:goto L54c5df;
case 0x54c5e2:c.instructions+=5;goto B54c5e2;
case 0x54c5e4:c.instructions+=4;goto B54c5e4;
case 0x54c5e7:c.instructions+=3;goto B54c5e7;
case 0x54c5e8:c.instructions+=2;goto B54c5e8;
case 0x54c5ea:c.instructions+=1;goto B54c5ea;
case 0x54c5ec:goto L54c5ec;
case 0x54c5ee:c.instructions+=1;goto B54c5ee;
case 0x54c5f0:goto L54c5f0;
case 0x54c5f2:c.instructions+=3;goto B54c5f2;
case 0x54c5f3:c.instructions+=2;goto B54c5f3;
case 0x54c5f4:c.instructions+=1;goto B54c5f4;
case 0x54c5f9:goto L54c5f9;
case 0x54c5fc:c.instructions+=4;goto B54c5fc;
case 0x54c601:c.instructions+=3;goto B54c601;
case 0x54c606:c.instructions+=2;goto B54c606;
case 0x54c607:c.instructions+=1;goto B54c607;
case 0x54c60c:goto L54c60c;
case 0x54c60f:c.instructions+=4;goto B54c60f;
case 0x54c614:c.instructions+=3;goto B54c614;
case 0x54c619:c.instructions+=2;goto B54c619;
case 0x54c61a:c.instructions+=1;goto B54c61a;
case 0x54c61f:goto L54c61f;
case 0x54c622:c.instructions+=3;goto B54c622;
case 0x54c627:c.instructions+=2;goto B54c627;
case 0x54c628:c.instructions+=1;goto B54c628;
case 0x54c62d:goto L54c62d;
case 0x54c630:c.instructions+=5;goto B54c630;
case 0x54c633:c.instructions+=4;goto B54c633;
case 0x54c638:c.instructions+=3;goto B54c638;
case 0x54c63b:c.instructions+=2;goto B54c63b;
case 0x54c63d:c.instructions+=1;goto B54c63d;
case 0x54c640:goto L54c640;
case 0x54c643:c.instructions+=2;goto B54c643;
case 0x54c645:c.instructions+=1;goto B54c645;
case 0x54c647:goto L54c647;
case 0x54c649:c.instructions+=1;goto B54c649;
case 0x54c64b:goto L54c64b;
case 0x54c64d:goto L54c64d;
case 0x54c650:c.instructions+=5;goto B54c650;
case 0x54c652:c.instructions+=4;goto B54c652;
case 0x54c655:c.instructions+=3;goto B54c655;
case 0x54c656:c.instructions+=2;goto B54c656;
case 0x54c658:c.instructions+=1;goto B54c658;
case 0x54c65a:goto L54c65a;
case 0x54c660:c.instructions+=2;goto B54c660;
case 0x54c662:c.instructions+=1;goto B54c662;
case 0x54c664:goto L54c664;
case 0x54c666:c.instructions+=3;goto B54c666;
case 0x54c667:c.instructions+=2;goto B54c667;
case 0x54c668:c.instructions+=1;goto B54c668;
case 0x54c66d:goto L54c66d;
case 0x54c670:c.instructions+=5;goto B54c670;
case 0x54c672:c.instructions+=4;goto B54c672;
case 0x54c677:c.instructions+=3;goto B54c677;
case 0x54c67c:c.instructions+=2;goto B54c67c;
case 0x54c67d:c.instructions+=1;goto B54c67d;
case 0x54c682:goto L54c682;
case 0x54c685:c.instructions+=5;goto B54c685;
case 0x54c687:c.instructions+=4;goto B54c687;
case 0x54c68c:c.instructions+=3;goto B54c68c;
case 0x54c691:c.instructions+=2;goto B54c691;
case 0x54c692:c.instructions+=1;goto B54c692;
case 0x54c697:goto L54c697;
case 0x54c69d:c.instructions+=5;goto B54c69d;
case 0x54c6a0:c.instructions+=4;goto B54c6a0;
case 0x54c6a1:c.instructions+=3;goto B54c6a1;
case 0x54c6a6:c.instructions+=2;goto B54c6a6;
case 0x54c6a7:c.instructions+=1;goto B54c6a7;
case 0x54c6ac:goto L54c6ac;
case 0x54c6b2:c.instructions+=3;goto B54c6b2;
case 0x54c6b5:c.instructions+=2;goto B54c6b5;
case 0x54c6b7:c.instructions+=1;goto B54c6b7;
case 0x54c6bd:goto L54c6bd;
case 0x54c6c0:c.instructions+=3;goto B54c6c0;
case 0x54c6c5:c.instructions+=2;goto B54c6c5;
case 0x54c6c6:c.instructions+=1;goto B54c6c6;
case 0x54c6cb:goto L54c6cb;
case 0x54c6cc:c.instructions+=3;goto B54c6cc;
case 0x54c6cd:c.instructions+=2;goto B54c6cd;
case 0x54c6ce:c.instructions+=1;goto B54c6ce;
case 0x54c6cf:goto L54c6cf;
case 0x54c6d2:c.instructions+=2;goto B54c6d2;
case 0x54c6d3:c.instructions+=1;goto B54c6d3;
case 0x54c6d8:goto L54c6d8;
case 0x54c6db:c.instructions+=3;goto B54c6db;
case 0x54c6e0:c.instructions+=2;goto B54c6e0;
case 0x54c6e1:c.instructions+=1;goto B54c6e1;
case 0x54c6e6:goto L54c6e6;
case 0x54c6e9:c.instructions+=3;goto B54c6e9;
case 0x54c6ee:c.instructions+=2;goto B54c6ee;
case 0x54c6ef:c.instructions+=1;goto B54c6ef;
case 0x54c6f4:goto L54c6f4;
case 0x54c6f7:c.instructions+=4;goto B54c6f7;
case 0x54c6fa:c.instructions+=3;goto B54c6fa;
case 0x54c6ff:c.instructions+=2;goto B54c6ff;
case 0x54c702:c.instructions+=1;goto B54c702;
case 0x54c704:goto L54c704;
case 0x54c707:c.instructions+=2;goto B54c707;
case 0x54c709:c.instructions+=1;goto B54c709;
case 0x54c70b:goto L54c70b;
case 0x54c70d:c.instructions+=1;goto B54c70d;
case 0x54c70f:goto L54c70f;
case 0x54c711:goto L54c711;
case 0x54c714:c.instructions+=5;goto B54c714;
case 0x54c716:c.instructions+=4;goto B54c716;
case 0x54c719:c.instructions+=3;goto B54c719;
case 0x54c71a:c.instructions+=2;goto B54c71a;
case 0x54c71c:c.instructions+=1;goto B54c71c;
case 0x54c71e:goto L54c71e;
case 0x54c724:c.instructions+=2;goto B54c724;
case 0x54c726:c.instructions+=1;goto B54c726;
case 0x54c728:goto L54c728;
case 0x54c72a:c.instructions+=3;goto B54c72a;
case 0x54c72b:c.instructions+=2;goto B54c72b;
case 0x54c72c:c.instructions+=1;goto B54c72c;
case 0x54c731:goto L54c731;
case 0x54c737:goto L54c737;
case 0x54c73a:c.instructions+=3;goto B54c73a;
case 0x54c73f:c.instructions+=2;goto B54c73f;
case 0x54c742:c.instructions+=1;goto B54c742;
case 0x54c744:goto L54c744;
case 0x54c747:c.instructions+=2;goto B54c747;
case 0x54c749:c.instructions+=1;goto B54c749;
case 0x54c74b:goto L54c74b;
case 0x54c74d:c.instructions+=1;goto B54c74d;
case 0x54c74f:goto L54c74f;
case 0x54c751:goto L54c751;
case 0x54c754:c.instructions+=5;goto B54c754;
case 0x54c756:c.instructions+=4;goto B54c756;
case 0x54c759:c.instructions+=3;goto B54c759;
case 0x54c75a:c.instructions+=2;goto B54c75a;
case 0x54c75c:c.instructions+=1;goto B54c75c;
case 0x54c75e:goto L54c75e;
case 0x54c760:c.instructions+=1;goto B54c760;
case 0x54c762:goto L54c762;
case 0x54c764:c.instructions+=3;goto B54c764;
case 0x54c765:c.instructions+=2;goto B54c765;
case 0x54c766:c.instructions+=1;goto B54c766;
case 0x54c76b:goto L54c76b;
case 0x54c771:goto L54c771;
case 0x54c774:c.instructions+=4;goto B54c774;
case 0x54c779:c.instructions+=3;goto B54c779;
case 0x54c77c:c.instructions+=2;goto B54c77c;
case 0x54c77e:c.instructions+=1;goto B54c77e;
case 0x54c780:goto L54c780;
case 0x54c783:c.instructions+=2;goto B54c783;
case 0x54c785:c.instructions+=1;goto B54c785;
case 0x54c787:goto L54c787;
case 0x54c789:c.instructions+=1;goto B54c789;
case 0x54c78b:goto L54c78b;
case 0x54c78d:goto L54c78d;
case 0x54c790:c.instructions+=5;goto B54c790;
case 0x54c792:c.instructions+=4;goto B54c792;
case 0x54c795:c.instructions+=3;goto B54c795;
case 0x54c796:c.instructions+=2;goto B54c796;
case 0x54c798:c.instructions+=1;goto B54c798;
case 0x54c79a:goto L54c79a;
case 0x54c79c:c.instructions+=1;goto B54c79c;
case 0x54c79e:goto L54c79e;
case 0x54c7a0:c.instructions+=3;goto B54c7a0;
case 0x54c7a1:c.instructions+=2;goto B54c7a1;
case 0x54c7a2:c.instructions+=1;goto B54c7a2;
case 0x54c7a7:goto L54c7a7;
case 0x54c7aa:c.instructions+=4;goto B54c7aa;
case 0x54c7af:c.instructions+=3;goto B54c7af;
case 0x54c7b4:c.instructions+=2;goto B54c7b4;
case 0x54c7b5:c.instructions+=1;goto B54c7b5;
case 0x54c7ba:goto L54c7ba;
case 0x54c7bd:c.instructions+=4;goto B54c7bd;
case 0x54c7c2:c.instructions+=3;goto B54c7c2;
case 0x54c7c7:c.instructions+=2;goto B54c7c7;
case 0x54c7c8:c.instructions+=1;goto B54c7c8;
case 0x54c7cd:goto L54c7cd;
case 0x54c7d0:c.instructions+=4;goto B54c7d0;
case 0x54c7d5:c.instructions+=3;goto B54c7d5;
case 0x54c7da:c.instructions+=2;goto B54c7da;
case 0x54c7db:c.instructions+=1;goto B54c7db;
case 0x54c7e0:goto L54c7e0;
case 0x54c7e3:goto L54c7e3;
case 0x54c7e4:c.instructions+=3;goto B54c7e4;
case 0x54c7e5:c.instructions+=2;goto B54c7e5;
case 0x54c7e6:c.instructions+=1;goto B54c7e6;
case 0x54c7f0:goto L54c7f0;
case 0x54c7f7:c.instructions+=3;goto B54c7f7;
case 0x54c7f8:c.instructions+=2;goto B54c7f8;
case 0x54c7fa:c.instructions+=1;goto B54c7fa;
case 0x54c7fc:goto L54c7fc;
case 0x54c801:c.instructions+=1;goto B54c801;
case 0x54c806:goto L54c806;
case 0x54c809:c.instructions+=2;goto B54c809;
case 0x54c80b:c.instructions+=1;goto B54c80b;
case 0x54c811:goto L54c811;
case 0x54c812:c.instructions+=5;goto B54c812;
case 0x54c813:c.instructions+=4;goto B54c813;
case 0x54c815:c.instructions+=3;goto B54c815;
case 0x54c816:c.instructions+=2;goto B54c816;
case 0x54c818:c.instructions+=1;goto B54c818;
case 0x54c81d:goto L54c81d;
case 0x54c81f:c.instructions+=7;goto B54c81f;
case 0x54c822:c.instructions+=6;goto B54c822;
case 0x54c824:c.instructions+=5;goto B54c824;
case 0x54c825:c.instructions+=4;goto B54c825;
case 0x54c826:c.instructions+=3;goto B54c826;
case 0x54c827:c.instructions+=2;goto B54c827;
case 0x54c82c:c.instructions+=1;goto B54c82c;
case 0x54c82f:goto L54c82f;
case 0x54c835:c.instructions+=4;goto B54c835;
case 0x54c83b:c.instructions+=3;goto B54c83b;
case 0x54c83d:c.instructions+=2;goto B54c83d;
case 0x54c842:c.instructions+=1;goto B54c842;
case 0x54c847:goto L54c847;
case 0x54c849:goto L54c849;
case 0x54c84e:c.instructions+=1;goto B54c84e;
case 0x54c853:goto L54c853;
case 0x54c855:goto L54c855;
case 0x54c858:c.instructions+=3;goto B54c858;
case 0x54c85b:c.instructions+=2;goto B54c85b;
case 0x54c85d:c.instructions+=1;goto B54c85d;
case 0x54c85f:goto L54c85f;
case 0x54c865:c.instructions+=3;goto B54c865;
case 0x54c86b:c.instructions+=2;goto B54c86b;
case 0x54c870:c.instructions+=1;goto B54c870;
case 0x54c875:goto L54c875;
case 0x54c877:goto L54c877;
case 0x54c87c:c.instructions+=2;goto B54c87c;
case 0x54c881:c.instructions+=1;goto B54c881;
case 0x54c882:goto L54c882;
case 0x54c884:goto L54c884;
case 0x54c889:goto L54c889;
case 0x54c88c:goto L54c88c;
case 0x54c88d:c.instructions+=3;goto B54c88d;
case 0x54c890:c.instructions+=2;goto B54c890;
case 0x54c893:c.instructions+=1;goto B54c893;
case 0x54c894:goto L54c894;
case 0x54c895:c.instructions+=1;goto B54c895;
case 0x54c8a0:goto L54c8a0;
case 0x54c8a1:c.instructions+=7;goto B54c8a1;
case 0x54c8a2:c.instructions+=6;goto B54c8a2;
case 0x54c8a3:c.instructions+=5;goto B54c8a3;
case 0x54c8a8:c.instructions+=4;goto B54c8a8;
case 0x54c8ad:c.instructions+=3;goto B54c8ad;
case 0x54c8b2:c.instructions+=2;goto B54c8b2;
case 0x54c8b4:c.instructions+=1;goto B54c8b4;
case 0x54c8b9:goto L54c8b9;
case 0x54c8bc:c.instructions+=4;goto B54c8bc;
case 0x54c8be:c.instructions+=3;goto B54c8be;
case 0x54c8bf:c.instructions+=2;goto B54c8bf;
case 0x54c8c1:c.instructions+=1;goto B54c8c1;
case 0x54c8c6:goto L54c8c6;
case 0x54c8c8:c.instructions+=7;goto B54c8c8;
case 0x54c8cb:c.instructions+=6;goto B54c8cb;
case 0x54c8cd:c.instructions+=5;goto B54c8cd;
case 0x54c8ce:c.instructions+=4;goto B54c8ce;
case 0x54c8cf:c.instructions+=3;goto B54c8cf;
case 0x54c8d0:c.instructions+=2;goto B54c8d0;
case 0x54c8d5:c.instructions+=1;goto B54c8d5;
case 0x54c8d8:goto L54c8d8;
case 0x54c8de:c.instructions+=4;goto B54c8de;
case 0x54c8e4:c.instructions+=3;goto B54c8e4;
case 0x54c8e6:c.instructions+=2;goto B54c8e6;
case 0x54c8eb:c.instructions+=1;goto B54c8eb;
case 0x54c8f0:goto L54c8f0;
case 0x54c8f2:goto L54c8f2;
case 0x54c8f7:c.instructions+=1;goto B54c8f7;
case 0x54c8fc:goto L54c8fc;
case 0x54c8fe:goto L54c8fe;
case 0x54c901:c.instructions+=3;goto B54c901;
case 0x54c904:c.instructions+=2;goto B54c904;
case 0x54c906:c.instructions+=1;goto B54c906;
case 0x54c908:goto L54c908;
case 0x54c90e:c.instructions+=3;goto B54c90e;
case 0x54c914:c.instructions+=2;goto B54c914;
case 0x54c919:c.instructions+=1;goto B54c919;
case 0x54c91e:goto L54c91e;
case 0x54c920:goto L54c920;
case 0x54c925:c.instructions+=2;goto B54c925;
case 0x54c92a:c.instructions+=1;goto B54c92a;
case 0x54c92b:goto L54c92b;
case 0x54c92d:goto L54c92d;
case 0x54c932:goto L54c932;
case 0x54c935:goto L54c935;
case 0x54c936:c.instructions+=5;goto B54c936;
case 0x54c939:c.instructions+=4;goto B54c939;
case 0x54c93c:c.instructions+=3;goto B54c93c;
case 0x54c93d:c.instructions+=2;goto B54c93d;
case 0x54c93e:c.instructions+=1;goto B54c93e;
case 0x54c940:goto L54c940;
case 0x54c941:c.instructions+=4;goto B54c941;
case 0x54c943:c.instructions+=3;goto B54c943;
case 0x54c949:c.instructions+=2;goto B54c949;
case 0x54c94b:c.instructions+=1;goto B54c94b;
case 0x54c94d:goto L54c94d;
case 0x54c953:c.instructions+=2;goto B54c953;
case 0x54c955:c.instructions+=1;goto B54c955;
case 0x54c957:goto L54c957;
case 0x54c95d:c.instructions+=4;goto B54c95d;
case 0x54c961:c.instructions+=3;goto B54c961;
case 0x54c962:c.instructions+=2;goto B54c962;
case 0x54c968:c.instructions+=1;goto B54c968;
case 0x54c96a:goto L54c96a;
case 0x54c96f:c.instructions+=3;goto B54c96f;
case 0x54c972:c.instructions+=2;goto B54c972;
case 0x54c979:c.instructions+=1;goto B54c979;
case 0x54c97e:goto L54c97e;
case 0x54c980:c.instructions+=2;goto B54c980;
case 0x54c982:c.instructions+=1;goto B54c982;
case 0x54c987:goto L54c987;
case 0x54c989:c.instructions+=1;goto B54c989;
case 0x54c98b:goto L54c98b;
case 0x54c98f:goto L54c98f;
case 0x54c991:c.instructions+=2;goto B54c991;
case 0x54c993:c.instructions+=1;goto B54c993;
case 0x54c998:goto L54c998;
case 0x54c99a:c.instructions+=2;goto B54c99a;
case 0x54c99b:c.instructions+=1;goto B54c99b;
case 0x54c99d:goto L54c99d;
case 0x54c9a3:c.instructions+=4;goto B54c9a3;
case 0x54c9a6:c.instructions+=3;goto B54c9a6;
case 0x54c9a7:c.instructions+=2;goto B54c9a7;
case 0x54c9a9:c.instructions+=1;goto B54c9a9;
case 0x54c9ae:goto L54c9ae;
case 0x54c9af:c.instructions+=1;goto B54c9af;
case 0x54c9b0:goto L54c9b0;
case 0x54c9b6:c.instructions+=4;goto B54c9b6;
case 0x54c9b9:c.instructions+=3;goto B54c9b9;
case 0x54c9ba:c.instructions+=2;goto B54c9ba;
case 0x54c9bc:c.instructions+=1;goto B54c9bc;
case 0x54c9c1:goto L54c9c1;
case 0x54c9c2:c.instructions+=1;goto B54c9c2;
case 0x54c9d0:goto L54c9d0;
case 0x54c9d1:c.instructions+=6;goto B54c9d1;
case 0x54c9d2:c.instructions+=5;goto B54c9d2;
case 0x54c9d4:c.instructions+=4;goto B54c9d4;
case 0x54c9da:c.instructions+=3;goto B54c9da;
case 0x54c9db:c.instructions+=2;goto B54c9db;
case 0x54c9df:c.instructions+=1;goto B54c9df;
case 0x54c9e4:goto L54c9e4;
case 0x54c9ea:c.instructions+=7;goto B54c9ea;
case 0x54c9ee:c.instructions+=6;goto B54c9ee;
case 0x54c9f0:c.instructions+=5;goto B54c9f0;
case 0x54c9f3:c.instructions+=4;goto B54c9f3;
case 0x54c9f4:c.instructions+=3;goto B54c9f4;
case 0x54c9f6:c.instructions+=2;goto B54c9f6;
case 0x54c9f7:c.instructions+=1;goto B54c9f7;
case 0x54c9fc:goto L54c9fc;
case 0x54c9fe:c.instructions+=7;goto B54c9fe;
case 0x54ca00:c.instructions+=6;goto B54ca00;
case 0x54ca06:c.instructions+=5;goto B54ca06;
case 0x54ca0c:c.instructions+=4;goto B54ca0c;
case 0x54ca13:c.instructions+=3;goto B54ca13;
case 0x54ca19:c.instructions+=2;goto B54ca19;
case 0x54ca1b:c.instructions+=1;goto B54ca1b;
case 0x54ca1d:goto L54ca1d;
case 0x54ca22:goto L54ca22;
case 0x54ca23:c.instructions+=4;goto B54ca23;
case 0x54ca24:c.instructions+=3;goto B54ca24;
case 0x54ca26:c.instructions+=2;goto B54ca26;
case 0x54ca27:c.instructions+=1;goto B54ca27;
case 0x54ca30:goto L54ca30;
case 0x54ca40:goto L54ca40;
case 0x54ca41:c.instructions+=2;goto B54ca41;
case 0x54ca43:c.instructions+=1;goto B54ca43;
case 0x54ca48:goto L54ca48;
case 0x54ca4a:c.instructions+=5;goto B54ca4a;
case 0x54ca50:c.instructions+=4;goto B54ca50;
case 0x54ca56:c.instructions+=3;goto B54ca56;
case 0x54ca5d:c.instructions+=2;goto B54ca5d;
case 0x54ca5e:c.instructions+=1;goto B54ca5e;
case 0x54ca60:goto L54ca60;
case 0x54ca61:c.instructions+=4;goto B54ca61;
case 0x54ca63:c.instructions+=3;goto B54ca63;
case 0x54ca69:c.instructions+=2;goto B54ca69;
case 0x54ca6b:c.instructions+=1;goto B54ca6b;
case 0x54ca6d:goto L54ca6d;
case 0x54ca73:c.instructions+=2;goto B54ca73;
case 0x54ca75:c.instructions+=1;goto B54ca75;
case 0x54ca77:goto L54ca77;
case 0x54ca7d:c.instructions+=4;goto B54ca7d;
case 0x54ca7f:c.instructions+=3;goto B54ca7f;
case 0x54ca80:c.instructions+=2;goto B54ca80;
case 0x54ca86:c.instructions+=1;goto B54ca86;
case 0x54ca88:goto L54ca88;
case 0x54ca8e:c.instructions+=4;goto B54ca8e;
case 0x54ca93:c.instructions+=3;goto B54ca93;
case 0x54ca96:c.instructions+=2;goto B54ca96;
case 0x54ca9d:c.instructions+=1;goto B54ca9d;
case 0x54caa2:goto L54caa2;
case 0x54caa4:c.instructions+=2;goto B54caa4;
case 0x54caa6:c.instructions+=1;goto B54caa6;
case 0x54caab:goto L54caab;
case 0x54caad:c.instructions+=2;goto B54caad;
case 0x54caae:c.instructions+=1;goto B54caae;
case 0x54cab0:goto L54cab0;
case 0x54cab6:c.instructions+=2;goto B54cab6;
case 0x54cab8:c.instructions+=1;goto B54cab8;
case 0x54caba:goto L54caba;
case 0x54cabb:c.instructions+=4;goto B54cabb;
case 0x54cabf:c.instructions+=3;goto B54cabf;
case 0x54cac5:c.instructions+=2;goto B54cac5;
case 0x54cacc:c.instructions+=1;goto B54cacc;
case 0x54cad1:goto L54cad1;
case 0x54cad2:c.instructions+=1;goto B54cad2;
case 0x54cae0:goto L54cae0;
case 0x54cae6:c.instructions+=1;goto B54cae6;
case 0x54caf0:goto L54caf0;
case 0x54caf1:c.instructions+=9;goto B54caf1;
case 0x54caf3:c.instructions+=8;goto B54caf3;
case 0x54caf4:c.instructions+=7;goto B54caf4;
case 0x54caf5:c.instructions+=6;goto B54caf5;
case 0x54caf6:c.instructions+=5;goto B54caf6;
case 0x54caf9:c.instructions+=4;goto B54caf9;
case 0x54cafc:c.instructions+=3;goto B54cafc;
case 0x54cafd:c.instructions+=2;goto B54cafd;
case 0x54caff:c.instructions+=1;goto B54caff;
case 0x54cb04:goto L54cb04;
case 0x54cb09:c.instructions+=2;goto B54cb09;
case 0x54cb0d:c.instructions+=1;goto B54cb0d;
case 0x54cb12:goto L54cb12;
case 0x54cb19:c.instructions+=7;goto B54cb19;
case 0x54cb23:c.instructions+=6;goto B54cb23;
case 0x54cb2d:c.instructions+=5;goto B54cb2d;
case 0x54cb34:c.instructions+=4;goto B54cb34;
case 0x54cb3e:c.instructions+=3;goto B54cb3e;
case 0x54cb44:c.instructions+=2;goto B54cb44;
case 0x54cb46:c.instructions+=1;goto B54cb46;
case 0x54cb4c:goto L54cb4c;
case 0x54cb4f:c.instructions+=2;goto B54cb4f;
case 0x54cb51:c.instructions+=1;goto B54cb51;
case 0x54cb53:goto L54cb53;
case 0x54cb5a:goto L54cb5a;
case 0x54cb5b:c.instructions+=2;goto B54cb5b;
case 0x54cb5d:c.instructions+=1;goto B54cb5d;
case 0x54cb62:goto L54cb62;
case 0x54cb64:c.instructions+=1;goto B54cb64;
case 0x54cb66:goto L54cb66;
case 0x54cb6c:c.instructions+=4;goto B54cb6c;
case 0x54cb72:c.instructions+=3;goto B54cb72;
case 0x54cb73:c.instructions+=2;goto B54cb73;
case 0x54cb7a:c.instructions+=1;goto B54cb7a;
case 0x54cb7f:goto L54cb7f;
case 0x54cb85:c.instructions+=4;goto B54cb85;
case 0x54cb88:c.instructions+=3;goto B54cb88;
case 0x54cb89:c.instructions+=2;goto B54cb89;
case 0x54cb8b:c.instructions+=1;goto B54cb8b;
case 0x54cb90:goto L54cb90;
case 0x54cb96:c.instructions+=3;goto B54cb96;
case 0x54cb99:c.instructions+=2;goto B54cb99;
case 0x54cb9e:c.instructions+=1;goto B54cb9e;
case 0x54cba3:goto L54cba3;
case 0x54cba6:c.instructions+=2;goto B54cba6;
case 0x54cba8:c.instructions+=1;goto B54cba8;
case 0x54cbaa:goto L54cbaa;
case 0x54cbb4:goto L54cbb4;
case 0x54cbba:c.instructions+=2;goto B54cbba;
case 0x54cbbc:c.instructions+=1;goto B54cbbc;
case 0x54cbbe:goto L54cbbe;
case 0x54cbc1:c.instructions+=2;goto B54cbc1;
case 0x54cbc6:c.instructions+=1;goto B54cbc6;
case 0x54cbcb:goto L54cbcb;
case 0x54cbce:c.instructions+=2;goto B54cbce;
case 0x54cbd0:c.instructions+=1;goto B54cbd0;
case 0x54cbd2:goto L54cbd2;
case 0x54cbd7:c.instructions+=1;goto B54cbd7;
case 0x54cbdc:goto L54cbdc;
case 0x54cbdd:c.instructions+=1;goto B54cbdd;
case 0x54cbe2:goto L54cbe2;
case 0x54cbe5:c.instructions+=3;goto B54cbe5;
case 0x54cbe6:c.instructions+=2;goto B54cbe6;
case 0x54cbe8:c.instructions+=1;goto B54cbe8;
case 0x54cbed:goto L54cbed;
case 0x54cbf3:c.instructions+=15;goto B54cbf3;
case 0x54cbf9:c.instructions+=14;goto B54cbf9;
case 0x54cbfc:c.instructions+=13;goto B54cbfc;
case 0x54cc03:c.instructions+=12;goto B54cc03;
case 0x54cc06:c.instructions+=11;goto B54cc06;
case 0x54cc09:c.instructions+=10;goto B54cc09;
case 0x54cc0c:c.instructions+=9;goto B54cc0c;
case 0x54cc0e:c.instructions+=8;goto B54cc0e;
case 0x54cc14:c.instructions+=7;goto B54cc14;
case 0x54cc1a:c.instructions+=6;goto B54cc1a;
case 0x54cc1b:c.instructions+=5;goto B54cc1b;
case 0x54cc21:c.instructions+=4;goto B54cc21;
case 0x54cc27:c.instructions+=3;goto B54cc27;
case 0x54cc2e:c.instructions+=2;goto B54cc2e;
case 0x54cc35:c.instructions+=1;goto B54cc35;
case 0x54cc3a:goto L54cc3a;
case 0x54cc3b:c.instructions+=2;goto B54cc3b;
case 0x54cc41:c.instructions+=1;goto B54cc41;
case 0x54cc46:goto L54cc46;
case 0x54cc4c:c.instructions+=4;goto B54cc4c;
case 0x54cc4e:c.instructions+=3;goto B54cc4e;
case 0x54cc58:c.instructions+=2;goto B54cc58;
case 0x54cc5f:c.instructions+=1;goto B54cc5f;
case 0x54cc61:goto L54cc61;
case 0x54cc67:c.instructions+=3;goto B54cc67;
case 0x54cc69:c.instructions+=2;goto B54cc69;
case 0x54cc6f:c.instructions+=1;goto B54cc6f;
case 0x54cc71:goto L54cc71;
case 0x54cc74:c.instructions+=5;goto B54cc74;
case 0x54cc77:c.instructions+=4;goto B54cc77;
case 0x54cc79:c.instructions+=3;goto B54cc79;
case 0x54cc7c:c.instructions+=2;goto B54cc7c;
case 0x54cc7e:c.instructions+=1;goto B54cc7e;
case 0x54cc80:goto L54cc80;
case 0x54cc8a:c.instructions+=1;goto B54cc8a;
case 0x54cc8f:goto L54cc8f;
case 0x54cc90:c.instructions+=4;goto B54cc90;
case 0x54cc91:c.instructions+=3;goto B54cc91;
case 0x54cc92:c.instructions+=2;goto B54cc92;
case 0x54cc93:c.instructions+=1;goto B54cc93;
case 0x54cca0:goto L54cca0;
case 0x54cca1:c.instructions+=18;goto B54cca1;
case 0x54cca3:c.instructions+=17;goto B54cca3;
case 0x54cca6:c.instructions+=16;goto B54cca6;
case 0x54cca8:c.instructions+=15;goto B54cca8;
case 0x54ccad:c.instructions+=14;goto B54ccad;
case 0x54ccb3:c.instructions+=13;goto B54ccb3;
case 0x54ccb4:c.instructions+=12;goto B54ccb4;
case 0x54ccbb:c.instructions+=11;goto B54ccbb;
case 0x54ccbe:c.instructions+=10;goto B54ccbe;
case 0x54ccbf:c.instructions+=9;goto B54ccbf;
case 0x54ccc0:c.instructions+=8;goto B54ccc0;
case 0x54ccc2:c.instructions+=7;goto B54ccc2;
case 0x54ccc3:c.instructions+=6;goto B54ccc3;
case 0x54ccc6:c.instructions+=5;goto B54ccc6;
case 0x54cccc:c.instructions+=4;goto B54cccc;
case 0x54cccf:c.instructions+=3;goto B54cccf;
case 0x54ccd1:c.instructions+=2;goto B54ccd1;
case 0x54ccd5:c.instructions+=1;goto B54ccd5;
case 0x54ccd7:goto L54ccd7;
case 0x54ccd9:c.instructions+=2;goto B54ccd9;
case 0x54ccdf:c.instructions+=1;goto B54ccdf;
case 0x54cce0:goto L54cce0;
case 0x54cce2:c.instructions+=4;goto B54cce2;
case 0x54cce4:c.instructions+=3;goto B54cce4;
case 0x54cce5:c.instructions+=2;goto B54cce5;
case 0x54cce7:c.instructions+=1;goto B54cce7;
case 0x54ccec:goto L54ccec;
case 0x54ccf0:c.instructions+=8;goto B54ccf0;
case 0x54ccf6:c.instructions+=7;goto B54ccf6;
case 0x54ccf9:c.instructions+=6;goto B54ccf9;
case 0x54ccfc:c.instructions+=5;goto B54ccfc;
case 0x54ccfd:c.instructions+=4;goto B54ccfd;
case 0x54cd00:c.instructions+=3;goto B54cd00;
case 0x54cd06:c.instructions+=2;goto B54cd06;
case 0x54cd08:c.instructions+=1;goto B54cd08;
case 0x54cd0a:goto L54cd0a;
case 0x54cd0e:goto L54cd0e;
case 0x54cd13:goto L54cd13;
case 0x54cd17:c.instructions+=9;goto B54cd17;
case 0x54cd1b:c.instructions+=8;goto B54cd1b;
case 0x54cd1f:c.instructions+=7;goto B54cd1f;
case 0x54cd23:c.instructions+=6;goto B54cd23;
case 0x54cd29:c.instructions+=5;goto B54cd29;
case 0x54cd2c:c.instructions+=4;goto B54cd2c;
case 0x54cd2e:c.instructions+=3;goto B54cd2e;
case 0x54cd30:c.instructions+=2;goto B54cd30;
case 0x54cd38:c.instructions+=1;goto B54cd38;
case 0x54cd3a:goto L54cd3a;
case 0x54cd3f:c.instructions+=1;goto B54cd3f;
case 0x54cd40:goto L54cd40;
case 0x54cd42:c.instructions+=1;goto B54cd42;
case 0x54cd47:goto L54cd47;
case 0x54cd4a:c.instructions+=2;goto B54cd4a;
case 0x54cd4c:c.instructions+=1;goto B54cd4c;
case 0x54cd4e:goto L54cd4e;
case 0x54cd51:c.instructions+=1;goto B54cd51;
case 0x54cd53:goto L54cd53;
case 0x54cd55:goto L54cd55;
case 0x54cd59:c.instructions+=8;goto B54cd59;
case 0x54cd5b:c.instructions+=7;goto B54cd5b;
case 0x54cd5f:c.instructions+=6;goto B54cd5f;
case 0x54cd62:c.instructions+=5;goto B54cd62;
case 0x54cd66:c.instructions+=4;goto B54cd66;
case 0x54cd68:c.instructions+=3;goto B54cd68;
case 0x54cd6d:c.instructions+=2;goto B54cd6d;
case 0x54cd6f:c.instructions+=1;goto B54cd6f;
case 0x54cd71:goto L54cd71;
case 0x54cd76:c.instructions+=2;goto B54cd76;
case 0x54cd78:c.instructions+=1;goto B54cd78;
case 0x54cd7a:goto L54cd7a;
case 0x54cd7f:c.instructions+=2;goto B54cd7f;
case 0x54cd83:c.instructions+=1;goto B54cd83;
case 0x54cd88:goto L54cd88;
case 0x54cd8e:c.instructions+=5;goto B54cd8e;
case 0x54cd91:c.instructions+=4;goto B54cd91;
case 0x54cd92:c.instructions+=3;goto B54cd92;
case 0x54cd98:c.instructions+=2;goto B54cd98;
case 0x54cd9a:c.instructions+=1;goto B54cd9a;
case 0x54cd9c:goto L54cd9c;
case 0x54cda0:goto L54cda0;
case 0x54cda6:c.instructions+=9;goto B54cda6;
case 0x54cdac:c.instructions+=8;goto B54cdac;
case 0x54cdb2:c.instructions+=7;goto B54cdb2;
case 0x54cdb8:c.instructions+=6;goto B54cdb8;
case 0x54cdba:c.instructions+=5;goto B54cdba;
case 0x54cdbc:c.instructions+=4;goto B54cdbc;
case 0x54cdbe:c.instructions+=3;goto B54cdbe;
case 0x54cdc0:c.instructions+=2;goto B54cdc0;
case 0x54cdc2:c.instructions+=1;goto B54cdc2;
case 0x54cdc4:goto L54cdc4;
case 0x54cdc8:c.instructions+=2;goto B54cdc8;
case 0x54cdce:c.instructions+=1;goto B54cdce;
case 0x54cdd0:goto L54cdd0;
case 0x54cdd1:c.instructions+=2;goto B54cdd1;
case 0x54cdd5:c.instructions+=1;goto B54cdd5;
case 0x54cdda:goto L54cdda;
case 0x54cddd:c.instructions+=12;goto B54cddd;
case 0x54cddf:c.instructions+=11;goto B54cddf;
case 0x54cde5:c.instructions+=10;goto B54cde5;
case 0x54cdeb:c.instructions+=9;goto B54cdeb;
case 0x54cdf1:c.instructions+=8;goto B54cdf1;
case 0x54cdf3:c.instructions+=7;goto B54cdf3;
case 0x54cdf9:c.instructions+=6;goto B54cdf9;
case 0x54cdfb:c.instructions+=5;goto B54cdfb;
case 0x54cdfc:c.instructions+=4;goto B54cdfc;
case 0x54cdfe:c.instructions+=3;goto B54cdfe;
case 0x54ce01:c.instructions+=2;goto B54ce01;
case 0x54ce03:c.instructions+=1;goto B54ce03;
case 0x54ce05:goto L54ce05;
case 0x54ce09:goto L54ce09;
case 0x54ce0d:c.instructions+=3;goto B54ce0d;
case 0x54ce0f:c.instructions+=2;goto B54ce0f;
case 0x54ce17:c.instructions+=1;goto B54ce17;
case 0x54ce19:goto L54ce19;
case 0x54ce20:goto L54ce20;
case 0x54ce22:c.instructions+=6;goto B54ce22;
case 0x54ce24:c.instructions+=5;goto B54ce24;
case 0x54ce27:c.instructions+=4;goto B54ce27;
case 0x54ce29:c.instructions+=3;goto B54ce29;
case 0x54ce2a:c.instructions+=2;goto B54ce2a;
case 0x54ce2d:c.instructions+=1;goto B54ce2d;
case 0x54ce32:goto L54ce32;
case 0x54ce36:c.instructions+=4;goto B54ce36;
case 0x54ce3a:c.instructions+=3;goto B54ce3a;
case 0x54ce3d:c.instructions+=2;goto B54ce3d;
case 0x54ce3f:c.instructions+=1;goto B54ce3f;
case 0x54ce41:goto L54ce41;
case 0x54ce45:c.instructions+=7;goto B54ce45;
case 0x54ce46:c.instructions+=6;goto B54ce46;
case 0x54ce47:c.instructions+=5;goto B54ce47;
case 0x54ce4e:c.instructions+=4;goto B54ce4e;
case 0x54ce4f:c.instructions+=3;goto B54ce4f;
case 0x54ce51:c.instructions+=2;goto B54ce51;
case 0x54ce52:c.instructions+=1;goto B54ce52;
case 0x54ce60:goto L54ce60;
case 0x54ce61:c.instructions+=7;goto B54ce61;
case 0x54ce62:c.instructions+=6;goto B54ce62;
case 0x54ce66:c.instructions+=5;goto B54ce66;
case 0x54ce69:c.instructions+=4;goto B54ce69;
case 0x54ce6e:c.instructions+=3;goto B54ce6e;
case 0x54ce6f:c.instructions+=2;goto B54ce6f;
case 0x54ce71:c.instructions+=1;goto B54ce71;
case 0x54ce73:goto L54ce73;
case 0x54ce78:c.instructions+=2;goto B54ce78;
case 0x54ce7b:c.instructions+=1;goto B54ce7b;
case 0x54ce7d:goto L54ce7d;
case 0x54ce83:c.instructions+=3;goto B54ce83;
case 0x54ce89:c.instructions+=2;goto B54ce89;
case 0x54ce8b:c.instructions+=1;goto B54ce8b;
case 0x54ce8e:goto L54ce8e;
case 0x54ce91:c.instructions+=10;goto B54ce91;
case 0x54ce92:c.instructions+=9;goto B54ce92;
case 0x54ce93:c.instructions+=8;goto B54ce93;
case 0x54ce96:c.instructions+=7;goto B54ce96;
case 0x54ce99:c.instructions+=6;goto B54ce99;
case 0x54ce9c:c.instructions+=5;goto B54ce9c;
case 0x54ce9f:c.instructions+=4;goto B54ce9f;
case 0x54cea1:c.instructions+=3;goto B54cea1;
case 0x54cea5:c.instructions+=2;goto B54cea5;
case 0x54cea8:c.instructions+=1;goto B54cea8;
case 0x54ceaa:goto L54ceaa;
case 0x54ceb1:goto L54ceb1;
case 0x54ceb4:c.instructions+=3;goto B54ceb4;
case 0x54ceb6:c.instructions+=2;goto B54ceb6;
case 0x54ceb9:c.instructions+=1;goto B54ceb9;
case 0x54cebf:goto L54cebf;
case 0x54cec1:c.instructions+=1;goto B54cec1;
case 0x54cec7:goto L54cec7;
case 0x54ceca:c.instructions+=2;goto B54ceca;
case 0x54cecc:c.instructions+=1;goto B54cecc;
case 0x54cece:goto L54cece;
case 0x54cecf:c.instructions+=3;goto B54cecf;
case 0x54ced0:c.instructions+=2;goto B54ced0;
case 0x54ced2:c.instructions+=1;goto B54ced2;
case 0x54ced7:goto L54ced7;
case 0x54ceda:c.instructions+=6;goto B54ceda;
case 0x54cedd:c.instructions+=5;goto B54cedd;
case 0x54cedf:c.instructions+=4;goto B54cedf;
case 0x54cee1:c.instructions+=3;goto B54cee1;
case 0x54cee5:c.instructions+=2;goto B54cee5;
case 0x54ceec:c.instructions+=1;goto B54ceec;
case 0x54ceee:goto L54ceee;
case 0x54cef2:c.instructions+=8;goto B54cef2;
case 0x54cef5:c.instructions+=7;goto B54cef5;
case 0x54cef6:c.instructions+=6;goto B54cef6;
case 0x54cef7:c.instructions+=5;goto B54cef7;
case 0x54cef8:c.instructions+=4;goto B54cef8;
case 0x54cef9:c.instructions+=3;goto B54cef9;
case 0x54cefa:c.instructions+=2;goto B54cefa;
case 0x54cefc:c.instructions+=1;goto B54cefc;
case 0x54cf01:goto L54cf01;
case 0x54cf05:goto L54cf05;
case 0x54cf08:c.instructions+=3;goto B54cf08;
case 0x54cf0a:c.instructions+=2;goto B54cf0a;
case 0x54cf0d:c.instructions+=1;goto B54cf0d;
case 0x54cf0f:goto L54cf0f;
case 0x54cf11:c.instructions+=1;goto B54cf11;
case 0x54cf16:goto L54cf16;
case 0x54cf1a:goto L54cf1a;
case 0x54cf1d:c.instructions+=3;goto B54cf1d;
case 0x54cf1f:c.instructions+=2;goto B54cf1f;
case 0x54cf22:c.instructions+=1;goto B54cf22;
case 0x54cf28:goto L54cf28;
case 0x54cf2b:c.instructions+=6;goto B54cf2b;
case 0x54cf2c:c.instructions+=5;goto B54cf2c;
case 0x54cf2e:c.instructions+=4;goto B54cf2e;
case 0x54cf2f:c.instructions+=3;goto B54cf2f;
case 0x54cf30:c.instructions+=2;goto B54cf30;
case 0x54cf31:c.instructions+=1;goto B54cf31;
case 0x54cf36:goto L54cf36;
case 0x54cf39:c.instructions+=3;goto B54cf39;
case 0x54cf3c:c.instructions+=2;goto B54cf3c;
case 0x54cf3f:c.instructions+=1;goto B54cf3f;
case 0x54cf41:goto L54cf41;
case 0x54cf42:c.instructions+=1;goto B54cf42;
case 0x54cf44:goto L54cf44;
case 0x54cf45:c.instructions+=1;goto B54cf45;
case 0x54cf4b:goto L54cf4b;
case 0x54cf4d:c.instructions+=1;goto B54cf4d;
case 0x54cf4f:goto L54cf4f;
case 0x54cf50:c.instructions+=4;goto B54cf50;
case 0x54cf52:c.instructions+=3;goto B54cf52;
case 0x54cf54:c.instructions+=2;goto B54cf54;
case 0x54cf57:c.instructions+=1;goto B54cf57;
case 0x54cf5c:goto L54cf5c;
case 0x54cf5e:c.instructions+=1;goto B54cf5e;
case 0x54cf60:goto L54cf60;
case 0x54cf63:c.instructions+=2;goto B54cf63;
case 0x54cf65:c.instructions+=1;goto B54cf65;
case 0x54cf67:goto L54cf67;
case 0x54cf6a:c.instructions+=7;goto B54cf6a;
case 0x54cf6b:c.instructions+=6;goto B54cf6b;
case 0x54cf6c:c.instructions+=5;goto B54cf6c;
case 0x54cf6d:c.instructions+=4;goto B54cf6d;
case 0x54cf6e:c.instructions+=3;goto B54cf6e;
case 0x54cf6f:c.instructions+=2;goto B54cf6f;
case 0x54cf71:c.instructions+=1;goto B54cf71;
case 0x54cf76:goto L54cf76;
case 0x54cf79:c.instructions+=6;goto B54cf79;
case 0x54cf7a:c.instructions+=5;goto B54cf7a;
case 0x54cf7d:c.instructions+=4;goto B54cf7d;
case 0x54cf80:c.instructions+=3;goto B54cf80;
case 0x54cf82:c.instructions+=2;goto B54cf82;
case 0x54cf85:c.instructions+=1;goto B54cf85;
case 0x54cf87:goto L54cf87;
case 0x54cf8a:c.instructions+=7;goto B54cf8a;
case 0x54cf8b:c.instructions+=6;goto B54cf8b;
case 0x54cf8d:c.instructions+=5;goto B54cf8d;
case 0x54cf8e:c.instructions+=4;goto B54cf8e;
case 0x54cf8f:c.instructions+=3;goto B54cf8f;
case 0x54cf90:c.instructions+=2;goto B54cf90;
case 0x54cf92:c.instructions+=1;goto B54cf92;
case 0x54cf97:goto L54cf97;
case 0x54cf99:c.instructions+=1;goto B54cf99;
case 0x54cf9e:goto L54cf9e;
case 0x54cfa3:goto L54cfa3;
case 0x54cfaa:c.instructions+=1;goto B54cfaa;
case 0x54cfaf:goto L54cfaf;
case 0x54cfb2:c.instructions+=2;goto B54cfb2;
case 0x54cfb4:c.instructions+=1;goto B54cfb4;
case 0x54cfb6:goto L54cfb6;
case 0x54cfb9:c.instructions+=7;goto B54cfb9;
case 0x54cfba:c.instructions+=6;goto B54cfba;
case 0x54cfbb:c.instructions+=5;goto B54cfbb;
case 0x54cfbc:c.instructions+=4;goto B54cfbc;
case 0x54cfbd:c.instructions+=3;goto B54cfbd;
case 0x54cfbe:c.instructions+=2;goto B54cfbe;
case 0x54cfc0:c.instructions+=1;goto B54cfc0;
case 0x54cfc5:goto L54cfc5;
case 0x54cfc9:goto L54cfc9;
case 0x54cfcc:c.instructions+=3;goto B54cfcc;
case 0x54cfcd:c.instructions+=2;goto B54cfcd;
case 0x54cfd0:c.instructions+=1;goto B54cfd0;
case 0x54cfd5:goto L54cfd5;
case 0x54cfd7:c.instructions+=1;goto B54cfd7;
case 0x54cfdd:goto L54cfdd;
case 0x54cfe0:c.instructions+=2;goto B54cfe0;
case 0x54cfe2:c.instructions+=1;goto B54cfe2;
case 0x54cfe8:goto L54cfe8;
case 0x54cfeb:c.instructions+=3;goto B54cfeb;
case 0x54cfee:c.instructions+=2;goto B54cfee;
case 0x54cff1:c.instructions+=1;goto B54cff1;
case 0x54cff7:goto L54cff7;
case 0x54cff8:c.instructions+=1;goto B54cff8;
case 0x54cffa:goto L54cffa;
case 0x54cffb:c.instructions+=1;goto B54cffb;
default:missing_instruction(c.pc);}
B54c000:L54c000:{c.instructions+=7;NFSU2_TR(0x54c000);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c001:{NFSU2_TR(0x54c001);
u8 U[4];
w4(U+0,u32(0x32000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c006:{NFSU2_TR(0x54c006);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c007:{NFSU2_TR(0x54c007);
u8 U[4];
w4(U+0,u32(0x100000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c00c:{NFSU2_TR(0x54c00c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c00d:{NFSU2_TR(0x54c00d);
__builtin_memmove((R+4),(R+0),4);
}
B54c00f:{NFSU2_TR(0x54c00f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c014ull));
TAIL_STATIC(0x6fea32u,6fe);
}
B54c014:L54c014:{c.instructions+=1;NFSU2_TR(0x54c014);
{goto L54c018;}
}
B54c016:L54c016:{c.instructions+=1;NFSU2_TR(0x54c016);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54c018:L54c018:{c.instructions+=6;NFSU2_TR(0x54c018);
__builtin_memmove((R+4),(R+24),4);
}
B54c01a:{NFSU2_TR(0x54c01a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B54c022:{NFSU2_TR(0x54c022);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54c025:{NFSU2_TR(0x54c025);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54c028:{NFSU2_TR(0x54c028);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54c02c:{NFSU2_TR(0x54c02c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c031ull));
TAIL_STATIC(0x531df0u,531);
}
B54c031:L54c031:{c.instructions+=8;NFSU2_TR(0x54c031);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54c035:{NFSU2_TR(0x54c035);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54c036:{NFSU2_TR(0x54c036);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54c037:{NFSU2_TR(0x54c037);
w1(R+0,u8(0x1ull));
}
B54c039:{NFSU2_TR(0x54c039);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54c040:{NFSU2_TR(0x54c040);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54c041:{NFSU2_TR(0x54c041);
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
B54c044:{NFSU2_TR(0x54c044);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54c050:L54c050:{c.instructions+=30;NFSU2_TR(0x54c050);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
}
B54c053:{NFSU2_TR(0x54c053);
__builtin_memmove((R+0),gp(0x78fd2c),4);
}
B54c058:{NFSU2_TR(0x54c058);
__builtin_memmove((R+8),gp(0x78fd24),4);
}
B54c05e:{NFSU2_TR(0x54c05e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B54c062:{NFSU2_TR(0x54c062);
__builtin_memmove((R+0),gp(0x78fd28),4);
}
B54c067:{NFSU2_TR(0x54c067);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c068:{NFSU2_TR(0x54c068);
__builtin_memmove((R+24),(R+4),4);
}
B54c06a:{NFSU2_TR(0x54c06a);
__builtin_memmove((R+4),gp(0x78fd30),4);
}
B54c070:{NFSU2_TR(0x54c070);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54c074:{NFSU2_TR(0x54c074);
__builtin_memmove((R+0),gp(0x78f228),4);
}
B54c079:{NFSU2_TR(0x54c079);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54c07d:{NFSU2_TR(0x54c07d);
__builtin_memmove((R+4),gp(0x78fd08),4);
}
B54c083:{NFSU2_TR(0x54c083);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54c087:{NFSU2_TR(0x54c087);
__builtin_memmove((R+8),gp(0x78fd0c),4);
}
B54c08d:{NFSU2_TR(0x54c08d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54c091:{NFSU2_TR(0x54c091);
__builtin_memmove((R+0),gp(0x78f21c),4);
}
B54c096:{NFSU2_TR(0x54c096);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54c09a:{NFSU2_TR(0x54c09a);
__builtin_memmove((R+4),gp(0x78f22c),4);
}
B54c0a0:{NFSU2_TR(0x54c0a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54c0a4:{NFSU2_TR(0x54c0a4);
__builtin_memmove((R+8),gp(0x78f230),2);
}
B54c0ab:{NFSU2_TR(0x54c0ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54c0af:{NFSU2_TR(0x54c0af);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54c0b3:{NFSU2_TR(0x54c0b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xd15c04ecull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54c0b8:{NFSU2_TR(0x54c0b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54c0bc:{NFSU2_TR(0x54c0bc);
__builtin_memmove((R+4),gp(0x78f220),4);
}
B54c0c2:{NFSU2_TR(0x54c0c2);
u8 U[6];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B54c0c7:{NFSU2_TR(0x54c0c7);
__builtin_memmove((R+8),gp(0x78f224),4);
}
B54c0cd:{NFSU2_TR(0x54c0cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54c0d1:{NFSU2_TR(0x54c0d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54c0d5:{NFSU2_TR(0x54c0d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54c0ed;}}
}
B54c0d7:L54c0d7:{c.instructions+=3;NFSU2_TR(0x54c0d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54c0dd:{NFSU2_TR(0x54c0dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c0de:{NFSU2_TR(0x54c0de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c0e3ull));
TAIL_STATIC(0x540a60u,540);
}
B54c0e3:L54c0e3:{c.instructions+=4;NFSU2_TR(0x54c0e3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54c0e6:{NFSU2_TR(0x54c0e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54c0e7:{NFSU2_TR(0x54c0e7);
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
B54c0ea:{NFSU2_TR(0x54c0ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54c0ed:L54c0ed:{c.instructions+=3;NFSU2_TR(0x54c0ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54c0f0:{NFSU2_TR(0x54c0f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54c0f2:{NFSU2_TR(0x54c0f2);
if(r1(R+518)){{goto L54c11e;}}
}
B54c0f4:L54c0f4:{c.instructions+=2;NFSU2_TR(0x54c0f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54c0f9:{NFSU2_TR(0x54c0f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54c11e;}}
}
B54c0fb:L54c0fb:{c.instructions+=5;NFSU2_TR(0x54c0fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c0fc:{NFSU2_TR(0x54c0fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54c0ff:{NFSU2_TR(0x54c0ff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c100:{NFSU2_TR(0x54c100);
u8 U[4];
w4(U+0,u32(0x79c7ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c105:{NFSU2_TR(0x54c105);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c10aull));
TAIL_STATIC(0x50d510u,50d);
}
B54c10a:L54c10a:{c.instructions+=3;NFSU2_TR(0x54c10a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54c110:{NFSU2_TR(0x54c110);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c111:{NFSU2_TR(0x54c111);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c116ull));
TAIL_STATIC(0x540a60u,540);
}
B54c116:L54c116:{c.instructions+=2;NFSU2_TR(0x54c116);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B54c119:{NFSU2_TR(0x54c119);
{goto L54c349;}
}
B54c11e:L54c11e:{c.instructions+=2;NFSU2_TR(0x54c11e);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x911c0a4bull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911c0a4bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54c123:{NFSU2_TR(0x54c123);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L54c334;}}
}
B54c129:L54c129:{c.instructions+=1;NFSU2_TR(0x54c129);
if(r1(R+518)){{goto L54c30e;}}
}
B54c12f:L54c12f:{c.instructions+=2;NFSU2_TR(0x54c12f);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x72619778ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x72619778ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54c134:{NFSU2_TR(0x54c134);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L54c2cc;}}
}
B54c13a:L54c13a:{c.instructions+=1;NFSU2_TR(0x54c13a);
if(r1(R+518)){{goto L54c2a6;}}
}
B54c140:L54c140:{c.instructions+=2;NFSU2_TR(0x54c140);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54c145:{NFSU2_TR(0x54c145);
if(r1(R+518)){{goto L54c1bc;}}
}
B54c147:L54c147:{c.instructions+=2;NFSU2_TR(0x54c147);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x35f8620bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54c14c:{NFSU2_TR(0x54c14c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54c3c8;}}
}
B54c152:L54c152:{c.instructions+=8;NFSU2_TR(0x54c152);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54c155:{NFSU2_TR(0x54c155);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c157:{NFSU2_TR(0x54c157);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B54c15b:{NFSU2_TR(0x54c15b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c15c:{NFSU2_TR(0x54c15c);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54c160:{NFSU2_TR(0x54c160);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c161:{NFSU2_TR(0x54c161);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c162:{NFSU2_TR(0x54c162);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c167ull));
TAIL_STATIC(0x5426c0u,542);
}
B54c167:L54c167:{c.instructions+=8;NFSU2_TR(0x54c167);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54c16a:{NFSU2_TR(0x54c16a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c16c:{NFSU2_TR(0x54c16c);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B54c170:{NFSU2_TR(0x54c170);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c171:{NFSU2_TR(0x54c171);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54c175:{NFSU2_TR(0x54c175);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c176:{NFSU2_TR(0x54c176);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c177:{NFSU2_TR(0x54c177);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c17cull));
TAIL_STATIC(0x5426c0u,542);
}
B54c17c:L54c17c:{c.instructions+=8;NFSU2_TR(0x54c17c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54c17f:{NFSU2_TR(0x54c17f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c181:{NFSU2_TR(0x54c181);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B54c185:{NFSU2_TR(0x54c185);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c186:{NFSU2_TR(0x54c186);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54c18a:{NFSU2_TR(0x54c18a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c18b:{NFSU2_TR(0x54c18b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c18c:{NFSU2_TR(0x54c18c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c191ull));
TAIL_STATIC(0x5426c0u,542);
}
B54c191:L54c191:{c.instructions+=3;NFSU2_TR(0x54c191);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54c194:{NFSU2_TR(0x54c194);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c195:{NFSU2_TR(0x54c195);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c19aull));
TAIL_STATIC(0x51cd60u,51c);
}
B54c19a:L54c19a:{c.instructions+=3;NFSU2_TR(0x54c19a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
}
B54c19d:{NFSU2_TR(0x54c19d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54c19f:{NFSU2_TR(0x54c19f);
if(r1(R+518)){{goto L54c3c8;}}
}
B54c1a5:L54c1a5:{c.instructions+=5;NFSU2_TR(0x54c1a5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c1a7:{NFSU2_TR(0x54c1a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54c1ab:{NFSU2_TR(0x54c1ab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c1ac:{NFSU2_TR(0x54c1ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c1ad:{NFSU2_TR(0x54c1ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c1b2ull));
TAIL_STATIC(0x51cf70u,51c);
}
B54c1b2:L54c1b2:{c.instructions+=4;NFSU2_TR(0x54c1b2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B54c1b5:{NFSU2_TR(0x54c1b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54c1b6:{NFSU2_TR(0x54c1b6);
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
B54c1b9:{NFSU2_TR(0x54c1b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54c1bc:L54c1bc:{c.instructions+=4;NFSU2_TR(0x54c1bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54c1c0:{NFSU2_TR(0x54c1c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54c1c3:{NFSU2_TR(0x54c1c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb8a7c6ccull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54c1c8:{NFSU2_TR(0x54c1c8);
if(r1(R+518)){{goto L54c264;}}
}
B54c1ce:L54c1ce:{c.instructions+=2;NFSU2_TR(0x54c1ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb8a7c6cdull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54c1d3:{NFSU2_TR(0x54c1d3);
if(r1(R+518)){{goto L54c222;}}
}
B54c1d5:L54c1d5:{c.instructions+=2;NFSU2_TR(0x54c1d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb8a7c6ceull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54c1da:{NFSU2_TR(0x54c1da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54c3c8;}}
}
B54c1e0:L54c1e0:{c.instructions+=3;NFSU2_TR(0x54c1e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x380ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54c1e6:{NFSU2_TR(0x54c1e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54c1e8:{NFSU2_TR(0x54c1e8);
if(r1(R+518)){{goto L54c3c8;}}
}
B54c1ee:L54c1ee:{c.instructions+=7;NFSU2_TR(0x54c1ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54c1f2:{NFSU2_TR(0x54c1f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54c1f5:{NFSU2_TR(0x54c1f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x36cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54c1fb:{NFSU2_TR(0x54c1fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c1fc:{NFSU2_TR(0x54c1fc);
u8 U[4];
w4(U+0,u32(0x79c7a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c201:{NFSU2_TR(0x54c201);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54c204:{NFSU2_TR(0x54c204);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c209ull));
TAIL_STATIC(0x50d510u,50d);
}
B54c209:L54c209:{c.instructions+=6;NFSU2_TR(0x54c209);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54c20c:{NFSU2_TR(0x54c20c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54c20f:{NFSU2_TR(0x54c20f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c210:{NFSU2_TR(0x54c210);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c212:{NFSU2_TR(0x54c212);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c213:{NFSU2_TR(0x54c213);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c218ull));
TAIL_STATIC(0x50d150u,50d);
}
B54c218:L54c218:{c.instructions+=4;NFSU2_TR(0x54c218);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B54c21b:{NFSU2_TR(0x54c21b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54c21c:{NFSU2_TR(0x54c21c);
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
B54c21f:{NFSU2_TR(0x54c21f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54c222:L54c222:{c.instructions+=3;NFSU2_TR(0x54c222);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x380ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54c228:{NFSU2_TR(0x54c228);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54c22a:{NFSU2_TR(0x54c22a);
if(r1(R+518)){{goto L54c3c8;}}
}
B54c230:L54c230:{c.instructions+=7;NFSU2_TR(0x54c230);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54c234:{NFSU2_TR(0x54c234);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54c237:{NFSU2_TR(0x54c237);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x364ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54c23d:{NFSU2_TR(0x54c23d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c23e:{NFSU2_TR(0x54c23e);
u8 U[4];
w4(U+0,u32(0x79c77cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c243:{NFSU2_TR(0x54c243);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54c246:{NFSU2_TR(0x54c246);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c24bull));
TAIL_STATIC(0x50d510u,50d);
}
B54c24b:L54c24b:{c.instructions+=6;NFSU2_TR(0x54c24b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54c24e:{NFSU2_TR(0x54c24e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54c251:{NFSU2_TR(0x54c251);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c252:{NFSU2_TR(0x54c252);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c254:{NFSU2_TR(0x54c254);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c255:{NFSU2_TR(0x54c255);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c25aull));
TAIL_STATIC(0x50d150u,50d);
}
B54c25a:L54c25a:{c.instructions+=4;NFSU2_TR(0x54c25a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B54c25d:{NFSU2_TR(0x54c25d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54c25e:{NFSU2_TR(0x54c25e);
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
B54c261:{NFSU2_TR(0x54c261);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54c264:L54c264:{c.instructions+=3;NFSU2_TR(0x54c264);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x380ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54c26a:{NFSU2_TR(0x54c26a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54c26c:{NFSU2_TR(0x54c26c);
if(r1(R+518)){{goto L54c3c8;}}
}
B54c272:L54c272:{c.instructions+=7;NFSU2_TR(0x54c272);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54c276:{NFSU2_TR(0x54c276);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54c279:{NFSU2_TR(0x54c279);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x35cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54c27f:{NFSU2_TR(0x54c27f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c280:{NFSU2_TR(0x54c280);
u8 U[4];
w4(U+0,u32(0x79c754ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c285:{NFSU2_TR(0x54c285);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54c288:{NFSU2_TR(0x54c288);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c28dull));
TAIL_STATIC(0x50d510u,50d);
}
B54c28d:L54c28d:{c.instructions+=6;NFSU2_TR(0x54c28d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54c290:{NFSU2_TR(0x54c290);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54c293:{NFSU2_TR(0x54c293);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c294:{NFSU2_TR(0x54c294);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c296:{NFSU2_TR(0x54c296);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c297:{NFSU2_TR(0x54c297);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c29cull));
TAIL_STATIC(0x50d150u,50d);
}
B54c29c:L54c29c:{c.instructions+=4;NFSU2_TR(0x54c29c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B54c29f:{NFSU2_TR(0x54c29f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54c2a0:{NFSU2_TR(0x54c2a0);
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
B54c2a3:{NFSU2_TR(0x54c2a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54c2a6:L54c2a6:{c.instructions+=2;NFSU2_TR(0x54c2a6);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x380ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54c2ad:{NFSU2_TR(0x54c2ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54c3c8;}}
}
B54c2b3:L54c2b3:{c.instructions+=6;NFSU2_TR(0x54c2b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54c2b6:{NFSU2_TR(0x54c2b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54c2b9:{NFSU2_TR(0x54c2b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c2ba:{NFSU2_TR(0x54c2ba);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c2bc:{NFSU2_TR(0x54c2bc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c2bd:{NFSU2_TR(0x54c2bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c2c2ull));
TAIL_STATIC(0x50d150u,50d);
}
B54c2c2:L54c2c2:{c.instructions+=4;NFSU2_TR(0x54c2c2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B54c2c5:{NFSU2_TR(0x54c2c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54c2c6:{NFSU2_TR(0x54c2c6);
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
B54c2c9:{NFSU2_TR(0x54c2c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54c2cc:L54c2cc:{c.instructions+=2;NFSU2_TR(0x54c2cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54c2d1:{NFSU2_TR(0x54c2d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54c3c8;}}
}
B54c2d7:L54c2d7:{c.instructions+=3;NFSU2_TR(0x54c2d7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x384ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54c2dd:{NFSU2_TR(0x54c2dd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54c2df:{NFSU2_TR(0x54c2df);
if(r1(R+518)){{goto L54c3c8;}}
}
B54c2e5:L54c2e5:{c.instructions+=6;NFSU2_TR(0x54c2e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54c2e8:{NFSU2_TR(0x54c2e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54c2eb:{NFSU2_TR(0x54c2eb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c2ec:{NFSU2_TR(0x54c2ec);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c2ee:{NFSU2_TR(0x54c2ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c2ef:{NFSU2_TR(0x54c2ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c2f4ull));
TAIL_STATIC(0x50d150u,50d);
}
B54c2f4:L54c2f4:{c.instructions+=8;NFSU2_TR(0x54c2f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x370ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54c2fa:{NFSU2_TR(0x54c2fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54c2fe:{NFSU2_TR(0x54c2fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B54c301:{NFSU2_TR(0x54c301);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54c304:{NFSU2_TR(0x54c304);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54c307:{NFSU2_TR(0x54c307);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54c308:{NFSU2_TR(0x54c308);
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
B54c30b:{NFSU2_TR(0x54c30b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54c30e:L54c30e:{c.instructions+=2;NFSU2_TR(0x54c30e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x380ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54c315:{NFSU2_TR(0x54c315);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54c3c8;}}
}
B54c31b:L54c31b:{c.instructions+=6;NFSU2_TR(0x54c31b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54c31e:{NFSU2_TR(0x54c31e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54c321:{NFSU2_TR(0x54c321);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c322:{NFSU2_TR(0x54c322);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c324:{NFSU2_TR(0x54c324);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c325:{NFSU2_TR(0x54c325);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c32aull));
TAIL_STATIC(0x50d150u,50d);
}
B54c32a:L54c32a:{c.instructions+=4;NFSU2_TR(0x54c32a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B54c32d:{NFSU2_TR(0x54c32d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54c32e:{NFSU2_TR(0x54c32e);
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
B54c331:{NFSU2_TR(0x54c331);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54c334:L54c334:{c.instructions+=2;NFSU2_TR(0x54c334);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54c339:{NFSU2_TR(0x54c339);
if(r1(R+518)){{goto L54c3ad;}}
}
B54c33b:L54c33b:{c.instructions+=2;NFSU2_TR(0x54c33b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54c340:{NFSU2_TR(0x54c340);
if(r1(R+518)){{goto L54c38b;}}
}
B54c342:L54c342:{c.instructions+=2;NFSU2_TR(0x54c342);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54c347:{NFSU2_TR(0x54c347);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54c3c8;}}
}
B54c349:L54c349:{c.instructions+=3;NFSU2_TR(0x54c349);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x386ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54c34f:{NFSU2_TR(0x54c34f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54c351:{NFSU2_TR(0x54c351);
if(r1(R+518)){{goto L54c3c8;}}
}
B54c353:L54c353:{c.instructions+=2;NFSU2_TR(0x54c353);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c355:{NFSU2_TR(0x54c355);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c35aull));
TAIL_STATIC(0x4a7ac0u,4a7);
}
B54c35a:L54c35a:{c.instructions+=2;NFSU2_TR(0x54c35a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c35b:{NFSU2_TR(0x54c35b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c360ull));
TAIL_STATIC(0x571a60u,571);
}
B54c360:L54c360:{c.instructions+=3;NFSU2_TR(0x54c360);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B54c363:{NFSU2_TR(0x54c363);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54c365:{NFSU2_TR(0x54c365);
if(r1(R+518)){{goto L54c37b;}}
}
B54c367:L54c367:{c.instructions+=2;NFSU2_TR(0x54c367);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c369:{NFSU2_TR(0x54c369);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c36eull));
TAIL_STATIC(0x4a7ac0u,4a7);
}
B54c36e:L54c36e:{c.instructions+=2;NFSU2_TR(0x54c36e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c36f:{NFSU2_TR(0x54c36f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c374ull));
TAIL_STATIC(0x571a60u,571);
}
B54c374:L54c374:{c.instructions+=3;NFSU2_TR(0x54c374);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B54c377:{NFSU2_TR(0x54c377);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54c379:{NFSU2_TR(0x54c379);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54c3c8;}}
}
B54c37b:L54c37b:{c.instructions+=5;NFSU2_TR(0x54c37b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x370ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54c381:{NFSU2_TR(0x54c381);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54c384:{NFSU2_TR(0x54c384);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54c385:{NFSU2_TR(0x54c385);
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
B54c388:{NFSU2_TR(0x54c388);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54c38b:L54c38b:{c.instructions+=2;NFSU2_TR(0x54c38b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x380ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54c392:{NFSU2_TR(0x54c392);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54c3c8;}}
}
B54c394:L54c394:{c.instructions+=6;NFSU2_TR(0x54c394);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54c397:{NFSU2_TR(0x54c397);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54c39a:{NFSU2_TR(0x54c39a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c39b:{NFSU2_TR(0x54c39b);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c39d:{NFSU2_TR(0x54c39d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c39e:{NFSU2_TR(0x54c39e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c3a3ull));
TAIL_STATIC(0x50d150u,50d);
}
B54c3a3:L54c3a3:{c.instructions+=4;NFSU2_TR(0x54c3a3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B54c3a6:{NFSU2_TR(0x54c3a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54c3a7:{NFSU2_TR(0x54c3a7);
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
B54c3aa:{NFSU2_TR(0x54c3aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54c3ad:L54c3ad:{c.instructions+=2;NFSU2_TR(0x54c3ad);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x380ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54c3b4:{NFSU2_TR(0x54c3b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54c3c8;}}
}
B54c3b6:L54c3b6:{c.instructions+=6;NFSU2_TR(0x54c3b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54c3b9:{NFSU2_TR(0x54c3b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54c3bc:{NFSU2_TR(0x54c3bc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c3bd:{NFSU2_TR(0x54c3bd);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c3bf:{NFSU2_TR(0x54c3bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c3c0:{NFSU2_TR(0x54c3c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c3c5ull));
TAIL_STATIC(0x50d150u,50d);
}
B54c3c5:L54c3c5:{c.instructions+=1;NFSU2_TR(0x54c3c5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B54c3c8:L54c3c8:{c.instructions+=3;NFSU2_TR(0x54c3c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54c3c9:{NFSU2_TR(0x54c3c9);
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
B54c3cc:{NFSU2_TR(0x54c3cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54c3d0:L54c3d0:{c.instructions+=7;NFSU2_TR(0x54c3d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c3d1:{NFSU2_TR(0x54c3d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c3d2:{NFSU2_TR(0x54c3d2);
__builtin_memmove((R+24),(R+4),4);
}
B54c3d4:{NFSU2_TR(0x54c3d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x387ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54c3da:{NFSU2_TR(0x54c3da);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54c3dc:{NFSU2_TR(0x54c3dc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c3dd:{NFSU2_TR(0x54c3dd);
if(r1(R+518)){{goto L54c422;}}
}
B54c3df:L54c3df:{c.instructions+=5;NFSU2_TR(0x54c3df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54c3e2:{NFSU2_TR(0x54c3e2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c3e3:{NFSU2_TR(0x54c3e3);
u8 U[4];
w4(U+0,u32(0x78fcf8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c3e8:{NFSU2_TR(0x54c3e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c3e9:{NFSU2_TR(0x54c3e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c3eeull));
TAIL_STATIC(0x4953c0u,495);
}
B54c3ee:L54c3ee:{c.instructions+=4;NFSU2_TR(0x54c3ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54c3f1:{NFSU2_TR(0x54c3f1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c3f2:{NFSU2_TR(0x54c3f2);
__builtin_memmove((R+28),(R+0),4);
}
B54c3f4:{NFSU2_TR(0x54c3f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c3f9ull));
TAIL_STATIC(0x7433a0u,743);
}
B54c3f9:L54c3f9:{c.instructions+=5;NFSU2_TR(0x54c3f9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B54c3fc:{NFSU2_TR(0x54c3fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54c3ff:{NFSU2_TR(0x54c3ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((R+4),(U+0),4);
}
B54c402:{NFSU2_TR(0x54c402);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c403:{NFSU2_TR(0x54c403);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c408ull));
TAIL_STATIC(0x51de90u,51d);
}
B54c408:L54c408:{c.instructions+=5;NFSU2_TR(0x54c408);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54c40b:{NFSU2_TR(0x54c40b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c40c:{NFSU2_TR(0x54c40c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c40d:{NFSU2_TR(0x54c40d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c40e:{NFSU2_TR(0x54c40e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c413ull));
TAIL_STATIC(0x7433f0u,743);
}
B54c413:L54c413:{c.instructions+=6;NFSU2_TR(0x54c413);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54c416:{NFSU2_TR(0x54c416);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B54c419:{NFSU2_TR(0x54c419);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x2ull))));
}
B54c41c:{NFSU2_TR(0x54c41c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54c41f:{NFSU2_TR(0x54c41f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54c420:{NFSU2_TR(0x54c420);
{goto L54c437;}
}
B54c422:L54c422:{c.instructions+=6;NFSU2_TR(0x54c422);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54c425:{NFSU2_TR(0x54c425);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((R+4),(U+0),4);
}
B54c428:{NFSU2_TR(0x54c428);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c429:{NFSU2_TR(0x54c429);
u8 U[4];
w4(U+0,u32(0x78fcf8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c42e:{NFSU2_TR(0x54c42e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c42f:{NFSU2_TR(0x54c42f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c434ull));
TAIL_STATIC(0x542600u,542);
}
B54c434:L54c434:{c.instructions+=1;NFSU2_TR(0x54c434);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B54c437:L54c437:{c.instructions+=3;NFSU2_TR(0x54c437);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x380ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54c43d:{NFSU2_TR(0x54c43d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54c440:{NFSU2_TR(0x54c440);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54c4a4;}}
}
B54c442:L54c442:{c.instructions+=6;NFSU2_TR(0x54c442);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x358ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54c448:{NFSU2_TR(0x54c448);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54c44b:{NFSU2_TR(0x54c44b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c44c:{NFSU2_TR(0x54c44c);
u8 U[4];
w4(U+0,u32(0xda473d2full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c451:{NFSU2_TR(0x54c451);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c452:{NFSU2_TR(0x54c452);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c457ull));
TAIL_STATIC(0x495460u,495);
}
B54c457:L54c457:{c.instructions+=6;NFSU2_TR(0x54c457);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x360ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54c45d:{NFSU2_TR(0x54c45d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54c460:{NFSU2_TR(0x54c460);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c461:{NFSU2_TR(0x54c461);
u8 U[4];
w4(U+0,u32(0xda473d30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c466:{NFSU2_TR(0x54c466);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c467:{NFSU2_TR(0x54c467);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c46cull));
TAIL_STATIC(0x495460u,495);
}
B54c46c:L54c46c:{c.instructions+=6;NFSU2_TR(0x54c46c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x368ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54c472:{NFSU2_TR(0x54c472);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54c475:{NFSU2_TR(0x54c475);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c476:{NFSU2_TR(0x54c476);
u8 U[4];
w4(U+0,u32(0xda473d31ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c47b:{NFSU2_TR(0x54c47b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c47c:{NFSU2_TR(0x54c47c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c481ull));
TAIL_STATIC(0x495460u,495);
}
B54c481:L54c481:{c.instructions+=4;NFSU2_TR(0x54c481);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B54c487:{NFSU2_TR(0x54c487);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B54c48a:{NFSU2_TR(0x54c48a);
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
B54c48c:{NFSU2_TR(0x54c48c);
if(r1(R+518)){{goto L54c7e3;}}
}
B54c492:L54c492:{c.instructions+=4;NFSU2_TR(0x54c492);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54c495:{NFSU2_TR(0x54c495);
u8 U[4];
w4(U+0,u32(0xb8a7c6ceull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c49a:{NFSU2_TR(0x54c49a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c49b:{NFSU2_TR(0x54c49b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c4a0ull));
TAIL_STATIC(0x52ce40u,52c);
}
B54c4a0:L54c4a0:{c.instructions+=4;NFSU2_TR(0x54c4a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54c4a1:{NFSU2_TR(0x54c4a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54c4a2:{NFSU2_TR(0x54c4a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54c4a3:{NFSU2_TR(0x54c4a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54c4a4:L54c4a4:{c.instructions+=2;NFSU2_TR(0x54c4a4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54c4a7:{NFSU2_TR(0x54c4a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54c55d;}}
}
B54c4ad:L54c4ad:{c.instructions+=4;NFSU2_TR(0x54c4ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54c4b0:{NFSU2_TR(0x54c4b0);
u8 U[4];
w4(U+0,u32(0xb8a7c6ceull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c4b5:{NFSU2_TR(0x54c4b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c4b6:{NFSU2_TR(0x54c4b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c4bbull));
TAIL_STATIC(0x4954e0u,495);
}
B54c4bb:L54c4bb:{c.instructions+=6;NFSU2_TR(0x54c4bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54c4be:{NFSU2_TR(0x54c4be);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B54c4c1:{NFSU2_TR(0x54c4c1);
w4(R+4,u32(0x78fd08ull));
}
B54c4c6:{NFSU2_TR(0x54c4c6);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xffffffffull))));
}
B54c4c9:{NFSU2_TR(0x54c4c9);
w1(R+0,u8(0x42ull));
}
B54c4cb:{NFSU2_TR(0x54c4cb);
{goto L54c4d0;}
}
B54c4d0:L54c4d0:{c.instructions+=3;NFSU2_TR(0x54c4d0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B54c4d3:{NFSU2_TR(0x54c4d3);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B54c4d5:{NFSU2_TR(0x54c4d5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L54c4dd;}}
}
B54c4d7:L54c4d7:{c.instructions+=2;NFSU2_TR(0x54c4d7);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54c4d9:{NFSU2_TR(0x54c4d9);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L54c4dd;}}
}
B54c4db:L54c4db:{c.instructions+=1;NFSU2_TR(0x54c4db);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B54c4dd:L54c4dd:{c.instructions+=6;NFSU2_TR(0x54c4dd);
w4(R+0,u32(r1(R+0)));
}
B54c4e0:{NFSU2_TR(0x54c4e0);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B54c4e2:{NFSU2_TR(0x54c4e2);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54c4e5:{NFSU2_TR(0x54c4e5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B54c4e6:{NFSU2_TR(0x54c4e6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54c4e8:{NFSU2_TR(0x54c4e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54c4d0u);}goto L54c4d0;}}
}
B54c4ea:L54c4ea:{c.instructions+=3;NFSU2_TR(0x54c4ea);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B54c4f0:{NFSU2_TR(0x54c4f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54c4f2:{NFSU2_TR(0x54c4f2);
if(r1(R+518)){{goto L54c4fd;}}
}
B54c4f4:L54c4f4:{c.instructions+=4;NFSU2_TR(0x54c4f4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c4f6:{NFSU2_TR(0x54c4f6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c4f7:{NFSU2_TR(0x54c4f7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c4f8:{NFSU2_TR(0x54c4f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c4fdull));
TAIL_STATIC(0x51cc60u,51c);
}
B54c4fd:L54c4fd:{c.instructions+=5;NFSU2_TR(0x54c4fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54c500:{NFSU2_TR(0x54c500);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c505:{NFSU2_TR(0x54c505);
u8 U[4];
w4(U+0,u32(0xda473d31ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c50a:{NFSU2_TR(0x54c50a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c50b:{NFSU2_TR(0x54c50b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c510ull));
TAIL_STATIC(0x537b80u,537);
}
B54c510:L54c510:{c.instructions+=6;NFSU2_TR(0x54c510);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x358ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54c516:{NFSU2_TR(0x54c516);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54c519:{NFSU2_TR(0x54c519);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c51a:{NFSU2_TR(0x54c51a);
u8 U[4];
w4(U+0,u32(0xda473d2full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c51f:{NFSU2_TR(0x54c51f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c520:{NFSU2_TR(0x54c520);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c525ull));
TAIL_STATIC(0x495460u,495);
}
B54c525:L54c525:{c.instructions+=6;NFSU2_TR(0x54c525);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x360ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54c52b:{NFSU2_TR(0x54c52b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54c52e:{NFSU2_TR(0x54c52e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c52f:{NFSU2_TR(0x54c52f);
u8 U[4];
w4(U+0,u32(0xda473d30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c534:{NFSU2_TR(0x54c534);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c535:{NFSU2_TR(0x54c535);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c53aull));
TAIL_STATIC(0x495460u,495);
}
B54c53a:L54c53a:{c.instructions+=4;NFSU2_TR(0x54c53a);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B54c540:{NFSU2_TR(0x54c540);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B54c543:{NFSU2_TR(0x54c543);
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
B54c545:{NFSU2_TR(0x54c545);
if(r1(R+518)){{goto L54c7e3;}}
}
B54c54b:L54c54b:{c.instructions+=4;NFSU2_TR(0x54c54b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54c54e:{NFSU2_TR(0x54c54e);
u8 U[4];
w4(U+0,u32(0xb8a7c6cdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c553:{NFSU2_TR(0x54c553);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c554:{NFSU2_TR(0x54c554);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c559ull));
TAIL_STATIC(0x52ce40u,52c);
}
B54c559:L54c559:{c.instructions+=4;NFSU2_TR(0x54c559);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54c55a:{NFSU2_TR(0x54c55a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54c55b:{NFSU2_TR(0x54c55b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54c55c:{NFSU2_TR(0x54c55c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54c55d:L54c55d:{c.instructions+=3;NFSU2_TR(0x54c55d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54c560:{NFSU2_TR(0x54c560);
u8 U[4];
w4(U+0,u32(0xb8a7c6ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c565:{NFSU2_TR(0x54c565);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54c6cf;}}
}
B54c56b:L54c56b:{c.instructions+=3;NFSU2_TR(0x54c56b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54c56e:{NFSU2_TR(0x54c56e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c56f:{NFSU2_TR(0x54c56f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c574ull));
TAIL_STATIC(0x4954e0u,495);
}
B54c574:L54c574:{c.instructions+=4;NFSU2_TR(0x54c574);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54c577:{NFSU2_TR(0x54c577);
u8 U[4];
w4(U+0,u32(0xb8a7c6cdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c57c:{NFSU2_TR(0x54c57c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c57d:{NFSU2_TR(0x54c57d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c582ull));
TAIL_STATIC(0x4954e0u,495);
}
B54c582:L54c582:{c.instructions+=5;NFSU2_TR(0x54c582);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54c585:{NFSU2_TR(0x54c585);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B54c588:{NFSU2_TR(0x54c588);
w4(R+4,u32(0x78fd2cull));
}
B54c58d:{NFSU2_TR(0x54c58d);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xffffffffull))));
}
B54c590:{NFSU2_TR(0x54c590);
w1(R+0,u8(0x42ull));
}
B54c592:L54c592:{c.instructions+=3;NFSU2_TR(0x54c592);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B54c595:{NFSU2_TR(0x54c595);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B54c597:{NFSU2_TR(0x54c597);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L54c59f;}}
}
B54c599:L54c599:{c.instructions+=2;NFSU2_TR(0x54c599);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54c59b:{NFSU2_TR(0x54c59b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L54c59f;}}
}
B54c59d:L54c59d:{c.instructions+=1;NFSU2_TR(0x54c59d);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B54c59f:L54c59f:{c.instructions+=6;NFSU2_TR(0x54c59f);
w4(R+0,u32(r1(R+0)));
}
B54c5a2:{NFSU2_TR(0x54c5a2);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B54c5a4:{NFSU2_TR(0x54c5a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54c5a7:{NFSU2_TR(0x54c5a7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B54c5a8:{NFSU2_TR(0x54c5a8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54c5aa:{NFSU2_TR(0x54c5aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54c592u);}goto L54c592;}}
}
B54c5ac:L54c5ac:{c.instructions+=3;NFSU2_TR(0x54c5ac);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B54c5b2:{NFSU2_TR(0x54c5b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54c5b4:{NFSU2_TR(0x54c5b4);
if(r1(R+518)){{goto L54c5c5;}}
}
B54c5b6:L54c5b6:{c.instructions+=4;NFSU2_TR(0x54c5b6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c5b8:{NFSU2_TR(0x54c5b8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c5b9:{NFSU2_TR(0x54c5b9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c5ba:{NFSU2_TR(0x54c5ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c5bfull));
TAIL_STATIC(0x51cc60u,51c);
}
B54c5bf:L54c5bf:{c.instructions+=1;NFSU2_TR(0x54c5bf);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B54c5c5:L54c5c5:{c.instructions+=4;NFSU2_TR(0x54c5c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B54c5c8:{NFSU2_TR(0x54c5c8);
w4(R+28,u32(0x78fd24ull));
}
B54c5cd:{NFSU2_TR(0x54c5cd);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xffffffffull))));
}
B54c5d0:{NFSU2_TR(0x54c5d0);
w1(R+0,u8(0x42ull));
}
B54c5d2:L54c5d2:{c.instructions+=3;NFSU2_TR(0x54c5d2);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B54c5d5:{NFSU2_TR(0x54c5d5);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B54c5d7:{NFSU2_TR(0x54c5d7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L54c5df;}}
}
B54c5d9:L54c5d9:{c.instructions+=2;NFSU2_TR(0x54c5d9);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54c5db:{NFSU2_TR(0x54c5db);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L54c5df;}}
}
B54c5dd:L54c5dd:{c.instructions+=1;NFSU2_TR(0x54c5dd);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B54c5df:L54c5df:{c.instructions+=6;NFSU2_TR(0x54c5df);
w4(R+0,u32(r1(R+0)));
}
B54c5e2:{NFSU2_TR(0x54c5e2);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B54c5e4:{NFSU2_TR(0x54c5e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54c5e7:{NFSU2_TR(0x54c5e7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B54c5e8:{NFSU2_TR(0x54c5e8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54c5ea:{NFSU2_TR(0x54c5ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54c5d2u);}goto L54c5d2;}}
}
B54c5ec:L54c5ec:{c.instructions+=2;NFSU2_TR(0x54c5ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54c5ee:{NFSU2_TR(0x54c5ee);
if(r1(R+518)){{goto L54c5f9;}}
}
B54c5f0:L54c5f0:{c.instructions+=4;NFSU2_TR(0x54c5f0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c5f2:{NFSU2_TR(0x54c5f2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c5f3:{NFSU2_TR(0x54c5f3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c5f4:{NFSU2_TR(0x54c5f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c5f9ull));
TAIL_STATIC(0x51cc60u,51c);
}
B54c5f9:L54c5f9:{c.instructions+=5;NFSU2_TR(0x54c5f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54c5fc:{NFSU2_TR(0x54c5fc);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c601:{NFSU2_TR(0x54c601);
u8 U[4];
w4(U+0,u32(0xda473d2full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c606:{NFSU2_TR(0x54c606);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c607:{NFSU2_TR(0x54c607);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c60cull));
TAIL_STATIC(0x537b80u,537);
}
B54c60c:L54c60c:{c.instructions+=5;NFSU2_TR(0x54c60c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54c60f:{NFSU2_TR(0x54c60f);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c614:{NFSU2_TR(0x54c614);
u8 U[4];
w4(U+0,u32(0xda473d30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c619:{NFSU2_TR(0x54c619);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c61a:{NFSU2_TR(0x54c61a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c61full));
TAIL_STATIC(0x537b80u,537);
}
B54c61f:L54c61f:{c.instructions+=4;NFSU2_TR(0x54c61f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54c622:{NFSU2_TR(0x54c622);
u8 U[4];
w4(U+0,u32(0xb8a7c6ceull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c627:{NFSU2_TR(0x54c627);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c628:{NFSU2_TR(0x54c628);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c62dull));
TAIL_STATIC(0x495520u,495);
}
B54c62d:L54c62d:{c.instructions+=6;NFSU2_TR(0x54c62d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54c630:{NFSU2_TR(0x54c630);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B54c633:{NFSU2_TR(0x54c633);
w4(R+4,u32(0x78fd08ull));
}
B54c638:{NFSU2_TR(0x54c638);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xffffffffull))));
}
B54c63b:{NFSU2_TR(0x54c63b);
w1(R+0,u8(0x42ull));
}
B54c63d:{NFSU2_TR(0x54c63d);
__builtin_memmove((R+4),(R+4),4);
}
B54c640:L54c640:{c.instructions+=3;NFSU2_TR(0x54c640);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B54c643:{NFSU2_TR(0x54c643);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B54c645:{NFSU2_TR(0x54c645);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L54c64d;}}
}
B54c647:L54c647:{c.instructions+=2;NFSU2_TR(0x54c647);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54c649:{NFSU2_TR(0x54c649);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L54c64d;}}
}
B54c64b:L54c64b:{c.instructions+=1;NFSU2_TR(0x54c64b);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B54c64d:L54c64d:{c.instructions+=6;NFSU2_TR(0x54c64d);
w4(R+0,u32(r1(R+0)));
}
B54c650:{NFSU2_TR(0x54c650);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B54c652:{NFSU2_TR(0x54c652);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54c655:{NFSU2_TR(0x54c655);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B54c656:{NFSU2_TR(0x54c656);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54c658:{NFSU2_TR(0x54c658);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54c640u);}goto L54c640;}}
}
B54c65a:L54c65a:{c.instructions+=3;NFSU2_TR(0x54c65a);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B54c660:{NFSU2_TR(0x54c660);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54c662:{NFSU2_TR(0x54c662);
if(r1(R+518)){{goto L54c66d;}}
}
B54c664:L54c664:{c.instructions+=4;NFSU2_TR(0x54c664);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c666:{NFSU2_TR(0x54c666);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c667:{NFSU2_TR(0x54c667);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c668:{NFSU2_TR(0x54c668);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c66dull));
TAIL_STATIC(0x51cc60u,51c);
}
B54c66d:L54c66d:{c.instructions+=6;NFSU2_TR(0x54c66d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54c670:{NFSU2_TR(0x54c670);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c672:{NFSU2_TR(0x54c672);
u8 U[4];
w4(U+0,u32(0x78f970ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c677:{NFSU2_TR(0x54c677);
u8 U[4];
w4(U+0,u32(0xb8a7c6ceull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c67c:{NFSU2_TR(0x54c67c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c67d:{NFSU2_TR(0x54c67d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c682ull));
TAIL_STATIC(0x537c00u,537);
}
B54c682:L54c682:{c.instructions+=6;NFSU2_TR(0x54c682);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54c685:{NFSU2_TR(0x54c685);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c687:{NFSU2_TR(0x54c687);
u8 U[4];
w4(U+0,u32(0x78f970ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c68c:{NFSU2_TR(0x54c68c);
u8 U[4];
w4(U+0,u32(0xda473d31ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c691:{NFSU2_TR(0x54c691);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c692:{NFSU2_TR(0x54c692);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c697ull));
TAIL_STATIC(0x537c00u,537);
}
B54c697:L54c697:{c.instructions+=6;NFSU2_TR(0x54c697);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x368ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54c69d:{NFSU2_TR(0x54c69d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54c6a0:{NFSU2_TR(0x54c6a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c6a1:{NFSU2_TR(0x54c6a1);
u8 U[4];
w4(U+0,u32(0xda473d31ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c6a6:{NFSU2_TR(0x54c6a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c6a7:{NFSU2_TR(0x54c6a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c6acull));
TAIL_STATIC(0x495460u,495);
}
B54c6ac:L54c6ac:{c.instructions+=4;NFSU2_TR(0x54c6ac);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B54c6b2:{NFSU2_TR(0x54c6b2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
}
B54c6b5:{NFSU2_TR(0x54c6b5);
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
B54c6b7:{NFSU2_TR(0x54c6b7);
if(r1(R+518)){{goto L54c7e3;}}
}
B54c6bd:L54c6bd:{c.instructions+=4;NFSU2_TR(0x54c6bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54c6c0:{NFSU2_TR(0x54c6c0);
u8 U[4];
w4(U+0,u32(0xb8a7c6ceull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c6c5:{NFSU2_TR(0x54c6c5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c6c6:{NFSU2_TR(0x54c6c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c6cbull));
TAIL_STATIC(0x52ce40u,52c);
}
B54c6cb:L54c6cb:{c.instructions+=4;NFSU2_TR(0x54c6cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54c6cc:{NFSU2_TR(0x54c6cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54c6cd:{NFSU2_TR(0x54c6cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54c6ce:{NFSU2_TR(0x54c6ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54c6cf:L54c6cf:{c.instructions+=3;NFSU2_TR(0x54c6cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54c6d2:{NFSU2_TR(0x54c6d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c6d3:{NFSU2_TR(0x54c6d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c6d8ull));
TAIL_STATIC(0x4954e0u,495);
}
B54c6d8:L54c6d8:{c.instructions+=4;NFSU2_TR(0x54c6d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54c6db:{NFSU2_TR(0x54c6db);
u8 U[4];
w4(U+0,u32(0xb8a7c6cdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c6e0:{NFSU2_TR(0x54c6e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c6e1:{NFSU2_TR(0x54c6e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c6e6ull));
TAIL_STATIC(0x4954e0u,495);
}
B54c6e6:L54c6e6:{c.instructions+=4;NFSU2_TR(0x54c6e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54c6e9:{NFSU2_TR(0x54c6e9);
u8 U[4];
w4(U+0,u32(0xb8a7c6ceull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c6ee:{NFSU2_TR(0x54c6ee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c6ef:{NFSU2_TR(0x54c6ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c6f4ull));
TAIL_STATIC(0x4954e0u,495);
}
B54c6f4:L54c6f4:{c.instructions+=5;NFSU2_TR(0x54c6f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54c6f7:{NFSU2_TR(0x54c6f7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B54c6fa:{NFSU2_TR(0x54c6fa);
w4(R+4,u32(0x78fd2cull));
}
B54c6ff:{NFSU2_TR(0x54c6ff);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xffffffffull))));
}
B54c702:{NFSU2_TR(0x54c702);
w1(R+0,u8(0x42ull));
}
B54c704:L54c704:{c.instructions+=3;NFSU2_TR(0x54c704);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B54c707:{NFSU2_TR(0x54c707);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B54c709:{NFSU2_TR(0x54c709);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L54c711;}}
}
B54c70b:L54c70b:{c.instructions+=2;NFSU2_TR(0x54c70b);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54c70d:{NFSU2_TR(0x54c70d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L54c711;}}
}
B54c70f:L54c70f:{c.instructions+=1;NFSU2_TR(0x54c70f);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B54c711:L54c711:{c.instructions+=6;NFSU2_TR(0x54c711);
w4(R+0,u32(r1(R+0)));
}
B54c714:{NFSU2_TR(0x54c714);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B54c716:{NFSU2_TR(0x54c716);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54c719:{NFSU2_TR(0x54c719);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B54c71a:{NFSU2_TR(0x54c71a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54c71c:{NFSU2_TR(0x54c71c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54c704u);}goto L54c704;}}
}
B54c71e:L54c71e:{c.instructions+=3;NFSU2_TR(0x54c71e);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B54c724:{NFSU2_TR(0x54c724);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54c726:{NFSU2_TR(0x54c726);
if(r1(R+518)){{goto L54c737;}}
}
B54c728:L54c728:{c.instructions+=4;NFSU2_TR(0x54c728);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c72a:{NFSU2_TR(0x54c72a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c72b:{NFSU2_TR(0x54c72b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c72c:{NFSU2_TR(0x54c72c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c731ull));
TAIL_STATIC(0x51cc60u,51c);
}
B54c731:L54c731:{c.instructions+=1;NFSU2_TR(0x54c731);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B54c737:L54c737:{c.instructions+=4;NFSU2_TR(0x54c737);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B54c73a:{NFSU2_TR(0x54c73a);
w4(R+28,u32(0x78fd24ull));
}
B54c73f:{NFSU2_TR(0x54c73f);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xffffffffull))));
}
B54c742:{NFSU2_TR(0x54c742);
w1(R+0,u8(0x42ull));
}
B54c744:L54c744:{c.instructions+=3;NFSU2_TR(0x54c744);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B54c747:{NFSU2_TR(0x54c747);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B54c749:{NFSU2_TR(0x54c749);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L54c751;}}
}
B54c74b:L54c74b:{c.instructions+=2;NFSU2_TR(0x54c74b);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54c74d:{NFSU2_TR(0x54c74d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L54c751;}}
}
B54c74f:L54c74f:{c.instructions+=1;NFSU2_TR(0x54c74f);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B54c751:L54c751:{c.instructions+=6;NFSU2_TR(0x54c751);
w4(R+0,u32(r1(R+0)));
}
B54c754:{NFSU2_TR(0x54c754);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B54c756:{NFSU2_TR(0x54c756);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54c759:{NFSU2_TR(0x54c759);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B54c75a:{NFSU2_TR(0x54c75a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54c75c:{NFSU2_TR(0x54c75c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54c744u);}goto L54c744;}}
}
B54c75e:L54c75e:{c.instructions+=2;NFSU2_TR(0x54c75e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54c760:{NFSU2_TR(0x54c760);
if(r1(R+518)){{goto L54c771;}}
}
B54c762:L54c762:{c.instructions+=4;NFSU2_TR(0x54c762);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c764:{NFSU2_TR(0x54c764);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c765:{NFSU2_TR(0x54c765);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c766:{NFSU2_TR(0x54c766);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c76bull));
TAIL_STATIC(0x51cc60u,51c);
}
B54c76b:L54c76b:{c.instructions+=1;NFSU2_TR(0x54c76b);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B54c771:L54c771:{c.instructions+=5;NFSU2_TR(0x54c771);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B54c774:{NFSU2_TR(0x54c774);
w4(R+28,u32(0x78fd08ull));
}
B54c779:{NFSU2_TR(0x54c779);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xffffffffull))));
}
B54c77c:{NFSU2_TR(0x54c77c);
w1(R+0,u8(0x42ull));
}
B54c77e:{NFSU2_TR(0x54c77e);
__builtin_memmove((R+28),(R+28),4);
}
B54c780:L54c780:{c.instructions+=3;NFSU2_TR(0x54c780);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B54c783:{NFSU2_TR(0x54c783);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B54c785:{NFSU2_TR(0x54c785);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L54c78d;}}
}
B54c787:L54c787:{c.instructions+=2;NFSU2_TR(0x54c787);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54c789:{NFSU2_TR(0x54c789);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L54c78d;}}
}
B54c78b:L54c78b:{c.instructions+=1;NFSU2_TR(0x54c78b);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B54c78d:L54c78d:{c.instructions+=6;NFSU2_TR(0x54c78d);
w4(R+0,u32(r1(R+0)));
}
B54c790:{NFSU2_TR(0x54c790);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B54c792:{NFSU2_TR(0x54c792);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54c795:{NFSU2_TR(0x54c795);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B54c796:{NFSU2_TR(0x54c796);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54c798:{NFSU2_TR(0x54c798);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54c780u);}goto L54c780;}}
}
B54c79a:L54c79a:{c.instructions+=2;NFSU2_TR(0x54c79a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54c79c:{NFSU2_TR(0x54c79c);
if(r1(R+518)){{goto L54c7a7;}}
}
B54c79e:L54c79e:{c.instructions+=4;NFSU2_TR(0x54c79e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c7a0:{NFSU2_TR(0x54c7a0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c7a1:{NFSU2_TR(0x54c7a1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c7a2:{NFSU2_TR(0x54c7a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c7a7ull));
TAIL_STATIC(0x51cc60u,51c);
}
B54c7a7:L54c7a7:{c.instructions+=5;NFSU2_TR(0x54c7a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54c7aa:{NFSU2_TR(0x54c7aa);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c7af:{NFSU2_TR(0x54c7af);
u8 U[4];
w4(U+0,u32(0xda473d2full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c7b4:{NFSU2_TR(0x54c7b4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c7b5:{NFSU2_TR(0x54c7b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c7baull));
TAIL_STATIC(0x537b80u,537);
}
B54c7ba:L54c7ba:{c.instructions+=5;NFSU2_TR(0x54c7ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54c7bd:{NFSU2_TR(0x54c7bd);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c7c2:{NFSU2_TR(0x54c7c2);
u8 U[4];
w4(U+0,u32(0xda473d30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c7c7:{NFSU2_TR(0x54c7c7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c7c8:{NFSU2_TR(0x54c7c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c7cdull));
TAIL_STATIC(0x537b80u,537);
}
B54c7cd:L54c7cd:{c.instructions+=5;NFSU2_TR(0x54c7cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54c7d0:{NFSU2_TR(0x54c7d0);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c7d5:{NFSU2_TR(0x54c7d5);
u8 U[4];
w4(U+0,u32(0xda473d31ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c7da:{NFSU2_TR(0x54c7da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c7db:{NFSU2_TR(0x54c7db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c7e0ull));
TAIL_STATIC(0x537b80u,537);
}
B54c7e0:L54c7e0:{c.instructions+=1;NFSU2_TR(0x54c7e0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B54c7e3:L54c7e3:{c.instructions+=4;NFSU2_TR(0x54c7e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54c7e4:{NFSU2_TR(0x54c7e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54c7e5:{NFSU2_TR(0x54c7e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54c7e6:{NFSU2_TR(0x54c7e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54c7f0:L54c7f0:{c.instructions+=4;NFSU2_TR(0x54c7f0);
u8 U[8];
__builtin_memmove((U+0),gp(0x83a9b4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54c7f7:{NFSU2_TR(0x54c7f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c7f8:{NFSU2_TR(0x54c7f8);
__builtin_memmove((R+24),(R+4),4);
}
B54c7fa:{NFSU2_TR(0x54c7fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54c811;}}
}
B54c7fc:L54c7fc:{c.instructions+=2;NFSU2_TR(0x54c7fc);
u8 U[4];
w4(U+0,u32(0x83a8b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c801:{NFSU2_TR(0x54c801);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c806ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B54c806:L54c806:{c.instructions+=3;NFSU2_TR(0x54c806);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54c809:{NFSU2_TR(0x54c809);
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
B54c80b:{NFSU2_TR(0x54c80b);
if(r1(R+518)){{goto L54c894;}}
}
B54c811:L54c811:{c.instructions+=6;NFSU2_TR(0x54c811);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c812:{NFSU2_TR(0x54c812);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c813:{NFSU2_TR(0x54c813);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B54c815:{NFSU2_TR(0x54c815);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c816:{NFSU2_TR(0x54c816);
__builtin_memmove((R+4),(R+24),4);
}
B54c818:{NFSU2_TR(0x54c818);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c81dull));
TAIL_STATIC(0x540ab0u,540);
}
B54c81d:L54c81d:{c.instructions+=8;NFSU2_TR(0x54c81d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B54c81f:{NFSU2_TR(0x54c81f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54c822:{NFSU2_TR(0x54c822);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B54c824:{NFSU2_TR(0x54c824);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c825:{NFSU2_TR(0x54c825);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c826:{NFSU2_TR(0x54c826);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c827:{NFSU2_TR(0x54c827);
u8 U[4];
w4(U+0,u32(0xda5b8712ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c82c:{NFSU2_TR(0x54c82c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c82full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54c82f:L54c82f:{c.instructions+=5;NFSU2_TR(0x54c82f);
__builtin_memmove(gp(0x83a9c0),(R+12),1);
}
B54c835:{NFSU2_TR(0x54c835);
__builtin_memmove(gp(0x83a9c4),(R+12),4);
}
B54c83b:{NFSU2_TR(0x54c83b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54c83d:{NFSU2_TR(0x54c83d);
w4(R+4,u32(0x40ull));
}
B54c842:{NFSU2_TR(0x54c842);
w4(R+28,u32(0x83a8b0ull));
}
B54c847:L54c847:{c.instructions+=1;NFSU2_TR(0x54c847);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L54c849;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54c847u);}goto L54c847;}
}
B54c849:L54c849:{c.instructions+=2;NFSU2_TR(0x54c849);
w4(R+4,u32(0x40ull));
}
B54c84e:{NFSU2_TR(0x54c84e);
w4(R+28,u32(0x83a7b0ull));
}
B54c853:L54c853:{c.instructions+=1;NFSU2_TR(0x54c853);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L54c855;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54c853u);}goto L54c853;}
}
B54c855:L54c855:{c.instructions+=4;NFSU2_TR(0x54c855);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54c858:{NFSU2_TR(0x54c858);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54c85b:{NFSU2_TR(0x54c85b);
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
B54c85d:{NFSU2_TR(0x54c85d);
if(r1(R+518)){{goto L54c88c;}}
}
B54c85f:L54c85f:{c.instructions+=4;NFSU2_TR(0x54c85f);
__builtin_memmove(gp(0x83a9c0),(R+12),1);
}
B54c865:{NFSU2_TR(0x54c865);
__builtin_memmove(gp(0x83a9c4),(R+12),4);
}
B54c86b:{NFSU2_TR(0x54c86b);
w4(R+4,u32(0x40ull));
}
B54c870:{NFSU2_TR(0x54c870);
w4(R+28,u32(0x83a8b0ull));
}
B54c875:L54c875:{c.instructions+=1;NFSU2_TR(0x54c875);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L54c877;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54c875u);}goto L54c875;}
}
B54c877:L54c877:{c.instructions+=3;NFSU2_TR(0x54c877);
w4(R+4,u32(0x40ull));
}
B54c87c:{NFSU2_TR(0x54c87c);
w4(R+28,u32(0x83a7b0ull));
}
B54c881:{NFSU2_TR(0x54c881);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c882:L54c882:{c.instructions+=1;NFSU2_TR(0x54c882);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L54c884;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54c882u);}goto L54c882;}
}
B54c884:L54c884:{c.instructions+=1;NFSU2_TR(0x54c884);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c889ull));
TAIL_STATIC(0x575630u,575);
}
B54c889:L54c889:{c.instructions+=1;NFSU2_TR(0x54c889);
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
B54c88c:L54c88c:{c.instructions+=4;NFSU2_TR(0x54c88c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54c88d:{NFSU2_TR(0x54c88d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54c890:{NFSU2_TR(0x54c890);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B54c893:{NFSU2_TR(0x54c893);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54c894:L54c894:{c.instructions+=2;NFSU2_TR(0x54c894);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54c895:{NFSU2_TR(0x54c895);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54c8a0:L54c8a0:{c.instructions+=8;NFSU2_TR(0x54c8a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c8a1:{NFSU2_TR(0x54c8a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c8a2:{NFSU2_TR(0x54c8a2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c8a3:{NFSU2_TR(0x54c8a3);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c8a8:{NFSU2_TR(0x54c8a8);
u8 U[4];
w4(U+0,u32(0x83a7b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c8ad:{NFSU2_TR(0x54c8ad);
u8 U[4];
w4(U+0,u32(0x83a8b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c8b2:{NFSU2_TR(0x54c8b2);
__builtin_memmove((R+24),(R+4),4);
}
B54c8b4:{NFSU2_TR(0x54c8b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c8b9ull));
TAIL_STATIC(0x43dc00u,43d);
}
B54c8b9:L54c8b9:{c.instructions+=5;NFSU2_TR(0x54c8b9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B54c8bc:{NFSU2_TR(0x54c8bc);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B54c8be:{NFSU2_TR(0x54c8be);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c8bf:{NFSU2_TR(0x54c8bf);
__builtin_memmove((R+4),(R+24),4);
}
B54c8c1:{NFSU2_TR(0x54c8c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c8c6ull));
TAIL_STATIC(0x540ab0u,540);
}
B54c8c6:L54c8c6:{c.instructions+=8;NFSU2_TR(0x54c8c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B54c8c8:{NFSU2_TR(0x54c8c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54c8cb:{NFSU2_TR(0x54c8cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B54c8cd:{NFSU2_TR(0x54c8cd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c8ce:{NFSU2_TR(0x54c8ce);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c8cf:{NFSU2_TR(0x54c8cf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c8d0:{NFSU2_TR(0x54c8d0);
u8 U[4];
w4(U+0,u32(0xc9d30688ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c8d5:{NFSU2_TR(0x54c8d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c8d8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54c8d8:L54c8d8:{c.instructions+=5;NFSU2_TR(0x54c8d8);
__builtin_memmove(gp(0x83a9c0),(R+12),1);
}
B54c8de:{NFSU2_TR(0x54c8de);
__builtin_memmove(gp(0x83a9c4),(R+12),4);
}
B54c8e4:{NFSU2_TR(0x54c8e4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54c8e6:{NFSU2_TR(0x54c8e6);
w4(R+4,u32(0x40ull));
}
B54c8eb:{NFSU2_TR(0x54c8eb);
w4(R+28,u32(0x83a8b0ull));
}
B54c8f0:L54c8f0:{c.instructions+=1;NFSU2_TR(0x54c8f0);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L54c8f2;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54c8f0u);}goto L54c8f0;}
}
B54c8f2:L54c8f2:{c.instructions+=2;NFSU2_TR(0x54c8f2);
w4(R+4,u32(0x40ull));
}
B54c8f7:{NFSU2_TR(0x54c8f7);
w4(R+28,u32(0x83a7b0ull));
}
B54c8fc:L54c8fc:{c.instructions+=1;NFSU2_TR(0x54c8fc);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L54c8fe;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54c8fcu);}goto L54c8fc;}
}
B54c8fe:L54c8fe:{c.instructions+=4;NFSU2_TR(0x54c8fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54c901:{NFSU2_TR(0x54c901);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54c904:{NFSU2_TR(0x54c904);
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
B54c906:{NFSU2_TR(0x54c906);
if(r1(R+518)){{goto L54c935;}}
}
B54c908:L54c908:{c.instructions+=4;NFSU2_TR(0x54c908);
__builtin_memmove(gp(0x83a9c0),(R+12),1);
}
B54c90e:{NFSU2_TR(0x54c90e);
__builtin_memmove(gp(0x83a9c4),(R+12),4);
}
B54c914:{NFSU2_TR(0x54c914);
w4(R+4,u32(0x40ull));
}
B54c919:{NFSU2_TR(0x54c919);
w4(R+28,u32(0x83a8b0ull));
}
B54c91e:L54c91e:{c.instructions+=1;NFSU2_TR(0x54c91e);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L54c920;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54c91eu);}goto L54c91e;}
}
B54c920:L54c920:{c.instructions+=3;NFSU2_TR(0x54c920);
w4(R+4,u32(0x40ull));
}
B54c925:{NFSU2_TR(0x54c925);
w4(R+28,u32(0x83a7b0ull));
}
B54c92a:{NFSU2_TR(0x54c92a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c92b:L54c92b:{c.instructions+=1;NFSU2_TR(0x54c92b);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L54c92d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54c92bu);}goto L54c92b;}
}
B54c92d:L54c92d:{c.instructions+=1;NFSU2_TR(0x54c92d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c932ull));
TAIL_STATIC(0x575630u,575);
}
B54c932:L54c932:{c.instructions+=1;NFSU2_TR(0x54c932);
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
B54c935:L54c935:{c.instructions+=6;NFSU2_TR(0x54c935);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54c936:{NFSU2_TR(0x54c936);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54c939:{NFSU2_TR(0x54c939);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B54c93c:{NFSU2_TR(0x54c93c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54c93d:{NFSU2_TR(0x54c93d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54c93e:{NFSU2_TR(0x54c93e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54c940:L54c940:{c.instructions+=5;NFSU2_TR(0x54c940);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c941:{NFSU2_TR(0x54c941);
__builtin_memmove((R+28),(R+4),4);
}
B54c943:{NFSU2_TR(0x54c943);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd25ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54c949:{NFSU2_TR(0x54c949);
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
B54c94b:{NFSU2_TR(0x54c94b);
if(r1(R+518)){{goto L54c9c1;}}
}
B54c94d:L54c94d:{c.instructions+=3;NFSU2_TR(0x54c94d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54c953:{NFSU2_TR(0x54c953);
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
B54c955:{NFSU2_TR(0x54c955);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54c9c1;}}
}
B54c957:L54c957:{c.instructions+=5;NFSU2_TR(0x54c957);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4208ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54c95d:{NFSU2_TR(0x54c95d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54c961:{NFSU2_TR(0x54c961);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c962:{NFSU2_TR(0x54c962);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd24ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54c968:{NFSU2_TR(0x54c968);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54c97e;}}
}
B54c96a:L54c96a:{c.instructions+=4;NFSU2_TR(0x54c96a);
u8 U[4];
w4(U+0,u32(0x85036cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c96f:{NFSU2_TR(0x54c96f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B54c972:{NFSU2_TR(0x54c972);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54c979:{NFSU2_TR(0x54c979);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c97eull));
TAIL_STATIC(0x525d10u,525);
}
B54c97e:L54c97e:{c.instructions+=3;NFSU2_TR(0x54c97e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c980:{NFSU2_TR(0x54c980);
__builtin_memmove((R+4),(R+24),4);
}
B54c982:{NFSU2_TR(0x54c982);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c987ull));
TAIL_STATIC(0x5287a0u,528);
}
B54c987:L54c987:{c.instructions+=2;NFSU2_TR(0x54c987);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54c989:{NFSU2_TR(0x54c989);
if(r1(R+518)){{goto L54c98f;}}
}
B54c98b:L54c98b:{c.instructions+=1;NFSU2_TR(0x54c98b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54c98f:L54c98f:{c.instructions+=3;NFSU2_TR(0x54c98f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c991:{NFSU2_TR(0x54c991);
__builtin_memmove((R+4),(R+24),4);
}
B54c993:{NFSU2_TR(0x54c993);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c998ull));
TAIL_STATIC(0x5287a0u,528);
}
B54c998:L54c998:{c.instructions+=3;NFSU2_TR(0x54c998);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54c99a:{NFSU2_TR(0x54c99a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54c99b:{NFSU2_TR(0x54c99b);
if(r1(R+518)){{goto L54c9b0;}}
}
B54c99d:L54c99d:{c.instructions+=5;NFSU2_TR(0x54c99d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8730ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54c9a3:{NFSU2_TR(0x54c9a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54c9a6:{NFSU2_TR(0x54c9a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c9a7:{NFSU2_TR(0x54c9a7);
__builtin_memmove((R+4),(R+28),4);
}
B54c9a9:{NFSU2_TR(0x54c9a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c9aeull));
TAIL_STATIC(0x541420u,541);
}
B54c9ae:L54c9ae:{c.instructions+=2;NFSU2_TR(0x54c9ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54c9af:{NFSU2_TR(0x54c9af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54c9b0:L54c9b0:{c.instructions+=5;NFSU2_TR(0x54c9b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8730ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54c9b6:{NFSU2_TR(0x54c9b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54c9b9:{NFSU2_TR(0x54c9b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c9ba:{NFSU2_TR(0x54c9ba);
__builtin_memmove((R+4),(R+28),4);
}
B54c9bc:{NFSU2_TR(0x54c9bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c9c1ull));
TAIL_STATIC(0x528500u,528);
}
B54c9c1:L54c9c1:{c.instructions+=2;NFSU2_TR(0x54c9c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54c9c2:{NFSU2_TR(0x54c9c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54c9d0:L54c9d0:{c.instructions+=7;NFSU2_TR(0x54c9d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c9d1:{NFSU2_TR(0x54c9d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c9d2:{NFSU2_TR(0x54c9d2);
__builtin_memmove((R+24),(R+4),4);
}
B54c9d4:{NFSU2_TR(0x54c9d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8730ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54c9da:{NFSU2_TR(0x54c9da);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c9db:{NFSU2_TR(0x54c9db);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x37ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(s32(s8(r1(U+4)))));
}
B54c9df:{NFSU2_TR(0x54c9df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c9e4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54c940u);}goto L54c940;}
}
B54c9e4:L54c9e4:{c.instructions+=8;NFSU2_TR(0x54c9e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7af8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54c9ea:{NFSU2_TR(0x54c9ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54c9ee:{NFSU2_TR(0x54c9ee);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54c9f0:{NFSU2_TR(0x54c9f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B54c9f3:{NFSU2_TR(0x54c9f3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c9f4:{NFSU2_TR(0x54c9f4);
__builtin_memmove((R+4),(R+24),4);
}
B54c9f6:{NFSU2_TR(0x54c9f6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54c9f7:{NFSU2_TR(0x54c9f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54c9fcull));
TAIL_STATIC(0x513a50u,513);
}
B54c9fc:L54c9fc:{c.instructions+=8;NFSU2_TR(0x54c9fc);
__builtin_memmove((R+12),(R+0),1);
}
B54c9fe:{NFSU2_TR(0x54c9fe);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54ca00:{NFSU2_TR(0x54ca00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8730ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54ca06:{NFSU2_TR(0x54ca06);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd25ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B54ca0c:{NFSU2_TR(0x54ca0c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8744ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54ca13:{NFSU2_TR(0x54ca13);
__builtin_memmove((R+4),gp(0x890118),4);
}
B54ca19:{NFSU2_TR(0x54ca19);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B54ca1b:{NFSU2_TR(0x54ca1b);
if(r1(R+518)){{goto L54ca22;}}
}
B54ca1d:L54ca1d:{c.instructions+=1;NFSU2_TR(0x54ca1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ca22ull));
TAIL_STATIC(0x5eee80u,5ee);
}
B54ca22:L54ca22:{c.instructions+=5;NFSU2_TR(0x54ca22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54ca23:{NFSU2_TR(0x54ca23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54ca24:{NFSU2_TR(0x54ca24);
__builtin_memmove((R+0),(R+12),1);
}
B54ca26:{NFSU2_TR(0x54ca26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54ca27:{NFSU2_TR(0x54ca27);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54ca30:L54ca30:{c.instructions+=1;NFSU2_TR(0x54ca30);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54c940u);}goto L54c940;}
}
B54ca40:L54ca40:{c.instructions+=3;NFSU2_TR(0x54ca40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ca41:{NFSU2_TR(0x54ca41);
__builtin_memmove((R+24),(R+4),4);
}
B54ca43:{NFSU2_TR(0x54ca43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ca48ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54c940u);}goto L54c940;}
}
B54ca48:L54ca48:{c.instructions+=6;NFSU2_TR(0x54ca48);
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
B54ca4a:{NFSU2_TR(0x54ca4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8730ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54ca50:{NFSU2_TR(0x54ca50);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd25ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B54ca56:{NFSU2_TR(0x54ca56);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8879ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54ca5d:{NFSU2_TR(0x54ca5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54ca5e:{NFSU2_TR(0x54ca5e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54ca60:L54ca60:{c.instructions+=5;NFSU2_TR(0x54ca60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ca61:{NFSU2_TR(0x54ca61);
__builtin_memmove((R+24),(R+4),4);
}
B54ca63:{NFSU2_TR(0x54ca63);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd25ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54ca69:{NFSU2_TR(0x54ca69);
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
B54ca6b:{NFSU2_TR(0x54ca6b);
if(r1(R+518)){{goto L54cad1;}}
}
B54ca6d:L54ca6d:{c.instructions+=3;NFSU2_TR(0x54ca6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8730ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ca73:{NFSU2_TR(0x54ca73);
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
B54ca75:{NFSU2_TR(0x54ca75);
if(r1(R+518)){{goto L54cad1;}}
}
B54ca77:L54ca77:{c.instructions+=5;NFSU2_TR(0x54ca77);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd25ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54ca7d:{NFSU2_TR(0x54ca7d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54ca7f:{NFSU2_TR(0x54ca7f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ca80:{NFSU2_TR(0x54ca80);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd24ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54ca86:{NFSU2_TR(0x54ca86);
if(r1(R+518)){{goto L54caa2;}}
}
B54ca88:L54ca88:{c.instructions+=5;NFSU2_TR(0x54ca88);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ca8e:{NFSU2_TR(0x54ca8e);
u8 U[4];
w4(U+0,u32(0x85036cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ca93:{NFSU2_TR(0x54ca93);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B54ca96:{NFSU2_TR(0x54ca96);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54ca9d:{NFSU2_TR(0x54ca9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54caa2ull));
TAIL_STATIC(0x525d10u,525);
}
B54caa2:L54caa2:{c.instructions+=3;NFSU2_TR(0x54caa2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54caa4:{NFSU2_TR(0x54caa4);
__builtin_memmove((R+4),(R+28),4);
}
B54caa6:{NFSU2_TR(0x54caa6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54caabull));
TAIL_STATIC(0x5287a0u,528);
}
B54caab:L54caab:{c.instructions+=3;NFSU2_TR(0x54caab);
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
B54caad:{NFSU2_TR(0x54caad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54caae:{NFSU2_TR(0x54caae);
if(r1(R+518)){{goto L54cad1;}}
}
B54cab0:L54cab0:{c.instructions+=3;NFSU2_TR(0x54cab0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8730ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54cab6:{NFSU2_TR(0x54cab6);
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
B54cab8:{NFSU2_TR(0x54cab8);
if(r1(R+518)){{goto L54cad1;}}
}
B54caba:L54caba:{c.instructions+=5;NFSU2_TR(0x54caba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cabb:{NFSU2_TR(0x54cabb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x37ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B54cabf:{NFSU2_TR(0x54cabf);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B54cac5:{NFSU2_TR(0x54cac5);
u8 U[12];
w4(U+0,u32(u32(u32(0x72d8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B54cacc:{NFSU2_TR(0x54cacc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54cad1ull));
TAIL_STATIC(0x513390u,513);
}
B54cad1:L54cad1:{c.instructions+=2;NFSU2_TR(0x54cad1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54cad2:{NFSU2_TR(0x54cad2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54cae0:L54cae0:{c.instructions+=2;NFSU2_TR(0x54cae0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xd24ull))));
}
B54cae6:{NFSU2_TR(0x54cae6);
TAIL_STATIC(0x541580u,541);
}
B54caf0:L54caf0:{c.instructions+=10;NFSU2_TR(0x54caf0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54caf1:{NFSU2_TR(0x54caf1);
__builtin_memmove((R+20),(R+16),4);
}
B54caf3:{NFSU2_TR(0x54caf3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54caf4:{NFSU2_TR(0x54caf4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54caf5:{NFSU2_TR(0x54caf5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54caf6:{NFSU2_TR(0x54caf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54caf9:{NFSU2_TR(0x54caf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54cafc:{NFSU2_TR(0x54cafc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cafd:{NFSU2_TR(0x54cafd);
__builtin_memmove((R+24),(R+4),4);
}
B54caff:{NFSU2_TR(0x54caff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54cb04ull));
TAIL_STATIC(0x512f10u,512);
}
B54cb04:L54cb04:{c.instructions+=3;NFSU2_TR(0x54cb04);
w4(R+4,u32(0x81cbc0ull));
}
B54cb09:{NFSU2_TR(0x54cb09);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
w1(U+4,u8(0x5ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54cb0d:{NFSU2_TR(0x54cb0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54cb12ull));
TAIL_STATIC(0x4131f0u,413);
}
B54cb12:L54cb12:{c.instructions+=8;NFSU2_TR(0x54cb12);
s1(0x8385b9,u8(0x0ull));
}
B54cb19:{NFSU2_TR(0x54cb19);
s4(0x8385a0,u32(0x0ull));
}
B54cb23:{NFSU2_TR(0x54cb23);
s4(0x8385a4,u32(0x0ull));
}
B54cb2d:{NFSU2_TR(0x54cb2d);
s1(0x8385b8,u8(0x0ull));
}
B54cb34:{NFSU2_TR(0x54cb34);
s4(0x838590,u32(0x0ull));
}
B54cb3e:{NFSU2_TR(0x54cb3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8738ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B54cb44:{NFSU2_TR(0x54cb44);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54cb46:{NFSU2_TR(0x54cb46);
if(r1(R+518)){{goto L54cbed;}}
}
B54cb4c:L54cb4c:{c.instructions+=3;NFSU2_TR(0x54cb4c);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54cb4f:{NFSU2_TR(0x54cb4f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54cb51:{NFSU2_TR(0x54cb51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54cb5a;}}
}
B54cb53:L54cb53:{c.instructions+=1;NFSU2_TR(0x54cb53);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8868ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54cb5a:L54cb5a:{c.instructions+=3;NFSU2_TR(0x54cb5a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cb5b:{NFSU2_TR(0x54cb5b);
__builtin_memmove((R+4),(R+12),4);
}
B54cb5d:{NFSU2_TR(0x54cb5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54cb62ull));
TAIL_STATIC(0x4ffde0u,4ff);
}
B54cb62:L54cb62:{c.instructions+=2;NFSU2_TR(0x54cb62);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54cb64:{NFSU2_TR(0x54cb64);
if(r1(R+518)){{goto L54cbb4;}}
}
B54cb66:L54cb66:{c.instructions+=5;NFSU2_TR(0x54cb66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7af8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54cb6c:{NFSU2_TR(0x54cb6c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B54cb72:{NFSU2_TR(0x54cb72);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cb73:{NFSU2_TR(0x54cb73);
u8 U[12];
w4(U+0,u32(u32(u32(0x72d8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B54cb7a:{NFSU2_TR(0x54cb7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54cb7full));
TAIL_STATIC(0x513390u,513);
}
B54cb7f:L54cb7f:{c.instructions+=5;NFSU2_TR(0x54cb7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8738ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54cb85:{NFSU2_TR(0x54cb85);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54cb88:{NFSU2_TR(0x54cb88);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cb89:{NFSU2_TR(0x54cb89);
__builtin_memmove((R+4),(R+24),4);
}
B54cb8b:{NFSU2_TR(0x54cb8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54cb90ull));
TAIL_STATIC(0x541420u,541);
}
B54cb90:L54cb90:{c.instructions+=4;NFSU2_TR(0x54cb90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8738ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54cb96:{NFSU2_TR(0x54cb96);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B54cb99:{NFSU2_TR(0x54cb99);
u8 U[4];
w4(U+0,u32(0x79afe0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cb9e:{NFSU2_TR(0x54cb9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54cba3ull));
TAIL_STATIC(0x43db50u,43d);
}
B54cba3:L54cba3:{c.instructions+=3;NFSU2_TR(0x54cba3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54cba6:{NFSU2_TR(0x54cba6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54cba8:{NFSU2_TR(0x54cba8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54cbb4;}}
}
B54cbaa:L54cbaa:{c.instructions+=1;NFSU2_TR(0x54cbaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8738ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54cbb4:L54cbb4:{c.instructions+=3;NFSU2_TR(0x54cbb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8738ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54cbba:{NFSU2_TR(0x54cbba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54cbbc:{NFSU2_TR(0x54cbbc);
if(r1(R+518)){{goto L54cbed;}}
}
B54cbbe:L54cbbe:{c.instructions+=3;NFSU2_TR(0x54cbbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B54cbc1:{NFSU2_TR(0x54cbc1);
u8 U[4];
w4(U+0,u32(0x79aff0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cbc6:{NFSU2_TR(0x54cbc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54cbcbull));
TAIL_STATIC(0x43db50u,43d);
}
B54cbcb:L54cbcb:{c.instructions+=3;NFSU2_TR(0x54cbcb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54cbce:{NFSU2_TR(0x54cbce);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54cbd0:{NFSU2_TR(0x54cbd0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54cbed;}}
}
B54cbd2:L54cbd2:{c.instructions+=2;NFSU2_TR(0x54cbd2);
u8 U[4];
w4(U+0,u32(0x79afe0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cbd7:{NFSU2_TR(0x54cbd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54cbdcull));
TAIL_STATIC(0x43db50u,43d);
}
B54cbdc:L54cbdc:{c.instructions+=2;NFSU2_TR(0x54cbdc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cbdd:{NFSU2_TR(0x54cbdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54cbe2ull));
TAIL_STATIC(0x4ffc90u,4ff);
}
B54cbe2:L54cbe2:{c.instructions+=4;NFSU2_TR(0x54cbe2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B54cbe5:{NFSU2_TR(0x54cbe5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cbe6:{NFSU2_TR(0x54cbe6);
__builtin_memmove((R+4),(R+24),4);
}
B54cbe8:{NFSU2_TR(0x54cbe8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54cbedull));
TAIL_STATIC(0x5410e0u,541);
}
B54cbed:L54cbed:{c.instructions+=16;NFSU2_TR(0x54cbed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8734ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54cbf3:{NFSU2_TR(0x54cbf3);
__builtin_memmove((R+4),gp(0x8900ac),4);
}
B54cbf9:{NFSU2_TR(0x54cbf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54cbfc:{NFSU2_TR(0x54cbfc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8744ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54cc03:{NFSU2_TR(0x54cc03);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54cc06:{NFSU2_TR(0x54cc06);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54cc09:{NFSU2_TR(0x54cc09);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54cc0c:{NFSU2_TR(0x54cc0c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B54cc0e:{NFSU2_TR(0x54cc0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8750ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54cc14:{NFSU2_TR(0x54cc14);
{u32 ea_=u32(r4(R+24)+u32(34644u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B54cc1a:{NFSU2_TR(0x54cc1a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cc1b:{NFSU2_TR(0x54cc1b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4210ull))));
__builtin_memmove((R+4),(U+0),4);
}
B54cc21:{NFSU2_TR(0x54cc21);
{u32 ea_=u32(r4(R+24)+u32(34648u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B54cc27:{NFSU2_TR(0x54cc27);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B54cc2e:{NFSU2_TR(0x54cc2e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8760ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B54cc35:{NFSU2_TR(0x54cc35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54cc3aull));
TAIL_STATIC(0x533750u,533);
}
B54cc3a:L54cc3a:{c.instructions+=3;NFSU2_TR(0x54cc3a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cc3b:{NFSU2_TR(0x54cc3b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5d20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B54cc41:{NFSU2_TR(0x54cc41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54cc46ull));
TAIL_STATIC(0x529860u,529);
}
B54cc46:L54cc46:{c.instructions+=5;NFSU2_TR(0x54cc46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc08ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54cc4c:{NFSU2_TR(0x54cc4c);
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
B54cc4e:{NFSU2_TR(0x54cc4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8730ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54cc58:{NFSU2_TR(0x54cc58);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd25ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54cc5f:{NFSU2_TR(0x54cc5f);
if(r1(R+518)){{goto L54cc8f;}}
}
B54cc61:L54cc61:{c.instructions+=4;NFSU2_TR(0x54cc61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc08ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54cc67:{NFSU2_TR(0x54cc67);
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
B54cc69:{NFSU2_TR(0x54cc69);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc00ull))));
__builtin_memmove((R+4),(U+0),4);
}
B54cc6f:{NFSU2_TR(0x54cc6f);
if(r1(R+518)){{goto L54cc8f;}}
}
B54cc71:L54cc71:{c.instructions+=6;NFSU2_TR(0x54cc71);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54cc74:{NFSU2_TR(0x54cc74);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54cc77:{NFSU2_TR(0x54cc77);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54cc79:{NFSU2_TR(0x54cc79);
__builtin_memmove((R+0),(R+518),1);
}
B54cc7c:{NFSU2_TR(0x54cc7c);
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
B54cc7e:{NFSU2_TR(0x54cc7e);
if(r1(R+518)){{goto L54cc8f;}}
}
B54cc80:L54cc80:{c.instructions+=2;NFSU2_TR(0x54cc80);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11cull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54cc8a:{NFSU2_TR(0x54cc8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54cc8full));
TAIL_STATIC(0x533d20u,533);
}
B54cc8f:L54cc8f:{c.instructions+=5;NFSU2_TR(0x54cc8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54cc90:{NFSU2_TR(0x54cc90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54cc91:{NFSU2_TR(0x54cc91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54cc92:{NFSU2_TR(0x54cc92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54cc93:{NFSU2_TR(0x54cc93);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54cca0:L54cca0:{c.instructions+=19;NFSU2_TR(0x54cca0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cca1:{NFSU2_TR(0x54cca1);
__builtin_memmove((R+20),(R+16),4);
}
B54cca3:{NFSU2_TR(0x54cca3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B54cca6:{NFSU2_TR(0x54cca6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cca8:{NFSU2_TR(0x54cca8);
u8 U[4];
w4(U+0,u32(0x777748ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ccad:{NFSU2_TR(0x54ccad);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ccb3:{NFSU2_TR(0x54ccb3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ccb4:{NFSU2_TR(0x54ccb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54ccbb:{NFSU2_TR(0x54ccbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B54ccbe:{NFSU2_TR(0x54ccbe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ccbf:{NFSU2_TR(0x54ccbf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ccc0:{NFSU2_TR(0x54ccc0);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B54ccc2:{NFSU2_TR(0x54ccc2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ccc3:{NFSU2_TR(0x54ccc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54ccc6:{NFSU2_TR(0x54ccc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcf0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54cccc:{NFSU2_TR(0x54cccc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54cccf:{NFSU2_TR(0x54cccf);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54ccd1:{NFSU2_TR(0x54ccd1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54ccd5:{NFSU2_TR(0x54ccd5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L54cd0e;}}
}
B54ccd7:L54ccd7:{c.instructions+=3;NFSU2_TR(0x54ccd7);
__builtin_memmove((R+12),(R+4),4);
}
B54ccd9:{NFSU2_TR(0x54ccd9);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xbd0ull))));
}
B54ccdf:{NFSU2_TR(0x54ccdf);
}
B54cce0:L54cce0:{c.instructions+=5;NFSU2_TR(0x54cce0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B54cce2:{NFSU2_TR(0x54cce2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cce4:{NFSU2_TR(0x54cce4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cce5:{NFSU2_TR(0x54cce5);
__builtin_memmove((R+4),(R+12),4);
}
B54cce7:{NFSU2_TR(0x54cce7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ccecull));
TAIL_STATIC(0x515db0u,515);
}
B54ccec:L54ccec:{c.instructions+=9;NFSU2_TR(0x54ccec);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ccf0:{NFSU2_TR(0x54ccf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B54ccf6:{NFSU2_TR(0x54ccf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ccf9:{NFSU2_TR(0x54ccf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54ccfc:{NFSU2_TR(0x54ccfc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B54ccfd:{NFSU2_TR(0x54ccfd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B54cd00:{NFSU2_TR(0x54cd00);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x224ull))));
}
B54cd06:{NFSU2_TR(0x54cd06);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B54cd08:{NFSU2_TR(0x54cd08);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54cce0u);}goto L54cce0;}}
}
B54cd0a:L54cd0a:{c.instructions+=1;NFSU2_TR(0x54cd0a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54cd0e:L54cd0e:{c.instructions+=1;NFSU2_TR(0x54cd0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54cd13ull));
TAIL_STATIC(0x541b40u,541);
}
B54cd13:L54cd13:{c.instructions+=10;NFSU2_TR(0x54cd13);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B54cd17:{NFSU2_TR(0x54cd17);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54cd1b:{NFSU2_TR(0x54cd1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54cd1f:{NFSU2_TR(0x54cd1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54cd23:{NFSU2_TR(0x54cd23);
__builtin_memmove((R+8),gp(0x890118),4);
}
B54cd29:{NFSU2_TR(0x54cd29);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54cd2c:{NFSU2_TR(0x54cd2c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B54cd2e:{NFSU2_TR(0x54cd2e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54cd30:{NFSU2_TR(0x54cd30);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54cd38:{NFSU2_TR(0x54cd38);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L54cda0;}}
}
B54cd3a:L54cd3a:{c.instructions+=2;NFSU2_TR(0x54cd3a);
w4(R+28,u32(0x85036cull));
}
B54cd3f:{NFSU2_TR(0x54cd3f);
}
B54cd40:L54cd40:{c.instructions+=2;NFSU2_TR(0x54cd40);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cd42:{NFSU2_TR(0x54cd42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54cd47ull));
TAIL_STATIC(0x575620u,575);
}
B54cd47:L54cd47:{c.instructions+=3;NFSU2_TR(0x54cd47);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54cd4a:{NFSU2_TR(0x54cd4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54cd4c:{NFSU2_TR(0x54cd4c);
if(r1(R+518)){{goto L54cd53;}}
}
B54cd4e:L54cd4e:{c.instructions+=2;NFSU2_TR(0x54cd4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54cd51:{NFSU2_TR(0x54cd51);
{goto L54cd55;}
}
B54cd53:L54cd53:{c.instructions+=1;NFSU2_TR(0x54cd53);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54cd55:L54cd55:{c.instructions+=9;NFSU2_TR(0x54cd55);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54cd59:{NFSU2_TR(0x54cd59);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B54cd5b:{NFSU2_TR(0x54cd5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54cd5f:{NFSU2_TR(0x54cd5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54cd62:{NFSU2_TR(0x54cd62);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54cd66:{NFSU2_TR(0x54cd66);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B54cd68:{NFSU2_TR(0x54cd68);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B54cd6d:{NFSU2_TR(0x54cd6d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54cd6f:{NFSU2_TR(0x54cd6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54cd7a;}}
}
B54cd71:L54cd71:{c.instructions+=3;NFSU2_TR(0x54cd71);
__builtin_memmove((R+0),gp(0x890104),4);
}
B54cd76:{NFSU2_TR(0x54cd76);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54cd78:{NFSU2_TR(0x54cd78);
if(r1(R+518)){{goto L54cd88;}}
}
B54cd7a:L54cd7a:{c.instructions+=3;NFSU2_TR(0x54cd7a);
u8 U[4];
w4(U+0,u32(0x5032f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cd7f:{NFSU2_TR(0x54cd7f);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54cd83:{NFSU2_TR(0x54cd83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54cd88ull));
TAIL_STATIC(0x43e650u,43e);
}
B54cd88:L54cd88:{c.instructions+=6;NFSU2_TR(0x54cd88);
__builtin_memmove((R+8),gp(0x890118),4);
}
B54cd8e:{NFSU2_TR(0x54cd8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54cd91:{NFSU2_TR(0x54cd91);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B54cd92:{NFSU2_TR(0x54cd92);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x224ull))));
}
B54cd98:{NFSU2_TR(0x54cd98);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B54cd9a:{NFSU2_TR(0x54cd9a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54cd40u);}goto L54cd40;}}
}
B54cd9c:L54cd9c:{c.instructions+=1;NFSU2_TR(0x54cd9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54cda0:L54cda0:{c.instructions+=10;NFSU2_TR(0x54cda0);
__builtin_memmove((R+4),gp(0x89e7cc),4);
}
B54cda6:{NFSU2_TR(0x54cda6);
__builtin_memmove((R+8),gp(0x89e7c8),4);
}
B54cdac:{NFSU2_TR(0x54cdac);
__builtin_memmove((R+12),gp(0x89e7c4),4);
}
B54cdb2:{NFSU2_TR(0x54cdb2);
__builtin_memmove((R+28),gp(0x89e7c0),4);
}
B54cdb8:{NFSU2_TR(0x54cdb8);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B54cdba:{NFSU2_TR(0x54cdba);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B54cdbc:{NFSU2_TR(0x54cdbc);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B54cdbe:{NFSU2_TR(0x54cdbe);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B54cdc0:{NFSU2_TR(0x54cdc0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54cdc2:{NFSU2_TR(0x54cdc2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L54ce09;}}
}
B54cdc4:L54cdc4:{c.instructions+=3;NFSU2_TR(0x54cdc4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54cdc8:{NFSU2_TR(0x54cdc8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xcd8ull))));
}
B54cdce:{NFSU2_TR(0x54cdce);
__builtin_memmove((R+28),(R+28),4);
}
B54cdd0:L54cdd0:{c.instructions+=3;NFSU2_TR(0x54cdd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cdd1:{NFSU2_TR(0x54cdd1);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54cdd5:{NFSU2_TR(0x54cdd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54cddaull));
TAIL_STATIC(0x43be60u,43b);
}
B54cdda:L54cdda:{c.instructions+=13;NFSU2_TR(0x54cdda);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54cddd:{NFSU2_TR(0x54cddd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B54cddf:{NFSU2_TR(0x54cddf);
__builtin_memmove((R+4),gp(0x89e7cc),4);
}
B54cde5:{NFSU2_TR(0x54cde5);
__builtin_memmove((R+8),gp(0x89e7c8),4);
}
B54cdeb:{NFSU2_TR(0x54cdeb);
__builtin_memmove((R+12),gp(0x89e7c4),4);
}
B54cdf1:{NFSU2_TR(0x54cdf1);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B54cdf3:{NFSU2_TR(0x54cdf3);
__builtin_memmove((R+4),gp(0x89e7c0),4);
}
B54cdf9:{NFSU2_TR(0x54cdf9);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B54cdfb:{NFSU2_TR(0x54cdfb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B54cdfc:{NFSU2_TR(0x54cdfc);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B54cdfe:{NFSU2_TR(0x54cdfe);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B54ce01:{NFSU2_TR(0x54ce01);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B54ce03:{NFSU2_TR(0x54ce03);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54cdd0u);}goto L54cdd0;}}
}
B54ce05:L54ce05:{c.instructions+=1;NFSU2_TR(0x54ce05);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ce09:L54ce09:{c.instructions+=4;NFSU2_TR(0x54ce09);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54ce0d:{NFSU2_TR(0x54ce0d);
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
B54ce0f:{NFSU2_TR(0x54ce0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B54ce17:{NFSU2_TR(0x54ce17);
if(r1(R+518)){{goto L54ce41;}}
}
B54ce19:L54ce19:{c.instructions+=1;NFSU2_TR(0x54ce19);
__builtin_memmove((R+16),(R+16),4);
}
B54ce20:L54ce20:{c.instructions+=7;NFSU2_TR(0x54ce20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B54ce22:{NFSU2_TR(0x54ce22);
__builtin_memmove((R+8),(R+0),4);
}
B54ce24:{NFSU2_TR(0x54ce24);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ce27:{NFSU2_TR(0x54ce27);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B54ce29:{NFSU2_TR(0x54ce29);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ce2a:{NFSU2_TR(0x54ce2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54ce2d:{NFSU2_TR(0x54ce2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ce32ull));
TAIL_STATIC(0x575630u,575);
}
B54ce32:L54ce32:{c.instructions+=5;NFSU2_TR(0x54ce32);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ce36:{NFSU2_TR(0x54ce36);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B54ce3a:{NFSU2_TR(0x54ce3a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54ce3d:{NFSU2_TR(0x54ce3d);
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
B54ce3f:{NFSU2_TR(0x54ce3f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54ce20u);}goto L54ce20;}}
}
B54ce41:L54ce41:{c.instructions+=8;NFSU2_TR(0x54ce41);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54ce45:{NFSU2_TR(0x54ce45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54ce46:{NFSU2_TR(0x54ce46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54ce47:{NFSU2_TR(0x54ce47);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54ce4e:{NFSU2_TR(0x54ce4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54ce4f:{NFSU2_TR(0x54ce4f);
__builtin_memmove((R+16),(R+20),4);
}
B54ce51:{NFSU2_TR(0x54ce51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54ce52:{NFSU2_TR(0x54ce52);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54ce60:L54ce60:{c.instructions+=8;NFSU2_TR(0x54ce60);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ce61:{NFSU2_TR(0x54ce61);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ce62:{NFSU2_TR(0x54ce62);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B54ce66:{NFSU2_TR(0x54ce66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ce69:{NFSU2_TR(0x54ce69);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x1c00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54ce6e:{NFSU2_TR(0x54ce6e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ce6f:{NFSU2_TR(0x54ce6f);
__builtin_memmove((R+28),(R+4),4);
}
B54ce71:{NFSU2_TR(0x54ce71);
if(r1(R+518)){{goto L54ce7d;}}
}
B54ce73:L54ce73:{c.instructions+=3;NFSU2_TR(0x54ce73);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x2000000ull))));
}
B54ce78:{NFSU2_TR(0x54ce78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54ce7b:{NFSU2_TR(0x54ce7b);
{goto L54ce8e;}
}
B54ce7d:L54ce7d:{c.instructions+=4;NFSU2_TR(0x54ce7d);
__builtin_memmove((R+4),gp(0x7f7c8c),4);
}
B54ce83:{NFSU2_TR(0x54ce83);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xfdffffffull))));
}
B54ce89:{NFSU2_TR(0x54ce89);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
}
B54ce8b:{NFSU2_TR(0x54ce8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54ce8e:L54ce8e:{c.instructions+=11;NFSU2_TR(0x54ce8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54ce91:{NFSU2_TR(0x54ce91);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ce92:{NFSU2_TR(0x54ce92);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ce93:{NFSU2_TR(0x54ce93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54ce96:{NFSU2_TR(0x54ce96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54ce99:{NFSU2_TR(0x54ce99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B54ce9c:{NFSU2_TR(0x54ce9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B54ce9f:{NFSU2_TR(0x54ce9f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B54cea1:{NFSU2_TR(0x54cea1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54cea5:{NFSU2_TR(0x54cea5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54cea8:{NFSU2_TR(0x54cea8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L54ceb1;}}
}
B54ceaa:L54ceaa:{c.instructions+=1;NFSU2_TR(0x54ceaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54ceb1:L54ceb1:{c.instructions+=4;NFSU2_TR(0x54ceb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ceb4:{NFSU2_TR(0x54ceb4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B54ceb6:{NFSU2_TR(0x54ceb6);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B54ceb9:{NFSU2_TR(0x54ceb9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L54cfd5;}}
}
B54cebf:L54cebf:{c.instructions+=2;NFSU2_TR(0x54cebf);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54cec1:{NFSU2_TR(0x54cec1);
if(r1(R+518)){TAIL_STATIC(0x54d08fu,54d);}
}
B54cec7:L54cec7:{c.instructions+=3;NFSU2_TR(0x54cec7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54ceca:{NFSU2_TR(0x54ceca);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54cecc:{NFSU2_TR(0x54cecc);
if(r1(R+518)){{goto L54cf36;}}
}
B54cece:L54cece:{c.instructions+=4;NFSU2_TR(0x54cece);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cecf:{NFSU2_TR(0x54cecf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ced0:{NFSU2_TR(0x54ced0);
__builtin_memmove((R+4),(R+28),4);
}
B54ced2:{NFSU2_TR(0x54ced2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ced7ull));
TAIL_STATIC(0x541db0u,541);
}
B54ced7:L54ced7:{c.instructions+=7;NFSU2_TR(0x54ced7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ceda:{NFSU2_TR(0x54ceda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54cedd:{NFSU2_TR(0x54cedd);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B54cedf:{NFSU2_TR(0x54cedf);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54cee1:{NFSU2_TR(0x54cee1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54cee5:{NFSU2_TR(0x54cee5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54ceec:{NFSU2_TR(0x54ceec);
if(r1(R+518)){{goto L54cf05;}}
}
B54ceee:L54ceee:{c.instructions+=9;NFSU2_TR(0x54ceee);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54cef2:{NFSU2_TR(0x54cef2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54cef5:{NFSU2_TR(0x54cef5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cef6:{NFSU2_TR(0x54cef6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cef7:{NFSU2_TR(0x54cef7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cef8:{NFSU2_TR(0x54cef8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cef9:{NFSU2_TR(0x54cef9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cefa:{NFSU2_TR(0x54cefa);
__builtin_memmove((R+4),(R+28),4);
}
B54cefc:{NFSU2_TR(0x54cefc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54cf01ull));
TAIL_STATIC(0x534c70u,534);
}
B54cf01:L54cf01:{c.instructions+=1;NFSU2_TR(0x54cf01);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54cf05:L54cf05:{c.instructions+=4;NFSU2_TR(0x54cf05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54cf08:{NFSU2_TR(0x54cf08);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54cf0a:{NFSU2_TR(0x54cf0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54cf0d:{NFSU2_TR(0x54cf0d);
if(r1(R+518)){{goto L54cf1a;}}
}
B54cf0f:L54cf0f:{c.instructions+=2;NFSU2_TR(0x54cf0f);
__builtin_memmove((R+4),(R+20),4);
}
B54cf11:{NFSU2_TR(0x54cf11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54cf16ull));
TAIL_STATIC(0x517720u,517);
}
B54cf16:L54cf16:{c.instructions+=1;NFSU2_TR(0x54cf16);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54cf1a:L54cf1a:{c.instructions+=4;NFSU2_TR(0x54cf1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54cf1d:{NFSU2_TR(0x54cf1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54cf1f:{NFSU2_TR(0x54cf1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54cf22:{NFSU2_TR(0x54cf22);
if(r1(R+518)){TAIL_STATIC(0x54d08bu,54d);}
}
B54cf28:L54cf28:{c.instructions+=7;NFSU2_TR(0x54cf28);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54cf2b:{NFSU2_TR(0x54cf2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cf2c:{NFSU2_TR(0x54cf2c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cf2e:{NFSU2_TR(0x54cf2e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cf2f:{NFSU2_TR(0x54cf2f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cf30:{NFSU2_TR(0x54cf30);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cf31:{NFSU2_TR(0x54cf31);
TAIL_STATIC(0x54d084u,54d);
}
B54cf36:L54cf36:{c.instructions+=4;NFSU2_TR(0x54cf36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54cf39:{NFSU2_TR(0x54cf39);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ull))));
}
B54cf3c:{NFSU2_TR(0x54cf3c);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B54cf3f:{NFSU2_TR(0x54cf3f);
if(r1(R+518)){{goto L54cfaf;}}
}
B54cf41:L54cf41:{c.instructions+=2;NFSU2_TR(0x54cf41);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B54cf42:{NFSU2_TR(0x54cf42);
if(r1(R+518)){{goto L54cf5c;}}
}
B54cf44:L54cf44:{c.instructions+=2;NFSU2_TR(0x54cf44);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B54cf45:{NFSU2_TR(0x54cf45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x54d08fu,54d);}
}
B54cf4b:L54cf4b:{c.instructions+=2;NFSU2_TR(0x54cf4b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54cf4d:{NFSU2_TR(0x54cf4d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L54cfa3;}}
}
B54cf4f:L54cf4f:{c.instructions+=5;NFSU2_TR(0x54cf4f);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B54cf50:{NFSU2_TR(0x54cf50);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+12))));
}
B54cf52:{NFSU2_TR(0x54cf52);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x54cf52);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x54cf52);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B54cf54:{NFSU2_TR(0x54cf54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54cf57:{NFSU2_TR(0x54cf57);
TAIL_STATIC(0x54d08fu,54d);
}
B54cf5c:L54cf5c:{c.instructions+=2;NFSU2_TR(0x54cf5c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54cf5e:{NFSU2_TR(0x54cf5e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L54cfa3;}}
}
B54cf60:L54cf60:{c.instructions+=3;NFSU2_TR(0x54cf60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54cf63:{NFSU2_TR(0x54cf63);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54cf65:{NFSU2_TR(0x54cf65);
if(r1(R+518)){{goto L54cf76;}}
}
B54cf67:L54cf67:{c.instructions+=8;NFSU2_TR(0x54cf67);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54cf6a:{NFSU2_TR(0x54cf6a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cf6b:{NFSU2_TR(0x54cf6b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cf6c:{NFSU2_TR(0x54cf6c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cf6d:{NFSU2_TR(0x54cf6d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cf6e:{NFSU2_TR(0x54cf6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cf6f:{NFSU2_TR(0x54cf6f);
__builtin_memmove((R+4),(R+28),4);
}
B54cf71:{NFSU2_TR(0x54cf71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54cf76ull));
TAIL_STATIC(0x534c70u,534);
}
B54cf76:L54cf76:{c.instructions+=7;NFSU2_TR(0x54cf76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54cf79:{NFSU2_TR(0x54cf79);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B54cf7a:{NFSU2_TR(0x54cf7a);
u8 U[64];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x54cf7a);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x54cf7a);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B54cf7d:{NFSU2_TR(0x54cf7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54cf80:{NFSU2_TR(0x54cf80);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54cf82:{NFSU2_TR(0x54cf82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54cf85:{NFSU2_TR(0x54cf85);
if(r1(R+518)){{goto L54cf97;}}
}
B54cf87:L54cf87:{c.instructions+=8;NFSU2_TR(0x54cf87);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54cf8a:{NFSU2_TR(0x54cf8a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cf8b:{NFSU2_TR(0x54cf8b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cf8d:{NFSU2_TR(0x54cf8d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cf8e:{NFSU2_TR(0x54cf8e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cf8f:{NFSU2_TR(0x54cf8f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cf90:{NFSU2_TR(0x54cf90);
__builtin_memmove((R+4),(R+28),4);
}
B54cf92:{NFSU2_TR(0x54cf92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54cf97ull));
TAIL_STATIC(0x534c70u,534);
}
B54cf97:L54cf97:{c.instructions+=2;NFSU2_TR(0x54cf97);
__builtin_memmove((R+4),(R+20),4);
}
B54cf99:{NFSU2_TR(0x54cf99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54cf9eull));
TAIL_STATIC(0x517720u,517);
}
B54cf9e:L54cf9e:{c.instructions+=1;NFSU2_TR(0x54cf9e);
TAIL_STATIC(0x54d08bu,54d);
}
B54cfa3:L54cfa3:{c.instructions+=2;NFSU2_TR(0x54cfa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54cfaa:{NFSU2_TR(0x54cfaa);
TAIL_STATIC(0x54d08fu,54d);
}
B54cfaf:L54cfaf:{c.instructions+=3;NFSU2_TR(0x54cfaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54cfb2:{NFSU2_TR(0x54cfb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54cfb4:{NFSU2_TR(0x54cfb4);
if(r1(R+518)){{goto L54cfc9;}}
}
B54cfb6:L54cfb6:{c.instructions+=8;NFSU2_TR(0x54cfb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54cfb9:{NFSU2_TR(0x54cfb9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cfba:{NFSU2_TR(0x54cfba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cfbb:{NFSU2_TR(0x54cfbb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cfbc:{NFSU2_TR(0x54cfbc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cfbd:{NFSU2_TR(0x54cfbd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54cfbe:{NFSU2_TR(0x54cfbe);
__builtin_memmove((R+4),(R+28),4);
}
B54cfc0:{NFSU2_TR(0x54cfc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54cfc5ull));
TAIL_STATIC(0x534c70u,534);
}
B54cfc5:L54cfc5:{c.instructions+=1;NFSU2_TR(0x54cfc5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54cfc9:L54cfc9:{c.instructions+=4;NFSU2_TR(0x54cfc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54cfcc:{NFSU2_TR(0x54cfcc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B54cfcd:{NFSU2_TR(0x54cfcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54cfd0:{NFSU2_TR(0x54cfd0);
TAIL_STATIC(0x54d08fu,54d);
}
B54cfd5:L54cfd5:{c.instructions+=2;NFSU2_TR(0x54cfd5);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54cfd7:{NFSU2_TR(0x54cfd7);
if(r1(R+518)){TAIL_STATIC(0x54d08fu,54d);}
}
B54cfdd:L54cfdd:{c.instructions+=3;NFSU2_TR(0x54cfdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54cfe0:{NFSU2_TR(0x54cfe0);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54cfe2:{NFSU2_TR(0x54cfe2);
if(r1(R+518)){TAIL_STATIC(0x54d08fu,54d);}
}
B54cfe8:L54cfe8:{c.instructions+=4;NFSU2_TR(0x54cfe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54cfeb:{NFSU2_TR(0x54cfeb);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ull))));
}
B54cfee:{NFSU2_TR(0x54cfee);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B54cff1:{NFSU2_TR(0x54cff1);
if(r1(R+518)){TAIL_STATIC(0x54d07cu,54d);}
}
B54cff7:L54cff7:{c.instructions+=2;NFSU2_TR(0x54cff7);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B54cff8:{NFSU2_TR(0x54cff8);
if(r1(R+518)){TAIL_STATIC(0x54d051u,54d);}
}
B54cffa:L54cffa:{c.instructions+=2;NFSU2_TR(0x54cffa);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B54cffb:{NFSU2_TR(0x54cffb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x54d08fu,54d);}
TAIL_STATIC(0x54d001u,54d);
}
XIT:NFSU2_TR_EXIT(0x54c,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
