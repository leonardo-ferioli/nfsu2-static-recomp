#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_5a7(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5d4(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5d9(u8* __restrict R,Cpu& c);
u32 body_5da(u8* __restrict R,Cpu& c);
u32 body_5db(u8* __restrict R,Cpu& c);
u32 body_5dd(u8* __restrict R,Cpu& c);
u32 body_5df(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5de,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5de,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5de(u8* __restrict R,Cpu& c);
u32 page_5de(Cpu& c){return body_5de(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5de(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5de002:goto L5de002;
case 0x5de005:c.instructions+=2;goto B5de005;
case 0x5de006:c.instructions+=1;goto B5de006;
case 0x5de008:goto L5de008;
case 0x5de00a:goto L5de00a;
case 0x5de00c:goto L5de00c;
case 0x5de012:c.instructions+=6;goto B5de012;
case 0x5de018:c.instructions+=5;goto B5de018;
case 0x5de01d:c.instructions+=4;goto B5de01d;
case 0x5de01f:c.instructions+=3;goto B5de01f;
case 0x5de023:c.instructions+=2;goto B5de023;
case 0x5de027:c.instructions+=1;goto B5de027;
case 0x5de029:goto L5de029;
case 0x5de02b:c.instructions+=2;goto B5de02b;
case 0x5de02f:c.instructions+=1;goto B5de02f;
case 0x5de030:goto L5de030;
case 0x5de035:c.instructions+=3;goto B5de035;
case 0x5de037:c.instructions+=2;goto B5de037;
case 0x5de039:c.instructions+=1;goto B5de039;
case 0x5de03b:goto L5de03b;
case 0x5de03e:c.instructions+=2;goto B5de03e;
case 0x5de040:c.instructions+=1;goto B5de040;
case 0x5de042:goto L5de042;
case 0x5de046:c.instructions+=1;goto B5de046;
case 0x5de048:goto L5de048;
case 0x5de04b:c.instructions+=1;goto B5de04b;
case 0x5de050:goto L5de050;
case 0x5de053:c.instructions+=2;goto B5de053;
case 0x5de055:c.instructions+=1;goto B5de055;
case 0x5de057:goto L5de057;
case 0x5de059:goto L5de059;
case 0x5de05d:c.instructions+=1;goto B5de05d;
case 0x5de05f:goto L5de05f;
case 0x5de062:c.instructions+=1;goto B5de062;
case 0x5de067:goto L5de067;
case 0x5de06b:c.instructions+=4;goto B5de06b;
case 0x5de06e:c.instructions+=3;goto B5de06e;
case 0x5de070:c.instructions+=2;goto B5de070;
case 0x5de072:c.instructions+=1;goto B5de072;
case 0x5de074:goto L5de074;
case 0x5de078:c.instructions+=1;goto B5de078;
case 0x5de07a:goto L5de07a;
case 0x5de07c:goto L5de07c;
case 0x5de080:c.instructions+=8;goto B5de080;
case 0x5de084:c.instructions+=7;goto B5de084;
case 0x5de08a:c.instructions+=6;goto B5de08a;
case 0x5de08b:c.instructions+=5;goto B5de08b;
case 0x5de091:c.instructions+=4;goto B5de091;
case 0x5de093:c.instructions+=3;goto B5de093;
case 0x5de097:c.instructions+=2;goto B5de097;
case 0x5de09b:c.instructions+=1;goto B5de09b;
case 0x5de09d:goto L5de09d;
case 0x5de0a1:goto L5de0a1;
case 0x5de0a4:c.instructions+=2;goto B5de0a4;
case 0x5de0ae:c.instructions+=1;goto B5de0ae;
case 0x5de0b0:goto L5de0b0;
case 0x5de0b6:c.instructions+=1;goto B5de0b6;
case 0x5de0b8:goto L5de0b8;
case 0x5de0bb:c.instructions+=1;goto B5de0bb;
case 0x5de0bd:goto L5de0bd;
case 0x5de0c3:goto L5de0c3;
case 0x5de0ca:c.instructions+=2;goto B5de0ca;
case 0x5de0d1:c.instructions+=1;goto B5de0d1;
case 0x5de0d3:goto L5de0d3;
case 0x5de0d9:c.instructions+=4;goto B5de0d9;
case 0x5de0db:c.instructions+=3;goto B5de0db;
case 0x5de0dc:c.instructions+=2;goto B5de0dc;
case 0x5de0dd:c.instructions+=1;goto B5de0dd;
case 0x5de0e2:goto L5de0e2;
case 0x5de0e5:c.instructions+=4;goto B5de0e5;
case 0x5de0e8:c.instructions+=3;goto B5de0e8;
case 0x5de0e9:c.instructions+=2;goto B5de0e9;
case 0x5de0ec:c.instructions+=1;goto B5de0ec;
case 0x5de0ee:goto L5de0ee;
case 0x5de0f4:c.instructions+=8;goto B5de0f4;
case 0x5de0f6:c.instructions+=7;goto B5de0f6;
case 0x5de0f9:c.instructions+=6;goto B5de0f9;
case 0x5de103:c.instructions+=5;goto B5de103;
case 0x5de10d:c.instructions+=4;goto B5de10d;
case 0x5de113:c.instructions+=3;goto B5de113;
case 0x5de117:c.instructions+=2;goto B5de117;
case 0x5de11b:c.instructions+=1;goto B5de11b;
case 0x5de120:goto L5de120;
case 0x5de122:c.instructions+=1;goto B5de122;
case 0x5de124:goto L5de124;
case 0x5de128:c.instructions+=3;goto B5de128;
case 0x5de12a:c.instructions+=2;goto B5de12a;
case 0x5de12c:c.instructions+=1;goto B5de12c;
case 0x5de12e:goto L5de12e;
case 0x5de131:c.instructions+=4;goto B5de131;
case 0x5de133:c.instructions+=3;goto B5de133;
case 0x5de136:c.instructions+=2;goto B5de136;
case 0x5de139:c.instructions+=1;goto B5de139;
case 0x5de13b:goto L5de13b;
case 0x5de13e:c.instructions+=2;goto B5de13e;
case 0x5de140:c.instructions+=1;goto B5de140;
case 0x5de142:goto L5de142;
case 0x5de144:c.instructions+=2;goto B5de144;
case 0x5de147:c.instructions+=1;goto B5de147;
case 0x5de150:goto L5de150;
case 0x5de153:c.instructions+=2;goto B5de153;
case 0x5de159:c.instructions+=1;goto B5de159;
case 0x5de15b:goto L5de15b;
case 0x5de161:c.instructions+=12;goto B5de161;
case 0x5de163:c.instructions+=11;goto B5de163;
case 0x5de166:c.instructions+=10;goto B5de166;
case 0x5de169:c.instructions+=9;goto B5de169;
case 0x5de16a:c.instructions+=8;goto B5de16a;
case 0x5de170:c.instructions+=7;goto B5de170;
case 0x5de174:c.instructions+=6;goto B5de174;
case 0x5de175:c.instructions+=5;goto B5de175;
case 0x5de178:c.instructions+=4;goto B5de178;
case 0x5de179:c.instructions+=3;goto B5de179;
case 0x5de17a:c.instructions+=2;goto B5de17a;
case 0x5de17c:c.instructions+=1;goto B5de17c;
case 0x5de181:goto L5de181;
case 0x5de182:c.instructions+=3;goto B5de182;
case 0x5de185:c.instructions+=2;goto B5de185;
case 0x5de188:c.instructions+=1;goto B5de188;
case 0x5de18a:goto L5de18a;
case 0x5de18e:goto L5de18e;
case 0x5de192:c.instructions+=6;goto B5de192;
case 0x5de193:c.instructions+=5;goto B5de193;
case 0x5de196:c.instructions+=4;goto B5de196;
case 0x5de19c:c.instructions+=3;goto B5de19c;
case 0x5de1a0:c.instructions+=2;goto B5de1a0;
case 0x5de1a4:c.instructions+=1;goto B5de1a4;
case 0x5de1aa:goto L5de1aa;
case 0x5de1ab:c.instructions+=5;goto B5de1ab;
case 0x5de1ac:c.instructions+=4;goto B5de1ac;
case 0x5de1ad:c.instructions+=3;goto B5de1ad;
case 0x5de1ae:c.instructions+=2;goto B5de1ae;
case 0x5de1b1:c.instructions+=1;goto B5de1b1;
case 0x5de1c0:goto L5de1c0;
case 0x5de1c4:c.instructions+=6;goto B5de1c4;
case 0x5de1c5:c.instructions+=5;goto B5de1c5;
case 0x5de1c8:c.instructions+=4;goto B5de1c8;
case 0x5de1cb:c.instructions+=3;goto B5de1cb;
case 0x5de1cf:c.instructions+=2;goto B5de1cf;
case 0x5de1d1:c.instructions+=1;goto B5de1d1;
case 0x5de1d3:goto L5de1d3;
case 0x5de1d4:c.instructions+=1;goto B5de1d4;
case 0x5de1e0:goto L5de1e0;
case 0x5de1e6:c.instructions+=17;goto B5de1e6;
case 0x5de1ec:c.instructions+=16;goto B5de1ec;
case 0x5de1ed:c.instructions+=15;goto B5de1ed;
case 0x5de1f3:c.instructions+=14;goto B5de1f3;
case 0x5de1f7:c.instructions+=13;goto B5de1f7;
case 0x5de1fa:c.instructions+=12;goto B5de1fa;
case 0x5de200:c.instructions+=11;goto B5de200;
case 0x5de202:c.instructions+=10;goto B5de202;
case 0x5de208:c.instructions+=9;goto B5de208;
case 0x5de20c:c.instructions+=8;goto B5de20c;
case 0x5de212:c.instructions+=7;goto B5de212;
case 0x5de216:c.instructions+=6;goto B5de216;
case 0x5de21a:c.instructions+=5;goto B5de21a;
case 0x5de21e:c.instructions+=4;goto B5de21e;
case 0x5de221:c.instructions+=3;goto B5de221;
case 0x5de228:c.instructions+=2;goto B5de228;
case 0x5de22a:c.instructions+=1;goto B5de22a;
case 0x5de22c:goto L5de22c;
case 0x5de22d:goto L5de22d;
case 0x5de232:goto L5de232;
case 0x5de233:c.instructions+=1;goto B5de233;
case 0x5de240:goto L5de240;
case 0x5de244:c.instructions+=3;goto B5de244;
case 0x5de247:c.instructions+=2;goto B5de247;
case 0x5de249:c.instructions+=1;goto B5de249;
case 0x5de24b:goto L5de24b;
case 0x5de24e:c.instructions+=3;goto B5de24e;
case 0x5de254:c.instructions+=2;goto B5de254;
case 0x5de25b:c.instructions+=1;goto B5de25b;
case 0x5de25d:goto L5de25d;
case 0x5de25f:goto L5de25f;
case 0x5de262:c.instructions+=15;goto B5de262;
case 0x5de266:c.instructions+=14;goto B5de266;
case 0x5de267:c.instructions+=13;goto B5de267;
case 0x5de268:c.instructions+=12;goto B5de268;
case 0x5de26a:c.instructions+=11;goto B5de26a;
case 0x5de26d:c.instructions+=10;goto B5de26d;
case 0x5de26e:c.instructions+=9;goto B5de26e;
case 0x5de270:c.instructions+=8;goto B5de270;
case 0x5de271:c.instructions+=7;goto B5de271;
case 0x5de277:c.instructions+=6;goto B5de277;
case 0x5de27b:c.instructions+=5;goto B5de27b;
case 0x5de27f:c.instructions+=4;goto B5de27f;
case 0x5de281:c.instructions+=3;goto B5de281;
case 0x5de286:c.instructions+=2;goto B5de286;
case 0x5de28b:c.instructions+=1;goto B5de28b;
case 0x5de290:goto L5de290;
case 0x5de292:c.instructions+=1;goto B5de292;
case 0x5de294:goto L5de294;
case 0x5de297:c.instructions+=3;goto B5de297;
case 0x5de29d:c.instructions+=2;goto B5de29d;
case 0x5de2a4:c.instructions+=1;goto B5de2a4;
case 0x5de2a6:goto L5de2a6;
case 0x5de2a8:goto L5de2a8;
case 0x5de2ac:c.instructions+=6;goto B5de2ac;
case 0x5de2ae:c.instructions+=5;goto B5de2ae;
case 0x5de2b4:c.instructions+=4;goto B5de2b4;
case 0x5de2b6:c.instructions+=3;goto B5de2b6;
case 0x5de2b8:c.instructions+=2;goto B5de2b8;
case 0x5de2bd:c.instructions+=1;goto B5de2bd;
case 0x5de2bf:goto L5de2bf;
case 0x5de2c1:c.instructions+=9;goto B5de2c1;
case 0x5de2c3:c.instructions+=8;goto B5de2c3;
case 0x5de2c6:c.instructions+=7;goto B5de2c6;
case 0x5de2c8:c.instructions+=6;goto B5de2c8;
case 0x5de2cb:c.instructions+=5;goto B5de2cb;
case 0x5de2cd:c.instructions+=4;goto B5de2cd;
case 0x5de2d1:c.instructions+=3;goto B5de2d1;
case 0x5de2d4:c.instructions+=2;goto B5de2d4;
case 0x5de2d6:c.instructions+=1;goto B5de2d6;
case 0x5de2d8:goto L5de2d8;
case 0x5de2db:c.instructions+=1;goto B5de2db;
case 0x5de2e2:goto L5de2e2;
case 0x5de2e4:c.instructions+=1;goto B5de2e4;
case 0x5de2e6:goto L5de2e6;
case 0x5de2eb:goto L5de2eb;
case 0x5de2ef:c.instructions+=2;goto B5de2ef;
case 0x5de2f1:c.instructions+=1;goto B5de2f1;
case 0x5de2f7:goto L5de2f7;
case 0x5de2fb:c.instructions+=4;goto B5de2fb;
case 0x5de2fd:c.instructions+=3;goto B5de2fd;
case 0x5de302:c.instructions+=2;goto B5de302;
case 0x5de304:c.instructions+=1;goto B5de304;
case 0x5de30a:goto L5de30a;
case 0x5de30d:c.instructions+=3;goto B5de30d;
case 0x5de312:c.instructions+=2;goto B5de312;
case 0x5de319:c.instructions+=1;goto B5de319;
case 0x5de31e:goto L5de31e;
case 0x5de320:c.instructions+=6;goto B5de320;
case 0x5de322:c.instructions+=5;goto B5de322;
case 0x5de325:c.instructions+=4;goto B5de325;
case 0x5de327:c.instructions+=3;goto B5de327;
case 0x5de32a:c.instructions+=2;goto B5de32a;
case 0x5de32c:c.instructions+=1;goto B5de32c;
case 0x5de32e:goto L5de32e;
case 0x5de331:c.instructions+=2;goto B5de331;
case 0x5de335:c.instructions+=1;goto B5de335;
case 0x5de337:goto L5de337;
case 0x5de339:c.instructions+=1;goto B5de339;
case 0x5de33b:goto L5de33b;
case 0x5de33f:c.instructions+=5;goto B5de33f;
case 0x5de343:c.instructions+=4;goto B5de343;
case 0x5de344:c.instructions+=3;goto B5de344;
case 0x5de345:c.instructions+=2;goto B5de345;
case 0x5de347:c.instructions+=1;goto B5de347;
case 0x5de34c:goto L5de34c;
case 0x5de34e:c.instructions+=1;goto B5de34e;
case 0x5de350:goto L5de350;
case 0x5de355:c.instructions+=1;goto B5de355;
case 0x5de357:goto L5de357;
case 0x5de359:c.instructions+=2;goto B5de359;
case 0x5de35d:c.instructions+=1;goto B5de35d;
case 0x5de360:goto L5de360;
case 0x5de364:c.instructions+=3;goto B5de364;
case 0x5de366:c.instructions+=2;goto B5de366;
case 0x5de36b:c.instructions+=1;goto B5de36b;
case 0x5de36d:goto L5de36d;
case 0x5de36f:c.instructions+=1;goto B5de36f;
case 0x5de371:goto L5de371;
case 0x5de376:goto L5de376;
case 0x5de37a:c.instructions+=2;goto B5de37a;
case 0x5de37f:c.instructions+=1;goto B5de37f;
case 0x5de381:goto L5de381;
case 0x5de383:c.instructions+=1;goto B5de383;
case 0x5de385:goto L5de385;
case 0x5de386:goto L5de386;
case 0x5de388:c.instructions+=1;goto B5de388;
case 0x5de38e:goto L5de38e;
case 0x5de38f:c.instructions+=2;goto B5de38f;
case 0x5de391:c.instructions+=1;goto B5de391;
case 0x5de396:goto L5de396;
case 0x5de398:c.instructions+=3;goto B5de398;
case 0x5de39c:c.instructions+=2;goto B5de39c;
case 0x5de39f:c.instructions+=1;goto B5de39f;
case 0x5de3a1:goto L5de3a1;
case 0x5de3a2:c.instructions+=1;goto B5de3a2;
case 0x5de3a4:goto L5de3a4;
case 0x5de3a5:c.instructions+=1;goto B5de3a5;
case 0x5de3a7:goto L5de3a7;
case 0x5de3aa:c.instructions+=2;goto B5de3aa;
case 0x5de3ac:c.instructions+=1;goto B5de3ac;
case 0x5de3ae:goto L5de3ae;
case 0x5de3b1:c.instructions+=2;goto B5de3b1;
case 0x5de3b3:c.instructions+=1;goto B5de3b3;
case 0x5de3b9:goto L5de3b9;
case 0x5de3bc:c.instructions+=9;goto B5de3bc;
case 0x5de3c0:c.instructions+=8;goto B5de3c0;
case 0x5de3c2:c.instructions+=7;goto B5de3c2;
case 0x5de3c5:c.instructions+=6;goto B5de3c5;
case 0x5de3c8:c.instructions+=5;goto B5de3c8;
case 0x5de3cd:c.instructions+=4;goto B5de3cd;
case 0x5de3cf:c.instructions+=3;goto B5de3cf;
case 0x5de3d2:c.instructions+=2;goto B5de3d2;
case 0x5de3d7:c.instructions+=1;goto B5de3d7;
case 0x5de3d9:goto L5de3d9;
case 0x5de3da:c.instructions+=1;goto B5de3da;
case 0x5de3dc:goto L5de3dc;
case 0x5de3dd:c.instructions+=1;goto B5de3dd;
case 0x5de3df:goto L5de3df;
case 0x5de3e2:c.instructions+=1;goto B5de3e2;
case 0x5de3e4:goto L5de3e4;
case 0x5de3e7:c.instructions+=1;goto B5de3e7;
case 0x5de3e9:goto L5de3e9;
case 0x5de3eb:goto L5de3eb;
case 0x5de3ee:c.instructions+=4;goto B5de3ee;
case 0x5de3f1:c.instructions+=3;goto B5de3f1;
case 0x5de3f4:c.instructions+=2;goto B5de3f4;
case 0x5de3f7:c.instructions+=1;goto B5de3f7;
case 0x5de3f9:goto L5de3f9;
case 0x5de3fc:c.instructions+=3;goto B5de3fc;
case 0x5de3fe:c.instructions+=2;goto B5de3fe;
case 0x5de400:c.instructions+=1;goto B5de400;
case 0x5de406:goto L5de406;
case 0x5de408:c.instructions+=1;goto B5de408;
case 0x5de40a:goto L5de40a;
case 0x5de40c:goto L5de40c;
case 0x5de40e:c.instructions+=1;goto B5de40e;
case 0x5de410:goto L5de410;
case 0x5de412:c.instructions+=4;goto B5de412;
case 0x5de415:c.instructions+=3;goto B5de415;
case 0x5de417:c.instructions+=2;goto B5de417;
case 0x5de419:c.instructions+=1;goto B5de419;
case 0x5de41b:goto L5de41b;
case 0x5de41e:goto L5de41e;
case 0x5de421:goto L5de421;
case 0x5de425:c.instructions+=5;goto B5de425;
case 0x5de427:c.instructions+=4;goto B5de427;
case 0x5de42a:c.instructions+=3;goto B5de42a;
case 0x5de42d:c.instructions+=2;goto B5de42d;
case 0x5de42f:c.instructions+=1;goto B5de42f;
case 0x5de431:goto L5de431;
case 0x5de435:c.instructions+=2;goto B5de435;
case 0x5de437:c.instructions+=1;goto B5de437;
case 0x5de439:goto L5de439;
case 0x5de43b:c.instructions+=1;goto B5de43b;
case 0x5de43d:goto L5de43d;
case 0x5de442:c.instructions+=1;goto B5de442;
case 0x5de444:goto L5de444;
case 0x5de449:goto L5de449;
case 0x5de44c:c.instructions+=3;goto B5de44c;
case 0x5de44f:c.instructions+=2;goto B5de44f;
case 0x5de452:c.instructions+=1;goto B5de452;
case 0x5de454:goto L5de454;
case 0x5de459:c.instructions+=1;goto B5de459;
case 0x5de45b:goto L5de45b;
case 0x5de45f:c.instructions+=2;goto B5de45f;
case 0x5de461:c.instructions+=1;goto B5de461;
case 0x5de463:goto L5de463;
case 0x5de46a:c.instructions+=1;goto B5de46a;
case 0x5de46c:goto L5de46c;
case 0x5de46e:goto L5de46e;
case 0x5de471:c.instructions+=3;goto B5de471;
case 0x5de474:c.instructions+=2;goto B5de474;
case 0x5de477:c.instructions+=1;goto B5de477;
case 0x5de479:goto L5de479;
case 0x5de47b:c.instructions+=1;goto B5de47b;
case 0x5de47d:goto L5de47d;
case 0x5de47f:goto L5de47f;
case 0x5de483:c.instructions+=2;goto B5de483;
case 0x5de485:c.instructions+=1;goto B5de485;
case 0x5de487:goto L5de487;
case 0x5de48b:goto L5de48b;
case 0x5de48f:c.instructions+=5;goto B5de48f;
case 0x5de495:c.instructions+=4;goto B5de495;
case 0x5de496:c.instructions+=3;goto B5de496;
case 0x5de49a:c.instructions+=2;goto B5de49a;
case 0x5de49c:c.instructions+=1;goto B5de49c;
case 0x5de4a1:goto L5de4a1;
case 0x5de4a3:goto L5de4a3;
case 0x5de4a6:c.instructions+=4;goto B5de4a6;
case 0x5de4ac:c.instructions+=3;goto B5de4ac;
case 0x5de4ae:c.instructions+=2;goto B5de4ae;
case 0x5de4b1:c.instructions+=1;goto B5de4b1;
case 0x5de4b3:goto L5de4b3;
case 0x5de4b6:c.instructions+=3;goto B5de4b6;
case 0x5de4bc:c.instructions+=2;goto B5de4bc;
case 0x5de4c3:c.instructions+=1;goto B5de4c3;
case 0x5de4c5:goto L5de4c5;
case 0x5de4c7:goto L5de4c7;
case 0x5de4c9:c.instructions+=11;goto B5de4c9;
case 0x5de4cf:c.instructions+=10;goto B5de4cf;
case 0x5de4d4:c.instructions+=9;goto B5de4d4;
case 0x5de4d6:c.instructions+=8;goto B5de4d6;
case 0x5de4d8:c.instructions+=7;goto B5de4d8;
case 0x5de4db:c.instructions+=6;goto B5de4db;
case 0x5de4dd:c.instructions+=5;goto B5de4dd;
case 0x5de4e0:c.instructions+=4;goto B5de4e0;
case 0x5de4e2:c.instructions+=3;goto B5de4e2;
case 0x5de4e4:c.instructions+=2;goto B5de4e4;
case 0x5de4e6:c.instructions+=1;goto B5de4e6;
case 0x5de4e8:goto L5de4e8;
case 0x5de4eb:c.instructions+=3;goto B5de4eb;
case 0x5de4f1:c.instructions+=2;goto B5de4f1;
case 0x5de4f8:c.instructions+=1;goto B5de4f8;
case 0x5de4fa:goto L5de4fa;
case 0x5de4fc:goto L5de4fc;
case 0x5de4fe:c.instructions+=12;goto B5de4fe;
case 0x5de500:c.instructions+=11;goto B5de500;
case 0x5de506:c.instructions+=10;goto B5de506;
case 0x5de50b:c.instructions+=9;goto B5de50b;
case 0x5de50d:c.instructions+=8;goto B5de50d;
case 0x5de50f:c.instructions+=7;goto B5de50f;
case 0x5de512:c.instructions+=6;goto B5de512;
case 0x5de514:c.instructions+=5;goto B5de514;
case 0x5de517:c.instructions+=4;goto B5de517;
case 0x5de519:c.instructions+=3;goto B5de519;
case 0x5de51b:c.instructions+=2;goto B5de51b;
case 0x5de51d:c.instructions+=1;goto B5de51d;
case 0x5de51f:goto L5de51f;
case 0x5de521:c.instructions+=2;goto B5de521;
case 0x5de523:c.instructions+=1;goto B5de523;
case 0x5de525:goto L5de525;
case 0x5de527:goto L5de527;
case 0x5de529:c.instructions+=1;goto B5de529;
case 0x5de52b:goto L5de52b;
case 0x5de52f:c.instructions+=6;goto B5de52f;
case 0x5de531:c.instructions+=5;goto B5de531;
case 0x5de534:c.instructions+=4;goto B5de534;
case 0x5de536:c.instructions+=3;goto B5de536;
case 0x5de53d:c.instructions+=2;goto B5de53d;
case 0x5de541:c.instructions+=1;goto B5de541;
case 0x5de542:goto L5de542;
case 0x5de544:c.instructions+=2;goto B5de544;
case 0x5de547:c.instructions+=1;goto B5de547;
case 0x5de549:goto L5de549;
case 0x5de54a:c.instructions+=1;goto B5de54a;
case 0x5de54c:goto L5de54c;
case 0x5de54d:c.instructions+=1;goto B5de54d;
case 0x5de54f:goto L5de54f;
case 0x5de551:c.instructions+=2;goto B5de551;
case 0x5de553:c.instructions+=1;goto B5de553;
case 0x5de555:goto L5de555;
case 0x5de55b:c.instructions+=1;goto B5de55b;
case 0x5de55d:goto L5de55d;
case 0x5de563:c.instructions+=1;goto B5de563;
case 0x5de565:goto L5de565;
case 0x5de567:c.instructions+=2;goto B5de567;
case 0x5de569:c.instructions+=1;goto B5de569;
case 0x5de56b:goto L5de56b;
case 0x5de571:c.instructions+=1;goto B5de571;
case 0x5de573:goto L5de573;
case 0x5de579:c.instructions+=1;goto B5de579;
case 0x5de57b:goto L5de57b;
case 0x5de57d:c.instructions+=2;goto B5de57d;
case 0x5de57f:c.instructions+=1;goto B5de57f;
case 0x5de581:goto L5de581;
case 0x5de587:c.instructions+=1;goto B5de587;
case 0x5de589:goto L5de589;
case 0x5de58f:goto L5de58f;
case 0x5de591:goto L5de591;
case 0x5de594:c.instructions+=2;goto B5de594;
case 0x5de595:c.instructions+=1;goto B5de595;
case 0x5de597:goto L5de597;
case 0x5de59d:c.instructions+=1;goto B5de59d;
case 0x5de5a1:goto L5de5a1;
case 0x5de5a5:c.instructions+=2;goto B5de5a5;
case 0x5de5a7:c.instructions+=1;goto B5de5a7;
case 0x5de5ad:goto L5de5ad;
case 0x5de5ae:c.instructions+=5;goto B5de5ae;
case 0x5de5af:c.instructions+=4;goto B5de5af;
case 0x5de5b0:c.instructions+=3;goto B5de5b0;
case 0x5de5b1:c.instructions+=2;goto B5de5b1;
case 0x5de5b4:c.instructions+=1;goto B5de5b4;
case 0x5de5c0:goto L5de5c0;
case 0x5de5c3:c.instructions+=8;goto B5de5c3;
case 0x5de5c4:c.instructions+=7;goto B5de5c4;
case 0x5de5c5:c.instructions+=6;goto B5de5c5;
case 0x5de5c9:c.instructions+=5;goto B5de5c9;
case 0x5de5ca:c.instructions+=4;goto B5de5ca;
case 0x5de5cb:c.instructions+=3;goto B5de5cb;
case 0x5de5cd:c.instructions+=2;goto B5de5cd;
case 0x5de5cf:c.instructions+=1;goto B5de5cf;
case 0x5de5d0:goto L5de5d0;
case 0x5de5d4:c.instructions+=2;goto B5de5d4;
case 0x5de5d6:c.instructions+=1;goto B5de5d6;
case 0x5de5dc:goto L5de5dc;
case 0x5de5df:c.instructions+=1;goto B5de5df;
case 0x5de5e3:goto L5de5e3;
case 0x5de5e5:c.instructions+=2;goto B5de5e5;
case 0x5de5e8:c.instructions+=1;goto B5de5e8;
case 0x5de5ea:goto L5de5ea;
case 0x5de5eb:c.instructions+=1;goto B5de5eb;
case 0x5de5ed:goto L5de5ed;
case 0x5de5ee:c.instructions+=1;goto B5de5ee;
case 0x5de5f0:goto L5de5f0;
case 0x5de5f2:c.instructions+=2;goto B5de5f2;
case 0x5de5f4:c.instructions+=1;goto B5de5f4;
case 0x5de5f6:goto L5de5f6;
case 0x5de5f9:c.instructions+=2;goto B5de5f9;
case 0x5de5fb:c.instructions+=1;goto B5de5fb;
case 0x5de601:goto L5de601;
case 0x5de603:c.instructions+=3;goto B5de603;
case 0x5de606:c.instructions+=2;goto B5de606;
case 0x5de608:c.instructions+=1;goto B5de608;
case 0x5de60a:goto L5de60a;
case 0x5de60b:c.instructions+=1;goto B5de60b;
case 0x5de60d:goto L5de60d;
case 0x5de60e:c.instructions+=1;goto B5de60e;
case 0x5de610:goto L5de610;
case 0x5de612:goto L5de612;
case 0x5de614:goto L5de614;
case 0x5de617:c.instructions+=2;goto B5de617;
case 0x5de61a:c.instructions+=1;goto B5de61a;
case 0x5de620:goto L5de620;
case 0x5de627:c.instructions+=1;goto B5de627;
case 0x5de62e:goto L5de62e;
case 0x5de630:c.instructions+=4;goto B5de630;
case 0x5de633:c.instructions+=3;goto B5de633;
case 0x5de636:c.instructions+=2;goto B5de636;
case 0x5de639:c.instructions+=1;goto B5de639;
case 0x5de63b:goto L5de63b;
case 0x5de63d:c.instructions+=3;goto B5de63d;
case 0x5de63f:c.instructions+=2;goto B5de63f;
case 0x5de641:c.instructions+=1;goto B5de641;
case 0x5de647:goto L5de647;
case 0x5de649:c.instructions+=1;goto B5de649;
case 0x5de64b:goto L5de64b;
case 0x5de650:goto L5de650;
case 0x5de652:c.instructions+=2;goto B5de652;
case 0x5de655:c.instructions+=1;goto B5de655;
case 0x5de657:goto L5de657;
case 0x5de659:c.instructions+=5;goto B5de659;
case 0x5de65b:c.instructions+=4;goto B5de65b;
case 0x5de65e:c.instructions+=3;goto B5de65e;
case 0x5de661:c.instructions+=2;goto B5de661;
case 0x5de664:c.instructions+=1;goto B5de664;
case 0x5de666:goto L5de666;
case 0x5de669:c.instructions+=1;goto B5de669;
case 0x5de66b:goto L5de66b;
case 0x5de66f:c.instructions+=2;goto B5de66f;
case 0x5de671:c.instructions+=1;goto B5de671;
case 0x5de673:goto L5de673;
case 0x5de67a:c.instructions+=1;goto B5de67a;
case 0x5de67c:goto L5de67c;
case 0x5de67e:goto L5de67e;
case 0x5de681:c.instructions+=3;goto B5de681;
case 0x5de684:c.instructions+=2;goto B5de684;
case 0x5de687:c.instructions+=1;goto B5de687;
case 0x5de68d:goto L5de68d;
case 0x5de68f:c.instructions+=6;goto B5de68f;
case 0x5de692:c.instructions+=5;goto B5de692;
case 0x5de695:c.instructions+=4;goto B5de695;
case 0x5de697:c.instructions+=3;goto B5de697;
case 0x5de699:c.instructions+=2;goto B5de699;
case 0x5de69d:c.instructions+=1;goto B5de69d;
case 0x5de69f:goto L5de69f;
case 0x5de6a3:c.instructions+=1;goto B5de6a3;
case 0x5de6a5:goto L5de6a5;
case 0x5de6a9:goto L5de6a9;
case 0x5de6ab:c.instructions+=1;goto B5de6ab;
case 0x5de6ad:goto L5de6ad;
case 0x5de6b1:c.instructions+=1;goto B5de6b1;
case 0x5de6b3:goto L5de6b3;
case 0x5de6b7:goto L5de6b7;
case 0x5de6ba:c.instructions+=2;goto B5de6ba;
case 0x5de6bc:c.instructions+=1;goto B5de6bc;
case 0x5de6be:goto L5de6be;
case 0x5de6c5:c.instructions+=2;goto B5de6c5;
case 0x5de6c9:c.instructions+=1;goto B5de6c9;
case 0x5de6cb:goto L5de6cb;
case 0x5de6cf:c.instructions+=2;goto B5de6cf;
case 0x5de6d1:c.instructions+=1;goto B5de6d1;
case 0x5de6d3:goto L5de6d3;
case 0x5de6d5:c.instructions+=11;goto B5de6d5;
case 0x5de6d7:c.instructions+=10;goto B5de6d7;
case 0x5de6da:c.instructions+=9;goto B5de6da;
case 0x5de6dc:c.instructions+=8;goto B5de6dc;
case 0x5de6de:c.instructions+=7;goto B5de6de;
case 0x5de6e1:c.instructions+=6;goto B5de6e1;
case 0x5de6e3:c.instructions+=5;goto B5de6e3;
case 0x5de6e6:c.instructions+=4;goto B5de6e6;
case 0x5de6e8:c.instructions+=3;goto B5de6e8;
case 0x5de6ea:c.instructions+=2;goto B5de6ea;
case 0x5de6ee:c.instructions+=1;goto B5de6ee;
case 0x5de6f0:goto L5de6f0;
case 0x5de6f4:c.instructions+=1;goto B5de6f4;
case 0x5de6f6:goto L5de6f6;
case 0x5de6fa:goto L5de6fa;
case 0x5de6fc:c.instructions+=1;goto B5de6fc;
case 0x5de6fe:goto L5de6fe;
case 0x5de702:c.instructions+=1;goto B5de702;
case 0x5de704:goto L5de704;
case 0x5de708:goto L5de708;
case 0x5de70b:c.instructions+=2;goto B5de70b;
case 0x5de70d:c.instructions+=1;goto B5de70d;
case 0x5de70f:goto L5de70f;
case 0x5de716:c.instructions+=1;goto B5de716;
case 0x5de718:goto L5de718;
case 0x5de71a:goto L5de71a;
case 0x5de71e:goto L5de71e;
case 0x5de721:c.instructions+=8;goto B5de721;
case 0x5de724:c.instructions+=7;goto B5de724;
case 0x5de725:c.instructions+=6;goto B5de725;
case 0x5de726:c.instructions+=5;goto B5de726;
case 0x5de72d:c.instructions+=4;goto B5de72d;
case 0x5de72e:c.instructions+=3;goto B5de72e;
case 0x5de730:c.instructions+=2;goto B5de730;
case 0x5de731:c.instructions+=1;goto B5de731;
case 0x5de736:goto L5de736;
case 0x5de73a:c.instructions+=4;goto B5de73a;
case 0x5de73d:c.instructions+=3;goto B5de73d;
case 0x5de73e:c.instructions+=2;goto B5de73e;
case 0x5de742:c.instructions+=1;goto B5de742;
case 0x5de748:goto L5de748;
case 0x5de749:c.instructions+=2;goto B5de749;
case 0x5de74c:c.instructions+=1;goto B5de74c;
case 0x5de752:goto L5de752;
case 0x5de754:c.instructions+=4;goto B5de754;
case 0x5de757:c.instructions+=3;goto B5de757;
case 0x5de75b:c.instructions+=2;goto B5de75b;
case 0x5de75f:c.instructions+=1;goto B5de75f;
case 0x5de760:goto L5de760;
case 0x5de762:c.instructions+=1;goto B5de762;
case 0x5de768:goto L5de768;
case 0x5de76a:c.instructions+=2;goto B5de76a;
case 0x5de76c:c.instructions+=1;goto B5de76c;
case 0x5de772:goto L5de772;
case 0x5de775:c.instructions+=3;goto B5de775;
case 0x5de778:c.instructions+=2;goto B5de778;
case 0x5de77b:c.instructions+=1;goto B5de77b;
case 0x5de781:goto L5de781;
case 0x5de786:c.instructions+=2;goto B5de786;
case 0x5de78e:c.instructions+=1;goto B5de78e;
case 0x5de794:goto L5de794;
case 0x5de79a:c.instructions+=1;goto B5de79a;
case 0x5de7a0:goto L5de7a0;
case 0x5de7a6:c.instructions+=2;goto B5de7a6;
case 0x5de7ae:c.instructions+=1;goto B5de7ae;
case 0x5de7b0:goto L5de7b0;
case 0x5de7b4:c.instructions+=4;goto B5de7b4;
case 0x5de7b7:c.instructions+=3;goto B5de7b7;
case 0x5de7b9:c.instructions+=2;goto B5de7b9;
case 0x5de7be:c.instructions+=1;goto B5de7be;
case 0x5de7c0:goto L5de7c0;
case 0x5de7c2:c.instructions+=1;goto B5de7c2;
case 0x5de7c4:goto L5de7c4;
case 0x5de7c9:goto L5de7c9;
case 0x5de7cd:c.instructions+=2;goto B5de7cd;
case 0x5de7d2:c.instructions+=1;goto B5de7d2;
case 0x5de7d4:goto L5de7d4;
case 0x5de7d6:c.instructions+=1;goto B5de7d6;
case 0x5de7d8:goto L5de7d8;
case 0x5de7d9:goto L5de7d9;
case 0x5de7dd:c.instructions+=1;goto B5de7dd;
case 0x5de7e3:goto L5de7e3;
case 0x5de7e5:c.instructions+=2;goto B5de7e5;
case 0x5de7e7:c.instructions+=1;goto B5de7e7;
case 0x5de7f0:goto L5de7f0;
case 0x5de7f3:c.instructions+=2;goto B5de7f3;
case 0x5de7f8:c.instructions+=1;goto B5de7f8;
case 0x5de7fa:goto L5de7fa;
case 0x5de7fc:c.instructions+=1;goto B5de7fc;
case 0x5de7fe:goto L5de7fe;
case 0x5de802:c.instructions+=1;goto B5de802;
case 0x5de804:goto L5de804;
case 0x5de805:goto L5de805;
case 0x5de806:c.instructions+=3;goto B5de806;
case 0x5de809:c.instructions+=2;goto B5de809;
case 0x5de80c:c.instructions+=1;goto B5de80c;
case 0x5de80e:goto L5de80e;
case 0x5de810:goto L5de810;
case 0x5de813:c.instructions+=3;goto B5de813;
case 0x5de816:c.instructions+=2;goto B5de816;
case 0x5de819:c.instructions+=1;goto B5de819;
case 0x5de81b:goto L5de81b;
case 0x5de81d:c.instructions+=1;goto B5de81d;
case 0x5de822:goto L5de822;
case 0x5de824:c.instructions+=1;goto B5de824;
case 0x5de826:goto L5de826;
case 0x5de829:c.instructions+=3;goto B5de829;
case 0x5de82c:c.instructions+=2;goto B5de82c;
case 0x5de82f:c.instructions+=1;goto B5de82f;
case 0x5de831:goto L5de831;
case 0x5de834:c.instructions+=1;goto B5de834;
case 0x5de836:goto L5de836;
case 0x5de83a:c.instructions+=2;goto B5de83a;
case 0x5de83c:c.instructions+=1;goto B5de83c;
case 0x5de83e:goto L5de83e;
case 0x5de845:c.instructions+=3;goto B5de845;
case 0x5de849:c.instructions+=2;goto B5de849;
case 0x5de84d:c.instructions+=1;goto B5de84d;
case 0x5de852:goto L5de852;
case 0x5de858:c.instructions+=3;goto B5de858;
case 0x5de85b:c.instructions+=2;goto B5de85b;
case 0x5de85d:c.instructions+=1;goto B5de85d;
case 0x5de85f:goto L5de85f;
case 0x5de867:goto L5de867;
case 0x5de86b:c.instructions+=1;goto B5de86b;
case 0x5de870:goto L5de870;
case 0x5de877:c.instructions+=7;goto B5de877;
case 0x5de87b:c.instructions+=6;goto B5de87b;
case 0x5de87f:c.instructions+=5;goto B5de87f;
case 0x5de880:c.instructions+=4;goto B5de880;
case 0x5de883:c.instructions+=3;goto B5de883;
case 0x5de885:c.instructions+=2;goto B5de885;
case 0x5de889:c.instructions+=1;goto B5de889;
case 0x5de88f:goto L5de88f;
case 0x5de893:goto L5de893;
case 0x5de897:c.instructions+=6;goto B5de897;
case 0x5de898:c.instructions+=5;goto B5de898;
case 0x5de89b:c.instructions+=4;goto B5de89b;
case 0x5de8a0:c.instructions+=3;goto B5de8a0;
case 0x5de8a4:c.instructions+=2;goto B5de8a4;
case 0x5de8a8:c.instructions+=1;goto B5de8a8;
case 0x5de8ae:goto L5de8ae;
case 0x5de8af:c.instructions+=5;goto B5de8af;
case 0x5de8b0:c.instructions+=4;goto B5de8b0;
case 0x5de8b1:c.instructions+=3;goto B5de8b1;
case 0x5de8b2:c.instructions+=2;goto B5de8b2;
case 0x5de8b5:c.instructions+=1;goto B5de8b5;
case 0x5de8d0:goto L5de8d0;
case 0x5de8d1:c.instructions+=6;goto B5de8d1;
case 0x5de8d2:c.instructions+=5;goto B5de8d2;
case 0x5de8d4:c.instructions+=4;goto B5de8d4;
case 0x5de8d5:c.instructions+=3;goto B5de8d5;
case 0x5de8da:c.instructions+=2;goto B5de8da;
case 0x5de8dd:c.instructions+=1;goto B5de8dd;
case 0x5de8e0:goto L5de8e0;
case 0x5de8e3:c.instructions+=2;goto B5de8e3;
case 0x5de8e5:c.instructions+=1;goto B5de8e5;
case 0x5de8e7:goto L5de8e7;
case 0x5de8ea:c.instructions+=2;goto B5de8ea;
case 0x5de8ec:c.instructions+=1;goto B5de8ec;
case 0x5de8ee:goto L5de8ee;
case 0x5de8f1:c.instructions+=4;goto B5de8f1;
case 0x5de8f3:c.instructions+=3;goto B5de8f3;
case 0x5de8f6:c.instructions+=2;goto B5de8f6;
case 0x5de8f9:c.instructions+=1;goto B5de8f9;
case 0x5de8fb:goto L5de8fb;
case 0x5de900:c.instructions+=1;goto B5de900;
case 0x5de903:goto L5de903;
case 0x5de906:c.instructions+=2;goto B5de906;
case 0x5de908:c.instructions+=1;goto B5de908;
case 0x5de90a:goto L5de90a;
case 0x5de90c:c.instructions+=2;goto B5de90c;
case 0x5de90e:c.instructions+=1;goto B5de90e;
case 0x5de910:goto L5de910;
case 0x5de913:c.instructions+=4;goto B5de913;
case 0x5de915:c.instructions+=3;goto B5de915;
case 0x5de918:c.instructions+=2;goto B5de918;
case 0x5de91b:c.instructions+=1;goto B5de91b;
case 0x5de91d:goto L5de91d;
case 0x5de922:c.instructions+=1;goto B5de922;
case 0x5de925:goto L5de925;
case 0x5de927:c.instructions+=1;goto B5de927;
case 0x5de929:goto L5de929;
case 0x5de92c:c.instructions+=2;goto B5de92c;
case 0x5de92e:c.instructions+=1;goto B5de92e;
case 0x5de930:goto L5de930;
case 0x5de933:c.instructions+=4;goto B5de933;
case 0x5de935:c.instructions+=3;goto B5de935;
case 0x5de938:c.instructions+=2;goto B5de938;
case 0x5de93b:c.instructions+=1;goto B5de93b;
case 0x5de93d:goto L5de93d;
case 0x5de942:c.instructions+=1;goto B5de942;
case 0x5de945:goto L5de945;
case 0x5de948:c.instructions+=2;goto B5de948;
case 0x5de94a:c.instructions+=1;goto B5de94a;
case 0x5de94c:goto L5de94c;
case 0x5de94f:c.instructions+=2;goto B5de94f;
case 0x5de951:c.instructions+=1;goto B5de951;
case 0x5de953:goto L5de953;
case 0x5de956:c.instructions+=4;goto B5de956;
case 0x5de958:c.instructions+=3;goto B5de958;
case 0x5de95b:c.instructions+=2;goto B5de95b;
case 0x5de95e:c.instructions+=1;goto B5de95e;
case 0x5de960:goto L5de960;
case 0x5de965:c.instructions+=1;goto B5de965;
case 0x5de968:goto L5de968;
case 0x5de96b:c.instructions+=4;goto B5de96b;
case 0x5de96e:c.instructions+=3;goto B5de96e;
case 0x5de971:c.instructions+=2;goto B5de971;
case 0x5de977:c.instructions+=1;goto B5de977;
case 0x5de97d:goto L5de97d;
case 0x5de97e:c.instructions+=4;goto B5de97e;
case 0x5de97f:c.instructions+=3;goto B5de97f;
case 0x5de981:c.instructions+=2;goto B5de981;
case 0x5de982:c.instructions+=1;goto B5de982;
case 0x5de990:goto L5de990;
case 0x5de993:c.instructions+=6;goto B5de993;
case 0x5de995:c.instructions+=5;goto B5de995;
case 0x5de99b:c.instructions+=4;goto B5de99b;
case 0x5de99d:c.instructions+=3;goto B5de99d;
case 0x5de9a1:c.instructions+=2;goto B5de9a1;
case 0x5de9a9:c.instructions+=1;goto B5de9a9;
case 0x5de9af:goto L5de9af;
case 0x5de9b0:c.instructions+=6;goto B5de9b0;
case 0x5de9b1:c.instructions+=5;goto B5de9b1;
case 0x5de9b7:c.instructions+=4;goto B5de9b7;
case 0x5de9b8:c.instructions+=3;goto B5de9b8;
case 0x5de9bc:c.instructions+=2;goto B5de9bc;
case 0x5de9bd:c.instructions+=1;goto B5de9bd;
case 0x5de9c0:goto L5de9c0;
case 0x5de9c4:c.instructions+=4;goto B5de9c4;
case 0x5de9c6:c.instructions+=3;goto B5de9c6;
case 0x5de9c8:c.instructions+=2;goto B5de9c8;
case 0x5de9cc:c.instructions+=1;goto B5de9cc;
case 0x5de9d2:goto L5de9d2;
case 0x5de9d5:c.instructions+=2;goto B5de9d5;
case 0x5de9d7:c.instructions+=1;goto B5de9d7;
case 0x5de9dd:goto L5de9dd;
case 0x5de9e2:c.instructions+=2;goto B5de9e2;
case 0x5de9ea:c.instructions+=1;goto B5de9ea;
case 0x5de9f0:goto L5de9f0;
case 0x5de9f6:c.instructions+=1;goto B5de9f6;
case 0x5dea00:goto L5dea00;
case 0x5dea04:c.instructions+=4;goto B5dea04;
case 0x5dea06:c.instructions+=3;goto B5dea06;
case 0x5dea0b:c.instructions+=2;goto B5dea0b;
case 0x5dea0f:c.instructions+=1;goto B5dea0f;
case 0x5dea11:goto L5dea11;
case 0x5dea17:c.instructions+=1;goto B5dea17;
case 0x5dea19:goto L5dea19;
case 0x5dea1e:c.instructions+=1;goto B5dea1e;
case 0x5dea22:goto L5dea22;
case 0x5dea26:c.instructions+=2;goto B5dea26;
case 0x5dea2b:c.instructions+=1;goto B5dea2b;
case 0x5dea2d:goto L5dea2d;
case 0x5dea33:c.instructions+=1;goto B5dea33;
case 0x5dea35:goto L5dea35;
case 0x5dea36:c.instructions+=1;goto B5dea36;
case 0x5dea3a:goto L5dea3a;
case 0x5dea3c:c.instructions+=1;goto B5dea3c;
case 0x5dea42:goto L5dea42;
case 0x5dea47:c.instructions+=6;goto B5dea47;
case 0x5dea49:c.instructions+=5;goto B5dea49;
case 0x5dea4b:c.instructions+=4;goto B5dea4b;
case 0x5dea4d:c.instructions+=3;goto B5dea4d;
case 0x5dea51:c.instructions+=2;goto B5dea51;
case 0x5dea55:c.instructions+=1;goto B5dea55;
case 0x5dea5b:goto L5dea5b;
case 0x5dea60:goto L5dea60;
case 0x5dea62:c.instructions+=2;goto B5dea62;
case 0x5dea64:c.instructions+=1;goto B5dea64;
case 0x5dea66:goto L5dea66;
case 0x5dea69:c.instructions+=2;goto B5dea69;
case 0x5dea6e:c.instructions+=1;goto B5dea6e;
case 0x5dea70:goto L5dea70;
case 0x5dea76:c.instructions+=1;goto B5dea76;
case 0x5dea78:goto L5dea78;
case 0x5dea7a:c.instructions+=1;goto B5dea7a;
case 0x5dea7c:goto L5dea7c;
case 0x5dea7d:goto L5dea7d;
case 0x5dea7e:c.instructions+=3;goto B5dea7e;
case 0x5dea81:c.instructions+=2;goto B5dea81;
case 0x5dea84:c.instructions+=1;goto B5dea84;
case 0x5dea86:goto L5dea86;
case 0x5dea88:goto L5dea88;
case 0x5dea8b:c.instructions+=4;goto B5dea8b;
case 0x5dea8d:c.instructions+=3;goto B5dea8d;
case 0x5dea90:c.instructions+=2;goto B5dea90;
case 0x5dea93:c.instructions+=1;goto B5dea93;
case 0x5dea95:goto L5dea95;
case 0x5dea97:c.instructions+=4;goto B5dea97;
case 0x5dea9a:c.instructions+=3;goto B5dea9a;
case 0x5dea9d:c.instructions+=2;goto B5dea9d;
case 0x5deaa0:c.instructions+=1;goto B5deaa0;
case 0x5deaa2:goto L5deaa2;
case 0x5deaa5:c.instructions+=1;goto B5deaa5;
case 0x5deaa7:goto L5deaa7;
case 0x5deaaa:c.instructions+=2;goto B5deaaa;
case 0x5deaac:c.instructions+=1;goto B5deaac;
case 0x5deaae:goto L5deaae;
case 0x5deab3:c.instructions+=1;goto B5deab3;
case 0x5deab5:goto L5deab5;
case 0x5deab9:c.instructions+=1;goto B5deab9;
case 0x5deabb:goto L5deabb;
case 0x5deac1:c.instructions+=3;goto B5deac1;
case 0x5deac4:c.instructions+=2;goto B5deac4;
case 0x5deac6:c.instructions+=1;goto B5deac6;
case 0x5deac8:goto L5deac8;
case 0x5deacd:c.instructions+=1;goto B5deacd;
case 0x5deacf:goto L5deacf;
case 0x5dead3:goto L5dead3;
case 0x5dead7:c.instructions+=3;goto B5dead7;
case 0x5dead8:c.instructions+=2;goto B5dead8;
case 0x5deada:c.instructions+=1;goto B5deada;
case 0x5deadc:goto L5deadc;
case 0x5deae0:c.instructions+=2;goto B5deae0;
case 0x5deae4:c.instructions+=1;goto B5deae4;
case 0x5deae8:goto L5deae8;
case 0x5deaed:c.instructions+=2;goto B5deaed;
case 0x5deaef:c.instructions+=1;goto B5deaef;
case 0x5deaf1:goto L5deaf1;
case 0x5deaf3:c.instructions+=1;goto B5deaf3;
case 0x5deaf5:goto L5deaf5;
case 0x5deaf7:goto L5deaf7;
case 0x5deafa:c.instructions+=1;goto B5deafa;
case 0x5deafc:goto L5deafc;
case 0x5deb01:c.instructions+=3;goto B5deb01;
case 0x5deb06:c.instructions+=2;goto B5deb06;
case 0x5deb0b:c.instructions+=1;goto B5deb0b;
case 0x5deb10:goto L5deb10;
case 0x5deb13:c.instructions+=1;goto B5deb13;
case 0x5deb15:goto L5deb15;
case 0x5deb1a:c.instructions+=3;goto B5deb1a;
case 0x5deb1f:c.instructions+=2;goto B5deb1f;
case 0x5deb24:c.instructions+=1;goto B5deb24;
case 0x5deb29:goto L5deb29;
case 0x5deb2d:c.instructions+=6;goto B5deb2d;
case 0x5deb31:c.instructions+=5;goto B5deb31;
case 0x5deb32:c.instructions+=4;goto B5deb32;
case 0x5deb35:c.instructions+=3;goto B5deb35;
case 0x5deb37:c.instructions+=2;goto B5deb37;
case 0x5deb3b:c.instructions+=1;goto B5deb3b;
case 0x5deb41:goto L5deb41;
case 0x5deb45:goto L5deb45;
case 0x5deb49:c.instructions+=8;goto B5deb49;
case 0x5deb4d:c.instructions+=7;goto B5deb4d;
case 0x5deb53:c.instructions+=6;goto B5deb53;
case 0x5deb54:c.instructions+=5;goto B5deb54;
case 0x5deb57:c.instructions+=4;goto B5deb57;
case 0x5deb59:c.instructions+=3;goto B5deb59;
case 0x5deb5d:c.instructions+=2;goto B5deb5d;
case 0x5deb61:c.instructions+=1;goto B5deb61;
case 0x5deb67:goto L5deb67;
case 0x5deb68:c.instructions+=3;goto B5deb68;
case 0x5deb69:c.instructions+=2;goto B5deb69;
case 0x5deb6a:c.instructions+=1;goto B5deb6a;
case 0x5deb6b:goto L5deb6b;
case 0x5deb6e:c.instructions+=1;goto B5deb6e;
case 0x5deb6f:goto L5deb6f;
case 0x5deb72:c.instructions+=1;goto B5deb72;
case 0x5deb74:goto L5deb74;
case 0x5deb76:c.instructions+=1;goto B5deb76;
case 0x5deb80:goto L5deb80;
case 0x5deb84:c.instructions+=3;goto B5deb84;
case 0x5deb86:c.instructions+=2;goto B5deb86;
case 0x5deb8b:c.instructions+=1;goto B5deb8b;
case 0x5deb8d:goto L5deb8d;
case 0x5deb8e:c.instructions+=2;goto B5deb8e;
case 0x5deb93:c.instructions+=1;goto B5deb93;
case 0x5deb98:goto L5deb98;
case 0x5deb9d:c.instructions+=2;goto B5deb9d;
case 0x5deb9f:c.instructions+=1;goto B5deb9f;
case 0x5deba1:goto L5deba1;
case 0x5deba7:c.instructions+=2;goto B5deba7;
case 0x5deba9:c.instructions+=1;goto B5deba9;
case 0x5debab:goto L5debab;
case 0x5debad:c.instructions+=2;goto B5debad;
case 0x5debb0:c.instructions+=1;goto B5debb0;
case 0x5debb2:goto L5debb2;
case 0x5debb5:c.instructions+=1;goto B5debb5;
case 0x5debb7:goto L5debb7;
case 0x5debb9:c.instructions+=2;goto B5debb9;
case 0x5debbb:c.instructions+=1;goto B5debbb;
case 0x5debc0:goto L5debc0;
case 0x5debc5:c.instructions+=1;goto B5debc5;
case 0x5debc6:goto L5debc6;
case 0x5debcb:c.instructions+=1;goto B5debcb;
case 0x5debcd:goto L5debcd;
case 0x5debd0:c.instructions+=8;goto B5debd0;
case 0x5debd5:c.instructions+=7;goto B5debd5;
case 0x5debd8:c.instructions+=6;goto B5debd8;
case 0x5debdb:c.instructions+=5;goto B5debdb;
case 0x5debde:c.instructions+=4;goto B5debde;
case 0x5debe4:c.instructions+=3;goto B5debe4;
case 0x5debea:c.instructions+=2;goto B5debea;
case 0x5debef:c.instructions+=1;goto B5debef;
case 0x5debf0:goto L5debf0;
case 0x5debf5:c.instructions+=1;goto B5debf5;
case 0x5debf7:goto L5debf7;
case 0x5debfa:c.instructions+=7;goto B5debfa;
case 0x5dec00:c.instructions+=6;goto B5dec00;
case 0x5dec05:c.instructions+=5;goto B5dec05;
case 0x5dec08:c.instructions+=4;goto B5dec08;
case 0x5dec0b:c.instructions+=3;goto B5dec0b;
case 0x5dec11:c.instructions+=2;goto B5dec11;
case 0x5dec16:c.instructions+=1;goto B5dec16;
case 0x5dec17:goto L5dec17;
case 0x5dec1c:c.instructions+=1;goto B5dec1c;
case 0x5dec1e:goto L5dec1e;
case 0x5dec21:c.instructions+=7;goto B5dec21;
case 0x5dec26:c.instructions+=6;goto B5dec26;
case 0x5dec2b:c.instructions+=5;goto B5dec2b;
case 0x5dec2e:c.instructions+=4;goto B5dec2e;
case 0x5dec31:c.instructions+=3;goto B5dec31;
case 0x5dec37:c.instructions+=2;goto B5dec37;
case 0x5dec3c:c.instructions+=1;goto B5dec3c;
case 0x5dec3d:goto L5dec3d;
case 0x5dec3f:c.instructions+=1;goto B5dec3f;
case 0x5dec40:goto L5dec40;
case 0x5dec41:c.instructions+=3;goto B5dec41;
case 0x5dec42:c.instructions+=2;goto B5dec42;
case 0x5dec44:c.instructions+=1;goto B5dec44;
case 0x5dec49:goto L5dec49;
case 0x5dec4c:c.instructions+=3;goto B5dec4c;
case 0x5dec4e:c.instructions+=2;goto B5dec4e;
case 0x5dec50:c.instructions+=1;goto B5dec50;
case 0x5dec55:goto L5dec55;
case 0x5dec57:goto L5dec57;
case 0x5dec5d:c.instructions+=14;goto B5dec5d;
case 0x5dec64:c.instructions+=13;goto B5dec64;
case 0x5dec6b:c.instructions+=12;goto B5dec6b;
case 0x5dec6d:c.instructions+=11;goto B5dec6d;
case 0x5dec73:c.instructions+=10;goto B5dec73;
case 0x5dec75:c.instructions+=9;goto B5dec75;
case 0x5dec78:c.instructions+=8;goto B5dec78;
case 0x5dec7b:c.instructions+=7;goto B5dec7b;
case 0x5dec7e:c.instructions+=6;goto B5dec7e;
case 0x5dec81:c.instructions+=5;goto B5dec81;
case 0x5dec84:c.instructions+=4;goto B5dec84;
case 0x5dec8a:c.instructions+=3;goto B5dec8a;
case 0x5dec90:c.instructions+=2;goto B5dec90;
case 0x5dec96:c.instructions+=1;goto B5dec96;
case 0x5dec9b:goto L5dec9b;
case 0x5dec9d:goto L5dec9d;
case 0x5dec9e:c.instructions+=4;goto B5dec9e;
case 0x5deca4:c.instructions+=3;goto B5deca4;
case 0x5decaa:c.instructions+=2;goto B5decaa;
case 0x5decab:c.instructions+=1;goto B5decab;
case 0x5decb0:goto L5decb0;
case 0x5decb1:c.instructions+=8;goto B5decb1;
case 0x5decb5:c.instructions+=7;goto B5decb5;
case 0x5decb6:c.instructions+=6;goto B5decb6;
case 0x5decb7:c.instructions+=5;goto B5decb7;
case 0x5decbc:c.instructions+=4;goto B5decbc;
case 0x5decbe:c.instructions+=3;goto B5decbe;
case 0x5decc0:c.instructions+=2;goto B5decc0;
case 0x5decc2:c.instructions+=1;goto B5decc2;
case 0x5decc7:goto L5decc7;
case 0x5decc9:c.instructions+=1;goto B5decc9;
case 0x5decd0:goto L5decd0;
case 0x5decd2:c.instructions+=3;goto B5decd2;
case 0x5decd8:c.instructions+=2;goto B5decd8;
case 0x5decde:c.instructions+=1;goto B5decde;
case 0x5dece0:goto L5dece0;
case 0x5dece4:c.instructions+=1;goto B5dece4;
case 0x5dece6:goto L5dece6;
case 0x5dece8:c.instructions+=1;goto B5dece8;
case 0x5decea:goto L5decea;
case 0x5decec:c.instructions+=2;goto B5decec;
case 0x5decee:c.instructions+=1;goto B5decee;
case 0x5decf0:goto L5decf0;
case 0x5decf3:c.instructions+=3;goto B5decf3;
case 0x5decf4:c.instructions+=2;goto B5decf4;
case 0x5decf6:c.instructions+=1;goto B5decf6;
case 0x5decfb:goto L5decfb;
case 0x5decfd:goto L5decfd;
case 0x5decff:c.instructions+=1;goto B5decff;
case 0x5ded04:goto L5ded04;
case 0x5ded05:c.instructions+=3;goto B5ded05;
case 0x5ded06:c.instructions+=2;goto B5ded06;
case 0x5ded07:c.instructions+=1;goto B5ded07;
case 0x5ded10:goto L5ded10;
case 0x5ded11:c.instructions+=8;goto B5ded11;
case 0x5ded12:c.instructions+=7;goto B5ded12;
case 0x5ded16:c.instructions+=6;goto B5ded16;
case 0x5ded18:c.instructions+=5;goto B5ded18;
case 0x5ded1a:c.instructions+=4;goto B5ded1a;
case 0x5ded1d:c.instructions+=3;goto B5ded1d;
case 0x5ded1e:c.instructions+=2;goto B5ded1e;
case 0x5ded20:c.instructions+=1;goto B5ded20;
case 0x5ded25:goto L5ded25;
case 0x5ded27:c.instructions+=1;goto B5ded27;
case 0x5ded29:goto L5ded29;
case 0x5ded2a:c.instructions+=4;goto B5ded2a;
case 0x5ded2c:c.instructions+=3;goto B5ded2c;
case 0x5ded2d:c.instructions+=2;goto B5ded2d;
case 0x5ded2f:c.instructions+=1;goto B5ded2f;
case 0x5ded34:goto L5ded34;
case 0x5ded36:c.instructions+=1;goto B5ded36;
case 0x5ded38:goto L5ded38;
case 0x5ded39:c.instructions+=4;goto B5ded39;
case 0x5ded3b:c.instructions+=3;goto B5ded3b;
case 0x5ded3c:c.instructions+=2;goto B5ded3c;
case 0x5ded3e:c.instructions+=1;goto B5ded3e;
case 0x5ded43:goto L5ded43;
case 0x5ded45:c.instructions+=1;goto B5ded45;
case 0x5ded47:goto L5ded47;
case 0x5ded48:c.instructions+=4;goto B5ded48;
case 0x5ded4a:c.instructions+=3;goto B5ded4a;
case 0x5ded4b:c.instructions+=2;goto B5ded4b;
case 0x5ded4d:c.instructions+=1;goto B5ded4d;
case 0x5ded52:goto L5ded52;
case 0x5ded53:c.instructions+=2;goto B5ded53;
case 0x5ded54:c.instructions+=1;goto B5ded54;
case 0x5ded60:goto L5ded60;
case 0x5ded61:c.instructions+=8;goto B5ded61;
case 0x5ded62:c.instructions+=7;goto B5ded62;
case 0x5ded66:c.instructions+=6;goto B5ded66;
case 0x5ded68:c.instructions+=5;goto B5ded68;
case 0x5ded6a:c.instructions+=4;goto B5ded6a;
case 0x5ded6d:c.instructions+=3;goto B5ded6d;
case 0x5ded6e:c.instructions+=2;goto B5ded6e;
case 0x5ded70:c.instructions+=1;goto B5ded70;
case 0x5ded75:goto L5ded75;
case 0x5ded77:c.instructions+=1;goto B5ded77;
case 0x5ded79:goto L5ded79;
case 0x5ded7a:c.instructions+=4;goto B5ded7a;
case 0x5ded7c:c.instructions+=3;goto B5ded7c;
case 0x5ded7d:c.instructions+=2;goto B5ded7d;
case 0x5ded7f:c.instructions+=1;goto B5ded7f;
case 0x5ded84:goto L5ded84;
case 0x5ded85:c.instructions+=2;goto B5ded85;
case 0x5ded86:c.instructions+=1;goto B5ded86;
case 0x5ded90:goto L5ded90;
case 0x5ded94:c.instructions+=31;goto B5ded94;
case 0x5ded95:c.instructions+=30;goto B5ded95;
case 0x5ded97:c.instructions+=29;goto B5ded97;
case 0x5ded99:c.instructions+=28;goto B5ded99;
case 0x5ded9c:c.instructions+=27;goto B5ded9c;
case 0x5ded9f:c.instructions+=26;goto B5ded9f;
case 0x5deda2:c.instructions+=25;goto B5deda2;
case 0x5deda5:c.instructions+=24;goto B5deda5;
case 0x5deda8:c.instructions+=23;goto B5deda8;
case 0x5dedab:c.instructions+=22;goto B5dedab;
case 0x5dedad:c.instructions+=21;goto B5dedad;
case 0x5dedb0:c.instructions+=20;goto B5dedb0;
case 0x5dedb3:c.instructions+=19;goto B5dedb3;
case 0x5dedb6:c.instructions+=18;goto B5dedb6;
case 0x5dedbd:c.instructions+=17;goto B5dedbd;
case 0x5dedc0:c.instructions+=16;goto B5dedc0;
case 0x5dedc3:c.instructions+=15;goto B5dedc3;
case 0x5dedc6:c.instructions+=14;goto B5dedc6;
case 0x5dedc9:c.instructions+=13;goto B5dedc9;
case 0x5dedcc:c.instructions+=12;goto B5dedcc;
case 0x5dedcf:c.instructions+=11;goto B5dedcf;
case 0x5dedd1:c.instructions+=10;goto B5dedd1;
case 0x5dedd3:c.instructions+=9;goto B5dedd3;
case 0x5dedd6:c.instructions+=8;goto B5dedd6;
case 0x5dedd8:c.instructions+=7;goto B5dedd8;
case 0x5dedda:c.instructions+=6;goto B5dedda;
case 0x5deddc:c.instructions+=5;goto B5deddc;
case 0x5dedde:c.instructions+=4;goto B5dedde;
case 0x5dede4:c.instructions+=3;goto B5dede4;
case 0x5dede6:c.instructions+=2;goto B5dede6;
case 0x5dede9:c.instructions+=1;goto B5dede9;
case 0x5dedeb:goto L5dedeb;
case 0x5dedec:c.instructions+=4;goto B5dedec;
case 0x5deded:c.instructions+=3;goto B5deded;
case 0x5dedee:c.instructions+=2;goto B5dedee;
case 0x5dedf3:c.instructions+=1;goto B5dedf3;
case 0x5dedf8:goto L5dedf8;
case 0x5dedfa:c.instructions+=2;goto B5dedfa;
case 0x5dedfb:c.instructions+=1;goto B5dedfb;
case 0x5dee00:goto L5dee00;
case 0x5dee04:c.instructions+=2;goto B5dee04;
case 0x5dee0a:c.instructions+=1;goto B5dee0a;
case 0x5dee0c:goto L5dee0c;
case 0x5dee11:c.instructions+=1;goto B5dee11;
case 0x5dee16:goto L5dee16;
case 0x5dee1b:c.instructions+=1;goto B5dee1b;
case 0x5dee20:goto L5dee20;
case 0x5dee25:c.instructions+=1;goto B5dee25;
case 0x5dee26:goto L5dee26;
case 0x5dee28:c.instructions+=1;goto B5dee28;
case 0x5dee30:goto L5dee30;
case 0x5dee34:c.instructions+=6;goto B5dee34;
case 0x5dee35:c.instructions+=5;goto B5dee35;
case 0x5dee37:c.instructions+=4;goto B5dee37;
case 0x5dee3a:c.instructions+=3;goto B5dee3a;
case 0x5dee40:c.instructions+=2;goto B5dee40;
case 0x5dee42:c.instructions+=1;goto B5dee42;
case 0x5dee44:goto L5dee44;
case 0x5dee48:c.instructions+=13;goto B5dee48;
case 0x5dee4a:c.instructions+=12;goto B5dee4a;
case 0x5dee4d:c.instructions+=11;goto B5dee4d;
case 0x5dee50:c.instructions+=10;goto B5dee50;
case 0x5dee56:c.instructions+=9;goto B5dee56;
case 0x5dee57:c.instructions+=8;goto B5dee57;
case 0x5dee5b:c.instructions+=7;goto B5dee5b;
case 0x5dee60:c.instructions+=6;goto B5dee60;
case 0x5dee61:c.instructions+=5;goto B5dee61;
case 0x5dee65:c.instructions+=4;goto B5dee65;
case 0x5dee66:c.instructions+=3;goto B5dee66;
case 0x5dee6b:c.instructions+=2;goto B5dee6b;
case 0x5dee6c:c.instructions+=1;goto B5dee6c;
case 0x5dee71:goto L5dee71;
case 0x5dee76:c.instructions+=4;goto B5dee76;
case 0x5dee78:c.instructions+=3;goto B5dee78;
case 0x5dee7a:c.instructions+=2;goto B5dee7a;
case 0x5dee7b:c.instructions+=1;goto B5dee7b;
case 0x5dee7c:goto L5dee7c;
case 0x5dee80:c.instructions+=12;goto B5dee80;
case 0x5dee82:c.instructions+=11;goto B5dee82;
case 0x5dee85:c.instructions+=10;goto B5dee85;
case 0x5dee88:c.instructions+=9;goto B5dee88;
case 0x5dee8e:c.instructions+=8;goto B5dee8e;
case 0x5dee8f:c.instructions+=7;goto B5dee8f;
case 0x5dee94:c.instructions+=6;goto B5dee94;
case 0x5dee95:c.instructions+=5;goto B5dee95;
case 0x5dee99:c.instructions+=4;goto B5dee99;
case 0x5dee9a:c.instructions+=3;goto B5dee9a;
case 0x5dee9b:c.instructions+=2;goto B5dee9b;
case 0x5dee9f:c.instructions+=1;goto B5dee9f;
case 0x5deea4:goto L5deea4;
case 0x5deea5:c.instructions+=1;goto B5deea5;
case 0x5deeb0:goto L5deeb0;
case 0x5deeb4:c.instructions+=4;goto B5deeb4;
case 0x5deeb8:c.instructions+=3;goto B5deeb8;
case 0x5deebb:c.instructions+=2;goto B5deebb;
case 0x5deebc:c.instructions+=1;goto B5deebc;
case 0x5deec1:goto L5deec1;
case 0x5deed0:goto L5deed0;
case 0x5deed4:c.instructions+=5;goto B5deed4;
case 0x5deed7:c.instructions+=4;goto B5deed7;
case 0x5deeda:c.instructions+=3;goto B5deeda;
case 0x5deedc:c.instructions+=2;goto B5deedc;
case 0x5deede:c.instructions+=1;goto B5deede;
case 0x5deee0:goto L5deee0;
case 0x5deee1:goto L5deee1;
case 0x5deee4:c.instructions+=2;goto B5deee4;
case 0x5deee6:c.instructions+=1;goto B5deee6;
case 0x5deee8:goto L5deee8;
case 0x5deeeb:goto L5deeeb;
case 0x5deeed:c.instructions+=2;goto B5deeed;
case 0x5deeef:c.instructions+=1;goto B5deeef;
case 0x5deef1:goto L5deef1;
case 0x5deef2:goto L5deef2;
case 0x5def00:goto L5def00;
case 0x5def01:c.instructions+=6;goto B5def01;
case 0x5def05:c.instructions+=5;goto B5def05;
case 0x5def08:c.instructions+=4;goto B5def08;
case 0x5def0b:c.instructions+=3;goto B5def0b;
case 0x5def0d:c.instructions+=2;goto B5def0d;
case 0x5def0f:c.instructions+=1;goto B5def0f;
case 0x5def11:goto L5def11;
case 0x5def14:c.instructions+=2;goto B5def14;
case 0x5def16:c.instructions+=1;goto B5def16;
case 0x5def18:goto L5def18;
case 0x5def1b:c.instructions+=2;goto B5def1b;
case 0x5def1d:c.instructions+=1;goto B5def1d;
case 0x5def1f:goto L5def1f;
case 0x5def21:goto L5def21;
case 0x5def23:c.instructions+=2;goto B5def23;
case 0x5def25:c.instructions+=1;goto B5def25;
case 0x5def27:goto L5def27;
case 0x5def28:c.instructions+=1;goto B5def28;
case 0x5def30:goto L5def30;
case 0x5def34:c.instructions+=3;goto B5def34;
case 0x5def35:c.instructions+=2;goto B5def35;
case 0x5def3a:c.instructions+=1;goto B5def3a;
case 0x5def3f:goto L5def3f;
case 0x5def40:goto L5def40;
case 0x5def41:c.instructions+=21;goto B5def41;
case 0x5def43:c.instructions+=20;goto B5def43;
case 0x5def44:c.instructions+=19;goto B5def44;
case 0x5def46:c.instructions+=18;goto B5def46;
case 0x5def48:c.instructions+=17;goto B5def48;
case 0x5def4b:c.instructions+=16;goto B5def4b;
case 0x5def4e:c.instructions+=15;goto B5def4e;
case 0x5def51:c.instructions+=14;goto B5def51;
case 0x5def54:c.instructions+=13;goto B5def54;
case 0x5def57:c.instructions+=12;goto B5def57;
case 0x5def5a:c.instructions+=11;goto B5def5a;
case 0x5def5d:c.instructions+=10;goto B5def5d;
case 0x5def60:c.instructions+=9;goto B5def60;
case 0x5def63:c.instructions+=8;goto B5def63;
case 0x5def66:c.instructions+=7;goto B5def66;
case 0x5def6c:c.instructions+=6;goto B5def6c;
case 0x5def72:c.instructions+=5;goto B5def72;
case 0x5def78:c.instructions+=4;goto B5def78;
case 0x5def7e:c.instructions+=3;goto B5def7e;
case 0x5def84:c.instructions+=2;goto B5def84;
case 0x5def8a:c.instructions+=1;goto B5def8a;
case 0x5def8f:goto L5def8f;
case 0x5def95:c.instructions+=18;goto B5def95;
case 0x5def9b:c.instructions+=17;goto B5def9b;
case 0x5def9e:c.instructions+=16;goto B5def9e;
case 0x5defa4:c.instructions+=15;goto B5defa4;
case 0x5defaa:c.instructions+=14;goto B5defaa;
case 0x5defb0:c.instructions+=13;goto B5defb0;
case 0x5defb6:c.instructions+=12;goto B5defb6;
case 0x5defbc:c.instructions+=11;goto B5defbc;
case 0x5defc2:c.instructions+=10;goto B5defc2;
case 0x5defc8:c.instructions+=9;goto B5defc8;
case 0x5defca:c.instructions+=8;goto B5defca;
case 0x5defcc:c.instructions+=7;goto B5defcc;
case 0x5defcf:c.instructions+=6;goto B5defcf;
case 0x5defd5:c.instructions+=5;goto B5defd5;
case 0x5defdb:c.instructions+=4;goto B5defdb;
case 0x5defdd:c.instructions+=3;goto B5defdd;
case 0x5defde:c.instructions+=2;goto B5defde;
case 0x5defdf:c.instructions+=1;goto B5defdf;
case 0x5defe0:goto L5defe0;
case 0x5defe4:c.instructions+=5;goto B5defe4;
case 0x5defe6:c.instructions+=4;goto B5defe6;
case 0x5defeb:c.instructions+=3;goto B5defeb;
case 0x5defec:c.instructions+=2;goto B5defec;
case 0x5defee:c.instructions+=1;goto B5defee;
case 0x5deff0:goto L5deff0;
case 0x5deff5:goto L5deff5;
case 0x5deff7:c.instructions+=3;goto B5deff7;
case 0x5deff9:c.instructions+=2;goto B5deff9;
case 0x5deffc:c.instructions+=1;goto B5deffc;
default:missing_instruction(c.pc);}
B5de002:L5de002:{c.instructions+=3;NFSU2_TR(0x5de002);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x14ull))));
}
B5de005:{NFSU2_TR(0x5de005);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5de006:{NFSU2_TR(0x5de006);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5ddff0u,5dd);}
}
B5de008:L5de008:{c.instructions+=1;NFSU2_TR(0x5de008);
{goto L5de00c;}
}
B5de00a:L5de00a:{c.instructions+=1;NFSU2_TR(0x5de00a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5de00c:L5de00c:{c.instructions+=7;NFSU2_TR(0x5de00c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4670ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5de012:{NFSU2_TR(0x5de012);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e814),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+28)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5de018:{NFSU2_TR(0x5de018);
w4(R+20,u32(0x63ull));
}
B5de01d:{NFSU2_TR(0x5de01d);
__builtin_memmove((R+0),(R+20),4);
}
B5de01f:{NFSU2_TR(0x5de01f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5de023:{NFSU2_TR(0x5de023);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5de027:{NFSU2_TR(0x5de027);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5de0a1;}}
}
B5de029:L5de029:{c.instructions+=3;NFSU2_TR(0x5de029);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5de02b:{NFSU2_TR(0x5de02b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5de02f:{NFSU2_TR(0x5de02f);
}
B5de030:L5de030:{c.instructions+=4;NFSU2_TR(0x5de030);
__builtin_memmove((R+0),gp(0x89e810),4);
}
B5de035:{NFSU2_TR(0x5de035);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B5de037:{NFSU2_TR(0x5de037);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5de039:{NFSU2_TR(0x5de039);
if(r1(R+518)){{goto L5de07c;}}
}
B5de03b:L5de03b:{c.instructions+=3;NFSU2_TR(0x5de03b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5de03e:{NFSU2_TR(0x5de03e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5de040:{NFSU2_TR(0x5de040);
if(r1(R+518)){{goto L5de07a;}}
}
B5de042:L5de042:{c.instructions+=2;NFSU2_TR(0x5de042);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5de046:{NFSU2_TR(0x5de046);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5de059;}}
}
B5de048:L5de048:{c.instructions+=2;NFSU2_TR(0x5de048);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5de04b:{NFSU2_TR(0x5de04b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5de050ull));
TAIL_STATIC(0x5b5330u,5b5);
}
B5de050:L5de050:{c.instructions+=3;NFSU2_TR(0x5de050);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B5de053:{NFSU2_TR(0x5de053);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5de055:{NFSU2_TR(0x5de055);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5de059;}}
}
B5de057:L5de057:{c.instructions+=1;NFSU2_TR(0x5de057);
__builtin_memmove((R+20),(R+0),4);
}
B5de059:L5de059:{c.instructions+=2;NFSU2_TR(0x5de059);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5de05d:{NFSU2_TR(0x5de05d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5de07a;}}
}
B5de05f:L5de05f:{c.instructions+=2;NFSU2_TR(0x5de05f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5de062:{NFSU2_TR(0x5de062);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5de067ull));
TAIL_STATIC(0x5b5330u,5b5);
}
B5de067:L5de067:{c.instructions+=5;NFSU2_TR(0x5de067);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5de06b:{NFSU2_TR(0x5de06b);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B5de06e:{NFSU2_TR(0x5de06e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5de070:{NFSU2_TR(0x5de070);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5de072:{NFSU2_TR(0x5de072);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5de07c;}}
}
B5de074:L5de074:{c.instructions+=2;NFSU2_TR(0x5de074);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5de078:{NFSU2_TR(0x5de078);
{goto L5de07c;}
}
B5de07a:L5de07a:{c.instructions+=1;NFSU2_TR(0x5de07a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5de07c:L5de07c:{c.instructions+=9;NFSU2_TR(0x5de07c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5de080:{NFSU2_TR(0x5de080);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5de084:{NFSU2_TR(0x5de084);
__builtin_memmove((R+4),gp(0x89e814),4);
}
B5de08a:{NFSU2_TR(0x5de08a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5de08b:{NFSU2_TR(0x5de08b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x940ull))));
}
B5de091:{NFSU2_TR(0x5de091);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5de093:{NFSU2_TR(0x5de093);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5de097:{NFSU2_TR(0x5de097);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5de09b:{NFSU2_TR(0x5de09b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5de030u);}goto L5de030;}}
}
B5de09d:L5de09d:{c.instructions+=1;NFSU2_TR(0x5de09d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5de0a1:L5de0a1:{c.instructions+=3;NFSU2_TR(0x5de0a1);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x63ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5de0a4:{NFSU2_TR(0x5de0a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4674ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5de0ae:{NFSU2_TR(0x5de0ae);
if(r1(R+518)){{goto L5de0b8;}}
}
B5de0b0:L5de0b0:{c.instructions+=2;NFSU2_TR(0x5de0b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4674ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5de0b6:{NFSU2_TR(0x5de0b6);
{goto L5de0c3;}
}
B5de0b8:L5de0b8:{c.instructions+=2;NFSU2_TR(0x5de0b8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x63ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5de0bb:{NFSU2_TR(0x5de0bb);
if(r1(R+518)){{goto L5de0c3;}}
}
B5de0bd:L5de0bd:{c.instructions+=1;NFSU2_TR(0x5de0bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4674ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5de0c3:L5de0c3:{c.instructions+=3;NFSU2_TR(0x5de0c3);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4679ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5de0ca:{NFSU2_TR(0x5de0ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4678ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5de0d1:{NFSU2_TR(0x5de0d1);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5de0d3:L5de0d3:{c.instructions+=5;NFSU2_TR(0x5de0d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4670ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5de0d9:{NFSU2_TR(0x5de0d9);
u8 U[6];
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5de0db:{NFSU2_TR(0x5de0db);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5de0dc:{NFSU2_TR(0x5de0dc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5de0dd:{NFSU2_TR(0x5de0dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5de0e2ull));
TAIL_STATIC(0x5a78e0u,5a7);
}
B5de0e2:L5de0e2:{c.instructions+=5;NFSU2_TR(0x5de0e2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5de0e5:{NFSU2_TR(0x5de0e5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B5de0e8:{NFSU2_TR(0x5de0e8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5de0e9:{NFSU2_TR(0x5de0e9);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x50ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x50ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5de0ec:{NFSU2_TR(0x5de0ec);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5de0d3u);}goto L5de0d3;}}
}
B5de0ee:L5de0ee:{c.instructions+=9;NFSU2_TR(0x5de0ee);
__builtin_memmove((R+8),gp(0x7a4780),4);
}
B5de0f4:{NFSU2_TR(0x5de0f4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5de0f6:{NFSU2_TR(0x5de0f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5de0f9:{NFSU2_TR(0x5de0f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x468cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5de103:{NFSU2_TR(0x5de103);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4690ull))));
w4(U+4,u32(0x32ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5de10d:{NFSU2_TR(0x5de10d);
__builtin_memmove(gp(0x876d24),(R+8),4);
}
B5de113:{NFSU2_TR(0x5de113);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5de117:{NFSU2_TR(0x5de117);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5de11b:{NFSU2_TR(0x5de11b);
{goto L5de120;}
}
B5de120:L5de120:{c.instructions+=2;NFSU2_TR(0x5de120);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5de122:{NFSU2_TR(0x5de122);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5de18e;}}
}
B5de124:L5de124:{c.instructions+=4;NFSU2_TR(0x5de124);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5de128:{NFSU2_TR(0x5de128);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+20),(U+0),4);
}
B5de12a:{NFSU2_TR(0x5de12a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5de12c:{NFSU2_TR(0x5de12c);
if(r1(R+518)){{goto L5de18e;}}
}
B5de12e:L5de12e:{c.instructions+=5;NFSU2_TR(0x5de12e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5de131:{NFSU2_TR(0x5de131);
__builtin_memmove((R+8),(R+0),4);
}
B5de133:{NFSU2_TR(0x5de133);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5de136:{NFSU2_TR(0x5de136);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5de139:{NFSU2_TR(0x5de139);
if(r1(R+518)){{goto L5de18e;}}
}
B5de13b:L5de13b:{c.instructions+=3;NFSU2_TR(0x5de13b);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5de13e:{NFSU2_TR(0x5de13e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5de140:{NFSU2_TR(0x5de140);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5de18e;}}
}
B5de142:L5de142:{c.instructions+=3;NFSU2_TR(0x5de142);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5de144:{NFSU2_TR(0x5de144);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x74ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5de147:{NFSU2_TR(0x5de147);
{goto L5de150;}
}
B5de150:L5de150:{c.instructions+=3;NFSU2_TR(0x5de150);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B5de153:{NFSU2_TR(0x5de153);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4674ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5de159:{NFSU2_TR(0x5de159);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5de181;}}
}
B5de15b:L5de15b:{c.instructions+=13;NFSU2_TR(0x5de15b);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4679ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5de161:{NFSU2_TR(0x5de161);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5de163:{NFSU2_TR(0x5de163);
__builtin_memmove((R+4),(R+518),1);
}
B5de166:{NFSU2_TR(0x5de166);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5de169:{NFSU2_TR(0x5de169);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5de16a:{NFSU2_TR(0x5de16a);
__builtin_memmove((R+4),gp(0x88e990),4);
}
B5de170:{NFSU2_TR(0x5de170);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5de174:{NFSU2_TR(0x5de174);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5de175:{NFSU2_TR(0x5de175);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5de178:{NFSU2_TR(0x5de178);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5de179:{NFSU2_TR(0x5de179);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5de17a:{NFSU2_TR(0x5de17a);
__builtin_memmove((R+4),(R+20),4);
}
B5de17c:{NFSU2_TR(0x5de17c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5de181ull));
TAIL_STATIC(0x5d9340u,5d9);
}
B5de181:L5de181:{c.instructions+=4;NFSU2_TR(0x5de181);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5de182:{NFSU2_TR(0x5de182);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B5de185:{NFSU2_TR(0x5de185);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5de188:{NFSU2_TR(0x5de188);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5de150u);}goto L5de150;}}
}
B5de18a:L5de18a:{c.instructions+=1;NFSU2_TR(0x5de18a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5de18e:L5de18e:{c.instructions+=7;NFSU2_TR(0x5de18e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5de192:{NFSU2_TR(0x5de192);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5de193:{NFSU2_TR(0x5de193);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5de196:{NFSU2_TR(0x5de196);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5dcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5dcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5de19c:{NFSU2_TR(0x5de19c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5de1a0:{NFSU2_TR(0x5de1a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5de1a4:{NFSU2_TR(0x5de1a4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5de120u);}goto L5de120;}}
}
B5de1aa:L5de1aa:{c.instructions+=6;NFSU2_TR(0x5de1aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5de1ab:{NFSU2_TR(0x5de1ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5de1ac:{NFSU2_TR(0x5de1ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5de1ad:{NFSU2_TR(0x5de1ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5de1ae:{NFSU2_TR(0x5de1ae);
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
B5de1b1:{NFSU2_TR(0x5de1b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5de1c0:L5de1c0:{c.instructions+=7;NFSU2_TR(0x5de1c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5de1c4:{NFSU2_TR(0x5de1c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5de1c5:{NFSU2_TR(0x5de1c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5de1c8:{NFSU2_TR(0x5de1c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5de1cb:{NFSU2_TR(0x5de1cb);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5de1cf:{NFSU2_TR(0x5de1cf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5de1d1:{NFSU2_TR(0x5de1d1);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5de22d;}}
}
B5de1d3:L5de1d3:{c.instructions+=2;NFSU2_TR(0x5de1d3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5de1d4:{NFSU2_TR(0x5de1d4);
{goto L5de1e0;}
}
B5de1e0:L5de1e0:{c.instructions+=18;NFSU2_TR(0x5de1e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4680ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5de1e6:{NFSU2_TR(0x5de1e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x467cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5de1ec:{NFSU2_TR(0x5de1ec);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5de1ed:{NFSU2_TR(0x5de1ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4680ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5de1f3:{NFSU2_TR(0x5de1f3);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B5de1f7:{NFSU2_TR(0x5de1f7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B5de1fa:{NFSU2_TR(0x5de1fa);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8cull))));
}
B5de200:{NFSU2_TR(0x5de200);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B5de202:{NFSU2_TR(0x5de202);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x467cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5de208:{NFSU2_TR(0x5de208);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B5de20c:{NFSU2_TR(0x5de20c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4684ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B5de212:{NFSU2_TR(0x5de212);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B5de216:{NFSU2_TR(0x5de216);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5de21a:{NFSU2_TR(0x5de21a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B5de21e:{NFSU2_TR(0x5de21e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B5de221:{NFSU2_TR(0x5de221);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5de228:{NFSU2_TR(0x5de228);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5de22a:{NFSU2_TR(0x5de22a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5de1e0u);}goto L5de1e0;}}
}
B5de22c:L5de22c:{c.instructions+=1;NFSU2_TR(0x5de22c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5de22d:L5de22d:{c.instructions+=1;NFSU2_TR(0x5de22d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5de232ull));
TAIL_STATIC(0x5d9430u,5d9);
}
B5de232:L5de232:{c.instructions+=2;NFSU2_TR(0x5de232);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5de233:{NFSU2_TR(0x5de233);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5de240:L5de240:{c.instructions+=4;NFSU2_TR(0x5de240);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5de244:{NFSU2_TR(0x5de244);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B5de247:{NFSU2_TR(0x5de247);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5de249:{NFSU2_TR(0x5de249);
if(r1(R+518)){{goto L5de25d;}}
}
B5de24b:L5de24b:{c.instructions+=4;NFSU2_TR(0x5de24b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5de24e:{NFSU2_TR(0x5de24e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ffull))));
}
B5de254:{NFSU2_TR(0x5de254);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5de25b:{NFSU2_TR(0x5de25b);
{goto L5de25f;}
}
B5de25d:L5de25d:{c.instructions+=1;NFSU2_TR(0x5de25d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5de25f:L5de25f:{c.instructions+=16;NFSU2_TR(0x5de25f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5de262:{NFSU2_TR(0x5de262);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5de266:{NFSU2_TR(0x5de266);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5de267:{NFSU2_TR(0x5de267);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5de268:{NFSU2_TR(0x5de268);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B5de26a:{NFSU2_TR(0x5de26a);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x1ull))));
}
B5de26d:{NFSU2_TR(0x5de26d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5de26e:{NFSU2_TR(0x5de26e);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+8))));
}
B5de270:{NFSU2_TR(0x5de270);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5de271:{NFSU2_TR(0x5de271);
__builtin_memmove((R+28),gp(0x883db4),4);
}
B5de277:{NFSU2_TR(0x5de277);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5de27b:{NFSU2_TR(0x5de27b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5de27f:{NFSU2_TR(0x5de27f);
__builtin_memmove((R+20),(R+0),4);
}
B5de281:{NFSU2_TR(0x5de281);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5de286:{NFSU2_TR(0x5de286);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5de28b:{NFSU2_TR(0x5de28b);
{goto L5de290;}
}
B5de290:L5de290:{c.instructions+=2;NFSU2_TR(0x5de290);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5de292:{NFSU2_TR(0x5de292);
if(r1(R+518)){{goto L5de2a6;}}
}
B5de294:L5de294:{c.instructions+=4;NFSU2_TR(0x5de294);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5de297:{NFSU2_TR(0x5de297);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ffull))));
}
B5de29d:{NFSU2_TR(0x5de29d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5de2a4:{NFSU2_TR(0x5de2a4);
{goto L5de2a8;}
}
B5de2a6:L5de2a6:{c.instructions+=1;NFSU2_TR(0x5de2a6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5de2a8:L5de2a8:{c.instructions+=7;NFSU2_TR(0x5de2a8);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5de2ac:{NFSU2_TR(0x5de2ac);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+4))));
}
B5de2ae:{NFSU2_TR(0x5de2ae);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x8cull))));
}
B5de2b4:{NFSU2_TR(0x5de2b4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5de2b6:{NFSU2_TR(0x5de2b6);
__builtin_memmove((R+24),(R+20),4);
}
B5de2b8:{NFSU2_TR(0x5de2b8);
w4(R+0,u32(0x92492493ull));
}
B5de2bd:{NFSU2_TR(0x5de2bd);
if(r1(R+518)){{goto L5de31e;}}
}
B5de2bf:L5de2bf:{c.instructions+=10;NFSU2_TR(0x5de2bf);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5de2c1:{NFSU2_TR(0x5de2c1);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B5de2c3:{NFSU2_TR(0x5de2c3);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5de2c6:{NFSU2_TR(0x5de2c6);
__builtin_memmove((R+0),(R+8),4);
}
B5de2c8:{NFSU2_TR(0x5de2c8);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5de2cb:{NFSU2_TR(0x5de2cb);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5de2cd:{NFSU2_TR(0x5de2cd);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5de2d1:{NFSU2_TR(0x5de2d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5de2d4:{NFSU2_TR(0x5de2d4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5de2d6:{NFSU2_TR(0x5de2d6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5de337;}}
}
B5de2d8:L5de2d8:{c.instructions+=2;NFSU2_TR(0x5de2d8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5de2db:{NFSU2_TR(0x5de2db);
u8 U[12];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B5de2e2:L5de2e2:{c.instructions+=2;NFSU2_TR(0x5de2e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5de2e4:{NFSU2_TR(0x5de2e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5de33b;}}
}
B5de2e6:L5de2e6:{c.instructions+=1;NFSU2_TR(0x5de2e6);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5de2eb:L5de2eb:{c.instructions+=3;NFSU2_TR(0x5de2eb);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5de2ef:{NFSU2_TR(0x5de2ef);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5de2f1:{NFSU2_TR(0x5de2f1);
if(r1(R+518)){{goto L5de5a1;}}
}
B5de2f7:L5de2f7:{c.instructions+=5;NFSU2_TR(0x5de2f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5de2fb:{NFSU2_TR(0x5de2fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5de2fd:{NFSU2_TR(0x5de2fd);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5de302:{NFSU2_TR(0x5de302);
__builtin_memmove((R+4),(R+0),4);
}
B5de304:{NFSU2_TR(0x5de304);
if(r1(R+518)){{goto L5de4a1;}}
}
B5de30a:L5de30a:{c.instructions+=4;NFSU2_TR(0x5de30a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5de30d:{NFSU2_TR(0x5de30d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
}
B5de312:{NFSU2_TR(0x5de312);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B5de319:{NFSU2_TR(0x5de319);
{goto L5de4a3;}
}
B5de31e:L5de31e:{c.instructions+=7;NFSU2_TR(0x5de31e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5de320:{NFSU2_TR(0x5de320);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B5de322:{NFSU2_TR(0x5de322);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5de325:{NFSU2_TR(0x5de325);
__builtin_memmove((R+0),(R+8),4);
}
B5de327:{NFSU2_TR(0x5de327);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5de32a:{NFSU2_TR(0x5de32a);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5de32c:{NFSU2_TR(0x5de32c);
if(r1(R+518)){{goto L5de337;}}
}
B5de32e:L5de32e:{c.instructions+=3;NFSU2_TR(0x5de32e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5de331:{NFSU2_TR(0x5de331);
u8 U[12];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B5de335:{NFSU2_TR(0x5de335);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5de2e2u);}goto L5de2e2;}
}
B5de337:L5de337:{c.instructions+=2;NFSU2_TR(0x5de337);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5de339:{NFSU2_TR(0x5de339);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5de2e6u);}goto L5de2e6;}
}
B5de33b:L5de33b:{c.instructions+=6;NFSU2_TR(0x5de33b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5de33f:{NFSU2_TR(0x5de33f);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5de343:{NFSU2_TR(0x5de343);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5de344:{NFSU2_TR(0x5de344);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5de345:{NFSU2_TR(0x5de345);
__builtin_memmove((R+4),(R+20),4);
}
B5de347:{NFSU2_TR(0x5de347);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5de34cull));
TAIL_STATIC(0x5dd770u,5dd);
}
B5de34c:L5de34c:{c.instructions+=2;NFSU2_TR(0x5de34c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5de34e:{NFSU2_TR(0x5de34e);
if(r1(R+518)){{goto L5de357;}}
}
B5de350:L5de350:{c.instructions+=2;NFSU2_TR(0x5de350);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5de355:{NFSU2_TR(0x5de355);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5de2f7u);}goto L5de2f7;}
}
B5de357:L5de357:{c.instructions+=3;NFSU2_TR(0x5de357);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5de359:{NFSU2_TR(0x5de359);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5de35d:{NFSU2_TR(0x5de35d);
__builtin_memmove((R+4),(R+4),4);
}
B5de360:L5de360:{c.instructions+=4;NFSU2_TR(0x5de360);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5de364:{NFSU2_TR(0x5de364);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5de366:{NFSU2_TR(0x5de366);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5de36b:{NFSU2_TR(0x5de36b);
if(r1(R+518)){{goto L5de376;}}
}
B5de36d:L5de36d:{c.instructions+=2;NFSU2_TR(0x5de36d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5de36f:{NFSU2_TR(0x5de36f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5de376;}}
}
B5de371:L5de371:{c.instructions+=1;NFSU2_TR(0x5de371);
w4(R+4,u32(0x1ull));
}
B5de376:L5de376:{c.instructions+=3;NFSU2_TR(0x5de376);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5de37a:{NFSU2_TR(0x5de37a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5de37f:{NFSU2_TR(0x5de37f);
if(r1(R+518)){{goto L5de386;}}
}
B5de381:L5de381:{c.instructions+=2;NFSU2_TR(0x5de381);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5de383:{NFSU2_TR(0x5de383);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5de386;}}
}
B5de385:L5de385:{c.instructions+=1;NFSU2_TR(0x5de385);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5de386:L5de386:{c.instructions+=2;NFSU2_TR(0x5de386);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5de388:{NFSU2_TR(0x5de388);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5de2ebu);}goto L5de2eb;}}
}
B5de38e:L5de38e:{c.instructions+=3;NFSU2_TR(0x5de38e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5de38f:{NFSU2_TR(0x5de38f);
__builtin_memmove((R+4),(R+20),4);
}
B5de391:{NFSU2_TR(0x5de391);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5de396ull));
TAIL_STATIC(0x5d43c0u,5d4);
}
B5de396:L5de396:{c.instructions+=4;NFSU2_TR(0x5de396);
__builtin_memmove((R+28),(R+0),4);
}
B5de398:{NFSU2_TR(0x5de398);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5de39c:{NFSU2_TR(0x5de39c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5de39f:{NFSU2_TR(0x5de39f);
if(r1(R+518)){{goto L5de3f9;}}
}
B5de3a1:L5de3a1:{c.instructions+=2;NFSU2_TR(0x5de3a1);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5de3a2:{NFSU2_TR(0x5de3a2);
if(r1(R+518)){{goto L5de3eb;}}
}
B5de3a4:L5de3a4:{c.instructions+=2;NFSU2_TR(0x5de3a4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5de3a5:{NFSU2_TR(0x5de3a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5de3b9;}}
}
B5de3a7:L5de3a7:{c.instructions+=3;NFSU2_TR(0x5de3a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5de3aa:{NFSU2_TR(0x5de3aa);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B5de3ac:{NFSU2_TR(0x5de3ac);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5de3ae:L5de3ae:{c.instructions+=3;NFSU2_TR(0x5de3ae);
__builtin_memmove((R+0),(R+518),1);
}
B5de3b1:{NFSU2_TR(0x5de3b1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5de3b3:{NFSU2_TR(0x5de3b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5de48b;}}
}
B5de3b9:L5de3b9:{c.instructions+=10;NFSU2_TR(0x5de3b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5de3bc:{NFSU2_TR(0x5de3bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5de3c0:{NFSU2_TR(0x5de3c0);
__builtin_memmove((R+4),(R+8),1);
}
B5de3c2:{NFSU2_TR(0x5de3c2);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B5de3c5:{NFSU2_TR(0x5de3c5);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5de3c8:{NFSU2_TR(0x5de3c8);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+518),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5de3cd:{NFSU2_TR(0x5de3cd);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5de3cf:{NFSU2_TR(0x5de3cf);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B5de3d2:{NFSU2_TR(0x5de3d2);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5de3d7:{NFSU2_TR(0x5de3d7);
if(r1(R+518)){{goto L5de41b;}}
}
B5de3d9:L5de3d9:{c.instructions+=2;NFSU2_TR(0x5de3d9);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B5de3da:{NFSU2_TR(0x5de3da);
if(r1(R+518)){{goto L5de410;}}
}
B5de3dc:L5de3dc:{c.instructions+=2;NFSU2_TR(0x5de3dc);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B5de3dd:{NFSU2_TR(0x5de3dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5de421;}}
}
B5de3df:L5de3df:{c.instructions+=2;NFSU2_TR(0x5de3df);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5de3e2:{NFSU2_TR(0x5de3e2);
if(r1(R+518)){{goto L5de40c;}}
}
B5de3e4:L5de3e4:{c.instructions+=2;NFSU2_TR(0x5de3e4);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x8ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5de3e7:{NFSU2_TR(0x5de3e7);
if(r1(R+518)){{goto L5de40c;}}
}
B5de3e9:L5de3e9:{c.instructions+=1;NFSU2_TR(0x5de3e9);
{goto L5de421;}
}
B5de3eb:L5de3eb:{c.instructions+=5;NFSU2_TR(0x5de3eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5de3ee:{NFSU2_TR(0x5de3ee);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5de3f1:{NFSU2_TR(0x5de3f1);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B5de3f4:{NFSU2_TR(0x5de3f4);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5de3f7:{NFSU2_TR(0x5de3f7);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5de3aeu);}goto L5de3ae;}
}
B5de3f9:L5de3f9:{c.instructions+=4;NFSU2_TR(0x5de3f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5de3fc:{NFSU2_TR(0x5de3fc);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B5de3fe:{NFSU2_TR(0x5de3fe);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5de400:{NFSU2_TR(0x5de400);
if(r1(R+518)){{goto L5de48b;}}
}
B5de406:L5de406:{c.instructions+=2;NFSU2_TR(0x5de406);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5de408:{NFSU2_TR(0x5de408);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5de3b9u);}goto L5de3b9;}}
}
B5de40a:L5de40a:{c.instructions+=1;NFSU2_TR(0x5de40a);
{goto L5de48b;}
}
B5de40c:L5de40c:{c.instructions+=2;NFSU2_TR(0x5de40c);
w1(R+0,u8(0x1ull));
}
B5de40e:{NFSU2_TR(0x5de40e);
{goto L5de421;}
}
B5de410:L5de410:{c.instructions+=5;NFSU2_TR(0x5de410);
__builtin_memmove((R+0),(R+8),4);
}
B5de412:{NFSU2_TR(0x5de412);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5de415:{NFSU2_TR(0x5de415);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B5de417:{NFSU2_TR(0x5de417);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5de419:{NFSU2_TR(0x5de419);
{goto L5de41e;}
}
B5de41b:L5de41b:{c.instructions+=1;NFSU2_TR(0x5de41b);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5de41e:L5de41e:{c.instructions+=1;NFSU2_TR(0x5de41e);
__builtin_memmove((R+0),(R+518),1);
}
B5de421:L5de421:{c.instructions+=6;NFSU2_TR(0x5de421);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5de425:{NFSU2_TR(0x5de425);
__builtin_memmove((R+4),(R+8),4);
}
B5de427:{NFSU2_TR(0x5de427);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5de42a:{NFSU2_TR(0x5de42a);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x1ull))));
}
B5de42d:{NFSU2_TR(0x5de42d);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+12))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
}
B5de42f:{NFSU2_TR(0x5de42f);
if(r1(R+518)){{goto L5de444;}}
}
B5de431:L5de431:{c.instructions+=3;NFSU2_TR(0x5de431);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5de435:{NFSU2_TR(0x5de435);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5de437:{NFSU2_TR(0x5de437);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5de43d;}}
}
B5de439:L5de439:{c.instructions+=2;NFSU2_TR(0x5de439);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5de43b:{NFSU2_TR(0x5de43b);
if(r1(R+518)){{goto L5de444;}}
}
B5de43d:L5de43d:{c.instructions+=2;NFSU2_TR(0x5de43d);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5de442:{NFSU2_TR(0x5de442);
{goto L5de449;}
}
B5de444:L5de444:{c.instructions+=1;NFSU2_TR(0x5de444);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5de449:L5de449:{c.instructions+=4;NFSU2_TR(0x5de449);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5de44c:{NFSU2_TR(0x5de44c);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xfull))));
}
B5de44f:{NFSU2_TR(0x5de44f);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5de452:{NFSU2_TR(0x5de452);
if(r1(R+518)){{goto L5de47d;}}
}
B5de454:L5de454:{c.instructions+=2;NFSU2_TR(0x5de454);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5de459:{NFSU2_TR(0x5de459);
if(r1(R+518)){{goto L5de47d;}}
}
B5de45b:L5de45b:{c.instructions+=3;NFSU2_TR(0x5de45b);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5de45f:{NFSU2_TR(0x5de45f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5de461:{NFSU2_TR(0x5de461);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5de46c;}}
}
B5de463:L5de463:{c.instructions+=2;NFSU2_TR(0x5de463);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5de46a:{NFSU2_TR(0x5de46a);
{goto L5de46e;}
}
B5de46c:L5de46c:{c.instructions+=1;NFSU2_TR(0x5de46c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5de46e:L5de46e:{c.instructions+=4;NFSU2_TR(0x5de46e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5de471:{NFSU2_TR(0x5de471);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5de474:{NFSU2_TR(0x5de474);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5de477:{NFSU2_TR(0x5de477);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5de47d;}}
}
B5de479:L5de479:{c.instructions+=2;NFSU2_TR(0x5de479);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5de47b:{NFSU2_TR(0x5de47b);
{goto L5de47f;}
}
B5de47d:L5de47d:{c.instructions+=1;NFSU2_TR(0x5de47d);
w1(R+0,u8(0x1ull));
}
B5de47f:L5de47f:{c.instructions+=3;NFSU2_TR(0x5de47f);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5de483:{NFSU2_TR(0x5de483);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5de485:{NFSU2_TR(0x5de485);
if(r1(R+518)){{goto L5de48b;}}
}
B5de487:L5de487:{c.instructions+=1;NFSU2_TR(0x5de487);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5de48b:L5de48b:{c.instructions+=6;NFSU2_TR(0x5de48b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5de48f:{NFSU2_TR(0x5de48f);
__builtin_memmove((R+28),gp(0x883db4),4);
}
B5de495:{NFSU2_TR(0x5de495);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5de496:{NFSU2_TR(0x5de496);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5de49a:{NFSU2_TR(0x5de49a);
__builtin_memmove((R+8),(R+0),4);
}
B5de49c:{NFSU2_TR(0x5de49c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5de360u);}goto L5de360;}
}
B5de4a1:L5de4a1:{c.instructions+=1;NFSU2_TR(0x5de4a1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5de4a3:L5de4a3:{c.instructions+=5;NFSU2_TR(0x5de4a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5de4a6:{NFSU2_TR(0x5de4a6);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x100ull))));
}
B5de4ac:{NFSU2_TR(0x5de4ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5de4ae:{NFSU2_TR(0x5de4ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5de4b1:{NFSU2_TR(0x5de4b1);
if(r1(R+518)){{goto L5de4c5;}}
}
B5de4b3:L5de4b3:{c.instructions+=4;NFSU2_TR(0x5de4b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5de4b6:{NFSU2_TR(0x5de4b6);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ffull))));
}
B5de4bc:{NFSU2_TR(0x5de4bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5de4c3:{NFSU2_TR(0x5de4c3);
{goto L5de4c7;}
}
B5de4c5:L5de4c5:{c.instructions+=1;NFSU2_TR(0x5de4c5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5de4c7:L5de4c7:{c.instructions+=12;NFSU2_TR(0x5de4c7);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B5de4c9:{NFSU2_TR(0x5de4c9);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x8cull))));
}
B5de4cf:{NFSU2_TR(0x5de4cf);
w4(R+0,u32(0x92492493ull));
}
B5de4d4:{NFSU2_TR(0x5de4d4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5de4d6:{NFSU2_TR(0x5de4d6);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B5de4d8:{NFSU2_TR(0x5de4d8);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5de4db:{NFSU2_TR(0x5de4db);
__builtin_memmove((R+0),(R+8),4);
}
B5de4dd:{NFSU2_TR(0x5de4dd);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5de4e0:{NFSU2_TR(0x5de4e0);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5de4e2:{NFSU2_TR(0x5de4e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5de4e4:{NFSU2_TR(0x5de4e4);
__builtin_memmove((R+24),(R+8),4);
}
B5de4e6:{NFSU2_TR(0x5de4e6);
if(r1(R+518)){{goto L5de4fa;}}
}
B5de4e8:L5de4e8:{c.instructions+=4;NFSU2_TR(0x5de4e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5de4eb:{NFSU2_TR(0x5de4eb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ffull))));
}
B5de4f1:{NFSU2_TR(0x5de4f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5de4f8:{NFSU2_TR(0x5de4f8);
{goto L5de4fc;}
}
B5de4fa:L5de4fa:{c.instructions+=1;NFSU2_TR(0x5de4fa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5de4fc:L5de4fc:{c.instructions+=13;NFSU2_TR(0x5de4fc);
__builtin_memmove((R+4),(R+20),4);
}
B5de4fe:{NFSU2_TR(0x5de4fe);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B5de500:{NFSU2_TR(0x5de500);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x8cull))));
}
B5de506:{NFSU2_TR(0x5de506);
w4(R+0,u32(0x92492493ull));
}
B5de50b:{NFSU2_TR(0x5de50b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5de50d:{NFSU2_TR(0x5de50d);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B5de50f:{NFSU2_TR(0x5de50f);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5de512:{NFSU2_TR(0x5de512);
__builtin_memmove((R+0),(R+8),4);
}
B5de514:{NFSU2_TR(0x5de514);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5de517:{NFSU2_TR(0x5de517);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5de519:{NFSU2_TR(0x5de519);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5de51b:{NFSU2_TR(0x5de51b);
__builtin_memmove((R+28),(R+24),4);
}
B5de51d:{NFSU2_TR(0x5de51d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5de525;}}
}
B5de51f:L5de51f:{c.instructions+=3;NFSU2_TR(0x5de51f);
__builtin_memmove((R+28),(R+8),4);
}
B5de521:{NFSU2_TR(0x5de521);
__builtin_memmove((R+4),(R+24),4);
}
B5de523:{NFSU2_TR(0x5de523);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5de527;}}
}
B5de525:L5de525:{c.instructions+=1;NFSU2_TR(0x5de525);
__builtin_memmove((R+4),(R+8),4);
}
B5de527:L5de527:{c.instructions+=2;NFSU2_TR(0x5de527);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5de529:{NFSU2_TR(0x5de529);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5de597;}}
}
B5de52b:L5de52b:{c.instructions+=7;NFSU2_TR(0x5de52b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5de52f:{NFSU2_TR(0x5de52f);
__builtin_memmove((R+8),(R+28),4);
}
B5de531:{NFSU2_TR(0x5de531);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5de534:{NFSU2_TR(0x5de534);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B5de536:{NFSU2_TR(0x5de536);
u8 U[12];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5de53d:{NFSU2_TR(0x5de53d);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5de541:{NFSU2_TR(0x5de541);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5de542:L5de542:{c.instructions+=3;NFSU2_TR(0x5de542);
__builtin_memmove((R+8),(R+24),4);
}
B5de544:{NFSU2_TR(0x5de544);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5de547:{NFSU2_TR(0x5de547);
if(r1(R+518)){{goto L5de57b;}}
}
B5de549:L5de549:{c.instructions+=2;NFSU2_TR(0x5de549);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5de54a:{NFSU2_TR(0x5de54a);
if(r1(R+518)){{goto L5de565;}}
}
B5de54c:L5de54c:{c.instructions+=2;NFSU2_TR(0x5de54c);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5de54d:{NFSU2_TR(0x5de54d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5de591;}}
}
B5de54f:L5de54f:{c.instructions+=3;NFSU2_TR(0x5de54f);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5de551:{NFSU2_TR(0x5de551);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5de553:{NFSU2_TR(0x5de553);
if(r1(R+518)){{goto L5de55d;}}
}
B5de555:L5de555:{c.instructions+=2;NFSU2_TR(0x5de555);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x8000000ull))));
}
B5de55b:{NFSU2_TR(0x5de55b);
{goto L5de58f;}
}
B5de55d:L5de55d:{c.instructions+=2;NFSU2_TR(0x5de55d);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x10000000ull))));
}
B5de563:{NFSU2_TR(0x5de563);
{goto L5de58f;}
}
B5de565:L5de565:{c.instructions+=3;NFSU2_TR(0x5de565);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5de567:{NFSU2_TR(0x5de567);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5de569:{NFSU2_TR(0x5de569);
if(r1(R+518)){{goto L5de573;}}
}
B5de56b:L5de56b:{c.instructions+=2;NFSU2_TR(0x5de56b);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x2000000ull))));
}
B5de571:{NFSU2_TR(0x5de571);
{goto L5de58f;}
}
B5de573:L5de573:{c.instructions+=2;NFSU2_TR(0x5de573);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x4000000ull))));
}
B5de579:{NFSU2_TR(0x5de579);
{goto L5de58f;}
}
B5de57b:L5de57b:{c.instructions+=3;NFSU2_TR(0x5de57b);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5de57d:{NFSU2_TR(0x5de57d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5de57f:{NFSU2_TR(0x5de57f);
if(r1(R+518)){{goto L5de589;}}
}
B5de581:L5de581:{c.instructions+=2;NFSU2_TR(0x5de581);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x800ull))));
}
B5de587:{NFSU2_TR(0x5de587);
{goto L5de58f;}
}
B5de589:L5de589:{c.instructions+=1;NFSU2_TR(0x5de589);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x40000ull))));
}
B5de58f:L5de58f:{c.instructions+=1;NFSU2_TR(0x5de58f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5de591:L5de591:{c.instructions+=3;NFSU2_TR(0x5de591);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
}
B5de594:{NFSU2_TR(0x5de594);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5de595:{NFSU2_TR(0x5de595);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5de542u);}goto L5de542;}}
}
B5de597:L5de597:{c.instructions+=2;NFSU2_TR(0x5de597);
__builtin_memmove((R+28),gp(0x883db4),4);
}
B5de59d:{NFSU2_TR(0x5de59d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5de5a1:L5de5a1:{c.instructions+=3;NFSU2_TR(0x5de5a1);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5de5a5:{NFSU2_TR(0x5de5a5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5de5a7:{NFSU2_TR(0x5de5a7);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5de290u);}goto L5de290;}}
}
B5de5ad:L5de5ad:{c.instructions+=6;NFSU2_TR(0x5de5ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5de5ae:{NFSU2_TR(0x5de5ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5de5af:{NFSU2_TR(0x5de5af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5de5b0:{NFSU2_TR(0x5de5b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5de5b1:{NFSU2_TR(0x5de5b1);
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
B5de5b4:{NFSU2_TR(0x5de5b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5de5c0:L5de5c0:{c.instructions+=9;NFSU2_TR(0x5de5c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5de5c3:{NFSU2_TR(0x5de5c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5de5c4:{NFSU2_TR(0x5de5c4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5de5c5:{NFSU2_TR(0x5de5c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5de5c9:{NFSU2_TR(0x5de5c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5de5ca:{NFSU2_TR(0x5de5ca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5de5cb:{NFSU2_TR(0x5de5cb);
__builtin_memmove((R+12),(R+4),4);
}
B5de5cd:{NFSU2_TR(0x5de5cd);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5de5cf:{NFSU2_TR(0x5de5cf);
}
B5de5d0:L5de5d0:{c.instructions+=3;NFSU2_TR(0x5de5d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5de5d4:{NFSU2_TR(0x5de5d4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5de5d6:{NFSU2_TR(0x5de5d6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5de748;}}
}
B5de5dc:L5de5dc:{c.instructions+=2;NFSU2_TR(0x5de5dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
}
B5de5df:{NFSU2_TR(0x5de5df);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5de5e3:L5de5e3:{c.instructions+=3;NFSU2_TR(0x5de5e3);
__builtin_memmove((R+0),(R+28),4);
}
B5de5e5:{NFSU2_TR(0x5de5e5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5de5e8:{NFSU2_TR(0x5de5e8);
if(r1(R+518)){{goto L5de63b;}}
}
B5de5ea:L5de5ea:{c.instructions+=2;NFSU2_TR(0x5de5ea);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5de5eb:{NFSU2_TR(0x5de5eb);
if(r1(R+518)){{goto L5de62e;}}
}
B5de5ed:L5de5ed:{c.instructions+=2;NFSU2_TR(0x5de5ed);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5de5ee:{NFSU2_TR(0x5de5ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5de601;}}
}
B5de5f0:L5de5f0:{c.instructions+=3;NFSU2_TR(0x5de5f0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B5de5f2:{NFSU2_TR(0x5de5f2);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B5de5f4:{NFSU2_TR(0x5de5f4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5de5f6:L5de5f6:{c.instructions+=3;NFSU2_TR(0x5de5f6);
__builtin_memmove((R+0),(R+518),1);
}
B5de5f9:{NFSU2_TR(0x5de5f9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5de5fb:{NFSU2_TR(0x5de5fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5de736;}}
}
B5de601:L5de601:{c.instructions+=4;NFSU2_TR(0x5de601);
__builtin_memmove((R+4),(R+28),4);
}
B5de603:{NFSU2_TR(0x5de603);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5de606:{NFSU2_TR(0x5de606);
w1(R+0,u8(0x7ull));
}
B5de608:{NFSU2_TR(0x5de608);
if(r1(R+518)){{goto L5de610;}}
}
B5de60a:L5de60a:{c.instructions+=2;NFSU2_TR(0x5de60a);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5de60b:{NFSU2_TR(0x5de60b);
if(r1(R+518)){{goto L5de650;}}
}
B5de60d:L5de60d:{c.instructions+=2;NFSU2_TR(0x5de60d);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5de60e:{NFSU2_TR(0x5de60e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5de614;}}
}
B5de610:L5de610:{c.instructions+=1;NFSU2_TR(0x5de610);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B5de612:L5de612:{c.instructions+=1;NFSU2_TR(0x5de612);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B5de614:L5de614:{c.instructions+=3;NFSU2_TR(0x5de614);
w4(R+0,u32(r1(R+0)));
}
B5de617:{NFSU2_TR(0x5de617);
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
B5de61a:{NFSU2_TR(0x5de61a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5de736;}}
}
B5de620:L5de620:{c.instructions+=2;NFSU2_TR(0x5de620);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5de8c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B5de627:{NFSU2_TR(0x5de627);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5de8b8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5de62e:L5de62e:{c.instructions+=5;NFSU2_TR(0x5de62e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5de630:{NFSU2_TR(0x5de630);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5de633:{NFSU2_TR(0x5de633);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B5de636:{NFSU2_TR(0x5de636);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5de639:{NFSU2_TR(0x5de639);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5de5f6u);}goto L5de5f6;}
}
B5de63b:L5de63b:{c.instructions+=4;NFSU2_TR(0x5de63b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B5de63d:{NFSU2_TR(0x5de63d);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B5de63f:{NFSU2_TR(0x5de63f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5de641:{NFSU2_TR(0x5de641);
if(r1(R+518)){{goto L5de736;}}
}
B5de647:L5de647:{c.instructions+=2;NFSU2_TR(0x5de647);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5de649:{NFSU2_TR(0x5de649);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5de601u);}goto L5de601;}}
}
B5de64b:L5de64b:{c.instructions+=1;NFSU2_TR(0x5de64b);
{goto L5de736;}
}
B5de650:L5de650:{c.instructions+=3;NFSU2_TR(0x5de650);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5de652:{NFSU2_TR(0x5de652);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5de655:{NFSU2_TR(0x5de655);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5de612u);}goto L5de612;}
}
B5de657:L5de657:{c.instructions+=6;NFSU2_TR(0x5de657);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5de659:{NFSU2_TR(0x5de659);
__builtin_memmove((R+4),(R+0),4);
}
B5de65b:{NFSU2_TR(0x5de65b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5de65e:{NFSU2_TR(0x5de65e);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B5de661:{NFSU2_TR(0x5de661);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5de664:{NFSU2_TR(0x5de664);
if(r1(R+518)){{goto L5de68d;}}
}
B5de666:L5de666:{c.instructions+=2;NFSU2_TR(0x5de666);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5de669:{NFSU2_TR(0x5de669);
if(r1(R+518)){{goto L5de68d;}}
}
B5de66b:L5de66b:{c.instructions+=3;NFSU2_TR(0x5de66b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5de66f:{NFSU2_TR(0x5de66f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5de671:{NFSU2_TR(0x5de671);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5de67c;}}
}
B5de673:L5de673:{c.instructions+=2;NFSU2_TR(0x5de673);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5de67a:{NFSU2_TR(0x5de67a);
{goto L5de67e;}
}
B5de67c:L5de67c:{c.instructions+=1;NFSU2_TR(0x5de67c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5de67e:L5de67e:{c.instructions+=4;NFSU2_TR(0x5de67e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5de681:{NFSU2_TR(0x5de681);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5de684:{NFSU2_TR(0x5de684);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5de687:{NFSU2_TR(0x5de687);
if(r1(R+518)){{goto L5de736;}}
}
B5de68d:L5de68d:{c.instructions+=7;NFSU2_TR(0x5de68d);
__builtin_memmove((R+4),(R+0),4);
}
B5de68f:{NFSU2_TR(0x5de68f);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5de692:{NFSU2_TR(0x5de692);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x1ull))));
}
B5de695:{NFSU2_TR(0x5de695);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B5de697:{NFSU2_TR(0x5de697);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5de699:{NFSU2_TR(0x5de699);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5de69d:{NFSU2_TR(0x5de69d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5de6a5;}}
}
B5de69f:L5de69f:{c.instructions+=2;NFSU2_TR(0x5de69f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5de6a3:{NFSU2_TR(0x5de6a3);
{goto L5de6a9;}
}
B5de6a5:L5de6a5:{c.instructions+=1;NFSU2_TR(0x5de6a5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5de6a9:L5de6a9:{c.instructions+=2;NFSU2_TR(0x5de6a9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5de6ab:{NFSU2_TR(0x5de6ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5de6b3;}}
}
B5de6ad:L5de6ad:{c.instructions+=2;NFSU2_TR(0x5de6ad);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5de6b1:{NFSU2_TR(0x5de6b1);
{goto L5de6b7;}
}
B5de6b3:L5de6b3:{c.instructions+=1;NFSU2_TR(0x5de6b3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5de6b7:L5de6b7:{c.instructions+=3;NFSU2_TR(0x5de6b7);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B5de6ba:{NFSU2_TR(0x5de6ba);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5de6bc:{NFSU2_TR(0x5de6bc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5de6cb;}}
}
B5de6be:L5de6be:{c.instructions+=3;NFSU2_TR(0x5de6be);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5de6c5:{NFSU2_TR(0x5de6c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5de6c9:{NFSU2_TR(0x5de6c9);
{goto L5de71e;}
}
B5de6cb:L5de6cb:{c.instructions+=3;NFSU2_TR(0x5de6cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5de6cf:{NFSU2_TR(0x5de6cf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5de6d1:{NFSU2_TR(0x5de6d1);
{goto L5de71e;}
}
B5de6d3:L5de6d3:{c.instructions+=12;NFSU2_TR(0x5de6d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5de6d5:{NFSU2_TR(0x5de6d5);
__builtin_memmove((R+4),(R+0),4);
}
B5de6d7:{NFSU2_TR(0x5de6d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5de6da:{NFSU2_TR(0x5de6da);
__builtin_memmove((R+8),(R+0),4);
}
B5de6dc:{NFSU2_TR(0x5de6dc);
w1(R+4,u8(~u32(r1(R+4))));
}
B5de6de:{NFSU2_TR(0x5de6de);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5de6e1:{NFSU2_TR(0x5de6e1);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+8))));
}
B5de6e3:{NFSU2_TR(0x5de6e3);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x1ull))));
}
B5de6e6:{NFSU2_TR(0x5de6e6);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B5de6e8:{NFSU2_TR(0x5de6e8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5de6ea:{NFSU2_TR(0x5de6ea);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5de6ee:{NFSU2_TR(0x5de6ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5de6f6;}}
}
B5de6f0:L5de6f0:{c.instructions+=2;NFSU2_TR(0x5de6f0);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5de6f4:{NFSU2_TR(0x5de6f4);
{goto L5de6fa;}
}
B5de6f6:L5de6f6:{c.instructions+=1;NFSU2_TR(0x5de6f6);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5de6fa:L5de6fa:{c.instructions+=2;NFSU2_TR(0x5de6fa);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5de6fc:{NFSU2_TR(0x5de6fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5de704;}}
}
B5de6fe:L5de6fe:{c.instructions+=2;NFSU2_TR(0x5de6fe);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5de702:{NFSU2_TR(0x5de702);
{goto L5de708;}
}
B5de704:L5de704:{c.instructions+=1;NFSU2_TR(0x5de704);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5de708:L5de708:{c.instructions+=3;NFSU2_TR(0x5de708);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B5de70b:{NFSU2_TR(0x5de70b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5de70d:{NFSU2_TR(0x5de70d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5de718;}}
}
B5de70f:L5de70f:{c.instructions+=2;NFSU2_TR(0x5de70f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5de716:{NFSU2_TR(0x5de716);
{goto L5de71a;}
}
B5de718:L5de718:{c.instructions+=1;NFSU2_TR(0x5de718);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5de71a:L5de71a:{c.instructions+=1;NFSU2_TR(0x5de71a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5de71e:L5de71e:{c.instructions+=9;NFSU2_TR(0x5de71e);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B5de721:{NFSU2_TR(0x5de721);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5de724:{NFSU2_TR(0x5de724);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5de725:{NFSU2_TR(0x5de725);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5de726:{NFSU2_TR(0x5de726);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5de72d:{NFSU2_TR(0x5de72d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5de72e:{NFSU2_TR(0x5de72e);
__builtin_memmove((R+4),(R+12),4);
}
B5de730:{NFSU2_TR(0x5de730);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5de731:{NFSU2_TR(0x5de731);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5de736ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5de240u);}goto L5de240;}
}
B5de736:L5de736:{c.instructions+=5;NFSU2_TR(0x5de736);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5de73a:{NFSU2_TR(0x5de73a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x20ull))));
}
B5de73d:{NFSU2_TR(0x5de73d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5de73e:{NFSU2_TR(0x5de73e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5de742:{NFSU2_TR(0x5de742);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5de5e3u);}goto L5de5e3;}}
}
B5de748:L5de748:{c.instructions+=3;NFSU2_TR(0x5de748);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5de749:{NFSU2_TR(0x5de749);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5de74c:{NFSU2_TR(0x5de74c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5de5d0u);}goto L5de5d0;}}
}
B5de752:L5de752:{c.instructions+=5;NFSU2_TR(0x5de752);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5de754:{NFSU2_TR(0x5de754);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x14ull))));
}
B5de757:{NFSU2_TR(0x5de757);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5de75b:{NFSU2_TR(0x5de75b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5de75f:{NFSU2_TR(0x5de75f);
}
B5de760:L5de760:{c.instructions+=2;NFSU2_TR(0x5de760);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5de762:{NFSU2_TR(0x5de762);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5de893;}}
}
B5de768:L5de768:{c.instructions+=3;NFSU2_TR(0x5de768);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+20),(U+0),4);
}
B5de76a:{NFSU2_TR(0x5de76a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5de76c:{NFSU2_TR(0x5de76c);
if(r1(R+518)){{goto L5de893;}}
}
B5de772:L5de772:{c.instructions+=4;NFSU2_TR(0x5de772);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5de775:{NFSU2_TR(0x5de775);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5de778:{NFSU2_TR(0x5de778);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5de77b:{NFSU2_TR(0x5de77b);
if(r1(R+518)){{goto L5de893;}}
}
B5de781:L5de781:{c.instructions+=3;NFSU2_TR(0x5de781);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+523,sborrow<u16>(r2(U+6),u16(0x0ull)));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5de786:{NFSU2_TR(0x5de786);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5de78e:{NFSU2_TR(0x5de78e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5de893;}}
}
B5de794:L5de794:{c.instructions+=2;NFSU2_TR(0x5de794);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8cull))));
__builtin_memmove((R+28),(U+0),4);
}
B5de79a:{NFSU2_TR(0x5de79a);
__builtin_memmove((R+12),(R+12),4);
}
B5de7a0:L5de7a0:{c.instructions+=3;NFSU2_TR(0x5de7a0);
__builtin_memmove((R+12),gp(0x883db4),4);
}
B5de7a6:{NFSU2_TR(0x5de7a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5de7ae:{NFSU2_TR(0x5de7ae);
__builtin_memmove((R+28),(R+28),4);
}
B5de7b0:L5de7b0:{c.instructions+=5;NFSU2_TR(0x5de7b0);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5de7b4:{NFSU2_TR(0x5de7b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5de7b7:{NFSU2_TR(0x5de7b7);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5de7b9:{NFSU2_TR(0x5de7b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5de7be:{NFSU2_TR(0x5de7be);
if(r1(R+518)){{goto L5de7c9;}}
}
B5de7c0:L5de7c0:{c.instructions+=2;NFSU2_TR(0x5de7c0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5de7c2:{NFSU2_TR(0x5de7c2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5de7c9;}}
}
B5de7c4:L5de7c4:{c.instructions+=1;NFSU2_TR(0x5de7c4);
w4(R+8,u32(0x1ull));
}
B5de7c9:L5de7c9:{c.instructions+=3;NFSU2_TR(0x5de7c9);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5de7cd:{NFSU2_TR(0x5de7cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5de7d2:{NFSU2_TR(0x5de7d2);
if(r1(R+518)){{goto L5de7d9;}}
}
B5de7d4:L5de7d4:{c.instructions+=2;NFSU2_TR(0x5de7d4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5de7d6:{NFSU2_TR(0x5de7d6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5de7d9;}}
}
B5de7d8:L5de7d8:{c.instructions+=1;NFSU2_TR(0x5de7d8);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5de7d9:L5de7d9:{c.instructions+=2;NFSU2_TR(0x5de7d9);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+8)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5de7dd:{NFSU2_TR(0x5de7dd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5de870;}}
}
B5de7e3:L5de7e3:{c.instructions+=3;NFSU2_TR(0x5de7e3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5de7e5:{NFSU2_TR(0x5de7e5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5de7e7:{NFSU2_TR(0x5de7e7);
{goto L5de7f0;}
}
B5de7f0:L5de7f0:{c.instructions+=3;NFSU2_TR(0x5de7f0);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(r2(U+0)));
}
B5de7f3:{NFSU2_TR(0x5de7f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5de7f8:{NFSU2_TR(0x5de7f8);
if(r1(R+518)){{goto L5de805;}}
}
B5de7fa:L5de7fa:{c.instructions+=2;NFSU2_TR(0x5de7fa);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5de7fc:{NFSU2_TR(0x5de7fc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5de805;}}
}
B5de7fe:L5de7fe:{c.instructions+=2;NFSU2_TR(0x5de7fe);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5de802:{NFSU2_TR(0x5de802);
if(r1(R+518)){{goto L5de852;}}
}
B5de804:L5de804:{c.instructions+=1;NFSU2_TR(0x5de804);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5de805:L5de805:{c.instructions+=4;NFSU2_TR(0x5de805);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5de806:{NFSU2_TR(0x5de806);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B5de809:{NFSU2_TR(0x5de809);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5de80c:{NFSU2_TR(0x5de80c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5de7f0u);}goto L5de7f0;}}
}
B5de80e:L5de80e:{c.instructions+=1;NFSU2_TR(0x5de80e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5de810:L5de810:{c.instructions+=4;NFSU2_TR(0x5de810);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5de813:{NFSU2_TR(0x5de813);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xfull))));
}
B5de816:{NFSU2_TR(0x5de816);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5de819:{NFSU2_TR(0x5de819);
if(r1(R+518)){{goto L5de867;}}
}
B5de81b:L5de81b:{c.instructions+=2;NFSU2_TR(0x5de81b);
__builtin_memmove((R+4),(R+0),4);
}
B5de81d:{NFSU2_TR(0x5de81d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5de822ull));
TAIL_STATIC(0x5d8760u,5d8);
}
B5de822:L5de822:{c.instructions+=2;NFSU2_TR(0x5de822);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5de824:{NFSU2_TR(0x5de824);
if(r1(R+518)){{goto L5de867;}}
}
B5de826:L5de826:{c.instructions+=4;NFSU2_TR(0x5de826);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5de829:{NFSU2_TR(0x5de829);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B5de82c:{NFSU2_TR(0x5de82c);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5de82f:{NFSU2_TR(0x5de82f);
if(r1(R+518)){{goto L5de867;}}
}
B5de831:L5de831:{c.instructions+=2;NFSU2_TR(0x5de831);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x8ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5de834:{NFSU2_TR(0x5de834);
if(r1(R+518)){{goto L5de867;}}
}
B5de836:L5de836:{c.instructions+=3;NFSU2_TR(0x5de836);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5de83a:{NFSU2_TR(0x5de83a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5de83c:{NFSU2_TR(0x5de83c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5de85f;}}
}
B5de83e:L5de83e:{c.instructions+=4;NFSU2_TR(0x5de83e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5de845:{NFSU2_TR(0x5de845);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5de849:{NFSU2_TR(0x5de849);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5de84d:{NFSU2_TR(0x5de84d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5de7b0u);}goto L5de7b0;}
}
B5de852:L5de852:{c.instructions+=4;NFSU2_TR(0x5de852);
__builtin_memmove((R+4),gp(0x883db0),4);
}
B5de858:{NFSU2_TR(0x5de858);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5de85b:{NFSU2_TR(0x5de85b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B5de85d:{NFSU2_TR(0x5de85d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5de810u);}goto L5de810;}
}
B5de85f:L5de85f:{c.instructions+=1;NFSU2_TR(0x5de85f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5de867:L5de867:{c.instructions+=2;NFSU2_TR(0x5de867);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5de86b:{NFSU2_TR(0x5de86b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5de7b0u);}goto L5de7b0;}
}
B5de870:L5de870:{c.instructions+=8;NFSU2_TR(0x5de870);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xe7fbf7ffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5de877:{NFSU2_TR(0x5de877);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5de87b:{NFSU2_TR(0x5de87b);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5de87f:{NFSU2_TR(0x5de87f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5de880:{NFSU2_TR(0x5de880);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x38ull))));
}
B5de883:{NFSU2_TR(0x5de883);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5de885:{NFSU2_TR(0x5de885);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5de889:{NFSU2_TR(0x5de889);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5de7a0u);}goto L5de7a0;}}
}
B5de88f:L5de88f:{c.instructions+=1;NFSU2_TR(0x5de88f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5de893:L5de893:{c.instructions+=7;NFSU2_TR(0x5de893);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5de897:{NFSU2_TR(0x5de897);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5de898:{NFSU2_TR(0x5de898);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5de89b:{NFSU2_TR(0x5de89b);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x5dcull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x5dcull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5de8a0:{NFSU2_TR(0x5de8a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5de8a4:{NFSU2_TR(0x5de8a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5de8a8:{NFSU2_TR(0x5de8a8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5de760u);}goto L5de760;}}
}
B5de8ae:L5de8ae:{c.instructions+=6;NFSU2_TR(0x5de8ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5de8af:{NFSU2_TR(0x5de8af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5de8b0:{NFSU2_TR(0x5de8b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5de8b1:{NFSU2_TR(0x5de8b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5de8b2:{NFSU2_TR(0x5de8b2);
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
B5de8b5:{NFSU2_TR(0x5de8b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5de8d0:L5de8d0:{c.instructions+=7;NFSU2_TR(0x5de8d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5de8d1:{NFSU2_TR(0x5de8d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5de8d2:{NFSU2_TR(0x5de8d2);
__builtin_memmove((R+20),(R+4),4);
}
B5de8d4:{NFSU2_TR(0x5de8d4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5de8d5:{NFSU2_TR(0x5de8d5);
w4(R+28,u32(0x2ull));
}
B5de8da:{NFSU2_TR(0x5de8da);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5de8dd:{NFSU2_TR(0x5de8dd);
__builtin_memmove((R+4),(R+4),4);
}
B5de8e0:L5de8e0:{c.instructions+=3;NFSU2_TR(0x5de8e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+0),(U+0),4);
}
B5de8e3:{NFSU2_TR(0x5de8e3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5de8e5:{NFSU2_TR(0x5de8e5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5de903;}}
}
B5de8e7:L5de8e7:{c.instructions+=3;NFSU2_TR(0x5de8e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5de8ea:{NFSU2_TR(0x5de8ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5de8ec:{NFSU2_TR(0x5de8ec);
if(r1(R+518)){{goto L5de903;}}
}
B5de8ee:L5de8ee:{c.instructions+=5;NFSU2_TR(0x5de8ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5de8f1:{NFSU2_TR(0x5de8f1);
__builtin_memmove((R+4),(R+0),4);
}
B5de8f3:{NFSU2_TR(0x5de8f3);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5de8f6:{NFSU2_TR(0x5de8f6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5de8f9:{NFSU2_TR(0x5de8f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5de903;}}
}
B5de8fb:L5de8fb:{c.instructions+=2;NFSU2_TR(0x5de8fb);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffd3full))));
}
B5de900:{NFSU2_TR(0x5de900);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5de903:L5de903:{c.instructions+=3;NFSU2_TR(0x5de903);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B5de906:{NFSU2_TR(0x5de906);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5de908:{NFSU2_TR(0x5de908);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5de925;}}
}
B5de90a:L5de90a:{c.instructions+=3;NFSU2_TR(0x5de90a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5de90c:{NFSU2_TR(0x5de90c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5de90e:{NFSU2_TR(0x5de90e);
if(r1(R+518)){{goto L5de925;}}
}
B5de910:L5de910:{c.instructions+=5;NFSU2_TR(0x5de910);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5de913:{NFSU2_TR(0x5de913);
__builtin_memmove((R+4),(R+0),4);
}
B5de915:{NFSU2_TR(0x5de915);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5de918:{NFSU2_TR(0x5de918);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5de91b:{NFSU2_TR(0x5de91b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5de925;}}
}
B5de91d:L5de91d:{c.instructions+=2;NFSU2_TR(0x5de91d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffd3full))));
}
B5de922:{NFSU2_TR(0x5de922);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5de925:L5de925:{c.instructions+=2;NFSU2_TR(0x5de925);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5de927:{NFSU2_TR(0x5de927);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5de945;}}
}
B5de929:L5de929:{c.instructions+=3;NFSU2_TR(0x5de929);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5de92c:{NFSU2_TR(0x5de92c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5de92e:{NFSU2_TR(0x5de92e);
if(r1(R+518)){{goto L5de945;}}
}
B5de930:L5de930:{c.instructions+=5;NFSU2_TR(0x5de930);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5de933:{NFSU2_TR(0x5de933);
__builtin_memmove((R+4),(R+0),4);
}
B5de935:{NFSU2_TR(0x5de935);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5de938:{NFSU2_TR(0x5de938);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5de93b:{NFSU2_TR(0x5de93b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5de945;}}
}
B5de93d:L5de93d:{c.instructions+=2;NFSU2_TR(0x5de93d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffd3full))));
}
B5de942:{NFSU2_TR(0x5de942);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5de945:L5de945:{c.instructions+=3;NFSU2_TR(0x5de945);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5de948:{NFSU2_TR(0x5de948);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5de94a:{NFSU2_TR(0x5de94a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5de968;}}
}
B5de94c:L5de94c:{c.instructions+=3;NFSU2_TR(0x5de94c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5de94f:{NFSU2_TR(0x5de94f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5de951:{NFSU2_TR(0x5de951);
if(r1(R+518)){{goto L5de968;}}
}
B5de953:L5de953:{c.instructions+=5;NFSU2_TR(0x5de953);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5de956:{NFSU2_TR(0x5de956);
__builtin_memmove((R+4),(R+0),4);
}
B5de958:{NFSU2_TR(0x5de958);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5de95b:{NFSU2_TR(0x5de95b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5de95e:{NFSU2_TR(0x5de95e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5de968;}}
}
B5de960:L5de960:{c.instructions+=2;NFSU2_TR(0x5de960);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffd3full))));
}
B5de965:{NFSU2_TR(0x5de965);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5de968:L5de968:{c.instructions+=5;NFSU2_TR(0x5de968);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5de96b:{NFSU2_TR(0x5de96b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+8),(U+0),4);
}
B5de96e:{NFSU2_TR(0x5de96e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B5de971:{NFSU2_TR(0x5de971);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5dcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5dcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5de977:{NFSU2_TR(0x5de977);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5de8e0u);}goto L5de8e0;}}
}
B5de97d:L5de97d:{c.instructions+=5;NFSU2_TR(0x5de97d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5de97e:{NFSU2_TR(0x5de97e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5de97f:{NFSU2_TR(0x5de97f);
__builtin_memmove((R+4),(R+20),4);
}
B5de981:{NFSU2_TR(0x5de981);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5de982:{NFSU2_TR(0x5de982);
TAIL_STATIC(0x5d9430u,5d9);
}
B5de990:L5de990:{c.instructions+=7;NFSU2_TR(0x5de990);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B5de993:{NFSU2_TR(0x5de993);
__builtin_memmove((R+0),(R+4),4);
}
B5de995:{NFSU2_TR(0x5de995);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1784ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5de99b:{NFSU2_TR(0x5de99b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5de99d:{NFSU2_TR(0x5de99d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5de9a1:{NFSU2_TR(0x5de9a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5de9a9:{NFSU2_TR(0x5de9a9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5deb6b;}}
}
B5de9af:L5de9af:{c.instructions+=7;NFSU2_TR(0x5de9af);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5de9b0:{NFSU2_TR(0x5de9b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5de9b1:{NFSU2_TR(0x5de9b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1788ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5de9b7:{NFSU2_TR(0x5de9b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5de9b8:{NFSU2_TR(0x5de9b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5de9bc:{NFSU2_TR(0x5de9bc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5de9bd:{NFSU2_TR(0x5de9bd);
__builtin_memmove((R+4),(R+4),4);
}
B5de9c0:L5de9c0:{c.instructions+=5;NFSU2_TR(0x5de9c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5de9c4:{NFSU2_TR(0x5de9c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5de9c6:{NFSU2_TR(0x5de9c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5de9c8:{NFSU2_TR(0x5de9c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5de9cc:{NFSU2_TR(0x5de9cc);
if(r1(R+518)){{goto L5deb45;}}
}
B5de9d2:L5de9d2:{c.instructions+=3;NFSU2_TR(0x5de9d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5de9d5:{NFSU2_TR(0x5de9d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5de9d7:{NFSU2_TR(0x5de9d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5deb45;}}
}
B5de9dd:L5de9dd:{c.instructions+=3;NFSU2_TR(0x5de9dd);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+523,sborrow<u16>(r2(U+6),u16(0x0ull)));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5de9e2:{NFSU2_TR(0x5de9e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5de9ea:{NFSU2_TR(0x5de9ea);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5deb45;}}
}
B5de9f0:L5de9f0:{c.instructions+=2;NFSU2_TR(0x5de9f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa8ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5de9f6:{NFSU2_TR(0x5de9f6);
{goto L5dea00;}
}
B5dea00:L5dea00:{c.instructions+=5;NFSU2_TR(0x5dea00);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+20))),2);
w4(R+0,u32(r2(U+0)));
}
B5dea04:{NFSU2_TR(0x5dea04);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5dea06:{NFSU2_TR(0x5dea06);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dea0b:{NFSU2_TR(0x5dea0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dea0f:{NFSU2_TR(0x5dea0f);
if(r1(R+518)){{goto L5dea22;}}
}
B5dea11:L5dea11:{c.instructions+=2;NFSU2_TR(0x5dea11);
u8 U[8];
__builtin_memmove((U+0),gp(0x883db4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dea17:{NFSU2_TR(0x5dea17);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5dea22;}}
}
B5dea19:L5dea19:{c.instructions+=2;NFSU2_TR(0x5dea19);
w4(R+28,u32(0x1ull));
}
B5dea1e:{NFSU2_TR(0x5dea1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dea22:L5dea22:{c.instructions+=3;NFSU2_TR(0x5dea22);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5dea26:{NFSU2_TR(0x5dea26);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dea2b:{NFSU2_TR(0x5dea2b);
if(r1(R+518)){{goto L5dea3a;}}
}
B5dea2d:L5dea2d:{c.instructions+=2;NFSU2_TR(0x5dea2d);
u8 U[8];
__builtin_memmove((U+0),gp(0x883db4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dea33:{NFSU2_TR(0x5dea33);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5dea3a;}}
}
B5dea35:L5dea35:{c.instructions+=2;NFSU2_TR(0x5dea35);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5dea36:{NFSU2_TR(0x5dea36);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dea3a:L5dea3a:{c.instructions+=2;NFSU2_TR(0x5dea3a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dea3c:{NFSU2_TR(0x5dea3c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5deb29;}}
}
B5dea42:L5dea42:{c.instructions+=7;NFSU2_TR(0x5dea42);
w4(R+0,u32(0xfffffff6ull));
}
B5dea47:{NFSU2_TR(0x5dea47);
__builtin_memmove((R+24),(R+0),4);
}
B5dea49:{NFSU2_TR(0x5dea49);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5dea4b:{NFSU2_TR(0x5dea4b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dea4d:{NFSU2_TR(0x5dea4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dea51:{NFSU2_TR(0x5dea51);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dea55:{NFSU2_TR(0x5dea55);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5deae8;}}
}
B5dea5b:L5dea5b:{c.instructions+=1;NFSU2_TR(0x5dea5b);
{goto L5dea60;}
}
B5dea60:L5dea60:{c.instructions+=3;NFSU2_TR(0x5dea60);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5dea62:{NFSU2_TR(0x5dea62);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5dea64:{NFSU2_TR(0x5dea64);
__builtin_memmove((R+8),(R+20),4);
}
B5dea66:L5dea66:{c.instructions+=3;NFSU2_TR(0x5dea66);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+0,u32(r2(U+0)));
}
B5dea69:{NFSU2_TR(0x5dea69);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dea6e:{NFSU2_TR(0x5dea6e);
if(r1(R+518)){{goto L5dea7d;}}
}
B5dea70:L5dea70:{c.instructions+=2;NFSU2_TR(0x5dea70);
u8 U[8];
__builtin_memmove((U+0),gp(0x883db4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dea76:{NFSU2_TR(0x5dea76);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5dea7d;}}
}
B5dea78:L5dea78:{c.instructions+=2;NFSU2_TR(0x5dea78);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dea7a:{NFSU2_TR(0x5dea7a);
if(r1(R+518)){{goto L5deabb;}}
}
B5dea7c:L5dea7c:{c.instructions+=1;NFSU2_TR(0x5dea7c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5dea7d:L5dea7d:{c.instructions+=4;NFSU2_TR(0x5dea7d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5dea7e:{NFSU2_TR(0x5dea7e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B5dea81:{NFSU2_TR(0x5dea81);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dea84:{NFSU2_TR(0x5dea84);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dea66u);}goto L5dea66;}}
}
B5dea86:L5dea86:{c.instructions+=1;NFSU2_TR(0x5dea86);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5dea88:L5dea88:{c.instructions+=5;NFSU2_TR(0x5dea88);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dea8b:{NFSU2_TR(0x5dea8b);
__builtin_memmove((R+8),(R+0),1);
}
B5dea8d:{NFSU2_TR(0x5dea8d);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xfull))));
}
B5dea90:{NFSU2_TR(0x5dea90);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5dea93:{NFSU2_TR(0x5dea93);
if(r1(R+518)){{goto L5deaa7;}}
}
B5dea95:L5dea95:{c.instructions+=5;NFSU2_TR(0x5dea95);
__builtin_memmove((R+4),(R+0),4);
}
B5dea97:{NFSU2_TR(0x5dea97);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5dea9a:{NFSU2_TR(0x5dea9a);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B5dea9d:{NFSU2_TR(0x5dea9d);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5deaa0:{NFSU2_TR(0x5deaa0);
if(r1(R+518)){{goto L5deaa7;}}
}
B5deaa2:L5deaa2:{c.instructions+=2;NFSU2_TR(0x5deaa2);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5deaa5:{NFSU2_TR(0x5deaa5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dead3;}}
}
B5deaa7:L5deaa7:{c.instructions+=3;NFSU2_TR(0x5deaa7);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5deaaa:{NFSU2_TR(0x5deaaa);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5deaac:{NFSU2_TR(0x5deaac);
if(r1(R+518)){{goto L5deac8;}}
}
B5deaae:L5deaae:{c.instructions+=2;NFSU2_TR(0x5deaae);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xfffffff6ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5deab3:{NFSU2_TR(0x5deab3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dead3;}}
}
B5deab5:L5deab5:{c.instructions+=2;NFSU2_TR(0x5deab5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5deab9:{NFSU2_TR(0x5deab9);
{goto L5dead3;}
}
B5deabb:L5deabb:{c.instructions+=4;NFSU2_TR(0x5deabb);
__builtin_memmove((R+4),gp(0x883db0),4);
}
B5deac1:{NFSU2_TR(0x5deac1);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5deac4:{NFSU2_TR(0x5deac4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B5deac6:{NFSU2_TR(0x5deac6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dea88u);}goto L5dea88;}
}
B5deac8:L5deac8:{c.instructions+=2;NFSU2_TR(0x5deac8);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xfffffff6ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5deacd:{NFSU2_TR(0x5deacd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dead3;}}
}
B5deacf:L5deacf:{c.instructions+=1;NFSU2_TR(0x5deacf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dead3:L5dead3:{c.instructions+=4;NFSU2_TR(0x5dead3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5dead7:{NFSU2_TR(0x5dead7);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5dead8:{NFSU2_TR(0x5dead8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5deada:{NFSU2_TR(0x5deada);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dea60u);}goto L5dea60;}}
}
B5deadc:L5deadc:{c.instructions+=3;NFSU2_TR(0x5deadc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5deae0:{NFSU2_TR(0x5deae0);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5deae4:{NFSU2_TR(0x5deae4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5deae8:L5deae8:{c.instructions+=3;NFSU2_TR(0x5deae8);
w4(R+8,u32(0xfffffff6ull));
}
B5deaed:{NFSU2_TR(0x5deaed);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5deaef:{NFSU2_TR(0x5deaef);
if(r1(R+518)){{goto L5deb6f;}}
}
B5deaf1:L5deaf1:{c.instructions+=2;NFSU2_TR(0x5deaf1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5deaf3:{NFSU2_TR(0x5deaf3);
if(r1(R+518)){{goto L5deaf7;}}
}
B5deaf5:L5deaf5:{c.instructions+=1;NFSU2_TR(0x5deaf5);
__builtin_memmove((R+8),(R+24),4);
}
B5deaf7:L5deaf7:{c.instructions+=2;NFSU2_TR(0x5deaf7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffff6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5deafa:{NFSU2_TR(0x5deafa);
if(r1(R+518)){{goto L5deb10;}}
}
B5deafc:L5deafc:{c.instructions+=4;NFSU2_TR(0x5deafc);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+12),(U+8),2);
}
B5deb01:{NFSU2_TR(0x5deb01);
u8 U[14];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+24),(U+12),2);
}
B5deb06:{NFSU2_TR(0x5deb06);
u8 U[14];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),2);
s2(u32(r4(U+8)),r2(U+12));
}
B5deb0b:{NFSU2_TR(0x5deb0b);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),2);
s2(u32(r4(U+4)),r2(U+8));
}
B5deb10:L5deb10:{c.instructions+=2;NFSU2_TR(0x5deb10);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffff6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5deb13:{NFSU2_TR(0x5deb13);
if(r1(R+518)){{goto L5deb29;}}
}
B5deb15:L5deb15:{c.instructions+=4;NFSU2_TR(0x5deb15);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+24),(U+8),2);
}
B5deb1a:{NFSU2_TR(0x5deb1a);
u8 U[14];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+0),(U+12),2);
}
B5deb1f:{NFSU2_TR(0x5deb1f);
u8 U[14];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),2);
s2(u32(r4(U+8)),r2(U+12));
}
B5deb24:{NFSU2_TR(0x5deb24);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),2);
s2(u32(r4(U+4)),r2(U+8));
}
B5deb29:L5deb29:{c.instructions+=7;NFSU2_TR(0x5deb29);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5deb2d:{NFSU2_TR(0x5deb2d);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5deb31:{NFSU2_TR(0x5deb31);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5deb32:{NFSU2_TR(0x5deb32);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x38ull))));
}
B5deb35:{NFSU2_TR(0x5deb35);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5deb37:{NFSU2_TR(0x5deb37);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5deb3b:{NFSU2_TR(0x5deb3b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dea00u);}goto L5dea00;}}
}
B5deb41:L5deb41:{c.instructions+=1;NFSU2_TR(0x5deb41);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5deb45:L5deb45:{c.instructions+=9;NFSU2_TR(0x5deb45);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5deb49:{NFSU2_TR(0x5deb49);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5deb4d:{NFSU2_TR(0x5deb4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1784ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5deb53:{NFSU2_TR(0x5deb53);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5deb54:{NFSU2_TR(0x5deb54);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5deb57:{NFSU2_TR(0x5deb57);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5deb59:{NFSU2_TR(0x5deb59);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5deb5d:{NFSU2_TR(0x5deb5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5deb61:{NFSU2_TR(0x5deb61);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5de9c0u);}goto L5de9c0;}}
}
B5deb67:L5deb67:{c.instructions+=4;NFSU2_TR(0x5deb67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5deb68:{NFSU2_TR(0x5deb68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5deb69:{NFSU2_TR(0x5deb69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5deb6a:{NFSU2_TR(0x5deb6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5deb6b:L5deb6b:{c.instructions+=2;NFSU2_TR(0x5deb6b);
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
B5deb6e:{NFSU2_TR(0x5deb6e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5deb6f:L5deb6f:{c.instructions+=2;NFSU2_TR(0x5deb6f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffff6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5deb72:{NFSU2_TR(0x5deb72);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5deb29u);}goto L5deb29;}}
}
B5deb74:L5deb74:{c.instructions+=2;NFSU2_TR(0x5deb74);
__builtin_memmove((R+0),(R+24),4);
}
B5deb76:{NFSU2_TR(0x5deb76);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5deaf7u);}goto L5deaf7;}
}
B5deb80:L5deb80:{c.instructions+=4;NFSU2_TR(0x5deb80);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5deb84:{NFSU2_TR(0x5deb84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5deb86:{NFSU2_TR(0x5deb86);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34121ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5deb8b:{NFSU2_TR(0x5deb8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5debc6;}}
}
B5deb8d:L5deb8d:{c.instructions+=3;NFSU2_TR(0x5deb8d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5deb8e:{NFSU2_TR(0x5deb8e);
w4(R+4,u32(0x88a320ull));
}
B5deb93:{NFSU2_TR(0x5deb93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5deb98ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5de1c0u);}goto L5de1c0;}
}
B5deb98:L5deb98:{c.instructions+=3;NFSU2_TR(0x5deb98);
__builtin_memmove((R+0),gp(0x8650b0),4);
}
B5deb9d:{NFSU2_TR(0x5deb9d);
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
B5deb9f:{NFSU2_TR(0x5deb9f);
if(r1(R+518)){{goto L5debc0;}}
}
B5deba1:L5deba1:{c.instructions+=3;NFSU2_TR(0x5deba1);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B5deba7:{NFSU2_TR(0x5deba7);
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
B5deba9:{NFSU2_TR(0x5deba9);
if(r1(R+518)){{goto L5debc0;}}
}
B5debab:L5debab:{c.instructions+=3;NFSU2_TR(0x5debab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5debad:{NFSU2_TR(0x5debad);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5debb0:{NFSU2_TR(0x5debb0);
if(r1(R+518)){{goto L5debb7;}}
}
B5debb2:L5debb2:{c.instructions+=2;NFSU2_TR(0x5debb2);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x7ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5debb5:{NFSU2_TR(0x5debb5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5debc0;}}
}
B5debb7:L5debb7:{c.instructions+=3;NFSU2_TR(0x5debb7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5debb9:{NFSU2_TR(0x5debb9);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5debbb:{NFSU2_TR(0x5debbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5debc0ull));
TAIL_STATIC(0x5f41e0u,5f4);
}
B5debc0:L5debc0:{c.instructions+=2;NFSU2_TR(0x5debc0);
w4(R+0,u32(0x1ull));
}
B5debc5:{NFSU2_TR(0x5debc5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5debc6:L5debc6:{c.instructions+=2;NFSU2_TR(0x5debc6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34122ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5debcb:{NFSU2_TR(0x5debcb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5debf0;}}
}
B5debcd:L5debcd:{c.instructions+=9;NFSU2_TR(0x5debcd);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B5debd0:{NFSU2_TR(0x5debd0);
__builtin_memmove(gp(0x883db0),(R+0),4);
}
B5debd5:{NFSU2_TR(0x5debd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5debd8:{NFSU2_TR(0x5debd8);
u8 U[6];
w1(R+512,u8((r4(R+4))<(u32(0x4ull))));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5debdb:{NFSU2_TR(0x5debdb);
u8 U[48];
w4(U+40,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
__builtin_memmove((U+44),(R+4),4);
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+40))));
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
B5debde:{NFSU2_TR(0x5debde);
__builtin_memmove(gp(0x883db4),(R+4),4);
}
B5debe4:{NFSU2_TR(0x5debe4);
__builtin_memmove(gp(0x883db8),(R+4),4);
}
B5debea:{NFSU2_TR(0x5debea);
w4(R+0,u32(0x1ull));
}
B5debef:{NFSU2_TR(0x5debef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5debf0:L5debf0:{c.instructions+=2;NFSU2_TR(0x5debf0);
u8 U[10];
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x34123ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5debf5:{NFSU2_TR(0x5debf5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dec17;}}
}
B5debf7:L5debf7:{c.instructions+=8;NFSU2_TR(0x5debf7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5debfa:{NFSU2_TR(0x5debfa);
__builtin_memmove(gp(0x883dbc),(R+8),4);
}
B5dec00:{NFSU2_TR(0x5dec00);
w4(R+0,u32(0x76b981dbull));
}
B5dec05:{NFSU2_TR(0x5dec05);
u8 U[32];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w8(U+8,u64(r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(r4(U+4)));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(u64(r8(U+24))>>32));
w1(R+512,u8((r4(R+8))!=(u32(0x0ull))));
w4(R+0,u32(r8(U+24)));
}
B5dec08:{NFSU2_TR(0x5dec08);
u8 U[48];
w4(U+40,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
__builtin_memmove((U+44),(R+8),4);
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+40))));
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
B5dec0b:{NFSU2_TR(0x5dec0b);
__builtin_memmove(gp(0x883dc0),(R+8),4);
}
B5dec11:{NFSU2_TR(0x5dec11);
w4(R+0,u32(0x1ull));
}
B5dec16:{NFSU2_TR(0x5dec16);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dec17:L5dec17:{c.instructions+=2;NFSU2_TR(0x5dec17);
u8 U[10];
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x34124ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5dec1c:{NFSU2_TR(0x5dec1c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dec3d;}}
}
B5dec1e:L5dec1e:{c.instructions+=8;NFSU2_TR(0x5dec1e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5dec21:{NFSU2_TR(0x5dec21);
__builtin_memmove(gp(0x883dc4),(R+0),4);
}
B5dec26:{NFSU2_TR(0x5dec26);
w4(R+0,u32(0x3e0f83e1ull));
}
B5dec2b:{NFSU2_TR(0x5dec2b);
u8 U[32];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w8(U+8,u64(r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(r4(U+4)));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(u64(r8(U+24))>>32));
w1(R+512,u8((r4(R+8))!=(u32(0x0ull))));
w4(R+0,u32(r8(U+24)));
}
B5dec2e:{NFSU2_TR(0x5dec2e);
u8 U[48];
w4(U+40,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
__builtin_memmove((U+44),(R+8),4);
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+40))));
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
B5dec31:{NFSU2_TR(0x5dec31);
__builtin_memmove(gp(0x883dc8),(R+8),4);
}
B5dec37:{NFSU2_TR(0x5dec37);
w4(R+0,u32(0x1ull));
}
B5dec3c:{NFSU2_TR(0x5dec3c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dec3d:L5dec3d:{c.instructions+=2;NFSU2_TR(0x5dec3d);
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
B5dec3f:{NFSU2_TR(0x5dec3f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dec40:L5dec40:{c.instructions+=4;NFSU2_TR(0x5dec40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dec41:{NFSU2_TR(0x5dec41);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dec42:{NFSU2_TR(0x5dec42);
__builtin_memmove((R+24),(R+4),4);
}
B5dec44:{NFSU2_TR(0x5dec44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dec49ull));
TAIL_STATIC(0x5d9a00u,5d9);
}
B5dec49:L5dec49:{c.instructions+=4;NFSU2_TR(0x5dec49);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5dec4c:{NFSU2_TR(0x5dec4c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5dec4e:{NFSU2_TR(0x5dec4e);
__builtin_memmove((R+28),(R+8),4);
}
B5dec50:{NFSU2_TR(0x5dec50);
w4(R+4,u32(0x107ull));
}
B5dec55:L5dec55:{c.instructions+=1;NFSU2_TR(0x5dec55);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5dec57;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dec55u);}goto L5dec55;}
}
B5dec57:L5dec57:{c.instructions+=15;NFSU2_TR(0x5dec57);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
s4(u32(r4(R+8)),r4(U+0));
}
B5dec5d:{NFSU2_TR(0x5dec5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dec64:{NFSU2_TR(0x5dec64);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
w4(U+4,u32(0x43000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dec6b:{NFSU2_TR(0x5dec6b);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5dec6d:{NFSU2_TR(0x5dec6d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x440ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dec73:{NFSU2_TR(0x5dec73);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5dec75:{NFSU2_TR(0x5dec75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dec78:{NFSU2_TR(0x5dec78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dec7b:{NFSU2_TR(0x5dec7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dec7e:{NFSU2_TR(0x5dec7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dec81:{NFSU2_TR(0x5dec81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dec84:{NFSU2_TR(0x5dec84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x434ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dec8a:{NFSU2_TR(0x5dec8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x438ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dec90:{NFSU2_TR(0x5dec90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x43cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dec96:{NFSU2_TR(0x5dec96);
w4(R+4,u32(0x16ull));
}
B5dec9b:L5dec9b:{c.instructions+=1;NFSU2_TR(0x5dec9b);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5dec9d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dec9bu);}goto L5dec9b;}
}
B5dec9d:L5dec9d:{c.instructions+=5;NFSU2_TR(0x5dec9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dec9e:{NFSU2_TR(0x5dec9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x498ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5deca4:{NFSU2_TR(0x5deca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x49cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5decaa:{NFSU2_TR(0x5decaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5decab:{NFSU2_TR(0x5decab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5decb0:L5decb0:{c.instructions+=9;NFSU2_TR(0x5decb0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5decb1:{NFSU2_TR(0x5decb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5decb5:{NFSU2_TR(0x5decb5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5decb6:{NFSU2_TR(0x5decb6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5decb7:{NFSU2_TR(0x5decb7);
u8 U[4];
w4(U+0,u32(0x7a5278ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5decbc:{NFSU2_TR(0x5decbc);
__builtin_memmove((R+28),(R+4),4);
}
B5decbe:{NFSU2_TR(0x5decbe);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5decc0:{NFSU2_TR(0x5decc0);
__builtin_memmove((R+4),(R+12),4);
}
B5decc2:{NFSU2_TR(0x5decc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5decc7ull));
TAIL_STATIC(0x578ce0u,578);
}
B5decc7:L5decc7:{c.instructions+=2;NFSU2_TR(0x5decc7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5decc9:{NFSU2_TR(0x5decc9);
__builtin_memmove((R+16),(R+16),4);
}
B5decd0:L5decd0:{c.instructions+=4;NFSU2_TR(0x5decd0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5decd2:{NFSU2_TR(0x5decd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x46cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5decd8:{NFSU2_TR(0x5decd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x470ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5decde:{NFSU2_TR(0x5decde);
if(r1(R+518)){{goto L5dece6;}}
}
B5dece0:L5dece0:{c.instructions+=2;NFSU2_TR(0x5dece0);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5dece4:{NFSU2_TR(0x5dece4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B5dece6:L5dece6:{c.instructions+=2;NFSU2_TR(0x5dece6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5dece8:{NFSU2_TR(0x5dece8);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5decfd;}}
}
B5decea:L5decea:{c.instructions+=3;NFSU2_TR(0x5decea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5decec:{NFSU2_TR(0x5decec);
__builtin_memmove((R+24),(R+0),4);
}
B5decee:{NFSU2_TR(0x5decee);
if(r1(R+518)){{goto L5decfd;}}
}
B5decf0:L5decf0:{c.instructions+=4;NFSU2_TR(0x5decf0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1aull))));
}
B5decf3:{NFSU2_TR(0x5decf3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5decf4:{NFSU2_TR(0x5decf4);
__builtin_memmove((R+4),(R+12),4);
}
B5decf6:{NFSU2_TR(0x5decf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5decfbull));
TAIL_STATIC(0x571710u,571);
}
B5decfb:L5decfb:{c.instructions+=1;NFSU2_TR(0x5decfb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5decd0u);}goto L5decd0;}
}
B5decfd:L5decfd:{c.instructions+=2;NFSU2_TR(0x5decfd);
__builtin_memmove((R+4),(R+12),4);
}
B5decff:{NFSU2_TR(0x5decff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ded04ull));
TAIL_STATIC(0x578d90u,578);
}
B5ded04:L5ded04:{c.instructions+=4;NFSU2_TR(0x5ded04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ded05:{NFSU2_TR(0x5ded05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ded06:{NFSU2_TR(0x5ded06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ded07:{NFSU2_TR(0x5ded07);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ded10:L5ded10:{c.instructions+=9;NFSU2_TR(0x5ded10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ded11:{NFSU2_TR(0x5ded11);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ded12:{NFSU2_TR(0x5ded12);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5ded16:{NFSU2_TR(0x5ded16);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ded18:{NFSU2_TR(0x5ded18);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ded1a:{NFSU2_TR(0x5ded1a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B5ded1d:{NFSU2_TR(0x5ded1d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ded1e:{NFSU2_TR(0x5ded1e);
__builtin_memmove((R+24),(R+4),4);
}
B5ded20:{NFSU2_TR(0x5ded20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ded25ull));
TAIL_STATIC(0x5d9bf0u,5d9);
}
B5ded25:L5ded25:{c.instructions+=2;NFSU2_TR(0x5ded25);
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
B5ded27:{NFSU2_TR(0x5ded27);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ded52;}}
}
B5ded29:L5ded29:{c.instructions+=5;NFSU2_TR(0x5ded29);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ded2a:{NFSU2_TR(0x5ded2a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ded2c:{NFSU2_TR(0x5ded2c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ded2d:{NFSU2_TR(0x5ded2d);
__builtin_memmove((R+4),(R+24),4);
}
B5ded2f:{NFSU2_TR(0x5ded2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ded34ull));
TAIL_STATIC(0x5d9bf0u,5d9);
}
B5ded34:L5ded34:{c.instructions+=2;NFSU2_TR(0x5ded34);
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
B5ded36:{NFSU2_TR(0x5ded36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ded52;}}
}
B5ded38:L5ded38:{c.instructions+=5;NFSU2_TR(0x5ded38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ded39:{NFSU2_TR(0x5ded39);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ded3b:{NFSU2_TR(0x5ded3b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ded3c:{NFSU2_TR(0x5ded3c);
__builtin_memmove((R+4),(R+24),4);
}
B5ded3e:{NFSU2_TR(0x5ded3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ded43ull));
TAIL_STATIC(0x5d9bf0u,5d9);
}
B5ded43:L5ded43:{c.instructions+=2;NFSU2_TR(0x5ded43);
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
B5ded45:{NFSU2_TR(0x5ded45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ded52;}}
}
B5ded47:L5ded47:{c.instructions+=5;NFSU2_TR(0x5ded47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ded48:{NFSU2_TR(0x5ded48);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ded4a:{NFSU2_TR(0x5ded4a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ded4b:{NFSU2_TR(0x5ded4b);
__builtin_memmove((R+4),(R+24),4);
}
B5ded4d:{NFSU2_TR(0x5ded4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ded52ull));
TAIL_STATIC(0x5d9bf0u,5d9);
}
B5ded52:L5ded52:{c.instructions+=3;NFSU2_TR(0x5ded52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ded53:{NFSU2_TR(0x5ded53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ded54:{NFSU2_TR(0x5ded54);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ded60:L5ded60:{c.instructions+=9;NFSU2_TR(0x5ded60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ded61:{NFSU2_TR(0x5ded61);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ded62:{NFSU2_TR(0x5ded62);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5ded66:{NFSU2_TR(0x5ded66);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ded68:{NFSU2_TR(0x5ded68);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ded6a:{NFSU2_TR(0x5ded6a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B5ded6d:{NFSU2_TR(0x5ded6d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ded6e:{NFSU2_TR(0x5ded6e);
__builtin_memmove((R+24),(R+4),4);
}
B5ded70:{NFSU2_TR(0x5ded70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ded75ull));
TAIL_STATIC(0x5d9bf0u,5d9);
}
B5ded75:L5ded75:{c.instructions+=2;NFSU2_TR(0x5ded75);
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
B5ded77:{NFSU2_TR(0x5ded77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ded84;}}
}
B5ded79:L5ded79:{c.instructions+=5;NFSU2_TR(0x5ded79);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ded7a:{NFSU2_TR(0x5ded7a);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ded7c:{NFSU2_TR(0x5ded7c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ded7d:{NFSU2_TR(0x5ded7d);
__builtin_memmove((R+4),(R+24),4);
}
B5ded7f:{NFSU2_TR(0x5ded7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ded84ull));
TAIL_STATIC(0x5d9bf0u,5d9);
}
B5ded84:L5ded84:{c.instructions+=3;NFSU2_TR(0x5ded84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ded85:{NFSU2_TR(0x5ded85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ded86:{NFSU2_TR(0x5ded86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ded90:L5ded90:{c.instructions+=32;NFSU2_TR(0x5ded90);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ded94:{NFSU2_TR(0x5ded94);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ded95:{NFSU2_TR(0x5ded95);
__builtin_memmove((R+24),(R+4),4);
}
B5ded97:{NFSU2_TR(0x5ded97);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5ded99:{NFSU2_TR(0x5ded99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ded9c:{NFSU2_TR(0x5ded9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ded9f:{NFSU2_TR(0x5ded9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5deda2:{NFSU2_TR(0x5deda2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5deda5:{NFSU2_TR(0x5deda5);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5deda8:{NFSU2_TR(0x5deda8);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dedab:{NFSU2_TR(0x5dedab);
__builtin_memmove((R+0),(R+4),4);
}
B5dedad:{NFSU2_TR(0x5dedad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dedb0:{NFSU2_TR(0x5dedb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dedb3:{NFSU2_TR(0x5dedb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dedb6:{NFSU2_TR(0x5dedb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dedbd:{NFSU2_TR(0x5dedbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dedc0:{NFSU2_TR(0x5dedc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dedc3:{NFSU2_TR(0x5dedc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dedc6:{NFSU2_TR(0x5dedc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dedc9:{NFSU2_TR(0x5dedc9);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dedcc:{NFSU2_TR(0x5dedcc);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5dedcf:{NFSU2_TR(0x5dedcf);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5dedd1:{NFSU2_TR(0x5dedd1);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dedd3:{NFSU2_TR(0x5dedd3);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5dedd6:{NFSU2_TR(0x5dedd6);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5dedd8:{NFSU2_TR(0x5dedd8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5dedda:{NFSU2_TR(0x5dedda);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5deddc:{NFSU2_TR(0x5deddc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5dedde:{NFSU2_TR(0x5dedde);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5dede4:{NFSU2_TR(0x5dede4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5dede6:{NFSU2_TR(0x5dede6);
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
B5dede9:{NFSU2_TR(0x5dede9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dedf8;}}
}
B5dedeb:L5dedeb:{c.instructions+=5;NFSU2_TR(0x5dedeb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dedec:{NFSU2_TR(0x5dedec);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5deded:{NFSU2_TR(0x5deded);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dedee:{NFSU2_TR(0x5dedee);
w4(R+4,u32(0x88f298ull));
}
B5dedf3:{NFSU2_TR(0x5dedf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dedf8ull));
TAIL_STATIC(0x5d9e30u,5d9);
}
B5dedf8:L5dedf8:{c.instructions+=3;NFSU2_TR(0x5dedf8);
__builtin_memmove((R+0),(R+24),4);
}
B5dedfa:{NFSU2_TR(0x5dedfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dedfb:{NFSU2_TR(0x5dedfb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dee00:L5dee00:{c.instructions+=3;NFSU2_TR(0x5dee00);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dee04:{NFSU2_TR(0x5dee04);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x80034147ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5dee0a:{NFSU2_TR(0x5dee0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dee26;}}
}
B5dee0c:L5dee0c:{c.instructions+=2;NFSU2_TR(0x5dee0c);
w4(R+4,u32(0x88f298ull));
}
B5dee11:{NFSU2_TR(0x5dee11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dee16ull));
TAIL_STATIC(0x5d9a00u,5d9);
}
B5dee16:L5dee16:{c.instructions+=2;NFSU2_TR(0x5dee16);
w4(R+4,u32(0x88f298ull));
}
B5dee1b:{NFSU2_TR(0x5dee1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dee20ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dec40u);}goto L5dec40;}
}
B5dee20:L5dee20:{c.instructions+=2;NFSU2_TR(0x5dee20);
w4(R+0,u32(0x1ull));
}
B5dee25:{NFSU2_TR(0x5dee25);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dee26:L5dee26:{c.instructions+=2;NFSU2_TR(0x5dee26);
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
B5dee28:{NFSU2_TR(0x5dee28);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dee30:L5dee30:{c.instructions+=7;NFSU2_TR(0x5dee30);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dee34:{NFSU2_TR(0x5dee34);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dee35:{NFSU2_TR(0x5dee35);
__builtin_memmove((R+24),(R+0),4);
}
B5dee37:{NFSU2_TR(0x5dee37);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B5dee3a:{NFSU2_TR(0x5dee3a);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x1ffcull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B5dee40:{NFSU2_TR(0x5dee40);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dee42:{NFSU2_TR(0x5dee42);
if(r1(R+518)){{goto L5dee7c;}}
}
B5dee44:L5dee44:{c.instructions+=14;NFSU2_TR(0x5dee44);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dee48:{NFSU2_TR(0x5dee48);
__builtin_memmove((R+4),(R+0),4);
}
B5dee4a:{NFSU2_TR(0x5dee4a);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5dee4d:{NFSU2_TR(0x5dee4d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5dee50:{NFSU2_TR(0x5dee50);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffff01ull))));
}
B5dee56:{NFSU2_TR(0x5dee56);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dee57:{NFSU2_TR(0x5dee57);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dee5b:{NFSU2_TR(0x5dee5b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffff01ull))));
}
B5dee60:{NFSU2_TR(0x5dee60);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dee61:{NFSU2_TR(0x5dee61);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dee65:{NFSU2_TR(0x5dee65);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dee66:{NFSU2_TR(0x5dee66);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
}
B5dee6b:{NFSU2_TR(0x5dee6b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dee6c:{NFSU2_TR(0x5dee6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dee71ull));
TAIL_STATIC(0x5da4a0u,5da);
}
B5dee71:L5dee71:{c.instructions+=5;NFSU2_TR(0x5dee71);
w4(R+4,u32(0x80ull));
}
B5dee76:{NFSU2_TR(0x5dee76);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B5dee78:{NFSU2_TR(0x5dee78);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5dee7a:{NFSU2_TR(0x5dee7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dee7b:{NFSU2_TR(0x5dee7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dee7c:L5dee7c:{c.instructions+=13;NFSU2_TR(0x5dee7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dee80:{NFSU2_TR(0x5dee80);
__builtin_memmove((R+8),(R+0),4);
}
B5dee82:{NFSU2_TR(0x5dee82);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5dee85:{NFSU2_TR(0x5dee85);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5dee88:{NFSU2_TR(0x5dee88);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffffff01ull))));
}
B5dee8e:{NFSU2_TR(0x5dee8e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dee8f:{NFSU2_TR(0x5dee8f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffff01ull))));
}
B5dee94:{NFSU2_TR(0x5dee94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dee95:{NFSU2_TR(0x5dee95);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dee99:{NFSU2_TR(0x5dee99);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dee9a:{NFSU2_TR(0x5dee9a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dee9b:{NFSU2_TR(0x5dee9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dee9f:{NFSU2_TR(0x5dee9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5deea4ull));
TAIL_STATIC(0x5da4a0u,5da);
}
B5deea4:L5deea4:{c.instructions+=2;NFSU2_TR(0x5deea4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5deea5:{NFSU2_TR(0x5deea5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5deeb0:L5deeb0:{c.instructions+=5;NFSU2_TR(0x5deeb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5deeb4:{NFSU2_TR(0x5deeb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5deeb8:{NFSU2_TR(0x5deeb8);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffff80ull))));
}
B5deebb:{NFSU2_TR(0x5deebb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5deebc:{NFSU2_TR(0x5deebc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5deec1ull));
TAIL_STATIC(0x5da6d0u,5da);
}
B5deec1:L5deec1:{c.instructions+=1;NFSU2_TR(0x5deec1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5deed0:L5deed0:{c.instructions+=6;NFSU2_TR(0x5deed0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5deed4:{NFSU2_TR(0x5deed4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5deed7:{NFSU2_TR(0x5deed7);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x14ull))));
}
B5deeda:{NFSU2_TR(0x5deeda);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5deedc:{NFSU2_TR(0x5deedc);
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
B5deede:{NFSU2_TR(0x5deede);
if(r1(R+518)){{goto L5deef2;}}
}
B5deee0:L5deee0:{c.instructions+=1;NFSU2_TR(0x5deee0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5deee1:L5deee1:{c.instructions+=3;NFSU2_TR(0x5deee1);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5deee4:{NFSU2_TR(0x5deee4);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5deee6:{NFSU2_TR(0x5deee6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5deeeb;}}
}
B5deee8:L5deee8:{c.instructions+=1;NFSU2_TR(0x5deee8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B5deeeb:L5deeeb:{c.instructions+=3;NFSU2_TR(0x5deeeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5deeed:{NFSU2_TR(0x5deeed);
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
B5deeef:{NFSU2_TR(0x5deeef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5deee1u);}goto L5deee1;}}
}
B5deef1:L5deef1:{c.instructions+=1;NFSU2_TR(0x5deef1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5deef2:L5deef2:{c.instructions+=1;NFSU2_TR(0x5deef2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5def00:L5def00:{c.instructions+=7;NFSU2_TR(0x5def00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5def01:{NFSU2_TR(0x5def01);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5def05:{NFSU2_TR(0x5def05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5def08:{NFSU2_TR(0x5def08);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B5def0b:{NFSU2_TR(0x5def0b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5def0d:{NFSU2_TR(0x5def0d);
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
B5def0f:{NFSU2_TR(0x5def0f);
if(r1(R+518)){{goto L5def27;}}
}
B5def11:L5def11:{c.instructions+=3;NFSU2_TR(0x5def11);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5def14:{NFSU2_TR(0x5def14);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5def16:{NFSU2_TR(0x5def16);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5def21;}}
}
B5def18:L5def18:{c.instructions+=3;NFSU2_TR(0x5def18);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5def1b:{NFSU2_TR(0x5def1b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5def1d:{NFSU2_TR(0x5def1d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5def21;}}
}
B5def1f:L5def1f:{c.instructions+=1;NFSU2_TR(0x5def1f);
__builtin_memmove((R+0),(R+8),4);
}
B5def21:L5def21:{c.instructions+=3;NFSU2_TR(0x5def21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5def23:{NFSU2_TR(0x5def23);
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
B5def25:{NFSU2_TR(0x5def25);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5def11u);}goto L5def11;}}
}
B5def27:L5def27:{c.instructions+=2;NFSU2_TR(0x5def27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5def28:{NFSU2_TR(0x5def28);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5def30:L5def30:{c.instructions+=4;NFSU2_TR(0x5def30);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5def34:{NFSU2_TR(0x5def34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5def35:{NFSU2_TR(0x5def35);
w4(R+4,u32(0x88eb00ull));
}
B5def3a:{NFSU2_TR(0x5def3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5def3full));
TAIL_STATIC(0x5da7a0u,5da);
}
B5def3f:L5def3f:{c.instructions+=1;NFSU2_TR(0x5def3f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5def40:L5def40:{c.instructions+=22;NFSU2_TR(0x5def40);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5def41:{NFSU2_TR(0x5def41);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5def43:{NFSU2_TR(0x5def43);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5def44:{NFSU2_TR(0x5def44);
__builtin_memmove((R+24),(R+4),4);
}
B5def46:{NFSU2_TR(0x5def46);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5def48:{NFSU2_TR(0x5def48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5def4b:{NFSU2_TR(0x5def4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5def4e:{NFSU2_TR(0x5def4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5def51:{NFSU2_TR(0x5def51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5def54:{NFSU2_TR(0x5def54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5def57:{NFSU2_TR(0x5def57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5def5a:{NFSU2_TR(0x5def5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5def5d:{NFSU2_TR(0x5def5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5def60:{NFSU2_TR(0x5def60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5def63:{NFSU2_TR(0x5def63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5def66:{NFSU2_TR(0x5def66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x298ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5def6c:{NFSU2_TR(0x5def6c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x288ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5def72:{NFSU2_TR(0x5def72);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x289ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5def78:{NFSU2_TR(0x5def78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5def7e:{NFSU2_TR(0x5def7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x290ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5def84:{NFSU2_TR(0x5def84);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x294ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5def8a:{NFSU2_TR(0x5def8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5def8full));
TAIL_STATIC(0x5da890u,5da);
}
B5def8f:L5def8f:{c.instructions+=19;NFSU2_TR(0x5def8f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5def95:{NFSU2_TR(0x5def95);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5def9b:{NFSU2_TR(0x5def9b);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B5def9e:{NFSU2_TR(0x5def9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5defa4:{NFSU2_TR(0x5defa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5defaa:{NFSU2_TR(0x5defaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x69cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5defb0:{NFSU2_TR(0x5defb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6a0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5defb6:{NFSU2_TR(0x5defb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6a4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5defbc:{NFSU2_TR(0x5defbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6a8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5defc2:{NFSU2_TR(0x5defc2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6acull))));
__builtin_memmove((R+4),(U+0),4);
}
B5defc8:{NFSU2_TR(0x5defc8);
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
B5defca:{NFSU2_TR(0x5defca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5defcc:{NFSU2_TR(0x5defcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5defcf:{NFSU2_TR(0x5defcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6b4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5defd5:{NFSU2_TR(0x5defd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6b8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5defdb:{NFSU2_TR(0x5defdb);
__builtin_memmove((R+0),(R+24),4);
}
B5defdd:{NFSU2_TR(0x5defdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5defde:{NFSU2_TR(0x5defde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5defdf:{NFSU2_TR(0x5defdf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5defe0:L5defe0:{c.instructions+=6;NFSU2_TR(0x5defe0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5defe4:{NFSU2_TR(0x5defe4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5defe6:{NFSU2_TR(0x5defe6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34110ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5defeb:{NFSU2_TR(0x5defeb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5defec:{NFSU2_TR(0x5defec);
__builtin_memmove((R+24),(R+4),4);
}
B5defee:{NFSU2_TR(0x5defee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5df005u,5df);}
}
B5deff0:L5deff0:{c.instructions+=1;NFSU2_TR(0x5deff0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5deff5ull));
TAIL_STATIC(0x5db080u,5db);
}
B5deff5:L5deff5:{c.instructions+=4;NFSU2_TR(0x5deff5);
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
B5deff7:{NFSU2_TR(0x5deff7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5deff9:{NFSU2_TR(0x5deff9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5deffc:{NFSU2_TR(0x5deffc);
w4(R+0,u32(0x1ull));
TAIL_STATIC(0x5df001u,5df);
}
XIT:NFSU2_TR_EXIT(0x5de,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
