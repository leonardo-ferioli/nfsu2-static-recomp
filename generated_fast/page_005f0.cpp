#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_431(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_581(u8* __restrict R,Cpu& c);
u32 body_582(u8* __restrict R,Cpu& c);
u32 body_583(u8* __restrict R,Cpu& c);
u32 body_584(u8* __restrict R,Cpu& c);
u32 body_58c(u8* __restrict R,Cpu& c);
u32 body_58f(u8* __restrict R,Cpu& c);
u32 body_599(u8* __restrict R,Cpu& c);
u32 body_59a(u8* __restrict R,Cpu& c);
u32 body_5a6(u8* __restrict R,Cpu& c);
u32 body_5a7(u8* __restrict R,Cpu& c);
u32 body_5ac(u8* __restrict R,Cpu& c);
u32 body_5b4(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5b6(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5f1(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_61c(u8* __restrict R,Cpu& c);
u32 body_631(u8* __restrict R,Cpu& c);
u32 body_637(u8* __restrict R,Cpu& c);
u32 body_741(u8* __restrict R,Cpu& c);
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5f0,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5f0,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 page_5f0(Cpu& c){return body_5f0(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5f0(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5f0000:goto L5f0000;
case 0x5f0005:goto L5f0005;
case 0x5f0008:c.instructions+=2;goto B5f0008;
case 0x5f0009:c.instructions+=1;goto B5f0009;
case 0x5f000e:goto L5f000e;
case 0x5f0012:c.instructions+=2;goto B5f0012;
case 0x5f0013:c.instructions+=1;goto B5f0013;
case 0x5f0018:goto L5f0018;
case 0x5f001b:c.instructions+=2;goto B5f001b;
case 0x5f001d:c.instructions+=1;goto B5f001d;
case 0x5f0023:goto L5f0023;
case 0x5f0027:c.instructions+=6;goto B5f0027;
case 0x5f0028:c.instructions+=5;goto B5f0028;
case 0x5f002d:c.instructions+=4;goto B5f002d;
case 0x5f0034:c.instructions+=3;goto B5f0034;
case 0x5f0039:c.instructions+=2;goto B5f0039;
case 0x5f003a:c.instructions+=1;goto B5f003a;
case 0x5f003f:goto L5f003f;
case 0x5f0042:c.instructions+=6;goto B5f0042;
case 0x5f0044:c.instructions+=5;goto B5f0044;
case 0x5f004b:c.instructions+=4;goto B5f004b;
case 0x5f004c:c.instructions+=3;goto B5f004c;
case 0x5f0051:c.instructions+=2;goto B5f0051;
case 0x5f0058:c.instructions+=1;goto B5f0058;
case 0x5f005d:goto L5f005d;
case 0x5f0064:c.instructions+=2;goto B5f0064;
case 0x5f006c:c.instructions+=1;goto B5f006c;
case 0x5f0071:goto L5f0071;
case 0x5f0073:c.instructions+=1;goto B5f0073;
case 0x5f0075:goto L5f0075;
case 0x5f007a:c.instructions+=1;goto B5f007a;
case 0x5f0080:goto L5f0080;
case 0x5f0087:c.instructions+=1;goto B5f0087;
case 0x5f008c:goto L5f008c;
case 0x5f008e:c.instructions+=1;goto B5f008e;
case 0x5f0090:goto L5f0090;
case 0x5f0097:c.instructions+=1;goto B5f0097;
case 0x5f009c:goto L5f009c;
case 0x5f009e:c.instructions+=3;goto B5f009e;
case 0x5f00a1:c.instructions+=2;goto B5f00a1;
case 0x5f00a7:c.instructions+=1;goto B5f00a7;
case 0x5f00a9:goto L5f00a9;
case 0x5f00b0:c.instructions+=2;goto B5f00b0;
case 0x5f00b8:c.instructions+=1;goto B5f00b8;
case 0x5f00bd:goto L5f00bd;
case 0x5f00c4:c.instructions+=2;goto B5f00c4;
case 0x5f00cf:c.instructions+=1;goto B5f00cf;
case 0x5f00d4:goto L5f00d4;
case 0x5f00d5:c.instructions+=5;goto B5f00d5;
case 0x5f00d6:c.instructions+=4;goto B5f00d6;
case 0x5f00dd:c.instructions+=3;goto B5f00dd;
case 0x5f00e4:c.instructions+=2;goto B5f00e4;
case 0x5f00ea:c.instructions+=1;goto B5f00ea;
case 0x5f00f0:goto L5f00f0;
case 0x5f00f3:c.instructions+=2;goto B5f00f3;
case 0x5f00f5:c.instructions+=1;goto B5f00f5;
case 0x5f00f7:goto L5f00f7;
case 0x5f00fc:c.instructions+=2;goto B5f00fc;
case 0x5f00fe:c.instructions+=1;goto B5f00fe;
case 0x5f0100:goto L5f0100;
case 0x5f0105:c.instructions+=2;goto B5f0105;
case 0x5f0107:c.instructions+=1;goto B5f0107;
case 0x5f0109:goto L5f0109;
case 0x5f010b:c.instructions+=1;goto B5f010b;
case 0x5f010c:goto L5f010c;
case 0x5f0111:c.instructions+=1;goto B5f0111;
case 0x5f0120:goto L5f0120;
case 0x5f0125:c.instructions+=3;goto B5f0125;
case 0x5f0127:c.instructions+=2;goto B5f0127;
case 0x5f012a:c.instructions+=1;goto B5f012a;
case 0x5f012c:goto L5f012c;
case 0x5f012d:c.instructions+=4;goto B5f012d;
case 0x5f012e:c.instructions+=3;goto B5f012e;
case 0x5f012f:c.instructions+=2;goto B5f012f;
case 0x5f0130:c.instructions+=1;goto B5f0130;
case 0x5f0135:goto L5f0135;
case 0x5f0137:c.instructions+=1;goto B5f0137;
case 0x5f0139:goto L5f0139;
case 0x5f013e:goto L5f013e;
case 0x5f0140:goto L5f0140;
case 0x5f0145:goto L5f0145;
case 0x5f0147:c.instructions+=1;goto B5f0147;
case 0x5f0149:goto L5f0149;
case 0x5f014e:goto L5f014e;
case 0x5f0150:goto L5f0150;
case 0x5f0153:c.instructions+=1;goto B5f0153;
case 0x5f0155:goto L5f0155;
case 0x5f015b:goto L5f015b;
case 0x5f0160:goto L5f0160;
case 0x5f0162:c.instructions+=5;goto B5f0162;
case 0x5f0168:c.instructions+=4;goto B5f0168;
case 0x5f016e:c.instructions+=3;goto B5f016e;
case 0x5f0172:c.instructions+=2;goto B5f0172;
case 0x5f0175:c.instructions+=1;goto B5f0175;
case 0x5f0180:goto L5f0180;
case 0x5f0184:c.instructions+=2;goto B5f0184;
case 0x5f0187:c.instructions+=1;goto B5f0187;
case 0x5f0189:goto L5f0189;
case 0x5f0190:c.instructions+=1;goto B5f0190;
case 0x5f0197:goto L5f0197;
case 0x5f019c:c.instructions+=1;goto B5f019c;
case 0x5f019d:goto L5f019d;
case 0x5f01a2:c.instructions+=1;goto B5f01a2;
case 0x5f01a7:goto L5f01a7;
case 0x5f01aa:c.instructions+=2;goto B5f01aa;
case 0x5f01ac:c.instructions+=1;goto B5f01ac;
case 0x5f01ae:goto L5f01ae;
case 0x5f01b3:c.instructions+=1;goto B5f01b3;
case 0x5f01b4:goto L5f01b4;
case 0x5f01b9:c.instructions+=1;goto B5f01b9;
case 0x5f01ba:goto L5f01ba;
case 0x5f01bc:c.instructions+=1;goto B5f01bc;
case 0x5f01e0:goto L5f01e0;
case 0x5f01e3:c.instructions+=3;goto B5f01e3;
case 0x5f01e5:c.instructions+=2;goto B5f01e5;
case 0x5f01e7:c.instructions+=1;goto B5f01e7;
case 0x5f01e9:goto L5f01e9;
case 0x5f01ee:goto L5f01ee;
case 0x5f01f1:c.instructions+=2;goto B5f01f1;
case 0x5f01f3:c.instructions+=1;goto B5f01f3;
case 0x5f01f5:goto L5f01f5;
case 0x5f01f6:goto L5f01f6;
case 0x5f01f9:c.instructions+=2;goto B5f01f9;
case 0x5f01fb:c.instructions+=1;goto B5f01fb;
case 0x5f01fd:goto L5f01fd;
case 0x5f01fe:goto L5f01fe;
case 0x5f0201:c.instructions+=2;goto B5f0201;
case 0x5f0203:c.instructions+=1;goto B5f0203;
case 0x5f0205:goto L5f0205;
case 0x5f0206:goto L5f0206;
case 0x5f0209:c.instructions+=2;goto B5f0209;
case 0x5f020b:c.instructions+=1;goto B5f020b;
case 0x5f020d:goto L5f020d;
case 0x5f020e:goto L5f020e;
case 0x5f0211:c.instructions+=2;goto B5f0211;
case 0x5f0213:c.instructions+=1;goto B5f0213;
case 0x5f0215:goto L5f0215;
case 0x5f0216:goto L5f0216;
case 0x5f0220:goto L5f0220;
case 0x5f0224:c.instructions+=2;goto B5f0224;
case 0x5f0228:c.instructions+=1;goto B5f0228;
case 0x5f0230:goto L5f0230;
case 0x5f0231:c.instructions+=8;goto B5f0231;
case 0x5f0232:c.instructions+=7;goto B5f0232;
case 0x5f0236:c.instructions+=6;goto B5f0236;
case 0x5f0237:c.instructions+=5;goto B5f0237;
case 0x5f0239:c.instructions+=4;goto B5f0239;
case 0x5f023a:c.instructions+=3;goto B5f023a;
case 0x5f023c:c.instructions+=2;goto B5f023c;
case 0x5f023f:c.instructions+=1;goto B5f023f;
case 0x5f0240:goto L5f0240;
case 0x5f0242:c.instructions+=2;goto B5f0242;
case 0x5f0244:c.instructions+=1;goto B5f0244;
case 0x5f0246:goto L5f0246;
case 0x5f0249:c.instructions+=3;goto B5f0249;
case 0x5f024a:c.instructions+=2;goto B5f024a;
case 0x5f024b:c.instructions+=1;goto B5f024b;
case 0x5f0250:goto L5f0250;
case 0x5f0253:c.instructions+=2;goto B5f0253;
case 0x5f0255:c.instructions+=1;goto B5f0255;
case 0x5f0257:goto L5f0257;
case 0x5f0258:c.instructions+=3;goto B5f0258;
case 0x5f025b:c.instructions+=2;goto B5f025b;
case 0x5f025e:c.instructions+=1;goto B5f025e;
case 0x5f0260:goto L5f0260;
case 0x5f0261:c.instructions+=5;goto B5f0261;
case 0x5f0262:c.instructions+=4;goto B5f0262;
case 0x5f0263:c.instructions+=3;goto B5f0263;
case 0x5f0265:c.instructions+=2;goto B5f0265;
case 0x5f0266:c.instructions+=1;goto B5f0266;
case 0x5f0269:goto L5f0269;
case 0x5f026d:c.instructions+=5;goto B5f026d;
case 0x5f026e:c.instructions+=4;goto B5f026e;
case 0x5f026f:c.instructions+=3;goto B5f026f;
case 0x5f0270:c.instructions+=2;goto B5f0270;
case 0x5f0271:c.instructions+=1;goto B5f0271;
case 0x5f0280:goto L5f0280;
case 0x5f0281:c.instructions+=3;goto B5f0281;
case 0x5f0282:c.instructions+=2;goto B5f0282;
case 0x5f0284:c.instructions+=1;goto B5f0284;
case 0x5f0287:goto L5f0287;
case 0x5f0289:c.instructions+=2;goto B5f0289;
case 0x5f028b:c.instructions+=1;goto B5f028b;
case 0x5f028d:goto L5f028d;
case 0x5f0290:c.instructions+=2;goto B5f0290;
case 0x5f0292:c.instructions+=1;goto B5f0292;
case 0x5f0294:goto L5f0294;
case 0x5f0295:c.instructions+=3;goto B5f0295;
case 0x5f0298:c.instructions+=2;goto B5f0298;
case 0x5f029b:c.instructions+=1;goto B5f029b;
case 0x5f029d:goto L5f029d;
case 0x5f029e:c.instructions+=3;goto B5f029e;
case 0x5f02a0:c.instructions+=2;goto B5f02a0;
case 0x5f02a1:c.instructions+=1;goto B5f02a1;
case 0x5f02a2:goto L5f02a2;
case 0x5f02a6:c.instructions+=3;goto B5f02a6;
case 0x5f02a7:c.instructions+=2;goto B5f02a7;
case 0x5f02a8:c.instructions+=1;goto B5f02a8;
case 0x5f02b0:goto L5f02b0;
case 0x5f02b5:c.instructions+=4;goto B5f02b5;
case 0x5f02b8:c.instructions+=3;goto B5f02b8;
case 0x5f02b9:c.instructions+=2;goto B5f02b9;
case 0x5f02bb:c.instructions+=1;goto B5f02bb;
case 0x5f02bd:goto L5f02bd;
case 0x5f02be:c.instructions+=2;goto B5f02be;
case 0x5f02c3:c.instructions+=1;goto B5f02c3;
case 0x5f02c8:goto L5f02c8;
case 0x5f02ca:c.instructions+=1;goto B5f02ca;
case 0x5f02cc:goto L5f02cc;
case 0x5f02d0:c.instructions+=8;goto B5f02d0;
case 0x5f02d2:c.instructions+=7;goto B5f02d2;
case 0x5f02d4:c.instructions+=6;goto B5f02d4;
case 0x5f02d6:c.instructions+=5;goto B5f02d6;
case 0x5f02dc:c.instructions+=4;goto B5f02dc;
case 0x5f02e2:c.instructions+=3;goto B5f02e2;
case 0x5f02e5:c.instructions+=2;goto B5f02e5;
case 0x5f02e8:c.instructions+=1;goto B5f02e8;
case 0x5f02ea:goto L5f02ea;
case 0x5f02ed:c.instructions+=2;goto B5f02ed;
case 0x5f02f1:c.instructions+=1;goto B5f02f1;
case 0x5f02f8:goto L5f02f8;
case 0x5f02fc:c.instructions+=8;goto B5f02fc;
case 0x5f02ff:c.instructions+=7;goto B5f02ff;
case 0x5f0302:c.instructions+=6;goto B5f0302;
case 0x5f0306:c.instructions+=5;goto B5f0306;
case 0x5f0307:c.instructions+=4;goto B5f0307;
case 0x5f0308:c.instructions+=3;goto B5f0308;
case 0x5f030c:c.instructions+=2;goto B5f030c;
case 0x5f030f:c.instructions+=1;goto B5f030f;
case 0x5f0314:goto L5f0314;
case 0x5f0315:c.instructions+=1;goto B5f0315;
case 0x5f0320:goto L5f0320;
case 0x5f0323:c.instructions+=12;goto B5f0323;
case 0x5f0324:c.instructions+=11;goto B5f0324;
case 0x5f0325:c.instructions+=10;goto B5f0325;
case 0x5f0326:c.instructions+=9;goto B5f0326;
case 0x5f0327:c.instructions+=8;goto B5f0327;
case 0x5f032b:c.instructions+=7;goto B5f032b;
case 0x5f032d:c.instructions+=6;goto B5f032d;
case 0x5f032f:c.instructions+=5;goto B5f032f;
case 0x5f0331:c.instructions+=4;goto B5f0331;
case 0x5f0334:c.instructions+=3;goto B5f0334;
case 0x5f0336:c.instructions+=2;goto B5f0336;
case 0x5f0338:c.instructions+=1;goto B5f0338;
case 0x5f033d:goto L5f033d;
case 0x5f033f:c.instructions+=2;goto B5f033f;
case 0x5f0341:c.instructions+=1;goto B5f0341;
case 0x5f0346:goto L5f0346;
case 0x5f0348:c.instructions+=1;goto B5f0348;
case 0x5f034d:goto L5f034d;
case 0x5f0353:c.instructions+=6;goto B5f0353;
case 0x5f0359:c.instructions+=5;goto B5f0359;
case 0x5f035d:c.instructions+=4;goto B5f035d;
case 0x5f035f:c.instructions+=3;goto B5f035f;
case 0x5f0360:c.instructions+=2;goto B5f0360;
case 0x5f0361:c.instructions+=1;goto B5f0361;
case 0x5f0366:goto L5f0366;
case 0x5f036a:c.instructions+=3;goto B5f036a;
case 0x5f036b:c.instructions+=2;goto B5f036b;
case 0x5f036d:c.instructions+=1;goto B5f036d;
case 0x5f0372:goto L5f0372;
case 0x5f0376:c.instructions+=4;goto B5f0376;
case 0x5f0378:c.instructions+=3;goto B5f0378;
case 0x5f0379:c.instructions+=2;goto B5f0379;
case 0x5f037b:c.instructions+=1;goto B5f037b;
case 0x5f0380:goto L5f0380;
case 0x5f0382:c.instructions+=1;goto B5f0382;
case 0x5f0387:goto L5f0387;
case 0x5f0389:c.instructions+=2;goto B5f0389;
case 0x5f038c:c.instructions+=1;goto B5f038c;
case 0x5f0394:goto L5f0394;
case 0x5f0397:c.instructions+=6;goto B5f0397;
case 0x5f039a:c.instructions+=5;goto B5f039a;
case 0x5f039d:c.instructions+=4;goto B5f039d;
case 0x5f039f:c.instructions+=3;goto B5f039f;
case 0x5f03a0:c.instructions+=2;goto B5f03a0;
case 0x5f03a2:c.instructions+=1;goto B5f03a2;
case 0x5f03a7:goto L5f03a7;
case 0x5f03ab:c.instructions+=4;goto B5f03ab;
case 0x5f03ae:c.instructions+=3;goto B5f03ae;
case 0x5f03af:c.instructions+=2;goto B5f03af;
case 0x5f03b3:c.instructions+=1;goto B5f03b3;
case 0x5f03b5:goto L5f03b5;
case 0x5f03b9:c.instructions+=1;goto B5f03b9;
case 0x5f03be:goto L5f03be;
case 0x5f03c3:c.instructions+=3;goto B5f03c3;
case 0x5f03c5:c.instructions+=2;goto B5f03c5;
case 0x5f03c7:c.instructions+=1;goto B5f03c7;
case 0x5f03cc:goto L5f03cc;
case 0x5f03d0:c.instructions+=6;goto B5f03d0;
case 0x5f03d1:c.instructions+=5;goto B5f03d1;
case 0x5f03d5:c.instructions+=4;goto B5f03d5;
case 0x5f03d8:c.instructions+=3;goto B5f03d8;
case 0x5f03d9:c.instructions+=2;goto B5f03d9;
case 0x5f03df:c.instructions+=1;goto B5f03df;
case 0x5f03e4:goto L5f03e4;
case 0x5f03e6:goto L5f03e6;
case 0x5f03eb:c.instructions+=4;goto B5f03eb;
case 0x5f03ed:c.instructions+=3;goto B5f03ed;
case 0x5f03ee:c.instructions+=2;goto B5f03ee;
case 0x5f03f0:c.instructions+=1;goto B5f03f0;
case 0x5f03f5:goto L5f03f5;
case 0x5f03f6:c.instructions+=2;goto B5f03f6;
case 0x5f03f9:c.instructions+=1;goto B5f03f9;
case 0x5f03fb:goto L5f03fb;
case 0x5f03fd:c.instructions+=4;goto B5f03fd;
case 0x5f0403:c.instructions+=3;goto B5f0403;
case 0x5f0404:c.instructions+=2;goto B5f0404;
case 0x5f0406:c.instructions+=1;goto B5f0406;
case 0x5f040b:goto L5f040b;
case 0x5f040f:c.instructions+=5;goto B5f040f;
case 0x5f0415:c.instructions+=4;goto B5f0415;
case 0x5f0417:c.instructions+=3;goto B5f0417;
case 0x5f041d:c.instructions+=2;goto B5f041d;
case 0x5f041e:c.instructions+=1;goto B5f041e;
case 0x5f0420:goto L5f0420;
case 0x5f0422:c.instructions+=1;goto B5f0422;
case 0x5f0427:goto L5f0427;
case 0x5f0428:c.instructions+=2;goto B5f0428;
case 0x5f042a:c.instructions+=1;goto B5f042a;
case 0x5f042f:goto L5f042f;
case 0x5f0433:c.instructions+=6;goto B5f0433;
case 0x5f0434:c.instructions+=5;goto B5f0434;
case 0x5f0435:c.instructions+=4;goto B5f0435;
case 0x5f0436:c.instructions+=3;goto B5f0436;
case 0x5f0437:c.instructions+=2;goto B5f0437;
case 0x5f043a:c.instructions+=1;goto B5f043a;
case 0x5f043d:goto L5f043d;
case 0x5f0442:c.instructions+=1;goto B5f0442;
case 0x5f0447:goto L5f0447;
case 0x5f0448:c.instructions+=2;goto B5f0448;
case 0x5f044a:c.instructions+=1;goto B5f044a;
case 0x5f044f:goto L5f044f;
case 0x5f0451:c.instructions+=2;goto B5f0451;
case 0x5f0457:c.instructions+=1;goto B5f0457;
case 0x5f0460:goto L5f0460;
case 0x5f0464:c.instructions+=2;goto B5f0464;
case 0x5f0465:c.instructions+=1;goto B5f0465;
case 0x5f046a:goto L5f046a;
case 0x5f046c:c.instructions+=1;goto B5f046c;
case 0x5f046e:goto L5f046e;
case 0x5f0472:c.instructions+=8;goto B5f0472;
case 0x5f0475:c.instructions+=7;goto B5f0475;
case 0x5f0478:c.instructions+=6;goto B5f0478;
case 0x5f047a:c.instructions+=5;goto B5f047a;
case 0x5f047b:c.instructions+=4;goto B5f047b;
case 0x5f047f:c.instructions+=3;goto B5f047f;
case 0x5f0480:c.instructions+=2;goto B5f0480;
case 0x5f0482:c.instructions+=1;goto B5f0482;
case 0x5f0487:goto L5f0487;
case 0x5f0488:c.instructions+=2;goto B5f0488;
case 0x5f048d:c.instructions+=1;goto B5f048d;
case 0x5f0492:goto L5f0492;
case 0x5f0498:c.instructions+=3;goto B5f0498;
case 0x5f0499:c.instructions+=2;goto B5f0499;
case 0x5f049a:c.instructions+=1;goto B5f049a;
case 0x5f049c:goto L5f049c;
case 0x5f04a2:c.instructions+=2;goto B5f04a2;
case 0x5f04a3:c.instructions+=1;goto B5f04a3;
case 0x5f04a8:goto L5f04a8;
case 0x5f04aa:c.instructions+=1;goto B5f04aa;
case 0x5f04af:goto L5f04af;
case 0x5f04b1:c.instructions+=2;goto B5f04b1;
case 0x5f04b2:c.instructions+=1;goto B5f04b2;
case 0x5f04b7:goto L5f04b7;
case 0x5f04b8:c.instructions+=2;goto B5f04b8;
case 0x5f04be:c.instructions+=1;goto B5f04be;
case 0x5f04c0:goto L5f04c0;
case 0x5f04c4:c.instructions+=6;goto B5f04c4;
case 0x5f04c5:c.instructions+=5;goto B5f04c5;
case 0x5f04c6:c.instructions+=4;goto B5f04c6;
case 0x5f04c7:c.instructions+=3;goto B5f04c7;
case 0x5f04c8:c.instructions+=2;goto B5f04c8;
case 0x5f04cb:c.instructions+=1;goto B5f04cb;
case 0x5f04d0:goto L5f04d0;
case 0x5f04d3:c.instructions+=15;goto B5f04d3;
case 0x5f04d9:c.instructions+=14;goto B5f04d9;
case 0x5f04da:c.instructions+=13;goto B5f04da;
case 0x5f04de:c.instructions+=12;goto B5f04de;
case 0x5f04df:c.instructions+=11;goto B5f04df;
case 0x5f04e0:c.instructions+=10;goto B5f04e0;
case 0x5f04e6:c.instructions+=9;goto B5f04e6;
case 0x5f04e7:c.instructions+=8;goto B5f04e7;
case 0x5f04eb:c.instructions+=7;goto B5f04eb;
case 0x5f04ec:c.instructions+=6;goto B5f04ec;
case 0x5f04f0:c.instructions+=5;goto B5f04f0;
case 0x5f04f1:c.instructions+=4;goto B5f04f1;
case 0x5f04f3:c.instructions+=3;goto B5f04f3;
case 0x5f04f5:c.instructions+=2;goto B5f04f5;
case 0x5f04f9:c.instructions+=1;goto B5f04f9;
case 0x5f04fe:goto L5f04fe;
case 0x5f0502:c.instructions+=3;goto B5f0502;
case 0x5f0503:c.instructions+=2;goto B5f0503;
case 0x5f0505:c.instructions+=1;goto B5f0505;
case 0x5f050a:goto L5f050a;
case 0x5f050c:c.instructions+=6;goto B5f050c;
case 0x5f050e:c.instructions+=5;goto B5f050e;
case 0x5f0512:c.instructions+=4;goto B5f0512;
case 0x5f0513:c.instructions+=3;goto B5f0513;
case 0x5f0515:c.instructions+=2;goto B5f0515;
case 0x5f0519:c.instructions+=1;goto B5f0519;
case 0x5f051e:goto L5f051e;
case 0x5f0522:c.instructions+=7;goto B5f0522;
case 0x5f0523:c.instructions+=6;goto B5f0523;
case 0x5f0524:c.instructions+=5;goto B5f0524;
case 0x5f0528:c.instructions+=4;goto B5f0528;
case 0x5f0529:c.instructions+=3;goto B5f0529;
case 0x5f052a:c.instructions+=2;goto B5f052a;
case 0x5f052c:c.instructions+=1;goto B5f052c;
case 0x5f0531:goto L5f0531;
case 0x5f0532:c.instructions+=2;goto B5f0532;
case 0x5f0534:c.instructions+=1;goto B5f0534;
case 0x5f0539:goto L5f0539;
case 0x5f053b:c.instructions+=1;goto B5f053b;
case 0x5f0540:goto L5f0540;
case 0x5f0542:c.instructions+=3;goto B5f0542;
case 0x5f0545:c.instructions+=2;goto B5f0545;
case 0x5f054a:c.instructions+=1;goto B5f054a;
case 0x5f0550:goto L5f0550;
case 0x5f0552:c.instructions+=5;goto B5f0552;
case 0x5f0556:c.instructions+=4;goto B5f0556;
case 0x5f0557:c.instructions+=3;goto B5f0557;
case 0x5f0559:c.instructions+=2;goto B5f0559;
case 0x5f0561:c.instructions+=1;goto B5f0561;
case 0x5f0566:goto L5f0566;
case 0x5f056a:c.instructions+=7;goto B5f056a;
case 0x5f056c:c.instructions+=6;goto B5f056c;
case 0x5f056f:c.instructions+=5;goto B5f056f;
case 0x5f0572:c.instructions+=4;goto B5f0572;
case 0x5f0574:c.instructions+=3;goto B5f0574;
case 0x5f0577:c.instructions+=2;goto B5f0577;
case 0x5f0578:c.instructions+=1;goto B5f0578;
case 0x5f057a:goto L5f057a;
case 0x5f057e:c.instructions+=1;goto B5f057e;
case 0x5f0583:goto L5f0583;
case 0x5f0585:c.instructions+=1;goto B5f0585;
case 0x5f0587:goto L5f0587;
case 0x5f0589:c.instructions+=5;goto B5f0589;
case 0x5f058d:c.instructions+=4;goto B5f058d;
case 0x5f058e:c.instructions+=3;goto B5f058e;
case 0x5f0590:c.instructions+=2;goto B5f0590;
case 0x5f0594:c.instructions+=1;goto B5f0594;
case 0x5f0599:goto L5f0599;
case 0x5f059d:c.instructions+=4;goto B5f059d;
case 0x5f05a1:c.instructions+=3;goto B5f05a1;
case 0x5f05a2:c.instructions+=2;goto B5f05a2;
case 0x5f05a5:c.instructions+=1;goto B5f05a5;
case 0x5f05a7:goto L5f05a7;
case 0x5f05ab:c.instructions+=3;goto B5f05ab;
case 0x5f05ac:c.instructions+=2;goto B5f05ac;
case 0x5f05b2:c.instructions+=1;goto B5f05b2;
case 0x5f05b7:goto L5f05b7;
case 0x5f05bb:c.instructions+=1;goto B5f05bb;
case 0x5f05c0:goto L5f05c0;
case 0x5f05c2:c.instructions+=4;goto B5f05c2;
case 0x5f05c6:c.instructions+=3;goto B5f05c6;
case 0x5f05c7:c.instructions+=2;goto B5f05c7;
case 0x5f05c9:c.instructions+=1;goto B5f05c9;
case 0x5f05ce:goto L5f05ce;
case 0x5f05d4:c.instructions+=2;goto B5f05d4;
case 0x5f05d9:c.instructions+=1;goto B5f05d9;
case 0x5f05dd:goto L5f05dd;
case 0x5f05df:goto L5f05df;
case 0x5f05e1:c.instructions+=5;goto B5f05e1;
case 0x5f05e3:c.instructions+=4;goto B5f05e3;
case 0x5f05e5:c.instructions+=3;goto B5f05e5;
case 0x5f05e8:c.instructions+=2;goto B5f05e8;
case 0x5f05e9:c.instructions+=1;goto B5f05e9;
case 0x5f05ee:goto L5f05ee;
case 0x5f05f2:c.instructions+=9;goto B5f05f2;
case 0x5f05f8:c.instructions+=8;goto B5f05f8;
case 0x5f05fe:c.instructions+=7;goto B5f05fe;
case 0x5f05ff:c.instructions+=6;goto B5f05ff;
case 0x5f0603:c.instructions+=5;goto B5f0603;
case 0x5f0605:c.instructions+=4;goto B5f0605;
case 0x5f0606:c.instructions+=3;goto B5f0606;
case 0x5f0608:c.instructions+=2;goto B5f0608;
case 0x5f060c:c.instructions+=1;goto B5f060c;
case 0x5f0611:goto L5f0611;
case 0x5f0615:c.instructions+=3;goto B5f0615;
case 0x5f0616:c.instructions+=2;goto B5f0616;
case 0x5f0618:c.instructions+=1;goto B5f0618;
case 0x5f061d:goto L5f061d;
case 0x5f061f:c.instructions+=2;goto B5f061f;
case 0x5f0623:c.instructions+=1;goto B5f0623;
case 0x5f0625:goto L5f0625;
case 0x5f0626:c.instructions+=2;goto B5f0626;
case 0x5f0628:c.instructions+=1;goto B5f0628;
case 0x5f062d:goto L5f062d;
case 0x5f0631:c.instructions+=6;goto B5f0631;
case 0x5f0632:c.instructions+=5;goto B5f0632;
case 0x5f0633:c.instructions+=4;goto B5f0633;
case 0x5f0634:c.instructions+=3;goto B5f0634;
case 0x5f0635:c.instructions+=2;goto B5f0635;
case 0x5f0638:c.instructions+=1;goto B5f0638;
case 0x5f063b:goto L5f063b;
case 0x5f063f:c.instructions+=1;goto B5f063f;
case 0x5f0641:goto L5f0641;
case 0x5f0643:goto L5f0643;
case 0x5f0647:c.instructions+=8;goto B5f0647;
case 0x5f064d:c.instructions+=7;goto B5f064d;
case 0x5f0653:c.instructions+=6;goto B5f0653;
case 0x5f0654:c.instructions+=5;goto B5f0654;
case 0x5f0658:c.instructions+=4;goto B5f0658;
case 0x5f0659:c.instructions+=3;goto B5f0659;
case 0x5f065b:c.instructions+=2;goto B5f065b;
case 0x5f0663:c.instructions+=1;goto B5f0663;
case 0x5f0668:goto L5f0668;
case 0x5f066c:c.instructions+=3;goto B5f066c;
case 0x5f066d:c.instructions+=2;goto B5f066d;
case 0x5f066f:c.instructions+=1;goto B5f066f;
case 0x5f0674:goto L5f0674;
case 0x5f0679:c.instructions+=1;goto B5f0679;
case 0x5f067b:goto L5f067b;
case 0x5f067c:c.instructions+=2;goto B5f067c;
case 0x5f0681:c.instructions+=1;goto B5f0681;
case 0x5f0686:goto L5f0686;
case 0x5f0688:c.instructions+=1;goto B5f0688;
case 0x5f068a:goto L5f068a;
case 0x5f068b:c.instructions+=3;goto B5f068b;
case 0x5f068c:c.instructions+=2;goto B5f068c;
case 0x5f068e:c.instructions+=1;goto B5f068e;
case 0x5f0693:goto L5f0693;
case 0x5f0694:c.instructions+=2;goto B5f0694;
case 0x5f069a:c.instructions+=1;goto B5f069a;
case 0x5f069c:goto L5f069c;
case 0x5f06a0:c.instructions+=6;goto B5f06a0;
case 0x5f06a1:c.instructions+=5;goto B5f06a1;
case 0x5f06a2:c.instructions+=4;goto B5f06a2;
case 0x5f06a3:c.instructions+=3;goto B5f06a3;
case 0x5f06a4:c.instructions+=2;goto B5f06a4;
case 0x5f06a7:c.instructions+=1;goto B5f06a7;
case 0x5f06b0:goto L5f06b0;
case 0x5f06b6:c.instructions+=5;goto B5f06b6;
case 0x5f06b7:c.instructions+=4;goto B5f06b7;
case 0x5f06b9:c.instructions+=3;goto B5f06b9;
case 0x5f06bc:c.instructions+=2;goto B5f06bc;
case 0x5f06be:c.instructions+=1;goto B5f06be;
case 0x5f06c0:goto L5f06c0;
case 0x5f06c4:c.instructions+=1;goto B5f06c4;
case 0x5f06c9:goto L5f06c9;
case 0x5f06cd:c.instructions+=4;goto B5f06cd;
case 0x5f06cf:c.instructions+=3;goto B5f06cf;
case 0x5f06d0:c.instructions+=2;goto B5f06d0;
case 0x5f06d4:c.instructions+=1;goto B5f06d4;
case 0x5f06d9:goto L5f06d9;
case 0x5f06df:c.instructions+=8;goto B5f06df;
case 0x5f06e5:c.instructions+=7;goto B5f06e5;
case 0x5f06eb:c.instructions+=6;goto B5f06eb;
case 0x5f06ec:c.instructions+=5;goto B5f06ec;
case 0x5f06f2:c.instructions+=4;goto B5f06f2;
case 0x5f06f6:c.instructions+=3;goto B5f06f6;
case 0x5f06fa:c.instructions+=2;goto B5f06fa;
case 0x5f06fb:c.instructions+=1;goto B5f06fb;
case 0x5f0700:goto L5f0700;
case 0x5f0701:c.instructions+=2;goto B5f0701;
case 0x5f0705:c.instructions+=1;goto B5f0705;
case 0x5f070a:goto L5f070a;
case 0x5f070f:goto L5f070f;
case 0x5f0711:c.instructions+=1;goto B5f0711;
case 0x5f0713:goto L5f0713;
case 0x5f0717:c.instructions+=2;goto B5f0717;
case 0x5f0718:c.instructions+=1;goto B5f0718;
case 0x5f071d:goto L5f071d;
case 0x5f0720:goto L5f0720;
case 0x5f0721:c.instructions+=2;goto B5f0721;
case 0x5f0727:c.instructions+=1;goto B5f0727;
case 0x5f0730:goto L5f0730;
case 0x5f0731:c.instructions+=5;goto B5f0731;
case 0x5f0735:c.instructions+=4;goto B5f0735;
case 0x5f0737:c.instructions+=3;goto B5f0737;
case 0x5f0738:c.instructions+=2;goto B5f0738;
case 0x5f073b:c.instructions+=1;goto B5f073b;
case 0x5f0740:goto L5f0740;
case 0x5f0742:goto L5f0742;
case 0x5f0744:c.instructions+=5;goto B5f0744;
case 0x5f0745:c.instructions+=4;goto B5f0745;
case 0x5f074b:c.instructions+=3;goto B5f074b;
case 0x5f0751:c.instructions+=2;goto B5f0751;
case 0x5f0752:c.instructions+=1;goto B5f0752;
case 0x5f0760:goto L5f0760;
case 0x5f0763:c.instructions+=9;goto B5f0763;
case 0x5f0764:c.instructions+=8;goto B5f0764;
case 0x5f0765:c.instructions+=7;goto B5f0765;
case 0x5f0768:c.instructions+=6;goto B5f0768;
case 0x5f0769:c.instructions+=5;goto B5f0769;
case 0x5f076a:c.instructions+=4;goto B5f076a;
case 0x5f076e:c.instructions+=3;goto B5f076e;
case 0x5f0770:c.instructions+=2;goto B5f0770;
case 0x5f0774:c.instructions+=1;goto B5f0774;
case 0x5f0778:goto L5f0778;
case 0x5f077b:c.instructions+=1;goto B5f077b;
case 0x5f077d:goto L5f077d;
case 0x5f0780:c.instructions+=1;goto B5f0780;
case 0x5f0785:goto L5f0785;
case 0x5f0788:c.instructions+=2;goto B5f0788;
case 0x5f078a:c.instructions+=1;goto B5f078a;
case 0x5f078c:goto L5f078c;
case 0x5f0790:c.instructions+=4;goto B5f0790;
case 0x5f0793:c.instructions+=3;goto B5f0793;
case 0x5f0794:c.instructions+=2;goto B5f0794;
case 0x5f0795:c.instructions+=1;goto B5f0795;
case 0x5f079a:goto L5f079a;
case 0x5f079d:c.instructions+=2;goto B5f079d;
case 0x5f079f:c.instructions+=1;goto B5f079f;
case 0x5f07a1:goto L5f07a1;
case 0x5f07a4:goto L5f07a4;
case 0x5f07a7:c.instructions+=2;goto B5f07a7;
case 0x5f07a8:c.instructions+=1;goto B5f07a8;
case 0x5f07aa:goto L5f07aa;
case 0x5f07ae:goto L5f07ae;
case 0x5f07b2:c.instructions+=5;goto B5f07b2;
case 0x5f07b3:c.instructions+=4;goto B5f07b3;
case 0x5f07b6:c.instructions+=3;goto B5f07b6;
case 0x5f07b9:c.instructions+=2;goto B5f07b9;
case 0x5f07bd:c.instructions+=1;goto B5f07bd;
case 0x5f07bf:goto L5f07bf;
case 0x5f07c3:c.instructions+=2;goto B5f07c3;
case 0x5f07c8:c.instructions+=1;goto B5f07c8;
case 0x5f07ca:goto L5f07ca;
case 0x5f07cc:goto L5f07cc;
case 0x5f07cd:c.instructions+=5;goto B5f07cd;
case 0x5f07ce:c.instructions+=4;goto B5f07ce;
case 0x5f07cf:c.instructions+=3;goto B5f07cf;
case 0x5f07d0:c.instructions+=2;goto B5f07d0;
case 0x5f07d3:c.instructions+=1;goto B5f07d3;
case 0x5f07e0:goto L5f07e0;
case 0x5f07e4:c.instructions+=3;goto B5f07e4;
case 0x5f07e8:c.instructions+=2;goto B5f07e8;
case 0x5f07ea:c.instructions+=1;goto B5f07ea;
case 0x5f07ec:goto L5f07ec;
case 0x5f07ef:c.instructions+=1;goto B5f07ef;
case 0x5f07f1:goto L5f07f1;
case 0x5f07f7:goto L5f07f7;
case 0x5f0800:goto L5f0800;
case 0x5f0801:c.instructions+=10;goto B5f0801;
case 0x5f0802:c.instructions+=9;goto B5f0802;
case 0x5f0803:c.instructions+=8;goto B5f0803;
case 0x5f0807:c.instructions+=7;goto B5f0807;
case 0x5f0809:c.instructions+=6;goto B5f0809;
case 0x5f080d:c.instructions+=5;goto B5f080d;
case 0x5f080f:c.instructions+=4;goto B5f080f;
case 0x5f0810:c.instructions+=3;goto B5f0810;
case 0x5f0812:c.instructions+=2;goto B5f0812;
case 0x5f081a:c.instructions+=1;goto B5f081a;
case 0x5f081f:goto L5f081f;
case 0x5f0821:c.instructions+=5;goto B5f0821;
case 0x5f0825:c.instructions+=4;goto B5f0825;
case 0x5f0826:c.instructions+=3;goto B5f0826;
case 0x5f0828:c.instructions+=2;goto B5f0828;
case 0x5f0830:c.instructions+=1;goto B5f0830;
case 0x5f0835:goto L5f0835;
case 0x5f0839:c.instructions+=4;goto B5f0839;
case 0x5f083c:c.instructions+=3;goto B5f083c;
case 0x5f0840:c.instructions+=2;goto B5f0840;
case 0x5f0842:c.instructions+=1;goto B5f0842;
case 0x5f0844:goto L5f0844;
case 0x5f084b:c.instructions+=10;goto B5f084b;
case 0x5f0852:c.instructions+=9;goto B5f0852;
case 0x5f0856:c.instructions+=8;goto B5f0856;
case 0x5f0857:c.instructions+=7;goto B5f0857;
case 0x5f085d:c.instructions+=6;goto B5f085d;
case 0x5f085f:c.instructions+=5;goto B5f085f;
case 0x5f0861:c.instructions+=4;goto B5f0861;
case 0x5f0863:c.instructions+=3;goto B5f0863;
case 0x5f0869:c.instructions+=2;goto B5f0869;
case 0x5f086f:c.instructions+=1;goto B5f086f;
case 0x5f0870:goto L5f0870;
case 0x5f0871:c.instructions+=3;goto B5f0871;
case 0x5f0872:c.instructions+=2;goto B5f0872;
case 0x5f0873:c.instructions+=1;goto B5f0873;
case 0x5f0880:goto L5f0880;
case 0x5f0881:c.instructions+=3;goto B5f0881;
case 0x5f0883:c.instructions+=2;goto B5f0883;
case 0x5f0886:c.instructions+=1;goto B5f0886;
case 0x5f0888:goto L5f0888;
case 0x5f088b:c.instructions+=3;goto B5f088b;
case 0x5f088d:c.instructions+=2;goto B5f088d;
case 0x5f0890:c.instructions+=1;goto B5f0890;
case 0x5f0892:goto L5f0892;
case 0x5f0895:c.instructions+=1;goto B5f0895;
case 0x5f0897:goto L5f0897;
case 0x5f0899:c.instructions+=1;goto B5f0899;
case 0x5f089b:goto L5f089b;
case 0x5f089e:c.instructions+=1;goto B5f089e;
case 0x5f08a0:goto L5f08a0;
case 0x5f08a3:c.instructions+=1;goto B5f08a3;
case 0x5f08a5:goto L5f08a5;
case 0x5f08a8:c.instructions+=2;goto B5f08a8;
case 0x5f08aa:c.instructions+=1;goto B5f08aa;
case 0x5f08ac:goto L5f08ac;
case 0x5f08b1:c.instructions+=1;goto B5f08b1;
case 0x5f08b3:goto L5f08b3;
case 0x5f08b8:c.instructions+=8;goto B5f08b8;
case 0x5f08bb:c.instructions+=7;goto B5f08bb;
case 0x5f08bf:c.instructions+=6;goto B5f08bf;
case 0x5f08c3:c.instructions+=5;goto B5f08c3;
case 0x5f08c9:c.instructions+=4;goto B5f08c9;
case 0x5f08cf:c.instructions+=3;goto B5f08cf;
case 0x5f08d1:c.instructions+=2;goto B5f08d1;
case 0x5f08d4:c.instructions+=1;goto B5f08d4;
case 0x5f08d6:goto L5f08d6;
case 0x5f08db:c.instructions+=2;goto B5f08db;
case 0x5f08dc:c.instructions+=1;goto B5f08dc;
case 0x5f08dd:goto L5f08dd;
case 0x5f08df:c.instructions+=2;goto B5f08df;
case 0x5f08e0:c.instructions+=1;goto B5f08e0;
case 0x5f08e1:goto L5f08e1;
case 0x5f08e3:c.instructions+=5;goto B5f08e3;
case 0x5f08e5:c.instructions+=4;goto B5f08e5;
case 0x5f08e8:c.instructions+=3;goto B5f08e8;
case 0x5f08ea:c.instructions+=2;goto B5f08ea;
case 0x5f08eb:c.instructions+=1;goto B5f08eb;
case 0x5f08f0:goto L5f08f0;
case 0x5f08f5:c.instructions+=4;goto B5f08f5;
case 0x5f08f6:c.instructions+=3;goto B5f08f6;
case 0x5f08f8:c.instructions+=2;goto B5f08f8;
case 0x5f08fa:c.instructions+=1;goto B5f08fa;
case 0x5f08fc:goto L5f08fc;
case 0x5f0901:c.instructions+=2;goto B5f0901;
case 0x5f0903:c.instructions+=1;goto B5f0903;
case 0x5f0905:goto L5f0905;
case 0x5f0907:goto L5f0907;
case 0x5f090c:c.instructions+=2;goto B5f090c;
case 0x5f090d:c.instructions+=1;goto B5f090d;
case 0x5f0913:goto L5f0913;
case 0x5f0919:c.instructions+=3;goto B5f0919;
case 0x5f091f:c.instructions+=2;goto B5f091f;
case 0x5f0925:c.instructions+=1;goto B5f0925;
case 0x5f092b:goto L5f092b;
case 0x5f092c:c.instructions+=1;goto B5f092c;
case 0x5f0930:goto L5f0930;
case 0x5f0933:c.instructions+=15;goto B5f0933;
case 0x5f0936:c.instructions+=14;goto B5f0936;
case 0x5f093a:c.instructions+=13;goto B5f093a;
case 0x5f093d:c.instructions+=12;goto B5f093d;
case 0x5f0941:c.instructions+=11;goto B5f0941;
case 0x5f0944:c.instructions+=10;goto B5f0944;
case 0x5f0948:c.instructions+=9;goto B5f0948;
case 0x5f094c:c.instructions+=8;goto B5f094c;
case 0x5f094f:c.instructions+=7;goto B5f094f;
case 0x5f0952:c.instructions+=6;goto B5f0952;
case 0x5f0956:c.instructions+=5;goto B5f0956;
case 0x5f0958:c.instructions+=4;goto B5f0958;
case 0x5f095c:c.instructions+=3;goto B5f095c;
case 0x5f095e:c.instructions+=2;goto B5f095e;
case 0x5f0961:c.instructions+=1;goto B5f0961;
case 0x5f0963:goto L5f0963;
case 0x5f0967:c.instructions+=4;goto B5f0967;
case 0x5f096b:c.instructions+=3;goto B5f096b;
case 0x5f096d:c.instructions+=2;goto B5f096d;
case 0x5f0970:c.instructions+=1;goto B5f0970;
case 0x5f0972:goto L5f0972;
case 0x5f0976:c.instructions+=4;goto B5f0976;
case 0x5f097a:c.instructions+=3;goto B5f097a;
case 0x5f097c:c.instructions+=2;goto B5f097c;
case 0x5f097f:c.instructions+=1;goto B5f097f;
case 0x5f0981:goto L5f0981;
case 0x5f0985:c.instructions+=4;goto B5f0985;
case 0x5f0989:c.instructions+=3;goto B5f0989;
case 0x5f098b:c.instructions+=2;goto B5f098b;
case 0x5f098e:c.instructions+=1;goto B5f098e;
case 0x5f0990:goto L5f0990;
case 0x5f0992:c.instructions+=2;goto B5f0992;
case 0x5f0995:c.instructions+=1;goto B5f0995;
case 0x5f0998:goto L5f0998;
case 0x5f099b:c.instructions+=2;goto B5f099b;
case 0x5f099e:c.instructions+=1;goto B5f099e;
case 0x5f09a0:goto L5f09a0;
case 0x5f09a4:c.instructions+=14;goto B5f09a4;
case 0x5f09a8:c.instructions+=13;goto B5f09a8;
case 0x5f09ae:c.instructions+=12;goto B5f09ae;
case 0x5f09b2:c.instructions+=11;goto B5f09b2;
case 0x5f09b6:c.instructions+=10;goto B5f09b6;
case 0x5f09bc:c.instructions+=9;goto B5f09bc;
case 0x5f09c0:c.instructions+=8;goto B5f09c0;
case 0x5f09c4:c.instructions+=7;goto B5f09c4;
case 0x5f09c6:c.instructions+=6;goto B5f09c6;
case 0x5f09ca:c.instructions+=5;goto B5f09ca;
case 0x5f09cc:c.instructions+=4;goto B5f09cc;
case 0x5f09d0:c.instructions+=3;goto B5f09d0;
case 0x5f09d3:c.instructions+=2;goto B5f09d3;
case 0x5f09d5:c.instructions+=1;goto B5f09d5;
case 0x5f09d7:goto L5f09d7;
case 0x5f09da:c.instructions+=3;goto B5f09da;
case 0x5f09de:c.instructions+=2;goto B5f09de;
case 0x5f09e2:c.instructions+=1;goto B5f09e2;
case 0x5f09e4:goto L5f09e4;
case 0x5f09e8:c.instructions+=2;goto B5f09e8;
case 0x5f09ec:c.instructions+=1;goto B5f09ec;
case 0x5f09ee:goto L5f09ee;
case 0x5f09f3:c.instructions+=1;goto B5f09f3;
case 0x5f09f5:goto L5f09f5;
case 0x5f09f8:c.instructions+=3;goto B5f09f8;
case 0x5f09fc:c.instructions+=2;goto B5f09fc;
case 0x5f0a00:c.instructions+=1;goto B5f0a00;
case 0x5f0a02:goto L5f0a02;
case 0x5f0a07:c.instructions+=2;goto B5f0a07;
case 0x5f0a0b:c.instructions+=1;goto B5f0a0b;
case 0x5f0a0d:goto L5f0a0d;
case 0x5f0a12:goto L5f0a12;
case 0x5f0a16:goto L5f0a16;
case 0x5f0a1a:c.instructions+=1;goto B5f0a1a;
case 0x5f0a1c:goto L5f0a1c;
case 0x5f0a21:c.instructions+=2;goto B5f0a21;
case 0x5f0a24:c.instructions+=1;goto B5f0a24;
case 0x5f0a30:goto L5f0a30;
case 0x5f0a33:c.instructions+=15;goto B5f0a33;
case 0x5f0a36:c.instructions+=14;goto B5f0a36;
case 0x5f0a3a:c.instructions+=13;goto B5f0a3a;
case 0x5f0a3d:c.instructions+=12;goto B5f0a3d;
case 0x5f0a41:c.instructions+=11;goto B5f0a41;
case 0x5f0a44:c.instructions+=10;goto B5f0a44;
case 0x5f0a48:c.instructions+=9;goto B5f0a48;
case 0x5f0a4c:c.instructions+=8;goto B5f0a4c;
case 0x5f0a4f:c.instructions+=7;goto B5f0a4f;
case 0x5f0a52:c.instructions+=6;goto B5f0a52;
case 0x5f0a56:c.instructions+=5;goto B5f0a56;
case 0x5f0a58:c.instructions+=4;goto B5f0a58;
case 0x5f0a5c:c.instructions+=3;goto B5f0a5c;
case 0x5f0a5e:c.instructions+=2;goto B5f0a5e;
case 0x5f0a61:c.instructions+=1;goto B5f0a61;
case 0x5f0a63:goto L5f0a63;
case 0x5f0a67:c.instructions+=4;goto B5f0a67;
case 0x5f0a6b:c.instructions+=3;goto B5f0a6b;
case 0x5f0a6d:c.instructions+=2;goto B5f0a6d;
case 0x5f0a70:c.instructions+=1;goto B5f0a70;
case 0x5f0a72:goto L5f0a72;
case 0x5f0a76:c.instructions+=4;goto B5f0a76;
case 0x5f0a7a:c.instructions+=3;goto B5f0a7a;
case 0x5f0a7c:c.instructions+=2;goto B5f0a7c;
case 0x5f0a7f:c.instructions+=1;goto B5f0a7f;
case 0x5f0a81:goto L5f0a81;
case 0x5f0a85:c.instructions+=4;goto B5f0a85;
case 0x5f0a89:c.instructions+=3;goto B5f0a89;
case 0x5f0a8b:c.instructions+=2;goto B5f0a8b;
case 0x5f0a8e:c.instructions+=1;goto B5f0a8e;
case 0x5f0a90:goto L5f0a90;
case 0x5f0a92:c.instructions+=2;goto B5f0a92;
case 0x5f0a95:c.instructions+=1;goto B5f0a95;
case 0x5f0a98:goto L5f0a98;
case 0x5f0a9b:c.instructions+=2;goto B5f0a9b;
case 0x5f0a9f:c.instructions+=1;goto B5f0a9f;
case 0x5f0aa1:goto L5f0aa1;
case 0x5f0aa5:c.instructions+=14;goto B5f0aa5;
case 0x5f0aa9:c.instructions+=13;goto B5f0aa9;
case 0x5f0aaf:c.instructions+=12;goto B5f0aaf;
case 0x5f0ab3:c.instructions+=11;goto B5f0ab3;
case 0x5f0ab7:c.instructions+=10;goto B5f0ab7;
case 0x5f0abd:c.instructions+=9;goto B5f0abd;
case 0x5f0ac1:c.instructions+=8;goto B5f0ac1;
case 0x5f0ac5:c.instructions+=7;goto B5f0ac5;
case 0x5f0ac7:c.instructions+=6;goto B5f0ac7;
case 0x5f0acb:c.instructions+=5;goto B5f0acb;
case 0x5f0acd:c.instructions+=4;goto B5f0acd;
case 0x5f0ad1:c.instructions+=3;goto B5f0ad1;
case 0x5f0ad4:c.instructions+=2;goto B5f0ad4;
case 0x5f0ad6:c.instructions+=1;goto B5f0ad6;
case 0x5f0ad8:goto L5f0ad8;
case 0x5f0adb:c.instructions+=3;goto B5f0adb;
case 0x5f0adf:c.instructions+=2;goto B5f0adf;
case 0x5f0ae3:c.instructions+=1;goto B5f0ae3;
case 0x5f0ae5:goto L5f0ae5;
case 0x5f0ae9:c.instructions+=2;goto B5f0ae9;
case 0x5f0aed:c.instructions+=1;goto B5f0aed;
case 0x5f0aef:goto L5f0aef;
case 0x5f0af4:c.instructions+=1;goto B5f0af4;
case 0x5f0af6:goto L5f0af6;
case 0x5f0af9:c.instructions+=3;goto B5f0af9;
case 0x5f0afd:c.instructions+=2;goto B5f0afd;
case 0x5f0b01:c.instructions+=1;goto B5f0b01;
case 0x5f0b03:goto L5f0b03;
case 0x5f0b08:c.instructions+=2;goto B5f0b08;
case 0x5f0b0c:c.instructions+=1;goto B5f0b0c;
case 0x5f0b0e:goto L5f0b0e;
case 0x5f0b13:goto L5f0b13;
case 0x5f0b17:goto L5f0b17;
case 0x5f0b1c:c.instructions+=1;goto B5f0b1c;
case 0x5f0b1e:goto L5f0b1e;
case 0x5f0b23:c.instructions+=2;goto B5f0b23;
case 0x5f0b26:c.instructions+=1;goto B5f0b26;
case 0x5f0b30:goto L5f0b30;
case 0x5f0b37:c.instructions+=1;goto B5f0b37;
case 0x5f0b40:goto L5f0b40;
case 0x5f0b43:c.instructions+=2;goto B5f0b43;
case 0x5f0b45:c.instructions+=1;goto B5f0b45;
case 0x5f0b47:goto L5f0b47;
case 0x5f0b4a:c.instructions+=2;goto B5f0b4a;
case 0x5f0b4c:c.instructions+=1;goto B5f0b4c;
case 0x5f0b4e:goto L5f0b4e;
case 0x5f0b51:c.instructions+=4;goto B5f0b51;
case 0x5f0b55:c.instructions+=3;goto B5f0b55;
case 0x5f0b58:c.instructions+=2;goto B5f0b58;
case 0x5f0b5a:c.instructions+=1;goto B5f0b5a;
case 0x5f0b5c:goto L5f0b5c;
case 0x5f0b62:c.instructions+=1;goto B5f0b62;
case 0x5f0b65:goto L5f0b65;
case 0x5f0b67:c.instructions+=1;goto B5f0b67;
case 0x5f0b6a:goto L5f0b6a;
case 0x5f0b70:c.instructions+=1;goto B5f0b70;
case 0x5f0b80:goto L5f0b80;
case 0x5f0b83:c.instructions+=2;goto B5f0b83;
case 0x5f0b85:c.instructions+=1;goto B5f0b85;
case 0x5f0b87:goto L5f0b87;
case 0x5f0b8a:c.instructions+=2;goto B5f0b8a;
case 0x5f0b8c:c.instructions+=1;goto B5f0b8c;
case 0x5f0b8e:goto L5f0b8e;
case 0x5f0b91:c.instructions+=4;goto B5f0b91;
case 0x5f0b95:c.instructions+=3;goto B5f0b95;
case 0x5f0b98:c.instructions+=2;goto B5f0b98;
case 0x5f0b9a:c.instructions+=1;goto B5f0b9a;
case 0x5f0b9c:goto L5f0b9c;
case 0x5f0b9e:c.instructions+=1;goto B5f0b9e;
case 0x5f0ba1:goto L5f0ba1;
case 0x5f0ba3:c.instructions+=1;goto B5f0ba3;
case 0x5f0bb0:goto L5f0bb0;
case 0x5f0bb1:c.instructions+=6;goto B5f0bb1;
case 0x5f0bb3:c.instructions+=5;goto B5f0bb3;
case 0x5f0bb6:c.instructions+=4;goto B5f0bb6;
case 0x5f0bb7:c.instructions+=3;goto B5f0bb7;
case 0x5f0bb9:c.instructions+=2;goto B5f0bb9;
case 0x5f0bbb:c.instructions+=1;goto B5f0bbb;
case 0x5f0bbd:goto L5f0bbd;
case 0x5f0bbe:c.instructions+=1;goto B5f0bbe;
case 0x5f0bc3:goto L5f0bc3;
case 0x5f0bc6:c.instructions+=1;goto B5f0bc6;
case 0x5f0bc9:goto L5f0bc9;
case 0x5f0bcc:c.instructions+=4;goto B5f0bcc;
case 0x5f0bcf:c.instructions+=3;goto B5f0bcf;
case 0x5f0bd0:c.instructions+=2;goto B5f0bd0;
case 0x5f0bd1:c.instructions+=1;goto B5f0bd1;
case 0x5f0be0:goto L5f0be0;
case 0x5f0be1:c.instructions+=4;goto B5f0be1;
case 0x5f0be3:c.instructions+=3;goto B5f0be3;
case 0x5f0be6:c.instructions+=2;goto B5f0be6;
case 0x5f0be8:c.instructions+=1;goto B5f0be8;
case 0x5f0bea:goto L5f0bea;
case 0x5f0bed:c.instructions+=2;goto B5f0bed;
case 0x5f0bef:c.instructions+=1;goto B5f0bef;
case 0x5f0bf1:goto L5f0bf1;
case 0x5f0bf4:c.instructions+=2;goto B5f0bf4;
case 0x5f0bf6:c.instructions+=1;goto B5f0bf6;
case 0x5f0bf8:goto L5f0bf8;
case 0x5f0bf9:c.instructions+=1;goto B5f0bf9;
case 0x5f0bfe:goto L5f0bfe;
case 0x5f0c01:c.instructions+=1;goto B5f0c01;
case 0x5f0c04:goto L5f0c04;
case 0x5f0c05:c.instructions+=1;goto B5f0c05;
case 0x5f0c10:goto L5f0c10;
case 0x5f0c11:c.instructions+=8;goto B5f0c11;
case 0x5f0c13:c.instructions+=7;goto B5f0c13;
case 0x5f0c16:c.instructions+=6;goto B5f0c16;
case 0x5f0c18:c.instructions+=5;goto B5f0c18;
case 0x5f0c1a:c.instructions+=4;goto B5f0c1a;
case 0x5f0c1d:c.instructions+=3;goto B5f0c1d;
case 0x5f0c20:c.instructions+=2;goto B5f0c20;
case 0x5f0c23:c.instructions+=1;goto B5f0c23;
case 0x5f0c25:goto L5f0c25;
case 0x5f0c28:c.instructions+=2;goto B5f0c28;
case 0x5f0c2a:c.instructions+=1;goto B5f0c2a;
case 0x5f0c2c:goto L5f0c2c;
case 0x5f0c2f:c.instructions+=2;goto B5f0c2f;
case 0x5f0c31:c.instructions+=1;goto B5f0c31;
case 0x5f0c33:goto L5f0c33;
case 0x5f0c34:c.instructions+=1;goto B5f0c34;
case 0x5f0c39:goto L5f0c39;
case 0x5f0c3c:c.instructions+=1;goto B5f0c3c;
case 0x5f0c3f:goto L5f0c3f;
case 0x5f0c40:c.instructions+=1;goto B5f0c40;
case 0x5f0c50:goto L5f0c50;
case 0x5f0c54:c.instructions+=10;goto B5f0c54;
case 0x5f0c57:c.instructions+=9;goto B5f0c57;
case 0x5f0c5a:c.instructions+=8;goto B5f0c5a;
case 0x5f0c5e:c.instructions+=7;goto B5f0c5e;
case 0x5f0c60:c.instructions+=6;goto B5f0c60;
case 0x5f0c63:c.instructions+=5;goto B5f0c63;
case 0x5f0c66:c.instructions+=4;goto B5f0c66;
case 0x5f0c6a:c.instructions+=3;goto B5f0c6a;
case 0x5f0c6c:c.instructions+=2;goto B5f0c6c;
case 0x5f0c71:c.instructions+=1;goto B5f0c71;
case 0x5f0c80:goto L5f0c80;
case 0x5f0c8a:c.instructions+=1;goto B5f0c8a;
case 0x5f0c90:goto L5f0c90;
case 0x5f0c94:c.instructions+=19;goto B5f0c94;
case 0x5f0c98:c.instructions+=18;goto B5f0c98;
case 0x5f0c9b:c.instructions+=17;goto B5f0c9b;
case 0x5f0c9d:c.instructions+=16;goto B5f0c9d;
case 0x5f0ca0:c.instructions+=15;goto B5f0ca0;
case 0x5f0ca3:c.instructions+=14;goto B5f0ca3;
case 0x5f0ca5:c.instructions+=13;goto B5f0ca5;
case 0x5f0ca7:c.instructions+=12;goto B5f0ca7;
case 0x5f0ca9:c.instructions+=11;goto B5f0ca9;
case 0x5f0cab:c.instructions+=10;goto B5f0cab;
case 0x5f0cad:c.instructions+=9;goto B5f0cad;
case 0x5f0caf:c.instructions+=8;goto B5f0caf;
case 0x5f0cb1:c.instructions+=7;goto B5f0cb1;
case 0x5f0cb7:c.instructions+=6;goto B5f0cb7;
case 0x5f0cbd:c.instructions+=5;goto B5f0cbd;
case 0x5f0cbf:c.instructions+=4;goto B5f0cbf;
case 0x5f0cc1:c.instructions+=3;goto B5f0cc1;
case 0x5f0cc3:c.instructions+=2;goto B5f0cc3;
case 0x5f0cc6:c.instructions+=1;goto B5f0cc6;
case 0x5f0cc8:goto L5f0cc8;
case 0x5f0ccc:c.instructions+=3;goto B5f0ccc;
case 0x5f0cd3:c.instructions+=2;goto B5f0cd3;
case 0x5f0cd5:c.instructions+=1;goto B5f0cd5;
case 0x5f0cd7:goto L5f0cd7;
case 0x5f0cde:c.instructions+=3;goto B5f0cde;
case 0x5f0ce0:c.instructions+=2;goto B5f0ce0;
case 0x5f0ce3:c.instructions+=1;goto B5f0ce3;
case 0x5f0ce5:goto L5f0ce5;
case 0x5f0cec:c.instructions+=2;goto B5f0cec;
case 0x5f0cf3:c.instructions+=1;goto B5f0cf3;
case 0x5f0cf4:goto L5f0cf4;
case 0x5f0cf6:c.instructions+=1;goto B5f0cf6;
case 0x5f0d00:goto L5f0d00;
case 0x5f0d01:c.instructions+=4;goto B5f0d01;
case 0x5f0d03:c.instructions+=3;goto B5f0d03;
case 0x5f0d06:c.instructions+=2;goto B5f0d06;
case 0x5f0d09:c.instructions+=1;goto B5f0d09;
case 0x5f0d0e:goto L5f0d0e;
case 0x5f0d15:c.instructions+=3;goto B5f0d15;
case 0x5f0d17:c.instructions+=2;goto B5f0d17;
case 0x5f0d18:c.instructions+=1;goto B5f0d18;
case 0x5f0d20:goto L5f0d20;
case 0x5f0d21:c.instructions+=9;goto B5f0d21;
case 0x5f0d22:c.instructions+=8;goto B5f0d22;
case 0x5f0d24:c.instructions+=7;goto B5f0d24;
case 0x5f0d26:c.instructions+=6;goto B5f0d26;
case 0x5f0d27:c.instructions+=5;goto B5f0d27;
case 0x5f0d29:c.instructions+=4;goto B5f0d29;
case 0x5f0d2c:c.instructions+=3;goto B5f0d2c;
case 0x5f0d2f:c.instructions+=2;goto B5f0d2f;
case 0x5f0d32:c.instructions+=1;goto B5f0d32;
case 0x5f0d37:goto L5f0d37;
case 0x5f0d39:c.instructions+=1;goto B5f0d39;
case 0x5f0d3b:goto L5f0d3b;
case 0x5f0d40:goto L5f0d40;
case 0x5f0d43:c.instructions+=2;goto B5f0d43;
case 0x5f0d46:c.instructions+=1;goto B5f0d46;
case 0x5f0d48:goto L5f0d48;
case 0x5f0d4b:c.instructions+=2;goto B5f0d4b;
case 0x5f0d4f:c.instructions+=1;goto B5f0d4f;
case 0x5f0d52:goto L5f0d52;
case 0x5f0d54:c.instructions+=2;goto B5f0d54;
case 0x5f0d56:c.instructions+=1;goto B5f0d56;
case 0x5f0d58:goto L5f0d58;
case 0x5f0d5b:c.instructions+=4;goto B5f0d5b;
case 0x5f0d5e:c.instructions+=3;goto B5f0d5e;
case 0x5f0d60:c.instructions+=2;goto B5f0d60;
case 0x5f0d62:c.instructions+=1;goto B5f0d62;
case 0x5f0d64:goto L5f0d64;
case 0x5f0d69:c.instructions+=1;goto B5f0d69;
case 0x5f0d70:goto L5f0d70;
case 0x5f0d73:c.instructions+=2;goto B5f0d73;
case 0x5f0d76:c.instructions+=1;goto B5f0d76;
case 0x5f0d78:goto L5f0d78;
case 0x5f0d7b:c.instructions+=2;goto B5f0d7b;
case 0x5f0d7f:c.instructions+=1;goto B5f0d7f;
case 0x5f0d82:goto L5f0d82;
case 0x5f0d84:c.instructions+=2;goto B5f0d84;
case 0x5f0d86:c.instructions+=1;goto B5f0d86;
case 0x5f0d88:goto L5f0d88;
case 0x5f0d8a:c.instructions+=4;goto B5f0d8a;
case 0x5f0d8c:c.instructions+=3;goto B5f0d8c;
case 0x5f0d8f:c.instructions+=2;goto B5f0d8f;
case 0x5f0d92:c.instructions+=1;goto B5f0d92;
case 0x5f0d94:goto L5f0d94;
case 0x5f0d99:c.instructions+=1;goto B5f0d99;
case 0x5f0da0:goto L5f0da0;
case 0x5f0da3:c.instructions+=2;goto B5f0da3;
case 0x5f0da6:c.instructions+=1;goto B5f0da6;
case 0x5f0da8:goto L5f0da8;
case 0x5f0dab:c.instructions+=2;goto B5f0dab;
case 0x5f0daf:c.instructions+=1;goto B5f0daf;
case 0x5f0db2:goto L5f0db2;
case 0x5f0db4:c.instructions+=2;goto B5f0db4;
case 0x5f0db6:c.instructions+=1;goto B5f0db6;
case 0x5f0db8:goto L5f0db8;
case 0x5f0dbb:c.instructions+=3;goto B5f0dbb;
case 0x5f0dbd:c.instructions+=2;goto B5f0dbd;
case 0x5f0dbf:c.instructions+=1;goto B5f0dbf;
case 0x5f0dc1:goto L5f0dc1;
case 0x5f0dc4:goto L5f0dc4;
case 0x5f0dc6:c.instructions+=23;goto B5f0dc6;
case 0x5f0dca:c.instructions+=22;goto B5f0dca;
case 0x5f0dcd:c.instructions+=21;goto B5f0dcd;
case 0x5f0dd4:c.instructions+=20;goto B5f0dd4;
case 0x5f0dd8:c.instructions+=19;goto B5f0dd8;
case 0x5f0ddb:c.instructions+=18;goto B5f0ddb;
case 0x5f0de2:c.instructions+=17;goto B5f0de2;
case 0x5f0de6:c.instructions+=16;goto B5f0de6;
case 0x5f0de9:c.instructions+=15;goto B5f0de9;
case 0x5f0df0:c.instructions+=14;goto B5f0df0;
case 0x5f0df4:c.instructions+=13;goto B5f0df4;
case 0x5f0df7:c.instructions+=12;goto B5f0df7;
case 0x5f0dfe:c.instructions+=11;goto B5f0dfe;
case 0x5f0e02:c.instructions+=10;goto B5f0e02;
case 0x5f0e05:c.instructions+=9;goto B5f0e05;
case 0x5f0e0c:c.instructions+=8;goto B5f0e0c;
case 0x5f0e10:c.instructions+=7;goto B5f0e10;
case 0x5f0e13:c.instructions+=6;goto B5f0e13;
case 0x5f0e1a:c.instructions+=5;goto B5f0e1a;
case 0x5f0e1d:c.instructions+=4;goto B5f0e1d;
case 0x5f0e1e:c.instructions+=3;goto B5f0e1e;
case 0x5f0e21:c.instructions+=2;goto B5f0e21;
case 0x5f0e23:c.instructions+=1;goto B5f0e23;
case 0x5f0e25:goto L5f0e25;
case 0x5f0e26:c.instructions+=3;goto B5f0e26;
case 0x5f0e27:c.instructions+=2;goto B5f0e27;
case 0x5f0e28:c.instructions+=1;goto B5f0e28;
case 0x5f0e30:goto L5f0e30;
case 0x5f0e31:c.instructions+=2;goto B5f0e31;
case 0x5f0e33:c.instructions+=1;goto B5f0e33;
case 0x5f0e38:goto L5f0e38;
case 0x5f0e3a:c.instructions+=1;goto B5f0e3a;
case 0x5f0e3c:goto L5f0e3c;
case 0x5f0e40:goto L5f0e40;
case 0x5f0e44:c.instructions+=2;goto B5f0e44;
case 0x5f0e46:c.instructions+=1;goto B5f0e46;
case 0x5f0e48:goto L5f0e48;
case 0x5f0e4a:c.instructions+=2;goto B5f0e4a;
case 0x5f0e4c:c.instructions+=1;goto B5f0e4c;
case 0x5f0e4e:goto L5f0e4e;
case 0x5f0e50:c.instructions+=2;goto B5f0e50;
case 0x5f0e51:c.instructions+=1;goto B5f0e51;
case 0x5f0e54:goto L5f0e54;
case 0x5f0e56:c.instructions+=2;goto B5f0e56;
case 0x5f0e57:c.instructions+=1;goto B5f0e57;
case 0x5f0e60:goto L5f0e60;
case 0x5f0e61:c.instructions+=8;goto B5f0e61;
case 0x5f0e62:c.instructions+=7;goto B5f0e62;
case 0x5f0e63:c.instructions+=6;goto B5f0e63;
case 0x5f0e67:c.instructions+=5;goto B5f0e67;
case 0x5f0e69:c.instructions+=4;goto B5f0e69;
case 0x5f0e6b:c.instructions+=3;goto B5f0e6b;
case 0x5f0e6d:c.instructions+=2;goto B5f0e6d;
case 0x5f0e75:c.instructions+=1;goto B5f0e75;
case 0x5f0e77:goto L5f0e77;
case 0x5f0e7b:c.instructions+=1;goto B5f0e7b;
case 0x5f0e7f:goto L5f0e7f;
case 0x5f0e80:c.instructions+=8;goto B5f0e80;
case 0x5f0e84:c.instructions+=7;goto B5f0e84;
case 0x5f0e86:c.instructions+=6;goto B5f0e86;
case 0x5f0e88:c.instructions+=5;goto B5f0e88;
case 0x5f0e8a:c.instructions+=4;goto B5f0e8a;
case 0x5f0e8e:c.instructions+=3;goto B5f0e8e;
case 0x5f0e8f:c.instructions+=2;goto B5f0e8f;
case 0x5f0e91:c.instructions+=1;goto B5f0e91;
case 0x5f0e96:goto L5f0e96;
case 0x5f0e99:c.instructions+=3;goto B5f0e99;
case 0x5f0e9b:c.instructions+=2;goto B5f0e9b;
case 0x5f0e9c:c.instructions+=1;goto B5f0e9c;
case 0x5f0e9e:goto L5f0e9e;
case 0x5f0ea2:c.instructions+=2;goto B5f0ea2;
case 0x5f0ea4:c.instructions+=1;goto B5f0ea4;
case 0x5f0ea6:goto L5f0ea6;
case 0x5f0ea7:c.instructions+=2;goto B5f0ea7;
case 0x5f0ea9:c.instructions+=1;goto B5f0ea9;
case 0x5f0eae:goto L5f0eae;
case 0x5f0eb0:c.instructions+=4;goto B5f0eb0;
case 0x5f0eb1:c.instructions+=3;goto B5f0eb1;
case 0x5f0eb2:c.instructions+=2;goto B5f0eb2;
case 0x5f0eb3:c.instructions+=1;goto B5f0eb3;
case 0x5f0eb6:goto L5f0eb6;
case 0x5f0ebc:goto L5f0ebc;
case 0x5f0ebd:c.instructions+=3;goto B5f0ebd;
case 0x5f0ebe:c.instructions+=2;goto B5f0ebe;
case 0x5f0ebf:c.instructions+=1;goto B5f0ebf;
case 0x5f0ed0:goto L5f0ed0;
case 0x5f0ed6:c.instructions+=3;goto B5f0ed6;
case 0x5f0ed7:c.instructions+=2;goto B5f0ed7;
case 0x5f0ed9:c.instructions+=1;goto B5f0ed9;
case 0x5f0ede:goto L5f0ede;
case 0x5f0ee0:c.instructions+=1;goto B5f0ee0;
case 0x5f0ee2:goto L5f0ee2;
case 0x5f0ee6:goto L5f0ee6;
case 0x5f0eea:c.instructions+=2;goto B5f0eea;
case 0x5f0eec:c.instructions+=1;goto B5f0eec;
case 0x5f0eee:goto L5f0eee;
case 0x5f0ef0:c.instructions+=2;goto B5f0ef0;
case 0x5f0ef2:c.instructions+=1;goto B5f0ef2;
case 0x5f0ef4:goto L5f0ef4;
case 0x5f0ef6:c.instructions+=2;goto B5f0ef6;
case 0x5f0ef7:c.instructions+=1;goto B5f0ef7;
case 0x5f0ef8:goto L5f0ef8;
case 0x5f0efa:c.instructions+=2;goto B5f0efa;
case 0x5f0efb:c.instructions+=1;goto B5f0efb;
case 0x5f0f00:goto L5f0f00;
case 0x5f0f05:c.instructions+=6;goto B5f0f05;
case 0x5f0f0b:c.instructions+=5;goto B5f0f0b;
case 0x5f0f0c:c.instructions+=4;goto B5f0f0c;
case 0x5f0f0e:c.instructions+=3;goto B5f0f0e;
case 0x5f0f10:c.instructions+=2;goto B5f0f10;
case 0x5f0f11:c.instructions+=1;goto B5f0f11;
case 0x5f0f13:goto L5f0f13;
case 0x5f0f16:c.instructions+=1;goto B5f0f16;
case 0x5f0f18:goto L5f0f18;
case 0x5f0f1a:goto L5f0f1a;
case 0x5f0f1f:c.instructions+=1;goto B5f0f1f;
case 0x5f0f24:goto L5f0f24;
case 0x5f0f26:c.instructions+=1;goto B5f0f26;
case 0x5f0f28:goto L5f0f28;
case 0x5f0f2b:c.instructions+=2;goto B5f0f2b;
case 0x5f0f2d:c.instructions+=1;goto B5f0f2d;
case 0x5f0f2f:goto L5f0f2f;
case 0x5f0f33:c.instructions+=1;goto B5f0f33;
case 0x5f0f34:goto L5f0f34;
case 0x5f0f37:c.instructions+=2;goto B5f0f37;
case 0x5f0f39:c.instructions+=1;goto B5f0f39;
case 0x5f0f3b:goto L5f0f3b;
case 0x5f0f3e:c.instructions+=1;goto B5f0f3e;
case 0x5f0f40:goto L5f0f40;
case 0x5f0f42:goto L5f0f42;
case 0x5f0f44:c.instructions+=1;goto B5f0f44;
case 0x5f0f46:goto L5f0f46;
case 0x5f0f48:c.instructions+=2;goto B5f0f48;
case 0x5f0f4a:c.instructions+=1;goto B5f0f4a;
case 0x5f0f4c:goto L5f0f4c;
case 0x5f0f4d:c.instructions+=1;goto B5f0f4d;
case 0x5f0f54:goto L5f0f54;
case 0x5f0f58:c.instructions+=3;goto B5f0f58;
case 0x5f0f5a:c.instructions+=2;goto B5f0f5a;
case 0x5f0f5b:c.instructions+=1;goto B5f0f5b;
case 0x5f0f5e:goto L5f0f5e;
case 0x5f0f5f:c.instructions+=2;goto B5f0f5f;
case 0x5f0f61:c.instructions+=1;goto B5f0f61;
case 0x5f0f63:goto L5f0f63;
case 0x5f0f64:goto L5f0f64;
case 0x5f0f65:c.instructions+=3;goto B5f0f65;
case 0x5f0f66:c.instructions+=2;goto B5f0f66;
case 0x5f0f6c:c.instructions+=1;goto B5f0f6c;
case 0x5f0f70:goto L5f0f70;
case 0x5f0f71:c.instructions+=5;goto B5f0f71;
case 0x5f0f74:c.instructions+=4;goto B5f0f74;
case 0x5f0f76:c.instructions+=3;goto B5f0f76;
case 0x5f0f77:c.instructions+=2;goto B5f0f77;
case 0x5f0f7d:c.instructions+=1;goto B5f0f7d;
case 0x5f0f7f:goto L5f0f7f;
case 0x5f0f80:c.instructions+=1;goto B5f0f80;
case 0x5f0f83:goto L5f0f83;
case 0x5f0f85:c.instructions+=4;goto B5f0f85;
case 0x5f0f88:c.instructions+=3;goto B5f0f88;
case 0x5f0f8b:c.instructions+=2;goto B5f0f8b;
case 0x5f0f91:c.instructions+=1;goto B5f0f91;
case 0x5f0f96:goto L5f0f96;
case 0x5f0f99:c.instructions+=4;goto B5f0f99;
case 0x5f0f9b:c.instructions+=3;goto B5f0f9b;
case 0x5f0f9e:c.instructions+=2;goto B5f0f9e;
case 0x5f0f9f:c.instructions+=1;goto B5f0f9f;
case 0x5f0fa1:goto L5f0fa1;
case 0x5f0fa2:goto L5f0fa2;
case 0x5f0fa4:c.instructions+=5;goto B5f0fa4;
case 0x5f0fa7:c.instructions+=4;goto B5f0fa7;
case 0x5f0fa9:c.instructions+=3;goto B5f0fa9;
case 0x5f0faa:c.instructions+=2;goto B5f0faa;
case 0x5f0fab:c.instructions+=1;goto B5f0fab;
case 0x5f0fb0:goto L5f0fb0;
case 0x5f0fb3:c.instructions+=26;goto B5f0fb3;
case 0x5f0fb7:c.instructions+=25;goto B5f0fb7;
case 0x5f0fb9:c.instructions+=24;goto B5f0fb9;
case 0x5f0fbf:c.instructions+=23;goto B5f0fbf;
case 0x5f0fc1:c.instructions+=22;goto B5f0fc1;
case 0x5f0fc7:c.instructions+=21;goto B5f0fc7;
case 0x5f0fca:c.instructions+=20;goto B5f0fca;
case 0x5f0fd0:c.instructions+=19;goto B5f0fd0;
case 0x5f0fd2:c.instructions+=18;goto B5f0fd2;
case 0x5f0fd4:c.instructions+=17;goto B5f0fd4;
case 0x5f0fd6:c.instructions+=16;goto B5f0fd6;
case 0x5f0fd8:c.instructions+=15;goto B5f0fd8;
case 0x5f0fda:c.instructions+=14;goto B5f0fda;
case 0x5f0fdc:c.instructions+=13;goto B5f0fdc;
case 0x5f0fde:c.instructions+=12;goto B5f0fde;
case 0x5f0fe0:c.instructions+=11;goto B5f0fe0;
case 0x5f0fe4:c.instructions+=10;goto B5f0fe4;
case 0x5f0fe6:c.instructions+=9;goto B5f0fe6;
case 0x5f0fec:c.instructions+=8;goto B5f0fec;
case 0x5f0fef:c.instructions+=7;goto B5f0fef;
case 0x5f0ff5:c.instructions+=6;goto B5f0ff5;
case 0x5f0ff7:c.instructions+=5;goto B5f0ff7;
case 0x5f0ff9:c.instructions+=4;goto B5f0ff9;
case 0x5f0ffb:c.instructions+=3;goto B5f0ffb;
case 0x5f0ffd:c.instructions+=2;goto B5f0ffd;
case 0x5f0fff:c.instructions+=1;goto B5f0fff;
default:missing_instruction(c.pc);}
B5f0000:L5f0000:{c.instructions+=1;NFSU2_TR(0x5f0000);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f0005ull));
TAIL_STATIC(0x7414a0u,741);
}
B5f0005:L5f0005:{c.instructions+=3;NFSU2_TR(0x5f0005);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5f0008:{NFSU2_TR(0x5f0008);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0009:{NFSU2_TR(0x5f0009);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f000eull));
TAIL_STATIC(0x742360u,742);
}
B5f000e:L5f000e:{c.instructions+=3;NFSU2_TR(0x5f000e);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f0012:{NFSU2_TR(0x5f0012);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0013:{NFSU2_TR(0x5f0013);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f0018ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B5f0018:L5f0018:{c.instructions+=3;NFSU2_TR(0x5f0018);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B5f001b:{NFSU2_TR(0x5f001b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f001d:{NFSU2_TR(0x5f001d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5f00bd;}}
}
B5f0023:L5f0023:{c.instructions+=7;NFSU2_TR(0x5f0023);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5f0027:{NFSU2_TR(0x5f0027);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0028:{NFSU2_TR(0x5f0028);
u8 U[4];
w4(U+0,u32(0x7a60a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f002d:{NFSU2_TR(0x5f002d);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f0034:{NFSU2_TR(0x5f0034);
u8 U[4];
w4(U+0,u32(0x7a60ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0039:{NFSU2_TR(0x5f0039);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f003a:{NFSU2_TR(0x5f003a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f003full));
TAIL_STATIC(0x4400d0u,440);
}
B5f003f:L5f003f:{c.instructions+=7;NFSU2_TR(0x5f003f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5f0042:{NFSU2_TR(0x5f0042);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0044:{NFSU2_TR(0x5f0044);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f004b:{NFSU2_TR(0x5f004b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f004c:{NFSU2_TR(0x5f004c);
u8 U[4];
w4(U+0,u32(0x7a6098ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0051:{NFSU2_TR(0x5f0051);
u8 U[4];
w4(U+0,u32(u32(u32(0x194ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f0058:{NFSU2_TR(0x5f0058);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f005dull));
TAIL_STATIC(0x43f940u,43f);
}
B5f005d:L5f005d:{c.instructions+=3;NFSU2_TR(0x5f005d);
u8 U[4];
w4(U+0,u32(u32(u32(0x188ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f0064:{NFSU2_TR(0x5f0064);
u8 U[5];
w4(U+0,u32(u32(u32(0x660ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f006c:{NFSU2_TR(0x5f006c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f0071ull));
TAIL_STATIC(0x43e430u,43e);
}
B5f0071:L5f0071:{c.instructions+=2;NFSU2_TR(0x5f0071);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f0073:{NFSU2_TR(0x5f0073);
if(r1(R+518)){{goto L5f00a9;}}
}
B5f0075:L5f0075:{c.instructions+=2;NFSU2_TR(0x5f0075);
w4(R+24,u32(0x7fbe68ull));
}
B5f007a:{NFSU2_TR(0x5f007a);
__builtin_memmove((R+12),(R+12),4);
}
B5f0080:L5f0080:{c.instructions+=2;NFSU2_TR(0x5f0080);
u8 U[4];
w4(U+0,u32(u32(u32(0x188ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f0087:{NFSU2_TR(0x5f0087);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f008cull));
TAIL_STATIC(0x43e530u,43e);
}
B5f008c:L5f008c:{c.instructions+=2;NFSU2_TR(0x5f008c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f008e:{NFSU2_TR(0x5f008e);
if(r1(R+518)){{goto L5f00a9;}}
}
B5f0090:L5f0090:{c.instructions+=2;NFSU2_TR(0x5f0090);
u8 U[4];
w4(U+0,u32(u32(u32(0x188ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f0097:{NFSU2_TR(0x5f0097);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f009cull));
TAIL_STATIC(0x4401c0u,440);
}
B5f009c:L5f009c:{c.instructions+=4;NFSU2_TR(0x5f009c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5f009e:{NFSU2_TR(0x5f009e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5f00a1:{NFSU2_TR(0x5f00a1);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7fbe78ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7fbe78ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5f00a7:{NFSU2_TR(0x5f00a7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f0080u);}goto L5f0080;}}
}
B5f00a9:L5f00a9:{c.instructions+=3;NFSU2_TR(0x5f00a9);
u8 U[4];
w4(U+0,u32(u32(u32(0x188ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f00b0:{NFSU2_TR(0x5f00b0);
u8 U[5];
w4(U+0,u32(u32(u32(0x660ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f00b8:{NFSU2_TR(0x5f00b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f00bdull));
TAIL_STATIC(0x43e060u,43e);
}
B5f00bd:L5f00bd:{c.instructions+=3;NFSU2_TR(0x5f00bd);
u8 U[4];
w4(U+0,u32(u32(u32(0x3f0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f00c4:{NFSU2_TR(0x5f00c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x660ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f00cf:{NFSU2_TR(0x5f00cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f00d4ull));
TAIL_STATIC(0x43e060u,43e);
}
B5f00d4:L5f00d4:{c.instructions+=6;NFSU2_TR(0x5f00d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f00d5:{NFSU2_TR(0x5f00d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f00d6:{NFSU2_TR(0x5f00d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x650ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f00dd:{NFSU2_TR(0x5f00dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f00e4:{NFSU2_TR(0x5f00e4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x65cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x65cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x65cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f00ea:{NFSU2_TR(0x5f00ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f00f0:L5f00f0:{c.instructions+=3;NFSU2_TR(0x5f00f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x21ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5f00f3:{NFSU2_TR(0x5f00f3);
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
B5f00f5:{NFSU2_TR(0x5f00f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f010c;}}
}
B5f00f7:L5f00f7:{c.instructions+=3;NFSU2_TR(0x5f00f7);
__builtin_memmove((R+0),gp(0x8669f4),4);
}
B5f00fc:{NFSU2_TR(0x5f00fc);
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
B5f00fe:{NFSU2_TR(0x5f00fe);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5f010c;}}
}
B5f0100:L5f0100:{c.instructions+=3;NFSU2_TR(0x5f0100);
__builtin_memmove((R+0),gp(0x866a14),4);
}
B5f0105:{NFSU2_TR(0x5f0105);
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
B5f0107:{NFSU2_TR(0x5f0107);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5f010c;}}
}
B5f0109:L5f0109:{c.instructions+=2;NFSU2_TR(0x5f0109);
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
B5f010b:{NFSU2_TR(0x5f010b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f010c:L5f010c:{c.instructions+=2;NFSU2_TR(0x5f010c);
w4(R+0,u32(0x1ull));
}
B5f0111:{NFSU2_TR(0x5f0111);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f0120:L5f0120:{c.instructions+=4;NFSU2_TR(0x5f0120);
__builtin_memmove((R+0),gp(0x86676c),4);
}
B5f0125:{NFSU2_TR(0x5f0125);
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
B5f0127:{NFSU2_TR(0x5f0127);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B5f012a:{NFSU2_TR(0x5f012a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f012c:L5f012c:{c.instructions+=5;NFSU2_TR(0x5f012c);
}
B5f012d:{NFSU2_TR(0x5f012d);
}
B5f012e:{NFSU2_TR(0x5f012e);
}
B5f012f:{NFSU2_TR(0x5f012f);
}
B5f0130:{NFSU2_TR(0x5f0130);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f0135ull));
TAIL_STATIC(0x5838a0u,583);
}
B5f0135:L5f0135:{c.instructions+=2;NFSU2_TR(0x5f0135);
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
B5f0137:{NFSU2_TR(0x5f0137);
if(r1(R+518)){{goto L5f013e;}}
}
B5f0139:L5f0139:{c.instructions+=1;NFSU2_TR(0x5f0139);
TAIL_STATIC(0x58f690u,58f);
}
B5f013e:L5f013e:{c.instructions+=1;NFSU2_TR(0x5f013e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f0140:L5f0140:{c.instructions+=1;NFSU2_TR(0x5f0140);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f0145ull));
TAIL_STATIC(0x5838a0u,583);
}
B5f0145:L5f0145:{c.instructions+=2;NFSU2_TR(0x5f0145);
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
B5f0147:{NFSU2_TR(0x5f0147);
if(r1(R+518)){{goto L5f014e;}}
}
B5f0149:L5f0149:{c.instructions+=1;NFSU2_TR(0x5f0149);
TAIL_STATIC(0x58c220u,58c);
}
B5f014e:L5f014e:{c.instructions+=1;NFSU2_TR(0x5f014e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f0150:L5f0150:{c.instructions+=2;NFSU2_TR(0x5f0150);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5f0153:{NFSU2_TR(0x5f0153);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f015b;}}
}
B5f0155:L5f0155:{c.instructions+=1;NFSU2_TR(0x5f0155);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+4)),r4(U+0));
}
B5f015b:L5f015b:{c.instructions+=1;NFSU2_TR(0x5f015b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f0160:L5f0160:{c.instructions+=6;NFSU2_TR(0x5f0160);
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
B5f0162:{NFSU2_TR(0x5f0162);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11aull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f0168:{NFSU2_TR(0x5f0168);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11bull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f016e:{NFSU2_TR(0x5f016e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f0172:{NFSU2_TR(0x5f0172);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f0175:{NFSU2_TR(0x5f0175);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f0180:L5f0180:{c.instructions+=3;NFSU2_TR(0x5f0180);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f0184:{NFSU2_TR(0x5f0184);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xcull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f0187:{NFSU2_TR(0x5f0187);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5f01ba;}}
}
B5f0189:L5f0189:{c.instructions+=2;NFSU2_TR(0x5f0189);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5f01d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5f0190:{NFSU2_TR(0x5f0190);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5f01c0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f0197:L5f0197:{c.instructions+=2;NFSU2_TR(0x5f0197);
w4(R+0,u32(0x5ull));
}
B5f019c:{NFSU2_TR(0x5f019c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f019d:L5f019d:{c.instructions+=2;NFSU2_TR(0x5f019d);
w4(R+4,u32(0x83aab4ull));
}
B5f01a2:{NFSU2_TR(0x5f01a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f01a7ull));
TAIL_STATIC(0x502910u,502);
}
B5f01a7:L5f01a7:{c.instructions+=3;NFSU2_TR(0x5f01a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5f01aa:{NFSU2_TR(0x5f01aa);
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
B5f01ac:{NFSU2_TR(0x5f01ac);
if(r1(R+518)){{goto L5f01b4;}}
}
B5f01ae:L5f01ae:{c.instructions+=2;NFSU2_TR(0x5f01ae);
w4(R+0,u32(0x3ull));
}
B5f01b3:{NFSU2_TR(0x5f01b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f01b4:L5f01b4:{c.instructions+=2;NFSU2_TR(0x5f01b4);
w4(R+0,u32(0x1ull));
}
B5f01b9:{NFSU2_TR(0x5f01b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f01ba:L5f01ba:{c.instructions+=2;NFSU2_TR(0x5f01ba);
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
B5f01bc:{NFSU2_TR(0x5f01bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f01e0:L5f01e0:{c.instructions+=4;NFSU2_TR(0x5f01e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f01e3:{NFSU2_TR(0x5f01e3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f01e5:{NFSU2_TR(0x5f01e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f01e7:{NFSU2_TR(0x5f01e7);
if(r1(R+518)){{goto L5f01ee;}}
}
B5f01e9:L5f01e9:{c.instructions+=1;NFSU2_TR(0x5f01e9);
w4(R+0,u32(0x1ull));
}
B5f01ee:L5f01ee:{c.instructions+=3;NFSU2_TR(0x5f01ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f01f1:{NFSU2_TR(0x5f01f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f01f3:{NFSU2_TR(0x5f01f3);
if(r1(R+518)){{goto L5f01f6;}}
}
B5f01f5:L5f01f5:{c.instructions+=1;NFSU2_TR(0x5f01f5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5f01f6:L5f01f6:{c.instructions+=3;NFSU2_TR(0x5f01f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f01f9:{NFSU2_TR(0x5f01f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f01fb:{NFSU2_TR(0x5f01fb);
if(r1(R+518)){{goto L5f01fe;}}
}
B5f01fd:L5f01fd:{c.instructions+=1;NFSU2_TR(0x5f01fd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5f01fe:L5f01fe:{c.instructions+=3;NFSU2_TR(0x5f01fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f0201:{NFSU2_TR(0x5f0201);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f0203:{NFSU2_TR(0x5f0203);
if(r1(R+518)){{goto L5f0206;}}
}
B5f0205:L5f0205:{c.instructions+=1;NFSU2_TR(0x5f0205);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5f0206:L5f0206:{c.instructions+=3;NFSU2_TR(0x5f0206);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f0209:{NFSU2_TR(0x5f0209);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f020b:{NFSU2_TR(0x5f020b);
if(r1(R+518)){{goto L5f020e;}}
}
B5f020d:L5f020d:{c.instructions+=1;NFSU2_TR(0x5f020d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5f020e:L5f020e:{c.instructions+=3;NFSU2_TR(0x5f020e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f0211:{NFSU2_TR(0x5f0211);
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
B5f0213:{NFSU2_TR(0x5f0213);
if(r1(R+518)){{goto L5f0216;}}
}
B5f0215:L5f0215:{c.instructions+=1;NFSU2_TR(0x5f0215);
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
B5f0216:L5f0216:{c.instructions+=1;NFSU2_TR(0x5f0216);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f0220:L5f0220:{c.instructions+=3;NFSU2_TR(0x5f0220);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f0224:{NFSU2_TR(0x5f0224);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5f0228:{NFSU2_TR(0x5f0228);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f0230:L5f0230:{c.instructions+=9;NFSU2_TR(0x5f0230);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0231:{NFSU2_TR(0x5f0231);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0232:{NFSU2_TR(0x5f0232);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5f0236:{NFSU2_TR(0x5f0236);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0237:{NFSU2_TR(0x5f0237);
__builtin_memmove((R+12),(R+4),4);
}
B5f0239:{NFSU2_TR(0x5f0239);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f023a:{NFSU2_TR(0x5f023a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5f023c:{NFSU2_TR(0x5f023c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f023f:{NFSU2_TR(0x5f023f);
}
B5f0240:L5f0240:{c.instructions+=3;NFSU2_TR(0x5f0240);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f0242:{NFSU2_TR(0x5f0242);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f0244:{NFSU2_TR(0x5f0244);
if(r1(R+518)){{goto L5f0257;}}
}
B5f0246:L5f0246:{c.instructions+=4;NFSU2_TR(0x5f0246);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x12ull))));
}
B5f0249:{NFSU2_TR(0x5f0249);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f024a:{NFSU2_TR(0x5f024a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f024b:{NFSU2_TR(0x5f024b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f0250ull));
TAIL_STATIC(0x43dc30u,43d);
}
B5f0250:L5f0250:{c.instructions+=3;NFSU2_TR(0x5f0250);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5f0253:{NFSU2_TR(0x5f0253);
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
B5f0255:{NFSU2_TR(0x5f0255);
if(r1(R+518)){{goto L5f0269;}}
}
B5f0257:L5f0257:{c.instructions+=4;NFSU2_TR(0x5f0257);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5f0258:{NFSU2_TR(0x5f0258);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5f025b:{NFSU2_TR(0x5f025b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5f025e:{NFSU2_TR(0x5f025e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f0240u);}goto L5f0240;}}
}
B5f0260:L5f0260:{c.instructions+=6;NFSU2_TR(0x5f0260);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f0261:{NFSU2_TR(0x5f0261);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f0262:{NFSU2_TR(0x5f0262);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f0263:{NFSU2_TR(0x5f0263);
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
B5f0265:{NFSU2_TR(0x5f0265);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f0266:{NFSU2_TR(0x5f0266);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f0269:L5f0269:{c.instructions+=6;NFSU2_TR(0x5f0269);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5f026d:{NFSU2_TR(0x5f026d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f026e:{NFSU2_TR(0x5f026e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f026f:{NFSU2_TR(0x5f026f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f0270:{NFSU2_TR(0x5f0270);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f0271:{NFSU2_TR(0x5f0271);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f0280:L5f0280:{c.instructions+=4;NFSU2_TR(0x5f0280);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0281:{NFSU2_TR(0x5f0281);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0282:{NFSU2_TR(0x5f0282);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f0284:{NFSU2_TR(0x5f0284);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f0287:L5f0287:{c.instructions+=3;NFSU2_TR(0x5f0287);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f0289:{NFSU2_TR(0x5f0289);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f028b:{NFSU2_TR(0x5f028b);
if(r1(R+518)){{goto L5f0294;}}
}
B5f028d:L5f028d:{c.instructions+=3;NFSU2_TR(0x5f028d);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5f0290:{NFSU2_TR(0x5f0290);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f0292:{NFSU2_TR(0x5f0292);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f02a2;}}
}
B5f0294:L5f0294:{c.instructions+=4;NFSU2_TR(0x5f0294);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5f0295:{NFSU2_TR(0x5f0295);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5f0298:{NFSU2_TR(0x5f0298);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5f029b:{NFSU2_TR(0x5f029b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f0287u);}goto L5f0287;}}
}
B5f029d:L5f029d:{c.instructions+=4;NFSU2_TR(0x5f029d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f029e:{NFSU2_TR(0x5f029e);
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
B5f02a0:{NFSU2_TR(0x5f02a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f02a1:{NFSU2_TR(0x5f02a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f02a2:L5f02a2:{c.instructions+=4;NFSU2_TR(0x5f02a2);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5f02a6:{NFSU2_TR(0x5f02a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f02a7:{NFSU2_TR(0x5f02a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f02a8:{NFSU2_TR(0x5f02a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f02b0:L5f02b0:{c.instructions+=5;NFSU2_TR(0x5f02b0);
__builtin_memmove((R+0),gp(0x89e808),4);
}
B5f02b5:{NFSU2_TR(0x5f02b5);
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
B5f02b8:{NFSU2_TR(0x5f02b8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f02b9:{NFSU2_TR(0x5f02b9);
__builtin_memmove((R+24),(R+4),4);
}
B5f02bb:{NFSU2_TR(0x5f02bb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5f0314;}}
}
B5f02bd:L5f02bd:{c.instructions+=3;NFSU2_TR(0x5f02bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f02be:{NFSU2_TR(0x5f02be);
w4(R+4,u32(0x89e7a0ull));
}
B5f02c3:{NFSU2_TR(0x5f02c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f02c8ull));
TAIL_STATIC(0x5ed920u,5ed);
}
B5f02c8:L5f02c8:{c.instructions+=2;NFSU2_TR(0x5f02c8);
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
B5f02ca:{NFSU2_TR(0x5f02ca);
if(r1(R+518)){{goto L5f0314;}}
}
B5f02cc:L5f02cc:{c.instructions+=9;NFSU2_TR(0x5f02cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f02d0:{NFSU2_TR(0x5f02d0);
__builtin_memmove((R+8),(R+4),1);
}
B5f02d2:{NFSU2_TR(0x5f02d2);
w1(R+8,u8(u32(r1(R+8))+u32(u8(0x1ull))));
}
B5f02d4:{NFSU2_TR(0x5f02d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f02d6:{NFSU2_TR(0x5f02d6);
__builtin_memmove(gp(0x89e808),(R+4),4);
}
B5f02dc:{NFSU2_TR(0x5f02dc);
__builtin_memmove(gp(0x89e7d0),(R+4),1);
}
B5f02e2:{NFSU2_TR(0x5f02e2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f02e5:{NFSU2_TR(0x5f02e5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f02e8:{NFSU2_TR(0x5f02e8);
if(r1(R+518)){{goto L5f02f8;}}
}
B5f02ea:L5f02ea:{c.instructions+=3;NFSU2_TR(0x5f02ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f02ed:{NFSU2_TR(0x5f02ed);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5f02f1:{NFSU2_TR(0x5f02f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f02f8:L5f02f8:{c.instructions+=9;NFSU2_TR(0x5f02f8);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5f02fc:{NFSU2_TR(0x5f02fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f02ff:{NFSU2_TR(0x5f02ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f0302:{NFSU2_TR(0x5f0302);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5f0306:{NFSU2_TR(0x5f0306);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5f0307:{NFSU2_TR(0x5f0307);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f0308:{NFSU2_TR(0x5f0308);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f030c:{NFSU2_TR(0x5f030c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f030f:{NFSU2_TR(0x5f030f);
TAIL_STATIC(0x61c280u,61c);
}
B5f0314:L5f0314:{c.instructions+=2;NFSU2_TR(0x5f0314);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f0315:{NFSU2_TR(0x5f0315);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f0320:L5f0320:{c.instructions+=13;NFSU2_TR(0x5f0320);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B5f0323:{NFSU2_TR(0x5f0323);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0324:{NFSU2_TR(0x5f0324);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0325:{NFSU2_TR(0x5f0325);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0326:{NFSU2_TR(0x5f0326);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0327:{NFSU2_TR(0x5f0327);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f032b:{NFSU2_TR(0x5f032b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f032d:{NFSU2_TR(0x5f032d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f032f:{NFSU2_TR(0x5f032f);
__builtin_memmove((R+20),(R+4),4);
}
B5f0331:{NFSU2_TR(0x5f0331);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f0334:{NFSU2_TR(0x5f0334);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0336:{NFSU2_TR(0x5f0336);
__builtin_memmove((R+4),(R+12),4);
}
B5f0338:{NFSU2_TR(0x5f0338);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f033dull));
TAIL_STATIC(0x5b4fc0u,5b4);
}
B5f033d:L5f033d:{c.instructions+=3;NFSU2_TR(0x5f033d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f033f:{NFSU2_TR(0x5f033f);
__builtin_memmove((R+4),(R+12),4);
}
B5f0341:{NFSU2_TR(0x5f0341);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f0346ull));
TAIL_STATIC(0x5b5350u,5b5);
}
B5f0346:L5f0346:{c.instructions+=2;NFSU2_TR(0x5f0346);
__builtin_memmove((R+4),(R+0),4);
}
B5f0348:{NFSU2_TR(0x5f0348);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f034dull));
TAIL_STATIC(0x59a520u,59a);
}
B5f034d:L5f034d:{c.instructions+=7;NFSU2_TR(0x5f034d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x38cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f0353:{NFSU2_TR(0x5f0353);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x260ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f0359:{NFSU2_TR(0x5f0359);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f035d:{NFSU2_TR(0x5f035d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f035f:{NFSU2_TR(0x5f035f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0360:{NFSU2_TR(0x5f0360);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0361:{NFSU2_TR(0x5f0361);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f0366ull));
TAIL_STATIC(0x582130u,582);
}
B5f0366:L5f0366:{c.instructions+=4;NFSU2_TR(0x5f0366);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5f036a:{NFSU2_TR(0x5f036a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f036b:{NFSU2_TR(0x5f036b);
__builtin_memmove((R+4),(R+24),4);
}
B5f036d:{NFSU2_TR(0x5f036d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f0372ull));
TAIL_STATIC(0x581d00u,581);
}
B5f0372:L5f0372:{c.instructions+=5;NFSU2_TR(0x5f0372);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f0376:{NFSU2_TR(0x5f0376);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0378:{NFSU2_TR(0x5f0378);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0379:{NFSU2_TR(0x5f0379);
__builtin_memmove((R+4),(R+24),4);
}
B5f037b:{NFSU2_TR(0x5f037b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f0380ull));
TAIL_STATIC(0x581d00u,581);
}
B5f0380:L5f0380:{c.instructions+=2;NFSU2_TR(0x5f0380);
__builtin_memmove((R+4),(R+28),4);
}
B5f0382:{NFSU2_TR(0x5f0382);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f0387ull));
TAIL_STATIC(0x4017e0u,401);
}
B5f0387:L5f0387:{c.instructions+=3;NFSU2_TR(0x5f0387);
__builtin_memmove((R+28),(R+0),4);
}
B5f0389:{NFSU2_TR(0x5f0389);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x28ull))));
}
B5f038c:{NFSU2_TR(0x5f038c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f0394:L5f0394:{c.instructions+=7;NFSU2_TR(0x5f0394);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5f0397:{NFSU2_TR(0x5f0397);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B5f039a:{NFSU2_TR(0x5f039a);
w4(R+8,u32(r1(R+4)));
}
B5f039d:{NFSU2_TR(0x5f039d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f039f:{NFSU2_TR(0x5f039f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f03a0:{NFSU2_TR(0x5f03a0);
__builtin_memmove((R+4),(R+24),4);
}
B5f03a2:{NFSU2_TR(0x5f03a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f03a7ull));
TAIL_STATIC(0x581d00u,581);
}
B5f03a7:L5f03a7:{c.instructions+=5;NFSU2_TR(0x5f03a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f03ab:{NFSU2_TR(0x5f03ab);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5f03ae:{NFSU2_TR(0x5f03ae);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5f03af:{NFSU2_TR(0x5f03af);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f03b3:{NFSU2_TR(0x5f03b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f0394u);}goto L5f0394;}}
}
B5f03b5:L5f03b5:{c.instructions+=2;NFSU2_TR(0x5f03b5);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f03b9:{NFSU2_TR(0x5f03b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f03beull));
TAIL_STATIC(0x5a6300u,5a6);
}
B5f03be:L5f03be:{c.instructions+=4;NFSU2_TR(0x5f03be);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f03c3:{NFSU2_TR(0x5f03c3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f03c5:{NFSU2_TR(0x5f03c5);
__builtin_memmove((R+4),(R+12),4);
}
B5f03c7:{NFSU2_TR(0x5f03c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f03ccull));
TAIL_STATIC(0x5b6990u,5b6);
}
B5f03cc:L5f03cc:{c.instructions+=7;NFSU2_TR(0x5f03cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5f03d0:{NFSU2_TR(0x5f03d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f03d1:{NFSU2_TR(0x5f03d1);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f03d5:{NFSU2_TR(0x5f03d5);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f03d8:{NFSU2_TR(0x5f03d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f03d9:{NFSU2_TR(0x5f03d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2f0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f03df:{NFSU2_TR(0x5f03df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f03e4ull));
TAIL_STATIC(0x5994f0u,599);
}
B5f03e4:L5f03e4:{c.instructions+=1;NFSU2_TR(0x5f03e4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5f03e6:L5f03e6:{c.instructions+=5;NFSU2_TR(0x5f03e6);
u8 U[13];
w4(U+0,u32(u32(u32(0x19ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(r1(U+12)));
}
B5f03eb:{NFSU2_TR(0x5f03eb);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f03ed:{NFSU2_TR(0x5f03ed);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f03ee:{NFSU2_TR(0x5f03ee);
__builtin_memmove((R+4),(R+24),4);
}
B5f03f0:{NFSU2_TR(0x5f03f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f03f5ull));
TAIL_STATIC(0x581d00u,581);
}
B5f03f5:L5f03f5:{c.instructions+=3;NFSU2_TR(0x5f03f5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5f03f6:{NFSU2_TR(0x5f03f6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5f03f9:{NFSU2_TR(0x5f03f9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f03e6u);}goto L5f03e6;}}
}
B5f03fb:L5f03fb:{c.instructions+=5;NFSU2_TR(0x5f03fb);
u8 U[4];
w4(U+0,u32(0x29ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f03fd:{NFSU2_TR(0x5f03fd);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x398ull))));
}
B5f0403:{NFSU2_TR(0x5f0403);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0404:{NFSU2_TR(0x5f0404);
__builtin_memmove((R+4),(R+24),4);
}
B5f0406:{NFSU2_TR(0x5f0406);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f040bull));
TAIL_STATIC(0x583fe0u,583);
}
B5f040b:L5f040b:{c.instructions+=6;NFSU2_TR(0x5f040b);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5f040f:{NFSU2_TR(0x5f040f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f0415:{NFSU2_TR(0x5f0415);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f0417:{NFSU2_TR(0x5f0417);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f041d:{NFSU2_TR(0x5f041d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f041e:{NFSU2_TR(0x5f041e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f043d;}}
}
B5f0420:L5f0420:{c.instructions+=2;NFSU2_TR(0x5f0420);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0422:{NFSU2_TR(0x5f0422);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f0427ull));
TAIL_STATIC(0x582130u,582);
}
B5f0427:L5f0427:{c.instructions+=3;NFSU2_TR(0x5f0427);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0428:{NFSU2_TR(0x5f0428);
__builtin_memmove((R+4),(R+24),4);
}
B5f042a:{NFSU2_TR(0x5f042a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f042full));
TAIL_STATIC(0x581d00u,581);
}
B5f042f:L5f042f:{c.instructions+=7;NFSU2_TR(0x5f042f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f0433:{NFSU2_TR(0x5f0433);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f0434:{NFSU2_TR(0x5f0434);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f0435:{NFSU2_TR(0x5f0435);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f0436:{NFSU2_TR(0x5f0436);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f0437:{NFSU2_TR(0x5f0437);
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
B5f043a:{NFSU2_TR(0x5f043a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f043d:L5f043d:{c.instructions+=2;NFSU2_TR(0x5f043d);
u8 U[4];
w4(U+0,u32(0xaaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0442:{NFSU2_TR(0x5f0442);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f0447ull));
TAIL_STATIC(0x582130u,582);
}
B5f0447:L5f0447:{c.instructions+=3;NFSU2_TR(0x5f0447);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0448:{NFSU2_TR(0x5f0448);
__builtin_memmove((R+4),(R+24),4);
}
B5f044a:{NFSU2_TR(0x5f044a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f044full));
TAIL_STATIC(0x581d00u,581);
}
B5f044f:L5f044f:{c.instructions+=3;NFSU2_TR(0x5f044f);
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
B5f0451:{NFSU2_TR(0x5f0451);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x3a4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f0457:{NFSU2_TR(0x5f0457);
{goto L5f0460;}
}
B5f0460:L5f0460:{c.instructions+=3;NFSU2_TR(0x5f0460);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f0464:{NFSU2_TR(0x5f0464);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0465:{NFSU2_TR(0x5f0465);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f046aull));
TAIL_STATIC(0x6102f0u,610);
}
B5f046a:L5f046a:{c.instructions+=2;NFSU2_TR(0x5f046a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f046c:{NFSU2_TR(0x5f046c);
if(r1(R+518)){{goto L5f049c;}}
}
B5f046e:L5f046e:{c.instructions+=9;NFSU2_TR(0x5f046e);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B5f0472:{NFSU2_TR(0x5f0472);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+4,u32(r2(U+0)));
}
B5f0475:{NFSU2_TR(0x5f0475);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5f0478:{NFSU2_TR(0x5f0478);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f047a:{NFSU2_TR(0x5f047a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f047b:{NFSU2_TR(0x5f047b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B5f047f:{NFSU2_TR(0x5f047f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0480:{NFSU2_TR(0x5f0480);
__builtin_memmove((R+4),(R+0),4);
}
B5f0482:{NFSU2_TR(0x5f0482);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f0487ull));
TAIL_STATIC(0x610010u,610);
}
B5f0487:L5f0487:{c.instructions+=3;NFSU2_TR(0x5f0487);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0488:{NFSU2_TR(0x5f0488);
w4(R+4,u32(0x8a2b68ull));
}
B5f048d:{NFSU2_TR(0x5f048d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f0492ull));
TAIL_STATIC(0x61b520u,61b);
}
B5f0492:L5f0492:{c.instructions+=4;NFSU2_TR(0x5f0492);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f0498:{NFSU2_TR(0x5f0498);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0499:{NFSU2_TR(0x5f0499);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f049a:{NFSU2_TR(0x5f049a);
{goto L5f04a8;}
}
B5f049c:L5f049c:{c.instructions+=3;NFSU2_TR(0x5f049c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f04a2:{NFSU2_TR(0x5f04a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f04a3:{NFSU2_TR(0x5f04a3);
u8 U[4];
w4(U+0,u32(0x3e80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f04a8:L5f04a8:{c.instructions+=2;NFSU2_TR(0x5f04a8);
__builtin_memmove((R+4),(R+28),4);
}
B5f04aa:{NFSU2_TR(0x5f04aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f04afull));
TAIL_STATIC(0x582130u,582);
}
B5f04af:L5f04af:{c.instructions+=3;NFSU2_TR(0x5f04af);
__builtin_memmove((R+4),(R+24),4);
}
B5f04b1:{NFSU2_TR(0x5f04b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f04b2:{NFSU2_TR(0x5f04b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f04b7ull));
TAIL_STATIC(0x581d00u,581);
}
B5f04b7:L5f04b7:{c.instructions+=3;NFSU2_TR(0x5f04b7);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5f04b8:{NFSU2_TR(0x5f04b8);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0xaaull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xaaull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xaaull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f04be:{NFSU2_TR(0x5f04be);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f0460u);}goto L5f0460;}}
}
B5f04c0:L5f04c0:{c.instructions+=7;NFSU2_TR(0x5f04c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f04c4:{NFSU2_TR(0x5f04c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f04c5:{NFSU2_TR(0x5f04c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f04c6:{NFSU2_TR(0x5f04c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f04c7:{NFSU2_TR(0x5f04c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f04c8:{NFSU2_TR(0x5f04c8);
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
B5f04cb:{NFSU2_TR(0x5f04cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f04d0:L5f04d0:{c.instructions+=16;NFSU2_TR(0x5f04d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B5f04d3:{NFSU2_TR(0x5f04d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f04d9:{NFSU2_TR(0x5f04d9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f04da:{NFSU2_TR(0x5f04da);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5f04de:{NFSU2_TR(0x5f04de);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f04df:{NFSU2_TR(0x5f04df);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f04e0:{NFSU2_TR(0x5f04e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x260ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f04e6:{NFSU2_TR(0x5f04e6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f04e7:{NFSU2_TR(0x5f04e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f04eb:{NFSU2_TR(0x5f04eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f04ec:{NFSU2_TR(0x5f04ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f04f0:{NFSU2_TR(0x5f04f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f04f1:{NFSU2_TR(0x5f04f1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5f04f3:{NFSU2_TR(0x5f04f3);
__builtin_memmove((R+4),(R+12),4);
}
B5f04f5:{NFSU2_TR(0x5f04f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f04f9:{NFSU2_TR(0x5f04f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f04feull));
TAIL_STATIC(0x581d90u,581);
}
B5f04fe:L5f04fe:{c.instructions+=4;NFSU2_TR(0x5f04fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f0502:{NFSU2_TR(0x5f0502);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0503:{NFSU2_TR(0x5f0503);
__builtin_memmove((R+4),(R+24),4);
}
B5f0505:{NFSU2_TR(0x5f0505);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f050aull));
TAIL_STATIC(0x582160u,582);
}
B5f050a:L5f050a:{c.instructions+=7;NFSU2_TR(0x5f050a);
__builtin_memmove((R+24),(R+0),4);
}
B5f050c:{NFSU2_TR(0x5f050c);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f050e:{NFSU2_TR(0x5f050e);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f0512:{NFSU2_TR(0x5f0512);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0513:{NFSU2_TR(0x5f0513);
__builtin_memmove((R+4),(R+12),4);
}
B5f0515:{NFSU2_TR(0x5f0515);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f0519:{NFSU2_TR(0x5f0519);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f051eull));
TAIL_STATIC(0x581d90u,581);
}
B5f051e:L5f051e:{c.instructions+=8;NFSU2_TR(0x5f051e);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5f0522:{NFSU2_TR(0x5f0522);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0523:{NFSU2_TR(0x5f0523);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0524:{NFSU2_TR(0x5f0524);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f0528:{NFSU2_TR(0x5f0528);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0529:{NFSU2_TR(0x5f0529);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f052a:{NFSU2_TR(0x5f052a);
__builtin_memmove((R+4),(R+20),4);
}
B5f052c:{NFSU2_TR(0x5f052c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f0531ull));
TAIL_STATIC(0x610270u,610);
}
B5f0531:L5f0531:{c.instructions+=3;NFSU2_TR(0x5f0531);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0532:{NFSU2_TR(0x5f0532);
__builtin_memmove((R+4),(R+20),4);
}
B5f0534:{NFSU2_TR(0x5f0534);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f0539ull));
TAIL_STATIC(0x61c280u,61c);
}
B5f0539:L5f0539:{c.instructions+=2;NFSU2_TR(0x5f0539);
__builtin_memmove((R+4),(R+20),4);
}
B5f053b:{NFSU2_TR(0x5f053b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f0540ull));
TAIL_STATIC(0x4017e0u,401);
}
B5f0540:L5f0540:{c.instructions+=4;NFSU2_TR(0x5f0540);
__builtin_memmove((R+24),(R+0),4);
}
B5f0542:{NFSU2_TR(0x5f0542);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x28ull))));
}
B5f0545:{NFSU2_TR(0x5f0545);
w4(R+28,u32(0xaull));
}
B5f054a:{NFSU2_TR(0x5f054a);
__builtin_memmove((R+12),(R+12),4);
}
B5f0550:L5f0550:{c.instructions+=6;NFSU2_TR(0x5f0550);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0552:{NFSU2_TR(0x5f0552);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f0556:{NFSU2_TR(0x5f0556);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0557:{NFSU2_TR(0x5f0557);
__builtin_memmove((R+4),(R+12),4);
}
B5f0559:{NFSU2_TR(0x5f0559);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f0561:{NFSU2_TR(0x5f0561);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f0566ull));
TAIL_STATIC(0x581d90u,581);
}
B5f0566:L5f0566:{c.instructions+=8;NFSU2_TR(0x5f0566);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f056a:{NFSU2_TR(0x5f056a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f056c:{NFSU2_TR(0x5f056c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B5f056f:{NFSU2_TR(0x5f056f);
w4(R+0,u32(r1(R+8)));
}
B5f0572:{NFSU2_TR(0x5f0572);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5f0574:{NFSU2_TR(0x5f0574);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5f0577:{NFSU2_TR(0x5f0577);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B5f0578:{NFSU2_TR(0x5f0578);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f0550u);}goto L5f0550;}}
}
B5f057a:L5f057a:{c.instructions+=2;NFSU2_TR(0x5f057a);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f057e:{NFSU2_TR(0x5f057e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f0583ull));
TAIL_STATIC(0x5a6300u,5a6);
}
B5f0583:L5f0583:{c.instructions+=2;NFSU2_TR(0x5f0583);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5f0585:{NFSU2_TR(0x5f0585);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5f0587:L5f0587:{c.instructions+=6;NFSU2_TR(0x5f0587);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0589:{NFSU2_TR(0x5f0589);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f058d:{NFSU2_TR(0x5f058d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f058e:{NFSU2_TR(0x5f058e);
__builtin_memmove((R+4),(R+12),4);
}
B5f0590:{NFSU2_TR(0x5f0590);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f0594:{NFSU2_TR(0x5f0594);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f0599ull));
TAIL_STATIC(0x581d90u,581);
}
B5f0599:L5f0599:{c.instructions+=5;NFSU2_TR(0x5f0599);
u8 U[5];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5f059d:{NFSU2_TR(0x5f059d);
u8 U[13];
w4(U+0,u32(u32(u32(0x1dull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5f05a1:{NFSU2_TR(0x5f05a1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5f05a2:{NFSU2_TR(0x5f05a2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5f05a5:{NFSU2_TR(0x5f05a5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f0587u);}goto L5f0587;}}
}
B5f05a7:L5f05a7:{c.instructions+=4;NFSU2_TR(0x5f05a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f05ab:{NFSU2_TR(0x5f05ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f05ac:{NFSU2_TR(0x5f05ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2f0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f05b2:{NFSU2_TR(0x5f05b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f05b7ull));
TAIL_STATIC(0x5ac4b0u,5ac);
}
B5f05b7:L5f05b7:{c.instructions+=2;NFSU2_TR(0x5f05b7);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f05bb:{NFSU2_TR(0x5f05bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f05c0ull));
TAIL_STATIC(0x5a7930u,5a7);
}
B5f05c0:L5f05c0:{c.instructions+=5;NFSU2_TR(0x5f05c0);
u8 U[4];
w4(U+0,u32(0x29ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f05c2:{NFSU2_TR(0x5f05c2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f05c6:{NFSU2_TR(0x5f05c6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f05c7:{NFSU2_TR(0x5f05c7);
__builtin_memmove((R+4),(R+12),4);
}
B5f05c9:{NFSU2_TR(0x5f05c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f05ceull));
TAIL_STATIC(0x584020u,584);
}
B5f05ce:L5f05ce:{c.instructions+=3;NFSU2_TR(0x5f05ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x398ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f05d4:{NFSU2_TR(0x5f05d4);
w4(R+4,u32(0xaull));
}
B5f05d9:{NFSU2_TR(0x5f05d9);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B5f05dd:L5f05dd:{c.instructions+=1;NFSU2_TR(0x5f05dd);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5f05df;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f05ddu);}goto L5f05dd;}
}
B5f05df:L5f05df:{c.instructions+=6;NFSU2_TR(0x5f05df);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f05e1:{NFSU2_TR(0x5f05e1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f05e3:{NFSU2_TR(0x5f05e3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f05e5:{NFSU2_TR(0x5f05e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f05e8:{NFSU2_TR(0x5f05e8);
u8 U[34];
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
}
B5f05e9:{NFSU2_TR(0x5f05e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f05eeull));
TAIL_STATIC(0x5b4fc0u,5b4);
}
B5f05ee:L5f05ee:{c.instructions+=10;NFSU2_TR(0x5f05ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5f05f2:{NFSU2_TR(0x5f05f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x248ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f05f8:{NFSU2_TR(0x5f05f8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x11cull))));
}
B5f05fe:{NFSU2_TR(0x5f05fe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f05ff:{NFSU2_TR(0x5f05ff);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f0603:{NFSU2_TR(0x5f0603);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5f0605:{NFSU2_TR(0x5f0605);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0606:{NFSU2_TR(0x5f0606);
__builtin_memmove((R+4),(R+12),4);
}
B5f0608:{NFSU2_TR(0x5f0608);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f060c:{NFSU2_TR(0x5f060c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f0611ull));
TAIL_STATIC(0x581d90u,581);
}
B5f0611:L5f0611:{c.instructions+=4;NFSU2_TR(0x5f0611);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f0615:{NFSU2_TR(0x5f0615);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0616:{NFSU2_TR(0x5f0616);
__builtin_memmove((R+4),(R+24),4);
}
B5f0618:{NFSU2_TR(0x5f0618);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f061dull));
TAIL_STATIC(0x582160u,582);
}
B5f061d:L5f061d:{c.instructions+=3;NFSU2_TR(0x5f061d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f061f:{NFSU2_TR(0x5f061f);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f0623:{NFSU2_TR(0x5f0623);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f0641;}}
}
B5f0625:L5f0625:{c.instructions+=3;NFSU2_TR(0x5f0625);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0626:{NFSU2_TR(0x5f0626);
__builtin_memmove((R+4),(R+20),4);
}
B5f0628:{NFSU2_TR(0x5f0628);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f062dull));
TAIL_STATIC(0x637040u,637);
}
B5f062d:L5f062d:{c.instructions+=7;NFSU2_TR(0x5f062d);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f0631:{NFSU2_TR(0x5f0631);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f0632:{NFSU2_TR(0x5f0632);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f0633:{NFSU2_TR(0x5f0633);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f0634:{NFSU2_TR(0x5f0634);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f0635:{NFSU2_TR(0x5f0635);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x44ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x44ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f0638:{NFSU2_TR(0x5f0638);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f063b:L5f063b:{c.instructions+=2;NFSU2_TR(0x5f063b);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f063f:{NFSU2_TR(0x5f063f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5f0641:L5f0641:{c.instructions+=1;NFSU2_TR(0x5f0641);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5f069c;}}
}
B5f0643:L5f0643:{c.instructions+=9;NFSU2_TR(0x5f0643);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5f0647:{NFSU2_TR(0x5f0647);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f064d:{NFSU2_TR(0x5f064d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x3a4ull))));
}
B5f0653:{NFSU2_TR(0x5f0653);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0654:{NFSU2_TR(0x5f0654);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f0658:{NFSU2_TR(0x5f0658);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0659:{NFSU2_TR(0x5f0659);
__builtin_memmove((R+4),(R+12),4);
}
B5f065b:{NFSU2_TR(0x5f065b);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f0663:{NFSU2_TR(0x5f0663);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f0668ull));
TAIL_STATIC(0x581d90u,581);
}
B5f0668:L5f0668:{c.instructions+=4;NFSU2_TR(0x5f0668);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f066c:{NFSU2_TR(0x5f066c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f066d:{NFSU2_TR(0x5f066d);
__builtin_memmove((R+4),(R+24),4);
}
B5f066f:{NFSU2_TR(0x5f066f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f0674ull));
TAIL_STATIC(0x582160u,582);
}
B5f0674:L5f0674:{c.instructions+=2;NFSU2_TR(0x5f0674);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x3e80ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x3e80ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5f0679:{NFSU2_TR(0x5f0679);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5f0693;}}
}
B5f067b:L5f067b:{c.instructions+=3;NFSU2_TR(0x5f067b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f067c:{NFSU2_TR(0x5f067c);
w4(R+4,u32(0x8a2b68ull));
}
B5f0681:{NFSU2_TR(0x5f0681);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f0686ull));
TAIL_STATIC(0x61b630u,61b);
}
B5f0686:L5f0686:{c.instructions+=2;NFSU2_TR(0x5f0686);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f0688:{NFSU2_TR(0x5f0688);
if(r1(R+518)){{goto L5f0693;}}
}
B5f068a:L5f068a:{c.instructions+=4;NFSU2_TR(0x5f068a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f068b:{NFSU2_TR(0x5f068b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f068c:{NFSU2_TR(0x5f068c);
__builtin_memmove((R+4),(R+20),4);
}
B5f068e:{NFSU2_TR(0x5f068e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f0693ull));
TAIL_STATIC(0x631d20u,631);
}
B5f0693:L5f0693:{c.instructions+=3;NFSU2_TR(0x5f0693);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5f0694:{NFSU2_TR(0x5f0694);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5f069a:{NFSU2_TR(0x5f069a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f063bu);}goto L5f063b;}}
}
B5f069c:L5f069c:{c.instructions+=7;NFSU2_TR(0x5f069c);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f06a0:{NFSU2_TR(0x5f06a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f06a1:{NFSU2_TR(0x5f06a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f06a2:{NFSU2_TR(0x5f06a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f06a3:{NFSU2_TR(0x5f06a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f06a4:{NFSU2_TR(0x5f06a4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x44ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x44ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f06a7:{NFSU2_TR(0x5f06a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f06b0:L5f06b0:{c.instructions+=6;NFSU2_TR(0x5f06b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x410ull))));
}
B5f06b6:{NFSU2_TR(0x5f06b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f06b7:{NFSU2_TR(0x5f06b7);
__builtin_memmove((R+24),(R+4),4);
}
B5f06b9:{NFSU2_TR(0x5f06b9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5f06bc:{NFSU2_TR(0x5f06bc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f06be:{NFSU2_TR(0x5f06be);
if(r1(R+518)){{goto L5f0720;}}
}
B5f06c0:L5f06c0:{c.instructions+=2;NFSU2_TR(0x5f06c0);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f06c4:{NFSU2_TR(0x5f06c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f06c9ull));
TAIL_STATIC(0x583fc0u,583);
}
B5f06c9:L5f06c9:{c.instructions+=5;NFSU2_TR(0x5f06c9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5f06cd:{NFSU2_TR(0x5f06cd);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f06cf:{NFSU2_TR(0x5f06cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f06d0:{NFSU2_TR(0x5f06d0);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f06d4:{NFSU2_TR(0x5f06d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f06d9ull));
TAIL_STATIC(0x581d00u,581);
}
B5f06d9:L5f06d9:{c.instructions+=9;NFSU2_TR(0x5f06d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x89cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f06df:{NFSU2_TR(0x5f06df);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5f06e5:{NFSU2_TR(0x5f06e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x770ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f06eb:{NFSU2_TR(0x5f06eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f06ec:{NFSU2_TR(0x5f06ec);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f06f2:{NFSU2_TR(0x5f06f2);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f06f6:{NFSU2_TR(0x5f06f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f06fa:{NFSU2_TR(0x5f06fa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f06fb:{NFSU2_TR(0x5f06fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f0700ull));
TAIL_STATIC(0x581fe0u,581);
}
B5f0700:L5f0700:{c.instructions+=3;NFSU2_TR(0x5f0700);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0701:{NFSU2_TR(0x5f0701);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f0705:{NFSU2_TR(0x5f0705);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f070aull));
TAIL_STATIC(0x581d00u,581);
}
B5f070a:L5f070a:{c.instructions+=1;NFSU2_TR(0x5f070a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f070full));
TAIL_STATIC(0x5838a0u,583);
}
B5f070f:L5f070f:{c.instructions+=2;NFSU2_TR(0x5f070f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f0711:{NFSU2_TR(0x5f0711);
if(r1(R+518)){{goto L5f0720;}}
}
B5f0713:L5f0713:{c.instructions+=3;NFSU2_TR(0x5f0713);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f0717:{NFSU2_TR(0x5f0717);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0718:{NFSU2_TR(0x5f0718);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f071dull));
TAIL_STATIC(0x58c2f0u,58c);
}
B5f071d:L5f071d:{c.instructions+=1;NFSU2_TR(0x5f071d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f0720:L5f0720:{c.instructions+=3;NFSU2_TR(0x5f0720);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f0721:{NFSU2_TR(0x5f0721);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x410ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x410ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x410ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f0727:{NFSU2_TR(0x5f0727);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f0730:L5f0730:{c.instructions+=6;NFSU2_TR(0x5f0730);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0731:{NFSU2_TR(0x5f0731);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5f0735:{NFSU2_TR(0x5f0735);
__builtin_memmove((R+0),(R+4),4);
}
B5f0737:{NFSU2_TR(0x5f0737);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0738:{NFSU2_TR(0x5f0738);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f073b:{NFSU2_TR(0x5f073b);
w4(R+4,u32(0x18ull));
}
B5f0740:L5f0740:{c.instructions+=1;NFSU2_TR(0x5f0740);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5f0742;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f0740u);}goto L5f0740;}
}
B5f0742:L5f0742:{c.instructions+=6;NFSU2_TR(0x5f0742);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
w1(R+519,u8(s8(r1(R+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f0744:{NFSU2_TR(0x5f0744);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f0745:{NFSU2_TR(0x5f0745);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11aull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f074b:{NFSU2_TR(0x5f074b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11bull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f0751:{NFSU2_TR(0x5f0751);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f0752:{NFSU2_TR(0x5f0752);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f0760:L5f0760:{c.instructions+=10;NFSU2_TR(0x5f0760);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5f0763:{NFSU2_TR(0x5f0763);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0764:{NFSU2_TR(0x5f0764);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0765:{NFSU2_TR(0x5f0765);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5f0768:{NFSU2_TR(0x5f0768);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0769:{NFSU2_TR(0x5f0769);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f076a:{NFSU2_TR(0x5f076a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f076e:{NFSU2_TR(0x5f076e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5f0770:{NFSU2_TR(0x5f0770);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f0774:{NFSU2_TR(0x5f0774);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f0778:L5f0778:{c.instructions+=2;NFSU2_TR(0x5f0778);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B5f077b:{NFSU2_TR(0x5f077b);
if(r1(R+518)){{goto L5f07ae;}}
}
B5f077d:L5f077d:{c.instructions+=2;NFSU2_TR(0x5f077d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f0780:{NFSU2_TR(0x5f0780);
w4(R+28,u32(0x6ull));
}
B5f0785:L5f0785:{c.instructions+=3;NFSU2_TR(0x5f0785);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5f0788:{NFSU2_TR(0x5f0788);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f078a:{NFSU2_TR(0x5f078a);
if(r1(R+518)){{goto L5f07a4;}}
}
B5f078c:L5f078c:{c.instructions+=5;NFSU2_TR(0x5f078c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f0790:{NFSU2_TR(0x5f0790);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5f0793:{NFSU2_TR(0x5f0793);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0794:{NFSU2_TR(0x5f0794);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0795:{NFSU2_TR(0x5f0795);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f079aull));
TAIL_STATIC(0x43dcc0u,43d);
}
B5f079a:L5f079a:{c.instructions+=3;NFSU2_TR(0x5f079a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5f079d:{NFSU2_TR(0x5f079d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f079f:{NFSU2_TR(0x5f079f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f07a4;}}
}
B5f07a1:L5f07a1:{c.instructions+=1;NFSU2_TR(0x5f07a1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f07a4:L5f07a4:{c.instructions+=3;NFSU2_TR(0x5f07a4);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B5f07a7:{NFSU2_TR(0x5f07a7);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B5f07a8:{NFSU2_TR(0x5f07a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f0785u);}goto L5f0785;}}
}
B5f07aa:L5f07aa:{c.instructions+=1;NFSU2_TR(0x5f07aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f07ae:L5f07ae:{c.instructions+=6;NFSU2_TR(0x5f07ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f07b2:{NFSU2_TR(0x5f07b2);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5f07b3:{NFSU2_TR(0x5f07b3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B5f07b6:{NFSU2_TR(0x5f07b6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5f07b9:{NFSU2_TR(0x5f07b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f07bd:{NFSU2_TR(0x5f07bd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f0778u);}goto L5f0778;}}
}
B5f07bf:L5f07bf:{c.instructions+=3;NFSU2_TR(0x5f07bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f07c3:{NFSU2_TR(0x5f07c3);
w4(R+4,u32(0x18ull));
}
B5f07c8:{NFSU2_TR(0x5f07c8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f07ca:L5f07ca:{c.instructions+=1;NFSU2_TR(0x5f07ca);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5f07cc;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f07cau);}goto L5f07ca;}
}
B5f07cc:L5f07cc:{c.instructions+=6;NFSU2_TR(0x5f07cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f07cd:{NFSU2_TR(0x5f07cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f07ce:{NFSU2_TR(0x5f07ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f07cf:{NFSU2_TR(0x5f07cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f07d0:{NFSU2_TR(0x5f07d0);
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
B5f07d3:{NFSU2_TR(0x5f07d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f07e0:L5f07e0:{c.instructions+=4;NFSU2_TR(0x5f07e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f07e4:{NFSU2_TR(0x5f07e4);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5f07e8:{NFSU2_TR(0x5f07e8);
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
B5f07ea:{NFSU2_TR(0x5f07ea);
if(r1(R+518)){{goto L5f07f7;}}
}
B5f07ec:L5f07ec:{c.instructions+=2;NFSU2_TR(0x5f07ec);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x1ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5f07ef:{NFSU2_TR(0x5f07ef);
if(r1(R+518)){{goto L5f07f7;}}
}
B5f07f1:L5f07f1:{c.instructions+=1;NFSU2_TR(0x5f07f1);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5f07f7:L5f07f7:{c.instructions+=1;NFSU2_TR(0x5f07f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f0800:L5f0800:{c.instructions+=11;NFSU2_TR(0x5f0800);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0801:{NFSU2_TR(0x5f0801);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0802:{NFSU2_TR(0x5f0802);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0803:{NFSU2_TR(0x5f0803);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f0807:{NFSU2_TR(0x5f0807);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0809:{NFSU2_TR(0x5f0809);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f080d:{NFSU2_TR(0x5f080d);
__builtin_memmove((R+24),(R+4),4);
}
B5f080f:{NFSU2_TR(0x5f080f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0810:{NFSU2_TR(0x5f0810);
__builtin_memmove((R+4),(R+28),4);
}
B5f0812:{NFSU2_TR(0x5f0812);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f081a:{NFSU2_TR(0x5f081a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f081full));
TAIL_STATIC(0x581d90u,581);
}
B5f081f:L5f081f:{c.instructions+=6;NFSU2_TR(0x5f081f);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0821:{NFSU2_TR(0x5f0821);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f0825:{NFSU2_TR(0x5f0825);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0826:{NFSU2_TR(0x5f0826);
__builtin_memmove((R+4),(R+28),4);
}
B5f0828:{NFSU2_TR(0x5f0828);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f0830:{NFSU2_TR(0x5f0830);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f0835ull));
TAIL_STATIC(0x581d90u,581);
}
B5f0835:L5f0835:{c.instructions+=5;NFSU2_TR(0x5f0835);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5f0839:{NFSU2_TR(0x5f0839);
w4(R+0,u32(s32(s8(r1(R+8)))));
}
B5f083c:{NFSU2_TR(0x5f083c);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5f0840:{NFSU2_TR(0x5f0840);
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
B5f0842:{NFSU2_TR(0x5f0842);
if(r1(R+518)){{goto L5f0870;}}
}
B5f0844:L5f0844:{c.instructions+=11;NFSU2_TR(0x5f0844);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5f084b:{NFSU2_TR(0x5f084b);
u8 U[12];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5f0852:{NFSU2_TR(0x5f0852);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f0856:{NFSU2_TR(0x5f0856);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0857:{NFSU2_TR(0x5f0857);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5f085d:{NFSU2_TR(0x5f085d);
__builtin_memmove((R+28),(R+4),4);
}
B5f085f:{NFSU2_TR(0x5f085f);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+12))));
}
B5f0861:{NFSU2_TR(0x5f0861);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+512,carry<u32>(r4(U+0),r4(R+28)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+523,scarry<u32>(r4(U+0),r4(R+28)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+28))));
s4(u32(r4(R+0)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5f0863:{NFSU2_TR(0x5f0863);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f0869:{NFSU2_TR(0x5f0869);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f086f:{NFSU2_TR(0x5f086f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f0870:L5f0870:{c.instructions+=4;NFSU2_TR(0x5f0870);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f0871:{NFSU2_TR(0x5f0871);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f0872:{NFSU2_TR(0x5f0872);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f0873:{NFSU2_TR(0x5f0873);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f0880:L5f0880:{c.instructions+=4;NFSU2_TR(0x5f0880);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0881:{NFSU2_TR(0x5f0881);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f0883:{NFSU2_TR(0x5f0883);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f0886:{NFSU2_TR(0x5f0886);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f08e1;}}
}
B5f0888:L5f0888:{c.instructions+=4;NFSU2_TR(0x5f0888);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f088b:{NFSU2_TR(0x5f088b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f088d:{NFSU2_TR(0x5f088d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f0890:{NFSU2_TR(0x5f0890);
if(r1(R+518)){{goto L5f08a0;}}
}
B5f0892:L5f0892:{c.instructions+=2;NFSU2_TR(0x5f0892);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f0895:{NFSU2_TR(0x5f0895);
if(r1(R+518)){{goto L5f08a0;}}
}
B5f0897:L5f0897:{c.instructions+=2;NFSU2_TR(0x5f0897);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f0899:{NFSU2_TR(0x5f0899);
if(r1(R+518)){{goto L5f08a0;}}
}
B5f089b:L5f089b:{c.instructions+=2;NFSU2_TR(0x5f089b);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5f089e:{NFSU2_TR(0x5f089e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f08d6;}}
}
B5f08a0:L5f08a0:{c.instructions+=2;NFSU2_TR(0x5f08a0);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x6ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5f08a3:{NFSU2_TR(0x5f08a3);
if(r1(R+518)){{goto L5f08d6;}}
}
B5f08a5:L5f08a5:{c.instructions+=3;NFSU2_TR(0x5f08a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f08a8:{NFSU2_TR(0x5f08a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f08aa:{NFSU2_TR(0x5f08aa);
if(r1(R+518)){{goto L5f08dd;}}
}
B5f08ac:L5f08ac:{c.instructions+=2;NFSU2_TR(0x5f08ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f08b1:{NFSU2_TR(0x5f08b1);
if(r1(R+518)){{goto L5f08dd;}}
}
B5f08b3:L5f08b3:{c.instructions+=9;NFSU2_TR(0x5f08b3);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B5f08b8:{NFSU2_TR(0x5f08b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B5f08bb:{NFSU2_TR(0x5f08bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5f08bf:{NFSU2_TR(0x5f08bf);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5f08c3:{NFSU2_TR(0x5f08c3);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f08c9:{NFSU2_TR(0x5f08c9);
{u32 ea_=u32(u32(8017664u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f08cf:{NFSU2_TR(0x5f08cf);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f08d1:{NFSU2_TR(0x5f08d1);
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
B5f08d4:{NFSU2_TR(0x5f08d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f08dd;}}
}
B5f08d6:L5f08d6:{c.instructions+=3;NFSU2_TR(0x5f08d6);
w4(R+0,u32(0x1ull));
}
B5f08db:{NFSU2_TR(0x5f08db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f08dc:{NFSU2_TR(0x5f08dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f08dd:L5f08dd:{c.instructions+=3;NFSU2_TR(0x5f08dd);
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
B5f08df:{NFSU2_TR(0x5f08df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f08e0:{NFSU2_TR(0x5f08e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f08e1:L5f08e1:{c.instructions+=6;NFSU2_TR(0x5f08e1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5f08e3:{NFSU2_TR(0x5f08e3);
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
B5f08e5:{NFSU2_TR(0x5f08e5);
__builtin_memmove((R+4),(R+518),1);
}
B5f08e8:{NFSU2_TR(0x5f08e8);
__builtin_memmove((R+0),(R+4),4);
}
B5f08ea:{NFSU2_TR(0x5f08ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f08eb:{NFSU2_TR(0x5f08eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f08f0:L5f08f0:{c.instructions+=5;NFSU2_TR(0x5f08f0);
__builtin_memmove((R+0),gp(0x89011c),4);
}
B5f08f5:{NFSU2_TR(0x5f08f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f08f6:{NFSU2_TR(0x5f08f6);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5f08f8:{NFSU2_TR(0x5f08f8);
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
B5f08fa:{NFSU2_TR(0x5f08fa);
if(r1(R+518)){{goto L5f092b;}}
}
B5f08fc:L5f08fc:{c.instructions+=3;NFSU2_TR(0x5f08fc);
__builtin_memmove((R+0),gp(0x890124),4);
}
B5f0901:{NFSU2_TR(0x5f0901);
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
B5f0903:{NFSU2_TR(0x5f0903);
if(r1(R+518)){{goto L5f0907;}}
}
B5f0905:L5f0905:{c.instructions+=1;NFSU2_TR(0x5f0905);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f0907ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5f0907:L5f0907:{c.instructions+=3;NFSU2_TR(0x5f0907);
__builtin_memmove((R+0),gp(0x89011c),4);
}
B5f090c:{NFSU2_TR(0x5f090c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f090d:{NFSU2_TR(0x5f090d);
u8 U[4];
__builtin_memmove((U+0),gp(0x783190),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f0913ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5f0913:L5f0913:{c.instructions+=4;NFSU2_TR(0x5f0913);
__builtin_memmove(gp(0x89011c),(R+24),4);
}
B5f0919:{NFSU2_TR(0x5f0919);
__builtin_memmove(gp(0x890120),(R+24),4);
}
B5f091f:{NFSU2_TR(0x5f091f);
__builtin_memmove(gp(0x890124),(R+24),4);
}
B5f0925:{NFSU2_TR(0x5f0925);
__builtin_memmove(gp(0x890128),(R+24),4);
}
B5f092b:L5f092b:{c.instructions+=2;NFSU2_TR(0x5f092b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f092c:{NFSU2_TR(0x5f092c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f0930:L5f0930:{c.instructions+=16;NFSU2_TR(0x5f0930);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B5f0933:{NFSU2_TR(0x5f0933);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f0936:{NFSU2_TR(0x5f0936);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f093a:{NFSU2_TR(0x5f093a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f093d:{NFSU2_TR(0x5f093d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f0941:{NFSU2_TR(0x5f0941);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f0944:{NFSU2_TR(0x5f0944);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f0948:{NFSU2_TR(0x5f0948);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f094c:{NFSU2_TR(0x5f094c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f094f:{NFSU2_TR(0x5f094f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f0952:{NFSU2_TR(0x5f0952);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f0956:{NFSU2_TR(0x5f0956);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f0958:{NFSU2_TR(0x5f0958);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f095c:{NFSU2_TR(0x5f095c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5f095e:{NFSU2_TR(0x5f095e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f0961:{NFSU2_TR(0x5f0961);
if(r1(R+514)){{goto L5f0998;}}
}
B5f0963:L5f0963:{c.instructions+=5;NFSU2_TR(0x5f0963);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f0967:{NFSU2_TR(0x5f0967);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f096b:{NFSU2_TR(0x5f096b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f096d:{NFSU2_TR(0x5f096d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f0970:{NFSU2_TR(0x5f0970);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f0998;}}
}
B5f0972:L5f0972:{c.instructions+=5;NFSU2_TR(0x5f0972);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f0976:{NFSU2_TR(0x5f0976);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f097a:{NFSU2_TR(0x5f097a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f097c:{NFSU2_TR(0x5f097c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f097f:{NFSU2_TR(0x5f097f);
if(r1(R+514)){{goto L5f0998;}}
}
B5f0981:L5f0981:{c.instructions+=5;NFSU2_TR(0x5f0981);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f0985:{NFSU2_TR(0x5f0985);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f0989:{NFSU2_TR(0x5f0989);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f098b:{NFSU2_TR(0x5f098b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f098e:{NFSU2_TR(0x5f098e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f0998;}}
}
B5f0990:L5f0990:{c.instructions+=3;NFSU2_TR(0x5f0990);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f0992:{NFSU2_TR(0x5f0992);
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
B5f0995:{NFSU2_TR(0x5f0995);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f0998:L5f0998:{c.instructions+=3;NFSU2_TR(0x5f0998);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f099b:{NFSU2_TR(0x5f099b);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B5f099e:{NFSU2_TR(0x5f099e);
if(r1(R+518)){{goto L5f0a1c;}}
}
B5f09a0:L5f09a0:{c.instructions+=15;NFSU2_TR(0x5f09a0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f09a4:{NFSU2_TR(0x5f09a4);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f09a8:{NFSU2_TR(0x5f09a8);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f09ae:{NFSU2_TR(0x5f09ae);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f09b2:{NFSU2_TR(0x5f09b2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f09b6:{NFSU2_TR(0x5f09b6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f09bc:{NFSU2_TR(0x5f09bc);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f09c0:{NFSU2_TR(0x5f09c0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f09c4:{NFSU2_TR(0x5f09c4);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5f09c6:{NFSU2_TR(0x5f09c6);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f09ca:{NFSU2_TR(0x5f09ca);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f09cc:{NFSU2_TR(0x5f09cc);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f09d0:{NFSU2_TR(0x5f09d0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f09d3:{NFSU2_TR(0x5f09d3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f09d5:{NFSU2_TR(0x5f09d5);
if(r1(R+514)){{goto L5f09f5;}}
}
B5f09d7:L5f09d7:{c.instructions+=4;NFSU2_TR(0x5f09d7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f09da:{NFSU2_TR(0x5f09da);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f09de:{NFSU2_TR(0x5f09de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f09e2:{NFSU2_TR(0x5f09e2);
if(r1(R+514)){{goto L5f09ee;}}
}
B5f09e4:L5f09e4:{c.instructions+=3;NFSU2_TR(0x5f09e4);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+8,u32(r1(U+8)));
}
B5f09e8:{NFSU2_TR(0x5f09e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f09ec:{NFSU2_TR(0x5f09ec);
{goto L5f0a16;}
}
B5f09ee:L5f09ee:{c.instructions+=2;NFSU2_TR(0x5f09ee);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(r1(U+12)));
}
B5f09f3:{NFSU2_TR(0x5f09f3);
{goto L5f0a12;}
}
B5f09f5:L5f09f5:{c.instructions+=4;NFSU2_TR(0x5f09f5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f09f8:{NFSU2_TR(0x5f09f8);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f09fc:{NFSU2_TR(0x5f09fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f0a00:{NFSU2_TR(0x5f0a00);
if(r1(R+514)){{goto L5f0a0d;}}
}
B5f0a02:L5f0a02:{c.instructions+=3;NFSU2_TR(0x5f0a02);
u8 U[13];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(r1(U+12)));
}
B5f0a07:{NFSU2_TR(0x5f0a07);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f0a0b:{NFSU2_TR(0x5f0a0b);
{goto L5f0a16;}
}
B5f0a0d:L5f0a0d:{c.instructions+=1;NFSU2_TR(0x5f0a0d);
u8 U[13];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(r1(U+12)));
}
B5f0a12:L5f0a12:{c.instructions+=1;NFSU2_TR(0x5f0a12);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f0a16:L5f0a16:{c.instructions+=2;NFSU2_TR(0x5f0a16);
u8 U[11];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+9),(U+8),1);
w1(U+10,u8(u32(r1(U+9))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+10))==(u8(0x0ull))));
}
B5f0a1a:{NFSU2_TR(0x5f0a1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f09a0u);}goto L5f09a0;}}
}
B5f0a1c:L5f0a1c:{c.instructions+=3;NFSU2_TR(0x5f0a1c);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B5f0a21:{NFSU2_TR(0x5f0a21);
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
B5f0a24:{NFSU2_TR(0x5f0a24);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f0a30:L5f0a30:{c.instructions+=16;NFSU2_TR(0x5f0a30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B5f0a33:{NFSU2_TR(0x5f0a33);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f0a36:{NFSU2_TR(0x5f0a36);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f0a3a:{NFSU2_TR(0x5f0a3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f0a3d:{NFSU2_TR(0x5f0a3d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f0a41:{NFSU2_TR(0x5f0a41);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f0a44:{NFSU2_TR(0x5f0a44);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f0a48:{NFSU2_TR(0x5f0a48);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f0a4c:{NFSU2_TR(0x5f0a4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f0a4f:{NFSU2_TR(0x5f0a4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f0a52:{NFSU2_TR(0x5f0a52);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f0a56:{NFSU2_TR(0x5f0a56);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f0a58:{NFSU2_TR(0x5f0a58);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f0a5c:{NFSU2_TR(0x5f0a5c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5f0a5e:{NFSU2_TR(0x5f0a5e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f0a61:{NFSU2_TR(0x5f0a61);
if(r1(R+514)){{goto L5f0a98;}}
}
B5f0a63:L5f0a63:{c.instructions+=5;NFSU2_TR(0x5f0a63);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f0a67:{NFSU2_TR(0x5f0a67);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f0a6b:{NFSU2_TR(0x5f0a6b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f0a6d:{NFSU2_TR(0x5f0a6d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f0a70:{NFSU2_TR(0x5f0a70);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f0a98;}}
}
B5f0a72:L5f0a72:{c.instructions+=5;NFSU2_TR(0x5f0a72);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f0a76:{NFSU2_TR(0x5f0a76);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f0a7a:{NFSU2_TR(0x5f0a7a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f0a7c:{NFSU2_TR(0x5f0a7c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f0a7f:{NFSU2_TR(0x5f0a7f);
if(r1(R+514)){{goto L5f0a98;}}
}
B5f0a81:L5f0a81:{c.instructions+=5;NFSU2_TR(0x5f0a81);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f0a85:{NFSU2_TR(0x5f0a85);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f0a89:{NFSU2_TR(0x5f0a89);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f0a8b:{NFSU2_TR(0x5f0a8b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f0a8e:{NFSU2_TR(0x5f0a8e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f0a98;}}
}
B5f0a90:L5f0a90:{c.instructions+=3;NFSU2_TR(0x5f0a90);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f0a92:{NFSU2_TR(0x5f0a92);
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
B5f0a95:{NFSU2_TR(0x5f0a95);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f0a98:L5f0a98:{c.instructions+=3;NFSU2_TR(0x5f0a98);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f0a9b:{NFSU2_TR(0x5f0a9b);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B5f0a9f:{NFSU2_TR(0x5f0a9f);
if(r1(R+518)){{goto L5f0b1e;}}
}
B5f0aa1:L5f0aa1:{c.instructions+=15;NFSU2_TR(0x5f0aa1);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f0aa5:{NFSU2_TR(0x5f0aa5);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f0aa9:{NFSU2_TR(0x5f0aa9);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f0aaf:{NFSU2_TR(0x5f0aaf);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f0ab3:{NFSU2_TR(0x5f0ab3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f0ab7:{NFSU2_TR(0x5f0ab7);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f0abd:{NFSU2_TR(0x5f0abd);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f0ac1:{NFSU2_TR(0x5f0ac1);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f0ac5:{NFSU2_TR(0x5f0ac5);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5f0ac7:{NFSU2_TR(0x5f0ac7);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f0acb:{NFSU2_TR(0x5f0acb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f0acd:{NFSU2_TR(0x5f0acd);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f0ad1:{NFSU2_TR(0x5f0ad1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f0ad4:{NFSU2_TR(0x5f0ad4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f0ad6:{NFSU2_TR(0x5f0ad6);
if(r1(R+514)){{goto L5f0af6;}}
}
B5f0ad8:L5f0ad8:{c.instructions+=4;NFSU2_TR(0x5f0ad8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f0adb:{NFSU2_TR(0x5f0adb);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f0adf:{NFSU2_TR(0x5f0adf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f0ae3:{NFSU2_TR(0x5f0ae3);
if(r1(R+514)){{goto L5f0aef;}}
}
B5f0ae5:L5f0ae5:{c.instructions+=3;NFSU2_TR(0x5f0ae5);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+8,u32(r2(U+8)));
}
B5f0ae9:{NFSU2_TR(0x5f0ae9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f0aed:{NFSU2_TR(0x5f0aed);
{goto L5f0b17;}
}
B5f0aef:L5f0aef:{c.instructions+=2;NFSU2_TR(0x5f0aef);
u8 U[14];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+8,u32(r2(U+12)));
}
B5f0af4:{NFSU2_TR(0x5f0af4);
{goto L5f0b13;}
}
B5f0af6:L5f0af6:{c.instructions+=4;NFSU2_TR(0x5f0af6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f0af9:{NFSU2_TR(0x5f0af9);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f0afd:{NFSU2_TR(0x5f0afd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f0b01:{NFSU2_TR(0x5f0b01);
if(r1(R+514)){{goto L5f0b0e;}}
}
B5f0b03:L5f0b03:{c.instructions+=3;NFSU2_TR(0x5f0b03);
u8 U[14];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+8,u32(r2(U+12)));
}
B5f0b08:{NFSU2_TR(0x5f0b08);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f0b0c:{NFSU2_TR(0x5f0b0c);
{goto L5f0b17;}
}
B5f0b0e:L5f0b0e:{c.instructions+=1;NFSU2_TR(0x5f0b0e);
u8 U[14];
w4(U+0,u32(u32(u32(0x6ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+8,u32(r2(U+12)));
}
B5f0b13:L5f0b13:{c.instructions+=1;NFSU2_TR(0x5f0b13);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f0b17:L5f0b17:{c.instructions+=2;NFSU2_TR(0x5f0b17);
u8 U[14];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((U+10),(U+8),2);
w2(U+12,u16(u32(r2(U+10))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
}
B5f0b1c:{NFSU2_TR(0x5f0b1c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f0aa1u);}goto L5f0aa1;}}
}
B5f0b1e:L5f0b1e:{c.instructions+=3;NFSU2_TR(0x5f0b1e);
u8 U[14];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(r2(U+12)));
}
B5f0b23:{NFSU2_TR(0x5f0b23);
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
B5f0b26:{NFSU2_TR(0x5f0b26);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f0b30:L5f0b30:{c.instructions+=2;NFSU2_TR(0x5f0b30);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f0b37:{NFSU2_TR(0x5f0b37);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f0b40:L5f0b40:{c.instructions+=3;NFSU2_TR(0x5f0b40);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f0b43:{NFSU2_TR(0x5f0b43);
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
B5f0b45:{NFSU2_TR(0x5f0b45);
if(r1(R+518)){{goto L5f0b6a;}}
}
B5f0b47:L5f0b47:{c.instructions+=3;NFSU2_TR(0x5f0b47);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f0b4a:{NFSU2_TR(0x5f0b4a);
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
B5f0b4c:{NFSU2_TR(0x5f0b4c);
if(r1(R+518)){{goto L5f0b6a;}}
}
B5f0b4e:L5f0b4e:{c.instructions+=5;NFSU2_TR(0x5f0b4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f0b51:{NFSU2_TR(0x5f0b51);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f0b55:{NFSU2_TR(0x5f0b55);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5f0b58:{NFSU2_TR(0x5f0b58);
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
B5f0b5a:{NFSU2_TR(0x5f0b5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f0b65;}}
}
B5f0b5c:L5f0b5c:{c.instructions+=2;NFSU2_TR(0x5f0b5c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f0b62:{NFSU2_TR(0x5f0b62);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f0b65:L5f0b65:{c.instructions+=2;NFSU2_TR(0x5f0b65);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f0b67:{NFSU2_TR(0x5f0b67);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f0b6a:L5f0b6a:{c.instructions+=2;NFSU2_TR(0x5f0b6a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f0b70:{NFSU2_TR(0x5f0b70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f0b80:L5f0b80:{c.instructions+=3;NFSU2_TR(0x5f0b80);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f0b83:{NFSU2_TR(0x5f0b83);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f0b85:{NFSU2_TR(0x5f0b85);
if(r1(R+518)){{goto L5f0ba1;}}
}
B5f0b87:L5f0b87:{c.instructions+=3;NFSU2_TR(0x5f0b87);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f0b8a:{NFSU2_TR(0x5f0b8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f0b8c:{NFSU2_TR(0x5f0b8c);
if(r1(R+518)){{goto L5f0ba1;}}
}
B5f0b8e:L5f0b8e:{c.instructions+=5;NFSU2_TR(0x5f0b8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f0b91:{NFSU2_TR(0x5f0b91);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f0b95:{NFSU2_TR(0x5f0b95);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5f0b98:{NFSU2_TR(0x5f0b98);
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
B5f0b9a:{NFSU2_TR(0x5f0b9a);
if(r1(R+518)){{goto L5f0ba1;}}
}
B5f0b9c:L5f0b9c:{c.instructions+=2;NFSU2_TR(0x5f0b9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f0b9e:{NFSU2_TR(0x5f0b9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f0ba1:L5f0ba1:{c.instructions+=2;NFSU2_TR(0x5f0ba1);
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
B5f0ba3:{NFSU2_TR(0x5f0ba3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f0bb0:L5f0bb0:{c.instructions+=7;NFSU2_TR(0x5f0bb0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0bb1:{NFSU2_TR(0x5f0bb1);
__builtin_memmove((R+24),(R+4),4);
}
B5f0bb3:{NFSU2_TR(0x5f0bb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f0bb6:{NFSU2_TR(0x5f0bb6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0bb7:{NFSU2_TR(0x5f0bb7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5f0bb9:{NFSU2_TR(0x5f0bb9);
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
B5f0bbb:{NFSU2_TR(0x5f0bbb);
if(r1(R+518)){{goto L5f0bc9;}}
}
B5f0bbd:L5f0bbd:{c.instructions+=2;NFSU2_TR(0x5f0bbd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0bbe:{NFSU2_TR(0x5f0bbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f0bc3ull));
TAIL_STATIC(0x575630u,575);
}
B5f0bc3:L5f0bc3:{c.instructions+=2;NFSU2_TR(0x5f0bc3);
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
B5f0bc6:{NFSU2_TR(0x5f0bc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f0bc9:L5f0bc9:{c.instructions+=5;NFSU2_TR(0x5f0bc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f0bcc:{NFSU2_TR(0x5f0bcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f0bcf:{NFSU2_TR(0x5f0bcf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f0bd0:{NFSU2_TR(0x5f0bd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f0bd1:{NFSU2_TR(0x5f0bd1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f0be0:L5f0be0:{c.instructions+=5;NFSU2_TR(0x5f0be0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0be1:{NFSU2_TR(0x5f0be1);
__builtin_memmove((R+24),(R+4),4);
}
B5f0be3:{NFSU2_TR(0x5f0be3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f0be6:{NFSU2_TR(0x5f0be6);
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
B5f0be8:{NFSU2_TR(0x5f0be8);
if(r1(R+518)){{goto L5f0c04;}}
}
B5f0bea:L5f0bea:{c.instructions+=3;NFSU2_TR(0x5f0bea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f0bed:{NFSU2_TR(0x5f0bed);
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
B5f0bef:{NFSU2_TR(0x5f0bef);
if(r1(R+518)){{goto L5f0c04;}}
}
B5f0bf1:L5f0bf1:{c.instructions+=3;NFSU2_TR(0x5f0bf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f0bf4:{NFSU2_TR(0x5f0bf4);
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
B5f0bf6:{NFSU2_TR(0x5f0bf6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5f0c04;}}
}
B5f0bf8:L5f0bf8:{c.instructions+=2;NFSU2_TR(0x5f0bf8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0bf9:{NFSU2_TR(0x5f0bf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f0bfeull));
TAIL_STATIC(0x575620u,575);
}
B5f0bfe:L5f0bfe:{c.instructions+=2;NFSU2_TR(0x5f0bfe);
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
B5f0c01:{NFSU2_TR(0x5f0c01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f0c04:L5f0c04:{c.instructions+=2;NFSU2_TR(0x5f0c04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f0c05:{NFSU2_TR(0x5f0c05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f0c10:L5f0c10:{c.instructions+=9;NFSU2_TR(0x5f0c10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0c11:{NFSU2_TR(0x5f0c11);
__builtin_memmove((R+24),(R+4),4);
}
B5f0c13:{NFSU2_TR(0x5f0c13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f0c16:{NFSU2_TR(0x5f0c16);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5f0c18:{NFSU2_TR(0x5f0c18);
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
B5f0c1a:{NFSU2_TR(0x5f0c1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f0c1d:{NFSU2_TR(0x5f0c1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f0c20:{NFSU2_TR(0x5f0c20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f0c23:{NFSU2_TR(0x5f0c23);
if(r1(R+518)){{goto L5f0c3f;}}
}
B5f0c25:L5f0c25:{c.instructions+=3;NFSU2_TR(0x5f0c25);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f0c28:{NFSU2_TR(0x5f0c28);
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
B5f0c2a:{NFSU2_TR(0x5f0c2a);
if(r1(R+518)){{goto L5f0c3f;}}
}
B5f0c2c:L5f0c2c:{c.instructions+=3;NFSU2_TR(0x5f0c2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f0c2f:{NFSU2_TR(0x5f0c2f);
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
B5f0c31:{NFSU2_TR(0x5f0c31);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5f0c3f;}}
}
B5f0c33:L5f0c33:{c.instructions+=2;NFSU2_TR(0x5f0c33);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0c34:{NFSU2_TR(0x5f0c34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f0c39ull));
TAIL_STATIC(0x575620u,575);
}
B5f0c39:L5f0c39:{c.instructions+=2;NFSU2_TR(0x5f0c39);
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
B5f0c3c:{NFSU2_TR(0x5f0c3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f0c3f:L5f0c3f:{c.instructions+=2;NFSU2_TR(0x5f0c3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f0c40:{NFSU2_TR(0x5f0c40);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f0c50:L5f0c50:{c.instructions+=11;NFSU2_TR(0x5f0c50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f0c54:{NFSU2_TR(0x5f0c54);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f0c57:{NFSU2_TR(0x5f0c57);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f0c5a:{NFSU2_TR(0x5f0c5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f0c5e:{NFSU2_TR(0x5f0c5e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5f0c60:{NFSU2_TR(0x5f0c60);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f0c63:{NFSU2_TR(0x5f0c63);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f0c66:{NFSU2_TR(0x5f0c66);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f0c6a:{NFSU2_TR(0x5f0c6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5f0c6c:{NFSU2_TR(0x5f0c6c);
w4(R+0,u32(0x1ull));
}
B5f0c71:{NFSU2_TR(0x5f0c71);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f0c80:L5f0c80:{c.instructions+=2;NFSU2_TR(0x5f0c80);
s4(0x8022f8,u32(0x1ull));
}
B5f0c8a:{NFSU2_TR(0x5f0c8a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f0c90:L5f0c90:{c.instructions+=20;NFSU2_TR(0x5f0c90);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f0c94:{NFSU2_TR(0x5f0c94);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f0c98:{NFSU2_TR(0x5f0c98);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f0c9b:{NFSU2_TR(0x5f0c9b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f0c9d:{NFSU2_TR(0x5f0c9d);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f0ca0:{NFSU2_TR(0x5f0ca0);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f0ca3:{NFSU2_TR(0x5f0ca3);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5f0ca5:{NFSU2_TR(0x5f0ca5);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5f0ca7:{NFSU2_TR(0x5f0ca7);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5f0ca9:{NFSU2_TR(0x5f0ca9);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5f0cab:{NFSU2_TR(0x5f0cab);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f0cad:{NFSU2_TR(0x5f0cad);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5f0caf:{NFSU2_TR(0x5f0caf);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f0cb1:{NFSU2_TR(0x5f0cb1);
{u32 ea_=u32(u32(8017716u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f0cb7:{NFSU2_TR(0x5f0cb7);
{u32 ea_=u32(u32(8017716u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f0cbd:{NFSU2_TR(0x5f0cbd);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5f0cbf:{NFSU2_TR(0x5f0cbf);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5f0cc1:{NFSU2_TR(0x5f0cc1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f0cc3:{NFSU2_TR(0x5f0cc3);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f0cc6:{NFSU2_TR(0x5f0cc6);
if(r1(R+514)){{goto L5f0cf4;}}
}
B5f0cc8:L5f0cc8:{c.instructions+=4;NFSU2_TR(0x5f0cc8);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f0ccc:{NFSU2_TR(0x5f0ccc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x890020ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5f0cd3:{NFSU2_TR(0x5f0cd3);
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
B5f0cd5:{NFSU2_TR(0x5f0cd5);
if(r1(R+518)){{goto L5f0ce5;}}
}
B5f0cd7:L5f0cd7:{c.instructions+=4;NFSU2_TR(0x5f0cd7);
{u32 ea_=u32((r4(R+4)*8u)+u32(8978468u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5f0cde:{NFSU2_TR(0x5f0cde);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f0ce0:{NFSU2_TR(0x5f0ce0);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f0ce3:{NFSU2_TR(0x5f0ce3);
if(r1(R+514)){{goto L5f0cf4;}}
}
B5f0ce5:L5f0ce5:{c.instructions+=3;NFSU2_TR(0x5f0ce5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x890020ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5f0cec:{NFSU2_TR(0x5f0cec);
{u32 ea_=u32((r4(R+4)*8u)+u32(8978468u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f0cf3:{NFSU2_TR(0x5f0cf3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f0cf4:L5f0cf4:{c.instructions+=2;NFSU2_TR(0x5f0cf4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f0cf6:{NFSU2_TR(0x5f0cf6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f0d00:L5f0d00:{c.instructions+=5;NFSU2_TR(0x5f0d00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0d01:{NFSU2_TR(0x5f0d01);
__builtin_memmove((R+24),(R+4),4);
}
B5f0d03:{NFSU2_TR(0x5f0d03);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f0d06:{NFSU2_TR(0x5f0d06);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B5f0d09:{NFSU2_TR(0x5f0d09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f0d0eull));
TAIL_STATIC(0x40c910u,40c);
}
B5f0d0e:L5f0d0e:{c.instructions+=4;NFSU2_TR(0x5f0d0e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x900ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f0d15:{NFSU2_TR(0x5f0d15);
__builtin_memmove((R+0),(R+24),4);
}
B5f0d17:{NFSU2_TR(0x5f0d17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f0d18:{NFSU2_TR(0x5f0d18);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f0d20:L5f0d20:{c.instructions+=10;NFSU2_TR(0x5f0d20);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0d21:{NFSU2_TR(0x5f0d21);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0d22:{NFSU2_TR(0x5f0d22);
__builtin_memmove((R+24),(R+4),4);
}
B5f0d24:{NFSU2_TR(0x5f0d24);
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
B5f0d26:{NFSU2_TR(0x5f0d26);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0d27:{NFSU2_TR(0x5f0d27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5f0d29:{NFSU2_TR(0x5f0d29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f0d2c:{NFSU2_TR(0x5f0d2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f0d2f:{NFSU2_TR(0x5f0d2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f0d32:{NFSU2_TR(0x5f0d32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f0d37ull));
TAIL_STATIC(0x502fd0u,502);
}
B5f0d37:L5f0d37:{c.instructions+=2;NFSU2_TR(0x5f0d37);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f0d39:{NFSU2_TR(0x5f0d39);
if(r1(R+518)){{goto L5f0d58;}}
}
B5f0d3b:L5f0d3b:{c.instructions+=1;NFSU2_TR(0x5f0d3b);
w4(R+4,u32(0x1ull));
}
B5f0d40:L5f0d40:{c.instructions+=3;NFSU2_TR(0x5f0d40);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f0d43:{NFSU2_TR(0x5f0d43);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5f0d46:{NFSU2_TR(0x5f0d46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f0d52;}}
}
B5f0d48:L5f0d48:{c.instructions+=3;NFSU2_TR(0x5f0d48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f0d4b:{NFSU2_TR(0x5f0d4b);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5f0d4f:{NFSU2_TR(0x5f0d4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5f0d52:L5f0d52:{c.instructions+=3;NFSU2_TR(0x5f0d52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5f0d54:{NFSU2_TR(0x5f0d54);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f0d56:{NFSU2_TR(0x5f0d56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f0d40u);}goto L5f0d40;}}
}
B5f0d58:L5f0d58:{c.instructions+=5;NFSU2_TR(0x5f0d58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f0d5b:{NFSU2_TR(0x5f0d5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f0d5e:{NFSU2_TR(0x5f0d5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5f0d60:{NFSU2_TR(0x5f0d60);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f0d62:{NFSU2_TR(0x5f0d62);
if(r1(R+518)){{goto L5f0d88;}}
}
B5f0d64:L5f0d64:{c.instructions+=2;NFSU2_TR(0x5f0d64);
w4(R+8,u32(0x2ull));
}
B5f0d69:{NFSU2_TR(0x5f0d69);
__builtin_memmove((R+16),(R+16),4);
}
B5f0d70:L5f0d70:{c.instructions+=3;NFSU2_TR(0x5f0d70);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f0d73:{NFSU2_TR(0x5f0d73);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5f0d76:{NFSU2_TR(0x5f0d76);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f0d82;}}
}
B5f0d78:L5f0d78:{c.instructions+=3;NFSU2_TR(0x5f0d78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f0d7b:{NFSU2_TR(0x5f0d7b);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5f0d7f:{NFSU2_TR(0x5f0d7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5f0d82:L5f0d82:{c.instructions+=3;NFSU2_TR(0x5f0d82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5f0d84:{NFSU2_TR(0x5f0d84);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f0d86:{NFSU2_TR(0x5f0d86);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f0d70u);}goto L5f0d70;}}
}
B5f0d88:L5f0d88:{c.instructions+=5;NFSU2_TR(0x5f0d88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5f0d8a:{NFSU2_TR(0x5f0d8a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f0d8c:{NFSU2_TR(0x5f0d8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f0d8f:{NFSU2_TR(0x5f0d8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f0d92:{NFSU2_TR(0x5f0d92);
if(r1(R+518)){{goto L5f0db8;}}
}
B5f0d94:L5f0d94:{c.instructions+=2;NFSU2_TR(0x5f0d94);
w4(R+8,u32(0x3ull));
}
B5f0d99:{NFSU2_TR(0x5f0d99);
__builtin_memmove((R+16),(R+16),4);
}
B5f0da0:L5f0da0:{c.instructions+=3;NFSU2_TR(0x5f0da0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f0da3:{NFSU2_TR(0x5f0da3);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5f0da6:{NFSU2_TR(0x5f0da6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f0db2;}}
}
B5f0da8:L5f0da8:{c.instructions+=3;NFSU2_TR(0x5f0da8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f0dab:{NFSU2_TR(0x5f0dab);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5f0daf:{NFSU2_TR(0x5f0daf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5f0db2:L5f0db2:{c.instructions+=3;NFSU2_TR(0x5f0db2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5f0db4:{NFSU2_TR(0x5f0db4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f0db6:{NFSU2_TR(0x5f0db6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f0da0u);}goto L5f0da0;}}
}
B5f0db8:L5f0db8:{c.instructions+=4;NFSU2_TR(0x5f0db8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f0dbb:{NFSU2_TR(0x5f0dbb);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5f0dbd:{NFSU2_TR(0x5f0dbd);
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
B5f0dbf:{NFSU2_TR(0x5f0dbf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5f0e25;}}
}
B5f0dc1:L5f0dc1:{c.instructions+=1;NFSU2_TR(0x5f0dc1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+8),(U+0),4);
}
B5f0dc4:L5f0dc4:{c.instructions+=24;NFSU2_TR(0x5f0dc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f0dc6:{NFSU2_TR(0x5f0dc6);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5f0dca:{NFSU2_TR(0x5f0dca);
w4(R+28,u32(s32(s16(r2(R+4)))));
}
B5f0dcd:{NFSU2_TR(0x5f0dcd);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89ccf8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5f0dd4:{NFSU2_TR(0x5f0dd4);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B5f0dd8:{NFSU2_TR(0x5f0dd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5f0ddb:{NFSU2_TR(0x5f0ddb);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89cd50ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5f0de2:{NFSU2_TR(0x5f0de2);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B5f0de6:{NFSU2_TR(0x5f0de6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5f0de9:{NFSU2_TR(0x5f0de9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89cda8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5f0df0:{NFSU2_TR(0x5f0df0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B5f0df4:{NFSU2_TR(0x5f0df4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5f0df7:{NFSU2_TR(0x5f0df7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89ce00ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5f0dfe:{NFSU2_TR(0x5f0dfe);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B5f0e02:{NFSU2_TR(0x5f0e02);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5f0e05:{NFSU2_TR(0x5f0e05);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89ce58ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5f0e0c:{NFSU2_TR(0x5f0e0c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B5f0e10:{NFSU2_TR(0x5f0e10);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f0e13:{NFSU2_TR(0x5f0e13);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89ceb0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5f0e1a:{NFSU2_TR(0x5f0e1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f0e1d:{NFSU2_TR(0x5f0e1d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5f0e1e:{NFSU2_TR(0x5f0e1e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B5f0e21:{NFSU2_TR(0x5f0e21);
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
B5f0e23:{NFSU2_TR(0x5f0e23);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f0dc4u);}goto L5f0dc4;}}
}
B5f0e25:L5f0e25:{c.instructions+=4;NFSU2_TR(0x5f0e25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f0e26:{NFSU2_TR(0x5f0e26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f0e27:{NFSU2_TR(0x5f0e27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f0e28:{NFSU2_TR(0x5f0e28);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f0e30:L5f0e30:{c.instructions+=3;NFSU2_TR(0x5f0e30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0e31:{NFSU2_TR(0x5f0e31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5f0e33:{NFSU2_TR(0x5f0e33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f0e38ull));
TAIL_STATIC(0x502fd0u,502);
}
B5f0e38:L5f0e38:{c.instructions+=2;NFSU2_TR(0x5f0e38);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f0e3a:{NFSU2_TR(0x5f0e3a);
if(r1(R+518)){{goto L5f0e4e;}}
}
B5f0e3c:L5f0e3c:{c.instructions+=1;NFSU2_TR(0x5f0e3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f0e40:L5f0e40:{c.instructions+=3;NFSU2_TR(0x5f0e40);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5f0e44:{NFSU2_TR(0x5f0e44);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B5f0e46:{NFSU2_TR(0x5f0e46);
if(r1(R+518)){{goto L5f0e54;}}
}
B5f0e48:L5f0e48:{c.instructions+=3;NFSU2_TR(0x5f0e48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5f0e4a:{NFSU2_TR(0x5f0e4a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f0e4c:{NFSU2_TR(0x5f0e4c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f0e40u);}goto L5f0e40;}}
}
B5f0e4e:L5f0e4e:{c.instructions+=3;NFSU2_TR(0x5f0e4e);
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
B5f0e50:{NFSU2_TR(0x5f0e50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f0e51:{NFSU2_TR(0x5f0e51);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f0e54:L5f0e54:{c.instructions+=3;NFSU2_TR(0x5f0e54);
__builtin_memmove((R+0),(R+24),4);
}
B5f0e56:{NFSU2_TR(0x5f0e56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f0e57:{NFSU2_TR(0x5f0e57);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f0e60:L5f0e60:{c.instructions+=9;NFSU2_TR(0x5f0e60);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0e61:{NFSU2_TR(0x5f0e61);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0e62:{NFSU2_TR(0x5f0e62);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0e63:{NFSU2_TR(0x5f0e63);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f0e67:{NFSU2_TR(0x5f0e67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f0e69:{NFSU2_TR(0x5f0e69);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f0e6b:{NFSU2_TR(0x5f0e6b);
__builtin_memmove((R+12),(R+4),4);
}
B5f0e6d:{NFSU2_TR(0x5f0e6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f0e75:{NFSU2_TR(0x5f0e75);
if(r1(R+518)){{goto L5f0e7f;}}
}
B5f0e77:L5f0e77:{c.instructions+=2;NFSU2_TR(0x5f0e77);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5f0e7b:{NFSU2_TR(0x5f0e7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f0e7f:L5f0e7f:{c.instructions+=9;NFSU2_TR(0x5f0e7f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0e80:{NFSU2_TR(0x5f0e80);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5f0e84:{NFSU2_TR(0x5f0e84);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0e86:{NFSU2_TR(0x5f0e86);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0e88:{NFSU2_TR(0x5f0e88);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0e8a:{NFSU2_TR(0x5f0e8a);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f0e8e:{NFSU2_TR(0x5f0e8e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0e8f:{NFSU2_TR(0x5f0e8f);
__builtin_memmove((R+4),(R+24),4);
}
B5f0e91:{NFSU2_TR(0x5f0e91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f0e96ull));
TAIL_STATIC(0x571640u,571);
}
B5f0e96:L5f0e96:{c.instructions+=4;NFSU2_TR(0x5f0e96);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5f0e99:{NFSU2_TR(0x5f0e99);
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
B5f0e9b:{NFSU2_TR(0x5f0e9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f0e9c:{NFSU2_TR(0x5f0e9c);
if(r1(R+518)){{goto L5f0ebc;}}
}
B5f0e9e:L5f0e9e:{c.instructions+=3;NFSU2_TR(0x5f0e9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f0ea2:{NFSU2_TR(0x5f0ea2);
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
B5f0ea4:{NFSU2_TR(0x5f0ea4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5f0eb6;}}
}
B5f0ea6:L5f0ea6:{c.instructions+=3;NFSU2_TR(0x5f0ea6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0ea7:{NFSU2_TR(0x5f0ea7);
__builtin_memmove((R+4),(R+12),4);
}
B5f0ea9:{NFSU2_TR(0x5f0ea9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f0eaeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f0e30u);}goto L5f0e30;}
}
B5f0eae:L5f0eae:{c.instructions+=5;NFSU2_TR(0x5f0eae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5f0eb0:{NFSU2_TR(0x5f0eb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f0eb1:{NFSU2_TR(0x5f0eb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f0eb2:{NFSU2_TR(0x5f0eb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f0eb3:{NFSU2_TR(0x5f0eb3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f0eb6:L5f0eb6:{c.instructions+=1;NFSU2_TR(0x5f0eb6);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B5f0ebc:L5f0ebc:{c.instructions+=4;NFSU2_TR(0x5f0ebc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f0ebd:{NFSU2_TR(0x5f0ebd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f0ebe:{NFSU2_TR(0x5f0ebe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f0ebf:{NFSU2_TR(0x5f0ebf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f0ed0:L5f0ed0:{c.instructions+=4;NFSU2_TR(0x5f0ed0);
__builtin_memmove((R+4),gp(0x890080),4);
}
B5f0ed6:{NFSU2_TR(0x5f0ed6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0ed7:{NFSU2_TR(0x5f0ed7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5f0ed9:{NFSU2_TR(0x5f0ed9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f0edeull));
TAIL_STATIC(0x502fd0u,502);
}
B5f0ede:L5f0ede:{c.instructions+=2;NFSU2_TR(0x5f0ede);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f0ee0:{NFSU2_TR(0x5f0ee0);
if(r1(R+518)){{goto L5f0ef4;}}
}
B5f0ee2:L5f0ee2:{c.instructions+=1;NFSU2_TR(0x5f0ee2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f0ee6:L5f0ee6:{c.instructions+=3;NFSU2_TR(0x5f0ee6);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5f0eea:{NFSU2_TR(0x5f0eea);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B5f0eec:{NFSU2_TR(0x5f0eec);
if(r1(R+518)){{goto L5f0ef8;}}
}
B5f0eee:L5f0eee:{c.instructions+=3;NFSU2_TR(0x5f0eee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5f0ef0:{NFSU2_TR(0x5f0ef0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f0ef2:{NFSU2_TR(0x5f0ef2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f0ee6u);}goto L5f0ee6;}}
}
B5f0ef4:L5f0ef4:{c.instructions+=3;NFSU2_TR(0x5f0ef4);
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
B5f0ef6:{NFSU2_TR(0x5f0ef6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f0ef7:{NFSU2_TR(0x5f0ef7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f0ef8:L5f0ef8:{c.instructions+=3;NFSU2_TR(0x5f0ef8);
__builtin_memmove((R+0),(R+24),4);
}
B5f0efa:{NFSU2_TR(0x5f0efa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f0efb:{NFSU2_TR(0x5f0efb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f0f00:L5f0f00:{c.instructions+=7;NFSU2_TR(0x5f0f00);
__builtin_memmove((R+0),gp(0x86b4c8),4);
}
B5f0f05:{NFSU2_TR(0x5f0f05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2d8ull))));
}
B5f0f0b:{NFSU2_TR(0x5f0f0b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0f0c:{NFSU2_TR(0x5f0f0c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5f0f0e:{NFSU2_TR(0x5f0f0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f0f10:{NFSU2_TR(0x5f0f10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0f11:{NFSU2_TR(0x5f0f11);
if(r1(R+518)){{goto L5f0f18;}}
}
B5f0f13:L5f0f13:{c.instructions+=2;NFSU2_TR(0x5f0f13);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f0f16:{NFSU2_TR(0x5f0f16);
{goto L5f0f1a;}
}
B5f0f18:L5f0f18:{c.instructions+=1;NFSU2_TR(0x5f0f18);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5f0f1a:L5f0f1a:{c.instructions+=2;NFSU2_TR(0x5f0f1a);
w4(R+4,u32(0x86b4c8ull));
}
B5f0f1f:{NFSU2_TR(0x5f0f1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f0f24ull));
TAIL_STATIC(0x431780u,431);
}
B5f0f24:L5f0f24:{c.instructions+=2;NFSU2_TR(0x5f0f24);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f0f26:{NFSU2_TR(0x5f0f26);
if(r1(R+518)){{goto L5f0f46;}}
}
B5f0f28:L5f0f28:{c.instructions+=3;NFSU2_TR(0x5f0f28);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5f0f2b:{NFSU2_TR(0x5f0f2b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f0f2d:{NFSU2_TR(0x5f0f2d);
if(r1(R+518)){{goto L5f0f34;}}
}
B5f0f2f:L5f0f2f:{c.instructions+=2;NFSU2_TR(0x5f0f2f);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5f0f33:{NFSU2_TR(0x5f0f33);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5f0f34:L5f0f34:{c.instructions+=3;NFSU2_TR(0x5f0f34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5f0f37:{NFSU2_TR(0x5f0f37);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f0f39:{NFSU2_TR(0x5f0f39);
if(r1(R+518)){{goto L5f0f40;}}
}
B5f0f3b:L5f0f3b:{c.instructions+=2;NFSU2_TR(0x5f0f3b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B5f0f3e:{NFSU2_TR(0x5f0f3e);
{goto L5f0f42;}
}
B5f0f40:L5f0f40:{c.instructions+=1;NFSU2_TR(0x5f0f40);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5f0f42:L5f0f42:{c.instructions+=2;NFSU2_TR(0x5f0f42);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f0f44:{NFSU2_TR(0x5f0f44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f0f28u);}goto L5f0f28;}}
}
B5f0f46:L5f0f46:{c.instructions+=3;NFSU2_TR(0x5f0f46);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5f0f48:{NFSU2_TR(0x5f0f48);
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
B5f0f4a:{NFSU2_TR(0x5f0f4a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5f0f64;}}
}
B5f0f4c:L5f0f4c:{c.instructions+=2;NFSU2_TR(0x5f0f4c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0f4d:{NFSU2_TR(0x5f0f4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2e8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f0f54:L5f0f54:{c.instructions+=4;NFSU2_TR(0x5f0f54);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5f0f58:{NFSU2_TR(0x5f0f58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f0f5a:{NFSU2_TR(0x5f0f5a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0f5b:{NFSU2_TR(0x5f0f5b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f0f5eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f0f5e:L5f0f5e:{c.instructions+=3;NFSU2_TR(0x5f0f5e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5f0f5f:{NFSU2_TR(0x5f0f5f);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B5f0f61:{NFSU2_TR(0x5f0f61);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f0f54u);}goto L5f0f54;}}
}
B5f0f63:L5f0f63:{c.instructions+=1;NFSU2_TR(0x5f0f63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f0f64:L5f0f64:{c.instructions+=4;NFSU2_TR(0x5f0f64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f0f65:{NFSU2_TR(0x5f0f65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f0f66:{NFSU2_TR(0x5f0f66);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2d8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2d8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2d8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f0f6c:{NFSU2_TR(0x5f0f6c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f0f70:L5f0f70:{c.instructions+=6;NFSU2_TR(0x5f0f70);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0f71:{NFSU2_TR(0x5f0f71);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5f0f74:{NFSU2_TR(0x5f0f74);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f0f76:{NFSU2_TR(0x5f0f76);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0f77:{NFSU2_TR(0x5f0f77);
__builtin_memmove((R+28),gp(0x86518c),4);
}
B5f0f7d:{NFSU2_TR(0x5f0f7d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5f0fa2;}}
}
B5f0f7f:L5f0f7f:{c.instructions+=2;NFSU2_TR(0x5f0f7f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f0f80:{NFSU2_TR(0x5f0f80);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f0f83:L5f0f83:{c.instructions+=5;NFSU2_TR(0x5f0f83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f0f85:{NFSU2_TR(0x5f0f85);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f0f88:{NFSU2_TR(0x5f0f88);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f0f8b:{NFSU2_TR(0x5f0f8b);
{u32 ea_=u32(u32(7892404u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f0f91:{NFSU2_TR(0x5f0f91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f0f96ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5f0f96:L5f0f96:{c.instructions+=5;NFSU2_TR(0x5f0f96);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B5f0f99:{NFSU2_TR(0x5f0f99);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B5f0f9b:{NFSU2_TR(0x5f0f9b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5f0f9e:{NFSU2_TR(0x5f0f9e);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B5f0f9f:{NFSU2_TR(0x5f0f9f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f0f83u);}goto L5f0f83;}}
}
B5f0fa1:L5f0fa1:{c.instructions+=1;NFSU2_TR(0x5f0fa1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f0fa2:L5f0fa2:{c.instructions+=6;NFSU2_TR(0x5f0fa2);
__builtin_memmove((R+0),(R+28),4);
}
B5f0fa4:{NFSU2_TR(0x5f0fa4);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5f0fa7:{NFSU2_TR(0x5f0fa7);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f0fa9:{NFSU2_TR(0x5f0fa9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f0faa:{NFSU2_TR(0x5f0faa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f0fab:{NFSU2_TR(0x5f0fab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f0fb0:L5f0fb0:{c.instructions+=27;NFSU2_TR(0x5f0fb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B5f0fb3:{NFSU2_TR(0x5f0fb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f0fb7:{NFSU2_TR(0x5f0fb7);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f0fb9:{NFSU2_TR(0x5f0fb9);
__builtin_memmove((R+8),gp(0x89cf69),1);
}
B5f0fbf:{NFSU2_TR(0x5f0fbf);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f0fc1:{NFSU2_TR(0x5f0fc1);
{u32 ea_=u32(r4(R+4)+u32(128u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f0fc7:{NFSU2_TR(0x5f0fc7);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f0fca:{NFSU2_TR(0x5f0fca);
{u32 ea_=u32(r4(R+4)+u32(132u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f0fd0:{NFSU2_TR(0x5f0fd0);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5f0fd2:{NFSU2_TR(0x5f0fd2);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5f0fd4:{NFSU2_TR(0x5f0fd4);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5f0fd6:{NFSU2_TR(0x5f0fd6);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5f0fd8:{NFSU2_TR(0x5f0fd8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f0fda:{NFSU2_TR(0x5f0fda);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5f0fdc:{NFSU2_TR(0x5f0fdc);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5f0fde:{NFSU2_TR(0x5f0fde);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f0fe0:{NFSU2_TR(0x5f0fe0);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f0fe4:{NFSU2_TR(0x5f0fe4);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f0fe6:{NFSU2_TR(0x5f0fe6);
{u32 ea_=u32(r4(R+4)+u32(144u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f0fec:{NFSU2_TR(0x5f0fec);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f0fef:{NFSU2_TR(0x5f0fef);
{u32 ea_=u32(r4(R+4)+u32(148u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f0ff5:{NFSU2_TR(0x5f0ff5);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5f0ff7:{NFSU2_TR(0x5f0ff7);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5f0ff9:{NFSU2_TR(0x5f0ff9);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5f0ffb:{NFSU2_TR(0x5f0ffb);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5f0ffd:{NFSU2_TR(0x5f0ffd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f0fff:{NFSU2_TR(0x5f0fff);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
TAIL_STATIC(0x5f1001u,5f1);
}
XIT:NFSU2_TR_EXIT(0x5f0,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
