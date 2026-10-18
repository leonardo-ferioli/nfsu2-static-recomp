#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_6d8(u8* __restrict R,Cpu& c);
u32 body_6d9(u8* __restrict R,Cpu& c);
u32 body_6dc(u8* __restrict R,Cpu& c);
u32 body_6dd(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_81c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6db,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6db,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6db(u8* __restrict R,Cpu& c);
u32 page_6db(Cpu& c){return body_6db(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6db(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6db005:goto L6db005;
case 0x6db00a:c.instructions+=2;goto B6db00a;
case 0x6db00d:c.instructions+=1;goto B6db00d;
case 0x6db00f:goto L6db00f;
case 0x6db011:c.instructions+=2;goto B6db011;
case 0x6db018:c.instructions+=1;goto B6db018;
case 0x6db01a:goto L6db01a;
case 0x6db01b:c.instructions+=8;goto B6db01b;
case 0x6db022:c.instructions+=7;goto B6db022;
case 0x6db024:c.instructions+=6;goto B6db024;
case 0x6db02a:c.instructions+=5;goto B6db02a;
case 0x6db02c:c.instructions+=4;goto B6db02c;
case 0x6db02e:c.instructions+=3;goto B6db02e;
case 0x6db02f:c.instructions+=2;goto B6db02f;
case 0x6db030:c.instructions+=1;goto B6db030;
case 0x6db036:goto L6db036;
case 0x6db038:goto L6db038;
case 0x6db03a:c.instructions+=3;goto B6db03a;
case 0x6db03d:c.instructions+=2;goto B6db03d;
case 0x6db044:c.instructions+=1;goto B6db044;
case 0x6db046:goto L6db046;
case 0x6db04d:c.instructions+=9;goto B6db04d;
case 0x6db050:c.instructions+=8;goto B6db050;
case 0x6db055:c.instructions+=7;goto B6db055;
case 0x6db057:c.instructions+=6;goto B6db057;
case 0x6db058:c.instructions+=5;goto B6db058;
case 0x6db05a:c.instructions+=4;goto B6db05a;
case 0x6db05c:c.instructions+=3;goto B6db05c;
case 0x6db05d:c.instructions+=2;goto B6db05d;
case 0x6db05e:c.instructions+=1;goto B6db05e;
case 0x6db064:goto L6db064;
case 0x6db06a:c.instructions+=6;goto B6db06a;
case 0x6db06c:c.instructions+=5;goto B6db06c;
case 0x6db072:c.instructions+=4;goto B6db072;
case 0x6db079:c.instructions+=3;goto B6db079;
case 0x6db07b:c.instructions+=2;goto B6db07b;
case 0x6db07e:c.instructions+=1;goto B6db07e;
case 0x6db080:goto L6db080;
case 0x6db086:c.instructions+=3;goto B6db086;
case 0x6db088:c.instructions+=2;goto B6db088;
case 0x6db08b:c.instructions+=1;goto B6db08b;
case 0x6db08d:goto L6db08d;
case 0x6db093:c.instructions+=3;goto B6db093;
case 0x6db099:c.instructions+=2;goto B6db099;
case 0x6db0a0:c.instructions+=1;goto B6db0a0;
case 0x6db0a2:goto L6db0a2;
case 0x6db0a5:c.instructions+=3;goto B6db0a5;
case 0x6db0a7:c.instructions+=2;goto B6db0a7;
case 0x6db0aa:c.instructions+=1;goto B6db0aa;
case 0x6db0ac:goto L6db0ac;
case 0x6db0af:c.instructions+=2;goto B6db0af;
case 0x6db0b6:c.instructions+=1;goto B6db0b6;
case 0x6db0b9:goto L6db0b9;
case 0x6db0be:c.instructions+=7;goto B6db0be;
case 0x6db0c0:c.instructions+=6;goto B6db0c0;
case 0x6db0c1:c.instructions+=5;goto B6db0c1;
case 0x6db0c3:c.instructions+=4;goto B6db0c3;
case 0x6db0c5:c.instructions+=3;goto B6db0c5;
case 0x6db0c6:c.instructions+=2;goto B6db0c6;
case 0x6db0c7:c.instructions+=1;goto B6db0c7;
case 0x6db0cd:goto L6db0cd;
case 0x6db0ce:c.instructions+=1;goto B6db0ce;
case 0x6db0d0:goto L6db0d0;
case 0x6db0d2:c.instructions+=4;goto B6db0d2;
case 0x6db0d6:c.instructions+=3;goto B6db0d6;
case 0x6db0d8:c.instructions+=2;goto B6db0d8;
case 0x6db0da:c.instructions+=1;goto B6db0da;
case 0x6db0e0:goto L6db0e0;
case 0x6db0e1:c.instructions+=3;goto B6db0e1;
case 0x6db0e4:c.instructions+=2;goto B6db0e4;
case 0x6db0e9:c.instructions+=1;goto B6db0e9;
case 0x6db0ee:goto L6db0ee;
case 0x6db0f0:goto L6db0f0;
case 0x6db0f3:c.instructions+=2;goto B6db0f3;
case 0x6db0f8:c.instructions+=1;goto B6db0f8;
case 0x6db0fd:goto L6db0fd;
case 0x6db0ff:goto L6db0ff;
case 0x6db101:c.instructions+=2;goto B6db101;
case 0x6db106:c.instructions+=1;goto B6db106;
case 0x6db10b:goto L6db10b;
case 0x6db10d:goto L6db10d;
case 0x6db110:c.instructions+=2;goto B6db110;
case 0x6db115:c.instructions+=1;goto B6db115;
case 0x6db11a:goto L6db11a;
case 0x6db11c:goto L6db11c;
case 0x6db11f:c.instructions+=2;goto B6db11f;
case 0x6db124:c.instructions+=1;goto B6db124;
case 0x6db129:goto L6db129;
case 0x6db12b:goto L6db12b;
case 0x6db12e:c.instructions+=2;goto B6db12e;
case 0x6db133:c.instructions+=1;goto B6db133;
case 0x6db138:goto L6db138;
case 0x6db13a:goto L6db13a;
case 0x6db13d:c.instructions+=2;goto B6db13d;
case 0x6db142:c.instructions+=1;goto B6db142;
case 0x6db147:goto L6db147;
case 0x6db149:goto L6db149;
case 0x6db14c:c.instructions+=2;goto B6db14c;
case 0x6db151:c.instructions+=1;goto B6db151;
case 0x6db156:goto L6db156;
case 0x6db158:goto L6db158;
case 0x6db15d:c.instructions+=2;goto B6db15d;
case 0x6db15f:c.instructions+=1;goto B6db15f;
case 0x6db164:goto L6db164;
case 0x6db166:goto L6db166;
case 0x6db167:c.instructions+=1;goto B6db167;
case 0x6db170:goto L6db170;
case 0x6db171:c.instructions+=5;goto B6db171;
case 0x6db177:c.instructions+=4;goto B6db177;
case 0x6db178:c.instructions+=3;goto B6db178;
case 0x6db17a:c.instructions+=2;goto B6db17a;
case 0x6db17c:c.instructions+=1;goto B6db17c;
case 0x6db17e:goto L6db17e;
case 0x6db180:goto L6db180;
case 0x6db182:c.instructions+=2;goto B6db182;
case 0x6db184:c.instructions+=1;goto B6db184;
case 0x6db186:goto L6db186;
case 0x6db189:c.instructions+=3;goto B6db189;
case 0x6db18c:c.instructions+=2;goto B6db18c;
case 0x6db18e:c.instructions+=1;goto B6db18e;
case 0x6db190:goto L6db190;
case 0x6db192:c.instructions+=2;goto B6db192;
case 0x6db193:c.instructions+=1;goto B6db193;
case 0x6db196:goto L6db196;
case 0x6db198:c.instructions+=2;goto B6db198;
case 0x6db19b:c.instructions+=1;goto B6db19b;
case 0x6db19e:goto L6db19e;
case 0x6db1a0:c.instructions+=4;goto B6db1a0;
case 0x6db1a3:c.instructions+=3;goto B6db1a3;
case 0x6db1a6:c.instructions+=2;goto B6db1a6;
case 0x6db1a8:c.instructions+=1;goto B6db1a8;
case 0x6db1aa:goto L6db1aa;
case 0x6db1ac:c.instructions+=2;goto B6db1ac;
case 0x6db1ad:c.instructions+=1;goto B6db1ad;
case 0x6db1b0:goto L6db1b0;
case 0x6db1b2:c.instructions+=2;goto B6db1b2;
case 0x6db1b5:c.instructions+=1;goto B6db1b5;
case 0x6db1b8:goto L6db1b8;
case 0x6db1bb:c.instructions+=2;goto B6db1bb;
case 0x6db1bd:c.instructions+=1;goto B6db1bd;
case 0x6db1bf:goto L6db1bf;
case 0x6db1c0:c.instructions+=2;goto B6db1c0;
case 0x6db1c1:c.instructions+=1;goto B6db1c1;
case 0x6db1d0:goto L6db1d0;
case 0x6db1d1:c.instructions+=4;goto B6db1d1;
case 0x6db1d2:c.instructions+=3;goto B6db1d2;
case 0x6db1d8:c.instructions+=2;goto B6db1d8;
case 0x6db1da:c.instructions+=1;goto B6db1da;
case 0x6db1e0:goto L6db1e0;
case 0x6db1e1:c.instructions+=1;goto B6db1e1;
case 0x6db1e2:goto L6db1e2;
case 0x6db1e4:c.instructions+=2;goto B6db1e4;
case 0x6db1e6:c.instructions+=1;goto B6db1e6;
case 0x6db1ec:goto L6db1ec;
case 0x6db1f0:c.instructions+=1;goto B6db1f0;
case 0x6db1f2:goto L6db1f2;
case 0x6db1f5:c.instructions+=16;goto B6db1f5;
case 0x6db1fb:c.instructions+=15;goto B6db1fb;
case 0x6db1fd:c.instructions+=14;goto B6db1fd;
case 0x6db200:c.instructions+=13;goto B6db200;
case 0x6db201:c.instructions+=12;goto B6db201;
case 0x6db204:c.instructions+=11;goto B6db204;
case 0x6db206:c.instructions+=10;goto B6db206;
case 0x6db207:c.instructions+=9;goto B6db207;
case 0x6db20a:c.instructions+=8;goto B6db20a;
case 0x6db20c:c.instructions+=7;goto B6db20c;
case 0x6db20d:c.instructions+=6;goto B6db20d;
case 0x6db210:c.instructions+=5;goto B6db210;
case 0x6db213:c.instructions+=4;goto B6db213;
case 0x6db214:c.instructions+=3;goto B6db214;
case 0x6db215:c.instructions+=2;goto B6db215;
case 0x6db216:c.instructions+=1;goto B6db216;
case 0x6db219:goto L6db219;
case 0x6db21b:c.instructions+=1;goto B6db21b;
case 0x6db21d:goto L6db21d;
case 0x6db220:c.instructions+=1;goto B6db220;
case 0x6db227:goto L6db227;
case 0x6db22b:c.instructions+=1;goto B6db22b;
case 0x6db22d:goto L6db22d;
case 0x6db231:c.instructions+=2;goto B6db231;
case 0x6db232:c.instructions+=1;goto B6db232;
case 0x6db237:goto L6db237;
case 0x6db239:c.instructions+=1;goto B6db239;
case 0x6db23e:goto L6db23e;
case 0x6db240:c.instructions+=2;goto B6db240;
case 0x6db243:c.instructions+=1;goto B6db243;
case 0x6db248:goto L6db248;
case 0x6db24b:c.instructions+=14;goto B6db24b;
case 0x6db251:c.instructions+=13;goto B6db251;
case 0x6db253:c.instructions+=12;goto B6db253;
case 0x6db256:c.instructions+=11;goto B6db256;
case 0x6db257:c.instructions+=10;goto B6db257;
case 0x6db25b:c.instructions+=9;goto B6db25b;
case 0x6db25c:c.instructions+=8;goto B6db25c;
case 0x6db25f:c.instructions+=7;goto B6db25f;
case 0x6db260:c.instructions+=6;goto B6db260;
case 0x6db263:c.instructions+=5;goto B6db263;
case 0x6db266:c.instructions+=4;goto B6db266;
case 0x6db267:c.instructions+=3;goto B6db267;
case 0x6db268:c.instructions+=2;goto B6db268;
case 0x6db269:c.instructions+=1;goto B6db269;
case 0x6db26c:goto L6db26c;
case 0x6db26f:c.instructions+=2;goto B6db26f;
case 0x6db271:c.instructions+=1;goto B6db271;
case 0x6db277:goto L6db277;
case 0x6db278:c.instructions+=1;goto B6db278;
case 0x6db279:goto L6db279;
case 0x6db27a:c.instructions+=2;goto B6db27a;
case 0x6db27b:c.instructions+=1;goto B6db27b;
case 0x6db280:goto L6db280;
case 0x6db284:c.instructions+=3;goto B6db284;
case 0x6db286:c.instructions+=2;goto B6db286;
case 0x6db288:c.instructions+=1;goto B6db288;
case 0x6db290:goto L6db290;
case 0x6db294:c.instructions+=3;goto B6db294;
case 0x6db297:c.instructions+=2;goto B6db297;
case 0x6db299:c.instructions+=1;goto B6db299;
case 0x6db2a0:goto L6db2a0;
case 0x6db2a5:c.instructions+=3;goto B6db2a5;
case 0x6db2a8:c.instructions+=2;goto B6db2a8;
case 0x6db2aa:c.instructions+=1;goto B6db2aa;
case 0x6db2b0:goto L6db2b0;
case 0x6db2b4:c.instructions+=3;goto B6db2b4;
case 0x6db2b7:c.instructions+=2;goto B6db2b7;
case 0x6db2b9:c.instructions+=1;goto B6db2b9;
case 0x6db2c0:goto L6db2c0;
case 0x6db2c4:c.instructions+=3;goto B6db2c4;
case 0x6db2c7:c.instructions+=2;goto B6db2c7;
case 0x6db2ca:c.instructions+=1;goto B6db2ca;
case 0x6db2cc:goto L6db2cc;
case 0x6db2d1:c.instructions+=1;goto B6db2d1;
case 0x6db2d8:goto L6db2d8;
case 0x6db2df:c.instructions+=3;goto B6db2df;
case 0x6db2e2:c.instructions+=2;goto B6db2e2;
case 0x6db2e5:c.instructions+=1;goto B6db2e5;
case 0x6db2e8:goto L6db2e8;
case 0x6db2ef:c.instructions+=3;goto B6db2ef;
case 0x6db2f6:c.instructions+=2;goto B6db2f6;
case 0x6db2f9:c.instructions+=1;goto B6db2f9;
case 0x6db2fc:goto L6db2fc;
case 0x6db303:c.instructions+=3;goto B6db303;
case 0x6db30a:c.instructions+=2;goto B6db30a;
case 0x6db30d:c.instructions+=1;goto B6db30d;
case 0x6db310:goto L6db310;
case 0x6db315:c.instructions+=4;goto B6db315;
case 0x6db318:c.instructions+=3;goto B6db318;
case 0x6db31b:c.instructions+=2;goto B6db31b;
case 0x6db322:c.instructions+=1;goto B6db322;
case 0x6db325:goto L6db325;
case 0x6db32c:c.instructions+=3;goto B6db32c;
case 0x6db32f:c.instructions+=2;goto B6db32f;
case 0x6db332:c.instructions+=1;goto B6db332;
case 0x6db335:goto L6db335;
case 0x6db33c:c.instructions+=3;goto B6db33c;
case 0x6db33f:c.instructions+=2;goto B6db33f;
case 0x6db342:c.instructions+=1;goto B6db342;
case 0x6db345:goto L6db345;
case 0x6db347:c.instructions+=1;goto B6db347;
case 0x6db370:goto L6db370;
case 0x6db375:c.instructions+=3;goto B6db375;
case 0x6db378:c.instructions+=2;goto B6db378;
case 0x6db37a:c.instructions+=1;goto B6db37a;
case 0x6db380:goto L6db380;
case 0x6db381:c.instructions+=7;goto B6db381;
case 0x6db382:c.instructions+=6;goto B6db382;
case 0x6db384:c.instructions+=5;goto B6db384;
case 0x6db386:c.instructions+=4;goto B6db386;
case 0x6db38b:c.instructions+=3;goto B6db38b;
case 0x6db38e:c.instructions+=2;goto B6db38e;
case 0x6db390:c.instructions+=1;goto B6db390;
case 0x6db392:goto L6db392;
case 0x6db393:c.instructions+=1;goto B6db393;
case 0x6db395:goto L6db395;
case 0x6db39c:c.instructions+=2;goto B6db39c;
case 0x6db39e:c.instructions+=1;goto B6db39e;
case 0x6db3a0:goto L6db3a0;
case 0x6db3a5:c.instructions+=5;goto B6db3a5;
case 0x6db3a7:c.instructions+=4;goto B6db3a7;
case 0x6db3a9:c.instructions+=3;goto B6db3a9;
case 0x6db3aa:c.instructions+=2;goto B6db3aa;
case 0x6db3ab:c.instructions+=1;goto B6db3ab;
case 0x6db3b1:goto L6db3b1;
case 0x6db3bc:c.instructions+=3;goto B6db3bc;
case 0x6db3bd:c.instructions+=2;goto B6db3bd;
case 0x6db3c0:c.instructions+=1;goto B6db3c0;
case 0x6db3c2:goto L6db3c2;
case 0x6db3c3:goto L6db3c3;
case 0x6db3c6:c.instructions+=2;goto B6db3c6;
case 0x6db3cc:c.instructions+=1;goto B6db3cc;
case 0x6db3ce:goto L6db3ce;
case 0x6db3d1:c.instructions+=1;goto B6db3d1;
case 0x6db3d3:goto L6db3d3;
case 0x6db3d7:c.instructions+=2;goto B6db3d7;
case 0x6db3d8:c.instructions+=1;goto B6db3d8;
case 0x6db3dd:goto L6db3dd;
case 0x6db3df:c.instructions+=1;goto B6db3df;
case 0x6db3e4:goto L6db3e4;
case 0x6db3e6:c.instructions+=1;goto B6db3e6;
case 0x6db3eb:goto L6db3eb;
case 0x6db3ef:c.instructions+=2;goto B6db3ef;
case 0x6db3f0:c.instructions+=1;goto B6db3f0;
case 0x6db3f5:goto L6db3f5;
case 0x6db3f7:c.instructions+=1;goto B6db3f7;
case 0x6db3fc:goto L6db3fc;
case 0x6db3fe:c.instructions+=1;goto B6db3fe;
case 0x6db403:goto L6db403;
case 0x6db405:goto L6db405;
case 0x6db407:c.instructions+=12;goto B6db407;
case 0x6db40a:c.instructions+=11;goto B6db40a;
case 0x6db40c:c.instructions+=10;goto B6db40c;
case 0x6db411:c.instructions+=9;goto B6db411;
case 0x6db414:c.instructions+=8;goto B6db414;
case 0x6db419:c.instructions+=7;goto B6db419;
case 0x6db41c:c.instructions+=6;goto B6db41c;
case 0x6db421:c.instructions+=5;goto B6db421;
case 0x6db423:c.instructions+=4;goto B6db423;
case 0x6db424:c.instructions+=3;goto B6db424;
case 0x6db426:c.instructions+=2;goto B6db426;
case 0x6db427:c.instructions+=1;goto B6db427;
case 0x6db42d:goto L6db42d;
case 0x6db433:c.instructions+=4;goto B6db433;
case 0x6db436:c.instructions+=3;goto B6db436;
case 0x6db438:c.instructions+=2;goto B6db438;
case 0x6db43b:c.instructions+=1;goto B6db43b;
case 0x6db43d:goto L6db43d;
case 0x6db440:c.instructions+=1;goto B6db440;
case 0x6db445:goto L6db445;
case 0x6db44a:c.instructions+=7;goto B6db44a;
case 0x6db44d:c.instructions+=6;goto B6db44d;
case 0x6db452:c.instructions+=5;goto B6db452;
case 0x6db454:c.instructions+=4;goto B6db454;
case 0x6db455:c.instructions+=3;goto B6db455;
case 0x6db45a:c.instructions+=2;goto B6db45a;
case 0x6db45b:c.instructions+=1;goto B6db45b;
case 0x6db461:goto L6db461;
case 0x6db466:c.instructions+=5;goto B6db466;
case 0x6db468:c.instructions+=4;goto B6db468;
case 0x6db46a:c.instructions+=3;goto B6db46a;
case 0x6db46f:c.instructions+=2;goto B6db46f;
case 0x6db470:c.instructions+=1;goto B6db470;
case 0x6db476:goto L6db476;
case 0x6db479:c.instructions+=2;goto B6db479;
case 0x6db47f:c.instructions+=1;goto B6db47f;
case 0x6db481:goto L6db481;
case 0x6db486:c.instructions+=7;goto B6db486;
case 0x6db489:c.instructions+=6;goto B6db489;
case 0x6db48e:c.instructions+=5;goto B6db48e;
case 0x6db490:c.instructions+=4;goto B6db490;
case 0x6db491:c.instructions+=3;goto B6db491;
case 0x6db493:c.instructions+=2;goto B6db493;
case 0x6db494:c.instructions+=1;goto B6db494;
case 0x6db49a:goto L6db49a;
case 0x6db49d:c.instructions+=2;goto B6db49d;
case 0x6db4a3:c.instructions+=1;goto B6db4a3;
case 0x6db4a5:goto L6db4a5;
case 0x6db4aa:c.instructions+=7;goto B6db4aa;
case 0x6db4ad:c.instructions+=6;goto B6db4ad;
case 0x6db4b2:c.instructions+=5;goto B6db4b2;
case 0x6db4b4:c.instructions+=4;goto B6db4b4;
case 0x6db4b5:c.instructions+=3;goto B6db4b5;
case 0x6db4ba:c.instructions+=2;goto B6db4ba;
case 0x6db4bb:c.instructions+=1;goto B6db4bb;
case 0x6db4c1:goto L6db4c1;
case 0x6db4c4:c.instructions+=2;goto B6db4c4;
case 0x6db4ca:c.instructions+=1;goto B6db4ca;
case 0x6db4cc:goto L6db4cc;
case 0x6db4d2:c.instructions+=2;goto B6db4d2;
case 0x6db4d5:c.instructions+=1;goto B6db4d5;
case 0x6db4d7:goto L6db4d7;
case 0x6db4dc:c.instructions+=5;goto B6db4dc;
case 0x6db4df:c.instructions+=4;goto B6db4df;
case 0x6db4e4:c.instructions+=3;goto B6db4e4;
case 0x6db4e7:c.instructions+=2;goto B6db4e7;
case 0x6db4e9:c.instructions+=1;goto B6db4e9;
case 0x6db4eb:goto L6db4eb;
case 0x6db4ed:c.instructions+=1;goto B6db4ed;
case 0x6db4ef:goto L6db4ef;
case 0x6db4f2:c.instructions+=2;goto B6db4f2;
case 0x6db4f5:c.instructions+=1;goto B6db4f5;
case 0x6db4f7:goto L6db4f7;
case 0x6db4f8:c.instructions+=1;goto B6db4f8;
case 0x6db4fa:goto L6db4fa;
case 0x6db4ff:c.instructions+=5;goto B6db4ff;
case 0x6db501:c.instructions+=4;goto B6db501;
case 0x6db503:c.instructions+=3;goto B6db503;
case 0x6db505:c.instructions+=2;goto B6db505;
case 0x6db506:c.instructions+=1;goto B6db506;
case 0x6db50c:goto L6db50c;
case 0x6db50e:goto L6db50e;
case 0x6db510:goto L6db510;
case 0x6db515:c.instructions+=4;goto B6db515;
case 0x6db517:c.instructions+=3;goto B6db517;
case 0x6db519:c.instructions+=2;goto B6db519;
case 0x6db51a:c.instructions+=1;goto B6db51a;
case 0x6db520:goto L6db520;
case 0x6db523:c.instructions+=2;goto B6db523;
case 0x6db529:c.instructions+=1;goto B6db529;
case 0x6db52b:goto L6db52b;
case 0x6db530:c.instructions+=3;goto B6db530;
case 0x6db533:c.instructions+=2;goto B6db533;
case 0x6db536:c.instructions+=1;goto B6db536;
case 0x6db538:goto L6db538;
case 0x6db539:c.instructions+=1;goto B6db539;
case 0x6db53b:goto L6db53b;
case 0x6db53c:c.instructions+=1;goto B6db53c;
case 0x6db53e:goto L6db53e;
case 0x6db543:c.instructions+=5;goto B6db543;
case 0x6db545:c.instructions+=4;goto B6db545;
case 0x6db547:c.instructions+=3;goto B6db547;
case 0x6db549:c.instructions+=2;goto B6db549;
case 0x6db54a:c.instructions+=1;goto B6db54a;
case 0x6db550:goto L6db550;
case 0x6db552:c.instructions+=1;goto B6db552;
case 0x6db554:goto L6db554;
case 0x6db556:c.instructions+=1;goto B6db556;
case 0x6db558:goto L6db558;
case 0x6db55a:goto L6db55a;
case 0x6db55f:c.instructions+=4;goto B6db55f;
case 0x6db561:c.instructions+=3;goto B6db561;
case 0x6db563:c.instructions+=2;goto B6db563;
case 0x6db564:c.instructions+=1;goto B6db564;
case 0x6db56a:goto L6db56a;
case 0x6db56c:goto L6db56c;
case 0x6db571:c.instructions+=4;goto B6db571;
case 0x6db573:c.instructions+=3;goto B6db573;
case 0x6db575:c.instructions+=2;goto B6db575;
case 0x6db576:c.instructions+=1;goto B6db576;
case 0x6db57c:goto L6db57c;
case 0x6db57f:c.instructions+=2;goto B6db57f;
case 0x6db585:c.instructions+=1;goto B6db585;
case 0x6db587:goto L6db587;
case 0x6db58c:c.instructions+=7;goto B6db58c;
case 0x6db58f:c.instructions+=6;goto B6db58f;
case 0x6db594:c.instructions+=5;goto B6db594;
case 0x6db596:c.instructions+=4;goto B6db596;
case 0x6db597:c.instructions+=3;goto B6db597;
case 0x6db599:c.instructions+=2;goto B6db599;
case 0x6db59a:c.instructions+=1;goto B6db59a;
case 0x6db5a0:goto L6db5a0;
case 0x6db5a3:c.instructions+=2;goto B6db5a3;
case 0x6db5a9:c.instructions+=1;goto B6db5a9;
case 0x6db5ab:goto L6db5ab;
case 0x6db5b1:c.instructions+=2;goto B6db5b1;
case 0x6db5b4:c.instructions+=1;goto B6db5b4;
case 0x6db5b6:goto L6db5b6;
case 0x6db5bc:c.instructions+=2;goto B6db5bc;
case 0x6db5bf:c.instructions+=1;goto B6db5bf;
case 0x6db5c1:goto L6db5c1;
case 0x6db5c6:c.instructions+=11;goto B6db5c6;
case 0x6db5c9:c.instructions+=10;goto B6db5c9;
case 0x6db5cf:c.instructions+=9;goto B6db5cf;
case 0x6db5d2:c.instructions+=8;goto B6db5d2;
case 0x6db5d7:c.instructions+=7;goto B6db5d7;
case 0x6db5da:c.instructions+=6;goto B6db5da;
case 0x6db5df:c.instructions+=5;goto B6db5df;
case 0x6db5e1:c.instructions+=4;goto B6db5e1;
case 0x6db5e2:c.instructions+=3;goto B6db5e2;
case 0x6db5e4:c.instructions+=2;goto B6db5e4;
case 0x6db5e5:c.instructions+=1;goto B6db5e5;
case 0x6db5eb:goto L6db5eb;
case 0x6db5ee:c.instructions+=6;goto B6db5ee;
case 0x6db5f3:c.instructions+=5;goto B6db5f3;
case 0x6db5f5:c.instructions+=4;goto B6db5f5;
case 0x6db5f6:c.instructions+=3;goto B6db5f6;
case 0x6db5f8:c.instructions+=2;goto B6db5f8;
case 0x6db5f9:c.instructions+=1;goto B6db5f9;
case 0x6db5ff:goto L6db5ff;
case 0x6db602:c.instructions+=2;goto B6db602;
case 0x6db608:c.instructions+=1;goto B6db608;
case 0x6db60a:goto L6db60a;
case 0x6db60f:c.instructions+=7;goto B6db60f;
case 0x6db612:c.instructions+=6;goto B6db612;
case 0x6db617:c.instructions+=5;goto B6db617;
case 0x6db619:c.instructions+=4;goto B6db619;
case 0x6db61a:c.instructions+=3;goto B6db61a;
case 0x6db61c:c.instructions+=2;goto B6db61c;
case 0x6db61d:c.instructions+=1;goto B6db61d;
case 0x6db623:goto L6db623;
case 0x6db626:c.instructions+=2;goto B6db626;
case 0x6db62c:c.instructions+=1;goto B6db62c;
case 0x6db62e:goto L6db62e;
case 0x6db633:c.instructions+=7;goto B6db633;
case 0x6db636:c.instructions+=6;goto B6db636;
case 0x6db63b:c.instructions+=5;goto B6db63b;
case 0x6db63d:c.instructions+=4;goto B6db63d;
case 0x6db63e:c.instructions+=3;goto B6db63e;
case 0x6db640:c.instructions+=2;goto B6db640;
case 0x6db641:c.instructions+=1;goto B6db641;
case 0x6db647:goto L6db647;
case 0x6db64a:c.instructions+=2;goto B6db64a;
case 0x6db650:c.instructions+=1;goto B6db650;
case 0x6db652:goto L6db652;
case 0x6db657:c.instructions+=7;goto B6db657;
case 0x6db65a:c.instructions+=6;goto B6db65a;
case 0x6db65f:c.instructions+=5;goto B6db65f;
case 0x6db661:c.instructions+=4;goto B6db661;
case 0x6db662:c.instructions+=3;goto B6db662;
case 0x6db664:c.instructions+=2;goto B6db664;
case 0x6db665:c.instructions+=1;goto B6db665;
case 0x6db66b:goto L6db66b;
case 0x6db66e:c.instructions+=2;goto B6db66e;
case 0x6db674:c.instructions+=1;goto B6db674;
case 0x6db676:goto L6db676;
case 0x6db67b:c.instructions+=3;goto B6db67b;
case 0x6db67e:c.instructions+=2;goto B6db67e;
case 0x6db681:c.instructions+=1;goto B6db681;
case 0x6db683:goto L6db683;
case 0x6db684:c.instructions+=1;goto B6db684;
case 0x6db686:goto L6db686;
case 0x6db68b:c.instructions+=5;goto B6db68b;
case 0x6db68d:c.instructions+=4;goto B6db68d;
case 0x6db68f:c.instructions+=3;goto B6db68f;
case 0x6db691:c.instructions+=2;goto B6db691;
case 0x6db692:c.instructions+=1;goto B6db692;
case 0x6db698:goto L6db698;
case 0x6db69a:c.instructions+=3;goto B6db69a;
case 0x6db69b:c.instructions+=2;goto B6db69b;
case 0x6db69c:c.instructions+=1;goto B6db69c;
case 0x6db69d:goto L6db69d;
case 0x6db6a2:c.instructions+=5;goto B6db6a2;
case 0x6db6a4:c.instructions+=4;goto B6db6a4;
case 0x6db6a6:c.instructions+=3;goto B6db6a6;
case 0x6db6a8:c.instructions+=2;goto B6db6a8;
case 0x6db6a9:c.instructions+=1;goto B6db6a9;
case 0x6db6af:goto L6db6af;
case 0x6db6b1:c.instructions+=3;goto B6db6b1;
case 0x6db6b2:c.instructions+=2;goto B6db6b2;
case 0x6db6b3:c.instructions+=1;goto B6db6b3;
case 0x6db6c0:goto L6db6c0;
case 0x6db6c1:c.instructions+=3;goto B6db6c1;
case 0x6db6c3:c.instructions+=2;goto B6db6c3;
case 0x6db6c8:c.instructions+=1;goto B6db6c8;
case 0x6db6cd:goto L6db6cd;
case 0x6db6cf:goto L6db6cf;
case 0x6db6d2:c.instructions+=19;goto B6db6d2;
case 0x6db6d7:c.instructions+=18;goto B6db6d7;
case 0x6db6dc:c.instructions+=17;goto B6db6dc;
case 0x6db6e1:c.instructions+=16;goto B6db6e1;
case 0x6db6e6:c.instructions+=15;goto B6db6e6;
case 0x6db6eb:c.instructions+=14;goto B6db6eb;
case 0x6db6f0:c.instructions+=13;goto B6db6f0;
case 0x6db6f5:c.instructions+=12;goto B6db6f5;
case 0x6db6fa:c.instructions+=11;goto B6db6fa;
case 0x6db6ff:c.instructions+=10;goto B6db6ff;
case 0x6db704:c.instructions+=9;goto B6db704;
case 0x6db709:c.instructions+=8;goto B6db709;
case 0x6db70e:c.instructions+=7;goto B6db70e;
case 0x6db713:c.instructions+=6;goto B6db713;
case 0x6db718:c.instructions+=5;goto B6db718;
case 0x6db71d:c.instructions+=4;goto B6db71d;
case 0x6db727:c.instructions+=3;goto B6db727;
case 0x6db731:c.instructions+=2;goto B6db731;
case 0x6db732:c.instructions+=1;goto B6db732;
case 0x6db740:goto L6db740;
case 0x6db742:c.instructions+=22;goto B6db742;
case 0x6db747:c.instructions+=21;goto B6db747;
case 0x6db749:c.instructions+=20;goto B6db749;
case 0x6db74c:c.instructions+=19;goto B6db74c;
case 0x6db74f:c.instructions+=18;goto B6db74f;
case 0x6db752:c.instructions+=17;goto B6db752;
case 0x6db755:c.instructions+=16;goto B6db755;
case 0x6db758:c.instructions+=15;goto B6db758;
case 0x6db75b:c.instructions+=14;goto B6db75b;
case 0x6db760:c.instructions+=13;goto B6db760;
case 0x6db763:c.instructions+=12;goto B6db763;
case 0x6db766:c.instructions+=11;goto B6db766;
case 0x6db76c:c.instructions+=10;goto B6db76c;
case 0x6db772:c.instructions+=9;goto B6db772;
case 0x6db779:c.instructions+=8;goto B6db779;
case 0x6db780:c.instructions+=7;goto B6db780;
case 0x6db783:c.instructions+=6;goto B6db783;
case 0x6db786:c.instructions+=5;goto B6db786;
case 0x6db78d:c.instructions+=4;goto B6db78d;
case 0x6db794:c.instructions+=3;goto B6db794;
case 0x6db797:c.instructions+=2;goto B6db797;
case 0x6db79e:c.instructions+=1;goto B6db79e;
case 0x6db7a0:goto L6db7a0;
case 0x6db7a2:c.instructions+=24;goto B6db7a2;
case 0x6db7a4:c.instructions+=23;goto B6db7a4;
case 0x6db7a9:c.instructions+=22;goto B6db7a9;
case 0x6db7ac:c.instructions+=21;goto B6db7ac;
case 0x6db7af:c.instructions+=20;goto B6db7af;
case 0x6db7b2:c.instructions+=19;goto B6db7b2;
case 0x6db7b5:c.instructions+=18;goto B6db7b5;
case 0x6db7b8:c.instructions+=17;goto B6db7b8;
case 0x6db7ba:c.instructions+=16;goto B6db7ba;
case 0x6db7bd:c.instructions+=15;goto B6db7bd;
case 0x6db7c0:c.instructions+=14;goto B6db7c0;
case 0x6db7c3:c.instructions+=13;goto B6db7c3;
case 0x6db7c6:c.instructions+=12;goto B6db7c6;
case 0x6db7c9:c.instructions+=11;goto B6db7c9;
case 0x6db7cc:c.instructions+=10;goto B6db7cc;
case 0x6db7cf:c.instructions+=9;goto B6db7cf;
case 0x6db7d2:c.instructions+=8;goto B6db7d2;
case 0x6db7d5:c.instructions+=7;goto B6db7d5;
case 0x6db7d8:c.instructions+=6;goto B6db7d8;
case 0x6db7db:c.instructions+=5;goto B6db7db;
case 0x6db7de:c.instructions+=4;goto B6db7de;
case 0x6db7e1:c.instructions+=3;goto B6db7e1;
case 0x6db7e4:c.instructions+=2;goto B6db7e4;
case 0x6db7e7:c.instructions+=1;goto B6db7e7;
case 0x6db7f0:goto L6db7f0;
case 0x6db7f3:c.instructions+=8;goto B6db7f3;
case 0x6db7f4:c.instructions+=7;goto B6db7f4;
case 0x6db7f6:c.instructions+=6;goto B6db7f6;
case 0x6db7fa:c.instructions+=5;goto B6db7fa;
case 0x6db7fe:c.instructions+=4;goto B6db7fe;
case 0x6db7ff:c.instructions+=3;goto B6db7ff;
case 0x6db800:c.instructions+=2;goto B6db800;
case 0x6db801:c.instructions+=1;goto B6db801;
case 0x6db806:goto L6db806;
case 0x6db808:c.instructions+=4;goto B6db808;
case 0x6db80c:c.instructions+=3;goto B6db80c;
case 0x6db80d:c.instructions+=2;goto B6db80d;
case 0x6db80e:c.instructions+=1;goto B6db80e;
case 0x6db813:goto L6db813;
case 0x6db816:c.instructions+=3;goto B6db816;
case 0x6db817:c.instructions+=2;goto B6db817;
case 0x6db81a:c.instructions+=1;goto B6db81a;
case 0x6db820:goto L6db820;
case 0x6db821:c.instructions+=4;goto B6db821;
case 0x6db825:c.instructions+=3;goto B6db825;
case 0x6db826:c.instructions+=2;goto B6db826;
case 0x6db828:c.instructions+=1;goto B6db828;
case 0x6db82d:goto L6db82d;
case 0x6db82f:goto L6db82f;
case 0x6db830:c.instructions+=2;goto B6db830;
case 0x6db831:c.instructions+=1;goto B6db831;
case 0x6db840:goto L6db840;
case 0x6db844:c.instructions+=8;goto B6db844;
case 0x6db847:c.instructions+=7;goto B6db847;
case 0x6db84a:c.instructions+=6;goto B6db84a;
case 0x6db84e:c.instructions+=5;goto B6db84e;
case 0x6db850:c.instructions+=4;goto B6db850;
case 0x6db856:c.instructions+=3;goto B6db856;
case 0x6db858:c.instructions+=2;goto B6db858;
case 0x6db85b:c.instructions+=1;goto B6db85b;
case 0x6db85d:goto L6db85d;
case 0x6db863:c.instructions+=20;goto B6db863;
case 0x6db867:c.instructions+=19;goto B6db867;
case 0x6db869:c.instructions+=18;goto B6db869;
case 0x6db86f:c.instructions+=17;goto B6db86f;
case 0x6db871:c.instructions+=16;goto B6db871;
case 0x6db874:c.instructions+=15;goto B6db874;
case 0x6db87a:c.instructions+=14;goto B6db87a;
case 0x6db87d:c.instructions+=13;goto B6db87d;
case 0x6db880:c.instructions+=12;goto B6db880;
case 0x6db882:c.instructions+=11;goto B6db882;
case 0x6db884:c.instructions+=10;goto B6db884;
case 0x6db887:c.instructions+=9;goto B6db887;
case 0x6db88a:c.instructions+=8;goto B6db88a;
case 0x6db88c:c.instructions+=7;goto B6db88c;
case 0x6db88f:c.instructions+=6;goto B6db88f;
case 0x6db892:c.instructions+=5;goto B6db892;
case 0x6db895:c.instructions+=4;goto B6db895;
case 0x6db897:c.instructions+=3;goto B6db897;
case 0x6db89a:c.instructions+=2;goto B6db89a;
case 0x6db89c:c.instructions+=1;goto B6db89c;
case 0x6db89d:goto L6db89d;
case 0x6db89f:c.instructions+=5;goto B6db89f;
case 0x6db8a2:c.instructions+=4;goto B6db8a2;
case 0x6db8a4:c.instructions+=3;goto B6db8a4;
case 0x6db8a6:c.instructions+=2;goto B6db8a6;
case 0x6db8a9:c.instructions+=1;goto B6db8a9;
case 0x6db8ab:goto L6db8ab;
case 0x6db8b0:c.instructions+=1;goto B6db8b0;
case 0x6db8b2:goto L6db8b2;
case 0x6db8b4:goto L6db8b4;
case 0x6db8b7:c.instructions+=4;goto B6db8b7;
case 0x6db8ba:c.instructions+=3;goto B6db8ba;
case 0x6db8bc:c.instructions+=2;goto B6db8bc;
case 0x6db8bf:c.instructions+=1;goto B6db8bf;
case 0x6db8c1:goto L6db8c1;
case 0x6db8c4:c.instructions+=12;goto B6db8c4;
case 0x6db8c8:c.instructions+=11;goto B6db8c8;
case 0x6db8ca:c.instructions+=10;goto B6db8ca;
case 0x6db8cd:c.instructions+=9;goto B6db8cd;
case 0x6db8d3:c.instructions+=8;goto B6db8d3;
case 0x6db8d5:c.instructions+=7;goto B6db8d5;
case 0x6db8db:c.instructions+=6;goto B6db8db;
case 0x6db8dd:c.instructions+=5;goto B6db8dd;
case 0x6db8e0:c.instructions+=4;goto B6db8e0;
case 0x6db8e6:c.instructions+=3;goto B6db8e6;
case 0x6db8e8:c.instructions+=2;goto B6db8e8;
case 0x6db8eb:c.instructions+=1;goto B6db8eb;
case 0x6db8ed:goto L6db8ed;
case 0x6db8f3:goto L6db8f3;
case 0x6db8f6:c.instructions+=13;goto B6db8f6;
case 0x6db8f9:c.instructions+=12;goto B6db8f9;
case 0x6db8fb:c.instructions+=11;goto B6db8fb;
case 0x6db8fe:c.instructions+=10;goto B6db8fe;
case 0x6db901:c.instructions+=9;goto B6db901;
case 0x6db904:c.instructions+=8;goto B6db904;
case 0x6db906:c.instructions+=7;goto B6db906;
case 0x6db908:c.instructions+=6;goto B6db908;
case 0x6db90b:c.instructions+=5;goto B6db90b;
case 0x6db90e:c.instructions+=4;goto B6db90e;
case 0x6db910:c.instructions+=3;goto B6db910;
case 0x6db913:c.instructions+=2;goto B6db913;
case 0x6db915:c.instructions+=1;goto B6db915;
case 0x6db916:goto L6db916;
case 0x6db918:c.instructions+=3;goto B6db918;
case 0x6db91a:c.instructions+=2;goto B6db91a;
case 0x6db91e:c.instructions+=1;goto B6db91e;
case 0x6db920:goto L6db920;
case 0x6db923:c.instructions+=10;goto B6db923;
case 0x6db926:c.instructions+=9;goto B6db926;
case 0x6db92c:c.instructions+=8;goto B6db92c;
case 0x6db92e:c.instructions+=7;goto B6db92e;
case 0x6db934:c.instructions+=6;goto B6db934;
case 0x6db936:c.instructions+=5;goto B6db936;
case 0x6db939:c.instructions+=4;goto B6db939;
case 0x6db93f:c.instructions+=3;goto B6db93f;
case 0x6db941:c.instructions+=2;goto B6db941;
case 0x6db944:c.instructions+=1;goto B6db944;
case 0x6db946:goto L6db946;
case 0x6db94c:goto L6db94c;
case 0x6db94f:c.instructions+=13;goto B6db94f;
case 0x6db952:c.instructions+=12;goto B6db952;
case 0x6db954:c.instructions+=11;goto B6db954;
case 0x6db957:c.instructions+=10;goto B6db957;
case 0x6db95a:c.instructions+=9;goto B6db95a;
case 0x6db95d:c.instructions+=8;goto B6db95d;
case 0x6db95f:c.instructions+=7;goto B6db95f;
case 0x6db962:c.instructions+=6;goto B6db962;
case 0x6db965:c.instructions+=5;goto B6db965;
case 0x6db968:c.instructions+=4;goto B6db968;
case 0x6db96a:c.instructions+=3;goto B6db96a;
case 0x6db96c:c.instructions+=2;goto B6db96c;
case 0x6db96e:c.instructions+=1;goto B6db96e;
case 0x6db96f:goto L6db96f;
case 0x6db973:c.instructions+=9;goto B6db973;
case 0x6db979:c.instructions+=8;goto B6db979;
case 0x6db97b:c.instructions+=7;goto B6db97b;
case 0x6db981:c.instructions+=6;goto B6db981;
case 0x6db983:c.instructions+=5;goto B6db983;
case 0x6db985:c.instructions+=4;goto B6db985;
case 0x6db98b:c.instructions+=3;goto B6db98b;
case 0x6db98d:c.instructions+=2;goto B6db98d;
case 0x6db990:c.instructions+=1;goto B6db990;
case 0x6db992:goto L6db992;
case 0x6db998:goto L6db998;
case 0x6db99b:c.instructions+=13;goto B6db99b;
case 0x6db99e:c.instructions+=12;goto B6db99e;
case 0x6db9a0:c.instructions+=11;goto B6db9a0;
case 0x6db9a3:c.instructions+=10;goto B6db9a3;
case 0x6db9a6:c.instructions+=9;goto B6db9a6;
case 0x6db9a9:c.instructions+=8;goto B6db9a9;
case 0x6db9ab:c.instructions+=7;goto B6db9ab;
case 0x6db9ae:c.instructions+=6;goto B6db9ae;
case 0x6db9b1:c.instructions+=5;goto B6db9b1;
case 0x6db9b4:c.instructions+=4;goto B6db9b4;
case 0x6db9b6:c.instructions+=3;goto B6db9b6;
case 0x6db9b9:c.instructions+=2;goto B6db9b9;
case 0x6db9bb:c.instructions+=1;goto B6db9bb;
case 0x6db9c0:goto L6db9c0;
case 0x6db9c3:c.instructions+=25;goto B6db9c3;
case 0x6db9c4:c.instructions+=24;goto B6db9c4;
case 0x6db9c6:c.instructions+=23;goto B6db9c6;
case 0x6db9c8:c.instructions+=22;goto B6db9c8;
case 0x6db9cb:c.instructions+=21;goto B6db9cb;
case 0x6db9ce:c.instructions+=20;goto B6db9ce;
case 0x6db9d2:c.instructions+=19;goto B6db9d2;
case 0x6db9d5:c.instructions+=18;goto B6db9d5;
case 0x6db9d9:c.instructions+=17;goto B6db9d9;
case 0x6db9dc:c.instructions+=16;goto B6db9dc;
case 0x6db9e0:c.instructions+=15;goto B6db9e0;
case 0x6db9e3:c.instructions+=14;goto B6db9e3;
case 0x6db9e7:c.instructions+=13;goto B6db9e7;
case 0x6db9ea:c.instructions+=12;goto B6db9ea;
case 0x6db9ee:c.instructions+=11;goto B6db9ee;
case 0x6db9f1:c.instructions+=10;goto B6db9f1;
case 0x6db9f5:c.instructions+=9;goto B6db9f5;
case 0x6db9f9:c.instructions+=8;goto B6db9f9;
case 0x6db9fd:c.instructions+=7;goto B6db9fd;
case 0x6dba01:c.instructions+=6;goto B6dba01;
case 0x6dba04:c.instructions+=5;goto B6dba04;
case 0x6dba05:c.instructions+=4;goto B6dba05;
case 0x6dba09:c.instructions+=3;goto B6dba09;
case 0x6dba0a:c.instructions+=2;goto B6dba0a;
case 0x6dba0e:c.instructions+=1;goto B6dba0e;
case 0x6dba13:goto L6dba13;
case 0x6dba16:c.instructions+=12;goto B6dba16;
case 0x6dba1a:c.instructions+=11;goto B6dba1a;
case 0x6dba1c:c.instructions+=10;goto B6dba1c;
case 0x6dba1f:c.instructions+=9;goto B6dba1f;
case 0x6dba22:c.instructions+=8;goto B6dba22;
case 0x6dba25:c.instructions+=7;goto B6dba25;
case 0x6dba28:c.instructions+=6;goto B6dba28;
case 0x6dba2b:c.instructions+=5;goto B6dba2b;
case 0x6dba2e:c.instructions+=4;goto B6dba2e;
case 0x6dba31:c.instructions+=3;goto B6dba31;
case 0x6dba32:c.instructions+=2;goto B6dba32;
case 0x6dba35:c.instructions+=1;goto B6dba35;
case 0x6dba40:goto L6dba40;
case 0x6dba41:c.instructions+=5;goto B6dba41;
case 0x6dba45:c.instructions+=4;goto B6dba45;
case 0x6dba47:c.instructions+=3;goto B6dba47;
case 0x6dba48:c.instructions+=2;goto B6dba48;
case 0x6dba4a:c.instructions+=1;goto B6dba4a;
case 0x6dba4c:goto L6dba4c;
case 0x6dba4d:c.instructions+=4;goto B6dba4d;
case 0x6dba51:c.instructions+=3;goto B6dba51;
case 0x6dba52:c.instructions+=2;goto B6dba52;
case 0x6dba56:c.instructions+=1;goto B6dba56;
case 0x6dba58:goto L6dba58;
case 0x6dba5b:c.instructions+=4;goto B6dba5b;
case 0x6dba5c:c.instructions+=3;goto B6dba5c;
case 0x6dba5d:c.instructions+=2;goto B6dba5d;
case 0x6dba5e:c.instructions+=1;goto B6dba5e;
case 0x6dba63:goto L6dba63;
case 0x6dba66:c.instructions+=3;goto B6dba66;
case 0x6dba69:c.instructions+=2;goto B6dba69;
case 0x6dba6a:c.instructions+=1;goto B6dba6a;
case 0x6dba6c:goto L6dba6c;
case 0x6dba6d:c.instructions+=1;goto B6dba6d;
case 0x6dba6e:goto L6dba6e;
case 0x6dba6f:c.instructions+=2;goto B6dba6f;
case 0x6dba70:c.instructions+=1;goto B6dba70;
case 0x6dba80:goto L6dba80;
case 0x6dba81:c.instructions+=26;goto B6dba81;
case 0x6dba83:c.instructions+=25;goto B6dba83;
case 0x6dba84:c.instructions+=24;goto B6dba84;
case 0x6dba86:c.instructions+=23;goto B6dba86;
case 0x6dba89:c.instructions+=22;goto B6dba89;
case 0x6dba8a:c.instructions+=21;goto B6dba8a;
case 0x6dba8c:c.instructions+=20;goto B6dba8c;
case 0x6dba92:c.instructions+=19;goto B6dba92;
case 0x6dba95:c.instructions+=18;goto B6dba95;
case 0x6dba98:c.instructions+=17;goto B6dba98;
case 0x6dba9b:c.instructions+=16;goto B6dba9b;
case 0x6dba9e:c.instructions+=15;goto B6dba9e;
case 0x6dbaa1:c.instructions+=14;goto B6dbaa1;
case 0x6dbaa4:c.instructions+=13;goto B6dbaa4;
case 0x6dbaa7:c.instructions+=12;goto B6dbaa7;
case 0x6dbaaa:c.instructions+=11;goto B6dbaaa;
case 0x6dbaad:c.instructions+=10;goto B6dbaad;
case 0x6dbab0:c.instructions+=9;goto B6dbab0;
case 0x6dbab3:c.instructions+=8;goto B6dbab3;
case 0x6dbab6:c.instructions+=7;goto B6dbab6;
case 0x6dbab9:c.instructions+=6;goto B6dbab9;
case 0x6dbabc:c.instructions+=5;goto B6dbabc;
case 0x6dbac0:c.instructions+=4;goto B6dbac0;
case 0x6dbac3:c.instructions+=3;goto B6dbac3;
case 0x6dbac6:c.instructions+=2;goto B6dbac6;
case 0x6dbac9:c.instructions+=1;goto B6dbac9;
case 0x6dbacf:goto L6dbacf;
case 0x6dbad2:c.instructions+=2;goto B6dbad2;
case 0x6dbad4:c.instructions+=1;goto B6dbad4;
case 0x6dbad6:goto L6dbad6;
case 0x6dbad8:c.instructions+=1;goto B6dbad8;
case 0x6dbadd:goto L6dbadd;
case 0x6dbae0:c.instructions+=8;goto B6dbae0;
case 0x6dbae3:c.instructions+=7;goto B6dbae3;
case 0x6dbae6:c.instructions+=6;goto B6dbae6;
case 0x6dbae9:c.instructions+=5;goto B6dbae9;
case 0x6dbaec:c.instructions+=4;goto B6dbaec;
case 0x6dbaee:c.instructions+=3;goto B6dbaee;
case 0x6dbaef:c.instructions+=2;goto B6dbaef;
case 0x6dbaf0:c.instructions+=1;goto B6dbaf0;
case 0x6dbaf1:goto L6dbaf1;
case 0x6dbaf3:c.instructions+=9;goto B6dbaf3;
case 0x6dbaf6:c.instructions+=8;goto B6dbaf6;
case 0x6dbaf9:c.instructions+=7;goto B6dbaf9;
case 0x6dbafc:c.instructions+=6;goto B6dbafc;
case 0x6dbaff:c.instructions+=5;goto B6dbaff;
case 0x6dbb02:c.instructions+=4;goto B6dbb02;
case 0x6dbb04:c.instructions+=3;goto B6dbb04;
case 0x6dbb05:c.instructions+=2;goto B6dbb05;
case 0x6dbb06:c.instructions+=1;goto B6dbb06;
case 0x6dbb10:goto L6dbb10;
case 0x6dbb11:c.instructions+=6;goto B6dbb11;
case 0x6dbb12:c.instructions+=5;goto B6dbb12;
case 0x6dbb14:c.instructions+=4;goto B6dbb14;
case 0x6dbb15:c.instructions+=3;goto B6dbb15;
case 0x6dbb1a:c.instructions+=2;goto B6dbb1a;
case 0x6dbb1c:c.instructions+=1;goto B6dbb1c;
case 0x6dbb22:goto L6dbb22;
case 0x6dbb23:c.instructions+=7;goto B6dbb23;
case 0x6dbb25:c.instructions+=6;goto B6dbb25;
case 0x6dbb27:c.instructions+=5;goto B6dbb27;
case 0x6dbb2c:c.instructions+=4;goto B6dbb2c;
case 0x6dbb2e:c.instructions+=3;goto B6dbb2e;
case 0x6dbb33:c.instructions+=2;goto B6dbb33;
case 0x6dbb36:c.instructions+=1;goto B6dbb36;
case 0x6dbb3b:goto L6dbb3b;
case 0x6dbb3e:c.instructions+=21;goto B6dbb3e;
case 0x6dbb43:c.instructions+=20;goto B6dbb43;
case 0x6dbb49:c.instructions+=19;goto B6dbb49;
case 0x6dbb4f:c.instructions+=18;goto B6dbb4f;
case 0x6dbb55:c.instructions+=17;goto B6dbb55;
case 0x6dbb5b:c.instructions+=16;goto B6dbb5b;
case 0x6dbb5e:c.instructions+=15;goto B6dbb5e;
case 0x6dbb61:c.instructions+=14;goto B6dbb61;
case 0x6dbb64:c.instructions+=13;goto B6dbb64;
case 0x6dbb67:c.instructions+=12;goto B6dbb67;
case 0x6dbb6a:c.instructions+=11;goto B6dbb6a;
case 0x6dbb6d:c.instructions+=10;goto B6dbb6d;
case 0x6dbb70:c.instructions+=9;goto B6dbb70;
case 0x6dbb73:c.instructions+=8;goto B6dbb73;
case 0x6dbb79:c.instructions+=7;goto B6dbb79;
case 0x6dbb7c:c.instructions+=6;goto B6dbb7c;
case 0x6dbb7f:c.instructions+=5;goto B6dbb7f;
case 0x6dbb82:c.instructions+=4;goto B6dbb82;
case 0x6dbb87:c.instructions+=3;goto B6dbb87;
case 0x6dbb8a:c.instructions+=2;goto B6dbb8a;
case 0x6dbb8c:c.instructions+=1;goto B6dbb8c;
case 0x6dbb8e:goto L6dbb8e;
case 0x6dbb93:c.instructions+=6;goto B6dbb93;
case 0x6dbb94:c.instructions+=5;goto B6dbb94;
case 0x6dbb99:c.instructions+=4;goto B6dbb99;
case 0x6dbb9f:c.instructions+=3;goto B6dbb9f;
case 0x6dbba1:c.instructions+=2;goto B6dbba1;
case 0x6dbba2:c.instructions+=1;goto B6dbba2;
case 0x6dbba8:goto L6dbba8;
case 0x6dbbab:c.instructions+=3;goto B6dbbab;
case 0x6dbbac:c.instructions+=2;goto B6dbbac;
case 0x6dbbae:c.instructions+=1;goto B6dbbae;
case 0x6dbbb3:goto L6dbbb3;
case 0x6dbbb5:c.instructions+=2;goto B6dbbb5;
case 0x6dbbb7:c.instructions+=1;goto B6dbbb7;
case 0x6dbbbc:goto L6dbbbc;
case 0x6dbbbe:c.instructions+=2;goto B6dbbbe;
case 0x6dbbc0:c.instructions+=1;goto B6dbbc0;
case 0x6dbbc5:goto L6dbbc5;
case 0x6dbbc6:c.instructions+=2;goto B6dbbc6;
case 0x6dbbc8:c.instructions+=1;goto B6dbbc8;
case 0x6dbbcd:goto L6dbbcd;
case 0x6dbbd2:c.instructions+=8;goto B6dbbd2;
case 0x6dbbd3:c.instructions+=7;goto B6dbbd3;
case 0x6dbbd8:c.instructions+=6;goto B6dbbd8;
case 0x6dbbde:c.instructions+=5;goto B6dbbde;
case 0x6dbbe3:c.instructions+=4;goto B6dbbe3;
case 0x6dbbe9:c.instructions+=3;goto B6dbbe9;
case 0x6dbbeb:c.instructions+=2;goto B6dbbeb;
case 0x6dbbec:c.instructions+=1;goto B6dbbec;
case 0x6dbbf0:goto L6dbbf0;
case 0x6dbbf1:c.instructions+=6;goto B6dbbf1;
case 0x6dbbf2:c.instructions+=5;goto B6dbbf2;
case 0x6dbbf4:c.instructions+=4;goto B6dbbf4;
case 0x6dbbf7:c.instructions+=3;goto B6dbbf7;
case 0x6dbbf9:c.instructions+=2;goto B6dbbf9;
case 0x6dbbfb:c.instructions+=1;goto B6dbbfb;
case 0x6dbc01:goto L6dbc01;
case 0x6dbc06:goto L6dbc06;
case 0x6dbc08:c.instructions+=1;goto B6dbc08;
case 0x6dbc0a:goto L6dbc0a;
case 0x6dbc0b:c.instructions+=1;goto B6dbc0b;
case 0x6dbc0d:goto L6dbc0d;
case 0x6dbc0f:goto L6dbc0f;
case 0x6dbc14:goto L6dbc14;
case 0x6dbc19:c.instructions+=3;goto B6dbc19;
case 0x6dbc1c:c.instructions+=2;goto B6dbc1c;
case 0x6dbc1e:c.instructions+=1;goto B6dbc1e;
case 0x6dbc20:goto L6dbc20;
case 0x6dbc25:c.instructions+=6;goto B6dbc25;
case 0x6dbc26:c.instructions+=5;goto B6dbc26;
case 0x6dbc28:c.instructions+=4;goto B6dbc28;
case 0x6dbc2e:c.instructions+=3;goto B6dbc2e;
case 0x6dbc30:c.instructions+=2;goto B6dbc30;
case 0x6dbc31:c.instructions+=1;goto B6dbc31;
case 0x6dbc37:goto L6dbc37;
case 0x6dbc3d:c.instructions+=1;goto B6dbc3d;
case 0x6dbc3f:goto L6dbc3f;
case 0x6dbc44:c.instructions+=6;goto B6dbc44;
case 0x6dbc45:c.instructions+=5;goto B6dbc45;
case 0x6dbc4a:c.instructions+=4;goto B6dbc4a;
case 0x6dbc50:c.instructions+=3;goto B6dbc50;
case 0x6dbc52:c.instructions+=2;goto B6dbc52;
case 0x6dbc53:c.instructions+=1;goto B6dbc53;
case 0x6dbc59:goto L6dbc59;
case 0x6dbc5b:c.instructions+=1;goto B6dbc5b;
case 0x6dbc60:goto L6dbc60;
case 0x6dbc63:c.instructions+=1;goto B6dbc63;
case 0x6dbc68:goto L6dbc68;
case 0x6dbc6b:c.instructions+=1;goto B6dbc6b;
case 0x6dbc70:goto L6dbc70;
case 0x6dbc75:c.instructions+=1;goto B6dbc75;
case 0x6dbc7a:goto L6dbc7a;
case 0x6dbc7c:c.instructions+=8;goto B6dbc7c;
case 0x6dbc7f:c.instructions+=7;goto B6dbc7f;
case 0x6dbc80:c.instructions+=6;goto B6dbc80;
case 0x6dbc85:c.instructions+=5;goto B6dbc85;
case 0x6dbc8a:c.instructions+=4;goto B6dbc8a;
case 0x6dbc8c:c.instructions+=3;goto B6dbc8c;
case 0x6dbc91:c.instructions+=2;goto B6dbc91;
case 0x6dbc92:c.instructions+=1;goto B6dbc92;
case 0x6dbc98:goto L6dbc98;
case 0x6dbc9e:c.instructions+=6;goto B6dbc9e;
case 0x6dbca3:c.instructions+=5;goto B6dbca3;
case 0x6dbca5:c.instructions+=4;goto B6dbca5;
case 0x6dbca6:c.instructions+=3;goto B6dbca6;
case 0x6dbca8:c.instructions+=2;goto B6dbca8;
case 0x6dbca9:c.instructions+=1;goto B6dbca9;
case 0x6dbcaf:goto L6dbcaf;
case 0x6dbcb5:c.instructions+=6;goto B6dbcb5;
case 0x6dbcba:c.instructions+=5;goto B6dbcba;
case 0x6dbcbc:c.instructions+=4;goto B6dbcbc;
case 0x6dbcbd:c.instructions+=3;goto B6dbcbd;
case 0x6dbcbf:c.instructions+=2;goto B6dbcbf;
case 0x6dbcc0:c.instructions+=1;goto B6dbcc0;
case 0x6dbcc6:goto L6dbcc6;
case 0x6dbccc:c.instructions+=6;goto B6dbccc;
case 0x6dbccf:c.instructions+=5;goto B6dbccf;
case 0x6dbcd2:c.instructions+=4;goto B6dbcd2;
case 0x6dbcd4:c.instructions+=3;goto B6dbcd4;
case 0x6dbcd5:c.instructions+=2;goto B6dbcd5;
case 0x6dbcd6:c.instructions+=1;goto B6dbcd6;
case 0x6dbcdb:goto L6dbcdb;
case 0x6dbcde:goto L6dbcde;
case 0x6dbce1:c.instructions+=3;goto B6dbce1;
case 0x6dbce2:c.instructions+=2;goto B6dbce2;
case 0x6dbce3:c.instructions+=1;goto B6dbce3;
case 0x6dbcf0:goto L6dbcf0;
case 0x6dbcf1:c.instructions+=6;goto B6dbcf1;
case 0x6dbcf3:c.instructions+=5;goto B6dbcf3;
case 0x6dbcf5:c.instructions+=4;goto B6dbcf5;
case 0x6dbcf6:c.instructions+=3;goto B6dbcf6;
case 0x6dbcfa:c.instructions+=2;goto B6dbcfa;
case 0x6dbcfc:c.instructions+=1;goto B6dbcfc;
case 0x6dbcfe:goto L6dbcfe;
case 0x6dbd03:goto L6dbd03;
case 0x6dbd04:c.instructions+=3;goto B6dbd04;
case 0x6dbd07:c.instructions+=2;goto B6dbd07;
case 0x6dbd09:c.instructions+=1;goto B6dbd09;
case 0x6dbd0e:goto L6dbd0e;
case 0x6dbd0f:c.instructions+=2;goto B6dbd0f;
case 0x6dbd10:c.instructions+=1;goto B6dbd10;
case 0x6dbd20:goto L6dbd20;
case 0x6dbd23:c.instructions+=3;goto B6dbd23;
case 0x6dbd26:c.instructions+=2;goto B6dbd26;
case 0x6dbd2b:c.instructions+=1;goto B6dbd2b;
case 0x6dbd2d:goto L6dbd2d;
case 0x6dbd2f:c.instructions+=2;goto B6dbd2f;
case 0x6dbd32:c.instructions+=1;goto B6dbd32;
case 0x6dbd34:goto L6dbd34;
case 0x6dbd37:c.instructions+=1;goto B6dbd37;
case 0x6dbd39:goto L6dbd39;
case 0x6dbd3c:c.instructions+=1;goto B6dbd3c;
case 0x6dbd3e:goto L6dbd3e;
case 0x6dbd41:c.instructions+=1;goto B6dbd41;
case 0x6dbd43:goto L6dbd43;
case 0x6dbd48:goto L6dbd48;
case 0x6dbd50:goto L6dbd50;
case 0x6dbd53:c.instructions+=26;goto B6dbd53;
case 0x6dbd54:c.instructions+=25;goto B6dbd54;
case 0x6dbd56:c.instructions+=24;goto B6dbd56;
case 0x6dbd59:c.instructions+=23;goto B6dbd59;
case 0x6dbd5b:c.instructions+=22;goto B6dbd5b;
case 0x6dbd5e:c.instructions+=21;goto B6dbd5e;
case 0x6dbd5f:c.instructions+=20;goto B6dbd5f;
case 0x6dbd62:c.instructions+=19;goto B6dbd62;
case 0x6dbd63:c.instructions+=18;goto B6dbd63;
case 0x6dbd66:c.instructions+=17;goto B6dbd66;
case 0x6dbd6a:c.instructions+=16;goto B6dbd6a;
case 0x6dbd6c:c.instructions+=15;goto B6dbd6c;
case 0x6dbd70:c.instructions+=14;goto B6dbd70;
case 0x6dbd73:c.instructions+=13;goto B6dbd73;
case 0x6dbd75:c.instructions+=12;goto B6dbd75;
case 0x6dbd78:c.instructions+=11;goto B6dbd78;
case 0x6dbd7a:c.instructions+=10;goto B6dbd7a;
case 0x6dbd7d:c.instructions+=9;goto B6dbd7d;
case 0x6dbd80:c.instructions+=8;goto B6dbd80;
case 0x6dbd83:c.instructions+=7;goto B6dbd83;
case 0x6dbd86:c.instructions+=6;goto B6dbd86;
case 0x6dbd89:c.instructions+=5;goto B6dbd89;
case 0x6dbd8c:c.instructions+=4;goto B6dbd8c;
case 0x6dbd8f:c.instructions+=3;goto B6dbd8f;
case 0x6dbd92:c.instructions+=2;goto B6dbd92;
case 0x6dbd97:c.instructions+=1;goto B6dbd97;
case 0x6dbd9d:goto L6dbd9d;
case 0x6dbd9f:c.instructions+=3;goto B6dbd9f;
case 0x6dbda2:c.instructions+=2;goto B6dbda2;
case 0x6dbda3:c.instructions+=1;goto B6dbda3;
case 0x6dbda5:goto L6dbda5;
case 0x6dbda7:c.instructions+=5;goto B6dbda7;
case 0x6dbda8:c.instructions+=4;goto B6dbda8;
case 0x6dbdad:c.instructions+=3;goto B6dbdad;
case 0x6dbdaf:c.instructions+=2;goto B6dbdaf;
case 0x6dbdb1:c.instructions+=1;goto B6dbdb1;
case 0x6dbdb7:goto L6dbdb7;
case 0x6dbdba:c.instructions+=2;goto B6dbdba;
case 0x6dbdc0:c.instructions+=1;goto B6dbdc0;
case 0x6dbdc6:goto L6dbdc6;
case 0x6dbdc9:c.instructions+=1;goto B6dbdc9;
case 0x6dbdcb:goto L6dbdcb;
case 0x6dbdcd:c.instructions+=2;goto B6dbdcd;
case 0x6dbdd2:c.instructions+=1;goto B6dbdd2;
case 0x6dbdd4:goto L6dbdd4;
case 0x6dbdd5:c.instructions+=2;goto B6dbdd5;
case 0x6dbdd8:c.instructions+=1;goto B6dbdd8;
case 0x6dbdd9:goto L6dbdd9;
case 0x6dbddf:goto L6dbddf;
case 0x6dbde2:c.instructions+=2;goto B6dbde2;
case 0x6dbde8:c.instructions+=1;goto B6dbde8;
case 0x6dbdee:goto L6dbdee;
case 0x6dbdf1:c.instructions+=16;goto B6dbdf1;
case 0x6dbdf3:c.instructions+=15;goto B6dbdf3;
case 0x6dbdf7:c.instructions+=14;goto B6dbdf7;
case 0x6dbdfb:c.instructions+=13;goto B6dbdfb;
case 0x6dbdfd:c.instructions+=12;goto B6dbdfd;
case 0x6dbe00:c.instructions+=11;goto B6dbe00;
case 0x6dbe03:c.instructions+=10;goto B6dbe03;
case 0x6dbe07:c.instructions+=9;goto B6dbe07;
case 0x6dbe0b:c.instructions+=8;goto B6dbe0b;
case 0x6dbe0f:c.instructions+=7;goto B6dbe0f;
case 0x6dbe11:c.instructions+=6;goto B6dbe11;
case 0x6dbe15:c.instructions+=5;goto B6dbe15;
case 0x6dbe18:c.instructions+=4;goto B6dbe18;
case 0x6dbe1c:c.instructions+=3;goto B6dbe1c;
case 0x6dbe1f:c.instructions+=2;goto B6dbe1f;
case 0x6dbe23:c.instructions+=1;goto B6dbe23;
case 0x6dbe25:goto L6dbe25;
case 0x6dbe28:c.instructions+=12;goto B6dbe28;
case 0x6dbe2b:c.instructions+=11;goto B6dbe2b;
case 0x6dbe2f:c.instructions+=10;goto B6dbe2f;
case 0x6dbe31:c.instructions+=9;goto B6dbe31;
case 0x6dbe35:c.instructions+=8;goto B6dbe35;
case 0x6dbe37:c.instructions+=7;goto B6dbe37;
case 0x6dbe3b:c.instructions+=6;goto B6dbe3b;
case 0x6dbe3e:c.instructions+=5;goto B6dbe3e;
case 0x6dbe42:c.instructions+=4;goto B6dbe42;
case 0x6dbe45:c.instructions+=3;goto B6dbe45;
case 0x6dbe47:c.instructions+=2;goto B6dbe47;
case 0x6dbe4b:c.instructions+=1;goto B6dbe4b;
case 0x6dbe50:goto L6dbe50;
case 0x6dbe54:c.instructions+=5;goto B6dbe54;
case 0x6dbe55:c.instructions+=4;goto B6dbe55;
case 0x6dbe59:c.instructions+=3;goto B6dbe59;
case 0x6dbe5a:c.instructions+=2;goto B6dbe5a;
case 0x6dbe5c:c.instructions+=1;goto B6dbe5c;
case 0x6dbe61:goto L6dbe61;
case 0x6dbe65:c.instructions+=5;goto B6dbe65;
case 0x6dbe66:c.instructions+=4;goto B6dbe66;
case 0x6dbe6a:c.instructions+=3;goto B6dbe6a;
case 0x6dbe6b:c.instructions+=2;goto B6dbe6b;
case 0x6dbe6d:c.instructions+=1;goto B6dbe6d;
case 0x6dbe72:goto L6dbe72;
case 0x6dbe73:c.instructions+=4;goto B6dbe73;
case 0x6dbe74:c.instructions+=3;goto B6dbe74;
case 0x6dbe75:c.instructions+=2;goto B6dbe75;
case 0x6dbe78:c.instructions+=1;goto B6dbe78;
case 0x6dbe7b:goto L6dbe7b;
case 0x6dbe7e:c.instructions+=1;goto B6dbe7e;
case 0x6dbe80:goto L6dbe80;
case 0x6dbe82:c.instructions+=1;goto B6dbe82;
case 0x6dbe87:goto L6dbe87;
case 0x6dbe8b:c.instructions+=5;goto B6dbe8b;
case 0x6dbe8c:c.instructions+=4;goto B6dbe8c;
case 0x6dbe90:c.instructions+=3;goto B6dbe90;
case 0x6dbe91:c.instructions+=2;goto B6dbe91;
case 0x6dbe93:c.instructions+=1;goto B6dbe93;
case 0x6dbe98:goto L6dbe98;
case 0x6dbe99:c.instructions+=4;goto B6dbe99;
case 0x6dbe9a:c.instructions+=3;goto B6dbe9a;
case 0x6dbe9b:c.instructions+=2;goto B6dbe9b;
case 0x6dbe9e:c.instructions+=1;goto B6dbe9e;
case 0x6dbea1:goto L6dbea1;
case 0x6dbea4:c.instructions+=1;goto B6dbea4;
case 0x6dbea6:goto L6dbea6;
case 0x6dbea9:c.instructions+=9;goto B6dbea9;
case 0x6dbead:c.instructions+=8;goto B6dbead;
case 0x6dbeaf:c.instructions+=7;goto B6dbeaf;
case 0x6dbeb3:c.instructions+=6;goto B6dbeb3;
case 0x6dbeb6:c.instructions+=5;goto B6dbeb6;
case 0x6dbeba:c.instructions+=4;goto B6dbeba;
case 0x6dbebd:c.instructions+=3;goto B6dbebd;
case 0x6dbec1:c.instructions+=2;goto B6dbec1;
case 0x6dbec3:c.instructions+=1;goto B6dbec3;
case 0x6dbec8:goto L6dbec8;
case 0x6dbecc:c.instructions+=5;goto B6dbecc;
case 0x6dbecd:c.instructions+=4;goto B6dbecd;
case 0x6dbed1:c.instructions+=3;goto B6dbed1;
case 0x6dbed2:c.instructions+=2;goto B6dbed2;
case 0x6dbed4:c.instructions+=1;goto B6dbed4;
case 0x6dbed9:goto L6dbed9;
case 0x6dbedb:goto L6dbedb;
case 0x6dbede:c.instructions+=1;goto B6dbede;
case 0x6dbee0:goto L6dbee0;
case 0x6dbee3:c.instructions+=1;goto B6dbee3;
case 0x6dbee5:goto L6dbee5;
case 0x6dbee7:c.instructions+=1;goto B6dbee7;
case 0x6dbeec:goto L6dbeec;
case 0x6dbeed:goto L6dbeed;
case 0x6dbeee:c.instructions+=3;goto B6dbeee;
case 0x6dbeef:c.instructions+=2;goto B6dbeef;
case 0x6dbef2:c.instructions+=1;goto B6dbef2;
case 0x6dbf00:goto L6dbf00;
case 0x6dbf01:c.instructions+=4;goto B6dbf01;
case 0x6dbf03:c.instructions+=3;goto B6dbf03;
case 0x6dbf06:c.instructions+=2;goto B6dbf06;
case 0x6dbf0c:c.instructions+=1;goto B6dbf0c;
case 0x6dbf11:goto L6dbf11;
case 0x6dbf13:c.instructions+=5;goto B6dbf13;
case 0x6dbf19:c.instructions+=4;goto B6dbf19;
case 0x6dbf1c:c.instructions+=3;goto B6dbf1c;
case 0x6dbf1f:c.instructions+=2;goto B6dbf1f;
case 0x6dbf22:c.instructions+=1;goto B6dbf22;
case 0x6dbf27:goto L6dbf27;
case 0x6dbf29:c.instructions+=2;goto B6dbf29;
case 0x6dbf2a:c.instructions+=1;goto B6dbf2a;
case 0x6dbf30:goto L6dbf30;
case 0x6dbf34:c.instructions+=3;goto B6dbf34;
case 0x6dbf36:c.instructions+=2;goto B6dbf36;
case 0x6dbf3c:c.instructions+=1;goto B6dbf3c;
case 0x6dbf3e:goto L6dbf3e;
case 0x6dbf43:c.instructions+=6;goto B6dbf43;
case 0x6dbf45:c.instructions+=5;goto B6dbf45;
case 0x6dbf4a:c.instructions+=4;goto B6dbf4a;
case 0x6dbf4c:c.instructions+=3;goto B6dbf4c;
case 0x6dbf4d:c.instructions+=2;goto B6dbf4d;
case 0x6dbf4e:c.instructions+=1;goto B6dbf4e;
case 0x6dbf54:goto L6dbf54;
case 0x6dbf59:goto L6dbf59;
case 0x6dbf5f:goto L6dbf5f;
case 0x6dbf60:goto L6dbf60;
case 0x6dbf64:c.instructions+=2;goto B6dbf64;
case 0x6dbf6a:c.instructions+=1;goto B6dbf6a;
case 0x6dbf6c:goto L6dbf6c;
case 0x6dbf72:c.instructions+=5;goto B6dbf72;
case 0x6dbf73:c.instructions+=4;goto B6dbf73;
case 0x6dbf78:c.instructions+=3;goto B6dbf78;
case 0x6dbf7a:c.instructions+=2;goto B6dbf7a;
case 0x6dbf7b:c.instructions+=1;goto B6dbf7b;
case 0x6dbf81:goto L6dbf81;
case 0x6dbf86:goto L6dbf86;
case 0x6dbf8c:goto L6dbf8c;
case 0x6dbf90:goto L6dbf90;
case 0x6dbf94:c.instructions+=9;goto B6dbf94;
case 0x6dbf99:c.instructions+=8;goto B6dbf99;
case 0x6dbf9b:c.instructions+=7;goto B6dbf9b;
case 0x6dbf9c:c.instructions+=6;goto B6dbf9c;
case 0x6dbfa0:c.instructions+=5;goto B6dbfa0;
case 0x6dbfa1:c.instructions+=4;goto B6dbfa1;
case 0x6dbfa5:c.instructions+=3;goto B6dbfa5;
case 0x6dbfa6:c.instructions+=2;goto B6dbfa6;
case 0x6dbfa7:c.instructions+=1;goto B6dbfa7;
case 0x6dbfad:goto L6dbfad;
case 0x6dbfb0:goto L6dbfb0;
case 0x6dbfb1:c.instructions+=5;goto B6dbfb1;
case 0x6dbfb5:c.instructions+=4;goto B6dbfb5;
case 0x6dbfb6:c.instructions+=3;goto B6dbfb6;
case 0x6dbfba:c.instructions+=2;goto B6dbfba;
case 0x6dbfc1:c.instructions+=1;goto B6dbfc1;
case 0x6dbfc3:goto L6dbfc3;
case 0x6dbfc6:c.instructions+=8;goto B6dbfc6;
case 0x6dbfcb:c.instructions+=7;goto B6dbfcb;
case 0x6dbfcd:c.instructions+=6;goto B6dbfcd;
case 0x6dbfce:c.instructions+=5;goto B6dbfce;
case 0x6dbfd1:c.instructions+=4;goto B6dbfd1;
case 0x6dbfd2:c.instructions+=3;goto B6dbfd2;
case 0x6dbfd3:c.instructions+=2;goto B6dbfd3;
case 0x6dbfd4:c.instructions+=1;goto B6dbfd4;
case 0x6dbfda:goto L6dbfda;
case 0x6dbfdf:c.instructions+=3;goto B6dbfdf;
case 0x6dbfe0:c.instructions+=2;goto B6dbfe0;
case 0x6dbfe7:c.instructions+=1;goto B6dbfe7;
case 0x6dbfec:goto L6dbfec;
case 0x6dbfed:c.instructions+=2;goto B6dbfed;
case 0x6dbfee:c.instructions+=1;goto B6dbfee;
case 0x6dbff0:goto L6dbff0;
case 0x6dbff4:c.instructions+=2;goto B6dbff4;
case 0x6dbff9:c.instructions+=1;goto B6dbff9;
default:missing_instruction(c.pc);}
B6db005:L6db005:{c.instructions+=3;NFSU2_TR(0x6db005);
__builtin_memmove((R+0),gp(0x80ed8c),4);
}
B6db00a:{NFSU2_TR(0x6db00a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6db00d:{NFSU2_TR(0x6db00d);
if(r1(R+518)){{goto L6db038;}}
}
B6db00f:L6db00f:{c.instructions+=3;NFSU2_TR(0x6db00f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6db011:{NFSU2_TR(0x6db011);
u8 U[26];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x80ee30ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+18),r4(R+0)));
w4(U+22,u32(u32(r4(U+18))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6db018:{NFSU2_TR(0x6db018);
if(r1(R+518)){{goto L6db064;}}
}
B6db01a:L6db01a:{c.instructions+=9;NFSU2_TR(0x6db01a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db01b:{NFSU2_TR(0x6db01b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x80ee30ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6db022:{NFSU2_TR(0x6db022);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6db024:{NFSU2_TR(0x6db024);
__builtin_memmove((R+4),gp(0x8a79a0),4);
}
B6db02a:{NFSU2_TR(0x6db02a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6db02c:{NFSU2_TR(0x6db02c);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db02e:{NFSU2_TR(0x6db02e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db02f:{NFSU2_TR(0x6db02f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db030:{NFSU2_TR(0x6db030);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6db036ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6db036:L6db036:{c.instructions+=1;NFSU2_TR(0x6db036);
{goto L6db064;}
}
B6db038:L6db038:{c.instructions+=4;NFSU2_TR(0x6db038);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6db03a:{NFSU2_TR(0x6db03a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6db03d:{NFSU2_TR(0x6db03d);
u8 U[26];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x80ee30ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+18),r4(R+4)));
w4(U+22,u32(u32(r4(U+18))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6db044:{NFSU2_TR(0x6db044);
if(r1(R+518)){{goto L6db064;}}
}
B6db046:L6db046:{c.instructions+=10;NFSU2_TR(0x6db046);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x80ee30ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6db04d:{NFSU2_TR(0x6db04d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6db050:{NFSU2_TR(0x6db050);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6db055:{NFSU2_TR(0x6db055);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6db057:{NFSU2_TR(0x6db057);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db058:{NFSU2_TR(0x6db058);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6db05a:{NFSU2_TR(0x6db05a);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db05c:{NFSU2_TR(0x6db05c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db05d:{NFSU2_TR(0x6db05d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db05e:{NFSU2_TR(0x6db05e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6db064ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6db064:L6db064:{c.instructions+=7;NFSU2_TR(0x6db064);
{u32 ea_=u32(u32(9075396u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6db06a:{NFSU2_TR(0x6db06a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6db06c:{NFSU2_TR(0x6db06c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6db072:{NFSU2_TR(0x6db072);
{u32 ea_=u32((r4(R+4)*4u)+u32(9075444u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6db079:{NFSU2_TR(0x6db079);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6db07b:{NFSU2_TR(0x6db07b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6db07e:{NFSU2_TR(0x6db07e);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6db0a2;}}
}
B6db080:L6db080:{c.instructions+=4;NFSU2_TR(0x6db080);
{u32 ea_=u32(u32(9075396u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6db086:{NFSU2_TR(0x6db086);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6db088:{NFSU2_TR(0x6db088);
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
B6db08b:{NFSU2_TR(0x6db08b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6db0cd;}}
}
B6db08d:L6db08d:{c.instructions+=4;NFSU2_TR(0x6db08d);
{u32 ea_=u32(u32(9075396u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6db093:{NFSU2_TR(0x6db093);
__builtin_memmove((R+8),gp(0x8a7ac4),4);
}
B6db099:{NFSU2_TR(0x6db099);
{u32 ea_=u32((r4(R+4)*4u)+u32(9075444u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6db0a0:{NFSU2_TR(0x6db0a0);
{goto L6db0b9;}
}
B6db0a2:L6db0a2:{c.instructions+=4;NFSU2_TR(0x6db0a2);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6db0a5:{NFSU2_TR(0x6db0a5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6db0a7:{NFSU2_TR(0x6db0a7);
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
B6db0aa:{NFSU2_TR(0x6db0aa);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6db0cd;}}
}
B6db0ac:L6db0ac:{c.instructions+=3;NFSU2_TR(0x6db0ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6db0af:{NFSU2_TR(0x6db0af);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a7af4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6db0b6:{NFSU2_TR(0x6db0b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6db0b9:L6db0b9:{c.instructions+=8;NFSU2_TR(0x6db0b9);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6db0be:{NFSU2_TR(0x6db0be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6db0c0:{NFSU2_TR(0x6db0c0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db0c1:{NFSU2_TR(0x6db0c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6db0c3:{NFSU2_TR(0x6db0c3);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db0c5:{NFSU2_TR(0x6db0c5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db0c6:{NFSU2_TR(0x6db0c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db0c7:{NFSU2_TR(0x6db0c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6db0cdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6db0cd:L6db0cd:{c.instructions+=2;NFSU2_TR(0x6db0cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6db0ce:{NFSU2_TR(0x6db0ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6db0d0:L6db0d0:{c.instructions+=5;NFSU2_TR(0x6db0d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6db0d2:{NFSU2_TR(0x6db0d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6db0d6:{NFSU2_TR(0x6db0d6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6db0d8:{NFSU2_TR(0x6db0d8);
w1(R+0,u8(0x1ull));
}
B6db0da:{NFSU2_TR(0x6db0da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6db0e0:L6db0e0:{c.instructions+=4;NFSU2_TR(0x6db0e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db0e1:{NFSU2_TR(0x6db0e1);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6db0e4:{NFSU2_TR(0x6db0e4);
w4(R+4,u32(0x8ull));
}
B6db0e9:{NFSU2_TR(0x6db0e9);
w4(R+28,u32(0x80ee50ull));
}
B6db0ee:L6db0ee:{c.instructions+=1;NFSU2_TR(0x6db0ee);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6db0f0;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6db0eeu);}goto L6db0ee;}
}
B6db0f0:L6db0f0:{c.instructions+=3;NFSU2_TR(0x6db0f0);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6db0f3:{NFSU2_TR(0x6db0f3);
w4(R+4,u32(0x8ull));
}
B6db0f8:{NFSU2_TR(0x6db0f8);
w4(R+28,u32(0x80ee30ull));
}
B6db0fd:L6db0fd:{c.instructions+=1;NFSU2_TR(0x6db0fd);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6db0ff;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6db0fdu);}goto L6db0fd;}
}
B6db0ff:L6db0ff:{c.instructions+=3;NFSU2_TR(0x6db0ff);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6db101:{NFSU2_TR(0x6db101);
w4(R+4,u32(0x8ull));
}
B6db106:{NFSU2_TR(0x6db106);
w4(R+28,u32(0x8a7af4ull));
}
B6db10b:L6db10b:{c.instructions+=1;NFSU2_TR(0x6db10b);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6db10d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6db10bu);}goto L6db10b;}
}
B6db10d:L6db10d:{c.instructions+=3;NFSU2_TR(0x6db10d);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6db110:{NFSU2_TR(0x6db110);
w4(R+4,u32(0x8ull));
}
B6db115:{NFSU2_TR(0x6db115);
w4(R+28,u32(0x80ee10ull));
}
B6db11a:L6db11a:{c.instructions+=1;NFSU2_TR(0x6db11a);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6db11c;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6db11au);}goto L6db11a;}
}
B6db11c:L6db11c:{c.instructions+=3;NFSU2_TR(0x6db11c);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6db11f:{NFSU2_TR(0x6db11f);
w4(R+4,u32(0x8ull));
}
B6db124:{NFSU2_TR(0x6db124);
w4(R+28,u32(0x80edf0ull));
}
B6db129:L6db129:{c.instructions+=1;NFSU2_TR(0x6db129);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6db12b;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6db129u);}goto L6db129;}
}
B6db12b:L6db12b:{c.instructions+=3;NFSU2_TR(0x6db12b);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6db12e:{NFSU2_TR(0x6db12e);
w4(R+4,u32(0x8ull));
}
B6db133:{NFSU2_TR(0x6db133);
w4(R+28,u32(0x80edd0ull));
}
B6db138:L6db138:{c.instructions+=1;NFSU2_TR(0x6db138);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6db13a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6db138u);}goto L6db138;}
}
B6db13a:L6db13a:{c.instructions+=3;NFSU2_TR(0x6db13a);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6db13d:{NFSU2_TR(0x6db13d);
w4(R+4,u32(0x8ull));
}
B6db142:{NFSU2_TR(0x6db142);
w4(R+28,u32(0x80edb0ull));
}
B6db147:L6db147:{c.instructions+=1;NFSU2_TR(0x6db147);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6db149;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6db147u);}goto L6db147;}
}
B6db149:L6db149:{c.instructions+=3;NFSU2_TR(0x6db149);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6db14c:{NFSU2_TR(0x6db14c);
w4(R+4,u32(0x8ull));
}
B6db151:{NFSU2_TR(0x6db151);
w4(R+28,u32(0x80ed90ull));
}
B6db156:L6db156:{c.instructions+=1;NFSU2_TR(0x6db156);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6db158;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6db156u);}goto L6db156;}
}
B6db158:L6db158:{c.instructions+=3;NFSU2_TR(0x6db158);
w4(R+4,u32(0x8ull));
}
B6db15d:{NFSU2_TR(0x6db15d);
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
B6db15f:{NFSU2_TR(0x6db15f);
w4(R+28,u32(0x8a7ad4ull));
}
B6db164:L6db164:{c.instructions+=1;NFSU2_TR(0x6db164);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6db166;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6db164u);}goto L6db164;}
}
B6db166:L6db166:{c.instructions+=2;NFSU2_TR(0x6db166);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6db167:{NFSU2_TR(0x6db167);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6db170:L6db170:{c.instructions+=6;NFSU2_TR(0x6db170);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db171:{NFSU2_TR(0x6db171);
__builtin_memmove((R+24),gp(0x8a7ac0),4);
}
B6db177:{NFSU2_TR(0x6db177);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db178:{NFSU2_TR(0x6db178);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6db17a:{NFSU2_TR(0x6db17a);
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
B6db17c:{NFSU2_TR(0x6db17c);
if(r1(R+518)){{goto L6db1bf;}}
}
B6db17e:L6db17e:{c.instructions+=1;NFSU2_TR(0x6db17e);
__builtin_memmove((R+28),(R+28),4);
}
B6db180:L6db180:{c.instructions+=3;NFSU2_TR(0x6db180);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6db182:{NFSU2_TR(0x6db182);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6db184:{NFSU2_TR(0x6db184);
if(r1(R+518)){{goto L6db1b8;}}
}
B6db186:L6db186:{c.instructions+=4;NFSU2_TR(0x6db186);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6db189:{NFSU2_TR(0x6db189);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6db18c:{NFSU2_TR(0x6db18c);
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
B6db18e:{NFSU2_TR(0x6db18e);
if(r1(R+518)){{goto L6db19e;}}
}
B6db190:L6db190:{c.instructions+=3;NFSU2_TR(0x6db190);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6db192:{NFSU2_TR(0x6db192);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db193:{NFSU2_TR(0x6db193);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6db196ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6db196:L6db196:{c.instructions+=3;NFSU2_TR(0x6db196);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6db198:{NFSU2_TR(0x6db198);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6db19b:{NFSU2_TR(0x6db19b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db19e:L6db19e:{c.instructions+=5;NFSU2_TR(0x6db19e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6db1a0:{NFSU2_TR(0x6db1a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6db1a3:{NFSU2_TR(0x6db1a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6db1a6:{NFSU2_TR(0x6db1a6);
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
B6db1a8:{NFSU2_TR(0x6db1a8);
if(r1(R+518)){{goto L6db1b8;}}
}
B6db1aa:L6db1aa:{c.instructions+=3;NFSU2_TR(0x6db1aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6db1ac:{NFSU2_TR(0x6db1ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db1ad:{NFSU2_TR(0x6db1ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6db1b0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6db1b0:L6db1b0:{c.instructions+=3;NFSU2_TR(0x6db1b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6db1b2:{NFSU2_TR(0x6db1b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6db1b5:{NFSU2_TR(0x6db1b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db1b8:L6db1b8:{c.instructions+=3;NFSU2_TR(0x6db1b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6db1bb:{NFSU2_TR(0x6db1bb);
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
B6db1bd:{NFSU2_TR(0x6db1bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6db180u);}goto L6db180;}}
}
B6db1bf:L6db1bf:{c.instructions+=3;NFSU2_TR(0x6db1bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6db1c0:{NFSU2_TR(0x6db1c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6db1c1:{NFSU2_TR(0x6db1c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6db1d0:L6db1d0:{c.instructions+=5;NFSU2_TR(0x6db1d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db1d1:{NFSU2_TR(0x6db1d1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db1d2:{NFSU2_TR(0x6db1d2);
__builtin_memmove((R+28),gp(0x8a7ac0),4);
}
B6db1d8:{NFSU2_TR(0x6db1d8);
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
B6db1da:{NFSU2_TR(0x6db1da);
if(r1(R+518)){{goto L6db279;}}
}
B6db1e0:L6db1e0:{c.instructions+=2;NFSU2_TR(0x6db1e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db1e1:{NFSU2_TR(0x6db1e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db1e2:L6db1e2:{c.instructions+=3;NFSU2_TR(0x6db1e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6db1e4:{NFSU2_TR(0x6db1e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6db1e6:{NFSU2_TR(0x6db1e6);
if(r1(R+518)){{goto L6db26c;}}
}
B6db1ec:L6db1ec:{c.instructions+=2;NFSU2_TR(0x6db1ec);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
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
B6db1f0:{NFSU2_TR(0x6db1f0);
if(r1(R+518)){{goto L6db227;}}
}
B6db1f2:L6db1f2:{c.instructions+=17;NFSU2_TR(0x6db1f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6db1f5:{NFSU2_TR(0x6db1f5);
__builtin_memmove((R+4),gp(0x8a79a0),4);
}
B6db1fb:{NFSU2_TR(0x6db1fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6db1fd:{NFSU2_TR(0x6db1fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6db200:{NFSU2_TR(0x6db200);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db201:{NFSU2_TR(0x6db201);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6db204:{NFSU2_TR(0x6db204);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db206:{NFSU2_TR(0x6db206);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db207:{NFSU2_TR(0x6db207);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6db20a:{NFSU2_TR(0x6db20a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db20c:{NFSU2_TR(0x6db20c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db20d:{NFSU2_TR(0x6db20d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6db210:{NFSU2_TR(0x6db210);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6db213:{NFSU2_TR(0x6db213);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db214:{NFSU2_TR(0x6db214);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db215:{NFSU2_TR(0x6db215);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db216:{NFSU2_TR(0x6db216);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6db219ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6db219:L6db219:{c.instructions+=2;NFSU2_TR(0x6db219);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6db21b:{NFSU2_TR(0x6db21b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6db227;}}
}
B6db21d:L6db21d:{c.instructions+=2;NFSU2_TR(0x6db21d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6db220:{NFSU2_TR(0x6db220);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6db227:L6db227:{c.instructions+=2;NFSU2_TR(0x6db227);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B6db22b:{NFSU2_TR(0x6db22b);
if(r1(R+518)){{goto L6db26c;}}
}
B6db22d:L6db22d:{c.instructions+=3;NFSU2_TR(0x6db22d);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6db231:{NFSU2_TR(0x6db231);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db232:{NFSU2_TR(0x6db232);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6db237ull));
TAIL_STATIC(0x6d81f0u,6d8);
}
B6db237:L6db237:{c.instructions+=2;NFSU2_TR(0x6db237);
__builtin_memmove((R+4),(R+0),4);
}
B6db239:{NFSU2_TR(0x6db239);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6db23eull));
TAIL_STATIC(0x6d8190u,6d8);
}
B6db23e:L6db23e:{c.instructions+=3;NFSU2_TR(0x6db23e);
__builtin_memmove((R+4),(R+0),4);
}
B6db240:{NFSU2_TR(0x6db240);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x10ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6db243:{NFSU2_TR(0x6db243);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6db248ull));
TAIL_STATIC(0x6d8990u,6d8);
}
B6db248:L6db248:{c.instructions+=15;NFSU2_TR(0x6db248);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6db24b:{NFSU2_TR(0x6db24b);
__builtin_memmove((R+4),gp(0x8a79a0),4);
}
B6db251:{NFSU2_TR(0x6db251);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6db253:{NFSU2_TR(0x6db253);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((R+24),(U+0),4);
}
B6db256:{NFSU2_TR(0x6db256);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db257:{NFSU2_TR(0x6db257);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6db25b:{NFSU2_TR(0x6db25b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db25c:{NFSU2_TR(0x6db25c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6db25f:{NFSU2_TR(0x6db25f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db260:{NFSU2_TR(0x6db260);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6db263:{NFSU2_TR(0x6db263);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6db266:{NFSU2_TR(0x6db266);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db267:{NFSU2_TR(0x6db267);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db268:{NFSU2_TR(0x6db268);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db269:{NFSU2_TR(0x6db269);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6db26cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6db26c:L6db26c:{c.instructions+=3;NFSU2_TR(0x6db26c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6db26f:{NFSU2_TR(0x6db26f);
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
B6db271:{NFSU2_TR(0x6db271);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6db1e2u);}goto L6db1e2;}}
}
B6db277:L6db277:{c.instructions+=2;NFSU2_TR(0x6db277);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6db278:{NFSU2_TR(0x6db278);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6db279:L6db279:{c.instructions+=3;NFSU2_TR(0x6db279);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6db27a:{NFSU2_TR(0x6db27a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6db27b:{NFSU2_TR(0x6db27b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6db280:L6db280:{c.instructions+=4;NFSU2_TR(0x6db280);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6db284:{NFSU2_TR(0x6db284);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6db286:{NFSU2_TR(0x6db286);
w1(R+0,u8(0x1ull));
}
B6db288:{NFSU2_TR(0x6db288);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6db290:L6db290:{c.instructions+=4;NFSU2_TR(0x6db290);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6db294:{NFSU2_TR(0x6db294);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db297:{NFSU2_TR(0x6db297);
w1(R+0,u8(0x1ull));
}
B6db299:{NFSU2_TR(0x6db299);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6db2a0:L6db2a0:{c.instructions+=4;NFSU2_TR(0x6db2a0);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6db2a5:{NFSU2_TR(0x6db2a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db2a8:{NFSU2_TR(0x6db2a8);
w1(R+0,u8(0x1ull));
}
B6db2aa:{NFSU2_TR(0x6db2aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6db2b0:L6db2b0:{c.instructions+=4;NFSU2_TR(0x6db2b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6db2b4:{NFSU2_TR(0x6db2b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db2b7:{NFSU2_TR(0x6db2b7);
w1(R+0,u8(0x1ull));
}
B6db2b9:{NFSU2_TR(0x6db2b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6db2c0:L6db2c0:{c.instructions+=4;NFSU2_TR(0x6db2c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6db2c4:{NFSU2_TR(0x6db2c4);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6db2c7:{NFSU2_TR(0x6db2c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db2ca:{NFSU2_TR(0x6db2ca);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6db345;}}
}
B6db2cc:L6db2cc:{c.instructions+=2;NFSU2_TR(0x6db2cc);
w4(R+0,u32(0x1ull));
}
B6db2d1:{NFSU2_TR(0x6db2d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x6db34cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6db2d8:L6db2d8:{c.instructions+=4;NFSU2_TR(0x6db2d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6db2df:{NFSU2_TR(0x6db2df);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db2e2:{NFSU2_TR(0x6db2e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db2e5:{NFSU2_TR(0x6db2e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6db2e8:L6db2e8:{c.instructions+=4;NFSU2_TR(0x6db2e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6db2ef:{NFSU2_TR(0x6db2ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6db2f6:{NFSU2_TR(0x6db2f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db2f9:{NFSU2_TR(0x6db2f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6db2fc:L6db2fc:{c.instructions+=4;NFSU2_TR(0x6db2fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6db303:{NFSU2_TR(0x6db303);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6db30a:{NFSU2_TR(0x6db30a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db30d:{NFSU2_TR(0x6db30d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6db310:L6db310:{c.instructions+=5;NFSU2_TR(0x6db310);
w4(R+8,u32(0x2ull));
}
B6db315:{NFSU2_TR(0x6db315);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db318:{NFSU2_TR(0x6db318);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db31b:{NFSU2_TR(0x6db31b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6db322:{NFSU2_TR(0x6db322);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6db325:L6db325:{c.instructions+=4;NFSU2_TR(0x6db325);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6db32c:{NFSU2_TR(0x6db32c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db32f:{NFSU2_TR(0x6db32f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db332:{NFSU2_TR(0x6db332);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6db335:L6db335:{c.instructions+=4;NFSU2_TR(0x6db335);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6db33c:{NFSU2_TR(0x6db33c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db33f:{NFSU2_TR(0x6db33f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db342:{NFSU2_TR(0x6db342);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6db345:L6db345:{c.instructions+=2;NFSU2_TR(0x6db345);
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
B6db347:{NFSU2_TR(0x6db347);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6db370:L6db370:{c.instructions+=4;NFSU2_TR(0x6db370);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6db375:{NFSU2_TR(0x6db375);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db378:{NFSU2_TR(0x6db378);
w1(R+0,u8(0x1ull));
}
B6db37a:{NFSU2_TR(0x6db37a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6db380:L6db380:{c.instructions+=8;NFSU2_TR(0x6db380);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db381:{NFSU2_TR(0x6db381);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db382:{NFSU2_TR(0x6db382);
__builtin_memmove((R+24),(R+4),4);
}
B6db384:{NFSU2_TR(0x6db384);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6db386:{NFSU2_TR(0x6db386);
__builtin_memmove(gp(0x8a8060),(R+0),4);
}
B6db38b:{NFSU2_TR(0x6db38b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6db38e:{NFSU2_TR(0x6db38e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6db390:{NFSU2_TR(0x6db390);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6db3c3;}}
}
B6db392:L6db392:{c.instructions+=2;NFSU2_TR(0x6db392);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db393:{NFSU2_TR(0x6db393);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6db395:L6db395:{c.instructions+=3;NFSU2_TR(0x6db395);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a7ad4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6db39c:{NFSU2_TR(0x6db39c);
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
B6db39e:{NFSU2_TR(0x6db39e);
if(r1(R+518)){{goto L6db3b1;}}
}
B6db3a0:L6db3a0:{c.instructions+=6;NFSU2_TR(0x6db3a0);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6db3a5:{NFSU2_TR(0x6db3a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6db3a7:{NFSU2_TR(0x6db3a7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db3a9:{NFSU2_TR(0x6db3a9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db3aa:{NFSU2_TR(0x6db3aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db3ab:{NFSU2_TR(0x6db3ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6db3b1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6db3b1:L6db3b1:{c.instructions+=4;NFSU2_TR(0x6db3b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a7ad4ull))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B6db3bc:{NFSU2_TR(0x6db3bc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6db3bd:{NFSU2_TR(0x6db3bd);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6db3c0:{NFSU2_TR(0x6db3c0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6db395u);}goto L6db395;}}
}
B6db3c2:L6db3c2:{c.instructions+=1;NFSU2_TR(0x6db3c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6db3c3:L6db3c3:{c.instructions+=3;NFSU2_TR(0x6db3c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6db3c6:{NFSU2_TR(0x6db3c6);
u8 U[8];
__builtin_memmove((U+0),gp(0x80eef4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6db3cc:{NFSU2_TR(0x6db3cc);
if(r1(R+518)){{goto L6db42d;}}
}
B6db3ce:L6db3ce:{c.instructions+=2;NFSU2_TR(0x6db3ce);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6db3d1:{NFSU2_TR(0x6db3d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6db405;}}
}
B6db3d3:L6db3d3:{c.instructions+=3;NFSU2_TR(0x6db3d3);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6db3d7:{NFSU2_TR(0x6db3d7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db3d8:{NFSU2_TR(0x6db3d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6db3ddull));
TAIL_STATIC(0x6d81f0u,6d8);
}
B6db3dd:L6db3dd:{c.instructions+=2;NFSU2_TR(0x6db3dd);
__builtin_memmove((R+4),(R+0),4);
}
B6db3df:{NFSU2_TR(0x6db3df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6db3e4ull));
TAIL_STATIC(0x6d8190u,6d8);
}
B6db3e4:L6db3e4:{c.instructions+=2;NFSU2_TR(0x6db3e4);
__builtin_memmove((R+4),(R+0),4);
}
B6db3e6:{NFSU2_TR(0x6db3e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6db3ebull));
TAIL_STATIC(0x6d8970u,6d8);
}
B6db3eb:L6db3eb:{c.instructions+=3;NFSU2_TR(0x6db3eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6db3ef:{NFSU2_TR(0x6db3ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db3f0:{NFSU2_TR(0x6db3f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6db3f5ull));
TAIL_STATIC(0x6d81f0u,6d8);
}
B6db3f5:L6db3f5:{c.instructions+=2;NFSU2_TR(0x6db3f5);
__builtin_memmove((R+4),(R+0),4);
}
B6db3f7:{NFSU2_TR(0x6db3f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6db3fcull));
TAIL_STATIC(0x6d8190u,6d8);
}
B6db3fc:L6db3fc:{c.instructions+=2;NFSU2_TR(0x6db3fc);
__builtin_memmove((R+4),(R+0),4);
}
B6db3fe:{NFSU2_TR(0x6db3fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6db403ull));
TAIL_STATIC(0x6d8930u,6d8);
}
B6db403:L6db403:{c.instructions+=1;NFSU2_TR(0x6db403);
{goto L6db42d;}
}
B6db405:L6db405:{c.instructions+=13;NFSU2_TR(0x6db405);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6db407:{NFSU2_TR(0x6db407);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6db40a:{NFSU2_TR(0x6db40a);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
}
B6db40c:{NFSU2_TR(0x6db40c);
__builtin_memmove(gp(0x80c094),(R+0),1);
}
B6db411:{NFSU2_TR(0x6db411);
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
B6db414:{NFSU2_TR(0x6db414);
__builtin_memmove(gp(0x80eef4),(R+0),4);
}
B6db419:{NFSU2_TR(0x6db419);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6db41c:{NFSU2_TR(0x6db41c);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6db421:{NFSU2_TR(0x6db421);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6db423:{NFSU2_TR(0x6db423);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db424:{NFSU2_TR(0x6db424);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db426:{NFSU2_TR(0x6db426);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db427:{NFSU2_TR(0x6db427);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6db42dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6db42d:L6db42d:{c.instructions+=5;NFSU2_TR(0x6db42d);
{u32 ea_=u32(u32(8449776u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6db433:{NFSU2_TR(0x6db433);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6db436:{NFSU2_TR(0x6db436);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6db438:{NFSU2_TR(0x6db438);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6db43b:{NFSU2_TR(0x6db43b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6db476;}}
}
B6db43d:L6db43d:{c.instructions+=2;NFSU2_TR(0x6db43d);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6db440:{NFSU2_TR(0x6db440);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6db445ull));
TAIL_STATIC(0x75bed4u,75b);
}
B6db445:L6db445:{c.instructions+=8;NFSU2_TR(0x6db445);
__builtin_memmove(gp(0x80eef0),(R+0),4);
}
B6db44a:{NFSU2_TR(0x6db44a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6db44d:{NFSU2_TR(0x6db44d);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6db452:{NFSU2_TR(0x6db452);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6db454:{NFSU2_TR(0x6db454);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db455:{NFSU2_TR(0x6db455);
u8 U[4];
w4(U+0,u32(0xa4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db45a:{NFSU2_TR(0x6db45a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db45b:{NFSU2_TR(0x6db45b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6db461ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6db461:L6db461:{c.instructions+=6;NFSU2_TR(0x6db461);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6db466:{NFSU2_TR(0x6db466);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6db468:{NFSU2_TR(0x6db468);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db46a:{NFSU2_TR(0x6db46a);
u8 U[4];
w4(U+0,u32(0xa3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db46f:{NFSU2_TR(0x6db46f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db470:{NFSU2_TR(0x6db470);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6db476ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6db476:L6db476:{c.instructions+=3;NFSU2_TR(0x6db476);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6db479:{NFSU2_TR(0x6db479);
u8 U[14];
__builtin_memmove((U+6),gp(0x80eee8),4);
w1(R+512,u8((r4(U+6))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+0)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6db47f:{NFSU2_TR(0x6db47f);
if(r1(R+518)){{goto L6db49a;}}
}
B6db481:L6db481:{c.instructions+=8;NFSU2_TR(0x6db481);
__builtin_memmove(gp(0x80eee8),(R+0),4);
}
B6db486:{NFSU2_TR(0x6db486);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6db489:{NFSU2_TR(0x6db489);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6db48e:{NFSU2_TR(0x6db48e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6db490:{NFSU2_TR(0x6db490);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db491:{NFSU2_TR(0x6db491);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db493:{NFSU2_TR(0x6db493);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db494:{NFSU2_TR(0x6db494);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6db49aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6db49a:L6db49a:{c.instructions+=3;NFSU2_TR(0x6db49a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6db49d:{NFSU2_TR(0x6db49d);
u8 U[14];
__builtin_memmove((U+6),gp(0x80eeec),4);
w1(R+512,u8((r4(U+6))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+0)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6db4a3:{NFSU2_TR(0x6db4a3);
if(r1(R+518)){{goto L6db4c1;}}
}
B6db4a5:L6db4a5:{c.instructions+=8;NFSU2_TR(0x6db4a5);
__builtin_memmove(gp(0x80eeec),(R+0),4);
}
B6db4aa:{NFSU2_TR(0x6db4aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6db4ad:{NFSU2_TR(0x6db4ad);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6db4b2:{NFSU2_TR(0x6db4b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6db4b4:{NFSU2_TR(0x6db4b4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db4b5:{NFSU2_TR(0x6db4b5);
u8 U[4];
w4(U+0,u32(0xabull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db4ba:{NFSU2_TR(0x6db4ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db4bb:{NFSU2_TR(0x6db4bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6db4c1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6db4c1:L6db4c1:{c.instructions+=3;NFSU2_TR(0x6db4c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6db4c4:{NFSU2_TR(0x6db4c4);
u8 U[8];
__builtin_memmove((U+0),gp(0x80eebc),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6db4ca:{NFSU2_TR(0x6db4ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6db4d7;}}
}
B6db4cc:L6db4cc:{c.instructions+=3;NFSU2_TR(0x6db4cc);
__builtin_memmove((R+8),gp(0x80eec0),4);
}
B6db4d2:{NFSU2_TR(0x6db4d2);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6db4d5:{NFSU2_TR(0x6db4d5);
if(r1(R+518)){{goto L6db520;}}
}
B6db4d7:L6db4d7:{c.instructions+=6;NFSU2_TR(0x6db4d7);
__builtin_memmove(gp(0x80eebc),(R+0),4);
}
B6db4dc:{NFSU2_TR(0x6db4dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6db4df:{NFSU2_TR(0x6db4df);
__builtin_memmove(gp(0x80eec0),(R+0),4);
}
B6db4e4:{NFSU2_TR(0x6db4e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6db4e7:{NFSU2_TR(0x6db4e7);
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
B6db4e9:{NFSU2_TR(0x6db4e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6db4ef;}}
}
B6db4eb:L6db4eb:{c.instructions+=2;NFSU2_TR(0x6db4eb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db4ed:{NFSU2_TR(0x6db4ed);
{goto L6db510;}
}
B6db4ef:L6db4ef:{c.instructions+=3;NFSU2_TR(0x6db4ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6db4f2:{NFSU2_TR(0x6db4f2);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x0ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6db4f5:{NFSU2_TR(0x6db4f5);
if(r1(R+518)){{goto L6db50e;}}
}
B6db4f7:L6db4f7:{c.instructions+=2;NFSU2_TR(0x6db4f7);
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
B6db4f8:{NFSU2_TR(0x6db4f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6db520;}}
}
B6db4fa:L6db4fa:{c.instructions+=6;NFSU2_TR(0x6db4fa);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6db4ff:{NFSU2_TR(0x6db4ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6db501:{NFSU2_TR(0x6db501);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db503:{NFSU2_TR(0x6db503);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db505:{NFSU2_TR(0x6db505);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db506:{NFSU2_TR(0x6db506);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6db50cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6db50c:L6db50c:{c.instructions+=1;NFSU2_TR(0x6db50c);
{goto L6db520;}
}
B6db50e:L6db50e:{c.instructions+=1;NFSU2_TR(0x6db50e);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db510:L6db510:{c.instructions+=5;NFSU2_TR(0x6db510);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6db515:{NFSU2_TR(0x6db515);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6db517:{NFSU2_TR(0x6db517);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db519:{NFSU2_TR(0x6db519);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db51a:{NFSU2_TR(0x6db51a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6db520ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6db520:L6db520:{c.instructions+=3;NFSU2_TR(0x6db520);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6db523:{NFSU2_TR(0x6db523);
u8 U[8];
__builtin_memmove((U+0),gp(0x80eeb8),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6db529:{NFSU2_TR(0x6db529);
if(r1(R+518)){{goto L6db57c;}}
}
B6db52b:L6db52b:{c.instructions+=4;NFSU2_TR(0x6db52b);
__builtin_memmove(gp(0x80eeb8),(R+0),4);
}
B6db530:{NFSU2_TR(0x6db530);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6db533:{NFSU2_TR(0x6db533);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x0ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6db536:{NFSU2_TR(0x6db536);
if(r1(R+518)){{goto L6db558;}}
}
B6db538:L6db538:{c.instructions+=2;NFSU2_TR(0x6db538);
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
B6db539:{NFSU2_TR(0x6db539);
if(r1(R+518)){{goto L6db554;}}
}
B6db53b:L6db53b:{c.instructions+=2;NFSU2_TR(0x6db53b);
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
B6db53c:{NFSU2_TR(0x6db53c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6db57c;}}
}
B6db53e:L6db53e:{c.instructions+=6;NFSU2_TR(0x6db53e);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6db543:{NFSU2_TR(0x6db543);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6db545:{NFSU2_TR(0x6db545);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db547:{NFSU2_TR(0x6db547);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db549:{NFSU2_TR(0x6db549);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db54a:{NFSU2_TR(0x6db54a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6db550ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6db550:L6db550:{c.instructions+=2;NFSU2_TR(0x6db550);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db552:{NFSU2_TR(0x6db552);
{goto L6db56c;}
}
B6db554:L6db554:{c.instructions+=2;NFSU2_TR(0x6db554);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db556:{NFSU2_TR(0x6db556);
{goto L6db55a;}
}
B6db558:L6db558:{c.instructions+=1;NFSU2_TR(0x6db558);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db55a:L6db55a:{c.instructions+=5;NFSU2_TR(0x6db55a);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6db55f:{NFSU2_TR(0x6db55f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6db561:{NFSU2_TR(0x6db561);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db563:{NFSU2_TR(0x6db563);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db564:{NFSU2_TR(0x6db564);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6db56aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6db56a:L6db56a:{c.instructions+=1;NFSU2_TR(0x6db56a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db56c:L6db56c:{c.instructions+=5;NFSU2_TR(0x6db56c);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6db571:{NFSU2_TR(0x6db571);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6db573:{NFSU2_TR(0x6db573);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db575:{NFSU2_TR(0x6db575);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db576:{NFSU2_TR(0x6db576);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6db57cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6db57c:L6db57c:{c.instructions+=3;NFSU2_TR(0x6db57c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6db57f:{NFSU2_TR(0x6db57f);
u8 U[14];
__builtin_memmove((U+6),gp(0x80eec4),4);
w1(R+512,u8((r4(U+6))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+0)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6db585:{NFSU2_TR(0x6db585);
if(r1(R+518)){{goto L6db5a0;}}
}
B6db587:L6db587:{c.instructions+=8;NFSU2_TR(0x6db587);
__builtin_memmove(gp(0x80eec4),(R+0),4);
}
B6db58c:{NFSU2_TR(0x6db58c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6db58f:{NFSU2_TR(0x6db58f);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6db594:{NFSU2_TR(0x6db594);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6db596:{NFSU2_TR(0x6db596);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db597:{NFSU2_TR(0x6db597);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db599:{NFSU2_TR(0x6db599);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db59a:{NFSU2_TR(0x6db59a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6db5a0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6db5a0:L6db5a0:{c.instructions+=3;NFSU2_TR(0x6db5a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6db5a3:{NFSU2_TR(0x6db5a3);
u8 U[14];
__builtin_memmove((U+6),gp(0x80eed0),4);
w1(R+512,u8((r4(U+6))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+0)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6db5a9:{NFSU2_TR(0x6db5a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6db5c1;}}
}
B6db5ab:L6db5ab:{c.instructions+=3;NFSU2_TR(0x6db5ab);
__builtin_memmove((R+8),gp(0x80eec8),4);
}
B6db5b1:{NFSU2_TR(0x6db5b1);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+14)));
w4(U+18,u32(u32(r4(R+8))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6db5b4:{NFSU2_TR(0x6db5b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6db5c1;}}
}
B6db5b6:L6db5b6:{c.instructions+=3;NFSU2_TR(0x6db5b6);
__builtin_memmove((R+4),gp(0x80eecc),4);
}
B6db5bc:{NFSU2_TR(0x6db5bc);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6db5bf:{NFSU2_TR(0x6db5bf);
if(r1(R+518)){{goto L6db5ff;}}
}
B6db5c1:L6db5c1:{c.instructions+=12;NFSU2_TR(0x6db5c1);
__builtin_memmove(gp(0x80eed0),(R+0),4);
}
B6db5c6:{NFSU2_TR(0x6db5c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6db5c9:{NFSU2_TR(0x6db5c9);
__builtin_memmove(gp(0x80eec8),(R+8),4);
}
B6db5cf:{NFSU2_TR(0x6db5cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6db5d2:{NFSU2_TR(0x6db5d2);
__builtin_memmove(gp(0x80eecc),(R+0),4);
}
B6db5d7:{NFSU2_TR(0x6db5d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6db5da:{NFSU2_TR(0x6db5da);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6db5df:{NFSU2_TR(0x6db5df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6db5e1:{NFSU2_TR(0x6db5e1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db5e2:{NFSU2_TR(0x6db5e2);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db5e4:{NFSU2_TR(0x6db5e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db5e5:{NFSU2_TR(0x6db5e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6db5ebull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6db5eb:L6db5eb:{c.instructions+=7;NFSU2_TR(0x6db5eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6db5ee:{NFSU2_TR(0x6db5ee);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6db5f3:{NFSU2_TR(0x6db5f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6db5f5:{NFSU2_TR(0x6db5f5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db5f6:{NFSU2_TR(0x6db5f6);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db5f8:{NFSU2_TR(0x6db5f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db5f9:{NFSU2_TR(0x6db5f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6db5ffull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6db5ff:L6db5ff:{c.instructions+=3;NFSU2_TR(0x6db5ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6db602:{NFSU2_TR(0x6db602);
u8 U[14];
__builtin_memmove((U+6),gp(0x80eed4),4);
w1(R+512,u8((r4(U+6))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+0)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6db608:{NFSU2_TR(0x6db608);
if(r1(R+518)){{goto L6db623;}}
}
B6db60a:L6db60a:{c.instructions+=8;NFSU2_TR(0x6db60a);
__builtin_memmove(gp(0x80eed4),(R+0),4);
}
B6db60f:{NFSU2_TR(0x6db60f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6db612:{NFSU2_TR(0x6db612);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6db617:{NFSU2_TR(0x6db617);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6db619:{NFSU2_TR(0x6db619);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db61a:{NFSU2_TR(0x6db61a);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db61c:{NFSU2_TR(0x6db61c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db61d:{NFSU2_TR(0x6db61d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6db623ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6db623:L6db623:{c.instructions+=3;NFSU2_TR(0x6db623);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6db626:{NFSU2_TR(0x6db626);
u8 U[14];
__builtin_memmove((U+6),gp(0x80eed8),4);
w1(R+512,u8((r4(U+6))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+0)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6db62c:{NFSU2_TR(0x6db62c);
if(r1(R+518)){{goto L6db647;}}
}
B6db62e:L6db62e:{c.instructions+=8;NFSU2_TR(0x6db62e);
__builtin_memmove(gp(0x80eed8),(R+0),4);
}
B6db633:{NFSU2_TR(0x6db633);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6db636:{NFSU2_TR(0x6db636);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6db63b:{NFSU2_TR(0x6db63b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6db63d:{NFSU2_TR(0x6db63d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db63e:{NFSU2_TR(0x6db63e);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db640:{NFSU2_TR(0x6db640);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db641:{NFSU2_TR(0x6db641);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6db647ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6db647:L6db647:{c.instructions+=3;NFSU2_TR(0x6db647);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6db64a:{NFSU2_TR(0x6db64a);
u8 U[14];
__builtin_memmove((U+6),gp(0x80eedc),4);
w1(R+512,u8((r4(U+6))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+0)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6db650:{NFSU2_TR(0x6db650);
if(r1(R+518)){{goto L6db66b;}}
}
B6db652:L6db652:{c.instructions+=8;NFSU2_TR(0x6db652);
__builtin_memmove(gp(0x80eedc),(R+0),4);
}
B6db657:{NFSU2_TR(0x6db657);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6db65a:{NFSU2_TR(0x6db65a);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6db65f:{NFSU2_TR(0x6db65f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6db661:{NFSU2_TR(0x6db661);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db662:{NFSU2_TR(0x6db662);
u8 U[4];
w4(U+0,u32(0x19ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db664:{NFSU2_TR(0x6db664);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db665:{NFSU2_TR(0x6db665);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6db66bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6db66b:L6db66b:{c.instructions+=3;NFSU2_TR(0x6db66b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6db66e:{NFSU2_TR(0x6db66e);
u8 U[14];
__builtin_memmove((U+6),gp(0x80eee4),4);
w1(R+512,u8((r4(U+6))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+0)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6db674:{NFSU2_TR(0x6db674);
if(r1(R+518)){{goto L6db6af;}}
}
B6db676:L6db676:{c.instructions+=4;NFSU2_TR(0x6db676);
__builtin_memmove(gp(0x80eee4),(R+0),4);
}
B6db67b:{NFSU2_TR(0x6db67b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6db67e:{NFSU2_TR(0x6db67e);
u8 U[6];
w1(R+512,u8((r4(R+24))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(R+24),u32(0x0ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6db681:{NFSU2_TR(0x6db681);
if(r1(R+518)){{goto L6db69d;}}
}
B6db683:L6db683:{c.instructions+=2;NFSU2_TR(0x6db683);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6db684:{NFSU2_TR(0x6db684);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6db6af;}}
}
B6db686:L6db686:{c.instructions+=6;NFSU2_TR(0x6db686);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6db68b:{NFSU2_TR(0x6db68b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6db68d:{NFSU2_TR(0x6db68d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db68f:{NFSU2_TR(0x6db68f);
u8 U[4];
w4(U+0,u32(0x1bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db691:{NFSU2_TR(0x6db691);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db692:{NFSU2_TR(0x6db692);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6db698ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6db698:L6db698:{c.instructions+=4;NFSU2_TR(0x6db698);
w1(R+0,u8(0x1ull));
}
B6db69a:{NFSU2_TR(0x6db69a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6db69b:{NFSU2_TR(0x6db69b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6db69c:{NFSU2_TR(0x6db69c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6db69d:L6db69d:{c.instructions+=6;NFSU2_TR(0x6db69d);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6db6a2:{NFSU2_TR(0x6db6a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6db6a4:{NFSU2_TR(0x6db6a4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db6a6:{NFSU2_TR(0x6db6a6);
u8 U[4];
w4(U+0,u32(0x1bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db6a8:{NFSU2_TR(0x6db6a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db6a9:{NFSU2_TR(0x6db6a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6db6afull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6db6af:L6db6af:{c.instructions+=4;NFSU2_TR(0x6db6af);
w1(R+0,u8(0x1ull));
}
B6db6b1:{NFSU2_TR(0x6db6b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6db6b2:{NFSU2_TR(0x6db6b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6db6b3:{NFSU2_TR(0x6db6b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6db6c0:L6db6c0:{c.instructions+=4;NFSU2_TR(0x6db6c0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db6c1:{NFSU2_TR(0x6db6c1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6db6c3:{NFSU2_TR(0x6db6c3);
w4(R+4,u32(0x11ull));
}
B6db6c8:{NFSU2_TR(0x6db6c8);
w4(R+28,u32(0x8a7b30ull));
}
B6db6cd:L6db6cd:{c.instructions+=1;NFSU2_TR(0x6db6cd);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6db6cf;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6db6cdu);}goto L6db6cd;}
}
B6db6cf:L6db6cf:{c.instructions+=20;NFSU2_TR(0x6db6cf);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6db6d2:{NFSU2_TR(0x6db6d2);
__builtin_memmove(gp(0x80eeb4),(R+0),4);
}
B6db6d7:{NFSU2_TR(0x6db6d7);
__builtin_memmove(gp(0x80eeb8),(R+0),4);
}
B6db6dc:{NFSU2_TR(0x6db6dc);
__builtin_memmove(gp(0x80eebc),(R+0),4);
}
B6db6e1:{NFSU2_TR(0x6db6e1);
__builtin_memmove(gp(0x80eec0),(R+0),4);
}
B6db6e6:{NFSU2_TR(0x6db6e6);
__builtin_memmove(gp(0x80eec4),(R+0),4);
}
B6db6eb:{NFSU2_TR(0x6db6eb);
__builtin_memmove(gp(0x80eec8),(R+0),4);
}
B6db6f0:{NFSU2_TR(0x6db6f0);
__builtin_memmove(gp(0x80eecc),(R+0),4);
}
B6db6f5:{NFSU2_TR(0x6db6f5);
__builtin_memmove(gp(0x80eed0),(R+0),4);
}
B6db6fa:{NFSU2_TR(0x6db6fa);
__builtin_memmove(gp(0x80eed4),(R+0),4);
}
B6db6ff:{NFSU2_TR(0x6db6ff);
__builtin_memmove(gp(0x80eed8),(R+0),4);
}
B6db704:{NFSU2_TR(0x6db704);
__builtin_memmove(gp(0x80eedc),(R+0),4);
}
B6db709:{NFSU2_TR(0x6db709);
__builtin_memmove(gp(0x80eee0),(R+0),4);
}
B6db70e:{NFSU2_TR(0x6db70e);
__builtin_memmove(gp(0x80eee4),(R+0),4);
}
B6db713:{NFSU2_TR(0x6db713);
__builtin_memmove(gp(0x80eee8),(R+0),4);
}
B6db718:{NFSU2_TR(0x6db718);
__builtin_memmove(gp(0x80eeec),(R+0),4);
}
B6db71d:{NFSU2_TR(0x6db71d);
s4(0x80eef0,u32(0x1ull));
}
B6db727:{NFSU2_TR(0x6db727);
s4(0x80eef4,u32(0xfffffffeull));
}
B6db731:{NFSU2_TR(0x6db731);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6db732:{NFSU2_TR(0x6db732);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6db740:L6db740:{c.instructions+=23;NFSU2_TR(0x6db740);
__builtin_memmove((R+0),(R+4),4);
}
B6db742:{NFSU2_TR(0x6db742);
w4(R+4,u32(0x1ull));
}
B6db747:{NFSU2_TR(0x6db747);
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
B6db749:{NFSU2_TR(0x6db749);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db74c:{NFSU2_TR(0x6db74c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db74f:{NFSU2_TR(0x6db74f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db752:{NFSU2_TR(0x6db752);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db755:{NFSU2_TR(0x6db755);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db758:{NFSU2_TR(0x6db758);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db75b:{NFSU2_TR(0x6db75b);
w4(R+8,u32(0x5ull));
}
B6db760:{NFSU2_TR(0x6db760);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db763:{NFSU2_TR(0x6db763);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db766:{NFSU2_TR(0x6db766);
__builtin_memmove((R+4),gp(0x7c0be0),4);
}
B6db76c:{NFSU2_TR(0x6db76c);
u8 U[4];
w4(U+0,u32(0x4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6db772:{NFSU2_TR(0x6db772);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6db779:{NFSU2_TR(0x6db779);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6db780:{NFSU2_TR(0x6db780);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db783:{NFSU2_TR(0x6db783);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db786:{NFSU2_TR(0x6db786);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6db78d:{NFSU2_TR(0x6db78d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6db794:{NFSU2_TR(0x6db794);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db797:{NFSU2_TR(0x6db797);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B6db79e:{NFSU2_TR(0x6db79e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6db7a0:L6db7a0:{c.instructions+=25;NFSU2_TR(0x6db7a0);
__builtin_memmove((R+0),(R+4),4);
}
B6db7a2:{NFSU2_TR(0x6db7a2);
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
B6db7a4:{NFSU2_TR(0x6db7a4);
w4(R+8,u32(0x3f800000ull));
}
B6db7a9:{NFSU2_TR(0x6db7a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db7ac:{NFSU2_TR(0x6db7ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db7af:{NFSU2_TR(0x6db7af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db7b2:{NFSU2_TR(0x6db7b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db7b5:{NFSU2_TR(0x6db7b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db7b8:{NFSU2_TR(0x6db7b8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6db7ba:{NFSU2_TR(0x6db7ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db7bd:{NFSU2_TR(0x6db7bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db7c0:{NFSU2_TR(0x6db7c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db7c3:{NFSU2_TR(0x6db7c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db7c6:{NFSU2_TR(0x6db7c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db7c9:{NFSU2_TR(0x6db7c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db7cc:{NFSU2_TR(0x6db7cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db7cf:{NFSU2_TR(0x6db7cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db7d2:{NFSU2_TR(0x6db7d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db7d5:{NFSU2_TR(0x6db7d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db7d8:{NFSU2_TR(0x6db7d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db7db:{NFSU2_TR(0x6db7db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db7de:{NFSU2_TR(0x6db7de);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db7e1:{NFSU2_TR(0x6db7e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db7e4:{NFSU2_TR(0x6db7e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db7e7:{NFSU2_TR(0x6db7e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6db7f0:L6db7f0:{c.instructions+=9;NFSU2_TR(0x6db7f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B6db7f3:{NFSU2_TR(0x6db7f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db7f4:{NFSU2_TR(0x6db7f4);
__builtin_memmove((R+24),(R+4),4);
}
B6db7f6:{NFSU2_TR(0x6db7f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6db7fa:{NFSU2_TR(0x6db7fa);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6db7fe:{NFSU2_TR(0x6db7fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db7ff:{NFSU2_TR(0x6db7ff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db800:{NFSU2_TR(0x6db800);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db801:{NFSU2_TR(0x6db801);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6db806ull));
TAIL_STATIC(0x81cb58u,81c);
}
B6db806:L6db806:{c.instructions+=5;NFSU2_TR(0x6db806);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db808:{NFSU2_TR(0x6db808);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6db80c:{NFSU2_TR(0x6db80c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db80d:{NFSU2_TR(0x6db80d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db80e:{NFSU2_TR(0x6db80e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6db813ull));
TAIL_STATIC(0x401000u,401);
}
B6db813:L6db813:{c.instructions+=4;NFSU2_TR(0x6db813);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6db816:{NFSU2_TR(0x6db816);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6db817:{NFSU2_TR(0x6db817);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6db81a:{NFSU2_TR(0x6db81a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6db820:L6db820:{c.instructions+=5;NFSU2_TR(0x6db820);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db821:{NFSU2_TR(0x6db821);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6db825:{NFSU2_TR(0x6db825);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db826:{NFSU2_TR(0x6db826);
__builtin_memmove((R+28),(R+4),4);
}
B6db828:{NFSU2_TR(0x6db828);
w4(R+4,u32(0x10ull));
}
B6db82d:L6db82d:{c.instructions+=1;NFSU2_TR(0x6db82d);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6db82f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6db82du);}goto L6db82d;}
}
B6db82f:L6db82f:{c.instructions+=3;NFSU2_TR(0x6db82f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6db830:{NFSU2_TR(0x6db830);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6db831:{NFSU2_TR(0x6db831);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6db840:L6db840:{c.instructions+=9;NFSU2_TR(0x6db840);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6db844:{NFSU2_TR(0x6db844);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6db847:{NFSU2_TR(0x6db847);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6db84a:{NFSU2_TR(0x6db84a);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6db84e:{NFSU2_TR(0x6db84e);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6db850:{NFSU2_TR(0x6db850);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B6db856:{NFSU2_TR(0x6db856);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6db858:{NFSU2_TR(0x6db858);
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
B6db85b:{NFSU2_TR(0x6db85b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6db89d;}}
}
B6db85d:L6db85d:{c.instructions+=21;NFSU2_TR(0x6db85d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6db863:{NFSU2_TR(0x6db863);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6db867:{NFSU2_TR(0x6db867);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B6db869:{NFSU2_TR(0x6db869);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6db86f:{NFSU2_TR(0x6db86f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6db871:{NFSU2_TR(0x6db871);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6db874:{NFSU2_TR(0x6db874);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B6db87a:{NFSU2_TR(0x6db87a);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6db87d:{NFSU2_TR(0x6db87d);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6db880:{NFSU2_TR(0x6db880);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6db882:{NFSU2_TR(0x6db882);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6db884:{NFSU2_TR(0x6db884);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6db887:{NFSU2_TR(0x6db887);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6db88a:{NFSU2_TR(0x6db88a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6db88c:{NFSU2_TR(0x6db88c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6db88f:{NFSU2_TR(0x6db88f);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6db892:{NFSU2_TR(0x6db892);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6db895:{NFSU2_TR(0x6db895);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6db897:{NFSU2_TR(0x6db897);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6db89a:{NFSU2_TR(0x6db89a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6db89c:{NFSU2_TR(0x6db89c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6db89d:L6db89d:{c.instructions+=6;NFSU2_TR(0x6db89d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6db89f:{NFSU2_TR(0x6db89f);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6db8a2:{NFSU2_TR(0x6db8a2);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6db8a4:{NFSU2_TR(0x6db8a4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6db8a6:{NFSU2_TR(0x6db8a6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6db8a9:{NFSU2_TR(0x6db8a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6db8b2;}}
}
B6db8ab:L6db8ab:{c.instructions+=2;NFSU2_TR(0x6db8ab);
w4(R+8,u32(0x4ull));
}
B6db8b0:{NFSU2_TR(0x6db8b0);
{goto L6db8b4;}
}
B6db8b2:L6db8b2:{c.instructions+=1;NFSU2_TR(0x6db8b2);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6db8b4:L6db8b4:{c.instructions+=5;NFSU2_TR(0x6db8b4);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6db8b7:{NFSU2_TR(0x6db8b7);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6db8ba:{NFSU2_TR(0x6db8ba);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6db8bc:{NFSU2_TR(0x6db8bc);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6db8bf:{NFSU2_TR(0x6db8bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6db916;}}
}
B6db8c1:L6db8c1:{c.instructions+=13;NFSU2_TR(0x6db8c1);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6db8c4:{NFSU2_TR(0x6db8c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6db8c8:{NFSU2_TR(0x6db8c8);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6db8ca:{NFSU2_TR(0x6db8ca);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B6db8cd:{NFSU2_TR(0x6db8cd);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6db8d3:{NFSU2_TR(0x6db8d3);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B6db8d5:{NFSU2_TR(0x6db8d5);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6db8db:{NFSU2_TR(0x6db8db);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6db8dd:{NFSU2_TR(0x6db8dd);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6db8e0:{NFSU2_TR(0x6db8e0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B6db8e6:{NFSU2_TR(0x6db8e6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6db8e8:{NFSU2_TR(0x6db8e8);
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
B6db8eb:{NFSU2_TR(0x6db8eb);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6db8f3;}}
}
B6db8ed:L6db8ed:{c.instructions+=1;NFSU2_TR(0x6db8ed);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B6db8f3:L6db8f3:{c.instructions+=14;NFSU2_TR(0x6db8f3);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6db8f6:{NFSU2_TR(0x6db8f6);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6db8f9:{NFSU2_TR(0x6db8f9);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6db8fb:{NFSU2_TR(0x6db8fb);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6db8fe:{NFSU2_TR(0x6db8fe);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6db901:{NFSU2_TR(0x6db901);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6db904:{NFSU2_TR(0x6db904);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6db906:{NFSU2_TR(0x6db906);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6db908:{NFSU2_TR(0x6db908);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6db90b:{NFSU2_TR(0x6db90b);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6db90e:{NFSU2_TR(0x6db90e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6db910:{NFSU2_TR(0x6db910);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6db913:{NFSU2_TR(0x6db913);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6db915:{NFSU2_TR(0x6db915);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6db916:L6db916:{c.instructions+=4;NFSU2_TR(0x6db916);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6db918:{NFSU2_TR(0x6db918);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6db91a:{NFSU2_TR(0x6db91a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6db91e:{NFSU2_TR(0x6db91e);
if(r1(R+518)){{goto L6db96f;}}
}
B6db920:L6db920:{c.instructions+=11;NFSU2_TR(0x6db920);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6db923:{NFSU2_TR(0x6db923);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B6db926:{NFSU2_TR(0x6db926);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6db92c:{NFSU2_TR(0x6db92c);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B6db92e:{NFSU2_TR(0x6db92e);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6db934:{NFSU2_TR(0x6db934);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6db936:{NFSU2_TR(0x6db936);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6db939:{NFSU2_TR(0x6db939);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B6db93f:{NFSU2_TR(0x6db93f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6db941:{NFSU2_TR(0x6db941);
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
B6db944:{NFSU2_TR(0x6db944);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6db94c;}}
}
B6db946:L6db946:{c.instructions+=1;NFSU2_TR(0x6db946);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B6db94c:L6db94c:{c.instructions+=14;NFSU2_TR(0x6db94c);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6db94f:{NFSU2_TR(0x6db94f);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6db952:{NFSU2_TR(0x6db952);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6db954:{NFSU2_TR(0x6db954);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6db957:{NFSU2_TR(0x6db957);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6db95a:{NFSU2_TR(0x6db95a);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6db95d:{NFSU2_TR(0x6db95d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6db95f:{NFSU2_TR(0x6db95f);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6db962:{NFSU2_TR(0x6db962);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6db965:{NFSU2_TR(0x6db965);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6db968:{NFSU2_TR(0x6db968);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6db96a:{NFSU2_TR(0x6db96a);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6db96c:{NFSU2_TR(0x6db96c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6db96e:{NFSU2_TR(0x6db96e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6db96f:L6db96f:{c.instructions+=10;NFSU2_TR(0x6db96f);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6db973:{NFSU2_TR(0x6db973);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6db979:{NFSU2_TR(0x6db979);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B6db97b:{NFSU2_TR(0x6db97b);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6db981:{NFSU2_TR(0x6db981);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6db983:{NFSU2_TR(0x6db983);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6db985:{NFSU2_TR(0x6db985);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B6db98b:{NFSU2_TR(0x6db98b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6db98d:{NFSU2_TR(0x6db98d);
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
B6db990:{NFSU2_TR(0x6db990);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6db998;}}
}
B6db992:L6db992:{c.instructions+=1;NFSU2_TR(0x6db992);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B6db998:L6db998:{c.instructions+=14;NFSU2_TR(0x6db998);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6db99b:{NFSU2_TR(0x6db99b);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6db99e:{NFSU2_TR(0x6db99e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6db9a0:{NFSU2_TR(0x6db9a0);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6db9a3:{NFSU2_TR(0x6db9a3);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6db9a6:{NFSU2_TR(0x6db9a6);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6db9a9:{NFSU2_TR(0x6db9a9);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6db9ab:{NFSU2_TR(0x6db9ab);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6db9ae:{NFSU2_TR(0x6db9ae);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6db9b1:{NFSU2_TR(0x6db9b1);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6db9b4:{NFSU2_TR(0x6db9b4);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6db9b6:{NFSU2_TR(0x6db9b6);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6db9b9:{NFSU2_TR(0x6db9b9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6db9bb:{NFSU2_TR(0x6db9bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6db9c0:L6db9c0:{c.instructions+=26;NFSU2_TR(0x6db9c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B6db9c3:{NFSU2_TR(0x6db9c3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6db9c4:{NFSU2_TR(0x6db9c4);
__builtin_memmove((R+24),(R+4),4);
}
B6db9c6:{NFSU2_TR(0x6db9c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6db9c8:{NFSU2_TR(0x6db9c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6db9cb:{NFSU2_TR(0x6db9cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6db9ce:{NFSU2_TR(0x6db9ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db9d2:{NFSU2_TR(0x6db9d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6db9d5:{NFSU2_TR(0x6db9d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db9d9:{NFSU2_TR(0x6db9d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6db9dc:{NFSU2_TR(0x6db9dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db9e0:{NFSU2_TR(0x6db9e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6db9e3:{NFSU2_TR(0x6db9e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db9e7:{NFSU2_TR(0x6db9e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6db9ea:{NFSU2_TR(0x6db9ea);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db9ee:{NFSU2_TR(0x6db9ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6db9f1:{NFSU2_TR(0x6db9f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db9f5:{NFSU2_TR(0x6db9f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6db9f9:{NFSU2_TR(0x6db9f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6db9fd:{NFSU2_TR(0x6db9fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dba01:{NFSU2_TR(0x6dba01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dba04:{NFSU2_TR(0x6dba04);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dba05:{NFSU2_TR(0x6dba05);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6dba09:{NFSU2_TR(0x6dba09);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dba0a:{NFSU2_TR(0x6dba0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dba0e:{NFSU2_TR(0x6dba0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dba13ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6db840u);}goto L6db840;}
}
B6dba13:L6dba13:{c.instructions+=13;NFSU2_TR(0x6dba13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dba16:{NFSU2_TR(0x6dba16);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dba1a:{NFSU2_TR(0x6dba1a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6dba1c:{NFSU2_TR(0x6dba1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dba1f:{NFSU2_TR(0x6dba1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dba22:{NFSU2_TR(0x6dba22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dba25:{NFSU2_TR(0x6dba25);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dba28:{NFSU2_TR(0x6dba28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dba2b:{NFSU2_TR(0x6dba2b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6dba2e:{NFSU2_TR(0x6dba2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dba31:{NFSU2_TR(0x6dba31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dba32:{NFSU2_TR(0x6dba32);
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
B6dba35:{NFSU2_TR(0x6dba35);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dba40:L6dba40:{c.instructions+=6;NFSU2_TR(0x6dba40);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dba41:{NFSU2_TR(0x6dba41);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6dba45:{NFSU2_TR(0x6dba45);
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
B6dba47:{NFSU2_TR(0x6dba47);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dba48:{NFSU2_TR(0x6dba48);
__builtin_memmove((R+20),(R+4),4);
}
B6dba4a:{NFSU2_TR(0x6dba4a);
if(r1(R+518)){{goto L6dba6e;}}
}
B6dba4c:L6dba4c:{c.instructions+=5;NFSU2_TR(0x6dba4c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dba4d:{NFSU2_TR(0x6dba4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6dba51:{NFSU2_TR(0x6dba51);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dba52:{NFSU2_TR(0x6dba52);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6dba56:{NFSU2_TR(0x6dba56);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B6dba58:L6dba58:{c.instructions+=5;NFSU2_TR(0x6dba58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6dba5b:{NFSU2_TR(0x6dba5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dba5c:{NFSU2_TR(0x6dba5c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dba5d:{NFSU2_TR(0x6dba5d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dba5e:{NFSU2_TR(0x6dba5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dba63ull));
TAIL_STATIC(0x81cb24u,81c);
}
B6dba63:L6dba63:{c.instructions+=4;NFSU2_TR(0x6dba63);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6dba66:{NFSU2_TR(0x6dba66);
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B6dba69:{NFSU2_TR(0x6dba69);
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
B6dba6a:{NFSU2_TR(0x6dba6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dba58u);}goto L6dba58;}}
}
B6dba6c:L6dba6c:{c.instructions+=2;NFSU2_TR(0x6dba6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6dba6d:{NFSU2_TR(0x6dba6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dba6e:L6dba6e:{c.instructions+=3;NFSU2_TR(0x6dba6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6dba6f:{NFSU2_TR(0x6dba6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6dba70:{NFSU2_TR(0x6dba70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dba80:L6dba80:{c.instructions+=27;NFSU2_TR(0x6dba80);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dba81:{NFSU2_TR(0x6dba81);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6dba83:{NFSU2_TR(0x6dba83);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dba84:{NFSU2_TR(0x6dba84);
__builtin_memmove((R+24),(R+4),4);
}
B6dba86:{NFSU2_TR(0x6dba86);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6dba89:{NFSU2_TR(0x6dba89);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dba8a:{NFSU2_TR(0x6dba8a);
u8 U[4];
w4(U+0,u32(0x58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dba8c:{NFSU2_TR(0x6dba8c);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6dba92:{NFSU2_TR(0x6dba92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dba95:{NFSU2_TR(0x6dba95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dba98:{NFSU2_TR(0x6dba98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dba9b:{NFSU2_TR(0x6dba9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dba9e:{NFSU2_TR(0x6dba9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbaa1:{NFSU2_TR(0x6dbaa1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6dbaa4:{NFSU2_TR(0x6dbaa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbaa7:{NFSU2_TR(0x6dbaa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbaaa:{NFSU2_TR(0x6dbaaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbaad:{NFSU2_TR(0x6dbaad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbab0:{NFSU2_TR(0x6dbab0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbab3:{NFSU2_TR(0x6dbab3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbab6:{NFSU2_TR(0x6dbab6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbab9:{NFSU2_TR(0x6dbab9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbabc:{NFSU2_TR(0x6dbabc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6dbac0:{NFSU2_TR(0x6dbac0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3dull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6dbac3:{NFSU2_TR(0x6dbac3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbac6:{NFSU2_TR(0x6dbac6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbac9:{NFSU2_TR(0x6dbac9);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfd8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dbacfull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6dbacf:L6dbacf:{c.instructions+=3;NFSU2_TR(0x6dbacf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6dbad2:{NFSU2_TR(0x6dbad2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dbad4:{NFSU2_TR(0x6dbad4);
if(r1(R+518)){{goto L6dbaf1;}}
}
B6dbad6:L6dbad6:{c.instructions+=2;NFSU2_TR(0x6dbad6);
__builtin_memmove((R+4),(R+0),4);
}
B6dbad8:{NFSU2_TR(0x6dbad8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dbaddull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6db7a0u);}goto L6db7a0;}
}
B6dbadd:L6dbadd:{c.instructions+=9;NFSU2_TR(0x6dbadd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbae0:{NFSU2_TR(0x6dbae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbae3:{NFSU2_TR(0x6dbae3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbae6:{NFSU2_TR(0x6dbae6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbae9:{NFSU2_TR(0x6dbae9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbaec:{NFSU2_TR(0x6dbaec);
__builtin_memmove((R+0),(R+24),4);
}
B6dbaee:{NFSU2_TR(0x6dbaee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dbaef:{NFSU2_TR(0x6dbaef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6dbaf0:{NFSU2_TR(0x6dbaf0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dbaf1:L6dbaf1:{c.instructions+=10;NFSU2_TR(0x6dbaf1);
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
B6dbaf3:{NFSU2_TR(0x6dbaf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbaf6:{NFSU2_TR(0x6dbaf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbaf9:{NFSU2_TR(0x6dbaf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbafc:{NFSU2_TR(0x6dbafc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbaff:{NFSU2_TR(0x6dbaff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbb02:{NFSU2_TR(0x6dbb02);
__builtin_memmove((R+0),(R+24),4);
}
B6dbb04:{NFSU2_TR(0x6dbb04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dbb05:{NFSU2_TR(0x6dbb05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6dbb06:{NFSU2_TR(0x6dbb06);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dbb10:L6dbb10:{c.instructions+=7;NFSU2_TR(0x6dbb10);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbb11:{NFSU2_TR(0x6dbb11);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbb12:{NFSU2_TR(0x6dbb12);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6dbb14:{NFSU2_TR(0x6dbb14);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbb15:{NFSU2_TR(0x6dbb15);
u8 U[4];
w4(U+0,u32(0x40000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbb1a:{NFSU2_TR(0x6dbb1a);
__builtin_memmove((R+24),(R+4),4);
}
B6dbb1c:{NFSU2_TR(0x6dbb1c);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfd8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dbb22ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6dbb22:L6dbb22:{c.instructions+=8;NFSU2_TR(0x6dbb22);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbb23:{NFSU2_TR(0x6dbb23);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbb25:{NFSU2_TR(0x6dbb25);
u8 U[4];
w4(U+0,u32(0x42ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbb27:{NFSU2_TR(0x6dbb27);
u8 U[4];
w4(U+0,u32(0x208ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbb2c:{NFSU2_TR(0x6dbb2c);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbb2e:{NFSU2_TR(0x6dbb2e);
u8 U[4];
w4(U+0,u32(0x40000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbb33:{NFSU2_TR(0x6dbb33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbb36:{NFSU2_TR(0x6dbb36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dbb3bull));
TAIL_STATIC(0x6dc720u,6dc);
}
B6dbb3b:L6dbb3b:{c.instructions+=22;NFSU2_TR(0x6dbb3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbb3e:{NFSU2_TR(0x6dbb3e);
w4(R+0,u32(0x3f800000ull));
}
B6dbb43:{NFSU2_TR(0x6dbb43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbb49:{NFSU2_TR(0x6dbb49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbb4f:{NFSU2_TR(0x6dbb4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbb55:{NFSU2_TR(0x6dbb55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbb5b:{NFSU2_TR(0x6dbb5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbb5e:{NFSU2_TR(0x6dbb5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbb61:{NFSU2_TR(0x6dbb61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbb64:{NFSU2_TR(0x6dbb64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbb67:{NFSU2_TR(0x6dbb67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbb6a:{NFSU2_TR(0x6dbb6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbb6d:{NFSU2_TR(0x6dbb6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbb70:{NFSU2_TR(0x6dbb70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbb73:{NFSU2_TR(0x6dbb73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbb79:{NFSU2_TR(0x6dbb79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbb7c:{NFSU2_TR(0x6dbb7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbb7f:{NFSU2_TR(0x6dbb7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbb82:{NFSU2_TR(0x6dbb82);
__builtin_memmove((R+0),gp(0x8a7bc8),1);
}
B6dbb87:{NFSU2_TR(0x6dbb87);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B6dbb8a:{NFSU2_TR(0x6dbb8a);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
w1(R+512,u8((r1(R+0))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+0),r1(U+3)));
w1(U+4,u8(u32(r1(R+0))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6dbb8c:{NFSU2_TR(0x6dbb8c);
if(r1(R+518)){{goto L6dbba8;}}
}
B6dbb8e:L6dbb8e:{c.instructions+=7;NFSU2_TR(0x6dbb8e);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dbb93:{NFSU2_TR(0x6dbb93);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbb94:{NFSU2_TR(0x6dbb94);
u8 U[4];
w4(U+0,u32(0x89ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbb99:{NFSU2_TR(0x6dbb99);
__builtin_memmove(gp(0x8a7bc8),(R+12),1);
}
B6dbb9f:{NFSU2_TR(0x6dbb9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dbba1:{NFSU2_TR(0x6dbba1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbba2:{NFSU2_TR(0x6dbba2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dbba8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dbba8:L6dbba8:{c.instructions+=4;NFSU2_TR(0x6dbba8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6dbbab:{NFSU2_TR(0x6dbbab);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbbac:{NFSU2_TR(0x6dbbac);
__builtin_memmove((R+4),(R+24),4);
}
B6dbbae:{NFSU2_TR(0x6dbbae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dbbb3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6db370u);}goto L6db370;}
}
B6dbbb3:L6dbbb3:{c.instructions+=3;NFSU2_TR(0x6dbbb3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbbb5:{NFSU2_TR(0x6dbbb5);
__builtin_memmove((R+4),(R+24),4);
}
B6dbbb7:{NFSU2_TR(0x6dbbb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dbbbcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6db290u);}goto L6db290;}
}
B6dbbbc:L6dbbbc:{c.instructions+=3;NFSU2_TR(0x6dbbbc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbbbe:{NFSU2_TR(0x6dbbbe);
__builtin_memmove((R+4),(R+24),4);
}
B6dbbc0:{NFSU2_TR(0x6dbbc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dbbc5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6db2c0u);}goto L6db2c0;}
}
B6dbbc5:L6dbbc5:{c.instructions+=3;NFSU2_TR(0x6dbbc5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbbc6:{NFSU2_TR(0x6dbbc6);
__builtin_memmove((R+4),(R+24),4);
}
B6dbbc8:{NFSU2_TR(0x6dbbc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dbbcdull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6db2a0u);}goto L6db2a0;}
}
B6dbbcd:L6dbbcd:{c.instructions+=9;NFSU2_TR(0x6dbbcd);
w4(R+0,u32(0x3ull));
}
B6dbbd2:{NFSU2_TR(0x6dbbd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dbbd3:{NFSU2_TR(0x6dbbd3);
__builtin_memmove(gp(0x8a7e38),(R+0),4);
}
B6dbbd8:{NFSU2_TR(0x6dbbd8);
__builtin_memmove(gp(0x8a7e98),(R+12),4);
}
B6dbbde:{NFSU2_TR(0x6dbbde);
__builtin_memmove(gp(0x8a7eb8),(R+0),4);
}
B6dbbe3:{NFSU2_TR(0x6dbbe3);
__builtin_memmove(gp(0x8a7f18),(R+12),4);
}
B6dbbe9:{NFSU2_TR(0x6dbbe9);
w1(R+0,u8(0x1ull));
}
B6dbbeb:{NFSU2_TR(0x6dbbeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6dbbec:{NFSU2_TR(0x6dbbec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dbbf0:L6dbbf0:{c.instructions+=7;NFSU2_TR(0x6dbbf0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbbf1:{NFSU2_TR(0x6dbbf1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbbf2:{NFSU2_TR(0x6dbbf2);
__builtin_memmove((R+24),(R+4),4);
}
B6dbbf4:{NFSU2_TR(0x6dbbf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dbbf7:{NFSU2_TR(0x6dbbf7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6dbbf9:{NFSU2_TR(0x6dbbf9);
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
B6dbbfb:{NFSU2_TR(0x6dbbfb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6dbcde;}}
}
B6dbc01:L6dbc01:{c.instructions+=1;NFSU2_TR(0x6dbc01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dbc06ull));
TAIL_STATIC(0x6d9460u,6d9);
}
B6dbc06:L6dbc06:{c.instructions+=2;NFSU2_TR(0x6dbc06);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6dbc08:{NFSU2_TR(0x6dbc08);
if(r1(R+518)){{goto L6dbc0d;}}
}
B6dbc0a:L6dbc0a:{c.instructions+=2;NFSU2_TR(0x6dbc0a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbc0b:{NFSU2_TR(0x6dbc0b);
{goto L6dbc0f;}
}
B6dbc0d:L6dbc0d:{c.instructions+=1;NFSU2_TR(0x6dbc0d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbc0f:L6dbc0f:{c.instructions+=1;NFSU2_TR(0x6dbc0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dbc14ull));
TAIL_STATIC(0x6d89b0u,6d8);
}
B6dbc14:L6dbc14:{c.instructions+=4;NFSU2_TR(0x6dbc14);
__builtin_memmove((R+0),gp(0x8a7bd0),1);
}
B6dbc19:{NFSU2_TR(0x6dbc19);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6dbc1c:{NFSU2_TR(0x6dbc1c);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
w1(R+512,u8((r1(R+0))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+0),r1(U+3)));
w1(U+4,u8(u32(r1(R+0))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6dbc1e:{NFSU2_TR(0x6dbc1e);
if(r1(R+518)){{goto L6dbc37;}}
}
B6dbc20:L6dbc20:{c.instructions+=7;NFSU2_TR(0x6dbc20);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dbc25:{NFSU2_TR(0x6dbc25);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbc26:{NFSU2_TR(0x6dbc26);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbc28:{NFSU2_TR(0x6dbc28);
__builtin_memmove(gp(0x8a7bd0),(R+12),1);
}
B6dbc2e:{NFSU2_TR(0x6dbc2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dbc30:{NFSU2_TR(0x6dbc30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbc31:{NFSU2_TR(0x6dbc31);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dbc37ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dbc37:L6dbc37:{c.instructions+=2;NFSU2_TR(0x6dbc37);
u8 U[5];
__builtin_memmove((U+3),gp(0x8a7bc8),1);
w1(R+512,u8((r1(U+3))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+12)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6dbc3d:{NFSU2_TR(0x6dbc3d);
if(r1(R+518)){{goto L6dbc59;}}
}
B6dbc3f:L6dbc3f:{c.instructions+=7;NFSU2_TR(0x6dbc3f);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dbc44:{NFSU2_TR(0x6dbc44);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbc45:{NFSU2_TR(0x6dbc45);
u8 U[4];
w4(U+0,u32(0x89ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbc4a:{NFSU2_TR(0x6dbc4a);
__builtin_memmove(gp(0x8a7bc8),(R+12),1);
}
B6dbc50:{NFSU2_TR(0x6dbc50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dbc52:{NFSU2_TR(0x6dbc52);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbc53:{NFSU2_TR(0x6dbc53);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dbc59ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dbc59:L6dbc59:{c.instructions+=2;NFSU2_TR(0x6dbc59);
u8 U[4];
w4(U+0,u32(0x42ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbc5b:{NFSU2_TR(0x6dbc5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dbc60ull));
{goto L6dbf60;}
}
B6dbc60:L6dbc60:{c.instructions+=2;NFSU2_TR(0x6dbc60);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6dbc63:{NFSU2_TR(0x6dbc63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dbc68ull));
TAIL_STATIC(0x6dc090u,6dc);
}
B6dbc68:L6dbc68:{c.instructions+=2;NFSU2_TR(0x6dbc68);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6dbc6b:{NFSU2_TR(0x6dbc6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dbc70ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6db380u);}goto L6db380;}
}
B6dbc70:L6dbc70:{c.instructions+=2;NFSU2_TR(0x6dbc70);
w4(R+4,u32(0x8a7e38ull));
}
B6dbc75:{NFSU2_TR(0x6dbc75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dbc7aull));
TAIL_STATIC(0x6dd2f0u,6dd);
}
B6dbc7a:L6dbc7a:{c.instructions+=9;NFSU2_TR(0x6dbc7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6dbc7c:{NFSU2_TR(0x6dbc7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6dbc7f:{NFSU2_TR(0x6dbc7f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbc80:{NFSU2_TR(0x6dbc80);
__builtin_memmove(gp(0x8a8060),(R+0),4);
}
B6dbc85:{NFSU2_TR(0x6dbc85);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dbc8a:{NFSU2_TR(0x6dbc8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dbc8c:{NFSU2_TR(0x6dbc8c);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbc91:{NFSU2_TR(0x6dbc91);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbc92:{NFSU2_TR(0x6dbc92);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dbc98ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dbc98:L6dbc98:{c.instructions+=7;NFSU2_TR(0x6dbc98);
__builtin_memmove((R+8),gp(0x80f260),4);
}
B6dbc9e:{NFSU2_TR(0x6dbc9e);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dbca3:{NFSU2_TR(0x6dbca3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dbca5:{NFSU2_TR(0x6dbca5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbca6:{NFSU2_TR(0x6dbca6);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbca8:{NFSU2_TR(0x6dbca8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbca9:{NFSU2_TR(0x6dbca9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dbcafull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dbcaf:L6dbcaf:{c.instructions+=7;NFSU2_TR(0x6dbcaf);
__builtin_memmove((R+8),gp(0x80f264),4);
}
B6dbcb5:{NFSU2_TR(0x6dbcb5);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dbcba:{NFSU2_TR(0x6dbcba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dbcbc:{NFSU2_TR(0x6dbcbc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbcbd:{NFSU2_TR(0x6dbcbd);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbcbf:{NFSU2_TR(0x6dbcbf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbcc0:{NFSU2_TR(0x6dbcc0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dbcc6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dbcc6:L6dbcc6:{c.instructions+=7;NFSU2_TR(0x6dbcc6);
__builtin_memmove(gp(0x8a8a2c),(R+12),1);
}
B6dbccc:{NFSU2_TR(0x6dbccc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dbccf:{NFSU2_TR(0x6dbccf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dbcd2:{NFSU2_TR(0x6dbcd2);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbcd4:{NFSU2_TR(0x6dbcd4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbcd5:{NFSU2_TR(0x6dbcd5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbcd6:{NFSU2_TR(0x6dbcd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dbcdbull));
TAIL_STATIC(0x6dc1a0u,6dc);
}
B6dbcdb:L6dbcdb:{c.instructions+=1;NFSU2_TR(0x6dbcdb);
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
B6dbcde:L6dbcde:{c.instructions+=4;NFSU2_TR(0x6dbcde);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbce1:{NFSU2_TR(0x6dbce1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dbce2:{NFSU2_TR(0x6dbce2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6dbce3:{NFSU2_TR(0x6dbce3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dbcf0:L6dbcf0:{c.instructions+=7;NFSU2_TR(0x6dbcf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbcf1:{NFSU2_TR(0x6dbcf1);
__builtin_memmove((R+24),(R+4),4);
}
B6dbcf3:{NFSU2_TR(0x6dbcf3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6dbcf5:{NFSU2_TR(0x6dbcf5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbcf6:{NFSU2_TR(0x6dbcf6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6dbcfa:{NFSU2_TR(0x6dbcfa);
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
B6dbcfc:{NFSU2_TR(0x6dbcfc);
if(r1(R+518)){{goto L6dbd0e;}}
}
B6dbcfe:L6dbcfe:{c.instructions+=1;NFSU2_TR(0x6dbcfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dbd03ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dbbf0u);}goto L6dbbf0;}
}
B6dbd03:L6dbd03:{c.instructions+=4;NFSU2_TR(0x6dbd03);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbd04:{NFSU2_TR(0x6dbd04);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6dbd07:{NFSU2_TR(0x6dbd07);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6dbd09:{NFSU2_TR(0x6dbd09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dbd0eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6db280u);}goto L6db280;}
}
B6dbd0e:L6dbd0e:{c.instructions+=3;NFSU2_TR(0x6dbd0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6dbd0f:{NFSU2_TR(0x6dbd0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dbd10:{NFSU2_TR(0x6dbd10);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dbd20:L6dbd20:{c.instructions+=4;NFSU2_TR(0x6dbd20);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dbd23:{NFSU2_TR(0x6dbd23);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B6dbd26:{NFSU2_TR(0x6dbd26);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4000ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4000ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6dbd2b:{NFSU2_TR(0x6dbd2b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6dbd43;}}
}
B6dbd2d:L6dbd2d:{c.instructions+=3;NFSU2_TR(0x6dbd2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6dbd2f:{NFSU2_TR(0x6dbd2f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dbd32:{NFSU2_TR(0x6dbd32);
if(r1(R+518)){{goto L6dbd43;}}
}
B6dbd34:L6dbd34:{c.instructions+=2;NFSU2_TR(0x6dbd34);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dbd37:{NFSU2_TR(0x6dbd37);
if(r1(R+518)){{goto L6dbd43;}}
}
B6dbd39:L6dbd39:{c.instructions+=2;NFSU2_TR(0x6dbd39);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dbd3c:{NFSU2_TR(0x6dbd3c);
if(r1(R+518)){{goto L6dbd43;}}
}
B6dbd3e:L6dbd3e:{c.instructions+=2;NFSU2_TR(0x6dbd3e);
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
B6dbd41:{NFSU2_TR(0x6dbd41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dbd48;}}
}
B6dbd43:L6dbd43:{c.instructions+=1;NFSU2_TR(0x6dbd43);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dbbf0u);}goto L6dbbf0;}
}
B6dbd48:L6dbd48:{c.instructions+=1;NFSU2_TR(0x6dbd48);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dbd50:L6dbd50:{c.instructions+=27;NFSU2_TR(0x6dbd50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B6dbd53:{NFSU2_TR(0x6dbd53);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbd54:{NFSU2_TR(0x6dbd54);
__builtin_memmove((R+24),(R+4),4);
}
B6dbd56:{NFSU2_TR(0x6dbd56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dbd59:{NFSU2_TR(0x6dbd59);
__builtin_memmove((R+0),(R+4),4);
}
B6dbd5b:{NFSU2_TR(0x6dbd5b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6dbd5e:{NFSU2_TR(0x6dbd5e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbd5f:{NFSU2_TR(0x6dbd5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6dbd62:{NFSU2_TR(0x6dbd62);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6dbd63:{NFSU2_TR(0x6dbd63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbd66:{NFSU2_TR(0x6dbd66);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dbd6a:{NFSU2_TR(0x6dbd6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dbd6c:{NFSU2_TR(0x6dbd6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dbd70:{NFSU2_TR(0x6dbd70);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbd73:{NFSU2_TR(0x6dbd73);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6dbd75:{NFSU2_TR(0x6dbd75);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B6dbd78:{NFSU2_TR(0x6dbd78);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6dbd7a:{NFSU2_TR(0x6dbd7a);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6dbd7d:{NFSU2_TR(0x6dbd7d);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B6dbd80:{NFSU2_TR(0x6dbd80);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6dbd83:{NFSU2_TR(0x6dbd83);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6dbd86:{NFSU2_TR(0x6dbd86);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B6dbd89:{NFSU2_TR(0x6dbd89);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6dbd8c:{NFSU2_TR(0x6dbd8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dbd8f:{NFSU2_TR(0x6dbd8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6dbd92:{NFSU2_TR(0x6dbd92);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4000ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4000ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6dbd97:{NFSU2_TR(0x6dbd97);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6dbeed;}}
}
B6dbd9d:L6dbd9d:{c.instructions+=4;NFSU2_TR(0x6dbd9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6dbd9f:{NFSU2_TR(0x6dbd9f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dbda2:{NFSU2_TR(0x6dbda2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbda3:{NFSU2_TR(0x6dbda3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dbdb7;}}
}
B6dbda5:L6dbda5:{c.instructions+=6;NFSU2_TR(0x6dbda5);
__builtin_memmove((R+0),(R+4),4);
}
B6dbda7:{NFSU2_TR(0x6dbda7);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6dbda8:{NFSU2_TR(0x6dbda8);
w4(R+12,u32(0x3ull));
}
B6dbdad:{NFSU2_TR(0x6dbdad);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6dbdad);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6dbdad);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B6dbdaf:{NFSU2_TR(0x6dbdaf);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6dbdb1:{NFSU2_TR(0x6dbdb1);
if(r1(R+518)){{goto L6dbee5;}}
}
B6dbdb7:L6dbdb7:{c.instructions+=3;NFSU2_TR(0x6dbdb7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6dbdba:{NFSU2_TR(0x6dbdba);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4000ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4000ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dbdc0:{NFSU2_TR(0x6dbdc0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6dbeec;}}
}
B6dbdc6:L6dbdc6:{c.instructions+=2;NFSU2_TR(0x6dbdc6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dbdc9:{NFSU2_TR(0x6dbdc9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dbddf;}}
}
B6dbdcb:L6dbdcb:{c.instructions+=3;NFSU2_TR(0x6dbdcb);
__builtin_memmove((R+0),(R+4),4);
}
B6dbdcd:{NFSU2_TR(0x6dbdcd);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x80000001ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6dbdd2:{NFSU2_TR(0x6dbdd2);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L6dbdd9;}}
}
B6dbdd4:L6dbdd4:{c.instructions+=3;NFSU2_TR(0x6dbdd4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6dbdd5:{NFSU2_TR(0x6dbdd5);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xfffffffeull))));
}
B6dbdd8:{NFSU2_TR(0x6dbdd8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6dbdd9:L6dbdd9:{c.instructions+=1;NFSU2_TR(0x6dbdd9);
if(r1(R+518)){{goto L6dbee5;}}
}
B6dbddf:L6dbddf:{c.instructions+=3;NFSU2_TR(0x6dbddf);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6dbde2:{NFSU2_TR(0x6dbde2);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4000ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4000ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dbde8:{NFSU2_TR(0x6dbde8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6dbeec;}}
}
B6dbdee:L6dbdee:{c.instructions+=17;NFSU2_TR(0x6dbdee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dbdf1:{NFSU2_TR(0x6dbdf1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6dbdf3:{NFSU2_TR(0x6dbdf3);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbdf7:{NFSU2_TR(0x6dbdf7);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbdfb:{NFSU2_TR(0x6dbdfb);
__builtin_memmove((R+0),(R+4),4);
}
B6dbdfd:{NFSU2_TR(0x6dbdfd);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6dbe00:{NFSU2_TR(0x6dbe00);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dbe03:{NFSU2_TR(0x6dbe03);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B6dbe07:{NFSU2_TR(0x6dbe07);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6dbe0b:{NFSU2_TR(0x6dbe0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbe0f:{NFSU2_TR(0x6dbe0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6dbe11:{NFSU2_TR(0x6dbe11);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbe15:{NFSU2_TR(0x6dbe15);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6dbe18:{NFSU2_TR(0x6dbe18);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbe1c:{NFSU2_TR(0x6dbe1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dbe1f:{NFSU2_TR(0x6dbe1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbe23:{NFSU2_TR(0x6dbe23);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dbe7b;}}
}
B6dbe25:L6dbe25:{c.instructions+=13;NFSU2_TR(0x6dbe25);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+0),(U+0),4);
}
B6dbe28:{NFSU2_TR(0x6dbe28);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6dbe2b:{NFSU2_TR(0x6dbe2b);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6dbe2f:{NFSU2_TR(0x6dbe2f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6dbe31:{NFSU2_TR(0x6dbe31);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbe35:{NFSU2_TR(0x6dbe35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dbe37:{NFSU2_TR(0x6dbe37);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbe3b:{NFSU2_TR(0x6dbe3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dbe3e:{NFSU2_TR(0x6dbe3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbe42:{NFSU2_TR(0x6dbe42);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dbe45:{NFSU2_TR(0x6dbe45);
__builtin_memmove((R+4),(R+24),4);
}
B6dbe47:{NFSU2_TR(0x6dbe47);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbe4b:{NFSU2_TR(0x6dbe4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dbe50ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dbbf0u);}goto L6dbbf0;}
}
B6dbe50:L6dbe50:{c.instructions+=6;NFSU2_TR(0x6dbe50);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6dbe54:{NFSU2_TR(0x6dbe54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbe55:{NFSU2_TR(0x6dbe55);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6dbe59:{NFSU2_TR(0x6dbe59);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbe5a:{NFSU2_TR(0x6dbe5a);
__builtin_memmove((R+4),(R+24),4);
}
B6dbe5c:{NFSU2_TR(0x6dbe5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dbe61ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dbd50u);}goto L6dbd50;}
}
B6dbe61:L6dbe61:{c.instructions+=6;NFSU2_TR(0x6dbe61);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6dbe65:{NFSU2_TR(0x6dbe65);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbe66:{NFSU2_TR(0x6dbe66);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6dbe6a:{NFSU2_TR(0x6dbe6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbe6b:{NFSU2_TR(0x6dbe6b);
__builtin_memmove((R+4),(R+24),4);
}
B6dbe6d:{NFSU2_TR(0x6dbe6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dbe72ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dbd50u);}goto L6dbd50;}
}
B6dbe72:L6dbe72:{c.instructions+=5;NFSU2_TR(0x6dbe72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6dbe73:{NFSU2_TR(0x6dbe73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6dbe74:{NFSU2_TR(0x6dbe74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dbe75:{NFSU2_TR(0x6dbe75);
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
B6dbe78:{NFSU2_TR(0x6dbe78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dbe7b:L6dbe7b:{c.instructions+=2;NFSU2_TR(0x6dbe7b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dbe7e:{NFSU2_TR(0x6dbe7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dbea1;}}
}
B6dbe80:L6dbe80:{c.instructions+=2;NFSU2_TR(0x6dbe80);
__builtin_memmove((R+4),(R+24),4);
}
B6dbe82:{NFSU2_TR(0x6dbe82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dbe87ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dbbf0u);}goto L6dbbf0;}
}
B6dbe87:L6dbe87:{c.instructions+=6;NFSU2_TR(0x6dbe87);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6dbe8b:{NFSU2_TR(0x6dbe8b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbe8c:{NFSU2_TR(0x6dbe8c);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6dbe90:{NFSU2_TR(0x6dbe90);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbe91:{NFSU2_TR(0x6dbe91);
__builtin_memmove((R+4),(R+24),4);
}
B6dbe93:{NFSU2_TR(0x6dbe93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dbe98ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dbd50u);}goto L6dbd50;}
}
B6dbe98:L6dbe98:{c.instructions+=5;NFSU2_TR(0x6dbe98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6dbe99:{NFSU2_TR(0x6dbe99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6dbe9a:{NFSU2_TR(0x6dbe9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dbe9b:{NFSU2_TR(0x6dbe9b);
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
B6dbe9e:{NFSU2_TR(0x6dbe9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dbea1:L6dbea1:{c.instructions+=2;NFSU2_TR(0x6dbea1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dbea4:{NFSU2_TR(0x6dbea4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dbedb;}}
}
B6dbea6:L6dbea6:{c.instructions+=10;NFSU2_TR(0x6dbea6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dbea9:{NFSU2_TR(0x6dbea9);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbead:{NFSU2_TR(0x6dbead);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dbeaf:{NFSU2_TR(0x6dbeaf);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbeb3:{NFSU2_TR(0x6dbeb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dbeb6:{NFSU2_TR(0x6dbeb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbeba:{NFSU2_TR(0x6dbeba);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dbebd:{NFSU2_TR(0x6dbebd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbec1:{NFSU2_TR(0x6dbec1);
__builtin_memmove((R+4),(R+24),4);
}
B6dbec3:{NFSU2_TR(0x6dbec3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dbec8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dbbf0u);}goto L6dbbf0;}
}
B6dbec8:L6dbec8:{c.instructions+=6;NFSU2_TR(0x6dbec8);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6dbecc:{NFSU2_TR(0x6dbecc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbecd:{NFSU2_TR(0x6dbecd);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6dbed1:{NFSU2_TR(0x6dbed1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbed2:{NFSU2_TR(0x6dbed2);
__builtin_memmove((R+4),(R+24),4);
}
B6dbed4:{NFSU2_TR(0x6dbed4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dbed9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dbd50u);}goto L6dbd50;}
}
B6dbed9:L6dbed9:{c.instructions+=1;NFSU2_TR(0x6dbed9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dbe87u);}goto L6dbe87;}
}
B6dbedb:L6dbedb:{c.instructions+=2;NFSU2_TR(0x6dbedb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dbede:{NFSU2_TR(0x6dbede);
if(r1(R+518)){{goto L6dbee5;}}
}
B6dbee0:L6dbee0:{c.instructions+=2;NFSU2_TR(0x6dbee0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dbee3:{NFSU2_TR(0x6dbee3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dbeec;}}
}
B6dbee5:L6dbee5:{c.instructions+=2;NFSU2_TR(0x6dbee5);
__builtin_memmove((R+4),(R+24),4);
}
B6dbee7:{NFSU2_TR(0x6dbee7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dbeecull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dbbf0u);}goto L6dbbf0;}
}
B6dbeec:L6dbeec:{c.instructions+=1;NFSU2_TR(0x6dbeec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6dbeed:L6dbeed:{c.instructions+=4;NFSU2_TR(0x6dbeed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6dbeee:{NFSU2_TR(0x6dbeee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dbeef:{NFSU2_TR(0x6dbeef);
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
B6dbef2:{NFSU2_TR(0x6dbef2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dbf00:L6dbf00:{c.instructions+=5;NFSU2_TR(0x6dbf00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbf01:{NFSU2_TR(0x6dbf01);
__builtin_memmove((R+24),(R+4),4);
}
B6dbf03:{NFSU2_TR(0x6dbf03);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6dbf06:{NFSU2_TR(0x6dbf06);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6dbf0c:{NFSU2_TR(0x6dbf0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dbf11ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6db740u);}goto L6db740;}
}
B6dbf11:L6dbf11:{c.instructions+=6;NFSU2_TR(0x6dbf11);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6dbf13:{NFSU2_TR(0x6dbf13);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6dbf19:{NFSU2_TR(0x6dbf19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbf1c:{NFSU2_TR(0x6dbf1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbf1f:{NFSU2_TR(0x6dbf1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dbf22:{NFSU2_TR(0x6dbf22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dbf27ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dba80u);}goto L6dba80;}
}
B6dbf27:L6dbf27:{c.instructions+=3;NFSU2_TR(0x6dbf27);
__builtin_memmove((R+0),(R+24),4);
}
B6dbf29:{NFSU2_TR(0x6dbf29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dbf2a:{NFSU2_TR(0x6dbf2a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dbf30:L6dbf30:{c.instructions+=4;NFSU2_TR(0x6dbf30);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dbf34:{NFSU2_TR(0x6dbf34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6dbf36:{NFSU2_TR(0x6dbf36);
u8 U[14];
__builtin_memmove((U+6),gp(0x8a8068),4);
w1(R+512,u8((r4(U+6))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+0)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6dbf3c:{NFSU2_TR(0x6dbf3c);
if(r1(R+518)){{goto L6dbf5f;}}
}
B6dbf3e:L6dbf3e:{c.instructions+=7;NFSU2_TR(0x6dbf3e);
__builtin_memmove(gp(0x8a8068),(R+0),4);
}
B6dbf43:{NFSU2_TR(0x6dbf43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dbf45:{NFSU2_TR(0x6dbf45);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dbf4a:{NFSU2_TR(0x6dbf4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dbf4c:{NFSU2_TR(0x6dbf4c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbf4d:{NFSU2_TR(0x6dbf4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbf4e:{NFSU2_TR(0x6dbf4e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dbf54ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dbf54:L6dbf54:{c.instructions+=1;NFSU2_TR(0x6dbf54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dbf59ull));
TAIL_STATIC(0x6d81f0u,6d8);
}
B6dbf59:L6dbf59:{c.instructions+=1;NFSU2_TR(0x6dbf59);
u8 U[6];
w1(R+523,scarry<u32>(m4(0x8a80c8),u32(0x1ull)));
s4(0x8a80c8,u32(u32(m4(0x8a80c8))+u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x8a80c8))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x8a80c8))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x8a80c8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6dbf5f:L6dbf5f:{c.instructions+=1;NFSU2_TR(0x6dbf5f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dbf60:L6dbf60:{c.instructions+=3;NFSU2_TR(0x6dbf60);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dbf64:{NFSU2_TR(0x6dbf64);
u8 U[14];
__builtin_memmove((U+6),gp(0x8a8068),4);
w1(R+512,u8((r4(U+6))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+0)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6dbf6a:{NFSU2_TR(0x6dbf6a);
if(r1(R+518)){{goto L6dbf8c;}}
}
B6dbf6c:L6dbf6c:{c.instructions+=6;NFSU2_TR(0x6dbf6c);
__builtin_memmove((R+4),gp(0x8a79a0),4);
}
B6dbf72:{NFSU2_TR(0x6dbf72);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbf73:{NFSU2_TR(0x6dbf73);
__builtin_memmove(gp(0x8a8068),(R+0),4);
}
B6dbf78:{NFSU2_TR(0x6dbf78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dbf7a:{NFSU2_TR(0x6dbf7a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbf7b:{NFSU2_TR(0x6dbf7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dbf81ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dbf81:L6dbf81:{c.instructions+=1;NFSU2_TR(0x6dbf81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dbf86ull));
TAIL_STATIC(0x6d81f0u,6d8);
}
B6dbf86:L6dbf86:{c.instructions+=1;NFSU2_TR(0x6dbf86);
u8 U[6];
w1(R+523,scarry<u32>(m4(0x8a80c8),u32(0x1ull)));
s4(0x8a80c8,u32(u32(m4(0x8a80c8))+u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x8a80c8))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x8a80c8))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x8a80c8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6dbf8c:L6dbf8c:{c.instructions+=1;NFSU2_TR(0x6dbf8c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dbf90:L6dbf90:{c.instructions+=10;NFSU2_TR(0x6dbf90);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dbf94:{NFSU2_TR(0x6dbf94);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dbf99:{NFSU2_TR(0x6dbf99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dbf9b:{NFSU2_TR(0x6dbf9b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbf9c:{NFSU2_TR(0x6dbf9c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dbfa0:{NFSU2_TR(0x6dbfa0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbfa1:{NFSU2_TR(0x6dbfa1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dbfa5:{NFSU2_TR(0x6dbfa5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbfa6:{NFSU2_TR(0x6dbfa6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbfa7:{NFSU2_TR(0x6dbfa7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dbfadull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dbfad:L6dbfad:{c.instructions+=1;NFSU2_TR(0x6dbfad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dbfb0:L6dbfb0:{c.instructions+=6;NFSU2_TR(0x6dbfb0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbfb1:{NFSU2_TR(0x6dbfb1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6dbfb5:{NFSU2_TR(0x6dbfb5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbfb6:{NFSU2_TR(0x6dbfb6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6dbfba:{NFSU2_TR(0x6dbfba);
u8 U[26];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a8078ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+18),r4(R+24)));
w4(U+22,u32(u32(r4(U+18))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6dbfc1:{NFSU2_TR(0x6dbfc1);
if(r1(R+518)){{goto L6dbfec;}}
}
B6dbfc3:L6dbfc3:{c.instructions+=9;NFSU2_TR(0x6dbfc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dbfc6:{NFSU2_TR(0x6dbfc6);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dbfcb:{NFSU2_TR(0x6dbfcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dbfcd:{NFSU2_TR(0x6dbfcd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbfce:{NFSU2_TR(0x6dbfce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dbfd1:{NFSU2_TR(0x6dbfd1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbfd2:{NFSU2_TR(0x6dbfd2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbfd3:{NFSU2_TR(0x6dbfd3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dbfd4:{NFSU2_TR(0x6dbfd4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dbfdaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dbfda:L6dbfda:{c.instructions+=4;NFSU2_TR(0x6dbfda);
__builtin_memmove((R+0),gp(0x8a80d0),4);
}
B6dbfdf:{NFSU2_TR(0x6dbfdf);
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
B6dbfe0:{NFSU2_TR(0x6dbfe0);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a8078ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dbfe7:{NFSU2_TR(0x6dbfe7);
__builtin_memmove(gp(0x8a80d0),(R+0),4);
}
B6dbfec:L6dbfec:{c.instructions+=3;NFSU2_TR(0x6dbfec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6dbfed:{NFSU2_TR(0x6dbfed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dbfee:{NFSU2_TR(0x6dbfee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dbff0:L6dbff0:{c.instructions+=3;NFSU2_TR(0x6dbff0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dbff4:{NFSU2_TR(0x6dbff4);
__builtin_memmove(gp(0x8a806c),(R+0),4);
}
B6dbff9:{NFSU2_TR(0x6dbff9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x6db,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
