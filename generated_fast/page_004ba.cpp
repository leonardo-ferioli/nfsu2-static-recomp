#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_49e(u8* __restrict R,Cpu& c);
u32 body_4b9(u8* __restrict R,Cpu& c);
u32 body_4bb(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_539(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_54f(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_582(u8* __restrict R,Cpu& c);
u32 body_584(u8* __restrict R,Cpu& c);
u32 body_586(u8* __restrict R,Cpu& c);
u32 body_587(u8* __restrict R,Cpu& c);
u32 body_58a(u8* __restrict R,Cpu& c);
u32 body_58b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4ba,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4ba,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4ba(u8* __restrict R,Cpu& c);
u32 page_4ba(Cpu& c){return body_4ba(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4ba(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4ba000:goto L4ba000;
case 0x4ba001:c.instructions+=5;goto B4ba001;
case 0x4ba003:c.instructions+=4;goto B4ba003;
case 0x4ba006:c.instructions+=3;goto B4ba006;
case 0x4ba00b:c.instructions+=2;goto B4ba00b;
case 0x4ba00c:c.instructions+=1;goto B4ba00c;
case 0x4ba011:goto L4ba011;
case 0x4ba014:c.instructions+=4;goto B4ba014;
case 0x4ba017:c.instructions+=3;goto B4ba017;
case 0x4ba018:c.instructions+=2;goto B4ba018;
case 0x4ba019:c.instructions+=1;goto B4ba019;
case 0x4ba01e:goto L4ba01e;
case 0x4ba021:c.instructions+=2;goto B4ba021;
case 0x4ba022:c.instructions+=1;goto B4ba022;
case 0x4ba030:goto L4ba030;
case 0x4ba032:c.instructions+=10;goto B4ba032;
case 0x4ba037:c.instructions+=9;goto B4ba037;
case 0x4ba03d:c.instructions+=8;goto B4ba03d;
case 0x4ba03e:c.instructions+=7;goto B4ba03e;
case 0x4ba045:c.instructions+=6;goto B4ba045;
case 0x4ba048:c.instructions+=5;goto B4ba048;
case 0x4ba049:c.instructions+=4;goto B4ba049;
case 0x4ba04a:c.instructions+=3;goto B4ba04a;
case 0x4ba04b:c.instructions+=2;goto B4ba04b;
case 0x4ba04d:c.instructions+=1;goto B4ba04d;
case 0x4ba052:goto L4ba052;
case 0x4ba056:c.instructions+=2;goto B4ba056;
case 0x4ba05e:c.instructions+=1;goto B4ba05e;
case 0x4ba060:goto L4ba060;
case 0x4ba064:c.instructions+=2;goto B4ba064;
case 0x4ba065:c.instructions+=1;goto B4ba065;
case 0x4ba06a:goto L4ba06a;
case 0x4ba06c:c.instructions+=2;goto B4ba06c;
case 0x4ba06e:c.instructions+=1;goto B4ba06e;
case 0x4ba070:goto L4ba070;
case 0x4ba071:c.instructions+=1;goto B4ba071;
case 0x4ba076:goto L4ba076;
case 0x4ba079:c.instructions+=2;goto B4ba079;
case 0x4ba07b:c.instructions+=1;goto B4ba07b;
case 0x4ba07d:goto L4ba07d;
case 0x4ba082:c.instructions+=1;goto B4ba082;
case 0x4ba087:goto L4ba087;
case 0x4ba08a:c.instructions+=4;goto B4ba08a;
case 0x4ba08e:c.instructions+=3;goto B4ba08e;
case 0x4ba090:c.instructions+=2;goto B4ba090;
case 0x4ba098:c.instructions+=1;goto B4ba098;
case 0x4ba09a:goto L4ba09a;
case 0x4ba09c:c.instructions+=13;goto B4ba09c;
case 0x4ba09d:c.instructions+=12;goto B4ba09d;
case 0x4ba09f:c.instructions+=11;goto B4ba09f;
case 0x4ba0a1:c.instructions+=10;goto B4ba0a1;
case 0x4ba0a7:c.instructions+=9;goto B4ba0a7;
case 0x4ba0a8:c.instructions+=8;goto B4ba0a8;
case 0x4ba0ae:c.instructions+=7;goto B4ba0ae;
case 0x4ba0af:c.instructions+=6;goto B4ba0af;
case 0x4ba0b5:c.instructions+=5;goto B4ba0b5;
case 0x4ba0b6:c.instructions+=4;goto B4ba0b6;
case 0x4ba0bc:c.instructions+=3;goto B4ba0bc;
case 0x4ba0bd:c.instructions+=2;goto B4ba0bd;
case 0x4ba0bf:c.instructions+=1;goto B4ba0bf;
case 0x4ba0c4:goto L4ba0c4;
case 0x4ba0c6:goto L4ba0c6;
case 0x4ba0c8:goto L4ba0c8;
case 0x4ba0c9:c.instructions+=3;goto B4ba0c9;
case 0x4ba0cb:c.instructions+=2;goto B4ba0cb;
case 0x4ba0d3:c.instructions+=1;goto B4ba0d3;
case 0x4ba0d8:goto L4ba0d8;
case 0x4ba0dd:goto L4ba0dd;
case 0x4ba0e1:c.instructions+=2;goto B4ba0e1;
case 0x4ba0e3:c.instructions+=1;goto B4ba0e3;
case 0x4ba0e9:goto L4ba0e9;
case 0x4ba0ef:c.instructions+=2;goto B4ba0ef;
case 0x4ba0f1:c.instructions+=1;goto B4ba0f1;
case 0x4ba0f3:goto L4ba0f3;
case 0x4ba0f8:c.instructions+=1;goto B4ba0f8;
case 0x4ba0fd:goto L4ba0fd;
case 0x4ba100:c.instructions+=4;goto B4ba100;
case 0x4ba104:c.instructions+=3;goto B4ba104;
case 0x4ba106:c.instructions+=2;goto B4ba106;
case 0x4ba10e:c.instructions+=1;goto B4ba10e;
case 0x4ba110:goto L4ba110;
case 0x4ba112:c.instructions+=13;goto B4ba112;
case 0x4ba114:c.instructions+=12;goto B4ba114;
case 0x4ba116:c.instructions+=11;goto B4ba116;
case 0x4ba118:c.instructions+=10;goto B4ba118;
case 0x4ba11e:c.instructions+=9;goto B4ba11e;
case 0x4ba11f:c.instructions+=8;goto B4ba11f;
case 0x4ba125:c.instructions+=7;goto B4ba125;
case 0x4ba126:c.instructions+=6;goto B4ba126;
case 0x4ba12c:c.instructions+=5;goto B4ba12c;
case 0x4ba12d:c.instructions+=4;goto B4ba12d;
case 0x4ba133:c.instructions+=3;goto B4ba133;
case 0x4ba134:c.instructions+=2;goto B4ba134;
case 0x4ba136:c.instructions+=1;goto B4ba136;
case 0x4ba13b:goto L4ba13b;
case 0x4ba13d:goto L4ba13d;
case 0x4ba13f:goto L4ba13f;
case 0x4ba140:c.instructions+=3;goto B4ba140;
case 0x4ba142:c.instructions+=2;goto B4ba142;
case 0x4ba14a:c.instructions+=1;goto B4ba14a;
case 0x4ba14f:goto L4ba14f;
case 0x4ba154:c.instructions+=2;goto B4ba154;
case 0x4ba156:c.instructions+=1;goto B4ba156;
case 0x4ba15b:goto L4ba15b;
case 0x4ba15e:c.instructions+=4;goto B4ba15e;
case 0x4ba15f:c.instructions+=3;goto B4ba15f;
case 0x4ba160:c.instructions+=2;goto B4ba160;
case 0x4ba162:c.instructions+=1;goto B4ba162;
case 0x4ba167:goto L4ba167;
case 0x4ba169:c.instructions+=1;goto B4ba169;
case 0x4ba16e:goto L4ba16e;
case 0x4ba172:goto L4ba172;
case 0x4ba173:c.instructions+=2;goto B4ba173;
case 0x4ba176:c.instructions+=1;goto B4ba176;
case 0x4ba17c:goto L4ba17c;
case 0x4ba17e:c.instructions+=2;goto B4ba17e;
case 0x4ba180:c.instructions+=1;goto B4ba180;
case 0x4ba185:goto L4ba185;
case 0x4ba18b:c.instructions+=3;goto B4ba18b;
case 0x4ba18d:c.instructions+=2;goto B4ba18d;
case 0x4ba192:c.instructions+=1;goto B4ba192;
case 0x4ba194:goto L4ba194;
case 0x4ba199:goto L4ba199;
case 0x4ba19c:c.instructions+=4;goto B4ba19c;
case 0x4ba19d:c.instructions+=3;goto B4ba19d;
case 0x4ba1a2:c.instructions+=2;goto B4ba1a2;
case 0x4ba1a3:c.instructions+=1;goto B4ba1a3;
case 0x4ba1a8:goto L4ba1a8;
case 0x4ba1ab:c.instructions+=2;goto B4ba1ab;
case 0x4ba1ac:c.instructions+=1;goto B4ba1ac;
case 0x4ba1b1:goto L4ba1b1;
case 0x4ba1b5:c.instructions+=7;goto B4ba1b5;
case 0x4ba1b8:c.instructions+=6;goto B4ba1b8;
case 0x4ba1b9:c.instructions+=5;goto B4ba1b9;
case 0x4ba1ba:c.instructions+=4;goto B4ba1ba;
case 0x4ba1bb:c.instructions+=3;goto B4ba1bb;
case 0x4ba1c2:c.instructions+=2;goto B4ba1c2;
case 0x4ba1c5:c.instructions+=1;goto B4ba1c5;
case 0x4ba1d0:goto L4ba1d0;
case 0x4ba1d1:c.instructions+=5;goto B4ba1d1;
case 0x4ba1d3:c.instructions+=4;goto B4ba1d3;
case 0x4ba1d6:c.instructions+=3;goto B4ba1d6;
case 0x4ba1db:c.instructions+=2;goto B4ba1db;
case 0x4ba1dc:c.instructions+=1;goto B4ba1dc;
case 0x4ba1e1:goto L4ba1e1;
case 0x4ba1e6:c.instructions+=5;goto B4ba1e6;
case 0x4ba1e9:c.instructions+=4;goto B4ba1e9;
case 0x4ba1ec:c.instructions+=3;goto B4ba1ec;
case 0x4ba1ef:c.instructions+=2;goto B4ba1ef;
case 0x4ba1f1:c.instructions+=1;goto B4ba1f1;
case 0x4ba1f3:goto L4ba1f3;
case 0x4ba1f6:c.instructions+=3;goto B4ba1f6;
case 0x4ba1fb:c.instructions+=2;goto B4ba1fb;
case 0x4ba1fc:c.instructions+=1;goto B4ba1fc;
case 0x4ba201:goto L4ba201;
case 0x4ba204:c.instructions+=2;goto B4ba204;
case 0x4ba205:c.instructions+=1;goto B4ba205;
case 0x4ba206:goto L4ba206;
case 0x4ba209:c.instructions+=4;goto B4ba209;
case 0x4ba20a:c.instructions+=3;goto B4ba20a;
case 0x4ba20f:c.instructions+=2;goto B4ba20f;
case 0x4ba210:c.instructions+=1;goto B4ba210;
case 0x4ba215:goto L4ba215;
case 0x4ba218:c.instructions+=2;goto B4ba218;
case 0x4ba219:c.instructions+=1;goto B4ba219;
case 0x4ba220:goto L4ba220;
case 0x4ba221:c.instructions+=5;goto B4ba221;
case 0x4ba223:c.instructions+=4;goto B4ba223;
case 0x4ba226:c.instructions+=3;goto B4ba226;
case 0x4ba22b:c.instructions+=2;goto B4ba22b;
case 0x4ba22c:c.instructions+=1;goto B4ba22c;
case 0x4ba231:goto L4ba231;
case 0x4ba237:c.instructions+=4;goto B4ba237;
case 0x4ba23a:c.instructions+=3;goto B4ba23a;
case 0x4ba23d:c.instructions+=2;goto B4ba23d;
case 0x4ba23f:c.instructions+=1;goto B4ba23f;
case 0x4ba241:goto L4ba241;
case 0x4ba244:c.instructions+=3;goto B4ba244;
case 0x4ba249:c.instructions+=2;goto B4ba249;
case 0x4ba24a:c.instructions+=1;goto B4ba24a;
case 0x4ba24f:goto L4ba24f;
case 0x4ba252:c.instructions+=2;goto B4ba252;
case 0x4ba253:c.instructions+=1;goto B4ba253;
case 0x4ba254:goto L4ba254;
case 0x4ba257:c.instructions+=3;goto B4ba257;
case 0x4ba25c:c.instructions+=2;goto B4ba25c;
case 0x4ba25d:c.instructions+=1;goto B4ba25d;
case 0x4ba262:goto L4ba262;
case 0x4ba265:c.instructions+=2;goto B4ba265;
case 0x4ba266:c.instructions+=1;goto B4ba266;
case 0x4ba270:goto L4ba270;
case 0x4ba271:c.instructions+=5;goto B4ba271;
case 0x4ba273:c.instructions+=4;goto B4ba273;
case 0x4ba276:c.instructions+=3;goto B4ba276;
case 0x4ba27b:c.instructions+=2;goto B4ba27b;
case 0x4ba27c:c.instructions+=1;goto B4ba27c;
case 0x4ba281:goto L4ba281;
case 0x4ba287:c.instructions+=4;goto B4ba287;
case 0x4ba28a:c.instructions+=3;goto B4ba28a;
case 0x4ba28d:c.instructions+=2;goto B4ba28d;
case 0x4ba28f:c.instructions+=1;goto B4ba28f;
case 0x4ba291:goto L4ba291;
case 0x4ba294:c.instructions+=3;goto B4ba294;
case 0x4ba299:c.instructions+=2;goto B4ba299;
case 0x4ba29a:c.instructions+=1;goto B4ba29a;
case 0x4ba29f:goto L4ba29f;
case 0x4ba2a2:c.instructions+=2;goto B4ba2a2;
case 0x4ba2a3:c.instructions+=1;goto B4ba2a3;
case 0x4ba2a4:goto L4ba2a4;
case 0x4ba2a7:c.instructions+=3;goto B4ba2a7;
case 0x4ba2ac:c.instructions+=2;goto B4ba2ac;
case 0x4ba2ad:c.instructions+=1;goto B4ba2ad;
case 0x4ba2b2:goto L4ba2b2;
case 0x4ba2b5:c.instructions+=2;goto B4ba2b5;
case 0x4ba2b6:c.instructions+=1;goto B4ba2b6;
case 0x4ba2c0:goto L4ba2c0;
case 0x4ba2c2:c.instructions+=20;goto B4ba2c2;
case 0x4ba2c7:c.instructions+=19;goto B4ba2c7;
case 0x4ba2cd:c.instructions+=18;goto B4ba2cd;
case 0x4ba2ce:c.instructions+=17;goto B4ba2ce;
case 0x4ba2d5:c.instructions+=16;goto B4ba2d5;
case 0x4ba2d6:c.instructions+=15;goto B4ba2d6;
case 0x4ba2da:c.instructions+=14;goto B4ba2da;
case 0x4ba2de:c.instructions+=13;goto B4ba2de;
case 0x4ba2df:c.instructions+=12;goto B4ba2df;
case 0x4ba2e1:c.instructions+=11;goto B4ba2e1;
case 0x4ba2e5:c.instructions+=10;goto B4ba2e5;
case 0x4ba2e6:c.instructions+=9;goto B4ba2e6;
case 0x4ba2ea:c.instructions+=8;goto B4ba2ea;
case 0x4ba2eb:c.instructions+=7;goto B4ba2eb;
case 0x4ba2ef:c.instructions+=6;goto B4ba2ef;
case 0x4ba2f0:c.instructions+=5;goto B4ba2f0;
case 0x4ba2f1:c.instructions+=4;goto B4ba2f1;
case 0x4ba2f2:c.instructions+=3;goto B4ba2f2;
case 0x4ba2f4:c.instructions+=2;goto B4ba2f4;
case 0x4ba2f8:c.instructions+=1;goto B4ba2f8;
case 0x4ba2fd:goto L4ba2fd;
case 0x4ba303:c.instructions+=7;goto B4ba303;
case 0x4ba309:c.instructions+=6;goto B4ba309;
case 0x4ba30c:c.instructions+=5;goto B4ba30c;
case 0x4ba311:c.instructions+=4;goto B4ba311;
case 0x4ba317:c.instructions+=3;goto B4ba317;
case 0x4ba319:c.instructions+=2;goto B4ba319;
case 0x4ba321:c.instructions+=1;goto B4ba321;
case 0x4ba323:goto L4ba323;
case 0x4ba328:c.instructions+=3;goto B4ba328;
case 0x4ba32b:c.instructions+=2;goto B4ba32b;
case 0x4ba332:c.instructions+=1;goto B4ba332;
case 0x4ba334:goto L4ba334;
case 0x4ba33a:c.instructions+=3;goto B4ba33a;
case 0x4ba340:c.instructions+=2;goto B4ba340;
case 0x4ba343:c.instructions+=1;goto B4ba343;
case 0x4ba346:goto L4ba346;
case 0x4ba348:c.instructions+=2;goto B4ba348;
case 0x4ba34b:c.instructions+=1;goto B4ba34b;
case 0x4ba350:goto L4ba350;
case 0x4ba354:c.instructions+=5;goto B4ba354;
case 0x4ba356:c.instructions+=4;goto B4ba356;
case 0x4ba357:c.instructions+=3;goto B4ba357;
case 0x4ba35e:c.instructions+=2;goto B4ba35e;
case 0x4ba361:c.instructions+=1;goto B4ba361;
case 0x4ba370:goto L4ba370;
case 0x4ba375:c.instructions+=1;goto B4ba375;
case 0x4ba380:goto L4ba380;
case 0x4ba388:c.instructions+=3;goto B4ba388;
case 0x4ba389:c.instructions+=2;goto B4ba389;
case 0x4ba38b:c.instructions+=1;goto B4ba38b;
case 0x4ba38d:goto L4ba38d;
case 0x4ba391:c.instructions+=6;goto B4ba391;
case 0x4ba393:c.instructions+=5;goto B4ba393;
case 0x4ba398:c.instructions+=4;goto B4ba398;
case 0x4ba39d:c.instructions+=3;goto B4ba39d;
case 0x4ba39e:c.instructions+=2;goto B4ba39e;
case 0x4ba3a1:c.instructions+=1;goto B4ba3a1;
case 0x4ba3a6:goto L4ba3a6;
case 0x4ba3ab:c.instructions+=7;goto B4ba3ab;
case 0x4ba3b1:c.instructions+=6;goto B4ba3b1;
case 0x4ba3b4:c.instructions+=5;goto B4ba3b4;
case 0x4ba3b5:c.instructions+=4;goto B4ba3b5;
case 0x4ba3ba:c.instructions+=3;goto B4ba3ba;
case 0x4ba3bb:c.instructions+=2;goto B4ba3bb;
case 0x4ba3c0:c.instructions+=1;goto B4ba3c0;
case 0x4ba3c5:goto L4ba3c5;
case 0x4ba3c8:goto L4ba3c8;
case 0x4ba3c9:c.instructions+=1;goto B4ba3c9;
case 0x4ba3d0:goto L4ba3d0;
case 0x4ba3d1:c.instructions+=5;goto B4ba3d1;
case 0x4ba3d3:c.instructions+=4;goto B4ba3d3;
case 0x4ba3d6:c.instructions+=3;goto B4ba3d6;
case 0x4ba3db:c.instructions+=2;goto B4ba3db;
case 0x4ba3dc:c.instructions+=1;goto B4ba3dc;
case 0x4ba3e1:goto L4ba3e1;
case 0x4ba3e7:c.instructions+=4;goto B4ba3e7;
case 0x4ba3ed:c.instructions+=3;goto B4ba3ed;
case 0x4ba3f0:c.instructions+=2;goto B4ba3f0;
case 0x4ba3f2:c.instructions+=1;goto B4ba3f2;
case 0x4ba3f4:goto L4ba3f4;
case 0x4ba3f7:c.instructions+=3;goto B4ba3f7;
case 0x4ba3fc:c.instructions+=2;goto B4ba3fc;
case 0x4ba3fd:c.instructions+=1;goto B4ba3fd;
case 0x4ba402:goto L4ba402;
case 0x4ba405:c.instructions+=2;goto B4ba405;
case 0x4ba406:c.instructions+=1;goto B4ba406;
case 0x4ba407:goto L4ba407;
case 0x4ba409:c.instructions+=1;goto B4ba409;
case 0x4ba40e:goto L4ba40e;
case 0x4ba413:goto L4ba413;
case 0x4ba414:c.instructions+=2;goto B4ba414;
case 0x4ba417:c.instructions+=1;goto B4ba417;
case 0x4ba419:goto L4ba419;
case 0x4ba420:c.instructions+=1;goto B4ba420;
case 0x4ba427:goto L4ba427;
case 0x4ba42c:c.instructions+=10;goto B4ba42c;
case 0x4ba432:c.instructions+=9;goto B4ba432;
case 0x4ba438:c.instructions+=8;goto B4ba438;
case 0x4ba43e:c.instructions+=7;goto B4ba43e;
case 0x4ba43f:c.instructions+=6;goto B4ba43f;
case 0x4ba442:c.instructions+=5;goto B4ba442;
case 0x4ba443:c.instructions+=4;goto B4ba443;
case 0x4ba444:c.instructions+=3;goto B4ba444;
case 0x4ba449:c.instructions+=2;goto B4ba449;
case 0x4ba44a:c.instructions+=1;goto B4ba44a;
case 0x4ba44f:goto L4ba44f;
case 0x4ba452:c.instructions+=2;goto B4ba452;
case 0x4ba453:c.instructions+=1;goto B4ba453;
case 0x4ba454:goto L4ba454;
case 0x4ba459:c.instructions+=10;goto B4ba459;
case 0x4ba45f:c.instructions+=9;goto B4ba45f;
case 0x4ba465:c.instructions+=8;goto B4ba465;
case 0x4ba466:c.instructions+=7;goto B4ba466;
case 0x4ba46c:c.instructions+=6;goto B4ba46c;
case 0x4ba46f:c.instructions+=5;goto B4ba46f;
case 0x4ba470:c.instructions+=4;goto B4ba470;
case 0x4ba471:c.instructions+=3;goto B4ba471;
case 0x4ba476:c.instructions+=2;goto B4ba476;
case 0x4ba477:c.instructions+=1;goto B4ba477;
case 0x4ba47c:goto L4ba47c;
case 0x4ba47f:c.instructions+=2;goto B4ba47f;
case 0x4ba480:c.instructions+=1;goto B4ba480;
case 0x4ba481:goto L4ba481;
case 0x4ba486:goto L4ba486;
case 0x4ba489:c.instructions+=2;goto B4ba489;
case 0x4ba48e:c.instructions+=1;goto B4ba48e;
case 0x4ba490:goto L4ba490;
case 0x4ba496:c.instructions+=9;goto B4ba496;
case 0x4ba49c:c.instructions+=8;goto B4ba49c;
case 0x4ba4a2:c.instructions+=7;goto B4ba4a2;
case 0x4ba4a3:c.instructions+=6;goto B4ba4a3;
case 0x4ba4a6:c.instructions+=5;goto B4ba4a6;
case 0x4ba4a7:c.instructions+=4;goto B4ba4a7;
case 0x4ba4a8:c.instructions+=3;goto B4ba4a8;
case 0x4ba4ad:c.instructions+=2;goto B4ba4ad;
case 0x4ba4ae:c.instructions+=1;goto B4ba4ae;
case 0x4ba4b3:goto L4ba4b3;
case 0x4ba4b6:c.instructions+=2;goto B4ba4b6;
case 0x4ba4b7:c.instructions+=1;goto B4ba4b7;
case 0x4ba4b8:goto L4ba4b8;
case 0x4ba4be:c.instructions+=9;goto B4ba4be;
case 0x4ba4c4:c.instructions+=8;goto B4ba4c4;
case 0x4ba4c5:c.instructions+=7;goto B4ba4c5;
case 0x4ba4cb:c.instructions+=6;goto B4ba4cb;
case 0x4ba4ce:c.instructions+=5;goto B4ba4ce;
case 0x4ba4cf:c.instructions+=4;goto B4ba4cf;
case 0x4ba4d0:c.instructions+=3;goto B4ba4d0;
case 0x4ba4d5:c.instructions+=2;goto B4ba4d5;
case 0x4ba4d6:c.instructions+=1;goto B4ba4d6;
case 0x4ba4db:goto L4ba4db;
case 0x4ba4de:c.instructions+=2;goto B4ba4de;
case 0x4ba4df:c.instructions+=1;goto B4ba4df;
case 0x4ba500:goto L4ba500;
case 0x4ba505:c.instructions+=1;goto B4ba505;
case 0x4ba50a:goto L4ba50a;
case 0x4ba50d:c.instructions+=1;goto B4ba50d;
case 0x4ba510:goto L4ba510;
case 0x4ba515:c.instructions+=1;goto B4ba515;
case 0x4ba520:goto L4ba520;
case 0x4ba521:c.instructions+=5;goto B4ba521;
case 0x4ba522:c.instructions+=4;goto B4ba522;
case 0x4ba526:c.instructions+=3;goto B4ba526;
case 0x4ba52c:c.instructions+=2;goto B4ba52c;
case 0x4ba52e:c.instructions+=1;goto B4ba52e;
case 0x4ba530:goto L4ba530;
case 0x4ba536:c.instructions+=1;goto B4ba536;
case 0x4ba538:goto L4ba538;
case 0x4ba53d:c.instructions+=4;goto B4ba53d;
case 0x4ba543:c.instructions+=3;goto B4ba543;
case 0x4ba545:c.instructions+=2;goto B4ba545;
case 0x4ba548:c.instructions+=1;goto B4ba548;
case 0x4ba54e:goto L4ba54e;
case 0x4ba552:c.instructions+=3;goto B4ba552;
case 0x4ba553:c.instructions+=2;goto B4ba553;
case 0x4ba558:c.instructions+=1;goto B4ba558;
case 0x4ba55d:goto L4ba55d;
case 0x4ba55f:c.instructions+=4;goto B4ba55f;
case 0x4ba562:c.instructions+=3;goto B4ba562;
case 0x4ba563:c.instructions+=2;goto B4ba563;
case 0x4ba565:c.instructions+=1;goto B4ba565;
case 0x4ba568:goto L4ba568;
case 0x4ba56a:c.instructions+=2;goto B4ba56a;
case 0x4ba56c:c.instructions+=1;goto B4ba56c;
case 0x4ba56f:goto L4ba56f;
case 0x4ba570:c.instructions+=2;goto B4ba570;
case 0x4ba571:c.instructions+=1;goto B4ba571;
case 0x4ba580:goto L4ba580;
case 0x4ba585:c.instructions+=11;goto B4ba585;
case 0x4ba586:c.instructions+=10;goto B4ba586;
case 0x4ba588:c.instructions+=9;goto B4ba588;
case 0x4ba58e:c.instructions+=8;goto B4ba58e;
case 0x4ba591:c.instructions+=7;goto B4ba591;
case 0x4ba593:c.instructions+=6;goto B4ba593;
case 0x4ba595:c.instructions+=5;goto B4ba595;
case 0x4ba59b:c.instructions+=4;goto B4ba59b;
case 0x4ba5a1:c.instructions+=3;goto B4ba5a1;
case 0x4ba5a2:c.instructions+=2;goto B4ba5a2;
case 0x4ba5a3:c.instructions+=1;goto B4ba5a3;
case 0x4ba5a8:goto L4ba5a8;
case 0x4ba5ab:c.instructions+=3;goto B4ba5ab;
case 0x4ba5b0:c.instructions+=2;goto B4ba5b0;
case 0x4ba5b1:c.instructions+=1;goto B4ba5b1;
case 0x4ba5b6:goto L4ba5b6;
case 0x4ba5b9:c.instructions+=2;goto B4ba5b9;
case 0x4ba5ba:c.instructions+=1;goto B4ba5ba;
case 0x4ba5c0:goto L4ba5c0;
case 0x4ba5c1:c.instructions+=5;goto B4ba5c1;
case 0x4ba5c2:c.instructions+=4;goto B4ba5c2;
case 0x4ba5c6:c.instructions+=3;goto B4ba5c6;
case 0x4ba5cc:c.instructions+=2;goto B4ba5cc;
case 0x4ba5ce:c.instructions+=1;goto B4ba5ce;
case 0x4ba5d0:goto L4ba5d0;
case 0x4ba5d6:c.instructions+=1;goto B4ba5d6;
case 0x4ba5d8:goto L4ba5d8;
case 0x4ba5dd:c.instructions+=4;goto B4ba5dd;
case 0x4ba5e3:c.instructions+=3;goto B4ba5e3;
case 0x4ba5e5:c.instructions+=2;goto B4ba5e5;
case 0x4ba5e8:c.instructions+=1;goto B4ba5e8;
case 0x4ba5ee:goto L4ba5ee;
case 0x4ba5f2:c.instructions+=3;goto B4ba5f2;
case 0x4ba5f3:c.instructions+=2;goto B4ba5f3;
case 0x4ba5f8:c.instructions+=1;goto B4ba5f8;
case 0x4ba5fd:goto L4ba5fd;
case 0x4ba5ff:c.instructions+=4;goto B4ba5ff;
case 0x4ba602:c.instructions+=3;goto B4ba602;
case 0x4ba603:c.instructions+=2;goto B4ba603;
case 0x4ba605:c.instructions+=1;goto B4ba605;
case 0x4ba608:goto L4ba608;
case 0x4ba60a:c.instructions+=2;goto B4ba60a;
case 0x4ba60c:c.instructions+=1;goto B4ba60c;
case 0x4ba60f:goto L4ba60f;
case 0x4ba610:c.instructions+=2;goto B4ba610;
case 0x4ba611:c.instructions+=1;goto B4ba611;
case 0x4ba620:goto L4ba620;
case 0x4ba625:c.instructions+=11;goto B4ba625;
case 0x4ba626:c.instructions+=10;goto B4ba626;
case 0x4ba628:c.instructions+=9;goto B4ba628;
case 0x4ba62e:c.instructions+=8;goto B4ba62e;
case 0x4ba631:c.instructions+=7;goto B4ba631;
case 0x4ba633:c.instructions+=6;goto B4ba633;
case 0x4ba635:c.instructions+=5;goto B4ba635;
case 0x4ba63b:c.instructions+=4;goto B4ba63b;
case 0x4ba641:c.instructions+=3;goto B4ba641;
case 0x4ba642:c.instructions+=2;goto B4ba642;
case 0x4ba643:c.instructions+=1;goto B4ba643;
case 0x4ba648:goto L4ba648;
case 0x4ba64b:c.instructions+=3;goto B4ba64b;
case 0x4ba650:c.instructions+=2;goto B4ba650;
case 0x4ba651:c.instructions+=1;goto B4ba651;
case 0x4ba656:goto L4ba656;
case 0x4ba659:c.instructions+=2;goto B4ba659;
case 0x4ba65a:c.instructions+=1;goto B4ba65a;
case 0x4ba660:goto L4ba660;
case 0x4ba663:c.instructions+=12;goto B4ba663;
case 0x4ba664:c.instructions+=11;goto B4ba664;
case 0x4ba666:c.instructions+=10;goto B4ba666;
case 0x4ba669:c.instructions+=9;goto B4ba669;
case 0x4ba66c:c.instructions+=8;goto B4ba66c;
case 0x4ba672:c.instructions+=7;goto B4ba672;
case 0x4ba673:c.instructions+=6;goto B4ba673;
case 0x4ba674:c.instructions+=5;goto B4ba674;
case 0x4ba677:c.instructions+=4;goto B4ba677;
case 0x4ba67a:c.instructions+=3;goto B4ba67a;
case 0x4ba67b:c.instructions+=2;goto B4ba67b;
case 0x4ba67c:c.instructions+=1;goto B4ba67c;
case 0x4ba681:goto L4ba681;
case 0x4ba684:c.instructions+=10;goto B4ba684;
case 0x4ba687:c.instructions+=9;goto B4ba687;
case 0x4ba68a:c.instructions+=8;goto B4ba68a;
case 0x4ba68e:c.instructions+=7;goto B4ba68e;
case 0x4ba692:c.instructions+=6;goto B4ba692;
case 0x4ba693:c.instructions+=5;goto B4ba693;
case 0x4ba697:c.instructions+=4;goto B4ba697;
case 0x4ba698:c.instructions+=3;goto B4ba698;
case 0x4ba699:c.instructions+=2;goto B4ba699;
case 0x4ba69d:c.instructions+=1;goto B4ba69d;
case 0x4ba6a2:goto L4ba6a2;
case 0x4ba6a6:c.instructions+=9;goto B4ba6a6;
case 0x4ba6ac:c.instructions+=8;goto B4ba6ac;
case 0x4ba6b0:c.instructions+=7;goto B4ba6b0;
case 0x4ba6b3:c.instructions+=6;goto B4ba6b3;
case 0x4ba6b4:c.instructions+=5;goto B4ba6b4;
case 0x4ba6b8:c.instructions+=4;goto B4ba6b8;
case 0x4ba6b9:c.instructions+=3;goto B4ba6b9;
case 0x4ba6bc:c.instructions+=2;goto B4ba6bc;
case 0x4ba6bd:c.instructions+=1;goto B4ba6bd;
case 0x4ba6c2:goto L4ba6c2;
case 0x4ba6c5:c.instructions+=8;goto B4ba6c5;
case 0x4ba6c8:c.instructions+=7;goto B4ba6c8;
case 0x4ba6cc:c.instructions+=6;goto B4ba6cc;
case 0x4ba6cd:c.instructions+=5;goto B4ba6cd;
case 0x4ba6d1:c.instructions+=4;goto B4ba6d1;
case 0x4ba6d2:c.instructions+=3;goto B4ba6d2;
case 0x4ba6d3:c.instructions+=2;goto B4ba6d3;
case 0x4ba6d7:c.instructions+=1;goto B4ba6d7;
case 0x4ba6dc:goto L4ba6dc;
case 0x4ba6e0:c.instructions+=7;goto B4ba6e0;
case 0x4ba6e6:c.instructions+=6;goto B4ba6e6;
case 0x4ba6ea:c.instructions+=5;goto B4ba6ea;
case 0x4ba6ed:c.instructions+=4;goto B4ba6ed;
case 0x4ba6f0:c.instructions+=3;goto B4ba6f0;
case 0x4ba6f1:c.instructions+=2;goto B4ba6f1;
case 0x4ba6f2:c.instructions+=1;goto B4ba6f2;
case 0x4ba6f7:goto L4ba6f7;
case 0x4ba6fa:c.instructions+=10;goto B4ba6fa;
case 0x4ba700:c.instructions+=9;goto B4ba700;
case 0x4ba703:c.instructions+=8;goto B4ba703;
case 0x4ba707:c.instructions+=7;goto B4ba707;
case 0x4ba708:c.instructions+=6;goto B4ba708;
case 0x4ba70b:c.instructions+=5;goto B4ba70b;
case 0x4ba70f:c.instructions+=4;goto B4ba70f;
case 0x4ba710:c.instructions+=3;goto B4ba710;
case 0x4ba711:c.instructions+=2;goto B4ba711;
case 0x4ba715:c.instructions+=1;goto B4ba715;
case 0x4ba71a:goto L4ba71a;
case 0x4ba71d:c.instructions+=11;goto B4ba71d;
case 0x4ba723:c.instructions+=10;goto B4ba723;
case 0x4ba726:c.instructions+=9;goto B4ba726;
case 0x4ba729:c.instructions+=8;goto B4ba729;
case 0x4ba72d:c.instructions+=7;goto B4ba72d;
case 0x4ba730:c.instructions+=6;goto B4ba730;
case 0x4ba736:c.instructions+=5;goto B4ba736;
case 0x4ba73a:c.instructions+=4;goto B4ba73a;
case 0x4ba73e:c.instructions+=3;goto B4ba73e;
case 0x4ba741:c.instructions+=2;goto B4ba741;
case 0x4ba742:c.instructions+=1;goto B4ba742;
case 0x4ba747:goto L4ba747;
case 0x4ba74a:c.instructions+=10;goto B4ba74a;
case 0x4ba750:c.instructions+=9;goto B4ba750;
case 0x4ba753:c.instructions+=8;goto B4ba753;
case 0x4ba757:c.instructions+=7;goto B4ba757;
case 0x4ba75a:c.instructions+=6;goto B4ba75a;
case 0x4ba760:c.instructions+=5;goto B4ba760;
case 0x4ba763:c.instructions+=4;goto B4ba763;
case 0x4ba767:c.instructions+=3;goto B4ba767;
case 0x4ba76a:c.instructions+=2;goto B4ba76a;
case 0x4ba76b:c.instructions+=1;goto B4ba76b;
case 0x4ba770:goto L4ba770;
case 0x4ba773:c.instructions+=3;goto B4ba773;
case 0x4ba776:c.instructions+=2;goto B4ba776;
case 0x4ba778:c.instructions+=1;goto B4ba778;
case 0x4ba77a:goto L4ba77a;
case 0x4ba77d:c.instructions+=8;goto B4ba77d;
case 0x4ba780:c.instructions+=7;goto B4ba780;
case 0x4ba783:c.instructions+=6;goto B4ba783;
case 0x4ba787:c.instructions+=5;goto B4ba787;
case 0x4ba78a:c.instructions+=4;goto B4ba78a;
case 0x4ba78d:c.instructions+=3;goto B4ba78d;
case 0x4ba790:c.instructions+=2;goto B4ba790;
case 0x4ba791:c.instructions+=1;goto B4ba791;
case 0x4ba796:goto L4ba796;
case 0x4ba799:goto L4ba799;
case 0x4ba79a:c.instructions+=3;goto B4ba79a;
case 0x4ba79b:c.instructions+=2;goto B4ba79b;
case 0x4ba79e:c.instructions+=1;goto B4ba79e;
case 0x4ba7a0:goto L4ba7a0;
case 0x4ba7a1:c.instructions+=5;goto B4ba7a1;
case 0x4ba7a2:c.instructions+=4;goto B4ba7a2;
case 0x4ba7a6:c.instructions+=3;goto B4ba7a6;
case 0x4ba7ac:c.instructions+=2;goto B4ba7ac;
case 0x4ba7ae:c.instructions+=1;goto B4ba7ae;
case 0x4ba7b0:goto L4ba7b0;
case 0x4ba7b6:c.instructions+=1;goto B4ba7b6;
case 0x4ba7b8:goto L4ba7b8;
case 0x4ba7bd:c.instructions+=4;goto B4ba7bd;
case 0x4ba7c3:c.instructions+=3;goto B4ba7c3;
case 0x4ba7c5:c.instructions+=2;goto B4ba7c5;
case 0x4ba7c8:c.instructions+=1;goto B4ba7c8;
case 0x4ba7ce:goto L4ba7ce;
case 0x4ba7d2:c.instructions+=3;goto B4ba7d2;
case 0x4ba7d3:c.instructions+=2;goto B4ba7d3;
case 0x4ba7d8:c.instructions+=1;goto B4ba7d8;
case 0x4ba7dd:goto L4ba7dd;
case 0x4ba7df:c.instructions+=4;goto B4ba7df;
case 0x4ba7e2:c.instructions+=3;goto B4ba7e2;
case 0x4ba7e3:c.instructions+=2;goto B4ba7e3;
case 0x4ba7e5:c.instructions+=1;goto B4ba7e5;
case 0x4ba7e8:goto L4ba7e8;
case 0x4ba7ea:c.instructions+=2;goto B4ba7ea;
case 0x4ba7ec:c.instructions+=1;goto B4ba7ec;
case 0x4ba7ef:goto L4ba7ef;
case 0x4ba7f0:c.instructions+=2;goto B4ba7f0;
case 0x4ba7f1:c.instructions+=1;goto B4ba7f1;
case 0x4ba800:goto L4ba800;
case 0x4ba805:c.instructions+=11;goto B4ba805;
case 0x4ba806:c.instructions+=10;goto B4ba806;
case 0x4ba808:c.instructions+=9;goto B4ba808;
case 0x4ba80e:c.instructions+=8;goto B4ba80e;
case 0x4ba811:c.instructions+=7;goto B4ba811;
case 0x4ba813:c.instructions+=6;goto B4ba813;
case 0x4ba815:c.instructions+=5;goto B4ba815;
case 0x4ba81b:c.instructions+=4;goto B4ba81b;
case 0x4ba821:c.instructions+=3;goto B4ba821;
case 0x4ba822:c.instructions+=2;goto B4ba822;
case 0x4ba823:c.instructions+=1;goto B4ba823;
case 0x4ba828:goto L4ba828;
case 0x4ba82b:c.instructions+=3;goto B4ba82b;
case 0x4ba830:c.instructions+=2;goto B4ba830;
case 0x4ba831:c.instructions+=1;goto B4ba831;
case 0x4ba836:goto L4ba836;
case 0x4ba839:c.instructions+=2;goto B4ba839;
case 0x4ba83a:c.instructions+=1;goto B4ba83a;
case 0x4ba840:goto L4ba840;
case 0x4ba846:c.instructions+=7;goto B4ba846;
case 0x4ba847:c.instructions+=6;goto B4ba847;
case 0x4ba84d:c.instructions+=5;goto B4ba84d;
case 0x4ba84e:c.instructions+=4;goto B4ba84e;
case 0x4ba851:c.instructions+=3;goto B4ba851;
case 0x4ba852:c.instructions+=2;goto B4ba852;
case 0x4ba854:c.instructions+=1;goto B4ba854;
case 0x4ba859:goto L4ba859;
case 0x4ba85b:c.instructions+=1;goto B4ba85b;
case 0x4ba861:goto L4ba861;
case 0x4ba863:c.instructions+=24;goto B4ba863;
case 0x4ba869:c.instructions+=23;goto B4ba869;
case 0x4ba86b:c.instructions+=22;goto B4ba86b;
case 0x4ba871:c.instructions+=21;goto B4ba871;
case 0x4ba877:c.instructions+=20;goto B4ba877;
case 0x4ba878:c.instructions+=19;goto B4ba878;
case 0x4ba879:c.instructions+=18;goto B4ba879;
case 0x4ba87f:c.instructions+=17;goto B4ba87f;
case 0x4ba880:c.instructions+=16;goto B4ba880;
case 0x4ba886:c.instructions+=15;goto B4ba886;
case 0x4ba888:c.instructions+=14;goto B4ba888;
case 0x4ba88e:c.instructions+=13;goto B4ba88e;
case 0x4ba891:c.instructions+=12;goto B4ba891;
case 0x4ba892:c.instructions+=11;goto B4ba892;
case 0x4ba898:c.instructions+=10;goto B4ba898;
case 0x4ba899:c.instructions+=9;goto B4ba899;
case 0x4ba89a:c.instructions+=8;goto B4ba89a;
case 0x4ba89b:c.instructions+=7;goto B4ba89b;
case 0x4ba8a1:c.instructions+=6;goto B4ba8a1;
case 0x4ba8a2:c.instructions+=5;goto B4ba8a2;
case 0x4ba8a5:c.instructions+=4;goto B4ba8a5;
case 0x4ba8a6:c.instructions+=3;goto B4ba8a6;
case 0x4ba8a7:c.instructions+=2;goto B4ba8a7;
case 0x4ba8ab:c.instructions+=1;goto B4ba8ab;
case 0x4ba8b0:goto L4ba8b0;
case 0x4ba8b1:c.instructions+=5;goto B4ba8b1;
case 0x4ba8b6:c.instructions+=4;goto B4ba8b6;
case 0x4ba8ba:c.instructions+=3;goto B4ba8ba;
case 0x4ba8bb:c.instructions+=2;goto B4ba8bb;
case 0x4ba8bd:c.instructions+=1;goto B4ba8bd;
case 0x4ba8c2:goto L4ba8c2;
case 0x4ba8c5:c.instructions+=2;goto B4ba8c5;
case 0x4ba8c7:c.instructions+=1;goto B4ba8c7;
case 0x4ba8cc:goto L4ba8cc;
case 0x4ba8ce:c.instructions+=1;goto B4ba8ce;
case 0x4ba8d0:goto L4ba8d0;
case 0x4ba8d3:c.instructions+=2;goto B4ba8d3;
case 0x4ba8d8:c.instructions+=1;goto B4ba8d8;
case 0x4ba8dd:goto L4ba8dd;
case 0x4ba8de:c.instructions+=6;goto B4ba8de;
case 0x4ba8e0:c.instructions+=5;goto B4ba8e0;
case 0x4ba8e2:c.instructions+=4;goto B4ba8e2;
case 0x4ba8e7:c.instructions+=3;goto B4ba8e7;
case 0x4ba8ec:c.instructions+=2;goto B4ba8ec;
case 0x4ba8ed:c.instructions+=1;goto B4ba8ed;
case 0x4ba8f2:goto L4ba8f2;
case 0x4ba8f5:c.instructions+=4;goto B4ba8f5;
case 0x4ba8f6:c.instructions+=3;goto B4ba8f6;
case 0x4ba8f7:c.instructions+=2;goto B4ba8f7;
case 0x4ba8fd:c.instructions+=1;goto B4ba8fd;
case 0x4ba8fe:goto L4ba8fe;
case 0x4ba901:c.instructions+=3;goto B4ba901;
case 0x4ba906:c.instructions+=2;goto B4ba906;
case 0x4ba90d:c.instructions+=1;goto B4ba90d;
case 0x4ba912:goto L4ba912;
case 0x4ba913:c.instructions+=3;goto B4ba913;
case 0x4ba918:c.instructions+=2;goto B4ba918;
case 0x4ba919:c.instructions+=1;goto B4ba919;
case 0x4ba91e:goto L4ba91e;
case 0x4ba921:c.instructions+=1;goto B4ba921;
case 0x4ba927:goto L4ba927;
case 0x4ba928:c.instructions+=3;goto B4ba928;
case 0x4ba929:c.instructions+=2;goto B4ba929;
case 0x4ba92f:c.instructions+=1;goto B4ba92f;
case 0x4ba930:goto L4ba930;
case 0x4ba931:c.instructions+=5;goto B4ba931;
case 0x4ba933:c.instructions+=4;goto B4ba933;
case 0x4ba936:c.instructions+=3;goto B4ba936;
case 0x4ba93b:c.instructions+=2;goto B4ba93b;
case 0x4ba93c:c.instructions+=1;goto B4ba93c;
case 0x4ba941:goto L4ba941;
case 0x4ba946:c.instructions+=5;goto B4ba946;
case 0x4ba94c:c.instructions+=4;goto B4ba94c;
case 0x4ba951:c.instructions+=3;goto B4ba951;
case 0x4ba954:c.instructions+=2;goto B4ba954;
case 0x4ba956:c.instructions+=1;goto B4ba956;
case 0x4ba958:goto L4ba958;
case 0x4ba95b:c.instructions+=3;goto B4ba95b;
case 0x4ba960:c.instructions+=2;goto B4ba960;
case 0x4ba961:c.instructions+=1;goto B4ba961;
case 0x4ba966:goto L4ba966;
case 0x4ba969:c.instructions+=2;goto B4ba969;
case 0x4ba96a:c.instructions+=1;goto B4ba96a;
case 0x4ba96b:goto L4ba96b;
case 0x4ba96e:c.instructions+=4;goto B4ba96e;
case 0x4ba96f:c.instructions+=3;goto B4ba96f;
case 0x4ba974:c.instructions+=2;goto B4ba974;
case 0x4ba975:c.instructions+=1;goto B4ba975;
case 0x4ba97a:goto L4ba97a;
case 0x4ba97d:c.instructions+=2;goto B4ba97d;
case 0x4ba97e:c.instructions+=1;goto B4ba97e;
case 0x4ba980:goto L4ba980;
case 0x4ba982:c.instructions+=13;goto B4ba982;
case 0x4ba987:c.instructions+=12;goto B4ba987;
case 0x4ba98d:c.instructions+=11;goto B4ba98d;
case 0x4ba98e:c.instructions+=10;goto B4ba98e;
case 0x4ba995:c.instructions+=9;goto B4ba995;
case 0x4ba996:c.instructions+=8;goto B4ba996;
case 0x4ba997:c.instructions+=7;goto B4ba997;
case 0x4ba99d:c.instructions+=6;goto B4ba99d;
case 0x4ba99e:c.instructions+=5;goto B4ba99e;
case 0x4ba99f:c.instructions+=4;goto B4ba99f;
case 0x4ba9a4:c.instructions+=3;goto B4ba9a4;
case 0x4ba9a6:c.instructions+=2;goto B4ba9a6;
case 0x4ba9ac:c.instructions+=1;goto B4ba9ac;
case 0x4ba9b1:goto L4ba9b1;
case 0x4ba9b3:c.instructions+=5;goto B4ba9b3;
case 0x4ba9b6:c.instructions+=4;goto B4ba9b6;
case 0x4ba9ba:c.instructions+=3;goto B4ba9ba;
case 0x4ba9bc:c.instructions+=2;goto B4ba9bc;
case 0x4ba9c4:c.instructions+=1;goto B4ba9c4;
case 0x4ba9c6:goto L4ba9c6;
case 0x4ba9c8:c.instructions+=13;goto B4ba9c8;
case 0x4ba9ca:c.instructions+=12;goto B4ba9ca;
case 0x4ba9cb:c.instructions+=11;goto B4ba9cb;
case 0x4ba9d1:c.instructions+=10;goto B4ba9d1;
case 0x4ba9d2:c.instructions+=9;goto B4ba9d2;
case 0x4ba9d8:c.instructions+=8;goto B4ba9d8;
case 0x4ba9d9:c.instructions+=7;goto B4ba9d9;
case 0x4ba9df:c.instructions+=6;goto B4ba9df;
case 0x4ba9e0:c.instructions+=5;goto B4ba9e0;
case 0x4ba9e6:c.instructions+=4;goto B4ba9e6;
case 0x4ba9e7:c.instructions+=3;goto B4ba9e7;
case 0x4ba9e9:c.instructions+=2;goto B4ba9e9;
case 0x4ba9eb:c.instructions+=1;goto B4ba9eb;
case 0x4ba9f0:goto L4ba9f0;
case 0x4ba9f6:c.instructions+=1;goto B4ba9f6;
case 0x4ba9f8:goto L4ba9f8;
case 0x4ba9fa:goto L4ba9fa;
case 0x4ba9fb:c.instructions+=3;goto B4ba9fb;
case 0x4ba9fd:c.instructions+=2;goto B4ba9fd;
case 0x4baa05:c.instructions+=1;goto B4baa05;
case 0x4baa0a:goto L4baa0a;
case 0x4baa0c:c.instructions+=3;goto B4baa0c;
case 0x4baa0e:c.instructions+=2;goto B4baa0e;
case 0x4baa14:c.instructions+=1;goto B4baa14;
case 0x4baa19:goto L4baa19;
case 0x4baa1e:c.instructions+=3;goto B4baa1e;
case 0x4baa20:c.instructions+=2;goto B4baa20;
case 0x4baa23:c.instructions+=1;goto B4baa23;
case 0x4baa25:goto L4baa25;
case 0x4baa2a:c.instructions+=1;goto B4baa2a;
case 0x4baa2c:goto L4baa2c;
case 0x4baa31:goto L4baa31;
case 0x4baa36:goto L4baa36;
case 0x4baa37:c.instructions+=3;goto B4baa37;
case 0x4baa3c:c.instructions+=2;goto B4baa3c;
case 0x4baa3d:c.instructions+=1;goto B4baa3d;
case 0x4baa42:goto L4baa42;
case 0x4baa46:c.instructions+=7;goto B4baa46;
case 0x4baa49:c.instructions+=6;goto B4baa49;
case 0x4baa4a:c.instructions+=5;goto B4baa4a;
case 0x4baa4b:c.instructions+=4;goto B4baa4b;
case 0x4baa4c:c.instructions+=3;goto B4baa4c;
case 0x4baa53:c.instructions+=2;goto B4baa53;
case 0x4baa56:c.instructions+=1;goto B4baa56;
case 0x4baa60:goto L4baa60;
case 0x4baa62:c.instructions+=8;goto B4baa62;
case 0x4baa67:c.instructions+=7;goto B4baa67;
case 0x4baa6d:c.instructions+=6;goto B4baa6d;
case 0x4baa6e:c.instructions+=5;goto B4baa6e;
case 0x4baa75:c.instructions+=4;goto B4baa75;
case 0x4baa76:c.instructions+=3;goto B4baa76;
case 0x4baa77:c.instructions+=2;goto B4baa77;
case 0x4baa79:c.instructions+=1;goto B4baa79;
case 0x4baa7e:goto L4baa7e;
case 0x4baa80:c.instructions+=6;goto B4baa80;
case 0x4baa83:c.instructions+=5;goto B4baa83;
case 0x4baa87:c.instructions+=4;goto B4baa87;
case 0x4baa89:c.instructions+=3;goto B4baa89;
case 0x4baa8b:c.instructions+=2;goto B4baa8b;
case 0x4baa8f:c.instructions+=1;goto B4baa8f;
case 0x4baa91:goto L4baa91;
case 0x4baa95:c.instructions+=3;goto B4baa95;
case 0x4baa96:c.instructions+=2;goto B4baa96;
case 0x4baa98:c.instructions+=1;goto B4baa98;
case 0x4baa9d:goto L4baa9d;
case 0x4baaa3:c.instructions+=1;goto B4baaa3;
case 0x4baaa5:goto L4baaa5;
case 0x4baaa9:c.instructions+=4;goto B4baaa9;
case 0x4baaaa:c.instructions+=3;goto B4baaaa;
case 0x4baab1:c.instructions+=2;goto B4baab1;
case 0x4baab4:c.instructions+=1;goto B4baab4;
case 0x4baac0:goto L4baac0;
case 0x4baac4:c.instructions+=2;goto B4baac4;
case 0x4baac9:c.instructions+=1;goto B4baac9;
case 0x4baacb:goto L4baacb;
case 0x4baad0:c.instructions+=1;goto B4baad0;
case 0x4baad2:goto L4baad2;
case 0x4baad8:c.instructions+=1;goto B4baad8;
case 0x4baadd:goto L4baadd;
case 0x4baae0:goto L4baae0;
case 0x4baae6:c.instructions+=1;goto B4baae6;
case 0x4baaeb:goto L4baaeb;
case 0x4baaf0:goto L4baaf0;
case 0x4baaf2:c.instructions+=26;goto B4baaf2;
case 0x4baaf7:c.instructions+=25;goto B4baaf7;
case 0x4baafd:c.instructions+=24;goto B4baafd;
case 0x4baafe:c.instructions+=23;goto B4baafe;
case 0x4bab05:c.instructions+=22;goto B4bab05;
case 0x4bab06:c.instructions+=21;goto B4bab06;
case 0x4bab0a:c.instructions+=20;goto B4bab0a;
case 0x4bab0e:c.instructions+=19;goto B4bab0e;
case 0x4bab0f:c.instructions+=18;goto B4bab0f;
case 0x4bab10:c.instructions+=17;goto B4bab10;
case 0x4bab14:c.instructions+=16;goto B4bab14;
case 0x4bab15:c.instructions+=15;goto B4bab15;
case 0x4bab19:c.instructions+=14;goto B4bab19;
case 0x4bab1b:c.instructions+=13;goto B4bab1b;
case 0x4bab1f:c.instructions+=12;goto B4bab1f;
case 0x4bab20:c.instructions+=11;goto B4bab20;
case 0x4bab24:c.instructions+=10;goto B4bab24;
case 0x4bab25:c.instructions+=9;goto B4bab25;
case 0x4bab26:c.instructions+=8;goto B4bab26;
case 0x4bab2a:c.instructions+=7;goto B4bab2a;
case 0x4bab2b:c.instructions+=6;goto B4bab2b;
case 0x4bab2c:c.instructions+=5;goto B4bab2c;
case 0x4bab2d:c.instructions+=4;goto B4bab2d;
case 0x4bab2f:c.instructions+=3;goto B4bab2f;
case 0x4bab31:c.instructions+=2;goto B4bab31;
case 0x4bab35:c.instructions+=1;goto B4bab35;
case 0x4bab3a:goto L4bab3a;
case 0x4bab3c:c.instructions+=3;goto B4bab3c;
case 0x4bab44:c.instructions+=2;goto B4bab44;
case 0x4bab4a:c.instructions+=1;goto B4bab4a;
case 0x4bab4c:goto L4bab4c;
case 0x4bab51:goto L4bab51;
case 0x4bab56:c.instructions+=4;goto B4bab56;
case 0x4bab59:c.instructions+=3;goto B4bab59;
case 0x4bab5a:c.instructions+=2;goto B4bab5a;
case 0x4bab5b:c.instructions+=1;goto B4bab5b;
case 0x4bab60:goto L4bab60;
case 0x4bab64:c.instructions+=7;goto B4bab64;
case 0x4bab67:c.instructions+=6;goto B4bab67;
case 0x4bab68:c.instructions+=5;goto B4bab68;
case 0x4bab6a:c.instructions+=4;goto B4bab6a;
case 0x4bab6b:c.instructions+=3;goto B4bab6b;
case 0x4bab72:c.instructions+=2;goto B4bab72;
case 0x4bab75:c.instructions+=1;goto B4bab75;
case 0x4bab80:goto L4bab80;
case 0x4bab81:c.instructions+=5;goto B4bab81;
case 0x4bab83:c.instructions+=4;goto B4bab83;
case 0x4bab86:c.instructions+=3;goto B4bab86;
case 0x4bab8b:c.instructions+=2;goto B4bab8b;
case 0x4bab8c:c.instructions+=1;goto B4bab8c;
case 0x4bab91:goto L4bab91;
case 0x4bab94:c.instructions+=2;goto B4bab94;
case 0x4bab99:c.instructions+=1;goto B4bab99;
case 0x4bab9e:goto L4bab9e;
case 0x4bab9f:c.instructions+=1;goto B4bab9f;
case 0x4baba4:goto L4baba4;
case 0x4baba7:c.instructions+=2;goto B4baba7;
case 0x4baba9:c.instructions+=1;goto B4baba9;
case 0x4babab:goto L4babab;
case 0x4babae:c.instructions+=3;goto B4babae;
case 0x4babb3:c.instructions+=2;goto B4babb3;
case 0x4babb4:c.instructions+=1;goto B4babb4;
case 0x4babb9:goto L4babb9;
case 0x4babbc:c.instructions+=2;goto B4babbc;
case 0x4babbd:c.instructions+=1;goto B4babbd;
case 0x4babbe:goto L4babbe;
case 0x4babc1:c.instructions+=2;goto B4babc1;
case 0x4babc6:c.instructions+=1;goto B4babc6;
case 0x4babcb:goto L4babcb;
case 0x4babcc:c.instructions+=2;goto B4babcc;
case 0x4babcd:c.instructions+=1;goto B4babcd;
case 0x4babd2:goto L4babd2;
case 0x4babd5:c.instructions+=2;goto B4babd5;
case 0x4babd6:c.instructions+=1;goto B4babd6;
case 0x4babe0:goto L4babe0;
case 0x4babe2:c.instructions+=26;goto B4babe2;
case 0x4babe7:c.instructions+=25;goto B4babe7;
case 0x4babed:c.instructions+=24;goto B4babed;
case 0x4babee:c.instructions+=23;goto B4babee;
case 0x4babf5:c.instructions+=22;goto B4babf5;
case 0x4babf6:c.instructions+=21;goto B4babf6;
case 0x4babfa:c.instructions+=20;goto B4babfa;
case 0x4babfe:c.instructions+=19;goto B4babfe;
case 0x4babff:c.instructions+=18;goto B4babff;
case 0x4bac00:c.instructions+=17;goto B4bac00;
case 0x4bac04:c.instructions+=16;goto B4bac04;
case 0x4bac05:c.instructions+=15;goto B4bac05;
case 0x4bac09:c.instructions+=14;goto B4bac09;
case 0x4bac0b:c.instructions+=13;goto B4bac0b;
case 0x4bac0f:c.instructions+=12;goto B4bac0f;
case 0x4bac10:c.instructions+=11;goto B4bac10;
case 0x4bac14:c.instructions+=10;goto B4bac14;
case 0x4bac15:c.instructions+=9;goto B4bac15;
case 0x4bac16:c.instructions+=8;goto B4bac16;
case 0x4bac1a:c.instructions+=7;goto B4bac1a;
case 0x4bac1b:c.instructions+=6;goto B4bac1b;
case 0x4bac1c:c.instructions+=5;goto B4bac1c;
case 0x4bac1d:c.instructions+=4;goto B4bac1d;
case 0x4bac1f:c.instructions+=3;goto B4bac1f;
case 0x4bac21:c.instructions+=2;goto B4bac21;
case 0x4bac25:c.instructions+=1;goto B4bac25;
case 0x4bac2a:goto L4bac2a;
case 0x4bac2c:c.instructions+=3;goto B4bac2c;
case 0x4bac34:c.instructions+=2;goto B4bac34;
case 0x4bac3a:c.instructions+=1;goto B4bac3a;
case 0x4bac3c:goto L4bac3c;
case 0x4bac41:goto L4bac41;
case 0x4bac46:c.instructions+=4;goto B4bac46;
case 0x4bac49:c.instructions+=3;goto B4bac49;
case 0x4bac4a:c.instructions+=2;goto B4bac4a;
case 0x4bac4b:c.instructions+=1;goto B4bac4b;
case 0x4bac50:goto L4bac50;
case 0x4bac54:c.instructions+=7;goto B4bac54;
case 0x4bac57:c.instructions+=6;goto B4bac57;
case 0x4bac58:c.instructions+=5;goto B4bac58;
case 0x4bac5a:c.instructions+=4;goto B4bac5a;
case 0x4bac5b:c.instructions+=3;goto B4bac5b;
case 0x4bac62:c.instructions+=2;goto B4bac62;
case 0x4bac65:c.instructions+=1;goto B4bac65;
case 0x4bac70:goto L4bac70;
case 0x4bac71:c.instructions+=5;goto B4bac71;
case 0x4bac73:c.instructions+=4;goto B4bac73;
case 0x4bac76:c.instructions+=3;goto B4bac76;
case 0x4bac7b:c.instructions+=2;goto B4bac7b;
case 0x4bac7c:c.instructions+=1;goto B4bac7c;
case 0x4bac81:goto L4bac81;
case 0x4bac84:c.instructions+=2;goto B4bac84;
case 0x4bac89:c.instructions+=1;goto B4bac89;
case 0x4bac8e:goto L4bac8e;
case 0x4bac8f:c.instructions+=1;goto B4bac8f;
case 0x4bac94:goto L4bac94;
case 0x4bac97:c.instructions+=2;goto B4bac97;
case 0x4bac99:c.instructions+=1;goto B4bac99;
case 0x4bac9b:goto L4bac9b;
case 0x4bac9e:c.instructions+=3;goto B4bac9e;
case 0x4baca3:c.instructions+=2;goto B4baca3;
case 0x4baca4:c.instructions+=1;goto B4baca4;
case 0x4baca9:goto L4baca9;
case 0x4bacac:c.instructions+=2;goto B4bacac;
case 0x4bacad:c.instructions+=1;goto B4bacad;
case 0x4bacae:goto L4bacae;
case 0x4bacb1:c.instructions+=3;goto B4bacb1;
case 0x4bacb6:c.instructions+=2;goto B4bacb6;
case 0x4bacb7:c.instructions+=1;goto B4bacb7;
case 0x4bacbc:goto L4bacbc;
case 0x4bacbf:c.instructions+=2;goto B4bacbf;
case 0x4bacc0:c.instructions+=1;goto B4bacc0;
case 0x4bacd0:goto L4bacd0;
case 0x4bacd8:c.instructions+=1;goto B4bacd8;
case 0x4bacda:goto L4bacda;
case 0x4bacdf:c.instructions+=1;goto B4bacdf;
case 0x4bace4:goto L4bace4;
case 0x4bace7:c.instructions+=1;goto B4bace7;
case 0x4bace9:goto L4bace9;
case 0x4bacee:c.instructions+=1;goto B4bacee;
case 0x4bacf3:goto L4bacf3;
case 0x4bacf4:c.instructions+=7;goto B4bacf4;
case 0x4bacf8:c.instructions+=6;goto B4bacf8;
case 0x4bacfa:c.instructions+=5;goto B4bacfa;
case 0x4bacfc:c.instructions+=4;goto B4bacfc;
case 0x4bad01:c.instructions+=3;goto B4bad01;
case 0x4bad06:c.instructions+=2;goto B4bad06;
case 0x4bad07:c.instructions+=1;goto B4bad07;
case 0x4bad0c:goto L4bad0c;
case 0x4bad0f:c.instructions+=1;goto B4bad0f;
case 0x4bad12:goto L4bad12;
case 0x4bad14:c.instructions+=4;goto B4bad14;
case 0x4bad16:c.instructions+=3;goto B4bad16;
case 0x4bad17:c.instructions+=2;goto B4bad17;
case 0x4bad19:c.instructions+=1;goto B4bad19;
case 0x4bad1e:goto L4bad1e;
case 0x4bad21:c.instructions+=2;goto B4bad21;
case 0x4bad23:c.instructions+=1;goto B4bad23;
case 0x4bad28:goto L4bad28;
case 0x4bad2d:c.instructions+=1;goto B4bad2d;
case 0x4bad32:goto L4bad32;
case 0x4bad36:c.instructions+=7;goto B4bad36;
case 0x4bad37:c.instructions+=6;goto B4bad37;
case 0x4bad39:c.instructions+=5;goto B4bad39;
case 0x4bad3b:c.instructions+=4;goto B4bad3b;
case 0x4bad40:c.instructions+=3;goto B4bad40;
case 0x4bad45:c.instructions+=2;goto B4bad45;
case 0x4bad46:c.instructions+=1;goto B4bad46;
case 0x4bad4b:goto L4bad4b;
case 0x4bad4e:goto L4bad4e;
case 0x4bad60:goto L4bad60;
case 0x4bad63:c.instructions+=3;goto B4bad63;
case 0x4bad68:c.instructions+=2;goto B4bad68;
case 0x4bad69:c.instructions+=1;goto B4bad69;
case 0x4bad6e:goto L4bad6e;
case 0x4bad71:c.instructions+=1;goto B4bad71;
case 0x4bad80:goto L4bad80;
case 0x4bad88:c.instructions+=1;goto B4bad88;
case 0x4bad8a:goto L4bad8a;
case 0x4bad8e:c.instructions+=5;goto B4bad8e;
case 0x4bad90:c.instructions+=4;goto B4bad90;
case 0x4bad95:c.instructions+=3;goto B4bad95;
case 0x4bad96:c.instructions+=2;goto B4bad96;
case 0x4bad9b:c.instructions+=1;goto B4bad9b;
case 0x4bada0:goto L4bada0;
case 0x4bada3:goto L4bada3;
case 0x4badb0:goto L4badb0;
case 0x4badb3:c.instructions+=3;goto B4badb3;
case 0x4badb8:c.instructions+=2;goto B4badb8;
case 0x4badb9:c.instructions+=1;goto B4badb9;
case 0x4badbe:goto L4badbe;
case 0x4badc1:c.instructions+=1;goto B4badc1;
case 0x4badd0:goto L4badd0;
case 0x4badd2:c.instructions+=11;goto B4badd2;
case 0x4badd7:c.instructions+=10;goto B4badd7;
case 0x4baddd:c.instructions+=9;goto B4baddd;
case 0x4badde:c.instructions+=8;goto B4badde;
case 0x4bade5:c.instructions+=7;goto B4bade5;
case 0x4bade6:c.instructions+=6;goto B4bade6;
case 0x4bade7:c.instructions+=5;goto B4bade7;
case 0x4bade8:c.instructions+=4;goto B4bade8;
case 0x4bade9:c.instructions+=3;goto B4bade9;
case 0x4badee:c.instructions+=2;goto B4badee;
case 0x4badf0:c.instructions+=1;goto B4badf0;
case 0x4badf5:goto L4badf5;
case 0x4badf7:c.instructions+=5;goto B4badf7;
case 0x4badfa:c.instructions+=4;goto B4badfa;
case 0x4badfe:c.instructions+=3;goto B4badfe;
case 0x4bae00:c.instructions+=2;goto B4bae00;
case 0x4bae08:c.instructions+=1;goto B4bae08;
case 0x4bae0a:goto L4bae0a;
case 0x4bae0c:c.instructions+=3;goto B4bae0c;
case 0x4bae0e:c.instructions+=2;goto B4bae0e;
case 0x4bae13:c.instructions+=1;goto B4bae13;
case 0x4bae18:goto L4bae18;
case 0x4bae19:c.instructions+=10;goto B4bae19;
case 0x4bae1f:c.instructions+=9;goto B4bae1f;
case 0x4bae20:c.instructions+=8;goto B4bae20;
case 0x4bae26:c.instructions+=7;goto B4bae26;
case 0x4bae27:c.instructions+=6;goto B4bae27;
case 0x4bae2d:c.instructions+=5;goto B4bae2d;
case 0x4bae2e:c.instructions+=4;goto B4bae2e;
case 0x4bae34:c.instructions+=3;goto B4bae34;
case 0x4bae35:c.instructions+=2;goto B4bae35;
case 0x4bae37:c.instructions+=1;goto B4bae37;
case 0x4bae3c:goto L4bae3c;
case 0x4bae3e:goto L4bae3e;
case 0x4bae40:goto L4bae40;
case 0x4bae43:c.instructions+=4;goto B4bae43;
case 0x4bae44:c.instructions+=3;goto B4bae44;
case 0x4bae46:c.instructions+=2;goto B4bae46;
case 0x4bae4a:c.instructions+=1;goto B4bae4a;
case 0x4bae4f:goto L4bae4f;
case 0x4bae54:c.instructions+=2;goto B4bae54;
case 0x4bae5a:c.instructions+=1;goto B4bae5a;
case 0x4bae5f:goto L4bae5f;
case 0x4bae61:c.instructions+=5;goto B4bae61;
case 0x4bae64:c.instructions+=4;goto B4bae64;
case 0x4bae68:c.instructions+=3;goto B4bae68;
case 0x4bae6a:c.instructions+=2;goto B4bae6a;
case 0x4bae72:c.instructions+=1;goto B4bae72;
case 0x4bae74:goto L4bae74;
case 0x4bae76:c.instructions+=3;goto B4bae76;
case 0x4bae78:c.instructions+=2;goto B4bae78;
case 0x4bae7d:c.instructions+=1;goto B4bae7d;
case 0x4bae82:goto L4bae82;
case 0x4bae83:c.instructions+=10;goto B4bae83;
case 0x4bae89:c.instructions+=9;goto B4bae89;
case 0x4bae8a:c.instructions+=8;goto B4bae8a;
case 0x4bae90:c.instructions+=7;goto B4bae90;
case 0x4bae91:c.instructions+=6;goto B4bae91;
case 0x4bae97:c.instructions+=5;goto B4bae97;
case 0x4bae98:c.instructions+=4;goto B4bae98;
case 0x4bae9e:c.instructions+=3;goto B4bae9e;
case 0x4bae9f:c.instructions+=2;goto B4bae9f;
case 0x4baea1:c.instructions+=1;goto B4baea1;
case 0x4baea6:goto L4baea6;
case 0x4baea8:goto L4baea8;
case 0x4baeaa:goto L4baeaa;
case 0x4baeab:c.instructions+=3;goto B4baeab;
case 0x4baead:c.instructions+=2;goto B4baead;
case 0x4baeb1:c.instructions+=1;goto B4baeb1;
case 0x4baeb6:goto L4baeb6;
case 0x4baeb8:c.instructions+=2;goto B4baeb8;
case 0x4baebe:c.instructions+=1;goto B4baebe;
case 0x4baec3:goto L4baec3;
case 0x4baec5:c.instructions+=5;goto B4baec5;
case 0x4baec8:c.instructions+=4;goto B4baec8;
case 0x4baecc:c.instructions+=3;goto B4baecc;
case 0x4baece:c.instructions+=2;goto B4baece;
case 0x4baed6:c.instructions+=1;goto B4baed6;
case 0x4baed8:goto L4baed8;
case 0x4baeda:c.instructions+=6;goto B4baeda;
case 0x4baee0:c.instructions+=5;goto B4baee0;
case 0x4baee1:c.instructions+=4;goto B4baee1;
case 0x4baee7:c.instructions+=3;goto B4baee7;
case 0x4baee8:c.instructions+=2;goto B4baee8;
case 0x4baeea:c.instructions+=1;goto B4baeea;
case 0x4baeef:goto L4baeef;
case 0x4baef5:c.instructions+=1;goto B4baef5;
case 0x4baef7:goto L4baef7;
case 0x4baef9:goto L4baef9;
case 0x4baefa:c.instructions+=3;goto B4baefa;
case 0x4baefc:c.instructions+=2;goto B4baefc;
case 0x4baf00:c.instructions+=1;goto B4baf00;
case 0x4baf05:goto L4baf05;
case 0x4baf07:c.instructions+=1;goto B4baf07;
case 0x4baf0c:goto L4baf0c;
case 0x4baf0e:c.instructions+=5;goto B4baf0e;
case 0x4baf11:c.instructions+=4;goto B4baf11;
case 0x4baf15:c.instructions+=3;goto B4baf15;
case 0x4baf17:c.instructions+=2;goto B4baf17;
case 0x4baf1f:c.instructions+=1;goto B4baf1f;
case 0x4baf21:goto L4baf21;
case 0x4baf23:c.instructions+=6;goto B4baf23;
case 0x4baf29:c.instructions+=5;goto B4baf29;
case 0x4baf2a:c.instructions+=4;goto B4baf2a;
case 0x4baf30:c.instructions+=3;goto B4baf30;
case 0x4baf31:c.instructions+=2;goto B4baf31;
case 0x4baf33:c.instructions+=1;goto B4baf33;
case 0x4baf38:goto L4baf38;
case 0x4baf3e:c.instructions+=1;goto B4baf3e;
case 0x4baf40:goto L4baf40;
case 0x4baf42:goto L4baf42;
case 0x4baf43:c.instructions+=3;goto B4baf43;
case 0x4baf45:c.instructions+=2;goto B4baf45;
case 0x4baf49:c.instructions+=1;goto B4baf49;
case 0x4baf4e:goto L4baf4e;
case 0x4baf54:c.instructions+=3;goto B4baf54;
case 0x4baf55:c.instructions+=2;goto B4baf55;
case 0x4baf57:c.instructions+=1;goto B4baf57;
case 0x4baf5c:goto L4baf5c;
case 0x4baf61:c.instructions+=2;goto B4baf61;
case 0x4baf67:c.instructions+=1;goto B4baf67;
case 0x4baf6c:goto L4baf6c;
case 0x4baf72:c.instructions+=3;goto B4baf72;
case 0x4baf75:c.instructions+=2;goto B4baf75;
case 0x4baf76:c.instructions+=1;goto B4baf76;
case 0x4baf7b:goto L4baf7b;
case 0x4baf81:c.instructions+=3;goto B4baf81;
case 0x4baf82:c.instructions+=2;goto B4baf82;
case 0x4baf84:c.instructions+=1;goto B4baf84;
case 0x4baf89:goto L4baf89;
case 0x4baf8e:c.instructions+=2;goto B4baf8e;
case 0x4baf94:c.instructions+=1;goto B4baf94;
case 0x4baf99:goto L4baf99;
case 0x4baf9f:c.instructions+=3;goto B4baf9f;
case 0x4bafa2:c.instructions+=2;goto B4bafa2;
case 0x4bafa3:c.instructions+=1;goto B4bafa3;
case 0x4bafa8:goto L4bafa8;
case 0x4bafaa:c.instructions+=2;goto B4bafaa;
case 0x4bafac:c.instructions+=1;goto B4bafac;
case 0x4bafb1:goto L4bafb1;
case 0x4bafb5:c.instructions+=6;goto B4bafb5;
case 0x4bafb6:c.instructions+=5;goto B4bafb6;
case 0x4bafb7:c.instructions+=4;goto B4bafb7;
case 0x4bafb8:c.instructions+=3;goto B4bafb8;
case 0x4bafbf:c.instructions+=2;goto B4bafbf;
case 0x4bafc2:c.instructions+=1;goto B4bafc2;
case 0x4bafd0:goto L4bafd0;
case 0x4bafd3:c.instructions+=11;goto B4bafd3;
case 0x4bafd4:c.instructions+=10;goto B4bafd4;
case 0x4bafd5:c.instructions+=9;goto B4bafd5;
case 0x4bafd6:c.instructions+=8;goto B4bafd6;
case 0x4bafd8:c.instructions+=7;goto B4bafd8;
case 0x4bafdb:c.instructions+=6;goto B4bafdb;
case 0x4bafdc:c.instructions+=5;goto B4bafdc;
case 0x4bafe4:c.instructions+=4;goto B4bafe4;
case 0x4bafe7:c.instructions+=3;goto B4bafe7;
case 0x4bafed:c.instructions+=2;goto B4bafed;
case 0x4bafee:c.instructions+=1;goto B4bafee;
case 0x4baff3:goto L4baff3;
case 0x4baff7:c.instructions+=3;goto B4baff7;
case 0x4baff8:c.instructions+=2;goto B4baff8;
case 0x4baffd:c.instructions+=1;goto B4baffd;
default:missing_instruction(c.pc);}
B4ba000:L4ba000:{c.instructions+=6;NFSU2_TR(0x4ba000);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba001:{NFSU2_TR(0x4ba001);
__builtin_memmove((R+24),(R+4),4);
}
B4ba003:{NFSU2_TR(0x4ba003);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ba006:{NFSU2_TR(0x4ba006);
u8 U[4];
w4(U+0,u32(0x794860ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba00b:{NFSU2_TR(0x4ba00b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba00c:{NFSU2_TR(0x4ba00c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba011ull));
TAIL_STATIC(0x537be0u,537);
}
B4ba011:L4ba011:{c.instructions+=5;NFSU2_TR(0x4ba011);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ba014:{NFSU2_TR(0x4ba014);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ba017:{NFSU2_TR(0x4ba017);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba018:{NFSU2_TR(0x4ba018);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba019:{NFSU2_TR(0x4ba019);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba01eull));
TAIL_STATIC(0x537be0u,537);
}
B4ba01e:L4ba01e:{c.instructions+=3;NFSU2_TR(0x4ba01e);
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
B4ba021:{NFSU2_TR(0x4ba021);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ba022:{NFSU2_TR(0x4ba022);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ba030:L4ba030:{c.instructions+=11;NFSU2_TR(0x4ba030);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba032:{NFSU2_TR(0x4ba032);
u8 U[4];
w4(U+0,u32(0x7737b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba037:{NFSU2_TR(0x4ba037);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ba03d:{NFSU2_TR(0x4ba03d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba03e:{NFSU2_TR(0x4ba03e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ba045:{NFSU2_TR(0x4ba045);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B4ba048:{NFSU2_TR(0x4ba048);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba049:{NFSU2_TR(0x4ba049);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba04a:{NFSU2_TR(0x4ba04a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba04b:{NFSU2_TR(0x4ba04b);
__builtin_memmove((R+24),(R+4),4);
}
B4ba04d:{NFSU2_TR(0x4ba04d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba052ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B4ba052:L4ba052:{c.instructions+=3;NFSU2_TR(0x4ba052);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ba056:{NFSU2_TR(0x4ba056);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ba05e:{NFSU2_TR(0x4ba05e);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4ba060:L4ba060:{c.instructions+=3;NFSU2_TR(0x4ba060);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ba064:{NFSU2_TR(0x4ba064);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba065:{NFSU2_TR(0x4ba065);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba06aull));
TAIL_STATIC(0x5822e0u,582);
}
B4ba06a:L4ba06a:{c.instructions+=3;NFSU2_TR(0x4ba06a);
__builtin_memmove((R+28),(R+0),4);
}
B4ba06c:{NFSU2_TR(0x4ba06c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ba06e:{NFSU2_TR(0x4ba06e);
if(r1(R+518)){{goto L4ba0dd;}}
}
B4ba070:L4ba070:{c.instructions+=2;NFSU2_TR(0x4ba070);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba071:{NFSU2_TR(0x4ba071);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba076ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B4ba076:L4ba076:{c.instructions+=3;NFSU2_TR(0x4ba076);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ba079:{NFSU2_TR(0x4ba079);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ba07b:{NFSU2_TR(0x4ba07b);
if(r1(R+518)){{goto L4ba0dd;}}
}
B4ba07d:L4ba07d:{c.instructions+=2;NFSU2_TR(0x4ba07d);
u8 U[4];
w4(U+0,u32(0x258ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba082:{NFSU2_TR(0x4ba082);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba087ull));
TAIL_STATIC(0x575620u,575);
}
B4ba087:L4ba087:{c.instructions+=5;NFSU2_TR(0x4ba087);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ba08a:{NFSU2_TR(0x4ba08a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ba08e:{NFSU2_TR(0x4ba08e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ba090:{NFSU2_TR(0x4ba090);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ba098:{NFSU2_TR(0x4ba098);
if(r1(R+518)){{goto L4ba0c6;}}
}
B4ba09a:L4ba09a:{c.instructions+=14;NFSU2_TR(0x4ba09a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba09c:{NFSU2_TR(0x4ba09c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba09d:{NFSU2_TR(0x4ba09d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba09f:{NFSU2_TR(0x4ba09f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba0a1:{NFSU2_TR(0x4ba0a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ba0a7:{NFSU2_TR(0x4ba0a7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba0a8:{NFSU2_TR(0x4ba0a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4ba0ae:{NFSU2_TR(0x4ba0ae);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba0af:{NFSU2_TR(0x4ba0af);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ba0b5:{NFSU2_TR(0x4ba0b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba0b6:{NFSU2_TR(0x4ba0b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4ba0bc:{NFSU2_TR(0x4ba0bc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba0bd:{NFSU2_TR(0x4ba0bd);
__builtin_memmove((R+4),(R+0),4);
}
B4ba0bf:{NFSU2_TR(0x4ba0bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba0c4ull));
TAIL_STATIC(0x4b9f30u,4b9);
}
B4ba0c4:L4ba0c4:{c.instructions+=1;NFSU2_TR(0x4ba0c4);
{goto L4ba0c8;}
}
B4ba0c6:L4ba0c6:{c.instructions+=1;NFSU2_TR(0x4ba0c6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ba0c8:L4ba0c8:{c.instructions+=4;NFSU2_TR(0x4ba0c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba0c9:{NFSU2_TR(0x4ba0c9);
__builtin_memmove((R+4),(R+24),4);
}
B4ba0cb:{NFSU2_TR(0x4ba0cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ba0d3:{NFSU2_TR(0x4ba0d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba0d8ull));
TAIL_STATIC(0x54f820u,54f);
}
B4ba0d8:L4ba0d8:{c.instructions+=1;NFSU2_TR(0x4ba0d8);
{goto L4ba172;}
}
B4ba0dd:L4ba0dd:{c.instructions+=3;NFSU2_TR(0x4ba0dd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ba0e1:{NFSU2_TR(0x4ba0e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ba0e3:{NFSU2_TR(0x4ba0e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ba16e;}}
}
B4ba0e9:L4ba0e9:{c.instructions+=3;NFSU2_TR(0x4ba0e9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4ba0ef:{NFSU2_TR(0x4ba0ef);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ba0f1:{NFSU2_TR(0x4ba0f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ba16e;}}
}
B4ba0f3:L4ba0f3:{c.instructions+=2;NFSU2_TR(0x4ba0f3);
u8 U[4];
w4(U+0,u32(0x258ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba0f8:{NFSU2_TR(0x4ba0f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba0fdull));
TAIL_STATIC(0x575620u,575);
}
B4ba0fd:L4ba0fd:{c.instructions+=5;NFSU2_TR(0x4ba0fd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ba100:{NFSU2_TR(0x4ba100);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ba104:{NFSU2_TR(0x4ba104);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ba106:{NFSU2_TR(0x4ba106);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ba10e:{NFSU2_TR(0x4ba10e);
if(r1(R+518)){{goto L4ba13d;}}
}
B4ba110:L4ba110:{c.instructions+=14;NFSU2_TR(0x4ba110);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba112:{NFSU2_TR(0x4ba112);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba114:{NFSU2_TR(0x4ba114);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba116:{NFSU2_TR(0x4ba116);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba118:{NFSU2_TR(0x4ba118);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ba11e:{NFSU2_TR(0x4ba11e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba11f:{NFSU2_TR(0x4ba11f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4ba125:{NFSU2_TR(0x4ba125);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba126:{NFSU2_TR(0x4ba126);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ba12c:{NFSU2_TR(0x4ba12c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba12d:{NFSU2_TR(0x4ba12d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4ba133:{NFSU2_TR(0x4ba133);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba134:{NFSU2_TR(0x4ba134);
__builtin_memmove((R+4),(R+0),4);
}
B4ba136:{NFSU2_TR(0x4ba136);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba13bull));
TAIL_STATIC(0x4b9f30u,4b9);
}
B4ba13b:L4ba13b:{c.instructions+=1;NFSU2_TR(0x4ba13b);
{goto L4ba13f;}
}
B4ba13d:L4ba13d:{c.instructions+=1;NFSU2_TR(0x4ba13d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ba13f:L4ba13f:{c.instructions+=4;NFSU2_TR(0x4ba13f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba140:{NFSU2_TR(0x4ba140);
__builtin_memmove((R+4),(R+24),4);
}
B4ba142:{NFSU2_TR(0x4ba142);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ba14a:{NFSU2_TR(0x4ba14a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba14full));
TAIL_STATIC(0x54f820u,54f);
}
B4ba14f:L4ba14f:{c.instructions+=3;NFSU2_TR(0x4ba14f);
u8 U[4];
w4(U+0,u32(0x72bb728eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba154:{NFSU2_TR(0x4ba154);
__builtin_memmove((R+28),(R+0),4);
}
B4ba156:{NFSU2_TR(0x4ba156);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba15bull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4ba15b:L4ba15b:{c.instructions+=5;NFSU2_TR(0x4ba15b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ba15e:{NFSU2_TR(0x4ba15e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba15f:{NFSU2_TR(0x4ba15f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba160:{NFSU2_TR(0x4ba160);
__builtin_memmove((R+4),(R+24),4);
}
B4ba162:{NFSU2_TR(0x4ba162);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba167ull));
TAIL_STATIC(0x51fe70u,51f);
}
B4ba167:L4ba167:{c.instructions+=2;NFSU2_TR(0x4ba167);
__builtin_memmove((R+4),(R+0),4);
}
B4ba169:{NFSU2_TR(0x4ba169);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba16eull));
TAIL_STATIC(0x50d7e0u,50d);
}
B4ba16e:L4ba16e:{c.instructions+=1;NFSU2_TR(0x4ba16e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B4ba172:L4ba172:{c.instructions+=3;NFSU2_TR(0x4ba172);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B4ba173:{NFSU2_TR(0x4ba173);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4ba176:{NFSU2_TR(0x4ba176);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ba060u);}goto L4ba060;}}
}
B4ba17c:L4ba17c:{c.instructions+=3;NFSU2_TR(0x4ba17c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba17e:{NFSU2_TR(0x4ba17e);
__builtin_memmove((R+4),(R+24),4);
}
B4ba180:{NFSU2_TR(0x4ba180);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba185ull));
TAIL_STATIC(0x539650u,539);
}
B4ba185:L4ba185:{c.instructions+=4;NFSU2_TR(0x4ba185);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4ba18b:{NFSU2_TR(0x4ba18b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ba18d:{NFSU2_TR(0x4ba18d);
w4(R+0,u32(0x5dc29751ull));
}
B4ba192:{NFSU2_TR(0x4ba192);
if(r1(R+518)){{goto L4ba199;}}
}
B4ba194:L4ba194:{c.instructions+=1;NFSU2_TR(0x4ba194);
w4(R+0,u32(0x50eac1e3ull));
}
B4ba199:L4ba199:{c.instructions+=5;NFSU2_TR(0x4ba199);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ba19c:{NFSU2_TR(0x4ba19c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba19d:{NFSU2_TR(0x4ba19d);
u8 U[4];
w4(U+0,u32(0x3c458c1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba1a2:{NFSU2_TR(0x4ba1a2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba1a3:{NFSU2_TR(0x4ba1a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba1a8ull));
TAIL_STATIC(0x537a10u,537);
}
B4ba1a8:L4ba1a8:{c.instructions+=3;NFSU2_TR(0x4ba1a8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ba1ab:{NFSU2_TR(0x4ba1ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba1ac:{NFSU2_TR(0x4ba1ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba1b1ull));
TAIL_STATIC(0x50c900u,50c);
}
B4ba1b1:L4ba1b1:{c.instructions+=8;NFSU2_TR(0x4ba1b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ba1b5:{NFSU2_TR(0x4ba1b5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ba1b8:{NFSU2_TR(0x4ba1b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ba1b9:{NFSU2_TR(0x4ba1b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ba1ba:{NFSU2_TR(0x4ba1ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ba1bb:{NFSU2_TR(0x4ba1bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ba1c2:{NFSU2_TR(0x4ba1c2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ba1c5:{NFSU2_TR(0x4ba1c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ba1d0:L4ba1d0:{c.instructions+=6;NFSU2_TR(0x4ba1d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba1d1:{NFSU2_TR(0x4ba1d1);
__builtin_memmove((R+24),(R+4),4);
}
B4ba1d3:{NFSU2_TR(0x4ba1d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ba1d6:{NFSU2_TR(0x4ba1d6);
u8 U[4];
w4(U+0,u32(0x65929d97ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba1db:{NFSU2_TR(0x4ba1db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba1dc:{NFSU2_TR(0x4ba1dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba1e1ull));
TAIL_STATIC(0x50c900u,50c);
}
B4ba1e1:L4ba1e1:{c.instructions+=6;NFSU2_TR(0x4ba1e1);
__builtin_memmove((R+0),gp(0x836370),4);
}
B4ba1e6:{NFSU2_TR(0x4ba1e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4ba1e9:{NFSU2_TR(0x4ba1e9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B4ba1ec:{NFSU2_TR(0x4ba1ec);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ba1ef:{NFSU2_TR(0x4ba1ef);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ba1f1:{NFSU2_TR(0x4ba1f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ba206;}}
}
B4ba1f3:L4ba1f3:{c.instructions+=4;NFSU2_TR(0x4ba1f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ba1f6:{NFSU2_TR(0x4ba1f6);
u8 U[4];
w4(U+0,u32(0xbb298a80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba1fb:{NFSU2_TR(0x4ba1fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba1fc:{NFSU2_TR(0x4ba1fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba201ull));
TAIL_STATIC(0x50c900u,50c);
}
B4ba201:L4ba201:{c.instructions+=3;NFSU2_TR(0x4ba201);
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
B4ba204:{NFSU2_TR(0x4ba204);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ba205:{NFSU2_TR(0x4ba205);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ba206:L4ba206:{c.instructions+=5;NFSU2_TR(0x4ba206);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ba209:{NFSU2_TR(0x4ba209);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba20a:{NFSU2_TR(0x4ba20a);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba20f:{NFSU2_TR(0x4ba20f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba210:{NFSU2_TR(0x4ba210);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba215ull));
TAIL_STATIC(0x537be0u,537);
}
B4ba215:L4ba215:{c.instructions+=3;NFSU2_TR(0x4ba215);
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
B4ba218:{NFSU2_TR(0x4ba218);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ba219:{NFSU2_TR(0x4ba219);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ba220:L4ba220:{c.instructions+=6;NFSU2_TR(0x4ba220);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba221:{NFSU2_TR(0x4ba221);
__builtin_memmove((R+24),(R+4),4);
}
B4ba223:{NFSU2_TR(0x4ba223);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ba226:{NFSU2_TR(0x4ba226);
u8 U[4];
w4(U+0,u32(0x903e809ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba22b:{NFSU2_TR(0x4ba22b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba22c:{NFSU2_TR(0x4ba22c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba231ull));
TAIL_STATIC(0x50c900u,50c);
}
B4ba231:L4ba231:{c.instructions+=5;NFSU2_TR(0x4ba231);
__builtin_memmove((R+4),gp(0x836370),4);
}
B4ba237:{NFSU2_TR(0x4ba237);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4ba23a:{NFSU2_TR(0x4ba23a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ba23d:{NFSU2_TR(0x4ba23d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ba23f:{NFSU2_TR(0x4ba23f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ba254;}}
}
B4ba241:L4ba241:{c.instructions+=4;NFSU2_TR(0x4ba241);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ba244:{NFSU2_TR(0x4ba244);
u8 U[4];
w4(U+0,u32(0xbb298a80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba249:{NFSU2_TR(0x4ba249);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba24a:{NFSU2_TR(0x4ba24a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba24full));
TAIL_STATIC(0x50c900u,50c);
}
B4ba24f:L4ba24f:{c.instructions+=3;NFSU2_TR(0x4ba24f);
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
B4ba252:{NFSU2_TR(0x4ba252);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ba253:{NFSU2_TR(0x4ba253);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ba254:L4ba254:{c.instructions+=4;NFSU2_TR(0x4ba254);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ba257:{NFSU2_TR(0x4ba257);
u8 U[4];
w4(U+0,u32(0x7912a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba25c:{NFSU2_TR(0x4ba25c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba25d:{NFSU2_TR(0x4ba25d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba262ull));
TAIL_STATIC(0x537be0u,537);
}
B4ba262:L4ba262:{c.instructions+=3;NFSU2_TR(0x4ba262);
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
B4ba265:{NFSU2_TR(0x4ba265);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ba266:{NFSU2_TR(0x4ba266);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ba270:L4ba270:{c.instructions+=6;NFSU2_TR(0x4ba270);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba271:{NFSU2_TR(0x4ba271);
__builtin_memmove((R+24),(R+4),4);
}
B4ba273:{NFSU2_TR(0x4ba273);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ba276:{NFSU2_TR(0x4ba276);
u8 U[4];
w4(U+0,u32(0x99659496ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba27b:{NFSU2_TR(0x4ba27b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba27c:{NFSU2_TR(0x4ba27c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba281ull));
TAIL_STATIC(0x50c900u,50c);
}
B4ba281:L4ba281:{c.instructions+=5;NFSU2_TR(0x4ba281);
__builtin_memmove((R+4),gp(0x836370),4);
}
B4ba287:{NFSU2_TR(0x4ba287);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4ba28a:{NFSU2_TR(0x4ba28a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ba28d:{NFSU2_TR(0x4ba28d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ba28f:{NFSU2_TR(0x4ba28f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ba2a4;}}
}
B4ba291:L4ba291:{c.instructions+=4;NFSU2_TR(0x4ba291);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ba294:{NFSU2_TR(0x4ba294);
u8 U[4];
w4(U+0,u32(0xbb298a80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba299:{NFSU2_TR(0x4ba299);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba29a:{NFSU2_TR(0x4ba29a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba29full));
TAIL_STATIC(0x50c900u,50c);
}
B4ba29f:L4ba29f:{c.instructions+=3;NFSU2_TR(0x4ba29f);
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
B4ba2a2:{NFSU2_TR(0x4ba2a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ba2a3:{NFSU2_TR(0x4ba2a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ba2a4:L4ba2a4:{c.instructions+=4;NFSU2_TR(0x4ba2a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ba2a7:{NFSU2_TR(0x4ba2a7);
u8 U[4];
w4(U+0,u32(0x7912a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba2ac:{NFSU2_TR(0x4ba2ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba2ad:{NFSU2_TR(0x4ba2ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba2b2ull));
TAIL_STATIC(0x537be0u,537);
}
B4ba2b2:L4ba2b2:{c.instructions+=3;NFSU2_TR(0x4ba2b2);
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
B4ba2b5:{NFSU2_TR(0x4ba2b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ba2b6:{NFSU2_TR(0x4ba2b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ba2c0:L4ba2c0:{c.instructions+=21;NFSU2_TR(0x4ba2c0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba2c2:{NFSU2_TR(0x4ba2c2);
u8 U[4];
w4(U+0,u32(0x773818ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba2c7:{NFSU2_TR(0x4ba2c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ba2cd:{NFSU2_TR(0x4ba2cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba2ce:{NFSU2_TR(0x4ba2ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ba2d5:{NFSU2_TR(0x4ba2d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba2d6:{NFSU2_TR(0x4ba2d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ba2da:{NFSU2_TR(0x4ba2da);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ba2de:{NFSU2_TR(0x4ba2de);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba2df:{NFSU2_TR(0x4ba2df);
__builtin_memmove((R+24),(R+4),4);
}
B4ba2e1:{NFSU2_TR(0x4ba2e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ba2e5:{NFSU2_TR(0x4ba2e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba2e6:{NFSU2_TR(0x4ba2e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ba2ea:{NFSU2_TR(0x4ba2ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba2eb:{NFSU2_TR(0x4ba2eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ba2ef:{NFSU2_TR(0x4ba2ef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba2f0:{NFSU2_TR(0x4ba2f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba2f1:{NFSU2_TR(0x4ba2f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba2f2:{NFSU2_TR(0x4ba2f2);
__builtin_memmove((R+4),(R+24),4);
}
B4ba2f4:{NFSU2_TR(0x4ba2f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ba2f8:{NFSU2_TR(0x4ba2f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba2fdull));
TAIL_STATIC(0x51ebd0u,51e);
}
B4ba2fd:L4ba2fd:{c.instructions+=8;NFSU2_TR(0x4ba2fd);
__builtin_memmove((R+8),gp(0x78dfa4),4);
}
B4ba303:{NFSU2_TR(0x4ba303);
u8 U[4];
w4(U+0,u32(0x794958ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4ba309:{NFSU2_TR(0x4ba309);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ba30c:{NFSU2_TR(0x4ba30c);
__builtin_memmove((R+0),gp(0x836370),4);
}
B4ba311:{NFSU2_TR(0x4ba311);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ba317:{NFSU2_TR(0x4ba317);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ba319:{NFSU2_TR(0x4ba319);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ba321:{NFSU2_TR(0x4ba321);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ba334;}}
}
B4ba323:L4ba323:{c.instructions+=4;NFSU2_TR(0x4ba323);
w4(R+0,u32(0x1ull));
}
B4ba328:{NFSU2_TR(0x4ba328);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ba32b:{NFSU2_TR(0x4ba32b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w4(U+4,u32(0x7bcull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ba332:{NFSU2_TR(0x4ba332);
{goto L4ba346;}
}
B4ba334:L4ba334:{c.instructions+=4;NFSU2_TR(0x4ba334);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ba33a:{NFSU2_TR(0x4ba33a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ba340:{NFSU2_TR(0x4ba340);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ba343:{NFSU2_TR(0x4ba343);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ba346:L4ba346:{c.instructions+=3;NFSU2_TR(0x4ba346);
__builtin_memmove((R+4),(R+24),4);
}
B4ba348:{NFSU2_TR(0x4ba348);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ba34b:{NFSU2_TR(0x4ba34b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba350ull));
TAIL_STATIC(0x538060u,538);
}
B4ba350:L4ba350:{c.instructions+=6;NFSU2_TR(0x4ba350);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ba354:{NFSU2_TR(0x4ba354);
__builtin_memmove((R+0),(R+24),4);
}
B4ba356:{NFSU2_TR(0x4ba356);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ba357:{NFSU2_TR(0x4ba357);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ba35e:{NFSU2_TR(0x4ba35e);
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
B4ba361:{NFSU2_TR(0x4ba361);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ba370:L4ba370:{c.instructions+=2;NFSU2_TR(0x4ba370);
w4(R+0,u32(0x6ull));
}
B4ba375:{NFSU2_TR(0x4ba375);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ba380:L4ba380:{c.instructions+=4;NFSU2_TR(0x4ba380);
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
B4ba388:{NFSU2_TR(0x4ba388);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba389:{NFSU2_TR(0x4ba389);
__builtin_memmove((R+24),(R+4),4);
}
B4ba38b:{NFSU2_TR(0x4ba38b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ba3c8;}}
}
B4ba38d:L4ba38d:{c.instructions+=7;NFSU2_TR(0x4ba38d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ba391:{NFSU2_TR(0x4ba391);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba393:{NFSU2_TR(0x4ba393);
u8 U[4];
w4(U+0,u32(0x78fef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba398:{NFSU2_TR(0x4ba398);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba39d:{NFSU2_TR(0x4ba39d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba39e:{NFSU2_TR(0x4ba39e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ba3a1:{NFSU2_TR(0x4ba3a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba3a6ull));
TAIL_STATIC(0x537c00u,537);
}
B4ba3a6:L4ba3a6:{c.instructions+=8;NFSU2_TR(0x4ba3a6);
__builtin_memmove((R+0),gp(0x836370),4);
}
B4ba3ab:{NFSU2_TR(0x4ba3ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ba3b1:{NFSU2_TR(0x4ba3b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ba3b4:{NFSU2_TR(0x4ba3b4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba3b5:{NFSU2_TR(0x4ba3b5);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba3ba:{NFSU2_TR(0x4ba3ba);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba3bb:{NFSU2_TR(0x4ba3bb);
u8 U[4];
w4(U+0,u32(0x7949a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba3c0:{NFSU2_TR(0x4ba3c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba3c5ull));
TAIL_STATIC(0x555eb0u,555);
}
B4ba3c5:L4ba3c5:{c.instructions+=1;NFSU2_TR(0x4ba3c5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ba3c8:L4ba3c8:{c.instructions+=2;NFSU2_TR(0x4ba3c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ba3c9:{NFSU2_TR(0x4ba3c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ba3d0:L4ba3d0:{c.instructions+=6;NFSU2_TR(0x4ba3d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba3d1:{NFSU2_TR(0x4ba3d1);
__builtin_memmove((R+24),(R+4),4);
}
B4ba3d3:{NFSU2_TR(0x4ba3d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ba3d6:{NFSU2_TR(0x4ba3d6);
u8 U[4];
w4(U+0,u32(0x1492d7beull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba3db:{NFSU2_TR(0x4ba3db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba3dc:{NFSU2_TR(0x4ba3dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba3e1ull));
TAIL_STATIC(0x50c900u,50c);
}
B4ba3e1:L4ba3e1:{c.instructions+=5;NFSU2_TR(0x4ba3e1);
__builtin_memmove((R+4),gp(0x836370),4);
}
B4ba3e7:{NFSU2_TR(0x4ba3e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ba3ed:{NFSU2_TR(0x4ba3ed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ba3f0:{NFSU2_TR(0x4ba3f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ba3f2:{NFSU2_TR(0x4ba3f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ba407;}}
}
B4ba3f4:L4ba3f4:{c.instructions+=4;NFSU2_TR(0x4ba3f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ba3f7:{NFSU2_TR(0x4ba3f7);
u8 U[4];
w4(U+0,u32(0xbb298a80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba3fc:{NFSU2_TR(0x4ba3fc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba3fd:{NFSU2_TR(0x4ba3fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba402ull));
TAIL_STATIC(0x50c900u,50c);
}
B4ba402:L4ba402:{c.instructions+=3;NFSU2_TR(0x4ba402);
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
B4ba405:{NFSU2_TR(0x4ba405);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ba406:{NFSU2_TR(0x4ba406);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ba407:L4ba407:{c.instructions+=2;NFSU2_TR(0x4ba407);
__builtin_memmove((R+4),(R+24),4);
}
B4ba409:{NFSU2_TR(0x4ba409);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba40eull));
TAIL_STATIC(0x538060u,538);
}
B4ba40e:L4ba40e:{c.instructions+=1;NFSU2_TR(0x4ba40e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba413ull));
TAIL_STATIC(0x4ff970u,4ff);
}
B4ba413:L4ba413:{c.instructions+=3;NFSU2_TR(0x4ba413);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4ba414:{NFSU2_TR(0x4ba414);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xaull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xaull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ba417:{NFSU2_TR(0x4ba417);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4ba481;}}
}
B4ba419:L4ba419:{c.instructions+=2;NFSU2_TR(0x4ba419);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ba4e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B4ba420:{NFSU2_TR(0x4ba420);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4ba4e0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ba427:L4ba427:{c.instructions+=11;NFSU2_TR(0x4ba427);
__builtin_memmove((R+0),gp(0x836370),4);
}
B4ba42c:{NFSU2_TR(0x4ba42c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ba432:{NFSU2_TR(0x4ba432);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ba438:{NFSU2_TR(0x4ba438);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ba43e:{NFSU2_TR(0x4ba43e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba43f:{NFSU2_TR(0x4ba43f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ba442:{NFSU2_TR(0x4ba442);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba443:{NFSU2_TR(0x4ba443);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba444:{NFSU2_TR(0x4ba444);
u8 U[4];
w4(U+0,u32(0x7949d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba449:{NFSU2_TR(0x4ba449);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba44a:{NFSU2_TR(0x4ba44a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba44full));
TAIL_STATIC(0x537be0u,537);
}
B4ba44f:L4ba44f:{c.instructions+=3;NFSU2_TR(0x4ba44f);
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
B4ba452:{NFSU2_TR(0x4ba452);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ba453:{NFSU2_TR(0x4ba453);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ba454:L4ba454:{c.instructions+=11;NFSU2_TR(0x4ba454);
__builtin_memmove((R+0),gp(0x836370),4);
}
B4ba459:{NFSU2_TR(0x4ba459);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ba45f:{NFSU2_TR(0x4ba45f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ba465:{NFSU2_TR(0x4ba465);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba466:{NFSU2_TR(0x4ba466);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ba46c:{NFSU2_TR(0x4ba46c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ba46f:{NFSU2_TR(0x4ba46f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba470:{NFSU2_TR(0x4ba470);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba471:{NFSU2_TR(0x4ba471);
u8 U[4];
w4(U+0,u32(0x7949c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba476:{NFSU2_TR(0x4ba476);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba477:{NFSU2_TR(0x4ba477);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba47cull));
TAIL_STATIC(0x537be0u,537);
}
B4ba47c:L4ba47c:{c.instructions+=3;NFSU2_TR(0x4ba47c);
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
B4ba47f:{NFSU2_TR(0x4ba47f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ba480:{NFSU2_TR(0x4ba480);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ba481:L4ba481:{c.instructions+=1;NFSU2_TR(0x4ba481);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba486ull));
TAIL_STATIC(0x570a30u,570);
}
B4ba486:L4ba486:{c.instructions+=3;NFSU2_TR(0x4ba486);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ba489:{NFSU2_TR(0x4ba489);
__builtin_memmove((R+0),gp(0x836370),4);
}
B4ba48e:{NFSU2_TR(0x4ba48e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ba4b8;}}
}
B4ba490:L4ba490:{c.instructions+=10;NFSU2_TR(0x4ba490);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ba496:{NFSU2_TR(0x4ba496);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ba49c:{NFSU2_TR(0x4ba49c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ba4a2:{NFSU2_TR(0x4ba4a2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba4a3:{NFSU2_TR(0x4ba4a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ba4a6:{NFSU2_TR(0x4ba4a6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba4a7:{NFSU2_TR(0x4ba4a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba4a8:{NFSU2_TR(0x4ba4a8);
u8 U[4];
w4(U+0,u32(0x7949c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba4ad:{NFSU2_TR(0x4ba4ad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba4ae:{NFSU2_TR(0x4ba4ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba4b3ull));
TAIL_STATIC(0x537be0u,537);
}
B4ba4b3:L4ba4b3:{c.instructions+=3;NFSU2_TR(0x4ba4b3);
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
B4ba4b6:{NFSU2_TR(0x4ba4b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ba4b7:{NFSU2_TR(0x4ba4b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ba4b8:L4ba4b8:{c.instructions+=10;NFSU2_TR(0x4ba4b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ba4be:{NFSU2_TR(0x4ba4be);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ba4c4:{NFSU2_TR(0x4ba4c4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba4c5:{NFSU2_TR(0x4ba4c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ba4cb:{NFSU2_TR(0x4ba4cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ba4ce:{NFSU2_TR(0x4ba4ce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba4cf:{NFSU2_TR(0x4ba4cf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba4d0:{NFSU2_TR(0x4ba4d0);
u8 U[4];
w4(U+0,u32(0x7949b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba4d5:{NFSU2_TR(0x4ba4d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba4d6:{NFSU2_TR(0x4ba4d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba4dbull));
TAIL_STATIC(0x537be0u,537);
}
B4ba4db:L4ba4db:{c.instructions+=3;NFSU2_TR(0x4ba4db);
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
B4ba4de:{NFSU2_TR(0x4ba4de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ba4df:{NFSU2_TR(0x4ba4df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ba500:L4ba500:{c.instructions+=2;NFSU2_TR(0x4ba500);
u8 U[4];
w4(U+0,u32(0xad18d273ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba505:{NFSU2_TR(0x4ba505);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba50aull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4ba50a:L4ba50a:{c.instructions+=2;NFSU2_TR(0x4ba50a);
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
B4ba50d:{NFSU2_TR(0x4ba50d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ba510:L4ba510:{c.instructions+=2;NFSU2_TR(0x4ba510);
w4(R+0,u32(0x7d0ull));
}
B4ba515:{NFSU2_TR(0x4ba515);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ba520:L4ba520:{c.instructions+=6;NFSU2_TR(0x4ba520);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba521:{NFSU2_TR(0x4ba521);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba522:{NFSU2_TR(0x4ba522);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ba526:{NFSU2_TR(0x4ba526);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ba52c:{NFSU2_TR(0x4ba52c);
__builtin_memmove((R+24),(R+4),4);
}
B4ba52e:{NFSU2_TR(0x4ba52e);
if(r1(R+518)){{goto L4ba538;}}
}
B4ba530:L4ba530:{c.instructions+=2;NFSU2_TR(0x4ba530);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ba536:{NFSU2_TR(0x4ba536);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ba54e;}}
}
B4ba538:L4ba538:{c.instructions+=5;NFSU2_TR(0x4ba538);
__builtin_memmove((R+0),gp(0x836370),4);
}
B4ba53d:{NFSU2_TR(0x4ba53d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4ba543:{NFSU2_TR(0x4ba543);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ba545:{NFSU2_TR(0x4ba545);
__builtin_memmove((R+4),(R+518),1);
}
B4ba548:{NFSU2_TR(0x4ba548);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ba54e:L4ba54e:{c.instructions+=4;NFSU2_TR(0x4ba54e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ba552:{NFSU2_TR(0x4ba552);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba553:{NFSU2_TR(0x4ba553);
u8 U[4];
w4(U+0,u32(0x92b703b5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba558:{NFSU2_TR(0x4ba558);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba55dull));
TAIL_STATIC(0x55dda0u,55d);
}
B4ba55d:L4ba55d:{c.instructions+=5;NFSU2_TR(0x4ba55d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ba55f:{NFSU2_TR(0x4ba55f);
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
B4ba562:{NFSU2_TR(0x4ba562);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba563:{NFSU2_TR(0x4ba563);
__builtin_memmove((R+4),(R+24),4);
}
B4ba565:{NFSU2_TR(0x4ba565);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba568ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ba568:L4ba568:{c.instructions+=3;NFSU2_TR(0x4ba568);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4ba56a:{NFSU2_TR(0x4ba56a);
__builtin_memmove((R+4),(R+24),4);
}
B4ba56c:{NFSU2_TR(0x4ba56c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba56full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ba56f:L4ba56f:{c.instructions+=3;NFSU2_TR(0x4ba56f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ba570:{NFSU2_TR(0x4ba570);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ba571:{NFSU2_TR(0x4ba571);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ba580:L4ba580:{c.instructions+=12;NFSU2_TR(0x4ba580);
__builtin_memmove((R+0),gp(0x836370),4);
}
B4ba585:{NFSU2_TR(0x4ba585);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba586:{NFSU2_TR(0x4ba586);
__builtin_memmove((R+24),(R+4),4);
}
B4ba588:{NFSU2_TR(0x4ba588);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4ba58e:{NFSU2_TR(0x4ba58e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ba591:{NFSU2_TR(0x4ba591);
w1(R+512,u8((r1(R+4))!=(u8(0x0ull))));
w1(R+4,u8(0-u32(r1(R+4))));
}
B4ba593:{NFSU2_TR(0x4ba593);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4ba595:{NFSU2_TR(0x4ba595);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x5b41928bull))));
}
B4ba59b:{NFSU2_TR(0x4ba59b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x193f3eull))));
}
B4ba5a1:{NFSU2_TR(0x4ba5a1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba5a2:{NFSU2_TR(0x4ba5a2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba5a3:{NFSU2_TR(0x4ba5a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba5a8ull));
TAIL_STATIC(0x50c900u,50c);
}
B4ba5a8:L4ba5a8:{c.instructions+=4;NFSU2_TR(0x4ba5a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ba5ab:{NFSU2_TR(0x4ba5ab);
u8 U[4];
w4(U+0,u32(0xcb6b7cffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba5b0:{NFSU2_TR(0x4ba5b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba5b1:{NFSU2_TR(0x4ba5b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba5b6ull));
TAIL_STATIC(0x50c900u,50c);
}
B4ba5b6:L4ba5b6:{c.instructions+=3;NFSU2_TR(0x4ba5b6);
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
B4ba5b9:{NFSU2_TR(0x4ba5b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ba5ba:{NFSU2_TR(0x4ba5ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ba5c0:L4ba5c0:{c.instructions+=6;NFSU2_TR(0x4ba5c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba5c1:{NFSU2_TR(0x4ba5c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba5c2:{NFSU2_TR(0x4ba5c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ba5c6:{NFSU2_TR(0x4ba5c6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ba5cc:{NFSU2_TR(0x4ba5cc);
__builtin_memmove((R+24),(R+4),4);
}
B4ba5ce:{NFSU2_TR(0x4ba5ce);
if(r1(R+518)){{goto L4ba5d8;}}
}
B4ba5d0:L4ba5d0:{c.instructions+=2;NFSU2_TR(0x4ba5d0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ba5d6:{NFSU2_TR(0x4ba5d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ba5ee;}}
}
B4ba5d8:L4ba5d8:{c.instructions+=5;NFSU2_TR(0x4ba5d8);
__builtin_memmove((R+0),gp(0x836370),4);
}
B4ba5dd:{NFSU2_TR(0x4ba5dd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x135ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4ba5e3:{NFSU2_TR(0x4ba5e3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ba5e5:{NFSU2_TR(0x4ba5e5);
__builtin_memmove((R+4),(R+518),1);
}
B4ba5e8:{NFSU2_TR(0x4ba5e8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x135ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ba5ee:L4ba5ee:{c.instructions+=4;NFSU2_TR(0x4ba5ee);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ba5f2:{NFSU2_TR(0x4ba5f2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba5f3:{NFSU2_TR(0x4ba5f3);
u8 U[4];
w4(U+0,u32(0x92b703b5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba5f8:{NFSU2_TR(0x4ba5f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba5fdull));
TAIL_STATIC(0x55dda0u,55d);
}
B4ba5fd:L4ba5fd:{c.instructions+=5;NFSU2_TR(0x4ba5fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ba5ff:{NFSU2_TR(0x4ba5ff);
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
B4ba602:{NFSU2_TR(0x4ba602);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba603:{NFSU2_TR(0x4ba603);
__builtin_memmove((R+4),(R+24),4);
}
B4ba605:{NFSU2_TR(0x4ba605);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba608ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ba608:L4ba608:{c.instructions+=3;NFSU2_TR(0x4ba608);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4ba60a:{NFSU2_TR(0x4ba60a);
__builtin_memmove((R+4),(R+24),4);
}
B4ba60c:{NFSU2_TR(0x4ba60c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba60full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ba60f:L4ba60f:{c.instructions+=3;NFSU2_TR(0x4ba60f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ba610:{NFSU2_TR(0x4ba610);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ba611:{NFSU2_TR(0x4ba611);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ba620:L4ba620:{c.instructions+=12;NFSU2_TR(0x4ba620);
__builtin_memmove((R+0),gp(0x836370),4);
}
B4ba625:{NFSU2_TR(0x4ba625);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba626:{NFSU2_TR(0x4ba626);
__builtin_memmove((R+24),(R+4),4);
}
B4ba628:{NFSU2_TR(0x4ba628);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x135ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4ba62e:{NFSU2_TR(0x4ba62e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ba631:{NFSU2_TR(0x4ba631);
w1(R+512,u8((r1(R+4))!=(u8(0x0ull))));
w1(R+4,u8(0-u32(r1(R+4))));
}
B4ba633:{NFSU2_TR(0x4ba633);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4ba635:{NFSU2_TR(0x4ba635);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xf154ull))));
}
B4ba63b:{NFSU2_TR(0x4ba63b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x61cull))));
}
B4ba641:{NFSU2_TR(0x4ba641);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba642:{NFSU2_TR(0x4ba642);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba643:{NFSU2_TR(0x4ba643);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba648ull));
TAIL_STATIC(0x50c900u,50c);
}
B4ba648:L4ba648:{c.instructions+=4;NFSU2_TR(0x4ba648);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ba64b:{NFSU2_TR(0x4ba64b);
u8 U[4];
w4(U+0,u32(0xda3cddbbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba650:{NFSU2_TR(0x4ba650);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba651:{NFSU2_TR(0x4ba651);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba656ull));
TAIL_STATIC(0x50c900u,50c);
}
B4ba656:L4ba656:{c.instructions+=3;NFSU2_TR(0x4ba656);
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
B4ba659:{NFSU2_TR(0x4ba659);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ba65a:{NFSU2_TR(0x4ba65a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ba660:L4ba660:{c.instructions+=13;NFSU2_TR(0x4ba660);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B4ba663:{NFSU2_TR(0x4ba663);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba664:{NFSU2_TR(0x4ba664);
__builtin_memmove((R+24),(R+4),4);
}
B4ba666:{NFSU2_TR(0x4ba666);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ba669:{NFSU2_TR(0x4ba669);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ba66c:{NFSU2_TR(0x4ba66c);
{u32 ea_=u32(u32(7894416u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4ba672:{NFSU2_TR(0x4ba672);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba673:{NFSU2_TR(0x4ba673);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba674:{NFSU2_TR(0x4ba674);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ba677:{NFSU2_TR(0x4ba677);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ba67a:{NFSU2_TR(0x4ba67a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba67b:{NFSU2_TR(0x4ba67b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba67c:{NFSU2_TR(0x4ba67c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba681ull));
TAIL_STATIC(0x51d380u,51d);
}
B4ba681:L4ba681:{c.instructions+=11;NFSU2_TR(0x4ba681);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ba684:{NFSU2_TR(0x4ba684);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ba687:{NFSU2_TR(0x4ba687);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ba68a:{NFSU2_TR(0x4ba68a);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4ba68e:{NFSU2_TR(0x4ba68e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ba692:{NFSU2_TR(0x4ba692);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba693:{NFSU2_TR(0x4ba693);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4ba697:{NFSU2_TR(0x4ba697);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba698:{NFSU2_TR(0x4ba698);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba699:{NFSU2_TR(0x4ba699);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ba69d:{NFSU2_TR(0x4ba69d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba6a2ull));
TAIL_STATIC(0x51d620u,51d);
}
B4ba6a2:L4ba6a2:{c.instructions+=10;NFSU2_TR(0x4ba6a2);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ba6a6:{NFSU2_TR(0x4ba6a6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ba6ac:{NFSU2_TR(0x4ba6ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ba6b0:{NFSU2_TR(0x4ba6b0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4ba6b3:{NFSU2_TR(0x4ba6b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba6b4:{NFSU2_TR(0x4ba6b4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4ba6b8:{NFSU2_TR(0x4ba6b8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba6b9:{NFSU2_TR(0x4ba6b9);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ba6bc:{NFSU2_TR(0x4ba6bc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba6bd:{NFSU2_TR(0x4ba6bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba6c2ull));
TAIL_STATIC(0x51d4d0u,51d);
}
B4ba6c2:L4ba6c2:{c.instructions+=9;NFSU2_TR(0x4ba6c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ba6c5:{NFSU2_TR(0x4ba6c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ba6c8:{NFSU2_TR(0x4ba6c8);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4ba6cc:{NFSU2_TR(0x4ba6cc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba6cd:{NFSU2_TR(0x4ba6cd);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4ba6d1:{NFSU2_TR(0x4ba6d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba6d2:{NFSU2_TR(0x4ba6d2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba6d3:{NFSU2_TR(0x4ba6d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ba6d7:{NFSU2_TR(0x4ba6d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba6dcull));
TAIL_STATIC(0x51d070u,51d);
}
B4ba6dc:L4ba6dc:{c.instructions+=8;NFSU2_TR(0x4ba6dc);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ba6e0:{NFSU2_TR(0x4ba6e0);
{u32 ea_=u32(u32(7948908u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4ba6e6:{NFSU2_TR(0x4ba6e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ba6ea:{NFSU2_TR(0x4ba6ea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4ba6ed:{NFSU2_TR(0x4ba6ed);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ba6f0:{NFSU2_TR(0x4ba6f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba6f1:{NFSU2_TR(0x4ba6f1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba6f2:{NFSU2_TR(0x4ba6f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba6f7ull));
TAIL_STATIC(0x51d380u,51d);
}
B4ba6f7:L4ba6f7:{c.instructions+=11;NFSU2_TR(0x4ba6f7);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ba6fa:{NFSU2_TR(0x4ba6fa);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ba700:{NFSU2_TR(0x4ba700);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ba703:{NFSU2_TR(0x4ba703);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4ba707:{NFSU2_TR(0x4ba707);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba708:{NFSU2_TR(0x4ba708);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4ba70b:{NFSU2_TR(0x4ba70b);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4ba70f:{NFSU2_TR(0x4ba70f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba710:{NFSU2_TR(0x4ba710);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba711:{NFSU2_TR(0x4ba711);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ba715:{NFSU2_TR(0x4ba715);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba71aull));
TAIL_STATIC(0x51d730u,51d);
}
B4ba71a:L4ba71a:{c.instructions+=12;NFSU2_TR(0x4ba71a);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ba71d:{NFSU2_TR(0x4ba71d);
{u32 ea_=u32(u32(7948908u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4ba723:{NFSU2_TR(0x4ba723);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ba726:{NFSU2_TR(0x4ba726);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4ba729:{NFSU2_TR(0x4ba729);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ba72d:{NFSU2_TR(0x4ba72d);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ba730:{NFSU2_TR(0x4ba730);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ba736:{NFSU2_TR(0x4ba736);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4ba73a:{NFSU2_TR(0x4ba73a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4ba73e:{NFSU2_TR(0x4ba73e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ba741:{NFSU2_TR(0x4ba741);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba742:{NFSU2_TR(0x4ba742);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba747ull));
TAIL_STATIC(0x51d380u,51d);
}
B4ba747:L4ba747:{c.instructions+=11;NFSU2_TR(0x4ba747);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ba74a:{NFSU2_TR(0x4ba74a);
{u32 ea_=u32(u32(7948908u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4ba750:{NFSU2_TR(0x4ba750);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ba753:{NFSU2_TR(0x4ba753);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ba757:{NFSU2_TR(0x4ba757);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ba75a:{NFSU2_TR(0x4ba75a);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ba760:{NFSU2_TR(0x4ba760);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ba763:{NFSU2_TR(0x4ba763);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4ba767:{NFSU2_TR(0x4ba767);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ba76a:{NFSU2_TR(0x4ba76a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba76b:{NFSU2_TR(0x4ba76b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba770ull));
TAIL_STATIC(0x51d380u,51d);
}
B4ba770:L4ba770:{c.instructions+=4;NFSU2_TR(0x4ba770);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ba773:{NFSU2_TR(0x4ba773);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ba776:{NFSU2_TR(0x4ba776);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ba778:{NFSU2_TR(0x4ba778);
if(r1(R+518)){{goto L4ba799;}}
}
B4ba77a:L4ba77a:{c.instructions+=9;NFSU2_TR(0x4ba77a);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ba77d:{NFSU2_TR(0x4ba77d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4ba780:{NFSU2_TR(0x4ba780);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4ba783:{NFSU2_TR(0x4ba783);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ba787:{NFSU2_TR(0x4ba787);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ba78a:{NFSU2_TR(0x4ba78a);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4ba78d:{NFSU2_TR(0x4ba78d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ba790:{NFSU2_TR(0x4ba790);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba791:{NFSU2_TR(0x4ba791);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba796ull));
TAIL_STATIC(0x51d380u,51d);
}
B4ba796:L4ba796:{c.instructions+=1;NFSU2_TR(0x4ba796);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ba799:L4ba799:{c.instructions+=4;NFSU2_TR(0x4ba799);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ba79a:{NFSU2_TR(0x4ba79a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ba79b:{NFSU2_TR(0x4ba79b);
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
B4ba79e:{NFSU2_TR(0x4ba79e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ba7a0:L4ba7a0:{c.instructions+=6;NFSU2_TR(0x4ba7a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba7a1:{NFSU2_TR(0x4ba7a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba7a2:{NFSU2_TR(0x4ba7a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ba7a6:{NFSU2_TR(0x4ba7a6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ba7ac:{NFSU2_TR(0x4ba7ac);
__builtin_memmove((R+24),(R+4),4);
}
B4ba7ae:{NFSU2_TR(0x4ba7ae);
if(r1(R+518)){{goto L4ba7b8;}}
}
B4ba7b0:L4ba7b0:{c.instructions+=2;NFSU2_TR(0x4ba7b0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ba7b6:{NFSU2_TR(0x4ba7b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ba7ce;}}
}
B4ba7b8:L4ba7b8:{c.instructions+=5;NFSU2_TR(0x4ba7b8);
__builtin_memmove((R+0),gp(0x836370),4);
}
B4ba7bd:{NFSU2_TR(0x4ba7bd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x136ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4ba7c3:{NFSU2_TR(0x4ba7c3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ba7c5:{NFSU2_TR(0x4ba7c5);
__builtin_memmove((R+4),(R+518),1);
}
B4ba7c8:{NFSU2_TR(0x4ba7c8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x136ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ba7ce:L4ba7ce:{c.instructions+=4;NFSU2_TR(0x4ba7ce);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ba7d2:{NFSU2_TR(0x4ba7d2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba7d3:{NFSU2_TR(0x4ba7d3);
u8 U[4];
w4(U+0,u32(0x92b703b5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba7d8:{NFSU2_TR(0x4ba7d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba7ddull));
TAIL_STATIC(0x55dda0u,55d);
}
B4ba7dd:L4ba7dd:{c.instructions+=5;NFSU2_TR(0x4ba7dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ba7df:{NFSU2_TR(0x4ba7df);
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
B4ba7e2:{NFSU2_TR(0x4ba7e2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba7e3:{NFSU2_TR(0x4ba7e3);
__builtin_memmove((R+4),(R+24),4);
}
B4ba7e5:{NFSU2_TR(0x4ba7e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba7e8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ba7e8:L4ba7e8:{c.instructions+=3;NFSU2_TR(0x4ba7e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4ba7ea:{NFSU2_TR(0x4ba7ea);
__builtin_memmove((R+4),(R+24),4);
}
B4ba7ec:{NFSU2_TR(0x4ba7ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba7efull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ba7ef:L4ba7ef:{c.instructions+=3;NFSU2_TR(0x4ba7ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ba7f0:{NFSU2_TR(0x4ba7f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ba7f1:{NFSU2_TR(0x4ba7f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ba800:L4ba800:{c.instructions+=12;NFSU2_TR(0x4ba800);
__builtin_memmove((R+0),gp(0x836370),4);
}
B4ba805:{NFSU2_TR(0x4ba805);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba806:{NFSU2_TR(0x4ba806);
__builtin_memmove((R+24),(R+4),4);
}
B4ba808:{NFSU2_TR(0x4ba808);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x136ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4ba80e:{NFSU2_TR(0x4ba80e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ba811:{NFSU2_TR(0x4ba811);
w1(R+512,u8((r1(R+4))!=(u8(0x0ull))));
w1(R+4,u8(0-u32(r1(R+4))));
}
B4ba813:{NFSU2_TR(0x4ba813);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4ba815:{NFSU2_TR(0x4ba815);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xf154ull))));
}
B4ba81b:{NFSU2_TR(0x4ba81b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x61cull))));
}
B4ba821:{NFSU2_TR(0x4ba821);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba822:{NFSU2_TR(0x4ba822);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba823:{NFSU2_TR(0x4ba823);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba828ull));
TAIL_STATIC(0x50c900u,50c);
}
B4ba828:L4ba828:{c.instructions+=4;NFSU2_TR(0x4ba828);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ba82b:{NFSU2_TR(0x4ba82b);
u8 U[4];
w4(U+0,u32(0x9b985275ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba830:{NFSU2_TR(0x4ba830);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba831:{NFSU2_TR(0x4ba831);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba836ull));
TAIL_STATIC(0x50c900u,50c);
}
B4ba836:L4ba836:{c.instructions+=3;NFSU2_TR(0x4ba836);
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
B4ba839:{NFSU2_TR(0x4ba839);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ba83a:{NFSU2_TR(0x4ba83a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ba840:L4ba840:{c.instructions+=8;NFSU2_TR(0x4ba840);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xa0ull))));
}
B4ba846:{NFSU2_TR(0x4ba846);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba847:{NFSU2_TR(0x4ba847);
__builtin_memmove((R+24),gp(0x836370),4);
}
B4ba84d:{NFSU2_TR(0x4ba84d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba84e:{NFSU2_TR(0x4ba84e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B4ba851:{NFSU2_TR(0x4ba851);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba852:{NFSU2_TR(0x4ba852);
__builtin_memmove((R+28),(R+4),4);
}
B4ba854:{NFSU2_TR(0x4ba854);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba859ull));
TAIL_STATIC(0x49e290u,49e);
}
B4ba859:L4ba859:{c.instructions+=2;NFSU2_TR(0x4ba859);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ba85b:{NFSU2_TR(0x4ba85b);
if(r1(R+518)){{goto L4ba927;}}
}
B4ba861:L4ba861:{c.instructions+=25;NFSU2_TR(0x4ba861);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4ba863:{NFSU2_TR(0x4ba863);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4ba869:{NFSU2_TR(0x4ba869);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4ba86b:{NFSU2_TR(0x4ba86b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4ba871:{NFSU2_TR(0x4ba871);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ba877:{NFSU2_TR(0x4ba877);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba878:{NFSU2_TR(0x4ba878);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba879:{NFSU2_TR(0x4ba879);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ba87f:{NFSU2_TR(0x4ba87f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba880:{NFSU2_TR(0x4ba880);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4ba886:{NFSU2_TR(0x4ba886);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ba888:{NFSU2_TR(0x4ba888);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ba88e:{NFSU2_TR(0x4ba88e);
__builtin_memmove((R+0),(R+518),1);
}
B4ba891:{NFSU2_TR(0x4ba891);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba892:{NFSU2_TR(0x4ba892);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ba898:{NFSU2_TR(0x4ba898);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba899:{NFSU2_TR(0x4ba899);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba89a:{NFSU2_TR(0x4ba89a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba89b:{NFSU2_TR(0x4ba89b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ba8a1:{NFSU2_TR(0x4ba8a1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba8a2:{NFSU2_TR(0x4ba8a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4ba8a5:{NFSU2_TR(0x4ba8a5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba8a6:{NFSU2_TR(0x4ba8a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba8a7:{NFSU2_TR(0x4ba8a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4ba8ab:{NFSU2_TR(0x4ba8ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba8b0ull));
TAIL_STATIC(0x4952c0u,495);
}
B4ba8b0:L4ba8b0:{c.instructions+=6;NFSU2_TR(0x4ba8b0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba8b1:{NFSU2_TR(0x4ba8b1);
u8 U[4];
w4(U+0,u32(0x49e480ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba8b6:{NFSU2_TR(0x4ba8b6);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4ba8ba:{NFSU2_TR(0x4ba8ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba8bb:{NFSU2_TR(0x4ba8bb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba8bd:{NFSU2_TR(0x4ba8bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba8c2ull));
TAIL_STATIC(0x58b940u,58b);
}
B4ba8c2:L4ba8c2:{c.instructions+=3;NFSU2_TR(0x4ba8c2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ba8c5:{NFSU2_TR(0x4ba8c5);
__builtin_memmove((R+4),(R+0),4);
}
B4ba8c7:{NFSU2_TR(0x4ba8c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba8ccull));
TAIL_STATIC(0x586e40u,586);
}
B4ba8cc:L4ba8cc:{c.instructions+=2;NFSU2_TR(0x4ba8cc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4ba8ce:{NFSU2_TR(0x4ba8ce);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4ba8fe;}}
}
B4ba8d0:L4ba8d0:{c.instructions+=3;NFSU2_TR(0x4ba8d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ba8d3:{NFSU2_TR(0x4ba8d3);
u8 U[4];
w4(U+0,u32(0x906b132aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba8d8:{NFSU2_TR(0x4ba8d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba8ddull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4ba8dd:L4ba8dd:{c.instructions+=7;NFSU2_TR(0x4ba8dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba8de:{NFSU2_TR(0x4ba8de);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba8e0:{NFSU2_TR(0x4ba8e0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba8e2:{NFSU2_TR(0x4ba8e2);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba8e7:{NFSU2_TR(0x4ba8e7);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba8ec:{NFSU2_TR(0x4ba8ec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba8ed:{NFSU2_TR(0x4ba8ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba8f2ull));
TAIL_STATIC(0x558540u,558);
}
B4ba8f2:L4ba8f2:{c.instructions+=5;NFSU2_TR(0x4ba8f2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4ba8f5:{NFSU2_TR(0x4ba8f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ba8f6:{NFSU2_TR(0x4ba8f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ba8f7:{NFSU2_TR(0x4ba8f7);
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
B4ba8fd:{NFSU2_TR(0x4ba8fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ba8fe:L4ba8fe:{c.instructions+=4;NFSU2_TR(0x4ba8fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ba901:{NFSU2_TR(0x4ba901);
u8 U[4];
w4(U+0,u32(0x44345f7full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba906:{NFSU2_TR(0x4ba906);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x180ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ba90d:{NFSU2_TR(0x4ba90d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba912ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4ba912:L4ba912:{c.instructions+=4;NFSU2_TR(0x4ba912);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba913:{NFSU2_TR(0x4ba913);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba918:{NFSU2_TR(0x4ba918);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba919:{NFSU2_TR(0x4ba919);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba91eull));
TAIL_STATIC(0x558310u,558);
}
B4ba91e:L4ba91e:{c.instructions+=2;NFSU2_TR(0x4ba91e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4ba921:{NFSU2_TR(0x4ba921);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x184ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ba927:L4ba927:{c.instructions+=4;NFSU2_TR(0x4ba927);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ba928:{NFSU2_TR(0x4ba928);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ba929:{NFSU2_TR(0x4ba929);
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
B4ba92f:{NFSU2_TR(0x4ba92f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ba930:L4ba930:{c.instructions+=6;NFSU2_TR(0x4ba930);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba931:{NFSU2_TR(0x4ba931);
__builtin_memmove((R+24),(R+4),4);
}
B4ba933:{NFSU2_TR(0x4ba933);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ba936:{NFSU2_TR(0x4ba936);
u8 U[4];
w4(U+0,u32(0x20747cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba93b:{NFSU2_TR(0x4ba93b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba93c:{NFSU2_TR(0x4ba93c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba941ull));
TAIL_STATIC(0x50c900u,50c);
}
B4ba941:L4ba941:{c.instructions+=6;NFSU2_TR(0x4ba941);
__builtin_memmove((R+0),gp(0x836370),4);
}
B4ba946:{NFSU2_TR(0x4ba946);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4ba94c:{NFSU2_TR(0x4ba94c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xc8ull))));
}
B4ba951:{NFSU2_TR(0x4ba951);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ba954:{NFSU2_TR(0x4ba954);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ba956:{NFSU2_TR(0x4ba956);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ba96b;}}
}
B4ba958:L4ba958:{c.instructions+=4;NFSU2_TR(0x4ba958);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ba95b:{NFSU2_TR(0x4ba95b);
u8 U[4];
w4(U+0,u32(0xbb298a80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba960:{NFSU2_TR(0x4ba960);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba961:{NFSU2_TR(0x4ba961);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba966ull));
TAIL_STATIC(0x50c900u,50c);
}
B4ba966:L4ba966:{c.instructions+=3;NFSU2_TR(0x4ba966);
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
B4ba969:{NFSU2_TR(0x4ba969);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ba96a:{NFSU2_TR(0x4ba96a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ba96b:L4ba96b:{c.instructions+=5;NFSU2_TR(0x4ba96b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ba96e:{NFSU2_TR(0x4ba96e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba96f:{NFSU2_TR(0x4ba96f);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba974:{NFSU2_TR(0x4ba974);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba975:{NFSU2_TR(0x4ba975);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba97aull));
TAIL_STATIC(0x537be0u,537);
}
B4ba97a:L4ba97a:{c.instructions+=3;NFSU2_TR(0x4ba97a);
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
B4ba97d:{NFSU2_TR(0x4ba97d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ba97e:{NFSU2_TR(0x4ba97e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ba980:L4ba980:{c.instructions+=14;NFSU2_TR(0x4ba980);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba982:{NFSU2_TR(0x4ba982);
u8 U[4];
w4(U+0,u32(0x7737e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba987:{NFSU2_TR(0x4ba987);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ba98d:{NFSU2_TR(0x4ba98d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba98e:{NFSU2_TR(0x4ba98e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ba995:{NFSU2_TR(0x4ba995);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba996:{NFSU2_TR(0x4ba996);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba997:{NFSU2_TR(0x4ba997);
__builtin_memmove((R+12),gp(0x836370),4);
}
B4ba99d:{NFSU2_TR(0x4ba99d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba99e:{NFSU2_TR(0x4ba99e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba99f:{NFSU2_TR(0x4ba99f);
u8 U[4];
w4(U+0,u32(0x254ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba9a4:{NFSU2_TR(0x4ba9a4);
__builtin_memmove((R+24),(R+4),4);
}
B4ba9a6:{NFSU2_TR(0x4ba9a6);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
}
B4ba9ac:{NFSU2_TR(0x4ba9ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba9b1ull));
TAIL_STATIC(0x575620u,575);
}
B4ba9b1:L4ba9b1:{c.instructions+=6;NFSU2_TR(0x4ba9b1);
__builtin_memmove((R+28),(R+0),4);
}
B4ba9b3:{NFSU2_TR(0x4ba9b3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ba9b6:{NFSU2_TR(0x4ba9b6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ba9ba:{NFSU2_TR(0x4ba9ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ba9bc:{NFSU2_TR(0x4ba9bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ba9c4:{NFSU2_TR(0x4ba9c4);
if(r1(R+518)){{goto L4ba9f8;}}
}
B4ba9c6:L4ba9c6:{c.instructions+=14;NFSU2_TR(0x4ba9c6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba9c8:{NFSU2_TR(0x4ba9c8);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba9ca:{NFSU2_TR(0x4ba9ca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba9cb:{NFSU2_TR(0x4ba9cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ba9d1:{NFSU2_TR(0x4ba9d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba9d2:{NFSU2_TR(0x4ba9d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ba9d8:{NFSU2_TR(0x4ba9d8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba9d9:{NFSU2_TR(0x4ba9d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4ba9df:{NFSU2_TR(0x4ba9df);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba9e0:{NFSU2_TR(0x4ba9e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ba9e6:{NFSU2_TR(0x4ba9e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba9e7:{NFSU2_TR(0x4ba9e7);
u8 U[4];
w4(U+0,u32(0x32ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba9e9:{NFSU2_TR(0x4ba9e9);
__builtin_memmove((R+4),(R+28),4);
}
B4ba9eb:{NFSU2_TR(0x4ba9eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ba9f0ull));
TAIL_STATIC(0x51e9e0u,51e);
}
B4ba9f0:L4ba9f0:{c.instructions+=2;NFSU2_TR(0x4ba9f0);
u8 U[4];
w4(U+0,u32(0x794ab8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4ba9f6:{NFSU2_TR(0x4ba9f6);
{goto L4ba9fa;}
}
B4ba9f8:L4ba9f8:{c.instructions+=1;NFSU2_TR(0x4ba9f8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4ba9fa:L4ba9fa:{c.instructions+=4;NFSU2_TR(0x4ba9fa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ba9fb:{NFSU2_TR(0x4ba9fb);
__builtin_memmove((R+4),(R+24),4);
}
B4ba9fd:{NFSU2_TR(0x4ba9fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4baa05:{NFSU2_TR(0x4baa05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4baa0aull));
TAIL_STATIC(0x54f820u,54f);
}
B4baa0a:L4baa0a:{c.instructions+=4;NFSU2_TR(0x4baa0a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4baa0c:{NFSU2_TR(0x4baa0c);
__builtin_memmove((R+4),(R+24),4);
}
B4baa0e:{NFSU2_TR(0x4baa0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4baa14:{NFSU2_TR(0x4baa14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4baa19ull));
TAIL_STATIC(0x539650u,539);
}
B4baa19:L4baa19:{c.instructions+=4;NFSU2_TR(0x4baa19);
__builtin_memmove((R+0),gp(0x836376),1);
}
B4baa1e:{NFSU2_TR(0x4baa1e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4baa20:{NFSU2_TR(0x4baa20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4baa23:{NFSU2_TR(0x4baa23);
if(r1(R+518)){{goto L4baa2c;}}
}
B4baa25:L4baa25:{c.instructions+=2;NFSU2_TR(0x4baa25);
u8 U[4];
w4(U+0,u32(0x34d83742ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4baa2a:{NFSU2_TR(0x4baa2a);
{goto L4baa31;}
}
B4baa2c:L4baa2c:{c.instructions+=1;NFSU2_TR(0x4baa2c);
u8 U[4];
w4(U+0,u32(0x371b340full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4baa31:L4baa31:{c.instructions+=1;NFSU2_TR(0x4baa31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4baa36ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4baa36:L4baa36:{c.instructions+=4;NFSU2_TR(0x4baa36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4baa37:{NFSU2_TR(0x4baa37);
u8 U[4];
w4(U+0,u32(0x794b08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4baa3c:{NFSU2_TR(0x4baa3c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4baa3d:{NFSU2_TR(0x4baa3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4baa42ull));
TAIL_STATIC(0x542600u,542);
}
B4baa42:L4baa42:{c.instructions+=8;NFSU2_TR(0x4baa42);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4baa46:{NFSU2_TR(0x4baa46);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4baa49:{NFSU2_TR(0x4baa49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4baa4a:{NFSU2_TR(0x4baa4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4baa4b:{NFSU2_TR(0x4baa4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4baa4c:{NFSU2_TR(0x4baa4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4baa53:{NFSU2_TR(0x4baa53);
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
B4baa56:{NFSU2_TR(0x4baa56);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4baa60:L4baa60:{c.instructions+=9;NFSU2_TR(0x4baa60);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4baa62:{NFSU2_TR(0x4baa62);
u8 U[4];
w4(U+0,u32(0x773804ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4baa67:{NFSU2_TR(0x4baa67);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4baa6d:{NFSU2_TR(0x4baa6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4baa6e:{NFSU2_TR(0x4baa6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4baa75:{NFSU2_TR(0x4baa75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4baa76:{NFSU2_TR(0x4baa76);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4baa77:{NFSU2_TR(0x4baa77);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4baa79:{NFSU2_TR(0x4baa79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4baa7eull));
TAIL_STATIC(0x575620u,575);
}
B4baa7e:L4baa7e:{c.instructions+=7;NFSU2_TR(0x4baa7e);
__builtin_memmove((R+24),(R+0),4);
}
B4baa80:{NFSU2_TR(0x4baa80);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4baa83:{NFSU2_TR(0x4baa83);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4baa87:{NFSU2_TR(0x4baa87);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4baa89:{NFSU2_TR(0x4baa89);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4baa8b:{NFSU2_TR(0x4baa8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4baa8f:{NFSU2_TR(0x4baa8f);
if(r1(R+518)){{goto L4baaa5;}}
}
B4baa91:L4baa91:{c.instructions+=4;NFSU2_TR(0x4baa91);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4baa95:{NFSU2_TR(0x4baa95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4baa96:{NFSU2_TR(0x4baa96);
__builtin_memmove((R+4),(R+24),4);
}
B4baa98:{NFSU2_TR(0x4baa98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4baa9dull));
TAIL_STATIC(0x551de0u,551);
}
B4baa9d:L4baa9d:{c.instructions+=2;NFSU2_TR(0x4baa9d);
u8 U[4];
w4(U+0,u32(0x78fe38ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4baaa3:{NFSU2_TR(0x4baaa3);
__builtin_memmove((R+0),(R+24),4);
}
B4baaa5:L4baaa5:{c.instructions+=5;NFSU2_TR(0x4baaa5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4baaa9:{NFSU2_TR(0x4baaa9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4baaaa:{NFSU2_TR(0x4baaaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4baab1:{NFSU2_TR(0x4baab1);
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
B4baab4:{NFSU2_TR(0x4baab4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4baac0:L4baac0:{c.instructions+=3;NFSU2_TR(0x4baac0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4baac4:{NFSU2_TR(0x4baac4);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc407210ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4baac9:{NFSU2_TR(0x4baac9);
if(r1(R+518)){{goto L4baae0;}}
}
B4baacb:L4baacb:{c.instructions+=2;NFSU2_TR(0x4baacb);
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
B4baad0:{NFSU2_TR(0x4baad0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4baaeb;}}
}
B4baad2:L4baad2:{c.instructions+=2;NFSU2_TR(0x4baad2);
__builtin_memmove((R+4),gp(0x836370),4);
}
B4baad8:{NFSU2_TR(0x4baad8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4baaddull));
TAIL_STATIC(0x4b96f0u,4b9);
}
B4baadd:L4baadd:{c.instructions+=1;NFSU2_TR(0x4baadd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4baae0:L4baae0:{c.instructions+=2;NFSU2_TR(0x4baae0);
__builtin_memmove((R+4),gp(0x836370),4);
}
B4baae6:{NFSU2_TR(0x4baae6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4baaebull));
TAIL_STATIC(0x4b9690u,4b9);
}
B4baaeb:L4baaeb:{c.instructions+=1;NFSU2_TR(0x4baaeb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4baaf0:L4baaf0:{c.instructions+=27;NFSU2_TR(0x4baaf0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4baaf2:{NFSU2_TR(0x4baaf2);
u8 U[4];
w4(U+0,u32(0x773818ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4baaf7:{NFSU2_TR(0x4baaf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4baafd:{NFSU2_TR(0x4baafd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4baafe:{NFSU2_TR(0x4baafe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bab05:{NFSU2_TR(0x4bab05);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bab06:{NFSU2_TR(0x4bab06);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bab0a:{NFSU2_TR(0x4bab0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bab0e:{NFSU2_TR(0x4bab0e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bab0f:{NFSU2_TR(0x4bab0f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bab10:{NFSU2_TR(0x4bab10);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4bab14:{NFSU2_TR(0x4bab14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bab15:{NFSU2_TR(0x4bab15);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bab19:{NFSU2_TR(0x4bab19);
__builtin_memmove((R+24),(R+4),4);
}
B4bab1b:{NFSU2_TR(0x4bab1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bab1f:{NFSU2_TR(0x4bab1f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bab20:{NFSU2_TR(0x4bab20);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bab24:{NFSU2_TR(0x4bab24);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bab25:{NFSU2_TR(0x4bab25);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bab26:{NFSU2_TR(0x4bab26);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bab2a:{NFSU2_TR(0x4bab2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bab2b:{NFSU2_TR(0x4bab2b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bab2c:{NFSU2_TR(0x4bab2c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bab2d:{NFSU2_TR(0x4bab2d);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bab2f:{NFSU2_TR(0x4bab2f);
__builtin_memmove((R+4),(R+24),4);
}
B4bab31:{NFSU2_TR(0x4bab31);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bab35:{NFSU2_TR(0x4bab35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bab3aull));
TAIL_STATIC(0x51e9e0u,51e);
}
B4bab3a:L4bab3a:{c.instructions+=4;NFSU2_TR(0x4bab3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bab3c:{NFSU2_TR(0x4bab3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bab44:{NFSU2_TR(0x4bab44);
u8 U[4];
w4(U+0,u32(0x794b28ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4bab4a:{NFSU2_TR(0x4bab4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bab51;}}
}
B4bab4c:L4bab4c:{c.instructions+=1;NFSU2_TR(0x4bab4c);
w4(R+28,u32(0x783fe5ull));
}
B4bab51:L4bab51:{c.instructions+=5;NFSU2_TR(0x4bab51);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bab56:{NFSU2_TR(0x4bab56);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4bab59:{NFSU2_TR(0x4bab59);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bab5a:{NFSU2_TR(0x4bab5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bab5b:{NFSU2_TR(0x4bab5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bab60ull));
TAIL_STATIC(0x43dc00u,43d);
}
B4bab60:L4bab60:{c.instructions+=8;NFSU2_TR(0x4bab60);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bab64:{NFSU2_TR(0x4bab64);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4bab67:{NFSU2_TR(0x4bab67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bab68:{NFSU2_TR(0x4bab68);
__builtin_memmove((R+0),(R+24),4);
}
B4bab6a:{NFSU2_TR(0x4bab6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bab6b:{NFSU2_TR(0x4bab6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bab72:{NFSU2_TR(0x4bab72);
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
B4bab75:{NFSU2_TR(0x4bab75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bab80:L4bab80:{c.instructions+=6;NFSU2_TR(0x4bab80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bab81:{NFSU2_TR(0x4bab81);
__builtin_memmove((R+24),(R+4),4);
}
B4bab83:{NFSU2_TR(0x4bab83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bab86:{NFSU2_TR(0x4bab86);
u8 U[4];
w4(U+0,u32(0x6b6538a1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bab8b:{NFSU2_TR(0x4bab8b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bab8c:{NFSU2_TR(0x4bab8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bab91ull));
TAIL_STATIC(0x50c900u,50c);
}
B4bab91:L4bab91:{c.instructions+=3;NFSU2_TR(0x4bab91);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bab94:{NFSU2_TR(0x4bab94);
w4(R+4,u32(0x850080ull));
}
B4bab99:{NFSU2_TR(0x4bab99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bab9eull));
TAIL_STATIC(0x5031d0u,503);
}
B4bab9e:L4bab9e:{c.instructions+=2;NFSU2_TR(0x4bab9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bab9f:{NFSU2_TR(0x4bab9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4baba4ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B4baba4:L4baba4:{c.instructions+=3;NFSU2_TR(0x4baba4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4baba7:{NFSU2_TR(0x4baba7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4baba9:{NFSU2_TR(0x4baba9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4babbe;}}
}
B4babab:L4babab:{c.instructions+=4;NFSU2_TR(0x4babab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4babae:{NFSU2_TR(0x4babae);
u8 U[4];
w4(U+0,u32(0xbb298a80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4babb3:{NFSU2_TR(0x4babb3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4babb4:{NFSU2_TR(0x4babb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4babb9ull));
TAIL_STATIC(0x50c900u,50c);
}
B4babb9:L4babb9:{c.instructions+=3;NFSU2_TR(0x4babb9);
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
B4babbc:{NFSU2_TR(0x4babbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4babbd:{NFSU2_TR(0x4babbd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4babbe:L4babbe:{c.instructions+=3;NFSU2_TR(0x4babbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4babc1:{NFSU2_TR(0x4babc1);
w4(R+4,u32(0x850080ull));
}
B4babc6:{NFSU2_TR(0x4babc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4babcbull));
TAIL_STATIC(0x5031d0u,503);
}
B4babcb:L4babcb:{c.instructions+=3;NFSU2_TR(0x4babcb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4babcc:{NFSU2_TR(0x4babcc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4babcd:{NFSU2_TR(0x4babcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4babd2ull));
TAIL_STATIC(0x537be0u,537);
}
B4babd2:L4babd2:{c.instructions+=3;NFSU2_TR(0x4babd2);
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
B4babd5:{NFSU2_TR(0x4babd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4babd6:{NFSU2_TR(0x4babd6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4babe0:L4babe0:{c.instructions+=27;NFSU2_TR(0x4babe0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4babe2:{NFSU2_TR(0x4babe2);
u8 U[4];
w4(U+0,u32(0x773818ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4babe7:{NFSU2_TR(0x4babe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4babed:{NFSU2_TR(0x4babed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4babee:{NFSU2_TR(0x4babee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4babf5:{NFSU2_TR(0x4babf5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4babf6:{NFSU2_TR(0x4babf6);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4babfa:{NFSU2_TR(0x4babfa);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4babfe:{NFSU2_TR(0x4babfe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4babff:{NFSU2_TR(0x4babff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bac00:{NFSU2_TR(0x4bac00);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4bac04:{NFSU2_TR(0x4bac04);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bac05:{NFSU2_TR(0x4bac05);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bac09:{NFSU2_TR(0x4bac09);
__builtin_memmove((R+24),(R+4),4);
}
B4bac0b:{NFSU2_TR(0x4bac0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bac0f:{NFSU2_TR(0x4bac0f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bac10:{NFSU2_TR(0x4bac10);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bac14:{NFSU2_TR(0x4bac14);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bac15:{NFSU2_TR(0x4bac15);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bac16:{NFSU2_TR(0x4bac16);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bac1a:{NFSU2_TR(0x4bac1a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bac1b:{NFSU2_TR(0x4bac1b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bac1c:{NFSU2_TR(0x4bac1c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bac1d:{NFSU2_TR(0x4bac1d);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bac1f:{NFSU2_TR(0x4bac1f);
__builtin_memmove((R+4),(R+24),4);
}
B4bac21:{NFSU2_TR(0x4bac21);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bac25:{NFSU2_TR(0x4bac25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bac2aull));
TAIL_STATIC(0x51e9e0u,51e);
}
B4bac2a:L4bac2a:{c.instructions+=4;NFSU2_TR(0x4bac2a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bac2c:{NFSU2_TR(0x4bac2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bac34:{NFSU2_TR(0x4bac34);
u8 U[4];
w4(U+0,u32(0x794b68ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4bac3a:{NFSU2_TR(0x4bac3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bac41;}}
}
B4bac3c:L4bac3c:{c.instructions+=1;NFSU2_TR(0x4bac3c);
w4(R+28,u32(0x783fe5ull));
}
B4bac41:L4bac41:{c.instructions+=5;NFSU2_TR(0x4bac41);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bac46:{NFSU2_TR(0x4bac46);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4bac49:{NFSU2_TR(0x4bac49);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bac4a:{NFSU2_TR(0x4bac4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bac4b:{NFSU2_TR(0x4bac4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bac50ull));
TAIL_STATIC(0x43dc00u,43d);
}
B4bac50:L4bac50:{c.instructions+=8;NFSU2_TR(0x4bac50);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bac54:{NFSU2_TR(0x4bac54);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4bac57:{NFSU2_TR(0x4bac57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bac58:{NFSU2_TR(0x4bac58);
__builtin_memmove((R+0),(R+24),4);
}
B4bac5a:{NFSU2_TR(0x4bac5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bac5b:{NFSU2_TR(0x4bac5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bac62:{NFSU2_TR(0x4bac62);
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
B4bac65:{NFSU2_TR(0x4bac65);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bac70:L4bac70:{c.instructions+=6;NFSU2_TR(0x4bac70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bac71:{NFSU2_TR(0x4bac71);
__builtin_memmove((R+24),(R+4),4);
}
B4bac73:{NFSU2_TR(0x4bac73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bac76:{NFSU2_TR(0x4bac76);
u8 U[4];
w4(U+0,u32(0xb34ab032ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bac7b:{NFSU2_TR(0x4bac7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bac7c:{NFSU2_TR(0x4bac7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bac81ull));
TAIL_STATIC(0x50c900u,50c);
}
B4bac81:L4bac81:{c.instructions+=3;NFSU2_TR(0x4bac81);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bac84:{NFSU2_TR(0x4bac84);
w4(R+4,u32(0x850080ull));
}
B4bac89:{NFSU2_TR(0x4bac89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bac8eull));
TAIL_STATIC(0x503210u,503);
}
B4bac8e:L4bac8e:{c.instructions+=2;NFSU2_TR(0x4bac8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bac8f:{NFSU2_TR(0x4bac8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bac94ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B4bac94:L4bac94:{c.instructions+=3;NFSU2_TR(0x4bac94);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bac97:{NFSU2_TR(0x4bac97);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bac99:{NFSU2_TR(0x4bac99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bacae;}}
}
B4bac9b:L4bac9b:{c.instructions+=4;NFSU2_TR(0x4bac9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bac9e:{NFSU2_TR(0x4bac9e);
u8 U[4];
w4(U+0,u32(0xbb298a80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4baca3:{NFSU2_TR(0x4baca3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4baca4:{NFSU2_TR(0x4baca4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4baca9ull));
TAIL_STATIC(0x50c900u,50c);
}
B4baca9:L4baca9:{c.instructions+=3;NFSU2_TR(0x4baca9);
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
B4bacac:{NFSU2_TR(0x4bacac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bacad:{NFSU2_TR(0x4bacad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bacae:L4bacae:{c.instructions+=4;NFSU2_TR(0x4bacae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bacb1:{NFSU2_TR(0x4bacb1);
u8 U[4];
w4(U+0,u32(0x7912a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bacb6:{NFSU2_TR(0x4bacb6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bacb7:{NFSU2_TR(0x4bacb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bacbcull));
TAIL_STATIC(0x537be0u,537);
}
B4bacbc:L4bacbc:{c.instructions+=3;NFSU2_TR(0x4bacbc);
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
B4bacbf:{NFSU2_TR(0x4bacbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bacc0:{NFSU2_TR(0x4bacc0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bacd0:L4bacd0:{c.instructions+=2;NFSU2_TR(0x4bacd0);
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
B4bacd8:{NFSU2_TR(0x4bacd8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bad4e;}}
}
B4bacda:L4bacda:{c.instructions+=2;NFSU2_TR(0x4bacda);
w4(R+4,u32(0x850080ull));
}
B4bacdf:{NFSU2_TR(0x4bacdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bace4ull));
TAIL_STATIC(0x5031d0u,503);
}
B4bace4:L4bace4:{c.instructions+=2;NFSU2_TR(0x4bace4);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B4bace7:{NFSU2_TR(0x4bace7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bad12;}}
}
B4bace9:L4bace9:{c.instructions+=2;NFSU2_TR(0x4bace9);
u8 U[4];
w4(U+0,u32(0x5dafd047ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bacee:{NFSU2_TR(0x4bacee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bacf3ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4bacf3:L4bacf3:{c.instructions+=8;NFSU2_TR(0x4bacf3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bacf4:{NFSU2_TR(0x4bacf4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bacf8:{NFSU2_TR(0x4bacf8);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bacfa:{NFSU2_TR(0x4bacfa);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bacfc:{NFSU2_TR(0x4bacfc);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bad01:{NFSU2_TR(0x4bad01);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bad06:{NFSU2_TR(0x4bad06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bad07:{NFSU2_TR(0x4bad07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bad0cull));
TAIL_STATIC(0x558540u,558);
}
B4bad0c:L4bad0c:{c.instructions+=2;NFSU2_TR(0x4bad0c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bad0f:{NFSU2_TR(0x4bad0f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bad12:L4bad12:{c.instructions+=5;NFSU2_TR(0x4bad12);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bad14:{NFSU2_TR(0x4bad14);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bad16:{NFSU2_TR(0x4bad16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bad17:{NFSU2_TR(0x4bad17);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bad19:{NFSU2_TR(0x4bad19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bad1eull));
TAIL_STATIC(0x58b940u,58b);
}
B4bad1e:L4bad1e:{c.instructions+=3;NFSU2_TR(0x4bad1e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bad21:{NFSU2_TR(0x4bad21);
__builtin_memmove((R+4),(R+0),4);
}
B4bad23:{NFSU2_TR(0x4bad23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bad28ull));
TAIL_STATIC(0x587230u,587);
}
B4bad28:L4bad28:{c.instructions+=2;NFSU2_TR(0x4bad28);
u8 U[4];
w4(U+0,u32(0x8aa2aa13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bad2d:{NFSU2_TR(0x4bad2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bad32ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4bad32:L4bad32:{c.instructions+=8;NFSU2_TR(0x4bad32);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bad36:{NFSU2_TR(0x4bad36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bad37:{NFSU2_TR(0x4bad37);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bad39:{NFSU2_TR(0x4bad39);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bad3b:{NFSU2_TR(0x4bad3b);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bad40:{NFSU2_TR(0x4bad40);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bad45:{NFSU2_TR(0x4bad45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bad46:{NFSU2_TR(0x4bad46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bad4bull));
TAIL_STATIC(0x558540u,558);
}
B4bad4b:L4bad4b:{c.instructions+=1;NFSU2_TR(0x4bad4b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bad4e:L4bad4e:{c.instructions+=1;NFSU2_TR(0x4bad4e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bad60:L4bad60:{c.instructions+=4;NFSU2_TR(0x4bad60);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bad63:{NFSU2_TR(0x4bad63);
u8 U[4];
w4(U+0,u32(0xadbc52f2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bad68:{NFSU2_TR(0x4bad68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bad69:{NFSU2_TR(0x4bad69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bad6eull));
TAIL_STATIC(0x50c900u,50c);
}
B4bad6e:L4bad6e:{c.instructions+=2;NFSU2_TR(0x4bad6e);
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
B4bad71:{NFSU2_TR(0x4bad71);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bad80:L4bad80:{c.instructions+=2;NFSU2_TR(0x4bad80);
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
B4bad88:{NFSU2_TR(0x4bad88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bada3;}}
}
B4bad8a:L4bad8a:{c.instructions+=6;NFSU2_TR(0x4bad8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bad8e:{NFSU2_TR(0x4bad8e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bad90:{NFSU2_TR(0x4bad90);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bad95:{NFSU2_TR(0x4bad95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bad96:{NFSU2_TR(0x4bad96);
u8 U[4];
w4(U+0,u32(0x794c28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bad9b:{NFSU2_TR(0x4bad9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bada0ull));
TAIL_STATIC(0x555eb0u,555);
}
B4bada0:L4bada0:{c.instructions+=1;NFSU2_TR(0x4bada0);
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
B4bada3:L4bada3:{c.instructions+=1;NFSU2_TR(0x4bada3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4badb0:L4badb0:{c.instructions+=4;NFSU2_TR(0x4badb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4badb3:{NFSU2_TR(0x4badb3);
u8 U[4];
w4(U+0,u32(0x3cd7c4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4badb8:{NFSU2_TR(0x4badb8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4badb9:{NFSU2_TR(0x4badb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4badbeull));
TAIL_STATIC(0x50c900u,50c);
}
B4badbe:L4badbe:{c.instructions+=2;NFSU2_TR(0x4badbe);
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
B4badc1:{NFSU2_TR(0x4badc1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4badd0:L4badd0:{c.instructions+=12;NFSU2_TR(0x4badd0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4badd2:{NFSU2_TR(0x4badd2);
u8 U[4];
w4(U+0,u32(0x773880ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4badd7:{NFSU2_TR(0x4badd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4baddd:{NFSU2_TR(0x4baddd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4badde:{NFSU2_TR(0x4badde);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bade5:{NFSU2_TR(0x4bade5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bade6:{NFSU2_TR(0x4bade6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bade7:{NFSU2_TR(0x4bade7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bade8:{NFSU2_TR(0x4bade8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bade9:{NFSU2_TR(0x4bade9);
u8 U[4];
w4(U+0,u32(0x254ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4badee:{NFSU2_TR(0x4badee);
__builtin_memmove((R+24),(R+4),4);
}
B4badf0:{NFSU2_TR(0x4badf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4badf5ull));
TAIL_STATIC(0x575620u,575);
}
B4badf5:L4badf5:{c.instructions+=6;NFSU2_TR(0x4badf5);
__builtin_memmove((R+28),(R+0),4);
}
B4badf7:{NFSU2_TR(0x4badf7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4badfa:{NFSU2_TR(0x4badfa);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4badfe:{NFSU2_TR(0x4badfe);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bae00:{NFSU2_TR(0x4bae00);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bae08:{NFSU2_TR(0x4bae08);
if(r1(R+518)){{goto L4bae3e;}}
}
B4bae0a:L4bae0a:{c.instructions+=4;NFSU2_TR(0x4bae0a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bae0c:{NFSU2_TR(0x4bae0c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bae0e:{NFSU2_TR(0x4bae0e);
w4(R+4,u32(0x850080ull));
}
B4bae13:{NFSU2_TR(0x4bae13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bae18ull));
TAIL_STATIC(0x5031d0u,503);
}
B4bae18:L4bae18:{c.instructions+=11;NFSU2_TR(0x4bae18);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bae19:{NFSU2_TR(0x4bae19);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4bae1f:{NFSU2_TR(0x4bae1f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bae20:{NFSU2_TR(0x4bae20);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4bae26:{NFSU2_TR(0x4bae26);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bae27:{NFSU2_TR(0x4bae27);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4bae2d:{NFSU2_TR(0x4bae2d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bae2e:{NFSU2_TR(0x4bae2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4bae34:{NFSU2_TR(0x4bae34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bae35:{NFSU2_TR(0x4bae35);
__builtin_memmove((R+4),(R+28),4);
}
B4bae37:{NFSU2_TR(0x4bae37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bae3cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4baaf0u);}goto L4baaf0;}
}
B4bae3c:L4bae3c:{c.instructions+=1;NFSU2_TR(0x4bae3c);
{goto L4bae40;}
}
B4bae3e:L4bae3e:{c.instructions+=1;NFSU2_TR(0x4bae3e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4bae40:L4bae40:{c.instructions+=5;NFSU2_TR(0x4bae40);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B4bae43:{NFSU2_TR(0x4bae43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bae44:{NFSU2_TR(0x4bae44);
__builtin_memmove((R+4),(R+24),4);
}
B4bae46:{NFSU2_TR(0x4bae46);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bae4a:{NFSU2_TR(0x4bae4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bae4full));
TAIL_STATIC(0x54f820u,54f);
}
B4bae4f:L4bae4f:{c.instructions+=3;NFSU2_TR(0x4bae4f);
u8 U[4];
w4(U+0,u32(0x254ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bae54:{NFSU2_TR(0x4bae54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bae5a:{NFSU2_TR(0x4bae5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bae5full));
TAIL_STATIC(0x575620u,575);
}
B4bae5f:L4bae5f:{c.instructions+=6;NFSU2_TR(0x4bae5f);
__builtin_memmove((R+28),(R+0),4);
}
B4bae61:{NFSU2_TR(0x4bae61);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bae64:{NFSU2_TR(0x4bae64);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bae68:{NFSU2_TR(0x4bae68);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bae6a:{NFSU2_TR(0x4bae6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bae72:{NFSU2_TR(0x4bae72);
if(r1(R+518)){{goto L4baea8;}}
}
B4bae74:L4bae74:{c.instructions+=4;NFSU2_TR(0x4bae74);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bae76:{NFSU2_TR(0x4bae76);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bae78:{NFSU2_TR(0x4bae78);
w4(R+4,u32(0x850080ull));
}
B4bae7d:{NFSU2_TR(0x4bae7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bae82ull));
TAIL_STATIC(0x503210u,503);
}
B4bae82:L4bae82:{c.instructions+=11;NFSU2_TR(0x4bae82);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bae83:{NFSU2_TR(0x4bae83);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4bae89:{NFSU2_TR(0x4bae89);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bae8a:{NFSU2_TR(0x4bae8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4bae90:{NFSU2_TR(0x4bae90);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bae91:{NFSU2_TR(0x4bae91);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4bae97:{NFSU2_TR(0x4bae97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bae98:{NFSU2_TR(0x4bae98);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4bae9e:{NFSU2_TR(0x4bae9e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bae9f:{NFSU2_TR(0x4bae9f);
__builtin_memmove((R+4),(R+28),4);
}
B4baea1:{NFSU2_TR(0x4baea1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4baea6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4babe0u);}goto L4babe0;}
}
B4baea6:L4baea6:{c.instructions+=1;NFSU2_TR(0x4baea6);
{goto L4baeaa;}
}
B4baea8:L4baea8:{c.instructions+=1;NFSU2_TR(0x4baea8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4baeaa:L4baeaa:{c.instructions+=4;NFSU2_TR(0x4baeaa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4baeab:{NFSU2_TR(0x4baeab);
__builtin_memmove((R+4),(R+24),4);
}
B4baead:{NFSU2_TR(0x4baead);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4baeb1:{NFSU2_TR(0x4baeb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4baeb6ull));
TAIL_STATIC(0x54f820u,54f);
}
B4baeb6:L4baeb6:{c.instructions+=3;NFSU2_TR(0x4baeb6);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4baeb8:{NFSU2_TR(0x4baeb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4baebe:{NFSU2_TR(0x4baebe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4baec3ull));
TAIL_STATIC(0x575620u,575);
}
B4baec3:L4baec3:{c.instructions+=6;NFSU2_TR(0x4baec3);
__builtin_memmove((R+28),(R+0),4);
}
B4baec5:{NFSU2_TR(0x4baec5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4baec8:{NFSU2_TR(0x4baec8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4baecc:{NFSU2_TR(0x4baecc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4baece:{NFSU2_TR(0x4baece);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4baed6:{NFSU2_TR(0x4baed6);
if(r1(R+518)){{goto L4baef7;}}
}
B4baed8:L4baed8:{c.instructions+=7;NFSU2_TR(0x4baed8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4baeda:{NFSU2_TR(0x4baeda);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4baee0:{NFSU2_TR(0x4baee0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4baee1:{NFSU2_TR(0x4baee1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4baee7:{NFSU2_TR(0x4baee7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4baee8:{NFSU2_TR(0x4baee8);
__builtin_memmove((R+4),(R+28),4);
}
B4baeea:{NFSU2_TR(0x4baeea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4baeefull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4baeef:L4baeef:{c.instructions+=2;NFSU2_TR(0x4baeef);
u8 U[4];
w4(U+0,u32(0x794ba8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4baef5:{NFSU2_TR(0x4baef5);
{goto L4baef9;}
}
B4baef7:L4baef7:{c.instructions+=1;NFSU2_TR(0x4baef7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4baef9:L4baef9:{c.instructions+=4;NFSU2_TR(0x4baef9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4baefa:{NFSU2_TR(0x4baefa);
__builtin_memmove((R+4),(R+24),4);
}
B4baefc:{NFSU2_TR(0x4baefc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4baf00:{NFSU2_TR(0x4baf00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4baf05ull));
TAIL_STATIC(0x54ee40u,54e);
}
B4baf05:L4baf05:{c.instructions+=2;NFSU2_TR(0x4baf05);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4baf07:{NFSU2_TR(0x4baf07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4baf0cull));
TAIL_STATIC(0x575620u,575);
}
B4baf0c:L4baf0c:{c.instructions+=6;NFSU2_TR(0x4baf0c);
__builtin_memmove((R+28),(R+0),4);
}
B4baf0e:{NFSU2_TR(0x4baf0e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4baf11:{NFSU2_TR(0x4baf11);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4baf15:{NFSU2_TR(0x4baf15);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4baf17:{NFSU2_TR(0x4baf17);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4baf1f:{NFSU2_TR(0x4baf1f);
if(r1(R+518)){{goto L4baf40;}}
}
B4baf21:L4baf21:{c.instructions+=7;NFSU2_TR(0x4baf21);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4baf23:{NFSU2_TR(0x4baf23);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4baf29:{NFSU2_TR(0x4baf29);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4baf2a:{NFSU2_TR(0x4baf2a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4baf30:{NFSU2_TR(0x4baf30);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4baf31:{NFSU2_TR(0x4baf31);
__builtin_memmove((R+4),(R+28),4);
}
B4baf33:{NFSU2_TR(0x4baf33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4baf38ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4baf38:L4baf38:{c.instructions+=2;NFSU2_TR(0x4baf38);
u8 U[4];
w4(U+0,u32(0x794be8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4baf3e:{NFSU2_TR(0x4baf3e);
{goto L4baf42;}
}
B4baf40:L4baf40:{c.instructions+=1;NFSU2_TR(0x4baf40);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4baf42:L4baf42:{c.instructions+=4;NFSU2_TR(0x4baf42);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4baf43:{NFSU2_TR(0x4baf43);
__builtin_memmove((R+4),(R+24),4);
}
B4baf45:{NFSU2_TR(0x4baf45);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4baf49:{NFSU2_TR(0x4baf49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4baf4eull));
TAIL_STATIC(0x54ee40u,54e);
}
B4baf4e:L4baf4e:{c.instructions+=4;NFSU2_TR(0x4baf4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4baf54:{NFSU2_TR(0x4baf54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4baf55:{NFSU2_TR(0x4baf55);
__builtin_memmove((R+4),(R+24),4);
}
B4baf57:{NFSU2_TR(0x4baf57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4baf5cull));
TAIL_STATIC(0x51fe70u,51f);
}
B4baf5c:L4baf5c:{c.instructions+=3;NFSU2_TR(0x4baf5c);
u8 U[4];
w4(U+0,u32(0xb32f2b49ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4baf61:{NFSU2_TR(0x4baf61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4baf67:{NFSU2_TR(0x4baf67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4baf6cull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4baf6c:L4baf6c:{c.instructions+=4;NFSU2_TR(0x4baf6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4baf72:{NFSU2_TR(0x4baf72);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4baf75:{NFSU2_TR(0x4baf75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4baf76:{NFSU2_TR(0x4baf76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4baf7bull));
TAIL_STATIC(0x50d7e0u,50d);
}
B4baf7b:L4baf7b:{c.instructions+=4;NFSU2_TR(0x4baf7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4baf81:{NFSU2_TR(0x4baf81);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4baf82:{NFSU2_TR(0x4baf82);
__builtin_memmove((R+4),(R+24),4);
}
B4baf84:{NFSU2_TR(0x4baf84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4baf89ull));
TAIL_STATIC(0x51fe70u,51f);
}
B4baf89:L4baf89:{c.instructions+=3;NFSU2_TR(0x4baf89);
u8 U[4];
w4(U+0,u32(0x332c0b6full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4baf8e:{NFSU2_TR(0x4baf8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4baf94:{NFSU2_TR(0x4baf94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4baf99ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4baf99:L4baf99:{c.instructions+=4;NFSU2_TR(0x4baf99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4baf9f:{NFSU2_TR(0x4baf9f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bafa2:{NFSU2_TR(0x4bafa2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bafa3:{NFSU2_TR(0x4bafa3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bafa8ull));
TAIL_STATIC(0x50d7e0u,50d);
}
B4bafa8:L4bafa8:{c.instructions+=3;NFSU2_TR(0x4bafa8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bafaa:{NFSU2_TR(0x4bafaa);
__builtin_memmove((R+4),(R+24),4);
}
B4bafac:{NFSU2_TR(0x4bafac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bafb1ull));
TAIL_STATIC(0x539650u,539);
}
B4bafb1:L4bafb1:{c.instructions+=7;NFSU2_TR(0x4bafb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bafb5:{NFSU2_TR(0x4bafb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bafb6:{NFSU2_TR(0x4bafb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bafb7:{NFSU2_TR(0x4bafb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bafb8:{NFSU2_TR(0x4bafb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bafbf:{NFSU2_TR(0x4bafbf);
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
B4bafc2:{NFSU2_TR(0x4bafc2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bafd0:L4bafd0:{c.instructions+=12;NFSU2_TR(0x4bafd0);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x24ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bafd3:{NFSU2_TR(0x4bafd3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bafd4:{NFSU2_TR(0x4bafd4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bafd5:{NFSU2_TR(0x4bafd5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bafd6:{NFSU2_TR(0x4bafd6);
__builtin_memmove((R+24),(R+4),4);
}
B4bafd8:{NFSU2_TR(0x4bafd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4bafdb:{NFSU2_TR(0x4bafdb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bafdc:{NFSU2_TR(0x4bafdc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bafe4:{NFSU2_TR(0x4bafe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bafe7:{NFSU2_TR(0x4bafe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bafed:{NFSU2_TR(0x4bafed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bafee:{NFSU2_TR(0x4bafee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4baff3ull));
TAIL_STATIC(0x584b50u,584);
}
B4baff3:L4baff3:{c.instructions+=4;NFSU2_TR(0x4baff3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4baff7:{NFSU2_TR(0x4baff7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4baff8:{NFSU2_TR(0x4baff8);
u8 U[4];
w4(U+0,u32(0x794cb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4baffd:{NFSU2_TR(0x4baffd);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
TAIL_STATIC(0x4bb001u,4bb);
}
XIT:NFSU2_TR_EXIT(0x4ba,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
