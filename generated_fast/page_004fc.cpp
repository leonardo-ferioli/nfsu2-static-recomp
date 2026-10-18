#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_497(u8* __restrict R,Cpu& c);
u32 body_498(u8* __restrict R,Cpu& c);
u32 body_49e(u8* __restrict R,Cpu& c);
u32 body_4a3(u8* __restrict R,Cpu& c);
u32 body_4b2(u8* __restrict R,Cpu& c);
u32 body_4ba(u8* __restrict R,Cpu& c);
u32 body_4bb(u8* __restrict R,Cpu& c);
u32 body_4d1(u8* __restrict R,Cpu& c);
u32 body_4d8(u8* __restrict R,Cpu& c);
u32 body_4e2(u8* __restrict R,Cpu& c);
u32 body_4ec(u8* __restrict R,Cpu& c);
u32 body_4ee(u8* __restrict R,Cpu& c);
u32 body_4ef(u8* __restrict R,Cpu& c);
u32 body_4f1(u8* __restrict R,Cpu& c);
u32 body_4f9(u8* __restrict R,Cpu& c);
u32 body_4fa(u8* __restrict R,Cpu& c);
u32 body_4fd(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_50e(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_516(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52d(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_53f(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_552(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_584(u8* __restrict R,Cpu& c);
u32 body_58a(u8* __restrict R,Cpu& c);
u32 body_58f(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4fc,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4fc,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4fc(u8* __restrict R,Cpu& c);
u32 page_4fc(Cpu& c){return body_4fc(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4fc(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4fc000:goto L4fc000;
case 0x4fc00a:c.instructions+=1;goto B4fc00a;
case 0x4fc00f:goto L4fc00f;
case 0x4fc011:c.instructions+=3;goto B4fc011;
case 0x4fc013:c.instructions+=2;goto B4fc013;
case 0x4fc01b:c.instructions+=1;goto B4fc01b;
case 0x4fc01d:goto L4fc01d;
case 0x4fc020:goto L4fc020;
case 0x4fc022:c.instructions+=5;goto B4fc022;
case 0x4fc025:c.instructions+=4;goto B4fc025;
case 0x4fc027:c.instructions+=3;goto B4fc027;
case 0x4fc028:c.instructions+=2;goto B4fc028;
case 0x4fc02b:c.instructions+=1;goto B4fc02b;
case 0x4fc030:goto L4fc030;
case 0x4fc032:c.instructions+=3;goto B4fc032;
case 0x4fc035:c.instructions+=2;goto B4fc035;
case 0x4fc037:c.instructions+=1;goto B4fc037;
case 0x4fc039:goto L4fc039;
case 0x4fc03d:c.instructions+=5;goto B4fc03d;
case 0x4fc03e:c.instructions+=4;goto B4fc03e;
case 0x4fc03f:c.instructions+=3;goto B4fc03f;
case 0x4fc046:c.instructions+=2;goto B4fc046;
case 0x4fc049:c.instructions+=1;goto B4fc049;
case 0x4fc050:goto L4fc050;
case 0x4fc058:c.instructions+=1;goto B4fc058;
case 0x4fc05a:goto L4fc05a;
case 0x4fc05f:c.instructions+=3;goto B4fc05f;
case 0x4fc061:c.instructions+=2;goto B4fc061;
case 0x4fc06b:c.instructions+=1;goto B4fc06b;
case 0x4fc06d:goto L4fc06d;
case 0x4fc06e:c.instructions+=2;goto B4fc06e;
case 0x4fc06f:c.instructions+=1;goto B4fc06f;
case 0x4fc074:goto L4fc074;
case 0x4fc079:c.instructions+=5;goto B4fc079;
case 0x4fc07f:c.instructions+=4;goto B4fc07f;
case 0x4fc080:c.instructions+=3;goto B4fc080;
case 0x4fc082:c.instructions+=2;goto B4fc082;
case 0x4fc084:c.instructions+=1;goto B4fc084;
case 0x4fc089:goto L4fc089;
case 0x4fc08b:c.instructions+=5;goto B4fc08b;
case 0x4fc08e:c.instructions+=4;goto B4fc08e;
case 0x4fc092:c.instructions+=3;goto B4fc092;
case 0x4fc093:c.instructions+=2;goto B4fc093;
case 0x4fc094:c.instructions+=1;goto B4fc094;
case 0x4fc099:goto L4fc099;
case 0x4fc09c:c.instructions+=2;goto B4fc09c;
case 0x4fc09d:c.instructions+=1;goto B4fc09d;
case 0x4fc09e:goto L4fc09e;
case 0x4fc0b0:goto L4fc0b0;
case 0x4fc0b2:c.instructions+=7;goto B4fc0b2;
case 0x4fc0b7:c.instructions+=6;goto B4fc0b7;
case 0x4fc0bd:c.instructions+=5;goto B4fc0bd;
case 0x4fc0be:c.instructions+=4;goto B4fc0be;
case 0x4fc0c5:c.instructions+=3;goto B4fc0c5;
case 0x4fc0c6:c.instructions+=2;goto B4fc0c6;
case 0x4fc0cb:c.instructions+=1;goto B4fc0cb;
case 0x4fc0d0:goto L4fc0d0;
case 0x4fc0d3:c.instructions+=4;goto B4fc0d3;
case 0x4fc0d7:c.instructions+=3;goto B4fc0d7;
case 0x4fc0d9:c.instructions+=2;goto B4fc0d9;
case 0x4fc0e1:c.instructions+=1;goto B4fc0e1;
case 0x4fc0e3:goto L4fc0e3;
case 0x4fc0e7:c.instructions+=3;goto B4fc0e7;
case 0x4fc0e8:c.instructions+=2;goto B4fc0e8;
case 0x4fc0ea:c.instructions+=1;goto B4fc0ea;
case 0x4fc0ef:goto L4fc0ef;
case 0x4fc0f3:c.instructions+=3;goto B4fc0f3;
case 0x4fc0fa:c.instructions+=2;goto B4fc0fa;
case 0x4fc0fd:c.instructions+=1;goto B4fc0fd;
case 0x4fc0fe:goto L4fc0fe;
case 0x4fc102:c.instructions+=4;goto B4fc102;
case 0x4fc104:c.instructions+=3;goto B4fc104;
case 0x4fc10b:c.instructions+=2;goto B4fc10b;
case 0x4fc10e:c.instructions+=1;goto B4fc10e;
case 0x4fc110:goto L4fc110;
case 0x4fc112:c.instructions+=7;goto B4fc112;
case 0x4fc117:c.instructions+=6;goto B4fc117;
case 0x4fc11d:c.instructions+=5;goto B4fc11d;
case 0x4fc11e:c.instructions+=4;goto B4fc11e;
case 0x4fc125:c.instructions+=3;goto B4fc125;
case 0x4fc126:c.instructions+=2;goto B4fc126;
case 0x4fc12b:c.instructions+=1;goto B4fc12b;
case 0x4fc130:goto L4fc130;
case 0x4fc133:c.instructions+=4;goto B4fc133;
case 0x4fc137:c.instructions+=3;goto B4fc137;
case 0x4fc139:c.instructions+=2;goto B4fc139;
case 0x4fc141:c.instructions+=1;goto B4fc141;
case 0x4fc143:goto L4fc143;
case 0x4fc147:c.instructions+=3;goto B4fc147;
case 0x4fc148:c.instructions+=2;goto B4fc148;
case 0x4fc14a:c.instructions+=1;goto B4fc14a;
case 0x4fc14f:goto L4fc14f;
case 0x4fc153:c.instructions+=3;goto B4fc153;
case 0x4fc15a:c.instructions+=2;goto B4fc15a;
case 0x4fc15d:c.instructions+=1;goto B4fc15d;
case 0x4fc15e:goto L4fc15e;
case 0x4fc162:c.instructions+=4;goto B4fc162;
case 0x4fc164:c.instructions+=3;goto B4fc164;
case 0x4fc16b:c.instructions+=2;goto B4fc16b;
case 0x4fc16e:c.instructions+=1;goto B4fc16e;
case 0x4fc170:goto L4fc170;
case 0x4fc171:c.instructions+=2;goto B4fc171;
case 0x4fc173:c.instructions+=1;goto B4fc173;
case 0x4fc178:goto L4fc178;
case 0x4fc17d:c.instructions+=1;goto B4fc17d;
case 0x4fc17f:goto L4fc17f;
case 0x4fc180:c.instructions+=1;goto B4fc180;
case 0x4fc185:goto L4fc185;
case 0x4fc188:goto L4fc188;
case 0x4fc18a:c.instructions+=2;goto B4fc18a;
case 0x4fc18b:c.instructions+=1;goto B4fc18b;
case 0x4fc190:goto L4fc190;
case 0x4fc192:c.instructions+=7;goto B4fc192;
case 0x4fc197:c.instructions+=6;goto B4fc197;
case 0x4fc19d:c.instructions+=5;goto B4fc19d;
case 0x4fc19e:c.instructions+=4;goto B4fc19e;
case 0x4fc1a5:c.instructions+=3;goto B4fc1a5;
case 0x4fc1a6:c.instructions+=2;goto B4fc1a6;
case 0x4fc1ab:c.instructions+=1;goto B4fc1ab;
case 0x4fc1b0:goto L4fc1b0;
case 0x4fc1b3:c.instructions+=4;goto B4fc1b3;
case 0x4fc1b7:c.instructions+=3;goto B4fc1b7;
case 0x4fc1b9:c.instructions+=2;goto B4fc1b9;
case 0x4fc1c1:c.instructions+=1;goto B4fc1c1;
case 0x4fc1c3:goto L4fc1c3;
case 0x4fc1c7:c.instructions+=3;goto B4fc1c7;
case 0x4fc1c8:c.instructions+=2;goto B4fc1c8;
case 0x4fc1ca:c.instructions+=1;goto B4fc1ca;
case 0x4fc1cf:goto L4fc1cf;
case 0x4fc1d3:c.instructions+=3;goto B4fc1d3;
case 0x4fc1da:c.instructions+=2;goto B4fc1da;
case 0x4fc1dd:c.instructions+=1;goto B4fc1dd;
case 0x4fc1de:goto L4fc1de;
case 0x4fc1e2:c.instructions+=4;goto B4fc1e2;
case 0x4fc1e4:c.instructions+=3;goto B4fc1e4;
case 0x4fc1eb:c.instructions+=2;goto B4fc1eb;
case 0x4fc1ee:c.instructions+=1;goto B4fc1ee;
case 0x4fc1f0:goto L4fc1f0;
case 0x4fc1f1:c.instructions+=8;goto B4fc1f1;
case 0x4fc1f5:c.instructions+=7;goto B4fc1f5;
case 0x4fc1f6:c.instructions+=6;goto B4fc1f6;
case 0x4fc1f8:c.instructions+=5;goto B4fc1f8;
case 0x4fc1fe:c.instructions+=4;goto B4fc1fe;
case 0x4fc205:c.instructions+=3;goto B4fc205;
case 0x4fc206:c.instructions+=2;goto B4fc206;
case 0x4fc20c:c.instructions+=1;goto B4fc20c;
case 0x4fc20e:goto L4fc20e;
case 0x4fc210:c.instructions+=1;goto B4fc210;
case 0x4fc212:goto L4fc212;
case 0x4fc215:c.instructions+=1;goto B4fc215;
case 0x4fc21b:goto L4fc21b;
case 0x4fc21f:c.instructions+=3;goto B4fc21f;
case 0x4fc224:c.instructions+=2;goto B4fc224;
case 0x4fc225:c.instructions+=1;goto B4fc225;
case 0x4fc22b:goto L4fc22b;
case 0x4fc231:goto L4fc231;
case 0x4fc236:c.instructions+=1;goto B4fc236;
case 0x4fc23c:goto L4fc23c;
case 0x4fc242:goto L4fc242;
case 0x4fc247:c.instructions+=1;goto B4fc247;
case 0x4fc249:goto L4fc249;
case 0x4fc24b:goto L4fc24b;
case 0x4fc250:c.instructions+=1;goto B4fc250;
case 0x4fc256:goto L4fc256;
case 0x4fc25b:c.instructions+=1;goto B4fc25b;
case 0x4fc261:goto L4fc261;
case 0x4fc264:c.instructions+=6;goto B4fc264;
case 0x4fc267:c.instructions+=5;goto B4fc267;
case 0x4fc26f:c.instructions+=4;goto B4fc26f;
case 0x4fc272:c.instructions+=3;goto B4fc272;
case 0x4fc273:c.instructions+=2;goto B4fc273;
case 0x4fc278:c.instructions+=1;goto B4fc278;
case 0x4fc27d:goto L4fc27d;
case 0x4fc280:c.instructions+=5;goto B4fc280;
case 0x4fc281:c.instructions+=4;goto B4fc281;
case 0x4fc282:c.instructions+=3;goto B4fc282;
case 0x4fc283:c.instructions+=2;goto B4fc283;
case 0x4fc284:c.instructions+=1;goto B4fc284;
case 0x4fc287:goto L4fc287;
case 0x4fc28a:c.instructions+=5;goto B4fc28a;
case 0x4fc28c:c.instructions+=4;goto B4fc28c;
case 0x4fc291:c.instructions+=3;goto B4fc291;
case 0x4fc296:c.instructions+=2;goto B4fc296;
case 0x4fc297:c.instructions+=1;goto B4fc297;
case 0x4fc29c:goto L4fc29c;
case 0x4fc29f:c.instructions+=5;goto B4fc29f;
case 0x4fc2a0:c.instructions+=4;goto B4fc2a0;
case 0x4fc2a1:c.instructions+=3;goto B4fc2a1;
case 0x4fc2a2:c.instructions+=2;goto B4fc2a2;
case 0x4fc2a3:c.instructions+=1;goto B4fc2a3;
case 0x4fc2a6:goto L4fc2a6;
case 0x4fc2ab:c.instructions+=1;goto B4fc2ab;
case 0x4fc2ad:goto L4fc2ad;
case 0x4fc2b2:c.instructions+=1;goto B4fc2b2;
case 0x4fc2b8:goto L4fc2b8;
case 0x4fc2b9:c.instructions+=5;goto B4fc2b9;
case 0x4fc2ba:c.instructions+=4;goto B4fc2ba;
case 0x4fc2c1:c.instructions+=3;goto B4fc2c1;
case 0x4fc2c2:c.instructions+=2;goto B4fc2c2;
case 0x4fc2c3:c.instructions+=1;goto B4fc2c3;
case 0x4fc2c6:goto L4fc2c6;
case 0x4fc2c9:c.instructions+=5;goto B4fc2c9;
case 0x4fc2cb:c.instructions+=4;goto B4fc2cb;
case 0x4fc2d0:c.instructions+=3;goto B4fc2d0;
case 0x4fc2d5:c.instructions+=2;goto B4fc2d5;
case 0x4fc2d6:c.instructions+=1;goto B4fc2d6;
case 0x4fc2db:goto L4fc2db;
case 0x4fc2de:c.instructions+=5;goto B4fc2de;
case 0x4fc2df:c.instructions+=4;goto B4fc2df;
case 0x4fc2e0:c.instructions+=3;goto B4fc2e0;
case 0x4fc2e1:c.instructions+=2;goto B4fc2e1;
case 0x4fc2e2:c.instructions+=1;goto B4fc2e2;
case 0x4fc2e5:goto L4fc2e5;
case 0x4fc2eb:c.instructions+=2;goto B4fc2eb;
case 0x4fc2ed:c.instructions+=1;goto B4fc2ed;
case 0x4fc2f3:goto L4fc2f3;
case 0x4fc2f6:c.instructions+=3;goto B4fc2f6;
case 0x4fc2f7:c.instructions+=2;goto B4fc2f7;
case 0x4fc2fc:c.instructions+=1;goto B4fc2fc;
case 0x4fc301:goto L4fc301;
case 0x4fc304:c.instructions+=1;goto B4fc304;
case 0x4fc306:goto L4fc306;
case 0x4fc308:c.instructions+=1;goto B4fc308;
case 0x4fc30d:goto L4fc30d;
case 0x4fc30f:c.instructions+=1;goto B4fc30f;
case 0x4fc311:goto L4fc311;
case 0x4fc314:c.instructions+=7;goto B4fc314;
case 0x4fc319:c.instructions+=6;goto B4fc319;
case 0x4fc31e:c.instructions+=5;goto B4fc31e;
case 0x4fc323:c.instructions+=4;goto B4fc323;
case 0x4fc328:c.instructions+=3;goto B4fc328;
case 0x4fc32d:c.instructions+=2;goto B4fc32d;
case 0x4fc32e:c.instructions+=1;goto B4fc32e;
case 0x4fc333:goto L4fc333;
case 0x4fc336:c.instructions+=2;goto B4fc336;
case 0x4fc338:c.instructions+=1;goto B4fc338;
case 0x4fc33d:goto L4fc33d;
case 0x4fc340:c.instructions+=5;goto B4fc340;
case 0x4fc341:c.instructions+=4;goto B4fc341;
case 0x4fc342:c.instructions+=3;goto B4fc342;
case 0x4fc343:c.instructions+=2;goto B4fc343;
case 0x4fc344:c.instructions+=1;goto B4fc344;
case 0x4fc347:goto L4fc347;
case 0x4fc34d:goto L4fc34d;
case 0x4fc353:c.instructions+=1;goto B4fc353;
case 0x4fc359:goto L4fc359;
case 0x4fc35c:c.instructions+=1;goto B4fc35c;
case 0x4fc362:goto L4fc362;
case 0x4fc365:c.instructions+=1;goto B4fc365;
case 0x4fc36b:goto L4fc36b;
case 0x4fc371:c.instructions+=1;goto B4fc371;
case 0x4fc377:goto L4fc377;
case 0x4fc37e:c.instructions+=2;goto B4fc37e;
case 0x4fc37f:c.instructions+=1;goto B4fc37f;
case 0x4fc381:goto L4fc381;
case 0x4fc386:goto L4fc386;
case 0x4fc389:c.instructions+=1;goto B4fc389;
case 0x4fc390:goto L4fc390;
case 0x4fc395:c.instructions+=3;goto B4fc395;
case 0x4fc398:c.instructions+=2;goto B4fc398;
case 0x4fc39b:c.instructions+=1;goto B4fc39b;
case 0x4fc39d:goto L4fc39d;
case 0x4fc3a0:c.instructions+=2;goto B4fc3a0;
case 0x4fc3a2:c.instructions+=1;goto B4fc3a2;
case 0x4fc3a4:goto L4fc3a4;
case 0x4fc3a6:c.instructions+=2;goto B4fc3a6;
case 0x4fc3a8:c.instructions+=1;goto B4fc3a8;
case 0x4fc3ad:goto L4fc3ad;
case 0x4fc3af:c.instructions+=1;goto B4fc3af;
case 0x4fc3b4:goto L4fc3b4;
case 0x4fc3b7:c.instructions+=5;goto B4fc3b7;
case 0x4fc3b8:c.instructions+=4;goto B4fc3b8;
case 0x4fc3b9:c.instructions+=3;goto B4fc3b9;
case 0x4fc3ba:c.instructions+=2;goto B4fc3ba;
case 0x4fc3bb:c.instructions+=1;goto B4fc3bb;
case 0x4fc3be:goto L4fc3be;
case 0x4fc3c3:goto L4fc3c3;
case 0x4fc3c5:c.instructions+=1;goto B4fc3c5;
case 0x4fc3ca:goto L4fc3ca;
case 0x4fc3cd:c.instructions+=5;goto B4fc3cd;
case 0x4fc3ce:c.instructions+=4;goto B4fc3ce;
case 0x4fc3cf:c.instructions+=3;goto B4fc3cf;
case 0x4fc3d0:c.instructions+=2;goto B4fc3d0;
case 0x4fc3d1:c.instructions+=1;goto B4fc3d1;
case 0x4fc3d4:goto L4fc3d4;
case 0x4fc3d7:c.instructions+=4;goto B4fc3d7;
case 0x4fc3da:c.instructions+=3;goto B4fc3da;
case 0x4fc3e1:c.instructions+=2;goto B4fc3e1;
case 0x4fc3e3:c.instructions+=1;goto B4fc3e3;
case 0x4fc3e5:goto L4fc3e5;
case 0x4fc3ea:goto L4fc3ea;
case 0x4fc3ed:c.instructions+=4;goto B4fc3ed;
case 0x4fc3f4:c.instructions+=3;goto B4fc3f4;
case 0x4fc3f7:c.instructions+=2;goto B4fc3f7;
case 0x4fc3f9:c.instructions+=1;goto B4fc3f9;
case 0x4fc3fe:goto L4fc3fe;
case 0x4fc400:c.instructions+=1;goto B4fc400;
case 0x4fc405:goto L4fc405;
case 0x4fc408:c.instructions+=5;goto B4fc408;
case 0x4fc409:c.instructions+=4;goto B4fc409;
case 0x4fc40a:c.instructions+=3;goto B4fc40a;
case 0x4fc40b:c.instructions+=2;goto B4fc40b;
case 0x4fc40c:c.instructions+=1;goto B4fc40c;
case 0x4fc40f:goto L4fc40f;
case 0x4fc414:goto L4fc414;
case 0x4fc417:c.instructions+=2;goto B4fc417;
case 0x4fc41e:c.instructions+=1;goto B4fc41e;
case 0x4fc423:goto L4fc423;
case 0x4fc426:c.instructions+=1;goto B4fc426;
case 0x4fc428:goto L4fc428;
case 0x4fc42b:c.instructions+=1;goto B4fc42b;
case 0x4fc42d:goto L4fc42d;
case 0x4fc433:c.instructions+=1;goto B4fc433;
case 0x4fc435:goto L4fc435;
case 0x4fc437:c.instructions+=1;goto B4fc437;
case 0x4fc43c:goto L4fc43c;
case 0x4fc43e:c.instructions+=1;goto B4fc43e;
case 0x4fc443:goto L4fc443;
case 0x4fc446:c.instructions+=5;goto B4fc446;
case 0x4fc447:c.instructions+=4;goto B4fc447;
case 0x4fc448:c.instructions+=3;goto B4fc448;
case 0x4fc449:c.instructions+=2;goto B4fc449;
case 0x4fc44a:c.instructions+=1;goto B4fc44a;
case 0x4fc44d:goto L4fc44d;
case 0x4fc450:c.instructions+=8;goto B4fc450;
case 0x4fc456:c.instructions+=7;goto B4fc456;
case 0x4fc459:c.instructions+=6;goto B4fc459;
case 0x4fc45c:c.instructions+=5;goto B4fc45c;
case 0x4fc45d:c.instructions+=4;goto B4fc45d;
case 0x4fc45e:c.instructions+=3;goto B4fc45e;
case 0x4fc45f:c.instructions+=2;goto B4fc45f;
case 0x4fc461:c.instructions+=1;goto B4fc461;
case 0x4fc466:goto L4fc466;
case 0x4fc469:c.instructions+=5;goto B4fc469;
case 0x4fc46c:c.instructions+=4;goto B4fc46c;
case 0x4fc46d:c.instructions+=3;goto B4fc46d;
case 0x4fc46e:c.instructions+=2;goto B4fc46e;
case 0x4fc473:c.instructions+=1;goto B4fc473;
case 0x4fc478:goto L4fc478;
case 0x4fc47a:c.instructions+=1;goto B4fc47a;
case 0x4fc47f:goto L4fc47f;
case 0x4fc482:c.instructions+=5;goto B4fc482;
case 0x4fc483:c.instructions+=4;goto B4fc483;
case 0x4fc484:c.instructions+=3;goto B4fc484;
case 0x4fc485:c.instructions+=2;goto B4fc485;
case 0x4fc486:c.instructions+=1;goto B4fc486;
case 0x4fc489:goto L4fc489;
case 0x4fc490:c.instructions+=2;goto B4fc490;
case 0x4fc492:c.instructions+=1;goto B4fc492;
case 0x4fc494:goto L4fc494;
case 0x4fc499:goto L4fc499;
case 0x4fc49b:c.instructions+=1;goto B4fc49b;
case 0x4fc4a0:goto L4fc4a0;
case 0x4fc4a3:c.instructions+=5;goto B4fc4a3;
case 0x4fc4a4:c.instructions+=4;goto B4fc4a4;
case 0x4fc4a5:c.instructions+=3;goto B4fc4a5;
case 0x4fc4a6:c.instructions+=2;goto B4fc4a6;
case 0x4fc4a7:c.instructions+=1;goto B4fc4a7;
case 0x4fc4aa:goto L4fc4aa;
case 0x4fc4af:goto L4fc4af;
case 0x4fc4b1:c.instructions+=1;goto B4fc4b1;
case 0x4fc4b6:goto L4fc4b6;
case 0x4fc4b9:c.instructions+=5;goto B4fc4b9;
case 0x4fc4ba:c.instructions+=4;goto B4fc4ba;
case 0x4fc4bb:c.instructions+=3;goto B4fc4bb;
case 0x4fc4bc:c.instructions+=2;goto B4fc4bc;
case 0x4fc4bd:c.instructions+=1;goto B4fc4bd;
case 0x4fc4c0:goto L4fc4c0;
case 0x4fc4c5:c.instructions+=1;goto B4fc4c5;
case 0x4fc4cb:goto L4fc4cb;
case 0x4fc4cd:goto L4fc4cd;
case 0x4fc4d2:c.instructions+=1;goto B4fc4d2;
case 0x4fc4d4:goto L4fc4d4;
case 0x4fc4d5:c.instructions+=1;goto B4fc4d5;
case 0x4fc4db:goto L4fc4db;
case 0x4fc4de:c.instructions+=4;goto B4fc4de;
case 0x4fc4e1:c.instructions+=3;goto B4fc4e1;
case 0x4fc4e8:c.instructions+=2;goto B4fc4e8;
case 0x4fc4ea:c.instructions+=1;goto B4fc4ea;
case 0x4fc4ec:goto L4fc4ec;
case 0x4fc4ef:c.instructions+=7;goto B4fc4ef;
case 0x4fc4f2:c.instructions+=6;goto B4fc4f2;
case 0x4fc4f8:c.instructions+=5;goto B4fc4f8;
case 0x4fc4fa:c.instructions+=4;goto B4fc4fa;
case 0x4fc4ff:c.instructions+=3;goto B4fc4ff;
case 0x4fc500:c.instructions+=2;goto B4fc500;
case 0x4fc506:c.instructions+=1;goto B4fc506;
case 0x4fc50b:goto L4fc50b;
case 0x4fc50e:c.instructions+=5;goto B4fc50e;
case 0x4fc50f:c.instructions+=4;goto B4fc50f;
case 0x4fc510:c.instructions+=3;goto B4fc510;
case 0x4fc511:c.instructions+=2;goto B4fc511;
case 0x4fc512:c.instructions+=1;goto B4fc512;
case 0x4fc515:goto L4fc515;
case 0x4fc51f:c.instructions+=5;goto B4fc51f;
case 0x4fc522:c.instructions+=4;goto B4fc522;
case 0x4fc525:c.instructions+=3;goto B4fc525;
case 0x4fc52c:c.instructions+=2;goto B4fc52c;
case 0x4fc52e:c.instructions+=1;goto B4fc52e;
case 0x4fc534:goto L4fc534;
case 0x4fc536:c.instructions+=1;goto B4fc536;
case 0x4fc53b:goto L4fc53b;
case 0x4fc53c:c.instructions+=4;goto B4fc53c;
case 0x4fc53d:c.instructions+=3;goto B4fc53d;
case 0x4fc53e:c.instructions+=2;goto B4fc53e;
case 0x4fc53f:c.instructions+=1;goto B4fc53f;
case 0x4fc542:goto L4fc542;
case 0x4fc548:c.instructions+=5;goto B4fc548;
case 0x4fc54d:c.instructions+=4;goto B4fc54d;
case 0x4fc553:c.instructions+=3;goto B4fc553;
case 0x4fc555:c.instructions+=2;goto B4fc555;
case 0x4fc55a:c.instructions+=1;goto B4fc55a;
case 0x4fc55f:goto L4fc55f;
case 0x4fc562:c.instructions+=3;goto B4fc562;
case 0x4fc564:c.instructions+=2;goto B4fc564;
case 0x4fc566:c.instructions+=1;goto B4fc566;
case 0x4fc56b:goto L4fc56b;
case 0x4fc56c:c.instructions+=1;goto B4fc56c;
case 0x4fc571:goto L4fc571;
case 0x4fc574:c.instructions+=2;goto B4fc574;
case 0x4fc576:c.instructions+=1;goto B4fc576;
case 0x4fc57b:goto L4fc57b;
case 0x4fc57c:c.instructions+=5;goto B4fc57c;
case 0x4fc57d:c.instructions+=4;goto B4fc57d;
case 0x4fc584:c.instructions+=3;goto B4fc584;
case 0x4fc585:c.instructions+=2;goto B4fc585;
case 0x4fc586:c.instructions+=1;goto B4fc586;
case 0x4fc589:goto L4fc589;
case 0x4fc58e:c.instructions+=1;goto B4fc58e;
case 0x4fc594:goto L4fc594;
case 0x4fc599:c.instructions+=1;goto B4fc599;
case 0x4fc59f:goto L4fc59f;
case 0x4fc5a1:c.instructions+=1;goto B4fc5a1;
case 0x4fc5a6:goto L4fc5a6;
case 0x4fc5a7:c.instructions+=4;goto B4fc5a7;
case 0x4fc5a8:c.instructions+=3;goto B4fc5a8;
case 0x4fc5a9:c.instructions+=2;goto B4fc5a9;
case 0x4fc5aa:c.instructions+=1;goto B4fc5aa;
case 0x4fc5ad:goto L4fc5ad;
case 0x4fc5b0:c.instructions+=6;goto B4fc5b0;
case 0x4fc5b3:c.instructions+=5;goto B4fc5b3;
case 0x4fc5bb:c.instructions+=4;goto B4fc5bb;
case 0x4fc5be:c.instructions+=3;goto B4fc5be;
case 0x4fc5bf:c.instructions+=2;goto B4fc5bf;
case 0x4fc5c4:c.instructions+=1;goto B4fc5c4;
case 0x4fc5c9:goto L4fc5c9;
case 0x4fc5cc:c.instructions+=5;goto B4fc5cc;
case 0x4fc5cd:c.instructions+=4;goto B4fc5cd;
case 0x4fc5ce:c.instructions+=3;goto B4fc5ce;
case 0x4fc5cf:c.instructions+=2;goto B4fc5cf;
case 0x4fc5d0:c.instructions+=1;goto B4fc5d0;
case 0x4fc5d3:goto L4fc5d3;
case 0x4fc5d8:c.instructions+=1;goto B4fc5d8;
case 0x4fc5de:goto L4fc5de;
case 0x4fc5e4:goto L4fc5e4;
case 0x4fc5e9:c.instructions+=1;goto B4fc5e9;
case 0x4fc5ef:goto L4fc5ef;
case 0x4fc5f1:goto L4fc5f1;
case 0x4fc5f6:c.instructions+=1;goto B4fc5f6;
case 0x4fc5f8:goto L4fc5f8;
case 0x4fc5fd:c.instructions+=1;goto B4fc5fd;
case 0x4fc603:goto L4fc603;
case 0x4fc606:c.instructions+=1;goto B4fc606;
case 0x4fc608:goto L4fc608;
case 0x4fc60e:c.instructions+=1;goto B4fc60e;
case 0x4fc610:goto L4fc610;
case 0x4fc616:c.instructions+=2;goto B4fc616;
case 0x4fc618:c.instructions+=1;goto B4fc618;
case 0x4fc61a:goto L4fc61a;
case 0x4fc61f:c.instructions+=1;goto B4fc61f;
case 0x4fc624:goto L4fc624;
case 0x4fc627:c.instructions+=2;goto B4fc627;
case 0x4fc629:c.instructions+=1;goto B4fc629;
case 0x4fc62f:goto L4fc62f;
case 0x4fc635:goto L4fc635;
case 0x4fc638:c.instructions+=1;goto B4fc638;
case 0x4fc63e:goto L4fc63e;
case 0x4fc641:c.instructions+=2;goto B4fc641;
case 0x4fc642:c.instructions+=1;goto B4fc642;
case 0x4fc647:goto L4fc647;
case 0x4fc64a:c.instructions+=2;goto B4fc64a;
case 0x4fc64c:c.instructions+=1;goto B4fc64c;
case 0x4fc651:goto L4fc651;
case 0x4fc654:c.instructions+=5;goto B4fc654;
case 0x4fc655:c.instructions+=4;goto B4fc655;
case 0x4fc656:c.instructions+=3;goto B4fc656;
case 0x4fc657:c.instructions+=2;goto B4fc657;
case 0x4fc658:c.instructions+=1;goto B4fc658;
case 0x4fc65b:goto L4fc65b;
case 0x4fc661:c.instructions+=2;goto B4fc661;
case 0x4fc663:c.instructions+=1;goto B4fc663;
case 0x4fc669:goto L4fc669;
case 0x4fc66c:c.instructions+=5;goto B4fc66c;
case 0x4fc66e:c.instructions+=4;goto B4fc66e;
case 0x4fc673:c.instructions+=3;goto B4fc673;
case 0x4fc678:c.instructions+=2;goto B4fc678;
case 0x4fc679:c.instructions+=1;goto B4fc679;
case 0x4fc67e:goto L4fc67e;
case 0x4fc681:c.instructions+=3;goto B4fc681;
case 0x4fc686:c.instructions+=2;goto B4fc686;
case 0x4fc688:c.instructions+=1;goto B4fc688;
case 0x4fc68d:goto L4fc68d;
case 0x4fc68e:c.instructions+=4;goto B4fc68e;
case 0x4fc68f:c.instructions+=3;goto B4fc68f;
case 0x4fc690:c.instructions+=2;goto B4fc690;
case 0x4fc691:c.instructions+=1;goto B4fc691;
case 0x4fc694:goto L4fc694;
case 0x4fc699:c.instructions+=1;goto B4fc699;
case 0x4fc69f:goto L4fc69f;
case 0x4fc6a4:c.instructions+=1;goto B4fc6a4;
case 0x4fc6aa:goto L4fc6aa;
case 0x4fc6ad:c.instructions+=5;goto B4fc6ad;
case 0x4fc6af:c.instructions+=4;goto B4fc6af;
case 0x4fc6b4:c.instructions+=3;goto B4fc6b4;
case 0x4fc6b9:c.instructions+=2;goto B4fc6b9;
case 0x4fc6ba:c.instructions+=1;goto B4fc6ba;
case 0x4fc6bf:goto L4fc6bf;
case 0x4fc6c2:c.instructions+=5;goto B4fc6c2;
case 0x4fc6c3:c.instructions+=4;goto B4fc6c3;
case 0x4fc6c4:c.instructions+=3;goto B4fc6c4;
case 0x4fc6c5:c.instructions+=2;goto B4fc6c5;
case 0x4fc6c6:c.instructions+=1;goto B4fc6c6;
case 0x4fc6c9:goto L4fc6c9;
case 0x4fc6cf:c.instructions+=1;goto B4fc6cf;
case 0x4fc6d5:goto L4fc6d5;
case 0x4fc6d8:c.instructions+=1;goto B4fc6d8;
case 0x4fc6de:goto L4fc6de;
case 0x4fc6e4:c.instructions+=1;goto B4fc6e4;
case 0x4fc6e6:goto L4fc6e6;
case 0x4fc6e9:c.instructions+=4;goto B4fc6e9;
case 0x4fc6eb:c.instructions+=3;goto B4fc6eb;
case 0x4fc6f0:c.instructions+=2;goto B4fc6f0;
case 0x4fc6f1:c.instructions+=1;goto B4fc6f1;
case 0x4fc6f6:goto L4fc6f6;
case 0x4fc6fa:c.instructions+=1;goto B4fc6fa;
case 0x4fc6fc:goto L4fc6fc;
case 0x4fc6ff:c.instructions+=1;goto B4fc6ff;
case 0x4fc701:goto L4fc701;
case 0x4fc706:c.instructions+=1;goto B4fc706;
case 0x4fc70b:goto L4fc70b;
case 0x4fc70e:c.instructions+=2;goto B4fc70e;
case 0x4fc710:c.instructions+=1;goto B4fc710;
case 0x4fc712:goto L4fc712;
case 0x4fc717:c.instructions+=1;goto B4fc717;
case 0x4fc71c:goto L4fc71c;
case 0x4fc71f:goto L4fc71f;
case 0x4fc721:c.instructions+=2;goto B4fc721;
case 0x4fc723:c.instructions+=1;goto B4fc723;
case 0x4fc728:goto L4fc728;
case 0x4fc72a:c.instructions+=1;goto B4fc72a;
case 0x4fc72f:goto L4fc72f;
case 0x4fc732:c.instructions+=5;goto B4fc732;
case 0x4fc733:c.instructions+=4;goto B4fc733;
case 0x4fc734:c.instructions+=3;goto B4fc734;
case 0x4fc735:c.instructions+=2;goto B4fc735;
case 0x4fc736:c.instructions+=1;goto B4fc736;
case 0x4fc739:goto L4fc739;
case 0x4fc73c:c.instructions+=5;goto B4fc73c;
case 0x4fc73e:c.instructions+=4;goto B4fc73e;
case 0x4fc743:c.instructions+=3;goto B4fc743;
case 0x4fc744:c.instructions+=2;goto B4fc744;
case 0x4fc749:c.instructions+=1;goto B4fc749;
case 0x4fc74e:goto L4fc74e;
case 0x4fc751:c.instructions+=2;goto B4fc751;
case 0x4fc753:c.instructions+=1;goto B4fc753;
case 0x4fc758:goto L4fc758;
case 0x4fc75b:c.instructions+=5;goto B4fc75b;
case 0x4fc75c:c.instructions+=4;goto B4fc75c;
case 0x4fc75d:c.instructions+=3;goto B4fc75d;
case 0x4fc75e:c.instructions+=2;goto B4fc75e;
case 0x4fc75f:c.instructions+=1;goto B4fc75f;
case 0x4fc762:goto L4fc762;
case 0x4fc765:c.instructions+=1;goto B4fc765;
case 0x4fc767:goto L4fc767;
case 0x4fc76c:c.instructions+=1;goto B4fc76c;
case 0x4fc771:goto L4fc771;
case 0x4fc774:c.instructions+=2;goto B4fc774;
case 0x4fc776:c.instructions+=1;goto B4fc776;
case 0x4fc778:goto L4fc778;
case 0x4fc77b:c.instructions+=2;goto B4fc77b;
case 0x4fc77c:c.instructions+=1;goto B4fc77c;
case 0x4fc781:goto L4fc781;
case 0x4fc784:c.instructions+=2;goto B4fc784;
case 0x4fc786:c.instructions+=1;goto B4fc786;
case 0x4fc78b:goto L4fc78b;
case 0x4fc78e:c.instructions+=5;goto B4fc78e;
case 0x4fc78f:c.instructions+=4;goto B4fc78f;
case 0x4fc790:c.instructions+=3;goto B4fc790;
case 0x4fc791:c.instructions+=2;goto B4fc791;
case 0x4fc792:c.instructions+=1;goto B4fc792;
case 0x4fc795:goto L4fc795;
case 0x4fc798:c.instructions+=5;goto B4fc798;
case 0x4fc79a:c.instructions+=4;goto B4fc79a;
case 0x4fc79f:c.instructions+=3;goto B4fc79f;
case 0x4fc7a0:c.instructions+=2;goto B4fc7a0;
case 0x4fc7a5:c.instructions+=1;goto B4fc7a5;
case 0x4fc7aa:goto L4fc7aa;
case 0x4fc7ad:c.instructions+=2;goto B4fc7ad;
case 0x4fc7af:c.instructions+=1;goto B4fc7af;
case 0x4fc7b4:goto L4fc7b4;
case 0x4fc7b7:c.instructions+=5;goto B4fc7b7;
case 0x4fc7b8:c.instructions+=4;goto B4fc7b8;
case 0x4fc7b9:c.instructions+=3;goto B4fc7b9;
case 0x4fc7ba:c.instructions+=2;goto B4fc7ba;
case 0x4fc7bb:c.instructions+=1;goto B4fc7bb;
case 0x4fc7be:goto L4fc7be;
case 0x4fc7c1:c.instructions+=2;goto B4fc7c1;
case 0x4fc7c2:c.instructions+=1;goto B4fc7c2;
case 0x4fc7c7:goto L4fc7c7;
case 0x4fc7ca:c.instructions+=2;goto B4fc7ca;
case 0x4fc7cc:c.instructions+=1;goto B4fc7cc;
case 0x4fc7d1:goto L4fc7d1;
case 0x4fc7d4:c.instructions+=5;goto B4fc7d4;
case 0x4fc7d5:c.instructions+=4;goto B4fc7d5;
case 0x4fc7d6:c.instructions+=3;goto B4fc7d6;
case 0x4fc7d7:c.instructions+=2;goto B4fc7d7;
case 0x4fc7d8:c.instructions+=1;goto B4fc7d8;
case 0x4fc7db:goto L4fc7db;
case 0x4fc7dd:c.instructions+=4;goto B4fc7dd;
case 0x4fc7e7:c.instructions+=3;goto B4fc7e7;
case 0x4fc7ea:c.instructions+=2;goto B4fc7ea;
case 0x4fc7ef:c.instructions+=1;goto B4fc7ef;
case 0x4fc7f0:goto L4fc7f0;
case 0x4fc7f5:goto L4fc7f5;
case 0x4fc7f8:c.instructions+=2;goto B4fc7f8;
case 0x4fc7fa:c.instructions+=1;goto B4fc7fa;
case 0x4fc7ff:goto L4fc7ff;
case 0x4fc802:c.instructions+=5;goto B4fc802;
case 0x4fc803:c.instructions+=4;goto B4fc803;
case 0x4fc804:c.instructions+=3;goto B4fc804;
case 0x4fc805:c.instructions+=2;goto B4fc805;
case 0x4fc806:c.instructions+=1;goto B4fc806;
case 0x4fc809:goto L4fc809;
case 0x4fc80f:c.instructions+=2;goto B4fc80f;
case 0x4fc810:c.instructions+=1;goto B4fc810;
case 0x4fc815:goto L4fc815;
case 0x4fc818:c.instructions+=2;goto B4fc818;
case 0x4fc81a:c.instructions+=1;goto B4fc81a;
case 0x4fc81c:goto L4fc81c;
case 0x4fc822:c.instructions+=2;goto B4fc822;
case 0x4fc824:c.instructions+=1;goto B4fc824;
case 0x4fc82a:goto L4fc82a;
case 0x4fc830:c.instructions+=3;goto B4fc830;
case 0x4fc835:c.instructions+=2;goto B4fc835;
case 0x4fc836:c.instructions+=1;goto B4fc836;
case 0x4fc83b:goto L4fc83b;
case 0x4fc83e:c.instructions+=2;goto B4fc83e;
case 0x4fc840:c.instructions+=1;goto B4fc840;
case 0x4fc842:goto L4fc842;
case 0x4fc848:c.instructions+=4;goto B4fc848;
case 0x4fc84a:c.instructions+=3;goto B4fc84a;
case 0x4fc84f:c.instructions+=2;goto B4fc84f;
case 0x4fc850:c.instructions+=1;goto B4fc850;
case 0x4fc855:goto L4fc855;
case 0x4fc858:goto L4fc858;
case 0x4fc85d:c.instructions+=1;goto B4fc85d;
case 0x4fc85f:goto L4fc85f;
case 0x4fc865:c.instructions+=2;goto B4fc865;
case 0x4fc866:c.instructions+=1;goto B4fc866;
case 0x4fc86b:goto L4fc86b;
case 0x4fc86e:c.instructions+=2;goto B4fc86e;
case 0x4fc870:c.instructions+=1;goto B4fc870;
case 0x4fc872:goto L4fc872;
case 0x4fc878:c.instructions+=2;goto B4fc878;
case 0x4fc87a:c.instructions+=1;goto B4fc87a;
case 0x4fc880:goto L4fc880;
case 0x4fc886:c.instructions+=3;goto B4fc886;
case 0x4fc88b:c.instructions+=2;goto B4fc88b;
case 0x4fc88c:c.instructions+=1;goto B4fc88c;
case 0x4fc891:goto L4fc891;
case 0x4fc894:c.instructions+=2;goto B4fc894;
case 0x4fc896:c.instructions+=1;goto B4fc896;
case 0x4fc898:goto L4fc898;
case 0x4fc89e:c.instructions+=4;goto B4fc89e;
case 0x4fc8a0:c.instructions+=3;goto B4fc8a0;
case 0x4fc8a5:c.instructions+=2;goto B4fc8a5;
case 0x4fc8a6:c.instructions+=1;goto B4fc8a6;
case 0x4fc8ab:goto L4fc8ab;
case 0x4fc8ae:goto L4fc8ae;
case 0x4fc8b3:goto L4fc8b3;
case 0x4fc8b5:c.instructions+=1;goto B4fc8b5;
case 0x4fc8ba:goto L4fc8ba;
case 0x4fc8bd:c.instructions+=1;goto B4fc8bd;
case 0x4fc8c2:goto L4fc8c2;
case 0x4fc8c8:c.instructions+=3;goto B4fc8c8;
case 0x4fc8cb:c.instructions+=2;goto B4fc8cb;
case 0x4fc8ce:c.instructions+=1;goto B4fc8ce;
case 0x4fc8d4:goto L4fc8d4;
case 0x4fc8db:c.instructions+=1;goto B4fc8db;
case 0x4fc8e2:goto L4fc8e2;
case 0x4fc8e7:c.instructions+=2;goto B4fc8e7;
case 0x4fc8e9:c.instructions+=1;goto B4fc8e9;
case 0x4fc8ee:goto L4fc8ee;
case 0x4fc8ef:c.instructions+=4;goto B4fc8ef;
case 0x4fc8f0:c.instructions+=3;goto B4fc8f0;
case 0x4fc8f1:c.instructions+=2;goto B4fc8f1;
case 0x4fc8f2:c.instructions+=1;goto B4fc8f2;
case 0x4fc8f5:goto L4fc8f5;
case 0x4fc8fa:c.instructions+=3;goto B4fc8fa;
case 0x4fc8fc:c.instructions+=2;goto B4fc8fc;
case 0x4fc8fe:c.instructions+=1;goto B4fc8fe;
case 0x4fc904:goto L4fc904;
case 0x4fc909:c.instructions+=2;goto B4fc909;
case 0x4fc90b:c.instructions+=1;goto B4fc90b;
case 0x4fc910:goto L4fc910;
case 0x4fc915:c.instructions+=3;goto B4fc915;
case 0x4fc916:c.instructions+=2;goto B4fc916;
case 0x4fc918:c.instructions+=1;goto B4fc918;
case 0x4fc91a:goto L4fc91a;
case 0x4fc91b:c.instructions+=4;goto B4fc91b;
case 0x4fc91c:c.instructions+=3;goto B4fc91c;
case 0x4fc91d:c.instructions+=2;goto B4fc91d;
case 0x4fc91e:c.instructions+=1;goto B4fc91e;
case 0x4fc921:goto L4fc921;
case 0x4fc926:c.instructions+=3;goto B4fc926;
case 0x4fc928:c.instructions+=2;goto B4fc928;
case 0x4fc92a:c.instructions+=1;goto B4fc92a;
case 0x4fc930:goto L4fc930;
case 0x4fc935:c.instructions+=2;goto B4fc935;
case 0x4fc937:c.instructions+=1;goto B4fc937;
case 0x4fc93c:goto L4fc93c;
case 0x4fc941:c.instructions+=3;goto B4fc941;
case 0x4fc942:c.instructions+=2;goto B4fc942;
case 0x4fc944:c.instructions+=1;goto B4fc944;
case 0x4fc946:goto L4fc946;
case 0x4fc947:c.instructions+=4;goto B4fc947;
case 0x4fc948:c.instructions+=3;goto B4fc948;
case 0x4fc949:c.instructions+=2;goto B4fc949;
case 0x4fc94a:c.instructions+=1;goto B4fc94a;
case 0x4fc94d:goto L4fc94d;
case 0x4fc952:c.instructions+=1;goto B4fc952;
case 0x4fc958:goto L4fc958;
case 0x4fc95e:goto L4fc95e;
case 0x4fc963:c.instructions+=1;goto B4fc963;
case 0x4fc965:goto L4fc965;
case 0x4fc96a:c.instructions+=1;goto B4fc96a;
case 0x4fc970:goto L4fc970;
case 0x4fc973:c.instructions+=1;goto B4fc973;
case 0x4fc975:goto L4fc975;
case 0x4fc97b:c.instructions+=1;goto B4fc97b;
case 0x4fc97d:goto L4fc97d;
case 0x4fc980:c.instructions+=7;goto B4fc980;
case 0x4fc983:c.instructions+=6;goto B4fc983;
case 0x4fc989:c.instructions+=5;goto B4fc989;
case 0x4fc98b:c.instructions+=4;goto B4fc98b;
case 0x4fc990:c.instructions+=3;goto B4fc990;
case 0x4fc991:c.instructions+=2;goto B4fc991;
case 0x4fc997:c.instructions+=1;goto B4fc997;
case 0x4fc99c:goto L4fc99c;
case 0x4fc99f:c.instructions+=5;goto B4fc99f;
case 0x4fc9a0:c.instructions+=4;goto B4fc9a0;
case 0x4fc9a1:c.instructions+=3;goto B4fc9a1;
case 0x4fc9a2:c.instructions+=2;goto B4fc9a2;
case 0x4fc9a3:c.instructions+=1;goto B4fc9a3;
case 0x4fc9a6:goto L4fc9a6;
case 0x4fc9a9:c.instructions+=1;goto B4fc9a9;
case 0x4fc9ab:goto L4fc9ab;
case 0x4fc9ae:c.instructions+=2;goto B4fc9ae;
case 0x4fc9b0:c.instructions+=1;goto B4fc9b0;
case 0x4fc9b2:goto L4fc9b2;
case 0x4fc9b4:c.instructions+=2;goto B4fc9b4;
case 0x4fc9b6:c.instructions+=1;goto B4fc9b6;
case 0x4fc9bb:goto L4fc9bb;
case 0x4fc9bc:c.instructions+=4;goto B4fc9bc;
case 0x4fc9bd:c.instructions+=3;goto B4fc9bd;
case 0x4fc9be:c.instructions+=2;goto B4fc9be;
case 0x4fc9bf:c.instructions+=1;goto B4fc9bf;
case 0x4fc9c2:goto L4fc9c2;
case 0x4fc9c7:goto L4fc9c7;
case 0x4fc9c8:c.instructions+=4;goto B4fc9c8;
case 0x4fc9c9:c.instructions+=3;goto B4fc9c9;
case 0x4fc9ca:c.instructions+=2;goto B4fc9ca;
case 0x4fc9cb:c.instructions+=1;goto B4fc9cb;
case 0x4fc9ce:goto L4fc9ce;
case 0x4fc9d4:c.instructions+=2;goto B4fc9d4;
case 0x4fc9d6:c.instructions+=1;goto B4fc9d6;
case 0x4fc9dc:goto L4fc9dc;
case 0x4fc9df:c.instructions+=5;goto B4fc9df;
case 0x4fc9e1:c.instructions+=4;goto B4fc9e1;
case 0x4fc9e6:c.instructions+=3;goto B4fc9e6;
case 0x4fc9eb:c.instructions+=2;goto B4fc9eb;
case 0x4fc9ec:c.instructions+=1;goto B4fc9ec;
case 0x4fc9f1:goto L4fc9f1;
case 0x4fc9f4:c.instructions+=3;goto B4fc9f4;
case 0x4fc9f9:c.instructions+=2;goto B4fc9f9;
case 0x4fc9fb:c.instructions+=1;goto B4fc9fb;
case 0x4fca00:goto L4fca00;
case 0x4fca01:c.instructions+=4;goto B4fca01;
case 0x4fca02:c.instructions+=3;goto B4fca02;
case 0x4fca03:c.instructions+=2;goto B4fca03;
case 0x4fca04:c.instructions+=1;goto B4fca04;
case 0x4fca07:goto L4fca07;
case 0x4fca0a:c.instructions+=1;goto B4fca0a;
case 0x4fca0c:goto L4fca0c;
case 0x4fca12:c.instructions+=1;goto B4fca12;
case 0x4fca14:goto L4fca14;
case 0x4fca1b:c.instructions+=1;goto B4fca1b;
case 0x4fca21:goto L4fca21;
case 0x4fca27:c.instructions+=2;goto B4fca27;
case 0x4fca29:c.instructions+=1;goto B4fca29;
case 0x4fca2f:goto L4fca2f;
case 0x4fca32:c.instructions+=1;goto B4fca32;
case 0x4fca38:goto L4fca38;
case 0x4fca3d:goto L4fca3d;
case 0x4fca40:c.instructions+=3;goto B4fca40;
case 0x4fca41:c.instructions+=2;goto B4fca41;
case 0x4fca46:c.instructions+=1;goto B4fca46;
case 0x4fca4b:goto L4fca4b;
case 0x4fca4d:c.instructions+=5;goto B4fca4d;
case 0x4fca50:c.instructions+=4;goto B4fca50;
case 0x4fca56:c.instructions+=3;goto B4fca56;
case 0x4fca57:c.instructions+=2;goto B4fca57;
case 0x4fca59:c.instructions+=1;goto B4fca59;
case 0x4fca5e:goto L4fca5e;
case 0x4fca60:c.instructions+=1;goto B4fca60;
case 0x4fca66:goto L4fca66;
case 0x4fca67:c.instructions+=2;goto B4fca67;
case 0x4fca69:c.instructions+=1;goto B4fca69;
case 0x4fca6e:goto L4fca6e;
case 0x4fca70:c.instructions+=1;goto B4fca70;
case 0x4fca76:goto L4fca76;
case 0x4fca77:c.instructions+=2;goto B4fca77;
case 0x4fca79:c.instructions+=1;goto B4fca79;
case 0x4fca7e:goto L4fca7e;
case 0x4fca80:c.instructions+=1;goto B4fca80;
case 0x4fca86:goto L4fca86;
case 0x4fca89:c.instructions+=10;goto B4fca89;
case 0x4fca8e:c.instructions+=9;goto B4fca8e;
case 0x4fca90:c.instructions+=8;goto B4fca90;
case 0x4fca95:c.instructions+=7;goto B4fca95;
case 0x4fca9a:c.instructions+=6;goto B4fca9a;
case 0x4fca9f:c.instructions+=5;goto B4fca9f;
case 0x4fcaa4:c.instructions+=4;goto B4fcaa4;
case 0x4fcaa9:c.instructions+=3;goto B4fcaa9;
case 0x4fcaae:c.instructions+=2;goto B4fcaae;
case 0x4fcaaf:c.instructions+=1;goto B4fcaaf;
case 0x4fcab4:goto L4fcab4;
case 0x4fcab7:c.instructions+=5;goto B4fcab7;
case 0x4fcab8:c.instructions+=4;goto B4fcab8;
case 0x4fcab9:c.instructions+=3;goto B4fcab9;
case 0x4fcaba:c.instructions+=2;goto B4fcaba;
case 0x4fcabb:c.instructions+=1;goto B4fcabb;
case 0x4fcabe:goto L4fcabe;
case 0x4fcac1:c.instructions+=1;goto B4fcac1;
case 0x4fcac7:goto L4fcac7;
case 0x4fcaca:c.instructions+=3;goto B4fcaca;
case 0x4fcacb:c.instructions+=2;goto B4fcacb;
case 0x4fcad0:c.instructions+=1;goto B4fcad0;
case 0x4fcad5:goto L4fcad5;
case 0x4fcad7:c.instructions+=5;goto B4fcad7;
case 0x4fcada:c.instructions+=4;goto B4fcada;
case 0x4fcae0:c.instructions+=3;goto B4fcae0;
case 0x4fcae1:c.instructions+=2;goto B4fcae1;
case 0x4fcae3:c.instructions+=1;goto B4fcae3;
case 0x4fcae8:goto L4fcae8;
case 0x4fcaea:c.instructions+=1;goto B4fcaea;
case 0x4fcaf0:goto L4fcaf0;
case 0x4fcaf3:c.instructions+=4;goto B4fcaf3;
case 0x4fcaf9:c.instructions+=3;goto B4fcaf9;
case 0x4fcafa:c.instructions+=2;goto B4fcafa;
case 0x4fcafc:c.instructions+=1;goto B4fcafc;
case 0x4fcb01:goto L4fcb01;
case 0x4fcb03:c.instructions+=1;goto B4fcb03;
case 0x4fcb05:goto L4fcb05;
case 0x4fcb07:c.instructions+=1;goto B4fcb07;
case 0x4fcb0c:goto L4fcb0c;
case 0x4fcb0e:c.instructions+=1;goto B4fcb0e;
case 0x4fcb14:goto L4fcb14;
case 0x4fcb19:goto L4fcb19;
case 0x4fcb23:c.instructions+=5;goto B4fcb23;
case 0x4fcb26:c.instructions+=4;goto B4fcb26;
case 0x4fcb2c:c.instructions+=3;goto B4fcb2c;
case 0x4fcb2d:c.instructions+=2;goto B4fcb2d;
case 0x4fcb32:c.instructions+=1;goto B4fcb32;
case 0x4fcb37:goto L4fcb37;
case 0x4fcb39:c.instructions+=2;goto B4fcb39;
case 0x4fcb40:c.instructions+=1;goto B4fcb40;
case 0x4fcb42:goto L4fcb42;
case 0x4fcb45:c.instructions+=6;goto B4fcb45;
case 0x4fcb48:c.instructions+=5;goto B4fcb48;
case 0x4fcb49:c.instructions+=4;goto B4fcb49;
case 0x4fcb4a:c.instructions+=3;goto B4fcb4a;
case 0x4fcb4b:c.instructions+=2;goto B4fcb4b;
case 0x4fcb4d:c.instructions+=1;goto B4fcb4d;
case 0x4fcb52:goto L4fcb52;
case 0x4fcb58:c.instructions+=1;goto B4fcb58;
case 0x4fcb5d:goto L4fcb5d;
case 0x4fcb67:c.instructions+=8;goto B4fcb67;
case 0x4fcb6a:c.instructions+=7;goto B4fcb6a;
case 0x4fcb6d:c.instructions+=6;goto B4fcb6d;
case 0x4fcb70:c.instructions+=5;goto B4fcb70;
case 0x4fcb71:c.instructions+=4;goto B4fcb71;
case 0x4fcb72:c.instructions+=3;goto B4fcb72;
case 0x4fcb73:c.instructions+=2;goto B4fcb73;
case 0x4fcb75:c.instructions+=1;goto B4fcb75;
case 0x4fcb7a:goto L4fcb7a;
case 0x4fcb7d:c.instructions+=1;goto B4fcb7d;
case 0x4fcb7f:goto L4fcb7f;
case 0x4fcb82:c.instructions+=11;goto B4fcb82;
case 0x4fcb84:c.instructions+=10;goto B4fcb84;
case 0x4fcb86:c.instructions+=9;goto B4fcb86;
case 0x4fcb88:c.instructions+=8;goto B4fcb88;
case 0x4fcb8a:c.instructions+=7;goto B4fcb8a;
case 0x4fcb91:c.instructions+=6;goto B4fcb91;
case 0x4fcb96:c.instructions+=5;goto B4fcb96;
case 0x4fcb99:c.instructions+=4;goto B4fcb99;
case 0x4fcb9e:c.instructions+=3;goto B4fcb9e;
case 0x4fcb9f:c.instructions+=2;goto B4fcb9f;
case 0x4fcba0:c.instructions+=1;goto B4fcba0;
case 0x4fcba5:goto L4fcba5;
case 0x4fcba8:c.instructions+=6;goto B4fcba8;
case 0x4fcbab:c.instructions+=5;goto B4fcbab;
case 0x4fcbae:c.instructions+=4;goto B4fcbae;
case 0x4fcbaf:c.instructions+=3;goto B4fcbaf;
case 0x4fcbb1:c.instructions+=2;goto B4fcbb1;
case 0x4fcbb2:c.instructions+=1;goto B4fcbb2;
case 0x4fcbb7:goto L4fcbb7;
case 0x4fcbba:c.instructions+=5;goto B4fcbba;
case 0x4fcbbb:c.instructions+=4;goto B4fcbbb;
case 0x4fcbbc:c.instructions+=3;goto B4fcbbc;
case 0x4fcbbd:c.instructions+=2;goto B4fcbbd;
case 0x4fcbbe:c.instructions+=1;goto B4fcbbe;
case 0x4fcbc1:goto L4fcbc1;
case 0x4fcbc4:c.instructions+=3;goto B4fcbc4;
case 0x4fcbc5:c.instructions+=2;goto B4fcbc5;
case 0x4fcbca:c.instructions+=1;goto B4fcbca;
case 0x4fcbcf:goto L4fcbcf;
case 0x4fcbd2:c.instructions+=5;goto B4fcbd2;
case 0x4fcbd8:c.instructions+=4;goto B4fcbd8;
case 0x4fcbda:c.instructions+=3;goto B4fcbda;
case 0x4fcbdb:c.instructions+=2;goto B4fcbdb;
case 0x4fcbdd:c.instructions+=1;goto B4fcbdd;
case 0x4fcbe2:goto L4fcbe2;
case 0x4fcbe4:c.instructions+=1;goto B4fcbe4;
case 0x4fcbea:goto L4fcbea;
case 0x4fcbeb:c.instructions+=2;goto B4fcbeb;
case 0x4fcbed:c.instructions+=1;goto B4fcbed;
case 0x4fcbf2:goto L4fcbf2;
case 0x4fcbf4:c.instructions+=1;goto B4fcbf4;
case 0x4fcbfa:goto L4fcbfa;
case 0x4fcbfc:c.instructions+=1;goto B4fcbfc;
case 0x4fcc01:goto L4fcc01;
case 0x4fcc03:c.instructions+=1;goto B4fcc03;
case 0x4fcc05:goto L4fcc05;
case 0x4fcc0b:c.instructions+=5;goto B4fcc0b;
case 0x4fcc11:c.instructions+=4;goto B4fcc11;
case 0x4fcc16:c.instructions+=3;goto B4fcc16;
case 0x4fcc1c:c.instructions+=2;goto B4fcc1c;
case 0x4fcc21:c.instructions+=1;goto B4fcc21;
case 0x4fcc26:goto L4fcc26;
case 0x4fcc29:c.instructions+=7;goto B4fcc29;
case 0x4fcc2f:c.instructions+=6;goto B4fcc2f;
case 0x4fcc32:c.instructions+=5;goto B4fcc32;
case 0x4fcc33:c.instructions+=4;goto B4fcc33;
case 0x4fcc36:c.instructions+=3;goto B4fcc36;
case 0x4fcc37:c.instructions+=2;goto B4fcc37;
case 0x4fcc38:c.instructions+=1;goto B4fcc38;
case 0x4fcc3a:goto L4fcc3a;
case 0x4fcc3f:goto L4fcc3f;
case 0x4fcc42:c.instructions+=5;goto B4fcc42;
case 0x4fcc45:c.instructions+=4;goto B4fcc45;
case 0x4fcc46:c.instructions+=3;goto B4fcc46;
case 0x4fcc4b:c.instructions+=2;goto B4fcc4b;
case 0x4fcc4c:c.instructions+=1;goto B4fcc4c;
case 0x4fcc51:goto L4fcc51;
case 0x4fcc54:c.instructions+=5;goto B4fcc54;
case 0x4fcc57:c.instructions+=4;goto B4fcc57;
case 0x4fcc58:c.instructions+=3;goto B4fcc58;
case 0x4fcc5a:c.instructions+=2;goto B4fcc5a;
case 0x4fcc5b:c.instructions+=1;goto B4fcc5b;
case 0x4fcc60:goto L4fcc60;
case 0x4fcc63:c.instructions+=5;goto B4fcc63;
case 0x4fcc64:c.instructions+=4;goto B4fcc64;
case 0x4fcc65:c.instructions+=3;goto B4fcc65;
case 0x4fcc66:c.instructions+=2;goto B4fcc66;
case 0x4fcc67:c.instructions+=1;goto B4fcc67;
case 0x4fcc6a:goto L4fcc6a;
case 0x4fcc6d:c.instructions+=7;goto B4fcc6d;
case 0x4fcc72:c.instructions+=6;goto B4fcc72;
case 0x4fcc77:c.instructions+=5;goto B4fcc77;
case 0x4fcc7c:c.instructions+=4;goto B4fcc7c;
case 0x4fcc81:c.instructions+=3;goto B4fcc81;
case 0x4fcc86:c.instructions+=2;goto B4fcc86;
case 0x4fcc87:c.instructions+=1;goto B4fcc87;
case 0x4fcc8c:goto L4fcc8c;
case 0x4fcc8f:c.instructions+=6;goto B4fcc8f;
case 0x4fcc92:c.instructions+=5;goto B4fcc92;
case 0x4fcc95:c.instructions+=4;goto B4fcc95;
case 0x4fcc96:c.instructions+=3;goto B4fcc96;
case 0x4fcc98:c.instructions+=2;goto B4fcc98;
case 0x4fcc99:c.instructions+=1;goto B4fcc99;
case 0x4fcc9e:goto L4fcc9e;
case 0x4fcca1:c.instructions+=5;goto B4fcca1;
case 0x4fcca2:c.instructions+=4;goto B4fcca2;
case 0x4fcca3:c.instructions+=3;goto B4fcca3;
case 0x4fcca4:c.instructions+=2;goto B4fcca4;
case 0x4fcca5:c.instructions+=1;goto B4fcca5;
case 0x4fcca8:goto L4fcca8;
case 0x4fccad:c.instructions+=1;goto B4fccad;
case 0x4fccaf:goto L4fccaf;
case 0x4fccb4:c.instructions+=1;goto B4fccb4;
case 0x4fccba:goto L4fccba;
case 0x4fccc0:c.instructions+=2;goto B4fccc0;
case 0x4fccc2:c.instructions+=1;goto B4fccc2;
case 0x4fccc8:goto L4fccc8;
case 0x4fccc9:c.instructions+=2;goto B4fccc9;
case 0x4fcccb:c.instructions+=1;goto B4fcccb;
case 0x4fccd0:goto L4fccd0;
case 0x4fccd1:c.instructions+=4;goto B4fccd1;
case 0x4fccd2:c.instructions+=3;goto B4fccd2;
case 0x4fccd3:c.instructions+=2;goto B4fccd3;
case 0x4fccd4:c.instructions+=1;goto B4fccd4;
case 0x4fccd7:goto L4fccd7;
case 0x4fccda:c.instructions+=2;goto B4fccda;
case 0x4fccdf:c.instructions+=1;goto B4fccdf;
case 0x4fcce1:goto L4fcce1;
case 0x4fcce4:c.instructions+=1;goto B4fcce4;
case 0x4fcce6:goto L4fcce6;
case 0x4fcce9:c.instructions+=5;goto B4fcce9;
case 0x4fcceb:c.instructions+=4;goto B4fcceb;
case 0x4fccf0:c.instructions+=3;goto B4fccf0;
case 0x4fccf1:c.instructions+=2;goto B4fccf1;
case 0x4fccf6:c.instructions+=1;goto B4fccf6;
case 0x4fccfb:goto L4fccfb;
case 0x4fccfe:c.instructions+=6;goto B4fccfe;
case 0x4fccff:c.instructions+=5;goto B4fccff;
case 0x4fcd00:c.instructions+=4;goto B4fcd00;
case 0x4fcd04:c.instructions+=3;goto B4fcd04;
case 0x4fcd05:c.instructions+=2;goto B4fcd05;
case 0x4fcd06:c.instructions+=1;goto B4fcd06;
case 0x4fcd09:goto L4fcd09;
case 0x4fcd0b:c.instructions+=1;goto B4fcd0b;
case 0x4fcd0d:goto L4fcd0d;
case 0x4fcd10:c.instructions+=1;goto B4fcd10;
case 0x4fcd12:goto L4fcd12;
case 0x4fcd13:c.instructions+=5;goto B4fcd13;
case 0x4fcd14:c.instructions+=4;goto B4fcd14;
case 0x4fcd18:c.instructions+=3;goto B4fcd18;
case 0x4fcd19:c.instructions+=2;goto B4fcd19;
case 0x4fcd1a:c.instructions+=1;goto B4fcd1a;
case 0x4fcd1d:goto L4fcd1d;
case 0x4fcd23:c.instructions+=2;goto B4fcd23;
case 0x4fcd25:c.instructions+=1;goto B4fcd25;
case 0x4fcd2a:goto L4fcd2a;
case 0x4fcd2c:c.instructions+=1;goto B4fcd2c;
case 0x4fcd2e:goto L4fcd2e;
case 0x4fcd33:c.instructions+=8;goto B4fcd33;
case 0x4fcd35:c.instructions+=7;goto B4fcd35;
case 0x4fcd39:c.instructions+=6;goto B4fcd39;
case 0x4fcd3d:c.instructions+=5;goto B4fcd3d;
case 0x4fcd43:c.instructions+=4;goto B4fcd43;
case 0x4fcd49:c.instructions+=3;goto B4fcd49;
case 0x4fcd4b:c.instructions+=2;goto B4fcd4b;
case 0x4fcd4e:c.instructions+=1;goto B4fcd4e;
case 0x4fcd50:goto L4fcd50;
case 0x4fcd53:c.instructions+=1;goto B4fcd53;
case 0x4fcd58:goto L4fcd58;
case 0x4fcd5a:c.instructions+=3;goto B4fcd5a;
case 0x4fcd5b:c.instructions+=2;goto B4fcd5b;
case 0x4fcd5c:c.instructions+=1;goto B4fcd5c;
case 0x4fcd61:goto L4fcd61;
case 0x4fcd67:c.instructions+=1;goto B4fcd67;
case 0x4fcd6a:goto L4fcd6a;
case 0x4fcd6b:goto L4fcd6b;
case 0x4fcd6c:c.instructions+=3;goto B4fcd6c;
case 0x4fcd6d:c.instructions+=2;goto B4fcd6d;
case 0x4fcd6e:c.instructions+=1;goto B4fcd6e;
case 0x4fcda0:goto L4fcda0;
case 0x4fcda4:c.instructions+=9;goto B4fcda4;
case 0x4fcda5:c.instructions+=8;goto B4fcda5;
case 0x4fcda9:c.instructions+=7;goto B4fcda9;
case 0x4fcdaa:c.instructions+=6;goto B4fcdaa;
case 0x4fcdab:c.instructions+=5;goto B4fcdab;
case 0x4fcdad:c.instructions+=4;goto B4fcdad;
case 0x4fcdb3:c.instructions+=3;goto B4fcdb3;
case 0x4fcdb4:c.instructions+=2;goto B4fcdb4;
case 0x4fcdb6:c.instructions+=1;goto B4fcdb6;
case 0x4fcdbc:goto L4fcdbc;
case 0x4fcdc2:goto L4fcdc2;
case 0x4fcdc8:c.instructions+=1;goto B4fcdc8;
case 0x4fcdce:goto L4fcdce;
case 0x4fcdd4:goto L4fcdd4;
case 0x4fcdda:c.instructions+=1;goto B4fcdda;
case 0x4fcde0:goto L4fcde0;
case 0x4fcde2:goto L4fcde2;
case 0x4fcde8:c.instructions+=1;goto B4fcde8;
case 0x4fcdea:goto L4fcdea;
case 0x4fcdf0:c.instructions+=1;goto B4fcdf0;
case 0x4fcdf6:goto L4fcdf6;
case 0x4fcdf7:c.instructions+=1;goto B4fcdf7;
case 0x4fcdfc:goto L4fcdfc;
case 0x4fce01:goto L4fce01;
case 0x4fce07:c.instructions+=2;goto B4fce07;
case 0x4fce08:c.instructions+=1;goto B4fce08;
case 0x4fce0d:goto L4fce0d;
case 0x4fce10:c.instructions+=4;goto B4fce10;
case 0x4fce12:c.instructions+=3;goto B4fce12;
case 0x4fce17:c.instructions+=2;goto B4fce17;
case 0x4fce21:c.instructions+=1;goto B4fce21;
case 0x4fce26:goto L4fce26;
case 0x4fce28:c.instructions+=1;goto B4fce28;
case 0x4fce2d:goto L4fce2d;
case 0x4fce34:c.instructions+=2;goto B4fce34;
case 0x4fce3b:c.instructions+=1;goto B4fce3b;
case 0x4fce41:goto L4fce41;
case 0x4fce43:c.instructions+=2;goto B4fce43;
case 0x4fce48:c.instructions+=1;goto B4fce48;
case 0x4fce4d:goto L4fce4d;
case 0x4fce4e:c.instructions+=4;goto B4fce4e;
case 0x4fce4f:c.instructions+=3;goto B4fce4f;
case 0x4fce50:c.instructions+=2;goto B4fce50;
case 0x4fce51:c.instructions+=1;goto B4fce51;
case 0x4fce54:goto L4fce54;
case 0x4fce5b:c.instructions+=1;goto B4fce5b;
case 0x4fce61:goto L4fce61;
case 0x4fce67:c.instructions+=2;goto B4fce67;
case 0x4fce6e:c.instructions+=1;goto B4fce6e;
case 0x4fce73:goto L4fce73;
case 0x4fce79:c.instructions+=1;goto B4fce79;
case 0x4fce7b:goto L4fce7b;
case 0x4fce81:c.instructions+=1;goto B4fce81;
case 0x4fce87:goto L4fce87;
case 0x4fce8a:c.instructions+=2;goto B4fce8a;
case 0x4fce8b:c.instructions+=1;goto B4fce8b;
case 0x4fce90:goto L4fce90;
case 0x4fce93:c.instructions+=2;goto B4fce93;
case 0x4fce95:c.instructions+=1;goto B4fce95;
case 0x4fce9b:goto L4fce9b;
case 0x4fce9e:c.instructions+=2;goto B4fce9e;
case 0x4fcea3:c.instructions+=1;goto B4fcea3;
case 0x4fcea5:goto L4fcea5;
case 0x4fceaa:c.instructions+=1;goto B4fceaa;
case 0x4fceac:goto L4fceac;
case 0x4fceb1:c.instructions+=1;goto B4fceb1;
case 0x4fceb3:goto L4fceb3;
case 0x4fceb8:c.instructions+=1;goto B4fceb8;
case 0x4fceba:goto L4fceba;
case 0x4fcec0:c.instructions+=1;goto B4fcec0;
case 0x4fcec2:goto L4fcec2;
case 0x4fcec4:c.instructions+=1;goto B4fcec4;
case 0x4fcec9:goto L4fcec9;
case 0x4fcece:goto L4fcece;
case 0x4fced0:c.instructions+=2;goto B4fced0;
case 0x4fced7:c.instructions+=1;goto B4fced7;
case 0x4fcedc:goto L4fcedc;
case 0x4fcee1:goto L4fcee1;
case 0x4fcee7:c.instructions+=1;goto B4fcee7;
case 0x4fceec:goto L4fceec;
case 0x4fcef2:c.instructions+=2;goto B4fcef2;
case 0x4fcef5:c.instructions+=1;goto B4fcef5;
case 0x4fcefb:goto L4fcefb;
case 0x4fcf02:goto L4fcf02;
case 0x4fcf04:c.instructions+=1;goto B4fcf04;
case 0x4fcf09:goto L4fcf09;
case 0x4fcf0e:goto L4fcf0e;
case 0x4fcf10:c.instructions+=1;goto B4fcf10;
case 0x4fcf15:goto L4fcf15;
case 0x4fcf1a:goto L4fcf1a;
case 0x4fcf1c:c.instructions+=1;goto B4fcf1c;
case 0x4fcf21:goto L4fcf21;
case 0x4fcf26:goto L4fcf26;
case 0x4fcf29:c.instructions+=4;goto B4fcf29;
case 0x4fcf2a:c.instructions+=3;goto B4fcf2a;
case 0x4fcf2f:c.instructions+=2;goto B4fcf2f;
case 0x4fcf30:c.instructions+=1;goto B4fcf30;
case 0x4fcf35:goto L4fcf35;
case 0x4fcf38:c.instructions+=1;goto B4fcf38;
case 0x4fcf3d:goto L4fcf3d;
case 0x4fcf43:c.instructions+=1;goto B4fcf43;
case 0x4fcf49:goto L4fcf49;
case 0x4fcf4f:goto L4fcf4f;
case 0x4fcf55:c.instructions+=1;goto B4fcf55;
case 0x4fcf5b:goto L4fcf5b;
case 0x4fcf61:c.instructions+=1;goto B4fcf61;
case 0x4fcf67:goto L4fcf67;
case 0x4fcf6a:c.instructions+=2;goto B4fcf6a;
case 0x4fcf6c:c.instructions+=1;goto B4fcf6c;
case 0x4fcf6e:goto L4fcf6e;
case 0x4fcf71:goto L4fcf71;
case 0x4fcf74:c.instructions+=2;goto B4fcf74;
case 0x4fcf76:c.instructions+=1;goto B4fcf76;
case 0x4fcf7b:goto L4fcf7b;
case 0x4fcf7c:c.instructions+=2;goto B4fcf7c;
case 0x4fcf7e:c.instructions+=1;goto B4fcf7e;
case 0x4fcf83:goto L4fcf83;
case 0x4fcf85:c.instructions+=1;goto B4fcf85;
case 0x4fcf87:goto L4fcf87;
case 0x4fcf8d:c.instructions+=2;goto B4fcf8d;
case 0x4fcf8f:c.instructions+=1;goto B4fcf8f;
case 0x4fcf95:goto L4fcf95;
case 0x4fcf97:c.instructions+=3;goto B4fcf97;
case 0x4fcf99:c.instructions+=2;goto B4fcf99;
case 0x4fcfa3:c.instructions+=1;goto B4fcfa3;
case 0x4fcfa8:goto L4fcfa8;
case 0x4fcfad:goto L4fcfad;
case 0x4fcfb0:c.instructions+=5;goto B4fcfb0;
case 0x4fcfb2:c.instructions+=4;goto B4fcfb2;
case 0x4fcfb7:c.instructions+=3;goto B4fcfb7;
case 0x4fcfbc:c.instructions+=2;goto B4fcfbc;
case 0x4fcfbd:c.instructions+=1;goto B4fcfbd;
case 0x4fcfc2:goto L4fcfc2;
case 0x4fcfc5:c.instructions+=2;goto B4fcfc5;
case 0x4fcfc7:c.instructions+=1;goto B4fcfc7;
case 0x4fcfcc:goto L4fcfcc;
case 0x4fcfcf:c.instructions+=3;goto B4fcfcf;
case 0x4fcfd0:c.instructions+=2;goto B4fcfd0;
case 0x4fcfd2:c.instructions+=1;goto B4fcfd2;
case 0x4fcfd7:goto L4fcfd7;
case 0x4fcfd8:c.instructions+=2;goto B4fcfd8;
case 0x4fcfda:c.instructions+=1;goto B4fcfda;
case 0x4fcfdf:goto L4fcfdf;
case 0x4fcfe2:c.instructions+=2;goto B4fcfe2;
case 0x4fcfe4:c.instructions+=1;goto B4fcfe4;
case 0x4fcfe9:goto L4fcfe9;
case 0x4fcfea:c.instructions+=3;goto B4fcfea;
case 0x4fcfec:c.instructions+=2;goto B4fcfec;
case 0x4fcff2:c.instructions+=1;goto B4fcff2;
case 0x4fcff7:goto L4fcff7;
case 0x4fcff9:c.instructions+=1;goto B4fcff9;
case 0x4fcffe:goto L4fcffe;
default:missing_instruction(c.pc);}
B4fc000:L4fc000:{c.instructions+=2;NFSU2_TR(0x4fc000);
s4(0x8364d4,u32(0x0ull));
}
B4fc00a:{NFSU2_TR(0x4fc00a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc00full));
TAIL_STATIC(0x4ec6f0u,4ec);
}
B4fc00f:L4fc00f:{c.instructions+=4;NFSU2_TR(0x4fc00f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4fc011:{NFSU2_TR(0x4fc011);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fc013:{NFSU2_TR(0x4fc013);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4fc01b:{NFSU2_TR(0x4fc01b);
if(r1(R+518)){{goto L4fc039;}}
}
B4fc01d:L4fc01d:{c.instructions+=1;NFSU2_TR(0x4fc01d);
__builtin_memmove((R+4),(R+4),4);
}
B4fc020:L4fc020:{c.instructions+=6;NFSU2_TR(0x4fc020);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4fc022:{NFSU2_TR(0x4fc022);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fc025:{NFSU2_TR(0x4fc025);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4fc027:{NFSU2_TR(0x4fc027);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc028:{NFSU2_TR(0x4fc028);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fc02b:{NFSU2_TR(0x4fc02b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc030ull));
TAIL_STATIC(0x440ef0u,440);
}
B4fc030:L4fc030:{c.instructions+=4;NFSU2_TR(0x4fc030);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4fc032:{NFSU2_TR(0x4fc032);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fc035:{NFSU2_TR(0x4fc035);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fc037:{NFSU2_TR(0x4fc037);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fc020u);}goto L4fc020;}}
}
B4fc039:L4fc039:{c.instructions+=6;NFSU2_TR(0x4fc039);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fc03d:{NFSU2_TR(0x4fc03d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fc03e:{NFSU2_TR(0x4fc03e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fc03f:{NFSU2_TR(0x4fc03f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fc046:{NFSU2_TR(0x4fc046);
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
B4fc049:{NFSU2_TR(0x4fc049);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fc050:L4fc050:{c.instructions+=2;NFSU2_TR(0x4fc050);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4fc058:{NFSU2_TR(0x4fc058);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fc09e;}}
}
B4fc05a:L4fc05a:{c.instructions+=4;NFSU2_TR(0x4fc05a);
__builtin_memmove((R+0),gp(0x836340),4);
}
B4fc05f:{NFSU2_TR(0x4fc05f);
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
B4fc061:{NFSU2_TR(0x4fc061);
s4(0x850078,u32(0x2ull));
}
B4fc06b:{NFSU2_TR(0x4fc06b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fc09e;}}
}
B4fc06d:L4fc06d:{c.instructions+=3;NFSU2_TR(0x4fc06d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc06e:{NFSU2_TR(0x4fc06e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc06f:{NFSU2_TR(0x4fc06f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc074ull));
TAIL_STATIC(0x4ef1b0u,4ef);
}
B4fc074:L4fc074:{c.instructions+=6;NFSU2_TR(0x4fc074);
__builtin_memmove((R+0),gp(0x7f445c),4);
}
B4fc079:{NFSU2_TR(0x4fc079);
__builtin_memmove((R+4),gp(0x836340),4);
}
B4fc07f:{NFSU2_TR(0x4fc07f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc080:{NFSU2_TR(0x4fc080);
__builtin_memmove((R+24),(R+0),4);
}
B4fc082:{NFSU2_TR(0x4fc082);
__builtin_memmove((R+28),(R+4),4);
}
B4fc084:{NFSU2_TR(0x4fc084);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc089ull));
TAIL_STATIC(0x4b2960u,4b2);
}
B4fc089:L4fc089:{c.instructions+=6;NFSU2_TR(0x4fc089);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc08b:{NFSU2_TR(0x4fc08b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fc08e:{NFSU2_TR(0x4fc08e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fc092:{NFSU2_TR(0x4fc092);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc093:{NFSU2_TR(0x4fc093);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc094:{NFSU2_TR(0x4fc094);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc099ull));
TAIL_STATIC(0x537980u,537);
}
B4fc099:L4fc099:{c.instructions+=3;NFSU2_TR(0x4fc099);
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
B4fc09c:{NFSU2_TR(0x4fc09c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fc09d:{NFSU2_TR(0x4fc09d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fc09e:L4fc09e:{c.instructions+=1;NFSU2_TR(0x4fc09e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fc0b0:L4fc0b0:{c.instructions+=8;NFSU2_TR(0x4fc0b0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc0b2:{NFSU2_TR(0x4fc0b2);
u8 U[4];
w4(U+0,u32(0x776e94ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc0b7:{NFSU2_TR(0x4fc0b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fc0bd:{NFSU2_TR(0x4fc0bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc0be:{NFSU2_TR(0x4fc0be);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fc0c5:{NFSU2_TR(0x4fc0c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc0c6:{NFSU2_TR(0x4fc0c6);
u8 U[4];
w4(U+0,u32(0x1c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc0cb:{NFSU2_TR(0x4fc0cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc0d0ull));
TAIL_STATIC(0x575620u,575);
}
B4fc0d0:L4fc0d0:{c.instructions+=5;NFSU2_TR(0x4fc0d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fc0d3:{NFSU2_TR(0x4fc0d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4fc0d7:{NFSU2_TR(0x4fc0d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fc0d9:{NFSU2_TR(0x4fc0d9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4fc0e1:{NFSU2_TR(0x4fc0e1);
if(r1(R+518)){{goto L4fc0fe;}}
}
B4fc0e3:L4fc0e3:{c.instructions+=4;NFSU2_TR(0x4fc0e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fc0e7:{NFSU2_TR(0x4fc0e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc0e8:{NFSU2_TR(0x4fc0e8);
__builtin_memmove((R+4),(R+0),4);
}
B4fc0ea:{NFSU2_TR(0x4fc0ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc0efull));
TAIL_STATIC(0x4f9930u,4f9);
}
B4fc0ef:L4fc0ef:{c.instructions+=4;NFSU2_TR(0x4fc0ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fc0f3:{NFSU2_TR(0x4fc0f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fc0fa:{NFSU2_TR(0x4fc0fa);
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
B4fc0fd:{NFSU2_TR(0x4fc0fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fc0fe:L4fc0fe:{c.instructions+=5;NFSU2_TR(0x4fc0fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fc102:{NFSU2_TR(0x4fc102);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4fc104:{NFSU2_TR(0x4fc104);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fc10b:{NFSU2_TR(0x4fc10b);
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
B4fc10e:{NFSU2_TR(0x4fc10e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fc110:L4fc110:{c.instructions+=8;NFSU2_TR(0x4fc110);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc112:{NFSU2_TR(0x4fc112);
u8 U[4];
w4(U+0,u32(0x776eb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc117:{NFSU2_TR(0x4fc117);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fc11d:{NFSU2_TR(0x4fc11d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc11e:{NFSU2_TR(0x4fc11e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fc125:{NFSU2_TR(0x4fc125);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc126:{NFSU2_TR(0x4fc126);
u8 U[4];
w4(U+0,u32(0x1b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc12b:{NFSU2_TR(0x4fc12b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc130ull));
TAIL_STATIC(0x575620u,575);
}
B4fc130:L4fc130:{c.instructions+=5;NFSU2_TR(0x4fc130);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fc133:{NFSU2_TR(0x4fc133);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4fc137:{NFSU2_TR(0x4fc137);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fc139:{NFSU2_TR(0x4fc139);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4fc141:{NFSU2_TR(0x4fc141);
if(r1(R+518)){{goto L4fc15e;}}
}
B4fc143:L4fc143:{c.instructions+=4;NFSU2_TR(0x4fc143);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fc147:{NFSU2_TR(0x4fc147);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc148:{NFSU2_TR(0x4fc148);
__builtin_memmove((R+4),(R+0),4);
}
B4fc14a:{NFSU2_TR(0x4fc14a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc14full));
TAIL_STATIC(0x4f9ad0u,4f9);
}
B4fc14f:L4fc14f:{c.instructions+=4;NFSU2_TR(0x4fc14f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fc153:{NFSU2_TR(0x4fc153);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fc15a:{NFSU2_TR(0x4fc15a);
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
B4fc15d:{NFSU2_TR(0x4fc15d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fc15e:L4fc15e:{c.instructions+=5;NFSU2_TR(0x4fc15e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fc162:{NFSU2_TR(0x4fc162);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4fc164:{NFSU2_TR(0x4fc164);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fc16b:{NFSU2_TR(0x4fc16b);
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
B4fc16e:{NFSU2_TR(0x4fc16e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fc170:L4fc170:{c.instructions+=3;NFSU2_TR(0x4fc170);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc171:{NFSU2_TR(0x4fc171);
__builtin_memmove((R+24),(R+4),4);
}
B4fc173:{NFSU2_TR(0x4fc173);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc178ull));
TAIL_STATIC(0x4f9c70u,4f9);
}
B4fc178:L4fc178:{c.instructions+=2;NFSU2_TR(0x4fc178);
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
B4fc17d:{NFSU2_TR(0x4fc17d);
if(r1(R+518)){{goto L4fc188;}}
}
B4fc17f:L4fc17f:{c.instructions+=2;NFSU2_TR(0x4fc17f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc180:{NFSU2_TR(0x4fc180);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc185ull));
TAIL_STATIC(0x575630u,575);
}
B4fc185:L4fc185:{c.instructions+=1;NFSU2_TR(0x4fc185);
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
B4fc188:L4fc188:{c.instructions+=3;NFSU2_TR(0x4fc188);
__builtin_memmove((R+0),(R+24),4);
}
B4fc18a:{NFSU2_TR(0x4fc18a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fc18b:{NFSU2_TR(0x4fc18b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fc190:L4fc190:{c.instructions+=8;NFSU2_TR(0x4fc190);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc192:{NFSU2_TR(0x4fc192);
u8 U[4];
w4(U+0,u32(0x776ed4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc197:{NFSU2_TR(0x4fc197);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fc19d:{NFSU2_TR(0x4fc19d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc19e:{NFSU2_TR(0x4fc19e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fc1a5:{NFSU2_TR(0x4fc1a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc1a6:{NFSU2_TR(0x4fc1a6);
u8 U[4];
w4(U+0,u32(0x1b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc1ab:{NFSU2_TR(0x4fc1ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc1b0ull));
TAIL_STATIC(0x575620u,575);
}
B4fc1b0:L4fc1b0:{c.instructions+=5;NFSU2_TR(0x4fc1b0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fc1b3:{NFSU2_TR(0x4fc1b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4fc1b7:{NFSU2_TR(0x4fc1b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fc1b9:{NFSU2_TR(0x4fc1b9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4fc1c1:{NFSU2_TR(0x4fc1c1);
if(r1(R+518)){{goto L4fc1de;}}
}
B4fc1c3:L4fc1c3:{c.instructions+=4;NFSU2_TR(0x4fc1c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fc1c7:{NFSU2_TR(0x4fc1c7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc1c8:{NFSU2_TR(0x4fc1c8);
__builtin_memmove((R+4),(R+0),4);
}
B4fc1ca:{NFSU2_TR(0x4fc1ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc1cfull));
TAIL_STATIC(0x4f9d90u,4f9);
}
B4fc1cf:L4fc1cf:{c.instructions+=4;NFSU2_TR(0x4fc1cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fc1d3:{NFSU2_TR(0x4fc1d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fc1da:{NFSU2_TR(0x4fc1da);
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
B4fc1dd:{NFSU2_TR(0x4fc1dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fc1de:L4fc1de:{c.instructions+=5;NFSU2_TR(0x4fc1de);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fc1e2:{NFSU2_TR(0x4fc1e2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4fc1e4:{NFSU2_TR(0x4fc1e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fc1eb:{NFSU2_TR(0x4fc1eb);
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
B4fc1ee:{NFSU2_TR(0x4fc1ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fc1f0:L4fc1f0:{c.instructions+=9;NFSU2_TR(0x4fc1f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc1f1:{NFSU2_TR(0x4fc1f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4fc1f5:{NFSU2_TR(0x4fc1f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc1f6:{NFSU2_TR(0x4fc1f6);
__builtin_memmove((R+24),(R+4),4);
}
B4fc1f8:{NFSU2_TR(0x4fc1f8);
__builtin_memmove((R+4),gp(0x85ad28),4);
}
B4fc1fe:{NFSU2_TR(0x4fc1fe);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f4454ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+20))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B4fc205:{NFSU2_TR(0x4fc205);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc206:{NFSU2_TR(0x4fc206);
__builtin_memmove((R+28),gp(0x850078),4);
}
B4fc20c:{NFSU2_TR(0x4fc20c);
if(r1(R+518)){{goto L4fc21b;}}
}
B4fc20e:L4fc20e:{c.instructions+=2;NFSU2_TR(0x4fc20e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fc210:{NFSU2_TR(0x4fc210);
if(r1(R+518)){{goto L4fc21b;}}
}
B4fc212:L4fc212:{c.instructions+=2;NFSU2_TR(0x4fc212);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B4fc215:{NFSU2_TR(0x4fc215);
if(r1(R+518)){{goto L4fcd6b;}}
}
B4fc21b:L4fc21b:{c.instructions+=4;NFSU2_TR(0x4fc21b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fc21f:{NFSU2_TR(0x4fc21f);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x5f5e3886ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x5f5e3886ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fc224:{NFSU2_TR(0x4fc224);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc225:{NFSU2_TR(0x4fc225);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4fc5d3;}}
}
B4fc22b:L4fc22b:{c.instructions+=1;NFSU2_TR(0x4fc22b);
if(r1(R+518)){{goto L4fc5ad;}}
}
B4fc231:L4fc231:{c.instructions+=2;NFSU2_TR(0x4fc231);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x406415e3ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fc236:{NFSU2_TR(0x4fc236);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4fc4c0;}}
}
B4fc23c:L4fc23c:{c.instructions+=1;NFSU2_TR(0x4fc23c);
if(r1(R+518)){{goto L4fc2e5;}}
}
B4fc242:L4fc242:{c.instructions+=2;NFSU2_TR(0x4fc242);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x251bf83eull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x251bf83eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fc247:{NFSU2_TR(0x4fc247);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4fc2a6;}}
}
B4fc249:L4fc249:{c.instructions+=1;NFSU2_TR(0x4fc249);
if(r1(R+518)){{goto L4fc287;}}
}
B4fc24b:L4fc24b:{c.instructions+=2;NFSU2_TR(0x4fc24b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fc250:{NFSU2_TR(0x4fc250);
if(r1(R+518)){{goto L4fc2e5;}}
}
B4fc256:L4fc256:{c.instructions+=2;NFSU2_TR(0x4fc256);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x1a2826e1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1a2826e1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x1a2826e1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fc25b:{NFSU2_TR(0x4fc25b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fcd6a;}}
}
B4fc261:L4fc261:{c.instructions+=7;NFSU2_TR(0x4fc261);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fc264:{NFSU2_TR(0x4fc264);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4fc267:{NFSU2_TR(0x4fc267);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa79ull))+u32(r4(U+0))));
w1(U+8,u8(0x0ull));
s1(u32(r4(U+4)),r1(U+8));
}
B4fc26f:{NFSU2_TR(0x4fc26f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fc272:{NFSU2_TR(0x4fc272);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc273:{NFSU2_TR(0x4fc273);
u8 U[4];
w4(U+0,u32(0xba5b5fceull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc278:{NFSU2_TR(0x4fc278);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc27dull));
TAIL_STATIC(0x55dda0u,55d);
}
B4fc27d:L4fc27d:{c.instructions+=6;NFSU2_TR(0x4fc27d);
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
B4fc280:{NFSU2_TR(0x4fc280);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fc281:{NFSU2_TR(0x4fc281);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fc282:{NFSU2_TR(0x4fc282);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fc283:{NFSU2_TR(0x4fc283);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fc284:{NFSU2_TR(0x4fc284);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fc287:L4fc287:{c.instructions+=6;NFSU2_TR(0x4fc287);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fc28a:{NFSU2_TR(0x4fc28a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc28c:{NFSU2_TR(0x4fc28c);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc291:{NFSU2_TR(0x4fc291);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc296:{NFSU2_TR(0x4fc296);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc297:{NFSU2_TR(0x4fc297);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc29cull));
TAIL_STATIC(0x537c00u,537);
}
B4fc29c:L4fc29c:{c.instructions+=6;NFSU2_TR(0x4fc29c);
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
B4fc29f:{NFSU2_TR(0x4fc29f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fc2a0:{NFSU2_TR(0x4fc2a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fc2a1:{NFSU2_TR(0x4fc2a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fc2a2:{NFSU2_TR(0x4fc2a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fc2a3:{NFSU2_TR(0x4fc2a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fc2a6:L4fc2a6:{c.instructions+=2;NFSU2_TR(0x4fc2a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34dc1becull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fc2ab:{NFSU2_TR(0x4fc2ab);
if(r1(R+518)){{goto L4fc2c6;}}
}
B4fc2ad:L4fc2ad:{c.instructions+=2;NFSU2_TR(0x4fc2ad);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x35f8620bull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x35f8620bull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x35f8620bull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fc2b2:{NFSU2_TR(0x4fc2b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fcd6a;}}
}
B4fc2b8:L4fc2b8:{c.instructions+=6;NFSU2_TR(0x4fc2b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fc2b9:{NFSU2_TR(0x4fc2b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fc2ba:{NFSU2_TR(0x4fc2ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a7ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4fc2c1:{NFSU2_TR(0x4fc2c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fc2c2:{NFSU2_TR(0x4fc2c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fc2c3:{NFSU2_TR(0x4fc2c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fc2c6:L4fc2c6:{c.instructions+=6;NFSU2_TR(0x4fc2c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fc2c9:{NFSU2_TR(0x4fc2c9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc2cb:{NFSU2_TR(0x4fc2cb);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc2d0:{NFSU2_TR(0x4fc2d0);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc2d5:{NFSU2_TR(0x4fc2d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc2d6:{NFSU2_TR(0x4fc2d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc2dbull));
TAIL_STATIC(0x537c00u,537);
}
B4fc2db:L4fc2db:{c.instructions+=6;NFSU2_TR(0x4fc2db);
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
B4fc2de:{NFSU2_TR(0x4fc2de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fc2df:{NFSU2_TR(0x4fc2df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fc2e0:{NFSU2_TR(0x4fc2e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fc2e1:{NFSU2_TR(0x4fc2e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fc2e2:{NFSU2_TR(0x4fc2e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fc2e5:L4fc2e5:{c.instructions+=3;NFSU2_TR(0x4fc2e5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4fc2eb:{NFSU2_TR(0x4fc2eb);
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
B4fc2ed:{NFSU2_TR(0x4fc2ed);
if(r1(R+518)){{goto L4fcd6a;}}
}
B4fc2f3:L4fc2f3:{c.instructions+=4;NFSU2_TR(0x4fc2f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fc2f6:{NFSU2_TR(0x4fc2f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc2f7:{NFSU2_TR(0x4fc2f7);
w4(R+4,u32(0x83a9d0ull));
}
B4fc2fc:{NFSU2_TR(0x4fc2fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc301ull));
TAIL_STATIC(0x495240u,495);
}
B4fc301:L4fc301:{c.instructions+=2;NFSU2_TR(0x4fc301);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fc304:{NFSU2_TR(0x4fc304);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fc34d;}}
}
B4fc306:L4fc306:{c.instructions+=2;NFSU2_TR(0x4fc306);
__builtin_memmove((R+4),(R+0),4);
}
B4fc308:{NFSU2_TR(0x4fc308);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc30dull));
TAIL_STATIC(0x5165e0u,516);
}
B4fc30d:L4fc30d:{c.instructions+=2;NFSU2_TR(0x4fc30d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fc30f:{NFSU2_TR(0x4fc30f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fc347;}}
}
B4fc311:L4fc311:{c.instructions+=8;NFSU2_TR(0x4fc311);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fc314:{NFSU2_TR(0x4fc314);
u8 U[4];
w4(U+0,u32(0x91921a8dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc319:{NFSU2_TR(0x4fc319);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc31e:{NFSU2_TR(0x4fc31e);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc323:{NFSU2_TR(0x4fc323);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc328:{NFSU2_TR(0x4fc328);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc32d:{NFSU2_TR(0x4fc32d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc32e:{NFSU2_TR(0x4fc32e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc333ull));
TAIL_STATIC(0x558570u,558);
}
B4fc333:L4fc333:{c.instructions+=3;NFSU2_TR(0x4fc333);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4fc336:{NFSU2_TR(0x4fc336);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc338:{NFSU2_TR(0x4fc338);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc33dull));
TAIL_STATIC(0x50d180u,50d);
}
B4fc33d:L4fc33d:{c.instructions+=6;NFSU2_TR(0x4fc33d);
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
B4fc340:{NFSU2_TR(0x4fc340);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fc341:{NFSU2_TR(0x4fc341);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fc342:{NFSU2_TR(0x4fc342);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fc343:{NFSU2_TR(0x4fc343);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fc344:{NFSU2_TR(0x4fc344);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fc347:L4fc347:{c.instructions+=1;NFSU2_TR(0x4fc347);
__builtin_memmove((R+28),gp(0x850078),4);
}
B4fc34d:L4fc34d:{c.instructions+=2;NFSU2_TR(0x4fc34d);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x100ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x100ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fc353:{NFSU2_TR(0x4fc353);
if(r1(R+518)){{goto L4fcd6a;}}
}
B4fc359:L4fc359:{c.instructions+=2;NFSU2_TR(0x4fc359);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fc35c:{NFSU2_TR(0x4fc35c);
if(r1(R+518)){{goto L4fc423;}}
}
B4fc362:L4fc362:{c.instructions+=2;NFSU2_TR(0x4fc362);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fc365:{NFSU2_TR(0x4fc365);
if(r1(R+518)){{goto L4fc489;}}
}
B4fc36b:L4fc36b:{c.instructions+=2;NFSU2_TR(0x4fc36b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fc371:{NFSU2_TR(0x4fc371);
if(r1(R+518)){{goto L4fc423;}}
}
B4fc377:L4fc377:{c.instructions+=3;NFSU2_TR(0x4fc377);
u8 U[8];
__builtin_memmove((U+0),gp(0x83aab4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fc37e:{NFSU2_TR(0x4fc37e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc37f:{NFSU2_TR(0x4fc37f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fc3d4;}}
}
B4fc381:L4fc381:{c.instructions+=1;NFSU2_TR(0x4fc381);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc386ull));
TAIL_STATIC(0x50d2a0u,50d);
}
B4fc386:L4fc386:{c.instructions+=2;NFSU2_TR(0x4fc386);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fc389:{NFSU2_TR(0x4fc389);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83a9d8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B4fc390:L4fc390:{c.instructions+=4;NFSU2_TR(0x4fc390);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4fc395:{NFSU2_TR(0x4fc395);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fc398:{NFSU2_TR(0x4fc398);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fc39b:{NFSU2_TR(0x4fc39b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fc3be;}}
}
B4fc39d:L4fc39d:{c.instructions+=3;NFSU2_TR(0x4fc39d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fc3a0:{NFSU2_TR(0x4fc3a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fc3a2:{NFSU2_TR(0x4fc3a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fc3be;}}
}
B4fc3a4:L4fc3a4:{c.instructions+=3;NFSU2_TR(0x4fc3a4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc3a6:{NFSU2_TR(0x4fc3a6);
__builtin_memmove((R+4),(R+24),4);
}
B4fc3a8:{NFSU2_TR(0x4fc3a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc3adull));
TAIL_STATIC(0x4fa2a0u,4fa);
}
B4fc3ad:L4fc3ad:{c.instructions+=2;NFSU2_TR(0x4fc3ad);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc3af:{NFSU2_TR(0x4fc3af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc3b4ull));
TAIL_STATIC(0x50d180u,50d);
}
B4fc3b4:L4fc3b4:{c.instructions+=6;NFSU2_TR(0x4fc3b4);
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
B4fc3b7:{NFSU2_TR(0x4fc3b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fc3b8:{NFSU2_TR(0x4fc3b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fc3b9:{NFSU2_TR(0x4fc3b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fc3ba:{NFSU2_TR(0x4fc3ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fc3bb:{NFSU2_TR(0x4fc3bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fc3be:L4fc3be:{c.instructions+=1;NFSU2_TR(0x4fc3be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc3c3ull));
TAIL_STATIC(0x53fc20u,53f);
}
B4fc3c3:L4fc3c3:{c.instructions+=2;NFSU2_TR(0x4fc3c3);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc3c5:{NFSU2_TR(0x4fc3c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc3caull));
TAIL_STATIC(0x50d180u,50d);
}
B4fc3ca:L4fc3ca:{c.instructions+=6;NFSU2_TR(0x4fc3ca);
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
B4fc3cd:{NFSU2_TR(0x4fc3cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fc3ce:{NFSU2_TR(0x4fc3ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fc3cf:{NFSU2_TR(0x4fc3cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fc3d0:{NFSU2_TR(0x4fc3d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fc3d1:{NFSU2_TR(0x4fc3d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fc3d4:L4fc3d4:{c.instructions+=5;NFSU2_TR(0x4fc3d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fc3d7:{NFSU2_TR(0x4fc3d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4fc3da:{NFSU2_TR(0x4fc3da);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa6aull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B4fc3e1:{NFSU2_TR(0x4fc3e1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fc3e3:{NFSU2_TR(0x4fc3e3);
if(r1(R+518)){{goto L4fc40f;}}
}
B4fc3e5:L4fc3e5:{c.instructions+=1;NFSU2_TR(0x4fc3e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc3eaull));
TAIL_STATIC(0x50d2a0u,50d);
}
B4fc3ea:L4fc3ea:{c.instructions+=5;NFSU2_TR(0x4fc3ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fc3ed:{NFSU2_TR(0x4fc3ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83a9d8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B4fc3f4:{NFSU2_TR(0x4fc3f4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fc3f7:{NFSU2_TR(0x4fc3f7);
__builtin_memmove((R+4),(R+24),4);
}
B4fc3f9:{NFSU2_TR(0x4fc3f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc3feull));
TAIL_STATIC(0x497d50u,497);
}
B4fc3fe:L4fc3fe:{c.instructions+=2;NFSU2_TR(0x4fc3fe);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc400:{NFSU2_TR(0x4fc400);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc405ull));
TAIL_STATIC(0x50d180u,50d);
}
B4fc405:L4fc405:{c.instructions+=6;NFSU2_TR(0x4fc405);
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
B4fc408:{NFSU2_TR(0x4fc408);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fc409:{NFSU2_TR(0x4fc409);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fc40a:{NFSU2_TR(0x4fc40a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fc40b:{NFSU2_TR(0x4fc40b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fc40c:{NFSU2_TR(0x4fc40c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fc40f:L4fc40f:{c.instructions+=1;NFSU2_TR(0x4fc40f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc414ull));
TAIL_STATIC(0x50d2a0u,50d);
}
B4fc414:L4fc414:{c.instructions+=3;NFSU2_TR(0x4fc414);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fc417:{NFSU2_TR(0x4fc417);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83a9d8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B4fc41e:{NFSU2_TR(0x4fc41e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fc390u);}goto L4fc390;}
}
B4fc423:L4fc423:{c.instructions+=2;NFSU2_TR(0x4fc423);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fc426:{NFSU2_TR(0x4fc426);
if(r1(R+518)){{goto L4fc489;}}
}
B4fc428:L4fc428:{c.instructions+=2;NFSU2_TR(0x4fc428);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fc42b:{NFSU2_TR(0x4fc42b);
if(r1(R+518)){{goto L4fc44d;}}
}
B4fc42d:L4fc42d:{c.instructions+=2;NFSU2_TR(0x4fc42d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fc433:{NFSU2_TR(0x4fc433);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fc4af;}}
}
B4fc435:L4fc435:{c.instructions+=2;NFSU2_TR(0x4fc435);
__builtin_memmove((R+4),(R+24),4);
}
B4fc437:{NFSU2_TR(0x4fc437);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc43cull));
TAIL_STATIC(0x498000u,498);
}
B4fc43c:L4fc43c:{c.instructions+=2;NFSU2_TR(0x4fc43c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc43e:{NFSU2_TR(0x4fc43e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc443ull));
TAIL_STATIC(0x50d180u,50d);
}
B4fc443:L4fc443:{c.instructions+=6;NFSU2_TR(0x4fc443);
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
B4fc446:{NFSU2_TR(0x4fc446);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fc447:{NFSU2_TR(0x4fc447);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fc448:{NFSU2_TR(0x4fc448);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fc449:{NFSU2_TR(0x4fc449);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fc44a:{NFSU2_TR(0x4fc44a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fc44d:L4fc44d:{c.instructions+=9;NFSU2_TR(0x4fc44d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fc450:{NFSU2_TR(0x4fc450);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fc456:{NFSU2_TR(0x4fc456);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fc459:{NFSU2_TR(0x4fc459);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fc45c:{NFSU2_TR(0x4fc45c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc45d:{NFSU2_TR(0x4fc45d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc45e:{NFSU2_TR(0x4fc45e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc45f:{NFSU2_TR(0x4fc45f);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc461:{NFSU2_TR(0x4fc461);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc466ull));
TAIL_STATIC(0x552cc0u,552);
}
B4fc466:L4fc466:{c.instructions+=6;NFSU2_TR(0x4fc466);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fc469:{NFSU2_TR(0x4fc469);
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
B4fc46c:{NFSU2_TR(0x4fc46c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc46d:{NFSU2_TR(0x4fc46d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc46e:{NFSU2_TR(0x4fc46e);
w4(R+4,u32(0x83aab4ull));
}
B4fc473:{NFSU2_TR(0x4fc473);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc478ull));
TAIL_STATIC(0x502a40u,502);
}
B4fc478:L4fc478:{c.instructions+=2;NFSU2_TR(0x4fc478);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc47a:{NFSU2_TR(0x4fc47a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc47full));
TAIL_STATIC(0x50d180u,50d);
}
B4fc47f:L4fc47f:{c.instructions+=6;NFSU2_TR(0x4fc47f);
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
B4fc482:{NFSU2_TR(0x4fc482);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fc483:{NFSU2_TR(0x4fc483);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fc484:{NFSU2_TR(0x4fc484);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fc485:{NFSU2_TR(0x4fc485);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fc486:{NFSU2_TR(0x4fc486);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fc489:L4fc489:{c.instructions+=3;NFSU2_TR(0x4fc489);
u8 U[8];
__builtin_memmove((U+0),gp(0x7f444c),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fc490:{NFSU2_TR(0x4fc490);
__builtin_memmove((R+4),(R+24),4);
}
B4fc492:{NFSU2_TR(0x4fc492);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fc4aa;}}
}
B4fc494:L4fc494:{c.instructions+=1;NFSU2_TR(0x4fc494);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc499ull));
TAIL_STATIC(0x497fc0u,497);
}
B4fc499:L4fc499:{c.instructions+=2;NFSU2_TR(0x4fc499);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc49b:{NFSU2_TR(0x4fc49b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc4a0ull));
TAIL_STATIC(0x50d180u,50d);
}
B4fc4a0:L4fc4a0:{c.instructions+=6;NFSU2_TR(0x4fc4a0);
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
B4fc4a3:{NFSU2_TR(0x4fc4a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fc4a4:{NFSU2_TR(0x4fc4a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fc4a5:{NFSU2_TR(0x4fc4a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fc4a6:{NFSU2_TR(0x4fc4a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fc4a7:{NFSU2_TR(0x4fc4a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fc4aa:L4fc4aa:{c.instructions+=1;NFSU2_TR(0x4fc4aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc4afull));
TAIL_STATIC(0x498040u,498);
}
B4fc4af:L4fc4af:{c.instructions+=2;NFSU2_TR(0x4fc4af);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc4b1:{NFSU2_TR(0x4fc4b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc4b6ull));
TAIL_STATIC(0x50d180u,50d);
}
B4fc4b6:L4fc4b6:{c.instructions+=6;NFSU2_TR(0x4fc4b6);
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
B4fc4b9:{NFSU2_TR(0x4fc4b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fc4ba:{NFSU2_TR(0x4fc4ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fc4bb:{NFSU2_TR(0x4fc4bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fc4bc:{NFSU2_TR(0x4fc4bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fc4bd:{NFSU2_TR(0x4fc4bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fc4c0:L4fc4c0:{c.instructions+=2;NFSU2_TR(0x4fc4c0);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x461a18eeull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x461a18eeull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fc4c5:{NFSU2_TR(0x4fc4c5);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4fc589;}}
}
B4fc4cb:L4fc4cb:{c.instructions+=1;NFSU2_TR(0x4fc4cb);
if(r1(R+518)){{goto L4fc542;}}
}
B4fc4cd:L4fc4cd:{c.instructions+=2;NFSU2_TR(0x4fc4cd);
w1(R+512,u8((r4(R+0))<(u32(0x43a743aaull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x43a743aaull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4fc4d2:{NFSU2_TR(0x4fc4d2);
if(r1(R+518)){{goto L4fc515;}}
}
B4fc4d4:L4fc4d4:{c.instructions+=2;NFSU2_TR(0x4fc4d4);
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
B4fc4d5:{NFSU2_TR(0x4fc4d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fcd6a;}}
}
B4fc4db:L4fc4db:{c.instructions+=5;NFSU2_TR(0x4fc4db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fc4de:{NFSU2_TR(0x4fc4de);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4fc4e1:{NFSU2_TR(0x4fc4e1);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa6aull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B4fc4e8:{NFSU2_TR(0x4fc4e8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fc4ea:{NFSU2_TR(0x4fc4ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fc534;}}
}
B4fc4ec:L4fc4ec:{c.instructions+=8;NFSU2_TR(0x4fc4ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fc4ef:{NFSU2_TR(0x4fc4ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fc4f2:{NFSU2_TR(0x4fc4f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fc4f8:{NFSU2_TR(0x4fc4f8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc4fa:{NFSU2_TR(0x4fc4fa);
u8 U[4];
w4(U+0,u32(0x78f240ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc4ff:{NFSU2_TR(0x4fc4ff);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc500:{NFSU2_TR(0x4fc500);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fc506:{NFSU2_TR(0x4fc506);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc50bull));
TAIL_STATIC(0x537980u,537);
}
B4fc50b:L4fc50b:{c.instructions+=6;NFSU2_TR(0x4fc50b);
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
B4fc50e:{NFSU2_TR(0x4fc50e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fc50f:{NFSU2_TR(0x4fc50f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fc510:{NFSU2_TR(0x4fc510);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fc511:{NFSU2_TR(0x4fc511);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fc512:{NFSU2_TR(0x4fc512);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fc515:L4fc515:{c.instructions+=6;NFSU2_TR(0x4fc515);
s4(0x850078,u32(0x8ull));
}
B4fc51f:{NFSU2_TR(0x4fc51f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fc522:{NFSU2_TR(0x4fc522);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4fc525:{NFSU2_TR(0x4fc525);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa6aull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+4),(U+8),1);
}
B4fc52c:{NFSU2_TR(0x4fc52c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fc52e:{NFSU2_TR(0x4fc52e);
if(r1(R+518)){{goto L4fc97d;}}
}
B4fc534:L4fc534:{c.instructions+=2;NFSU2_TR(0x4fc534);
__builtin_memmove((R+4),(R+24),4);
}
B4fc536:{NFSU2_TR(0x4fc536);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc53bull));
TAIL_STATIC(0x497d50u,497);
}
B4fc53b:L4fc53b:{c.instructions+=5;NFSU2_TR(0x4fc53b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fc53c:{NFSU2_TR(0x4fc53c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fc53d:{NFSU2_TR(0x4fc53d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fc53e:{NFSU2_TR(0x4fc53e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fc53f:{NFSU2_TR(0x4fc53f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fc542:L4fc542:{c.instructions+=6;NFSU2_TR(0x4fc542);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0xab4cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4fc548:{NFSU2_TR(0x4fc548);
w4(R+0,u32(0x2ull));
}
B4fc54d:{NFSU2_TR(0x4fc54d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x83aac0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fc553:{NFSU2_TR(0x4fc553);
__builtin_memmove((R+4),(R+24),4);
}
B4fc555:{NFSU2_TR(0x4fc555);
__builtin_memmove(gp(0x7f444c),(R+0),4);
}
B4fc55a:{NFSU2_TR(0x4fc55a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc55full));
TAIL_STATIC(0x4eec90u,4ee);
}
B4fc55f:L4fc55f:{c.instructions+=4;NFSU2_TR(0x4fc55f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fc562:{NFSU2_TR(0x4fc562);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc564:{NFSU2_TR(0x4fc564);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc566:{NFSU2_TR(0x4fc566);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc56bull));
TAIL_STATIC(0x511e00u,511);
}
B4fc56b:L4fc56b:{c.instructions+=2;NFSU2_TR(0x4fc56b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc56c:{NFSU2_TR(0x4fc56c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc571ull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B4fc571:L4fc571:{c.instructions+=3;NFSU2_TR(0x4fc571);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4fc574:{NFSU2_TR(0x4fc574);
__builtin_memmove((R+4),(R+24),4);
}
B4fc576:{NFSU2_TR(0x4fc576);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc57bull));
TAIL_STATIC(0x4b2310u,4b2);
}
B4fc57b:L4fc57b:{c.instructions+=6;NFSU2_TR(0x4fc57b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fc57c:{NFSU2_TR(0x4fc57c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fc57d:{NFSU2_TR(0x4fc57d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4fc584:{NFSU2_TR(0x4fc584);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fc585:{NFSU2_TR(0x4fc585);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fc586:{NFSU2_TR(0x4fc586);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fc589:L4fc589:{c.instructions+=2;NFSU2_TR(0x4fc589);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x5073ef13ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fc58e:{NFSU2_TR(0x4fc58e);
if(r1(R+518)){{goto L4fccba;}}
}
B4fc594:L4fc594:{c.instructions+=2;NFSU2_TR(0x4fc594);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x51123592ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x51123592ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x51123592ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fc599:{NFSU2_TR(0x4fc599);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fcd6a;}}
}
B4fc59f:L4fc59f:{c.instructions+=2;NFSU2_TR(0x4fc59f);
__builtin_memmove((R+4),(R+24),4);
}
B4fc5a1:{NFSU2_TR(0x4fc5a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc5a6ull));
TAIL_STATIC(0x4ef090u,4ef);
}
B4fc5a6:L4fc5a6:{c.instructions+=5;NFSU2_TR(0x4fc5a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fc5a7:{NFSU2_TR(0x4fc5a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fc5a8:{NFSU2_TR(0x4fc5a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fc5a9:{NFSU2_TR(0x4fc5a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fc5aa:{NFSU2_TR(0x4fc5aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fc5ad:L4fc5ad:{c.instructions+=7;NFSU2_TR(0x4fc5ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fc5b0:{NFSU2_TR(0x4fc5b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4fc5b3:{NFSU2_TR(0x4fc5b3);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa79ull))+u32(r4(U+0))));
w1(U+8,u8(0x1ull));
s1(u32(r4(U+4)),r1(U+8));
}
B4fc5bb:{NFSU2_TR(0x4fc5bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fc5be:{NFSU2_TR(0x4fc5be);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc5bf:{NFSU2_TR(0x4fc5bf);
u8 U[4];
w4(U+0,u32(0xba5b5fceull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc5c4:{NFSU2_TR(0x4fc5c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc5c9ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4fc5c9:L4fc5c9:{c.instructions+=6;NFSU2_TR(0x4fc5c9);
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
B4fc5cc:{NFSU2_TR(0x4fc5cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fc5cd:{NFSU2_TR(0x4fc5cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fc5ce:{NFSU2_TR(0x4fc5ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fc5cf:{NFSU2_TR(0x4fc5cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fc5d0:{NFSU2_TR(0x4fc5d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fc5d3:L4fc5d3:{c.instructions+=2;NFSU2_TR(0x4fc5d3);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x9803f6e2ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9803f6e2ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fc5d8:{NFSU2_TR(0x4fc5d8);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4fc94d;}}
}
B4fc5de:L4fc5de:{c.instructions+=1;NFSU2_TR(0x4fc5de);
if(r1(R+518)){{goto L4fc809;}}
}
B4fc5e4:L4fc5e4:{c.instructions+=2;NFSU2_TR(0x4fc5e4);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fc5e9:{NFSU2_TR(0x4fc5e9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4fc694;}}
}
B4fc5ef:L4fc5ef:{c.instructions+=1;NFSU2_TR(0x4fc5ef);
if(r1(R+518)){{goto L4fc65b;}}
}
B4fc5f1:L4fc5f1:{c.instructions+=2;NFSU2_TR(0x4fc5f1);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x8867412dull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8867412dull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x8867412dull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fc5f6:{NFSU2_TR(0x4fc5f6);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fc57bu);}goto L4fc57b;}}
}
B4fc5f8:L4fc5f8:{c.instructions+=2;NFSU2_TR(0x4fc5f8);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x911ab364ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fc5fd:{NFSU2_TR(0x4fc5fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fcd6a;}}
}
B4fc603:L4fc603:{c.instructions+=2;NFSU2_TR(0x4fc603);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fc606:{NFSU2_TR(0x4fc606);
if(r1(R+518)){{goto L4fc635;}}
}
B4fc608:L4fc608:{c.instructions+=2;NFSU2_TR(0x4fc608);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fc60e:{NFSU2_TR(0x4fc60e);
if(r1(R+518)){{goto L4fc635;}}
}
B4fc610:L4fc610:{c.instructions+=3;NFSU2_TR(0x4fc610);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4fc616:{NFSU2_TR(0x4fc616);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fc618:{NFSU2_TR(0x4fc618);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fc635;}}
}
B4fc61a:L4fc61a:{c.instructions+=2;NFSU2_TR(0x4fc61a);
u8 U[4];
w4(U+0,u32(0x798f68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc61f:{NFSU2_TR(0x4fc61f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc624ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4fc624:L4fc624:{c.instructions+=3;NFSU2_TR(0x4fc624);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fc627:{NFSU2_TR(0x4fc627);
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
B4fc629:{NFSU2_TR(0x4fc629);
if(r1(R+518)){{goto L4fcd6a;}}
}
B4fc62f:L4fc62f:{c.instructions+=1;NFSU2_TR(0x4fc62f);
__builtin_memmove((R+28),gp(0x850078),4);
}
B4fc635:L4fc635:{c.instructions+=2;NFSU2_TR(0x4fc635);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x20ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x20ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fc638:{NFSU2_TR(0x4fc638);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fc6c9;}}
}
B4fc63e:L4fc63e:{c.instructions+=3;NFSU2_TR(0x4fc63e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fc641:{NFSU2_TR(0x4fc641);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc642:{NFSU2_TR(0x4fc642);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc647ull));
TAIL_STATIC(0x4b22c0u,4b2);
}
B4fc647:L4fc647:{c.instructions+=3;NFSU2_TR(0x4fc647);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fc64a:{NFSU2_TR(0x4fc64a);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc64c:{NFSU2_TR(0x4fc64c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc651ull));
TAIL_STATIC(0x50d180u,50d);
}
B4fc651:L4fc651:{c.instructions+=6;NFSU2_TR(0x4fc651);
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
B4fc654:{NFSU2_TR(0x4fc654);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fc655:{NFSU2_TR(0x4fc655);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fc656:{NFSU2_TR(0x4fc656);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fc657:{NFSU2_TR(0x4fc657);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fc658:{NFSU2_TR(0x4fc658);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fc65b:L4fc65b:{c.instructions+=3;NFSU2_TR(0x4fc65b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4fc661:{NFSU2_TR(0x4fc661);
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
B4fc663:{NFSU2_TR(0x4fc663);
if(r1(R+518)){{goto L4fcd6a;}}
}
B4fc669:L4fc669:{c.instructions+=6;NFSU2_TR(0x4fc669);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fc66c:{NFSU2_TR(0x4fc66c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc66e:{NFSU2_TR(0x4fc66e);
u8 U[4];
w4(U+0,u32(0x790e98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc673:{NFSU2_TR(0x4fc673);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc678:{NFSU2_TR(0x4fc678);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc679:{NFSU2_TR(0x4fc679);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc67eull));
TAIL_STATIC(0x5426c0u,542);
}
B4fc67e:L4fc67e:{c.instructions+=4;NFSU2_TR(0x4fc67e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4fc681:{NFSU2_TR(0x4fc681);
u8 U[4];
w4(U+0,u32(0x9120409eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc686:{NFSU2_TR(0x4fc686);
__builtin_memmove((R+4),(R+24),4);
}
B4fc688:{NFSU2_TR(0x4fc688);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc68dull));
TAIL_STATIC(0x4e2590u,4e2);
}
B4fc68d:L4fc68d:{c.instructions+=5;NFSU2_TR(0x4fc68d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fc68e:{NFSU2_TR(0x4fc68e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fc68f:{NFSU2_TR(0x4fc68f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fc690:{NFSU2_TR(0x4fc690);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fc691:{NFSU2_TR(0x4fc691);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fc694:L4fc694:{c.instructions+=2;NFSU2_TR(0x4fc694);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x93b596edull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fc699:{NFSU2_TR(0x4fc699);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fc603u);}goto L4fc603;}}
}
B4fc69f:L4fc69f:{c.instructions+=2;NFSU2_TR(0x4fc69f);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x96dda9e6ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x96dda9e6ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x96dda9e6ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fc6a4:{NFSU2_TR(0x4fc6a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fcd6a;}}
}
B4fc6aa:L4fc6aa:{c.instructions+=6;NFSU2_TR(0x4fc6aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fc6ad:{NFSU2_TR(0x4fc6ad);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc6af:{NFSU2_TR(0x4fc6af);
u8 U[4];
w4(U+0,u32(0x78fef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc6b4:{NFSU2_TR(0x4fc6b4);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc6b9:{NFSU2_TR(0x4fc6b9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc6ba:{NFSU2_TR(0x4fc6ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc6bfull));
TAIL_STATIC(0x537c00u,537);
}
B4fc6bf:L4fc6bf:{c.instructions+=6;NFSU2_TR(0x4fc6bf);
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
B4fc6c2:{NFSU2_TR(0x4fc6c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fc6c3:{NFSU2_TR(0x4fc6c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fc6c4:{NFSU2_TR(0x4fc6c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fc6c5:{NFSU2_TR(0x4fc6c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fc6c6:{NFSU2_TR(0x4fc6c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fc6c9:L4fc6c9:{c.instructions+=2;NFSU2_TR(0x4fc6c9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x100ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fc6cf:{NFSU2_TR(0x4fc6cf);
if(r1(R+518)){{goto L4fc7db;}}
}
B4fc6d5:L4fc6d5:{c.instructions+=2;NFSU2_TR(0x4fc6d5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fc6d8:{NFSU2_TR(0x4fc6d8);
if(r1(R+518)){{goto L4fc7db;}}
}
B4fc6de:L4fc6de:{c.instructions+=2;NFSU2_TR(0x4fc6de);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fc6e4:{NFSU2_TR(0x4fc6e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fc6f6;}}
}
B4fc6e6:L4fc6e6:{c.instructions+=5;NFSU2_TR(0x4fc6e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fc6e9:{NFSU2_TR(0x4fc6e9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc6eb:{NFSU2_TR(0x4fc6eb);
u8 U[4];
w4(U+0,u32(0x78f240ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc6f0:{NFSU2_TR(0x4fc6f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc6f1:{NFSU2_TR(0x4fc6f1);
{goto L4fc7f0;}
}
B4fc6f6:L4fc6f6:{c.instructions+=2;NFSU2_TR(0x4fc6f6);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4fc6fa:{NFSU2_TR(0x4fc6fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fc762;}}
}
B4fc6fc:L4fc6fc:{c.instructions+=2;NFSU2_TR(0x4fc6fc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fc6ff:{NFSU2_TR(0x4fc6ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fc71f;}}
}
B4fc701:L4fc701:{c.instructions+=2;NFSU2_TR(0x4fc701);
u8 U[4];
w4(U+0,u32(0x798f68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc706:{NFSU2_TR(0x4fc706);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc70bull));
TAIL_STATIC(0x52cf60u,52c);
}
B4fc70b:L4fc70b:{c.instructions+=3;NFSU2_TR(0x4fc70b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fc70e:{NFSU2_TR(0x4fc70e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fc710:{NFSU2_TR(0x4fc710);
if(r1(R+518)){{goto L4fc739;}}
}
B4fc712:L4fc712:{c.instructions+=2;NFSU2_TR(0x4fc712);
u8 U[4];
w4(U+0,u32(0x798f68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc717:{NFSU2_TR(0x4fc717);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc71cull));
TAIL_STATIC(0x5379a0u,537);
}
B4fc71c:L4fc71c:{c.instructions+=1;NFSU2_TR(0x4fc71c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fc71f:L4fc71f:{c.instructions+=3;NFSU2_TR(0x4fc71f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc721:{NFSU2_TR(0x4fc721);
__builtin_memmove((R+4),(R+24),4);
}
B4fc723:{NFSU2_TR(0x4fc723);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc728ull));
TAIL_STATIC(0x4fa2a0u,4fa);
}
B4fc728:L4fc728:{c.instructions+=2;NFSU2_TR(0x4fc728);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc72a:{NFSU2_TR(0x4fc72a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc72full));
TAIL_STATIC(0x50d180u,50d);
}
B4fc72f:L4fc72f:{c.instructions+=6;NFSU2_TR(0x4fc72f);
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
B4fc732:{NFSU2_TR(0x4fc732);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fc733:{NFSU2_TR(0x4fc733);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fc734:{NFSU2_TR(0x4fc734);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fc735:{NFSU2_TR(0x4fc735);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fc736:{NFSU2_TR(0x4fc736);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fc739:L4fc739:{c.instructions+=6;NFSU2_TR(0x4fc739);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fc73c:{NFSU2_TR(0x4fc73c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc73e:{NFSU2_TR(0x4fc73e);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc743:{NFSU2_TR(0x4fc743);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc744:{NFSU2_TR(0x4fc744);
u8 U[4];
w4(U+0,u32(0x798f68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc749:{NFSU2_TR(0x4fc749);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc74eull));
TAIL_STATIC(0x555eb0u,555);
}
B4fc74e:L4fc74e:{c.instructions+=3;NFSU2_TR(0x4fc74e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4fc751:{NFSU2_TR(0x4fc751);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc753:{NFSU2_TR(0x4fc753);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc758ull));
TAIL_STATIC(0x50d180u,50d);
}
B4fc758:L4fc758:{c.instructions+=6;NFSU2_TR(0x4fc758);
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
B4fc75b:{NFSU2_TR(0x4fc75b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fc75c:{NFSU2_TR(0x4fc75c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fc75d:{NFSU2_TR(0x4fc75d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fc75e:{NFSU2_TR(0x4fc75e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fc75f:{NFSU2_TR(0x4fc75f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fc762:L4fc762:{c.instructions+=2;NFSU2_TR(0x4fc762);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fc765:{NFSU2_TR(0x4fc765);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fc7be;}}
}
B4fc767:L4fc767:{c.instructions+=2;NFSU2_TR(0x4fc767);
u8 U[4];
w4(U+0,u32(0x798f68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc76c:{NFSU2_TR(0x4fc76c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc771ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4fc771:L4fc771:{c.instructions+=3;NFSU2_TR(0x4fc771);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fc774:{NFSU2_TR(0x4fc774);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fc776:{NFSU2_TR(0x4fc776);
if(r1(R+518)){{goto L4fc795;}}
}
B4fc778:L4fc778:{c.instructions+=3;NFSU2_TR(0x4fc778);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fc77b:{NFSU2_TR(0x4fc77b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc77c:{NFSU2_TR(0x4fc77c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc781ull));
TAIL_STATIC(0x4fa470u,4fa);
}
B4fc781:L4fc781:{c.instructions+=3;NFSU2_TR(0x4fc781);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fc784:{NFSU2_TR(0x4fc784);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc786:{NFSU2_TR(0x4fc786);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc78bull));
TAIL_STATIC(0x50d180u,50d);
}
B4fc78b:L4fc78b:{c.instructions+=6;NFSU2_TR(0x4fc78b);
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
B4fc78e:{NFSU2_TR(0x4fc78e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fc78f:{NFSU2_TR(0x4fc78f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fc790:{NFSU2_TR(0x4fc790);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fc791:{NFSU2_TR(0x4fc791);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fc792:{NFSU2_TR(0x4fc792);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fc795:L4fc795:{c.instructions+=6;NFSU2_TR(0x4fc795);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fc798:{NFSU2_TR(0x4fc798);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc79a:{NFSU2_TR(0x4fc79a);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc79f:{NFSU2_TR(0x4fc79f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc7a0:{NFSU2_TR(0x4fc7a0);
u8 U[4];
w4(U+0,u32(0x798f68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc7a5:{NFSU2_TR(0x4fc7a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc7aaull));
TAIL_STATIC(0x555eb0u,555);
}
B4fc7aa:L4fc7aa:{c.instructions+=3;NFSU2_TR(0x4fc7aa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4fc7ad:{NFSU2_TR(0x4fc7ad);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc7af:{NFSU2_TR(0x4fc7af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc7b4ull));
TAIL_STATIC(0x50d180u,50d);
}
B4fc7b4:L4fc7b4:{c.instructions+=6;NFSU2_TR(0x4fc7b4);
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
B4fc7b7:{NFSU2_TR(0x4fc7b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fc7b8:{NFSU2_TR(0x4fc7b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fc7b9:{NFSU2_TR(0x4fc7b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fc7ba:{NFSU2_TR(0x4fc7ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fc7bb:{NFSU2_TR(0x4fc7bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fc7be:L4fc7be:{c.instructions+=3;NFSU2_TR(0x4fc7be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fc7c1:{NFSU2_TR(0x4fc7c1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc7c2:{NFSU2_TR(0x4fc7c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc7c7ull));
TAIL_STATIC(0x4fa470u,4fa);
}
B4fc7c7:L4fc7c7:{c.instructions+=3;NFSU2_TR(0x4fc7c7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fc7ca:{NFSU2_TR(0x4fc7ca);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc7cc:{NFSU2_TR(0x4fc7cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc7d1ull));
TAIL_STATIC(0x50d180u,50d);
}
B4fc7d1:L4fc7d1:{c.instructions+=6;NFSU2_TR(0x4fc7d1);
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
B4fc7d4:{NFSU2_TR(0x4fc7d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fc7d5:{NFSU2_TR(0x4fc7d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fc7d6:{NFSU2_TR(0x4fc7d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fc7d7:{NFSU2_TR(0x4fc7d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fc7d8:{NFSU2_TR(0x4fc7d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fc7db:L4fc7db:{c.instructions+=5;NFSU2_TR(0x4fc7db);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc7dd:{NFSU2_TR(0x4fc7dd);
s4(0x850078,u32(0x8ull));
}
B4fc7e7:{NFSU2_TR(0x4fc7e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fc7ea:{NFSU2_TR(0x4fc7ea);
u8 U[4];
w4(U+0,u32(0x78f240ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc7ef:{NFSU2_TR(0x4fc7ef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc7f0:L4fc7f0:{c.instructions+=1;NFSU2_TR(0x4fc7f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc7f5ull));
TAIL_STATIC(0x537980u,537);
}
B4fc7f5:L4fc7f5:{c.instructions+=3;NFSU2_TR(0x4fc7f5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4fc7f8:{NFSU2_TR(0x4fc7f8);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc7fa:{NFSU2_TR(0x4fc7fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc7ffull));
TAIL_STATIC(0x50d180u,50d);
}
B4fc7ff:L4fc7ff:{c.instructions+=6;NFSU2_TR(0x4fc7ff);
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
B4fc802:{NFSU2_TR(0x4fc802);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fc803:{NFSU2_TR(0x4fc803);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fc804:{NFSU2_TR(0x4fc804);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fc805:{NFSU2_TR(0x4fc805);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fc806:{NFSU2_TR(0x4fc806);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fc809:L4fc809:{c.instructions+=3;NFSU2_TR(0x4fc809);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fc80f:{NFSU2_TR(0x4fc80f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc810:{NFSU2_TR(0x4fc810);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc815ull));
TAIL_STATIC(0x52d100u,52d);
}
B4fc815:L4fc815:{c.instructions+=3;NFSU2_TR(0x4fc815);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fc818:{NFSU2_TR(0x4fc818);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fc81a:{NFSU2_TR(0x4fc81a);
if(r1(R+518)){{goto L4fc85f;}}
}
B4fc81c:L4fc81c:{c.instructions+=3;NFSU2_TR(0x4fc81c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4fc822:{NFSU2_TR(0x4fc822);
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
B4fc824:{NFSU2_TR(0x4fc824);
if(r1(R+518)){{goto L4fcd6a;}}
}
B4fc82a:L4fc82a:{c.instructions+=4;NFSU2_TR(0x4fc82a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fc830:{NFSU2_TR(0x4fc830);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc835:{NFSU2_TR(0x4fc835);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc836:{NFSU2_TR(0x4fc836);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc83bull));
TAIL_STATIC(0x51d040u,51d);
}
B4fc83b:L4fc83b:{c.instructions+=3;NFSU2_TR(0x4fc83b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4fc83e:{NFSU2_TR(0x4fc83e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fc840:{NFSU2_TR(0x4fc840);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fc858;}}
}
B4fc842:L4fc842:{c.instructions+=5;NFSU2_TR(0x4fc842);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fc848:{NFSU2_TR(0x4fc848);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc84a:{NFSU2_TR(0x4fc84a);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc84f:{NFSU2_TR(0x4fc84f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc850:{NFSU2_TR(0x4fc850);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc855ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4fc855:L4fc855:{c.instructions+=1;NFSU2_TR(0x4fc855);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4fc858:L4fc858:{c.instructions+=2;NFSU2_TR(0x4fc858);
u8 U[4];
w4(U+0,u32(0x5073ef13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc85d:{NFSU2_TR(0x4fc85d);
{goto L4fc8b3;}
}
B4fc85f:L4fc85f:{c.instructions+=3;NFSU2_TR(0x4fc85f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fc865:{NFSU2_TR(0x4fc865);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc866:{NFSU2_TR(0x4fc866);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc86bull));
TAIL_STATIC(0x52d100u,52d);
}
B4fc86b:L4fc86b:{c.instructions+=3;NFSU2_TR(0x4fc86b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fc86e:{NFSU2_TR(0x4fc86e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fc870:{NFSU2_TR(0x4fc870);
if(r1(R+518)){{goto L4fc8ba;}}
}
B4fc872:L4fc872:{c.instructions+=3;NFSU2_TR(0x4fc872);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4fc878:{NFSU2_TR(0x4fc878);
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
B4fc87a:{NFSU2_TR(0x4fc87a);
if(r1(R+518)){{goto L4fcd6a;}}
}
B4fc880:L4fc880:{c.instructions+=4;NFSU2_TR(0x4fc880);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fc886:{NFSU2_TR(0x4fc886);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc88b:{NFSU2_TR(0x4fc88b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc88c:{NFSU2_TR(0x4fc88c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc891ull));
TAIL_STATIC(0x51d040u,51d);
}
B4fc891:L4fc891:{c.instructions+=3;NFSU2_TR(0x4fc891);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4fc894:{NFSU2_TR(0x4fc894);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fc896:{NFSU2_TR(0x4fc896);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fc8ae;}}
}
B4fc898:L4fc898:{c.instructions+=5;NFSU2_TR(0x4fc898);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fc89e:{NFSU2_TR(0x4fc89e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc8a0:{NFSU2_TR(0x4fc8a0);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc8a5:{NFSU2_TR(0x4fc8a5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc8a6:{NFSU2_TR(0x4fc8a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc8abull));
TAIL_STATIC(0x51cf70u,51c);
}
B4fc8ab:L4fc8ab:{c.instructions+=1;NFSU2_TR(0x4fc8ab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4fc8ae:L4fc8ae:{c.instructions+=1;NFSU2_TR(0x4fc8ae);
u8 U[4];
w4(U+0,u32(0xd9feec59ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc8b3:L4fc8b3:{c.instructions+=2;NFSU2_TR(0x4fc8b3);
__builtin_memmove((R+4),(R+24),4);
}
B4fc8b5:{NFSU2_TR(0x4fc8b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc8baull));
TAIL_STATIC(0x4eed10u,4ee);
}
B4fc8ba:L4fc8ba:{c.instructions+=2;NFSU2_TR(0x4fc8ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4fc8bd:{NFSU2_TR(0x4fc8bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc8c2ull));
TAIL_STATIC(0x538130u,538);
}
B4fc8c2:L4fc8c2:{c.instructions+=4;NFSU2_TR(0x4fc8c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fc8c8:{NFSU2_TR(0x4fc8c8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
}
B4fc8cb:{NFSU2_TR(0x4fc8cb);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x14ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x14ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fc8ce:{NFSU2_TR(0x4fc8ce);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4fcd6a;}}
}
B4fc8d4:L4fc8d4:{c.instructions+=2;NFSU2_TR(0x4fc8d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4fcd88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B4fc8db:{NFSU2_TR(0x4fc8db);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4fcd74ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4fc8e2:L4fc8e2:{c.instructions+=3;NFSU2_TR(0x4fc8e2);
u8 U[4];
w4(U+0,u32(0xb5971bf1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc8e7:{NFSU2_TR(0x4fc8e7);
__builtin_memmove((R+4),(R+24),4);
}
B4fc8e9:{NFSU2_TR(0x4fc8e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc8eeull));
TAIL_STATIC(0x4e2590u,4e2);
}
B4fc8ee:L4fc8ee:{c.instructions+=5;NFSU2_TR(0x4fc8ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fc8ef:{NFSU2_TR(0x4fc8ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fc8f0:{NFSU2_TR(0x4fc8f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fc8f1:{NFSU2_TR(0x4fc8f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fc8f2:{NFSU2_TR(0x4fc8f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fc8f5:L4fc8f5:{c.instructions+=4;NFSU2_TR(0x4fc8f5);
__builtin_memmove((R+0),gp(0x7fa1a8),4);
}
B4fc8fa:{NFSU2_TR(0x4fc8fa);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4fc8fc:{NFSU2_TR(0x4fc8fc);
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
B4fc8fe:{NFSU2_TR(0x4fc8fe);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4fcd6a;}}
}
B4fc904:L4fc904:{c.instructions+=3;NFSU2_TR(0x4fc904);
u8 U[4];
w4(U+0,u32(0xb5971bf1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc909:{NFSU2_TR(0x4fc909);
__builtin_memmove((R+4),(R+24),4);
}
B4fc90b:{NFSU2_TR(0x4fc90b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc910ull));
TAIL_STATIC(0x4e2590u,4e2);
}
B4fc910:L4fc910:{c.instructions+=4;NFSU2_TR(0x4fc910);
__builtin_memmove((R+0),gp(0x7fa1a8),4);
}
B4fc915:{NFSU2_TR(0x4fc915);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4fc916:{NFSU2_TR(0x4fc916);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4fc918:{NFSU2_TR(0x4fc918);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fc904u);}goto L4fc904;}}
}
B4fc91a:L4fc91a:{c.instructions+=5;NFSU2_TR(0x4fc91a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fc91b:{NFSU2_TR(0x4fc91b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fc91c:{NFSU2_TR(0x4fc91c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fc91d:{NFSU2_TR(0x4fc91d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fc91e:{NFSU2_TR(0x4fc91e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fc921:L4fc921:{c.instructions+=4;NFSU2_TR(0x4fc921);
__builtin_memmove((R+0),gp(0x7fa1a8),4);
}
B4fc926:{NFSU2_TR(0x4fc926);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4fc928:{NFSU2_TR(0x4fc928);
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
B4fc92a:{NFSU2_TR(0x4fc92a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4fcd6a;}}
}
B4fc930:L4fc930:{c.instructions+=3;NFSU2_TR(0x4fc930);
u8 U[4];
w4(U+0,u32(0x9120409eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc935:{NFSU2_TR(0x4fc935);
__builtin_memmove((R+4),(R+24),4);
}
B4fc937:{NFSU2_TR(0x4fc937);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc93cull));
TAIL_STATIC(0x4e2590u,4e2);
}
B4fc93c:L4fc93c:{c.instructions+=4;NFSU2_TR(0x4fc93c);
__builtin_memmove((R+0),gp(0x7fa1a8),4);
}
B4fc941:{NFSU2_TR(0x4fc941);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4fc942:{NFSU2_TR(0x4fc942);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4fc944:{NFSU2_TR(0x4fc944);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fc930u);}goto L4fc930;}}
}
B4fc946:L4fc946:{c.instructions+=5;NFSU2_TR(0x4fc946);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fc947:{NFSU2_TR(0x4fc947);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fc948:{NFSU2_TR(0x4fc948);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fc949:{NFSU2_TR(0x4fc949);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fc94a:{NFSU2_TR(0x4fc94a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fc94d:L4fc94d:{c.instructions+=2;NFSU2_TR(0x4fc94d);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xc519bfc0ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc519bfc0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fc952:{NFSU2_TR(0x4fc952);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4fcca8;}}
}
B4fc958:L4fc958:{c.instructions+=1;NFSU2_TR(0x4fc958);
if(r1(R+518)){{goto L4fca07;}}
}
B4fc95e:L4fc95e:{c.instructions+=2;NFSU2_TR(0x4fc95e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fc963:{NFSU2_TR(0x4fc963);
if(r1(R+518)){{goto L4fc9ce;}}
}
B4fc965:L4fc965:{c.instructions+=2;NFSU2_TR(0x4fc965);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xba5b5fceull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xba5b5fceull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xba5b5fceull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fc96a:{NFSU2_TR(0x4fc96a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fcd6a;}}
}
B4fc970:L4fc970:{c.instructions+=2;NFSU2_TR(0x4fc970);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fc973:{NFSU2_TR(0x4fc973);
if(r1(R+518)){{goto L4fc97d;}}
}
B4fc975:L4fc975:{c.instructions+=2;NFSU2_TR(0x4fc975);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fc97b:{NFSU2_TR(0x4fc97b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fc9a6;}}
}
B4fc97d:L4fc97d:{c.instructions+=8;NFSU2_TR(0x4fc97d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fc980:{NFSU2_TR(0x4fc980);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fc983:{NFSU2_TR(0x4fc983);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fc989:{NFSU2_TR(0x4fc989);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc98b:{NFSU2_TR(0x4fc98b);
u8 U[4];
w4(U+0,u32(0x78f240ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc990:{NFSU2_TR(0x4fc990);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc991:{NFSU2_TR(0x4fc991);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fc997:{NFSU2_TR(0x4fc997);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc99cull));
TAIL_STATIC(0x537980u,537);
}
B4fc99c:L4fc99c:{c.instructions+=6;NFSU2_TR(0x4fc99c);
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
B4fc99f:{NFSU2_TR(0x4fc99f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fc9a0:{NFSU2_TR(0x4fc9a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fc9a1:{NFSU2_TR(0x4fc9a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fc9a2:{NFSU2_TR(0x4fc9a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fc9a3:{NFSU2_TR(0x4fc9a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fc9a6:L4fc9a6:{c.instructions+=2;NFSU2_TR(0x4fc9a6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fc9a9:{NFSU2_TR(0x4fc9a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fc9c2;}}
}
B4fc9ab:L4fc9ab:{c.instructions+=3;NFSU2_TR(0x4fc9ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fc9ae:{NFSU2_TR(0x4fc9ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fc9b0:{NFSU2_TR(0x4fc9b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fc9c2;}}
}
B4fc9b2:L4fc9b2:{c.instructions+=3;NFSU2_TR(0x4fc9b2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc9b4:{NFSU2_TR(0x4fc9b4);
__builtin_memmove((R+4),(R+24),4);
}
B4fc9b6:{NFSU2_TR(0x4fc9b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc9bbull));
TAIL_STATIC(0x4fa2a0u,4fa);
}
B4fc9bb:L4fc9bb:{c.instructions+=5;NFSU2_TR(0x4fc9bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fc9bc:{NFSU2_TR(0x4fc9bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fc9bd:{NFSU2_TR(0x4fc9bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fc9be:{NFSU2_TR(0x4fc9be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fc9bf:{NFSU2_TR(0x4fc9bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fc9c2:L4fc9c2:{c.instructions+=1;NFSU2_TR(0x4fc9c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc9c7ull));
TAIL_STATIC(0x53fc20u,53f);
}
B4fc9c7:L4fc9c7:{c.instructions+=5;NFSU2_TR(0x4fc9c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fc9c8:{NFSU2_TR(0x4fc9c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fc9c9:{NFSU2_TR(0x4fc9c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fc9ca:{NFSU2_TR(0x4fc9ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fc9cb:{NFSU2_TR(0x4fc9cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fc9ce:L4fc9ce:{c.instructions+=3;NFSU2_TR(0x4fc9ce);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4fc9d4:{NFSU2_TR(0x4fc9d4);
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
B4fc9d6:{NFSU2_TR(0x4fc9d6);
if(r1(R+518)){{goto L4fcd6a;}}
}
B4fc9dc:L4fc9dc:{c.instructions+=6;NFSU2_TR(0x4fc9dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fc9df:{NFSU2_TR(0x4fc9df);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc9e1:{NFSU2_TR(0x4fc9e1);
u8 U[4];
w4(U+0,u32(0x790e84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc9e6:{NFSU2_TR(0x4fc9e6);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc9eb:{NFSU2_TR(0x4fc9eb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc9ec:{NFSU2_TR(0x4fc9ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fc9f1ull));
TAIL_STATIC(0x5426c0u,542);
}
B4fc9f1:L4fc9f1:{c.instructions+=4;NFSU2_TR(0x4fc9f1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4fc9f4:{NFSU2_TR(0x4fc9f4);
u8 U[4];
w4(U+0,u32(0xb5971bf1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fc9f9:{NFSU2_TR(0x4fc9f9);
__builtin_memmove((R+4),(R+24),4);
}
B4fc9fb:{NFSU2_TR(0x4fc9fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fca00ull));
TAIL_STATIC(0x4e2590u,4e2);
}
B4fca00:L4fca00:{c.instructions+=5;NFSU2_TR(0x4fca00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fca01:{NFSU2_TR(0x4fca01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fca02:{NFSU2_TR(0x4fca02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fca03:{NFSU2_TR(0x4fca03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fca04:{NFSU2_TR(0x4fca04);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fca07:L4fca07:{c.instructions+=2;NFSU2_TR(0x4fca07);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fca0a:{NFSU2_TR(0x4fca0a);
if(r1(R+518)){{goto L4fca14;}}
}
B4fca0c:L4fca0c:{c.instructions+=2;NFSU2_TR(0x4fca0c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x100ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fca12:{NFSU2_TR(0x4fca12);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fca21;}}
}
B4fca14:L4fca14:{c.instructions+=2;NFSU2_TR(0x4fca14);
u8 U[14];
__builtin_memmove((U+6),gp(0x7f444c),4);
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
B4fca1b:{NFSU2_TR(0x4fca1b);
if(r1(R+518)){{goto L4fcd6a;}}
}
B4fca21:L4fca21:{c.instructions+=3;NFSU2_TR(0x4fca21);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4fca27:{NFSU2_TR(0x4fca27);
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
B4fca29:{NFSU2_TR(0x4fca29);
if(r1(R+518)){{goto L4fcd6a;}}
}
B4fca2f:L4fca2f:{c.instructions+=2;NFSU2_TR(0x4fca2f);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x20ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x20ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fca32:{NFSU2_TR(0x4fca32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fcabe;}}
}
B4fca38:L4fca38:{c.instructions+=1;NFSU2_TR(0x4fca38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fca3dull));
TAIL_STATIC(0x50e2d0u,50e);
}
B4fca3d:L4fca3d:{c.instructions+=4;NFSU2_TR(0x4fca3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fca40:{NFSU2_TR(0x4fca40);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fca41:{NFSU2_TR(0x4fca41);
w4(R+4,u32(0x83a9d0ull));
}
B4fca46:{NFSU2_TR(0x4fca46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fca4bull));
TAIL_STATIC(0x495240u,495);
}
B4fca4b:L4fca4b:{c.instructions+=6;NFSU2_TR(0x4fca4b);
__builtin_memmove((R+28),(R+0),4);
}
B4fca4d:{NFSU2_TR(0x4fca4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fca50:{NFSU2_TR(0x4fca50);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4fca56:{NFSU2_TR(0x4fca56);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fca57:{NFSU2_TR(0x4fca57);
__builtin_memmove((R+4),(R+28),4);
}
B4fca59:{NFSU2_TR(0x4fca59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fca5eull));
TAIL_STATIC(0x5163a0u,516);
}
B4fca5e:L4fca5e:{c.instructions+=2;NFSU2_TR(0x4fca5e);
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
B4fca60:{NFSU2_TR(0x4fca60);
if(r1(R+518)){{goto L4fcd6a;}}
}
B4fca66:L4fca66:{c.instructions+=3;NFSU2_TR(0x4fca66);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fca67:{NFSU2_TR(0x4fca67);
__builtin_memmove((R+4),(R+28),4);
}
B4fca69:{NFSU2_TR(0x4fca69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fca6eull));
TAIL_STATIC(0x516340u,516);
}
B4fca6e:L4fca6e:{c.instructions+=2;NFSU2_TR(0x4fca6e);
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
B4fca70:{NFSU2_TR(0x4fca70);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fcd6a;}}
}
B4fca76:L4fca76:{c.instructions+=3;NFSU2_TR(0x4fca76);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fca77:{NFSU2_TR(0x4fca77);
__builtin_memmove((R+4),(R+28),4);
}
B4fca79:{NFSU2_TR(0x4fca79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fca7eull));
TAIL_STATIC(0x503590u,503);
}
B4fca7e:L4fca7e:{c.instructions+=2;NFSU2_TR(0x4fca7e);
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
B4fca80:{NFSU2_TR(0x4fca80);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fcd6a;}}
}
B4fca86:L4fca86:{c.instructions+=11;NFSU2_TR(0x4fca86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fca89:{NFSU2_TR(0x4fca89);
u8 U[4];
w4(U+0,u32(0x367161f5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fca8e:{NFSU2_TR(0x4fca8e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fca90:{NFSU2_TR(0x4fca90);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fca95:{NFSU2_TR(0x4fca95);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fca9a:{NFSU2_TR(0x4fca9a);
u8 U[4];
w4(U+0,u32(0x51123592ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fca9f:{NFSU2_TR(0x4fca9f);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcaa4:{NFSU2_TR(0x4fcaa4);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcaa9:{NFSU2_TR(0x4fcaa9);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcaae:{NFSU2_TR(0x4fcaae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcaaf:{NFSU2_TR(0x4fcaaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fcab4ull));
TAIL_STATIC(0x558790u,558);
}
B4fcab4:L4fcab4:{c.instructions+=6;NFSU2_TR(0x4fcab4);
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
B4fcab7:{NFSU2_TR(0x4fcab7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fcab8:{NFSU2_TR(0x4fcab8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fcab9:{NFSU2_TR(0x4fcab9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fcaba:{NFSU2_TR(0x4fcaba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fcabb:{NFSU2_TR(0x4fcabb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fcabe:L4fcabe:{c.instructions+=2;NFSU2_TR(0x4fcabe);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fcac1:{NFSU2_TR(0x4fcac1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fcb7a;}}
}
B4fcac7:L4fcac7:{c.instructions+=4;NFSU2_TR(0x4fcac7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fcaca:{NFSU2_TR(0x4fcaca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcacb:{NFSU2_TR(0x4fcacb);
w4(R+4,u32(0x83a9d0ull));
}
B4fcad0:{NFSU2_TR(0x4fcad0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fcad5ull));
TAIL_STATIC(0x495240u,495);
}
B4fcad5:L4fcad5:{c.instructions+=6;NFSU2_TR(0x4fcad5);
__builtin_memmove((R+28),(R+0),4);
}
B4fcad7:{NFSU2_TR(0x4fcad7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fcada:{NFSU2_TR(0x4fcada);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fcae0:{NFSU2_TR(0x4fcae0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcae1:{NFSU2_TR(0x4fcae1);
__builtin_memmove((R+4),(R+28),4);
}
B4fcae3:{NFSU2_TR(0x4fcae3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fcae8ull));
TAIL_STATIC(0x503590u,503);
}
B4fcae8:L4fcae8:{c.instructions+=2;NFSU2_TR(0x4fcae8);
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
B4fcaea:{NFSU2_TR(0x4fcaea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fcd6a;}}
}
B4fcaf0:L4fcaf0:{c.instructions+=5;NFSU2_TR(0x4fcaf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fcaf3:{NFSU2_TR(0x4fcaf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fcaf9:{NFSU2_TR(0x4fcaf9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcafa:{NFSU2_TR(0x4fcafa);
__builtin_memmove((R+4),(R+28),4);
}
B4fcafc:{NFSU2_TR(0x4fcafc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fcb01ull));
TAIL_STATIC(0x516360u,516);
}
B4fcb01:L4fcb01:{c.instructions+=2;NFSU2_TR(0x4fcb01);
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
B4fcb03:{NFSU2_TR(0x4fcb03);
if(r1(R+518)){{goto L4fcb14;}}
}
B4fcb05:L4fcb05:{c.instructions+=2;NFSU2_TR(0x4fcb05);
__builtin_memmove((R+4),(R+28),4);
}
B4fcb07:{NFSU2_TR(0x4fcb07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fcb0cull));
TAIL_STATIC(0x5165e0u,516);
}
B4fcb0c:L4fcb0c:{c.instructions+=2;NFSU2_TR(0x4fcb0c);
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
B4fcb0e:{NFSU2_TR(0x4fcb0e);
if(r1(R+518)){{goto L4fcc6a;}}
}
B4fcb14:L4fcb14:{c.instructions+=1;NFSU2_TR(0x4fcb14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fcb19ull));
TAIL_STATIC(0x50e2d0u,50e);
}
B4fcb19:L4fcb19:{c.instructions+=6;NFSU2_TR(0x4fcb19);
s4(0x850078,u32(0x100ull));
}
B4fcb23:{NFSU2_TR(0x4fcb23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fcb26:{NFSU2_TR(0x4fcb26);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fcb2c:{NFSU2_TR(0x4fcb2c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcb2d:{NFSU2_TR(0x4fcb2d);
w4(R+4,u32(0x83ad90ull));
}
B4fcb32:{NFSU2_TR(0x4fcb32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fcb37ull));
TAIL_STATIC(0x503510u,503);
}
B4fcb37:L4fcb37:{c.instructions+=3;NFSU2_TR(0x4fcb37);
__builtin_memmove((R+28),(R+0),4);
}
B4fcb39:{NFSU2_TR(0x4fcb39);
u8 U[14];
__builtin_memmove((U+6),gp(0x7f444c),4);
w1(R+512,u8((r4(U+6))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x10ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fcb40:{NFSU2_TR(0x4fcb40);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fcb5d;}}
}
B4fcb42:L4fcb42:{c.instructions+=7;NFSU2_TR(0x4fcb42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fcb45:{NFSU2_TR(0x4fcb45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fcb48:{NFSU2_TR(0x4fcb48);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcb49:{NFSU2_TR(0x4fcb49);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcb4a:{NFSU2_TR(0x4fcb4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcb4b:{NFSU2_TR(0x4fcb4b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcb4d:{NFSU2_TR(0x4fcb4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fcb52ull));
TAIL_STATIC(0x552e30u,552);
}
B4fcb52:L4fcb52:{c.instructions+=2;NFSU2_TR(0x4fcb52);
__builtin_memmove(gp(0x836338),(R+28),4);
}
B4fcb58:{NFSU2_TR(0x4fcb58);
{goto L4fcc3f;}
}
B4fcb5d:L4fcb5d:{c.instructions+=9;NFSU2_TR(0x4fcb5d);
s4(0x836338,u32(0x0ull));
}
B4fcb67:{NFSU2_TR(0x4fcb67);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fcb6a:{NFSU2_TR(0x4fcb6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fcb6d:{NFSU2_TR(0x4fcb6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fcb70:{NFSU2_TR(0x4fcb70);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcb71:{NFSU2_TR(0x4fcb71);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcb72:{NFSU2_TR(0x4fcb72);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcb73:{NFSU2_TR(0x4fcb73);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcb75:{NFSU2_TR(0x4fcb75);
{goto L4fcc3a;}
}
B4fcb7a:L4fcb7a:{c.instructions+=2;NFSU2_TR(0x4fcb7a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fcb7d:{NFSU2_TR(0x4fcb7d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fcbc1;}}
}
B4fcb7f:L4fcb7f:{c.instructions+=12;NFSU2_TR(0x4fcb7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fcb82:{NFSU2_TR(0x4fcb82);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcb84:{NFSU2_TR(0x4fcb84);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcb86:{NFSU2_TR(0x4fcb86);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcb88:{NFSU2_TR(0x4fcb88);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcb8a:{NFSU2_TR(0x4fcb8a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4fcb91:{NFSU2_TR(0x4fcb91);
__builtin_memmove(gp(0x85ad28),(R+0),4);
}
B4fcb96:{NFSU2_TR(0x4fcb96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fcb99:{NFSU2_TR(0x4fcb99);
u8 U[4];
w4(U+0,u32(0x971ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcb9e:{NFSU2_TR(0x4fcb9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcb9f:{NFSU2_TR(0x4fcb9f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcba0:{NFSU2_TR(0x4fcba0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fcba5ull));
TAIL_STATIC(0x4a3100u,4a3);
}
B4fcba5:L4fcba5:{c.instructions+=7;NFSU2_TR(0x4fcba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fcba8:{NFSU2_TR(0x4fcba8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fcbab:{NFSU2_TR(0x4fcbab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4fcbae:{NFSU2_TR(0x4fcbae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcbaf:{NFSU2_TR(0x4fcbaf);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcbb1:{NFSU2_TR(0x4fcbb1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcbb2:{NFSU2_TR(0x4fcbb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fcbb7ull));
TAIL_STATIC(0x50d150u,50d);
}
B4fcbb7:L4fcbb7:{c.instructions+=6;NFSU2_TR(0x4fcbb7);
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
B4fcbba:{NFSU2_TR(0x4fcbba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fcbbb:{NFSU2_TR(0x4fcbbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fcbbc:{NFSU2_TR(0x4fcbbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fcbbd:{NFSU2_TR(0x4fcbbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fcbbe:{NFSU2_TR(0x4fcbbe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fcbc1:L4fcbc1:{c.instructions+=4;NFSU2_TR(0x4fcbc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fcbc4:{NFSU2_TR(0x4fcbc4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcbc5:{NFSU2_TR(0x4fcbc5);
w4(R+4,u32(0x83a9d0ull));
}
B4fcbca:{NFSU2_TR(0x4fcbca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fcbcfull));
TAIL_STATIC(0x495240u,495);
}
B4fcbcf:L4fcbcf:{c.instructions+=6;NFSU2_TR(0x4fcbcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fcbd2:{NFSU2_TR(0x4fcbd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4fcbd8:{NFSU2_TR(0x4fcbd8);
__builtin_memmove((R+28),(R+0),4);
}
B4fcbda:{NFSU2_TR(0x4fcbda);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcbdb:{NFSU2_TR(0x4fcbdb);
__builtin_memmove((R+4),(R+28),4);
}
B4fcbdd:{NFSU2_TR(0x4fcbdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fcbe2ull));
TAIL_STATIC(0x503590u,503);
}
B4fcbe2:L4fcbe2:{c.instructions+=2;NFSU2_TR(0x4fcbe2);
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
B4fcbe4:{NFSU2_TR(0x4fcbe4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fcd6a;}}
}
B4fcbea:L4fcbea:{c.instructions+=3;NFSU2_TR(0x4fcbea);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcbeb:{NFSU2_TR(0x4fcbeb);
__builtin_memmove((R+4),(R+28),4);
}
B4fcbed:{NFSU2_TR(0x4fcbed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fcbf2ull));
TAIL_STATIC(0x516340u,516);
}
B4fcbf2:L4fcbf2:{c.instructions+=2;NFSU2_TR(0x4fcbf2);
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
B4fcbf4:{NFSU2_TR(0x4fcbf4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fcd6a;}}
}
B4fcbfa:L4fcbfa:{c.instructions+=2;NFSU2_TR(0x4fcbfa);
__builtin_memmove((R+4),(R+28),4);
}
B4fcbfc:{NFSU2_TR(0x4fcbfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fcc01ull));
TAIL_STATIC(0x5165e0u,516);
}
B4fcc01:L4fcc01:{c.instructions+=2;NFSU2_TR(0x4fcc01);
u8 U[4];
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fcc03:{NFSU2_TR(0x4fcc03);
if(r1(R+518)){{goto L4fcc6a;}}
}
B4fcc05:L4fcc05:{c.instructions+=6;NFSU2_TR(0x4fcc05);
__builtin_memmove((R+4),gp(0x85ad28),4);
}
B4fcc0b:{NFSU2_TR(0x4fcc0b);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(s64(s32(u32(0xab4cull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+4)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B4fcc11:{NFSU2_TR(0x4fcc11);
w4(R+0,u32(0x3ull));
}
B4fcc16:{NFSU2_TR(0x4fcc16);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x83aac0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fcc1c:{NFSU2_TR(0x4fcc1c);
__builtin_memmove(gp(0x7f444c),(R+0),4);
}
B4fcc21:{NFSU2_TR(0x4fcc21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fcc26ull));
TAIL_STATIC(0x50e2d0u,50e);
}
B4fcc26:L4fcc26:{c.instructions+=8;NFSU2_TR(0x4fcc26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fcc29:{NFSU2_TR(0x4fcc29);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fcc2f:{NFSU2_TR(0x4fcc2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fcc32:{NFSU2_TR(0x4fcc32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcc33:{NFSU2_TR(0x4fcc33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fcc36:{NFSU2_TR(0x4fcc36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcc37:{NFSU2_TR(0x4fcc37);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcc38:{NFSU2_TR(0x4fcc38);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcc3a:L4fcc3a:{c.instructions+=1;NFSU2_TR(0x4fcc3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fcc3full));
TAIL_STATIC(0x552cc0u,552);
}
B4fcc3f:L4fcc3f:{c.instructions+=6;NFSU2_TR(0x4fcc3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fcc42:{NFSU2_TR(0x4fcc42);
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
B4fcc45:{NFSU2_TR(0x4fcc45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcc46:{NFSU2_TR(0x4fcc46);
w4(R+4,u32(0x83aab4ull));
}
B4fcc4b:{NFSU2_TR(0x4fcc4b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcc4c:{NFSU2_TR(0x4fcc4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fcc51ull));
TAIL_STATIC(0x502a40u,502);
}
B4fcc51:L4fcc51:{c.instructions+=6;NFSU2_TR(0x4fcc51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fcc54:{NFSU2_TR(0x4fcc54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fcc57:{NFSU2_TR(0x4fcc57);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcc58:{NFSU2_TR(0x4fcc58);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcc5a:{NFSU2_TR(0x4fcc5a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcc5b:{NFSU2_TR(0x4fcc5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fcc60ull));
TAIL_STATIC(0x50d150u,50d);
}
B4fcc60:L4fcc60:{c.instructions+=6;NFSU2_TR(0x4fcc60);
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
B4fcc63:{NFSU2_TR(0x4fcc63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fcc64:{NFSU2_TR(0x4fcc64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fcc65:{NFSU2_TR(0x4fcc65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fcc66:{NFSU2_TR(0x4fcc66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fcc67:{NFSU2_TR(0x4fcc67);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fcc6a:L4fcc6a:{c.instructions+=8;NFSU2_TR(0x4fcc6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fcc6d:{NFSU2_TR(0x4fcc6d);
u8 U[4];
w4(U+0,u32(0x91921a8dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcc72:{NFSU2_TR(0x4fcc72);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcc77:{NFSU2_TR(0x4fcc77);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcc7c:{NFSU2_TR(0x4fcc7c);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcc81:{NFSU2_TR(0x4fcc81);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcc86:{NFSU2_TR(0x4fcc86);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcc87:{NFSU2_TR(0x4fcc87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fcc8cull));
TAIL_STATIC(0x558570u,558);
}
B4fcc8c:L4fcc8c:{c.instructions+=7;NFSU2_TR(0x4fcc8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fcc8f:{NFSU2_TR(0x4fcc8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fcc92:{NFSU2_TR(0x4fcc92);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4fcc95:{NFSU2_TR(0x4fcc95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcc96:{NFSU2_TR(0x4fcc96);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcc98:{NFSU2_TR(0x4fcc98);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcc99:{NFSU2_TR(0x4fcc99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fcc9eull));
TAIL_STATIC(0x50d150u,50d);
}
B4fcc9e:L4fcc9e:{c.instructions+=6;NFSU2_TR(0x4fcc9e);
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
B4fcca1:{NFSU2_TR(0x4fcca1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fcca2:{NFSU2_TR(0x4fcca2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fcca3:{NFSU2_TR(0x4fcca3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fcca4:{NFSU2_TR(0x4fcca4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fcca5:{NFSU2_TR(0x4fcca5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fcca8:L4fcca8:{c.instructions+=2;NFSU2_TR(0x4fcca8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fccad:{NFSU2_TR(0x4fccad);
if(r1(R+518)){{goto L4fccd7;}}
}
B4fccaf:L4fccaf:{c.instructions+=2;NFSU2_TR(0x4fccaf);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xd9feec59ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xd9feec59ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xd9feec59ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fccb4:{NFSU2_TR(0x4fccb4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fcd6a;}}
}
B4fccba:L4fccba:{c.instructions+=3;NFSU2_TR(0x4fccba);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4fccc0:{NFSU2_TR(0x4fccc0);
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
B4fccc2:{NFSU2_TR(0x4fccc2);
if(r1(R+518)){{goto L4fcd6a;}}
}
B4fccc8:L4fccc8:{c.instructions+=3;NFSU2_TR(0x4fccc8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fccc9:{NFSU2_TR(0x4fccc9);
__builtin_memmove((R+4),(R+24),4);
}
B4fcccb:{NFSU2_TR(0x4fcccb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fccd0ull));
TAIL_STATIC(0x4eed10u,4ee);
}
B4fccd0:L4fccd0:{c.instructions+=5;NFSU2_TR(0x4fccd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fccd1:{NFSU2_TR(0x4fccd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fccd2:{NFSU2_TR(0x4fccd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fccd3:{NFSU2_TR(0x4fccd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fccd4:{NFSU2_TR(0x4fccd4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fccd7:L4fccd7:{c.instructions+=3;NFSU2_TR(0x4fccd7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fccda:{NFSU2_TR(0x4fccda);
w4(R+12,u32(0x1ull));
}
B4fccdf:{NFSU2_TR(0x4fccdf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fcd09;}}
}
B4fcce1:L4fcce1:{c.instructions+=2;NFSU2_TR(0x4fcce1);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4fcce4:{NFSU2_TR(0x4fcce4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fcd09;}}
}
B4fcce6:L4fcce6:{c.instructions+=6;NFSU2_TR(0x4fcce6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fcce9:{NFSU2_TR(0x4fcce9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcceb:{NFSU2_TR(0x4fcceb);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fccf0:{NFSU2_TR(0x4fccf0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fccf1:{NFSU2_TR(0x4fccf1);
u8 U[4];
w4(U+0,u32(0x798f68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fccf6:{NFSU2_TR(0x4fccf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fccfbull));
TAIL_STATIC(0x555eb0u,555);
}
B4fccfb:L4fccfb:{c.instructions+=7;NFSU2_TR(0x4fccfb);
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
B4fccfe:{NFSU2_TR(0x4fccfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fccff:{NFSU2_TR(0x4fccff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fcd00:{NFSU2_TR(0x4fcd00);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4dull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4fcd04:{NFSU2_TR(0x4fcd04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fcd05:{NFSU2_TR(0x4fcd05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fcd06:{NFSU2_TR(0x4fcd06);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fcd09:L4fcd09:{c.instructions+=2;NFSU2_TR(0x4fcd09);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fcd0b:{NFSU2_TR(0x4fcd0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fcd1d;}}
}
B4fcd0d:L4fcd0d:{c.instructions+=2;NFSU2_TR(0x4fcd0d);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4eull))));
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
B4fcd10:{NFSU2_TR(0x4fcd10);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fcd1d;}}
}
B4fcd12:L4fcd12:{c.instructions+=6;NFSU2_TR(0x4fcd12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fcd13:{NFSU2_TR(0x4fcd13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fcd14:{NFSU2_TR(0x4fcd14);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4eull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4fcd18:{NFSU2_TR(0x4fcd18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fcd19:{NFSU2_TR(0x4fcd19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fcd1a:{NFSU2_TR(0x4fcd1a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fcd1d:L4fcd1d:{c.instructions+=3;NFSU2_TR(0x4fcd1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fcd23:{NFSU2_TR(0x4fcd23);
__builtin_memmove((R+4),(R+28),4);
}
B4fcd25:{NFSU2_TR(0x4fcd25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fcd2aull));
TAIL_STATIC(0x401820u,401);
}
B4fcd2a:L4fcd2a:{c.instructions+=2;NFSU2_TR(0x4fcd2a);
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
B4fcd2c:{NFSU2_TR(0x4fcd2c);
if(r1(R+518)){{goto L4fcd6a;}}
}
B4fcd2e:L4fcd2e:{c.instructions+=9;NFSU2_TR(0x4fcd2e);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B4fcd33:{NFSU2_TR(0x4fcd33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+0))));
}
B4fcd35:{NFSU2_TR(0x4fcd35);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fcd39:{NFSU2_TR(0x4fcd39);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4fcd3d:{NFSU2_TR(0x4fcd3d);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fcd43:{NFSU2_TR(0x4fcd43);
{u32 ea_=u32(u32(7894412u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fcd49:{NFSU2_TR(0x4fcd49);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fcd4b:{NFSU2_TR(0x4fcd4b);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fcd4e:{NFSU2_TR(0x4fcd4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fcd6a;}}
}
B4fcd50:L4fcd50:{c.instructions+=2;NFSU2_TR(0x4fcd50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fcd53:{NFSU2_TR(0x4fcd53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fcd58ull));
TAIL_STATIC(0x511e00u,511);
}
B4fcd58:L4fcd58:{c.instructions+=4;NFSU2_TR(0x4fcd58);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcd5a:{NFSU2_TR(0x4fcd5a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcd5b:{NFSU2_TR(0x4fcd5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcd5c:{NFSU2_TR(0x4fcd5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fcd61ull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B4fcd61:L4fcd61:{c.instructions+=2;NFSU2_TR(0x4fcd61);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4fcd67:{NFSU2_TR(0x4fcd67);
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
B4fcd6a:L4fcd6a:{c.instructions+=1;NFSU2_TR(0x4fcd6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fcd6b:L4fcd6b:{c.instructions+=4;NFSU2_TR(0x4fcd6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fcd6c:{NFSU2_TR(0x4fcd6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fcd6d:{NFSU2_TR(0x4fcd6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fcd6e:{NFSU2_TR(0x4fcd6e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fcda0:L4fcda0:{c.instructions+=10;NFSU2_TR(0x4fcda0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fcda4:{NFSU2_TR(0x4fcda4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcda5:{NFSU2_TR(0x4fcda5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4fcda9:{NFSU2_TR(0x4fcda9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcdaa:{NFSU2_TR(0x4fcdaa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcdab:{NFSU2_TR(0x4fcdab);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4fcdad:{NFSU2_TR(0x4fcdad);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0x911c0a4bull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911c0a4bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fcdb3:{NFSU2_TR(0x4fcdb3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcdb4:{NFSU2_TR(0x4fcdb4);
__builtin_memmove((R+24),(R+4),4);
}
B4fcdb6:{NFSU2_TR(0x4fcdb6);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4fd0d4u,4fd);}
}
B4fcdbc:L4fcdbc:{c.instructions+=1;NFSU2_TR(0x4fcdbc);
if(r1(R+518)){TAIL_STATIC(0x4fd02fu,4fd);}
}
B4fcdc2:L4fcdc2:{c.instructions+=2;NFSU2_TR(0x4fcdc2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0x406415e3ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fcdc8:{NFSU2_TR(0x4fcdc8);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4fcf3d;}}
}
B4fcdce:L4fcdce:{c.instructions+=1;NFSU2_TR(0x4fcdce);
if(r1(R+518)){{goto L4fce87;}}
}
B4fcdd4:L4fcdd4:{c.instructions+=2;NFSU2_TR(0x4fcdd4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0x23f1bfaull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x23f1bfaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fcdda:{NFSU2_TR(0x4fcdda);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4fce73;}}
}
B4fcde0:L4fcde0:{c.instructions+=1;NFSU2_TR(0x4fcde0);
if(r1(R+518)){{goto L4fce54;}}
}
B4fcde2:L4fcde2:{c.instructions+=2;NFSU2_TR(0x4fcde2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xca4ce1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fcde8:{NFSU2_TR(0x4fcde8);
if(r1(R+518)){{goto L4fce01;}}
}
B4fcdea:L4fcdea:{c.instructions+=2;NFSU2_TR(0x4fcdea);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x153e234ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fcdf0:{NFSU2_TR(0x4fcdf0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4fd3f2u,4fd);}
}
B4fcdf6:L4fcdf6:{c.instructions+=2;NFSU2_TR(0x4fcdf6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcdf7:{NFSU2_TR(0x4fcdf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fcdfcull));
TAIL_STATIC(0x4d1380u,4d1);
}
B4fcdfc:L4fcdfc:{c.instructions+=1;NFSU2_TR(0x4fcdfc);
TAIL_STATIC(0x4fd3f2u,4fd);
}
B4fce01:L4fce01:{c.instructions+=3;NFSU2_TR(0x4fce01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fce07:{NFSU2_TR(0x4fce07);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fce08:{NFSU2_TR(0x4fce08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fce0dull));
TAIL_STATIC(0x540a60u,540);
}
B4fce0d:L4fce0d:{c.instructions+=5;NFSU2_TR(0x4fce0d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fce10:{NFSU2_TR(0x4fce10);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fce12:{NFSU2_TR(0x4fce12);
u8 U[4];
w4(U+0,u32(0x49ec60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fce17:{NFSU2_TR(0x4fce17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4fce21:{NFSU2_TR(0x4fce21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fce26ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B4fce26:L4fce26:{c.instructions+=2;NFSU2_TR(0x4fce26);
__builtin_memmove((R+4),(R+0),4);
}
B4fce28:{NFSU2_TR(0x4fce28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fce2dull));
TAIL_STATIC(0x584270u,584);
}
B4fce2d:L4fce2d:{c.instructions+=3;NFSU2_TR(0x4fce2d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf9ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4fce34:{NFSU2_TR(0x4fce34);
u8 U[14];
__builtin_memmove((U+6),gp(0x8500d0),4);
w1(R+512,u8((r4(U+6))<(u32(0x12ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x12ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x12ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fce3b:{NFSU2_TR(0x4fce3b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4fd432u,4fd);}
}
B4fce41:L4fce41:{c.instructions+=3;NFSU2_TR(0x4fce41);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fce43:{NFSU2_TR(0x4fce43);
w4(R+4,u32(0x850080ull));
}
B4fce48:{NFSU2_TR(0x4fce48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fce4dull));
TAIL_STATIC(0x5031b0u,503);
}
B4fce4d:L4fce4d:{c.instructions+=5;NFSU2_TR(0x4fce4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fce4e:{NFSU2_TR(0x4fce4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fce4f:{NFSU2_TR(0x4fce4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fce50:{NFSU2_TR(0x4fce50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fce51:{NFSU2_TR(0x4fce51);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fce54:L4fce54:{c.instructions+=2;NFSU2_TR(0x4fce54);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x3ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4fce5b:{NFSU2_TR(0x4fce5b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4fd3f2u,4fd);}
}
B4fce61:L4fce61:{c.instructions+=3;NFSU2_TR(0x4fce61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fce67:{NFSU2_TR(0x4fce67);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf9ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4fce6e:{NFSU2_TR(0x4fce6e);
TAIL_STATIC(0x4fd3f2u,4fd);
}
B4fce73:L4fce73:{c.instructions+=2;NFSU2_TR(0x4fce73);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8905384ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fce79:{NFSU2_TR(0x4fce79);
if(r1(R+518)){{goto L4fcece;}}
}
B4fce7b:L4fce7b:{c.instructions+=2;NFSU2_TR(0x4fce7b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fce81:{NFSU2_TR(0x4fce81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4fd3f2u,4fd);}
}
B4fce87:L4fce87:{c.instructions+=3;NFSU2_TR(0x4fce87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fce8a:{NFSU2_TR(0x4fce8a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fce8b:{NFSU2_TR(0x4fce8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fce90ull));
TAIL_STATIC(0x51cd60u,51c);
}
B4fce90:L4fce90:{c.instructions+=3;NFSU2_TR(0x4fce90);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fce93:{NFSU2_TR(0x4fce93);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fce95:{NFSU2_TR(0x4fce95);
if(r1(R+518)){TAIL_STATIC(0x4fd3f2u,4fd);}
}
B4fce9b:L4fce9b:{c.instructions+=3;NFSU2_TR(0x4fce9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fce9e:{NFSU2_TR(0x4fce9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x626eb826ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fcea3:{NFSU2_TR(0x4fcea3);
if(r1(R+518)){{goto L4fceec;}}
}
B4fcea5:L4fcea5:{c.instructions+=2;NFSU2_TR(0x4fcea5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xd4d9d042ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fceaa:{NFSU2_TR(0x4fceaa);
if(r1(R+518)){{goto L4fceec;}}
}
B4fceac:L4fceac:{c.instructions+=2;NFSU2_TR(0x4fceac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x14b76941ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fceb1:{NFSU2_TR(0x4fceb1);
if(r1(R+518)){{goto L4fceec;}}
}
B4fceb3:L4fceb3:{c.instructions+=2;NFSU2_TR(0x4fceb3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x68cf7b18ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fceb8:{NFSU2_TR(0x4fceb8);
if(r1(R+518)){{goto L4fceec;}}
}
B4fceba:L4fceba:{c.instructions+=2;NFSU2_TR(0x4fceba);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4fcec0:{NFSU2_TR(0x4fcec0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fcee1;}}
}
B4fcec2:L4fcec2:{c.instructions+=2;NFSU2_TR(0x4fcec2);
__builtin_memmove((R+4),(R+24),4);
}
B4fcec4:{NFSU2_TR(0x4fcec4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fcec9ull));
TAIL_STATIC(0x49edd0u,49e);
}
B4fcec9:L4fcec9:{c.instructions+=1;NFSU2_TR(0x4fcec9);
TAIL_STATIC(0x4fd3f2u,4fd);
}
B4fcece:L4fcece:{c.instructions+=3;NFSU2_TR(0x4fcece);
__builtin_memmove((R+4),(R+24),4);
}
B4fced0:{NFSU2_TR(0x4fced0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cdull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4fced7:{NFSU2_TR(0x4fced7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fcedcull));
TAIL_STATIC(0x4f1620u,4f1);
}
B4fcedc:L4fcedc:{c.instructions+=1;NFSU2_TR(0x4fcedc);
TAIL_STATIC(0x4fd3f2u,4fd);
}
B4fcee1:L4fcee1:{c.instructions+=2;NFSU2_TR(0x4fcee1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fcee7:{NFSU2_TR(0x4fcee7);
TAIL_STATIC(0x4fd3f2u,4fd);
}
B4fceec:L4fceec:{c.instructions+=3;NFSU2_TR(0x4fceec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fcef2:{NFSU2_TR(0x4fcef2);
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
B4fcef5:{NFSU2_TR(0x4fcef5);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4fd3f2u,4fd);}
}
B4fcefb:L4fcefb:{c.instructions+=1;NFSU2_TR(0x4fcefb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4fd43cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4fcf02:L4fcf02:{c.instructions+=2;NFSU2_TR(0x4fcf02);
__builtin_memmove((R+4),(R+24),4);
}
B4fcf04:{NFSU2_TR(0x4fcf04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fcf09ull));
TAIL_STATIC(0x49edd0u,49e);
}
B4fcf09:L4fcf09:{c.instructions+=1;NFSU2_TR(0x4fcf09);
TAIL_STATIC(0x4fd3f2u,4fd);
}
B4fcf0e:L4fcf0e:{c.instructions+=2;NFSU2_TR(0x4fcf0e);
__builtin_memmove((R+4),(R+24),4);
}
B4fcf10:{NFSU2_TR(0x4fcf10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fcf15ull));
TAIL_STATIC(0x4faa00u,4fa);
}
B4fcf15:L4fcf15:{c.instructions+=1;NFSU2_TR(0x4fcf15);
TAIL_STATIC(0x4fd3f2u,4fd);
}
B4fcf1a:L4fcf1a:{c.instructions+=2;NFSU2_TR(0x4fcf1a);
__builtin_memmove((R+4),(R+24),4);
}
B4fcf1c:{NFSU2_TR(0x4fcf1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fcf21ull));
TAIL_STATIC(0x4bb3f0u,4bb);
}
B4fcf21:L4fcf21:{c.instructions+=1;NFSU2_TR(0x4fcf21);
TAIL_STATIC(0x4fd3f2u,4fd);
}
B4fcf26:L4fcf26:{c.instructions+=5;NFSU2_TR(0x4fcf26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fcf29:{NFSU2_TR(0x4fcf29);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcf2a:{NFSU2_TR(0x4fcf2a);
u8 U[4];
w4(U+0,u32(0x798fc4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcf2f:{NFSU2_TR(0x4fcf2f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcf30:{NFSU2_TR(0x4fcf30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fcf35ull));
TAIL_STATIC(0x537980u,537);
}
B4fcf35:L4fcf35:{c.instructions+=2;NFSU2_TR(0x4fcf35);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4fcf38:{NFSU2_TR(0x4fcf38);
TAIL_STATIC(0x4fd3f2u,4fd);
}
B4fcf3d:L4fcf3d:{c.instructions+=2;NFSU2_TR(0x4fcf3d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0x904aca43ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x904aca43ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fcf43:{NFSU2_TR(0x4fcf43);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4fd014u,4fd);}
}
B4fcf49:L4fcf49:{c.instructions+=1;NFSU2_TR(0x4fcf49);
if(r1(R+518)){TAIL_STATIC(0x4fd003u,4fd);}
}
B4fcf4f:L4fcf4f:{c.instructions+=2;NFSU2_TR(0x4fcf4f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x59337816ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fcf55:{NFSU2_TR(0x4fcf55);
if(r1(R+518)){TAIL_STATIC(0x4fd17bu,4fd);}
}
B4fcf5b:L4fcf5b:{c.instructions+=2;NFSU2_TR(0x4fcf5b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x72619778ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fcf61:{NFSU2_TR(0x4fcf61);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4fd3f2u,4fd);}
}
B4fcf67:L4fcf67:{c.instructions+=3;NFSU2_TR(0x4fcf67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fcf6a:{NFSU2_TR(0x4fcf6a);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fcf6c:{NFSU2_TR(0x4fcf6c);
if(r1(R+518)){{goto L4fcf71;}}
}
B4fcf6e:L4fcf6e:{c.instructions+=1;NFSU2_TR(0x4fcf6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fcf71:L4fcf71:{c.instructions+=3;NFSU2_TR(0x4fcf71);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fcf74:{NFSU2_TR(0x4fcf74);
__builtin_memmove((R+4),(R+28),4);
}
B4fcf76:{NFSU2_TR(0x4fcf76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fcf7bull));
TAIL_STATIC(0x51f530u,51f);
}
B4fcf7b:L4fcf7b:{c.instructions+=3;NFSU2_TR(0x4fcf7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcf7c:{NFSU2_TR(0x4fcf7c);
__builtin_memmove((R+4),(R+28),4);
}
B4fcf7e:{NFSU2_TR(0x4fcf7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fcf83ull));
TAIL_STATIC(0x51f350u,51f);
}
B4fcf83:L4fcf83:{c.instructions+=2;NFSU2_TR(0x4fcf83);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fcf85:{NFSU2_TR(0x4fcf85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fcfad;}}
}
B4fcf87:L4fcf87:{c.instructions+=3;NFSU2_TR(0x4fcf87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fcf8d:{NFSU2_TR(0x4fcf8d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fcf8f:{NFSU2_TR(0x4fcf8f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4fd3f2u,4fd);}
}
B4fcf95:L4fcf95:{c.instructions+=4;NFSU2_TR(0x4fcf95);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcf97:{NFSU2_TR(0x4fcf97);
__builtin_memmove((R+4),(R+24),4);
}
B4fcf99:{NFSU2_TR(0x4fcf99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4fcfa3:{NFSU2_TR(0x4fcfa3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fcfa8ull));
TAIL_STATIC(0x4bb0f0u,4bb);
}
B4fcfa8:L4fcfa8:{c.instructions+=1;NFSU2_TR(0x4fcfa8);
TAIL_STATIC(0x4fd3f2u,4fd);
}
B4fcfad:L4fcfad:{c.instructions+=6;NFSU2_TR(0x4fcfad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fcfb0:{NFSU2_TR(0x4fcfb0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcfb2:{NFSU2_TR(0x4fcfb2);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcfb7:{NFSU2_TR(0x4fcfb7);
u8 U[4];
w4(U+0,u32(0x444969fdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcfbc:{NFSU2_TR(0x4fcfbc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcfbd:{NFSU2_TR(0x4fcfbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fcfc2ull));
TAIL_STATIC(0x537c00u,537);
}
B4fcfc2:L4fcfc2:{c.instructions+=3;NFSU2_TR(0x4fcfc2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4fcfc5:{NFSU2_TR(0x4fcfc5);
__builtin_memmove((R+4),(R+28),4);
}
B4fcfc7:{NFSU2_TR(0x4fcfc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fcfccull));
TAIL_STATIC(0x54eb60u,54e);
}
B4fcfcc:L4fcfcc:{c.instructions+=4;NFSU2_TR(0x4fcfcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fcfcf:{NFSU2_TR(0x4fcfcf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcfd0:{NFSU2_TR(0x4fcfd0);
__builtin_memmove((R+4),(R+28),4);
}
B4fcfd2:{NFSU2_TR(0x4fcfd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fcfd7ull));
TAIL_STATIC(0x51f440u,51f);
}
B4fcfd7:L4fcfd7:{c.instructions+=3;NFSU2_TR(0x4fcfd7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcfd8:{NFSU2_TR(0x4fcfd8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcfda:{NFSU2_TR(0x4fcfda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fcfdfull));
TAIL_STATIC(0x58f740u,58f);
}
B4fcfdf:L4fcfdf:{c.instructions+=3;NFSU2_TR(0x4fcfdf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fcfe2:{NFSU2_TR(0x4fcfe2);
__builtin_memmove((R+4),(R+0),4);
}
B4fcfe4:{NFSU2_TR(0x4fcfe4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fcfe9ull));
TAIL_STATIC(0x495380u,495);
}
B4fcfe9:L4fcfe9:{c.instructions+=4;NFSU2_TR(0x4fcfe9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcfea:{NFSU2_TR(0x4fcfea);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fcfec:{NFSU2_TR(0x4fcfec);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4fcff2:{NFSU2_TR(0x4fcff2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fcff7ull));
TAIL_STATIC(0x538080u,538);
}
B4fcff7:L4fcff7:{c.instructions+=2;NFSU2_TR(0x4fcff7);
__builtin_memmove((R+4),(R+24),4);
}
B4fcff9:{NFSU2_TR(0x4fcff9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fcffeull));
TAIL_STATIC(0x4bafd0u,4ba);
}
B4fcffe:L4fcffe:{c.instructions+=1;NFSU2_TR(0x4fcffe);
TAIL_STATIC(0x4fd3f2u,4fd);
}
XIT:NFSU2_TR_EXIT(0x4fc,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
