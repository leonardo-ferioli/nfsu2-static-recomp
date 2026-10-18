#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_42f(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5de(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_60b(u8* __restrict R,Cpu& c);
u32 body_61f(u8* __restrict R,Cpu& c);
u32 body_633(u8* __restrict R,Cpu& c);
u32 body_6d7(u8* __restrict R,Cpu& c);
u32 body_6d8(u8* __restrict R,Cpu& c);
u32 body_6e1(u8* __restrict R,Cpu& c);
u32 body_6e2(u8* __restrict R,Cpu& c);
u32 body_6e3(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x431,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x431,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_431(u8* __restrict R,Cpu& c);
u32 page_431(Cpu& c){return body_431(c.regs.data(),c);}
__attribute__((noinline)) u32 body_431(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x431002:goto L431002;
case 0x431006:c.instructions+=7;goto B431006;
case 0x431009:c.instructions+=6;goto B431009;
case 0x43100c:c.instructions+=5;goto B43100c;
case 0x43100f:c.instructions+=4;goto B43100f;
case 0x431016:c.instructions+=3;goto B431016;
case 0x431018:c.instructions+=2;goto B431018;
case 0x43101d:c.instructions+=1;goto B43101d;
case 0x431022:goto L431022;
case 0x431024:goto L431024;
case 0x431027:c.instructions+=14;goto B431027;
case 0x43102a:c.instructions+=13;goto B43102a;
case 0x43102e:c.instructions+=12;goto B43102e;
case 0x431032:c.instructions+=11;goto B431032;
case 0x431034:c.instructions+=10;goto B431034;
case 0x431037:c.instructions+=9;goto B431037;
case 0x43103a:c.instructions+=8;goto B43103a;
case 0x43103d:c.instructions+=7;goto B43103d;
case 0x43103f:c.instructions+=6;goto B43103f;
case 0x431042:c.instructions+=5;goto B431042;
case 0x431045:c.instructions+=4;goto B431045;
case 0x431049:c.instructions+=3;goto B431049;
case 0x43104b:c.instructions+=2;goto B43104b;
case 0x431050:c.instructions+=1;goto B431050;
case 0x431055:goto L431055;
case 0x431057:goto L431057;
case 0x43105a:c.instructions+=9;goto B43105a;
case 0x43105d:c.instructions+=8;goto B43105d;
case 0x43105f:c.instructions+=7;goto B43105f;
case 0x431062:c.instructions+=6;goto B431062;
case 0x431065:c.instructions+=5;goto B431065;
case 0x431068:c.instructions+=4;goto B431068;
case 0x43106c:c.instructions+=3;goto B43106c;
case 0x43106e:c.instructions+=2;goto B43106e;
case 0x431073:c.instructions+=1;goto B431073;
case 0x431078:goto L431078;
case 0x43107a:goto L43107a;
case 0x43107d:c.instructions+=9;goto B43107d;
case 0x431080:c.instructions+=8;goto B431080;
case 0x431082:c.instructions+=7;goto B431082;
case 0x431085:c.instructions+=6;goto B431085;
case 0x431088:c.instructions+=5;goto B431088;
case 0x43108b:c.instructions+=4;goto B43108b;
case 0x43108f:c.instructions+=3;goto B43108f;
case 0x431091:c.instructions+=2;goto B431091;
case 0x431096:c.instructions+=1;goto B431096;
case 0x43109b:goto L43109b;
case 0x43109d:goto L43109d;
case 0x4310a0:c.instructions+=9;goto B4310a0;
case 0x4310a3:c.instructions+=8;goto B4310a3;
case 0x4310a5:c.instructions+=7;goto B4310a5;
case 0x4310a8:c.instructions+=6;goto B4310a8;
case 0x4310ab:c.instructions+=5;goto B4310ab;
case 0x4310ae:c.instructions+=4;goto B4310ae;
case 0x4310b2:c.instructions+=3;goto B4310b2;
case 0x4310b7:c.instructions+=2;goto B4310b7;
case 0x4310bc:c.instructions+=1;goto B4310bc;
case 0x4310be:goto L4310be;
case 0x4310c0:goto L4310c0;
case 0x4310c3:c.instructions+=9;goto B4310c3;
case 0x4310c6:c.instructions+=8;goto B4310c6;
case 0x4310c9:c.instructions+=7;goto B4310c9;
case 0x4310cc:c.instructions+=6;goto B4310cc;
case 0x4310cf:c.instructions+=5;goto B4310cf;
case 0x4310d1:c.instructions+=4;goto B4310d1;
case 0x4310d8:c.instructions+=3;goto B4310d8;
case 0x4310da:c.instructions+=2;goto B4310da;
case 0x4310df:c.instructions+=1;goto B4310df;
case 0x4310e4:goto L4310e4;
case 0x4310e6:goto L4310e6;
case 0x4310e9:c.instructions+=8;goto B4310e9;
case 0x4310ec:c.instructions+=7;goto B4310ec;
case 0x4310ef:c.instructions+=6;goto B4310ef;
case 0x4310f2:c.instructions+=5;goto B4310f2;
case 0x4310f5:c.instructions+=4;goto B4310f5;
case 0x4310fc:c.instructions+=3;goto B4310fc;
case 0x4310fe:c.instructions+=2;goto B4310fe;
case 0x431103:c.instructions+=1;goto B431103;
case 0x431108:goto L431108;
case 0x43110a:goto L43110a;
case 0x43110d:c.instructions+=9;goto B43110d;
case 0x431110:c.instructions+=8;goto B431110;
case 0x431113:c.instructions+=7;goto B431113;
case 0x431116:c.instructions+=6;goto B431116;
case 0x431117:c.instructions+=5;goto B431117;
case 0x43111a:c.instructions+=4;goto B43111a;
case 0x43111b:c.instructions+=3;goto B43111b;
case 0x43111e:c.instructions+=2;goto B43111e;
case 0x43111f:c.instructions+=1;goto B43111f;
case 0x431130:goto L431130;
case 0x431136:c.instructions+=13;goto B431136;
case 0x431138:c.instructions+=12;goto B431138;
case 0x43113b:c.instructions+=11;goto B43113b;
case 0x43113f:c.instructions+=10;goto B43113f;
case 0x431142:c.instructions+=9;goto B431142;
case 0x431143:c.instructions+=8;goto B431143;
case 0x431147:c.instructions+=7;goto B431147;
case 0x431148:c.instructions+=6;goto B431148;
case 0x43114c:c.instructions+=5;goto B43114c;
case 0x43114d:c.instructions+=4;goto B43114d;
case 0x43114e:c.instructions+=3;goto B43114e;
case 0x431150:c.instructions+=2;goto B431150;
case 0x431155:c.instructions+=1;goto B431155;
case 0x43115a:goto L43115a;
case 0x43115c:goto L43115c;
case 0x43115f:c.instructions+=14;goto B43115f;
case 0x431162:c.instructions+=13;goto B431162;
case 0x431168:c.instructions+=12;goto B431168;
case 0x43116c:c.instructions+=11;goto B43116c;
case 0x431170:c.instructions+=10;goto B431170;
case 0x431173:c.instructions+=9;goto B431173;
case 0x431176:c.instructions+=8;goto B431176;
case 0x431179:c.instructions+=7;goto B431179;
case 0x43117a:c.instructions+=6;goto B43117a;
case 0x43117d:c.instructions+=5;goto B43117d;
case 0x43117f:c.instructions+=4;goto B43117f;
case 0x431181:c.instructions+=3;goto B431181;
case 0x431183:c.instructions+=2;goto B431183;
case 0x431186:c.instructions+=1;goto B431186;
case 0x431188:goto L431188;
case 0x431190:goto L431190;
case 0x431194:c.instructions+=8;goto B431194;
case 0x431197:c.instructions+=7;goto B431197;
case 0x43119b:c.instructions+=6;goto B43119b;
case 0x43119d:c.instructions+=5;goto B43119d;
case 0x43119f:c.instructions+=4;goto B43119f;
case 0x4311a3:c.instructions+=3;goto B4311a3;
case 0x4311a5:c.instructions+=2;goto B4311a5;
case 0x4311aa:c.instructions+=1;goto B4311aa;
case 0x4311ac:goto L4311ac;
case 0x4311b1:c.instructions+=2;goto B4311b1;
case 0x4311b3:c.instructions+=1;goto B4311b3;
case 0x4311b5:goto L4311b5;
case 0x4311ba:c.instructions+=1;goto B4311ba;
case 0x4311bc:goto L4311bc;
case 0x4311be:goto L4311be;
case 0x4311c1:c.instructions+=12;goto B4311c1;
case 0x4311c5:c.instructions+=11;goto B4311c5;
case 0x4311c8:c.instructions+=10;goto B4311c8;
case 0x4311cb:c.instructions+=9;goto B4311cb;
case 0x4311cf:c.instructions+=8;goto B4311cf;
case 0x4311d2:c.instructions+=7;goto B4311d2;
case 0x4311d5:c.instructions+=6;goto B4311d5;
case 0x4311d6:c.instructions+=5;goto B4311d6;
case 0x4311d9:c.instructions+=4;goto B4311d9;
case 0x4311db:c.instructions+=3;goto B4311db;
case 0x4311dd:c.instructions+=2;goto B4311dd;
case 0x4311e0:c.instructions+=1;goto B4311e0;
case 0x4311e2:goto L4311e2;
case 0x4311e6:c.instructions+=6;goto B4311e6;
case 0x4311e9:c.instructions+=5;goto B4311e9;
case 0x4311ed:c.instructions+=4;goto B4311ed;
case 0x4311ef:c.instructions+=3;goto B4311ef;
case 0x4311f4:c.instructions+=2;goto B4311f4;
case 0x4311f8:c.instructions+=1;goto B4311f8;
case 0x4311fd:goto L4311fd;
case 0x4311ff:goto L4311ff;
case 0x431202:c.instructions+=12;goto B431202;
case 0x431206:c.instructions+=11;goto B431206;
case 0x431209:c.instructions+=10;goto B431209;
case 0x43120c:c.instructions+=9;goto B43120c;
case 0x43120f:c.instructions+=8;goto B43120f;
case 0x431212:c.instructions+=7;goto B431212;
case 0x431213:c.instructions+=6;goto B431213;
case 0x431214:c.instructions+=5;goto B431214;
case 0x431215:c.instructions+=4;goto B431215;
case 0x431216:c.instructions+=3;goto B431216;
case 0x431219:c.instructions+=2;goto B431219;
case 0x43121a:c.instructions+=1;goto B43121a;
case 0x431220:goto L431220;
case 0x431222:c.instructions+=20;goto B431222;
case 0x431224:c.instructions+=19;goto B431224;
case 0x431226:c.instructions+=18;goto B431226;
case 0x431229:c.instructions+=17;goto B431229;
case 0x43122c:c.instructions+=16;goto B43122c;
case 0x431232:c.instructions+=15;goto B431232;
case 0x431235:c.instructions+=14;goto B431235;
case 0x431238:c.instructions+=13;goto B431238;
case 0x43123b:c.instructions+=12;goto B43123b;
case 0x43123e:c.instructions+=11;goto B43123e;
case 0x431241:c.instructions+=10;goto B431241;
case 0x431244:c.instructions+=9;goto B431244;
case 0x431247:c.instructions+=8;goto B431247;
case 0x43124c:c.instructions+=7;goto B43124c;
case 0x43124f:c.instructions+=6;goto B43124f;
case 0x431252:c.instructions+=5;goto B431252;
case 0x431255:c.instructions+=4;goto B431255;
case 0x431258:c.instructions+=3;goto B431258;
case 0x43125b:c.instructions+=2;goto B43125b;
case 0x43125e:c.instructions+=1;goto B43125e;
case 0x431260:goto L431260;
case 0x431263:c.instructions+=2;goto B431263;
case 0x431265:c.instructions+=1;goto B431265;
case 0x431267:goto L431267;
case 0x43126e:goto L43126e;
case 0x431270:c.instructions+=1;goto B431270;
case 0x431280:goto L431280;
case 0x431281:c.instructions+=10;goto B431281;
case 0x431283:c.instructions+=9;goto B431283;
case 0x431286:c.instructions+=8;goto B431286;
case 0x43128c:c.instructions+=7;goto B43128c;
case 0x43128d:c.instructions+=6;goto B43128d;
case 0x43128e:c.instructions+=5;goto B43128e;
case 0x431290:c.instructions+=4;goto B431290;
case 0x431293:c.instructions+=3;goto B431293;
case 0x431299:c.instructions+=2;goto B431299;
case 0x43129b:c.instructions+=1;goto B43129b;
case 0x43129d:goto L43129d;
case 0x43129f:c.instructions+=1;goto B43129f;
case 0x4312a4:goto L4312a4;
case 0x4312a7:c.instructions+=4;goto B4312a7;
case 0x4312ae:c.instructions+=3;goto B4312ae;
case 0x4312af:c.instructions+=2;goto B4312af;
case 0x4312b0:c.instructions+=1;goto B4312b0;
case 0x4312b5:goto L4312b5;
case 0x4312b8:c.instructions+=11;goto B4312b8;
case 0x4312bb:c.instructions+=10;goto B4312bb;
case 0x4312be:c.instructions+=9;goto B4312be;
case 0x4312c1:c.instructions+=8;goto B4312c1;
case 0x4312c4:c.instructions+=7;goto B4312c4;
case 0x4312c6:c.instructions+=6;goto B4312c6;
case 0x4312c9:c.instructions+=5;goto B4312c9;
case 0x4312cd:c.instructions+=4;goto B4312cd;
case 0x4312ce:c.instructions+=3;goto B4312ce;
case 0x4312d2:c.instructions+=2;goto B4312d2;
case 0x4312d3:c.instructions+=1;goto B4312d3;
case 0x4312d8:goto L4312d8;
case 0x4312dc:c.instructions+=7;goto B4312dc;
case 0x4312dd:c.instructions+=6;goto B4312dd;
case 0x4312e0:c.instructions+=5;goto B4312e0;
case 0x4312e2:c.instructions+=4;goto B4312e2;
case 0x4312e6:c.instructions+=3;goto B4312e6;
case 0x4312e7:c.instructions+=2;goto B4312e7;
case 0x4312e8:c.instructions+=1;goto B4312e8;
case 0x4312ed:goto L4312ed;
case 0x4312f0:c.instructions+=11;goto B4312f0;
case 0x4312f4:c.instructions+=10;goto B4312f4;
case 0x4312f8:c.instructions+=9;goto B4312f8;
case 0x4312fa:c.instructions+=8;goto B4312fa;
case 0x4312fe:c.instructions+=7;goto B4312fe;
case 0x431301:c.instructions+=6;goto B431301;
case 0x431302:c.instructions+=5;goto B431302;
case 0x431309:c.instructions+=4;goto B431309;
case 0x43130a:c.instructions+=3;goto B43130a;
case 0x43130b:c.instructions+=2;goto B43130b;
case 0x43130e:c.instructions+=1;goto B43130e;
case 0x431313:goto L431313;
case 0x431316:c.instructions+=5;goto B431316;
case 0x431317:c.instructions+=4;goto B431317;
case 0x431318:c.instructions+=3;goto B431318;
case 0x43131a:c.instructions+=2;goto B43131a;
case 0x43131b:c.instructions+=1;goto B43131b;
case 0x431320:goto L431320;
case 0x431321:c.instructions+=5;goto B431321;
case 0x431323:c.instructions+=4;goto B431323;
case 0x431324:c.instructions+=3;goto B431324;
case 0x431327:c.instructions+=2;goto B431327;
case 0x431329:c.instructions+=1;goto B431329;
case 0x43132b:goto L43132b;
case 0x43132d:c.instructions+=1;goto B43132d;
case 0x431332:goto L431332;
case 0x431337:c.instructions+=3;goto B431337;
case 0x431338:c.instructions+=2;goto B431338;
case 0x431339:c.instructions+=1;goto B431339;
case 0x43133e:goto L43133e;
case 0x431341:c.instructions+=1;goto B431341;
case 0x431348:goto L431348;
case 0x43134b:c.instructions+=2;goto B43134b;
case 0x43134d:c.instructions+=1;goto B43134d;
case 0x43134f:goto L43134f;
case 0x431350:c.instructions+=1;goto B431350;
case 0x431355:goto L431355;
case 0x431358:goto L431358;
case 0x431359:c.instructions+=2;goto B431359;
case 0x43135a:c.instructions+=1;goto B43135a;
case 0x431360:goto L431360;
case 0x431363:c.instructions+=2;goto B431363;
case 0x431365:c.instructions+=1;goto B431365;
case 0x431367:goto L431367;
case 0x43136e:goto L43136e;
case 0x431370:c.instructions+=1;goto B431370;
case 0x431380:goto L431380;
case 0x431385:c.instructions+=2;goto B431385;
case 0x431387:c.instructions+=1;goto B431387;
case 0x431389:goto L431389;
case 0x43138b:c.instructions+=4;goto B43138b;
case 0x431390:c.instructions+=3;goto B431390;
case 0x431392:c.instructions+=2;goto B431392;
case 0x431394:c.instructions+=1;goto B431394;
case 0x431399:goto L431399;
case 0x43139c:c.instructions+=2;goto B43139c;
case 0x4313a1:c.instructions+=1;goto B4313a1;
case 0x4313a8:goto L4313a8;
case 0x4313b0:goto L4313b0;
case 0x4313b2:c.instructions+=4;goto B4313b2;
case 0x4313b7:c.instructions+=3;goto B4313b7;
case 0x4313b9:c.instructions+=2;goto B4313b9;
case 0x4313be:c.instructions+=1;goto B4313be;
case 0x4313c3:goto L4313c3;
case 0x4313c6:c.instructions+=2;goto B4313c6;
case 0x4313cb:c.instructions+=1;goto B4313cb;
case 0x4313d0:goto L4313d0;
case 0x4313d4:c.instructions+=13;goto B4313d4;
case 0x4313d7:c.instructions+=12;goto B4313d7;
case 0x4313db:c.instructions+=11;goto B4313db;
case 0x4313de:c.instructions+=10;goto B4313de;
case 0x4313e1:c.instructions+=9;goto B4313e1;
case 0x4313e4:c.instructions+=8;goto B4313e4;
case 0x4313e8:c.instructions+=7;goto B4313e8;
case 0x4313eb:c.instructions+=6;goto B4313eb;
case 0x4313ee:c.instructions+=5;goto B4313ee;
case 0x4313f1:c.instructions+=4;goto B4313f1;
case 0x4313f5:c.instructions+=3;goto B4313f5;
case 0x4313f8:c.instructions+=2;goto B4313f8;
case 0x4313fb:c.instructions+=1;goto B4313fb;
case 0x431400:goto L431400;
case 0x431401:c.instructions+=6;goto B431401;
case 0x431405:c.instructions+=5;goto B431405;
case 0x431406:c.instructions+=4;goto B431406;
case 0x431408:c.instructions+=3;goto B431408;
case 0x43140d:c.instructions+=2;goto B43140d;
case 0x43140f:c.instructions+=1;goto B43140f;
case 0x431411:goto L431411;
case 0x431414:c.instructions+=1;goto B431414;
case 0x431416:goto L431416;
case 0x43141b:c.instructions+=3;goto B43141b;
case 0x43141c:c.instructions+=2;goto B43141c;
case 0x43141d:c.instructions+=1;goto B43141d;
case 0x431420:goto L431420;
case 0x431423:c.instructions+=15;goto B431423;
case 0x431426:c.instructions+=14;goto B431426;
case 0x431429:c.instructions+=13;goto B431429;
case 0x43142c:c.instructions+=12;goto B43142c;
case 0x43142d:c.instructions+=11;goto B43142d;
case 0x431430:c.instructions+=10;goto B431430;
case 0x431434:c.instructions+=9;goto B431434;
case 0x431439:c.instructions+=8;goto B431439;
case 0x43143b:c.instructions+=7;goto B43143b;
case 0x43143f:c.instructions+=6;goto B43143f;
case 0x431440:c.instructions+=5;goto B431440;
case 0x431443:c.instructions+=4;goto B431443;
case 0x431444:c.instructions+=3;goto B431444;
case 0x431447:c.instructions+=2;goto B431447;
case 0x43144b:c.instructions+=1;goto B43144b;
case 0x43144d:goto L43144d;
case 0x431450:c.instructions+=2;goto B431450;
case 0x431452:c.instructions+=1;goto B431452;
case 0x431454:goto L431454;
case 0x431456:c.instructions+=4;goto B431456;
case 0x431458:c.instructions+=3;goto B431458;
case 0x431459:c.instructions+=2;goto B431459;
case 0x43145a:c.instructions+=1;goto B43145a;
case 0x43145d:goto L43145d;
case 0x431462:c.instructions+=2;goto B431462;
case 0x431464:c.instructions+=1;goto B431464;
case 0x431466:goto L431466;
case 0x431469:c.instructions+=2;goto B431469;
case 0x43146b:c.instructions+=1;goto B43146b;
case 0x43146d:goto L43146d;
case 0x43146f:c.instructions+=4;goto B43146f;
case 0x431471:c.instructions+=3;goto B431471;
case 0x431472:c.instructions+=2;goto B431472;
case 0x431473:c.instructions+=1;goto B431473;
case 0x431476:goto L431476;
case 0x43147b:c.instructions+=2;goto B43147b;
case 0x43147d:c.instructions+=1;goto B43147d;
case 0x43147f:goto L43147f;
case 0x431482:c.instructions+=2;goto B431482;
case 0x431484:c.instructions+=1;goto B431484;
case 0x431486:goto L431486;
case 0x431488:c.instructions+=4;goto B431488;
case 0x43148a:c.instructions+=3;goto B43148a;
case 0x43148b:c.instructions+=2;goto B43148b;
case 0x43148c:c.instructions+=1;goto B43148c;
case 0x43148f:goto L43148f;
case 0x431493:c.instructions+=5;goto B431493;
case 0x431495:c.instructions+=4;goto B431495;
case 0x431496:c.instructions+=3;goto B431496;
case 0x431497:c.instructions+=2;goto B431497;
case 0x431499:c.instructions+=1;goto B431499;
case 0x43149e:goto L43149e;
case 0x4314a2:c.instructions+=1;goto B4314a2;
case 0x4314a4:goto L4314a4;
case 0x4314a7:c.instructions+=5;goto B4314a7;
case 0x4314aa:c.instructions+=4;goto B4314aa;
case 0x4314ad:c.instructions+=3;goto B4314ad;
case 0x4314af:c.instructions+=2;goto B4314af;
case 0x4314b2:c.instructions+=1;goto B4314b2;
case 0x4314b4:goto L4314b4;
case 0x4314b7:c.instructions+=2;goto B4314b7;
case 0x4314b9:c.instructions+=1;goto B4314b9;
case 0x4314c0:goto L4314c0;
case 0x4314c1:c.instructions+=3;goto B4314c1;
case 0x4314c2:c.instructions+=2;goto B4314c2;
case 0x4314c3:c.instructions+=1;goto B4314c3;
case 0x4314c8:goto L4314c8;
case 0x4314cb:c.instructions+=4;goto B4314cb;
case 0x4314ce:c.instructions+=3;goto B4314ce;
case 0x4314d1:c.instructions+=2;goto B4314d1;
case 0x4314d2:c.instructions+=1;goto B4314d2;
case 0x4314d4:goto L4314d4;
case 0x4314d5:c.instructions+=6;goto B4314d5;
case 0x4314d6:c.instructions+=5;goto B4314d6;
case 0x4314d7:c.instructions+=4;goto B4314d7;
case 0x4314d9:c.instructions+=3;goto B4314d9;
case 0x4314da:c.instructions+=2;goto B4314da;
case 0x4314db:c.instructions+=1;goto B4314db;
case 0x4314e0:goto L4314e0;
case 0x4314e5:c.instructions+=2;goto B4314e5;
case 0x4314e7:c.instructions+=1;goto B4314e7;
case 0x4314e9:goto L4314e9;
case 0x4314eb:c.instructions+=4;goto B4314eb;
case 0x4314f0:c.instructions+=3;goto B4314f0;
case 0x4314f2:c.instructions+=2;goto B4314f2;
case 0x4314f4:c.instructions+=1;goto B4314f4;
case 0x4314f9:goto L4314f9;
case 0x4314fc:c.instructions+=2;goto B4314fc;
case 0x431501:c.instructions+=1;goto B431501;
case 0x431508:goto L431508;
case 0x431510:goto L431510;
case 0x431513:c.instructions+=7;goto B431513;
case 0x431514:c.instructions+=6;goto B431514;
case 0x431515:c.instructions+=5;goto B431515;
case 0x431517:c.instructions+=4;goto B431517;
case 0x43151a:c.instructions+=3;goto B43151a;
case 0x43151c:c.instructions+=2;goto B43151c;
case 0x43151e:c.instructions+=1;goto B43151e;
case 0x431520:goto L431520;
case 0x431524:c.instructions+=8;goto B431524;
case 0x431525:c.instructions+=7;goto B431525;
case 0x431529:c.instructions+=6;goto B431529;
case 0x43152a:c.instructions+=5;goto B43152a;
case 0x43152f:c.instructions+=4;goto B43152f;
case 0x431533:c.instructions+=3;goto B431533;
case 0x431537:c.instructions+=2;goto B431537;
case 0x43153b:c.instructions+=1;goto B43153b;
case 0x431540:goto L431540;
case 0x431542:c.instructions+=1;goto B431542;
case 0x431544:goto L431544;
case 0x431548:c.instructions+=5;goto B431548;
case 0x431549:c.instructions+=4;goto B431549;
case 0x43154d:c.instructions+=3;goto B43154d;
case 0x43154e:c.instructions+=2;goto B43154e;
case 0x431551:c.instructions+=1;goto B431551;
case 0x431556:goto L431556;
case 0x431559:c.instructions+=11;goto B431559;
case 0x43155c:c.instructions+=10;goto B43155c;
case 0x43155e:c.instructions+=9;goto B43155e;
case 0x431560:c.instructions+=8;goto B431560;
case 0x431563:c.instructions+=7;goto B431563;
case 0x431566:c.instructions+=6;goto B431566;
case 0x431567:c.instructions+=5;goto B431567;
case 0x43156a:c.instructions+=4;goto B43156a;
case 0x43156b:c.instructions+=3;goto B43156b;
case 0x43156c:c.instructions+=2;goto B43156c;
case 0x43156f:c.instructions+=1;goto B43156f;
case 0x431570:goto L431570;
case 0x431573:goto L431573;
case 0x431574:c.instructions+=3;goto B431574;
case 0x431575:c.instructions+=2;goto B431575;
case 0x431578:c.instructions+=1;goto B431578;
case 0x431580:goto L431580;
case 0x431585:c.instructions+=2;goto B431585;
case 0x431587:c.instructions+=1;goto B431587;
case 0x431589:goto L431589;
case 0x43158b:c.instructions+=4;goto B43158b;
case 0x431590:c.instructions+=3;goto B431590;
case 0x431592:c.instructions+=2;goto B431592;
case 0x431594:c.instructions+=1;goto B431594;
case 0x431599:goto L431599;
case 0x43159c:c.instructions+=2;goto B43159c;
case 0x4315a1:c.instructions+=1;goto B4315a1;
case 0x4315a8:goto L4315a8;
case 0x4315b0:goto L4315b0;
case 0x4315b1:c.instructions+=8;goto B4315b1;
case 0x4315b2:c.instructions+=7;goto B4315b2;
case 0x4315b4:c.instructions+=6;goto B4315b4;
case 0x4315b7:c.instructions+=5;goto B4315b7;
case 0x4315b8:c.instructions+=4;goto B4315b8;
case 0x4315ba:c.instructions+=3;goto B4315ba;
case 0x4315bc:c.instructions+=2;goto B4315bc;
case 0x4315bf:c.instructions+=1;goto B4315bf;
case 0x4315c1:goto L4315c1;
case 0x4315c2:c.instructions+=1;goto B4315c2;
case 0x4315c7:goto L4315c7;
case 0x4315ca:c.instructions+=1;goto B4315ca;
case 0x4315cd:goto L4315cd;
case 0x4315d0:c.instructions+=3;goto B4315d0;
case 0x4315d2:c.instructions+=2;goto B4315d2;
case 0x4315d5:c.instructions+=1;goto B4315d5;
case 0x4315d7:goto L4315d7;
case 0x4315d9:c.instructions+=2;goto B4315d9;
case 0x4315da:c.instructions+=1;goto B4315da;
case 0x4315e0:goto L4315e0;
case 0x4315e3:c.instructions+=1;goto B4315e3;
case 0x4315e6:goto L4315e6;
case 0x4315e9:c.instructions+=2;goto B4315e9;
case 0x4315ec:c.instructions+=1;goto B4315ec;
case 0x4315f1:goto L4315f1;
case 0x4315f3:c.instructions+=2;goto B4315f3;
case 0x4315f5:c.instructions+=1;goto B4315f5;
case 0x4315f7:goto L4315f7;
case 0x4315fd:c.instructions+=3;goto B4315fd;
case 0x4315ff:c.instructions+=2;goto B4315ff;
case 0x431600:c.instructions+=1;goto B431600;
case 0x431603:goto L431603;
case 0x431605:goto L431605;
case 0x431608:c.instructions+=2;goto B431608;
case 0x431609:c.instructions+=1;goto B431609;
case 0x43160b:goto L43160b;
case 0x43160c:c.instructions+=3;goto B43160c;
case 0x43160d:c.instructions+=2;goto B43160d;
case 0x43160e:c.instructions+=1;goto B43160e;
case 0x431610:goto L431610;
case 0x431613:c.instructions+=2;goto B431613;
case 0x431615:c.instructions+=1;goto B431615;
case 0x431617:goto L431617;
case 0x43161a:c.instructions+=3;goto B43161a;
case 0x43161d:c.instructions+=2;goto B43161d;
case 0x431620:c.instructions+=1;goto B431620;
case 0x431622:goto L431622;
case 0x431625:goto L431625;
case 0x431627:c.instructions+=1;goto B431627;
case 0x431629:goto L431629;
case 0x43162c:c.instructions+=9;goto B43162c;
case 0x43162f:c.instructions+=8;goto B43162f;
case 0x431632:c.instructions+=7;goto B431632;
case 0x431638:c.instructions+=6;goto B431638;
case 0x43163e:c.instructions+=5;goto B43163e;
case 0x431641:c.instructions+=4;goto B431641;
case 0x431643:c.instructions+=3;goto B431643;
case 0x431645:c.instructions+=2;goto B431645;
case 0x431648:c.instructions+=1;goto B431648;
case 0x43164a:goto L43164a;
case 0x43164d:c.instructions+=3;goto B43164d;
case 0x43164f:c.instructions+=2;goto B43164f;
case 0x431652:c.instructions+=1;goto B431652;
case 0x431654:goto L431654;
case 0x431656:c.instructions+=1;goto B431656;
case 0x431657:goto L431657;
case 0x431659:goto L431659;
case 0x43165b:c.instructions+=1;goto B43165b;
case 0x431660:goto L431660;
case 0x431663:c.instructions+=2;goto B431663;
case 0x431665:c.instructions+=1;goto B431665;
case 0x431667:goto L431667;
case 0x43166a:c.instructions+=3;goto B43166a;
case 0x43166d:c.instructions+=2;goto B43166d;
case 0x431670:c.instructions+=1;goto B431670;
case 0x431672:goto L431672;
case 0x431675:goto L431675;
case 0x431678:c.instructions+=1;goto B431678;
case 0x43167a:goto L43167a;
case 0x43167d:c.instructions+=9;goto B43167d;
case 0x431680:c.instructions+=8;goto B431680;
case 0x431683:c.instructions+=7;goto B431683;
case 0x431689:c.instructions+=6;goto B431689;
case 0x43168f:c.instructions+=5;goto B43168f;
case 0x431692:c.instructions+=4;goto B431692;
case 0x431694:c.instructions+=3;goto B431694;
case 0x431696:c.instructions+=2;goto B431696;
case 0x431699:c.instructions+=1;goto B431699;
case 0x43169b:goto L43169b;
case 0x43169e:c.instructions+=3;goto B43169e;
case 0x4316a0:c.instructions+=2;goto B4316a0;
case 0x4316a3:c.instructions+=1;goto B4316a3;
case 0x4316a5:goto L4316a5;
case 0x4316a7:c.instructions+=1;goto B4316a7;
case 0x4316a8:goto L4316a8;
case 0x4316aa:goto L4316aa;
case 0x4316ac:c.instructions+=1;goto B4316ac;
case 0x4316b0:goto L4316b0;
case 0x4316b3:c.instructions+=16;goto B4316b3;
case 0x4316b4:c.instructions+=15;goto B4316b4;
case 0x4316b5:c.instructions+=14;goto B4316b5;
case 0x4316b6:c.instructions+=13;goto B4316b6;
case 0x4316b8:c.instructions+=12;goto B4316b8;
case 0x4316bb:c.instructions+=11;goto B4316bb;
case 0x4316be:c.instructions+=10;goto B4316be;
case 0x4316c1:c.instructions+=9;goto B4316c1;
case 0x4316c4:c.instructions+=8;goto B4316c4;
case 0x4316c8:c.instructions+=7;goto B4316c8;
case 0x4316cb:c.instructions+=6;goto B4316cb;
case 0x4316cd:c.instructions+=5;goto B4316cd;
case 0x4316d1:c.instructions+=4;goto B4316d1;
case 0x4316d5:c.instructions+=3;goto B4316d5;
case 0x4316d6:c.instructions+=2;goto B4316d6;
case 0x4316d9:c.instructions+=1;goto B4316d9;
case 0x4316db:goto L4316db;
case 0x4316dd:c.instructions+=4;goto B4316dd;
case 0x4316df:c.instructions+=3;goto B4316df;
case 0x4316e0:c.instructions+=2;goto B4316e0;
case 0x4316e1:c.instructions+=1;goto B4316e1;
case 0x4316e4:goto L4316e4;
case 0x4316e7:c.instructions+=2;goto B4316e7;
case 0x4316e9:c.instructions+=1;goto B4316e9;
case 0x4316eb:goto L4316eb;
case 0x4316ed:c.instructions+=4;goto B4316ed;
case 0x4316ef:c.instructions+=3;goto B4316ef;
case 0x4316f0:c.instructions+=2;goto B4316f0;
case 0x4316f1:c.instructions+=1;goto B4316f1;
case 0x4316f4:goto L4316f4;
case 0x4316f7:c.instructions+=2;goto B4316f7;
case 0x4316f9:c.instructions+=1;goto B4316f9;
case 0x4316fb:goto L4316fb;
case 0x4316fd:c.instructions+=4;goto B4316fd;
case 0x4316ff:c.instructions+=3;goto B4316ff;
case 0x431700:c.instructions+=2;goto B431700;
case 0x431701:c.instructions+=1;goto B431701;
case 0x431704:goto L431704;
case 0x431708:c.instructions+=5;goto B431708;
case 0x43170a:c.instructions+=4;goto B43170a;
case 0x43170b:c.instructions+=3;goto B43170b;
case 0x43170c:c.instructions+=2;goto B43170c;
case 0x43170e:c.instructions+=1;goto B43170e;
case 0x431713:goto L431713;
case 0x431717:c.instructions+=1;goto B431717;
case 0x431719:goto L431719;
case 0x43171c:c.instructions+=5;goto B43171c;
case 0x43171f:c.instructions+=4;goto B43171f;
case 0x431722:c.instructions+=3;goto B431722;
case 0x431724:c.instructions+=2;goto B431724;
case 0x431727:c.instructions+=1;goto B431727;
case 0x431729:goto L431729;
case 0x43172c:c.instructions+=2;goto B43172c;
case 0x43172e:c.instructions+=1;goto B43172e;
case 0x431730:goto L431730;
case 0x431731:c.instructions+=3;goto B431731;
case 0x431732:c.instructions+=2;goto B431732;
case 0x431733:c.instructions+=1;goto B431733;
case 0x431738:goto L431738;
case 0x43173b:c.instructions+=4;goto B43173b;
case 0x43173e:c.instructions+=3;goto B43173e;
case 0x431741:c.instructions+=2;goto B431741;
case 0x431742:c.instructions+=1;goto B431742;
case 0x431744:goto L431744;
case 0x431745:c.instructions+=6;goto B431745;
case 0x431746:c.instructions+=5;goto B431746;
case 0x431747:c.instructions+=4;goto B431747;
case 0x431749:c.instructions+=3;goto B431749;
case 0x43174a:c.instructions+=2;goto B43174a;
case 0x43174d:c.instructions+=1;goto B43174d;
case 0x431750:goto L431750;
case 0x431751:c.instructions+=3;goto B431751;
case 0x431752:c.instructions+=2;goto B431752;
case 0x431756:c.instructions+=1;goto B431756;
case 0x431758:goto L431758;
case 0x43175b:c.instructions+=2;goto B43175b;
case 0x43175d:c.instructions+=1;goto B43175d;
case 0x43175f:goto L43175f;
case 0x431761:c.instructions+=2;goto B431761;
case 0x431763:c.instructions+=1;goto B431763;
case 0x431765:goto L431765;
case 0x43176c:c.instructions+=3;goto B43176c;
case 0x43176d:c.instructions+=2;goto B43176d;
case 0x431770:c.instructions+=1;goto B431770;
case 0x431772:goto L431772;
case 0x431773:c.instructions+=2;goto B431773;
case 0x431774:c.instructions+=1;goto B431774;
case 0x431780:goto L431780;
case 0x431782:c.instructions+=1;goto B431782;
case 0x431784:goto L431784;
case 0x431787:c.instructions+=1;goto B431787;
case 0x431788:goto L431788;
case 0x43178a:c.instructions+=1;goto B43178a;
case 0x431790:goto L431790;
case 0x431794:c.instructions+=2;goto B431794;
case 0x431797:c.instructions+=1;goto B431797;
case 0x4317a0:goto L4317a0;
case 0x4317a3:c.instructions+=2;goto B4317a3;
case 0x4317a6:c.instructions+=1;goto B4317a6;
case 0x4317b0:goto L4317b0;
case 0x4317b3:c.instructions+=4;goto B4317b3;
case 0x4317b6:c.instructions+=3;goto B4317b6;
case 0x4317ba:c.instructions+=2;goto B4317ba;
case 0x4317bd:c.instructions+=1;goto B4317bd;
case 0x4317c0:goto L4317c0;
case 0x4317c3:c.instructions+=4;goto B4317c3;
case 0x4317c6:c.instructions+=3;goto B4317c6;
case 0x4317ca:c.instructions+=2;goto B4317ca;
case 0x4317cd:c.instructions+=1;goto B4317cd;
case 0x4317d0:goto L4317d0;
case 0x4317d4:c.instructions+=5;goto B4317d4;
case 0x4317d5:c.instructions+=4;goto B4317d5;
case 0x4317d8:c.instructions+=3;goto B4317d8;
case 0x4317d9:c.instructions+=2;goto B4317d9;
case 0x4317db:c.instructions+=1;goto B4317db;
case 0x4317e0:goto L4317e0;
case 0x4317e3:c.instructions+=1;goto B4317e3;
case 0x4317e5:goto L4317e5;
case 0x4317e7:c.instructions+=2;goto B4317e7;
case 0x4317e8:c.instructions+=1;goto B4317e8;
case 0x4317eb:goto L4317eb;
case 0x4317ee:c.instructions+=3;goto B4317ee;
case 0x4317f1:c.instructions+=2;goto B4317f1;
case 0x4317f2:c.instructions+=1;goto B4317f2;
case 0x431800:goto L431800;
case 0x431803:c.instructions+=1;goto B431803;
case 0x431810:goto L431810;
case 0x431813:c.instructions+=2;goto B431813;
case 0x431816:c.instructions+=1;goto B431816;
case 0x431820:goto L431820;
case 0x431825:c.instructions+=4;goto B431825;
case 0x431826:c.instructions+=3;goto B431826;
case 0x431828:c.instructions+=2;goto B431828;
case 0x43182e:c.instructions+=1;goto B43182e;
case 0x431830:goto L431830;
case 0x431831:c.instructions+=1;goto B431831;
case 0x431836:goto L431836;
case 0x431839:goto L431839;
case 0x43183b:c.instructions+=2;goto B43183b;
case 0x43183c:c.instructions+=1;goto B43183c;
case 0x431840:goto L431840;
case 0x431845:c.instructions+=1;goto B431845;
case 0x43184a:goto L43184a;
case 0x43184f:c.instructions+=1;goto B43184f;
case 0x431854:goto L431854;
case 0x431856:c.instructions+=2;goto B431856;
case 0x43185b:c.instructions+=1;goto B43185b;
case 0x431860:goto L431860;
case 0x431863:c.instructions+=1;goto B431863;
case 0x431870:goto L431870;
case 0x431874:c.instructions+=2;goto B431874;
case 0x43187a:c.instructions+=1;goto B43187a;
case 0x43187c:goto L43187c;
case 0x43187f:c.instructions+=4;goto B43187f;
case 0x431882:c.instructions+=3;goto B431882;
case 0x431886:c.instructions+=2;goto B431886;
case 0x431888:c.instructions+=1;goto B431888;
case 0x43188a:goto L43188a;
case 0x431890:goto L431890;
case 0x431892:c.instructions+=2;goto B431892;
case 0x431898:c.instructions+=1;goto B431898;
case 0x43189a:goto L43189a;
case 0x43189d:c.instructions+=1;goto B43189d;
case 0x43189f:goto L43189f;
case 0x4318a2:c.instructions+=2;goto B4318a2;
case 0x4318a8:c.instructions+=1;goto B4318a8;
case 0x4318aa:goto L4318aa;
case 0x4318ad:c.instructions+=1;goto B4318ad;
case 0x4318b3:goto L4318b3;
case 0x4318b6:c.instructions+=3;goto B4318b6;
case 0x4318ba:c.instructions+=2;goto B4318ba;
case 0x4318bc:c.instructions+=1;goto B4318bc;
case 0x4318be:goto L4318be;
case 0x4318c3:c.instructions+=1;goto B4318c3;
case 0x4318c4:goto L4318c4;
case 0x4318c6:c.instructions+=1;goto B4318c6;
case 0x4318d0:goto L4318d0;
case 0x4318d4:c.instructions+=2;goto B4318d4;
case 0x4318da:c.instructions+=1;goto B4318da;
case 0x4318dc:goto L4318dc;
case 0x4318df:c.instructions+=4;goto B4318df;
case 0x4318e2:c.instructions+=3;goto B4318e2;
case 0x4318e6:c.instructions+=2;goto B4318e6;
case 0x4318e8:c.instructions+=1;goto B4318e8;
case 0x4318ea:goto L4318ea;
case 0x4318eb:c.instructions+=2;goto B4318eb;
case 0x4318ed:c.instructions+=1;goto B4318ed;
case 0x4318f0:goto L4318f0;
case 0x4318f2:c.instructions+=2;goto B4318f2;
case 0x4318f8:c.instructions+=1;goto B4318f8;
case 0x4318fa:goto L4318fa;
case 0x4318fd:c.instructions+=1;goto B4318fd;
case 0x4318ff:goto L4318ff;
case 0x431905:c.instructions+=1;goto B431905;
case 0x431907:goto L431907;
case 0x43190d:goto L43190d;
case 0x431910:c.instructions+=3;goto B431910;
case 0x431914:c.instructions+=2;goto B431914;
case 0x431916:c.instructions+=1;goto B431916;
case 0x431918:goto L431918;
case 0x431919:goto L431919;
case 0x43191e:c.instructions+=1;goto B43191e;
case 0x43191f:goto L43191f;
case 0x431921:c.instructions+=1;goto B431921;
case 0x431930:goto L431930;
case 0x431935:c.instructions+=3;goto B431935;
case 0x431937:c.instructions+=2;goto B431937;
case 0x431939:c.instructions+=1;goto B431939;
case 0x43193b:goto L43193b;
case 0x43193c:c.instructions+=1;goto B43193c;
case 0x43193e:goto L43193e;
case 0x431942:c.instructions+=2;goto B431942;
case 0x431944:c.instructions+=1;goto B431944;
case 0x431946:goto L431946;
case 0x43194b:c.instructions+=2;goto B43194b;
case 0x43194c:c.instructions+=1;goto B43194c;
case 0x43194e:goto L43194e;
case 0x431954:c.instructions+=1;goto B431954;
case 0x431955:goto L431955;
case 0x43195a:goto L43195a;
case 0x43195d:c.instructions+=2;goto B43195d;
case 0x43195f:c.instructions+=1;goto B43195f;
case 0x431961:goto L431961;
case 0x431964:c.instructions+=10;goto B431964;
case 0x431968:c.instructions+=9;goto B431968;
case 0x43196a:c.instructions+=8;goto B43196a;
case 0x43196d:c.instructions+=7;goto B43196d;
case 0x431970:c.instructions+=6;goto B431970;
case 0x431974:c.instructions+=5;goto B431974;
case 0x431978:c.instructions+=4;goto B431978;
case 0x43197c:c.instructions+=3;goto B43197c;
case 0x43197f:c.instructions+=2;goto B43197f;
case 0x431981:c.instructions+=1;goto B431981;
case 0x431982:goto L431982;
case 0x431984:c.instructions+=1;goto B431984;
case 0x431990:goto L431990;
case 0x431991:c.instructions+=14;goto B431991;
case 0x431993:c.instructions+=13;goto B431993;
case 0x431996:c.instructions+=12;goto B431996;
case 0x431998:c.instructions+=11;goto B431998;
case 0x43199d:c.instructions+=10;goto B43199d;
case 0x4319a3:c.instructions+=9;goto B4319a3;
case 0x4319a4:c.instructions+=8;goto B4319a4;
case 0x4319ab:c.instructions+=7;goto B4319ab;
case 0x4319b1:c.instructions+=6;goto B4319b1;
case 0x4319b2:c.instructions+=5;goto B4319b2;
case 0x4319b3:c.instructions+=4;goto B4319b3;
case 0x4319b4:c.instructions+=3;goto B4319b4;
case 0x4319b7:c.instructions+=2;goto B4319b7;
case 0x4319b8:c.instructions+=1;goto B4319b8;
case 0x4319bd:goto L4319bd;
case 0x4319c0:c.instructions+=2;goto B4319c0;
case 0x4319c1:c.instructions+=1;goto B4319c1;
case 0x4319c6:goto L4319c6;
case 0x4319c9:c.instructions+=2;goto B4319c9;
case 0x4319ca:c.instructions+=1;goto B4319ca;
case 0x4319cf:goto L4319cf;
case 0x4319d2:c.instructions+=9;goto B4319d2;
case 0x4319d5:c.instructions+=8;goto B4319d5;
case 0x4319d7:c.instructions+=7;goto B4319d7;
case 0x4319df:c.instructions+=6;goto B4319df;
case 0x4319e7:c.instructions+=5;goto B4319e7;
case 0x4319ef:c.instructions+=4;goto B4319ef;
case 0x4319f7:c.instructions+=3;goto B4319f7;
case 0x4319fb:c.instructions+=2;goto B4319fb;
case 0x4319ff:c.instructions+=1;goto B4319ff;
case 0x431a01:goto L431a01;
case 0x431a04:c.instructions+=4;goto B431a04;
case 0x431a05:c.instructions+=3;goto B431a05;
case 0x431a06:c.instructions+=2;goto B431a06;
case 0x431a07:c.instructions+=1;goto B431a07;
case 0x431a0c:goto L431a0c;
case 0x431a0f:c.instructions+=2;goto B431a0f;
case 0x431a11:c.instructions+=1;goto B431a11;
case 0x431a13:goto L431a13;
case 0x431a1a:c.instructions+=7;goto B431a1a;
case 0x431a21:c.instructions+=6;goto B431a21;
case 0x431a22:c.instructions+=5;goto B431a22;
case 0x431a23:c.instructions+=4;goto B431a23;
case 0x431a24:c.instructions+=3;goto B431a24;
case 0x431a26:c.instructions+=2;goto B431a26;
case 0x431a27:c.instructions+=1;goto B431a27;
case 0x431a28:goto L431a28;
case 0x431a2b:c.instructions+=4;goto B431a2b;
case 0x431a2c:c.instructions+=3;goto B431a2c;
case 0x431a2d:c.instructions+=2;goto B431a2d;
case 0x431a2e:c.instructions+=1;goto B431a2e;
case 0x431a33:goto L431a33;
case 0x431a36:c.instructions+=2;goto B431a36;
case 0x431a38:c.instructions+=1;goto B431a38;
case 0x431a3a:goto L431a3a;
case 0x431a41:c.instructions+=7;goto B431a41;
case 0x431a48:c.instructions+=6;goto B431a48;
case 0x431a49:c.instructions+=5;goto B431a49;
case 0x431a4a:c.instructions+=4;goto B431a4a;
case 0x431a4b:c.instructions+=3;goto B431a4b;
case 0x431a4d:c.instructions+=2;goto B431a4d;
case 0x431a4e:c.instructions+=1;goto B431a4e;
case 0x431a4f:goto L431a4f;
case 0x431a56:c.instructions+=1;goto B431a56;
case 0x431a5b:goto L431a5b;
case 0x431a5d:c.instructions+=7;goto B431a5d;
case 0x431a5f:c.instructions+=6;goto B431a5f;
case 0x431a61:c.instructions+=5;goto B431a61;
case 0x431a65:c.instructions+=4;goto B431a65;
case 0x431a66:c.instructions+=3;goto B431a66;
case 0x431a6d:c.instructions+=2;goto B431a6d;
case 0x431a78:c.instructions+=1;goto B431a78;
case 0x431a7d:goto L431a7d;
case 0x431a81:c.instructions+=4;goto B431a81;
case 0x431a85:c.instructions+=3;goto B431a85;
case 0x431a86:c.instructions+=2;goto B431a86;
case 0x431a8d:c.instructions+=1;goto B431a8d;
case 0x431a92:goto L431a92;
case 0x431a99:c.instructions+=5;goto B431a99;
case 0x431aa0:c.instructions+=4;goto B431aa0;
case 0x431aa1:c.instructions+=3;goto B431aa1;
case 0x431aa2:c.instructions+=2;goto B431aa2;
case 0x431aaa:c.instructions+=1;goto B431aaa;
case 0x431aaf:goto L431aaf;
case 0x431ab3:c.instructions+=3;goto B431ab3;
case 0x431ab4:c.instructions+=2;goto B431ab4;
case 0x431ab5:c.instructions+=1;goto B431ab5;
case 0x431aba:goto L431aba;
case 0x431abe:c.instructions+=2;goto B431abe;
case 0x431abf:c.instructions+=1;goto B431abf;
case 0x431ac4:goto L431ac4;
case 0x431ac7:c.instructions+=6;goto B431ac7;
case 0x431aca:c.instructions+=5;goto B431aca;
case 0x431acc:c.instructions+=4;goto B431acc;
case 0x431ad0:c.instructions+=3;goto B431ad0;
case 0x431ad4:c.instructions+=2;goto B431ad4;
case 0x431ad8:c.instructions+=1;goto B431ad8;
case 0x431ada:goto L431ada;
case 0x431adf:c.instructions+=1;goto B431adf;
case 0x431ae1:goto L431ae1;
case 0x431ae6:goto L431ae6;
case 0x431ae7:c.instructions+=3;goto B431ae7;
case 0x431ae8:c.instructions+=2;goto B431ae8;
case 0x431ae9:c.instructions+=1;goto B431ae9;
case 0x431aee:goto L431aee;
case 0x431af1:c.instructions+=4;goto B431af1;
case 0x431af5:c.instructions+=3;goto B431af5;
case 0x431af6:c.instructions+=2;goto B431af6;
case 0x431af7:c.instructions+=1;goto B431af7;
case 0x431afc:goto L431afc;
case 0x431b00:c.instructions+=195;goto B431b00;
case 0x431b03:c.instructions+=194;goto B431b03;
case 0x431b07:c.instructions+=193;goto B431b07;
case 0x431b0a:c.instructions+=192;goto B431b0a;
case 0x431b0c:c.instructions+=191;goto B431b0c;
case 0x431b10:c.instructions+=190;goto B431b10;
case 0x431b13:c.instructions+=189;goto B431b13;
case 0x431b15:c.instructions+=188;goto B431b15;
case 0x431b19:c.instructions+=187;goto B431b19;
case 0x431b1b:c.instructions+=186;goto B431b1b;
case 0x431b1d:c.instructions+=185;goto B431b1d;
case 0x431b21:c.instructions+=184;goto B431b21;
case 0x431b25:c.instructions+=183;goto B431b25;
case 0x431b28:c.instructions+=182;goto B431b28;
case 0x431b2c:c.instructions+=181;goto B431b2c;
case 0x431b2f:c.instructions+=180;goto B431b2f;
case 0x431b31:c.instructions+=179;goto B431b31;
case 0x431b35:c.instructions+=178;goto B431b35;
case 0x431b38:c.instructions+=177;goto B431b38;
case 0x431b3a:c.instructions+=176;goto B431b3a;
case 0x431b3e:c.instructions+=175;goto B431b3e;
case 0x431b41:c.instructions+=174;goto B431b41;
case 0x431b43:c.instructions+=173;goto B431b43;
case 0x431b47:c.instructions+=172;goto B431b47;
case 0x431b4b:c.instructions+=171;goto B431b4b;
case 0x431b4e:c.instructions+=170;goto B431b4e;
case 0x431b52:c.instructions+=169;goto B431b52;
case 0x431b55:c.instructions+=168;goto B431b55;
case 0x431b57:c.instructions+=167;goto B431b57;
case 0x431b5b:c.instructions+=166;goto B431b5b;
case 0x431b5e:c.instructions+=165;goto B431b5e;
case 0x431b60:c.instructions+=164;goto B431b60;
case 0x431b64:c.instructions+=163;goto B431b64;
case 0x431b67:c.instructions+=162;goto B431b67;
case 0x431b69:c.instructions+=161;goto B431b69;
case 0x431b6d:c.instructions+=160;goto B431b6d;
case 0x431b71:c.instructions+=159;goto B431b71;
case 0x431b74:c.instructions+=158;goto B431b74;
case 0x431b78:c.instructions+=157;goto B431b78;
case 0x431b7b:c.instructions+=156;goto B431b7b;
case 0x431b7d:c.instructions+=155;goto B431b7d;
case 0x431b81:c.instructions+=154;goto B431b81;
case 0x431b84:c.instructions+=153;goto B431b84;
case 0x431b86:c.instructions+=152;goto B431b86;
case 0x431b8a:c.instructions+=151;goto B431b8a;
case 0x431b8d:c.instructions+=150;goto B431b8d;
case 0x431b8f:c.instructions+=149;goto B431b8f;
case 0x431b93:c.instructions+=148;goto B431b93;
case 0x431b97:c.instructions+=147;goto B431b97;
case 0x431b9a:c.instructions+=146;goto B431b9a;
case 0x431b9e:c.instructions+=145;goto B431b9e;
case 0x431ba1:c.instructions+=144;goto B431ba1;
case 0x431ba3:c.instructions+=143;goto B431ba3;
case 0x431ba7:c.instructions+=142;goto B431ba7;
case 0x431baa:c.instructions+=141;goto B431baa;
case 0x431bac:c.instructions+=140;goto B431bac;
case 0x431bb0:c.instructions+=139;goto B431bb0;
case 0x431bb2:c.instructions+=138;goto B431bb2;
case 0x431bb4:c.instructions+=137;goto B431bb4;
case 0x431bb8:c.instructions+=136;goto B431bb8;
case 0x431bbc:c.instructions+=135;goto B431bbc;
case 0x431bbf:c.instructions+=134;goto B431bbf;
case 0x431bc3:c.instructions+=133;goto B431bc3;
case 0x431bc6:c.instructions+=132;goto B431bc6;
case 0x431bc8:c.instructions+=131;goto B431bc8;
case 0x431bcc:c.instructions+=130;goto B431bcc;
case 0x431bcf:c.instructions+=129;goto B431bcf;
case 0x431bd1:c.instructions+=128;goto B431bd1;
case 0x431bd5:c.instructions+=127;goto B431bd5;
case 0x431bd8:c.instructions+=126;goto B431bd8;
case 0x431bda:c.instructions+=125;goto B431bda;
case 0x431bde:c.instructions+=124;goto B431bde;
case 0x431be2:c.instructions+=123;goto B431be2;
case 0x431be5:c.instructions+=122;goto B431be5;
case 0x431be9:c.instructions+=121;goto B431be9;
case 0x431bec:c.instructions+=120;goto B431bec;
case 0x431bee:c.instructions+=119;goto B431bee;
case 0x431bf2:c.instructions+=118;goto B431bf2;
case 0x431bf5:c.instructions+=117;goto B431bf5;
case 0x431bf7:c.instructions+=116;goto B431bf7;
case 0x431bfb:c.instructions+=115;goto B431bfb;
case 0x431bfe:c.instructions+=114;goto B431bfe;
case 0x431c00:c.instructions+=113;goto B431c00;
case 0x431c07:c.instructions+=112;goto B431c07;
case 0x431c0b:c.instructions+=111;goto B431c0b;
case 0x431c0e:c.instructions+=110;goto B431c0e;
case 0x431c12:c.instructions+=109;goto B431c12;
case 0x431c15:c.instructions+=108;goto B431c15;
case 0x431c17:c.instructions+=107;goto B431c17;
case 0x431c1b:c.instructions+=106;goto B431c1b;
case 0x431c1e:c.instructions+=105;goto B431c1e;
case 0x431c20:c.instructions+=104;goto B431c20;
case 0x431c24:c.instructions+=103;goto B431c24;
case 0x431c27:c.instructions+=102;goto B431c27;
case 0x431c29:c.instructions+=101;goto B431c29;
case 0x431c30:c.instructions+=100;goto B431c30;
case 0x431c34:c.instructions+=99;goto B431c34;
case 0x431c37:c.instructions+=98;goto B431c37;
case 0x431c3b:c.instructions+=97;goto B431c3b;
case 0x431c3e:c.instructions+=96;goto B431c3e;
case 0x431c40:c.instructions+=95;goto B431c40;
case 0x431c44:c.instructions+=94;goto B431c44;
case 0x431c47:c.instructions+=93;goto B431c47;
case 0x431c49:c.instructions+=92;goto B431c49;
case 0x431c4d:c.instructions+=91;goto B431c4d;
case 0x431c4f:c.instructions+=90;goto B431c4f;
case 0x431c51:c.instructions+=89;goto B431c51;
case 0x431c58:c.instructions+=88;goto B431c58;
case 0x431c5c:c.instructions+=87;goto B431c5c;
case 0x431c5f:c.instructions+=86;goto B431c5f;
case 0x431c63:c.instructions+=85;goto B431c63;
case 0x431c66:c.instructions+=84;goto B431c66;
case 0x431c68:c.instructions+=83;goto B431c68;
case 0x431c6c:c.instructions+=82;goto B431c6c;
case 0x431c6f:c.instructions+=81;goto B431c6f;
case 0x431c71:c.instructions+=80;goto B431c71;
case 0x431c75:c.instructions+=79;goto B431c75;
case 0x431c78:c.instructions+=78;goto B431c78;
case 0x431c7a:c.instructions+=77;goto B431c7a;
case 0x431c81:c.instructions+=76;goto B431c81;
case 0x431c85:c.instructions+=75;goto B431c85;
case 0x431c88:c.instructions+=74;goto B431c88;
case 0x431c8c:c.instructions+=73;goto B431c8c;
case 0x431c8f:c.instructions+=72;goto B431c8f;
case 0x431c91:c.instructions+=71;goto B431c91;
case 0x431c95:c.instructions+=70;goto B431c95;
case 0x431c98:c.instructions+=69;goto B431c98;
case 0x431c9a:c.instructions+=68;goto B431c9a;
case 0x431c9e:c.instructions+=67;goto B431c9e;
case 0x431ca1:c.instructions+=66;goto B431ca1;
case 0x431ca3:c.instructions+=65;goto B431ca3;
case 0x431caa:c.instructions+=64;goto B431caa;
case 0x431cae:c.instructions+=63;goto B431cae;
case 0x431cb1:c.instructions+=62;goto B431cb1;
case 0x431cb5:c.instructions+=61;goto B431cb5;
case 0x431cb8:c.instructions+=60;goto B431cb8;
case 0x431cba:c.instructions+=59;goto B431cba;
case 0x431cbe:c.instructions+=58;goto B431cbe;
case 0x431cc1:c.instructions+=57;goto B431cc1;
case 0x431cc3:c.instructions+=56;goto B431cc3;
case 0x431cc7:c.instructions+=55;goto B431cc7;
case 0x431cca:c.instructions+=54;goto B431cca;
case 0x431ccc:c.instructions+=53;goto B431ccc;
case 0x431cd3:c.instructions+=52;goto B431cd3;
case 0x431cd7:c.instructions+=51;goto B431cd7;
case 0x431cda:c.instructions+=50;goto B431cda;
case 0x431cde:c.instructions+=49;goto B431cde;
case 0x431ce1:c.instructions+=48;goto B431ce1;
case 0x431ce3:c.instructions+=47;goto B431ce3;
case 0x431ce7:c.instructions+=46;goto B431ce7;
case 0x431cea:c.instructions+=45;goto B431cea;
case 0x431cec:c.instructions+=44;goto B431cec;
case 0x431cf0:c.instructions+=43;goto B431cf0;
case 0x431cf2:c.instructions+=42;goto B431cf2;
case 0x431cf4:c.instructions+=41;goto B431cf4;
case 0x431cfb:c.instructions+=40;goto B431cfb;
case 0x431cff:c.instructions+=39;goto B431cff;
case 0x431d02:c.instructions+=38;goto B431d02;
case 0x431d06:c.instructions+=37;goto B431d06;
case 0x431d09:c.instructions+=36;goto B431d09;
case 0x431d0b:c.instructions+=35;goto B431d0b;
case 0x431d0f:c.instructions+=34;goto B431d0f;
case 0x431d12:c.instructions+=33;goto B431d12;
case 0x431d14:c.instructions+=32;goto B431d14;
case 0x431d18:c.instructions+=31;goto B431d18;
case 0x431d1b:c.instructions+=30;goto B431d1b;
case 0x431d1d:c.instructions+=29;goto B431d1d;
case 0x431d24:c.instructions+=28;goto B431d24;
case 0x431d28:c.instructions+=27;goto B431d28;
case 0x431d2b:c.instructions+=26;goto B431d2b;
case 0x431d2f:c.instructions+=25;goto B431d2f;
case 0x431d32:c.instructions+=24;goto B431d32;
case 0x431d34:c.instructions+=23;goto B431d34;
case 0x431d38:c.instructions+=22;goto B431d38;
case 0x431d3b:c.instructions+=21;goto B431d3b;
case 0x431d3d:c.instructions+=20;goto B431d3d;
case 0x431d41:c.instructions+=19;goto B431d41;
case 0x431d45:c.instructions+=18;goto B431d45;
case 0x431d46:c.instructions+=17;goto B431d46;
case 0x431d49:c.instructions+=16;goto B431d49;
case 0x431d4a:c.instructions+=15;goto B431d4a;
case 0x431d4c:c.instructions+=14;goto B431d4c;
case 0x431d53:c.instructions+=13;goto B431d53;
case 0x431d57:c.instructions+=12;goto B431d57;
case 0x431d5a:c.instructions+=11;goto B431d5a;
case 0x431d5e:c.instructions+=10;goto B431d5e;
case 0x431d61:c.instructions+=9;goto B431d61;
case 0x431d63:c.instructions+=8;goto B431d63;
case 0x431d67:c.instructions+=7;goto B431d67;
case 0x431d6a:c.instructions+=6;goto B431d6a;
case 0x431d6c:c.instructions+=5;goto B431d6c;
case 0x431d70:c.instructions+=4;goto B431d70;
case 0x431d73:c.instructions+=3;goto B431d73;
case 0x431d75:c.instructions+=2;goto B431d75;
case 0x431d7c:c.instructions+=1;goto B431d7c;
case 0x431d81:goto L431d81;
case 0x431d84:c.instructions+=3;goto B431d84;
case 0x431d8b:c.instructions+=2;goto B431d8b;
case 0x431d93:c.instructions+=1;goto B431d93;
case 0x431d98:goto L431d98;
case 0x431d9f:c.instructions+=2;goto B431d9f;
case 0x431daa:c.instructions+=1;goto B431daa;
case 0x431daf:goto L431daf;
case 0x431db6:c.instructions+=8;goto B431db6;
case 0x431db7:c.instructions+=7;goto B431db7;
case 0x431db8:c.instructions+=6;goto B431db8;
case 0x431dba:c.instructions+=5;goto B431dba;
case 0x431dc1:c.instructions+=4;goto B431dc1;
case 0x431dc2:c.instructions+=3;goto B431dc2;
case 0x431dc4:c.instructions+=2;goto B431dc4;
case 0x431dc5:c.instructions+=1;goto B431dc5;
case 0x431dd0:goto L431dd0;
case 0x431dd3:c.instructions+=2;goto B431dd3;
case 0x431dd7:c.instructions+=1;goto B431dd7;
case 0x431dd9:goto L431dd9;
case 0x431ddf:c.instructions+=2;goto B431ddf;
case 0x431de1:c.instructions+=1;goto B431de1;
case 0x431de3:goto L431de3;
case 0x431de8:c.instructions+=1;goto B431de8;
case 0x431de9:goto L431de9;
case 0x431deb:c.instructions+=1;goto B431deb;
case 0x431df0:goto L431df0;
case 0x431df5:c.instructions+=16;goto B431df5;
case 0x431df6:c.instructions+=15;goto B431df6;
case 0x431df7:c.instructions+=14;goto B431df7;
case 0x431df8:c.instructions+=13;goto B431df8;
case 0x431dfa:c.instructions+=12;goto B431dfa;
case 0x431dfd:c.instructions+=11;goto B431dfd;
case 0x431dff:c.instructions+=10;goto B431dff;
case 0x431e01:c.instructions+=9;goto B431e01;
case 0x431e03:c.instructions+=8;goto B431e03;
case 0x431e05:c.instructions+=7;goto B431e05;
case 0x431e06:c.instructions+=6;goto B431e06;
case 0x431e08:c.instructions+=5;goto B431e08;
case 0x431e0b:c.instructions+=4;goto B431e0b;
case 0x431e0e:c.instructions+=3;goto B431e0e;
case 0x431e11:c.instructions+=2;goto B431e11;
case 0x431e16:c.instructions+=1;goto B431e16;
case 0x431e18:goto L431e18;
case 0x431e1d:c.instructions+=1;goto B431e1d;
case 0x431e20:goto L431e20;
case 0x431e25:c.instructions+=4;goto B431e25;
case 0x431e28:c.instructions+=3;goto B431e28;
case 0x431e2b:c.instructions+=2;goto B431e2b;
case 0x431e2e:c.instructions+=1;goto B431e2e;
case 0x431e30:goto L431e30;
case 0x431e33:c.instructions+=7;goto B431e33;
case 0x431e35:c.instructions+=6;goto B431e35;
case 0x431e38:c.instructions+=5;goto B431e38;
case 0x431e3a:c.instructions+=4;goto B431e3a;
case 0x431e3b:c.instructions+=3;goto B431e3b;
case 0x431e3d:c.instructions+=2;goto B431e3d;
case 0x431e40:c.instructions+=1;goto B431e40;
case 0x431e42:goto L431e42;
case 0x431e44:c.instructions+=3;goto B431e44;
case 0x431e46:c.instructions+=2;goto B431e46;
case 0x431e48:c.instructions+=1;goto B431e48;
case 0x431e4b:goto L431e4b;
case 0x431e4d:c.instructions+=4;goto B431e4d;
case 0x431e4e:c.instructions+=3;goto B431e4e;
case 0x431e51:c.instructions+=2;goto B431e51;
case 0x431e53:c.instructions+=1;goto B431e53;
case 0x431e55:goto L431e55;
case 0x431e59:c.instructions+=6;goto B431e59;
case 0x431e5c:c.instructions+=5;goto B431e5c;
case 0x431e5f:c.instructions+=4;goto B431e5f;
case 0x431e62:c.instructions+=3;goto B431e62;
case 0x431e67:c.instructions+=2;goto B431e67;
case 0x431e6c:c.instructions+=1;goto B431e6c;
case 0x431e6e:goto L431e6e;
case 0x431e73:c.instructions+=1;goto B431e73;
case 0x431e75:goto L431e75;
case 0x431e7c:c.instructions+=1;goto B431e7c;
case 0x431e7e:goto L431e7e;
case 0x431e7f:c.instructions+=2;goto B431e7f;
case 0x431e84:c.instructions+=1;goto B431e84;
case 0x431e89:goto L431e89;
case 0x431e8c:c.instructions+=2;goto B431e8c;
case 0x431e8d:c.instructions+=1;goto B431e8d;
case 0x431e8f:goto L431e8f;
case 0x431e94:c.instructions+=2;goto B431e94;
case 0x431e97:c.instructions+=1;goto B431e97;
case 0x431e98:goto L431e98;
case 0x431e9e:c.instructions+=1;goto B431e9e;
case 0x431ea3:goto L431ea3;
case 0x431ea8:c.instructions+=2;goto B431ea8;
case 0x431eaa:c.instructions+=1;goto B431eaa;
case 0x431eaf:goto L431eaf;
case 0x431eb1:c.instructions+=1;goto B431eb1;
case 0x431eb3:goto L431eb3;
case 0x431eb6:c.instructions+=3;goto B431eb6;
case 0x431eb9:c.instructions+=2;goto B431eb9;
case 0x431ebc:c.instructions+=1;goto B431ebc;
case 0x431ebe:goto L431ebe;
case 0x431ec4:c.instructions+=2;goto B431ec4;
case 0x431ec6:c.instructions+=1;goto B431ec6;
case 0x431ec8:goto L431ec8;
case 0x431ec9:c.instructions+=5;goto B431ec9;
case 0x431ecc:c.instructions+=4;goto B431ecc;
case 0x431ecd:c.instructions+=3;goto B431ecd;
case 0x431ece:c.instructions+=2;goto B431ece;
case 0x431ecf:c.instructions+=1;goto B431ecf;
case 0x431ed2:goto L431ed2;
case 0x431ed3:c.instructions+=5;goto B431ed3;
case 0x431ed7:c.instructions+=4;goto B431ed7;
case 0x431ed8:c.instructions+=3;goto B431ed8;
case 0x431ed9:c.instructions+=2;goto B431ed9;
case 0x431eda:c.instructions+=1;goto B431eda;
case 0x431edd:goto L431edd;
case 0x431ee1:c.instructions+=3;goto B431ee1;
case 0x431ee4:c.instructions+=2;goto B431ee4;
case 0x431ee7:c.instructions+=1;goto B431ee7;
case 0x431ee9:goto L431ee9;
case 0x431eec:c.instructions+=3;goto B431eec;
case 0x431eef:c.instructions+=2;goto B431eef;
case 0x431ef1:c.instructions+=1;goto B431ef1;
case 0x431ef3:goto L431ef3;
case 0x431ef4:c.instructions+=5;goto B431ef4;
case 0x431ef7:c.instructions+=4;goto B431ef7;
case 0x431ef8:c.instructions+=3;goto B431ef8;
case 0x431ef9:c.instructions+=2;goto B431ef9;
case 0x431efa:c.instructions+=1;goto B431efa;
case 0x431efd:goto L431efd;
case 0x431eff:c.instructions+=1;goto B431eff;
case 0x431f01:goto L431f01;
case 0x431f04:goto L431f04;
case 0x431f05:c.instructions+=4;goto B431f05;
case 0x431f06:c.instructions+=3;goto B431f06;
case 0x431f07:c.instructions+=2;goto B431f07;
case 0x431f08:c.instructions+=1;goto B431f08;
case 0x431f10:goto L431f10;
case 0x431f15:c.instructions+=13;goto B431f15;
case 0x431f16:c.instructions+=12;goto B431f16;
case 0x431f17:c.instructions+=11;goto B431f17;
case 0x431f19:c.instructions+=10;goto B431f19;
case 0x431f1c:c.instructions+=9;goto B431f1c;
case 0x431f1e:c.instructions+=8;goto B431f1e;
case 0x431f20:c.instructions+=7;goto B431f20;
case 0x431f22:c.instructions+=6;goto B431f22;
case 0x431f24:c.instructions+=5;goto B431f24;
case 0x431f26:c.instructions+=4;goto B431f26;
case 0x431f29:c.instructions+=3;goto B431f29;
case 0x431f2c:c.instructions+=2;goto B431f2c;
case 0x431f2f:c.instructions+=1;goto B431f2f;
case 0x431f31:goto L431f31;
case 0x431f32:c.instructions+=2;goto B431f32;
case 0x431f37:c.instructions+=1;goto B431f37;
case 0x431f40:goto L431f40;
case 0x431f45:c.instructions+=4;goto B431f45;
case 0x431f48:c.instructions+=3;goto B431f48;
case 0x431f4b:c.instructions+=2;goto B431f4b;
case 0x431f4f:c.instructions+=1;goto B431f4f;
case 0x431f51:goto L431f51;
case 0x431f54:c.instructions+=7;goto B431f54;
case 0x431f56:c.instructions+=6;goto B431f56;
case 0x431f59:c.instructions+=5;goto B431f59;
case 0x431f5e:c.instructions+=4;goto B431f5e;
case 0x431f5f:c.instructions+=3;goto B431f5f;
case 0x431f61:c.instructions+=2;goto B431f61;
case 0x431f64:c.instructions+=1;goto B431f64;
case 0x431f66:goto L431f66;
case 0x431f68:c.instructions+=3;goto B431f68;
case 0x431f6d:c.instructions+=2;goto B431f6d;
case 0x431f6f:c.instructions+=1;goto B431f6f;
case 0x431f72:goto L431f72;
case 0x431f74:c.instructions+=4;goto B431f74;
case 0x431f75:c.instructions+=3;goto B431f75;
case 0x431f78:c.instructions+=2;goto B431f78;
case 0x431f7a:c.instructions+=1;goto B431f7a;
case 0x431f7c:goto L431f7c;
case 0x431f7d:goto L431f7d;
case 0x431f81:c.instructions+=3;goto B431f81;
case 0x431f82:c.instructions+=2;goto B431f82;
case 0x431f85:c.instructions+=1;goto B431f85;
case 0x431f8a:goto L431f8a;
case 0x431f91:c.instructions+=7;goto B431f91;
case 0x431f94:c.instructions+=6;goto B431f94;
case 0x431f97:c.instructions+=5;goto B431f97;
case 0x431f9a:c.instructions+=4;goto B431f9a;
case 0x431f9d:c.instructions+=3;goto B431f9d;
case 0x431f9e:c.instructions+=2;goto B431f9e;
case 0x431f9f:c.instructions+=1;goto B431f9f;
case 0x431fb0:goto L431fb0;
case 0x431fb6:c.instructions+=5;goto B431fb6;
case 0x431fb8:c.instructions+=4;goto B431fb8;
case 0x431fba:c.instructions+=3;goto B431fba;
case 0x431fbe:c.instructions+=2;goto B431fbe;
case 0x431fbf:c.instructions+=1;goto B431fbf;
case 0x431fc1:goto L431fc1;
case 0x431fc5:c.instructions+=1;goto B431fc5;
case 0x431fc7:goto L431fc7;
case 0x431fcd:c.instructions+=2;goto B431fcd;
case 0x431fcf:c.instructions+=1;goto B431fcf;
case 0x431fd1:goto L431fd1;
case 0x431fd5:goto L431fd5;
case 0x431fd7:goto L431fd7;
case 0x431fd9:goto L431fd9;
case 0x431fdd:c.instructions+=2;goto B431fdd;
case 0x431fde:c.instructions+=1;goto B431fde;
case 0x431fe0:goto L431fe0;
case 0x431fe6:c.instructions+=1;goto B431fe6;
case 0x431fe8:goto L431fe8;
case 0x431fea:c.instructions+=1;goto B431fea;
case 0x431fec:goto L431fec;
case 0x431fee:c.instructions+=1;goto B431fee;
case 0x431ff1:goto L431ff1;
case 0x431ff3:c.instructions+=1;goto B431ff3;
default:missing_instruction(c.pc);}
B431002:L431002:{c.instructions+=8;NFSU2_TR(0x431002);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431006:{NFSU2_TR(0x431006);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B431009:{NFSU2_TR(0x431009);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43100c:{NFSU2_TR(0x43100c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B43100f:{NFSU2_TR(0x43100f);
u8 U[12];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B431016:{NFSU2_TR(0x431016);
__builtin_memmove((R+28),(R+12),4);
}
B431018:{NFSU2_TR(0x431018);
w4(R+4,u32(0x7ull));
}
B43101d:{NFSU2_TR(0x43101d);
w4(R+24,u32(0x7ea3acull));
}
B431022:L431022:{c.instructions+=1;NFSU2_TR(0x431022);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L431024;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x431022u);}goto L431022;}
}
B431024:L431024:{c.instructions+=15;NFSU2_TR(0x431024);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B431027:{NFSU2_TR(0x431027);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43102a:{NFSU2_TR(0x43102a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43102e:{NFSU2_TR(0x43102e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B431032:{NFSU2_TR(0x431032);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B431034:{NFSU2_TR(0x431034);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B431037:{NFSU2_TR(0x431037);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43103a:{NFSU2_TR(0x43103a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xaull))));
}
B43103d:{NFSU2_TR(0x43103d);
__builtin_memmove((R+4),(R+24),4);
}
B43103f:{NFSU2_TR(0x43103f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B431042:{NFSU2_TR(0x431042);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B431045:{NFSU2_TR(0x431045);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B431049:{NFSU2_TR(0x431049);
__builtin_memmove((R+28),(R+12),4);
}
B43104b:{NFSU2_TR(0x43104b);
w4(R+4,u32(0x7ull));
}
B431050:{NFSU2_TR(0x431050);
w4(R+24,u32(0x7ea3c8ull));
}
B431055:L431055:{c.instructions+=1;NFSU2_TR(0x431055);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L431057;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x431055u);}goto L431055;}
}
B431057:L431057:{c.instructions+=10;NFSU2_TR(0x431057);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43105a:{NFSU2_TR(0x43105a);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43105d:{NFSU2_TR(0x43105d);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B43105f:{NFSU2_TR(0x43105f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B431062:{NFSU2_TR(0x431062);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B431065:{NFSU2_TR(0x431065);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B431068:{NFSU2_TR(0x431068);
u8 U[12];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B43106c:{NFSU2_TR(0x43106c);
__builtin_memmove((R+28),(R+12),4);
}
B43106e:{NFSU2_TR(0x43106e);
w4(R+4,u32(0x7ull));
}
B431073:{NFSU2_TR(0x431073);
w4(R+24,u32(0x7ea3e4ull));
}
B431078:L431078:{c.instructions+=1;NFSU2_TR(0x431078);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L43107a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x431078u);}goto L431078;}
}
B43107a:L43107a:{c.instructions+=10;NFSU2_TR(0x43107a);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43107d:{NFSU2_TR(0x43107d);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B431080:{NFSU2_TR(0x431080);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B431082:{NFSU2_TR(0x431082);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B431085:{NFSU2_TR(0x431085);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B431088:{NFSU2_TR(0x431088);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B43108b:{NFSU2_TR(0x43108b);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B43108f:{NFSU2_TR(0x43108f);
__builtin_memmove((R+28),(R+12),4);
}
B431091:{NFSU2_TR(0x431091);
w4(R+4,u32(0x7ull));
}
B431096:{NFSU2_TR(0x431096);
w4(R+24,u32(0x7ea400ull));
}
B43109b:L43109b:{c.instructions+=1;NFSU2_TR(0x43109b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L43109d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43109bu);}goto L43109b;}
}
B43109d:L43109d:{c.instructions+=10;NFSU2_TR(0x43109d);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4310a0:{NFSU2_TR(0x4310a0);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4310a3:{NFSU2_TR(0x4310a3);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4310a5:{NFSU2_TR(0x4310a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4310a8:{NFSU2_TR(0x4310a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4310ab:{NFSU2_TR(0x4310ab);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4310ae:{NFSU2_TR(0x4310ae);
u8 U[12];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B4310b2:{NFSU2_TR(0x4310b2);
w4(R+4,u32(0x7ull));
}
B4310b7:{NFSU2_TR(0x4310b7);
w4(R+24,u32(0x7ea41cull));
}
B4310bc:{NFSU2_TR(0x4310bc);
__builtin_memmove((R+28),(R+12),4);
}
B4310be:L4310be:{c.instructions+=1;NFSU2_TR(0x4310be);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4310c0;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4310beu);}goto L4310be;}
}
B4310c0:L4310c0:{c.instructions+=10;NFSU2_TR(0x4310c0);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4310c3:{NFSU2_TR(0x4310c3);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4310c6:{NFSU2_TR(0x4310c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4310c9:{NFSU2_TR(0x4310c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4310cc:{NFSU2_TR(0x4310cc);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4310cf:{NFSU2_TR(0x4310cf);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4310d1:{NFSU2_TR(0x4310d1);
u8 U[12];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B4310d8:{NFSU2_TR(0x4310d8);
__builtin_memmove((R+28),(R+12),4);
}
B4310da:{NFSU2_TR(0x4310da);
w4(R+4,u32(0x7ull));
}
B4310df:{NFSU2_TR(0x4310df);
w4(R+24,u32(0x7ea438ull));
}
B4310e4:L4310e4:{c.instructions+=1;NFSU2_TR(0x4310e4);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4310e6;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4310e4u);}goto L4310e4;}
}
B4310e6:L4310e6:{c.instructions+=9;NFSU2_TR(0x4310e6);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4310e9:{NFSU2_TR(0x4310e9);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4310ec:{NFSU2_TR(0x4310ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4310ef:{NFSU2_TR(0x4310ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4310f2:{NFSU2_TR(0x4310f2);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4310f5:{NFSU2_TR(0x4310f5);
u8 U[12];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B4310fc:{NFSU2_TR(0x4310fc);
__builtin_memmove((R+28),(R+12),4);
}
B4310fe:{NFSU2_TR(0x4310fe);
w4(R+4,u32(0x7ull));
}
B431103:{NFSU2_TR(0x431103);
w4(R+24,u32(0x7ea454ull));
}
B431108:L431108:{c.instructions+=1;NFSU2_TR(0x431108);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L43110a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x431108u);}goto L431108;}
}
B43110a:L43110a:{c.instructions+=10;NFSU2_TR(0x43110a);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43110d:{NFSU2_TR(0x43110d);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B431110:{NFSU2_TR(0x431110);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B431113:{NFSU2_TR(0x431113);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B431116:{NFSU2_TR(0x431116);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B431117:{NFSU2_TR(0x431117);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x6ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x6ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43111a:{NFSU2_TR(0x43111a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43111b:{NFSU2_TR(0x43111b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43111e:{NFSU2_TR(0x43111e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43111f:{NFSU2_TR(0x43111f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B431130:L431130:{c.instructions+=14;NFSU2_TR(0x431130);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431136:{NFSU2_TR(0x431136);
__builtin_memmove((R+8),(R+4),4);
}
B431138:{NFSU2_TR(0x431138);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43113b:{NFSU2_TR(0x43113b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43113f:{NFSU2_TR(0x43113f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B431142:{NFSU2_TR(0x431142);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431143:{NFSU2_TR(0x431143);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B431147:{NFSU2_TR(0x431147);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431148:{NFSU2_TR(0x431148);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B43114c:{NFSU2_TR(0x43114c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43114d:{NFSU2_TR(0x43114d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43114e:{NFSU2_TR(0x43114e);
__builtin_memmove((R+28),(R+0),4);
}
B431150:{NFSU2_TR(0x431150);
w4(R+4,u32(0x7ull));
}
B431155:{NFSU2_TR(0x431155);
w4(R+24,u32(0x7ea470ull));
}
B43115a:L43115a:{c.instructions+=1;NFSU2_TR(0x43115a);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L43115c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43115au);}goto L43115a;}
}
B43115c:L43115c:{c.instructions+=15;NFSU2_TR(0x43115c);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43115f:{NFSU2_TR(0x43115f);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B431162:{NFSU2_TR(0x431162);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431168:{NFSU2_TR(0x431168);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43116c:{NFSU2_TR(0x43116c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B431170:{NFSU2_TR(0x431170);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B431173:{NFSU2_TR(0x431173);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B431176:{NFSU2_TR(0x431176);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B431179:{NFSU2_TR(0x431179);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B43117a:{NFSU2_TR(0x43117a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43117d:{NFSU2_TR(0x43117d);
__builtin_memmove((R+4),(R+0),4);
}
B43117f:{NFSU2_TR(0x43117f);
w1(R+12,u8(0x1ull));
}
B431181:{NFSU2_TR(0x431181);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B431183:{NFSU2_TR(0x431183);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B431186:{NFSU2_TR(0x431186);
if(r1(R+514)){{goto L4311e2;}}
}
B431188:L431188:{c.instructions+=1;NFSU2_TR(0x431188);
{goto L431190;}
}
B431190:L431190:{c.instructions+=9;NFSU2_TR(0x431190);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B431194:{NFSU2_TR(0x431194);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B431197:{NFSU2_TR(0x431197);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43119b:{NFSU2_TR(0x43119b);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B43119d:{NFSU2_TR(0x43119d);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43119f:{NFSU2_TR(0x43119f);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B4311a3:{NFSU2_TR(0x4311a3);
__builtin_memmove((R+28),(R+0),4);
}
B4311a5:{NFSU2_TR(0x4311a5);
w4(R+4,u32(0x7ull));
}
B4311aa:{NFSU2_TR(0x4311aa);
if(r1(R+518)){{goto L4311b5;}}
}
B4311ac:L4311ac:{c.instructions+=3;NFSU2_TR(0x4311ac);
w4(R+24,u32(0x7ea48cull));
}
B4311b1:{NFSU2_TR(0x4311b1);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B4311b3:{NFSU2_TR(0x4311b3);
{goto L4311bc;}
}
B4311b5:L4311b5:{c.instructions+=2;NFSU2_TR(0x4311b5);
w4(R+24,u32(0x7ea4a8ull));
}
B4311ba:{NFSU2_TR(0x4311ba);
w1(R+12,u8(0x1ull));
}
B4311bc:L4311bc:{c.instructions+=1;NFSU2_TR(0x4311bc);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4311be;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4311bcu);}goto L4311bc;}
}
B4311be:L4311be:{c.instructions+=13;NFSU2_TR(0x4311be);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4311c1:{NFSU2_TR(0x4311c1);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4311c5:{NFSU2_TR(0x4311c5);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4311c8:{NFSU2_TR(0x4311c8);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4311cb:{NFSU2_TR(0x4311cb);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4311cf:{NFSU2_TR(0x4311cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4311d2:{NFSU2_TR(0x4311d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4311d5:{NFSU2_TR(0x4311d5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4311d6:{NFSU2_TR(0x4311d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4311d9:{NFSU2_TR(0x4311d9);
__builtin_memmove((R+4),(R+0),4);
}
B4311db:{NFSU2_TR(0x4311db);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4311dd:{NFSU2_TR(0x4311dd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4311e0:{NFSU2_TR(0x4311e0);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x431190u);}goto L431190;}}
}
B4311e2:L4311e2:{c.instructions+=7;NFSU2_TR(0x4311e2);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4311e6:{NFSU2_TR(0x4311e6);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(s64(s32(u32(0x1cull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+4)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
}
B4311e9:{NFSU2_TR(0x4311e9);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B4311ed:{NFSU2_TR(0x4311ed);
__builtin_memmove((R+28),(R+0),4);
}
B4311ef:{NFSU2_TR(0x4311ef);
w4(R+4,u32(0x7ull));
}
B4311f4:{NFSU2_TR(0x4311f4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4311f8:{NFSU2_TR(0x4311f8);
w4(R+24,u32(0x7ea4c4ull));
}
B4311fd:L4311fd:{c.instructions+=1;NFSU2_TR(0x4311fd);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4311ff;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4311fdu);}goto L4311fd;}
}
B4311ff:L4311ff:{c.instructions+=13;NFSU2_TR(0x4311ff);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B431202:{NFSU2_TR(0x431202);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431206:{NFSU2_TR(0x431206);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431209:{NFSU2_TR(0x431209);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43120c:{NFSU2_TR(0x43120c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43120f:{NFSU2_TR(0x43120f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B431212:{NFSU2_TR(0x431212);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B431213:{NFSU2_TR(0x431213);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B431214:{NFSU2_TR(0x431214);
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
B431215:{NFSU2_TR(0x431215);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B431216:{NFSU2_TR(0x431216);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B431219:{NFSU2_TR(0x431219);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43121a:{NFSU2_TR(0x43121a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B431220:L431220:{c.instructions+=21;NFSU2_TR(0x431220);
__builtin_memmove((R+0),(R+4),4);
}
B431222:{NFSU2_TR(0x431222);
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
B431224:{NFSU2_TR(0x431224);
w1(R+8,u8(0x1ull));
}
B431226:{NFSU2_TR(0x431226);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B431229:{NFSU2_TR(0x431229);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1bull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B43122c:{NFSU2_TR(0x43122c);
u8 U[4];
w4(U+0,u32(0x785fb4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B431232:{NFSU2_TR(0x431232);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B431235:{NFSU2_TR(0x431235);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B431238:{NFSU2_TR(0x431238);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43123b:{NFSU2_TR(0x43123b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43123e:{NFSU2_TR(0x43123e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B431241:{NFSU2_TR(0x431241);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x19ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B431244:{NFSU2_TR(0x431244);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1aull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B431247:{NFSU2_TR(0x431247);
w4(R+8,u32(0xffffffffull));
}
B43124c:{NFSU2_TR(0x43124c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43124f:{NFSU2_TR(0x43124f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B431252:{NFSU2_TR(0x431252);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B431255:{NFSU2_TR(0x431255);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B431258:{NFSU2_TR(0x431258);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43125b:{NFSU2_TR(0x43125b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43125e:{NFSU2_TR(0x43125e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B431260:L431260:{c.instructions+=3;NFSU2_TR(0x431260);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B431263:{NFSU2_TR(0x431263);
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
B431265:{NFSU2_TR(0x431265);
if(r1(R+518)){{goto L43126e;}}
}
B431267:L431267:{c.instructions+=1;NFSU2_TR(0x431267);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43126e:L43126e:{c.instructions+=2;NFSU2_TR(0x43126e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B431270:{NFSU2_TR(0x431270);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B431280:L431280:{c.instructions+=11;NFSU2_TR(0x431280);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431281:{NFSU2_TR(0x431281);
__builtin_memmove((R+20),(R+16),4);
}
B431283:{NFSU2_TR(0x431283);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B431286:{NFSU2_TR(0x431286);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xc8ull))));
}
B43128c:{NFSU2_TR(0x43128c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43128d:{NFSU2_TR(0x43128d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43128e:{NFSU2_TR(0x43128e);
__builtin_memmove((R+28),(R+4),4);
}
B431290:{NFSU2_TR(0x431290);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B431293:{NFSU2_TR(0x431293);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B431299:{NFSU2_TR(0x431299);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43129b:{NFSU2_TR(0x43129b);
if(r1(R+518)){{goto L4312a4;}}
}
B43129d:L43129d:{c.instructions+=2;NFSU2_TR(0x43129d);
__builtin_memmove((R+4),(R+24),4);
}
B43129f:{NFSU2_TR(0x43129f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4312a4ull));
TAIL_STATIC(0x60bb10u,60b);
}
B4312a4:L4312a4:{c.instructions+=5;NFSU2_TR(0x4312a4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4312a7:{NFSU2_TR(0x4312a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4312ae:{NFSU2_TR(0x4312ae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4312af:{NFSU2_TR(0x4312af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4312b0:{NFSU2_TR(0x4312b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4312b5ull));
TAIL_STATIC(0x4012b0u,401);
}
B4312b5:L4312b5:{c.instructions+=12;NFSU2_TR(0x4312b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4312b8:{NFSU2_TR(0x4312b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4312bb:{NFSU2_TR(0x4312bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4312be:{NFSU2_TR(0x4312be);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4312c1:{NFSU2_TR(0x4312c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4312c4:{NFSU2_TR(0x4312c4);
__builtin_memmove((R+8),(R+24),4);
}
B4312c6:{NFSU2_TR(0x4312c6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x70ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4312c9:{NFSU2_TR(0x4312c9);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B4312cd:{NFSU2_TR(0x4312cd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4312ce:{NFSU2_TR(0x4312ce);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4312d2:{NFSU2_TR(0x4312d2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4312d3:{NFSU2_TR(0x4312d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4312d8ull));
TAIL_STATIC(0x43c7c0u,43c);
}
B4312d8:L4312d8:{c.instructions+=8;NFSU2_TR(0x4312d8);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4312dc:{NFSU2_TR(0x4312dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4312dd:{NFSU2_TR(0x4312dd);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B4312e0:{NFSU2_TR(0x4312e0);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B4312e2:{NFSU2_TR(0x4312e2);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4312e6:{NFSU2_TR(0x4312e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4312e7:{NFSU2_TR(0x4312e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4312e8:{NFSU2_TR(0x4312e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4312edull));
TAIL_STATIC(0x43c990u,43c);
}
B4312ed:L4312ed:{c.instructions+=12;NFSU2_TR(0x4312ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4312f0:{NFSU2_TR(0x4312f0);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4312f4:{NFSU2_TR(0x4312f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4312f8:{NFSU2_TR(0x4312f8);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4312fa:{NFSU2_TR(0x4312fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4312fe:{NFSU2_TR(0x4312fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B431301:{NFSU2_TR(0x431301);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431302:{NFSU2_TR(0x431302);
u8 U[4];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B431309:{NFSU2_TR(0x431309);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43130a:{NFSU2_TR(0x43130a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43130b:{NFSU2_TR(0x43130b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43130e:{NFSU2_TR(0x43130e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x431313ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B431313:L431313:{c.instructions+=6;NFSU2_TR(0x431313);
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
B431316:{NFSU2_TR(0x431316);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B431317:{NFSU2_TR(0x431317);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B431318:{NFSU2_TR(0x431318);
__builtin_memmove((R+16),(R+20),4);
}
B43131a:{NFSU2_TR(0x43131a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43131b:{NFSU2_TR(0x43131b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B431320:L431320:{c.instructions+=6;NFSU2_TR(0x431320);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431321:{NFSU2_TR(0x431321);
__builtin_memmove((R+24),(R+4),4);
}
B431323:{NFSU2_TR(0x431323);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431324:{NFSU2_TR(0x431324);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B431327:{NFSU2_TR(0x431327);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B431329:{NFSU2_TR(0x431329);
if(r1(R+518)){{goto L431348;}}
}
B43132b:L43132b:{c.instructions+=2;NFSU2_TR(0x43132b);
__builtin_memmove((R+4),(R+28),4);
}
B43132d:{NFSU2_TR(0x43132d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x431332ull));
TAIL_STATIC(0x633fd0u,633);
}
B431332:L431332:{c.instructions+=4;NFSU2_TR(0x431332);
__builtin_memmove((R+0),gp(0x8a1d08),4);
}
B431337:{NFSU2_TR(0x431337);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431338:{NFSU2_TR(0x431338);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431339:{NFSU2_TR(0x431339);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43133eull));
TAIL_STATIC(0x43f920u,43f);
}
B43133e:L43133e:{c.instructions+=2;NFSU2_TR(0x43133e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B431341:{NFSU2_TR(0x431341);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B431348:L431348:{c.instructions+=3;NFSU2_TR(0x431348);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43134b:{NFSU2_TR(0x43134b);
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
B43134d:{NFSU2_TR(0x43134d);
if(r1(R+518)){{goto L431358;}}
}
B43134f:L43134f:{c.instructions+=2;NFSU2_TR(0x43134f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431350:{NFSU2_TR(0x431350);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x431355ull));
TAIL_STATIC(0x61f5a0u,61f);
}
B431355:L431355:{c.instructions+=1;NFSU2_TR(0x431355);
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
B431358:L431358:{c.instructions+=3;NFSU2_TR(0x431358);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B431359:{NFSU2_TR(0x431359);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43135a:{NFSU2_TR(0x43135a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B431360:L431360:{c.instructions+=3;NFSU2_TR(0x431360);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B431363:{NFSU2_TR(0x431363);
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
B431365:{NFSU2_TR(0x431365);
if(r1(R+518)){{goto L43136e;}}
}
B431367:L431367:{c.instructions+=1;NFSU2_TR(0x431367);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43136e:L43136e:{c.instructions+=2;NFSU2_TR(0x43136e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B431370:{NFSU2_TR(0x431370);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B431380:L431380:{c.instructions+=3;NFSU2_TR(0x431380);
__builtin_memmove((R+0),gp(0x827b50),1);
}
B431385:{NFSU2_TR(0x431385);
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
B431387:{NFSU2_TR(0x431387);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4313a8;}}
}
B431389:L431389:{c.instructions+=5;NFSU2_TR(0x431389);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43138b:{NFSU2_TR(0x43138b);
u8 U[4];
w4(U+0,u32(0x786020ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431390:{NFSU2_TR(0x431390);
u8 U[4];
w4(U+0,u32(0x51ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431392:{NFSU2_TR(0x431392);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431394:{NFSU2_TR(0x431394);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x431399ull));
TAIL_STATIC(0x440df0u,440);
}
B431399:L431399:{c.instructions+=3;NFSU2_TR(0x431399);
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
B43139c:{NFSU2_TR(0x43139c);
__builtin_memmove(gp(0x827b4c),(R+0),4);
}
B4313a1:{NFSU2_TR(0x4313a1);
s1(0x827b50,u8(0x1ull));
}
B4313a8:L4313a8:{c.instructions+=1;NFSU2_TR(0x4313a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4313b0:L4313b0:{c.instructions+=5;NFSU2_TR(0x4313b0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4313b2:{NFSU2_TR(0x4313b2);
u8 U[4];
w4(U+0,u32(0x78603cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4313b7:{NFSU2_TR(0x4313b7);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4313b9:{NFSU2_TR(0x4313b9);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4313be:{NFSU2_TR(0x4313be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4313c3ull));
TAIL_STATIC(0x440df0u,440);
}
B4313c3:L4313c3:{c.instructions+=3;NFSU2_TR(0x4313c3);
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
B4313c6:{NFSU2_TR(0x4313c6);
__builtin_memmove(gp(0x827b54),(R+0),4);
}
B4313cb:{NFSU2_TR(0x4313cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4313d0:L4313d0:{c.instructions+=14;NFSU2_TR(0x4313d0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4313d4:{NFSU2_TR(0x4313d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4313d7:{NFSU2_TR(0x4313d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4313db:{NFSU2_TR(0x4313db);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4313de:{NFSU2_TR(0x4313de);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4313e1:{NFSU2_TR(0x4313e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4313e4:{NFSU2_TR(0x4313e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4313e8:{NFSU2_TR(0x4313e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4313eb:{NFSU2_TR(0x4313eb);
{u32 ea_=u32(r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4313ee:{NFSU2_TR(0x4313ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4313f1:{NFSU2_TR(0x4313f1);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4313f5:{NFSU2_TR(0x4313f5);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4313f8:{NFSU2_TR(0x4313f8);
{u32 ea_=u32(r4(R+4)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4313fb:{NFSU2_TR(0x4313fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B431400:L431400:{c.instructions+=7;NFSU2_TR(0x431400);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431401:{NFSU2_TR(0x431401);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B431405:{NFSU2_TR(0x431405);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431406:{NFSU2_TR(0x431406);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B431408:{NFSU2_TR(0x431408);
__builtin_memmove((R+0),gp(0x870818),4);
}
B43140d:{NFSU2_TR(0x43140d);
__builtin_memmove((R+24),(R+4),4);
}
B43140f:{NFSU2_TR(0x43140f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L431420;}}
}
B431411:L431411:{c.instructions+=2;NFSU2_TR(0x431411);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B431414:{NFSU2_TR(0x431414);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L431420;}}
}
B431416:L431416:{c.instructions+=4;NFSU2_TR(0x431416);
w4(R+0,u32(0x1ull));
}
B43141b:{NFSU2_TR(0x43141b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43141c:{NFSU2_TR(0x43141c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43141d:{NFSU2_TR(0x43141d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B431420:L431420:{c.instructions+=16;NFSU2_TR(0x431420);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B431423:{NFSU2_TR(0x431423);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B431426:{NFSU2_TR(0x431426);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B431429:{NFSU2_TR(0x431429);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43142c:{NFSU2_TR(0x43142c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43142d:{NFSU2_TR(0x43142d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B431430:{NFSU2_TR(0x431430);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B431434:{NFSU2_TR(0x431434);
__builtin_memmove((R+0),gp(0x7ea234),4);
}
B431439:{NFSU2_TR(0x431439);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43143b:{NFSU2_TR(0x43143b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B43143f:{NFSU2_TR(0x43143f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431440:{NFSU2_TR(0x431440);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B431443:{NFSU2_TR(0x431443);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431444:{NFSU2_TR(0x431444);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B431447:{NFSU2_TR(0x431447);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43144b:{NFSU2_TR(0x43144b);
if(r1(R+518)){{goto L43145d;}}
}
B43144d:L43144d:{c.instructions+=3;NFSU2_TR(0x43144d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B431450:{NFSU2_TR(0x431450);
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
B431452:{NFSU2_TR(0x431452);
if(r1(R+518)){{goto L43145d;}}
}
B431454:L431454:{c.instructions+=5;NFSU2_TR(0x431454);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B431456:{NFSU2_TR(0x431456);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431458:{NFSU2_TR(0x431458);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431459:{NFSU2_TR(0x431459);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43145a:{NFSU2_TR(0x43145a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43145dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B43145d:L43145d:{c.instructions+=3;NFSU2_TR(0x43145d);
__builtin_memmove((R+0),gp(0x7ea238),4);
}
B431462:{NFSU2_TR(0x431462);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B431464:{NFSU2_TR(0x431464);
if(r1(R+518)){{goto L431476;}}
}
B431466:L431466:{c.instructions+=3;NFSU2_TR(0x431466);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B431469:{NFSU2_TR(0x431469);
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
B43146b:{NFSU2_TR(0x43146b);
if(r1(R+518)){{goto L431476;}}
}
B43146d:L43146d:{c.instructions+=5;NFSU2_TR(0x43146d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43146f:{NFSU2_TR(0x43146f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431471:{NFSU2_TR(0x431471);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431472:{NFSU2_TR(0x431472);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431473:{NFSU2_TR(0x431473);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x431476ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B431476:L431476:{c.instructions+=3;NFSU2_TR(0x431476);
__builtin_memmove((R+0),gp(0x7ea230),4);
}
B43147b:{NFSU2_TR(0x43147b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43147d:{NFSU2_TR(0x43147d);
if(r1(R+518)){{goto L43148f;}}
}
B43147f:L43147f:{c.instructions+=3;NFSU2_TR(0x43147f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B431482:{NFSU2_TR(0x431482);
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
B431484:{NFSU2_TR(0x431484);
if(r1(R+518)){{goto L43148f;}}
}
B431486:L431486:{c.instructions+=5;NFSU2_TR(0x431486);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B431488:{NFSU2_TR(0x431488);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43148a:{NFSU2_TR(0x43148a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43148b:{NFSU2_TR(0x43148b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43148c:{NFSU2_TR(0x43148c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43148full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B43148f:L43148f:{c.instructions+=6;NFSU2_TR(0x43148f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B431493:{NFSU2_TR(0x431493);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431495:{NFSU2_TR(0x431495);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431496:{NFSU2_TR(0x431496);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431497:{NFSU2_TR(0x431497);
__builtin_memmove((R+4),(R+20),4);
}
B431499:{NFSU2_TR(0x431499);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43149eull));
TAIL_STATIC(0x6e3b10u,6e3);
}
B43149e:L43149e:{c.instructions+=2;NFSU2_TR(0x43149e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B4314a2:{NFSU2_TR(0x4314a2);
if(r1(R+518)){{goto L4314d4;}}
}
B4314a4:L4314a4:{c.instructions+=6;NFSU2_TR(0x4314a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4314a7:{NFSU2_TR(0x4314a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4314aa:{NFSU2_TR(0x4314aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4314ad:{NFSU2_TR(0x4314ad);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4314af:{NFSU2_TR(0x4314af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4314b2:{NFSU2_TR(0x4314b2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4314d4;}}
}
B4314b4:L4314b4:{c.instructions+=3;NFSU2_TR(0x4314b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4314b7:{NFSU2_TR(0x4314b7);
__builtin_memmove((R+12),(R+4),4);
}
B4314b9:{NFSU2_TR(0x4314b9);
__builtin_memmove((R+16),(R+16),4);
}
B4314c0:L4314c0:{c.instructions+=4;NFSU2_TR(0x4314c0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4314c1:{NFSU2_TR(0x4314c1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4314c2:{NFSU2_TR(0x4314c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4314c3:{NFSU2_TR(0x4314c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4314c8ull));
TAIL_STATIC(0x43c990u,43c);
}
B4314c8:L4314c8:{c.instructions+=5;NFSU2_TR(0x4314c8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4314cb:{NFSU2_TR(0x4314cb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x70ull))));
}
B4314ce:{NFSU2_TR(0x4314ce);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B4314d1:{NFSU2_TR(0x4314d1);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B4314d2:{NFSU2_TR(0x4314d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4314c0u);}goto L4314c0;}}
}
B4314d4:L4314d4:{c.instructions+=7;NFSU2_TR(0x4314d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4314d5:{NFSU2_TR(0x4314d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4314d6:{NFSU2_TR(0x4314d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4314d7:{NFSU2_TR(0x4314d7);
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
B4314d9:{NFSU2_TR(0x4314d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4314da:{NFSU2_TR(0x4314da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4314db:{NFSU2_TR(0x4314db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4314e0:L4314e0:{c.instructions+=3;NFSU2_TR(0x4314e0);
__builtin_memmove((R+0),gp(0x827b60),1);
}
B4314e5:{NFSU2_TR(0x4314e5);
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
B4314e7:{NFSU2_TR(0x4314e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L431508;}}
}
B4314e9:L4314e9:{c.instructions+=5;NFSU2_TR(0x4314e9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4314eb:{NFSU2_TR(0x4314eb);
u8 U[4];
w4(U+0,u32(0x786054ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4314f0:{NFSU2_TR(0x4314f0);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4314f2:{NFSU2_TR(0x4314f2);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4314f4:{NFSU2_TR(0x4314f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4314f9ull));
TAIL_STATIC(0x440df0u,440);
}
B4314f9:L4314f9:{c.instructions+=3;NFSU2_TR(0x4314f9);
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
B4314fc:{NFSU2_TR(0x4314fc);
__builtin_memmove(gp(0x827b5c),(R+0),4);
}
B431501:{NFSU2_TR(0x431501);
s1(0x827b60,u8(0x1ull));
}
B431508:L431508:{c.instructions+=1;NFSU2_TR(0x431508);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B431510:L431510:{c.instructions+=8;NFSU2_TR(0x431510);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B431513:{NFSU2_TR(0x431513);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431514:{NFSU2_TR(0x431514);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431515:{NFSU2_TR(0x431515);
__builtin_memmove((R+24),(R+4),4);
}
B431517:{NFSU2_TR(0x431517);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43151a:{NFSU2_TR(0x43151a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B43151c:{NFSU2_TR(0x43151c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43151e:{NFSU2_TR(0x43151e);
if(r1(R+518)){{goto L431573;}}
}
B431520:L431520:{c.instructions+=9;NFSU2_TR(0x431520);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B431524:{NFSU2_TR(0x431524);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431525:{NFSU2_TR(0x431525);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B431529:{NFSU2_TR(0x431529);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43152a:{NFSU2_TR(0x43152a);
u8 U[4];
w4(U+0,u32(0x7bff54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43152f:{NFSU2_TR(0x43152f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B431533:{NFSU2_TR(0x431533);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B431537:{NFSU2_TR(0x431537);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43153b:{NFSU2_TR(0x43153b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x431540ull));
TAIL_STATIC(0x6d78a0u,6d7);
}
B431540:L431540:{c.instructions+=2;NFSU2_TR(0x431540);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B431542:{NFSU2_TR(0x431542);
if(r1(R+518)){{goto L431570;}}
}
B431544:L431544:{c.instructions+=6;NFSU2_TR(0x431544);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B431548:{NFSU2_TR(0x431548);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431549:{NFSU2_TR(0x431549);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43154d:{NFSU2_TR(0x43154d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43154e:{NFSU2_TR(0x43154e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B431551:{NFSU2_TR(0x431551);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x431556ull));
TAIL_STATIC(0x43db50u,43d);
}
B431556:L431556:{c.instructions+=12;NFSU2_TR(0x431556);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B431559:{NFSU2_TR(0x431559);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43155c:{NFSU2_TR(0x43155c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B43155e:{NFSU2_TR(0x43155e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B431560:{NFSU2_TR(0x431560);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B431563:{NFSU2_TR(0x431563);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B431566:{NFSU2_TR(0x431566);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B431567:{NFSU2_TR(0x431567);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43156a:{NFSU2_TR(0x43156a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43156b:{NFSU2_TR(0x43156b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43156c:{NFSU2_TR(0x43156c);
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
B43156f:{NFSU2_TR(0x43156f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B431570:L431570:{c.instructions+=1;NFSU2_TR(0x431570);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B431573:L431573:{c.instructions+=4;NFSU2_TR(0x431573);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B431574:{NFSU2_TR(0x431574);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B431575:{NFSU2_TR(0x431575);
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
B431578:{NFSU2_TR(0x431578);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B431580:L431580:{c.instructions+=3;NFSU2_TR(0x431580);
__builtin_memmove((R+0),gp(0x827b68),1);
}
B431585:{NFSU2_TR(0x431585);
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
B431587:{NFSU2_TR(0x431587);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4315a8;}}
}
B431589:L431589:{c.instructions+=5;NFSU2_TR(0x431589);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43158b:{NFSU2_TR(0x43158b);
u8 U[4];
w4(U+0,u32(0x786070ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431590:{NFSU2_TR(0x431590);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431592:{NFSU2_TR(0x431592);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431594:{NFSU2_TR(0x431594);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x431599ull));
TAIL_STATIC(0x440df0u,440);
}
B431599:L431599:{c.instructions+=3;NFSU2_TR(0x431599);
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
B43159c:{NFSU2_TR(0x43159c);
__builtin_memmove(gp(0x827b64),(R+0),4);
}
B4315a1:{NFSU2_TR(0x4315a1);
s1(0x827b68,u8(0x1ull));
}
B4315a8:L4315a8:{c.instructions+=1;NFSU2_TR(0x4315a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4315b0:L4315b0:{c.instructions+=9;NFSU2_TR(0x4315b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4315b1:{NFSU2_TR(0x4315b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4315b2:{NFSU2_TR(0x4315b2);
__builtin_memmove((R+24),(R+4),4);
}
B4315b4:{NFSU2_TR(0x4315b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4315b7:{NFSU2_TR(0x4315b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4315b8:{NFSU2_TR(0x4315b8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4315ba:{NFSU2_TR(0x4315ba);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4315bc:{NFSU2_TR(0x4315bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4315bf:{NFSU2_TR(0x4315bf);
if(r1(R+518)){{goto L4315cd;}}
}
B4315c1:L4315c1:{c.instructions+=2;NFSU2_TR(0x4315c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4315c2:{NFSU2_TR(0x4315c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4315c7ull));
TAIL_STATIC(0x575630u,575);
}
B4315c7:L4315c7:{c.instructions+=2;NFSU2_TR(0x4315c7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4315ca:{NFSU2_TR(0x4315ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4315cd:L4315cd:{c.instructions+=4;NFSU2_TR(0x4315cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4315d0:{NFSU2_TR(0x4315d0);
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
B4315d2:{NFSU2_TR(0x4315d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4315d5:{NFSU2_TR(0x4315d5);
if(r1(R+518)){{goto L4315e6;}}
}
B4315d7:L4315d7:{c.instructions+=3;NFSU2_TR(0x4315d7);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4315d9:{NFSU2_TR(0x4315d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4315da:{NFSU2_TR(0x4315da);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4315e0ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B4315e0:L4315e0:{c.instructions+=2;NFSU2_TR(0x4315e0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4315e3:{NFSU2_TR(0x4315e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4315e6:L4315e6:{c.instructions+=3;NFSU2_TR(0x4315e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4315e9:{NFSU2_TR(0x4315e9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x44ull))));
}
B4315ec:{NFSU2_TR(0x4315ec);
w4(R+12,u32(0x4ull));
}
B4315f1:L4315f1:{c.instructions+=3;NFSU2_TR(0x4315f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4315f3:{NFSU2_TR(0x4315f3);
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
B4315f5:{NFSU2_TR(0x4315f5);
if(r1(R+518)){{goto L431605;}}
}
B4315f7:L4315f7:{c.instructions+=4;NFSU2_TR(0x4315f7);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B4315fd:{NFSU2_TR(0x4315fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4315ff:{NFSU2_TR(0x4315ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431600:{NFSU2_TR(0x431600);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x431603ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B431603:L431603:{c.instructions+=1;NFSU2_TR(0x431603);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B431605:L431605:{c.instructions+=3;NFSU2_TR(0x431605);
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B431608:{NFSU2_TR(0x431608);
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
B431609:{NFSU2_TR(0x431609);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4315f1u);}goto L4315f1;}}
}
B43160b:L43160b:{c.instructions+=4;NFSU2_TR(0x43160b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43160c:{NFSU2_TR(0x43160c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43160d:{NFSU2_TR(0x43160d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43160e:{NFSU2_TR(0x43160e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B431610:L431610:{c.instructions+=3;NFSU2_TR(0x431610);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B431613:{NFSU2_TR(0x431613);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B431615:{NFSU2_TR(0x431615);
if(r1(R+518)){{goto L431622;}}
}
B431617:L431617:{c.instructions+=4;NFSU2_TR(0x431617);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B43161a:{NFSU2_TR(0x43161a);
{u32 ea_=u32(r4(R+4)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43161d:{NFSU2_TR(0x43161d);
{u32 ea_=u32(r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431620:{NFSU2_TR(0x431620);
{goto L431625;}
}
B431622:L431622:{c.instructions+=1;NFSU2_TR(0x431622);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431625:L431625:{c.instructions+=2;NFSU2_TR(0x431625);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B431627:{NFSU2_TR(0x431627);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L431657;}}
}
B431629:L431629:{c.instructions+=10;NFSU2_TR(0x431629);
{u32 ea_=u32(r4(R+4)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43162c:{NFSU2_TR(0x43162c);
{u32 ea_=u32(r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43162f:{NFSU2_TR(0x43162f);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431632:{NFSU2_TR(0x431632);
{u32 ea_=u32(u32(7887832u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431638:{NFSU2_TR(0x431638);
{u32 ea_=u32(u32(7887832u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43163e:{NFSU2_TR(0x43163e);
{u32 ea_=u32(r4(R+4)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431641:{NFSU2_TR(0x431641);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B431643:{NFSU2_TR(0x431643);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B431645:{NFSU2_TR(0x431645);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B431648:{NFSU2_TR(0x431648);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L431657;}}
}
B43164a:L43164a:{c.instructions+=4;NFSU2_TR(0x43164a);
{u32 ea_=u32(r4(R+4)+u32(100u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43164d:{NFSU2_TR(0x43164d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43164f:{NFSU2_TR(0x43164f);
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
B431652:{NFSU2_TR(0x431652);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L431659;}}
}
B431654:L431654:{c.instructions+=2;NFSU2_TR(0x431654);
w1(R+0,u8(0x1ull));
}
B431656:{NFSU2_TR(0x431656);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B431657:L431657:{c.instructions+=1;NFSU2_TR(0x431657);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B431659:L431659:{c.instructions+=2;NFSU2_TR(0x431659);
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
B43165b:{NFSU2_TR(0x43165b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B431660:L431660:{c.instructions+=3;NFSU2_TR(0x431660);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B431663:{NFSU2_TR(0x431663);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B431665:{NFSU2_TR(0x431665);
if(r1(R+518)){{goto L431672;}}
}
B431667:L431667:{c.instructions+=4;NFSU2_TR(0x431667);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B43166a:{NFSU2_TR(0x43166a);
{u32 ea_=u32(r4(R+4)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43166d:{NFSU2_TR(0x43166d);
{u32 ea_=u32(r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431670:{NFSU2_TR(0x431670);
{goto L431675;}
}
B431672:L431672:{c.instructions+=1;NFSU2_TR(0x431672);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431675:L431675:{c.instructions+=2;NFSU2_TR(0x431675);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B431678:{NFSU2_TR(0x431678);
if(r1(R+518)){{goto L4316a8;}}
}
B43167a:L43167a:{c.instructions+=10;NFSU2_TR(0x43167a);
{u32 ea_=u32(r4(R+4)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43167d:{NFSU2_TR(0x43167d);
{u32 ea_=u32(r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431680:{NFSU2_TR(0x431680);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431683:{NFSU2_TR(0x431683);
{u32 ea_=u32(u32(7887832u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431689:{NFSU2_TR(0x431689);
{u32 ea_=u32(u32(7887832u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43168f:{NFSU2_TR(0x43168f);
{u32 ea_=u32(r4(R+4)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431692:{NFSU2_TR(0x431692);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B431694:{NFSU2_TR(0x431694);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B431696:{NFSU2_TR(0x431696);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B431699:{NFSU2_TR(0x431699);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4316a8;}}
}
B43169b:L43169b:{c.instructions+=4;NFSU2_TR(0x43169b);
{u32 ea_=u32(r4(R+4)+u32(100u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43169e:{NFSU2_TR(0x43169e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4316a0:{NFSU2_TR(0x4316a0);
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
B4316a3:{NFSU2_TR(0x4316a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4316aa;}}
}
B4316a5:L4316a5:{c.instructions+=2;NFSU2_TR(0x4316a5);
w1(R+0,u8(0x1ull));
}
B4316a7:{NFSU2_TR(0x4316a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4316a8:L4316a8:{c.instructions+=1;NFSU2_TR(0x4316a8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4316aa:L4316aa:{c.instructions+=2;NFSU2_TR(0x4316aa);
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
B4316ac:{NFSU2_TR(0x4316ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4316b0:L4316b0:{c.instructions+=17;NFSU2_TR(0x4316b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4316b3:{NFSU2_TR(0x4316b3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4316b4:{NFSU2_TR(0x4316b4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4316b5:{NFSU2_TR(0x4316b5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4316b6:{NFSU2_TR(0x4316b6);
__builtin_memmove((R+24),(R+4),4);
}
B4316b8:{NFSU2_TR(0x4316b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4316bb:{NFSU2_TR(0x4316bb);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4316be:{NFSU2_TR(0x4316be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4316c1:{NFSU2_TR(0x4316c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4316c4:{NFSU2_TR(0x4316c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4316c8:{NFSU2_TR(0x4316c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4316cb:{NFSU2_TR(0x4316cb);
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
B4316cd:{NFSU2_TR(0x4316cd);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4316d1:{NFSU2_TR(0x4316d1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4316d5:{NFSU2_TR(0x4316d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4316d6:{NFSU2_TR(0x4316d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4316d9:{NFSU2_TR(0x4316d9);
if(r1(R+518)){{goto L4316e4;}}
}
B4316db:L4316db:{c.instructions+=5;NFSU2_TR(0x4316db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4316dd:{NFSU2_TR(0x4316dd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4316df:{NFSU2_TR(0x4316df);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4316e0:{NFSU2_TR(0x4316e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4316e1:{NFSU2_TR(0x4316e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4316e4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4316e4:L4316e4:{c.instructions+=3;NFSU2_TR(0x4316e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4316e7:{NFSU2_TR(0x4316e7);
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
B4316e9:{NFSU2_TR(0x4316e9);
if(r1(R+518)){{goto L4316f4;}}
}
B4316eb:L4316eb:{c.instructions+=5;NFSU2_TR(0x4316eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4316ed:{NFSU2_TR(0x4316ed);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4316ef:{NFSU2_TR(0x4316ef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4316f0:{NFSU2_TR(0x4316f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4316f1:{NFSU2_TR(0x4316f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4316f4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4316f4:L4316f4:{c.instructions+=3;NFSU2_TR(0x4316f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4316f7:{NFSU2_TR(0x4316f7);
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
B4316f9:{NFSU2_TR(0x4316f9);
if(r1(R+518)){{goto L431704;}}
}
B4316fb:L4316fb:{c.instructions+=5;NFSU2_TR(0x4316fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4316fd:{NFSU2_TR(0x4316fd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4316ff:{NFSU2_TR(0x4316ff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431700:{NFSU2_TR(0x431700);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431701:{NFSU2_TR(0x431701);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x431704ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B431704:L431704:{c.instructions+=6;NFSU2_TR(0x431704);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B431708:{NFSU2_TR(0x431708);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43170a:{NFSU2_TR(0x43170a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43170b:{NFSU2_TR(0x43170b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43170c:{NFSU2_TR(0x43170c);
__builtin_memmove((R+4),(R+20),4);
}
B43170e:{NFSU2_TR(0x43170e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x431713ull));
TAIL_STATIC(0x6e3b10u,6e3);
}
B431713:L431713:{c.instructions+=2;NFSU2_TR(0x431713);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B431717:{NFSU2_TR(0x431717);
if(r1(R+518)){{goto L431744;}}
}
B431719:L431719:{c.instructions+=6;NFSU2_TR(0x431719);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43171c:{NFSU2_TR(0x43171c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43171f:{NFSU2_TR(0x43171f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B431722:{NFSU2_TR(0x431722);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B431724:{NFSU2_TR(0x431724);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B431727:{NFSU2_TR(0x431727);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L431744;}}
}
B431729:L431729:{c.instructions+=3;NFSU2_TR(0x431729);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43172c:{NFSU2_TR(0x43172c);
__builtin_memmove((R+12),(R+4),4);
}
B43172e:{NFSU2_TR(0x43172e);
__builtin_memmove((R+28),(R+28),4);
}
B431730:L431730:{c.instructions+=4;NFSU2_TR(0x431730);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431731:{NFSU2_TR(0x431731);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431732:{NFSU2_TR(0x431732);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431733:{NFSU2_TR(0x431733);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x431738ull));
TAIL_STATIC(0x43c990u,43c);
}
B431738:L431738:{c.instructions+=5;NFSU2_TR(0x431738);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B43173b:{NFSU2_TR(0x43173b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x70ull))));
}
B43173e:{NFSU2_TR(0x43173e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B431741:{NFSU2_TR(0x431741);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B431742:{NFSU2_TR(0x431742);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x431730u);}goto L431730;}}
}
B431744:L431744:{c.instructions+=7;NFSU2_TR(0x431744);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B431745:{NFSU2_TR(0x431745);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B431746:{NFSU2_TR(0x431746);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B431747:{NFSU2_TR(0x431747);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B431749:{NFSU2_TR(0x431749);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43174a:{NFSU2_TR(0x43174a);
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
B43174d:{NFSU2_TR(0x43174d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B431750:L431750:{c.instructions+=4;NFSU2_TR(0x431750);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431751:{NFSU2_TR(0x431751);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431752:{NFSU2_TR(0x431752);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B431756:{NFSU2_TR(0x431756);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B431758:L431758:{c.instructions+=3;NFSU2_TR(0x431758);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B43175b:{NFSU2_TR(0x43175b);
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
B43175d:{NFSU2_TR(0x43175d);
if(r1(R+518)){{goto L431765;}}
}
B43175f:L43175f:{c.instructions+=3;NFSU2_TR(0x43175f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B431761:{NFSU2_TR(0x431761);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431763:{NFSU2_TR(0x431763);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x431765ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B431765:L431765:{c.instructions+=4;NFSU2_TR(0x431765);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B43176c:{NFSU2_TR(0x43176c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B43176d:{NFSU2_TR(0x43176d);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B431770:{NFSU2_TR(0x431770);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x431758u);}goto L431758;}}
}
B431772:L431772:{c.instructions+=3;NFSU2_TR(0x431772);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B431773:{NFSU2_TR(0x431773);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B431774:{NFSU2_TR(0x431774);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B431780:L431780:{c.instructions+=2;NFSU2_TR(0x431780);
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
B431782:{NFSU2_TR(0x431782);
if(r1(R+518)){{goto L431788;}}
}
B431784:L431784:{c.instructions+=2;NFSU2_TR(0x431784);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B431787:{NFSU2_TR(0x431787);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B431788:L431788:{c.instructions+=2;NFSU2_TR(0x431788);
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
B43178a:{NFSU2_TR(0x43178a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B431790:L431790:{c.instructions+=3;NFSU2_TR(0x431790);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B431794:{NFSU2_TR(0x431794);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B431797:{NFSU2_TR(0x431797);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4317a0:L4317a0:{c.instructions+=3;NFSU2_TR(0x4317a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4317a3:{NFSU2_TR(0x4317a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4317a6:{NFSU2_TR(0x4317a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4317b0:L4317b0:{c.instructions+=5;NFSU2_TR(0x4317b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4317b3:{NFSU2_TR(0x4317b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4317b6:{NFSU2_TR(0x4317b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4317ba:{NFSU2_TR(0x4317ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4317bd:{NFSU2_TR(0x4317bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4317c0:L4317c0:{c.instructions+=5;NFSU2_TR(0x4317c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4317c3:{NFSU2_TR(0x4317c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4317c6:{NFSU2_TR(0x4317c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4317ca:{NFSU2_TR(0x4317ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4317cd:{NFSU2_TR(0x4317cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4317d0:L4317d0:{c.instructions+=6;NFSU2_TR(0x4317d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4317d4:{NFSU2_TR(0x4317d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4317d5:{NFSU2_TR(0x4317d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4317d8:{NFSU2_TR(0x4317d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4317d9:{NFSU2_TR(0x4317d9);
__builtin_memmove((R+4),(R+24),4);
}
B4317db:{NFSU2_TR(0x4317db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4317e0ull));
TAIL_STATIC(0x6e2c10u,6e2);
}
B4317e0:L4317e0:{c.instructions+=2;NFSU2_TR(0x4317e0);
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
B4317e3:{NFSU2_TR(0x4317e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4317eb;}}
}
B4317e5:L4317e5:{c.instructions+=3;NFSU2_TR(0x4317e5);
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
B4317e7:{NFSU2_TR(0x4317e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4317e8:{NFSU2_TR(0x4317e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4317eb:L4317eb:{c.instructions+=4;NFSU2_TR(0x4317eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4317ee:{NFSU2_TR(0x4317ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4317f1:{NFSU2_TR(0x4317f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4317f2:{NFSU2_TR(0x4317f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B431800:L431800:{c.instructions+=2;NFSU2_TR(0x431800);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B431803:{NFSU2_TR(0x431803);
TAIL_STATIC(0x6e2c10u,6e2);
}
B431810:L431810:{c.instructions+=3;NFSU2_TR(0x431810);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B431813:{NFSU2_TR(0x431813);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B431816:{NFSU2_TR(0x431816);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B431820:L431820:{c.instructions+=5;NFSU2_TR(0x431820);
u8 U[9];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
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
B431825:{NFSU2_TR(0x431825);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431826:{NFSU2_TR(0x431826);
__builtin_memmove((R+24),(R+4),4);
}
B431828:{NFSU2_TR(0x431828);
u8 U[4];
w4(U+0,u32(0x786098ull));
s4(u32(r4(R+24)),r4(U+0));
}
B43182e:{NFSU2_TR(0x43182e);
if(r1(R+518)){{goto L431839;}}
}
B431830:L431830:{c.instructions+=2;NFSU2_TR(0x431830);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431831:{NFSU2_TR(0x431831);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x431836ull));
TAIL_STATIC(0x575630u,575);
}
B431836:L431836:{c.instructions+=1;NFSU2_TR(0x431836);
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
B431839:L431839:{c.instructions+=3;NFSU2_TR(0x431839);
__builtin_memmove((R+0),(R+24),4);
}
B43183b:{NFSU2_TR(0x43183b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43183c:{NFSU2_TR(0x43183c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B431840:L431840:{c.instructions+=2;NFSU2_TR(0x431840);
u8 U[4];
w4(U+0,u32(0x42fb40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431845:{NFSU2_TR(0x431845);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43184aull));
TAIL_STATIC(0x6d81d0u,6d8);
}
B43184a:L43184a:{c.instructions+=2;NFSU2_TR(0x43184a);
u8 U[4];
w4(U+0,u32(0x42fb50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43184f:{NFSU2_TR(0x43184f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x431854ull));
TAIL_STATIC(0x6d81e0u,6d8);
}
B431854:L431854:{c.instructions+=3;NFSU2_TR(0x431854);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431856:{NFSU2_TR(0x431856);
u8 U[4];
w4(U+0,u32(0x19000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43185b:{NFSU2_TR(0x43185b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x431860ull));
TAIL_STATIC(0x6e1b30u,6e1);
}
B431860:L431860:{c.instructions+=2;NFSU2_TR(0x431860);
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
B431863:{NFSU2_TR(0x431863);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B431870:L431870:{c.instructions+=3;NFSU2_TR(0x431870);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B431874:{NFSU2_TR(0x431874);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x80037050ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B43187a:{NFSU2_TR(0x43187a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4318c4;}}
}
B43187c:L43187c:{c.instructions+=5;NFSU2_TR(0x43187c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43187f:{NFSU2_TR(0x43187f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B431882:{NFSU2_TR(0x431882);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B431886:{NFSU2_TR(0x431886);
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
B431888:{NFSU2_TR(0x431888);
if(r1(R+518)){{goto L4318be;}}
}
B43188a:L43188a:{c.instructions+=1;NFSU2_TR(0x43188a);
__builtin_memmove((R+12),(R+12),4);
}
B431890:L431890:{c.instructions+=3;NFSU2_TR(0x431890);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B431892:{NFSU2_TR(0x431892);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x37060ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B431898:{NFSU2_TR(0x431898);
if(r1(R+518)){{goto L4318aa;}}
}
B43189a:L43189a:{c.instructions+=2;NFSU2_TR(0x43189a);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x10ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B43189d:{NFSU2_TR(0x43189d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4318b3;}}
}
B43189f:L43189f:{c.instructions+=3;NFSU2_TR(0x43189f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4318a2:{NFSU2_TR(0x4318a2);
__builtin_memmove(gp(0x827ad4),(R+4),4);
}
B4318a8:{NFSU2_TR(0x4318a8);
{goto L4318b3;}
}
B4318aa:L4318aa:{c.instructions+=2;NFSU2_TR(0x4318aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4318ad:{NFSU2_TR(0x4318ad);
__builtin_memmove(gp(0x827ad8),(R+4),4);
}
B4318b3:L4318b3:{c.instructions+=4;NFSU2_TR(0x4318b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4318b6:{NFSU2_TR(0x4318b6);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B4318ba:{NFSU2_TR(0x4318ba);
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
B4318bc:{NFSU2_TR(0x4318bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x431890u);}goto L431890;}}
}
B4318be:L4318be:{c.instructions+=2;NFSU2_TR(0x4318be);
w4(R+0,u32(0x1ull));
}
B4318c3:{NFSU2_TR(0x4318c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4318c4:L4318c4:{c.instructions+=2;NFSU2_TR(0x4318c4);
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
B4318c6:{NFSU2_TR(0x4318c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4318d0:L4318d0:{c.instructions+=3;NFSU2_TR(0x4318d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4318d4:{NFSU2_TR(0x4318d4);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x80037050ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4318da:{NFSU2_TR(0x4318da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43191f;}}
}
B4318dc:L4318dc:{c.instructions+=5;NFSU2_TR(0x4318dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4318df:{NFSU2_TR(0x4318df);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4318e2:{NFSU2_TR(0x4318e2);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B4318e6:{NFSU2_TR(0x4318e6);
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
B4318e8:{NFSU2_TR(0x4318e8);
if(r1(R+518)){{goto L431919;}}
}
B4318ea:L4318ea:{c.instructions+=3;NFSU2_TR(0x4318ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4318eb:{NFSU2_TR(0x4318eb);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4318ed:{NFSU2_TR(0x4318ed);
__builtin_memmove((R+4),(R+4),4);
}
B4318f0:L4318f0:{c.instructions+=3;NFSU2_TR(0x4318f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4318f2:{NFSU2_TR(0x4318f2);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x37060ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B4318f8:{NFSU2_TR(0x4318f8);
if(r1(R+518)){{goto L431907;}}
}
B4318fa:L4318fa:{c.instructions+=2;NFSU2_TR(0x4318fa);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x10ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B4318fd:{NFSU2_TR(0x4318fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43190d;}}
}
B4318ff:L4318ff:{c.instructions+=2;NFSU2_TR(0x4318ff);
__builtin_memmove(gp(0x827ad4),(R+24),4);
}
B431905:{NFSU2_TR(0x431905);
{goto L43190d;}
}
B431907:L431907:{c.instructions+=1;NFSU2_TR(0x431907);
__builtin_memmove(gp(0x827ad8),(R+24),4);
}
B43190d:L43190d:{c.instructions+=4;NFSU2_TR(0x43190d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B431910:{NFSU2_TR(0x431910);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B431914:{NFSU2_TR(0x431914);
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
B431916:{NFSU2_TR(0x431916);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4318f0u);}goto L4318f0;}}
}
B431918:L431918:{c.instructions+=1;NFSU2_TR(0x431918);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B431919:L431919:{c.instructions+=2;NFSU2_TR(0x431919);
w4(R+0,u32(0x1ull));
}
B43191e:{NFSU2_TR(0x43191e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43191f:L43191f:{c.instructions+=2;NFSU2_TR(0x43191f);
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
B431921:{NFSU2_TR(0x431921);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B431930:L431930:{c.instructions+=4;NFSU2_TR(0x431930);
__builtin_memmove((R+0),gp(0x865020),4);
}
B431935:{NFSU2_TR(0x431935);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B431937:{NFSU2_TR(0x431937);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431939:{NFSU2_TR(0x431939);
if(r1(R+518)){{goto L43193e;}}
}
B43193b:L43193b:{c.instructions+=2;NFSU2_TR(0x43193b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43193c:{NFSU2_TR(0x43193c);
{goto L431955;}
}
B43193e:L43193e:{c.instructions+=3;NFSU2_TR(0x43193e);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B431942:{NFSU2_TR(0x431942);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B431944:{NFSU2_TR(0x431944);
if(r1(R+518)){{goto L43194e;}}
}
B431946:L431946:{c.instructions+=3;NFSU2_TR(0x431946);
__builtin_memmove((R+0),gp(0x827edc),4);
}
B43194b:{NFSU2_TR(0x43194b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43194c:{NFSU2_TR(0x43194c);
{goto L431955;}
}
B43194e:L43194e:{c.instructions+=2;NFSU2_TR(0x43194e);
__builtin_memmove((R+4),gp(0x827ee4),4);
}
B431954:{NFSU2_TR(0x431954);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431955:L431955:{c.instructions+=1;NFSU2_TR(0x431955);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43195aull));
TAIL_STATIC(0x5d8620u,5d8);
}
B43195a:L43195a:{c.instructions+=3;NFSU2_TR(0x43195a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B43195d:{NFSU2_TR(0x43195d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43195f:{NFSU2_TR(0x43195f);
if(r1(R+518)){{goto L431982;}}
}
B431961:L431961:{c.instructions+=11;NFSU2_TR(0x431961);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B431964:{NFSU2_TR(0x431964);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B431968:{NFSU2_TR(0x431968);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B43196a:{NFSU2_TR(0x43196a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43196d:{NFSU2_TR(0x43196d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B431970:{NFSU2_TR(0x431970);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B431974:{NFSU2_TR(0x431974);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B431978:{NFSU2_TR(0x431978);
u8 U[4];
w1(R+512,u8((r2(R+0))<(u16(0x4000ull))));
w1(R+523,sborrow<u16>(r2(R+0),u16(0x4000ull)));
w2(R+0,u16(u32(r2(R+0))-u32(u16(0x4000ull))));
w1(R+519,u8(s16(r2(R+0))<s16(u16(0x0ull))));
w1(R+518,u8((r2(R+0))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(R+0))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B43197c:{NFSU2_TR(0x43197c);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+4)),r2(U+0));
}
B43197f:{NFSU2_TR(0x43197f);
w1(R+0,u8(0x1ull));
}
B431981:{NFSU2_TR(0x431981);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B431982:L431982:{c.instructions+=2;NFSU2_TR(0x431982);
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
B431984:{NFSU2_TR(0x431984);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B431990:L431990:{c.instructions+=15;NFSU2_TR(0x431990);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431991:{NFSU2_TR(0x431991);
__builtin_memmove((R+20),(R+16),4);
}
B431993:{NFSU2_TR(0x431993);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B431996:{NFSU2_TR(0x431996);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431998:{NFSU2_TR(0x431998);
u8 U[4];
w4(U+0,u32(0x771c26ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43199d:{NFSU2_TR(0x43199d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4319a3:{NFSU2_TR(0x4319a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4319a4:{NFSU2_TR(0x4319a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4319ab:{NFSU2_TR(0x4319ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x3f8ull))));
}
B4319b1:{NFSU2_TR(0x4319b1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4319b2:{NFSU2_TR(0x4319b2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4319b3:{NFSU2_TR(0x4319b3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4319b4:{NFSU2_TR(0x4319b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4319b7:{NFSU2_TR(0x4319b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4319b8:{NFSU2_TR(0x4319b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4319bdull));
TAIL_STATIC(0x43c780u,43c);
}
B4319bd:L4319bd:{c.instructions+=3;NFSU2_TR(0x4319bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4319c0:{NFSU2_TR(0x4319c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4319c1:{NFSU2_TR(0x4319c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4319c6ull));
TAIL_STATIC(0x43c780u,43c);
}
B4319c6:L4319c6:{c.instructions+=3;NFSU2_TR(0x4319c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4319c9:{NFSU2_TR(0x4319c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4319ca:{NFSU2_TR(0x4319ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4319cfull));
TAIL_STATIC(0x43c780u,43c);
}
B4319cf:L4319cf:{c.instructions+=10;NFSU2_TR(0x4319cf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4319d2:{NFSU2_TR(0x4319d2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4319d5:{NFSU2_TR(0x4319d5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4319d7:{NFSU2_TR(0x4319d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4319df:{NFSU2_TR(0x4319df);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4319e7:{NFSU2_TR(0x4319e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4319ef:{NFSU2_TR(0x4319ef);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4319f7:{NFSU2_TR(0x4319f7);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4319fb:{NFSU2_TR(0x4319fb);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4319ff:{NFSU2_TR(0x4319ff);
if(r1(R+518)){{goto L431a28;}}
}
B431a01:L431a01:{c.instructions+=5;NFSU2_TR(0x431a01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B431a04:{NFSU2_TR(0x431a04);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431a05:{NFSU2_TR(0x431a05);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431a06:{NFSU2_TR(0x431a06);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431a07:{NFSU2_TR(0x431a07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x431a0cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x431930u);}goto L431930;}
}
B431a0c:L431a0c:{c.instructions+=3;NFSU2_TR(0x431a0c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B431a0f:{NFSU2_TR(0x431a0f);
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
B431a11:{NFSU2_TR(0x431a11);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L431a4f;}}
}
B431a13:L431a13:{c.instructions+=8;NFSU2_TR(0x431a13);
u8 U[8];
w4(U+0,u32(u32(u32(0x404ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B431a1a:{NFSU2_TR(0x431a1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B431a21:{NFSU2_TR(0x431a21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B431a22:{NFSU2_TR(0x431a22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B431a23:{NFSU2_TR(0x431a23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B431a24:{NFSU2_TR(0x431a24);
__builtin_memmove((R+16),(R+20),4);
}
B431a26:{NFSU2_TR(0x431a26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B431a27:{NFSU2_TR(0x431a27);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B431a28:L431a28:{c.instructions+=5;NFSU2_TR(0x431a28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B431a2b:{NFSU2_TR(0x431a2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431a2c:{NFSU2_TR(0x431a2c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431a2d:{NFSU2_TR(0x431a2d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431a2e:{NFSU2_TR(0x431a2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x431a33ull));
TAIL_STATIC(0x42fc60u,42f);
}
B431a33:L431a33:{c.instructions+=3;NFSU2_TR(0x431a33);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B431a36:{NFSU2_TR(0x431a36);
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
B431a38:{NFSU2_TR(0x431a38);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L431a4f;}}
}
B431a3a:L431a3a:{c.instructions+=8;NFSU2_TR(0x431a3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x404ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B431a41:{NFSU2_TR(0x431a41);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B431a48:{NFSU2_TR(0x431a48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B431a49:{NFSU2_TR(0x431a49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B431a4a:{NFSU2_TR(0x431a4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B431a4b:{NFSU2_TR(0x431a4b);
__builtin_memmove((R+16),(R+20),4);
}
B431a4d:{NFSU2_TR(0x431a4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B431a4e:{NFSU2_TR(0x431a4e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B431a4f:L431a4f:{c.instructions+=2;NFSU2_TR(0x431a4f);
u8 U[4];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B431a56:{NFSU2_TR(0x431a56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x431a5bull));
TAIL_STATIC(0x5e0b40u,5e0);
}
B431a5b:L431a5b:{c.instructions+=8;NFSU2_TR(0x431a5b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431a5d:{NFSU2_TR(0x431a5d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431a5f:{NFSU2_TR(0x431a5f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431a61:{NFSU2_TR(0x431a61);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B431a65:{NFSU2_TR(0x431a65);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431a66:{NFSU2_TR(0x431a66);
u8 U[4];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B431a6d:{NFSU2_TR(0x431a6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x41cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B431a78:{NFSU2_TR(0x431a78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x431a7dull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B431a7d:L431a7d:{c.instructions+=5;NFSU2_TR(0x431a7d);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B431a81:{NFSU2_TR(0x431a81);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B431a85:{NFSU2_TR(0x431a85);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431a86:{NFSU2_TR(0x431a86);
u8 U[4];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B431a8d:{NFSU2_TR(0x431a8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x431a92ull));
TAIL_STATIC(0x5ded90u,5de);
}
B431a92:L431a92:{c.instructions+=6;NFSU2_TR(0x431a92);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B431a99:{NFSU2_TR(0x431a99);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B431aa0:{NFSU2_TR(0x431aa0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431aa1:{NFSU2_TR(0x431aa1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431aa2:{NFSU2_TR(0x431aa2);
u8 U[5];
w4(U+0,u32(u32(u32(0x414ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B431aaa:{NFSU2_TR(0x431aaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x431aafull));
TAIL_STATIC(0x43e6d0u,43e);
}
B431aaf:L431aaf:{c.instructions+=4;NFSU2_TR(0x431aaf);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B431ab3:{NFSU2_TR(0x431ab3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431ab4:{NFSU2_TR(0x431ab4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431ab5:{NFSU2_TR(0x431ab5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x431abaull));
TAIL_STATIC(0x5baf30u,5ba);
}
B431aba:L431aba:{c.instructions+=3;NFSU2_TR(0x431aba);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B431abe:{NFSU2_TR(0x431abe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431abf:{NFSU2_TR(0x431abf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x431ac4ull));
TAIL_STATIC(0x43c780u,43c);
}
B431ac4:L431ac4:{c.instructions+=7;NFSU2_TR(0x431ac4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B431ac7:{NFSU2_TR(0x431ac7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B431aca:{NFSU2_TR(0x431aca);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B431acc:{NFSU2_TR(0x431acc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B431ad0:{NFSU2_TR(0x431ad0);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B431ad4:{NFSU2_TR(0x431ad4);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B431ad8:{NFSU2_TR(0x431ad8);
if(r1(R+518)){{goto L431ae1;}}
}
B431ada:L431ada:{c.instructions+=2;NFSU2_TR(0x431ada);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffc000ull))));
}
B431adf:{NFSU2_TR(0x431adf);
{goto L431ae6;}
}
B431ae1:L431ae1:{c.instructions+=1;NFSU2_TR(0x431ae1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4000ull))));
}
B431ae6:L431ae6:{c.instructions+=4;NFSU2_TR(0x431ae6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431ae7:{NFSU2_TR(0x431ae7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431ae8:{NFSU2_TR(0x431ae8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431ae9:{NFSU2_TR(0x431ae9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x431aeeull));
TAIL_STATIC(0x5bae60u,5ba);
}
B431aee:L431aee:{c.instructions+=5;NFSU2_TR(0x431aee);
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
B431af1:{NFSU2_TR(0x431af1);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B431af5:{NFSU2_TR(0x431af5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431af6:{NFSU2_TR(0x431af6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431af7:{NFSU2_TR(0x431af7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x431afcull));
TAIL_STATIC(0x4012b0u,401);
}
B431afc:L431afc:{c.instructions+=196;NFSU2_TR(0x431afc);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431b00:{NFSU2_TR(0x431b00);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431b03:{NFSU2_TR(0x431b03);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431b07:{NFSU2_TR(0x431b07);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431b0a:{NFSU2_TR(0x431b0a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431b0c:{NFSU2_TR(0x431b0c);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431b10:{NFSU2_TR(0x431b10);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431b13:{NFSU2_TR(0x431b13);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431b15:{NFSU2_TR(0x431b15);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431b19:{NFSU2_TR(0x431b19);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431b1b:{NFSU2_TR(0x431b1b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431b1d:{NFSU2_TR(0x431b1d);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B431b21:{NFSU2_TR(0x431b21);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431b25:{NFSU2_TR(0x431b25);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431b28:{NFSU2_TR(0x431b28);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431b2c:{NFSU2_TR(0x431b2c);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431b2f:{NFSU2_TR(0x431b2f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431b31:{NFSU2_TR(0x431b31);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431b35:{NFSU2_TR(0x431b35);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431b38:{NFSU2_TR(0x431b38);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431b3a:{NFSU2_TR(0x431b3a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431b3e:{NFSU2_TR(0x431b3e);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431b41:{NFSU2_TR(0x431b41);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431b43:{NFSU2_TR(0x431b43);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B431b47:{NFSU2_TR(0x431b47);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431b4b:{NFSU2_TR(0x431b4b);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431b4e:{NFSU2_TR(0x431b4e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431b52:{NFSU2_TR(0x431b52);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431b55:{NFSU2_TR(0x431b55);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431b57:{NFSU2_TR(0x431b57);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431b5b:{NFSU2_TR(0x431b5b);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431b5e:{NFSU2_TR(0x431b5e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431b60:{NFSU2_TR(0x431b60);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431b64:{NFSU2_TR(0x431b64);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431b67:{NFSU2_TR(0x431b67);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431b69:{NFSU2_TR(0x431b69);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B431b6d:{NFSU2_TR(0x431b6d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431b71:{NFSU2_TR(0x431b71);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431b74:{NFSU2_TR(0x431b74);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431b78:{NFSU2_TR(0x431b78);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431b7b:{NFSU2_TR(0x431b7b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431b7d:{NFSU2_TR(0x431b7d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431b81:{NFSU2_TR(0x431b81);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431b84:{NFSU2_TR(0x431b84);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431b86:{NFSU2_TR(0x431b86);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431b8a:{NFSU2_TR(0x431b8a);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431b8d:{NFSU2_TR(0x431b8d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431b8f:{NFSU2_TR(0x431b8f);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B431b93:{NFSU2_TR(0x431b93);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431b97:{NFSU2_TR(0x431b97);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431b9a:{NFSU2_TR(0x431b9a);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431b9e:{NFSU2_TR(0x431b9e);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431ba1:{NFSU2_TR(0x431ba1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431ba3:{NFSU2_TR(0x431ba3);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431ba7:{NFSU2_TR(0x431ba7);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431baa:{NFSU2_TR(0x431baa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431bac:{NFSU2_TR(0x431bac);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431bb0:{NFSU2_TR(0x431bb0);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431bb2:{NFSU2_TR(0x431bb2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431bb4:{NFSU2_TR(0x431bb4);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B431bb8:{NFSU2_TR(0x431bb8);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431bbc:{NFSU2_TR(0x431bbc);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431bbf:{NFSU2_TR(0x431bbf);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431bc3:{NFSU2_TR(0x431bc3);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431bc6:{NFSU2_TR(0x431bc6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431bc8:{NFSU2_TR(0x431bc8);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431bcc:{NFSU2_TR(0x431bcc);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431bcf:{NFSU2_TR(0x431bcf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431bd1:{NFSU2_TR(0x431bd1);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431bd5:{NFSU2_TR(0x431bd5);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431bd8:{NFSU2_TR(0x431bd8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431bda:{NFSU2_TR(0x431bda);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B431bde:{NFSU2_TR(0x431bde);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431be2:{NFSU2_TR(0x431be2);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431be5:{NFSU2_TR(0x431be5);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431be9:{NFSU2_TR(0x431be9);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431bec:{NFSU2_TR(0x431bec);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431bee:{NFSU2_TR(0x431bee);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431bf2:{NFSU2_TR(0x431bf2);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431bf5:{NFSU2_TR(0x431bf5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431bf7:{NFSU2_TR(0x431bf7);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431bfb:{NFSU2_TR(0x431bfb);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431bfe:{NFSU2_TR(0x431bfe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431c00:{NFSU2_TR(0x431c00);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B431c07:{NFSU2_TR(0x431c07);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431c0b:{NFSU2_TR(0x431c0b);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431c0e:{NFSU2_TR(0x431c0e);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431c12:{NFSU2_TR(0x431c12);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431c15:{NFSU2_TR(0x431c15);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431c17:{NFSU2_TR(0x431c17);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431c1b:{NFSU2_TR(0x431c1b);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431c1e:{NFSU2_TR(0x431c1e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431c20:{NFSU2_TR(0x431c20);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431c24:{NFSU2_TR(0x431c24);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431c27:{NFSU2_TR(0x431c27);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431c29:{NFSU2_TR(0x431c29);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B431c30:{NFSU2_TR(0x431c30);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431c34:{NFSU2_TR(0x431c34);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431c37:{NFSU2_TR(0x431c37);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431c3b:{NFSU2_TR(0x431c3b);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431c3e:{NFSU2_TR(0x431c3e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431c40:{NFSU2_TR(0x431c40);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431c44:{NFSU2_TR(0x431c44);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431c47:{NFSU2_TR(0x431c47);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431c49:{NFSU2_TR(0x431c49);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431c4d:{NFSU2_TR(0x431c4d);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431c4f:{NFSU2_TR(0x431c4f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431c51:{NFSU2_TR(0x431c51);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B431c58:{NFSU2_TR(0x431c58);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431c5c:{NFSU2_TR(0x431c5c);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431c5f:{NFSU2_TR(0x431c5f);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431c63:{NFSU2_TR(0x431c63);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431c66:{NFSU2_TR(0x431c66);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431c68:{NFSU2_TR(0x431c68);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431c6c:{NFSU2_TR(0x431c6c);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431c6f:{NFSU2_TR(0x431c6f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431c71:{NFSU2_TR(0x431c71);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431c75:{NFSU2_TR(0x431c75);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431c78:{NFSU2_TR(0x431c78);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431c7a:{NFSU2_TR(0x431c7a);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B431c81:{NFSU2_TR(0x431c81);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431c85:{NFSU2_TR(0x431c85);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431c88:{NFSU2_TR(0x431c88);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431c8c:{NFSU2_TR(0x431c8c);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431c8f:{NFSU2_TR(0x431c8f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431c91:{NFSU2_TR(0x431c91);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431c95:{NFSU2_TR(0x431c95);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431c98:{NFSU2_TR(0x431c98);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431c9a:{NFSU2_TR(0x431c9a);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431c9e:{NFSU2_TR(0x431c9e);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431ca1:{NFSU2_TR(0x431ca1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431ca3:{NFSU2_TR(0x431ca3);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B431caa:{NFSU2_TR(0x431caa);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431cae:{NFSU2_TR(0x431cae);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431cb1:{NFSU2_TR(0x431cb1);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431cb5:{NFSU2_TR(0x431cb5);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431cb8:{NFSU2_TR(0x431cb8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431cba:{NFSU2_TR(0x431cba);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431cbe:{NFSU2_TR(0x431cbe);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431cc1:{NFSU2_TR(0x431cc1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431cc3:{NFSU2_TR(0x431cc3);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431cc7:{NFSU2_TR(0x431cc7);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431cca:{NFSU2_TR(0x431cca);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431ccc:{NFSU2_TR(0x431ccc);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B431cd3:{NFSU2_TR(0x431cd3);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431cd7:{NFSU2_TR(0x431cd7);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431cda:{NFSU2_TR(0x431cda);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431cde:{NFSU2_TR(0x431cde);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431ce1:{NFSU2_TR(0x431ce1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431ce3:{NFSU2_TR(0x431ce3);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431ce7:{NFSU2_TR(0x431ce7);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431cea:{NFSU2_TR(0x431cea);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431cec:{NFSU2_TR(0x431cec);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431cf0:{NFSU2_TR(0x431cf0);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431cf2:{NFSU2_TR(0x431cf2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431cf4:{NFSU2_TR(0x431cf4);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B431cfb:{NFSU2_TR(0x431cfb);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431cff:{NFSU2_TR(0x431cff);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431d02:{NFSU2_TR(0x431d02);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431d06:{NFSU2_TR(0x431d06);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431d09:{NFSU2_TR(0x431d09);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431d0b:{NFSU2_TR(0x431d0b);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431d0f:{NFSU2_TR(0x431d0f);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431d12:{NFSU2_TR(0x431d12);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431d14:{NFSU2_TR(0x431d14);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431d18:{NFSU2_TR(0x431d18);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431d1b:{NFSU2_TR(0x431d1b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431d1d:{NFSU2_TR(0x431d1d);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B431d24:{NFSU2_TR(0x431d24);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431d28:{NFSU2_TR(0x431d28);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431d2b:{NFSU2_TR(0x431d2b);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431d2f:{NFSU2_TR(0x431d2f);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431d32:{NFSU2_TR(0x431d32);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431d34:{NFSU2_TR(0x431d34);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431d38:{NFSU2_TR(0x431d38);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431d3b:{NFSU2_TR(0x431d3b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431d3d:{NFSU2_TR(0x431d3d);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B431d41:{NFSU2_TR(0x431d41);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431d45:{NFSU2_TR(0x431d45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431d46:{NFSU2_TR(0x431d46);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431d49:{NFSU2_TR(0x431d49);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431d4a:{NFSU2_TR(0x431d4a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431d4c:{NFSU2_TR(0x431d4c);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B431d53:{NFSU2_TR(0x431d53);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431d57:{NFSU2_TR(0x431d57);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431d5a:{NFSU2_TR(0x431d5a);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431d5e:{NFSU2_TR(0x431d5e);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431d61:{NFSU2_TR(0x431d61);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431d63:{NFSU2_TR(0x431d63);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431d67:{NFSU2_TR(0x431d67);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431d6a:{NFSU2_TR(0x431d6a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431d6c:{NFSU2_TR(0x431d6c);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B431d70:{NFSU2_TR(0x431d70);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B431d73:{NFSU2_TR(0x431d73);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B431d75:{NFSU2_TR(0x431d75);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B431d7c:{NFSU2_TR(0x431d7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x431d81ull));
TAIL_STATIC(0x4012b0u,401);
}
B431d81:L431d81:{c.instructions+=4;NFSU2_TR(0x431d81);
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
B431d84:{NFSU2_TR(0x431d84);
u8 U[4];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B431d8b:{NFSU2_TR(0x431d8b);
u8 U[5];
w4(U+0,u32(u32(u32(0x40cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B431d93:{NFSU2_TR(0x431d93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x431d98ull));
TAIL_STATIC(0x4022c0u,402);
}
B431d98:L431d98:{c.instructions+=3;NFSU2_TR(0x431d98);
u8 U[4];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B431d9f:{NFSU2_TR(0x431d9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x40cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B431daa:{NFSU2_TR(0x431daa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x431dafull));
TAIL_STATIC(0x5e0bf0u,5e0);
}
B431daf:L431daf:{c.instructions+=9;NFSU2_TR(0x431daf);
u8 U[8];
w4(U+0,u32(u32(u32(0x404ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B431db6:{NFSU2_TR(0x431db6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B431db7:{NFSU2_TR(0x431db7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B431db8:{NFSU2_TR(0x431db8);
w1(R+0,u8(0x1ull));
}
B431dba:{NFSU2_TR(0x431dba);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B431dc1:{NFSU2_TR(0x431dc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B431dc2:{NFSU2_TR(0x431dc2);
__builtin_memmove((R+16),(R+20),4);
}
B431dc4:{NFSU2_TR(0x431dc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B431dc5:{NFSU2_TR(0x431dc5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B431dd0:L431dd0:{c.instructions+=3;NFSU2_TR(0x431dd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B431dd3:{NFSU2_TR(0x431dd3);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B431dd7:{NFSU2_TR(0x431dd7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L431de9;}}
}
B431dd9:L431dd9:{c.instructions+=3;NFSU2_TR(0x431dd9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B431ddf:{NFSU2_TR(0x431ddf);
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
B431de1:{NFSU2_TR(0x431de1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L431de9;}}
}
B431de3:L431de3:{c.instructions+=2;NFSU2_TR(0x431de3);
w4(R+0,u32(0x1ull));
}
B431de8:{NFSU2_TR(0x431de8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B431de9:L431de9:{c.instructions+=2;NFSU2_TR(0x431de9);
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
B431deb:{NFSU2_TR(0x431deb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B431df0:L431df0:{c.instructions+=17;NFSU2_TR(0x431df0);
__builtin_memmove((R+0),gp(0x890118),4);
}
B431df5:{NFSU2_TR(0x431df5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431df6:{NFSU2_TR(0x431df6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431df7:{NFSU2_TR(0x431df7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431df8:{NFSU2_TR(0x431df8);
__builtin_memmove((R+24),(R+4),4);
}
B431dfa:{NFSU2_TR(0x431dfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B431dfd:{NFSU2_TR(0x431dfd);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B431dff:{NFSU2_TR(0x431dff);
__builtin_memmove((R+0),(R+4),4);
}
B431e01:{NFSU2_TR(0x431e01);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B431e03:{NFSU2_TR(0x431e03);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B431e05:{NFSU2_TR(0x431e05);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431e06:{NFSU2_TR(0x431e06);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B431e08:{NFSU2_TR(0x431e08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B431e0b:{NFSU2_TR(0x431e0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B431e0e:{NFSU2_TR(0x431e0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B431e11:{NFSU2_TR(0x431e11);
w4(R+12,u32(0x1ull));
}
B431e16:{NFSU2_TR(0x431e16);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L431e55;}}
}
B431e18:L431e18:{c.instructions+=2;NFSU2_TR(0x431e18);
w4(R+28,u32(0x1cull));
}
B431e1d:{NFSU2_TR(0x431e1d);
__builtin_memmove((R+4),(R+4),4);
}
B431e20:L431e20:{c.instructions+=5;NFSU2_TR(0x431e20);
__builtin_memmove((R+0),gp(0x890080),4);
}
B431e25:{NFSU2_TR(0x431e25);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B431e28:{NFSU2_TR(0x431e28);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B431e2b:{NFSU2_TR(0x431e2b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B431e2e:{NFSU2_TR(0x431e2e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L431e42;}}
}
B431e30:L431e30:{c.instructions+=8;NFSU2_TR(0x431e30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B431e33:{NFSU2_TR(0x431e33);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B431e35:{NFSU2_TR(0x431e35);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B431e38:{NFSU2_TR(0x431e38);
__builtin_memmove((R+0),(R+12),4);
}
B431e3a:{NFSU2_TR(0x431e3a);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B431e3b:{NFSU2_TR(0x431e3b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B431e3d:{NFSU2_TR(0x431e3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B431e40:{NFSU2_TR(0x431e40);
{goto L431e4b;}
}
B431e42:L431e42:{c.instructions+=4;NFSU2_TR(0x431e42);
__builtin_memmove((R+4),(R+8),4);
}
B431e44:{NFSU2_TR(0x431e44);
__builtin_memmove((R+0),(R+12),4);
}
B431e46:{NFSU2_TR(0x431e46);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B431e48:{NFSU2_TR(0x431e48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B431e4b:L431e4b:{c.instructions+=5;NFSU2_TR(0x431e4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B431e4d:{NFSU2_TR(0x431e4d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B431e4e:{NFSU2_TR(0x431e4e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B431e51:{NFSU2_TR(0x431e51);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B431e53:{NFSU2_TR(0x431e53);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x431e20u);}goto L431e20;}}
}
B431e55:L431e55:{c.instructions+=7;NFSU2_TR(0x431e55);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B431e59:{NFSU2_TR(0x431e59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B431e5c:{NFSU2_TR(0x431e5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B431e5f:{NFSU2_TR(0x431e5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B431e62:{NFSU2_TR(0x431e62);
__builtin_memmove((R+0),gp(0x89e7a0),4);
}
B431e67:{NFSU2_TR(0x431e67);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x104eull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x104eull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x104eull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B431e6c:{NFSU2_TR(0x431e6c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L431e8f;}}
}
B431e6e:L431e6e:{c.instructions+=2;NFSU2_TR(0x431e6e);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x1053ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1053ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x1053ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B431e73:{NFSU2_TR(0x431e73);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L431e8f;}}
}
B431e75:L431e75:{c.instructions+=2;NFSU2_TR(0x431e75);
u8 U[14];
__builtin_memmove((U+6),gp(0x8900bc),4);
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
B431e7c:{NFSU2_TR(0x431e7c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L431e8f;}}
}
B431e7e:L431e7e:{c.instructions+=3;NFSU2_TR(0x431e7e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431e7f:{NFSU2_TR(0x431e7f);
w4(R+4,u32(0x864630ull));
}
B431e84:{NFSU2_TR(0x431e84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x431e89ull));
TAIL_STATIC(0x43be60u,43b);
}
B431e89:L431e89:{c.instructions+=3;NFSU2_TR(0x431e89);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B431e8c:{NFSU2_TR(0x431e8c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431e8d:{NFSU2_TR(0x431e8d);
{goto L431e98;}
}
B431e8f:L431e8f:{c.instructions+=3;NFSU2_TR(0x431e8f);
__builtin_memmove((R+0),gp(0x851044),4);
}
B431e94:{NFSU2_TR(0x431e94);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B431e97:{NFSU2_TR(0x431e97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431e98:L431e98:{c.instructions+=2;NFSU2_TR(0x431e98);
__builtin_memmove((R+4),gp(0x890080),4);
}
B431e9e:{NFSU2_TR(0x431e9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x431ea3ull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B431ea3:L431ea3:{c.instructions+=3;NFSU2_TR(0x431ea3);
w4(R+4,u32(0x89cf48ull));
}
B431ea8:{NFSU2_TR(0x431ea8);
__builtin_memmove((R+28),(R+0),4);
}
B431eaa:{NFSU2_TR(0x431eaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x431eafull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B431eaf:L431eaf:{c.instructions+=2;NFSU2_TR(0x431eaf);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B431eb1:{NFSU2_TR(0x431eb1);
if(r1(R+518)){{goto L431edd;}}
}
B431eb3:L431eb3:{c.instructions+=4;NFSU2_TR(0x431eb3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B431eb6:{NFSU2_TR(0x431eb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B431eb9:{NFSU2_TR(0x431eb9);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
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
B431ebc:{NFSU2_TR(0x431ebc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L431ed2;}}
}
B431ebe:L431ebe:{c.instructions+=3;NFSU2_TR(0x431ebe);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B431ec4:{NFSU2_TR(0x431ec4);
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
B431ec6:{NFSU2_TR(0x431ec6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L431ed2;}}
}
B431ec8:L431ec8:{c.instructions+=6;NFSU2_TR(0x431ec8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B431ec9:{NFSU2_TR(0x431ec9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B431ecc:{NFSU2_TR(0x431ecc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B431ecd:{NFSU2_TR(0x431ecd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B431ece:{NFSU2_TR(0x431ece);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B431ecf:{NFSU2_TR(0x431ecf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B431ed2:L431ed2:{c.instructions+=6;NFSU2_TR(0x431ed2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B431ed3:{NFSU2_TR(0x431ed3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B431ed7:{NFSU2_TR(0x431ed7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B431ed8:{NFSU2_TR(0x431ed8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B431ed9:{NFSU2_TR(0x431ed9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B431eda:{NFSU2_TR(0x431eda);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B431edd:L431edd:{c.instructions+=4;NFSU2_TR(0x431edd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B431ee1:{NFSU2_TR(0x431ee1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B431ee4:{NFSU2_TR(0x431ee4);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
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
B431ee7:{NFSU2_TR(0x431ee7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L431f04;}}
}
B431ee9:L431ee9:{c.instructions+=4;NFSU2_TR(0x431ee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B431eec:{NFSU2_TR(0x431eec);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B431eef:{NFSU2_TR(0x431eef);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B431ef1:{NFSU2_TR(0x431ef1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L431efd;}}
}
B431ef3:L431ef3:{c.instructions+=6;NFSU2_TR(0x431ef3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B431ef4:{NFSU2_TR(0x431ef4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1eull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B431ef7:{NFSU2_TR(0x431ef7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B431ef8:{NFSU2_TR(0x431ef8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B431ef9:{NFSU2_TR(0x431ef9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B431efa:{NFSU2_TR(0x431efa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B431efd:L431efd:{c.instructions+=2;NFSU2_TR(0x431efd);
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
B431eff:{NFSU2_TR(0x431eff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L431f04;}}
}
B431f01:L431f01:{c.instructions+=1;NFSU2_TR(0x431f01);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1full))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B431f04:L431f04:{c.instructions+=5;NFSU2_TR(0x431f04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B431f05:{NFSU2_TR(0x431f05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B431f06:{NFSU2_TR(0x431f06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B431f07:{NFSU2_TR(0x431f07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B431f08:{NFSU2_TR(0x431f08);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B431f10:L431f10:{c.instructions+=14;NFSU2_TR(0x431f10);
__builtin_memmove((R+0),gp(0x890118),4);
}
B431f15:{NFSU2_TR(0x431f15);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431f16:{NFSU2_TR(0x431f16);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431f17:{NFSU2_TR(0x431f17);
__builtin_memmove((R+24),(R+4),4);
}
B431f19:{NFSU2_TR(0x431f19);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B431f1c:{NFSU2_TR(0x431f1c);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B431f1e:{NFSU2_TR(0x431f1e);
__builtin_memmove((R+0),(R+4),4);
}
B431f20:{NFSU2_TR(0x431f20);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B431f22:{NFSU2_TR(0x431f22);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B431f24:{NFSU2_TR(0x431f24);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B431f26:{NFSU2_TR(0x431f26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B431f29:{NFSU2_TR(0x431f29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B431f2c:{NFSU2_TR(0x431f2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B431f2f:{NFSU2_TR(0x431f2f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L431f7d;}}
}
B431f31:L431f31:{c.instructions+=3;NFSU2_TR(0x431f31);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431f32:{NFSU2_TR(0x431f32);
w4(R+28,u32(0x1cull));
}
B431f37:{NFSU2_TR(0x431f37);
{goto L431f40;}
}
B431f40:L431f40:{c.instructions+=5;NFSU2_TR(0x431f40);
__builtin_memmove((R+0),gp(0x890080),4);
}
B431f45:{NFSU2_TR(0x431f45);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B431f48:{NFSU2_TR(0x431f48);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B431f4b:{NFSU2_TR(0x431f4b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B431f4f:{NFSU2_TR(0x431f4f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L431f66;}}
}
B431f51:L431f51:{c.instructions+=8;NFSU2_TR(0x431f51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B431f54:{NFSU2_TR(0x431f54);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B431f56:{NFSU2_TR(0x431f56);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B431f59:{NFSU2_TR(0x431f59);
w4(R+0,u32(0x1ull));
}
B431f5e:{NFSU2_TR(0x431f5e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B431f5f:{NFSU2_TR(0x431f5f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B431f61:{NFSU2_TR(0x431f61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B431f64:{NFSU2_TR(0x431f64);
{goto L431f72;}
}
B431f66:L431f66:{c.instructions+=4;NFSU2_TR(0x431f66);
__builtin_memmove((R+4),(R+8),4);
}
B431f68:{NFSU2_TR(0x431f68);
w4(R+0,u32(0x1ull));
}
B431f6d:{NFSU2_TR(0x431f6d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B431f6f:{NFSU2_TR(0x431f6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B431f72:L431f72:{c.instructions+=5;NFSU2_TR(0x431f72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B431f74:{NFSU2_TR(0x431f74);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B431f75:{NFSU2_TR(0x431f75);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B431f78:{NFSU2_TR(0x431f78);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B431f7a:{NFSU2_TR(0x431f7a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x431f40u);}goto L431f40;}}
}
B431f7c:L431f7c:{c.instructions+=1;NFSU2_TR(0x431f7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B431f7d:L431f7d:{c.instructions+=4;NFSU2_TR(0x431f7d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B431f81:{NFSU2_TR(0x431f81);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431f82:{NFSU2_TR(0x431f82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B431f85:{NFSU2_TR(0x431f85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x431f8aull));
TAIL_STATIC(0x5d3e40u,5d3);
}
B431f8a:L431f8a:{c.instructions+=8;NFSU2_TR(0x431f8a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B431f91:{NFSU2_TR(0x431f91);
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
B431f94:{NFSU2_TR(0x431f94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B431f97:{NFSU2_TR(0x431f97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B431f9a:{NFSU2_TR(0x431f9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B431f9d:{NFSU2_TR(0x431f9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B431f9e:{NFSU2_TR(0x431f9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B431f9f:{NFSU2_TR(0x431f9f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B431fb0:L431fb0:{c.instructions+=6;NFSU2_TR(0x431fb0);
__builtin_memmove((R+8),gp(0x827ed8),1);
}
B431fb6:{NFSU2_TR(0x431fb6);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B431fb8:{NFSU2_TR(0x431fb8);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B431fba:{NFSU2_TR(0x431fba);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B431fbe:{NFSU2_TR(0x431fbe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B431fbf:{NFSU2_TR(0x431fbf);
if(r1(R+518)){{goto L431fc7;}}
}
B431fc1:L431fc1:{c.instructions+=2;NFSU2_TR(0x431fc1);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B431fc5:{NFSU2_TR(0x431fc5);
{goto L431fd5;}
}
B431fc7:L431fc7:{c.instructions+=3;NFSU2_TR(0x431fc7);
__builtin_memmove((R+12),gp(0x827ee0),1);
}
B431fcd:{NFSU2_TR(0x431fcd);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B431fcf:{NFSU2_TR(0x431fcf);
if(r1(R+518)){{goto L431fd9;}}
}
B431fd1:L431fd1:{c.instructions+=1;NFSU2_TR(0x431fd1);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B431fd5:L431fd5:{c.instructions+=1;NFSU2_TR(0x431fd5);
if(r1(R+518)){{goto L431fd9;}}
}
B431fd7:L431fd7:{c.instructions+=1;NFSU2_TR(0x431fd7);
w1(R+0,u8(0x1ull));
}
B431fd9:L431fd9:{c.instructions+=3;NFSU2_TR(0x431fd9);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B431fdd:{NFSU2_TR(0x431fdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B431fde:{NFSU2_TR(0x431fde);
if(r1(R+518)){{goto L431ff1;}}
}
B431fe0:L431fe0:{c.instructions+=2;NFSU2_TR(0x431fe0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xfa0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B431fe6:{NFSU2_TR(0x431fe6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L431ff1;}}
}
B431fe8:L431fe8:{c.instructions+=2;NFSU2_TR(0x431fe8);
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
B431fea:{NFSU2_TR(0x431fea);
if(r1(R+518)){{goto L431ff1;}}
}
B431fec:L431fec:{c.instructions+=2;NFSU2_TR(0x431fec);
w1(R+0,u8(0x1ull));
}
B431fee:{NFSU2_TR(0x431fee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B431ff1:L431ff1:{c.instructions+=2;NFSU2_TR(0x431ff1);
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
B431ff3:{NFSU2_TR(0x431ff3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x431,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
