#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_5b9(u8* __restrict R,Cpu& c);
u32 body_5bb(u8* __restrict R,Cpu& c);
u32 body_5cf(u8* __restrict R,Cpu& c);
u32 body_63c(u8* __restrict R,Cpu& c);
u32 body_63d(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5ba,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5ba,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 page_5ba(Cpu& c){return body_5ba(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5ba(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5ba000:goto L5ba000;
case 0x5ba001:c.instructions+=4;goto B5ba001;
case 0x5ba002:c.instructions+=3;goto B5ba002;
case 0x5ba004:c.instructions+=2;goto B5ba004;
case 0x5ba005:c.instructions+=1;goto B5ba005;
case 0x5ba00a:goto L5ba00a;
case 0x5ba00b:c.instructions+=1;goto B5ba00b;
case 0x5ba010:goto L5ba010;
case 0x5ba011:c.instructions+=1;goto B5ba011;
case 0x5ba016:goto L5ba016;
case 0x5ba019:c.instructions+=6;goto B5ba019;
case 0x5ba01a:c.instructions+=5;goto B5ba01a;
case 0x5ba01b:c.instructions+=4;goto B5ba01b;
case 0x5ba01c:c.instructions+=3;goto B5ba01c;
case 0x5ba01d:c.instructions+=2;goto B5ba01d;
case 0x5ba023:c.instructions+=1;goto B5ba023;
case 0x5ba030:goto L5ba030;
case 0x5ba034:c.instructions+=2;goto B5ba034;
case 0x5ba036:c.instructions+=1;goto B5ba036;
case 0x5ba038:goto L5ba038;
case 0x5ba03d:c.instructions+=1;goto B5ba03d;
case 0x5ba040:goto L5ba040;
case 0x5ba042:c.instructions+=1;goto B5ba042;
case 0x5ba044:goto L5ba044;
case 0x5ba047:c.instructions+=3;goto B5ba047;
case 0x5ba04b:c.instructions+=2;goto B5ba04b;
case 0x5ba04e:c.instructions+=1;goto B5ba04e;
case 0x5ba051:goto L5ba051;
case 0x5ba053:c.instructions+=1;goto B5ba053;
case 0x5ba060:goto L5ba060;
case 0x5ba065:c.instructions+=4;goto B5ba065;
case 0x5ba066:c.instructions+=3;goto B5ba066;
case 0x5ba068:c.instructions+=2;goto B5ba068;
case 0x5ba06a:c.instructions+=1;goto B5ba06a;
case 0x5ba070:goto L5ba070;
case 0x5ba076:c.instructions+=12;goto B5ba076;
case 0x5ba07b:c.instructions+=11;goto B5ba07b;
case 0x5ba07d:c.instructions+=10;goto B5ba07d;
case 0x5ba07e:c.instructions+=9;goto B5ba07e;
case 0x5ba083:c.instructions+=8;goto B5ba083;
case 0x5ba084:c.instructions+=7;goto B5ba084;
case 0x5ba085:c.instructions+=6;goto B5ba085;
case 0x5ba087:c.instructions+=5;goto B5ba087;
case 0x5ba089:c.instructions+=4;goto B5ba089;
case 0x5ba08e:c.instructions+=3;goto B5ba08e;
case 0x5ba093:c.instructions+=2;goto B5ba093;
case 0x5ba094:c.instructions+=1;goto B5ba094;
case 0x5ba097:goto L5ba097;
case 0x5ba099:c.instructions+=1;goto B5ba099;
case 0x5ba09f:goto L5ba09f;
case 0x5ba0a4:c.instructions+=5;goto B5ba0a4;
case 0x5ba0a6:c.instructions+=4;goto B5ba0a6;
case 0x5ba0ab:c.instructions+=3;goto B5ba0ab;
case 0x5ba0ac:c.instructions+=2;goto B5ba0ac;
case 0x5ba0ad:c.instructions+=1;goto B5ba0ad;
case 0x5ba0b0:goto L5ba0b0;
case 0x5ba0b2:c.instructions+=1;goto B5ba0b2;
case 0x5ba0b4:goto L5ba0b4;
case 0x5ba0ba:c.instructions+=12;goto B5ba0ba;
case 0x5ba0bf:c.instructions+=11;goto B5ba0bf;
case 0x5ba0c1:c.instructions+=10;goto B5ba0c1;
case 0x5ba0c2:c.instructions+=9;goto B5ba0c2;
case 0x5ba0c7:c.instructions+=8;goto B5ba0c7;
case 0x5ba0c8:c.instructions+=7;goto B5ba0c8;
case 0x5ba0c9:c.instructions+=6;goto B5ba0c9;
case 0x5ba0ca:c.instructions+=5;goto B5ba0ca;
case 0x5ba0cb:c.instructions+=4;goto B5ba0cb;
case 0x5ba0d0:c.instructions+=3;goto B5ba0d0;
case 0x5ba0d5:c.instructions+=2;goto B5ba0d5;
case 0x5ba0d6:c.instructions+=1;goto B5ba0d6;
case 0x5ba0d9:goto L5ba0d9;
case 0x5ba0db:c.instructions+=1;goto B5ba0db;
case 0x5ba0dd:goto L5ba0dd;
case 0x5ba0e4:c.instructions+=1;goto B5ba0e4;
case 0x5ba0e6:goto L5ba0e6;
case 0x5ba0ec:c.instructions+=12;goto B5ba0ec;
case 0x5ba0f1:c.instructions+=11;goto B5ba0f1;
case 0x5ba0f3:c.instructions+=10;goto B5ba0f3;
case 0x5ba0f4:c.instructions+=9;goto B5ba0f4;
case 0x5ba0f9:c.instructions+=8;goto B5ba0f9;
case 0x5ba0fa:c.instructions+=7;goto B5ba0fa;
case 0x5ba0fb:c.instructions+=6;goto B5ba0fb;
case 0x5ba0fd:c.instructions+=5;goto B5ba0fd;
case 0x5ba0ff:c.instructions+=4;goto B5ba0ff;
case 0x5ba104:c.instructions+=3;goto B5ba104;
case 0x5ba109:c.instructions+=2;goto B5ba109;
case 0x5ba10a:c.instructions+=1;goto B5ba10a;
case 0x5ba10d:goto L5ba10d;
case 0x5ba10f:c.instructions+=1;goto B5ba10f;
case 0x5ba111:goto L5ba111;
case 0x5ba116:c.instructions+=5;goto B5ba116;
case 0x5ba118:c.instructions+=4;goto B5ba118;
case 0x5ba11d:c.instructions+=3;goto B5ba11d;
case 0x5ba11e:c.instructions+=2;goto B5ba11e;
case 0x5ba11f:c.instructions+=1;goto B5ba11f;
case 0x5ba122:goto L5ba122;
case 0x5ba124:c.instructions+=1;goto B5ba124;
case 0x5ba126:goto L5ba126;
case 0x5ba12b:c.instructions+=4;goto B5ba12b;
case 0x5ba12d:c.instructions+=3;goto B5ba12d;
case 0x5ba133:c.instructions+=2;goto B5ba133;
case 0x5ba139:c.instructions+=1;goto B5ba139;
case 0x5ba13b:goto L5ba13b;
case 0x5ba13d:c.instructions+=2;goto B5ba13d;
case 0x5ba13e:c.instructions+=1;goto B5ba13e;
case 0x5ba141:goto L5ba141;
case 0x5ba147:goto L5ba147;
case 0x5ba14c:c.instructions+=2;goto B5ba14c;
case 0x5ba14e:c.instructions+=1;goto B5ba14e;
case 0x5ba150:goto L5ba150;
case 0x5ba152:c.instructions+=2;goto B5ba152;
case 0x5ba153:c.instructions+=1;goto B5ba153;
case 0x5ba156:goto L5ba156;
case 0x5ba15c:goto L5ba15c;
case 0x5ba161:c.instructions+=2;goto B5ba161;
case 0x5ba163:c.instructions+=1;goto B5ba163;
case 0x5ba165:goto L5ba165;
case 0x5ba167:c.instructions+=2;goto B5ba167;
case 0x5ba168:c.instructions+=1;goto B5ba168;
case 0x5ba16b:goto L5ba16b;
case 0x5ba171:goto L5ba171;
case 0x5ba176:c.instructions+=2;goto B5ba176;
case 0x5ba178:c.instructions+=1;goto B5ba178;
case 0x5ba17a:goto L5ba17a;
case 0x5ba17c:c.instructions+=2;goto B5ba17c;
case 0x5ba17d:c.instructions+=1;goto B5ba17d;
case 0x5ba180:goto L5ba180;
case 0x5ba186:goto L5ba186;
case 0x5ba18b:c.instructions+=2;goto B5ba18b;
case 0x5ba18d:c.instructions+=1;goto B5ba18d;
case 0x5ba18f:goto L5ba18f;
case 0x5ba191:c.instructions+=2;goto B5ba191;
case 0x5ba192:c.instructions+=1;goto B5ba192;
case 0x5ba195:goto L5ba195;
case 0x5ba19b:goto L5ba19b;
case 0x5ba19c:c.instructions+=1;goto B5ba19c;
case 0x5ba1a0:goto L5ba1a0;
case 0x5ba1a6:c.instructions+=14;goto B5ba1a6;
case 0x5ba1ab:c.instructions+=13;goto B5ba1ab;
case 0x5ba1ad:c.instructions+=12;goto B5ba1ad;
case 0x5ba1af:c.instructions+=11;goto B5ba1af;
case 0x5ba1b4:c.instructions+=10;goto B5ba1b4;
case 0x5ba1b6:c.instructions+=9;goto B5ba1b6;
case 0x5ba1b7:c.instructions+=8;goto B5ba1b7;
case 0x5ba1bd:c.instructions+=7;goto B5ba1bd;
case 0x5ba1bf:c.instructions+=6;goto B5ba1bf;
case 0x5ba1c1:c.instructions+=5;goto B5ba1c1;
case 0x5ba1c2:c.instructions+=4;goto B5ba1c2;
case 0x5ba1c8:c.instructions+=3;goto B5ba1c8;
case 0x5ba1c9:c.instructions+=2;goto B5ba1c9;
case 0x5ba1ca:c.instructions+=1;goto B5ba1ca;
case 0x5ba1cd:goto L5ba1cd;
case 0x5ba1d2:c.instructions+=5;goto B5ba1d2;
case 0x5ba1d4:c.instructions+=4;goto B5ba1d4;
case 0x5ba1d9:c.instructions+=3;goto B5ba1d9;
case 0x5ba1db:c.instructions+=2;goto B5ba1db;
case 0x5ba1dc:c.instructions+=1;goto B5ba1dc;
case 0x5ba1df:goto L5ba1df;
case 0x5ba1e5:c.instructions+=14;goto B5ba1e5;
case 0x5ba1ea:c.instructions+=13;goto B5ba1ea;
case 0x5ba1ec:c.instructions+=12;goto B5ba1ec;
case 0x5ba1ee:c.instructions+=11;goto B5ba1ee;
case 0x5ba1f3:c.instructions+=10;goto B5ba1f3;
case 0x5ba1f5:c.instructions+=9;goto B5ba1f5;
case 0x5ba1f7:c.instructions+=8;goto B5ba1f7;
case 0x5ba1f9:c.instructions+=7;goto B5ba1f9;
case 0x5ba1fa:c.instructions+=6;goto B5ba1fa;
case 0x5ba200:c.instructions+=5;goto B5ba200;
case 0x5ba201:c.instructions+=4;goto B5ba201;
case 0x5ba207:c.instructions+=3;goto B5ba207;
case 0x5ba208:c.instructions+=2;goto B5ba208;
case 0x5ba209:c.instructions+=1;goto B5ba209;
case 0x5ba20c:goto L5ba20c;
case 0x5ba210:goto L5ba210;
case 0x5ba211:c.instructions+=12;goto B5ba211;
case 0x5ba217:c.instructions+=11;goto B5ba217;
case 0x5ba218:c.instructions+=10;goto B5ba218;
case 0x5ba21e:c.instructions+=9;goto B5ba21e;
case 0x5ba21f:c.instructions+=8;goto B5ba21f;
case 0x5ba220:c.instructions+=7;goto B5ba220;
case 0x5ba226:c.instructions+=6;goto B5ba226;
case 0x5ba228:c.instructions+=5;goto B5ba228;
case 0x5ba229:c.instructions+=4;goto B5ba229;
case 0x5ba22f:c.instructions+=3;goto B5ba22f;
case 0x5ba233:c.instructions+=2;goto B5ba233;
case 0x5ba238:c.instructions+=1;goto B5ba238;
case 0x5ba240:goto L5ba240;
case 0x5ba242:c.instructions+=5;goto B5ba242;
case 0x5ba245:c.instructions+=4;goto B5ba245;
case 0x5ba24a:c.instructions+=3;goto B5ba24a;
case 0x5ba24d:c.instructions+=2;goto B5ba24d;
case 0x5ba24f:c.instructions+=1;goto B5ba24f;
case 0x5ba255:goto L5ba255;
case 0x5ba25c:goto L5ba25c;
case 0x5ba262:c.instructions+=5;goto B5ba262;
case 0x5ba265:c.instructions+=4;goto B5ba265;
case 0x5ba268:c.instructions+=3;goto B5ba268;
case 0x5ba26b:c.instructions+=2;goto B5ba26b;
case 0x5ba26e:c.instructions+=1;goto B5ba26e;
case 0x5ba273:goto L5ba273;
case 0x5ba276:c.instructions+=4;goto B5ba276;
case 0x5ba27d:c.instructions+=3;goto B5ba27d;
case 0x5ba280:c.instructions+=2;goto B5ba280;
case 0x5ba283:c.instructions+=1;goto B5ba283;
case 0x5ba288:goto L5ba288;
case 0x5ba28e:c.instructions+=6;goto B5ba28e;
case 0x5ba291:c.instructions+=5;goto B5ba291;
case 0x5ba297:c.instructions+=4;goto B5ba297;
case 0x5ba29e:c.instructions+=3;goto B5ba29e;
case 0x5ba2a5:c.instructions+=2;goto B5ba2a5;
case 0x5ba2ac:c.instructions+=1;goto B5ba2ac;
case 0x5ba2b1:goto L5ba2b1;
case 0x5ba2b7:c.instructions+=9;goto B5ba2b7;
case 0x5ba2ba:c.instructions+=8;goto B5ba2ba;
case 0x5ba2c0:c.instructions+=7;goto B5ba2c0;
case 0x5ba2c3:c.instructions+=6;goto B5ba2c3;
case 0x5ba2c9:c.instructions+=5;goto B5ba2c9;
case 0x5ba2cc:c.instructions+=4;goto B5ba2cc;
case 0x5ba2d2:c.instructions+=3;goto B5ba2d2;
case 0x5ba2d9:c.instructions+=2;goto B5ba2d9;
case 0x5ba2dc:c.instructions+=1;goto B5ba2dc;
case 0x5ba2e1:goto L5ba2e1;
case 0x5ba2e7:c.instructions+=4;goto B5ba2e7;
case 0x5ba2ea:c.instructions+=3;goto B5ba2ea;
case 0x5ba2f0:c.instructions+=2;goto B5ba2f0;
case 0x5ba2f7:c.instructions+=1;goto B5ba2f7;
case 0x5ba2f9:goto L5ba2f9;
case 0x5ba2ff:c.instructions+=4;goto B5ba2ff;
case 0x5ba302:c.instructions+=3;goto B5ba302;
case 0x5ba308:c.instructions+=2;goto B5ba308;
case 0x5ba30f:c.instructions+=1;goto B5ba30f;
case 0x5ba311:goto L5ba311;
case 0x5ba317:c.instructions+=4;goto B5ba317;
case 0x5ba31a:c.instructions+=3;goto B5ba31a;
case 0x5ba320:c.instructions+=2;goto B5ba320;
case 0x5ba327:c.instructions+=1;goto B5ba327;
case 0x5ba329:goto L5ba329;
case 0x5ba32f:c.instructions+=4;goto B5ba32f;
case 0x5ba332:c.instructions+=3;goto B5ba332;
case 0x5ba338:c.instructions+=2;goto B5ba338;
case 0x5ba33f:c.instructions+=1;goto B5ba33f;
case 0x5ba341:goto L5ba341;
case 0x5ba347:c.instructions+=4;goto B5ba347;
case 0x5ba34a:c.instructions+=3;goto B5ba34a;
case 0x5ba350:c.instructions+=2;goto B5ba350;
case 0x5ba357:c.instructions+=1;goto B5ba357;
case 0x5ba359:goto L5ba359;
case 0x5ba35f:c.instructions+=3;goto B5ba35f;
case 0x5ba362:c.instructions+=2;goto B5ba362;
case 0x5ba368:c.instructions+=1;goto B5ba368;
case 0x5ba36f:goto L5ba36f;
case 0x5ba372:c.instructions+=1;goto B5ba372;
case 0x5ba375:goto L5ba375;
case 0x5ba378:goto L5ba378;
case 0x5ba37b:goto L5ba37b;
case 0x5ba37f:c.instructions+=4;goto B5ba37f;
case 0x5ba380:c.instructions+=3;goto B5ba380;
case 0x5ba383:c.instructions+=2;goto B5ba383;
case 0x5ba387:c.instructions+=1;goto B5ba387;
case 0x5ba38d:goto L5ba38d;
case 0x5ba38e:c.instructions+=5;goto B5ba38e;
case 0x5ba38f:c.instructions+=4;goto B5ba38f;
case 0x5ba390:c.instructions+=3;goto B5ba390;
case 0x5ba391:c.instructions+=2;goto B5ba391;
case 0x5ba392:c.instructions+=1;goto B5ba392;
case 0x5ba3c0:goto L5ba3c0;
case 0x5ba3c3:c.instructions+=2;goto B5ba3c3;
case 0x5ba3c4:c.instructions+=1;goto B5ba3c4;
case 0x5ba3c9:goto L5ba3c9;
case 0x5ba3cd:c.instructions+=7;goto B5ba3cd;
case 0x5ba3d0:c.instructions+=6;goto B5ba3d0;
case 0x5ba3d5:c.instructions+=5;goto B5ba3d5;
case 0x5ba3d7:c.instructions+=4;goto B5ba3d7;
case 0x5ba3d8:c.instructions+=3;goto B5ba3d8;
case 0x5ba3da:c.instructions+=2;goto B5ba3da;
case 0x5ba3db:c.instructions+=1;goto B5ba3db;
case 0x5ba3e1:goto L5ba3e1;
case 0x5ba3e4:c.instructions+=5;goto B5ba3e4;
case 0x5ba3e9:c.instructions+=4;goto B5ba3e9;
case 0x5ba3eb:c.instructions+=3;goto B5ba3eb;
case 0x5ba3ec:c.instructions+=2;goto B5ba3ec;
case 0x5ba3ed:c.instructions+=1;goto B5ba3ed;
case 0x5ba3f3:goto L5ba3f3;
case 0x5ba3f7:c.instructions+=2;goto B5ba3f7;
case 0x5ba3f9:c.instructions+=1;goto B5ba3f9;
case 0x5ba3fb:goto L5ba3fb;
case 0x5ba3fe:c.instructions+=2;goto B5ba3fe;
case 0x5ba403:c.instructions+=1;goto B5ba403;
case 0x5ba405:goto L5ba405;
case 0x5ba407:goto L5ba407;
case 0x5ba409:c.instructions+=2;goto B5ba409;
case 0x5ba40c:c.instructions+=1;goto B5ba40c;
case 0x5ba40e:goto L5ba40e;
case 0x5ba411:c.instructions+=1;goto B5ba411;
case 0x5ba413:goto L5ba413;
case 0x5ba416:c.instructions+=1;goto B5ba416;
case 0x5ba418:goto L5ba418;
case 0x5ba41b:c.instructions+=1;goto B5ba41b;
case 0x5ba41d:goto L5ba41d;
case 0x5ba41f:c.instructions+=6;goto B5ba41f;
case 0x5ba422:c.instructions+=5;goto B5ba422;
case 0x5ba427:c.instructions+=4;goto B5ba427;
case 0x5ba429:c.instructions+=3;goto B5ba429;
case 0x5ba42e:c.instructions+=2;goto B5ba42e;
case 0x5ba42f:c.instructions+=1;goto B5ba42f;
case 0x5ba431:goto L5ba431;
case 0x5ba433:c.instructions+=1;goto B5ba433;
case 0x5ba435:goto L5ba435;
case 0x5ba437:c.instructions+=1;goto B5ba437;
case 0x5ba439:goto L5ba439;
case 0x5ba43e:c.instructions+=5;goto B5ba43e;
case 0x5ba440:c.instructions+=4;goto B5ba440;
case 0x5ba442:c.instructions+=3;goto B5ba442;
case 0x5ba447:c.instructions+=2;goto B5ba447;
case 0x5ba448:c.instructions+=1;goto B5ba448;
case 0x5ba44a:goto L5ba44a;
case 0x5ba44c:c.instructions+=3;goto B5ba44c;
case 0x5ba44e:c.instructions+=2;goto B5ba44e;
case 0x5ba44f:c.instructions+=1;goto B5ba44f;
case 0x5ba455:goto L5ba455;
case 0x5ba458:c.instructions+=13;goto B5ba458;
case 0x5ba45b:c.instructions+=12;goto B5ba45b;
case 0x5ba45f:c.instructions+=11;goto B5ba45f;
case 0x5ba463:c.instructions+=10;goto B5ba463;
case 0x5ba468:c.instructions+=9;goto B5ba468;
case 0x5ba46c:c.instructions+=8;goto B5ba46c;
case 0x5ba46d:c.instructions+=7;goto B5ba46d;
case 0x5ba475:c.instructions+=6;goto B5ba475;
case 0x5ba47d:c.instructions+=5;goto B5ba47d;
case 0x5ba485:c.instructions+=4;goto B5ba485;
case 0x5ba48d:c.instructions+=3;goto B5ba48d;
case 0x5ba48f:c.instructions+=2;goto B5ba48f;
case 0x5ba490:c.instructions+=1;goto B5ba490;
case 0x5ba496:goto L5ba496;
case 0x5ba49c:c.instructions+=4;goto B5ba49c;
case 0x5ba4a6:c.instructions+=3;goto B5ba4a6;
case 0x5ba4a7:c.instructions+=2;goto B5ba4a7;
case 0x5ba4aa:c.instructions+=1;goto B5ba4aa;
case 0x5ba4b0:goto L5ba4b0;
case 0x5ba4b1:c.instructions+=4;goto B5ba4b1;
case 0x5ba4b3:c.instructions+=3;goto B5ba4b3;
case 0x5ba4b9:c.instructions+=2;goto B5ba4b9;
case 0x5ba4bb:c.instructions+=1;goto B5ba4bb;
case 0x5ba4c0:goto L5ba4c0;
case 0x5ba4c6:c.instructions+=1;goto B5ba4c6;
case 0x5ba4c8:goto L5ba4c8;
case 0x5ba4ce:goto L5ba4ce;
case 0x5ba4d4:c.instructions+=1;goto B5ba4d4;
case 0x5ba4d6:goto L5ba4d6;
case 0x5ba4dc:goto L5ba4dc;
case 0x5ba4df:c.instructions+=2;goto B5ba4df;
case 0x5ba4e2:c.instructions+=1;goto B5ba4e2;
case 0x5ba4e4:goto L5ba4e4;
case 0x5ba4ea:c.instructions+=2;goto B5ba4ea;
case 0x5ba4f0:c.instructions+=1;goto B5ba4f0;
case 0x5ba4f6:goto L5ba4f6;
case 0x5ba4fc:c.instructions+=14;goto B5ba4fc;
case 0x5ba501:c.instructions+=13;goto B5ba501;
case 0x5ba503:c.instructions+=12;goto B5ba503;
case 0x5ba504:c.instructions+=11;goto B5ba504;
case 0x5ba505:c.instructions+=10;goto B5ba505;
case 0x5ba50a:c.instructions+=9;goto B5ba50a;
case 0x5ba50c:c.instructions+=8;goto B5ba50c;
case 0x5ba50d:c.instructions+=7;goto B5ba50d;
case 0x5ba513:c.instructions+=6;goto B5ba513;
case 0x5ba514:c.instructions+=5;goto B5ba514;
case 0x5ba516:c.instructions+=4;goto B5ba516;
case 0x5ba518:c.instructions+=3;goto B5ba518;
case 0x5ba519:c.instructions+=2;goto B5ba519;
case 0x5ba51a:c.instructions+=1;goto B5ba51a;
case 0x5ba51d:goto L5ba51d;
case 0x5ba51f:c.instructions+=1;goto B5ba51f;
case 0x5ba525:goto L5ba525;
case 0x5ba52b:c.instructions+=12;goto B5ba52b;
case 0x5ba530:c.instructions+=11;goto B5ba530;
case 0x5ba532:c.instructions+=10;goto B5ba532;
case 0x5ba533:c.instructions+=9;goto B5ba533;
case 0x5ba538:c.instructions+=8;goto B5ba538;
case 0x5ba539:c.instructions+=7;goto B5ba539;
case 0x5ba53a:c.instructions+=6;goto B5ba53a;
case 0x5ba540:c.instructions+=5;goto B5ba540;
case 0x5ba542:c.instructions+=4;goto B5ba542;
case 0x5ba544:c.instructions+=3;goto B5ba544;
case 0x5ba545:c.instructions+=2;goto B5ba545;
case 0x5ba546:c.instructions+=1;goto B5ba546;
case 0x5ba549:goto L5ba549;
case 0x5ba54b:c.instructions+=1;goto B5ba54b;
case 0x5ba54d:goto L5ba54d;
case 0x5ba54f:c.instructions+=1;goto B5ba54f;
case 0x5ba550:goto L5ba550;
case 0x5ba555:c.instructions+=7;goto B5ba555;
case 0x5ba557:c.instructions+=6;goto B5ba557;
case 0x5ba55e:c.instructions+=5;goto B5ba55e;
case 0x5ba55f:c.instructions+=4;goto B5ba55f;
case 0x5ba560:c.instructions+=3;goto B5ba560;
case 0x5ba561:c.instructions+=2;goto B5ba561;
case 0x5ba562:c.instructions+=1;goto B5ba562;
case 0x5ba565:goto L5ba565;
case 0x5ba567:c.instructions+=1;goto B5ba567;
case 0x5ba569:goto L5ba569;
case 0x5ba56e:c.instructions+=3;goto B5ba56e;
case 0x5ba570:c.instructions+=2;goto B5ba570;
case 0x5ba571:c.instructions+=1;goto B5ba571;
case 0x5ba574:goto L5ba574;
case 0x5ba579:c.instructions+=14;goto B5ba579;
case 0x5ba57b:c.instructions+=13;goto B5ba57b;
case 0x5ba57c:c.instructions+=12;goto B5ba57c;
case 0x5ba583:c.instructions+=11;goto B5ba583;
case 0x5ba584:c.instructions+=10;goto B5ba584;
case 0x5ba58a:c.instructions+=9;goto B5ba58a;
case 0x5ba58b:c.instructions+=8;goto B5ba58b;
case 0x5ba58c:c.instructions+=7;goto B5ba58c;
case 0x5ba58d:c.instructions+=6;goto B5ba58d;
case 0x5ba58e:c.instructions+=5;goto B5ba58e;
case 0x5ba594:c.instructions+=4;goto B5ba594;
case 0x5ba595:c.instructions+=3;goto B5ba595;
case 0x5ba596:c.instructions+=2;goto B5ba596;
case 0x5ba597:c.instructions+=1;goto B5ba597;
case 0x5ba59a:goto L5ba59a;
case 0x5ba59c:c.instructions+=1;goto B5ba59c;
case 0x5ba59e:goto L5ba59e;
case 0x5ba59f:c.instructions+=2;goto B5ba59f;
case 0x5ba5a2:c.instructions+=1;goto B5ba5a2;
case 0x5ba5a4:goto L5ba5a4;
case 0x5ba5a6:c.instructions+=1;goto B5ba5a6;
case 0x5ba5a8:goto L5ba5a8;
case 0x5ba5ad:c.instructions+=4;goto B5ba5ad;
case 0x5ba5af:c.instructions+=3;goto B5ba5af;
case 0x5ba5b5:c.instructions+=2;goto B5ba5b5;
case 0x5ba5bb:c.instructions+=1;goto B5ba5bb;
case 0x5ba5bd:goto L5ba5bd;
case 0x5ba5bf:c.instructions+=2;goto B5ba5bf;
case 0x5ba5c0:c.instructions+=1;goto B5ba5c0;
case 0x5ba5c3:goto L5ba5c3;
case 0x5ba5c9:goto L5ba5c9;
case 0x5ba5cb:c.instructions+=1;goto B5ba5cb;
case 0x5ba5d0:goto L5ba5d0;
case 0x5ba5d6:c.instructions+=1;goto B5ba5d6;
case 0x5ba5d8:goto L5ba5d8;
case 0x5ba5de:goto L5ba5de;
case 0x5ba5e4:c.instructions+=2;goto B5ba5e4;
case 0x5ba5e6:c.instructions+=1;goto B5ba5e6;
case 0x5ba5e8:goto L5ba5e8;
case 0x5ba5ea:c.instructions+=2;goto B5ba5ea;
case 0x5ba5eb:c.instructions+=1;goto B5ba5eb;
case 0x5ba5ee:goto L5ba5ee;
case 0x5ba5f4:goto L5ba5f4;
case 0x5ba5f7:c.instructions+=2;goto B5ba5f7;
case 0x5ba5fa:c.instructions+=1;goto B5ba5fa;
case 0x5ba5fc:goto L5ba5fc;
case 0x5ba5fd:goto L5ba5fd;
case 0x5ba5fe:c.instructions+=1;goto B5ba5fe;
case 0x5ba600:goto L5ba600;
case 0x5ba605:c.instructions+=1;goto B5ba605;
case 0x5ba610:goto L5ba610;
case 0x5ba611:c.instructions+=3;goto B5ba611;
case 0x5ba612:c.instructions+=2;goto B5ba612;
case 0x5ba614:c.instructions+=1;goto B5ba614;
case 0x5ba616:goto L5ba616;
case 0x5ba618:c.instructions+=5;goto B5ba618;
case 0x5ba61b:c.instructions+=4;goto B5ba61b;
case 0x5ba620:c.instructions+=3;goto B5ba620;
case 0x5ba622:c.instructions+=2;goto B5ba622;
case 0x5ba624:c.instructions+=1;goto B5ba624;
case 0x5ba626:goto L5ba626;
case 0x5ba629:c.instructions+=3;goto B5ba629;
case 0x5ba62b:c.instructions+=2;goto B5ba62b;
case 0x5ba62c:c.instructions+=1;goto B5ba62c;
case 0x5ba62f:goto L5ba62f;
case 0x5ba630:c.instructions+=2;goto B5ba630;
case 0x5ba633:c.instructions+=1;goto B5ba633;
case 0x5ba635:goto L5ba635;
case 0x5ba63a:c.instructions+=1;goto B5ba63a;
case 0x5ba640:goto L5ba640;
case 0x5ba642:c.instructions+=2;goto B5ba642;
case 0x5ba644:c.instructions+=1;goto B5ba644;
case 0x5ba646:goto L5ba646;
case 0x5ba648:c.instructions+=2;goto B5ba648;
case 0x5ba649:c.instructions+=1;goto B5ba649;
case 0x5ba64c:goto L5ba64c;
case 0x5ba64e:goto L5ba64e;
case 0x5ba651:c.instructions+=2;goto B5ba651;
case 0x5ba657:c.instructions+=1;goto B5ba657;
case 0x5ba659:goto L5ba659;
case 0x5ba65e:c.instructions+=2;goto B5ba65e;
case 0x5ba660:c.instructions+=1;goto B5ba660;
case 0x5ba662:goto L5ba662;
case 0x5ba664:c.instructions+=2;goto B5ba664;
case 0x5ba665:c.instructions+=1;goto B5ba665;
case 0x5ba668:goto L5ba668;
case 0x5ba66e:goto L5ba66e;
case 0x5ba673:c.instructions+=2;goto B5ba673;
case 0x5ba675:c.instructions+=1;goto B5ba675;
case 0x5ba677:goto L5ba677;
case 0x5ba679:c.instructions+=2;goto B5ba679;
case 0x5ba67a:c.instructions+=1;goto B5ba67a;
case 0x5ba67d:goto L5ba67d;
case 0x5ba683:goto L5ba683;
case 0x5ba688:c.instructions+=2;goto B5ba688;
case 0x5ba68a:c.instructions+=1;goto B5ba68a;
case 0x5ba68c:goto L5ba68c;
case 0x5ba68e:c.instructions+=2;goto B5ba68e;
case 0x5ba68f:c.instructions+=1;goto B5ba68f;
case 0x5ba692:goto L5ba692;
case 0x5ba698:goto L5ba698;
case 0x5ba69d:c.instructions+=2;goto B5ba69d;
case 0x5ba69f:c.instructions+=1;goto B5ba69f;
case 0x5ba6a1:goto L5ba6a1;
case 0x5ba6a3:c.instructions+=2;goto B5ba6a3;
case 0x5ba6a4:c.instructions+=1;goto B5ba6a4;
case 0x5ba6a7:goto L5ba6a7;
case 0x5ba6ad:goto L5ba6ad;
case 0x5ba6b2:c.instructions+=2;goto B5ba6b2;
case 0x5ba6b4:c.instructions+=1;goto B5ba6b4;
case 0x5ba6b6:goto L5ba6b6;
case 0x5ba6b8:c.instructions+=2;goto B5ba6b8;
case 0x5ba6b9:c.instructions+=1;goto B5ba6b9;
case 0x5ba6bc:goto L5ba6bc;
case 0x5ba6c2:goto L5ba6c2;
case 0x5ba6c7:c.instructions+=3;goto B5ba6c7;
case 0x5ba6c9:c.instructions+=2;goto B5ba6c9;
case 0x5ba6ca:c.instructions+=1;goto B5ba6ca;
case 0x5ba6cd:goto L5ba6cd;
case 0x5ba6d2:c.instructions+=3;goto B5ba6d2;
case 0x5ba6d4:c.instructions+=2;goto B5ba6d4;
case 0x5ba6da:c.instructions+=1;goto B5ba6da;
case 0x5ba6dc:goto L5ba6dc;
case 0x5ba6de:c.instructions+=2;goto B5ba6de;
case 0x5ba6df:c.instructions+=1;goto B5ba6df;
case 0x5ba6e2:goto L5ba6e2;
case 0x5ba6e8:goto L5ba6e8;
case 0x5ba6ed:c.instructions+=2;goto B5ba6ed;
case 0x5ba6ef:c.instructions+=1;goto B5ba6ef;
case 0x5ba6f1:goto L5ba6f1;
case 0x5ba6f3:c.instructions+=2;goto B5ba6f3;
case 0x5ba6f4:c.instructions+=1;goto B5ba6f4;
case 0x5ba6f7:goto L5ba6f7;
case 0x5ba6fd:goto L5ba6fd;
case 0x5ba702:c.instructions+=2;goto B5ba702;
case 0x5ba704:c.instructions+=1;goto B5ba704;
case 0x5ba706:goto L5ba706;
case 0x5ba708:c.instructions+=2;goto B5ba708;
case 0x5ba709:c.instructions+=1;goto B5ba709;
case 0x5ba70c:goto L5ba70c;
case 0x5ba712:goto L5ba712;
case 0x5ba717:c.instructions+=2;goto B5ba717;
case 0x5ba719:c.instructions+=1;goto B5ba719;
case 0x5ba71b:goto L5ba71b;
case 0x5ba71d:c.instructions+=2;goto B5ba71d;
case 0x5ba71e:c.instructions+=1;goto B5ba71e;
case 0x5ba721:goto L5ba721;
case 0x5ba727:goto L5ba727;
case 0x5ba72c:c.instructions+=2;goto B5ba72c;
case 0x5ba72e:c.instructions+=1;goto B5ba72e;
case 0x5ba730:goto L5ba730;
case 0x5ba732:c.instructions+=2;goto B5ba732;
case 0x5ba733:c.instructions+=1;goto B5ba733;
case 0x5ba736:goto L5ba736;
case 0x5ba73c:goto L5ba73c;
case 0x5ba741:c.instructions+=2;goto B5ba741;
case 0x5ba743:c.instructions+=1;goto B5ba743;
case 0x5ba745:goto L5ba745;
case 0x5ba747:c.instructions+=2;goto B5ba747;
case 0x5ba748:c.instructions+=1;goto B5ba748;
case 0x5ba74b:goto L5ba74b;
case 0x5ba751:goto L5ba751;
case 0x5ba756:c.instructions+=2;goto B5ba756;
case 0x5ba758:c.instructions+=1;goto B5ba758;
case 0x5ba75a:goto L5ba75a;
case 0x5ba75c:c.instructions+=2;goto B5ba75c;
case 0x5ba75d:c.instructions+=1;goto B5ba75d;
case 0x5ba760:goto L5ba760;
case 0x5ba766:goto L5ba766;
case 0x5ba76b:c.instructions+=2;goto B5ba76b;
case 0x5ba76d:c.instructions+=1;goto B5ba76d;
case 0x5ba76f:goto L5ba76f;
case 0x5ba771:c.instructions+=2;goto B5ba771;
case 0x5ba772:c.instructions+=1;goto B5ba772;
case 0x5ba775:goto L5ba775;
case 0x5ba77b:goto L5ba77b;
case 0x5ba77c:c.instructions+=2;goto B5ba77c;
case 0x5ba77d:c.instructions+=1;goto B5ba77d;
case 0x5ba780:goto L5ba780;
case 0x5ba785:c.instructions+=8;goto B5ba785;
case 0x5ba78a:c.instructions+=7;goto B5ba78a;
case 0x5ba78c:c.instructions+=6;goto B5ba78c;
case 0x5ba78e:c.instructions+=5;goto B5ba78e;
case 0x5ba790:c.instructions+=4;goto B5ba790;
case 0x5ba79a:c.instructions+=3;goto B5ba79a;
case 0x5ba79c:c.instructions+=2;goto B5ba79c;
case 0x5ba79d:c.instructions+=1;goto B5ba79d;
case 0x5ba7a0:goto L5ba7a0;
case 0x5ba7a5:c.instructions+=4;goto B5ba7a5;
case 0x5ba7a7:c.instructions+=3;goto B5ba7a7;
case 0x5ba7ac:c.instructions+=2;goto B5ba7ac;
case 0x5ba7ad:c.instructions+=1;goto B5ba7ad;
case 0x5ba7b3:goto L5ba7b3;
case 0x5ba7b8:c.instructions+=7;goto B5ba7b8;
case 0x5ba7ba:c.instructions+=6;goto B5ba7ba;
case 0x5ba7bf:c.instructions+=5;goto B5ba7bf;
case 0x5ba7c1:c.instructions+=4;goto B5ba7c1;
case 0x5ba7c3:c.instructions+=3;goto B5ba7c3;
case 0x5ba7c5:c.instructions+=2;goto B5ba7c5;
case 0x5ba7c6:c.instructions+=1;goto B5ba7c6;
case 0x5ba7c9:goto L5ba7c9;
case 0x5ba7ce:goto L5ba7ce;
case 0x5ba7d3:goto L5ba7d3;
case 0x5ba7d8:goto L5ba7d8;
case 0x5ba7dd:goto L5ba7dd;
case 0x5ba7f0:goto L5ba7f0;
case 0x5ba7f1:c.instructions+=3;goto B5ba7f1;
case 0x5ba7f6:c.instructions+=2;goto B5ba7f6;
case 0x5ba7f8:c.instructions+=1;goto B5ba7f8;
case 0x5ba7fd:goto L5ba7fd;
case 0x5ba7ff:goto L5ba7ff;
case 0x5ba809:c.instructions+=17;goto B5ba809;
case 0x5ba813:c.instructions+=16;goto B5ba813;
case 0x5ba81d:c.instructions+=15;goto B5ba81d;
case 0x5ba827:c.instructions+=14;goto B5ba827;
case 0x5ba831:c.instructions+=13;goto B5ba831;
case 0x5ba83b:c.instructions+=12;goto B5ba83b;
case 0x5ba845:c.instructions+=11;goto B5ba845;
case 0x5ba84f:c.instructions+=10;goto B5ba84f;
case 0x5ba859:c.instructions+=9;goto B5ba859;
case 0x5ba863:c.instructions+=8;goto B5ba863;
case 0x5ba86d:c.instructions+=7;goto B5ba86d;
case 0x5ba877:c.instructions+=6;goto B5ba877;
case 0x5ba881:c.instructions+=5;goto B5ba881;
case 0x5ba88b:c.instructions+=4;goto B5ba88b;
case 0x5ba895:c.instructions+=3;goto B5ba895;
case 0x5ba89f:c.instructions+=2;goto B5ba89f;
case 0x5ba8a0:c.instructions+=1;goto B5ba8a0;
case 0x5ba8b0:goto L5ba8b0;
case 0x5ba8b3:c.instructions+=4;goto B5ba8b3;
case 0x5ba8b4:c.instructions+=3;goto B5ba8b4;
case 0x5ba8b8:c.instructions+=2;goto B5ba8b8;
case 0x5ba8b9:c.instructions+=1;goto B5ba8b9;
case 0x5ba8be:goto L5ba8be;
case 0x5ba8c2:c.instructions+=2;goto B5ba8c2;
case 0x5ba8c3:c.instructions+=1;goto B5ba8c3;
case 0x5ba8c8:goto L5ba8c8;
case 0x5ba8ce:c.instructions+=72;goto B5ba8ce;
case 0x5ba8d2:c.instructions+=71;goto B5ba8d2;
case 0x5ba8d6:c.instructions+=70;goto B5ba8d6;
case 0x5ba8d8:c.instructions+=69;goto B5ba8d8;
case 0x5ba8db:c.instructions+=68;goto B5ba8db;
case 0x5ba8de:c.instructions+=67;goto B5ba8de;
case 0x5ba8e1:c.instructions+=66;goto B5ba8e1;
case 0x5ba8e3:c.instructions+=65;goto B5ba8e3;
case 0x5ba8e7:c.instructions+=64;goto B5ba8e7;
case 0x5ba8e9:c.instructions+=63;goto B5ba8e9;
case 0x5ba8ed:c.instructions+=62;goto B5ba8ed;
case 0x5ba8ef:c.instructions+=61;goto B5ba8ef;
case 0x5ba8f1:c.instructions+=60;goto B5ba8f1;
case 0x5ba8f3:c.instructions+=59;goto B5ba8f3;
case 0x5ba8f6:c.instructions+=58;goto B5ba8f6;
case 0x5ba8f9:c.instructions+=57;goto B5ba8f9;
case 0x5ba8fc:c.instructions+=56;goto B5ba8fc;
case 0x5ba900:c.instructions+=55;goto B5ba900;
case 0x5ba903:c.instructions+=54;goto B5ba903;
case 0x5ba906:c.instructions+=53;goto B5ba906;
case 0x5ba908:c.instructions+=52;goto B5ba908;
case 0x5ba90b:c.instructions+=51;goto B5ba90b;
case 0x5ba90d:c.instructions+=50;goto B5ba90d;
case 0x5ba914:c.instructions+=49;goto B5ba914;
case 0x5ba915:c.instructions+=48;goto B5ba915;
case 0x5ba919:c.instructions+=47;goto B5ba919;
case 0x5ba91b:c.instructions+=46;goto B5ba91b;
case 0x5ba91d:c.instructions+=45;goto B5ba91d;
case 0x5ba91f:c.instructions+=44;goto B5ba91f;
case 0x5ba923:c.instructions+=43;goto B5ba923;
case 0x5ba925:c.instructions+=42;goto B5ba925;
case 0x5ba927:c.instructions+=41;goto B5ba927;
case 0x5ba929:c.instructions+=40;goto B5ba929;
case 0x5ba92c:c.instructions+=39;goto B5ba92c;
case 0x5ba92e:c.instructions+=38;goto B5ba92e;
case 0x5ba932:c.instructions+=37;goto B5ba932;
case 0x5ba936:c.instructions+=36;goto B5ba936;
case 0x5ba938:c.instructions+=35;goto B5ba938;
case 0x5ba93a:c.instructions+=34;goto B5ba93a;
case 0x5ba93e:c.instructions+=33;goto B5ba93e;
case 0x5ba942:c.instructions+=32;goto B5ba942;
case 0x5ba945:c.instructions+=31;goto B5ba945;
case 0x5ba947:c.instructions+=30;goto B5ba947;
case 0x5ba949:c.instructions+=29;goto B5ba949;
case 0x5ba94c:c.instructions+=28;goto B5ba94c;
case 0x5ba94e:c.instructions+=27;goto B5ba94e;
case 0x5ba952:c.instructions+=26;goto B5ba952;
case 0x5ba954:c.instructions+=25;goto B5ba954;
case 0x5ba958:c.instructions+=24;goto B5ba958;
case 0x5ba95b:c.instructions+=23;goto B5ba95b;
case 0x5ba95d:c.instructions+=22;goto B5ba95d;
case 0x5ba961:c.instructions+=21;goto B5ba961;
case 0x5ba965:c.instructions+=20;goto B5ba965;
case 0x5ba967:c.instructions+=19;goto B5ba967;
case 0x5ba969:c.instructions+=18;goto B5ba969;
case 0x5ba96b:c.instructions+=17;goto B5ba96b;
case 0x5ba96d:c.instructions+=16;goto B5ba96d;
case 0x5ba970:c.instructions+=15;goto B5ba970;
case 0x5ba974:c.instructions+=14;goto B5ba974;
case 0x5ba978:c.instructions+=13;goto B5ba978;
case 0x5ba97b:c.instructions+=12;goto B5ba97b;
case 0x5ba97d:c.instructions+=11;goto B5ba97d;
case 0x5ba980:c.instructions+=10;goto B5ba980;
case 0x5ba982:c.instructions+=9;goto B5ba982;
case 0x5ba986:c.instructions+=8;goto B5ba986;
case 0x5ba98a:c.instructions+=7;goto B5ba98a;
case 0x5ba98c:c.instructions+=6;goto B5ba98c;
case 0x5ba990:c.instructions+=5;goto B5ba990;
case 0x5ba993:c.instructions+=4;goto B5ba993;
case 0x5ba995:c.instructions+=3;goto B5ba995;
case 0x5ba997:c.instructions+=2;goto B5ba997;
case 0x5ba99a:c.instructions+=1;goto B5ba99a;
case 0x5ba9a0:goto L5ba9a0;
case 0x5ba9a1:c.instructions+=20;goto B5ba9a1;
case 0x5ba9a3:c.instructions+=19;goto B5ba9a3;
case 0x5ba9a6:c.instructions+=18;goto B5ba9a6;
case 0x5ba9ac:c.instructions+=17;goto B5ba9ac;
case 0x5ba9af:c.instructions+=16;goto B5ba9af;
case 0x5ba9b1:c.instructions+=15;goto B5ba9b1;
case 0x5ba9b2:c.instructions+=14;goto B5ba9b2;
case 0x5ba9b5:c.instructions+=13;goto B5ba9b5;
case 0x5ba9b7:c.instructions+=12;goto B5ba9b7;
case 0x5ba9bb:c.instructions+=11;goto B5ba9bb;
case 0x5ba9bf:c.instructions+=10;goto B5ba9bf;
case 0x5ba9c2:c.instructions+=9;goto B5ba9c2;
case 0x5ba9c5:c.instructions+=8;goto B5ba9c5;
case 0x5ba9c9:c.instructions+=7;goto B5ba9c9;
case 0x5ba9cc:c.instructions+=6;goto B5ba9cc;
case 0x5ba9d0:c.instructions+=5;goto B5ba9d0;
case 0x5ba9d3:c.instructions+=4;goto B5ba9d3;
case 0x5ba9d4:c.instructions+=3;goto B5ba9d4;
case 0x5ba9d5:c.instructions+=2;goto B5ba9d5;
case 0x5ba9d9:c.instructions+=1;goto B5ba9d9;
case 0x5ba9de:goto L5ba9de;
case 0x5ba9e1:c.instructions+=16;goto B5ba9e1;
case 0x5ba9e3:c.instructions+=15;goto B5ba9e3;
case 0x5ba9e7:c.instructions+=14;goto B5ba9e7;
case 0x5ba9e9:c.instructions+=13;goto B5ba9e9;
case 0x5ba9ea:c.instructions+=12;goto B5ba9ea;
case 0x5ba9ee:c.instructions+=11;goto B5ba9ee;
case 0x5ba9f2:c.instructions+=10;goto B5ba9f2;
case 0x5ba9f5:c.instructions+=9;goto B5ba9f5;
case 0x5ba9f7:c.instructions+=8;goto B5ba9f7;
case 0x5ba9fb:c.instructions+=7;goto B5ba9fb;
case 0x5ba9fe:c.instructions+=6;goto B5ba9fe;
case 0x5baa02:c.instructions+=5;goto B5baa02;
case 0x5baa03:c.instructions+=4;goto B5baa03;
case 0x5baa05:c.instructions+=3;goto B5baa05;
case 0x5baa06:c.instructions+=2;goto B5baa06;
case 0x5baa0a:c.instructions+=1;goto B5baa0a;
case 0x5baa0f:goto L5baa0f;
case 0x5baa13:c.instructions+=6;goto B5baa13;
case 0x5baa14:c.instructions+=5;goto B5baa14;
case 0x5baa18:c.instructions+=4;goto B5baa18;
case 0x5baa19:c.instructions+=3;goto B5baa19;
case 0x5baa1d:c.instructions+=2;goto B5baa1d;
case 0x5baa1e:c.instructions+=1;goto B5baa1e;
case 0x5baa23:goto L5baa23;
case 0x5baa27:c.instructions+=4;goto B5baa27;
case 0x5baa28:c.instructions+=3;goto B5baa28;
case 0x5baa2c:c.instructions+=2;goto B5baa2c;
case 0x5baa2d:c.instructions+=1;goto B5baa2d;
case 0x5baa32:goto L5baa32;
case 0x5baa36:c.instructions+=4;goto B5baa36;
case 0x5baa37:c.instructions+=3;goto B5baa37;
case 0x5baa3b:c.instructions+=2;goto B5baa3b;
case 0x5baa3c:c.instructions+=1;goto B5baa3c;
case 0x5baa41:goto L5baa41;
case 0x5baa45:c.instructions+=138;goto B5baa45;
case 0x5baa48:c.instructions+=137;goto B5baa48;
case 0x5baa4c:c.instructions+=136;goto B5baa4c;
case 0x5baa4e:c.instructions+=135;goto B5baa4e;
case 0x5baa52:c.instructions+=134;goto B5baa52;
case 0x5baa55:c.instructions+=133;goto B5baa55;
case 0x5baa59:c.instructions+=132;goto B5baa59;
case 0x5baa5c:c.instructions+=131;goto B5baa5c;
case 0x5baa60:c.instructions+=130;goto B5baa60;
case 0x5baa63:c.instructions+=129;goto B5baa63;
case 0x5baa67:c.instructions+=128;goto B5baa67;
case 0x5baa6a:c.instructions+=127;goto B5baa6a;
case 0x5baa6e:c.instructions+=126;goto B5baa6e;
case 0x5baa71:c.instructions+=125;goto B5baa71;
case 0x5baa75:c.instructions+=124;goto B5baa75;
case 0x5baa78:c.instructions+=123;goto B5baa78;
case 0x5baa7a:c.instructions+=122;goto B5baa7a;
case 0x5baa7d:c.instructions+=121;goto B5baa7d;
case 0x5baa81:c.instructions+=120;goto B5baa81;
case 0x5baa84:c.instructions+=119;goto B5baa84;
case 0x5baa87:c.instructions+=118;goto B5baa87;
case 0x5baa8a:c.instructions+=117;goto B5baa8a;
case 0x5baa8d:c.instructions+=116;goto B5baa8d;
case 0x5baa90:c.instructions+=115;goto B5baa90;
case 0x5baa93:c.instructions+=114;goto B5baa93;
case 0x5baa96:c.instructions+=113;goto B5baa96;
case 0x5baa9d:c.instructions+=112;goto B5baa9d;
case 0x5baa9f:c.instructions+=111;goto B5baa9f;
case 0x5baaa1:c.instructions+=110;goto B5baaa1;
case 0x5baaa8:c.instructions+=109;goto B5baaa8;
case 0x5baaab:c.instructions+=108;goto B5baaab;
case 0x5baab2:c.instructions+=107;goto B5baab2;
case 0x5baab4:c.instructions+=106;goto B5baab4;
case 0x5baab7:c.instructions+=105;goto B5baab7;
case 0x5baab9:c.instructions+=104;goto B5baab9;
case 0x5baabd:c.instructions+=103;goto B5baabd;
case 0x5baac3:c.instructions+=102;goto B5baac3;
case 0x5baac7:c.instructions+=101;goto B5baac7;
case 0x5baacd:c.instructions+=100;goto B5baacd;
case 0x5baad1:c.instructions+=99;goto B5baad1;
case 0x5baad3:c.instructions+=98;goto B5baad3;
case 0x5baad5:c.instructions+=97;goto B5baad5;
case 0x5baadc:c.instructions+=96;goto B5baadc;
case 0x5baae0:c.instructions+=95;goto B5baae0;
case 0x5baae6:c.instructions+=94;goto B5baae6;
case 0x5baaea:c.instructions+=93;goto B5baaea;
case 0x5baaf0:c.instructions+=92;goto B5baaf0;
case 0x5baaf7:c.instructions+=91;goto B5baaf7;
case 0x5baafb:c.instructions+=90;goto B5baafb;
case 0x5bab02:c.instructions+=89;goto B5bab02;
case 0x5bab04:c.instructions+=88;goto B5bab04;
case 0x5bab0b:c.instructions+=87;goto B5bab0b;
case 0x5bab0f:c.instructions+=86;goto B5bab0f;
case 0x5bab15:c.instructions+=85;goto B5bab15;
case 0x5bab19:c.instructions+=84;goto B5bab19;
case 0x5bab1f:c.instructions+=83;goto B5bab1f;
case 0x5bab23:c.instructions+=82;goto B5bab23;
case 0x5bab27:c.instructions+=81;goto B5bab27;
case 0x5bab2b:c.instructions+=80;goto B5bab2b;
case 0x5bab2d:c.instructions+=79;goto B5bab2d;
case 0x5bab34:c.instructions+=78;goto B5bab34;
case 0x5bab38:c.instructions+=77;goto B5bab38;
case 0x5bab3e:c.instructions+=76;goto B5bab3e;
case 0x5bab45:c.instructions+=75;goto B5bab45;
case 0x5bab49:c.instructions+=74;goto B5bab49;
case 0x5bab50:c.instructions+=73;goto B5bab50;
case 0x5bab52:c.instructions+=72;goto B5bab52;
case 0x5bab59:c.instructions+=71;goto B5bab59;
case 0x5bab5d:c.instructions+=70;goto B5bab5d;
case 0x5bab63:c.instructions+=69;goto B5bab63;
case 0x5bab6a:c.instructions+=68;goto B5bab6a;
case 0x5bab6e:c.instructions+=67;goto B5bab6e;
case 0x5bab75:c.instructions+=66;goto B5bab75;
case 0x5bab77:c.instructions+=65;goto B5bab77;
case 0x5bab7e:c.instructions+=64;goto B5bab7e;
case 0x5bab82:c.instructions+=63;goto B5bab82;
case 0x5bab88:c.instructions+=62;goto B5bab88;
case 0x5bab8f:c.instructions+=61;goto B5bab8f;
case 0x5bab93:c.instructions+=60;goto B5bab93;
case 0x5bab9a:c.instructions+=59;goto B5bab9a;
case 0x5bab9c:c.instructions+=58;goto B5bab9c;
case 0x5baba3:c.instructions+=57;goto B5baba3;
case 0x5baba5:c.instructions+=56;goto B5baba5;
case 0x5baba7:c.instructions+=55;goto B5baba7;
case 0x5babab:c.instructions+=54;goto B5babab;
case 0x5babb2:c.instructions+=53;goto B5babb2;
case 0x5babb4:c.instructions+=52;goto B5babb4;
case 0x5babbb:c.instructions+=51;goto B5babbb;
case 0x5babbd:c.instructions+=50;goto B5babbd;
case 0x5babbf:c.instructions+=49;goto B5babbf;
case 0x5babc3:c.instructions+=48;goto B5babc3;
case 0x5babca:c.instructions+=47;goto B5babca;
case 0x5babd1:c.instructions+=46;goto B5babd1;
case 0x5babd8:c.instructions+=45;goto B5babd8;
case 0x5babdf:c.instructions+=44;goto B5babdf;
case 0x5babe3:c.instructions+=43;goto B5babe3;
case 0x5babea:c.instructions+=42;goto B5babea;
case 0x5babf1:c.instructions+=41;goto B5babf1;
case 0x5babf2:c.instructions+=40;goto B5babf2;
case 0x5babf3:c.instructions+=39;goto B5babf3;
case 0x5babfa:c.instructions+=38;goto B5babfa;
case 0x5bac01:c.instructions+=37;goto B5bac01;
case 0x5bac05:c.instructions+=36;goto B5bac05;
case 0x5bac07:c.instructions+=35;goto B5bac07;
case 0x5bac09:c.instructions+=34;goto B5bac09;
case 0x5bac0d:c.instructions+=33;goto B5bac0d;
case 0x5bac0f:c.instructions+=32;goto B5bac0f;
case 0x5bac11:c.instructions+=31;goto B5bac11;
case 0x5bac15:c.instructions+=30;goto B5bac15;
case 0x5bac17:c.instructions+=29;goto B5bac17;
case 0x5bac1e:c.instructions+=28;goto B5bac1e;
case 0x5bac22:c.instructions+=27;goto B5bac22;
case 0x5bac24:c.instructions+=26;goto B5bac24;
case 0x5bac26:c.instructions+=25;goto B5bac26;
case 0x5bac2a:c.instructions+=24;goto B5bac2a;
case 0x5bac2c:c.instructions+=23;goto B5bac2c;
case 0x5bac2e:c.instructions+=22;goto B5bac2e;
case 0x5bac32:c.instructions+=21;goto B5bac32;
case 0x5bac34:c.instructions+=20;goto B5bac34;
case 0x5bac3b:c.instructions+=19;goto B5bac3b;
case 0x5bac3f:c.instructions+=18;goto B5bac3f;
case 0x5bac41:c.instructions+=17;goto B5bac41;
case 0x5bac43:c.instructions+=16;goto B5bac43;
case 0x5bac47:c.instructions+=15;goto B5bac47;
case 0x5bac49:c.instructions+=14;goto B5bac49;
case 0x5bac4b:c.instructions+=13;goto B5bac4b;
case 0x5bac4f:c.instructions+=12;goto B5bac4f;
case 0x5bac51:c.instructions+=11;goto B5bac51;
case 0x5bac58:c.instructions+=10;goto B5bac58;
case 0x5bac5e:c.instructions+=9;goto B5bac5e;
case 0x5bac60:c.instructions+=8;goto B5bac60;
case 0x5bac66:c.instructions+=7;goto B5bac66;
case 0x5bac68:c.instructions+=6;goto B5bac68;
case 0x5bac6a:c.instructions+=5;goto B5bac6a;
case 0x5bac70:c.instructions+=4;goto B5bac70;
case 0x5bac72:c.instructions+=3;goto B5bac72;
case 0x5bac78:c.instructions+=2;goto B5bac78;
case 0x5bac7f:c.instructions+=1;goto B5bac7f;
case 0x5bac84:goto L5bac84;
case 0x5bac87:c.instructions+=4;goto B5bac87;
case 0x5bac88:c.instructions+=3;goto B5bac88;
case 0x5bac8a:c.instructions+=2;goto B5bac8a;
case 0x5bac8b:c.instructions+=1;goto B5bac8b;
case 0x5bac90:goto L5bac90;
case 0x5bac91:c.instructions+=4;goto B5bac91;
case 0x5bac92:c.instructions+=3;goto B5bac92;
case 0x5bac96:c.instructions+=2;goto B5bac96;
case 0x5bac97:c.instructions+=1;goto B5bac97;
case 0x5bac9c:goto L5bac9c;
case 0x5baca0:c.instructions+=2;goto B5baca0;
case 0x5baca1:c.instructions+=1;goto B5baca1;
case 0x5baca6:goto L5baca6;
case 0x5bacaa:c.instructions+=25;goto B5bacaa;
case 0x5bacae:c.instructions+=24;goto B5bacae;
case 0x5bacb2:c.instructions+=23;goto B5bacb2;
case 0x5bacb4:c.instructions+=22;goto B5bacb4;
case 0x5bacb7:c.instructions+=21;goto B5bacb7;
case 0x5bacb9:c.instructions+=20;goto B5bacb9;
case 0x5bacbc:c.instructions+=19;goto B5bacbc;
case 0x5bacbf:c.instructions+=18;goto B5bacbf;
case 0x5bacc1:c.instructions+=17;goto B5bacc1;
case 0x5bacc6:c.instructions+=16;goto B5bacc6;
case 0x5bacc9:c.instructions+=15;goto B5bacc9;
case 0x5baccc:c.instructions+=14;goto B5baccc;
case 0x5baccf:c.instructions+=13;goto B5baccf;
case 0x5bacd2:c.instructions+=12;goto B5bacd2;
case 0x5bacd5:c.instructions+=11;goto B5bacd5;
case 0x5bacd8:c.instructions+=10;goto B5bacd8;
case 0x5bacdb:c.instructions+=9;goto B5bacdb;
case 0x5bacde:c.instructions+=8;goto B5bacde;
case 0x5bace1:c.instructions+=7;goto B5bace1;
case 0x5bace4:c.instructions+=6;goto B5bace4;
case 0x5bace7:c.instructions+=5;goto B5bace7;
case 0x5bacea:c.instructions+=4;goto B5bacea;
case 0x5baced:c.instructions+=3;goto B5baced;
case 0x5bacee:c.instructions+=2;goto B5bacee;
case 0x5bacef:c.instructions+=1;goto B5bacef;
case 0x5bacf0:goto L5bacf0;
case 0x5bacf1:c.instructions+=7;goto B5bacf1;
case 0x5bacf3:c.instructions+=6;goto B5bacf3;
case 0x5bacf6:c.instructions+=5;goto B5bacf6;
case 0x5bacf9:c.instructions+=4;goto B5bacf9;
case 0x5bacfa:c.instructions+=3;goto B5bacfa;
case 0x5bacfd:c.instructions+=2;goto B5bacfd;
case 0x5bacfe:c.instructions+=1;goto B5bacfe;
case 0x5bad03:goto L5bad03;
case 0x5bad07:c.instructions+=2;goto B5bad07;
case 0x5bad08:c.instructions+=1;goto B5bad08;
case 0x5bad0d:goto L5bad0d;
case 0x5bad11:c.instructions+=26;goto B5bad11;
case 0x5bad15:c.instructions+=25;goto B5bad15;
case 0x5bad17:c.instructions+=24;goto B5bad17;
case 0x5bad1a:c.instructions+=23;goto B5bad1a;
case 0x5bad1e:c.instructions+=22;goto B5bad1e;
case 0x5bad20:c.instructions+=21;goto B5bad20;
case 0x5bad24:c.instructions+=20;goto B5bad24;
case 0x5bad28:c.instructions+=19;goto B5bad28;
case 0x5bad2b:c.instructions+=18;goto B5bad2b;
case 0x5bad2c:c.instructions+=17;goto B5bad2c;
case 0x5bad30:c.instructions+=16;goto B5bad30;
case 0x5bad33:c.instructions+=15;goto B5bad33;
case 0x5bad34:c.instructions+=14;goto B5bad34;
case 0x5bad35:c.instructions+=13;goto B5bad35;
case 0x5bad3d:c.instructions+=12;goto B5bad3d;
case 0x5bad45:c.instructions+=11;goto B5bad45;
case 0x5bad4d:c.instructions+=10;goto B5bad4d;
case 0x5bad55:c.instructions+=9;goto B5bad55;
case 0x5bad5d:c.instructions+=8;goto B5bad5d;
case 0x5bad65:c.instructions+=7;goto B5bad65;
case 0x5bad6d:c.instructions+=6;goto B5bad6d;
case 0x5bad75:c.instructions+=5;goto B5bad75;
case 0x5bad7d:c.instructions+=4;goto B5bad7d;
case 0x5bad85:c.instructions+=3;goto B5bad85;
case 0x5bad8d:c.instructions+=2;goto B5bad8d;
case 0x5bad95:c.instructions+=1;goto B5bad95;
case 0x5bad9a:goto L5bad9a;
case 0x5bad9b:c.instructions+=3;goto B5bad9b;
case 0x5bad9d:c.instructions+=2;goto B5bad9d;
case 0x5bad9e:c.instructions+=1;goto B5bad9e;
case 0x5bada0:goto L5bada0;
case 0x5bada1:c.instructions+=7;goto B5bada1;
case 0x5bada3:c.instructions+=6;goto B5bada3;
case 0x5bada6:c.instructions+=5;goto B5bada6;
case 0x5bada9:c.instructions+=4;goto B5bada9;
case 0x5badaa:c.instructions+=3;goto B5badaa;
case 0x5badad:c.instructions+=2;goto B5badad;
case 0x5badae:c.instructions+=1;goto B5badae;
case 0x5badb3:goto L5badb3;
case 0x5badb7:c.instructions+=2;goto B5badb7;
case 0x5badb8:c.instructions+=1;goto B5badb8;
case 0x5badbd:goto L5badbd;
case 0x5badbf:c.instructions+=27;goto B5badbf;
case 0x5badc3:c.instructions+=26;goto B5badc3;
case 0x5badc5:c.instructions+=25;goto B5badc5;
case 0x5badc8:c.instructions+=24;goto B5badc8;
case 0x5badcc:c.instructions+=23;goto B5badcc;
case 0x5badce:c.instructions+=22;goto B5badce;
case 0x5badd2:c.instructions+=21;goto B5badd2;
case 0x5badd6:c.instructions+=20;goto B5badd6;
case 0x5badda:c.instructions+=19;goto B5badda;
case 0x5baddd:c.instructions+=18;goto B5baddd;
case 0x5badde:c.instructions+=17;goto B5badde;
case 0x5bade2:c.instructions+=16;goto B5bade2;
case 0x5bade5:c.instructions+=15;goto B5bade5;
case 0x5bade6:c.instructions+=14;goto B5bade6;
case 0x5bade7:c.instructions+=13;goto B5bade7;
case 0x5badef:c.instructions+=12;goto B5badef;
case 0x5badf7:c.instructions+=11;goto B5badf7;
case 0x5badff:c.instructions+=10;goto B5badff;
case 0x5bae07:c.instructions+=9;goto B5bae07;
case 0x5bae0f:c.instructions+=8;goto B5bae0f;
case 0x5bae17:c.instructions+=7;goto B5bae17;
case 0x5bae1f:c.instructions+=6;goto B5bae1f;
case 0x5bae27:c.instructions+=5;goto B5bae27;
case 0x5bae2f:c.instructions+=4;goto B5bae2f;
case 0x5bae37:c.instructions+=3;goto B5bae37;
case 0x5bae3f:c.instructions+=2;goto B5bae3f;
case 0x5bae47:c.instructions+=1;goto B5bae47;
case 0x5bae4c:goto L5bae4c;
case 0x5bae4d:c.instructions+=3;goto B5bae4d;
case 0x5bae4f:c.instructions+=2;goto B5bae4f;
case 0x5bae50:c.instructions+=1;goto B5bae50;
case 0x5bae60:goto L5bae60;
case 0x5bae61:c.instructions+=8;goto B5bae61;
case 0x5bae63:c.instructions+=7;goto B5bae63;
case 0x5bae66:c.instructions+=6;goto B5bae66;
case 0x5bae69:c.instructions+=5;goto B5bae69;
case 0x5bae6c:c.instructions+=4;goto B5bae6c;
case 0x5bae6d:c.instructions+=3;goto B5bae6d;
case 0x5bae71:c.instructions+=2;goto B5bae71;
case 0x5bae72:c.instructions+=1;goto B5bae72;
case 0x5bae77:goto L5bae77;
case 0x5bae7a:c.instructions+=7;goto B5bae7a;
case 0x5bae7d:c.instructions+=6;goto B5bae7d;
case 0x5bae80:c.instructions+=5;goto B5bae80;
case 0x5bae84:c.instructions+=4;goto B5bae84;
case 0x5bae85:c.instructions+=3;goto B5bae85;
case 0x5bae86:c.instructions+=2;goto B5bae86;
case 0x5bae87:c.instructions+=1;goto B5bae87;
case 0x5bae8c:goto L5bae8c;
case 0x5bae8e:c.instructions+=2;goto B5bae8e;
case 0x5bae8f:c.instructions+=1;goto B5bae8f;
case 0x5bae90:goto L5bae90;
case 0x5bae91:c.instructions+=30;goto B5bae91;
case 0x5bae93:c.instructions+=29;goto B5bae93;
case 0x5bae96:c.instructions+=28;goto B5bae96;
case 0x5bae99:c.instructions+=27;goto B5bae99;
case 0x5bae9c:c.instructions+=26;goto B5bae9c;
case 0x5bae9e:c.instructions+=25;goto B5bae9e;
case 0x5baea1:c.instructions+=24;goto B5baea1;
case 0x5baea4:c.instructions+=23;goto B5baea4;
case 0x5baea8:c.instructions+=22;goto B5baea8;
case 0x5baeac:c.instructions+=21;goto B5baeac;
case 0x5baeb0:c.instructions+=20;goto B5baeb0;
case 0x5baeb3:c.instructions+=19;goto B5baeb3;
case 0x5baeb4:c.instructions+=18;goto B5baeb4;
case 0x5baeb8:c.instructions+=17;goto B5baeb8;
case 0x5baebb:c.instructions+=16;goto B5baebb;
case 0x5baebc:c.instructions+=15;goto B5baebc;
case 0x5baebd:c.instructions+=14;goto B5baebd;
case 0x5baec5:c.instructions+=13;goto B5baec5;
case 0x5baecd:c.instructions+=12;goto B5baecd;
case 0x5baed5:c.instructions+=11;goto B5baed5;
case 0x5baedd:c.instructions+=10;goto B5baedd;
case 0x5baee5:c.instructions+=9;goto B5baee5;
case 0x5baeed:c.instructions+=8;goto B5baeed;
case 0x5baef5:c.instructions+=7;goto B5baef5;
case 0x5baefd:c.instructions+=6;goto B5baefd;
case 0x5baf05:c.instructions+=5;goto B5baf05;
case 0x5baf0d:c.instructions+=4;goto B5baf0d;
case 0x5baf15:c.instructions+=3;goto B5baf15;
case 0x5baf1d:c.instructions+=2;goto B5baf1d;
case 0x5baf25:c.instructions+=1;goto B5baf25;
case 0x5baf2a:goto L5baf2a;
case 0x5baf2c:c.instructions+=2;goto B5baf2c;
case 0x5baf2d:c.instructions+=1;goto B5baf2d;
case 0x5baf30:goto L5baf30;
case 0x5baf34:c.instructions+=25;goto B5baf34;
case 0x5baf36:c.instructions+=24;goto B5baf36;
case 0x5baf3b:c.instructions+=23;goto B5baf3b;
case 0x5baf3e:c.instructions+=22;goto B5baf3e;
case 0x5baf41:c.instructions+=21;goto B5baf41;
case 0x5baf44:c.instructions+=20;goto B5baf44;
case 0x5baf47:c.instructions+=19;goto B5baf47;
case 0x5baf4a:c.instructions+=18;goto B5baf4a;
case 0x5baf4d:c.instructions+=17;goto B5baf4d;
case 0x5baf50:c.instructions+=16;goto B5baf50;
case 0x5baf53:c.instructions+=15;goto B5baf53;
case 0x5baf56:c.instructions+=14;goto B5baf56;
case 0x5baf5a:c.instructions+=13;goto B5baf5a;
case 0x5baf5b:c.instructions+=12;goto B5baf5b;
case 0x5baf5d:c.instructions+=11;goto B5baf5d;
case 0x5baf60:c.instructions+=10;goto B5baf60;
case 0x5baf63:c.instructions+=9;goto B5baf63;
case 0x5baf65:c.instructions+=8;goto B5baf65;
case 0x5baf68:c.instructions+=7;goto B5baf68;
case 0x5baf6b:c.instructions+=6;goto B5baf6b;
case 0x5baf6e:c.instructions+=5;goto B5baf6e;
case 0x5baf71:c.instructions+=4;goto B5baf71;
case 0x5baf74:c.instructions+=3;goto B5baf74;
case 0x5baf77:c.instructions+=2;goto B5baf77;
case 0x5baf78:c.instructions+=1;goto B5baf78;
case 0x5baf80:goto L5baf80;
case 0x5baf84:c.instructions+=4;goto B5baf84;
case 0x5baf88:c.instructions+=3;goto B5baf88;
case 0x5baf89:c.instructions+=2;goto B5baf89;
case 0x5baf8a:c.instructions+=1;goto B5baf8a;
case 0x5baf8f:goto L5baf8f;
case 0x5baf90:goto L5baf90;
case 0x5baf91:c.instructions+=30;goto B5baf91;
case 0x5baf93:c.instructions+=29;goto B5baf93;
case 0x5baf96:c.instructions+=28;goto B5baf96;
case 0x5baf9c:c.instructions+=27;goto B5baf9c;
case 0x5baf9f:c.instructions+=26;goto B5baf9f;
case 0x5bafa2:c.instructions+=25;goto B5bafa2;
case 0x5bafa4:c.instructions+=24;goto B5bafa4;
case 0x5bafa8:c.instructions+=23;goto B5bafa8;
case 0x5bafab:c.instructions+=22;goto B5bafab;
case 0x5bafac:c.instructions+=21;goto B5bafac;
case 0x5bafb0:c.instructions+=20;goto B5bafb0;
case 0x5bafb3:c.instructions+=19;goto B5bafb3;
case 0x5bafb6:c.instructions+=18;goto B5bafb6;
case 0x5bafba:c.instructions+=17;goto B5bafba;
case 0x5bafbd:c.instructions+=16;goto B5bafbd;
case 0x5bafc1:c.instructions+=15;goto B5bafc1;
case 0x5bafc5:c.instructions+=14;goto B5bafc5;
case 0x5bafc8:c.instructions+=13;goto B5bafc8;
case 0x5bafc9:c.instructions+=12;goto B5bafc9;
case 0x5bafcd:c.instructions+=11;goto B5bafcd;
case 0x5bafd0:c.instructions+=10;goto B5bafd0;
case 0x5bafd4:c.instructions+=9;goto B5bafd4;
case 0x5bafd8:c.instructions+=8;goto B5bafd8;
case 0x5bafdb:c.instructions+=7;goto B5bafdb;
case 0x5bafe3:c.instructions+=6;goto B5bafe3;
case 0x5bafe7:c.instructions+=5;goto B5bafe7;
case 0x5bafea:c.instructions+=4;goto B5bafea;
case 0x5baff2:c.instructions+=3;goto B5baff2;
case 0x5baff6:c.instructions+=2;goto B5baff6;
case 0x5baff9:c.instructions+=1;goto B5baff9;
default:missing_instruction(c.pc);}
B5ba000:L5ba000:{c.instructions+=5;NFSU2_TR(0x5ba000);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba001:{NFSU2_TR(0x5ba001);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba002:{NFSU2_TR(0x5ba002);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba004:{NFSU2_TR(0x5ba004);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba005:{NFSU2_TR(0x5ba005);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba00aull));
TAIL_STATIC(0x75d794u,75d);
}
B5ba00a:L5ba00a:{c.instructions+=2;NFSU2_TR(0x5ba00a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba00b:{NFSU2_TR(0x5ba00b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba010ull));
TAIL_STATIC(0x5b9e30u,5b9);
}
B5ba010:L5ba010:{c.instructions+=2;NFSU2_TR(0x5ba010);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba011:{NFSU2_TR(0x5ba011);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba016ull));
TAIL_STATIC(0x75d359u,75d);
}
B5ba016:L5ba016:{c.instructions+=7;NFSU2_TR(0x5ba016);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B5ba019:{NFSU2_TR(0x5ba019);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ba01a:{NFSU2_TR(0x5ba01a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ba01b:{NFSU2_TR(0x5ba01b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ba01c:{NFSU2_TR(0x5ba01c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ba01d:{NFSU2_TR(0x5ba01d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x108ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x108ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x108ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ba023:{NFSU2_TR(0x5ba023);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ba030:L5ba030:{c.instructions+=3;NFSU2_TR(0x5ba030);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5ba034:{NFSU2_TR(0x5ba034);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ba036:{NFSU2_TR(0x5ba036);
if(r1(R+518)){{goto L5ba040;}}
}
B5ba038:L5ba038:{c.instructions+=2;NFSU2_TR(0x5ba038);
w4(R+0,u32(0x100000ull));
}
B5ba03d:{NFSU2_TR(0x5ba03d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ba040:L5ba040:{c.instructions+=2;NFSU2_TR(0x5ba040);
u8 U[4];
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ba042:{NFSU2_TR(0x5ba042);
if(r1(R+518)){{goto L5ba051;}}
}
B5ba044:L5ba044:{c.instructions+=4;NFSU2_TR(0x5ba044);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ba047:{NFSU2_TR(0x5ba047);
u8 U[40];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
w8(U+16,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+0,u32(r8(U+32)));
w8(U+8,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
__builtin_memmove((R+523),(R+512),1);
}
B5ba04b:{NFSU2_TR(0x5ba04b);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
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
B5ba04e:{NFSU2_TR(0x5ba04e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ba051:L5ba051:{c.instructions+=2;NFSU2_TR(0x5ba051);
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
B5ba053:{NFSU2_TR(0x5ba053);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ba060:L5ba060:{c.instructions+=5;NFSU2_TR(0x5ba060);
__builtin_memmove((R+0),gp(0x870cd4),4);
}
B5ba065:{NFSU2_TR(0x5ba065);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba066:{NFSU2_TR(0x5ba066);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5ba068:{NFSU2_TR(0x5ba068);
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
B5ba06a:{NFSU2_TR(0x5ba06a);
if(r1(R+518)){{goto L5ba19b;}}
}
B5ba070:L5ba070:{c.instructions+=13;NFSU2_TR(0x5ba070);
__builtin_memmove((R+8),gp(0x7fee78),4);
}
B5ba076:{NFSU2_TR(0x5ba076);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5ba07b:{NFSU2_TR(0x5ba07b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ba07d:{NFSU2_TR(0x5ba07d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba07e:{NFSU2_TR(0x5ba07e);
u8 U[4];
w4(U+0,u32(0x870894ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba083:{NFSU2_TR(0x5ba083);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba084:{NFSU2_TR(0x5ba084);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba085:{NFSU2_TR(0x5ba085);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba087:{NFSU2_TR(0x5ba087);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba089:{NFSU2_TR(0x5ba089);
u8 U[4];
w4(U+0,u32(0xf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba08e:{NFSU2_TR(0x5ba08e);
u8 U[4];
w4(U+0,u32(0x140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba093:{NFSU2_TR(0x5ba093);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba094:{NFSU2_TR(0x5ba094);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba097ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba097:L5ba097:{c.instructions+=2;NFSU2_TR(0x5ba097);
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
B5ba099:{NFSU2_TR(0x5ba099);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ba126;}}
}
B5ba09f:L5ba09f:{c.instructions+=6;NFSU2_TR(0x5ba09f);
__builtin_memmove((R+0),gp(0x870894),4);
}
B5ba0a4:{NFSU2_TR(0x5ba0a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ba0a6:{NFSU2_TR(0x5ba0a6);
u8 U[4];
w4(U+0,u32(0x870890ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba0ab:{NFSU2_TR(0x5ba0ab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba0ac:{NFSU2_TR(0x5ba0ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba0ad:{NFSU2_TR(0x5ba0ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba0b0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba0b0:L5ba0b0:{c.instructions+=2;NFSU2_TR(0x5ba0b0);
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
B5ba0b2:{NFSU2_TR(0x5ba0b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ba126;}}
}
B5ba0b4:L5ba0b4:{c.instructions+=13;NFSU2_TR(0x5ba0b4);
__builtin_memmove((R+4),gp(0x7fee7c),4);
}
B5ba0ba:{NFSU2_TR(0x5ba0ba);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5ba0bf:{NFSU2_TR(0x5ba0bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ba0c1:{NFSU2_TR(0x5ba0c1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba0c2:{NFSU2_TR(0x5ba0c2);
u8 U[4];
w4(U+0,u32(0x8708a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba0c7:{NFSU2_TR(0x5ba0c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba0c8:{NFSU2_TR(0x5ba0c8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba0c9:{NFSU2_TR(0x5ba0c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba0ca:{NFSU2_TR(0x5ba0ca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba0cb:{NFSU2_TR(0x5ba0cb);
u8 U[4];
w4(U+0,u32(0xf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba0d0:{NFSU2_TR(0x5ba0d0);
u8 U[4];
w4(U+0,u32(0x140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba0d5:{NFSU2_TR(0x5ba0d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba0d6:{NFSU2_TR(0x5ba0d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba0d9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba0d9:L5ba0d9:{c.instructions+=2;NFSU2_TR(0x5ba0d9);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ba0db:{NFSU2_TR(0x5ba0db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ba126;}}
}
B5ba0dd:L5ba0dd:{c.instructions+=2;NFSU2_TR(0x5ba0dd);
u8 U[14];
__builtin_memmove((U+6),gp(0x8764ec),4);
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
B5ba0e4:{NFSU2_TR(0x5ba0e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ba122;}}
}
B5ba0e6:L5ba0e6:{c.instructions+=13;NFSU2_TR(0x5ba0e6);
__builtin_memmove((R+4),gp(0x7fee78),4);
}
B5ba0ec:{NFSU2_TR(0x5ba0ec);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5ba0f1:{NFSU2_TR(0x5ba0f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ba0f3:{NFSU2_TR(0x5ba0f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba0f4:{NFSU2_TR(0x5ba0f4);
u8 U[4];
w4(U+0,u32(0x87089cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba0f9:{NFSU2_TR(0x5ba0f9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba0fa:{NFSU2_TR(0x5ba0fa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba0fb:{NFSU2_TR(0x5ba0fb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba0fd:{NFSU2_TR(0x5ba0fd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba0ff:{NFSU2_TR(0x5ba0ff);
u8 U[4];
w4(U+0,u32(0xf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba104:{NFSU2_TR(0x5ba104);
u8 U[4];
w4(U+0,u32(0x140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba109:{NFSU2_TR(0x5ba109);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba10a:{NFSU2_TR(0x5ba10a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba10dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba10d:L5ba10d:{c.instructions+=2;NFSU2_TR(0x5ba10d);
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
B5ba10f:{NFSU2_TR(0x5ba10f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ba126;}}
}
B5ba111:L5ba111:{c.instructions+=6;NFSU2_TR(0x5ba111);
__builtin_memmove((R+0),gp(0x87089c),4);
}
B5ba116:{NFSU2_TR(0x5ba116);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ba118:{NFSU2_TR(0x5ba118);
u8 U[4];
w4(U+0,u32(0x870898ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba11d:{NFSU2_TR(0x5ba11d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba11e:{NFSU2_TR(0x5ba11e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba11f:{NFSU2_TR(0x5ba11f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba122ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba122:L5ba122:{c.instructions+=2;NFSU2_TR(0x5ba122);
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
B5ba124:{NFSU2_TR(0x5ba124);
if(r1(R+518)){{goto L5ba19b;}}
}
B5ba126:L5ba126:{c.instructions+=5;NFSU2_TR(0x5ba126);
__builtin_memmove((R+0),gp(0x870894),4);
}
B5ba12b:{NFSU2_TR(0x5ba12b);
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
B5ba12d:{NFSU2_TR(0x5ba12d);
__builtin_memmove(gp(0x870cd4),(R+24),4);
}
B5ba133:{NFSU2_TR(0x5ba133);
__builtin_memmove(gp(0x8764ec),(R+24),4);
}
B5ba139:{NFSU2_TR(0x5ba139);
if(r1(R+518)){{goto L5ba147;}}
}
B5ba13b:L5ba13b:{c.instructions+=3;NFSU2_TR(0x5ba13b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ba13d:{NFSU2_TR(0x5ba13d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba13e:{NFSU2_TR(0x5ba13e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba141ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba141:L5ba141:{c.instructions+=1;NFSU2_TR(0x5ba141);
__builtin_memmove(gp(0x870894),(R+24),4);
}
B5ba147:L5ba147:{c.instructions+=3;NFSU2_TR(0x5ba147);
__builtin_memmove((R+0),gp(0x870890),4);
}
B5ba14c:{NFSU2_TR(0x5ba14c);
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
B5ba14e:{NFSU2_TR(0x5ba14e);
if(r1(R+518)){{goto L5ba15c;}}
}
B5ba150:L5ba150:{c.instructions+=3;NFSU2_TR(0x5ba150);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ba152:{NFSU2_TR(0x5ba152);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba153:{NFSU2_TR(0x5ba153);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba156ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba156:L5ba156:{c.instructions+=1;NFSU2_TR(0x5ba156);
__builtin_memmove(gp(0x870890),(R+24),4);
}
B5ba15c:L5ba15c:{c.instructions+=3;NFSU2_TR(0x5ba15c);
__builtin_memmove((R+0),gp(0x8708a0),4);
}
B5ba161:{NFSU2_TR(0x5ba161);
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
B5ba163:{NFSU2_TR(0x5ba163);
if(r1(R+518)){{goto L5ba171;}}
}
B5ba165:L5ba165:{c.instructions+=3;NFSU2_TR(0x5ba165);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ba167:{NFSU2_TR(0x5ba167);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba168:{NFSU2_TR(0x5ba168);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba16bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba16b:L5ba16b:{c.instructions+=1;NFSU2_TR(0x5ba16b);
__builtin_memmove(gp(0x8708a0),(R+24),4);
}
B5ba171:L5ba171:{c.instructions+=3;NFSU2_TR(0x5ba171);
__builtin_memmove((R+0),gp(0x87089c),4);
}
B5ba176:{NFSU2_TR(0x5ba176);
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
B5ba178:{NFSU2_TR(0x5ba178);
if(r1(R+518)){{goto L5ba186;}}
}
B5ba17a:L5ba17a:{c.instructions+=3;NFSU2_TR(0x5ba17a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ba17c:{NFSU2_TR(0x5ba17c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba17d:{NFSU2_TR(0x5ba17d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba180ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba180:L5ba180:{c.instructions+=1;NFSU2_TR(0x5ba180);
__builtin_memmove(gp(0x87089c),(R+24),4);
}
B5ba186:L5ba186:{c.instructions+=3;NFSU2_TR(0x5ba186);
__builtin_memmove((R+0),gp(0x870898),4);
}
B5ba18b:{NFSU2_TR(0x5ba18b);
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
B5ba18d:{NFSU2_TR(0x5ba18d);
if(r1(R+518)){{goto L5ba19b;}}
}
B5ba18f:L5ba18f:{c.instructions+=3;NFSU2_TR(0x5ba18f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ba191:{NFSU2_TR(0x5ba191);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba192:{NFSU2_TR(0x5ba192);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba195ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba195:L5ba195:{c.instructions+=1;NFSU2_TR(0x5ba195);
__builtin_memmove(gp(0x870898),(R+24),4);
}
B5ba19b:L5ba19b:{c.instructions+=2;NFSU2_TR(0x5ba19b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ba19c:{NFSU2_TR(0x5ba19c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ba1a0:L5ba1a0:{c.instructions+=15;NFSU2_TR(0x5ba1a0);
__builtin_memmove((R+8),gp(0x7fee78),4);
}
B5ba1a6:{NFSU2_TR(0x5ba1a6);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5ba1ab:{NFSU2_TR(0x5ba1ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ba1ad:{NFSU2_TR(0x5ba1ad);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba1af:{NFSU2_TR(0x5ba1af);
u8 U[4];
w4(U+0,u32(0x8708a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba1b4:{NFSU2_TR(0x5ba1b4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba1b6:{NFSU2_TR(0x5ba1b6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba1b7:{NFSU2_TR(0x5ba1b7);
__builtin_memmove((R+8),gp(0x7fee84),4);
}
B5ba1bd:{NFSU2_TR(0x5ba1bd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba1bf:{NFSU2_TR(0x5ba1bf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba1c1:{NFSU2_TR(0x5ba1c1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba1c2:{NFSU2_TR(0x5ba1c2);
__builtin_memmove((R+8),gp(0x7fee80),4);
}
B5ba1c8:{NFSU2_TR(0x5ba1c8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba1c9:{NFSU2_TR(0x5ba1c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba1ca:{NFSU2_TR(0x5ba1ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba1cdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba1cd:L5ba1cd:{c.instructions+=6;NFSU2_TR(0x5ba1cd);
__builtin_memmove((R+0),gp(0x8708a4),4);
}
B5ba1d2:{NFSU2_TR(0x5ba1d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ba1d4:{NFSU2_TR(0x5ba1d4);
u8 U[4];
w4(U+0,u32(0x8708a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba1d9:{NFSU2_TR(0x5ba1d9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba1db:{NFSU2_TR(0x5ba1db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba1dc:{NFSU2_TR(0x5ba1dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba1dfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba1df:L5ba1df:{c.instructions+=15;NFSU2_TR(0x5ba1df);
__builtin_memmove((R+4),gp(0x7fee7c),4);
}
B5ba1e5:{NFSU2_TR(0x5ba1e5);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5ba1ea:{NFSU2_TR(0x5ba1ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ba1ec:{NFSU2_TR(0x5ba1ec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba1ee:{NFSU2_TR(0x5ba1ee);
u8 U[4];
w4(U+0,u32(0x8708acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba1f3:{NFSU2_TR(0x5ba1f3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba1f5:{NFSU2_TR(0x5ba1f5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba1f7:{NFSU2_TR(0x5ba1f7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba1f9:{NFSU2_TR(0x5ba1f9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba1fa:{NFSU2_TR(0x5ba1fa);
__builtin_memmove((R+4),gp(0x7fee84),4);
}
B5ba200:{NFSU2_TR(0x5ba200);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba201:{NFSU2_TR(0x5ba201);
__builtin_memmove((R+4),gp(0x7fee80),4);
}
B5ba207:{NFSU2_TR(0x5ba207);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba208:{NFSU2_TR(0x5ba208);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba209:{NFSU2_TR(0x5ba209);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba20cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba20c:L5ba20c:{c.instructions+=1;NFSU2_TR(0x5ba20c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ba210:L5ba210:{c.instructions+=13;NFSU2_TR(0x5ba210);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba211:{NFSU2_TR(0x5ba211);
__builtin_memmove((R+4),gp(0x7fee6c),4);
}
B5ba217:{NFSU2_TR(0x5ba217);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba218:{NFSU2_TR(0x5ba218);
__builtin_memmove((R+12),gp(0x870984),4);
}
B5ba21e:{NFSU2_TR(0x5ba21e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba21f:{NFSU2_TR(0x5ba21f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba220:{NFSU2_TR(0x5ba220);
__builtin_memmove((R+24),gp(0x87097c),4);
}
B5ba226:{NFSU2_TR(0x5ba226);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5ba228:{NFSU2_TR(0x5ba228);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba229:{NFSU2_TR(0x5ba229);
__builtin_memmove((R+28),gp(0x870980),4);
}
B5ba22f:{NFSU2_TR(0x5ba22f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ba233:{NFSU2_TR(0x5ba233);
w4(R+8,u32(0x1ull));
}
B5ba238:{NFSU2_TR(0x5ba238);
{goto L5ba240;}
}
B5ba240:L5ba240:{c.instructions+=6;NFSU2_TR(0x5ba240);
__builtin_memmove((R+0),(R+20),4);
}
B5ba242:{NFSU2_TR(0x5ba242);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5ba245:{NFSU2_TR(0x5ba245);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x86e768ull))));
}
B5ba24a:{NFSU2_TR(0x5ba24a);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B5ba24d:{NFSU2_TR(0x5ba24d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5ba24f:{NFSU2_TR(0x5ba24f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5ba37b;}}
}
B5ba255:L5ba255:{c.instructions+=1;NFSU2_TR(0x5ba255);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5ba394ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba25c:L5ba25c:{c.instructions+=6;NFSU2_TR(0x5ba25c);
__builtin_memmove((R+20),gp(0x870854),4);
}
B5ba262:{NFSU2_TR(0x5ba262);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ba265:{NFSU2_TR(0x5ba265);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ba268:{NFSU2_TR(0x5ba268);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ba26b:{NFSU2_TR(0x5ba26b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ba26e:{NFSU2_TR(0x5ba26e);
{goto L5ba375;}
}
B5ba273:L5ba273:{c.instructions+=5;NFSU2_TR(0x5ba273);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ba276:{NFSU2_TR(0x5ba276);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ba27d:{NFSU2_TR(0x5ba27d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ba280:{NFSU2_TR(0x5ba280);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ba283:{NFSU2_TR(0x5ba283);
{goto L5ba378;}
}
B5ba288:L5ba288:{c.instructions+=7;NFSU2_TR(0x5ba288);
__builtin_memmove((R+20),gp(0x870890),4);
}
B5ba28e:{NFSU2_TR(0x5ba28e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ba291:{NFSU2_TR(0x5ba291);
__builtin_memmove((R+20),gp(0x8708a0),4);
}
B5ba297:{NFSU2_TR(0x5ba297);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ba29e:{NFSU2_TR(0x5ba29e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x140ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ba2a5:{NFSU2_TR(0x5ba2a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w4(U+4,u32(0xf0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ba2ac:{NFSU2_TR(0x5ba2ac);
{goto L5ba375;}
}
B5ba2b1:L5ba2b1:{c.instructions+=10;NFSU2_TR(0x5ba2b1);
__builtin_memmove((R+20),gp(0x8708a8),4);
}
B5ba2b7:{NFSU2_TR(0x5ba2b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ba2ba:{NFSU2_TR(0x5ba2ba);
__builtin_memmove((R+20),gp(0x8708ac),4);
}
B5ba2c0:{NFSU2_TR(0x5ba2c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ba2c3:{NFSU2_TR(0x5ba2c3);
__builtin_memmove((R+20),gp(0x7fee80),4);
}
B5ba2c9:{NFSU2_TR(0x5ba2c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ba2cc:{NFSU2_TR(0x5ba2cc);
__builtin_memmove((R+20),gp(0x7fee84),4);
}
B5ba2d2:{NFSU2_TR(0x5ba2d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ba2d9:{NFSU2_TR(0x5ba2d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ba2dc:{NFSU2_TR(0x5ba2dc);
{goto L5ba378;}
}
B5ba2e1:L5ba2e1:{c.instructions+=5;NFSU2_TR(0x5ba2e1);
__builtin_memmove((R+20),gp(0x87085c),4);
}
B5ba2e7:{NFSU2_TR(0x5ba2e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ba2ea:{NFSU2_TR(0x5ba2ea);
__builtin_memmove((R+20),gp(0x870874),4);
}
B5ba2f0:{NFSU2_TR(0x5ba2f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x11ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ba2f7:{NFSU2_TR(0x5ba2f7);
{goto L5ba36f;}
}
B5ba2f9:L5ba2f9:{c.instructions+=5;NFSU2_TR(0x5ba2f9);
__builtin_memmove((R+20),gp(0x870860),4);
}
B5ba2ff:{NFSU2_TR(0x5ba2ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ba302:{NFSU2_TR(0x5ba302);
__builtin_memmove((R+20),gp(0x870878),4);
}
B5ba308:{NFSU2_TR(0x5ba308);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x13ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ba30f:{NFSU2_TR(0x5ba30f);
{goto L5ba36f;}
}
B5ba311:L5ba311:{c.instructions+=5;NFSU2_TR(0x5ba311);
__builtin_memmove((R+20),gp(0x870864),4);
}
B5ba317:{NFSU2_TR(0x5ba317);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ba31a:{NFSU2_TR(0x5ba31a);
__builtin_memmove((R+20),gp(0x87087c),4);
}
B5ba320:{NFSU2_TR(0x5ba320);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x14ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ba327:{NFSU2_TR(0x5ba327);
{goto L5ba36f;}
}
B5ba329:L5ba329:{c.instructions+=5;NFSU2_TR(0x5ba329);
__builtin_memmove((R+20),gp(0x870868),4);
}
B5ba32f:{NFSU2_TR(0x5ba32f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ba332:{NFSU2_TR(0x5ba332);
__builtin_memmove((R+20),gp(0x870880),4);
}
B5ba338:{NFSU2_TR(0x5ba338);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x15ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ba33f:{NFSU2_TR(0x5ba33f);
{goto L5ba36f;}
}
B5ba341:L5ba341:{c.instructions+=5;NFSU2_TR(0x5ba341);
__builtin_memmove((R+20),gp(0x87086c),4);
}
B5ba347:{NFSU2_TR(0x5ba347);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ba34a:{NFSU2_TR(0x5ba34a);
__builtin_memmove((R+20),gp(0x870884),4);
}
B5ba350:{NFSU2_TR(0x5ba350);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ba357:{NFSU2_TR(0x5ba357);
{goto L5ba36f;}
}
B5ba359:L5ba359:{c.instructions+=4;NFSU2_TR(0x5ba359);
__builtin_memmove((R+20),gp(0x870870),4);
}
B5ba35f:{NFSU2_TR(0x5ba35f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ba362:{NFSU2_TR(0x5ba362);
__builtin_memmove((R+20),gp(0x870888),4);
}
B5ba368:{NFSU2_TR(0x5ba368);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x12ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ba36f:L5ba36f:{c.instructions+=2;NFSU2_TR(0x5ba36f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ba372:{NFSU2_TR(0x5ba372);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ba375:L5ba375:{c.instructions+=1;NFSU2_TR(0x5ba375);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ba378:L5ba378:{c.instructions+=1;NFSU2_TR(0x5ba378);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ba37b:L5ba37b:{c.instructions+=5;NFSU2_TR(0x5ba37b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5ba37f:{NFSU2_TR(0x5ba37f);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5ba380:{NFSU2_TR(0x5ba380);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B5ba383:{NFSU2_TR(0x5ba383);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ba387:{NFSU2_TR(0x5ba387);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ba240u);}goto L5ba240;}}
}
B5ba38d:L5ba38d:{c.instructions+=6;NFSU2_TR(0x5ba38d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ba38e:{NFSU2_TR(0x5ba38e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ba38f:{NFSU2_TR(0x5ba38f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ba390:{NFSU2_TR(0x5ba390);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ba391:{NFSU2_TR(0x5ba391);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ba392:{NFSU2_TR(0x5ba392);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ba3c0:L5ba3c0:{c.instructions+=3;NFSU2_TR(0x5ba3c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B5ba3c3:{NFSU2_TR(0x5ba3c3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba3c4:{NFSU2_TR(0x5ba3c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba3c9ull));
TAIL_STATIC(0x5cf420u,5cf);
}
B5ba3c9:L5ba3c9:{c.instructions+=8;NFSU2_TR(0x5ba3c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ba3cd:{NFSU2_TR(0x5ba3cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ba3d0:{NFSU2_TR(0x5ba3d0);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5ba3d5:{NFSU2_TR(0x5ba3d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ba3d7:{NFSU2_TR(0x5ba3d7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba3d8:{NFSU2_TR(0x5ba3d8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba3da:{NFSU2_TR(0x5ba3da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba3db:{NFSU2_TR(0x5ba3db);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba3e1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba3e1:L5ba3e1:{c.instructions+=6;NFSU2_TR(0x5ba3e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ba3e4:{NFSU2_TR(0x5ba3e4);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5ba3e9:{NFSU2_TR(0x5ba3e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ba3eb:{NFSU2_TR(0x5ba3eb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba3ec:{NFSU2_TR(0x5ba3ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba3ed:{NFSU2_TR(0x5ba3ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba3f3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba3f3:L5ba3f3:{c.instructions+=3;NFSU2_TR(0x5ba3f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ba3f7:{NFSU2_TR(0x5ba3f7);
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
B5ba3f9:{NFSU2_TR(0x5ba3f9);
if(r1(R+518)){{goto L5ba455;}}
}
B5ba3fb:L5ba3fb:{c.instructions+=3;NFSU2_TR(0x5ba3fb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ba3fe:{NFSU2_TR(0x5ba3fe);
w4(R+4,u32(0xff000000ull));
}
B5ba403:{NFSU2_TR(0x5ba403);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ba407;}}
}
B5ba405:L5ba405:{c.instructions+=1;NFSU2_TR(0x5ba405);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5ba407:L5ba407:{c.instructions+=3;NFSU2_TR(0x5ba407);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ba409:{NFSU2_TR(0x5ba409);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ba40c:{NFSU2_TR(0x5ba40c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5ba413;}}
}
B5ba40e:L5ba40e:{c.instructions+=2;NFSU2_TR(0x5ba40e);
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
B5ba411:{NFSU2_TR(0x5ba411);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ba439;}}
}
B5ba413:L5ba413:{c.instructions+=2;NFSU2_TR(0x5ba413);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5ba416:{NFSU2_TR(0x5ba416);
if(r1(R+518)){{goto L5ba439;}}
}
B5ba418:L5ba418:{c.instructions+=2;NFSU2_TR(0x5ba418);
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
B5ba41b:{NFSU2_TR(0x5ba41b);
if(r1(R+518)){{goto L5ba439;}}
}
B5ba41d:L5ba41d:{c.instructions+=7;NFSU2_TR(0x5ba41d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba41f:{NFSU2_TR(0x5ba41f);
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
B5ba422:{NFSU2_TR(0x5ba422);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5ba427:{NFSU2_TR(0x5ba427);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ba429:{NFSU2_TR(0x5ba429);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba42e:{NFSU2_TR(0x5ba42e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba42f:{NFSU2_TR(0x5ba42f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ba435;}}
}
B5ba431:L5ba431:{c.instructions+=2;NFSU2_TR(0x5ba431);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba433:{NFSU2_TR(0x5ba433);
{goto L5ba44a;}
}
B5ba435:L5ba435:{c.instructions+=2;NFSU2_TR(0x5ba435);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba437:{NFSU2_TR(0x5ba437);
{goto L5ba44a;}
}
B5ba439:L5ba439:{c.instructions+=6;NFSU2_TR(0x5ba439);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5ba43e:{NFSU2_TR(0x5ba43e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ba440:{NFSU2_TR(0x5ba440);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba442:{NFSU2_TR(0x5ba442);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba447:{NFSU2_TR(0x5ba447);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba448:{NFSU2_TR(0x5ba448);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba44a:L5ba44a:{c.instructions+=4;NFSU2_TR(0x5ba44a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba44c:{NFSU2_TR(0x5ba44c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba44e:{NFSU2_TR(0x5ba44e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba44f:{NFSU2_TR(0x5ba44f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba455ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba455:L5ba455:{c.instructions+=14;NFSU2_TR(0x5ba455);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ba458:{NFSU2_TR(0x5ba458);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ba45b:{NFSU2_TR(0x5ba45b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ba45f:{NFSU2_TR(0x5ba45f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ba463:{NFSU2_TR(0x5ba463);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5ba468:{NFSU2_TR(0x5ba468);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ba46c:{NFSU2_TR(0x5ba46c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba46d:{NFSU2_TR(0x5ba46d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ba475:{NFSU2_TR(0x5ba475);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ba47d:{NFSU2_TR(0x5ba47d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ba485:{NFSU2_TR(0x5ba485);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ba48d:{NFSU2_TR(0x5ba48d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ba48f:{NFSU2_TR(0x5ba48f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba490:{NFSU2_TR(0x5ba490);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba496ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba496:L5ba496:{c.instructions+=5;NFSU2_TR(0x5ba496);
__builtin_memmove(gp(0x870848),(R+24),4);
}
B5ba49c:{NFSU2_TR(0x5ba49c);
s4(0x870910,u32(0x0ull));
}
B5ba4a6:{NFSU2_TR(0x5ba4a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ba4a7:{NFSU2_TR(0x5ba4a7);
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
B5ba4aa:{NFSU2_TR(0x5ba4aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ba4b0:L5ba4b0:{c.instructions+=5;NFSU2_TR(0x5ba4b0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba4b1:{NFSU2_TR(0x5ba4b1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5ba4b3:{NFSU2_TR(0x5ba4b3);
__builtin_memmove(gp(0x870858),(R+28),4);
}
B5ba4b9:{NFSU2_TR(0x5ba4b9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ba4bb:{NFSU2_TR(0x5ba4bb);
{goto L5ba4c0;}
}
B5ba4c0:L5ba4c0:{c.instructions+=2;NFSU2_TR(0x5ba4c0);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x87085cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5ba4c6:{NFSU2_TR(0x5ba4c6);
if(r1(R+518)){{goto L5ba4ce;}}
}
B5ba4c8:L5ba4c8:{c.instructions+=1;NFSU2_TR(0x5ba4c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x87085cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ba4ce:L5ba4ce:{c.instructions+=2;NFSU2_TR(0x5ba4ce);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x870874ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5ba4d4:{NFSU2_TR(0x5ba4d4);
if(r1(R+518)){{goto L5ba4dc;}}
}
B5ba4d6:L5ba4d6:{c.instructions+=1;NFSU2_TR(0x5ba4d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x870874ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ba4dc:L5ba4dc:{c.instructions+=3;NFSU2_TR(0x5ba4dc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5ba4df:{NFSU2_TR(0x5ba4df);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x18ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ba4e2:{NFSU2_TR(0x5ba4e2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ba4c0u);}goto L5ba4c0;}}
}
B5ba4e4:L5ba4e4:{c.instructions+=3;NFSU2_TR(0x5ba4e4);
u8 U[14];
__builtin_memmove((U+6),gp(0x870cb8),4);
w1(R+512,u8((r4(U+6))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+28)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ba4ea:{NFSU2_TR(0x5ba4ea);
__builtin_memmove(gp(0x87088c),(R+28),4);
}
B5ba4f0:{NFSU2_TR(0x5ba4f0);
if(r1(R+518)){{goto L5ba5fd;}}
}
B5ba4f6:L5ba4f6:{c.instructions+=15;NFSU2_TR(0x5ba4f6);
__builtin_memmove((R+8),gp(0x7fee70),4);
}
B5ba4fc:{NFSU2_TR(0x5ba4fc);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5ba501:{NFSU2_TR(0x5ba501);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ba503:{NFSU2_TR(0x5ba503);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba504:{NFSU2_TR(0x5ba504);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba505:{NFSU2_TR(0x5ba505);
u8 U[4];
w4(U+0,u32(0x87088cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba50a:{NFSU2_TR(0x5ba50a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba50c:{NFSU2_TR(0x5ba50c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba50d:{NFSU2_TR(0x5ba50d);
__builtin_memmove((R+8),gp(0x7fee6c),4);
}
B5ba513:{NFSU2_TR(0x5ba513);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba514:{NFSU2_TR(0x5ba514);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba516:{NFSU2_TR(0x5ba516);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+8),r4(R+8)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ba518:{NFSU2_TR(0x5ba518);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba519:{NFSU2_TR(0x5ba519);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba51a:{NFSU2_TR(0x5ba51a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba51dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba51d:L5ba51d:{c.instructions+=2;NFSU2_TR(0x5ba51d);
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
B5ba51f:{NFSU2_TR(0x5ba51f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ba5a8;}}
}
B5ba525:L5ba525:{c.instructions+=13;NFSU2_TR(0x5ba525);
__builtin_memmove((R+8),gp(0x7fee70),4);
}
B5ba52b:{NFSU2_TR(0x5ba52b);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5ba530:{NFSU2_TR(0x5ba530);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ba532:{NFSU2_TR(0x5ba532);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba533:{NFSU2_TR(0x5ba533);
u8 U[4];
w4(U+0,u32(0x870858ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba538:{NFSU2_TR(0x5ba538);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba539:{NFSU2_TR(0x5ba539);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba53a:{NFSU2_TR(0x5ba53a);
__builtin_memmove((R+8),gp(0x7fee6c),4);
}
B5ba540:{NFSU2_TR(0x5ba540);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba542:{NFSU2_TR(0x5ba542);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba544:{NFSU2_TR(0x5ba544);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba545:{NFSU2_TR(0x5ba545);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba546:{NFSU2_TR(0x5ba546);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba549ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba549:L5ba549:{c.instructions+=2;NFSU2_TR(0x5ba549);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ba54b:{NFSU2_TR(0x5ba54b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ba5a8;}}
}
B5ba54d:L5ba54d:{c.instructions+=2;NFSU2_TR(0x5ba54d);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ba54f:{NFSU2_TR(0x5ba54f);
}
B5ba550:L5ba550:{c.instructions+=8;NFSU2_TR(0x5ba550);
__builtin_memmove((R+0),gp(0x870858),4);
}
B5ba555:{NFSU2_TR(0x5ba555);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ba557:{NFSU2_TR(0x5ba557);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x87085cull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5ba55e:{NFSU2_TR(0x5ba55e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba55f:{NFSU2_TR(0x5ba55f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba560:{NFSU2_TR(0x5ba560);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba561:{NFSU2_TR(0x5ba561);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba562:{NFSU2_TR(0x5ba562);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba565ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba565:L5ba565:{c.instructions+=2;NFSU2_TR(0x5ba565);
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
B5ba567:{NFSU2_TR(0x5ba567);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ba59e;}}
}
B5ba569:L5ba569:{c.instructions+=4;NFSU2_TR(0x5ba569);
__builtin_memmove((R+0),gp(0x870858),4);
}
B5ba56e:{NFSU2_TR(0x5ba56e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ba570:{NFSU2_TR(0x5ba570);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba571:{NFSU2_TR(0x5ba571);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba574ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba574:L5ba574:{c.instructions+=15;NFSU2_TR(0x5ba574);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5ba579:{NFSU2_TR(0x5ba579);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ba57b:{NFSU2_TR(0x5ba57b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba57c:{NFSU2_TR(0x5ba57c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x870874ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5ba583:{NFSU2_TR(0x5ba583);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba584:{NFSU2_TR(0x5ba584);
__builtin_memmove((R+4),gp(0x7fee74),4);
}
B5ba58a:{NFSU2_TR(0x5ba58a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba58b:{NFSU2_TR(0x5ba58b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba58c:{NFSU2_TR(0x5ba58c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba58d:{NFSU2_TR(0x5ba58d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba58e:{NFSU2_TR(0x5ba58e);
__builtin_memmove((R+4),gp(0x7fee6c),4);
}
B5ba594:{NFSU2_TR(0x5ba594);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba595:{NFSU2_TR(0x5ba595);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba596:{NFSU2_TR(0x5ba596);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba597:{NFSU2_TR(0x5ba597);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba59aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba59a:L5ba59a:{c.instructions+=2;NFSU2_TR(0x5ba59a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ba59c:{NFSU2_TR(0x5ba59c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ba5a8;}}
}
B5ba59e:L5ba59e:{c.instructions+=3;NFSU2_TR(0x5ba59e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5ba59f:{NFSU2_TR(0x5ba59f);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B5ba5a2:{NFSU2_TR(0x5ba5a2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ba550u);}goto L5ba550;}}
}
B5ba5a4:L5ba5a4:{c.instructions+=2;NFSU2_TR(0x5ba5a4);
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
B5ba5a6:{NFSU2_TR(0x5ba5a6);
if(r1(R+518)){{goto L5ba5fc;}}
}
B5ba5a8:L5ba5a8:{c.instructions+=5;NFSU2_TR(0x5ba5a8);
__builtin_memmove((R+0),gp(0x870858),4);
}
B5ba5ad:{NFSU2_TR(0x5ba5ad);
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
B5ba5af:{NFSU2_TR(0x5ba5af);
__builtin_memmove(gp(0x870cb8),(R+28),4);
}
B5ba5b5:{NFSU2_TR(0x5ba5b5);
__builtin_memmove(gp(0x8764d0),(R+28),4);
}
B5ba5bb:{NFSU2_TR(0x5ba5bb);
if(r1(R+518)){{goto L5ba5c9;}}
}
B5ba5bd:L5ba5bd:{c.instructions+=3;NFSU2_TR(0x5ba5bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ba5bf:{NFSU2_TR(0x5ba5bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba5c0:{NFSU2_TR(0x5ba5c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba5c3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba5c3:L5ba5c3:{c.instructions+=1;NFSU2_TR(0x5ba5c3);
__builtin_memmove(gp(0x870858),(R+28),4);
}
B5ba5c9:L5ba5c9:{c.instructions+=2;NFSU2_TR(0x5ba5c9);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5ba5cb:{NFSU2_TR(0x5ba5cb);
{goto L5ba5d0;}
}
B5ba5d0:L5ba5d0:{c.instructions+=2;NFSU2_TR(0x5ba5d0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x87085cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5ba5d6:{NFSU2_TR(0x5ba5d6);
if(r1(R+518)){{goto L5ba5de;}}
}
B5ba5d8:L5ba5d8:{c.instructions+=1;NFSU2_TR(0x5ba5d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x87085cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ba5de:L5ba5de:{c.instructions+=3;NFSU2_TR(0x5ba5de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x870874ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ba5e4:{NFSU2_TR(0x5ba5e4);
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
B5ba5e6:{NFSU2_TR(0x5ba5e6);
if(r1(R+518)){{goto L5ba5f4;}}
}
B5ba5e8:L5ba5e8:{c.instructions+=3;NFSU2_TR(0x5ba5e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ba5ea:{NFSU2_TR(0x5ba5ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba5eb:{NFSU2_TR(0x5ba5eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba5eeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba5ee:L5ba5ee:{c.instructions+=1;NFSU2_TR(0x5ba5ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x870874ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ba5f4:L5ba5f4:{c.instructions+=3;NFSU2_TR(0x5ba5f4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5ba5f7:{NFSU2_TR(0x5ba5f7);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x18ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x18ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ba5fa:{NFSU2_TR(0x5ba5fa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ba5d0u);}goto L5ba5d0;}}
}
B5ba5fc:L5ba5fc:{c.instructions+=1;NFSU2_TR(0x5ba5fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ba5fd:L5ba5fd:{c.instructions+=2;NFSU2_TR(0x5ba5fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ba5fe:{NFSU2_TR(0x5ba5fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ba600:L5ba600:{c.instructions+=2;NFSU2_TR(0x5ba600);
w4(R+0,u32(0x871bc0ull));
}
B5ba605:{NFSU2_TR(0x5ba605);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ba610:L5ba610:{c.instructions+=4;NFSU2_TR(0x5ba610);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba611:{NFSU2_TR(0x5ba611);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba612:{NFSU2_TR(0x5ba612);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5ba614:{NFSU2_TR(0x5ba614);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5ba616:L5ba616:{c.instructions+=6;NFSU2_TR(0x5ba616);
__builtin_memmove((R+0),(R+24),4);
}
B5ba618:{NFSU2_TR(0x5ba618);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5ba61b:{NFSU2_TR(0x5ba61b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x86e768ull))));
}
B5ba620:{NFSU2_TR(0x5ba620);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5ba622:{NFSU2_TR(0x5ba622);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5ba624:{NFSU2_TR(0x5ba624);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ba62f;}}
}
B5ba626:L5ba626:{c.instructions+=4;NFSU2_TR(0x5ba626);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ba629:{NFSU2_TR(0x5ba629);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ba62b:{NFSU2_TR(0x5ba62b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba62c:{NFSU2_TR(0x5ba62c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba62full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba62f:L5ba62f:{c.instructions+=3;NFSU2_TR(0x5ba62f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5ba630:{NFSU2_TR(0x5ba630);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ba633:{NFSU2_TR(0x5ba633);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ba616u);}goto L5ba616;}}
}
B5ba635:L5ba635:{c.instructions+=2;NFSU2_TR(0x5ba635);
w4(R+24,u32(0x870874ull));
}
B5ba63a:{NFSU2_TR(0x5ba63a);
__builtin_memmove((R+12),(R+12),4);
}
B5ba640:L5ba640:{c.instructions+=3;NFSU2_TR(0x5ba640);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ba642:{NFSU2_TR(0x5ba642);
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
B5ba644:{NFSU2_TR(0x5ba644);
if(r1(R+518)){{goto L5ba64e;}}
}
B5ba646:L5ba646:{c.instructions+=3;NFSU2_TR(0x5ba646);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ba648:{NFSU2_TR(0x5ba648);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba649:{NFSU2_TR(0x5ba649);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba64cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba64c:L5ba64c:{c.instructions+=1;NFSU2_TR(0x5ba64c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5ba64e:L5ba64e:{c.instructions+=3;NFSU2_TR(0x5ba64e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5ba651:{NFSU2_TR(0x5ba651);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x87088cull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x87088cull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ba657:{NFSU2_TR(0x5ba657);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ba640u);}goto L5ba640;}}
}
B5ba659:L5ba659:{c.instructions+=3;NFSU2_TR(0x5ba659);
__builtin_memmove((R+0),gp(0x870858),4);
}
B5ba65e:{NFSU2_TR(0x5ba65e);
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
B5ba660:{NFSU2_TR(0x5ba660);
if(r1(R+518)){{goto L5ba66e;}}
}
B5ba662:L5ba662:{c.instructions+=3;NFSU2_TR(0x5ba662);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ba664:{NFSU2_TR(0x5ba664);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba665:{NFSU2_TR(0x5ba665);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba668ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba668:L5ba668:{c.instructions+=1;NFSU2_TR(0x5ba668);
__builtin_memmove(gp(0x870858),(R+28),4);
}
B5ba66e:L5ba66e:{c.instructions+=3;NFSU2_TR(0x5ba66e);
__builtin_memmove((R+0),gp(0x87088c),4);
}
B5ba673:{NFSU2_TR(0x5ba673);
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
B5ba675:{NFSU2_TR(0x5ba675);
if(r1(R+518)){{goto L5ba683;}}
}
B5ba677:L5ba677:{c.instructions+=3;NFSU2_TR(0x5ba677);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ba679:{NFSU2_TR(0x5ba679);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba67a:{NFSU2_TR(0x5ba67a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba67dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba67d:L5ba67d:{c.instructions+=1;NFSU2_TR(0x5ba67d);
__builtin_memmove(gp(0x87088c),(R+28),4);
}
B5ba683:L5ba683:{c.instructions+=3;NFSU2_TR(0x5ba683);
__builtin_memmove((R+0),gp(0x87084c),4);
}
B5ba688:{NFSU2_TR(0x5ba688);
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
B5ba68a:{NFSU2_TR(0x5ba68a);
if(r1(R+518)){{goto L5ba698;}}
}
B5ba68c:L5ba68c:{c.instructions+=3;NFSU2_TR(0x5ba68c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ba68e:{NFSU2_TR(0x5ba68e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba68f:{NFSU2_TR(0x5ba68f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba692ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba692:L5ba692:{c.instructions+=1;NFSU2_TR(0x5ba692);
__builtin_memmove(gp(0x87084c),(R+28),4);
}
B5ba698:L5ba698:{c.instructions+=3;NFSU2_TR(0x5ba698);
__builtin_memmove((R+0),gp(0x870850),4);
}
B5ba69d:{NFSU2_TR(0x5ba69d);
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
B5ba69f:{NFSU2_TR(0x5ba69f);
if(r1(R+518)){{goto L5ba6ad;}}
}
B5ba6a1:L5ba6a1:{c.instructions+=3;NFSU2_TR(0x5ba6a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ba6a3:{NFSU2_TR(0x5ba6a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba6a4:{NFSU2_TR(0x5ba6a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba6a7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba6a7:L5ba6a7:{c.instructions+=1;NFSU2_TR(0x5ba6a7);
__builtin_memmove(gp(0x870850),(R+28),4);
}
B5ba6ad:L5ba6ad:{c.instructions+=3;NFSU2_TR(0x5ba6ad);
__builtin_memmove((R+0),gp(0x870854),4);
}
B5ba6b2:{NFSU2_TR(0x5ba6b2);
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
B5ba6b4:{NFSU2_TR(0x5ba6b4);
if(r1(R+518)){{goto L5ba6c2;}}
}
B5ba6b6:L5ba6b6:{c.instructions+=3;NFSU2_TR(0x5ba6b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ba6b8:{NFSU2_TR(0x5ba6b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba6b9:{NFSU2_TR(0x5ba6b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba6bcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba6bc:L5ba6bc:{c.instructions+=1;NFSU2_TR(0x5ba6bc);
__builtin_memmove(gp(0x870854),(R+28),4);
}
B5ba6c2:L5ba6c2:{c.instructions+=4;NFSU2_TR(0x5ba6c2);
__builtin_memmove((R+0),gp(0x87097c),4);
}
B5ba6c7:{NFSU2_TR(0x5ba6c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ba6c9:{NFSU2_TR(0x5ba6c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba6ca:{NFSU2_TR(0x5ba6ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba6cdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba6cd:L5ba6cd:{c.instructions+=4;NFSU2_TR(0x5ba6cd);
__builtin_memmove((R+0),gp(0x8708a0),4);
}
B5ba6d2:{NFSU2_TR(0x5ba6d2);
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
B5ba6d4:{NFSU2_TR(0x5ba6d4);
__builtin_memmove(gp(0x87097c),(R+28),4);
}
B5ba6da:{NFSU2_TR(0x5ba6da);
if(r1(R+518)){{goto L5ba6e8;}}
}
B5ba6dc:L5ba6dc:{c.instructions+=3;NFSU2_TR(0x5ba6dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ba6de:{NFSU2_TR(0x5ba6de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba6df:{NFSU2_TR(0x5ba6df);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba6e2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba6e2:L5ba6e2:{c.instructions+=1;NFSU2_TR(0x5ba6e2);
__builtin_memmove(gp(0x8708a0),(R+28),4);
}
B5ba6e8:L5ba6e8:{c.instructions+=3;NFSU2_TR(0x5ba6e8);
__builtin_memmove((R+0),gp(0x870890),4);
}
B5ba6ed:{NFSU2_TR(0x5ba6ed);
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
B5ba6ef:{NFSU2_TR(0x5ba6ef);
if(r1(R+518)){{goto L5ba6fd;}}
}
B5ba6f1:L5ba6f1:{c.instructions+=3;NFSU2_TR(0x5ba6f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ba6f3:{NFSU2_TR(0x5ba6f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba6f4:{NFSU2_TR(0x5ba6f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba6f7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba6f7:L5ba6f7:{c.instructions+=1;NFSU2_TR(0x5ba6f7);
__builtin_memmove(gp(0x870890),(R+28),4);
}
B5ba6fd:L5ba6fd:{c.instructions+=3;NFSU2_TR(0x5ba6fd);
__builtin_memmove((R+0),gp(0x870894),4);
}
B5ba702:{NFSU2_TR(0x5ba702);
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
B5ba704:{NFSU2_TR(0x5ba704);
if(r1(R+518)){{goto L5ba712;}}
}
B5ba706:L5ba706:{c.instructions+=3;NFSU2_TR(0x5ba706);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ba708:{NFSU2_TR(0x5ba708);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba709:{NFSU2_TR(0x5ba709);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba70cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba70c:L5ba70c:{c.instructions+=1;NFSU2_TR(0x5ba70c);
__builtin_memmove(gp(0x870894),(R+28),4);
}
B5ba712:L5ba712:{c.instructions+=3;NFSU2_TR(0x5ba712);
__builtin_memmove((R+0),gp(0x870898),4);
}
B5ba717:{NFSU2_TR(0x5ba717);
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
B5ba719:{NFSU2_TR(0x5ba719);
if(r1(R+518)){{goto L5ba727;}}
}
B5ba71b:L5ba71b:{c.instructions+=3;NFSU2_TR(0x5ba71b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ba71d:{NFSU2_TR(0x5ba71d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba71e:{NFSU2_TR(0x5ba71e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba721ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba721:L5ba721:{c.instructions+=1;NFSU2_TR(0x5ba721);
__builtin_memmove(gp(0x870898),(R+28),4);
}
B5ba727:L5ba727:{c.instructions+=3;NFSU2_TR(0x5ba727);
__builtin_memmove((R+0),gp(0x87089c),4);
}
B5ba72c:{NFSU2_TR(0x5ba72c);
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
B5ba72e:{NFSU2_TR(0x5ba72e);
if(r1(R+518)){{goto L5ba73c;}}
}
B5ba730:L5ba730:{c.instructions+=3;NFSU2_TR(0x5ba730);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ba732:{NFSU2_TR(0x5ba732);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba733:{NFSU2_TR(0x5ba733);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba736ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba736:L5ba736:{c.instructions+=1;NFSU2_TR(0x5ba736);
__builtin_memmove(gp(0x87089c),(R+28),4);
}
B5ba73c:L5ba73c:{c.instructions+=3;NFSU2_TR(0x5ba73c);
__builtin_memmove((R+0),gp(0x8708ac),4);
}
B5ba741:{NFSU2_TR(0x5ba741);
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
B5ba743:{NFSU2_TR(0x5ba743);
if(r1(R+518)){{goto L5ba751;}}
}
B5ba745:L5ba745:{c.instructions+=3;NFSU2_TR(0x5ba745);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ba747:{NFSU2_TR(0x5ba747);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba748:{NFSU2_TR(0x5ba748);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba74bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba74b:L5ba74b:{c.instructions+=1;NFSU2_TR(0x5ba74b);
__builtin_memmove(gp(0x8708ac),(R+28),4);
}
B5ba751:L5ba751:{c.instructions+=3;NFSU2_TR(0x5ba751);
__builtin_memmove((R+0),gp(0x8708a8),4);
}
B5ba756:{NFSU2_TR(0x5ba756);
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
B5ba758:{NFSU2_TR(0x5ba758);
if(r1(R+518)){{goto L5ba766;}}
}
B5ba75a:L5ba75a:{c.instructions+=3;NFSU2_TR(0x5ba75a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ba75c:{NFSU2_TR(0x5ba75c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba75d:{NFSU2_TR(0x5ba75d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba760ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba760:L5ba760:{c.instructions+=1;NFSU2_TR(0x5ba760);
__builtin_memmove(gp(0x8708a8),(R+28),4);
}
B5ba766:L5ba766:{c.instructions+=3;NFSU2_TR(0x5ba766);
__builtin_memmove((R+0),gp(0x8708a4),4);
}
B5ba76b:{NFSU2_TR(0x5ba76b);
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
B5ba76d:{NFSU2_TR(0x5ba76d);
if(r1(R+518)){{goto L5ba77b;}}
}
B5ba76f:L5ba76f:{c.instructions+=3;NFSU2_TR(0x5ba76f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ba771:{NFSU2_TR(0x5ba771);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba772:{NFSU2_TR(0x5ba772);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba775ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba775:L5ba775:{c.instructions+=1;NFSU2_TR(0x5ba775);
__builtin_memmove(gp(0x8708a4),(R+28),4);
}
B5ba77b:L5ba77b:{c.instructions+=3;NFSU2_TR(0x5ba77b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ba77c:{NFSU2_TR(0x5ba77c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ba77d:{NFSU2_TR(0x5ba77d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ba780:L5ba780:{c.instructions+=9;NFSU2_TR(0x5ba780);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5ba785:{NFSU2_TR(0x5ba785);
u8 U[4];
w4(U+0,u32(0x870850ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba78a:{NFSU2_TR(0x5ba78a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba78c:{NFSU2_TR(0x5ba78c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba78e:{NFSU2_TR(0x5ba78e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba790:{NFSU2_TR(0x5ba790);
s4(0x87084c,u32(0x0ull));
}
B5ba79a:{NFSU2_TR(0x5ba79a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ba79c:{NFSU2_TR(0x5ba79c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba79d:{NFSU2_TR(0x5ba79d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba7a0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba7a0:L5ba7a0:{c.instructions+=5;NFSU2_TR(0x5ba7a0);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5ba7a5:{NFSU2_TR(0x5ba7a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ba7a7:{NFSU2_TR(0x5ba7a7);
u8 U[4];
w4(U+0,u32(0x870854ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba7ac:{NFSU2_TR(0x5ba7ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba7ad:{NFSU2_TR(0x5ba7ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba7b3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba7b3:L5ba7b3:{c.instructions+=8;NFSU2_TR(0x5ba7b3);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5ba7b8:{NFSU2_TR(0x5ba7b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ba7ba:{NFSU2_TR(0x5ba7ba);
u8 U[4];
w4(U+0,u32(0x87097cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba7bf:{NFSU2_TR(0x5ba7bf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba7c1:{NFSU2_TR(0x5ba7c1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba7c3:{NFSU2_TR(0x5ba7c3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba7c5:{NFSU2_TR(0x5ba7c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba7c6:{NFSU2_TR(0x5ba7c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba7c9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ba7c9:L5ba7c9:{c.instructions+=1;NFSU2_TR(0x5ba7c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba7ceull));
TAIL_STATIC(0x5bb840u,5bb);
}
B5ba7ce:L5ba7ce:{c.instructions+=1;NFSU2_TR(0x5ba7ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba7d3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ba4b0u);}goto L5ba4b0;}
}
B5ba7d3:L5ba7d3:{c.instructions+=1;NFSU2_TR(0x5ba7d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba7d8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ba060u);}goto L5ba060;}
}
B5ba7d8:L5ba7d8:{c.instructions+=1;NFSU2_TR(0x5ba7d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba7ddull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ba1a0u);}goto L5ba1a0;}
}
B5ba7dd:L5ba7dd:{c.instructions+=1;NFSU2_TR(0x5ba7dd);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ba210u);}goto L5ba210;}
}
B5ba7f0:L5ba7f0:{c.instructions+=4;NFSU2_TR(0x5ba7f0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba7f1:{NFSU2_TR(0x5ba7f1);
w4(R+4,u32(0x10ull));
}
B5ba7f6:{NFSU2_TR(0x5ba7f6);
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
B5ba7f8:{NFSU2_TR(0x5ba7f8);
w4(R+28,u32(0x876480ull));
}
B5ba7fd:L5ba7fd:{c.instructions+=1;NFSU2_TR(0x5ba7fd);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5ba7ff;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ba7fdu);}goto L5ba7fd;}
}
B5ba7ff:L5ba7ff:{c.instructions+=18;NFSU2_TR(0x5ba7ff);
s4(0x872e90,u32(0x3f800000ull));
}
B5ba809:{NFSU2_TR(0x5ba809);
s4(0x872e94,u32(0x0ull));
}
B5ba813:{NFSU2_TR(0x5ba813);
s4(0x872e98,u32(0x0ull));
}
B5ba81d:{NFSU2_TR(0x5ba81d);
s4(0x872e9c,u32(0x0ull));
}
B5ba827:{NFSU2_TR(0x5ba827);
s4(0x872ea0,u32(0x0ull));
}
B5ba831:{NFSU2_TR(0x5ba831);
s4(0x872ea4,u32(0x3f800000ull));
}
B5ba83b:{NFSU2_TR(0x5ba83b);
s4(0x872ea8,u32(0x0ull));
}
B5ba845:{NFSU2_TR(0x5ba845);
s4(0x872eac,u32(0x0ull));
}
B5ba84f:{NFSU2_TR(0x5ba84f);
s4(0x872eb0,u32(0x0ull));
}
B5ba859:{NFSU2_TR(0x5ba859);
s4(0x872eb4,u32(0x0ull));
}
B5ba863:{NFSU2_TR(0x5ba863);
s4(0x872eb8,u32(0x3f800000ull));
}
B5ba86d:{NFSU2_TR(0x5ba86d);
s4(0x872ebc,u32(0x0ull));
}
B5ba877:{NFSU2_TR(0x5ba877);
s4(0x872ec0,u32(0x0ull));
}
B5ba881:{NFSU2_TR(0x5ba881);
s4(0x872ec4,u32(0x0ull));
}
B5ba88b:{NFSU2_TR(0x5ba88b);
s4(0x872ec8,u32(0x0ull));
}
B5ba895:{NFSU2_TR(0x5ba895);
s4(0x872ecc,u32(0x3f800000ull));
}
B5ba89f:{NFSU2_TR(0x5ba89f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ba8a0:{NFSU2_TR(0x5ba8a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ba8b0:L5ba8b0:{c.instructions+=5;NFSU2_TR(0x5ba8b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5ba8b3:{NFSU2_TR(0x5ba8b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba8b4:{NFSU2_TR(0x5ba8b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ba8b8:{NFSU2_TR(0x5ba8b8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba8b9:{NFSU2_TR(0x5ba8b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba8beull));
TAIL_STATIC(0x43c370u,43c);
}
B5ba8be:L5ba8be:{c.instructions+=3;NFSU2_TR(0x5ba8be);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ba8c2:{NFSU2_TR(0x5ba8c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba8c3:{NFSU2_TR(0x5ba8c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba8c8ull));
TAIL_STATIC(0x43c2b0u,43c);
}
B5ba8c8:L5ba8c8:{c.instructions+=73;NFSU2_TR(0x5ba8c8);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ba8ce:{NFSU2_TR(0x5ba8ce);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ba8d2:{NFSU2_TR(0x5ba8d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ba8d6:{NFSU2_TR(0x5ba8d6);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ba8d8:{NFSU2_TR(0x5ba8d8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5ba8db:{NFSU2_TR(0x5ba8db);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ba8de:{NFSU2_TR(0x5ba8de);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ba8e1:{NFSU2_TR(0x5ba8e1);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5ba8e3:{NFSU2_TR(0x5ba8e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ba8e7:{NFSU2_TR(0x5ba8e7);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5ba8e9:{NFSU2_TR(0x5ba8e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ba8ed:{NFSU2_TR(0x5ba8ed);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5ba8ef:{NFSU2_TR(0x5ba8ef);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5ba8f1:{NFSU2_TR(0x5ba8f1);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B5ba8f3:{NFSU2_TR(0x5ba8f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ba8f6:{NFSU2_TR(0x5ba8f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ba8f9:{NFSU2_TR(0x5ba8f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ba8fc:{NFSU2_TR(0x5ba8fc);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ba900:{NFSU2_TR(0x5ba900);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ba903:{NFSU2_TR(0x5ba903);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ba906:{NFSU2_TR(0x5ba906);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5ba908:{NFSU2_TR(0x5ba908);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ba90b:{NFSU2_TR(0x5ba90b);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5ba90d:{NFSU2_TR(0x5ba90d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ba914:{NFSU2_TR(0x5ba914);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ba915:{NFSU2_TR(0x5ba915);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ba919:{NFSU2_TR(0x5ba919);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ba91b:{NFSU2_TR(0x5ba91b);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5ba91d:{NFSU2_TR(0x5ba91d);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5ba91f:{NFSU2_TR(0x5ba91f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ba923:{NFSU2_TR(0x5ba923);
__asm__ volatile(".byte 0xd8,0xce":::"memory");
}
B5ba925:{NFSU2_TR(0x5ba925);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5ba927:{NFSU2_TR(0x5ba927);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5ba929:{NFSU2_TR(0x5ba929);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ba92c:{NFSU2_TR(0x5ba92c);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5ba92e:{NFSU2_TR(0x5ba92e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ba932:{NFSU2_TR(0x5ba932);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ba936:{NFSU2_TR(0x5ba936);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5ba938:{NFSU2_TR(0x5ba938);
__asm__ volatile(".byte 0xd8,0xce":::"memory");
}
B5ba93a:{NFSU2_TR(0x5ba93a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5ba93e:{NFSU2_TR(0x5ba93e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ba942:{NFSU2_TR(0x5ba942);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ba945:{NFSU2_TR(0x5ba945);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ba947:{NFSU2_TR(0x5ba947);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5ba949:{NFSU2_TR(0x5ba949);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ba94c:{NFSU2_TR(0x5ba94c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ba94e:{NFSU2_TR(0x5ba94e);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ba952:{NFSU2_TR(0x5ba952);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5ba954:{NFSU2_TR(0x5ba954);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ba958:{NFSU2_TR(0x5ba958);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ba95b:{NFSU2_TR(0x5ba95b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ba95d:{NFSU2_TR(0x5ba95d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ba961:{NFSU2_TR(0x5ba961);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ba965:{NFSU2_TR(0x5ba965);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ba967:{NFSU2_TR(0x5ba967);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5ba969:{NFSU2_TR(0x5ba969);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5ba96b:{NFSU2_TR(0x5ba96b);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5ba96d:{NFSU2_TR(0x5ba96d);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ba970:{NFSU2_TR(0x5ba970);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ba974:{NFSU2_TR(0x5ba974);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ba978:{NFSU2_TR(0x5ba978);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ba97b:{NFSU2_TR(0x5ba97b);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5ba97d:{NFSU2_TR(0x5ba97d);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ba980:{NFSU2_TR(0x5ba980);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ba982:{NFSU2_TR(0x5ba982);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ba986:{NFSU2_TR(0x5ba986);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ba98a:{NFSU2_TR(0x5ba98a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5ba98c:{NFSU2_TR(0x5ba98c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ba990:{NFSU2_TR(0x5ba990);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ba993:{NFSU2_TR(0x5ba993);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ba995:{NFSU2_TR(0x5ba995);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ba997:{NFSU2_TR(0x5ba997);
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
B5ba99a:{NFSU2_TR(0x5ba99a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ba9a0:L5ba9a0:{c.instructions+=21;NFSU2_TR(0x5ba9a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba9a1:{NFSU2_TR(0x5ba9a1);
__builtin_memmove((R+20),(R+16),4);
}
B5ba9a3:{NFSU2_TR(0x5ba9a3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5ba9a6:{NFSU2_TR(0x5ba9a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x9cull))));
}
B5ba9ac:{NFSU2_TR(0x5ba9ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ba9af:{NFSU2_TR(0x5ba9af);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ba9b1:{NFSU2_TR(0x5ba9b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba9b2:{NFSU2_TR(0x5ba9b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ba9b5:{NFSU2_TR(0x5ba9b5);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ba9b7:{NFSU2_TR(0x5ba9b7);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ba9bb:{NFSU2_TR(0x5ba9bb);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ba9bf:{NFSU2_TR(0x5ba9bf);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ba9c2:{NFSU2_TR(0x5ba9c2);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ba9c5:{NFSU2_TR(0x5ba9c5);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ba9c9:{NFSU2_TR(0x5ba9c9);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ba9cc:{NFSU2_TR(0x5ba9cc);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ba9d0:{NFSU2_TR(0x5ba9d0);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ba9d3:{NFSU2_TR(0x5ba9d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba9d4:{NFSU2_TR(0x5ba9d4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba9d5:{NFSU2_TR(0x5ba9d5);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ba9d9:{NFSU2_TR(0x5ba9d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ba9deull));
TAIL_STATIC(0x43cf10u,43c);
}
B5ba9de:L5ba9de:{c.instructions+=17;NFSU2_TR(0x5ba9de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ba9e1:{NFSU2_TR(0x5ba9e1);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ba9e3:{NFSU2_TR(0x5ba9e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ba9e7:{NFSU2_TR(0x5ba9e7);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5ba9e9:{NFSU2_TR(0x5ba9e9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ba9ea:{NFSU2_TR(0x5ba9ea);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ba9ee:{NFSU2_TR(0x5ba9ee);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ba9f2:{NFSU2_TR(0x5ba9f2);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ba9f5:{NFSU2_TR(0x5ba9f5);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5ba9f7:{NFSU2_TR(0x5ba9f7);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ba9fb:{NFSU2_TR(0x5ba9fb);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ba9fe:{NFSU2_TR(0x5ba9fe);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5baa02:{NFSU2_TR(0x5baa02);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5baa03:{NFSU2_TR(0x5baa03);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5baa05:{NFSU2_TR(0x5baa05);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5baa06:{NFSU2_TR(0x5baa06);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5baa0a:{NFSU2_TR(0x5baa0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5baa0full));
TAIL_STATIC(0x43d1e0u,43d);
}
B5baa0f:L5baa0f:{c.instructions+=7;NFSU2_TR(0x5baa0f);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5baa13:{NFSU2_TR(0x5baa13);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5baa14:{NFSU2_TR(0x5baa14);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5baa18:{NFSU2_TR(0x5baa18);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5baa19:{NFSU2_TR(0x5baa19);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5baa1d:{NFSU2_TR(0x5baa1d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5baa1e:{NFSU2_TR(0x5baa1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5baa23ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B5baa23:L5baa23:{c.instructions+=5;NFSU2_TR(0x5baa23);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5baa27:{NFSU2_TR(0x5baa27);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5baa28:{NFSU2_TR(0x5baa28);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5baa2c:{NFSU2_TR(0x5baa2c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5baa2d:{NFSU2_TR(0x5baa2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5baa32ull));
TAIL_STATIC(0x43cf10u,43c);
}
B5baa32:L5baa32:{c.instructions+=5;NFSU2_TR(0x5baa32);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5baa36:{NFSU2_TR(0x5baa36);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5baa37:{NFSU2_TR(0x5baa37);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5baa3b:{NFSU2_TR(0x5baa3b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5baa3c:{NFSU2_TR(0x5baa3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5baa41ull));
TAIL_STATIC(0x43cf10u,43c);
}
B5baa41:L5baa41:{c.instructions+=139;NFSU2_TR(0x5baa41);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5baa45:{NFSU2_TR(0x5baa45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5baa48:{NFSU2_TR(0x5baa48);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5baa4c:{NFSU2_TR(0x5baa4c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5baa4e:{NFSU2_TR(0x5baa4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5baa52:{NFSU2_TR(0x5baa52);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5baa55:{NFSU2_TR(0x5baa55);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5baa59:{NFSU2_TR(0x5baa59);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5baa5c:{NFSU2_TR(0x5baa5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5baa60:{NFSU2_TR(0x5baa60);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5baa63:{NFSU2_TR(0x5baa63);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5baa67:{NFSU2_TR(0x5baa67);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5baa6a:{NFSU2_TR(0x5baa6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5baa6e:{NFSU2_TR(0x5baa6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5baa71:{NFSU2_TR(0x5baa71);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5baa75:{NFSU2_TR(0x5baa75);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5baa78:{NFSU2_TR(0x5baa78);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5baa7a:{NFSU2_TR(0x5baa7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5baa7d:{NFSU2_TR(0x5baa7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5baa81:{NFSU2_TR(0x5baa81);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5baa84:{NFSU2_TR(0x5baa84);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5baa87:{NFSU2_TR(0x5baa87);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5baa8a:{NFSU2_TR(0x5baa8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5baa8d:{NFSU2_TR(0x5baa8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5baa90:{NFSU2_TR(0x5baa90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5baa93:{NFSU2_TR(0x5baa93);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5baa96:{NFSU2_TR(0x5baa96);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5baa9d:{NFSU2_TR(0x5baa9d);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5baa9f:{NFSU2_TR(0x5baa9f);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5baaa1:{NFSU2_TR(0x5baaa1);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5baaa8:{NFSU2_TR(0x5baaa8);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5baaab:{NFSU2_TR(0x5baaab);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5baab2:{NFSU2_TR(0x5baab2);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5baab4:{NFSU2_TR(0x5baab4);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5baab7:{NFSU2_TR(0x5baab7);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5baab9:{NFSU2_TR(0x5baab9);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5baabd:{NFSU2_TR(0x5baabd);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5baac3:{NFSU2_TR(0x5baac3);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5baac7:{NFSU2_TR(0x5baac7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5baacd:{NFSU2_TR(0x5baacd);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5baad1:{NFSU2_TR(0x5baad1);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5baad3:{NFSU2_TR(0x5baad3);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B5baad5:{NFSU2_TR(0x5baad5);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5baadc:{NFSU2_TR(0x5baadc);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5baae0:{NFSU2_TR(0x5baae0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5baae6:{NFSU2_TR(0x5baae6);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5baaea:{NFSU2_TR(0x5baaea);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5baaf0:{NFSU2_TR(0x5baaf0);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5baaf7:{NFSU2_TR(0x5baaf7);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5baafb:{NFSU2_TR(0x5baafb);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bab02:{NFSU2_TR(0x5bab02);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5bab04:{NFSU2_TR(0x5bab04);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bab0b:{NFSU2_TR(0x5bab0b);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bab0f:{NFSU2_TR(0x5bab0f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bab15:{NFSU2_TR(0x5bab15);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bab19:{NFSU2_TR(0x5bab19);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bab1f:{NFSU2_TR(0x5bab1f);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bab23:{NFSU2_TR(0x5bab23);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bab27:{NFSU2_TR(0x5bab27);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bab2b:{NFSU2_TR(0x5bab2b);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5bab2d:{NFSU2_TR(0x5bab2d);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bab34:{NFSU2_TR(0x5bab34);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bab38:{NFSU2_TR(0x5bab38);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bab3e:{NFSU2_TR(0x5bab3e);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bab45:{NFSU2_TR(0x5bab45);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bab49:{NFSU2_TR(0x5bab49);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bab50:{NFSU2_TR(0x5bab50);
__asm__ volatile(".byte 0xd8,0xc4":::"memory");
}
B5bab52:{NFSU2_TR(0x5bab52);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bab59:{NFSU2_TR(0x5bab59);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bab5d:{NFSU2_TR(0x5bab5d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bab63:{NFSU2_TR(0x5bab63);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bab6a:{NFSU2_TR(0x5bab6a);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bab6e:{NFSU2_TR(0x5bab6e);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bab75:{NFSU2_TR(0x5bab75);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B5bab77:{NFSU2_TR(0x5bab77);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bab7e:{NFSU2_TR(0x5bab7e);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bab82:{NFSU2_TR(0x5bab82);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bab88:{NFSU2_TR(0x5bab88);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bab8f:{NFSU2_TR(0x5bab8f);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bab93:{NFSU2_TR(0x5bab93);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bab9a:{NFSU2_TR(0x5bab9a);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5bab9c:{NFSU2_TR(0x5bab9c);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5baba3:{NFSU2_TR(0x5baba3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5baba5:{NFSU2_TR(0x5baba5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5baba7:{NFSU2_TR(0x5baba7);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5babab:{NFSU2_TR(0x5babab);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5babb2:{NFSU2_TR(0x5babb2);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5babb4:{NFSU2_TR(0x5babb4);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5babbb:{NFSU2_TR(0x5babbb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5babbd:{NFSU2_TR(0x5babbd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5babbf:{NFSU2_TR(0x5babbf);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5babc3:{NFSU2_TR(0x5babc3);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5babca:{NFSU2_TR(0x5babca);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5babd1:{NFSU2_TR(0x5babd1);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5babd8:{NFSU2_TR(0x5babd8);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5babdf:{NFSU2_TR(0x5babdf);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5babe3:{NFSU2_TR(0x5babe3);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5babea:{NFSU2_TR(0x5babea);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5babf1:{NFSU2_TR(0x5babf1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5babf2:{NFSU2_TR(0x5babf2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5babf3:{NFSU2_TR(0x5babf3);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5babfa:{NFSU2_TR(0x5babfa);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bac01:{NFSU2_TR(0x5bac01);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bac05:{NFSU2_TR(0x5bac05);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5bac07:{NFSU2_TR(0x5bac07);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5bac09:{NFSU2_TR(0x5bac09);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bac0d:{NFSU2_TR(0x5bac0d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5bac0f:{NFSU2_TR(0x5bac0f);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B5bac11:{NFSU2_TR(0x5bac11);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bac15:{NFSU2_TR(0x5bac15);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5bac17:{NFSU2_TR(0x5bac17);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bac1e:{NFSU2_TR(0x5bac1e);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bac22:{NFSU2_TR(0x5bac22);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5bac24:{NFSU2_TR(0x5bac24);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5bac26:{NFSU2_TR(0x5bac26);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bac2a:{NFSU2_TR(0x5bac2a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5bac2c:{NFSU2_TR(0x5bac2c);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B5bac2e:{NFSU2_TR(0x5bac2e);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bac32:{NFSU2_TR(0x5bac32);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5bac34:{NFSU2_TR(0x5bac34);
{u32 ea_=u32(r4(R+16)+u32(204u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bac3b:{NFSU2_TR(0x5bac3b);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bac3f:{NFSU2_TR(0x5bac3f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5bac41:{NFSU2_TR(0x5bac41);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5bac43:{NFSU2_TR(0x5bac43);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bac47:{NFSU2_TR(0x5bac47);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5bac49:{NFSU2_TR(0x5bac49);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B5bac4b:{NFSU2_TR(0x5bac4b);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bac4f:{NFSU2_TR(0x5bac4f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5bac51:{NFSU2_TR(0x5bac51);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bac58:{NFSU2_TR(0x5bac58);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bac5e:{NFSU2_TR(0x5bac5e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5bac60:{NFSU2_TR(0x5bac60);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bac66:{NFSU2_TR(0x5bac66);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5bac68:{NFSU2_TR(0x5bac68);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5bac6a:{NFSU2_TR(0x5bac6a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bac70:{NFSU2_TR(0x5bac70);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5bac72:{NFSU2_TR(0x5bac72);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bac78:{NFSU2_TR(0x5bac78);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bac7f:{NFSU2_TR(0x5bac7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bac84ull));
TAIL_STATIC(0x4012b0u,401);
}
B5bac84:L5bac84:{c.instructions+=5;NFSU2_TR(0x5bac84);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x38ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x38ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bac87:{NFSU2_TR(0x5bac87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bac88:{NFSU2_TR(0x5bac88);
__builtin_memmove((R+16),(R+20),4);
}
B5bac8a:{NFSU2_TR(0x5bac8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bac8b:{NFSU2_TR(0x5bac8b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bac90:L5bac90:{c.instructions+=5;NFSU2_TR(0x5bac90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bac91:{NFSU2_TR(0x5bac91);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bac92:{NFSU2_TR(0x5bac92);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5bac96:{NFSU2_TR(0x5bac96);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bac97:{NFSU2_TR(0x5bac97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bac9cull));
TAIL_STATIC(0x43c370u,43c);
}
B5bac9c:L5bac9c:{c.instructions+=3;NFSU2_TR(0x5bac9c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5baca0:{NFSU2_TR(0x5baca0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5baca1:{NFSU2_TR(0x5baca1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5baca6ull));
TAIL_STATIC(0x43c2b0u,43c);
}
B5baca6:L5baca6:{c.instructions+=26;NFSU2_TR(0x5baca6);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bacaa:{NFSU2_TR(0x5bacaa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bacae:{NFSU2_TR(0x5bacae);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bacb2:{NFSU2_TR(0x5bacb2);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bacb4:{NFSU2_TR(0x5bacb4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5bacb7:{NFSU2_TR(0x5bacb7);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bacb9:{NFSU2_TR(0x5bacb9);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5bacbc:{NFSU2_TR(0x5bacbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bacbf:{NFSU2_TR(0x5bacbf);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5bacc1:{NFSU2_TR(0x5bacc1);
w4(R+8,u32(0x3f800000ull));
}
B5bacc6:{NFSU2_TR(0x5bacc6);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bacc9:{NFSU2_TR(0x5bacc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5baccc:{NFSU2_TR(0x5baccc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5baccf:{NFSU2_TR(0x5baccf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bacd2:{NFSU2_TR(0x5bacd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bacd5:{NFSU2_TR(0x5bacd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bacd8:{NFSU2_TR(0x5bacd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bacdb:{NFSU2_TR(0x5bacdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bacde:{NFSU2_TR(0x5bacde);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bace1:{NFSU2_TR(0x5bace1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bace4:{NFSU2_TR(0x5bace4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bace7:{NFSU2_TR(0x5bace7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bacea:{NFSU2_TR(0x5bacea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5baced:{NFSU2_TR(0x5baced);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bacee:{NFSU2_TR(0x5bacee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5bacef:{NFSU2_TR(0x5bacef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bacf0:L5bacf0:{c.instructions+=8;NFSU2_TR(0x5bacf0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bacf1:{NFSU2_TR(0x5bacf1);
__builtin_memmove((R+20),(R+16),4);
}
B5bacf3:{NFSU2_TR(0x5bacf3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5bacf6:{NFSU2_TR(0x5bacf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4cull))));
}
B5bacf9:{NFSU2_TR(0x5bacf9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bacfa:{NFSU2_TR(0x5bacfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5bacfd:{NFSU2_TR(0x5bacfd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bacfe:{NFSU2_TR(0x5bacfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bad03ull));
TAIL_STATIC(0x43c370u,43c);
}
B5bad03:L5bad03:{c.instructions+=3;NFSU2_TR(0x5bad03);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bad07:{NFSU2_TR(0x5bad07);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bad08:{NFSU2_TR(0x5bad08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bad0dull));
TAIL_STATIC(0x43c2b0u,43c);
}
B5bad0d:L5bad0d:{c.instructions+=27;NFSU2_TR(0x5bad0d);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5bad11:{NFSU2_TR(0x5bad11);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bad15:{NFSU2_TR(0x5bad15);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5bad17:{NFSU2_TR(0x5bad17);
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
B5bad1a:{NFSU2_TR(0x5bad1a);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bad1e:{NFSU2_TR(0x5bad1e);
__builtin_memmove((R+4),(R+0),4);
}
B5bad20:{NFSU2_TR(0x5bad20);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bad24:{NFSU2_TR(0x5bad24);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bad28:{NFSU2_TR(0x5bad28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bad2b:{NFSU2_TR(0x5bad2b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bad2c:{NFSU2_TR(0x5bad2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bad30:{NFSU2_TR(0x5bad30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bad33:{NFSU2_TR(0x5bad33);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bad34:{NFSU2_TR(0x5bad34);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bad35:{NFSU2_TR(0x5bad35);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bad3d:{NFSU2_TR(0x5bad3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bad45:{NFSU2_TR(0x5bad45);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bad4d:{NFSU2_TR(0x5bad4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bad55:{NFSU2_TR(0x5bad55);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bad5d:{NFSU2_TR(0x5bad5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bad65:{NFSU2_TR(0x5bad65);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bad6d:{NFSU2_TR(0x5bad6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bad75:{NFSU2_TR(0x5bad75);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bad7d:{NFSU2_TR(0x5bad7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bad85:{NFSU2_TR(0x5bad85);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bad8d:{NFSU2_TR(0x5bad8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bad95:{NFSU2_TR(0x5bad95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bad9aull));
TAIL_STATIC(0x63cedbu,63c);
}
B5bad9a:L5bad9a:{c.instructions+=4;NFSU2_TR(0x5bad9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bad9b:{NFSU2_TR(0x5bad9b);
__builtin_memmove((R+16),(R+20),4);
}
B5bad9d:{NFSU2_TR(0x5bad9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bad9e:{NFSU2_TR(0x5bad9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bada0:L5bada0:{c.instructions+=8;NFSU2_TR(0x5bada0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bada1:{NFSU2_TR(0x5bada1);
__builtin_memmove((R+20),(R+16),4);
}
B5bada3:{NFSU2_TR(0x5bada3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5bada6:{NFSU2_TR(0x5bada6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4cull))));
}
B5bada9:{NFSU2_TR(0x5bada9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5badaa:{NFSU2_TR(0x5badaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5badad:{NFSU2_TR(0x5badad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5badae:{NFSU2_TR(0x5badae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5badb3ull));
TAIL_STATIC(0x43c370u,43c);
}
B5badb3:L5badb3:{c.instructions+=3;NFSU2_TR(0x5badb3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5badb7:{NFSU2_TR(0x5badb7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5badb8:{NFSU2_TR(0x5badb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5badbdull));
TAIL_STATIC(0x43c2b0u,43c);
}
B5badbd:L5badbd:{c.instructions+=28;NFSU2_TR(0x5badbd);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5badbf:{NFSU2_TR(0x5badbf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5badc3:{NFSU2_TR(0x5badc3);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5badc5:{NFSU2_TR(0x5badc5);
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
B5badc8:{NFSU2_TR(0x5badc8);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5badcc:{NFSU2_TR(0x5badcc);
__builtin_memmove((R+4),(R+0),4);
}
B5badce:{NFSU2_TR(0x5badce);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5badd2:{NFSU2_TR(0x5badd2);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5badd6:{NFSU2_TR(0x5badd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5badda:{NFSU2_TR(0x5badda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5baddd:{NFSU2_TR(0x5baddd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5badde:{NFSU2_TR(0x5badde);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bade2:{NFSU2_TR(0x5bade2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bade5:{NFSU2_TR(0x5bade5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bade6:{NFSU2_TR(0x5bade6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bade7:{NFSU2_TR(0x5bade7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5badef:{NFSU2_TR(0x5badef);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5badf7:{NFSU2_TR(0x5badf7);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5badff:{NFSU2_TR(0x5badff);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bae07:{NFSU2_TR(0x5bae07);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bae0f:{NFSU2_TR(0x5bae0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bae17:{NFSU2_TR(0x5bae17);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bae1f:{NFSU2_TR(0x5bae1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bae27:{NFSU2_TR(0x5bae27);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bae2f:{NFSU2_TR(0x5bae2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bae37:{NFSU2_TR(0x5bae37);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bae3f:{NFSU2_TR(0x5bae3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bae47:{NFSU2_TR(0x5bae47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bae4cull));
TAIL_STATIC(0x63cedbu,63c);
}
B5bae4c:L5bae4c:{c.instructions+=4;NFSU2_TR(0x5bae4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bae4d:{NFSU2_TR(0x5bae4d);
__builtin_memmove((R+16),(R+20),4);
}
B5bae4f:{NFSU2_TR(0x5bae4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bae50:{NFSU2_TR(0x5bae50);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bae60:L5bae60:{c.instructions+=9;NFSU2_TR(0x5bae60);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bae61:{NFSU2_TR(0x5bae61);
__builtin_memmove((R+20),(R+16),4);
}
B5bae63:{NFSU2_TR(0x5bae63);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5bae66:{NFSU2_TR(0x5bae66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B5bae69:{NFSU2_TR(0x5bae69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bae6c:{NFSU2_TR(0x5bae6c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bae6d:{NFSU2_TR(0x5bae6d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5bae71:{NFSU2_TR(0x5bae71);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bae72:{NFSU2_TR(0x5bae72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bae77ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bac90u);}goto L5bac90;}
}
B5bae77:L5bae77:{c.instructions+=8;NFSU2_TR(0x5bae77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bae7a:{NFSU2_TR(0x5bae7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bae7d:{NFSU2_TR(0x5bae7d);
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
B5bae80:{NFSU2_TR(0x5bae80);
__builtin_memmove((R+8),(R+16),4);
}
B5bae84:{NFSU2_TR(0x5bae84);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bae85:{NFSU2_TR(0x5bae85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bae86:{NFSU2_TR(0x5bae86);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bae87:{NFSU2_TR(0x5bae87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bae8cull));
TAIL_STATIC(0x63cedbu,63c);
}
B5bae8c:L5bae8c:{c.instructions+=3;NFSU2_TR(0x5bae8c);
__builtin_memmove((R+16),(R+20),4);
}
B5bae8e:{NFSU2_TR(0x5bae8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bae8f:{NFSU2_TR(0x5bae8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bae90:L5bae90:{c.instructions+=31;NFSU2_TR(0x5bae90);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bae91:{NFSU2_TR(0x5bae91);
__builtin_memmove((R+20),(R+16),4);
}
B5bae93:{NFSU2_TR(0x5bae93);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5bae96:{NFSU2_TR(0x5bae96);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x40ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bae99:{NFSU2_TR(0x5bae99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bae9c:{NFSU2_TR(0x5bae9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bae9e:{NFSU2_TR(0x5bae9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5baea1:{NFSU2_TR(0x5baea1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5baea4:{NFSU2_TR(0x5baea4);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5baea8:{NFSU2_TR(0x5baea8);
__builtin_memmove((R+4),(R+16),4);
}
B5baeac:{NFSU2_TR(0x5baeac);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5baeb0:{NFSU2_TR(0x5baeb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5baeb3:{NFSU2_TR(0x5baeb3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5baeb4:{NFSU2_TR(0x5baeb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5baeb8:{NFSU2_TR(0x5baeb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5baebb:{NFSU2_TR(0x5baebb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5baebc:{NFSU2_TR(0x5baebc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5baebd:{NFSU2_TR(0x5baebd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5baec5:{NFSU2_TR(0x5baec5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5baecd:{NFSU2_TR(0x5baecd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5baed5:{NFSU2_TR(0x5baed5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5baedd:{NFSU2_TR(0x5baedd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5baee5:{NFSU2_TR(0x5baee5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5baeed:{NFSU2_TR(0x5baeed);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5baef5:{NFSU2_TR(0x5baef5);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5baefd:{NFSU2_TR(0x5baefd);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5baf05:{NFSU2_TR(0x5baf05);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5baf0d:{NFSU2_TR(0x5baf0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5baf15:{NFSU2_TR(0x5baf15);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5baf1d:{NFSU2_TR(0x5baf1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5baf25:{NFSU2_TR(0x5baf25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5baf2aull));
TAIL_STATIC(0x63cedbu,63c);
}
B5baf2a:L5baf2a:{c.instructions+=3;NFSU2_TR(0x5baf2a);
__builtin_memmove((R+16),(R+20),4);
}
B5baf2c:{NFSU2_TR(0x5baf2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5baf2d:{NFSU2_TR(0x5baf2d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5baf30:L5baf30:{c.instructions+=26;NFSU2_TR(0x5baf30);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5baf34:{NFSU2_TR(0x5baf34);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5baf36:{NFSU2_TR(0x5baf36);
w4(R+8,u32(0x3f800000ull));
}
B5baf3b:{NFSU2_TR(0x5baf3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5baf3e:{NFSU2_TR(0x5baf3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5baf41:{NFSU2_TR(0x5baf41);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5baf44:{NFSU2_TR(0x5baf44);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5baf47:{NFSU2_TR(0x5baf47);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5baf4a:{NFSU2_TR(0x5baf4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5baf4d:{NFSU2_TR(0x5baf4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5baf50:{NFSU2_TR(0x5baf50);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5baf53:{NFSU2_TR(0x5baf53);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5baf56:{NFSU2_TR(0x5baf56);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5baf5a:{NFSU2_TR(0x5baf5a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5baf5b:{NFSU2_TR(0x5baf5b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5baf5d:{NFSU2_TR(0x5baf5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5baf60:{NFSU2_TR(0x5baf60);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5baf63:{NFSU2_TR(0x5baf63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5baf65:{NFSU2_TR(0x5baf65);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5baf68:{NFSU2_TR(0x5baf68);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5baf6b:{NFSU2_TR(0x5baf6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5baf6e:{NFSU2_TR(0x5baf6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5baf71:{NFSU2_TR(0x5baf71);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5baf74:{NFSU2_TR(0x5baf74);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5baf77:{NFSU2_TR(0x5baf77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5baf78:{NFSU2_TR(0x5baf78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5baf80:L5baf80:{c.instructions+=5;NFSU2_TR(0x5baf80);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5baf84:{NFSU2_TR(0x5baf84);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5baf88:{NFSU2_TR(0x5baf88);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5baf89:{NFSU2_TR(0x5baf89);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5baf8a:{NFSU2_TR(0x5baf8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5baf8full));
TAIL_STATIC(0x63d12cu,63d);
}
B5baf8f:L5baf8f:{c.instructions+=1;NFSU2_TR(0x5baf8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5baf90:L5baf90:{c.instructions+=31;NFSU2_TR(0x5baf90);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5baf91:{NFSU2_TR(0x5baf91);
__builtin_memmove((R+20),(R+16),4);
}
B5baf93:{NFSU2_TR(0x5baf93);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5baf96:{NFSU2_TR(0x5baf96);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x8cull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x8cull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5baf9c:{NFSU2_TR(0x5baf9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5baf9f:{NFSU2_TR(0x5baf9f);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bafa2:{NFSU2_TR(0x5bafa2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bafa4:{NFSU2_TR(0x5bafa4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bafa8:{NFSU2_TR(0x5bafa8);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bafab:{NFSU2_TR(0x5bafab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bafac:{NFSU2_TR(0x5bafac);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bafb0:{NFSU2_TR(0x5bafb0);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bafb3:{NFSU2_TR(0x5bafb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5bafb6:{NFSU2_TR(0x5bafb6);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bafba:{NFSU2_TR(0x5bafba);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bafbd:{NFSU2_TR(0x5bafbd);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bafc1:{NFSU2_TR(0x5bafc1);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bafc5:{NFSU2_TR(0x5bafc5);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bafc8:{NFSU2_TR(0x5bafc8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bafc9:{NFSU2_TR(0x5bafc9);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bafcd:{NFSU2_TR(0x5bafcd);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bafd0:{NFSU2_TR(0x5bafd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bafd4:{NFSU2_TR(0x5bafd4);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bafd8:{NFSU2_TR(0x5bafd8);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bafdb:{NFSU2_TR(0x5bafdb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bafe3:{NFSU2_TR(0x5bafe3);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bafe7:{NFSU2_TR(0x5bafe7);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bafea:{NFSU2_TR(0x5bafea);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5baff2:{NFSU2_TR(0x5baff2);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5baff6:{NFSU2_TR(0x5baff6);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5baff9:{NFSU2_TR(0x5baff9);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x5bb001u,5bb);
}
XIT:NFSU2_TR_EXIT(0x5ba,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
