#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_414(u8* __restrict R,Cpu& c);
u32 body_438(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_44e(u8* __restrict R,Cpu& c);
u32 body_456(u8* __restrict R,Cpu& c);
u32 body_481(u8* __restrict R,Cpu& c);
u32 body_483(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_48d(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_494(u8* __restrict R,Cpu& c);
u32 body_4c1(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_526(u8* __restrict R,Cpu& c);
u32 body_532(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55b(u8* __restrict R,Cpu& c);
u32 body_566(u8* __restrict R,Cpu& c);
u32 body_56c(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_572(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_57a(u8* __restrict R,Cpu& c);
u32 body_57b(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_57d(u8* __restrict R,Cpu& c);
u32 body_57e(u8* __restrict R,Cpu& c);
u32 body_57f(u8* __restrict R,Cpu& c);
u32 body_580(u8* __restrict R,Cpu& c);
u32 body_582(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_593(u8* __restrict R,Cpu& c);
u32 body_599(u8* __restrict R,Cpu& c);
u32 body_5a9(u8* __restrict R,Cpu& c);
u32 body_5b7(u8* __restrict R,Cpu& c);
u32 body_5bc(u8* __restrict R,Cpu& c);
u32 body_5be(u8* __restrict R,Cpu& c);
u32 body_5ce(u8* __restrict R,Cpu& c);
u32 body_5d2(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_5d9(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f1(u8* __restrict R,Cpu& c);
u32 body_600(u8* __restrict R,Cpu& c);
u32 body_601(u8* __restrict R,Cpu& c);
u32 body_609(u8* __restrict R,Cpu& c);
u32 body_60a(u8* __restrict R,Cpu& c);
u32 body_60c(u8* __restrict R,Cpu& c);
u32 body_60f(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_637(u8* __restrict R,Cpu& c);
u32 body_63b(u8* __restrict R,Cpu& c);
u32 body_6f5(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x581,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x581,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_581(u8* __restrict R,Cpu& c);
u32 page_581(Cpu& c){return body_581(c.regs.data(),c);}
__attribute__((noinline)) u32 body_581(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x581002:goto L581002;
case 0x581003:c.instructions+=1;goto B581003;
case 0x581008:goto L581008;
case 0x58100a:c.instructions+=4;goto B58100a;
case 0x58100e:c.instructions+=3;goto B58100e;
case 0x581010:c.instructions+=2;goto B581010;
case 0x581011:c.instructions+=1;goto B581011;
case 0x581016:goto L581016;
case 0x581019:c.instructions+=4;goto B581019;
case 0x58101a:c.instructions+=3;goto B58101a;
case 0x58101b:c.instructions+=2;goto B58101b;
case 0x58101e:c.instructions+=1;goto B58101e;
case 0x581020:goto L581020;
case 0x581023:c.instructions+=3;goto B581023;
case 0x581025:c.instructions+=2;goto B581025;
case 0x581027:c.instructions+=1;goto B581027;
case 0x581029:goto L581029;
case 0x58102c:goto L58102c;
case 0x58102f:c.instructions+=3;goto B58102f;
case 0x581036:c.instructions+=2;goto B581036;
case 0x58103d:c.instructions+=1;goto B58103d;
case 0x58103f:goto L58103f;
case 0x581042:goto L581042;
case 0x581050:goto L581050;
case 0x581051:c.instructions+=4;goto B581051;
case 0x581053:c.instructions+=3;goto B581053;
case 0x581059:c.instructions+=2;goto B581059;
case 0x58105b:c.instructions+=1;goto B58105b;
case 0x58105d:goto L58105d;
case 0x581062:c.instructions+=2;goto B581062;
case 0x581064:c.instructions+=1;goto B581064;
case 0x581066:goto L581066;
case 0x581069:c.instructions+=3;goto B581069;
case 0x58106f:c.instructions+=2;goto B58106f;
case 0x581071:c.instructions+=1;goto B581071;
case 0x581073:goto L581073;
case 0x581076:c.instructions+=2;goto B581076;
case 0x581078:c.instructions+=1;goto B581078;
case 0x58107a:goto L58107a;
case 0x58107c:c.instructions+=1;goto B58107c;
case 0x58107e:goto L58107e;
case 0x581084:c.instructions+=2;goto B581084;
case 0x581086:c.instructions+=1;goto B581086;
case 0x581088:goto L581088;
case 0x58108f:c.instructions+=1;goto B58108f;
case 0x581091:goto L581091;
case 0x581094:c.instructions+=1;goto B581094;
case 0x581096:goto L581096;
case 0x581098:c.instructions+=1;goto B581098;
case 0x58109a:goto L58109a;
case 0x5810a0:goto L5810a0;
case 0x5810a3:c.instructions+=2;goto B5810a3;
case 0x5810a5:c.instructions+=1;goto B5810a5;
case 0x5810a7:goto L5810a7;
case 0x5810a9:c.instructions+=1;goto B5810a9;
case 0x5810ae:goto L5810ae;
case 0x5810b1:c.instructions+=2;goto B5810b1;
case 0x5810b3:c.instructions+=1;goto B5810b3;
case 0x5810b5:goto L5810b5;
case 0x5810b7:c.instructions+=1;goto B5810b7;
case 0x5810bc:goto L5810bc;
case 0x5810bf:c.instructions+=1;goto B5810bf;
case 0x5810c1:goto L5810c1;
case 0x5810c4:c.instructions+=2;goto B5810c4;
case 0x5810c6:c.instructions+=1;goto B5810c6;
case 0x5810c8:goto L5810c8;
case 0x5810cf:c.instructions+=1;goto B5810cf;
case 0x5810d1:goto L5810d1;
case 0x5810d4:c.instructions+=2;goto B5810d4;
case 0x5810d6:c.instructions+=1;goto B5810d6;
case 0x5810d8:goto L5810d8;
case 0x5810dd:c.instructions+=2;goto B5810dd;
case 0x5810e2:c.instructions+=1;goto B5810e2;
case 0x5810e4:goto L5810e4;
case 0x5810e5:c.instructions+=2;goto B5810e5;
case 0x5810e8:c.instructions+=1;goto B5810e8;
case 0x5810e9:goto L5810e9;
case 0x5810eb:c.instructions+=3;goto B5810eb;
case 0x5810ed:c.instructions+=2;goto B5810ed;
case 0x5810ef:c.instructions+=1;goto B5810ef;
case 0x5810f2:goto L5810f2;
case 0x5810f4:c.instructions+=1;goto B5810f4;
case 0x5810f9:goto L5810f9;
case 0x5810fb:c.instructions+=1;goto B5810fb;
case 0x581100:goto L581100;
case 0x581106:c.instructions+=6;goto B581106;
case 0x58110c:c.instructions+=5;goto B58110c;
case 0x58110e:c.instructions+=4;goto B58110e;
case 0x581111:c.instructions+=3;goto B581111;
case 0x581116:c.instructions+=2;goto B581116;
case 0x581117:c.instructions+=1;goto B581117;
case 0x58111c:goto L58111c;
case 0x581123:c.instructions+=2;goto B581123;
case 0x581124:c.instructions+=1;goto B581124;
case 0x581130:goto L581130;
case 0x581131:c.instructions+=4;goto B581131;
case 0x581133:c.instructions+=3;goto B581133;
case 0x581136:c.instructions+=2;goto B581136;
case 0x581138:c.instructions+=1;goto B581138;
case 0x58113a:goto L58113a;
case 0x58113b:c.instructions+=4;goto B58113b;
case 0x58113c:c.instructions+=3;goto B58113c;
case 0x58113d:c.instructions+=2;goto B58113d;
case 0x581142:c.instructions+=1;goto B581142;
case 0x581147:goto L581147;
case 0x581149:c.instructions+=2;goto B581149;
case 0x58114e:c.instructions+=1;goto B58114e;
case 0x581150:goto L581150;
case 0x581156:c.instructions+=2;goto B581156;
case 0x581158:c.instructions+=1;goto B581158;
case 0x58115a:goto L58115a;
case 0x581160:goto L581160;
case 0x581163:c.instructions+=1;goto B581163;
case 0x581165:goto L581165;
case 0x581168:c.instructions+=2;goto B581168;
case 0x58116a:c.instructions+=1;goto B58116a;
case 0x58116c:goto L58116c;
case 0x58116d:c.instructions+=3;goto B58116d;
case 0x58116e:c.instructions+=2;goto B58116e;
case 0x581172:c.instructions+=1;goto B581172;
case 0x581173:goto L581173;
case 0x581174:c.instructions+=1;goto B581174;
case 0x581175:goto L581175;
case 0x58117b:c.instructions+=2;goto B58117b;
case 0x58117d:c.instructions+=1;goto B58117d;
case 0x58117f:goto L58117f;
case 0x581180:goto L581180;
case 0x581185:goto L581185;
case 0x58118b:c.instructions+=2;goto B58118b;
case 0x58118d:c.instructions+=1;goto B58118d;
case 0x58118f:goto L58118f;
case 0x581192:c.instructions+=5;goto B581192;
case 0x581194:c.instructions+=4;goto B581194;
case 0x581196:c.instructions+=3;goto B581196;
case 0x581199:c.instructions+=2;goto B581199;
case 0x58119b:c.instructions+=1;goto B58119b;
case 0x5811a0:goto L5811a0;
case 0x5811a5:c.instructions+=3;goto B5811a5;
case 0x5811a6:c.instructions+=2;goto B5811a6;
case 0x5811a7:c.instructions+=1;goto B5811a7;
case 0x5811ac:goto L5811ac;
case 0x5811af:c.instructions+=1;goto B5811af;
case 0x5811c0:goto L5811c0;
case 0x5811c3:c.instructions+=4;goto B5811c3;
case 0x5811c4:c.instructions+=3;goto B5811c4;
case 0x5811c5:c.instructions+=2;goto B5811c5;
case 0x5811cd:c.instructions+=1;goto B5811cd;
case 0x5811d2:goto L5811d2;
case 0x5811d4:c.instructions+=4;goto B5811d4;
case 0x5811d9:c.instructions+=3;goto B5811d9;
case 0x5811db:c.instructions+=2;goto B5811db;
case 0x5811dd:c.instructions+=1;goto B5811dd;
case 0x5811e3:goto L5811e3;
case 0x5811e4:goto L5811e4;
case 0x5811e9:goto L5811e9;
case 0x5811ee:c.instructions+=1;goto B5811ee;
case 0x5811f3:goto L5811f3;
case 0x5811f8:c.instructions+=2;goto B5811f8;
case 0x5811fd:c.instructions+=1;goto B5811fd;
case 0x581202:goto L581202;
case 0x581207:c.instructions+=2;goto B581207;
case 0x581209:c.instructions+=1;goto B581209;
case 0x58120b:goto L58120b;
case 0x581210:goto L581210;
case 0x581212:c.instructions+=6;goto B581212;
case 0x581217:c.instructions+=5;goto B581217;
case 0x581218:c.instructions+=4;goto B581218;
case 0x58121e:c.instructions+=3;goto B58121e;
case 0x581224:c.instructions+=2;goto B581224;
case 0x58122a:c.instructions+=1;goto B58122a;
case 0x58122c:goto L58122c;
case 0x581231:c.instructions+=3;goto B581231;
case 0x581234:c.instructions+=2;goto B581234;
case 0x581236:c.instructions+=1;goto B581236;
case 0x581238:goto L581238;
case 0x58123a:c.instructions+=1;goto B58123a;
case 0x58123c:goto L58123c;
case 0x581241:c.instructions+=2;goto B581241;
case 0x581243:c.instructions+=1;goto B581243;
case 0x581245:goto L581245;
case 0x581247:goto L581247;
case 0x58124c:goto L58124c;
case 0x581252:c.instructions+=2;goto B581252;
case 0x581254:c.instructions+=1;goto B581254;
case 0x581256:goto L581256;
case 0x58125b:goto L58125b;
case 0x581261:c.instructions+=3;goto B581261;
case 0x581262:c.instructions+=2;goto B581262;
case 0x581264:c.instructions+=1;goto B581264;
case 0x581269:goto L581269;
case 0x58126e:c.instructions+=2;goto B58126e;
case 0x581270:c.instructions+=1;goto B581270;
case 0x581272:goto L581272;
case 0x581274:c.instructions+=6;goto B581274;
case 0x581279:c.instructions+=5;goto B581279;
case 0x58127a:c.instructions+=4;goto B58127a;
case 0x581280:c.instructions+=3;goto B581280;
case 0x581286:c.instructions+=2;goto B581286;
case 0x58128c:c.instructions+=1;goto B58128c;
case 0x58128e:goto L58128e;
case 0x581293:c.instructions+=3;goto B581293;
case 0x581296:c.instructions+=2;goto B581296;
case 0x581298:c.instructions+=1;goto B581298;
case 0x58129a:goto L58129a;
case 0x58129c:c.instructions+=1;goto B58129c;
case 0x58129e:goto L58129e;
case 0x5812a3:c.instructions+=2;goto B5812a3;
case 0x5812a5:c.instructions+=1;goto B5812a5;
case 0x5812a7:goto L5812a7;
case 0x5812a9:goto L5812a9;
case 0x5812ae:goto L5812ae;
case 0x5812b3:c.instructions+=3;goto B5812b3;
case 0x5812b8:c.instructions+=2;goto B5812b8;
case 0x5812ba:c.instructions+=1;goto B5812ba;
case 0x5812bc:goto L5812bc;
case 0x5812c1:goto L5812c1;
case 0x5812c6:goto L5812c6;
case 0x5812cc:c.instructions+=2;goto B5812cc;
case 0x5812ce:c.instructions+=1;goto B5812ce;
case 0x5812d0:goto L5812d0;
case 0x5812d5:goto L5812d5;
case 0x5812da:goto L5812da;
case 0x5812db:c.instructions+=2;goto B5812db;
case 0x5812dc:c.instructions+=1;goto B5812dc;
case 0x5812e1:goto L5812e1;
case 0x5812e7:c.instructions+=3;goto B5812e7;
case 0x5812ea:c.instructions+=2;goto B5812ea;
case 0x5812ed:c.instructions+=1;goto B5812ed;
case 0x5812f2:goto L5812f2;
case 0x5812f5:c.instructions+=1;goto B5812f5;
case 0x5812fa:goto L5812fa;
case 0x5812ff:c.instructions+=2;goto B5812ff;
case 0x581301:c.instructions+=1;goto B581301;
case 0x581306:goto L581306;
case 0x58130b:c.instructions+=2;goto B58130b;
case 0x581310:c.instructions+=1;goto B581310;
case 0x581315:goto L581315;
case 0x581317:c.instructions+=1;goto B581317;
case 0x581319:goto L581319;
case 0x58131e:c.instructions+=2;goto B58131e;
case 0x581320:c.instructions+=1;goto B581320;
case 0x581322:goto L581322;
case 0x581324:c.instructions+=1;goto B581324;
case 0x581326:goto L581326;
case 0x581328:c.instructions+=1;goto B581328;
case 0x58132a:goto L58132a;
case 0x58132c:goto L58132c;
case 0x58132f:c.instructions+=2;goto B58132f;
case 0x581331:c.instructions+=1;goto B581331;
case 0x581333:goto L581333;
case 0x581334:c.instructions+=2;goto B581334;
case 0x581339:c.instructions+=1;goto B581339;
case 0x58133e:goto L58133e;
case 0x581344:c.instructions+=1;goto B581344;
case 0x581349:goto L581349;
case 0x58134f:c.instructions+=1;goto B58134f;
case 0x581355:goto L581355;
case 0x58135b:c.instructions+=1;goto B58135b;
case 0x581360:goto L581360;
case 0x581366:c.instructions+=1;goto B581366;
case 0x58136b:goto L58136b;
case 0x58136d:c.instructions+=1;goto B58136d;
case 0x581373:goto L581373;
case 0x581379:c.instructions+=2;goto B581379;
case 0x58137c:c.instructions+=1;goto B58137c;
case 0x581382:goto L581382;
case 0x581388:c.instructions+=1;goto B581388;
case 0x58138d:goto L58138d;
case 0x581393:c.instructions+=2;goto B581393;
case 0x581396:c.instructions+=1;goto B581396;
case 0x581398:goto L581398;
case 0x581399:c.instructions+=2;goto B581399;
case 0x58139e:c.instructions+=1;goto B58139e;
case 0x5813a3:goto L5813a3;
case 0x5813a9:c.instructions+=2;goto B5813a9;
case 0x5813af:c.instructions+=1;goto B5813af;
case 0x5813b4:goto L5813b4;
case 0x5813ba:c.instructions+=1;goto B5813ba;
case 0x5813bf:goto L5813bf;
case 0x5813c4:goto L5813c4;
case 0x5813ca:c.instructions+=1;goto B5813ca;
case 0x5813cf:goto L5813cf;
case 0x5813d0:c.instructions+=3;goto B5813d0;
case 0x5813d5:c.instructions+=2;goto B5813d5;
case 0x5813d8:c.instructions+=1;goto B5813d8;
case 0x5813dd:goto L5813dd;
case 0x5813e1:c.instructions+=3;goto B5813e1;
case 0x5813e7:c.instructions+=2;goto B5813e7;
case 0x5813ed:c.instructions+=1;goto B5813ed;
case 0x5813f2:goto L5813f2;
case 0x5813f7:c.instructions+=1;goto B5813f7;
case 0x5813fc:goto L5813fc;
case 0x581400:c.instructions+=3;goto B581400;
case 0x581406:c.instructions+=2;goto B581406;
case 0x581407:c.instructions+=1;goto B581407;
case 0x58140c:goto L58140c;
case 0x581412:c.instructions+=2;goto B581412;
case 0x581416:c.instructions+=1;goto B581416;
case 0x58141b:goto L58141b;
case 0x58141d:goto L58141d;
case 0x58141e:c.instructions+=2;goto B58141e;
case 0x581423:c.instructions+=1;goto B581423;
case 0x581428:goto L581428;
case 0x58142e:c.instructions+=2;goto B58142e;
case 0x581434:c.instructions+=1;goto B581434;
case 0x581439:goto L581439;
case 0x58143f:c.instructions+=1;goto B58143f;
case 0x581444:goto L581444;
case 0x58144a:c.instructions+=1;goto B58144a;
case 0x58144c:goto L58144c;
case 0x581452:c.instructions+=1;goto B581452;
case 0x581457:goto L581457;
case 0x581459:goto L581459;
case 0x58145f:c.instructions+=1;goto B58145f;
case 0x581465:goto L581465;
case 0x58146b:c.instructions+=1;goto B58146b;
case 0x581470:goto L581470;
case 0x581475:goto L581475;
case 0x58147a:goto L58147a;
case 0x58147e:c.instructions+=3;goto B58147e;
case 0x58147f:c.instructions+=2;goto B58147f;
case 0x581484:c.instructions+=1;goto B581484;
case 0x581489:goto L581489;
case 0x58148e:goto L58148e;
case 0x581493:goto L581493;
case 0x581498:goto L581498;
case 0x58149e:c.instructions+=2;goto B58149e;
case 0x5814a0:c.instructions+=1;goto B5814a0;
case 0x5814a2:goto L5814a2;
case 0x5814a7:c.instructions+=2;goto B5814a7;
case 0x5814a8:c.instructions+=1;goto B5814a8;
case 0x5814ad:goto L5814ad;
case 0x5814b2:goto L5814b2;
case 0x5814b7:goto L5814b7;
case 0x5814bc:c.instructions+=1;goto B5814bc;
case 0x5814c1:goto L5814c1;
case 0x5814c7:c.instructions+=1;goto B5814c7;
case 0x5814cc:goto L5814cc;
case 0x5814d1:goto L5814d1;
case 0x5814d6:goto L5814d6;
case 0x5814db:goto L5814db;
case 0x5814e0:goto L5814e0;
case 0x5814e5:goto L5814e5;
case 0x5814ea:goto L5814ea;
case 0x5814ef:goto L5814ef;
case 0x5814f3:c.instructions+=1;goto B5814f3;
case 0x5814f5:goto L5814f5;
case 0x5814fa:c.instructions+=1;goto B5814fa;
case 0x5814ff:goto L5814ff;
case 0x581504:goto L581504;
case 0x581508:c.instructions+=3;goto B581508;
case 0x58150d:c.instructions+=2;goto B58150d;
case 0x58150f:c.instructions+=1;goto B58150f;
case 0x581511:goto L581511;
case 0x581515:goto L581515;
case 0x58151a:goto L58151a;
case 0x58151f:c.instructions+=1;goto B58151f;
case 0x581524:goto L581524;
case 0x58152a:c.instructions+=1;goto B58152a;
case 0x58152c:goto L58152c;
case 0x581532:c.instructions+=1;goto B581532;
case 0x581537:goto L581537;
case 0x58153d:c.instructions+=1;goto B58153d;
case 0x58153f:goto L58153f;
case 0x581545:c.instructions+=1;goto B581545;
case 0x58154a:goto L58154a;
case 0x581550:c.instructions+=1;goto B581550;
case 0x581552:goto L581552;
case 0x581558:c.instructions+=1;goto B581558;
case 0x58155d:goto L58155d;
case 0x581562:goto L581562;
case 0x581568:c.instructions+=1;goto B581568;
case 0x58156e:goto L58156e;
case 0x58156f:goto L58156f;
case 0x581570:c.instructions+=3;goto B581570;
case 0x581571:c.instructions+=2;goto B581571;
case 0x581574:c.instructions+=1;goto B581574;
case 0x581580:goto L581580;
case 0x581585:c.instructions+=4;goto B581585;
case 0x581586:c.instructions+=3;goto B581586;
case 0x581590:c.instructions+=2;goto B581590;
case 0x58159a:c.instructions+=1;goto B58159a;
case 0x58159f:goto L58159f;
case 0x5815a2:c.instructions+=3;goto B5815a2;
case 0x5815a7:c.instructions+=2;goto B5815a7;
case 0x5815ac:c.instructions+=1;goto B5815ac;
case 0x5815c0:goto L5815c0;
case 0x5815c1:c.instructions+=4;goto B5815c1;
case 0x5815c2:c.instructions+=3;goto B5815c2;
case 0x5815c4:c.instructions+=2;goto B5815c4;
case 0x5815c9:c.instructions+=1;goto B5815c9;
case 0x5815ce:goto L5815ce;
case 0x5815d0:c.instructions+=1;goto B5815d0;
case 0x5815d2:goto L5815d2;
case 0x5815d4:c.instructions+=2;goto B5815d4;
case 0x5815d9:c.instructions+=1;goto B5815d9;
case 0x5815de:goto L5815de;
case 0x5815e3:c.instructions+=4;goto B5815e3;
case 0x5815e5:c.instructions+=3;goto B5815e5;
case 0x5815e7:c.instructions+=2;goto B5815e7;
case 0x5815f1:c.instructions+=1;goto B5815f1;
case 0x5815f3:goto L5815f3;
case 0x5815fd:c.instructions+=1;goto B5815fd;
case 0x5815ff:goto L5815ff;
case 0x581600:goto L581600;
case 0x581606:c.instructions+=1;goto B581606;
case 0x581608:goto L581608;
case 0x581612:c.instructions+=1;goto B581612;
case 0x581614:goto L581614;
case 0x581619:goto L581619;
case 0x58161b:goto L58161b;
case 0x581621:c.instructions+=1;goto B581621;
case 0x581626:goto L581626;
case 0x58162b:c.instructions+=1;goto B58162b;
case 0x581630:goto L581630;
case 0x581633:c.instructions+=4;goto B581633;
case 0x581634:c.instructions+=3;goto B581634;
case 0x581637:c.instructions+=2;goto B581637;
case 0x581638:c.instructions+=1;goto B581638;
case 0x58163d:goto L58163d;
case 0x581640:c.instructions+=3;goto B581640;
case 0x581641:c.instructions+=2;goto B581641;
case 0x581644:c.instructions+=1;goto B581644;
case 0x581649:goto L581649;
case 0x58164c:c.instructions+=2;goto B58164c;
case 0x581651:c.instructions+=1;goto B581651;
case 0x581656:goto L581656;
case 0x58165b:goto L58165b;
case 0x581665:c.instructions+=1;goto B581665;
case 0x58166a:goto L58166a;
case 0x58166f:goto L58166f;
case 0x581674:goto L581674;
case 0x581679:goto L581679;
case 0x58167e:goto L58167e;
case 0x581683:goto L581683;
case 0x581688:goto L581688;
case 0x58168d:goto L58168d;
case 0x581692:goto L581692;
case 0x581697:goto L581697;
case 0x58169c:goto L58169c;
case 0x5816a1:goto L5816a1;
case 0x5816a6:goto L5816a6;
case 0x5816a8:c.instructions+=1;goto B5816a8;
case 0x5816ad:goto L5816ad;
case 0x5816b2:c.instructions+=1;goto B5816b2;
case 0x5816b7:goto L5816b7;
case 0x5816bc:goto L5816bc;
case 0x5816c1:goto L5816c1;
case 0x5816c6:goto L5816c6;
case 0x5816cb:goto L5816cb;
case 0x5816cd:c.instructions+=2;goto B5816cd;
case 0x5816d4:c.instructions+=1;goto B5816d4;
case 0x5816d9:goto L5816d9;
case 0x5816dc:c.instructions+=2;goto B5816dc;
case 0x5816dd:c.instructions+=1;goto B5816dd;
case 0x5816e2:goto L5816e2;
case 0x5816e5:c.instructions+=2;goto B5816e5;
case 0x5816e6:c.instructions+=1;goto B5816e6;
case 0x5816eb:goto L5816eb;
case 0x5816ee:c.instructions+=2;goto B5816ee;
case 0x5816ef:c.instructions+=1;goto B5816ef;
case 0x5816f4:goto L5816f4;
case 0x5816f7:c.instructions+=2;goto B5816f7;
case 0x5816f8:c.instructions+=1;goto B5816f8;
case 0x5816fd:goto L5816fd;
case 0x581700:c.instructions+=7;goto B581700;
case 0x581703:c.instructions+=6;goto B581703;
case 0x581705:c.instructions+=5;goto B581705;
case 0x581708:c.instructions+=4;goto B581708;
case 0x58170b:c.instructions+=3;goto B58170b;
case 0x58170e:c.instructions+=2;goto B58170e;
case 0x581711:c.instructions+=1;goto B581711;
case 0x581713:goto L581713;
case 0x581714:c.instructions+=1;goto B581714;
case 0x581719:goto L581719;
case 0x58171c:c.instructions+=1;goto B58171c;
case 0x58171f:goto L58171f;
case 0x581724:c.instructions+=1;goto B581724;
case 0x581729:goto L581729;
case 0x58172e:c.instructions+=1;goto B58172e;
case 0x581733:goto L581733;
case 0x581739:c.instructions+=1;goto B581739;
case 0x581740:goto L581740;
case 0x581742:c.instructions+=1;goto B581742;
case 0x581744:goto L581744;
case 0x581749:goto L581749;
case 0x58174e:goto L58174e;
case 0x581754:goto L581754;
case 0x581756:c.instructions+=4;goto B581756;
case 0x581758:c.instructions+=3;goto B581758;
case 0x58175b:c.instructions+=2;goto B58175b;
case 0x58175d:c.instructions+=1;goto B58175d;
case 0x58175f:goto L58175f;
case 0x581765:c.instructions+=3;goto B581765;
case 0x58176b:c.instructions+=2;goto B58176b;
case 0x581771:c.instructions+=1;goto B581771;
case 0x581773:goto L581773;
case 0x581775:c.instructions+=2;goto B581775;
case 0x581777:c.instructions+=1;goto B581777;
case 0x58177c:goto L58177c;
case 0x58177f:c.instructions+=1;goto B58177f;
case 0x581781:goto L581781;
case 0x581787:c.instructions+=1;goto B581787;
case 0x581789:goto L581789;
case 0x58178f:c.instructions+=4;goto B58178f;
case 0x581791:c.instructions+=3;goto B581791;
case 0x581793:c.instructions+=2;goto B581793;
case 0x581794:c.instructions+=1;goto B581794;
case 0x581799:goto L581799;
case 0x58179f:c.instructions+=2;goto B58179f;
case 0x5817a5:c.instructions+=1;goto B5817a5;
case 0x5817a7:goto L5817a7;
case 0x5817ad:c.instructions+=1;goto B5817ad;
case 0x5817af:goto L5817af;
case 0x5817b4:goto L5817b4;
case 0x5817b9:c.instructions+=1;goto B5817b9;
case 0x5817be:goto L5817be;
case 0x5817bf:c.instructions+=3;goto B5817bf;
case 0x5817c5:c.instructions+=2;goto B5817c5;
case 0x5817c6:c.instructions+=1;goto B5817c6;
case 0x5817d0:goto L5817d0;
case 0x5817d2:c.instructions+=3;goto B5817d2;
case 0x5817d4:c.instructions+=2;goto B5817d4;
case 0x5817d9:c.instructions+=1;goto B5817d9;
case 0x5817de:goto L5817de;
case 0x5817e3:c.instructions+=1;goto B5817e3;
case 0x5817e8:goto L5817e8;
case 0x5817ed:c.instructions+=1;goto B5817ed;
case 0x5817f2:goto L5817f2;
case 0x5817f7:c.instructions+=4;goto B5817f7;
case 0x5817f9:c.instructions+=3;goto B5817f9;
case 0x581803:c.instructions+=2;goto B581803;
case 0x58180d:c.instructions+=1;goto B58180d;
case 0x58180f:goto L58180f;
case 0x581816:goto L581816;
case 0x581820:goto L581820;
case 0x581823:c.instructions+=9;goto B581823;
case 0x581824:c.instructions+=8;goto B581824;
case 0x58182a:c.instructions+=7;goto B58182a;
case 0x58182b:c.instructions+=6;goto B58182b;
case 0x581831:c.instructions+=5;goto B581831;
case 0x581832:c.instructions+=4;goto B581832;
case 0x581837:c.instructions+=3;goto B581837;
case 0x581838:c.instructions+=2;goto B581838;
case 0x581842:c.instructions+=1;goto B581842;
case 0x581847:goto L581847;
case 0x58184d:c.instructions+=6;goto B58184d;
case 0x581853:c.instructions+=5;goto B581853;
case 0x581856:c.instructions+=4;goto B581856;
case 0x581859:c.instructions+=3;goto B581859;
case 0x58185e:c.instructions+=2;goto B58185e;
case 0x581860:c.instructions+=1;goto B581860;
case 0x581862:goto L581862;
case 0x581865:c.instructions+=1;goto B581865;
case 0x581867:goto L581867;
case 0x58186d:c.instructions+=2;goto B58186d;
case 0x58186f:c.instructions+=1;goto B58186f;
case 0x581871:goto L581871;
case 0x581876:c.instructions+=2;goto B581876;
case 0x581878:c.instructions+=1;goto B581878;
case 0x58187a:goto L58187a;
case 0x581880:goto L581880;
case 0x581881:c.instructions+=1;goto B581881;
case 0x581886:goto L581886;
case 0x581889:goto L581889;
case 0x58188c:c.instructions+=4;goto B58188c;
case 0x58188d:c.instructions+=3;goto B58188d;
case 0x581890:c.instructions+=2;goto B581890;
case 0x581891:c.instructions+=1;goto B581891;
case 0x581896:goto L581896;
case 0x581899:c.instructions+=4;goto B581899;
case 0x58189b:c.instructions+=3;goto B58189b;
case 0x58189e:c.instructions+=2;goto B58189e;
case 0x5818a0:c.instructions+=1;goto B5818a0;
case 0x5818a2:goto L5818a2;
case 0x5818a4:c.instructions+=2;goto B5818a4;
case 0x5818a8:c.instructions+=1;goto B5818a8;
case 0x5818aa:goto L5818aa;
case 0x5818af:goto L5818af;
case 0x5818b3:c.instructions+=2;goto B5818b3;
case 0x5818b5:c.instructions+=1;goto B5818b5;
case 0x5818b7:goto L5818b7;
case 0x5818b9:c.instructions+=1;goto B5818b9;
case 0x5818bb:goto L5818bb;
case 0x5818c1:c.instructions+=1;goto B5818c1;
case 0x5818c3:goto L5818c3;
case 0x5818c9:c.instructions+=2;goto B5818c9;
case 0x5818ce:c.instructions+=1;goto B5818ce;
case 0x5818d0:goto L5818d0;
case 0x5818d5:goto L5818d5;
case 0x5818d9:c.instructions+=5;goto B5818d9;
case 0x5818dd:c.instructions+=4;goto B5818dd;
case 0x5818de:c.instructions+=3;goto B5818de;
case 0x5818df:c.instructions+=2;goto B5818df;
case 0x5818e4:c.instructions+=1;goto B5818e4;
case 0x5818e9:goto L5818e9;
case 0x5818ee:c.instructions+=1;goto B5818ee;
case 0x5818f3:goto L5818f3;
case 0x5818f8:c.instructions+=2;goto B5818f8;
case 0x5818fa:c.instructions+=1;goto B5818fa;
case 0x5818fc:goto L5818fc;
case 0x581901:goto L581901;
case 0x581902:c.instructions+=1;goto B581902;
case 0x581907:goto L581907;
case 0x58190a:c.instructions+=1;goto B58190a;
case 0x58190c:goto L58190c;
case 0x581913:c.instructions+=1;goto B581913;
case 0x581915:goto L581915;
case 0x58191a:c.instructions+=2;goto B58191a;
case 0x58191c:c.instructions+=1;goto B58191c;
case 0x58191e:goto L58191e;
case 0x581925:c.instructions+=4;goto B581925;
case 0x581928:c.instructions+=3;goto B581928;
case 0x581929:c.instructions+=2;goto B581929;
case 0x58192a:c.instructions+=1;goto B58192a;
case 0x58192f:goto L58192f;
case 0x581932:c.instructions+=1;goto B581932;
case 0x581934:goto L581934;
case 0x581939:goto L581939;
case 0x58193f:c.instructions+=2;goto B58193f;
case 0x581940:c.instructions+=1;goto B581940;
case 0x581945:goto L581945;
case 0x581948:c.instructions+=3;goto B581948;
case 0x581949:c.instructions+=2;goto B581949;
case 0x58194a:c.instructions+=1;goto B58194a;
case 0x58194f:goto L58194f;
case 0x581955:c.instructions+=8;goto B581955;
case 0x581958:c.instructions+=7;goto B581958;
case 0x58195a:c.instructions+=6;goto B58195a;
case 0x58195b:c.instructions+=5;goto B58195b;
case 0x58195e:c.instructions+=4;goto B58195e;
case 0x581960:c.instructions+=3;goto B581960;
case 0x581961:c.instructions+=2;goto B581961;
case 0x581962:c.instructions+=1;goto B581962;
case 0x581964:goto L581964;
case 0x581966:c.instructions+=1;goto B581966;
case 0x581968:goto L581968;
case 0x58196d:c.instructions+=2;goto B58196d;
case 0x581977:c.instructions+=1;goto B581977;
case 0x58197c:goto L58197c;
case 0x581981:c.instructions+=2;goto B581981;
case 0x581984:c.instructions+=1;goto B581984;
case 0x581989:goto L581989;
case 0x58198e:c.instructions+=4;goto B58198e;
case 0x58198f:c.instructions+=3;goto B58198f;
case 0x581999:c.instructions+=2;goto B581999;
case 0x5819a3:c.instructions+=1;goto B5819a3;
case 0x5819a8:goto L5819a8;
case 0x5819ad:c.instructions+=3;goto B5819ad;
case 0x5819b2:c.instructions+=2;goto B5819b2;
case 0x5819b5:c.instructions+=1;goto B5819b5;
case 0x5819c0:goto L5819c0;
case 0x5819c3:c.instructions+=3;goto B5819c3;
case 0x5819c5:c.instructions+=2;goto B5819c5;
case 0x5819c7:c.instructions+=1;goto B5819c7;
case 0x5819c9:goto L5819c9;
case 0x5819cc:goto L5819cc;
case 0x5819cf:c.instructions+=3;goto B5819cf;
case 0x5819d6:c.instructions+=2;goto B5819d6;
case 0x5819dd:c.instructions+=1;goto B5819dd;
case 0x5819df:goto L5819df;
case 0x5819e2:goto L5819e2;
case 0x5819f0:goto L5819f0;
case 0x5819f3:c.instructions+=3;goto B5819f3;
case 0x5819f5:c.instructions+=2;goto B5819f5;
case 0x5819f7:c.instructions+=1;goto B5819f7;
case 0x5819f9:goto L5819f9;
case 0x5819fc:goto L5819fc;
case 0x5819ff:c.instructions+=3;goto B5819ff;
case 0x581a06:c.instructions+=2;goto B581a06;
case 0x581a0d:c.instructions+=1;goto B581a0d;
case 0x581a0f:goto L581a0f;
case 0x581a12:goto L581a12;
case 0x581a20:goto L581a20;
case 0x581a26:c.instructions+=6;goto B581a26;
case 0x581a27:c.instructions+=5;goto B581a27;
case 0x581a28:c.instructions+=4;goto B581a28;
case 0x581a2d:c.instructions+=3;goto B581a2d;
case 0x581a2e:c.instructions+=2;goto B581a2e;
case 0x581a34:c.instructions+=1;goto B581a34;
case 0x581a39:goto L581a39;
case 0x581a3e:goto L581a3e;
case 0x581a43:goto L581a43;
case 0x581a48:c.instructions+=1;goto B581a48;
case 0x581a4d:goto L581a4d;
case 0x581a52:goto L581a52;
case 0x581a54:c.instructions+=2;goto B581a54;
case 0x581a55:c.instructions+=1;goto B581a55;
case 0x581a5a:goto L581a5a;
case 0x581a5d:c.instructions+=3;goto B581a5d;
case 0x581a60:c.instructions+=2;goto B581a60;
case 0x581a66:c.instructions+=1;goto B581a66;
case 0x581a68:goto L581a68;
case 0x581a6a:c.instructions+=6;goto B581a6a;
case 0x581a6c:c.instructions+=5;goto B581a6c;
case 0x581a6e:c.instructions+=4;goto B581a6e;
case 0x581a70:c.instructions+=3;goto B581a70;
case 0x581a75:c.instructions+=2;goto B581a75;
case 0x581a7a:c.instructions+=1;goto B581a7a;
case 0x581a7f:goto L581a7f;
case 0x581a81:c.instructions+=2;goto B581a81;
case 0x581a83:c.instructions+=1;goto B581a83;
case 0x581a85:goto L581a85;
case 0x581a87:c.instructions+=1;goto B581a87;
case 0x581a8c:goto L581a8c;
case 0x581a8e:c.instructions+=2;goto B581a8e;
case 0x581a8f:c.instructions+=1;goto B581a8f;
case 0x581a94:goto L581a94;
case 0x581a97:c.instructions+=2;goto B581a97;
case 0x581a9c:c.instructions+=1;goto B581a9c;
case 0x581a9e:goto L581a9e;
case 0x581a9f:c.instructions+=4;goto B581a9f;
case 0x581aa3:c.instructions+=3;goto B581aa3;
case 0x581aa8:c.instructions+=2;goto B581aa8;
case 0x581aa9:c.instructions+=1;goto B581aa9;
case 0x581aae:goto L581aae;
case 0x581ab2:c.instructions+=2;goto B581ab2;
case 0x581ab3:c.instructions+=1;goto B581ab3;
case 0x581ab8:goto L581ab8;
case 0x581abb:goto L581abb;
case 0x581abd:c.instructions+=6;goto B581abd;
case 0x581abe:c.instructions+=5;goto B581abe;
case 0x581ac0:c.instructions+=4;goto B581ac0;
case 0x581ac2:c.instructions+=3;goto B581ac2;
case 0x581ac7:c.instructions+=2;goto B581ac7;
case 0x581acc:c.instructions+=1;goto B581acc;
case 0x581ad1:goto L581ad1;
case 0x581ad3:c.instructions+=2;goto B581ad3;
case 0x581ad5:c.instructions+=1;goto B581ad5;
case 0x581ad7:goto L581ad7;
case 0x581adc:c.instructions+=1;goto B581adc;
case 0x581ae0:goto L581ae0;
case 0x581ae2:c.instructions+=4;goto B581ae2;
case 0x581ae4:c.instructions+=3;goto B581ae4;
case 0x581ae6:c.instructions+=2;goto B581ae6;
case 0x581ae7:c.instructions+=1;goto B581ae7;
case 0x581aec:goto L581aec;
case 0x581aef:c.instructions+=3;goto B581aef;
case 0x581af2:c.instructions+=2;goto B581af2;
case 0x581af8:c.instructions+=1;goto B581af8;
case 0x581afa:goto L581afa;
case 0x581afc:c.instructions+=6;goto B581afc;
case 0x581afe:c.instructions+=5;goto B581afe;
case 0x581b00:c.instructions+=4;goto B581b00;
case 0x581b02:c.instructions+=3;goto B581b02;
case 0x581b07:c.instructions+=2;goto B581b07;
case 0x581b0c:c.instructions+=1;goto B581b0c;
case 0x581b11:goto L581b11;
case 0x581b13:c.instructions+=2;goto B581b13;
case 0x581b15:c.instructions+=1;goto B581b15;
case 0x581b17:goto L581b17;
case 0x581b19:c.instructions+=1;goto B581b19;
case 0x581b1e:goto L581b1e;
case 0x581b20:c.instructions+=2;goto B581b20;
case 0x581b21:c.instructions+=1;goto B581b21;
case 0x581b26:goto L581b26;
case 0x581b29:c.instructions+=2;goto B581b29;
case 0x581b2e:c.instructions+=1;goto B581b2e;
case 0x581b30:goto L581b30;
case 0x581b31:c.instructions+=4;goto B581b31;
case 0x581b35:c.instructions+=3;goto B581b35;
case 0x581b3a:c.instructions+=2;goto B581b3a;
case 0x581b3b:c.instructions+=1;goto B581b3b;
case 0x581b40:goto L581b40;
case 0x581b42:c.instructions+=4;goto B581b42;
case 0x581b46:c.instructions+=3;goto B581b46;
case 0x581b48:c.instructions+=2;goto B581b48;
case 0x581b49:c.instructions+=1;goto B581b49;
case 0x581b4e:goto L581b4e;
case 0x581b51:goto L581b51;
case 0x581b53:c.instructions+=6;goto B581b53;
case 0x581b54:c.instructions+=5;goto B581b54;
case 0x581b56:c.instructions+=4;goto B581b56;
case 0x581b58:c.instructions+=3;goto B581b58;
case 0x581b5d:c.instructions+=2;goto B581b5d;
case 0x581b62:c.instructions+=1;goto B581b62;
case 0x581b67:goto L581b67;
case 0x581b69:c.instructions+=2;goto B581b69;
case 0x581b6b:c.instructions+=1;goto B581b6b;
case 0x581b6d:goto L581b6d;
case 0x581b72:c.instructions+=3;goto B581b72;
case 0x581b74:c.instructions+=2;goto B581b74;
case 0x581b79:c.instructions+=1;goto B581b79;
case 0x581b7b:goto L581b7b;
case 0x581b81:c.instructions+=1;goto B581b81;
case 0x581b83:goto L581b83;
case 0x581b88:c.instructions+=2;goto B581b88;
case 0x581b8a:c.instructions+=1;goto B581b8a;
case 0x581b8c:goto L581b8c;
case 0x581b92:c.instructions+=1;goto B581b92;
case 0x581b94:goto L581b94;
case 0x581b99:goto L581b99;
case 0x581b9b:goto L581b9b;
case 0x581ba0:goto L581ba0;
case 0x581ba5:goto L581ba5;
case 0x581baa:c.instructions+=1;goto B581baa;
case 0x581baf:goto L581baf;
case 0x581bb1:goto L581bb1;
case 0x581bb7:c.instructions+=2;goto B581bb7;
case 0x581bb9:c.instructions+=1;goto B581bb9;
case 0x581bbb:goto L581bbb;
case 0x581bc0:goto L581bc0;
case 0x581bc3:c.instructions+=1;goto B581bc3;
case 0x581bc9:goto L581bc9;
case 0x581bcc:c.instructions+=2;goto B581bcc;
case 0x581bce:c.instructions+=1;goto B581bce;
case 0x581bd0:goto L581bd0;
case 0x581bd2:c.instructions+=4;goto B581bd2;
case 0x581bd4:c.instructions+=3;goto B581bd4;
case 0x581bd6:c.instructions+=2;goto B581bd6;
case 0x581bd8:c.instructions+=1;goto B581bd8;
case 0x581bdd:goto L581bdd;
case 0x581be0:c.instructions+=2;goto B581be0;
case 0x581be5:c.instructions+=1;goto B581be5;
case 0x581bea:goto L581bea;
case 0x581bef:c.instructions+=1;goto B581bef;
case 0x581bf4:goto L581bf4;
case 0x581bf9:goto L581bf9;
case 0x581bff:c.instructions+=3;goto B581bff;
case 0x581c00:c.instructions+=2;goto B581c00;
case 0x581c01:c.instructions+=1;goto B581c01;
case 0x581c02:goto L581c02;
case 0x581c04:c.instructions+=1;goto B581c04;
case 0x581c06:goto L581c06;
case 0x581c0b:goto L581c0b;
case 0x581c10:goto L581c10;
case 0x581c16:goto L581c16;
case 0x581c18:c.instructions+=4;goto B581c18;
case 0x581c1a:c.instructions+=3;goto B581c1a;
case 0x581c1d:c.instructions+=2;goto B581c1d;
case 0x581c1f:c.instructions+=1;goto B581c1f;
case 0x581c21:goto L581c21;
case 0x581c26:c.instructions+=2;goto B581c26;
case 0x581c28:c.instructions+=1;goto B581c28;
case 0x581c2a:goto L581c2a;
case 0x581c31:goto L581c31;
case 0x581c3b:c.instructions+=2;goto B581c3b;
case 0x581c45:c.instructions+=1;goto B581c45;
case 0x581c4a:goto L581c4a;
case 0x581c4c:c.instructions+=1;goto B581c4c;
case 0x581c4e:goto L581c4e;
case 0x581c50:c.instructions+=1;goto B581c50;
case 0x581c55:goto L581c55;
case 0x581c58:goto L581c58;
case 0x581c5e:c.instructions+=1;goto B581c5e;
case 0x581c5f:goto L581c5f;
case 0x581c65:c.instructions+=2;goto B581c65;
case 0x581c67:c.instructions+=1;goto B581c67;
case 0x581c69:goto L581c69;
case 0x581c70:goto L581c70;
case 0x581c75:goto L581c75;
case 0x581c7b:c.instructions+=2;goto B581c7b;
case 0x581c7d:c.instructions+=1;goto B581c7d;
case 0x581c7f:goto L581c7f;
case 0x581c82:c.instructions+=5;goto B581c82;
case 0x581c84:c.instructions+=4;goto B581c84;
case 0x581c86:c.instructions+=3;goto B581c86;
case 0x581c89:c.instructions+=2;goto B581c89;
case 0x581c8b:c.instructions+=1;goto B581c8b;
case 0x581c90:goto L581c90;
case 0x581c95:c.instructions+=3;goto B581c95;
case 0x581c96:c.instructions+=2;goto B581c96;
case 0x581c97:c.instructions+=1;goto B581c97;
case 0x581c9c:goto L581c9c;
case 0x581c9f:c.instructions+=1;goto B581c9f;
case 0x581cb0:goto L581cb0;
case 0x581cb3:c.instructions+=7;goto B581cb3;
case 0x581cb9:c.instructions+=6;goto B581cb9;
case 0x581cbf:c.instructions+=5;goto B581cbf;
case 0x581cc3:c.instructions+=4;goto B581cc3;
case 0x581cc7:c.instructions+=3;goto B581cc7;
case 0x581ccd:c.instructions+=2;goto B581ccd;
case 0x581cd1:c.instructions+=1;goto B581cd1;
case 0x581cd6:goto L581cd6;
case 0x581cda:c.instructions+=5;goto B581cda;
case 0x581cde:c.instructions+=4;goto B581cde;
case 0x581ce2:c.instructions+=3;goto B581ce2;
case 0x581ce4:c.instructions+=2;goto B581ce4;
case 0x581ce7:c.instructions+=1;goto B581ce7;
case 0x581ce9:goto L581ce9;
case 0x581cef:goto L581cef;
case 0x581cf2:c.instructions+=1;goto B581cf2;
case 0x581d00:goto L581d00;
case 0x581d01:c.instructions+=17;goto B581d01;
case 0x581d05:c.instructions+=16;goto B581d05;
case 0x581d06:c.instructions+=15;goto B581d06;
case 0x581d08:c.instructions+=14;goto B581d08;
case 0x581d0e:c.instructions+=13;goto B581d0e;
case 0x581d10:c.instructions+=12;goto B581d10;
case 0x581d12:c.instructions+=11;goto B581d12;
case 0x581d13:c.instructions+=10;goto B581d13;
case 0x581d17:c.instructions+=9;goto B581d17;
case 0x581d19:c.instructions+=8;goto B581d19;
case 0x581d1f:c.instructions+=7;goto B581d1f;
case 0x581d24:c.instructions+=6;goto B581d24;
case 0x581d26:c.instructions+=5;goto B581d26;
case 0x581d29:c.instructions+=4;goto B581d29;
case 0x581d2c:c.instructions+=3;goto B581d2c;
case 0x581d2e:c.instructions+=2;goto B581d2e;
case 0x581d30:c.instructions+=1;goto B581d30;
case 0x581d32:goto L581d32;
case 0x581d37:c.instructions+=3;goto B581d37;
case 0x581d39:c.instructions+=2;goto B581d39;
case 0x581d3b:c.instructions+=1;goto B581d3b;
case 0x581d3d:goto L581d3d;
case 0x581d3f:goto L581d3f;
case 0x581d41:c.instructions+=7;goto B581d41;
case 0x581d45:c.instructions+=6;goto B581d45;
case 0x581d47:c.instructions+=5;goto B581d47;
case 0x581d4a:c.instructions+=4;goto B581d4a;
case 0x581d4e:c.instructions+=3;goto B581d4e;
case 0x581d50:c.instructions+=2;goto B581d50;
case 0x581d53:c.instructions+=1;goto B581d53;
case 0x581d54:goto L581d54;
case 0x581d57:c.instructions+=1;goto B581d57;
case 0x581d59:goto L581d59;
case 0x581d5b:c.instructions+=1;goto B581d5b;
case 0x581d5d:goto L581d5d;
case 0x581d60:c.instructions+=3;goto B581d60;
case 0x581d63:c.instructions+=2;goto B581d63;
case 0x581d66:c.instructions+=1;goto B581d66;
case 0x581d67:goto L581d67;
case 0x581d69:c.instructions+=6;goto B581d69;
case 0x581d6c:c.instructions+=5;goto B581d6c;
case 0x581d6e:c.instructions+=4;goto B581d6e;
case 0x581d6f:c.instructions+=3;goto B581d6f;
case 0x581d72:c.instructions+=2;goto B581d72;
case 0x581d73:c.instructions+=1;goto B581d73;
case 0x581d75:goto L581d75;
case 0x581d76:c.instructions+=3;goto B581d76;
case 0x581d77:c.instructions+=2;goto B581d77;
case 0x581d78:c.instructions+=1;goto B581d78;
case 0x581d7b:goto L581d7b;
case 0x581d7d:c.instructions+=2;goto B581d7d;
case 0x581d80:c.instructions+=1;goto B581d80;
case 0x581d83:goto L581d83;
case 0x581d84:c.instructions+=3;goto B581d84;
case 0x581d85:c.instructions+=2;goto B581d85;
case 0x581d86:c.instructions+=1;goto B581d86;
case 0x581d90:goto L581d90;
case 0x581d91:c.instructions+=15;goto B581d91;
case 0x581d95:c.instructions+=14;goto B581d95;
case 0x581d96:c.instructions+=13;goto B581d96;
case 0x581d97:c.instructions+=12;goto B581d97;
case 0x581d99:c.instructions+=11;goto B581d99;
case 0x581d9a:c.instructions+=10;goto B581d9a;
case 0x581da0:c.instructions+=9;goto B581da0;
case 0x581da2:c.instructions+=8;goto B581da2;
case 0x581da3:c.instructions+=7;goto B581da3;
case 0x581da6:c.instructions+=6;goto B581da6;
case 0x581da8:c.instructions+=5;goto B581da8;
case 0x581daa:c.instructions+=4;goto B581daa;
case 0x581dad:c.instructions+=3;goto B581dad;
case 0x581db3:c.instructions+=2;goto B581db3;
case 0x581db7:c.instructions+=1;goto B581db7;
case 0x581db9:goto L581db9;
case 0x581dba:c.instructions+=2;goto B581dba;
case 0x581dbd:c.instructions+=1;goto B581dbd;
case 0x581dbe:goto L581dbe;
case 0x581dc3:c.instructions+=5;goto B581dc3;
case 0x581dc5:c.instructions+=4;goto B581dc5;
case 0x581dc7:c.instructions+=3;goto B581dc7;
case 0x581dc9:c.instructions+=2;goto B581dc9;
case 0x581dcf:c.instructions+=1;goto B581dcf;
case 0x581dd1:goto L581dd1;
case 0x581dd3:goto L581dd3;
case 0x581dd7:c.instructions+=10;goto B581dd7;
case 0x581ddb:c.instructions+=9;goto B581ddb;
case 0x581dde:c.instructions+=8;goto B581dde;
case 0x581de0:c.instructions+=7;goto B581de0;
case 0x581de5:c.instructions+=6;goto B581de5;
case 0x581de7:c.instructions+=5;goto B581de7;
case 0x581de8:c.instructions+=4;goto B581de8;
case 0x581dea:c.instructions+=3;goto B581dea;
case 0x581dec:c.instructions+=2;goto B581dec;
case 0x581dee:c.instructions+=1;goto B581dee;
case 0x581df0:goto L581df0;
case 0x581df3:c.instructions+=5;goto B581df3;
case 0x581df6:c.instructions+=4;goto B581df6;
case 0x581df9:c.instructions+=3;goto B581df9;
case 0x581dfe:c.instructions+=2;goto B581dfe;
case 0x581e00:c.instructions+=1;goto B581e00;
case 0x581e02:goto L581e02;
case 0x581e06:c.instructions+=8;goto B581e06;
case 0x581e08:c.instructions+=7;goto B581e08;
case 0x581e0a:c.instructions+=6;goto B581e0a;
case 0x581e0d:c.instructions+=5;goto B581e0d;
case 0x581e0f:c.instructions+=4;goto B581e0f;
case 0x581e10:c.instructions+=3;goto B581e10;
case 0x581e12:c.instructions+=2;goto B581e12;
case 0x581e14:c.instructions+=1;goto B581e14;
case 0x581e16:goto L581e16;
case 0x581e18:c.instructions+=1;goto B581e18;
case 0x581e1a:goto L581e1a;
case 0x581e1e:c.instructions+=3;goto B581e1e;
case 0x581e20:c.instructions+=2;goto B581e20;
case 0x581e22:c.instructions+=1;goto B581e22;
case 0x581e24:goto L581e24;
case 0x581e28:c.instructions+=10;goto B581e28;
case 0x581e2a:c.instructions+=9;goto B581e2a;
case 0x581e2f:c.instructions+=8;goto B581e2f;
case 0x581e31:c.instructions+=7;goto B581e31;
case 0x581e33:c.instructions+=6;goto B581e33;
case 0x581e35:c.instructions+=5;goto B581e35;
case 0x581e36:c.instructions+=4;goto B581e36;
case 0x581e37:c.instructions+=3;goto B581e37;
case 0x581e38:c.instructions+=2;goto B581e38;
case 0x581e39:c.instructions+=1;goto B581e39;
case 0x581e40:goto L581e40;
case 0x581e42:c.instructions+=13;goto B581e42;
case 0x581e43:c.instructions+=12;goto B581e43;
case 0x581e45:c.instructions+=11;goto B581e45;
case 0x581e4a:c.instructions+=10;goto B581e4a;
case 0x581e4b:c.instructions+=9;goto B581e4b;
case 0x581e51:c.instructions+=8;goto B581e51;
case 0x581e57:c.instructions+=7;goto B581e57;
case 0x581e5d:c.instructions+=6;goto B581e5d;
case 0x581e63:c.instructions+=5;goto B581e63;
case 0x581e69:c.instructions+=4;goto B581e69;
case 0x581e6f:c.instructions+=3;goto B581e6f;
case 0x581e75:c.instructions+=2;goto B581e75;
case 0x581e7b:c.instructions+=1;goto B581e7b;
case 0x581e80:goto L581e80;
case 0x581e83:c.instructions+=3;goto B581e83;
case 0x581e85:c.instructions+=2;goto B581e85;
case 0x581e86:c.instructions+=1;goto B581e86;
case 0x581e90:goto L581e90;
case 0x581e94:c.instructions+=5;goto B581e94;
case 0x581e95:c.instructions+=4;goto B581e95;
case 0x581e97:c.instructions+=3;goto B581e97;
case 0x581e98:c.instructions+=2;goto B581e98;
case 0x581e99:c.instructions+=1;goto B581e99;
case 0x581e9e:goto L581e9e;
case 0x581ea2:c.instructions+=15;goto B581ea2;
case 0x581ea6:c.instructions+=14;goto B581ea6;
case 0x581ea8:c.instructions+=13;goto B581ea8;
case 0x581eac:c.instructions+=12;goto B581eac;
case 0x581eb0:c.instructions+=11;goto B581eb0;
case 0x581eb6:c.instructions+=10;goto B581eb6;
case 0x581eb9:c.instructions+=9;goto B581eb9;
case 0x581ebd:c.instructions+=8;goto B581ebd;
case 0x581ec3:c.instructions+=7;goto B581ec3;
case 0x581ec7:c.instructions+=6;goto B581ec7;
case 0x581ecd:c.instructions+=5;goto B581ecd;
case 0x581ed3:c.instructions+=4;goto B581ed3;
case 0x581ed7:c.instructions+=3;goto B581ed7;
case 0x581ed9:c.instructions+=2;goto B581ed9;
case 0x581edf:c.instructions+=1;goto B581edf;
case 0x581ee4:goto L581ee4;
case 0x581ee6:c.instructions+=5;goto B581ee6;
case 0x581ee7:c.instructions+=4;goto B581ee7;
case 0x581eec:c.instructions+=3;goto B581eec;
case 0x581ef2:c.instructions+=2;goto B581ef2;
case 0x581ef4:c.instructions+=1;goto B581ef4;
case 0x581ef6:goto L581ef6;
case 0x581ef7:c.instructions+=4;goto B581ef7;
case 0x581efc:c.instructions+=3;goto B581efc;
case 0x581efe:c.instructions+=2;goto B581efe;
case 0x581f00:c.instructions+=1;goto B581f00;
case 0x581f02:goto L581f02;
case 0x581f08:goto L581f08;
case 0x581f09:c.instructions+=4;goto B581f09;
case 0x581f0b:c.instructions+=3;goto B581f0b;
case 0x581f0f:c.instructions+=2;goto B581f0f;
case 0x581f13:c.instructions+=1;goto B581f13;
case 0x581f15:goto L581f15;
case 0x581f1b:goto L581f1b;
case 0x581f1f:c.instructions+=8;goto B581f1f;
case 0x581f29:c.instructions+=7;goto B581f29;
case 0x581f33:c.instructions+=6;goto B581f33;
case 0x581f3a:c.instructions+=5;goto B581f3a;
case 0x581f40:c.instructions+=4;goto B581f40;
case 0x581f46:c.instructions+=3;goto B581f46;
case 0x581f4c:c.instructions+=2;goto B581f4c;
case 0x581f4d:c.instructions+=1;goto B581f4d;
case 0x581f50:goto L581f50;
case 0x581f54:c.instructions+=5;goto B581f54;
case 0x581f55:c.instructions+=4;goto B581f55;
case 0x581f57:c.instructions+=3;goto B581f57;
case 0x581f58:c.instructions+=2;goto B581f58;
case 0x581f59:c.instructions+=1;goto B581f59;
case 0x581f5e:goto L581f5e;
case 0x581f62:c.instructions+=15;goto B581f62;
case 0x581f66:c.instructions+=14;goto B581f66;
case 0x581f6a:c.instructions+=13;goto B581f6a;
case 0x581f6e:c.instructions+=12;goto B581f6e;
case 0x581f74:c.instructions+=11;goto B581f74;
case 0x581f78:c.instructions+=10;goto B581f78;
case 0x581f7d:c.instructions+=9;goto B581f7d;
case 0x581f7f:c.instructions+=8;goto B581f7f;
case 0x581f82:c.instructions+=7;goto B581f82;
case 0x581f88:c.instructions+=6;goto B581f88;
case 0x581f8e:c.instructions+=5;goto B581f8e;
case 0x581f8f:c.instructions+=4;goto B581f8f;
case 0x581f91:c.instructions+=3;goto B581f91;
case 0x581f95:c.instructions+=2;goto B581f95;
case 0x581f99:c.instructions+=1;goto B581f99;
case 0x581f9b:goto L581f9b;
case 0x581fa1:goto L581fa1;
case 0x581fa3:c.instructions+=8;goto B581fa3;
case 0x581fad:c.instructions+=7;goto B581fad;
case 0x581fb7:c.instructions+=6;goto B581fb7;
case 0x581fbe:c.instructions+=5;goto B581fbe;
case 0x581fc4:c.instructions+=4;goto B581fc4;
case 0x581fca:c.instructions+=3;goto B581fca;
case 0x581fd0:c.instructions+=2;goto B581fd0;
case 0x581fd1:c.instructions+=1;goto B581fd1;
case 0x581fe0:goto L581fe0;
case 0x581fe4:c.instructions+=4;goto B581fe4;
case 0x581fea:c.instructions+=3;goto B581fea;
case 0x581fec:c.instructions+=2;goto B581fec;
case 0x581fef:c.instructions+=1;goto B581fef;
case 0x581ff1:goto L581ff1;
case 0x581ff3:c.instructions+=1;goto B581ff3;
case 0x581ff9:goto L581ff9;
case 0x581fff:c.instructions+=1;goto B581fff;
default:missing_instruction(c.pc);}
B581002:L581002:{c.instructions+=2;NFSU2_TR(0x581002);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581003:{NFSU2_TR(0x581003);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581008ull));
TAIL_STATIC(0x4400d0u,440);
}
B581008:L581008:{c.instructions+=5;NFSU2_TR(0x581008);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58100a:{NFSU2_TR(0x58100a);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58100e:{NFSU2_TR(0x58100e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581010:{NFSU2_TR(0x581010);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581011:{NFSU2_TR(0x581011);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581016ull));
TAIL_STATIC(0x494550u,494);
}
B581016:L581016:{c.instructions+=5;NFSU2_TR(0x581016);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B581019:{NFSU2_TR(0x581019);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58101a:{NFSU2_TR(0x58101a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58101b:{NFSU2_TR(0x58101b);
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
B58101e:{NFSU2_TR(0x58101e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B581020:L581020:{c.instructions+=4;NFSU2_TR(0x581020);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B581023:{NFSU2_TR(0x581023);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B581025:{NFSU2_TR(0x581025);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B581027:{NFSU2_TR(0x581027);
if(r1(R+518)){{goto L58102c;}}
}
B581029:L581029:{c.instructions+=1;NFSU2_TR(0x581029);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58102c:L58102c:{c.instructions+=4;NFSU2_TR(0x58102c);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+0))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+0)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B58102f:{NFSU2_TR(0x58102f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
w4(U+4,u32(0x7a0e00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B581036:{NFSU2_TR(0x581036);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w4(U+4,u32(0x580ee0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B58103d:{NFSU2_TR(0x58103d);
if(r1(R+518)){{goto L581042;}}
}
B58103f:L58103f:{c.instructions+=1;NFSU2_TR(0x58103f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B581042:L581042:{c.instructions+=1;NFSU2_TR(0x581042);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B581050:L581050:{c.instructions+=5;NFSU2_TR(0x581050);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581051:{NFSU2_TR(0x581051);
__builtin_memmove((R+24),(R+4),4);
}
B581053:{NFSU2_TR(0x581053);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B581059:{NFSU2_TR(0x581059);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58105b:{NFSU2_TR(0x58105b);
if(r1(R+518)){{goto L5810a0;}}
}
B58105d:L58105d:{c.instructions+=3;NFSU2_TR(0x58105d);
__builtin_memmove((R+0),gp(0x865564),1);
}
B581062:{NFSU2_TR(0x581062);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B581064:{NFSU2_TR(0x581064);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58109a;}}
}
B581066:L581066:{c.instructions+=4;NFSU2_TR(0x581066);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B581069:{NFSU2_TR(0x581069);
__builtin_memmove((R+4),gp(0x7fb724),4);
}
B58106f:{NFSU2_TR(0x58106f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B581071:{NFSU2_TR(0x581071);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L581091;}}
}
B581073:L581073:{c.instructions+=3;NFSU2_TR(0x581073);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B581076:{NFSU2_TR(0x581076);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B581078:{NFSU2_TR(0x581078);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58109a;}}
}
B58107a:L58107a:{c.instructions+=2;NFSU2_TR(0x58107a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58107c:{NFSU2_TR(0x58107c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L581091;}}
}
B58107e:L58107e:{c.instructions+=3;NFSU2_TR(0x58107e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B581084:{NFSU2_TR(0x581084);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B581086:{NFSU2_TR(0x581086);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L581091;}}
}
B581088:L581088:{c.instructions+=2;NFSU2_TR(0x581088);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B58108f:{NFSU2_TR(0x58108f);
{goto L5810a0;}
}
B581091:L581091:{c.instructions+=2;NFSU2_TR(0x581091);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B581094:{NFSU2_TR(0x581094);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5810a0;}}
}
B581096:L581096:{c.instructions+=2;NFSU2_TR(0x581096);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B581098:{NFSU2_TR(0x581098);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5810a0;}}
}
B58109a:L58109a:{c.instructions+=1;NFSU2_TR(0x58109a);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5810a0:L5810a0:{c.instructions+=3;NFSU2_TR(0x5810a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5810a3:{NFSU2_TR(0x5810a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5810a5:{NFSU2_TR(0x5810a5);
if(r1(R+518)){{goto L5810bc;}}
}
B5810a7:L5810a7:{c.instructions+=2;NFSU2_TR(0x5810a7);
__builtin_memmove((R+4),(R+24),4);
}
B5810a9:{NFSU2_TR(0x5810a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5810aeull));
TAIL_STATIC(0x5806b0u,580);
}
B5810ae:L5810ae:{c.instructions+=3;NFSU2_TR(0x5810ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5810b1:{NFSU2_TR(0x5810b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5810b3:{NFSU2_TR(0x5810b3);
if(r1(R+518)){{goto L5810bc;}}
}
B5810b5:L5810b5:{c.instructions+=2;NFSU2_TR(0x5810b5);
__builtin_memmove((R+4),(R+24),4);
}
B5810b7:{NFSU2_TR(0x5810b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5810bcull));
TAIL_STATIC(0x57d060u,57d);
}
B5810bc:L5810bc:{c.instructions+=2;NFSU2_TR(0x5810bc);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5810bf:{NFSU2_TR(0x5810bf);
if(r1(R+518)){{goto L5810f9;}}
}
B5810c1:L5810c1:{c.instructions+=3;NFSU2_TR(0x5810c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5810c4:{NFSU2_TR(0x5810c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5810c6:{NFSU2_TR(0x5810c6);
if(r1(R+518)){{goto L5810d1;}}
}
B5810c8:L5810c8:{c.instructions+=2;NFSU2_TR(0x5810c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5810cf:{NFSU2_TR(0x5810cf);
{goto L5810f2;}
}
B5810d1:L5810d1:{c.instructions+=3;NFSU2_TR(0x5810d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5810d4:{NFSU2_TR(0x5810d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5810d6:{NFSU2_TR(0x5810d6);
if(r1(R+518)){{goto L5810f2;}}
}
B5810d8:L5810d8:{c.instructions+=3;NFSU2_TR(0x5810d8);
__builtin_memmove((R+0),gp(0x86514c),4);
}
B5810dd:{NFSU2_TR(0x5810dd);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x80000003ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B5810e2:{NFSU2_TR(0x5810e2);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5810e9;}}
}
B5810e4:L5810e4:{c.instructions+=3;NFSU2_TR(0x5810e4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5810e5:{NFSU2_TR(0x5810e5);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xfffffffcull))));
}
B5810e8:{NFSU2_TR(0x5810e8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5810e9:L5810e9:{c.instructions+=4;NFSU2_TR(0x5810e9);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B5810eb:{NFSU2_TR(0x5810eb);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B5810ed:{NFSU2_TR(0x5810ed);
w4(R+0,u32(0-u32(r4(R+0))));
}
B5810ef:{NFSU2_TR(0x5810ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5810f2:L5810f2:{c.instructions+=2;NFSU2_TR(0x5810f2);
__builtin_memmove((R+4),(R+24),4);
}
B5810f4:{NFSU2_TR(0x5810f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5810f9ull));
TAIL_STATIC(0x5718b0u,571);
}
B5810f9:L5810f9:{c.instructions+=2;NFSU2_TR(0x5810f9);
__builtin_memmove((R+4),(R+24),4);
}
B5810fb:{NFSU2_TR(0x5810fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581100ull));
TAIL_STATIC(0x57d000u,57d);
}
B581100:L581100:{c.instructions+=7;NFSU2_TR(0x581100);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B581106:{NFSU2_TR(0x581106);
__builtin_memmove((R+4),gp(0x7fb724),4);
}
B58110c:{NFSU2_TR(0x58110c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58110e:{NFSU2_TR(0x58110e);
__builtin_memmove((R+8),(R+518),1);
}
B581111:{NFSU2_TR(0x581111);
w4(R+4,u32(0x865564ull));
}
B581116:{NFSU2_TR(0x581116);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581117:{NFSU2_TR(0x581117);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58111cull));
TAIL_STATIC(0x57e100u,57e);
}
B58111c:L58111c:{c.instructions+=3;NFSU2_TR(0x58111c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B581123:{NFSU2_TR(0x581123);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B581124:{NFSU2_TR(0x581124);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B581130:L581130:{c.instructions+=5;NFSU2_TR(0x581130);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581131:{NFSU2_TR(0x581131);
__builtin_memmove((R+20),(R+4),4);
}
B581133:{NFSU2_TR(0x581133);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B581136:{NFSU2_TR(0x581136);
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
B581138:{NFSU2_TR(0x581138);
if(r1(R+518)){{goto L581173;}}
}
B58113a:L58113a:{c.instructions+=5;NFSU2_TR(0x58113a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58113b:{NFSU2_TR(0x58113b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58113c:{NFSU2_TR(0x58113c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58113d:{NFSU2_TR(0x58113d);
w4(R+4,u32(0x8651a4ull));
}
B581142:{NFSU2_TR(0x581142);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581147ull));
TAIL_STATIC(0x502fd0u,502);
}
B581147:L581147:{c.instructions+=3;NFSU2_TR(0x581147);
__builtin_memmove((R+28),(R+0),4);
}
B581149:{NFSU2_TR(0x581149);
w4(R+12,u32(0x8ull));
}
B58114e:{NFSU2_TR(0x58114e);
__builtin_memmove((R+28),(R+28),4);
}
B581150:L581150:{c.instructions+=3;NFSU2_TR(0x581150);
__builtin_memmove((R+24),gp(0x8651a8),4);
}
B581156:{NFSU2_TR(0x581156);
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
B581158:{NFSU2_TR(0x581158);
if(r1(R+518)){{goto L58116c;}}
}
B58115a:L58115a:{c.instructions+=1;NFSU2_TR(0x58115a);
__builtin_memmove((R+12),(R+12),4);
}
B581160:L581160:{c.instructions+=2;NFSU2_TR(0x581160);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B581163:{NFSU2_TR(0x581163);
if(r1(R+518)){{goto L581175;}}
}
B581165:L581165:{c.instructions+=3;NFSU2_TR(0x581165);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B581168:{NFSU2_TR(0x581168);
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
B58116a:{NFSU2_TR(0x58116a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x581160u);}goto L581160;}}
}
B58116c:L58116c:{c.instructions+=4;NFSU2_TR(0x58116c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58116d:{NFSU2_TR(0x58116d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58116e:{NFSU2_TR(0x58116e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B581172:{NFSU2_TR(0x581172);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B581173:L581173:{c.instructions+=2;NFSU2_TR(0x581173);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B581174:{NFSU2_TR(0x581174);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B581175:L581175:{c.instructions+=3;NFSU2_TR(0x581175);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58117b:{NFSU2_TR(0x58117b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58117d:{NFSU2_TR(0x58117d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58118f;}}
}
B58117f:L58117f:{c.instructions+=1;NFSU2_TR(0x58117f);
}
B581180:L581180:{c.instructions+=1;NFSU2_TR(0x581180);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581185ull));
TAIL_STATIC(0x57ef60u,57e);
}
B581185:L581185:{c.instructions+=3;NFSU2_TR(0x581185);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58118b:{NFSU2_TR(0x58118b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58118d:{NFSU2_TR(0x58118d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x581180u);}goto L581180;}}
}
B58118f:L58118f:{c.instructions+=6;NFSU2_TR(0x58118f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B581192:{NFSU2_TR(0x581192);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B581194:{NFSU2_TR(0x581194);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B581196:{NFSU2_TR(0x581196);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B581199:{NFSU2_TR(0x581199);
__builtin_memmove((R+4),(R+24),4);
}
B58119b:{NFSU2_TR(0x58119b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5811a0ull));
TAIL_STATIC(0x577d80u,577);
}
B5811a0:L5811a0:{c.instructions+=4;NFSU2_TR(0x5811a0);
__builtin_memmove((R+0),gp(0x864f78),4);
}
B5811a5:{NFSU2_TR(0x5811a5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5811a6:{NFSU2_TR(0x5811a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5811a7:{NFSU2_TR(0x5811a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5811acull));
TAIL_STATIC(0x43f920u,43f);
}
B5811ac:L5811ac:{c.instructions+=2;NFSU2_TR(0x5811ac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5811af:{NFSU2_TR(0x5811af);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x581150u);}goto L581150;}
}
B5811c0:L5811c0:{c.instructions+=5;NFSU2_TR(0x5811c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5811c3:{NFSU2_TR(0x5811c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5811c4:{NFSU2_TR(0x5811c4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5811c5:{NFSU2_TR(0x5811c5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5811cd:{NFSU2_TR(0x5811cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5811d2ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B5811d2:L5811d2:{c.instructions+=5;NFSU2_TR(0x5811d2);
__builtin_memmove((R+28),(R+0),4);
}
B5811d4:{NFSU2_TR(0x5811d4);
__builtin_memmove((R+0),gp(0x864f4c),4);
}
B5811d9:{NFSU2_TR(0x5811d9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5811db:{NFSU2_TR(0x5811db);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5811dd:{NFSU2_TR(0x5811dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58156f;}}
}
B5811e3:L5811e3:{c.instructions+=1;NFSU2_TR(0x5811e3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5811e4:L5811e4:{c.instructions+=1;NFSU2_TR(0x5811e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5811e9ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B5811e9:L5811e9:{c.instructions+=2;NFSU2_TR(0x5811e9);
__builtin_memmove(gp(0x864f44),(R+0),4);
}
B5811ee:{NFSU2_TR(0x5811ee);
if(mod_hook_table[3]){SPILL();c.pc=0x5811eeu;mod_hook_table[3](c);SPILL();if(c.pc!=0x5811eeu){TAIL_DYNAMIC(c.pc);}}
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5811f3ull));
TAIL_STATIC(0x5bcfa0u,5bc);
}
B5811f3:L5811f3:{c.instructions+=3;NFSU2_TR(0x5811f3);
__builtin_memmove((R+0),gp(0x865138),4);
}
B5811f8:{NFSU2_TR(0x5811f8);
__builtin_memmove(gp(0x866640),(R+0),4);
}
B5811fd:{NFSU2_TR(0x5811fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581202ull));
TAIL_STATIC(0x57d860u,57d);
}
B581202:L581202:{c.instructions+=3;NFSU2_TR(0x581202);
__builtin_memmove((R+0),gp(0x865484),4);
}
B581207:{NFSU2_TR(0x581207);
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
B581209:{NFSU2_TR(0x581209);
if(r1(R+518)){{goto L58123c;}}
}
B58120b:L58120b:{c.instructions+=1;NFSU2_TR(0x58120b);
{goto L581210;}
}
B581210:L581210:{c.instructions+=7;NFSU2_TR(0x581210);
__builtin_memmove((R+24),(R+0),4);
}
B581212:{NFSU2_TR(0x581212);
__builtin_memmove((R+0),gp(0x865488),4);
}
B581217:{NFSU2_TR(0x581217);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581218:{NFSU2_TR(0x581218);
__builtin_memmove(gp(0x865484),(R+12),4);
}
B58121e:{NFSU2_TR(0x58121e);
__builtin_memmove(gp(0x865488),(R+12),4);
}
B581224:{NFSU2_TR(0x581224);
__builtin_memmove(gp(0x86548c),(R+12),4);
}
B58122a:{NFSU2_TR(0x58122a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58122cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B58122c:L58122c:{c.instructions+=4;NFSU2_TR(0x58122c);
__builtin_memmove((R+0),gp(0x865484),4);
}
B581231:{NFSU2_TR(0x581231);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B581234:{NFSU2_TR(0x581234);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B581236:{NFSU2_TR(0x581236);
if(r1(R+518)){{goto L58123c;}}
}
B581238:L581238:{c.instructions+=2;NFSU2_TR(0x581238);
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
B58123a:{NFSU2_TR(0x58123a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x581210u);}goto L581210;}}
}
B58123c:L58123c:{c.instructions+=3;NFSU2_TR(0x58123c);
__builtin_memmove((R+0),gp(0x865490),4);
}
B581241:{NFSU2_TR(0x581241);
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
B581243:{NFSU2_TR(0x581243);
if(r1(R+518)){{goto L581247;}}
}
B581245:L581245:{c.instructions+=1;NFSU2_TR(0x581245);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581247ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B581247:L581247:{c.instructions+=1;NFSU2_TR(0x581247);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58124cull));
TAIL_STATIC(0x4c1210u,4c1);
}
B58124c:L58124c:{c.instructions+=3;NFSU2_TR(0x58124c);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B581252:{NFSU2_TR(0x581252);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B581254:{NFSU2_TR(0x581254);
if(r1(R+518)){{goto L581269;}}
}
B581256:L581256:{c.instructions+=1;NFSU2_TR(0x581256);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58125bull));
TAIL_STATIC(0x600fa0u,600);
}
B58125b:L58125b:{c.instructions+=4;NFSU2_TR(0x58125b);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B581261:{NFSU2_TR(0x581261);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581262:{NFSU2_TR(0x581262);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581264:{NFSU2_TR(0x581264);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581269ull));
TAIL_STATIC(0x601020u,601);
}
B581269:L581269:{c.instructions+=3;NFSU2_TR(0x581269);
__builtin_memmove((R+0),gp(0x865484),4);
}
B58126e:{NFSU2_TR(0x58126e);
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
B581270:{NFSU2_TR(0x581270);
if(r1(R+518)){{goto L58129e;}}
}
B581272:L581272:{c.instructions+=7;NFSU2_TR(0x581272);
__builtin_memmove((R+24),(R+0),4);
}
B581274:{NFSU2_TR(0x581274);
__builtin_memmove((R+0),gp(0x865488),4);
}
B581279:{NFSU2_TR(0x581279);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58127a:{NFSU2_TR(0x58127a);
__builtin_memmove(gp(0x865484),(R+12),4);
}
B581280:{NFSU2_TR(0x581280);
__builtin_memmove(gp(0x865488),(R+12),4);
}
B581286:{NFSU2_TR(0x581286);
__builtin_memmove(gp(0x86548c),(R+12),4);
}
B58128c:{NFSU2_TR(0x58128c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58128eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B58128e:L58128e:{c.instructions+=4;NFSU2_TR(0x58128e);
__builtin_memmove((R+0),gp(0x865484),4);
}
B581293:{NFSU2_TR(0x581293);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B581296:{NFSU2_TR(0x581296);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B581298:{NFSU2_TR(0x581298);
if(r1(R+518)){{goto L58129e;}}
}
B58129a:L58129a:{c.instructions+=2;NFSU2_TR(0x58129a);
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
B58129c:{NFSU2_TR(0x58129c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x581272u);}goto L581272;}}
}
B58129e:L58129e:{c.instructions+=3;NFSU2_TR(0x58129e);
__builtin_memmove((R+0),gp(0x865490),4);
}
B5812a3:{NFSU2_TR(0x5812a3);
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
B5812a5:{NFSU2_TR(0x5812a5);
if(r1(R+518)){{goto L5812a9;}}
}
B5812a7:L5812a7:{c.instructions+=1;NFSU2_TR(0x5812a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5812a9ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5812a9:L5812a9:{c.instructions+=1;NFSU2_TR(0x5812a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5812aeull));
TAIL_STATIC(0x4022c0u,402);
}
B5812ae:L5812ae:{c.instructions+=4;NFSU2_TR(0x5812ae);
__builtin_memmove((R+0),gp(0x8654a4),4);
}
B5812b3:{NFSU2_TR(0x5812b3);
w4(R+24,u32(0x6ull));
}
B5812b8:{NFSU2_TR(0x5812b8);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5812ba:{NFSU2_TR(0x5812ba);
if(r1(R+518)){{goto L5812c1;}}
}
B5812bc:L5812bc:{c.instructions+=1;NFSU2_TR(0x5812bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5812c1ull));
TAIL_STATIC(0x57ee00u,57e);
}
B5812c1:L5812c1:{c.instructions+=1;NFSU2_TR(0x5812c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5812c6ull));
TAIL_STATIC(0x5eb390u,5eb);
}
B5812c6:L5812c6:{c.instructions+=3;NFSU2_TR(0x5812c6);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B5812cc:{NFSU2_TR(0x5812cc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5812ce:{NFSU2_TR(0x5812ce);
if(r1(R+518)){{goto L5812d5;}}
}
B5812d0:L5812d0:{c.instructions+=1;NFSU2_TR(0x5812d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5812d5ull));
TAIL_STATIC(0x57be30u,57b);
}
B5812d5:L5812d5:{c.instructions+=1;NFSU2_TR(0x5812d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5812daull));
TAIL_STATIC(0x43bdf0u,43b);
}
B5812da:L5812da:{c.instructions+=3;NFSU2_TR(0x5812da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5812db:{NFSU2_TR(0x5812db);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5812dc:{NFSU2_TR(0x5812dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5812e1ull));
TAIL_STATIC(0x43be20u,43b);
}
B5812e1:L5812e1:{c.instructions+=4;NFSU2_TR(0x5812e1);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5812e7:{NFSU2_TR(0x5812e7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5812ea:{NFSU2_TR(0x5812ea);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5812ed:{NFSU2_TR(0x5812ed);
if(mod_hook_table[1]){SPILL();c.pc=0x5812edu;mod_hook_table[1](c);SPILL();if(c.pc!=0x5812edu){TAIL_DYNAMIC(c.pc);}}
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5812f2ull));
TAIL_STATIC(0x57ead0u,57e);
}
B5812f2:L5812f2:{c.instructions+=2;NFSU2_TR(0x5812f2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5812f5:{NFSU2_TR(0x5812f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5812faull));
TAIL_STATIC(0x43bdf0u,43b);
}
B5812fa:L5812fa:{c.instructions+=3;NFSU2_TR(0x5812fa);
w4(R+4,u32(0x828770ull));
}
B5812ff:{NFSU2_TR(0x5812ff);
__builtin_memmove((R+28),(R+0),4);
}
B581301:{NFSU2_TR(0x581301);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581306ull));
TAIL_STATIC(0x456940u,456);
}
B581306:L581306:{c.instructions+=3;NFSU2_TR(0x581306);
w4(R+4,u32(0x89cf48ull));
}
B58130b:{NFSU2_TR(0x58130b);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B581310:{NFSU2_TR(0x581310);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581315ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B581315:L581315:{c.instructions+=2;NFSU2_TR(0x581315);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B581317:{NFSU2_TR(0x581317);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58132a;}}
}
B581319:L581319:{c.instructions+=3;NFSU2_TR(0x581319);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B58131e:{NFSU2_TR(0x58131e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B581320:{NFSU2_TR(0x581320);
if(r1(R+518)){{goto L58132a;}}
}
B581322:L581322:{c.instructions+=2;NFSU2_TR(0x581322);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B581324:{NFSU2_TR(0x581324);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58132a;}}
}
B581326:L581326:{c.instructions+=2;NFSU2_TR(0x581326);
w1(R+0,u8(0x1ull));
}
B581328:{NFSU2_TR(0x581328);
{goto L58132c;}
}
B58132a:L58132a:{c.instructions+=1;NFSU2_TR(0x58132a);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B58132c:L58132c:{c.instructions+=3;NFSU2_TR(0x58132c);
w4(R+0,u32(r1(R+0)));
}
B58132f:{NFSU2_TR(0x58132f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B581331:{NFSU2_TR(0x581331);
if(r1(R+518)){{goto L581349;}}
}
B581333:L581333:{c.instructions+=3;NFSU2_TR(0x581333);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581334:{NFSU2_TR(0x581334);
w4(R+4,u32(0x89cf48ull));
}
B581339:{NFSU2_TR(0x581339);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58133eull));
TAIL_STATIC(0x601a60u,601);
}
B58133e:L58133e:{c.instructions+=2;NFSU2_TR(0x58133e);
{u32 ea_=u32(u32(8802644u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B581344:{NFSU2_TR(0x581344);
{goto L581465;}
}
B581349:L581349:{c.instructions+=2;NFSU2_TR(0x581349);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58134f:{NFSU2_TR(0x58134f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L581459;}}
}
B581355:L581355:{c.instructions+=2;NFSU2_TR(0x581355);
__builtin_memmove((R+4),gp(0x890080),4);
}
B58135b:{NFSU2_TR(0x58135b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581360ull));
TAIL_STATIC(0x5ea2b0u,5ea);
}
B581360:L581360:{c.instructions+=2;NFSU2_TR(0x581360);
__builtin_memmove((R+4),gp(0x890080),4);
}
B581366:{NFSU2_TR(0x581366);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58136bull));
TAIL_STATIC(0x5ea320u,5ea);
}
B58136b:L58136b:{c.instructions+=2;NFSU2_TR(0x58136b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58136d:{NFSU2_TR(0x58136d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58141d;}}
}
B581373:L581373:{c.instructions+=3;NFSU2_TR(0x581373);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B581379:{NFSU2_TR(0x581379);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B58137c:{NFSU2_TR(0x58137c);
if(r1(R+518)){{goto L58141d;}}
}
B581382:L581382:{c.instructions+=2;NFSU2_TR(0x581382);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B581388:{NFSU2_TR(0x581388);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58138dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x581050u);}goto L581050;}
}
B58138d:L58138d:{c.instructions+=3;NFSU2_TR(0x58138d);
__builtin_memmove((R+8),gp(0x8650b8),4);
}
B581393:{NFSU2_TR(0x581393);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B581396:{NFSU2_TR(0x581396);
if(r1(R+518)){{goto L5813c4;}}
}
B581398:L581398:{c.instructions+=3;NFSU2_TR(0x581398);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581399:{NFSU2_TR(0x581399);
w4(R+4,u32(0x89cf48ull));
}
B58139e:{NFSU2_TR(0x58139e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5813a3ull));
TAIL_STATIC(0x601a60u,601);
}
B5813a3:L5813a3:{c.instructions+=3;NFSU2_TR(0x5813a3);
{u32 ea_=u32(u32(8802644u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5813a9:{NFSU2_TR(0x5813a9);
__builtin_memmove(gp(0x7fb728),(R+12),4);
}
B5813af:{NFSU2_TR(0x5813af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5813b4ull));
TAIL_STATIC(0x5809c0u,580);
}
B5813b4:L5813b4:{c.instructions+=2;NFSU2_TR(0x5813b4);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B5813ba:{NFSU2_TR(0x5813ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5813bfull));
TAIL_STATIC(0x578e10u,578);
}
B5813bf:L5813bf:{c.instructions+=1;NFSU2_TR(0x5813bf);
{goto L581444;}
}
B5813c4:L5813c4:{c.instructions+=2;NFSU2_TR(0x5813c4);
__builtin_memmove((R+4),gp(0x890080),4);
}
B5813ca:{NFSU2_TR(0x5813ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5813cfull));
TAIL_STATIC(0x5ea360u,5ea);
}
B5813cf:L5813cf:{c.instructions+=4;NFSU2_TR(0x5813cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5813d0:{NFSU2_TR(0x5813d0);
w4(R+4,u32(0x89cf48ull));
}
B5813d5:{NFSU2_TR(0x5813d5);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5813d8:{NFSU2_TR(0x5813d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5813ddull));
TAIL_STATIC(0x601a60u,601);
}
B5813dd:L5813dd:{c.instructions+=4;NFSU2_TR(0x5813dd);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5813e1:{NFSU2_TR(0x5813e1);
{u32 ea_=u32(u32(8802644u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5813e7:{NFSU2_TR(0x5813e7);
__builtin_memmove(gp(0x7fb728),(R+12),4);
}
B5813ed:{NFSU2_TR(0x5813ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5813f2ull));
TAIL_STATIC(0x5809c0u,580);
}
B5813f2:L5813f2:{c.instructions+=2;NFSU2_TR(0x5813f2);
w4(R+4,u32(0x89cf48ull));
}
B5813f7:{NFSU2_TR(0x5813f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5813fcull));
TAIL_STATIC(0x5f0130u,5f0);
}
B5813fc:L5813fc:{c.instructions+=4;NFSU2_TR(0x5813fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B581400:{NFSU2_TR(0x581400);
__builtin_memmove((R+4),gp(0x890080),4);
}
B581406:{NFSU2_TR(0x581406);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581407:{NFSU2_TR(0x581407);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58140cull));
TAIL_STATIC(0x609ce0u,609);
}
B58140c:L58140c:{c.instructions+=3;NFSU2_TR(0x58140c);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B581412:{NFSU2_TR(0x581412);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B581416:{NFSU2_TR(0x581416);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58141bull));
TAIL_STATIC(0x578e10u,578);
}
B58141b:L58141b:{c.instructions+=1;NFSU2_TR(0x58141b);
{goto L581444;}
}
B58141d:L58141d:{c.instructions+=3;NFSU2_TR(0x58141d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58141e:{NFSU2_TR(0x58141e);
w4(R+4,u32(0x89cf48ull));
}
B581423:{NFSU2_TR(0x581423);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581428ull));
TAIL_STATIC(0x601a60u,601);
}
B581428:L581428:{c.instructions+=3;NFSU2_TR(0x581428);
{u32 ea_=u32(u32(8802644u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B58142e:{NFSU2_TR(0x58142e);
__builtin_memmove(gp(0x7fb728),(R+12),4);
}
B581434:{NFSU2_TR(0x581434);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581439ull));
TAIL_STATIC(0x5809c0u,580);
}
B581439:L581439:{c.instructions+=2;NFSU2_TR(0x581439);
__builtin_memmove((R+4),gp(0x890080),4);
}
B58143f:{NFSU2_TR(0x58143f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581444ull));
TAIL_STATIC(0x5f1390u,5f1);
}
B581444:L581444:{c.instructions+=2;NFSU2_TR(0x581444);
u8 U[14];
__builtin_memmove((U+6),gp(0x890088),4);
w1(R+512,u8((r4(U+6))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+12)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58144a:{NFSU2_TR(0x58144a);
if(r1(R+518)){{goto L581470;}}
}
B58144c:L58144c:{c.instructions+=2;NFSU2_TR(0x58144c);
__builtin_memmove(gp(0x890088),(R+12),4);
}
B581452:{NFSU2_TR(0x581452);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581457ull));
TAIL_STATIC(0x4022c0u,402);
}
B581457:L581457:{c.instructions+=1;NFSU2_TR(0x581457);
{goto L581470;}
}
B581459:L581459:{c.instructions+=2;NFSU2_TR(0x581459);
__builtin_memmove((R+4),gp(0x865198),4);
}
B58145f:{NFSU2_TR(0x58145f);
__builtin_memmove(gp(0x865154),(R+4),4);
}
B581465:L581465:{c.instructions+=2;NFSU2_TR(0x581465);
__builtin_memmove(gp(0x7fb728),(R+12),4);
}
B58146b:{NFSU2_TR(0x58146b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581470ull));
TAIL_STATIC(0x5809c0u,580);
}
B581470:L581470:{c.instructions+=1;NFSU2_TR(0x581470);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581475ull));
TAIL_STATIC(0x4022c0u,402);
}
B581475:L581475:{c.instructions+=1;NFSU2_TR(0x581475);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58147aull));
TAIL_STATIC(0x4022c0u,402);
}
B58147a:L58147a:{c.instructions+=4;NFSU2_TR(0x58147a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58147e:{NFSU2_TR(0x58147e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58147f:{NFSU2_TR(0x58147f);
w4(R+4,u32(0x89cf48ull));
}
B581484:{NFSU2_TR(0x581484);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581489ull));
TAIL_STATIC(0x60aee0u,60a);
}
B581489:L581489:{c.instructions+=1;NFSU2_TR(0x581489);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58148eull));
TAIL_STATIC(0x5663b0u,566);
}
B58148e:L58148e:{c.instructions+=1;NFSU2_TR(0x58148e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581493ull));
TAIL_STATIC(0x600900u,600);
}
B581493:L581493:{c.instructions+=1;NFSU2_TR(0x581493);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581498ull));
TAIL_STATIC(0x44efe0u,44e);
}
B581498:L581498:{c.instructions+=3;NFSU2_TR(0x581498);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B58149e:{NFSU2_TR(0x58149e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5814a0:{NFSU2_TR(0x5814a0);
if(r1(R+518)){{goto L5814ad;}}
}
B5814a2:L5814a2:{c.instructions+=3;NFSU2_TR(0x5814a2);
__builtin_memmove((R+0),gp(0x865198),4);
}
B5814a7:{NFSU2_TR(0x5814a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5814a8:{NFSU2_TR(0x5814a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5814adull));
TAIL_STATIC(0x483b40u,483);
}
B5814ad:L5814ad:{c.instructions+=1;NFSU2_TR(0x5814ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5814b2ull));
TAIL_STATIC(0x572610u,572);
}
B5814b2:L5814b2:{c.instructions+=1;NFSU2_TR(0x5814b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5814b7ull));
TAIL_STATIC(0x5728c0u,572);
}
B5814b7:L5814b7:{c.instructions+=2;NFSU2_TR(0x5814b7);
w4(R+4,u32(0x88eb00ull));
}
B5814bc:{NFSU2_TR(0x5814bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5814c1ull));
TAIL_STATIC(0x5e79a0u,5e7);
}
B5814c1:L5814c1:{c.instructions+=2;NFSU2_TR(0x5814c1);
__builtin_memmove(gp(0x864f50),(R+12),4);
}
B5814c7:{NFSU2_TR(0x5814c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5814ccull));
TAIL_STATIC(0x57ef60u,57e);
}
B5814cc:L5814cc:{c.instructions+=1;NFSU2_TR(0x5814cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5814d1ull));
TAIL_STATIC(0x5ce850u,5ce);
}
B5814d1:L5814d1:{c.instructions+=1;NFSU2_TR(0x5814d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5814d6ull));
TAIL_STATIC(0x5ce8a0u,5ce);
}
B5814d6:L5814d6:{c.instructions+=1;NFSU2_TR(0x5814d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5814dbull));
TAIL_STATIC(0x5d2850u,5d2);
}
B5814db:L5814db:{c.instructions+=1;NFSU2_TR(0x5814db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5814e0ull));
TAIL_STATIC(0x4022c0u,402);
}
B5814e0:L5814e0:{c.instructions+=1;NFSU2_TR(0x5814e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5814e5ull));
TAIL_STATIC(0x4022c0u,402);
}
B5814e5:L5814e5:{c.instructions+=1;NFSU2_TR(0x5814e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5814eaull));
TAIL_STATIC(0x57a050u,57a);
}
B5814ea:L5814ea:{c.instructions+=1;NFSU2_TR(0x5814ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5814efull));
TAIL_STATIC(0x57a0e0u,57a);
}
B5814ef:L5814ef:{c.instructions+=2;NFSU2_TR(0x5814ef);
u8 U[10];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
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
B5814f3:{NFSU2_TR(0x5814f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5814ff;}}
}
B5814f5:L5814f5:{c.instructions+=2;NFSU2_TR(0x5814f5);
w4(R+4,u32(0x89cf48ull));
}
B5814fa:{NFSU2_TR(0x5814fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5814ffull));
TAIL_STATIC(0x5f0140u,5f0);
}
B5814ff:L5814ff:{c.instructions+=1;NFSU2_TR(0x5814ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581504ull));
TAIL_STATIC(0x4022c0u,402);
}
B581504:L581504:{c.instructions+=4;NFSU2_TR(0x581504);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B581508:{NFSU2_TR(0x581508);
w4(R+0,u32(0x3ull));
}
B58150d:{NFSU2_TR(0x58150d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58150f:{NFSU2_TR(0x58150f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L581515;}}
}
B581511:L581511:{c.instructions+=1;NFSU2_TR(0x581511);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B581515:L581515:{c.instructions+=1;NFSU2_TR(0x581515);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58151aull));
TAIL_STATIC(0x43bdf0u,43b);
}
B58151a:L58151a:{c.instructions+=2;NFSU2_TR(0x58151a);
__builtin_memmove(gp(0x864f48),(R+0),4);
}
B58151f:{NFSU2_TR(0x58151f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581524ull));
TAIL_STATIC(0x570c00u,570);
}
B581524:L581524:{c.instructions+=2;NFSU2_TR(0x581524);
u8 U[14];
__builtin_memmove((U+6),gp(0x86511c),4);
w1(R+512,u8((r4(U+6))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+12)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58152a:{NFSU2_TR(0x58152a);
if(r1(R+518)){{goto L581537;}}
}
B58152c:L58152c:{c.instructions+=2;NFSU2_TR(0x58152c);
__builtin_memmove(gp(0x86511c),(R+12),4);
}
B581532:{NFSU2_TR(0x581532);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581537ull));
TAIL_STATIC(0x4022c0u,402);
}
B581537:L581537:{c.instructions+=2;NFSU2_TR(0x581537);
u8 U[14];
__builtin_memmove((U+6),gp(0x865120),4);
w1(R+512,u8((r4(U+6))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+12)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58153d:{NFSU2_TR(0x58153d);
if(r1(R+518)){{goto L58154a;}}
}
B58153f:L58153f:{c.instructions+=2;NFSU2_TR(0x58153f);
__builtin_memmove(gp(0x865120),(R+12),4);
}
B581545:{NFSU2_TR(0x581545);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58154aull));
TAIL_STATIC(0x4022c0u,402);
}
B58154a:L58154a:{c.instructions+=2;NFSU2_TR(0x58154a);
u8 U[14];
__builtin_memmove((U+6),gp(0x865118),4);
w1(R+512,u8((r4(U+6))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+12)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B581550:{NFSU2_TR(0x581550);
if(r1(R+518)){{goto L58155d;}}
}
B581552:L581552:{c.instructions+=2;NFSU2_TR(0x581552);
__builtin_memmove(gp(0x865118),(R+12),4);
}
B581558:{NFSU2_TR(0x581558);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58155dull));
TAIL_STATIC(0x4022c0u,402);
}
B58155d:L58155d:{c.instructions+=1;NFSU2_TR(0x58155d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581562ull));
TAIL_STATIC(0x5cec80u,5ce);
}
B581562:L581562:{c.instructions+=2;NFSU2_TR(0x581562);
u8 U[8];
__builtin_memmove((U+0),gp(0x864f4c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B581568:{NFSU2_TR(0x581568);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5811e4u);}goto L5811e4;}}
}
B58156e:L58156e:{c.instructions+=1;NFSU2_TR(0x58156e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58156f:L58156f:{c.instructions+=4;NFSU2_TR(0x58156f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B581570:{NFSU2_TR(0x581570);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B581571:{NFSU2_TR(0x581571);
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
B581574:{NFSU2_TR(0x581574);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B581580:L581580:{c.instructions+=5;NFSU2_TR(0x581580);
__builtin_memmove((R+0),gp(0x89e7a0),4);
}
B581585:{NFSU2_TR(0x581585);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581586:{NFSU2_TR(0x581586);
s4(0x8654a4,u32(0x5ull));
}
B581590:{NFSU2_TR(0x581590);
s4(0x8654a8,u32(0x0ull));
}
B58159a:{NFSU2_TR(0x58159a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58159full));
TAIL_STATIC(0x5d3e40u,5d3);
}
B58159f:L58159f:{c.instructions+=4;NFSU2_TR(0x58159f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5815a2:{NFSU2_TR(0x5815a2);
__builtin_memmove(gp(0x883dac),(R+0),4);
}
B5815a7:{NFSU2_TR(0x5815a7);
w4(R+4,u32(0x8654a8ull));
}
B5815ac:{NFSU2_TR(0x5815ac);
TAIL_STATIC(0x57f2d0u,57f);
}
B5815c0:L5815c0:{c.instructions+=5;NFSU2_TR(0x5815c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5815c1:{NFSU2_TR(0x5815c1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5815c2:{NFSU2_TR(0x5815c2);
__builtin_memmove((R+24),(R+4),4);
}
B5815c4:{NFSU2_TR(0x5815c4);
w4(R+4,u32(0x89cf48ull));
}
B5815c9:{NFSU2_TR(0x5815c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5815ceull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B5815ce:L5815ce:{c.instructions+=2;NFSU2_TR(0x5815ce);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5815d0:{NFSU2_TR(0x5815d0);
if(r1(R+518)){{goto L5815de;}}
}
B5815d2:L5815d2:{c.instructions+=3;NFSU2_TR(0x5815d2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5815d4:{NFSU2_TR(0x5815d4);
w4(R+4,u32(0x89cf48ull));
}
B5815d9:{NFSU2_TR(0x5815d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5815deull));
TAIL_STATIC(0x609360u,609);
}
B5815de:L5815de:{c.instructions+=5;NFSU2_TR(0x5815de);
__builtin_memmove((R+0),gp(0x8650f4),4);
}
B5815e3:{NFSU2_TR(0x5815e3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5815e5:{NFSU2_TR(0x5815e5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5815e7:{NFSU2_TR(0x5815e7);
s4(0x8654a4,u32(0x7ull));
}
B5815f1:{NFSU2_TR(0x5815f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L581614;}}
}
B5815f3:L5815f3:{c.instructions+=2;NFSU2_TR(0x5815f3);
u8 U[8];
__builtin_memmove((U+0),gp(0x865220),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x865220ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5815fd:{NFSU2_TR(0x5815fd);
if(r1(R+518)){{goto L58161b;}}
}
B5815ff:L5815ff:{c.instructions+=1;NFSU2_TR(0x5815ff);
}
B581600:L581600:{c.instructions+=2;NFSU2_TR(0x581600);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650f4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B581606:{NFSU2_TR(0x581606);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L581614;}}
}
B581608:L581608:{c.instructions+=2;NFSU2_TR(0x581608);
u8 U[8];
__builtin_memmove((U+0),gp(0x865220),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x865220ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B581612:{NFSU2_TR(0x581612);
if(r1(R+518)){{goto L58161b;}}
}
B581614:L581614:{c.instructions+=1;NFSU2_TR(0x581614);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581619ull));
TAIL_STATIC(0x57e800u,57e);
}
B581619:L581619:{c.instructions+=1;NFSU2_TR(0x581619);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x581600u);}goto L581600;}
}
B58161b:L58161b:{c.instructions+=2;NFSU2_TR(0x58161b);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B581621:{NFSU2_TR(0x581621);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581626ull));
TAIL_STATIC(0x60a9a0u,60a);
}
B581626:L581626:{c.instructions+=2;NFSU2_TR(0x581626);
w4(R+4,u32(0x8a3288ull));
}
B58162b:{NFSU2_TR(0x58162b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581630ull));
TAIL_STATIC(0x63b070u,63b);
}
B581630:L581630:{c.instructions+=5;NFSU2_TR(0x581630);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B581633:{NFSU2_TR(0x581633);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581634:{NFSU2_TR(0x581634);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B581637:{NFSU2_TR(0x581637);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581638:{NFSU2_TR(0x581638);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58163dull));
TAIL_STATIC(0x490150u,490);
}
B58163d:L58163d:{c.instructions+=4;NFSU2_TR(0x58163d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B581640:{NFSU2_TR(0x581640);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581641:{NFSU2_TR(0x581641);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B581644:{NFSU2_TR(0x581644);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581649ull));
TAIL_STATIC(0x580e90u,580);
}
B581649:L581649:{c.instructions+=3;NFSU2_TR(0x581649);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B58164c:{NFSU2_TR(0x58164c);
w4(R+4,u32(0x88f298ull));
}
B581651:{NFSU2_TR(0x581651);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581656ull));
TAIL_STATIC(0x5d9a00u,5d9);
}
B581656:L581656:{c.instructions+=1;NFSU2_TR(0x581656);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58165bull));
TAIL_STATIC(0x558ee0u,558);
}
B58165b:L58165b:{c.instructions+=2;NFSU2_TR(0x58165b);
s4(0x870748,u32(0x1ull));
}
B581665:{NFSU2_TR(0x581665);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58166aull));
TAIL_STATIC(0x5663b0u,566);
}
B58166a:L58166a:{c.instructions+=1;NFSU2_TR(0x58166a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58166full));
TAIL_STATIC(0x5d2850u,5d2);
}
B58166f:L58166f:{c.instructions+=1;NFSU2_TR(0x58166f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581674ull));
TAIL_STATIC(0x4022c0u,402);
}
B581674:L581674:{c.instructions+=1;NFSU2_TR(0x581674);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581679ull));
TAIL_STATIC(0x4022c0u,402);
}
B581679:L581679:{c.instructions+=1;NFSU2_TR(0x581679);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58167eull));
TAIL_STATIC(0x56c5f0u,56c);
}
B58167e:L58167e:{c.instructions+=1;NFSU2_TR(0x58167e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581683ull));
TAIL_STATIC(0x414a40u,414);
}
B581683:L581683:{c.instructions+=1;NFSU2_TR(0x581683);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581688ull));
TAIL_STATIC(0x637e70u,637);
}
B581688:L581688:{c.instructions+=1;NFSU2_TR(0x581688);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58168dull));
TAIL_STATIC(0x5e04d0u,5e0);
}
B58168d:L58168d:{c.instructions+=1;NFSU2_TR(0x58168d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581692ull));
TAIL_STATIC(0x5e05c0u,5e0);
}
B581692:L581692:{c.instructions+=1;NFSU2_TR(0x581692);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581697ull));
TAIL_STATIC(0x48b760u,48b);
}
B581697:L581697:{c.instructions+=1;NFSU2_TR(0x581697);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58169cull));
TAIL_STATIC(0x60f740u,60f);
}
B58169c:L58169c:{c.instructions+=1;NFSU2_TR(0x58169c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5816a1ull));
TAIL_STATIC(0x599010u,599);
}
B5816a1:L5816a1:{c.instructions+=1;NFSU2_TR(0x5816a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5816a6ull));
TAIL_STATIC(0x4022c0u,402);
}
B5816a6:L5816a6:{c.instructions+=2;NFSU2_TR(0x5816a6);
__builtin_memmove((R+4),(R+24),4);
}
B5816a8:{NFSU2_TR(0x5816a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5816adull));
TAIL_STATIC(0x5711d0u,571);
}
B5816ad:L5816ad:{c.instructions+=2;NFSU2_TR(0x5816ad);
w4(R+4,u32(0x88f298ull));
}
B5816b2:{NFSU2_TR(0x5816b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5816b7ull));
TAIL_STATIC(0x5d9a00u,5d9);
}
B5816b7:L5816b7:{c.instructions+=1;NFSU2_TR(0x5816b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5816bcull));
TAIL_STATIC(0x593dd0u,593);
}
B5816bc:L5816bc:{c.instructions+=1;NFSU2_TR(0x5816bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5816c1ull));
TAIL_STATIC(0x5a9a60u,5a9);
}
B5816c1:L5816c1:{c.instructions+=1;NFSU2_TR(0x5816c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5816c6ull));
TAIL_STATIC(0x592b20u,592);
}
B5816c6:L5816c6:{c.instructions+=1;NFSU2_TR(0x5816c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5816cbull));
TAIL_STATIC(0x4814c0u,481);
}
B5816cb:L5816cb:{c.instructions+=3;NFSU2_TR(0x5816cb);
__builtin_memmove((R+4),(R+24),4);
}
B5816cd:{NFSU2_TR(0x5816cd);
s1(0x7fb534,u8(0x1ull));
}
B5816d4:{NFSU2_TR(0x5816d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5816d9ull));
TAIL_STATIC(0x580fc0u,580);
}
B5816d9:L5816d9:{c.instructions+=3;NFSU2_TR(0x5816d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5816dc:{NFSU2_TR(0x5816dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5816dd:{NFSU2_TR(0x5816dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5816e2ull));
TAIL_STATIC(0x580e90u,580);
}
B5816e2:L5816e2:{c.instructions+=3;NFSU2_TR(0x5816e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5816e5:{NFSU2_TR(0x5816e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5816e6:{NFSU2_TR(0x5816e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5816ebull));
TAIL_STATIC(0x580e90u,580);
}
B5816eb:L5816eb:{c.instructions+=3;NFSU2_TR(0x5816eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5816ee:{NFSU2_TR(0x5816ee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5816ef:{NFSU2_TR(0x5816ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5816f4ull));
TAIL_STATIC(0x580e90u,580);
}
B5816f4:L5816f4:{c.instructions+=3;NFSU2_TR(0x5816f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5816f7:{NFSU2_TR(0x5816f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5816f8:{NFSU2_TR(0x5816f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5816fdull));
TAIL_STATIC(0x580e90u,580);
}
B5816fd:L5816fd:{c.instructions+=8;NFSU2_TR(0x5816fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B581700:{NFSU2_TR(0x581700);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B581703:{NFSU2_TR(0x581703);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B581705:{NFSU2_TR(0x581705);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B581708:{NFSU2_TR(0x581708);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58170b:{NFSU2_TR(0x58170b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58170e:{NFSU2_TR(0x58170e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B581711:{NFSU2_TR(0x581711);
if(r1(R+518)){{goto L58171f;}}
}
B581713:L581713:{c.instructions+=2;NFSU2_TR(0x581713);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581714:{NFSU2_TR(0x581714);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581719ull));
TAIL_STATIC(0x580e90u,580);
}
B581719:L581719:{c.instructions+=2;NFSU2_TR(0x581719);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58171c:{NFSU2_TR(0x58171c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58171f:L58171f:{c.instructions+=2;NFSU2_TR(0x58171f);
w4(R+4,u32(0x865564ull));
}
B581724:{NFSU2_TR(0x581724);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581729ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x581130u);}goto L581130;}
}
B581729:L581729:{c.instructions+=2;NFSU2_TR(0x581729);
w4(R+4,u32(0x828530ull));
}
B58172e:{NFSU2_TR(0x58172e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581733ull));
TAIL_STATIC(0x440800u,440);
}
B581733:L581733:{c.instructions+=2;NFSU2_TR(0x581733);
__builtin_memmove((R+4),gp(0x865110),4);
}
B581739:{NFSU2_TR(0x581739);
__builtin_memmove((R+16),(R+16),4);
}
B581740:L581740:{c.instructions+=2;NFSU2_TR(0x581740);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B581742:{NFSU2_TR(0x581742);
if(r1(R+518)){{goto L581754;}}
}
B581744:L581744:{c.instructions+=1;NFSU2_TR(0x581744);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581749ull));
TAIL_STATIC(0x6f56bdu,6f5);
}
B581749:L581749:{c.instructions+=1;NFSU2_TR(0x581749);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58174eull));
TAIL_STATIC(0x57c920u,57c);
}
B58174e:L58174e:{c.instructions+=1;NFSU2_TR(0x58174e);
__builtin_memmove((R+4),gp(0x865110),4);
}
B581754:L581754:{c.instructions+=5;NFSU2_TR(0x581754);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B581756:{NFSU2_TR(0x581756);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B581758:{NFSU2_TR(0x581758);
__builtin_memmove((R+0),(R+518),1);
}
B58175b:{NFSU2_TR(0x58175b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58175d:{NFSU2_TR(0x58175d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x581740u);}goto L581740;}}
}
B58175f:L58175f:{c.instructions+=4;NFSU2_TR(0x58175f);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B581765:{NFSU2_TR(0x581765);
__builtin_memmove((R+24),gp(0x7ea624),4);
}
B58176b:{NFSU2_TR(0x58176b);
__builtin_memmove(gp(0x864fac),(R+12),4);
}
B581771:{NFSU2_TR(0x581771);
if(r1(R+518)){{goto L581781;}}
}
B581773:L581773:{c.instructions+=3;NFSU2_TR(0x581773);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581775:{NFSU2_TR(0x581775);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581777:{NFSU2_TR(0x581777);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58177cull));
TAIL_STATIC(0x57e3b0u,57e);
}
B58177c:L58177c:{c.instructions+=2;NFSU2_TR(0x58177c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58177f:{NFSU2_TR(0x58177f);
__builtin_memmove((R+24),(R+0),4);
}
B581781:L581781:{c.instructions+=2;NFSU2_TR(0x581781);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B581787:{NFSU2_TR(0x581787);
if(r1(R+518)){{goto L581799;}}
}
B581789:L581789:{c.instructions+=5;NFSU2_TR(0x581789);
__builtin_memmove((R+4),gp(0x8650dc),4);
}
B58178f:{NFSU2_TR(0x58178f);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581791:{NFSU2_TR(0x581791);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581793:{NFSU2_TR(0x581793);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581794:{NFSU2_TR(0x581794);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581799ull));
TAIL_STATIC(0x57d5b0u,57d);
}
B581799:L581799:{c.instructions+=3;NFSU2_TR(0x581799);
u8 U[5];
__builtin_memmove((U+3),gp(0x89e7ac),1);
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
B58179f:{NFSU2_TR(0x58179f);
__builtin_memmove(gp(0x7ea624),(R+24),4);
}
B5817a5:{NFSU2_TR(0x5817a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5817be;}}
}
B5817a7:L5817a7:{c.instructions+=2;NFSU2_TR(0x5817a7);
u8 U[5];
__builtin_memmove((U+3),gp(0x89e7ad),1);
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
B5817ad:{NFSU2_TR(0x5817ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5817be;}}
}
B5817af:L5817af:{c.instructions+=1;NFSU2_TR(0x5817af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5817b4ull));
TAIL_STATIC(0x575730u,575);
}
B5817b4:L5817b4:{c.instructions+=2;NFSU2_TR(0x5817b4);
w4(R+4,u32(0x865930ull));
}
B5817b9:{NFSU2_TR(0x5817b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5817beull));
TAIL_STATIC(0x575fd0u,575);
}
B5817be:L5817be:{c.instructions+=4;NFSU2_TR(0x5817be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5817bf:{NFSU2_TR(0x5817bf);
__builtin_memmove(gp(0x870748),(R+12),4);
}
B5817c5:{NFSU2_TR(0x5817c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5817c6:{NFSU2_TR(0x5817c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5817d0:L5817d0:{c.instructions+=4;NFSU2_TR(0x5817d0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5817d2:{NFSU2_TR(0x5817d2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5817d4:{NFSU2_TR(0x5817d4);
w4(R+4,u32(0x827b88ull));
}
B5817d9:{NFSU2_TR(0x5817d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5817deull));
TAIL_STATIC(0x438ec0u,438);
}
B5817de:L5817de:{c.instructions+=2;NFSU2_TR(0x5817de);
w4(R+4,u32(0x8654a8ull));
}
B5817e3:{NFSU2_TR(0x5817e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5817e8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5815c0u);}goto L5815c0;}
}
B5817e8:L5817e8:{c.instructions+=2;NFSU2_TR(0x5817e8);
w4(R+4,u32(0x86515cull));
}
B5817ed:{NFSU2_TR(0x5817ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5817f2ull));
TAIL_STATIC(0x580ef0u,580);
}
B5817f2:L5817f2:{c.instructions+=5;NFSU2_TR(0x5817f2);
__builtin_memmove((R+0),gp(0x865498),1);
}
B5817f7:{NFSU2_TR(0x5817f7);
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
B5817f9:{NFSU2_TR(0x5817f9);
s4(0x86548c,u32(0x7a07a0ull));
}
B581803:{NFSU2_TR(0x581803);
s4(0x865484,u32(0x57ff10ull));
}
B58180d:{NFSU2_TR(0x58180d);
if(r1(R+518)){{goto L581816;}}
}
B58180f:L58180f:{c.instructions+=1;NFSU2_TR(0x58180f);
s1(0x865498,u8(0x0ull));
}
B581816:L581816:{c.instructions+=1;NFSU2_TR(0x581816);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B581820:L581820:{c.instructions+=10;NFSU2_TR(0x581820);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B581823:{NFSU2_TR(0x581823);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581824:{NFSU2_TR(0x581824);
__builtin_memmove((R+12),gp(0x89e7e6),1);
}
B58182a:{NFSU2_TR(0x58182a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58182b:{NFSU2_TR(0x58182b);
__builtin_memmove((R+24),gp(0x883dac),4);
}
B581831:{NFSU2_TR(0x581831);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581832:{NFSU2_TR(0x581832);
w4(R+28,u32(0xfa0ull));
}
B581837:{NFSU2_TR(0x581837);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581838:{NFSU2_TR(0x581838);
s4(0x82b8dc,u32(0x1ull));
}
B581842:{NFSU2_TR(0x581842);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581847ull));
TAIL_STATIC(0x5d3e40u,5d3);
}
B581847:L581847:{c.instructions+=7;NFSU2_TR(0x581847);
__builtin_memmove((R+4),gp(0x850078),4);
}
B58184d:{NFSU2_TR(0x58184d);
__builtin_memmove((R+8),gp(0x89e7e6),1);
}
B581853:{NFSU2_TR(0x581853);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B581856:{NFSU2_TR(0x581856);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B581859:{NFSU2_TR(0x581859);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+518),1);
s1(u32(r4(U+0)),r1(U+4));
}
B58185e:{NFSU2_TR(0x58185e);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B581860:{NFSU2_TR(0x581860);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L581889;}}
}
B581862:L581862:{c.instructions+=2;NFSU2_TR(0x581862);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B581865:{NFSU2_TR(0x581865);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58187a;}}
}
B581867:L581867:{c.instructions+=3;NFSU2_TR(0x581867);
__builtin_memmove((R+4),gp(0x863470),4);
}
B58186d:{NFSU2_TR(0x58186d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58186f:{NFSU2_TR(0x58186f);
if(r1(R+518)){{goto L581889;}}
}
B581871:L581871:{c.instructions+=3;NFSU2_TR(0x581871);
__builtin_memmove((R+0),gp(0x85ef48),4);
}
B581876:{NFSU2_TR(0x581876);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B581878:{NFSU2_TR(0x581878);
{goto L581880;}
}
B58187a:L58187a:{c.instructions+=1;NFSU2_TR(0x58187a);
__builtin_memmove((R+28),gp(0x89e7a0),4);
}
B581880:L581880:{c.instructions+=2;NFSU2_TR(0x581880);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581881:{NFSU2_TR(0x581881);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581886ull));
TAIL_STATIC(0x5d3e40u,5d3);
}
B581886:L581886:{c.instructions+=1;NFSU2_TR(0x581886);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B581889:L581889:{c.instructions+=5;NFSU2_TR(0x581889);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B58188c:{NFSU2_TR(0x58188c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58188d:{NFSU2_TR(0x58188d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B581890:{NFSU2_TR(0x581890);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581891:{NFSU2_TR(0x581891);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581896ull));
TAIL_STATIC(0x43dc30u,43d);
}
B581896:L581896:{c.instructions+=5;NFSU2_TR(0x581896);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B581899:{NFSU2_TR(0x581899);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58189b:{NFSU2_TR(0x58189b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B58189e:{NFSU2_TR(0x58189e);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5818a0:{NFSU2_TR(0x5818a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5818aa;}}
}
B5818a2:L5818a2:{c.instructions+=3;NFSU2_TR(0x5818a2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5818a4:{NFSU2_TR(0x5818a4);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5818a8:{NFSU2_TR(0x5818a8);
if(r1(R+518)){{goto L5818af;}}
}
B5818aa:L5818aa:{c.instructions+=1;NFSU2_TR(0x5818aa);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5818af:L5818af:{c.instructions+=3;NFSU2_TR(0x5818af);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5818b3:{NFSU2_TR(0x5818b3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5818b5:{NFSU2_TR(0x5818b5);
if(r1(R+518)){{goto L5818d0;}}
}
B5818b7:L5818b7:{c.instructions+=2;NFSU2_TR(0x5818b7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5818b9:{NFSU2_TR(0x5818b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5818d0;}}
}
B5818bb:L5818bb:{c.instructions+=2;NFSU2_TR(0x5818bb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1068ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1068ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5818c1:{NFSU2_TR(0x5818c1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5818d0;}}
}
B5818c3:L5818c3:{c.instructions+=3;NFSU2_TR(0x5818c3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ccull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ccull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5818c9:{NFSU2_TR(0x5818c9);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5818ce:{NFSU2_TR(0x5818ce);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5818d5;}}
}
B5818d0:L5818d0:{c.instructions+=1;NFSU2_TR(0x5818d0);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5818d5:L5818d5:{c.instructions+=6;NFSU2_TR(0x5818d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5818d9:{NFSU2_TR(0x5818d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5818dd:{NFSU2_TR(0x5818dd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5818de:{NFSU2_TR(0x5818de);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5818df:{NFSU2_TR(0x5818df);
w4(R+4,u32(0x827b88ull));
}
B5818e4:{NFSU2_TR(0x5818e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5818e9ull));
TAIL_STATIC(0x438ec0u,438);
}
B5818e9:L5818e9:{c.instructions+=2;NFSU2_TR(0x5818e9);
w4(R+4,u32(0x8654a8ull));
}
B5818ee:{NFSU2_TR(0x5818ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5818f3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5815c0u);}goto L5815c0;}
}
B5818f3:L5818f3:{c.instructions+=3;NFSU2_TR(0x5818f3);
__builtin_memmove((R+0),gp(0x89e7e6),1);
}
B5818f8:{NFSU2_TR(0x5818f8);
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
B5818fa:{NFSU2_TR(0x5818fa);
if(r1(R+518)){{goto L58190c;}}
}
B5818fc:L5818fc:{c.instructions+=1;NFSU2_TR(0x5818fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581901ull));
TAIL_STATIC(0x510050u,510);
}
B581901:L581901:{c.instructions+=2;NFSU2_TR(0x581901);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581902:{NFSU2_TR(0x581902);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581907ull));
TAIL_STATIC(0x526970u,526);
}
B581907:L581907:{c.instructions+=2;NFSU2_TR(0x581907);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58190a:{NFSU2_TR(0x58190a);
{goto L581939;}
}
B58190c:L58190c:{c.instructions+=2;NFSU2_TR(0x58190c);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B581913:{NFSU2_TR(0x581913);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L581939;}}
}
B581915:L581915:{c.instructions+=3;NFSU2_TR(0x581915);
__builtin_memmove((R+0),gp(0x863470),4);
}
B58191a:{NFSU2_TR(0x58191a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58191c:{NFSU2_TR(0x58191c);
if(r1(R+518)){{goto L581934;}}
}
B58191e:L58191e:{c.instructions+=5;NFSU2_TR(0x58191e);
u8 U[8];
__builtin_memmove((U+0),gp(0x7faa08),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B581925:{NFSU2_TR(0x581925);
__builtin_memmove((R+4),(R+518),1);
}
B581928:{NFSU2_TR(0x581928);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581929:{NFSU2_TR(0x581929);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58192a:{NFSU2_TR(0x58192a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58192full));
TAIL_STATIC(0x5322e0u,532);
}
B58192f:L58192f:{c.instructions+=2;NFSU2_TR(0x58192f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B581932:{NFSU2_TR(0x581932);
{goto L581939;}
}
B581934:L581934:{c.instructions+=1;NFSU2_TR(0x581934);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581939ull));
TAIL_STATIC(0x540780u,540);
}
B581939:L581939:{c.instructions+=3;NFSU2_TR(0x581939);
__builtin_memmove((R+8),gp(0x89e7a0),4);
}
B58193f:{NFSU2_TR(0x58193f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581940:{NFSU2_TR(0x581940);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581945ull));
TAIL_STATIC(0x5d3e40u,5d3);
}
B581945:L581945:{c.instructions+=4;NFSU2_TR(0x581945);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B581948:{NFSU2_TR(0x581948);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581949:{NFSU2_TR(0x581949);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58194a:{NFSU2_TR(0x58194a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58194full));
TAIL_STATIC(0x43dc30u,43d);
}
B58194f:L58194f:{c.instructions+=9;NFSU2_TR(0x58194f);
__builtin_memmove((R+4),gp(0x89e7e6),1);
}
B581955:{NFSU2_TR(0x581955);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B581958:{NFSU2_TR(0x581958);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58195a:{NFSU2_TR(0x58195a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58195b:{NFSU2_TR(0x58195b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B58195e:{NFSU2_TR(0x58195e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B581960:{NFSU2_TR(0x581960);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B581961:{NFSU2_TR(0x581961);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B581962:{NFSU2_TR(0x581962);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L581968;}}
}
B581964:L581964:{c.instructions+=2;NFSU2_TR(0x581964);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B581966:{NFSU2_TR(0x581966);
if(r1(R+518)){{goto L581989;}}
}
B581968:L581968:{c.instructions+=3;NFSU2_TR(0x581968);
w4(R+4,u32(0x86515cull));
}
B58196d:{NFSU2_TR(0x58196d);
s4(0x82b8dc,u32(0x0ull));
}
B581977:{NFSU2_TR(0x581977);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58197cull));
TAIL_STATIC(0x580ef0u,580);
}
B58197c:L58197c:{c.instructions+=3;NFSU2_TR(0x58197c);
w4(R+4,u32(0x86515cull));
}
B581981:{NFSU2_TR(0x581981);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B581984:{NFSU2_TR(0x581984);
TAIL_STATIC(0x57f210u,57f);
}
B581989:L581989:{c.instructions+=5;NFSU2_TR(0x581989);
__builtin_memmove((R+0),gp(0x89e7a0),4);
}
B58198e:{NFSU2_TR(0x58198e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58198f:{NFSU2_TR(0x58198f);
s4(0x8654a4,u32(0x5ull));
}
B581999:{NFSU2_TR(0x581999);
s4(0x8654a8,u32(0x0ull));
}
B5819a3:{NFSU2_TR(0x5819a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5819a8ull));
TAIL_STATIC(0x5d3e40u,5d3);
}
B5819a8:L5819a8:{c.instructions+=4;NFSU2_TR(0x5819a8);
__builtin_memmove(gp(0x883dac),(R+0),4);
}
B5819ad:{NFSU2_TR(0x5819ad);
w4(R+4,u32(0x8654a8ull));
}
B5819b2:{NFSU2_TR(0x5819b2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5819b5:{NFSU2_TR(0x5819b5);
TAIL_STATIC(0x57f2d0u,57f);
}
B5819c0:L5819c0:{c.instructions+=4;NFSU2_TR(0x5819c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5819c3:{NFSU2_TR(0x5819c3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5819c5:{NFSU2_TR(0x5819c5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5819c7:{NFSU2_TR(0x5819c7);
if(r1(R+518)){{goto L5819cc;}}
}
B5819c9:L5819c9:{c.instructions+=1;NFSU2_TR(0x5819c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5819cc:L5819cc:{c.instructions+=4;NFSU2_TR(0x5819cc);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+0))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+0)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5819cf:{NFSU2_TR(0x5819cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
w4(U+4,u32(0x7a0e10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5819d6:{NFSU2_TR(0x5819d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w4(U+4,u32(0x5817d0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5819dd:{NFSU2_TR(0x5819dd);
if(r1(R+518)){{goto L5819e2;}}
}
B5819df:L5819df:{c.instructions+=1;NFSU2_TR(0x5819df);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5819e2:L5819e2:{c.instructions+=1;NFSU2_TR(0x5819e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5819f0:L5819f0:{c.instructions+=4;NFSU2_TR(0x5819f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5819f3:{NFSU2_TR(0x5819f3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5819f5:{NFSU2_TR(0x5819f5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5819f7:{NFSU2_TR(0x5819f7);
if(r1(R+518)){{goto L5819fc;}}
}
B5819f9:L5819f9:{c.instructions+=1;NFSU2_TR(0x5819f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5819fc:L5819fc:{c.instructions+=4;NFSU2_TR(0x5819fc);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+0))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+0)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5819ff:{NFSU2_TR(0x5819ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
w4(U+4,u32(0x7a0e2cull));
s4(u32(r4(U+0)),r4(U+4));
}
B581a06:{NFSU2_TR(0x581a06);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w4(U+4,u32(0x581820ull));
s4(u32(r4(U+0)),r4(U+4));
}
B581a0d:{NFSU2_TR(0x581a0d);
if(r1(R+518)){{goto L581a12;}}
}
B581a0f:L581a0f:{c.instructions+=1;NFSU2_TR(0x581a0f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B581a12:L581a12:{c.instructions+=1;NFSU2_TR(0x581a12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B581a20:L581a20:{c.instructions+=7;NFSU2_TR(0x581a20);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x200ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x200ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B581a26:{NFSU2_TR(0x581a26);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581a27:{NFSU2_TR(0x581a27);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581a28:{NFSU2_TR(0x581a28);
w4(R+12,u32(0x2ull));
}
B581a2d:{NFSU2_TR(0x581a2d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581a2e:{NFSU2_TR(0x581a2e);
__builtin_memmove(gp(0x8654a4),(R+12),4);
}
B581a34:{NFSU2_TR(0x581a34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581a39ull));
TAIL_STATIC(0x4022c0u,402);
}
B581a39:L581a39:{c.instructions+=1;NFSU2_TR(0x581a39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581a3eull));
TAIL_STATIC(0x55b580u,55b);
}
B581a3e:L581a3e:{c.instructions+=1;NFSU2_TR(0x581a3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581a43ull));
TAIL_STATIC(0x4022c0u,402);
}
B581a43:L581a43:{c.instructions+=2;NFSU2_TR(0x581a43);
w4(R+4,u32(0x8a3288ull));
}
B581a48:{NFSU2_TR(0x581a48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581a4dull));
TAIL_STATIC(0x63b070u,63b);
}
B581a4d:L581a4d:{c.instructions+=1;NFSU2_TR(0x581a4d);
w4(R+24,u32(0x86658cull));
}
B581a52:L581a52:{c.instructions+=3;NFSU2_TR(0x581a52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B581a54:{NFSU2_TR(0x581a54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581a55:{NFSU2_TR(0x581a55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581a5aull));
TAIL_STATIC(0x48dae0u,48d);
}
B581a5a:L581a5a:{c.instructions+=4;NFSU2_TR(0x581a5a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B581a5d:{NFSU2_TR(0x581a5d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B581a60:{NFSU2_TR(0x581a60);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8665b8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8665b8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B581a66:{NFSU2_TR(0x581a66);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x581a52u);}goto L581a52;}}
}
B581a68:L581a68:{c.instructions+=7;NFSU2_TR(0x581a68);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581a6a:{NFSU2_TR(0x581a6a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581a6c:{NFSU2_TR(0x581a6c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581a6e:{NFSU2_TR(0x581a6e);
u8 U[4];
w4(U+0,u32(0x43ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581a70:{NFSU2_TR(0x581a70);
u8 U[4];
w4(U+0,u32(0xa6e1b733ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581a75:{NFSU2_TR(0x581a75);
w4(R+4,u32(0x8a2b68ull));
}
B581a7a:{NFSU2_TR(0x581a7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581a7full));
TAIL_STATIC(0x61b670u,61b);
}
B581a7f:L581a7f:{c.instructions+=3;NFSU2_TR(0x581a7f);
__builtin_memmove((R+24),(R+0),4);
}
B581a81:{NFSU2_TR(0x581a81);
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
B581a83:{NFSU2_TR(0x581a83);
if(r1(R+518)){{goto L581ad7;}}
}
B581a85:L581a85:{c.instructions+=2;NFSU2_TR(0x581a85);
__builtin_memmove((R+4),(R+24),4);
}
B581a87:{NFSU2_TR(0x581a87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581a8cull));
TAIL_STATIC(0x610000u,610);
}
B581a8c:L581a8c:{c.instructions+=3;NFSU2_TR(0x581a8c);
__builtin_memmove((R+28),(R+0),4);
}
B581a8e:{NFSU2_TR(0x581a8e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581a8f:{NFSU2_TR(0x581a8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581a94ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B581a94:L581a94:{c.instructions+=3;NFSU2_TR(0x581a94);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B581a97:{NFSU2_TR(0x581a97);
w1(R+512,u8((r4(R+0))<(u32(0x1e3ull))));
}
B581a9c:{NFSU2_TR(0x581a9c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L581abb;}}
}
B581a9e:L581a9e:{c.instructions+=5;NFSU2_TR(0x581a9e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581a9f:{NFSU2_TR(0x581a9f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B581aa3:{NFSU2_TR(0x581aa3);
u8 U[4];
w4(U+0,u32(0x7a0aacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581aa8:{NFSU2_TR(0x581aa8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581aa9:{NFSU2_TR(0x581aa9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581aaeull));
TAIL_STATIC(0x4400d0u,440);
}
B581aae:L581aae:{c.instructions+=3;NFSU2_TR(0x581aae);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B581ab2:{NFSU2_TR(0x581ab2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581ab3:{NFSU2_TR(0x581ab3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581ab8ull));
TAIL_STATIC(0x48dae0u,48d);
}
B581ab8:L581ab8:{c.instructions+=1;NFSU2_TR(0x581ab8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B581abb:L581abb:{c.instructions+=7;NFSU2_TR(0x581abb);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581abd:{NFSU2_TR(0x581abd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581abe:{NFSU2_TR(0x581abe);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581ac0:{NFSU2_TR(0x581ac0);
u8 U[4];
w4(U+0,u32(0x43ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581ac2:{NFSU2_TR(0x581ac2);
u8 U[4];
w4(U+0,u32(0xa6e1b733ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581ac7:{NFSU2_TR(0x581ac7);
w4(R+4,u32(0x8a2b68ull));
}
B581acc:{NFSU2_TR(0x581acc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581ad1ull));
TAIL_STATIC(0x61b670u,61b);
}
B581ad1:L581ad1:{c.instructions+=3;NFSU2_TR(0x581ad1);
__builtin_memmove((R+24),(R+0),4);
}
B581ad3:{NFSU2_TR(0x581ad3);
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
B581ad5:{NFSU2_TR(0x581ad5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x581a85u);}goto L581a85;}}
}
B581ad7:L581ad7:{c.instructions+=2;NFSU2_TR(0x581ad7);
w4(R+24,u32(0x86658cull));
}
B581adc:{NFSU2_TR(0x581adc);
__builtin_memmove((R+16),(R+16),4);
}
B581ae0:L581ae0:{c.instructions+=5;NFSU2_TR(0x581ae0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B581ae2:{NFSU2_TR(0x581ae2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581ae4:{NFSU2_TR(0x581ae4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581ae6:{NFSU2_TR(0x581ae6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581ae7:{NFSU2_TR(0x581ae7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581aecull));
TAIL_STATIC(0x4941f0u,494);
}
B581aec:L581aec:{c.instructions+=4;NFSU2_TR(0x581aec);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B581aef:{NFSU2_TR(0x581aef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B581af2:{NFSU2_TR(0x581af2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8665b8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8665b8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B581af8:{NFSU2_TR(0x581af8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x581ae0u);}goto L581ae0;}}
}
B581afa:L581afa:{c.instructions+=7;NFSU2_TR(0x581afa);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581afc:{NFSU2_TR(0x581afc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581afe:{NFSU2_TR(0x581afe);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581b00:{NFSU2_TR(0x581b00);
u8 U[4];
w4(U+0,u32(0x43ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581b02:{NFSU2_TR(0x581b02);
u8 U[4];
w4(U+0,u32(0xa6e1b733ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581b07:{NFSU2_TR(0x581b07);
w4(R+4,u32(0x8a2b68ull));
}
B581b0c:{NFSU2_TR(0x581b0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581b11ull));
TAIL_STATIC(0x61b670u,61b);
}
B581b11:L581b11:{c.instructions+=3;NFSU2_TR(0x581b11);
__builtin_memmove((R+24),(R+0),4);
}
B581b13:{NFSU2_TR(0x581b13);
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
B581b15:{NFSU2_TR(0x581b15);
if(r1(R+518)){{goto L581b6d;}}
}
B581b17:L581b17:{c.instructions+=2;NFSU2_TR(0x581b17);
__builtin_memmove((R+4),(R+24),4);
}
B581b19:{NFSU2_TR(0x581b19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581b1eull));
TAIL_STATIC(0x610000u,610);
}
B581b1e:L581b1e:{c.instructions+=3;NFSU2_TR(0x581b1e);
__builtin_memmove((R+28),(R+0),4);
}
B581b20:{NFSU2_TR(0x581b20);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581b21:{NFSU2_TR(0x581b21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581b26ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B581b26:L581b26:{c.instructions+=3;NFSU2_TR(0x581b26);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B581b29:{NFSU2_TR(0x581b29);
w1(R+512,u8((r4(R+0))<(u32(0x1e3ull))));
}
B581b2e:{NFSU2_TR(0x581b2e);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L581b51;}}
}
B581b30:L581b30:{c.instructions+=5;NFSU2_TR(0x581b30);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581b31:{NFSU2_TR(0x581b31);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B581b35:{NFSU2_TR(0x581b35);
u8 U[4];
w4(U+0,u32(0x7a0aacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581b3a:{NFSU2_TR(0x581b3a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581b3b:{NFSU2_TR(0x581b3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581b40ull));
TAIL_STATIC(0x4400d0u,440);
}
B581b40:L581b40:{c.instructions+=5;NFSU2_TR(0x581b40);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581b42:{NFSU2_TR(0x581b42);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B581b46:{NFSU2_TR(0x581b46);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581b48:{NFSU2_TR(0x581b48);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581b49:{NFSU2_TR(0x581b49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581b4eull));
TAIL_STATIC(0x4941f0u,494);
}
B581b4e:L581b4e:{c.instructions+=1;NFSU2_TR(0x581b4e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B581b51:L581b51:{c.instructions+=7;NFSU2_TR(0x581b51);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581b53:{NFSU2_TR(0x581b53);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581b54:{NFSU2_TR(0x581b54);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581b56:{NFSU2_TR(0x581b56);
u8 U[4];
w4(U+0,u32(0x43ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581b58:{NFSU2_TR(0x581b58);
u8 U[4];
w4(U+0,u32(0xa6e1b733ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581b5d:{NFSU2_TR(0x581b5d);
w4(R+4,u32(0x8a2b68ull));
}
B581b62:{NFSU2_TR(0x581b62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581b67ull));
TAIL_STATIC(0x61b670u,61b);
}
B581b67:L581b67:{c.instructions+=3;NFSU2_TR(0x581b67);
__builtin_memmove((R+24),(R+0),4);
}
B581b69:{NFSU2_TR(0x581b69);
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
B581b6b:{NFSU2_TR(0x581b6b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x581b17u);}goto L581b17;}}
}
B581b6d:L581b6d:{c.instructions+=4;NFSU2_TR(0x581b6d);
__builtin_memmove((R+0),gp(0x8650f4),4);
}
B581b72:{NFSU2_TR(0x581b72);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B581b74:{NFSU2_TR(0x581b74);
w4(R+24,u32(0x865220ull));
}
B581b79:{NFSU2_TR(0x581b79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L581b94;}}
}
B581b7b:L581b7b:{c.instructions+=2;NFSU2_TR(0x581b7b);
u8 U[8];
__builtin_memmove((U+0),gp(0x865220),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B581b81:{NFSU2_TR(0x581b81);
if(r1(R+518)){{goto L581b9b;}}
}
B581b83:L581b83:{c.instructions+=3;NFSU2_TR(0x581b83);
__builtin_memmove((R+0),gp(0x8650f4),4);
}
B581b88:{NFSU2_TR(0x581b88);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B581b8a:{NFSU2_TR(0x581b8a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L581b94;}}
}
B581b8c:L581b8c:{c.instructions+=2;NFSU2_TR(0x581b8c);
u8 U[8];
__builtin_memmove((U+0),gp(0x865220),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B581b92:{NFSU2_TR(0x581b92);
if(r1(R+518)){{goto L581b9b;}}
}
B581b94:L581b94:{c.instructions+=1;NFSU2_TR(0x581b94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581b99ull));
TAIL_STATIC(0x57e800u,57e);
}
B581b99:L581b99:{c.instructions+=1;NFSU2_TR(0x581b99);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x581b83u);}goto L581b83;}
}
B581b9b:L581b9b:{c.instructions+=1;NFSU2_TR(0x581b9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581ba0ull));
TAIL_STATIC(0x60c810u,60c);
}
B581ba0:L581ba0:{c.instructions+=1;NFSU2_TR(0x581ba0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581ba5ull));
TAIL_STATIC(0x481480u,481);
}
B581ba5:L581ba5:{c.instructions+=2;NFSU2_TR(0x581ba5);
w4(R+4,u32(0x8651a4ull));
}
B581baa:{NFSU2_TR(0x581baa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581bafull));
TAIL_STATIC(0x502fd0u,502);
}
B581baf:L581baf:{c.instructions+=1;NFSU2_TR(0x581baf);
__builtin_memmove((R+28),(R+0),4);
}
B581bb1:L581bb1:{c.instructions+=3;NFSU2_TR(0x581bb1);
__builtin_memmove((R+24),gp(0x8651a8),4);
}
B581bb7:{NFSU2_TR(0x581bb7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B581bb9:{NFSU2_TR(0x581bb9);
if(r1(R+518)){{goto L581bd0;}}
}
B581bbb:L581bbb:{c.instructions+=1;NFSU2_TR(0x581bbb);
{goto L581bc0;}
}
B581bc0:L581bc0:{c.instructions+=2;NFSU2_TR(0x581bc0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B581bc3:{NFSU2_TR(0x581bc3);
if(r1(R+518)){{goto L581c5f;}}
}
B581bc9:L581bc9:{c.instructions+=3;NFSU2_TR(0x581bc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B581bcc:{NFSU2_TR(0x581bcc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B581bce:{NFSU2_TR(0x581bce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x581bc0u);}goto L581bc0;}}
}
B581bd0:L581bd0:{c.instructions+=5;NFSU2_TR(0x581bd0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581bd2:{NFSU2_TR(0x581bd2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581bd4:{NFSU2_TR(0x581bd4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581bd6:{NFSU2_TR(0x581bd6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581bd8:{NFSU2_TR(0x581bd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581bddull));
TAIL_STATIC(0x4ff780u,4ff);
}
B581bdd:L581bdd:{c.instructions+=3;NFSU2_TR(0x581bdd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B581be0:{NFSU2_TR(0x581be0);
w4(R+4,u32(0x865564ull));
}
B581be5:{NFSU2_TR(0x581be5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581beaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x581130u);}goto L581130;}
}
B581bea:L581bea:{c.instructions+=2;NFSU2_TR(0x581bea);
w4(R+4,u32(0x828530ull));
}
B581bef:{NFSU2_TR(0x581bef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581bf4ull));
TAIL_STATIC(0x440800u,440);
}
B581bf4:L581bf4:{c.instructions+=1;NFSU2_TR(0x581bf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581bf9ull));
TAIL_STATIC(0x488780u,488);
}
B581bf9:L581bf9:{c.instructions+=4;NFSU2_TR(0x581bf9);
__builtin_memmove((R+4),gp(0x865110),4);
}
B581bff:{NFSU2_TR(0x581bff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B581c00:{NFSU2_TR(0x581c00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B581c01:{NFSU2_TR(0x581c01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B581c02:L581c02:{c.instructions+=2;NFSU2_TR(0x581c02);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B581c04:{NFSU2_TR(0x581c04);
if(r1(R+518)){{goto L581c16;}}
}
B581c06:L581c06:{c.instructions+=1;NFSU2_TR(0x581c06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581c0bull));
TAIL_STATIC(0x6f56bdu,6f5);
}
B581c0b:L581c0b:{c.instructions+=1;NFSU2_TR(0x581c0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581c10ull));
TAIL_STATIC(0x57c920u,57c);
}
B581c10:L581c10:{c.instructions+=1;NFSU2_TR(0x581c10);
__builtin_memmove((R+4),gp(0x865110),4);
}
B581c16:L581c16:{c.instructions+=5;NFSU2_TR(0x581c16);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B581c18:{NFSU2_TR(0x581c18);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B581c1a:{NFSU2_TR(0x581c1a);
__builtin_memmove((R+0),(R+518),1);
}
B581c1d:{NFSU2_TR(0x581c1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B581c1f:{NFSU2_TR(0x581c1f);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x581c02u);}goto L581c02;}}
}
B581c21:L581c21:{c.instructions+=3;NFSU2_TR(0x581c21);
__builtin_memmove((R+0),gp(0x865498),1);
}
B581c26:{NFSU2_TR(0x581c26);
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
B581c28:{NFSU2_TR(0x581c28);
if(r1(R+518)){{goto L581c31;}}
}
B581c2a:L581c2a:{c.instructions+=1;NFSU2_TR(0x581c2a);
s1(0x865498,u8(0x0ull));
}
B581c31:L581c31:{c.instructions+=3;NFSU2_TR(0x581c31);
s4(0x865484,u32(0x580ee0ull));
}
B581c3b:{NFSU2_TR(0x581c3b);
s4(0x86548c,u32(0x7a0e00ull));
}
B581c45:{NFSU2_TR(0x581c45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581c4aull));
TAIL_STATIC(0x5b7b10u,5b7);
}
B581c4a:L581c4a:{c.instructions+=2;NFSU2_TR(0x581c4a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B581c4c:{NFSU2_TR(0x581c4c);
if(r1(R+518)){{goto L581c58;}}
}
B581c4e:L581c4e:{c.instructions+=2;NFSU2_TR(0x581c4e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581c50:{NFSU2_TR(0x581c50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581c55ull));
TAIL_STATIC(0x5be1e0u,5be);
}
B581c55:L581c55:{c.instructions+=1;NFSU2_TR(0x581c55);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B581c58:L581c58:{c.instructions+=2;NFSU2_TR(0x581c58);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x200ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x200ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B581c5e:{NFSU2_TR(0x581c5e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B581c5f:L581c5f:{c.instructions+=3;NFSU2_TR(0x581c5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B581c65:{NFSU2_TR(0x581c65);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B581c67:{NFSU2_TR(0x581c67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L581c7f;}}
}
B581c69:L581c69:{c.instructions+=1;NFSU2_TR(0x581c69);
__builtin_memmove((R+16),(R+16),4);
}
B581c70:L581c70:{c.instructions+=1;NFSU2_TR(0x581c70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581c75ull));
TAIL_STATIC(0x57ef60u,57e);
}
B581c75:L581c75:{c.instructions+=3;NFSU2_TR(0x581c75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B581c7b:{NFSU2_TR(0x581c7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B581c7d:{NFSU2_TR(0x581c7d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x581c70u);}goto L581c70;}}
}
B581c7f:L581c7f:{c.instructions+=6;NFSU2_TR(0x581c7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B581c82:{NFSU2_TR(0x581c82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B581c84:{NFSU2_TR(0x581c84);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B581c86:{NFSU2_TR(0x581c86);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B581c89:{NFSU2_TR(0x581c89);
__builtin_memmove((R+4),(R+24),4);
}
B581c8b:{NFSU2_TR(0x581c8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581c90ull));
TAIL_STATIC(0x577d80u,577);
}
B581c90:L581c90:{c.instructions+=4;NFSU2_TR(0x581c90);
__builtin_memmove((R+0),gp(0x864f78),4);
}
B581c95:{NFSU2_TR(0x581c95);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581c96:{NFSU2_TR(0x581c96);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581c97:{NFSU2_TR(0x581c97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581c9cull));
TAIL_STATIC(0x43f920u,43f);
}
B581c9c:L581c9c:{c.instructions+=2;NFSU2_TR(0x581c9c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B581c9f:{NFSU2_TR(0x581c9f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x581bb1u);}goto L581bb1;}
}
B581cb0:L581cb0:{c.instructions+=8;NFSU2_TR(0x581cb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B581cb3:{NFSU2_TR(0x581cb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x400ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B581cb9:{NFSU2_TR(0x581cb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x404ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B581cbf:{NFSU2_TR(0x581cbf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B581cc3:{NFSU2_TR(0x581cc3);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B581cc7:{NFSU2_TR(0x581cc7);
{u32 ea_=u32(u32(7897444u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B581ccd:{NFSU2_TR(0x581ccd);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B581cd1:{NFSU2_TR(0x581cd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581cd6ull));
TAIL_STATIC(0x75bed4u,75b);
}
B581cd6:L581cd6:{c.instructions+=6;NFSU2_TR(0x581cd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B581cda:{NFSU2_TR(0x581cda);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B581cde:{NFSU2_TR(0x581cde);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B581ce2:{NFSU2_TR(0x581ce2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B581ce4:{NFSU2_TR(0x581ce4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B581ce7:{NFSU2_TR(0x581ce7);
if(r1(R+514)){{goto L581cef;}}
}
B581ce9:L581ce9:{c.instructions+=1;NFSU2_TR(0x581ce9);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B581cef:L581cef:{c.instructions+=2;NFSU2_TR(0x581cef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B581cf2:{NFSU2_TR(0x581cf2);
TAIL_STATIC(0x75bed4u,75b);
}
B581d00:L581d00:{c.instructions+=18;NFSU2_TR(0x581d00);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581d01:{NFSU2_TR(0x581d01);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B581d05:{NFSU2_TR(0x581d05);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581d06:{NFSU2_TR(0x581d06);
__builtin_memmove((R+24),(R+4),4);
}
B581d08:{NFSU2_TR(0x581d08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x400ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B581d0e:{NFSU2_TR(0x581d0e);
__builtin_memmove((R+0),(R+4),4);
}
B581d10:{NFSU2_TR(0x581d10);
__builtin_memmove((R+8),(R+4),4);
}
B581d12:{NFSU2_TR(0x581d12);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581d13:{NFSU2_TR(0x581d13);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B581d17:{NFSU2_TR(0x581d17);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B581d19:{NFSU2_TR(0x581d19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x400ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B581d1f:{NFSU2_TR(0x581d1f);
w4(R+4,u32(0x20ull));
}
B581d24:{NFSU2_TR(0x581d24);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B581d26:{NFSU2_TR(0x581d26);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B581d29:{NFSU2_TR(0x581d29);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B581d2c:{NFSU2_TR(0x581d2c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B581d2e:{NFSU2_TR(0x581d2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B581d30:{NFSU2_TR(0x581d30);
if(r1(R+518)){{goto L581d54;}}
}
B581d32:L581d32:{c.instructions+=4;NFSU2_TR(0x581d32);
w4(R+4,u32(0x8ull));
}
B581d37:{NFSU2_TR(0x581d37);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B581d39:{NFSU2_TR(0x581d39);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B581d3b:{NFSU2_TR(0x581d3b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L581d3f;}}
}
B581d3d:L581d3d:{c.instructions+=1;NFSU2_TR(0x581d3d);
__builtin_memmove((R+4),(R+28),4);
}
B581d3f:L581d3f:{c.instructions+=8;NFSU2_TR(0x581d3f);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B581d41:{NFSU2_TR(0x581d41);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B581d45:{NFSU2_TR(0x581d45);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B581d47:{NFSU2_TR(0x581d47);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((R+4),(U+0),4);
}
B581d4a:{NFSU2_TR(0x581d4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B581d4e:{NFSU2_TR(0x581d4e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r1(U+0))));
}
B581d50:{NFSU2_TR(0x581d50);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w1(U+8,u8(u32(r1(U+8))|u32(r1(R+8))));
s1(u32(r4(U+4)),r1(U+8));
}
B581d53:{NFSU2_TR(0x581d53);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B581d54:L581d54:{c.instructions+=2;NFSU2_TR(0x581d54);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B581d57:{NFSU2_TR(0x581d57);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L581d7b;}}
}
B581d59:L581d59:{c.instructions+=2;NFSU2_TR(0x581d59);
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
B581d5b:{NFSU2_TR(0x581d5b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L581d83;}}
}
B581d5d:L581d5d:{c.instructions+=4;NFSU2_TR(0x581d5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B581d60:{NFSU2_TR(0x581d60);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B581d63:{NFSU2_TR(0x581d63);
u8 U[27];
w4(U+19,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
__builtin_memmove((U+23),(R+0),4);
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+19))));
w1(U+5,u8((r4(U+19))==(u32(0x0ull))));
w4(U+6,u32(u32(r4(U+19))-u32(u32(0x1ull))));
w4(U+10,shr<u32>(r4(U+23),u64(r4(U+6))));
w4(U+14,u32(u32(r4(U+10))&u32(u32(0x1ull))));
w1(U+18,u8((r4(U+14))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+5),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+5))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+18))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
}
B581d66:{NFSU2_TR(0x581d66);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B581d67:L581d67:{c.instructions+=7;NFSU2_TR(0x581d67);
__builtin_memmove((R+8),(R+20),4);
}
B581d69:{NFSU2_TR(0x581d69);
u8 U[27];
w4(U+19,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
__builtin_memmove((U+23),(R+8),4);
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+19))));
w1(U+5,u8((r4(U+19))==(u32(0x0ull))));
w4(U+6,u32(u32(r4(U+19))-u32(u32(0x1ull))));
w4(U+10,shr<u32>(r4(U+23),u64(r4(U+6))));
w4(U+14,u32(u32(r4(U+10))&u32(u32(0x1ull))));
w1(U+18,u8((r4(U+14))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+5),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+5))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+18))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
}
B581d6c:{NFSU2_TR(0x581d6c);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+4)),r1(U+0));
}
B581d6e:{NFSU2_TR(0x581d6e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B581d6f:{NFSU2_TR(0x581d6f);
u8 U[23];
w4(U+15,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
__builtin_memmove((U+19),(R+20),4);
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+15))));
w1(U+5,u8((r4(U+15))==(u32(0x0ull))));
w4(U+6,u32(u32(r4(U+15))-u32(u32(0x1ull))));
w4(U+10,shl<u32>(r4(U+19),u64(r4(U+6))));
w1(U+14,u8(s32(r4(U+10))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+5),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+5))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+14))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
}
B581d72:{NFSU2_TR(0x581d72);
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
B581d73:{NFSU2_TR(0x581d73);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x581d67u);}goto L581d67;}}
}
B581d75:L581d75:{c.instructions+=4;NFSU2_TR(0x581d75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B581d76:{NFSU2_TR(0x581d76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B581d77:{NFSU2_TR(0x581d77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B581d78:{NFSU2_TR(0x581d78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B581d7b:L581d7b:{c.instructions+=3;NFSU2_TR(0x581d7b);
__builtin_memmove((R+4),(R+20),4);
}
B581d7d:{NFSU2_TR(0x581d7d);
u8 U[48];
w4(U+40,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
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
B581d80:{NFSU2_TR(0x581d80);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B581d83:L581d83:{c.instructions+=4;NFSU2_TR(0x581d83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B581d84:{NFSU2_TR(0x581d84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B581d85:{NFSU2_TR(0x581d85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B581d86:{NFSU2_TR(0x581d86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B581d90:L581d90:{c.instructions+=16;NFSU2_TR(0x581d90);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581d91:{NFSU2_TR(0x581d91);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B581d95:{NFSU2_TR(0x581d95);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581d96:{NFSU2_TR(0x581d96);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581d97:{NFSU2_TR(0x581d97);
__builtin_memmove((R+24),(R+4),4);
}
B581d99:{NFSU2_TR(0x581d99);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581d9a:{NFSU2_TR(0x581d9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x404ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B581da0:{NFSU2_TR(0x581da0);
__builtin_memmove((R+0),(R+28),4);
}
B581da2:{NFSU2_TR(0x581da2);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B581da3:{NFSU2_TR(0x581da3);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B581da6:{NFSU2_TR(0x581da6);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B581da8:{NFSU2_TR(0x581da8);
__builtin_memmove((R+4),(R+28),4);
}
B581daa:{NFSU2_TR(0x581daa);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B581dad:{NFSU2_TR(0x581dad);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x80000007ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B581db3:{NFSU2_TR(0x581db3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B581db7:{NFSU2_TR(0x581db7);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L581dbe;}}
}
B581db9:L581db9:{c.instructions+=3;NFSU2_TR(0x581db9);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B581dba:{NFSU2_TR(0x581dba);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xfffffff8ull))));
}
B581dbd:{NFSU2_TR(0x581dbd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B581dbe:L581dbe:{c.instructions+=6;NFSU2_TR(0x581dbe);
w4(R+8,u32(0x8ull));
}
B581dc3:{NFSU2_TR(0x581dc3);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B581dc5:{NFSU2_TR(0x581dc5);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B581dc7:{NFSU2_TR(0x581dc7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B581dc9:{NFSU2_TR(0x581dc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x404ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B581dcf:{NFSU2_TR(0x581dcf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L581dd3;}}
}
B581dd1:L581dd1:{c.instructions+=1;NFSU2_TR(0x581dd1);
__builtin_memmove((R+8),(R+12),4);
}
B581dd3:L581dd3:{c.instructions+=11;NFSU2_TR(0x581dd3);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+20,u32(r1(U+8)));
}
B581dd7:{NFSU2_TR(0x581dd7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B581ddb:{NFSU2_TR(0x581ddb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B581dde:{NFSU2_TR(0x581dde);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B581de0:{NFSU2_TR(0x581de0);
w4(R+4,u32(0x18ull));
}
B581de5:{NFSU2_TR(0x581de5);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B581de7:{NFSU2_TR(0x581de7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B581de8:{NFSU2_TR(0x581de8);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+8))));
}
B581dea:{NFSU2_TR(0x581dea);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B581dec:{NFSU2_TR(0x581dec);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+28)),r4(U+0));
}
B581dee:{NFSU2_TR(0x581dee);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L581e16;}}
}
B581df0:L581df0:{c.instructions+=6;NFSU2_TR(0x581df0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B581df3:{NFSU2_TR(0x581df3);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B581df6:{NFSU2_TR(0x581df6);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B581df9:{NFSU2_TR(0x581df9);
w4(R+20,u32(0xfffffff8ull));
}
B581dfe:{NFSU2_TR(0x581dfe);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+8))));
}
B581e00:{NFSU2_TR(0x581e00);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+20))));
}
B581e02:L581e02:{c.instructions+=9;NFSU2_TR(0x581e02);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+8,u32(r1(U+8)));
}
B581e06:{NFSU2_TR(0x581e06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+20),(U+0),4);
}
B581e08:{NFSU2_TR(0x581e08);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B581e0a:{NFSU2_TR(0x581e0a);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x8ull))));
}
B581e0d:{NFSU2_TR(0x581e0d);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+8))));
}
B581e0f:{NFSU2_TR(0x581e0f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B581e10:{NFSU2_TR(0x581e10);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B581e12:{NFSU2_TR(0x581e12);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+28)),r4(U+0));
}
B581e14:{NFSU2_TR(0x581e14);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x581e02u);}goto L581e02;}}
}
B581e16:L581e16:{c.instructions+=2;NFSU2_TR(0x581e16);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B581e18:{NFSU2_TR(0x581e18);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L581e24;}}
}
B581e1a:L581e1a:{c.instructions+=4;NFSU2_TR(0x581e1a);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B581e1e:{NFSU2_TR(0x581e1e);
w1(R+4,u8(0-u32(r1(R+4))));
}
B581e20:{NFSU2_TR(0x581e20);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r1(U+0))));
}
B581e22:{NFSU2_TR(0x581e22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))|u32(r4(R+0))));
s4(u32(r4(R+28)),r4(U+0));
}
B581e24:L581e24:{c.instructions+=11;NFSU2_TR(0x581e24);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B581e28:{NFSU2_TR(0x581e28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B581e2a:{NFSU2_TR(0x581e2a);
w4(R+4,u32(0x20ull));
}
B581e2f:{NFSU2_TR(0x581e2f);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+8))));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B581e31:{NFSU2_TR(0x581e31);
u8 U[42];
w1(U+37,u8(u32(r1(R+4))&u32(u8(0x1full))));
__builtin_memmove((U+38),(R+0),4);
w4(R+0,shr<u32>(r4(R+0),u64(r1(U+37))));
w1(U+24,u8((r1(U+37))==(u8(0x0ull))));
w1(U+25,u8(u32(r1(U+37))-u32(u8(0x1ull))));
w4(U+26,shr<u32>(r4(U+38),u64(r1(U+25))));
w4(U+30,u32(u32(r4(U+26))&u32(u32(0x1ull))));
w1(U+34,u8((r4(U+30))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+34))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+35,u8((r1(U+37))==(u8(0x1ull))));
w1(U+36,u8(s32(r4(U+38))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+35),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+35))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+36))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r1(U+37))!=(u8(0x0ull))));
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
B581e33:{NFSU2_TR(0x581e33);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B581e35:{NFSU2_TR(0x581e35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B581e36:{NFSU2_TR(0x581e36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B581e37:{NFSU2_TR(0x581e37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B581e38:{NFSU2_TR(0x581e38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B581e39:{NFSU2_TR(0x581e39);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B581e40:L581e40:{c.instructions+=14;NFSU2_TR(0x581e40);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B581e42:{NFSU2_TR(0x581e42);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581e43:{NFSU2_TR(0x581e43);
__builtin_memmove((R+24),(R+4),4);
}
B581e45:{NFSU2_TR(0x581e45);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581e4a:{NFSU2_TR(0x581e4a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581e4b:{NFSU2_TR(0x581e4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B581e51:{NFSU2_TR(0x581e51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B581e57:{NFSU2_TR(0x581e57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B581e5d:{NFSU2_TR(0x581e5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B581e63:{NFSU2_TR(0x581e63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B581e69:{NFSU2_TR(0x581e69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B581e6f:{NFSU2_TR(0x581e6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B581e75:{NFSU2_TR(0x581e75);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B581e7b:{NFSU2_TR(0x581e7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581e80ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B581e80:L581e80:{c.instructions+=4;NFSU2_TR(0x581e80);
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
B581e83:{NFSU2_TR(0x581e83);
__builtin_memmove((R+0),(R+24),4);
}
B581e85:{NFSU2_TR(0x581e85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B581e86:{NFSU2_TR(0x581e86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B581e90:L581e90:{c.instructions+=6;NFSU2_TR(0x581e90);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B581e94:{NFSU2_TR(0x581e94);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581e95:{NFSU2_TR(0x581e95);
__builtin_memmove((R+24),(R+4),4);
}
B581e97:{NFSU2_TR(0x581e97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581e98:{NFSU2_TR(0x581e98);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581e99:{NFSU2_TR(0x581e99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581e9eull));
TAIL_STATIC(0x43dbd0u,43d);
}
B581e9e:L581e9e:{c.instructions+=16;NFSU2_TR(0x581e9e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B581ea2:{NFSU2_TR(0x581ea2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B581ea6:{NFSU2_TR(0x581ea6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B581ea8:{NFSU2_TR(0x581ea8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B581eac:{NFSU2_TR(0x581eac);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B581eb0:{NFSU2_TR(0x581eb0);
{u32 ea_=u32(r4(R+24)+u32(316u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B581eb6:{NFSU2_TR(0x581eb6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B581eb9:{NFSU2_TR(0x581eb9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B581ebd:{NFSU2_TR(0x581ebd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B581ec3:{NFSU2_TR(0x581ec3);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B581ec7:{NFSU2_TR(0x581ec7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B581ecd:{NFSU2_TR(0x581ecd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B581ed3:{NFSU2_TR(0x581ed3);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B581ed7:{NFSU2_TR(0x581ed7);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B581ed9:{NFSU2_TR(0x581ed9);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B581edf:{NFSU2_TR(0x581edf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581ee4ull));
TAIL_STATIC(0x75bed4u,75b);
}
B581ee4:L581ee4:{c.instructions+=6;NFSU2_TR(0x581ee4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B581ee6:{NFSU2_TR(0x581ee6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B581ee7:{NFSU2_TR(0x581ee7);
w4(R+4,u32(0x0ull));
}
B581eec:{NFSU2_TR(0x581eec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B581ef2:{NFSU2_TR(0x581ef2);
__builtin_memmove((R+8),(R+4),4);
}
B581ef4:{NFSU2_TR(0x581ef4);
if(r1(R+518)){{goto L581f08;}}
}
B581ef6:L581ef6:{c.instructions+=5;NFSU2_TR(0x581ef6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B581ef7:{NFSU2_TR(0x581ef7);
w4(R+8,u32(0x1ull));
}
B581efc:{NFSU2_TR(0x581efc);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B581efe:{NFSU2_TR(0x581efe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B581f00:{NFSU2_TR(0x581f00);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x581ef6u);}goto L581ef6;}}
}
B581f02:L581f02:{c.instructions+=1;NFSU2_TR(0x581f02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B581f08:L581f08:{c.instructions+=5;NFSU2_TR(0x581f08);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B581f09:{NFSU2_TR(0x581f09);
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
B581f0b:{NFSU2_TR(0x581f0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B581f0f:{NFSU2_TR(0x581f0f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B581f13:{NFSU2_TR(0x581f13);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L581f1b;}}
}
B581f15:L581f15:{c.instructions+=1;NFSU2_TR(0x581f15);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B581f1b:L581f1b:{c.instructions+=9;NFSU2_TR(0x581f1b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B581f1f:{NFSU2_TR(0x581f1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
w4(U+4,u32(0x7f7fffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B581f29:{NFSU2_TR(0x581f29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
w4(U+4,u32(0xff7fffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B581f33:{NFSU2_TR(0x581f33);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B581f3a:{NFSU2_TR(0x581f3a);
{u32 ea_=u32(r4(R+24)+u32(316u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B581f40:{NFSU2_TR(0x581f40);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B581f46:{NFSU2_TR(0x581f46);
{u32 ea_=u32(r4(R+24)+u32(312u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B581f4c:{NFSU2_TR(0x581f4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B581f4d:{NFSU2_TR(0x581f4d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B581f50:L581f50:{c.instructions+=6;NFSU2_TR(0x581f50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B581f54:{NFSU2_TR(0x581f54);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581f55:{NFSU2_TR(0x581f55);
__builtin_memmove((R+24),(R+4),4);
}
B581f57:{NFSU2_TR(0x581f57);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581f58:{NFSU2_TR(0x581f58);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B581f59:{NFSU2_TR(0x581f59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x581f5eull));
TAIL_STATIC(0x43dbd0u,43d);
}
B581f5e:L581f5e:{c.instructions+=16;NFSU2_TR(0x581f5e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B581f62:{NFSU2_TR(0x581f62);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B581f66:{NFSU2_TR(0x581f66);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B581f6a:{NFSU2_TR(0x581f6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B581f6e:{NFSU2_TR(0x581f6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B581f74:{NFSU2_TR(0x581f74);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B581f78:{NFSU2_TR(0x581f78);
w4(R+0,u32(0x1ull));
}
B581f7d:{NFSU2_TR(0x581f7d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B581f7f:{NFSU2_TR(0x581f7f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B581f82:{NFSU2_TR(0x581f82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B581f88:{NFSU2_TR(0x581f88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B581f8e:{NFSU2_TR(0x581f8e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B581f8f:{NFSU2_TR(0x581f8f);
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
B581f91:{NFSU2_TR(0x581f91);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B581f95:{NFSU2_TR(0x581f95);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B581f99:{NFSU2_TR(0x581f99);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L581fa1;}}
}
B581f9b:L581f9b:{c.instructions+=1;NFSU2_TR(0x581f9b);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B581fa1:L581fa1:{c.instructions+=9;NFSU2_TR(0x581fa1);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B581fa3:{NFSU2_TR(0x581fa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
w4(U+4,u32(0x7f7fffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B581fad:{NFSU2_TR(0x581fad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
w4(U+4,u32(0xff7fffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B581fb7:{NFSU2_TR(0x581fb7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B581fbe:{NFSU2_TR(0x581fbe);
{u32 ea_=u32(r4(R+24)+u32(316u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B581fc4:{NFSU2_TR(0x581fc4);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B581fca:{NFSU2_TR(0x581fca);
{u32 ea_=u32(r4(R+24)+u32(312u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B581fd0:{NFSU2_TR(0x581fd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B581fd1:{NFSU2_TR(0x581fd1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B581fe0:L581fe0:{c.instructions+=5;NFSU2_TR(0x581fe0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B581fe4:{NFSU2_TR(0x581fe4);
{u32 ea_=u32(r4(R+4)+u32(304u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B581fea:{NFSU2_TR(0x581fea);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B581fec:{NFSU2_TR(0x581fec);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B581fef:{NFSU2_TR(0x581fef);
if(r1(R+514)){{goto L581ff9;}}
}
B581ff1:L581ff1:{c.instructions+=2;NFSU2_TR(0x581ff1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B581ff3:{NFSU2_TR(0x581ff3);
{u32 ea_=u32(r4(R+4)+u32(304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B581ff9:L581ff9:{c.instructions+=2;NFSU2_TR(0x581ff9);
{u32 ea_=u32(r4(R+4)+u32(308u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B581fff:{NFSU2_TR(0x581fff);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
TAIL_STATIC(0x582001u,582);
}
XIT:NFSU2_TR_EXIT(0x581,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
