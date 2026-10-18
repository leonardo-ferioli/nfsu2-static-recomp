#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_496(u8* __restrict R,Cpu& c);
u32 body_4a5(u8* __restrict R,Cpu& c);
u32 body_4af(u8* __restrict R,Cpu& c);
u32 body_4b1(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_501(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_514(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_53d(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_557(u8* __restrict R,Cpu& c);
u32 body_55b(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4b0,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4b0,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4b0(u8* __restrict R,Cpu& c);
u32 page_4b0(Cpu& c){return body_4b0(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4b0(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4b0000:goto L4b0000;
case 0x4b0003:c.instructions+=5;goto B4b0003;
case 0x4b0004:c.instructions+=4;goto B4b0004;
case 0x4b0006:c.instructions+=3;goto B4b0006;
case 0x4b000c:c.instructions+=2;goto B4b000c;
case 0x4b000d:c.instructions+=1;goto B4b000d;
case 0x4b000f:goto L4b000f;
case 0x4b0014:c.instructions+=1;goto B4b0014;
case 0x4b0016:goto L4b0016;
case 0x4b0019:c.instructions+=2;goto B4b0019;
case 0x4b001b:c.instructions+=1;goto B4b001b;
case 0x4b001d:goto L4b001d;
case 0x4b0020:c.instructions+=1;goto B4b0020;
case 0x4b0022:goto L4b0022;
case 0x4b0024:goto L4b0024;
case 0x4b0026:c.instructions+=1;goto B4b0026;
case 0x4b0028:goto L4b0028;
case 0x4b002b:c.instructions+=5;goto B4b002b;
case 0x4b002d:c.instructions+=4;goto B4b002d;
case 0x4b0032:c.instructions+=3;goto B4b0032;
case 0x4b0037:c.instructions+=2;goto B4b0037;
case 0x4b0038:c.instructions+=1;goto B4b0038;
case 0x4b003d:goto L4b003d;
case 0x4b0040:c.instructions+=4;goto B4b0040;
case 0x4b0043:c.instructions+=3;goto B4b0043;
case 0x4b0046:c.instructions+=2;goto B4b0046;
case 0x4b0048:c.instructions+=1;goto B4b0048;
case 0x4b004a:goto L4b004a;
case 0x4b004d:c.instructions+=1;goto B4b004d;
case 0x4b004f:goto L4b004f;
case 0x4b0051:goto L4b0051;
case 0x4b0057:c.instructions+=8;goto B4b0057;
case 0x4b005a:c.instructions+=7;goto B4b005a;
case 0x4b005d:c.instructions+=6;goto B4b005d;
case 0x4b0060:c.instructions+=5;goto B4b0060;
case 0x4b0061:c.instructions+=4;goto B4b0061;
case 0x4b0062:c.instructions+=3;goto B4b0062;
case 0x4b0064:c.instructions+=2;goto B4b0064;
case 0x4b006a:c.instructions+=1;goto B4b006a;
case 0x4b006b:goto L4b006b;
case 0x4b0070:goto L4b0070;
case 0x4b0073:goto L4b0073;
case 0x4b0076:c.instructions+=2;goto B4b0076;
case 0x4b0078:c.instructions+=1;goto B4b0078;
case 0x4b007a:goto L4b007a;
case 0x4b0080:c.instructions+=3;goto B4b0080;
case 0x4b0086:c.instructions+=2;goto B4b0086;
case 0x4b0088:c.instructions+=1;goto B4b0088;
case 0x4b008a:goto L4b008a;
case 0x4b0090:c.instructions+=2;goto B4b0090;
case 0x4b0095:c.instructions+=1;goto B4b0095;
case 0x4b009a:goto L4b009a;
case 0x4b009d:c.instructions+=2;goto B4b009d;
case 0x4b009f:c.instructions+=1;goto B4b009f;
case 0x4b00a1:goto L4b00a1;
case 0x4b00a6:c.instructions+=1;goto B4b00a6;
case 0x4b00ab:goto L4b00ab;
case 0x4b00ae:c.instructions+=1;goto B4b00ae;
case 0x4b00b0:goto L4b00b0;
case 0x4b00b5:c.instructions+=1;goto B4b00b5;
case 0x4b00ba:goto L4b00ba;
case 0x4b00bd:c.instructions+=2;goto B4b00bd;
case 0x4b00bf:c.instructions+=1;goto B4b00bf;
case 0x4b00c1:goto L4b00c1;
case 0x4b00c6:c.instructions+=1;goto B4b00c6;
case 0x4b00cb:goto L4b00cb;
case 0x4b00ce:c.instructions+=2;goto B4b00ce;
case 0x4b00d0:c.instructions+=1;goto B4b00d0;
case 0x4b00d2:goto L4b00d2;
case 0x4b00d5:goto L4b00d5;
case 0x4b00d7:c.instructions+=1;goto B4b00d7;
case 0x4b00d9:goto L4b00d9;
case 0x4b00da:c.instructions+=2;goto B4b00da;
case 0x4b00dc:c.instructions+=1;goto B4b00dc;
case 0x4b00e1:goto L4b00e1;
case 0x4b00e7:c.instructions+=1;goto B4b00e7;
case 0x4b00ed:goto L4b00ed;
case 0x4b00ef:c.instructions+=1;goto B4b00ef;
case 0x4b00f4:goto L4b00f4;
case 0x4b00f5:c.instructions+=2;goto B4b00f5;
case 0x4b00f6:c.instructions+=1;goto B4b00f6;
case 0x4b0100:goto L4b0100;
case 0x4b0101:c.instructions+=2;goto B4b0101;
case 0x4b0103:c.instructions+=1;goto B4b0103;
case 0x4b0108:goto L4b0108;
case 0x4b010d:c.instructions+=1;goto B4b010d;
case 0x4b010f:goto L4b010f;
case 0x4b0110:c.instructions+=1;goto B4b0110;
case 0x4b0115:goto L4b0115;
case 0x4b0118:goto L4b0118;
case 0x4b011a:c.instructions+=2;goto B4b011a;
case 0x4b011b:c.instructions+=1;goto B4b011b;
case 0x4b0120:goto L4b0120;
case 0x4b0126:c.instructions+=2;goto B4b0126;
case 0x4b012c:c.instructions+=1;goto B4b012c;
case 0x4b0140:goto L4b0140;
case 0x4b0141:c.instructions+=9;goto B4b0141;
case 0x4b0142:c.instructions+=8;goto B4b0142;
case 0x4b0144:c.instructions+=7;goto B4b0144;
case 0x4b0147:c.instructions+=6;goto B4b0147;
case 0x4b014a:c.instructions+=5;goto B4b014a;
case 0x4b014b:c.instructions+=4;goto B4b014b;
case 0x4b014c:c.instructions+=3;goto B4b014c;
case 0x4b0151:c.instructions+=2;goto B4b0151;
case 0x4b0153:c.instructions+=1;goto B4b0153;
case 0x4b0158:goto L4b0158;
case 0x4b015b:c.instructions+=4;goto B4b015b;
case 0x4b015c:c.instructions+=3;goto B4b015c;
case 0x4b0161:c.instructions+=2;goto B4b0161;
case 0x4b0166:c.instructions+=1;goto B4b0166;
case 0x4b016b:goto L4b016b;
case 0x4b016e:c.instructions+=3;goto B4b016e;
case 0x4b016f:c.instructions+=2;goto B4b016f;
case 0x4b0170:c.instructions+=1;goto B4b0170;
case 0x4b0175:goto L4b0175;
case 0x4b0178:c.instructions+=4;goto B4b0178;
case 0x4b017e:c.instructions+=3;goto B4b017e;
case 0x4b0181:c.instructions+=2;goto B4b0181;
case 0x4b0183:c.instructions+=1;goto B4b0183;
case 0x4b0189:goto L4b0189;
case 0x4b018f:c.instructions+=2;goto B4b018f;
case 0x4b0191:c.instructions+=1;goto B4b0191;
case 0x4b0197:goto L4b0197;
case 0x4b019a:c.instructions+=2;goto B4b019a;
case 0x4b019f:c.instructions+=1;goto B4b019f;
case 0x4b01a4:goto L4b01a4;
case 0x4b01a5:c.instructions+=2;goto B4b01a5;
case 0x4b01a6:c.instructions+=1;goto B4b01a6;
case 0x4b01ab:goto L4b01ab;
case 0x4b01ac:c.instructions+=1;goto B4b01ac;
case 0x4b01b1:goto L4b01b1;
case 0x4b01b4:c.instructions+=5;goto B4b01b4;
case 0x4b01ba:c.instructions+=4;goto B4b01ba;
case 0x4b01c0:c.instructions+=3;goto B4b01c0;
case 0x4b01c2:c.instructions+=2;goto B4b01c2;
case 0x4b01c3:c.instructions+=1;goto B4b01c3;
case 0x4b01c8:goto L4b01c8;
case 0x4b01c9:c.instructions+=3;goto B4b01c9;
case 0x4b01cf:c.instructions+=2;goto B4b01cf;
case 0x4b01d0:c.instructions+=1;goto B4b01d0;
case 0x4b01d5:goto L4b01d5;
case 0x4b01d8:c.instructions+=5;goto B4b01d8;
case 0x4b01de:c.instructions+=4;goto B4b01de;
case 0x4b01e4:c.instructions+=3;goto B4b01e4;
case 0x4b01e6:c.instructions+=2;goto B4b01e6;
case 0x4b01e7:c.instructions+=1;goto B4b01e7;
case 0x4b01ec:goto L4b01ec;
case 0x4b01ef:c.instructions+=3;goto B4b01ef;
case 0x4b01f4:c.instructions+=2;goto B4b01f4;
case 0x4b01f6:c.instructions+=1;goto B4b01f6;
case 0x4b01fb:goto L4b01fb;
case 0x4b01fc:c.instructions+=2;goto B4b01fc;
case 0x4b01fd:c.instructions+=1;goto B4b01fd;
case 0x4b0202:goto L4b0202;
case 0x4b0203:c.instructions+=1;goto B4b0203;
case 0x4b0208:goto L4b0208;
case 0x4b020b:c.instructions+=2;goto B4b020b;
case 0x4b0210:c.instructions+=1;goto B4b0210;
case 0x4b0215:goto L4b0215;
case 0x4b0216:c.instructions+=2;goto B4b0216;
case 0x4b0217:c.instructions+=1;goto B4b0217;
case 0x4b021c:goto L4b021c;
case 0x4b021f:c.instructions+=2;goto B4b021f;
case 0x4b0220:c.instructions+=1;goto B4b0220;
case 0x4b0225:goto L4b0225;
case 0x4b0228:c.instructions+=1;goto B4b0228;
case 0x4b022d:goto L4b022d;
case 0x4b022f:c.instructions+=1;goto B4b022f;
case 0x4b0235:goto L4b0235;
case 0x4b023b:c.instructions+=2;goto B4b023b;
case 0x4b023d:c.instructions+=1;goto B4b023d;
case 0x4b0243:goto L4b0243;
case 0x4b0246:c.instructions+=2;goto B4b0246;
case 0x4b024b:c.instructions+=1;goto B4b024b;
case 0x4b0250:goto L4b0250;
case 0x4b0251:c.instructions+=2;goto B4b0251;
case 0x4b0252:c.instructions+=1;goto B4b0252;
case 0x4b0257:goto L4b0257;
case 0x4b0258:c.instructions+=1;goto B4b0258;
case 0x4b025d:goto L4b025d;
case 0x4b0260:c.instructions+=2;goto B4b0260;
case 0x4b0265:c.instructions+=1;goto B4b0265;
case 0x4b026a:goto L4b026a;
case 0x4b026b:c.instructions+=2;goto B4b026b;
case 0x4b026c:c.instructions+=1;goto B4b026c;
case 0x4b0271:goto L4b0271;
case 0x4b0272:c.instructions+=1;goto B4b0272;
case 0x4b0277:goto L4b0277;
case 0x4b027a:c.instructions+=2;goto B4b027a;
case 0x4b027f:c.instructions+=1;goto B4b027f;
case 0x4b0284:goto L4b0284;
case 0x4b0287:c.instructions+=4;goto B4b0287;
case 0x4b0288:c.instructions+=3;goto B4b0288;
case 0x4b028d:c.instructions+=2;goto B4b028d;
case 0x4b0292:c.instructions+=1;goto B4b0292;
case 0x4b0297:goto L4b0297;
case 0x4b029a:c.instructions+=3;goto B4b029a;
case 0x4b029b:c.instructions+=2;goto B4b029b;
case 0x4b029c:c.instructions+=1;goto B4b029c;
case 0x4b02a1:goto L4b02a1;
case 0x4b02a4:c.instructions+=2;goto B4b02a4;
case 0x4b02a9:c.instructions+=1;goto B4b02a9;
case 0x4b02ae:goto L4b02ae;
case 0x4b02af:c.instructions+=2;goto B4b02af;
case 0x4b02b0:c.instructions+=1;goto B4b02b0;
case 0x4b02b5:goto L4b02b5;
case 0x4b02b6:c.instructions+=1;goto B4b02b6;
case 0x4b02bb:goto L4b02bb;
case 0x4b02c0:c.instructions+=1;goto B4b02c0;
case 0x4b02c5:goto L4b02c5;
case 0x4b02cb:c.instructions+=2;goto B4b02cb;
case 0x4b02cd:c.instructions+=1;goto B4b02cd;
case 0x4b02d3:goto L4b02d3;
case 0x4b02d6:c.instructions+=2;goto B4b02d6;
case 0x4b02db:c.instructions+=1;goto B4b02db;
case 0x4b02e0:goto L4b02e0;
case 0x4b02e1:c.instructions+=2;goto B4b02e1;
case 0x4b02e2:c.instructions+=1;goto B4b02e2;
case 0x4b02e7:goto L4b02e7;
case 0x4b02e8:c.instructions+=1;goto B4b02e8;
case 0x4b02ed:goto L4b02ed;
case 0x4b02f0:c.instructions+=2;goto B4b02f0;
case 0x4b02f5:c.instructions+=1;goto B4b02f5;
case 0x4b02fa:goto L4b02fa;
case 0x4b02fb:c.instructions+=2;goto B4b02fb;
case 0x4b02fc:c.instructions+=1;goto B4b02fc;
case 0x4b0301:goto L4b0301;
case 0x4b0302:c.instructions+=1;goto B4b0302;
case 0x4b0307:goto L4b0307;
case 0x4b030a:c.instructions+=2;goto B4b030a;
case 0x4b030f:c.instructions+=1;goto B4b030f;
case 0x4b0314:goto L4b0314;
case 0x4b0317:c.instructions+=4;goto B4b0317;
case 0x4b0318:c.instructions+=3;goto B4b0318;
case 0x4b031d:c.instructions+=2;goto B4b031d;
case 0x4b0322:c.instructions+=1;goto B4b0322;
case 0x4b0327:goto L4b0327;
case 0x4b032a:c.instructions+=3;goto B4b032a;
case 0x4b032b:c.instructions+=2;goto B4b032b;
case 0x4b032c:c.instructions+=1;goto B4b032c;
case 0x4b0331:goto L4b0331;
case 0x4b0334:c.instructions+=2;goto B4b0334;
case 0x4b0339:c.instructions+=1;goto B4b0339;
case 0x4b033e:goto L4b033e;
case 0x4b033f:c.instructions+=2;goto B4b033f;
case 0x4b0340:c.instructions+=1;goto B4b0340;
case 0x4b0345:goto L4b0345;
case 0x4b0346:c.instructions+=1;goto B4b0346;
case 0x4b034b:goto L4b034b;
case 0x4b0350:goto L4b0350;
case 0x4b0353:goto L4b0353;
case 0x4b0355:c.instructions+=3;goto B4b0355;
case 0x4b0357:c.instructions+=2;goto B4b0357;
case 0x4b0358:c.instructions+=1;goto B4b0358;
case 0x4b035d:goto L4b035d;
case 0x4b0360:c.instructions+=2;goto B4b0360;
case 0x4b0362:c.instructions+=1;goto B4b0362;
case 0x4b0364:goto L4b0364;
case 0x4b036a:c.instructions+=3;goto B4b036a;
case 0x4b036b:c.instructions+=2;goto B4b036b;
case 0x4b036c:c.instructions+=1;goto B4b036c;
case 0x4b0371:goto L4b0371;
case 0x4b0374:goto L4b0374;
case 0x4b0379:c.instructions+=1;goto B4b0379;
case 0x4b037e:goto L4b037e;
case 0x4b0381:c.instructions+=2;goto B4b0381;
case 0x4b0383:c.instructions+=1;goto B4b0383;
case 0x4b0389:goto L4b0389;
case 0x4b038c:c.instructions+=5;goto B4b038c;
case 0x4b038e:c.instructions+=4;goto B4b038e;
case 0x4b0393:c.instructions+=3;goto B4b0393;
case 0x4b0398:c.instructions+=2;goto B4b0398;
case 0x4b0399:c.instructions+=1;goto B4b0399;
case 0x4b039e:goto L4b039e;
case 0x4b03a1:c.instructions+=5;goto B4b03a1;
case 0x4b03a3:c.instructions+=4;goto B4b03a3;
case 0x4b03a8:c.instructions+=3;goto B4b03a8;
case 0x4b03ad:c.instructions+=2;goto B4b03ad;
case 0x4b03ae:c.instructions+=1;goto B4b03ae;
case 0x4b03b3:goto L4b03b3;
case 0x4b03b6:c.instructions+=5;goto B4b03b6;
case 0x4b03b8:c.instructions+=4;goto B4b03b8;
case 0x4b03bd:c.instructions+=3;goto B4b03bd;
case 0x4b03c2:c.instructions+=2;goto B4b03c2;
case 0x4b03c3:c.instructions+=1;goto B4b03c3;
case 0x4b03c8:goto L4b03c8;
case 0x4b03cb:c.instructions+=3;goto B4b03cb;
case 0x4b03ce:c.instructions+=2;goto B4b03ce;
case 0x4b03d0:c.instructions+=1;goto B4b03d0;
case 0x4b03d2:goto L4b03d2;
case 0x4b03d5:c.instructions+=1;goto B4b03d5;
case 0x4b03d7:goto L4b03d7;
case 0x4b03d9:goto L4b03d9;
case 0x4b03dc:c.instructions+=2;goto B4b03dc;
case 0x4b03de:c.instructions+=1;goto B4b03de;
case 0x4b03e0:goto L4b03e0;
case 0x4b03e2:c.instructions+=4;goto B4b03e2;
case 0x4b03e5:c.instructions+=3;goto B4b03e5;
case 0x4b03e7:c.instructions+=2;goto B4b03e7;
case 0x4b03e9:c.instructions+=1;goto B4b03e9;
case 0x4b03ee:goto L4b03ee;
case 0x4b03f0:c.instructions+=3;goto B4b03f0;
case 0x4b03f2:c.instructions+=2;goto B4b03f2;
case 0x4b03f4:c.instructions+=1;goto B4b03f4;
case 0x4b03f9:goto L4b03f9;
case 0x4b03fc:c.instructions+=3;goto B4b03fc;
case 0x4b0401:c.instructions+=2;goto B4b0401;
case 0x4b0402:c.instructions+=1;goto B4b0402;
case 0x4b0407:goto L4b0407;
case 0x4b0408:c.instructions+=1;goto B4b0408;
case 0x4b040d:goto L4b040d;
case 0x4b040f:goto L4b040f;
case 0x4b0412:c.instructions+=2;goto B4b0412;
case 0x4b0414:c.instructions+=1;goto B4b0414;
case 0x4b0416:goto L4b0416;
case 0x4b0419:c.instructions+=1;goto B4b0419;
case 0x4b041b:goto L4b041b;
case 0x4b041d:goto L4b041d;
case 0x4b041f:c.instructions+=5;goto B4b041f;
case 0x4b0422:c.instructions+=4;goto B4b0422;
case 0x4b0424:c.instructions+=3;goto B4b0424;
case 0x4b0426:c.instructions+=2;goto B4b0426;
case 0x4b0428:c.instructions+=1;goto B4b0428;
case 0x4b042a:goto L4b042a;
case 0x4b042f:goto L4b042f;
case 0x4b0431:c.instructions+=3;goto B4b0431;
case 0x4b0433:c.instructions+=2;goto B4b0433;
case 0x4b0435:c.instructions+=1;goto B4b0435;
case 0x4b043a:goto L4b043a;
case 0x4b043d:c.instructions+=3;goto B4b043d;
case 0x4b0442:c.instructions+=2;goto B4b0442;
case 0x4b0443:c.instructions+=1;goto B4b0443;
case 0x4b0448:goto L4b0448;
case 0x4b0449:c.instructions+=1;goto B4b0449;
case 0x4b044e:goto L4b044e;
case 0x4b0451:c.instructions+=3;goto B4b0451;
case 0x4b0456:c.instructions+=2;goto B4b0456;
case 0x4b0457:c.instructions+=1;goto B4b0457;
case 0x4b045c:goto L4b045c;
case 0x4b045d:c.instructions+=1;goto B4b045d;
case 0x4b0462:goto L4b0462;
case 0x4b0464:goto L4b0464;
case 0x4b0469:goto L4b0469;
case 0x4b046b:c.instructions+=3;goto B4b046b;
case 0x4b046d:c.instructions+=2;goto B4b046d;
case 0x4b046f:c.instructions+=1;goto B4b046f;
case 0x4b0474:goto L4b0474;
case 0x4b0477:c.instructions+=3;goto B4b0477;
case 0x4b047c:c.instructions+=2;goto B4b047c;
case 0x4b047d:c.instructions+=1;goto B4b047d;
case 0x4b0482:goto L4b0482;
case 0x4b0483:c.instructions+=1;goto B4b0483;
case 0x4b0488:goto L4b0488;
case 0x4b048b:c.instructions+=3;goto B4b048b;
case 0x4b0490:c.instructions+=2;goto B4b0490;
case 0x4b0491:c.instructions+=1;goto B4b0491;
case 0x4b0496:goto L4b0496;
case 0x4b0497:c.instructions+=1;goto B4b0497;
case 0x4b049c:goto L4b049c;
case 0x4b049f:goto L4b049f;
case 0x4b04a2:c.instructions+=6;goto B4b04a2;
case 0x4b04a5:c.instructions+=5;goto B4b04a5;
case 0x4b04a6:c.instructions+=4;goto B4b04a6;
case 0x4b04a7:c.instructions+=3;goto B4b04a7;
case 0x4b04a9:c.instructions+=2;goto B4b04a9;
case 0x4b04ac:c.instructions+=1;goto B4b04ac;
case 0x4b04b1:goto L4b04b1;
case 0x4b04b2:c.instructions+=4;goto B4b04b2;
case 0x4b04b4:c.instructions+=3;goto B4b04b4;
case 0x4b04b5:c.instructions+=2;goto B4b04b5;
case 0x4b04b6:c.instructions+=1;goto B4b04b6;
case 0x4b04c0:goto L4b04c0;
case 0x4b04c4:c.instructions+=7;goto B4b04c4;
case 0x4b04c9:c.instructions+=6;goto B4b04c9;
case 0x4b04ca:c.instructions+=5;goto B4b04ca;
case 0x4b04cc:c.instructions+=4;goto B4b04cc;
case 0x4b04cf:c.instructions+=3;goto B4b04cf;
case 0x4b04d0:c.instructions+=2;goto B4b04d0;
case 0x4b04d2:c.instructions+=1;goto B4b04d2;
case 0x4b04d4:goto L4b04d4;
case 0x4b04d9:c.instructions+=1;goto B4b04d9;
case 0x4b04df:goto L4b04df;
case 0x4b04e2:c.instructions+=2;goto B4b04e2;
case 0x4b04e4:c.instructions+=1;goto B4b04e4;
case 0x4b04e6:goto L4b04e6;
case 0x4b04e9:c.instructions+=1;goto B4b04e9;
case 0x4b04eb:goto L4b04eb;
case 0x4b04ed:goto L4b04ed;
case 0x4b04ef:c.instructions+=1;goto B4b04ef;
case 0x4b04f5:goto L4b04f5;
case 0x4b04f8:c.instructions+=5;goto B4b04f8;
case 0x4b04fa:c.instructions+=4;goto B4b04fa;
case 0x4b04ff:c.instructions+=3;goto B4b04ff;
case 0x4b0504:c.instructions+=2;goto B4b0504;
case 0x4b0505:c.instructions+=1;goto B4b0505;
case 0x4b050a:goto L4b050a;
case 0x4b050d:c.instructions+=4;goto B4b050d;
case 0x4b0510:c.instructions+=3;goto B4b0510;
case 0x4b0513:c.instructions+=2;goto B4b0513;
case 0x4b0515:c.instructions+=1;goto B4b0515;
case 0x4b0517:goto L4b0517;
case 0x4b051a:c.instructions+=1;goto B4b051a;
case 0x4b051c:goto L4b051c;
case 0x4b051e:goto L4b051e;
case 0x4b0521:c.instructions+=9;goto B4b0521;
case 0x4b0524:c.instructions+=8;goto B4b0524;
case 0x4b0525:c.instructions+=7;goto B4b0525;
case 0x4b0528:c.instructions+=6;goto B4b0528;
case 0x4b052b:c.instructions+=5;goto B4b052b;
case 0x4b052c:c.instructions+=4;goto B4b052c;
case 0x4b052e:c.instructions+=3;goto B4b052e;
case 0x4b052f:c.instructions+=2;goto B4b052f;
case 0x4b0532:c.instructions+=1;goto B4b0532;
case 0x4b0537:goto L4b0537;
case 0x4b053d:c.instructions+=2;goto B4b053d;
case 0x4b0543:c.instructions+=1;goto B4b0543;
case 0x4b0545:goto L4b0545;
case 0x4b0548:c.instructions+=2;goto B4b0548;
case 0x4b054a:c.instructions+=1;goto B4b054a;
case 0x4b054c:goto L4b054c;
case 0x4b054f:c.instructions+=1;goto B4b054f;
case 0x4b0551:goto L4b0551;
case 0x4b0553:goto L4b0553;
case 0x4b0555:c.instructions+=1;goto B4b0555;
case 0x4b0557:goto L4b0557;
case 0x4b055a:c.instructions+=5;goto B4b055a;
case 0x4b055c:c.instructions+=4;goto B4b055c;
case 0x4b0561:c.instructions+=3;goto B4b0561;
case 0x4b0566:c.instructions+=2;goto B4b0566;
case 0x4b0567:c.instructions+=1;goto B4b0567;
case 0x4b056c:goto L4b056c;
case 0x4b056f:c.instructions+=4;goto B4b056f;
case 0x4b0572:c.instructions+=3;goto B4b0572;
case 0x4b0575:c.instructions+=2;goto B4b0575;
case 0x4b0577:c.instructions+=1;goto B4b0577;
case 0x4b0579:goto L4b0579;
case 0x4b057c:c.instructions+=1;goto B4b057c;
case 0x4b057e:goto L4b057e;
case 0x4b0580:goto L4b0580;
case 0x4b0583:c.instructions+=9;goto B4b0583;
case 0x4b0586:c.instructions+=8;goto B4b0586;
case 0x4b0587:c.instructions+=7;goto B4b0587;
case 0x4b058a:c.instructions+=6;goto B4b058a;
case 0x4b058d:c.instructions+=5;goto B4b058d;
case 0x4b058e:c.instructions+=4;goto B4b058e;
case 0x4b0590:c.instructions+=3;goto B4b0590;
case 0x4b0591:c.instructions+=2;goto B4b0591;
case 0x4b0594:c.instructions+=1;goto B4b0594;
case 0x4b0599:goto L4b0599;
case 0x4b059e:c.instructions+=1;goto B4b059e;
case 0x4b05a4:goto L4b05a4;
case 0x4b05a7:goto L4b05a7;
case 0x4b05aa:c.instructions+=2;goto B4b05aa;
case 0x4b05ac:c.instructions+=1;goto B4b05ac;
case 0x4b05b2:goto L4b05b2;
case 0x4b05b8:c.instructions+=2;goto B4b05b8;
case 0x4b05ba:c.instructions+=1;goto B4b05ba;
case 0x4b05bc:goto L4b05bc;
case 0x4b05c1:c.instructions+=1;goto B4b05c1;
case 0x4b05c6:goto L4b05c6;
case 0x4b05c8:goto L4b05c8;
case 0x4b05ce:c.instructions+=3;goto B4b05ce;
case 0x4b05d0:c.instructions+=2;goto B4b05d0;
case 0x4b05d5:c.instructions+=1;goto B4b05d5;
case 0x4b05d7:goto L4b05d7;
case 0x4b05dc:goto L4b05dc;
case 0x4b05de:goto L4b05de;
case 0x4b05e3:goto L4b05e3;
case 0x4b05e6:c.instructions+=2;goto B4b05e6;
case 0x4b05e8:c.instructions+=1;goto B4b05e8;
case 0x4b05ed:goto L4b05ed;
case 0x4b05ee:c.instructions+=2;goto B4b05ee;
case 0x4b05f3:c.instructions+=1;goto B4b05f3;
case 0x4b05f8:goto L4b05f8;
case 0x4b05fb:c.instructions+=4;goto B4b05fb;
case 0x4b0601:c.instructions+=3;goto B4b0601;
case 0x4b0607:c.instructions+=2;goto B4b0607;
case 0x4b0609:c.instructions+=1;goto B4b0609;
case 0x4b060b:goto L4b060b;
case 0x4b0611:c.instructions+=2;goto B4b0611;
case 0x4b0616:c.instructions+=1;goto B4b0616;
case 0x4b061b:goto L4b061b;
case 0x4b061e:c.instructions+=2;goto B4b061e;
case 0x4b0620:c.instructions+=1;goto B4b0620;
case 0x4b0622:goto L4b0622;
case 0x4b0627:c.instructions+=1;goto B4b0627;
case 0x4b062c:goto L4b062c;
case 0x4b062f:c.instructions+=1;goto B4b062f;
case 0x4b0631:goto L4b0631;
case 0x4b0636:c.instructions+=1;goto B4b0636;
case 0x4b063b:goto L4b063b;
case 0x4b063e:c.instructions+=2;goto B4b063e;
case 0x4b0640:c.instructions+=1;goto B4b0640;
case 0x4b0642:goto L4b0642;
case 0x4b0647:c.instructions+=1;goto B4b0647;
case 0x4b064c:goto L4b064c;
case 0x4b064f:c.instructions+=2;goto B4b064f;
case 0x4b0651:c.instructions+=1;goto B4b0651;
case 0x4b0653:goto L4b0653;
case 0x4b0656:goto L4b0656;
case 0x4b0658:c.instructions+=1;goto B4b0658;
case 0x4b065a:goto L4b065a;
case 0x4b065b:c.instructions+=2;goto B4b065b;
case 0x4b065d:c.instructions+=1;goto B4b065d;
case 0x4b0662:goto L4b0662;
case 0x4b0664:c.instructions+=1;goto B4b0664;
case 0x4b0669:goto L4b0669;
case 0x4b066a:c.instructions+=2;goto B4b066a;
case 0x4b066b:c.instructions+=1;goto B4b066b;
case 0x4b0670:goto L4b0670;
case 0x4b0673:c.instructions+=6;goto B4b0673;
case 0x4b0674:c.instructions+=5;goto B4b0674;
case 0x4b0675:c.instructions+=4;goto B4b0675;
case 0x4b0679:c.instructions+=3;goto B4b0679;
case 0x4b067b:c.instructions+=2;goto B4b067b;
case 0x4b067d:c.instructions+=1;goto B4b067d;
case 0x4b0682:goto L4b0682;
case 0x4b0683:c.instructions+=1;goto B4b0683;
case 0x4b0688:goto L4b0688;
case 0x4b068b:c.instructions+=9;goto B4b068b;
case 0x4b0692:c.instructions+=8;goto B4b0692;
case 0x4b0695:c.instructions+=7;goto B4b0695;
case 0x4b069c:c.instructions+=6;goto B4b069c;
case 0x4b069f:c.instructions+=5;goto B4b069f;
case 0x4b06a0:c.instructions+=4;goto B4b06a0;
case 0x4b06a7:c.instructions+=3;goto B4b06a7;
case 0x4b06a8:c.instructions+=2;goto B4b06a8;
case 0x4b06ad:c.instructions+=1;goto B4b06ad;
case 0x4b06b2:goto L4b06b2;
case 0x4b06b6:c.instructions+=3;goto B4b06b6;
case 0x4b06b7:c.instructions+=2;goto B4b06b7;
case 0x4b06b8:c.instructions+=1;goto B4b06b8;
case 0x4b06bd:goto L4b06bd;
case 0x4b06c0:c.instructions+=4;goto B4b06c0;
case 0x4b06c2:c.instructions+=3;goto B4b06c2;
case 0x4b06c5:c.instructions+=2;goto B4b06c5;
case 0x4b06c7:c.instructions+=1;goto B4b06c7;
case 0x4b06c9:goto L4b06c9;
case 0x4b06cc:c.instructions+=2;goto B4b06cc;
case 0x4b06ce:c.instructions+=1;goto B4b06ce;
case 0x4b06d0:goto L4b06d0;
case 0x4b06d4:c.instructions+=1;goto B4b06d4;
case 0x4b06d6:goto L4b06d6;
case 0x4b06db:c.instructions+=2;goto B4b06db;
case 0x4b06dc:c.instructions+=1;goto B4b06dc;
case 0x4b06e1:goto L4b06e1;
case 0x4b06e4:goto L4b06e4;
case 0x4b06e6:c.instructions+=23;goto B4b06e6;
case 0x4b06e9:c.instructions+=22;goto B4b06e9;
case 0x4b06ec:c.instructions+=21;goto B4b06ec;
case 0x4b06f0:c.instructions+=20;goto B4b06f0;
case 0x4b06f3:c.instructions+=19;goto B4b06f3;
case 0x4b06f7:c.instructions+=18;goto B4b06f7;
case 0x4b06fb:c.instructions+=17;goto B4b06fb;
case 0x4b06ff:c.instructions+=16;goto B4b06ff;
case 0x4b0703:c.instructions+=15;goto B4b0703;
case 0x4b0706:c.instructions+=14;goto B4b0706;
case 0x4b070a:c.instructions+=13;goto B4b070a;
case 0x4b0710:c.instructions+=12;goto B4b0710;
case 0x4b0711:c.instructions+=11;goto B4b0711;
case 0x4b0718:c.instructions+=10;goto B4b0718;
case 0x4b071b:c.instructions+=9;goto B4b071b;
case 0x4b071f:c.instructions+=8;goto B4b071f;
case 0x4b0723:c.instructions+=7;goto B4b0723;
case 0x4b0725:c.instructions+=6;goto B4b0725;
case 0x4b0729:c.instructions+=5;goto B4b0729;
case 0x4b072f:c.instructions+=4;goto B4b072f;
case 0x4b0732:c.instructions+=3;goto B4b0732;
case 0x4b0733:c.instructions+=2;goto B4b0733;
case 0x4b0736:c.instructions+=1;goto B4b0736;
case 0x4b0740:goto L4b0740;
case 0x4b0741:c.instructions+=11;goto B4b0741;
case 0x4b0743:c.instructions+=10;goto B4b0743;
case 0x4b074a:c.instructions+=9;goto B4b074a;
case 0x4b074f:c.instructions+=8;goto B4b074f;
case 0x4b0751:c.instructions+=7;goto B4b0751;
case 0x4b0752:c.instructions+=6;goto B4b0752;
case 0x4b0757:c.instructions+=5;goto B4b0757;
case 0x4b075c:c.instructions+=4;goto B4b075c;
case 0x4b075d:c.instructions+=3;goto B4b075d;
case 0x4b075e:c.instructions+=2;goto B4b075e;
case 0x4b0763:c.instructions+=1;goto B4b0763;
case 0x4b0768:goto L4b0768;
case 0x4b076c:c.instructions+=3;goto B4b076c;
case 0x4b076d:c.instructions+=2;goto B4b076d;
case 0x4b076e:c.instructions+=1;goto B4b076e;
case 0x4b0773:goto L4b0773;
case 0x4b0776:c.instructions+=15;goto B4b0776;
case 0x4b077a:c.instructions+=14;goto B4b077a;
case 0x4b077d:c.instructions+=13;goto B4b077d;
case 0x4b0780:c.instructions+=12;goto B4b0780;
case 0x4b0783:c.instructions+=11;goto B4b0783;
case 0x4b0786:c.instructions+=10;goto B4b0786;
case 0x4b078d:c.instructions+=9;goto B4b078d;
case 0x4b0791:c.instructions+=8;goto B4b0791;
case 0x4b0794:c.instructions+=7;goto B4b0794;
case 0x4b0798:c.instructions+=6;goto B4b0798;
case 0x4b079c:c.instructions+=5;goto B4b079c;
case 0x4b079e:c.instructions+=4;goto B4b079e;
case 0x4b07a4:c.instructions+=3;goto B4b07a4;
case 0x4b07a7:c.instructions+=2;goto B4b07a7;
case 0x4b07a8:c.instructions+=1;goto B4b07a8;
case 0x4b07b0:goto L4b07b0;
case 0x4b07b1:c.instructions+=6;goto B4b07b1;
case 0x4b07b2:c.instructions+=5;goto B4b07b2;
case 0x4b07b5:c.instructions+=4;goto B4b07b5;
case 0x4b07b6:c.instructions+=3;goto B4b07b6;
case 0x4b07b9:c.instructions+=2;goto B4b07b9;
case 0x4b07bb:c.instructions+=1;goto B4b07bb;
case 0x4b07bd:goto L4b07bd;
case 0x4b07c1:goto L4b07c1;
case 0x4b07c4:c.instructions+=1;goto B4b07c4;
case 0x4b07c9:goto L4b07c9;
case 0x4b07cb:c.instructions+=1;goto B4b07cb;
case 0x4b07cd:goto L4b07cd;
case 0x4b07cf:c.instructions+=2;goto B4b07cf;
case 0x4b07d1:c.instructions+=1;goto B4b07d1;
case 0x4b07d3:goto L4b07d3;
case 0x4b07d4:c.instructions+=4;goto B4b07d4;
case 0x4b07d5:c.instructions+=3;goto B4b07d5;
case 0x4b07d7:c.instructions+=2;goto B4b07d7;
case 0x4b07d8:c.instructions+=1;goto B4b07d8;
case 0x4b07db:goto L4b07db;
case 0x4b07dc:c.instructions+=4;goto B4b07dc;
case 0x4b07de:c.instructions+=3;goto B4b07de;
case 0x4b07df:c.instructions+=2;goto B4b07df;
case 0x4b07e0:c.instructions+=1;goto B4b07e0;
case 0x4b07f0:goto L4b07f0;
case 0x4b07f1:c.instructions+=5;goto B4b07f1;
case 0x4b07f3:c.instructions+=4;goto B4b07f3;
case 0x4b07f6:c.instructions+=3;goto B4b07f6;
case 0x4b07f9:c.instructions+=2;goto B4b07f9;
case 0x4b07fb:c.instructions+=1;goto B4b07fb;
case 0x4b07fd:goto L4b07fd;
case 0x4b0801:c.instructions+=1;goto B4b0801;
case 0x4b0802:goto L4b0802;
case 0x4b0805:c.instructions+=2;goto B4b0805;
case 0x4b0808:c.instructions+=1;goto B4b0808;
case 0x4b080a:goto L4b080a;
case 0x4b080c:c.instructions+=2;goto B4b080c;
case 0x4b080e:c.instructions+=1;goto B4b080e;
case 0x4b0810:goto L4b0810;
case 0x4b0811:c.instructions+=2;goto B4b0811;
case 0x4b0812:c.instructions+=1;goto B4b0812;
case 0x4b0815:goto L4b0815;
case 0x4b0818:c.instructions+=3;goto B4b0818;
case 0x4b081b:c.instructions+=2;goto B4b081b;
case 0x4b081c:c.instructions+=1;goto B4b081c;
case 0x4b0821:goto L4b0821;
case 0x4b0824:c.instructions+=8;goto B4b0824;
case 0x4b0827:c.instructions+=7;goto B4b0827;
case 0x4b082a:c.instructions+=6;goto B4b082a;
case 0x4b082d:c.instructions+=5;goto B4b082d;
case 0x4b0830:c.instructions+=4;goto B4b0830;
case 0x4b0831:c.instructions+=3;goto B4b0831;
case 0x4b0832:c.instructions+=2;goto B4b0832;
case 0x4b0833:c.instructions+=1;goto B4b0833;
case 0x4b0838:goto L4b0838;
case 0x4b083b:c.instructions+=4;goto B4b083b;
case 0x4b083d:c.instructions+=3;goto B4b083d;
case 0x4b0842:c.instructions+=2;goto B4b0842;
case 0x4b0843:c.instructions+=1;goto B4b0843;
case 0x4b0848:goto L4b0848;
case 0x4b084b:c.instructions+=1;goto B4b084b;
case 0x4b084c:goto L4b084c;
case 0x4b084d:c.instructions+=1;goto B4b084d;
case 0x4b0850:goto L4b0850;
case 0x4b0851:c.instructions+=8;goto B4b0851;
case 0x4b0852:c.instructions+=7;goto B4b0852;
case 0x4b0853:c.instructions+=6;goto B4b0853;
case 0x4b0855:c.instructions+=5;goto B4b0855;
case 0x4b0858:c.instructions+=4;goto B4b0858;
case 0x4b085a:c.instructions+=3;goto B4b085a;
case 0x4b085c:c.instructions+=2;goto B4b085c;
case 0x4b085d:c.instructions+=1;goto B4b085d;
case 0x4b085f:goto L4b085f;
case 0x4b0863:c.instructions+=2;goto B4b0863;
case 0x4b0866:c.instructions+=1;goto B4b0866;
case 0x4b0868:goto L4b0868;
case 0x4b0869:c.instructions+=1;goto B4b0869;
case 0x4b086e:goto L4b086e;
case 0x4b0871:c.instructions+=2;goto B4b0871;
case 0x4b0873:c.instructions+=1;goto B4b0873;
case 0x4b0879:goto L4b0879;
case 0x4b087c:c.instructions+=3;goto B4b087c;
case 0x4b087f:c.instructions+=2;goto B4b087f;
case 0x4b0881:c.instructions+=1;goto B4b0881;
case 0x4b0887:goto L4b0887;
case 0x4b088a:c.instructions+=1;goto B4b088a;
case 0x4b088c:goto L4b088c;
case 0x4b088f:c.instructions+=2;goto B4b088f;
case 0x4b0892:c.instructions+=1;goto B4b0892;
case 0x4b0894:goto L4b0894;
case 0x4b0897:c.instructions+=3;goto B4b0897;
case 0x4b089a:c.instructions+=2;goto B4b089a;
case 0x4b089b:c.instructions+=1;goto B4b089b;
case 0x4b08a0:goto L4b08a0;
case 0x4b08a2:c.instructions+=1;goto B4b08a2;
case 0x4b08a4:goto L4b08a4;
case 0x4b08a8:goto L4b08a8;
case 0x4b08aa:c.instructions+=2;goto B4b08aa;
case 0x4b08ac:c.instructions+=1;goto B4b08ac;
case 0x4b08ae:goto L4b08ae;
case 0x4b08b3:goto L4b08b3;
case 0x4b08b5:c.instructions+=1;goto B4b08b5;
case 0x4b08ba:goto L4b08ba;
case 0x4b08be:c.instructions+=2;goto B4b08be;
case 0x4b08c1:c.instructions+=1;goto B4b08c1;
case 0x4b08c3:goto L4b08c3;
case 0x4b08c7:c.instructions+=2;goto B4b08c7;
case 0x4b08ca:c.instructions+=1;goto B4b08ca;
case 0x4b08cc:goto L4b08cc;
case 0x4b08cd:c.instructions+=1;goto B4b08cd;
case 0x4b08d2:goto L4b08d2;
case 0x4b08d5:c.instructions+=2;goto B4b08d5;
case 0x4b08d7:c.instructions+=1;goto B4b08d7;
case 0x4b08d9:goto L4b08d9;
case 0x4b08db:c.instructions+=1;goto B4b08db;
case 0x4b08e0:goto L4b08e0;
case 0x4b08e2:c.instructions+=1;goto B4b08e2;
case 0x4b08e5:goto L4b08e5;
case 0x4b08e7:c.instructions+=2;goto B4b08e7;
case 0x4b08e9:c.instructions+=1;goto B4b08e9;
case 0x4b08eb:goto L4b08eb;
case 0x4b08ed:goto L4b08ed;
case 0x4b08f0:c.instructions+=2;goto B4b08f0;
case 0x4b08f2:c.instructions+=1;goto B4b08f2;
case 0x4b08f4:goto L4b08f4;
case 0x4b08f7:c.instructions+=1;goto B4b08f7;
case 0x4b08f9:goto L4b08f9;
case 0x4b08fc:c.instructions+=2;goto B4b08fc;
case 0x4b08ff:c.instructions+=1;goto B4b08ff;
case 0x4b0901:goto L4b0901;
case 0x4b0904:c.instructions+=4;goto B4b0904;
case 0x4b0907:c.instructions+=3;goto B4b0907;
case 0x4b0908:c.instructions+=2;goto B4b0908;
case 0x4b090a:c.instructions+=1;goto B4b090a;
case 0x4b090f:goto L4b090f;
case 0x4b0911:c.instructions+=1;goto B4b0911;
case 0x4b0913:goto L4b0913;
case 0x4b0915:goto L4b0915;
case 0x4b0918:c.instructions+=1;goto B4b0918;
case 0x4b091a:goto L4b091a;
case 0x4b091e:c.instructions+=2;goto B4b091e;
case 0x4b0921:c.instructions+=1;goto B4b0921;
case 0x4b0923:goto L4b0923;
case 0x4b0924:c.instructions+=1;goto B4b0924;
case 0x4b0929:goto L4b0929;
case 0x4b092c:c.instructions+=2;goto B4b092c;
case 0x4b092e:c.instructions+=1;goto B4b092e;
case 0x4b0930:goto L4b0930;
case 0x4b0932:c.instructions+=1;goto B4b0932;
case 0x4b0934:goto L4b0934;
case 0x4b0936:c.instructions+=2;goto B4b0936;
case 0x4b0939:c.instructions+=1;goto B4b0939;
case 0x4b0940:goto L4b0940;
case 0x4b0943:c.instructions+=2;goto B4b0943;
case 0x4b0945:c.instructions+=1;goto B4b0945;
case 0x4b0947:goto L4b0947;
case 0x4b094a:goto L4b094a;
case 0x4b094d:c.instructions+=2;goto B4b094d;
case 0x4b094f:c.instructions+=1;goto B4b094f;
case 0x4b0951:goto L4b0951;
case 0x4b0954:c.instructions+=1;goto B4b0954;
case 0x4b0956:goto L4b0956;
case 0x4b0959:c.instructions+=2;goto B4b0959;
case 0x4b095c:c.instructions+=1;goto B4b095c;
case 0x4b095e:goto L4b095e;
case 0x4b0961:c.instructions+=4;goto B4b0961;
case 0x4b0964:c.instructions+=3;goto B4b0964;
case 0x4b0965:c.instructions+=2;goto B4b0965;
case 0x4b0967:c.instructions+=1;goto B4b0967;
case 0x4b096c:goto L4b096c;
case 0x4b096e:c.instructions+=1;goto B4b096e;
case 0x4b0970:goto L4b0970;
case 0x4b0973:c.instructions+=1;goto B4b0973;
case 0x4b0975:goto L4b0975;
case 0x4b097a:c.instructions+=2;goto B4b097a;
case 0x4b097c:c.instructions+=1;goto B4b097c;
case 0x4b097e:goto L4b097e;
case 0x4b0980:c.instructions+=1;goto B4b0980;
case 0x4b0982:goto L4b0982;
case 0x4b0984:goto L4b0984;
case 0x4b0989:goto L4b0989;
case 0x4b098c:goto L4b098c;
case 0x4b098e:c.instructions+=4;goto B4b098e;
case 0x4b0991:c.instructions+=3;goto B4b0991;
case 0x4b0994:c.instructions+=2;goto B4b0994;
case 0x4b0995:c.instructions+=1;goto B4b0995;
case 0x4b0997:goto L4b0997;
case 0x4b099c:goto L4b099c;
case 0x4b099f:c.instructions+=8;goto B4b099f;
case 0x4b09a2:c.instructions+=7;goto B4b09a2;
case 0x4b09a5:c.instructions+=6;goto B4b09a5;
case 0x4b09a8:c.instructions+=5;goto B4b09a8;
case 0x4b09ab:c.instructions+=4;goto B4b09ab;
case 0x4b09ac:c.instructions+=3;goto B4b09ac;
case 0x4b09ad:c.instructions+=2;goto B4b09ad;
case 0x4b09ae:c.instructions+=1;goto B4b09ae;
case 0x4b09b3:goto L4b09b3;
case 0x4b09b6:c.instructions+=4;goto B4b09b6;
case 0x4b09b8:c.instructions+=3;goto B4b09b8;
case 0x4b09bd:c.instructions+=2;goto B4b09bd;
case 0x4b09be:c.instructions+=1;goto B4b09be;
case 0x4b09c3:goto L4b09c3;
case 0x4b09c6:c.instructions+=5;goto B4b09c6;
case 0x4b09c7:c.instructions+=4;goto B4b09c7;
case 0x4b09c8:c.instructions+=3;goto B4b09c8;
case 0x4b09c9:c.instructions+=2;goto B4b09c9;
case 0x4b09ca:c.instructions+=1;goto B4b09ca;
case 0x4b09cd:goto L4b09cd;
case 0x4b09d2:goto L4b09d2;
case 0x4b09d5:c.instructions+=5;goto B4b09d5;
case 0x4b09d6:c.instructions+=4;goto B4b09d6;
case 0x4b09d7:c.instructions+=3;goto B4b09d7;
case 0x4b09d8:c.instructions+=2;goto B4b09d8;
case 0x4b09d9:c.instructions+=1;goto B4b09d9;
case 0x4b09e0:goto L4b09e0;
case 0x4b09e3:c.instructions+=8;goto B4b09e3;
case 0x4b09e4:c.instructions+=7;goto B4b09e4;
case 0x4b09e5:c.instructions+=6;goto B4b09e5;
case 0x4b09e6:c.instructions+=5;goto B4b09e6;
case 0x4b09e8:c.instructions+=4;goto B4b09e8;
case 0x4b09eb:c.instructions+=3;goto B4b09eb;
case 0x4b09ed:c.instructions+=2;goto B4b09ed;
case 0x4b09f3:c.instructions+=1;goto B4b09f3;
case 0x4b09f5:goto L4b09f5;
case 0x4b09fc:c.instructions+=2;goto B4b09fc;
case 0x4b09fe:c.instructions+=1;goto B4b09fe;
case 0x4b0a00:goto L4b0a00;
case 0x4b0a01:c.instructions+=1;goto B4b0a01;
case 0x4b0a06:goto L4b0a06;
case 0x4b0a09:c.instructions+=1;goto B4b0a09;
case 0x4b0a0c:goto L4b0a0c;
case 0x4b0a0f:c.instructions+=62;goto B4b0a0f;
case 0x4b0a12:c.instructions+=61;goto B4b0a12;
case 0x4b0a18:c.instructions+=60;goto B4b0a18;
case 0x4b0a1b:c.instructions+=59;goto B4b0a1b;
case 0x4b0a21:c.instructions+=58;goto B4b0a21;
case 0x4b0a27:c.instructions+=57;goto B4b0a27;
case 0x4b0a2b:c.instructions+=56;goto B4b0a2b;
case 0x4b0a2f:c.instructions+=55;goto B4b0a2f;
case 0x4b0a33:c.instructions+=54;goto B4b0a33;
case 0x4b0a39:c.instructions+=53;goto B4b0a39;
case 0x4b0a3d:c.instructions+=52;goto B4b0a3d;
case 0x4b0a43:c.instructions+=51;goto B4b0a43;
case 0x4b0a49:c.instructions+=50;goto B4b0a49;
case 0x4b0a4d:c.instructions+=49;goto B4b0a4d;
case 0x4b0a53:c.instructions+=48;goto B4b0a53;
case 0x4b0a57:c.instructions+=47;goto B4b0a57;
case 0x4b0a5a:c.instructions+=46;goto B4b0a5a;
case 0x4b0a5c:c.instructions+=45;goto B4b0a5c;
case 0x4b0a5e:c.instructions+=44;goto B4b0a5e;
case 0x4b0a62:c.instructions+=43;goto B4b0a62;
case 0x4b0a68:c.instructions+=42;goto B4b0a68;
case 0x4b0a69:c.instructions+=41;goto B4b0a69;
case 0x4b0a6b:c.instructions+=40;goto B4b0a6b;
case 0x4b0a6d:c.instructions+=39;goto B4b0a6d;
case 0x4b0a73:c.instructions+=38;goto B4b0a73;
case 0x4b0a79:c.instructions+=37;goto B4b0a79;
case 0x4b0a7f:c.instructions+=36;goto B4b0a7f;
case 0x4b0a83:c.instructions+=35;goto B4b0a83;
case 0x4b0a87:c.instructions+=34;goto B4b0a87;
case 0x4b0a89:c.instructions+=33;goto B4b0a89;
case 0x4b0a8f:c.instructions+=32;goto B4b0a8f;
case 0x4b0a95:c.instructions+=31;goto B4b0a95;
case 0x4b0a9b:c.instructions+=30;goto B4b0a9b;
case 0x4b0aa1:c.instructions+=29;goto B4b0aa1;
case 0x4b0aa5:c.instructions+=28;goto B4b0aa5;
case 0x4b0aa9:c.instructions+=27;goto B4b0aa9;
case 0x4b0aad:c.instructions+=26;goto B4b0aad;
case 0x4b0ab3:c.instructions+=25;goto B4b0ab3;
case 0x4b0ab7:c.instructions+=24;goto B4b0ab7;
case 0x4b0abb:c.instructions+=23;goto B4b0abb;
case 0x4b0abf:c.instructions+=22;goto B4b0abf;
case 0x4b0ac3:c.instructions+=21;goto B4b0ac3;
case 0x4b0ac7:c.instructions+=20;goto B4b0ac7;
case 0x4b0acd:c.instructions+=19;goto B4b0acd;
case 0x4b0ad1:c.instructions+=18;goto B4b0ad1;
case 0x4b0ad5:c.instructions+=17;goto B4b0ad5;
case 0x4b0ad9:c.instructions+=16;goto B4b0ad9;
case 0x4b0add:c.instructions+=15;goto B4b0add;
case 0x4b0ae1:c.instructions+=14;goto B4b0ae1;
case 0x4b0ae5:c.instructions+=13;goto B4b0ae5;
case 0x4b0ae9:c.instructions+=12;goto B4b0ae9;
case 0x4b0aef:c.instructions+=11;goto B4b0aef;
case 0x4b0af3:c.instructions+=10;goto B4b0af3;
case 0x4b0af7:c.instructions+=9;goto B4b0af7;
case 0x4b0afb:c.instructions+=8;goto B4b0afb;
case 0x4b0aff:c.instructions+=7;goto B4b0aff;
case 0x4b0b03:c.instructions+=6;goto B4b0b03;
case 0x4b0b09:c.instructions+=5;goto B4b0b09;
case 0x4b0b0d:c.instructions+=4;goto B4b0b0d;
case 0x4b0b11:c.instructions+=3;goto B4b0b11;
case 0x4b0b15:c.instructions+=2;goto B4b0b15;
case 0x4b0b19:c.instructions+=1;goto B4b0b19;
case 0x4b0b1e:goto L4b0b1e;
case 0x4b0b21:c.instructions+=16;goto B4b0b21;
case 0x4b0b26:c.instructions+=15;goto B4b0b26;
case 0x4b0b28:c.instructions+=14;goto B4b0b28;
case 0x4b0b2b:c.instructions+=13;goto B4b0b2b;
case 0x4b0b2f:c.instructions+=12;goto B4b0b2f;
case 0x4b0b32:c.instructions+=11;goto B4b0b32;
case 0x4b0b36:c.instructions+=10;goto B4b0b36;
case 0x4b0b38:c.instructions+=9;goto B4b0b38;
case 0x4b0b3c:c.instructions+=8;goto B4b0b3c;
case 0x4b0b3d:c.instructions+=7;goto B4b0b3d;
case 0x4b0b41:c.instructions+=6;goto B4b0b41;
case 0x4b0b45:c.instructions+=5;goto B4b0b45;
case 0x4b0b47:c.instructions+=4;goto B4b0b47;
case 0x4b0b4b:c.instructions+=3;goto B4b0b4b;
case 0x4b0b4d:c.instructions+=2;goto B4b0b4d;
case 0x4b0b51:c.instructions+=1;goto B4b0b51;
case 0x4b0b56:goto L4b0b56;
case 0x4b0b59:c.instructions+=9;goto B4b0b59;
case 0x4b0b5b:c.instructions+=8;goto B4b0b5b;
case 0x4b0b5f:c.instructions+=7;goto B4b0b5f;
case 0x4b0b60:c.instructions+=6;goto B4b0b60;
case 0x4b0b64:c.instructions+=5;goto B4b0b64;
case 0x4b0b67:c.instructions+=4;goto B4b0b67;
case 0x4b0b6a:c.instructions+=3;goto B4b0b6a;
case 0x4b0b6b:c.instructions+=2;goto B4b0b6b;
case 0x4b0b6c:c.instructions+=1;goto B4b0b6c;
case 0x4b0b71:goto L4b0b71;
case 0x4b0b74:c.instructions+=6;goto B4b0b74;
case 0x4b0b78:c.instructions+=5;goto B4b0b78;
case 0x4b0b79:c.instructions+=4;goto B4b0b79;
case 0x4b0b7d:c.instructions+=3;goto B4b0b7d;
case 0x4b0b7e:c.instructions+=2;goto B4b0b7e;
case 0x4b0b7f:c.instructions+=1;goto B4b0b7f;
case 0x4b0b84:goto L4b0b84;
case 0x4b0b87:c.instructions+=6;goto B4b0b87;
case 0x4b0b8b:c.instructions+=5;goto B4b0b8b;
case 0x4b0b8c:c.instructions+=4;goto B4b0b8c;
case 0x4b0b90:c.instructions+=3;goto B4b0b90;
case 0x4b0b91:c.instructions+=2;goto B4b0b91;
case 0x4b0b92:c.instructions+=1;goto B4b0b92;
case 0x4b0b97:goto L4b0b97;
case 0x4b0b9a:c.instructions+=6;goto B4b0b9a;
case 0x4b0b9e:c.instructions+=5;goto B4b0b9e;
case 0x4b0b9f:c.instructions+=4;goto B4b0b9f;
case 0x4b0ba3:c.instructions+=3;goto B4b0ba3;
case 0x4b0ba4:c.instructions+=2;goto B4b0ba4;
case 0x4b0ba5:c.instructions+=1;goto B4b0ba5;
case 0x4b0baa:goto L4b0baa;
case 0x4b0bad:c.instructions+=4;goto B4b0bad;
case 0x4b0bb0:c.instructions+=3;goto B4b0bb0;
case 0x4b0bb3:c.instructions+=2;goto B4b0bb3;
case 0x4b0bb5:c.instructions+=1;goto B4b0bb5;
case 0x4b0bbb:goto L4b0bbb;
case 0x4b0bc1:c.instructions+=6;goto B4b0bc1;
case 0x4b0bc5:c.instructions+=5;goto B4b0bc5;
case 0x4b0bc9:c.instructions+=4;goto B4b0bc9;
case 0x4b0bcf:c.instructions+=3;goto B4b0bcf;
case 0x4b0bd3:c.instructions+=2;goto B4b0bd3;
case 0x4b0bd7:c.instructions+=1;goto B4b0bd7;
case 0x4b0be0:goto L4b0be0;
case 0x4b0be3:c.instructions+=8;goto B4b0be3;
case 0x4b0be6:c.instructions+=7;goto B4b0be6;
case 0x4b0bea:c.instructions+=6;goto B4b0bea;
case 0x4b0bed:c.instructions+=5;goto B4b0bed;
case 0x4b0bee:c.instructions+=4;goto B4b0bee;
case 0x4b0bf4:c.instructions+=3;goto B4b0bf4;
case 0x4b0bf8:c.instructions+=2;goto B4b0bf8;
case 0x4b0bfb:c.instructions+=1;goto B4b0bfb;
case 0x4b0c00:goto L4b0c00;
case 0x4b0c03:c.instructions+=3;goto B4b0c03;
case 0x4b0c07:c.instructions+=2;goto B4b0c07;
case 0x4b0c08:c.instructions+=1;goto B4b0c08;
case 0x4b0c0d:goto L4b0c0d;
case 0x4b0c11:c.instructions+=28;goto B4b0c11;
case 0x4b0c15:c.instructions+=27;goto B4b0c15;
case 0x4b0c19:c.instructions+=26;goto B4b0c19;
case 0x4b0c1d:c.instructions+=25;goto B4b0c1d;
case 0x4b0c21:c.instructions+=24;goto B4b0c21;
case 0x4b0c22:c.instructions+=23;goto B4b0c22;
case 0x4b0c23:c.instructions+=22;goto B4b0c23;
case 0x4b0c27:c.instructions+=21;goto B4b0c27;
case 0x4b0c2b:c.instructions+=20;goto B4b0c2b;
case 0x4b0c2f:c.instructions+=19;goto B4b0c2f;
case 0x4b0c33:c.instructions+=18;goto B4b0c33;
case 0x4b0c37:c.instructions+=17;goto B4b0c37;
case 0x4b0c3b:c.instructions+=16;goto B4b0c3b;
case 0x4b0c3f:c.instructions+=15;goto B4b0c3f;
case 0x4b0c43:c.instructions+=14;goto B4b0c43;
case 0x4b0c49:c.instructions+=13;goto B4b0c49;
case 0x4b0c4b:c.instructions+=12;goto B4b0c4b;
case 0x4b0c4d:c.instructions+=11;goto B4b0c4d;
case 0x4b0c51:c.instructions+=10;goto B4b0c51;
case 0x4b0c55:c.instructions+=9;goto B4b0c55;
case 0x4b0c59:c.instructions+=8;goto B4b0c59;
case 0x4b0c5b:c.instructions+=7;goto B4b0c5b;
case 0x4b0c61:c.instructions+=6;goto B4b0c61;
case 0x4b0c63:c.instructions+=5;goto B4b0c63;
case 0x4b0c67:c.instructions+=4;goto B4b0c67;
case 0x4b0c6b:c.instructions+=3;goto B4b0c6b;
case 0x4b0c6f:c.instructions+=2;goto B4b0c6f;
case 0x4b0c71:c.instructions+=1;goto B4b0c71;
case 0x4b0c76:goto L4b0c76;
case 0x4b0c7a:c.instructions+=14;goto B4b0c7a;
case 0x4b0c7d:c.instructions+=13;goto B4b0c7d;
case 0x4b0c81:c.instructions+=12;goto B4b0c81;
case 0x4b0c85:c.instructions+=11;goto B4b0c85;
case 0x4b0c87:c.instructions+=10;goto B4b0c87;
case 0x4b0c88:c.instructions+=9;goto B4b0c88;
case 0x4b0c8c:c.instructions+=8;goto B4b0c8c;
case 0x4b0c8f:c.instructions+=7;goto B4b0c8f;
case 0x4b0c92:c.instructions+=6;goto B4b0c92;
case 0x4b0c93:c.instructions+=5;goto B4b0c93;
case 0x4b0c99:c.instructions+=4;goto B4b0c99;
case 0x4b0c9a:c.instructions+=3;goto B4b0c9a;
case 0x4b0c9d:c.instructions+=2;goto B4b0c9d;
case 0x4b0ca1:c.instructions+=1;goto B4b0ca1;
case 0x4b0ca6:goto L4b0ca6;
case 0x4b0caa:c.instructions+=6;goto B4b0caa;
case 0x4b0cad:c.instructions+=5;goto B4b0cad;
case 0x4b0caf:c.instructions+=4;goto B4b0caf;
case 0x4b0cb0:c.instructions+=3;goto B4b0cb0;
case 0x4b0cb1:c.instructions+=2;goto B4b0cb1;
case 0x4b0cb4:c.instructions+=1;goto B4b0cb4;
case 0x4b0cb9:goto L4b0cb9;
case 0x4b0cbc:c.instructions+=4;goto B4b0cbc;
case 0x4b0cbf:c.instructions+=3;goto B4b0cbf;
case 0x4b0cc0:c.instructions+=2;goto B4b0cc0;
case 0x4b0cc2:c.instructions+=1;goto B4b0cc2;
case 0x4b0cc7:goto L4b0cc7;
case 0x4b0cc9:c.instructions+=1;goto B4b0cc9;
case 0x4b0ccb:goto L4b0ccb;
case 0x4b0cce:c.instructions+=2;goto B4b0cce;
case 0x4b0cd1:c.instructions+=1;goto B4b0cd1;
case 0x4b0cd3:goto L4b0cd3;
case 0x4b0cd6:c.instructions+=1;goto B4b0cd6;
case 0x4b0cd8:goto L4b0cd8;
case 0x4b0cd9:c.instructions+=1;goto B4b0cd9;
case 0x4b0cde:goto L4b0cde;
case 0x4b0ce1:c.instructions+=5;goto B4b0ce1;
case 0x4b0ce3:c.instructions+=4;goto B4b0ce3;
case 0x4b0ce5:c.instructions+=3;goto B4b0ce5;
case 0x4b0ce7:c.instructions+=2;goto B4b0ce7;
case 0x4b0ce9:c.instructions+=1;goto B4b0ce9;
case 0x4b0ceb:goto L4b0ceb;
case 0x4b0ced:c.instructions+=1;goto B4b0ced;
case 0x4b0cef:goto L4b0cef;
case 0x4b0cf1:goto L4b0cf1;
case 0x4b0cf3:c.instructions+=3;goto B4b0cf3;
case 0x4b0cf6:c.instructions+=2;goto B4b0cf6;
case 0x4b0cf7:c.instructions+=1;goto B4b0cf7;
case 0x4b0cf9:goto L4b0cf9;
case 0x4b0cfe:goto L4b0cfe;
case 0x4b0d00:goto L4b0d00;
case 0x4b0d05:goto L4b0d05;
case 0x4b0d09:c.instructions+=5;goto B4b0d09;
case 0x4b0d0c:c.instructions+=4;goto B4b0d0c;
case 0x4b0d12:c.instructions+=3;goto B4b0d12;
case 0x4b0d14:c.instructions+=2;goto B4b0d14;
case 0x4b0d17:c.instructions+=1;goto B4b0d17;
case 0x4b0d19:goto L4b0d19;
case 0x4b0d1c:c.instructions+=4;goto B4b0d1c;
case 0x4b0d21:c.instructions+=3;goto B4b0d21;
case 0x4b0d26:c.instructions+=2;goto B4b0d26;
case 0x4b0d27:c.instructions+=1;goto B4b0d27;
case 0x4b0d29:goto L4b0d29;
case 0x4b0d2c:c.instructions+=3;goto B4b0d2c;
case 0x4b0d31:c.instructions+=2;goto B4b0d31;
case 0x4b0d36:c.instructions+=1;goto B4b0d36;
case 0x4b0d37:goto L4b0d37;
case 0x4b0d3c:goto L4b0d3c;
case 0x4b0d3e:c.instructions+=3;goto B4b0d3e;
case 0x4b0d41:c.instructions+=2;goto B4b0d41;
case 0x4b0d43:c.instructions+=1;goto B4b0d43;
case 0x4b0d49:goto L4b0d49;
case 0x4b0d4a:c.instructions+=4;goto B4b0d4a;
case 0x4b0d4b:c.instructions+=3;goto B4b0d4b;
case 0x4b0d4c:c.instructions+=2;goto B4b0d4c;
case 0x4b0d4f:c.instructions+=1;goto B4b0d4f;
case 0x4b0d50:goto L4b0d50;
case 0x4b0d53:c.instructions+=8;goto B4b0d53;
case 0x4b0d54:c.instructions+=7;goto B4b0d54;
case 0x4b0d55:c.instructions+=6;goto B4b0d55;
case 0x4b0d56:c.instructions+=5;goto B4b0d56;
case 0x4b0d5a:c.instructions+=4;goto B4b0d5a;
case 0x4b0d5c:c.instructions+=3;goto B4b0d5c;
case 0x4b0d60:c.instructions+=2;goto B4b0d60;
case 0x4b0d63:c.instructions+=1;goto B4b0d63;
case 0x4b0d68:goto L4b0d68;
case 0x4b0d69:c.instructions+=1;goto B4b0d69;
case 0x4b0d6e:goto L4b0d6e;
case 0x4b0d73:c.instructions+=3;goto B4b0d73;
case 0x4b0d74:c.instructions+=2;goto B4b0d74;
case 0x4b0d77:c.instructions+=1;goto B4b0d77;
case 0x4b0d7c:goto L4b0d7c;
case 0x4b0d7d:c.instructions+=3;goto B4b0d7d;
case 0x4b0d81:c.instructions+=2;goto B4b0d81;
case 0x4b0d82:c.instructions+=1;goto B4b0d82;
case 0x4b0d87:goto L4b0d87;
case 0x4b0d8a:c.instructions+=2;goto B4b0d8a;
case 0x4b0d8c:c.instructions+=1;goto B4b0d8c;
case 0x4b0d91:goto L4b0d91;
case 0x4b0d96:c.instructions+=3;goto B4b0d96;
case 0x4b0d97:c.instructions+=2;goto B4b0d97;
case 0x4b0d9a:c.instructions+=1;goto B4b0d9a;
case 0x4b0d9f:goto L4b0d9f;
case 0x4b0da0:c.instructions+=3;goto B4b0da0;
case 0x4b0da4:c.instructions+=2;goto B4b0da4;
case 0x4b0da5:c.instructions+=1;goto B4b0da5;
case 0x4b0daa:goto L4b0daa;
case 0x4b0dad:c.instructions+=2;goto B4b0dad;
case 0x4b0daf:c.instructions+=1;goto B4b0daf;
case 0x4b0db4:goto L4b0db4;
case 0x4b0db8:c.instructions+=4;goto B4b0db8;
case 0x4b0db9:c.instructions+=3;goto B4b0db9;
case 0x4b0dbe:c.instructions+=2;goto B4b0dbe;
case 0x4b0dc1:c.instructions+=1;goto B4b0dc1;
case 0x4b0dc6:goto L4b0dc6;
case 0x4b0dc7:c.instructions+=2;goto B4b0dc7;
case 0x4b0dc8:c.instructions+=1;goto B4b0dc8;
case 0x4b0dcd:goto L4b0dcd;
case 0x4b0dce:c.instructions+=3;goto B4b0dce;
case 0x4b0dd3:c.instructions+=2;goto B4b0dd3;
case 0x4b0dd6:c.instructions+=1;goto B4b0dd6;
case 0x4b0ddb:goto L4b0ddb;
case 0x4b0ddc:c.instructions+=2;goto B4b0ddc;
case 0x4b0ddd:c.instructions+=1;goto B4b0ddd;
case 0x4b0de2:goto L4b0de2;
case 0x4b0de3:c.instructions+=3;goto B4b0de3;
case 0x4b0de8:c.instructions+=2;goto B4b0de8;
case 0x4b0deb:c.instructions+=1;goto B4b0deb;
case 0x4b0df0:goto L4b0df0;
case 0x4b0df1:c.instructions+=2;goto B4b0df1;
case 0x4b0df2:c.instructions+=1;goto B4b0df2;
case 0x4b0df7:goto L4b0df7;
case 0x4b0df8:c.instructions+=3;goto B4b0df8;
case 0x4b0dfd:c.instructions+=2;goto B4b0dfd;
case 0x4b0e00:c.instructions+=1;goto B4b0e00;
case 0x4b0e05:goto L4b0e05;
case 0x4b0e06:c.instructions+=2;goto B4b0e06;
case 0x4b0e07:c.instructions+=1;goto B4b0e07;
case 0x4b0e0c:goto L4b0e0c;
case 0x4b0e0f:c.instructions+=7;goto B4b0e0f;
case 0x4b0e12:c.instructions+=6;goto B4b0e12;
case 0x4b0e15:c.instructions+=5;goto B4b0e15;
case 0x4b0e1c:c.instructions+=4;goto B4b0e1c;
case 0x4b0e1e:c.instructions+=3;goto B4b0e1e;
case 0x4b0e1f:c.instructions+=2;goto B4b0e1f;
case 0x4b0e24:c.instructions+=1;goto B4b0e24;
case 0x4b0e29:goto L4b0e29;
case 0x4b0e2a:c.instructions+=2;goto B4b0e2a;
case 0x4b0e2b:c.instructions+=1;goto B4b0e2b;
case 0x4b0e30:goto L4b0e30;
case 0x4b0e32:c.instructions+=2;goto B4b0e32;
case 0x4b0e33:c.instructions+=1;goto B4b0e33;
case 0x4b0e38:goto L4b0e38;
case 0x4b0e3b:c.instructions+=3;goto B4b0e3b;
case 0x4b0e3c:c.instructions+=2;goto B4b0e3c;
case 0x4b0e3d:c.instructions+=1;goto B4b0e3d;
case 0x4b0e42:goto L4b0e42;
case 0x4b0e43:c.instructions+=3;goto B4b0e43;
case 0x4b0e47:c.instructions+=2;goto B4b0e47;
case 0x4b0e48:c.instructions+=1;goto B4b0e48;
case 0x4b0e4d:goto L4b0e4d;
case 0x4b0e50:c.instructions+=2;goto B4b0e50;
case 0x4b0e52:c.instructions+=1;goto B4b0e52;
case 0x4b0e57:goto L4b0e57;
case 0x4b0e58:c.instructions+=3;goto B4b0e58;
case 0x4b0e5b:c.instructions+=2;goto B4b0e5b;
case 0x4b0e5c:c.instructions+=1;goto B4b0e5c;
case 0x4b0e61:goto L4b0e61;
case 0x4b0e64:c.instructions+=6;goto B4b0e64;
case 0x4b0e65:c.instructions+=5;goto B4b0e65;
case 0x4b0e67:c.instructions+=4;goto B4b0e67;
case 0x4b0e68:c.instructions+=3;goto B4b0e68;
case 0x4b0e69:c.instructions+=2;goto B4b0e69;
case 0x4b0e6c:c.instructions+=1;goto B4b0e6c;
case 0x4b0e70:goto L4b0e70;
case 0x4b0e71:c.instructions+=6;goto B4b0e71;
case 0x4b0e73:c.instructions+=5;goto B4b0e73;
case 0x4b0e74:c.instructions+=4;goto B4b0e74;
case 0x4b0e76:c.instructions+=3;goto B4b0e76;
case 0x4b0e79:c.instructions+=2;goto B4b0e79;
case 0x4b0e7b:c.instructions+=1;goto B4b0e7b;
case 0x4b0e7d:goto L4b0e7d;
case 0x4b0e82:goto L4b0e82;
case 0x4b0e85:c.instructions+=3;goto B4b0e85;
case 0x4b0e87:c.instructions+=2;goto B4b0e87;
case 0x4b0e8a:c.instructions+=1;goto B4b0e8a;
case 0x4b0e8c:goto L4b0e8c;
case 0x4b0e91:goto L4b0e91;
case 0x4b0e96:c.instructions+=1;goto B4b0e96;
case 0x4b0e9b:goto L4b0e9b;
case 0x4b0e9d:c.instructions+=1;goto B4b0e9d;
case 0x4b0e9f:goto L4b0e9f;
case 0x4b0ea4:c.instructions+=1;goto B4b0ea4;
case 0x4b0ea9:goto L4b0ea9;
case 0x4b0eac:c.instructions+=1;goto B4b0eac;
case 0x4b0eae:goto L4b0eae;
case 0x4b0eb3:c.instructions+=1;goto B4b0eb3;
case 0x4b0eb8:goto L4b0eb8;
case 0x4b0ebb:c.instructions+=1;goto B4b0ebb;
case 0x4b0ebd:goto L4b0ebd;
case 0x4b0ec2:c.instructions+=1;goto B4b0ec2;
case 0x4b0ec7:goto L4b0ec7;
case 0x4b0eca:c.instructions+=1;goto B4b0eca;
case 0x4b0ecc:goto L4b0ecc;
case 0x4b0ecf:c.instructions+=3;goto B4b0ecf;
case 0x4b0ed2:c.instructions+=2;goto B4b0ed2;
case 0x4b0ed3:c.instructions+=1;goto B4b0ed3;
case 0x4b0ed8:goto L4b0ed8;
case 0x4b0edb:c.instructions+=2;goto B4b0edb;
case 0x4b0edd:c.instructions+=1;goto B4b0edd;
case 0x4b0edf:goto L4b0edf;
case 0x4b0ee2:c.instructions+=2;goto B4b0ee2;
case 0x4b0ee3:c.instructions+=1;goto B4b0ee3;
case 0x4b0ee8:goto L4b0ee8;
case 0x4b0ee9:c.instructions+=2;goto B4b0ee9;
case 0x4b0eea:c.instructions+=1;goto B4b0eea;
case 0x4b0ef0:goto L4b0ef0;
case 0x4b0ef1:c.instructions+=5;goto B4b0ef1;
case 0x4b0ef3:c.instructions+=4;goto B4b0ef3;
case 0x4b0ef4:c.instructions+=3;goto B4b0ef4;
case 0x4b0ef7:c.instructions+=2;goto B4b0ef7;
case 0x4b0ef9:c.instructions+=1;goto B4b0ef9;
case 0x4b0eff:goto L4b0eff;
case 0x4b0f02:c.instructions+=5;goto B4b0f02;
case 0x4b0f04:c.instructions+=4;goto B4b0f04;
case 0x4b0f07:c.instructions+=3;goto B4b0f07;
case 0x4b0f09:c.instructions+=2;goto B4b0f09;
case 0x4b0f0a:c.instructions+=1;goto B4b0f0a;
case 0x4b0f0f:goto L4b0f0f;
case 0x4b0f12:c.instructions+=5;goto B4b0f12;
case 0x4b0f14:c.instructions+=4;goto B4b0f14;
case 0x4b0f17:c.instructions+=3;goto B4b0f17;
case 0x4b0f18:c.instructions+=2;goto B4b0f18;
case 0x4b0f19:c.instructions+=1;goto B4b0f19;
case 0x4b0f1e:goto L4b0f1e;
case 0x4b0f21:c.instructions+=2;goto B4b0f21;
case 0x4b0f26:c.instructions+=1;goto B4b0f26;
case 0x4b0f2b:goto L4b0f2b;
case 0x4b0f2d:c.instructions+=1;goto B4b0f2d;
case 0x4b0f2f:goto L4b0f2f;
case 0x4b0f34:c.instructions+=1;goto B4b0f34;
case 0x4b0f39:goto L4b0f39;
case 0x4b0f3c:c.instructions+=1;goto B4b0f3c;
case 0x4b0f3e:goto L4b0f3e;
case 0x4b0f43:c.instructions+=1;goto B4b0f43;
case 0x4b0f48:goto L4b0f48;
case 0x4b0f4b:c.instructions+=1;goto B4b0f4b;
case 0x4b0f4d:goto L4b0f4d;
case 0x4b0f52:c.instructions+=1;goto B4b0f52;
case 0x4b0f57:goto L4b0f57;
case 0x4b0f5a:c.instructions+=1;goto B4b0f5a;
case 0x4b0f5c:goto L4b0f5c;
case 0x4b0f5f:c.instructions+=3;goto B4b0f5f;
case 0x4b0f62:c.instructions+=2;goto B4b0f62;
case 0x4b0f63:c.instructions+=1;goto B4b0f63;
case 0x4b0f68:goto L4b0f68;
case 0x4b0f6b:c.instructions+=2;goto B4b0f6b;
case 0x4b0f6d:c.instructions+=1;goto B4b0f6d;
case 0x4b0f6f:goto L4b0f6f;
case 0x4b0f72:c.instructions+=2;goto B4b0f72;
case 0x4b0f73:c.instructions+=1;goto B4b0f73;
case 0x4b0f78:goto L4b0f78;
case 0x4b0f7a:goto L4b0f7a;
case 0x4b0f7d:c.instructions+=3;goto B4b0f7d;
case 0x4b0f80:c.instructions+=2;goto B4b0f80;
case 0x4b0f81:c.instructions+=1;goto B4b0f81;
case 0x4b0f86:goto L4b0f86;
case 0x4b0f89:c.instructions+=2;goto B4b0f89;
case 0x4b0f8b:c.instructions+=1;goto B4b0f8b;
case 0x4b0f8d:goto L4b0f8d;
case 0x4b0f92:c.instructions+=3;goto B4b0f92;
case 0x4b0f95:c.instructions+=2;goto B4b0f95;
case 0x4b0f96:c.instructions+=1;goto B4b0f96;
case 0x4b0f9b:goto L4b0f9b;
case 0x4b0f9d:c.instructions+=1;goto B4b0f9d;
case 0x4b0f9f:goto L4b0f9f;
case 0x4b0fa2:c.instructions+=2;goto B4b0fa2;
case 0x4b0fa3:c.instructions+=1;goto B4b0fa3;
case 0x4b0fa8:goto L4b0fa8;
case 0x4b0fab:c.instructions+=3;goto B4b0fab;
case 0x4b0fae:c.instructions+=2;goto B4b0fae;
case 0x4b0fb0:c.instructions+=1;goto B4b0fb0;
case 0x4b0fb2:goto L4b0fb2;
case 0x4b0fb5:c.instructions+=3;goto B4b0fb5;
case 0x4b0fb8:c.instructions+=2;goto B4b0fb8;
case 0x4b0fb9:c.instructions+=1;goto B4b0fb9;
case 0x4b0fbe:goto L4b0fbe;
case 0x4b0fc1:c.instructions+=2;goto B4b0fc1;
case 0x4b0fc3:c.instructions+=1;goto B4b0fc3;
case 0x4b0fc5:goto L4b0fc5;
case 0x4b0fc8:c.instructions+=3;goto B4b0fc8;
case 0x4b0fc9:c.instructions+=2;goto B4b0fc9;
case 0x4b0fd0:c.instructions+=1;goto B4b0fd0;
case 0x4b0fd5:goto L4b0fd5;
case 0x4b0fd8:goto L4b0fd8;
case 0x4b0fd9:c.instructions+=2;goto B4b0fd9;
case 0x4b0fda:c.instructions+=1;goto B4b0fda;
case 0x4b0fe0:goto L4b0fe0;
case 0x4b0fe1:c.instructions+=3;goto B4b0fe1;
case 0x4b0fe3:c.instructions+=2;goto B4b0fe3;
case 0x4b0fe8:c.instructions+=1;goto B4b0fe8;
case 0x4b0fed:goto L4b0fed;
case 0x4b0fef:c.instructions+=1;goto B4b0fef;
case 0x4b0ff1:goto L4b0ff1;
case 0x4b0ff6:c.instructions+=1;goto B4b0ff6;
case 0x4b0ffb:goto L4b0ffb;
case 0x4b0ffe:c.instructions+=1;goto B4b0ffe;
default:missing_instruction(c.pc);}
B4b0000:L4b0000:{c.instructions+=6;NFSU2_TR(0x4b0000);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b0003:{NFSU2_TR(0x4b0003);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B4b0004:{NFSU2_TR(0x4b0004);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0006:{NFSU2_TR(0x4b0006);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b000c:{NFSU2_TR(0x4b000c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b000d:{NFSU2_TR(0x4b000d);
{goto L4b006b;}
}
B4b000f:L4b000f:{c.instructions+=2;NFSU2_TR(0x4b000f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b0014:{NFSU2_TR(0x4b0014);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b0073;}}
}
B4b0016:L4b0016:{c.instructions+=3;NFSU2_TR(0x4b0016);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b0019:{NFSU2_TR(0x4b0019);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b001b:{NFSU2_TR(0x4b001b);
if(r1(R+518)){{goto L4b0022;}}
}
B4b001d:L4b001d:{c.instructions+=2;NFSU2_TR(0x4b001d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
}
B4b0020:{NFSU2_TR(0x4b0020);
{goto L4b0024;}
}
B4b0022:L4b0022:{c.instructions+=1;NFSU2_TR(0x4b0022);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b0024:L4b0024:{c.instructions+=2;NFSU2_TR(0x4b0024);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b0026:{NFSU2_TR(0x4b0026);
if(r1(R+518)){{goto L4b0073;}}
}
B4b0028:L4b0028:{c.instructions+=6;NFSU2_TR(0x4b0028);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b002b:{NFSU2_TR(0x4b002b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b002d:{NFSU2_TR(0x4b002d);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0032:{NFSU2_TR(0x4b0032);
u8 U[4];
w4(U+0,u32(0x790e84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0037:{NFSU2_TR(0x4b0037);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0038:{NFSU2_TR(0x4b0038);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b003dull));
TAIL_STATIC(0x5426c0u,542);
}
B4b003d:L4b003d:{c.instructions+=5;NFSU2_TR(0x4b003d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b0040:{NFSU2_TR(0x4b0040);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b0043:{NFSU2_TR(0x4b0043);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4b0046:{NFSU2_TR(0x4b0046);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b0048:{NFSU2_TR(0x4b0048);
if(r1(R+518)){{goto L4b004f;}}
}
B4b004a:L4b004a:{c.instructions+=2;NFSU2_TR(0x4b004a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
}
B4b004d:{NFSU2_TR(0x4b004d);
{goto L4b0051;}
}
B4b004f:L4b004f:{c.instructions+=1;NFSU2_TR(0x4b004f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b0051:L4b0051:{c.instructions+=9;NFSU2_TR(0x4b0051);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b0057:{NFSU2_TR(0x4b0057);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b005a:{NFSU2_TR(0x4b005a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b005d:{NFSU2_TR(0x4b005d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b0060:{NFSU2_TR(0x4b0060);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0061:{NFSU2_TR(0x4b0061);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B4b0062:{NFSU2_TR(0x4b0062);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0064:{NFSU2_TR(0x4b0064);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b006a:{NFSU2_TR(0x4b006a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b006b:L4b006b:{c.instructions+=1;NFSU2_TR(0x4b006b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0070ull));
TAIL_STATIC(0x50d150u,50d);
}
B4b0070:L4b0070:{c.instructions+=1;NFSU2_TR(0x4b0070);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4b0073:L4b0073:{c.instructions+=3;NFSU2_TR(0x4b0073);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b0076:{NFSU2_TR(0x4b0076);
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
B4b0078:{NFSU2_TR(0x4b0078);
if(r1(R+518)){{goto L4b00f4;}}
}
B4b007a:L4b007a:{c.instructions+=4;NFSU2_TR(0x4b007a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x918ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b0080:{NFSU2_TR(0x4b0080);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x844ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b0086:{NFSU2_TR(0x4b0086);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b0088:{NFSU2_TR(0x4b0088);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b00ed;}}
}
B4b008a:L4b008a:{c.instructions+=3;NFSU2_TR(0x4b008a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x840ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b0090:{NFSU2_TR(0x4b0090);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0095:{NFSU2_TR(0x4b0095);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b009aull));
TAIL_STATIC(0x52cf60u,52c);
}
B4b009a:L4b009a:{c.instructions+=3;NFSU2_TR(0x4b009a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b009d:{NFSU2_TR(0x4b009d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b009f:{NFSU2_TR(0x4b009f);
if(r1(R+518)){{goto L4b00b0;}}
}
B4b00a1:L4b00a1:{c.instructions+=2;NFSU2_TR(0x4b00a1);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b00a6:{NFSU2_TR(0x4b00a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b00abull));
TAIL_STATIC(0x51bd10u,51b);
}
B4b00ab:L4b00ab:{c.instructions+=2;NFSU2_TR(0x4b00ab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b00ae:{NFSU2_TR(0x4b00ae);
{goto L4b00d5;}
}
B4b00b0:L4b00b0:{c.instructions+=2;NFSU2_TR(0x4b00b0);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b00b5:{NFSU2_TR(0x4b00b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b00baull));
TAIL_STATIC(0x52cf60u,52c);
}
B4b00ba:L4b00ba:{c.instructions+=3;NFSU2_TR(0x4b00ba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b00bd:{NFSU2_TR(0x4b00bd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b00bf:{NFSU2_TR(0x4b00bf);
if(r1(R+518)){{goto L4b00e1;}}
}
B4b00c1:L4b00c1:{c.instructions+=2;NFSU2_TR(0x4b00c1);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b00c6:{NFSU2_TR(0x4b00c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b00cbull));
TAIL_STATIC(0x51bd10u,51b);
}
B4b00cb:L4b00cb:{c.instructions+=3;NFSU2_TR(0x4b00cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b00ce:{NFSU2_TR(0x4b00ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b00d0:{NFSU2_TR(0x4b00d0);
if(r1(R+518)){{goto L4b00e1;}}
}
B4b00d2:L4b00d2:{c.instructions+=1;NFSU2_TR(0x4b00d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b00d5:L4b00d5:{c.instructions+=2;NFSU2_TR(0x4b00d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b00d7:{NFSU2_TR(0x4b00d7);
if(r1(R+518)){{goto L4b00e1;}}
}
B4b00d9:L4b00d9:{c.instructions+=3;NFSU2_TR(0x4b00d9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b00da:{NFSU2_TR(0x4b00da);
__builtin_memmove((R+4),(R+0),4);
}
B4b00dc:{NFSU2_TR(0x4b00dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b00e1ull));
TAIL_STATIC(0x4a5ee0u,4a5);
}
B4b00e1:L4b00e1:{c.instructions+=2;NFSU2_TR(0x4b00e1);
__builtin_memmove((R+8),gp(0x8651ac),4);
}
B4b00e7:{NFSU2_TR(0x4b00e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b00ed:L4b00ed:{c.instructions+=2;NFSU2_TR(0x4b00ed);
__builtin_memmove((R+4),(R+24),4);
}
B4b00ef:{NFSU2_TR(0x4b00ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b00f4ull));
TAIL_STATIC(0x4afe00u,4af);
}
B4b00f4:L4b00f4:{c.instructions+=3;NFSU2_TR(0x4b00f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b00f5:{NFSU2_TR(0x4b00f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b00f6:{NFSU2_TR(0x4b00f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b0100:L4b0100:{c.instructions+=3;NFSU2_TR(0x4b0100);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0101:{NFSU2_TR(0x4b0101);
__builtin_memmove((R+24),(R+4),4);
}
B4b0103:{NFSU2_TR(0x4b0103);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0108ull));
{goto L4b0120;}
}
B4b0108:L4b0108:{c.instructions+=2;NFSU2_TR(0x4b0108);
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
B4b010d:{NFSU2_TR(0x4b010d);
if(r1(R+518)){{goto L4b0118;}}
}
B4b010f:L4b010f:{c.instructions+=2;NFSU2_TR(0x4b010f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0110:{NFSU2_TR(0x4b0110);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0115ull));
TAIL_STATIC(0x575630u,575);
}
B4b0115:L4b0115:{c.instructions+=1;NFSU2_TR(0x4b0115);
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
B4b0118:L4b0118:{c.instructions+=3;NFSU2_TR(0x4b0118);
__builtin_memmove((R+0),(R+24),4);
}
B4b011a:{NFSU2_TR(0x4b011a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b011b:{NFSU2_TR(0x4b011b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b0120:L4b0120:{c.instructions+=3;NFSU2_TR(0x4b0120);
u8 U[4];
w4(U+0,u32(0x790eacull));
s4(u32(r4(R+4)),r4(U+0));
}
B4b0126:{NFSU2_TR(0x4b0126);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x3a4ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x3a4ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x3a4ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b012c:{NFSU2_TR(0x4b012c);
TAIL_STATIC(0x4022c0u,402);
}
B4b0140:L4b0140:{c.instructions+=10;NFSU2_TR(0x4b0140);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0141:{NFSU2_TR(0x4b0141);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0142:{NFSU2_TR(0x4b0142);
__builtin_memmove((R+24),(R+4),4);
}
B4b0144:{NFSU2_TR(0x4b0144);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b0147:{NFSU2_TR(0x4b0147);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4b014a:{NFSU2_TR(0x4b014a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b014b:{NFSU2_TR(0x4b014b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b014c:{NFSU2_TR(0x4b014c);
u8 U[4];
w4(U+0,u32(0x93475966ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0151:{NFSU2_TR(0x4b0151);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b0153:{NFSU2_TR(0x4b0153);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0158ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4b0158:L4b0158:{c.instructions+=5;NFSU2_TR(0x4b0158);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b015b:{NFSU2_TR(0x4b015b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b015c:{NFSU2_TR(0x4b015c);
u8 U[4];
w4(U+0,u32(0x790ef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0161:{NFSU2_TR(0x4b0161);
u8 U[4];
w4(U+0,u32(0x790ee8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0166:{NFSU2_TR(0x4b0166);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b016bull));
TAIL_STATIC(0x43db50u,43d);
}
B4b016b:L4b016b:{c.instructions+=4;NFSU2_TR(0x4b016b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b016e:{NFSU2_TR(0x4b016e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b016f:{NFSU2_TR(0x4b016f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0170:{NFSU2_TR(0x4b0170);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0175ull));
TAIL_STATIC(0x537b80u,537);
}
B4b0175:L4b0175:{c.instructions+=5;NFSU2_TR(0x4b0175);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b0178:{NFSU2_TR(0x4b0178);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x931ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4b017e:{NFSU2_TR(0x4b017e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4b0181:{NFSU2_TR(0x4b0181);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b0183:{NFSU2_TR(0x4b0183);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b0235;}}
}
B4b0189:L4b0189:{c.instructions+=3;NFSU2_TR(0x4b0189);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x930ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4b018f:{NFSU2_TR(0x4b018f);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b0191:{NFSU2_TR(0x4b0191);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b022d;}}
}
B4b0197:L4b0197:{c.instructions+=3;NFSU2_TR(0x4b0197);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b019a:{NFSU2_TR(0x4b019a);
u8 U[4];
w4(U+0,u32(0x790edcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b019f:{NFSU2_TR(0x4b019f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b01a4ull));
TAIL_STATIC(0x43db50u,43d);
}
B4b01a4:L4b01a4:{c.instructions+=3;NFSU2_TR(0x4b01a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b01a5:{NFSU2_TR(0x4b01a5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b01a6:{NFSU2_TR(0x4b01a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b01abull));
TAIL_STATIC(0x5379c0u,537);
}
B4b01ab:L4b01ab:{c.instructions+=2;NFSU2_TR(0x4b01ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b01ac:{NFSU2_TR(0x4b01ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b01b1ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4b01b1:L4b01b1:{c.instructions+=6;NFSU2_TR(0x4b01b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b01b4:{NFSU2_TR(0x4b01b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x918ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b01ba:{NFSU2_TR(0x4b01ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x840ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b01c0:{NFSU2_TR(0x4b01c0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b01c2:{NFSU2_TR(0x4b01c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b01c3:{NFSU2_TR(0x4b01c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b01c8ull));
TAIL_STATIC(0x511e60u,511);
}
B4b01c8:L4b01c8:{c.instructions+=4;NFSU2_TR(0x4b01c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b01c9:{NFSU2_TR(0x4b01c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b01cf:{NFSU2_TR(0x4b01cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b01d0:{NFSU2_TR(0x4b01d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b01d5ull));
TAIL_STATIC(0x50c990u,50c);
}
B4b01d5:L4b01d5:{c.instructions+=6;NFSU2_TR(0x4b01d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b01d8:{NFSU2_TR(0x4b01d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x918ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b01de:{NFSU2_TR(0x4b01de);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x840ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b01e4:{NFSU2_TR(0x4b01e4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b01e6:{NFSU2_TR(0x4b01e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b01e7:{NFSU2_TR(0x4b01e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b01ecull));
TAIL_STATIC(0x511e60u,511);
}
B4b01ec:L4b01ec:{c.instructions+=4;NFSU2_TR(0x4b01ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4b01ef:{NFSU2_TR(0x4b01ef);
u8 U[4];
w4(U+0,u32(0x790ec8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b01f4:{NFSU2_TR(0x4b01f4);
__builtin_memmove((R+28),(R+0),4);
}
B4b01f6:{NFSU2_TR(0x4b01f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b01fbull));
TAIL_STATIC(0x43db50u,43d);
}
B4b01fb:L4b01fb:{c.instructions+=3;NFSU2_TR(0x4b01fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b01fc:{NFSU2_TR(0x4b01fc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b01fd:{NFSU2_TR(0x4b01fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0202ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b0202:L4b0202:{c.instructions+=2;NFSU2_TR(0x4b0202);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0203:{NFSU2_TR(0x4b0203);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0208ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b0208:L4b0208:{c.instructions+=3;NFSU2_TR(0x4b0208);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4b020b:{NFSU2_TR(0x4b020b);
u8 U[4];
w4(U+0,u32(0x790eb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0210:{NFSU2_TR(0x4b0210);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0215ull));
TAIL_STATIC(0x43db50u,43d);
}
B4b0215:L4b0215:{c.instructions+=3;NFSU2_TR(0x4b0215);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0216:{NFSU2_TR(0x4b0216);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0217:{NFSU2_TR(0x4b0217);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b021cull));
TAIL_STATIC(0x5379c0u,537);
}
B4b021c:L4b021c:{c.instructions+=3;NFSU2_TR(0x4b021c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
}
B4b021f:{NFSU2_TR(0x4b021f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0220:{NFSU2_TR(0x4b0220);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0225ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4b0225:L4b0225:{c.instructions+=2;NFSU2_TR(0x4b0225);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b0228:{NFSU2_TR(0x4b0228);
{goto L4b0353;}
}
B4b022d:L4b022d:{c.instructions+=2;NFSU2_TR(0x4b022d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b022f:{NFSU2_TR(0x4b022f);
if(r1(R+518)){{goto L4b02c5;}}
}
B4b0235:L4b0235:{c.instructions+=3;NFSU2_TR(0x4b0235);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x930ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4b023b:{NFSU2_TR(0x4b023b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b023d:{NFSU2_TR(0x4b023d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b02d3;}}
}
B4b0243:L4b0243:{c.instructions+=3;NFSU2_TR(0x4b0243);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b0246:{NFSU2_TR(0x4b0246);
u8 U[4];
w4(U+0,u32(0x790edcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b024b:{NFSU2_TR(0x4b024b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0250ull));
TAIL_STATIC(0x43db50u,43d);
}
B4b0250:L4b0250:{c.instructions+=3;NFSU2_TR(0x4b0250);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0251:{NFSU2_TR(0x4b0251);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0252:{NFSU2_TR(0x4b0252);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0257ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b0257:L4b0257:{c.instructions+=2;NFSU2_TR(0x4b0257);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0258:{NFSU2_TR(0x4b0258);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b025dull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b025d:L4b025d:{c.instructions+=3;NFSU2_TR(0x4b025d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b0260:{NFSU2_TR(0x4b0260);
u8 U[4];
w4(U+0,u32(0x790ec8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0265:{NFSU2_TR(0x4b0265);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b026aull));
TAIL_STATIC(0x43db50u,43d);
}
B4b026a:L4b026a:{c.instructions+=3;NFSU2_TR(0x4b026a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b026b:{NFSU2_TR(0x4b026b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b026c:{NFSU2_TR(0x4b026c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0271ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b0271:L4b0271:{c.instructions+=2;NFSU2_TR(0x4b0271);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0272:{NFSU2_TR(0x4b0272);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0277ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4b0277:L4b0277:{c.instructions+=3;NFSU2_TR(0x4b0277);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b027a:{NFSU2_TR(0x4b027a);
u8 U[4];
w4(U+0,u32(0xca89507eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b027f:{NFSU2_TR(0x4b027f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0284ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4b0284:L4b0284:{c.instructions+=5;NFSU2_TR(0x4b0284);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4b0287:{NFSU2_TR(0x4b0287);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0288:{NFSU2_TR(0x4b0288);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b028d:{NFSU2_TR(0x4b028d);
u8 U[4];
w4(U+0,u32(0x790ec8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0292:{NFSU2_TR(0x4b0292);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0297ull));
TAIL_STATIC(0x43db50u,43d);
}
B4b0297:L4b0297:{c.instructions+=4;NFSU2_TR(0x4b0297);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b029a:{NFSU2_TR(0x4b029a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b029b:{NFSU2_TR(0x4b029b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b029c:{NFSU2_TR(0x4b029c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b02a1ull));
TAIL_STATIC(0x537b80u,537);
}
B4b02a1:L4b02a1:{c.instructions+=3;NFSU2_TR(0x4b02a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b02a4:{NFSU2_TR(0x4b02a4);
u8 U[4];
w4(U+0,u32(0x790eb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b02a9:{NFSU2_TR(0x4b02a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b02aeull));
TAIL_STATIC(0x43db50u,43d);
}
B4b02ae:L4b02ae:{c.instructions+=3;NFSU2_TR(0x4b02ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b02af:{NFSU2_TR(0x4b02af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b02b0:{NFSU2_TR(0x4b02b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b02b5ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b02b5:L4b02b5:{c.instructions+=2;NFSU2_TR(0x4b02b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b02b6:{NFSU2_TR(0x4b02b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b02bbull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b02bb:L4b02bb:{c.instructions+=2;NFSU2_TR(0x4b02bb);
w4(R+28,u32(0xda665928ull));
}
B4b02c0:{NFSU2_TR(0x4b02c0);
{goto L4b0350;}
}
B4b02c5:L4b02c5:{c.instructions+=3;NFSU2_TR(0x4b02c5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x930ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4b02cb:{NFSU2_TR(0x4b02cb);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b02cd:{NFSU2_TR(0x4b02cd);
if(r1(R+518)){{goto L4b0353;}}
}
B4b02d3:L4b02d3:{c.instructions+=3;NFSU2_TR(0x4b02d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b02d6:{NFSU2_TR(0x4b02d6);
u8 U[4];
w4(U+0,u32(0x790edcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b02db:{NFSU2_TR(0x4b02db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b02e0ull));
TAIL_STATIC(0x43db50u,43d);
}
B4b02e0:L4b02e0:{c.instructions+=3;NFSU2_TR(0x4b02e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b02e1:{NFSU2_TR(0x4b02e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b02e2:{NFSU2_TR(0x4b02e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b02e7ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b02e7:L4b02e7:{c.instructions+=2;NFSU2_TR(0x4b02e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b02e8:{NFSU2_TR(0x4b02e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b02edull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b02ed:L4b02ed:{c.instructions+=3;NFSU2_TR(0x4b02ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b02f0:{NFSU2_TR(0x4b02f0);
u8 U[4];
w4(U+0,u32(0x790ec8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b02f5:{NFSU2_TR(0x4b02f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b02faull));
TAIL_STATIC(0x43db50u,43d);
}
B4b02fa:L4b02fa:{c.instructions+=3;NFSU2_TR(0x4b02fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b02fb:{NFSU2_TR(0x4b02fb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b02fc:{NFSU2_TR(0x4b02fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0301ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b0301:L4b0301:{c.instructions+=2;NFSU2_TR(0x4b0301);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0302:{NFSU2_TR(0x4b0302);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0307ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4b0307:L4b0307:{c.instructions+=3;NFSU2_TR(0x4b0307);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b030a:{NFSU2_TR(0x4b030a);
u8 U[4];
w4(U+0,u32(0xc9f7f7e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b030f:{NFSU2_TR(0x4b030f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0314ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4b0314:L4b0314:{c.instructions+=5;NFSU2_TR(0x4b0314);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4b0317:{NFSU2_TR(0x4b0317);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0318:{NFSU2_TR(0x4b0318);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b031d:{NFSU2_TR(0x4b031d);
u8 U[4];
w4(U+0,u32(0x790ec8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0322:{NFSU2_TR(0x4b0322);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0327ull));
TAIL_STATIC(0x43db50u,43d);
}
B4b0327:L4b0327:{c.instructions+=4;NFSU2_TR(0x4b0327);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b032a:{NFSU2_TR(0x4b032a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b032b:{NFSU2_TR(0x4b032b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b032c:{NFSU2_TR(0x4b032c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0331ull));
TAIL_STATIC(0x537b80u,537);
}
B4b0331:L4b0331:{c.instructions+=3;NFSU2_TR(0x4b0331);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b0334:{NFSU2_TR(0x4b0334);
u8 U[4];
w4(U+0,u32(0x790eb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0339:{NFSU2_TR(0x4b0339);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b033eull));
TAIL_STATIC(0x43db50u,43d);
}
B4b033e:L4b033e:{c.instructions+=3;NFSU2_TR(0x4b033e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b033f:{NFSU2_TR(0x4b033f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0340:{NFSU2_TR(0x4b0340);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0345ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b0345:L4b0345:{c.instructions+=2;NFSU2_TR(0x4b0345);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0346:{NFSU2_TR(0x4b0346);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b034bull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b034b:L4b034b:{c.instructions+=1;NFSU2_TR(0x4b034b);
w4(R+28,u32(0xf05704acull));
}
B4b0350:L4b0350:{c.instructions+=1;NFSU2_TR(0x4b0350);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4b0353:L4b0353:{c.instructions+=4;NFSU2_TR(0x4b0353);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0355:{NFSU2_TR(0x4b0355);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0357:{NFSU2_TR(0x4b0357);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0358:{NFSU2_TR(0x4b0358);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b035dull));
TAIL_STATIC(0x4901d0u,490);
}
B4b035d:L4b035d:{c.instructions+=3;NFSU2_TR(0x4b035d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4b0360:{NFSU2_TR(0x4b0360);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b0362:{NFSU2_TR(0x4b0362);
if(r1(R+518)){{goto L4b0374;}}
}
B4b0364:L4b0364:{c.instructions+=4;NFSU2_TR(0x4b0364);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b036a:{NFSU2_TR(0x4b036a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b036b:{NFSU2_TR(0x4b036b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b036c:{NFSU2_TR(0x4b036c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0371ull));
TAIL_STATIC(0x50c990u,50c);
}
B4b0371:L4b0371:{c.instructions+=1;NFSU2_TR(0x4b0371);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b0374:L4b0374:{c.instructions+=2;NFSU2_TR(0x4b0374);
u8 U[4];
w4(U+0,u32(0x790038ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0379:{NFSU2_TR(0x4b0379);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b037eull));
TAIL_STATIC(0x52cf60u,52c);
}
B4b037e:L4b037e:{c.instructions+=3;NFSU2_TR(0x4b037e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b0381:{NFSU2_TR(0x4b0381);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b0383:{NFSU2_TR(0x4b0383);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b049f;}}
}
B4b0389:L4b0389:{c.instructions+=6;NFSU2_TR(0x4b0389);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b038c:{NFSU2_TR(0x4b038c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b038e:{NFSU2_TR(0x4b038e);
u8 U[4];
w4(U+0,u32(0x78f758ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0393:{NFSU2_TR(0x4b0393);
u8 U[4];
w4(U+0,u32(0x26f1f64bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0398:{NFSU2_TR(0x4b0398);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0399:{NFSU2_TR(0x4b0399);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b039eull));
TAIL_STATIC(0x537c00u,537);
}
B4b039e:L4b039e:{c.instructions+=6;NFSU2_TR(0x4b039e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b03a1:{NFSU2_TR(0x4b03a1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b03a3:{NFSU2_TR(0x4b03a3);
u8 U[4];
w4(U+0,u32(0x78f758ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b03a8:{NFSU2_TR(0x4b03a8);
u8 U[4];
w4(U+0,u32(0x26f1f64cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b03ad:{NFSU2_TR(0x4b03ad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b03ae:{NFSU2_TR(0x4b03ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b03b3ull));
TAIL_STATIC(0x537c00u,537);
}
B4b03b3:L4b03b3:{c.instructions+=6;NFSU2_TR(0x4b03b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b03b6:{NFSU2_TR(0x4b03b6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b03b8:{NFSU2_TR(0x4b03b8);
u8 U[4];
w4(U+0,u32(0x790eb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b03bd:{NFSU2_TR(0x4b03bd);
u8 U[4];
w4(U+0,u32(0xdf422345ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b03c2:{NFSU2_TR(0x4b03c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b03c3:{NFSU2_TR(0x4b03c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b03c8ull));
TAIL_STATIC(0x537c00u,537);
}
B4b03c8:L4b03c8:{c.instructions+=4;NFSU2_TR(0x4b03c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b03cb:{NFSU2_TR(0x4b03cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B4b03ce:{NFSU2_TR(0x4b03ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b03d0:{NFSU2_TR(0x4b03d0);
if(r1(R+518)){{goto L4b03d7;}}
}
B4b03d2:L4b03d2:{c.instructions+=2;NFSU2_TR(0x4b03d2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
}
B4b03d5:{NFSU2_TR(0x4b03d5);
{goto L4b03d9;}
}
B4b03d7:L4b03d7:{c.instructions+=1;NFSU2_TR(0x4b03d7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b03d9:L4b03d9:{c.instructions+=3;NFSU2_TR(0x4b03d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b03dc:{NFSU2_TR(0x4b03dc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b03de:{NFSU2_TR(0x4b03de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b040f;}}
}
B4b03e0:L4b03e0:{c.instructions+=5;NFSU2_TR(0x4b03e0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b03e2:{NFSU2_TR(0x4b03e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b03e5:{NFSU2_TR(0x4b03e5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b03e7:{NFSU2_TR(0x4b03e7);
__builtin_memmove((R+4),(R+28),4);
}
B4b03e9:{NFSU2_TR(0x4b03e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b03eeull));
TAIL_STATIC(0x50d820u,50d);
}
B4b03ee:L4b03ee:{c.instructions+=4;NFSU2_TR(0x4b03ee);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b03f0:{NFSU2_TR(0x4b03f0);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b03f2:{NFSU2_TR(0x4b03f2);
__builtin_memmove((R+4),(R+28),4);
}
B4b03f4:{NFSU2_TR(0x4b03f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b03f9ull));
TAIL_STATIC(0x50d820u,50d);
}
B4b03f9:L4b03f9:{c.instructions+=4;NFSU2_TR(0x4b03f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b03fc:{NFSU2_TR(0x4b03fc);
u8 U[4];
w4(U+0,u32(0x26f1f64bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0401:{NFSU2_TR(0x4b0401);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0402:{NFSU2_TR(0x4b0402);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0407ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b0407:L4b0407:{c.instructions+=2;NFSU2_TR(0x4b0407);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0408:{NFSU2_TR(0x4b0408);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b040dull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b040d:L4b040d:{c.instructions+=1;NFSU2_TR(0x4b040d);
{goto L4b0488;}
}
B4b040f:L4b040f:{c.instructions+=3;NFSU2_TR(0x4b040f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b0412:{NFSU2_TR(0x4b0412);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b0414:{NFSU2_TR(0x4b0414);
if(r1(R+518)){{goto L4b041b;}}
}
B4b0416:L4b0416:{c.instructions+=2;NFSU2_TR(0x4b0416);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
}
B4b0419:{NFSU2_TR(0x4b0419);
{goto L4b041d;}
}
B4b041b:L4b041b:{c.instructions+=1;NFSU2_TR(0x4b041b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b041d:L4b041d:{c.instructions+=6;NFSU2_TR(0x4b041d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b041f:{NFSU2_TR(0x4b041f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b0422:{NFSU2_TR(0x4b0422);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b0424:{NFSU2_TR(0x4b0424);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0426:{NFSU2_TR(0x4b0426);
__builtin_memmove((R+4),(R+28),4);
}
B4b0428:{NFSU2_TR(0x4b0428);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b0464;}}
}
B4b042a:L4b042a:{c.instructions+=1;NFSU2_TR(0x4b042a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b042full));
TAIL_STATIC(0x50d820u,50d);
}
B4b042f:L4b042f:{c.instructions+=4;NFSU2_TR(0x4b042f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0431:{NFSU2_TR(0x4b0431);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0433:{NFSU2_TR(0x4b0433);
__builtin_memmove((R+4),(R+28),4);
}
B4b0435:{NFSU2_TR(0x4b0435);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b043aull));
TAIL_STATIC(0x50d820u,50d);
}
B4b043a:L4b043a:{c.instructions+=4;NFSU2_TR(0x4b043a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b043d:{NFSU2_TR(0x4b043d);
u8 U[4];
w4(U+0,u32(0x26f1f64bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0442:{NFSU2_TR(0x4b0442);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0443:{NFSU2_TR(0x4b0443);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0448ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b0448:L4b0448:{c.instructions+=2;NFSU2_TR(0x4b0448);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0449:{NFSU2_TR(0x4b0449);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b044eull));
TAIL_STATIC(0x50ca50u,50c);
}
B4b044e:L4b044e:{c.instructions+=4;NFSU2_TR(0x4b044e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b0451:{NFSU2_TR(0x4b0451);
u8 U[4];
w4(U+0,u32(0x26f1f64cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0456:{NFSU2_TR(0x4b0456);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0457:{NFSU2_TR(0x4b0457);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b045cull));
TAIL_STATIC(0x5379c0u,537);
}
B4b045c:L4b045c:{c.instructions+=2;NFSU2_TR(0x4b045c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b045d:{NFSU2_TR(0x4b045d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0462ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b0462:L4b0462:{c.instructions+=1;NFSU2_TR(0x4b0462);
{goto L4b049c;}
}
B4b0464:L4b0464:{c.instructions+=1;NFSU2_TR(0x4b0464);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0469ull));
TAIL_STATIC(0x50d820u,50d);
}
B4b0469:L4b0469:{c.instructions+=4;NFSU2_TR(0x4b0469);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b046b:{NFSU2_TR(0x4b046b);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b046d:{NFSU2_TR(0x4b046d);
__builtin_memmove((R+4),(R+28),4);
}
B4b046f:{NFSU2_TR(0x4b046f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0474ull));
TAIL_STATIC(0x50d820u,50d);
}
B4b0474:L4b0474:{c.instructions+=4;NFSU2_TR(0x4b0474);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b0477:{NFSU2_TR(0x4b0477);
u8 U[4];
w4(U+0,u32(0x26f1f64bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b047c:{NFSU2_TR(0x4b047c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b047d:{NFSU2_TR(0x4b047d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0482ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b0482:L4b0482:{c.instructions+=2;NFSU2_TR(0x4b0482);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0483:{NFSU2_TR(0x4b0483);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0488ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4b0488:L4b0488:{c.instructions+=4;NFSU2_TR(0x4b0488);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b048b:{NFSU2_TR(0x4b048b);
u8 U[4];
w4(U+0,u32(0x26f1f64cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0490:{NFSU2_TR(0x4b0490);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0491:{NFSU2_TR(0x4b0491);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0496ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b0496:L4b0496:{c.instructions+=2;NFSU2_TR(0x4b0496);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0497:{NFSU2_TR(0x4b0497);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b049cull));
TAIL_STATIC(0x50ca50u,50c);
}
B4b049c:L4b049c:{c.instructions+=1;NFSU2_TR(0x4b049c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4b049f:L4b049f:{c.instructions+=7;NFSU2_TR(0x4b049f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b04a2:{NFSU2_TR(0x4b04a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b04a5:{NFSU2_TR(0x4b04a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b04a6:{NFSU2_TR(0x4b04a6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b04a7:{NFSU2_TR(0x4b04a7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b04a9:{NFSU2_TR(0x4b04a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b04ac:{NFSU2_TR(0x4b04ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b04b1ull));
TAIL_STATIC(0x538080u,538);
}
B4b04b1:L4b04b1:{c.instructions+=5;NFSU2_TR(0x4b04b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b04b2:{NFSU2_TR(0x4b04b2);
__builtin_memmove((R+4),(R+24),4);
}
B4b04b4:{NFSU2_TR(0x4b04b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b04b5:{NFSU2_TR(0x4b04b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b04b6:{NFSU2_TR(0x4b04b6);
TAIL_STATIC(0x4962f0u,496);
}
B4b04c0:L4b04c0:{c.instructions+=8;NFSU2_TR(0x4b04c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b04c4:{NFSU2_TR(0x4b04c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b04c9:{NFSU2_TR(0x4b04c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b04ca:{NFSU2_TR(0x4b04ca);
__builtin_memmove((R+24),(R+4),4);
}
B4b04cc:{NFSU2_TR(0x4b04cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b04cf:{NFSU2_TR(0x4b04cf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b04d0:{NFSU2_TR(0x4b04d0);
__builtin_memmove((R+28),(R+4),4);
}
B4b04d2:{NFSU2_TR(0x4b04d2);
if(r1(R+518)){{goto L4b0545;}}
}
B4b04d4:L4b04d4:{c.instructions+=2;NFSU2_TR(0x4b04d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b04d9:{NFSU2_TR(0x4b04d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b05a7;}}
}
B4b04df:L4b04df:{c.instructions+=3;NFSU2_TR(0x4b04df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b04e2:{NFSU2_TR(0x4b04e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b04e4:{NFSU2_TR(0x4b04e4);
if(r1(R+518)){{goto L4b04eb;}}
}
B4b04e6:L4b04e6:{c.instructions+=2;NFSU2_TR(0x4b04e6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
}
B4b04e9:{NFSU2_TR(0x4b04e9);
{goto L4b04ed;}
}
B4b04eb:L4b04eb:{c.instructions+=1;NFSU2_TR(0x4b04eb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b04ed:L4b04ed:{c.instructions+=2;NFSU2_TR(0x4b04ed);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b04ef:{NFSU2_TR(0x4b04ef);
if(r1(R+518)){{goto L4b05a7;}}
}
B4b04f5:L4b04f5:{c.instructions+=6;NFSU2_TR(0x4b04f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b04f8:{NFSU2_TR(0x4b04f8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b04fa:{NFSU2_TR(0x4b04fa);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b04ff:{NFSU2_TR(0x4b04ff);
u8 U[4];
w4(U+0,u32(0x790e84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0504:{NFSU2_TR(0x4b0504);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0505:{NFSU2_TR(0x4b0505);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b050aull));
TAIL_STATIC(0x5426c0u,542);
}
B4b050a:L4b050a:{c.instructions+=5;NFSU2_TR(0x4b050a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b050d:{NFSU2_TR(0x4b050d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b0510:{NFSU2_TR(0x4b0510);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4b0513:{NFSU2_TR(0x4b0513);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b0515:{NFSU2_TR(0x4b0515);
if(r1(R+518)){{goto L4b051c;}}
}
B4b0517:L4b0517:{c.instructions+=2;NFSU2_TR(0x4b0517);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
}
B4b051a:{NFSU2_TR(0x4b051a);
{goto L4b051e;}
}
B4b051c:L4b051c:{c.instructions+=1;NFSU2_TR(0x4b051c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b051e:L4b051e:{c.instructions+=10;NFSU2_TR(0x4b051e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b0521:{NFSU2_TR(0x4b0521);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b0524:{NFSU2_TR(0x4b0524);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0525:{NFSU2_TR(0x4b0525);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b0528:{NFSU2_TR(0x4b0528);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b052b:{NFSU2_TR(0x4b052b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4b052c:{NFSU2_TR(0x4b052c);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b052e:{NFSU2_TR(0x4b052e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b052f:{NFSU2_TR(0x4b052f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b0532:{NFSU2_TR(0x4b0532);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0537ull));
TAIL_STATIC(0x50d150u,50d);
}
B4b0537:L4b0537:{c.instructions+=3;NFSU2_TR(0x4b0537);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B4b053d:{NFSU2_TR(0x4b053d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b0543:{NFSU2_TR(0x4b0543);
{goto L4b05a4;}
}
B4b0545:L4b0545:{c.instructions+=3;NFSU2_TR(0x4b0545);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b0548:{NFSU2_TR(0x4b0548);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b054a:{NFSU2_TR(0x4b054a);
if(r1(R+518)){{goto L4b0551;}}
}
B4b054c:L4b054c:{c.instructions+=2;NFSU2_TR(0x4b054c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
}
B4b054f:{NFSU2_TR(0x4b054f);
{goto L4b0553;}
}
B4b0551:L4b0551:{c.instructions+=1;NFSU2_TR(0x4b0551);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b0553:L4b0553:{c.instructions+=2;NFSU2_TR(0x4b0553);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b0555:{NFSU2_TR(0x4b0555);
if(r1(R+518)){{goto L4b05a7;}}
}
B4b0557:L4b0557:{c.instructions+=6;NFSU2_TR(0x4b0557);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b055a:{NFSU2_TR(0x4b055a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b055c:{NFSU2_TR(0x4b055c);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0561:{NFSU2_TR(0x4b0561);
u8 U[4];
w4(U+0,u32(0x790e98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0566:{NFSU2_TR(0x4b0566);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0567:{NFSU2_TR(0x4b0567);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b056cull));
TAIL_STATIC(0x5426c0u,542);
}
B4b056c:L4b056c:{c.instructions+=5;NFSU2_TR(0x4b056c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b056f:{NFSU2_TR(0x4b056f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b0572:{NFSU2_TR(0x4b0572);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4b0575:{NFSU2_TR(0x4b0575);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b0577:{NFSU2_TR(0x4b0577);
if(r1(R+518)){{goto L4b057e;}}
}
B4b0579:L4b0579:{c.instructions+=2;NFSU2_TR(0x4b0579);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
}
B4b057c:{NFSU2_TR(0x4b057c);
{goto L4b0580;}
}
B4b057e:L4b057e:{c.instructions+=1;NFSU2_TR(0x4b057e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b0580:L4b0580:{c.instructions+=10;NFSU2_TR(0x4b0580);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b0583:{NFSU2_TR(0x4b0583);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b0586:{NFSU2_TR(0x4b0586);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B4b0587:{NFSU2_TR(0x4b0587);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b058a:{NFSU2_TR(0x4b058a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b058d:{NFSU2_TR(0x4b058d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b058e:{NFSU2_TR(0x4b058e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0590:{NFSU2_TR(0x4b0590);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0591:{NFSU2_TR(0x4b0591);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b0594:{NFSU2_TR(0x4b0594);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0599ull));
TAIL_STATIC(0x50d150u,50d);
}
B4b0599:L4b0599:{c.instructions+=2;NFSU2_TR(0x4b0599);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B4b059e:{NFSU2_TR(0x4b059e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b05a4:L4b05a4:{c.instructions+=1;NFSU2_TR(0x4b05a4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4b05a7:L4b05a7:{c.instructions+=3;NFSU2_TR(0x4b05a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b05aa:{NFSU2_TR(0x4b05aa);
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
B4b05ac:{NFSU2_TR(0x4b05ac);
if(r1(R+518)){{goto L4b0669;}}
}
B4b05b2:L4b05b2:{c.instructions+=3;NFSU2_TR(0x4b05b2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x930ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4b05b8:{NFSU2_TR(0x4b05b8);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b05ba:{NFSU2_TR(0x4b05ba);
if(r1(R+518)){{goto L4b05c8;}}
}
B4b05bc:L4b05bc:{c.instructions+=2;NFSU2_TR(0x4b05bc);
w4(R+4,u32(0x8637d0ull));
}
B4b05c1:{NFSU2_TR(0x4b05c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b05c6ull));
TAIL_STATIC(0x53d8c0u,53d);
}
B4b05c6:L4b05c6:{c.instructions+=1;NFSU2_TR(0x4b05c6);
{goto L4b05f8;}
}
B4b05c8:L4b05c8:{c.instructions+=4;NFSU2_TR(0x4b05c8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x931ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4b05ce:{NFSU2_TR(0x4b05ce);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b05d0:{NFSU2_TR(0x4b05d0);
w4(R+4,u32(0x8637d0ull));
}
B4b05d5:{NFSU2_TR(0x4b05d5);
if(r1(R+518)){{goto L4b05de;}}
}
B4b05d7:L4b05d7:{c.instructions+=1;NFSU2_TR(0x4b05d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b05dcull));
TAIL_STATIC(0x53d8c0u,53d);
}
B4b05dc:L4b05dc:{c.instructions+=1;NFSU2_TR(0x4b05dc);
{goto L4b05f8;}
}
B4b05de:L4b05de:{c.instructions+=1;NFSU2_TR(0x4b05de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b05e3ull));
TAIL_STATIC(0x557ec0u,557);
}
B4b05e3:L4b05e3:{c.instructions+=3;NFSU2_TR(0x4b05e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b05e6:{NFSU2_TR(0x4b05e6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b05e8:{NFSU2_TR(0x4b05e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b05edull));
TAIL_STATIC(0x511e00u,511);
}
B4b05ed:L4b05ed:{c.instructions+=3;NFSU2_TR(0x4b05ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b05ee:{NFSU2_TR(0x4b05ee);
w4(R+4,u32(0x8637d0ull));
}
B4b05f3:{NFSU2_TR(0x4b05f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b05f8ull));
TAIL_STATIC(0x55b1a0u,55b);
}
B4b05f8:L4b05f8:{c.instructions+=5;NFSU2_TR(0x4b05f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b05fb:{NFSU2_TR(0x4b05fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x918ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b0601:{NFSU2_TR(0x4b0601);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x844ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b0607:{NFSU2_TR(0x4b0607);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b0609:{NFSU2_TR(0x4b0609);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b0662;}}
}
B4b060b:L4b060b:{c.instructions+=3;NFSU2_TR(0x4b060b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x840ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b0611:{NFSU2_TR(0x4b0611);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0616:{NFSU2_TR(0x4b0616);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b061bull));
TAIL_STATIC(0x52cf60u,52c);
}
B4b061b:L4b061b:{c.instructions+=3;NFSU2_TR(0x4b061b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b061e:{NFSU2_TR(0x4b061e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b0620:{NFSU2_TR(0x4b0620);
if(r1(R+518)){{goto L4b0631;}}
}
B4b0622:L4b0622:{c.instructions+=2;NFSU2_TR(0x4b0622);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0627:{NFSU2_TR(0x4b0627);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b062cull));
TAIL_STATIC(0x51bd10u,51b);
}
B4b062c:L4b062c:{c.instructions+=2;NFSU2_TR(0x4b062c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b062f:{NFSU2_TR(0x4b062f);
{goto L4b0656;}
}
B4b0631:L4b0631:{c.instructions+=2;NFSU2_TR(0x4b0631);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0636:{NFSU2_TR(0x4b0636);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b063bull));
TAIL_STATIC(0x52cf60u,52c);
}
B4b063b:L4b063b:{c.instructions+=3;NFSU2_TR(0x4b063b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b063e:{NFSU2_TR(0x4b063e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b0640:{NFSU2_TR(0x4b0640);
if(r1(R+518)){{goto L4b0662;}}
}
B4b0642:L4b0642:{c.instructions+=2;NFSU2_TR(0x4b0642);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0647:{NFSU2_TR(0x4b0647);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b064cull));
TAIL_STATIC(0x51bd10u,51b);
}
B4b064c:L4b064c:{c.instructions+=3;NFSU2_TR(0x4b064c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b064f:{NFSU2_TR(0x4b064f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b0651:{NFSU2_TR(0x4b0651);
if(r1(R+518)){{goto L4b0662;}}
}
B4b0653:L4b0653:{c.instructions+=1;NFSU2_TR(0x4b0653);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b0656:L4b0656:{c.instructions+=2;NFSU2_TR(0x4b0656);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b0658:{NFSU2_TR(0x4b0658);
if(r1(R+518)){{goto L4b0662;}}
}
B4b065a:L4b065a:{c.instructions+=3;NFSU2_TR(0x4b065a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b065b:{NFSU2_TR(0x4b065b);
__builtin_memmove((R+4),(R+0),4);
}
B4b065d:{NFSU2_TR(0x4b065d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0662ull));
TAIL_STATIC(0x4a5ee0u,4a5);
}
B4b0662:L4b0662:{c.instructions+=2;NFSU2_TR(0x4b0662);
__builtin_memmove((R+4),(R+24),4);
}
B4b0664:{NFSU2_TR(0x4b0664);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0669ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b0140u);}goto L4b0140;}
}
B4b0669:L4b0669:{c.instructions+=3;NFSU2_TR(0x4b0669);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b066a:{NFSU2_TR(0x4b066a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b066b:{NFSU2_TR(0x4b066b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b0670:L4b0670:{c.instructions+=7;NFSU2_TR(0x4b0670);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B4b0673:{NFSU2_TR(0x4b0673);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0674:{NFSU2_TR(0x4b0674);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0675:{NFSU2_TR(0x4b0675);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b0679:{NFSU2_TR(0x4b0679);
__builtin_memmove((R+24),(R+4),4);
}
B4b067b:{NFSU2_TR(0x4b067b);
__builtin_memmove((R+4),(R+28),4);
}
B4b067d:{NFSU2_TR(0x4b067d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0682ull));
TAIL_STATIC(0x500de0u,500);
}
B4b0682:L4b0682:{c.instructions+=2;NFSU2_TR(0x4b0682);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0683:{NFSU2_TR(0x4b0683);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0688ull));
TAIL_STATIC(0x4965f0u,496);
}
B4b0688:L4b0688:{c.instructions+=10;NFSU2_TR(0x4b0688);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b068b:{NFSU2_TR(0x4b068b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835f38ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4b0692:{NFSU2_TR(0x4b0692);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b0695:{NFSU2_TR(0x4b0695);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835f38ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B4b069c:{NFSU2_TR(0x4b069c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b069f:{NFSU2_TR(0x4b069f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b06a0:{NFSU2_TR(0x4b06a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f4348ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4b06a7:{NFSU2_TR(0x4b06a7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b06a8:{NFSU2_TR(0x4b06a8);
u8 U[4];
w4(U+0,u32(0x78f6f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b06ad:{NFSU2_TR(0x4b06ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b06b2ull));
TAIL_STATIC(0x50b990u,50b);
}
B4b06b2:L4b06b2:{c.instructions+=4;NFSU2_TR(0x4b06b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b06b6:{NFSU2_TR(0x4b06b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b06b7:{NFSU2_TR(0x4b06b7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b06b8:{NFSU2_TR(0x4b06b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b06bdull));
TAIL_STATIC(0x5379c0u,537);
}
B4b06bd:L4b06bd:{c.instructions+=5;NFSU2_TR(0x4b06bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b06c0:{NFSU2_TR(0x4b06c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4b06c2:{NFSU2_TR(0x4b06c2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4b06c5:{NFSU2_TR(0x4b06c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b06c7:{NFSU2_TR(0x4b06c7);
if(r1(R+518)){{goto L4b06e4;}}
}
B4b06c9:L4b06c9:{c.instructions+=3;NFSU2_TR(0x4b06c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b06cc:{NFSU2_TR(0x4b06cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b06ce:{NFSU2_TR(0x4b06ce);
if(r1(R+518)){{goto L4b06e4;}}
}
B4b06d0:L4b06d0:{c.instructions+=2;NFSU2_TR(0x4b06d0);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4b06d4:{NFSU2_TR(0x4b06d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b06e4;}}
}
B4b06d6:L4b06d6:{c.instructions+=3;NFSU2_TR(0x4b06d6);
u8 U[4];
w4(U+0,u32(0xb90f50bbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b06db:{NFSU2_TR(0x4b06db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b06dc:{NFSU2_TR(0x4b06dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b06e1ull));
TAIL_STATIC(0x50c990u,50c);
}
B4b06e1:L4b06e1:{c.instructions+=1;NFSU2_TR(0x4b06e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b06e4:L4b06e4:{c.instructions+=24;NFSU2_TR(0x4b06e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b06e6:{NFSU2_TR(0x4b06e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b06e9:{NFSU2_TR(0x4b06e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b06ec:{NFSU2_TR(0x4b06ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b06f0:{NFSU2_TR(0x4b06f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b06f3:{NFSU2_TR(0x4b06f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b06f7:{NFSU2_TR(0x4b06f7);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4b06fb:{NFSU2_TR(0x4b06fb);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4b06ff:{NFSU2_TR(0x4b06ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b0703:{NFSU2_TR(0x4b0703);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b0706:{NFSU2_TR(0x4b0706);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b070a:{NFSU2_TR(0x4b070a);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4b0710:{NFSU2_TR(0x4b0710);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b0711:{NFSU2_TR(0x4b0711);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b0718:{NFSU2_TR(0x4b0718);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4b071b:{NFSU2_TR(0x4b071b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b071f:{NFSU2_TR(0x4b071f);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4b0723:{NFSU2_TR(0x4b0723);
__builtin_memmove((R+0),(R+24),4);
}
B4b0725:{NFSU2_TR(0x4b0725);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4b0729:{NFSU2_TR(0x4b0729);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4b072f:{NFSU2_TR(0x4b072f);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4b0732:{NFSU2_TR(0x4b0732);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b0733:{NFSU2_TR(0x4b0733);
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
B4b0736:{NFSU2_TR(0x4b0736);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b0740:L4b0740:{c.instructions+=12;NFSU2_TR(0x4b0740);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0741:{NFSU2_TR(0x4b0741);
__builtin_memmove((R+24),(R+4),4);
}
B4b0743:{NFSU2_TR(0x4b0743);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0xeull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b074a:{NFSU2_TR(0x4b074a);
__builtin_memmove((R+0),gp(0x835f70),4);
}
B4b074f:{NFSU2_TR(0x4b074f);
__builtin_memmove((R+4),(R+0),4);
}
B4b0751:{NFSU2_TR(0x4b0751);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4b0752:{NFSU2_TR(0x4b0752);
__builtin_memmove(gp(0x835f70),(R+0),4);
}
B4b0757:{NFSU2_TR(0x4b0757);
__builtin_memmove((R+0),gp(0x7f4380),4);
}
B4b075c:{NFSU2_TR(0x4b075c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b075d:{NFSU2_TR(0x4b075d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b075e:{NFSU2_TR(0x4b075e);
u8 U[4];
w4(U+0,u32(0x78f6f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0763:{NFSU2_TR(0x4b0763);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0768ull));
TAIL_STATIC(0x50b990u,50b);
}
B4b0768:L4b0768:{c.instructions+=4;NFSU2_TR(0x4b0768);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b076c:{NFSU2_TR(0x4b076c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b076d:{NFSU2_TR(0x4b076d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b076e:{NFSU2_TR(0x4b076e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0773ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b0773:L4b0773:{c.instructions+=16;NFSU2_TR(0x4b0773);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b0776:{NFSU2_TR(0x4b0776);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b077a:{NFSU2_TR(0x4b077a);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4b077d:{NFSU2_TR(0x4b077d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b0780:{NFSU2_TR(0x4b0780);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4b0783:{NFSU2_TR(0x4b0783);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b0786:{NFSU2_TR(0x4b0786);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B4b078d:{NFSU2_TR(0x4b078d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b0791:{NFSU2_TR(0x4b0791);
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
B4b0794:{NFSU2_TR(0x4b0794);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b0798:{NFSU2_TR(0x4b0798);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4b079c:{NFSU2_TR(0x4b079c);
__builtin_memmove((R+0),(R+24),4);
}
B4b079e:{NFSU2_TR(0x4b079e);
{u32 ea_=u32(u32(7881280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4b07a4:{NFSU2_TR(0x4b07a4);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4b07a7:{NFSU2_TR(0x4b07a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b07a8:{NFSU2_TR(0x4b07a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b07b0:L4b07b0:{c.instructions+=7;NFSU2_TR(0x4b07b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b07b1:{NFSU2_TR(0x4b07b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b07b2:{NFSU2_TR(0x4b07b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4b07b5:{NFSU2_TR(0x4b07b5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b07b6:{NFSU2_TR(0x4b07b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b07b9:{NFSU2_TR(0x4b07b9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b07bb:{NFSU2_TR(0x4b07bb);
if(r1(R+518)){{goto L4b07d3;}}
}
B4b07bd:L4b07bd:{c.instructions+=1;NFSU2_TR(0x4b07bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4b07c1:L4b07c1:{c.instructions+=2;NFSU2_TR(0x4b07c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b07c4:{NFSU2_TR(0x4b07c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b07c9ull));
TAIL_STATIC(0x514160u,514);
}
B4b07c9:L4b07c9:{c.instructions+=2;NFSU2_TR(0x4b07c9);
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
B4b07cb:{NFSU2_TR(0x4b07cb);
if(r1(R+518)){{goto L4b07db;}}
}
B4b07cd:L4b07cd:{c.instructions+=3;NFSU2_TR(0x4b07cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4b07cf:{NFSU2_TR(0x4b07cf);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b07d1:{NFSU2_TR(0x4b07d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b07c1u);}goto L4b07c1;}}
}
B4b07d3:L4b07d3:{c.instructions+=5;NFSU2_TR(0x4b07d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b07d4:{NFSU2_TR(0x4b07d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b07d5:{NFSU2_TR(0x4b07d5);
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
B4b07d7:{NFSU2_TR(0x4b07d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b07d8:{NFSU2_TR(0x4b07d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b07db:L4b07db:{c.instructions+=5;NFSU2_TR(0x4b07db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b07dc:{NFSU2_TR(0x4b07dc);
__builtin_memmove((R+0),(R+24),4);
}
B4b07de:{NFSU2_TR(0x4b07de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b07df:{NFSU2_TR(0x4b07df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b07e0:{NFSU2_TR(0x4b07e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b07f0:L4b07f0:{c.instructions+=6;NFSU2_TR(0x4b07f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b07f1:{NFSU2_TR(0x4b07f1);
__builtin_memmove((R+24),(R+4),4);
}
B4b07f3:{NFSU2_TR(0x4b07f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b07f6:{NFSU2_TR(0x4b07f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b07f9:{NFSU2_TR(0x4b07f9);
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
B4b07fb:{NFSU2_TR(0x4b07fb);
if(r1(R+518)){{goto L4b084c;}}
}
B4b07fd:L4b07fd:{c.instructions+=2;NFSU2_TR(0x4b07fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b0801:{NFSU2_TR(0x4b0801);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0802:L4b0802:{c.instructions+=3;NFSU2_TR(0x4b0802);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b0805:{NFSU2_TR(0x4b0805);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4b0808:{NFSU2_TR(0x4b0808);
if(r1(R+518)){{goto L4b0815;}}
}
B4b080a:L4b080a:{c.instructions+=3;NFSU2_TR(0x4b080a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b080c:{NFSU2_TR(0x4b080c);
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
B4b080e:{NFSU2_TR(0x4b080e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b0802u);}goto L4b0802;}}
}
B4b0810:L4b0810:{c.instructions+=3;NFSU2_TR(0x4b0810);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b0811:{NFSU2_TR(0x4b0811);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b0812:{NFSU2_TR(0x4b0812);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b0815:L4b0815:{c.instructions+=4;NFSU2_TR(0x4b0815);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b0818:{NFSU2_TR(0x4b0818);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b081b:{NFSU2_TR(0x4b081b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b081c:{NFSU2_TR(0x4b081c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0821ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4b0821:L4b0821:{c.instructions+=9;NFSU2_TR(0x4b0821);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b0824:{NFSU2_TR(0x4b0824);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b0827:{NFSU2_TR(0x4b0827);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b082a:{NFSU2_TR(0x4b082a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b082d:{NFSU2_TR(0x4b082d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b0830:{NFSU2_TR(0x4b0830);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0831:{NFSU2_TR(0x4b0831);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0832:{NFSU2_TR(0x4b0832);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0833:{NFSU2_TR(0x4b0833);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0838ull));
TAIL_STATIC(0x51d4d0u,51d);
}
B4b0838:L4b0838:{c.instructions+=5;NFSU2_TR(0x4b0838);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b083b:{NFSU2_TR(0x4b083b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b083d:{NFSU2_TR(0x4b083d);
u8 U[4];
w4(U+0,u32(0x78f6bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0842:{NFSU2_TR(0x4b0842);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0843:{NFSU2_TR(0x4b0843);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0848ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4b0848:L4b0848:{c.instructions+=2;NFSU2_TR(0x4b0848);
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
B4b084b:{NFSU2_TR(0x4b084b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b084c:L4b084c:{c.instructions+=2;NFSU2_TR(0x4b084c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b084d:{NFSU2_TR(0x4b084d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b0850:L4b0850:{c.instructions+=9;NFSU2_TR(0x4b0850);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0851:{NFSU2_TR(0x4b0851);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0852:{NFSU2_TR(0x4b0852);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0853:{NFSU2_TR(0x4b0853);
__builtin_memmove((R+24),(R+4),4);
}
B4b0855:{NFSU2_TR(0x4b0855);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b0858:{NFSU2_TR(0x4b0858);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4b085a:{NFSU2_TR(0x4b085a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b085c:{NFSU2_TR(0x4b085c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b085d:{NFSU2_TR(0x4b085d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b08ba;}}
}
B4b085f:L4b085f:{c.instructions+=3;NFSU2_TR(0x4b085f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b0863:{NFSU2_TR(0x4b0863);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b0866:{NFSU2_TR(0x4b0866);
if(r1(R+518)){{goto L4b0879;}}
}
B4b0868:L4b0868:{c.instructions+=2;NFSU2_TR(0x4b0868);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0869:{NFSU2_TR(0x4b0869);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b086eull));
TAIL_STATIC(0x4964d0u,496);
}
B4b086e:L4b086e:{c.instructions+=3;NFSU2_TR(0x4b086e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b0871:{NFSU2_TR(0x4b0871);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b0873:{NFSU2_TR(0x4b0873);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b0970;}}
}
B4b0879:L4b0879:{c.instructions+=4;NFSU2_TR(0x4b0879);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b087c:{NFSU2_TR(0x4b087c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+20),(U+0),4);
}
B4b087f:{NFSU2_TR(0x4b087f);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b0881:{NFSU2_TR(0x4b0881);
if(r1(R+518)){{goto L4b0970;}}
}
B4b0887:L4b0887:{c.instructions+=2;NFSU2_TR(0x4b0887);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b088a:{NFSU2_TR(0x4b088a);
if(r1(R+518)){{goto L4b0894;}}
}
B4b088c:L4b088c:{c.instructions+=3;NFSU2_TR(0x4b088c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b088f:{NFSU2_TR(0x4b088f);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4b0892:{NFSU2_TR(0x4b0892);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b08a8;}}
}
B4b0894:L4b0894:{c.instructions+=4;NFSU2_TR(0x4b0894);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b0897:{NFSU2_TR(0x4b0897);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b089a:{NFSU2_TR(0x4b089a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b089b:{NFSU2_TR(0x4b089b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b08a0ull));
TAIL_STATIC(0x496760u,496);
}
B4b08a0:L4b08a0:{c.instructions+=2;NFSU2_TR(0x4b08a0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b08a2:{NFSU2_TR(0x4b08a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b08b3;}}
}
B4b08a4:L4b08a4:{c.instructions+=1;NFSU2_TR(0x4b08a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b08a8:L4b08a8:{c.instructions+=3;NFSU2_TR(0x4b08a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B4b08aa:{NFSU2_TR(0x4b08aa);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b08ac:{NFSU2_TR(0x4b08ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b0887u);}goto L4b0887;}}
}
B4b08ae:L4b08ae:{c.instructions+=1;NFSU2_TR(0x4b08ae);
{goto L4b0970;}
}
B4b08b3:L4b08b3:{c.instructions+=2;NFSU2_TR(0x4b08b3);
__builtin_memmove((R+12),(R+28),4);
}
B4b08b5:{NFSU2_TR(0x4b08b5);
{goto L4b0970;}
}
B4b08ba:L4b08ba:{c.instructions+=3;NFSU2_TR(0x4b08ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b08be:{NFSU2_TR(0x4b08be);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b08c1:{NFSU2_TR(0x4b08c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b0915;}}
}
B4b08c3:L4b08c3:{c.instructions+=3;NFSU2_TR(0x4b08c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4b08c7:{NFSU2_TR(0x4b08c7);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b08ca:{NFSU2_TR(0x4b08ca);
if(r1(R+518)){{goto L4b08e0;}}
}
B4b08cc:L4b08cc:{c.instructions+=2;NFSU2_TR(0x4b08cc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b08cd:{NFSU2_TR(0x4b08cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b08d2ull));
TAIL_STATIC(0x4964d0u,496);
}
B4b08d2:L4b08d2:{c.instructions+=3;NFSU2_TR(0x4b08d2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b08d5:{NFSU2_TR(0x4b08d5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b08d7:{NFSU2_TR(0x4b08d7);
if(r1(R+518)){{goto L4b08e0;}}
}
B4b08d9:L4b08d9:{c.instructions+=2;NFSU2_TR(0x4b08d9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4b08db:{NFSU2_TR(0x4b08db);
{goto L4b0970;}
}
B4b08e0:L4b08e0:{c.instructions+=2;NFSU2_TR(0x4b08e0);
__builtin_memmove((R+12),(R+8),4);
}
B4b08e2:{NFSU2_TR(0x4b08e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b08e5:L4b08e5:{c.instructions+=3;NFSU2_TR(0x4b08e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b08e7:{NFSU2_TR(0x4b08e7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b08e9:{NFSU2_TR(0x4b08e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b08ed;}}
}
B4b08eb:L4b08eb:{c.instructions+=1;NFSU2_TR(0x4b08eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b08ed:L4b08ed:{c.instructions+=3;NFSU2_TR(0x4b08ed);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4b08f0:{NFSU2_TR(0x4b08f0);
__builtin_memmove((R+12),(R+0),4);
}
B4b08f2:{NFSU2_TR(0x4b08f2);
if(r1(R+518)){{goto L4b0970;}}
}
B4b08f4:L4b08f4:{c.instructions+=2;NFSU2_TR(0x4b08f4);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b08f7:{NFSU2_TR(0x4b08f7);
if(r1(R+518)){{goto L4b0901;}}
}
B4b08f9:L4b08f9:{c.instructions+=3;NFSU2_TR(0x4b08f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b08fc:{NFSU2_TR(0x4b08fc);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4b08ff:{NFSU2_TR(0x4b08ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b08e5u);}goto L4b08e5;}}
}
B4b0901:L4b0901:{c.instructions+=5;NFSU2_TR(0x4b0901);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b0904:{NFSU2_TR(0x4b0904);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b0907:{NFSU2_TR(0x4b0907);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0908:{NFSU2_TR(0x4b0908);
__builtin_memmove((R+4),(R+0),4);
}
B4b090a:{NFSU2_TR(0x4b090a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b090full));
TAIL_STATIC(0x496760u,496);
}
B4b090f:L4b090f:{c.instructions+=2;NFSU2_TR(0x4b090f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b0911:{NFSU2_TR(0x4b0911);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b08e5u);}goto L4b08e5;}}
}
B4b0913:L4b0913:{c.instructions+=1;NFSU2_TR(0x4b0913);
{goto L4b0970;}
}
B4b0915:L4b0915:{c.instructions+=2;NFSU2_TR(0x4b0915);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b0918:{NFSU2_TR(0x4b0918);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b0970;}}
}
B4b091a:L4b091a:{c.instructions+=3;NFSU2_TR(0x4b091a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4b091e:{NFSU2_TR(0x4b091e);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b0921:{NFSU2_TR(0x4b0921);
if(r1(R+518)){{goto L4b0934;}}
}
B4b0923:L4b0923:{c.instructions+=2;NFSU2_TR(0x4b0923);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0924:{NFSU2_TR(0x4b0924);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0929ull));
TAIL_STATIC(0x4964d0u,496);
}
B4b0929:L4b0929:{c.instructions+=3;NFSU2_TR(0x4b0929);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b092c:{NFSU2_TR(0x4b092c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b092e:{NFSU2_TR(0x4b092e);
if(r1(R+518)){{goto L4b0934;}}
}
B4b0930:L4b0930:{c.instructions+=2;NFSU2_TR(0x4b0930);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4b0932:{NFSU2_TR(0x4b0932);
{goto L4b0970;}
}
B4b0934:L4b0934:{c.instructions+=3;NFSU2_TR(0x4b0934);
__builtin_memmove((R+12),(R+8),4);
}
B4b0936:{NFSU2_TR(0x4b0936);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b0939:{NFSU2_TR(0x4b0939);
__builtin_memmove((R+16),(R+16),4);
}
B4b0940:L4b0940:{c.instructions+=3;NFSU2_TR(0x4b0940);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b0943:{NFSU2_TR(0x4b0943);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b0945:{NFSU2_TR(0x4b0945);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b094a;}}
}
B4b0947:L4b0947:{c.instructions+=1;NFSU2_TR(0x4b0947);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b094a:L4b094a:{c.instructions+=3;NFSU2_TR(0x4b094a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4b094d:{NFSU2_TR(0x4b094d);
__builtin_memmove((R+12),(R+0),4);
}
B4b094f:{NFSU2_TR(0x4b094f);
if(r1(R+518)){{goto L4b0970;}}
}
B4b0951:L4b0951:{c.instructions+=2;NFSU2_TR(0x4b0951);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b0954:{NFSU2_TR(0x4b0954);
if(r1(R+518)){{goto L4b095e;}}
}
B4b0956:L4b0956:{c.instructions+=3;NFSU2_TR(0x4b0956);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b0959:{NFSU2_TR(0x4b0959);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4b095c:{NFSU2_TR(0x4b095c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b0940u);}goto L4b0940;}}
}
B4b095e:L4b095e:{c.instructions+=5;NFSU2_TR(0x4b095e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b0961:{NFSU2_TR(0x4b0961);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b0964:{NFSU2_TR(0x4b0964);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0965:{NFSU2_TR(0x4b0965);
__builtin_memmove((R+4),(R+0),4);
}
B4b0967:{NFSU2_TR(0x4b0967);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b096cull));
TAIL_STATIC(0x496760u,496);
}
B4b096c:L4b096c:{c.instructions+=2;NFSU2_TR(0x4b096c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b096e:{NFSU2_TR(0x4b096e);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b0940u);}goto L4b0940;}}
}
B4b0970:L4b0970:{c.instructions+=2;NFSU2_TR(0x4b0970);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4b0973:{NFSU2_TR(0x4b0973);
if(r1(R+518)){{goto L4b098c;}}
}
B4b0975:L4b0975:{c.instructions+=3;NFSU2_TR(0x4b0975);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4b097a:{NFSU2_TR(0x4b097a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b097c:{NFSU2_TR(0x4b097c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b0982;}}
}
B4b097e:L4b097e:{c.instructions+=2;NFSU2_TR(0x4b097e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0980:{NFSU2_TR(0x4b0980);
{goto L4b0984;}
}
B4b0982:L4b0982:{c.instructions+=1;NFSU2_TR(0x4b0982);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0984:L4b0984:{c.instructions+=1;NFSU2_TR(0x4b0984);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0989ull));
TAIL_STATIC(0x51de30u,51d);
}
B4b0989:L4b0989:{c.instructions+=1;NFSU2_TR(0x4b0989);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b098c:L4b098c:{c.instructions+=5;NFSU2_TR(0x4b098c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b098e:{NFSU2_TR(0x4b098e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b0991:{NFSU2_TR(0x4b0991);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b0994:{NFSU2_TR(0x4b0994);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0995:{NFSU2_TR(0x4b0995);
if(r1(R+518)){{goto L4b09cd;}}
}
B4b0997:L4b0997:{c.instructions+=1;NFSU2_TR(0x4b0997);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b099cull));
TAIL_STATIC(0x50ca50u,50c);
}
B4b099c:L4b099c:{c.instructions+=9;NFSU2_TR(0x4b099c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b099f:{NFSU2_TR(0x4b099f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b09a2:{NFSU2_TR(0x4b09a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b09a5:{NFSU2_TR(0x4b09a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b09a8:{NFSU2_TR(0x4b09a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b09ab:{NFSU2_TR(0x4b09ab);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b09ac:{NFSU2_TR(0x4b09ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b09ad:{NFSU2_TR(0x4b09ad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b09ae:{NFSU2_TR(0x4b09ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b09b3ull));
TAIL_STATIC(0x51d4d0u,51d);
}
B4b09b3:L4b09b3:{c.instructions+=5;NFSU2_TR(0x4b09b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b09b6:{NFSU2_TR(0x4b09b6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b09b8:{NFSU2_TR(0x4b09b8);
u8 U[4];
w4(U+0,u32(0x78f6bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b09bd:{NFSU2_TR(0x4b09bd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b09be:{NFSU2_TR(0x4b09be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b09c3ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4b09c3:L4b09c3:{c.instructions+=6;NFSU2_TR(0x4b09c3);
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
B4b09c6:{NFSU2_TR(0x4b09c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b09c7:{NFSU2_TR(0x4b09c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b09c8:{NFSU2_TR(0x4b09c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4b09c9:{NFSU2_TR(0x4b09c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b09ca:{NFSU2_TR(0x4b09ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b09cd:L4b09cd:{c.instructions+=1;NFSU2_TR(0x4b09cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b09d2ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b09d2:L4b09d2:{c.instructions+=6;NFSU2_TR(0x4b09d2);
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
B4b09d5:{NFSU2_TR(0x4b09d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b09d6:{NFSU2_TR(0x4b09d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b09d7:{NFSU2_TR(0x4b09d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4b09d8:{NFSU2_TR(0x4b09d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b09d9:{NFSU2_TR(0x4b09d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b09e0:L4b09e0:{c.instructions+=9;NFSU2_TR(0x4b09e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x50ull))));
}
B4b09e3:{NFSU2_TR(0x4b09e3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b09e4:{NFSU2_TR(0x4b09e4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b09e5:{NFSU2_TR(0x4b09e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b09e6:{NFSU2_TR(0x4b09e6);
__builtin_memmove((R+28),(R+4),4);
}
B4b09e8:{NFSU2_TR(0x4b09e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b09eb:{NFSU2_TR(0x4b09eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b09ed:{NFSU2_TR(0x4b09ed);
__builtin_memmove((R+4),gp(0x89e7a0),4);
}
B4b09f3:{NFSU2_TR(0x4b09f3);
if(r1(R+518)){{goto L4b0a00;}}
}
B4b09f5:L4b09f5:{c.instructions+=3;NFSU2_TR(0x4b09f5);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B4b09fc:{NFSU2_TR(0x4b09fc);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b09fe:{NFSU2_TR(0x4b09fe);
if(r1(R+518)){{goto L4b0a0c;}}
}
B4b0a00:L4b0a00:{c.instructions+=2;NFSU2_TR(0x4b0a00);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0a01:{NFSU2_TR(0x4b0a01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0a06ull));
TAIL_STATIC(0x5d3e40u,5d3);
}
B4b0a06:L4b0a06:{c.instructions+=2;NFSU2_TR(0x4b0a06);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b0a09:{NFSU2_TR(0x4b0a09);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b0a0c:L4b0a0c:{c.instructions+=63;NFSU2_TR(0x4b0a0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b0a0f:{NFSU2_TR(0x4b0a0f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B4b0a12:{NFSU2_TR(0x4b0a12);
{u32 ea_=u32(r4(R+0)+u32(8340176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4b0a18:{NFSU2_TR(0x4b0a18);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b0a1b:{NFSU2_TR(0x4b0a1b);
{u32 ea_=u32(u32(7928012u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4b0a21:{NFSU2_TR(0x4b0a21);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b0a27:{NFSU2_TR(0x4b0a27);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b0a2b:{NFSU2_TR(0x4b0a2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b0a2f:{NFSU2_TR(0x4b0a2f);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4b0a33:{NFSU2_TR(0x4b0a33);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b0a39:{NFSU2_TR(0x4b0a39);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4b0a3d:{NFSU2_TR(0x4b0a3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b0a43:{NFSU2_TR(0x4b0a43);
{u32 ea_=u32(r4(R+0)+u32(8340176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4b0a49:{NFSU2_TR(0x4b0a49);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b0a4d:{NFSU2_TR(0x4b0a4d);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4b0a53:{NFSU2_TR(0x4b0a53);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b0a57:{NFSU2_TR(0x4b0a57);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4b0a5a:{NFSU2_TR(0x4b0a5a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0a5c:{NFSU2_TR(0x4b0a5c);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4b0a5e:{NFSU2_TR(0x4b0a5e);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4b0a62:{NFSU2_TR(0x4b0a62);
{u32 ea_=u32(r4(R+0)+u32(8340168u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4b0a68:{NFSU2_TR(0x4b0a68);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0a69:{NFSU2_TR(0x4b0a69);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0a6b:{NFSU2_TR(0x4b0a6b);
__builtin_memmove((R+4),(R+24),4);
}
B4b0a6d:{NFSU2_TR(0x4b0a6d);
{u32 ea_=u32(u32(7905676u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4b0a73:{NFSU2_TR(0x4b0a73);
{u32 ea_=u32(u32(7905676u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4b0a79:{NFSU2_TR(0x4b0a79);
{u32 ea_=u32(u32(7928012u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4b0a7f:{NFSU2_TR(0x4b0a7f);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4b0a83:{NFSU2_TR(0x4b0a83);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4b0a87:{NFSU2_TR(0x4b0a87);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4b0a89:{NFSU2_TR(0x4b0a89);
{u32 ea_=u32(r4(R+0)+u32(8340172u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4b0a8f:{NFSU2_TR(0x4b0a8f);
{u32 ea_=u32(u32(7905676u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4b0a95:{NFSU2_TR(0x4b0a95);
{u32 ea_=u32(u32(7905676u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4b0a9b:{NFSU2_TR(0x4b0a9b);
{u32 ea_=u32(u32(7928012u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4b0aa1:{NFSU2_TR(0x4b0aa1);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4b0aa5:{NFSU2_TR(0x4b0aa5);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4b0aa9:{NFSU2_TR(0x4b0aa9);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4b0aad:{NFSU2_TR(0x4b0aad);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4b0ab3:{NFSU2_TR(0x4b0ab3);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4b0ab7:{NFSU2_TR(0x4b0ab7);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4b0abb:{NFSU2_TR(0x4b0abb);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4b0abf:{NFSU2_TR(0x4b0abf);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4b0ac3:{NFSU2_TR(0x4b0ac3);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4b0ac7:{NFSU2_TR(0x4b0ac7);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4b0acd:{NFSU2_TR(0x4b0acd);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4b0ad1:{NFSU2_TR(0x4b0ad1);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4b0ad5:{NFSU2_TR(0x4b0ad5);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4b0ad9:{NFSU2_TR(0x4b0ad9);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4b0add:{NFSU2_TR(0x4b0add);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4b0ae1:{NFSU2_TR(0x4b0ae1);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4b0ae5:{NFSU2_TR(0x4b0ae5);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4b0ae9:{NFSU2_TR(0x4b0ae9);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4b0aef:{NFSU2_TR(0x4b0aef);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4b0af3:{NFSU2_TR(0x4b0af3);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4b0af7:{NFSU2_TR(0x4b0af7);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4b0afb:{NFSU2_TR(0x4b0afb);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4b0aff:{NFSU2_TR(0x4b0aff);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4b0b03:{NFSU2_TR(0x4b0b03);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4b0b09:{NFSU2_TR(0x4b0b09);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4b0b0d:{NFSU2_TR(0x4b0b0d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4b0b11:{NFSU2_TR(0x4b0b11);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4b0b15:{NFSU2_TR(0x4b0b15);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4b0b19:{NFSU2_TR(0x4b0b19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0b1eull));
TAIL_STATIC(0x5179d0u,517);
}
B4b0b1e:L4b0b1e:{c.instructions+=17;NFSU2_TR(0x4b0b1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b0b21:{NFSU2_TR(0x4b0b21);
w4(R+12,u32(0x400000ull));
}
B4b0b26:{NFSU2_TR(0x4b0b26);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+12))));
}
B4b0b28:{NFSU2_TR(0x4b0b28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b0b2b:{NFSU2_TR(0x4b0b2b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4b0b2f:{NFSU2_TR(0x4b0b2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4b0b32:{NFSU2_TR(0x4b0b32);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4b0b36:{NFSU2_TR(0x4b0b36);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0b38:{NFSU2_TR(0x4b0b38);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4b0b3c:{NFSU2_TR(0x4b0b3c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0b3d:{NFSU2_TR(0x4b0b3d);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4b0b41:{NFSU2_TR(0x4b0b41);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4b0b45:{NFSU2_TR(0x4b0b45);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0b47:{NFSU2_TR(0x4b0b47);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4b0b4b:{NFSU2_TR(0x4b0b4b);
__builtin_memmove((R+4),(R+24),4);
}
B4b0b4d:{NFSU2_TR(0x4b0b4d);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4b0b51:{NFSU2_TR(0x4b0b51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0b56ull));
TAIL_STATIC(0x5179d0u,517);
}
B4b0b56:L4b0b56:{c.instructions+=10;NFSU2_TR(0x4b0b56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b0b59:{NFSU2_TR(0x4b0b59);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+12))));
}
B4b0b5b:{NFSU2_TR(0x4b0b5b);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4b0b5f:{NFSU2_TR(0x4b0b5f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0b60:{NFSU2_TR(0x4b0b60);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4b0b64:{NFSU2_TR(0x4b0b64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b0b67:{NFSU2_TR(0x4b0b67);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b0b6a:{NFSU2_TR(0x4b0b6a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0b6b:{NFSU2_TR(0x4b0b6b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0b6c:{NFSU2_TR(0x4b0b6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0b71ull));
TAIL_STATIC(0x51d620u,51d);
}
B4b0b71:L4b0b71:{c.instructions+=7;NFSU2_TR(0x4b0b71);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b0b74:{NFSU2_TR(0x4b0b74);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4b0b78:{NFSU2_TR(0x4b0b78);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0b79:{NFSU2_TR(0x4b0b79);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4b0b7d:{NFSU2_TR(0x4b0b7d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0b7e:{NFSU2_TR(0x4b0b7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0b7f:{NFSU2_TR(0x4b0b7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0b84ull));
TAIL_STATIC(0x51d620u,51d);
}
B4b0b84:L4b0b84:{c.instructions+=7;NFSU2_TR(0x4b0b84);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b0b87:{NFSU2_TR(0x4b0b87);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4b0b8b:{NFSU2_TR(0x4b0b8b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0b8c:{NFSU2_TR(0x4b0b8c);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4b0b90:{NFSU2_TR(0x4b0b90);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0b91:{NFSU2_TR(0x4b0b91);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0b92:{NFSU2_TR(0x4b0b92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0b97ull));
TAIL_STATIC(0x51d730u,51d);
}
B4b0b97:L4b0b97:{c.instructions+=7;NFSU2_TR(0x4b0b97);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b0b9a:{NFSU2_TR(0x4b0b9a);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4b0b9e:{NFSU2_TR(0x4b0b9e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0b9f:{NFSU2_TR(0x4b0b9f);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4b0ba3:{NFSU2_TR(0x4b0ba3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0ba4:{NFSU2_TR(0x4b0ba4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0ba5:{NFSU2_TR(0x4b0ba5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0baaull));
TAIL_STATIC(0x51d730u,51d);
}
B4b0baa:L4b0baa:{c.instructions+=5;NFSU2_TR(0x4b0baa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4b0bad:{NFSU2_TR(0x4b0bad);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b0bb0:{NFSU2_TR(0x4b0bb0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B4b0bb3:{NFSU2_TR(0x4b0bb3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b0bb5:{NFSU2_TR(0x4b0bb5);
if(r1(R+518)){{goto L4b0d49;}}
}
B4b0bbb:L4b0bbb:{c.instructions+=7;NFSU2_TR(0x4b0bbb);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4b0bc1:{NFSU2_TR(0x4b0bc1);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4b0bc5:{NFSU2_TR(0x4b0bc5);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4b0bc9:{NFSU2_TR(0x4b0bc9);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4b0bcf:{NFSU2_TR(0x4b0bcf);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4b0bd3:{NFSU2_TR(0x4b0bd3);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4b0bd7:{NFSU2_TR(0x4b0bd7);
{goto L4b0be0;}
}
B4b0be0:L4b0be0:{c.instructions+=9;NFSU2_TR(0x4b0be0);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4b0be3:{NFSU2_TR(0x4b0be3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b0be6:{NFSU2_TR(0x4b0be6);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4b0bea:{NFSU2_TR(0x4b0bea);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4b0bed:{NFSU2_TR(0x4b0bed);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0bee:{NFSU2_TR(0x4b0bee);
{u32 ea_=u32(u32(7881300u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4b0bf4:{NFSU2_TR(0x4b0bf4);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b0bf8:{NFSU2_TR(0x4b0bf8);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4b0bfb:{NFSU2_TR(0x4b0bfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0c00ull));
TAIL_STATIC(0x43c350u,43c);
}
B4b0c00:L4b0c00:{c.instructions+=4;NFSU2_TR(0x4b0c00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b0c03:{NFSU2_TR(0x4b0c03);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4b0c07:{NFSU2_TR(0x4b0c07);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0c08:{NFSU2_TR(0x4b0c08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0c0dull));
TAIL_STATIC(0x43c350u,43c);
}
B4b0c0d:L4b0c0d:{c.instructions+=29;NFSU2_TR(0x4b0c0d);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4b0c11:{NFSU2_TR(0x4b0c11);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4b0c15:{NFSU2_TR(0x4b0c15);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b0c19:{NFSU2_TR(0x4b0c19);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4b0c1d:{NFSU2_TR(0x4b0c1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b0c21:{NFSU2_TR(0x4b0c21);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0c22:{NFSU2_TR(0x4b0c22);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0c23:{NFSU2_TR(0x4b0c23);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4b0c27:{NFSU2_TR(0x4b0c27);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4b0c2b:{NFSU2_TR(0x4b0c2b);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4b0c2f:{NFSU2_TR(0x4b0c2f);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4b0c33:{NFSU2_TR(0x4b0c33);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4b0c37:{NFSU2_TR(0x4b0c37);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4b0c3b:{NFSU2_TR(0x4b0c3b);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4b0c3f:{NFSU2_TR(0x4b0c3f);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4b0c43:{NFSU2_TR(0x4b0c43);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4b0c49:{NFSU2_TR(0x4b0c49);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4b0c4b:{NFSU2_TR(0x4b0c4b);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B4b0c4d:{NFSU2_TR(0x4b0c4d);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4b0c51:{NFSU2_TR(0x4b0c51);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4b0c55:{NFSU2_TR(0x4b0c55);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4b0c59:{NFSU2_TR(0x4b0c59);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4b0c5b:{NFSU2_TR(0x4b0c5b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4b0c61:{NFSU2_TR(0x4b0c61);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B4b0c63:{NFSU2_TR(0x4b0c63);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4b0c67:{NFSU2_TR(0x4b0c67);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4b0c6b:{NFSU2_TR(0x4b0c6b);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4b0c6f:{NFSU2_TR(0x4b0c6f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4b0c71:{NFSU2_TR(0x4b0c71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0c76ull));
TAIL_STATIC(0x43e6d0u,43e);
}
B4b0c76:L4b0c76:{c.instructions+=15;NFSU2_TR(0x4b0c76);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b0c7a:{NFSU2_TR(0x4b0c7a);
w4(R+8,u32(r2(R+0)));
}
B4b0c7d:{NFSU2_TR(0x4b0c7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b0c81:{NFSU2_TR(0x4b0c81);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b0c85:{NFSU2_TR(0x4b0c85);
__builtin_memmove((R+8),(R+4),4);
}
B4b0c87:{NFSU2_TR(0x4b0c87);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0c88:{NFSU2_TR(0x4b0c88);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4b0c8c:{NFSU2_TR(0x4b0c8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b0c8f:{NFSU2_TR(0x4b0c8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b0c92:{NFSU2_TR(0x4b0c92);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0c93:{NFSU2_TR(0x4b0c93);
{u32 ea_=u32(u32(7881288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4b0c99:{NFSU2_TR(0x4b0c99);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0c9a:{NFSU2_TR(0x4b0c9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b0c9d:{NFSU2_TR(0x4b0c9d);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4b0ca1:{NFSU2_TR(0x4b0ca1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0ca6ull));
TAIL_STATIC(0x51d4d0u,51d);
}
B4b0ca6:L4b0ca6:{c.instructions+=7;NFSU2_TR(0x4b0ca6);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b0caa:{NFSU2_TR(0x4b0caa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b0cad:{NFSU2_TR(0x4b0cad);
__builtin_memmove((R+0),(R+8),4);
}
B4b0caf:{NFSU2_TR(0x4b0caf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0cb0:{NFSU2_TR(0x4b0cb0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0cb1:{NFSU2_TR(0x4b0cb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b0cb4:{NFSU2_TR(0x4b0cb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0cb9ull));
TAIL_STATIC(0x51ced0u,51c);
}
B4b0cb9:L4b0cb9:{c.instructions+=5;NFSU2_TR(0x4b0cb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b0cbc:{NFSU2_TR(0x4b0cbc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4b0cbf:{NFSU2_TR(0x4b0cbf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0cc0:{NFSU2_TR(0x4b0cc0);
__builtin_memmove((R+4),(R+24),4);
}
B4b0cc2:{NFSU2_TR(0x4b0cc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0cc7ull));
TAIL_STATIC(0x496760u,496);
}
B4b0cc7:L4b0cc7:{c.instructions+=2;NFSU2_TR(0x4b0cc7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b0cc9:{NFSU2_TR(0x4b0cc9);
if(r1(R+518)){{goto L4b0cef;}}
}
B4b0ccb:L4b0ccb:{c.instructions+=3;NFSU2_TR(0x4b0ccb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b0cce:{NFSU2_TR(0x4b0cce);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b0cd1:{NFSU2_TR(0x4b0cd1);
if(r1(R+518)){{goto L4b0ceb;}}
}
B4b0cd3:L4b0cd3:{c.instructions+=2;NFSU2_TR(0x4b0cd3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b0cd6:{NFSU2_TR(0x4b0cd6);
if(r1(R+518)){{goto L4b0ceb;}}
}
B4b0cd8:L4b0cd8:{c.instructions+=2;NFSU2_TR(0x4b0cd8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0cd9:{NFSU2_TR(0x4b0cd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0cdeull));
TAIL_STATIC(0x4964d0u,496);
}
B4b0cde:L4b0cde:{c.instructions+=6;NFSU2_TR(0x4b0cde);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b0ce1:{NFSU2_TR(0x4b0ce1);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B4b0ce3:{NFSU2_TR(0x4b0ce3);
u8 U[2];
__builtin_memmove((U+0),(R+512),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(R+0))));
w1(R+0,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B4b0ce5:{NFSU2_TR(0x4b0ce5);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B4b0ce7:{NFSU2_TR(0x4b0ce7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b0ce9:{NFSU2_TR(0x4b0ce9);
if(r1(R+518)){{goto L4b0cef;}}
}
B4b0ceb:L4b0ceb:{c.instructions+=2;NFSU2_TR(0x4b0ceb);
w1(R+0,u8(0x1ull));
}
B4b0ced:{NFSU2_TR(0x4b0ced);
{goto L4b0cf1;}
}
B4b0cef:L4b0cef:{c.instructions+=1;NFSU2_TR(0x4b0cef);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B4b0cf1:L4b0cf1:{c.instructions+=4;NFSU2_TR(0x4b0cf1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b0cf3:{NFSU2_TR(0x4b0cf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b0cf6:{NFSU2_TR(0x4b0cf6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0cf7:{NFSU2_TR(0x4b0cf7);
if(r1(R+518)){{goto L4b0d00;}}
}
B4b0cf9:L4b0cf9:{c.instructions+=1;NFSU2_TR(0x4b0cf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0cfeull));
TAIL_STATIC(0x50ca50u,50c);
}
B4b0cfe:L4b0cfe:{c.instructions+=1;NFSU2_TR(0x4b0cfe);
{goto L4b0d05;}
}
B4b0d00:L4b0d00:{c.instructions+=1;NFSU2_TR(0x4b0d00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0d05ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b0d05:L4b0d05:{c.instructions+=6;NFSU2_TR(0x4b0d05);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4b0d09:{NFSU2_TR(0x4b0d09);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b0d0c:{NFSU2_TR(0x4b0d0c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4b0d12:{NFSU2_TR(0x4b0d12);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4b0d14:{NFSU2_TR(0x4b0d14);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4b0d17:{NFSU2_TR(0x4b0d17);
if(r1(R+514)){{goto L4b0d29;}}
}
B4b0d19:L4b0d19:{c.instructions+=5;NFSU2_TR(0x4b0d19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b0d1c:{NFSU2_TR(0x4b0d1c);
u8 U[4];
w4(U+0,u32(0x41700000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0d21:{NFSU2_TR(0x4b0d21);
u8 U[4];
w4(U+0,u32(0x41700000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0d26:{NFSU2_TR(0x4b0d26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0d27:{NFSU2_TR(0x4b0d27);
{goto L4b0d37;}
}
B4b0d29:L4b0d29:{c.instructions+=4;NFSU2_TR(0x4b0d29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b0d2c:{NFSU2_TR(0x4b0d2c);
u8 U[4];
w4(U+0,u32(0x41300000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0d31:{NFSU2_TR(0x4b0d31);
u8 U[4];
w4(U+0,u32(0x41300000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0d36:{NFSU2_TR(0x4b0d36);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0d37:L4b0d37:{c.instructions+=1;NFSU2_TR(0x4b0d37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0d3cull));
TAIL_STATIC(0x50cb00u,50c);
}
B4b0d3c:L4b0d3c:{c.instructions+=4;NFSU2_TR(0x4b0d3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4b0d3e:{NFSU2_TR(0x4b0d3e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4b0d41:{NFSU2_TR(0x4b0d41);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b0d43:{NFSU2_TR(0x4b0d43);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b0be0u);}goto L4b0be0;}}
}
B4b0d49:L4b0d49:{c.instructions+=5;NFSU2_TR(0x4b0d49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b0d4a:{NFSU2_TR(0x4b0d4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b0d4b:{NFSU2_TR(0x4b0d4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b0d4c:{NFSU2_TR(0x4b0d4c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x50ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x50ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x50ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b0d4f:{NFSU2_TR(0x4b0d4f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b0d50:L4b0d50:{c.instructions+=9;NFSU2_TR(0x4b0d50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B4b0d53:{NFSU2_TR(0x4b0d53);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0d54:{NFSU2_TR(0x4b0d54);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0d55:{NFSU2_TR(0x4b0d55);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0d56:{NFSU2_TR(0x4b0d56);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b0d5a:{NFSU2_TR(0x4b0d5a);
__builtin_memmove((R+24),(R+4),4);
}
B4b0d5c:{NFSU2_TR(0x4b0d5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b0d60:{NFSU2_TR(0x4b0d60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b0d63:{NFSU2_TR(0x4b0d63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0d68ull));
TAIL_STATIC(0x500de0u,500);
}
B4b0d68:L4b0d68:{c.instructions+=2;NFSU2_TR(0x4b0d68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0d69:{NFSU2_TR(0x4b0d69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0d6eull));
TAIL_STATIC(0x4965f0u,496);
}
B4b0d6e:L4b0d6e:{c.instructions+=4;NFSU2_TR(0x4b0d6e);
u8 U[4];
w4(U+0,u32(0xdd9ef5ffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0d73:{NFSU2_TR(0x4b0d73);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0d74:{NFSU2_TR(0x4b0d74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b0d77:{NFSU2_TR(0x4b0d77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0d7cull));
TAIL_STATIC(0x537a60u,537);
}
B4b0d7c:L4b0d7c:{c.instructions+=4;NFSU2_TR(0x4b0d7c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0d7d:{NFSU2_TR(0x4b0d7d);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4b0d81:{NFSU2_TR(0x4b0d81);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0d82:{NFSU2_TR(0x4b0d82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0d87ull));
TAIL_STATIC(0x50ccc0u,50c);
}
B4b0d87:L4b0d87:{c.instructions+=3;NFSU2_TR(0x4b0d87);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4b0d8a:{NFSU2_TR(0x4b0d8a);
__builtin_memmove((R+4),(R+0),4);
}
B4b0d8c:{NFSU2_TR(0x4b0d8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0d91ull));
TAIL_STATIC(0x5054d0u,505);
}
B4b0d91:L4b0d91:{c.instructions+=4;NFSU2_TR(0x4b0d91);
u8 U[4];
w4(U+0,u32(0xc11804c2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0d96:{NFSU2_TR(0x4b0d96);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0d97:{NFSU2_TR(0x4b0d97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b0d9a:{NFSU2_TR(0x4b0d9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0d9full));
TAIL_STATIC(0x537a60u,537);
}
B4b0d9f:L4b0d9f:{c.instructions+=4;NFSU2_TR(0x4b0d9f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0da0:{NFSU2_TR(0x4b0da0);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4b0da4:{NFSU2_TR(0x4b0da4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0da5:{NFSU2_TR(0x4b0da5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0daaull));
TAIL_STATIC(0x50ccc0u,50c);
}
B4b0daa:L4b0daa:{c.instructions+=3;NFSU2_TR(0x4b0daa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4b0dad:{NFSU2_TR(0x4b0dad);
__builtin_memmove((R+4),(R+0),4);
}
B4b0daf:{NFSU2_TR(0x4b0daf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0db4ull));
TAIL_STATIC(0x5054d0u,505);
}
B4b0db4:L4b0db4:{c.instructions+=5;NFSU2_TR(0x4b0db4);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4b0db8:{NFSU2_TR(0x4b0db8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0db9:{NFSU2_TR(0x4b0db9);
u8 U[4];
w4(U+0,u32(0x78f6e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0dbe:{NFSU2_TR(0x4b0dbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b0dc1:{NFSU2_TR(0x4b0dc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0dc6ull));
TAIL_STATIC(0x50b990u,50b);
}
B4b0dc6:L4b0dc6:{c.instructions+=3;NFSU2_TR(0x4b0dc6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0dc7:{NFSU2_TR(0x4b0dc7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0dc8:{NFSU2_TR(0x4b0dc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0dcdull));
TAIL_STATIC(0x537a60u,537);
}
B4b0dcd:L4b0dcd:{c.instructions+=4;NFSU2_TR(0x4b0dcd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0dce:{NFSU2_TR(0x4b0dce);
u8 U[4];
w4(U+0,u32(0x78f6dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0dd3:{NFSU2_TR(0x4b0dd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b0dd6:{NFSU2_TR(0x4b0dd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0ddbull));
TAIL_STATIC(0x50b990u,50b);
}
B4b0ddb:L4b0ddb:{c.instructions+=3;NFSU2_TR(0x4b0ddb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0ddc:{NFSU2_TR(0x4b0ddc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0ddd:{NFSU2_TR(0x4b0ddd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0de2ull));
TAIL_STATIC(0x537a60u,537);
}
B4b0de2:L4b0de2:{c.instructions+=4;NFSU2_TR(0x4b0de2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0de3:{NFSU2_TR(0x4b0de3);
u8 U[4];
w4(U+0,u32(0x78f6c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0de8:{NFSU2_TR(0x4b0de8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b0deb:{NFSU2_TR(0x4b0deb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0df0ull));
TAIL_STATIC(0x50b990u,50b);
}
B4b0df0:L4b0df0:{c.instructions+=3;NFSU2_TR(0x4b0df0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0df1:{NFSU2_TR(0x4b0df1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0df2:{NFSU2_TR(0x4b0df2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0df7ull));
TAIL_STATIC(0x537a60u,537);
}
B4b0df7:L4b0df7:{c.instructions+=4;NFSU2_TR(0x4b0df7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0df8:{NFSU2_TR(0x4b0df8);
u8 U[4];
w4(U+0,u32(0x78f6d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0dfd:{NFSU2_TR(0x4b0dfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b0e00:{NFSU2_TR(0x4b0e00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0e05ull));
TAIL_STATIC(0x50b990u,50b);
}
B4b0e05:L4b0e05:{c.instructions+=3;NFSU2_TR(0x4b0e05);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0e06:{NFSU2_TR(0x4b0e06);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0e07:{NFSU2_TR(0x4b0e07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0e0cull));
TAIL_STATIC(0x537a10u,537);
}
B4b0e0c:L4b0e0c:{c.instructions+=8;NFSU2_TR(0x4b0e0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b0e0f:{NFSU2_TR(0x4b0e0f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B4b0e12:{NFSU2_TR(0x4b0e12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b0e15:{NFSU2_TR(0x4b0e15);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f4348ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4b0e1c:{NFSU2_TR(0x4b0e1c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0e1e:{NFSU2_TR(0x4b0e1e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0e1f:{NFSU2_TR(0x4b0e1f);
u8 U[4];
w4(U+0,u32(0x78f6f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0e24:{NFSU2_TR(0x4b0e24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0e29ull));
TAIL_STATIC(0x50b990u,50b);
}
B4b0e29:L4b0e29:{c.instructions+=3;NFSU2_TR(0x4b0e29);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0e2a:{NFSU2_TR(0x4b0e2a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0e2b:{NFSU2_TR(0x4b0e2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0e30ull));
TAIL_STATIC(0x537a60u,537);
}
B4b0e30:L4b0e30:{c.instructions+=3;NFSU2_TR(0x4b0e30);
__builtin_memmove((R+28),(R+0),4);
}
B4b0e32:{NFSU2_TR(0x4b0e32);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0e33:{NFSU2_TR(0x4b0e33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0e38ull));
TAIL_STATIC(0x50c980u,50c);
}
B4b0e38:L4b0e38:{c.instructions+=4;NFSU2_TR(0x4b0e38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b0e3b:{NFSU2_TR(0x4b0e3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0e3c:{NFSU2_TR(0x4b0e3c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0e3d:{NFSU2_TR(0x4b0e3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0e42ull));
TAIL_STATIC(0x50c990u,50c);
}
B4b0e42:L4b0e42:{c.instructions+=4;NFSU2_TR(0x4b0e42);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0e43:{NFSU2_TR(0x4b0e43);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4b0e47:{NFSU2_TR(0x4b0e47);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0e48:{NFSU2_TR(0x4b0e48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0e4dull));
TAIL_STATIC(0x50ccc0u,50c);
}
B4b0e4d:L4b0e4d:{c.instructions+=3;NFSU2_TR(0x4b0e4d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B4b0e50:{NFSU2_TR(0x4b0e50);
__builtin_memmove((R+4),(R+0),4);
}
B4b0e52:{NFSU2_TR(0x4b0e52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0e57ull));
TAIL_STATIC(0x5054d0u,505);
}
B4b0e57:L4b0e57:{c.instructions+=4;NFSU2_TR(0x4b0e57);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0e58:{NFSU2_TR(0x4b0e58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b0e5b:{NFSU2_TR(0x4b0e5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0e5c:{NFSU2_TR(0x4b0e5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0e61ull));
TAIL_STATIC(0x51d7f0u,51d);
}
B4b0e61:L4b0e61:{c.instructions+=7;NFSU2_TR(0x4b0e61);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b0e64:{NFSU2_TR(0x4b0e64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b0e65:{NFSU2_TR(0x4b0e65);
__builtin_memmove((R+0),(R+24),4);
}
B4b0e67:{NFSU2_TR(0x4b0e67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b0e68:{NFSU2_TR(0x4b0e68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b0e69:{NFSU2_TR(0x4b0e69);
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
B4b0e6c:{NFSU2_TR(0x4b0e6c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b0e70:L4b0e70:{c.instructions+=7;NFSU2_TR(0x4b0e70);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0e71:{NFSU2_TR(0x4b0e71);
__builtin_memmove((R+20),(R+16),4);
}
B4b0e73:{NFSU2_TR(0x4b0e73);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0e74:{NFSU2_TR(0x4b0e74);
__builtin_memmove((R+24),(R+4),4);
}
B4b0e76:{NFSU2_TR(0x4b0e76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b0e79:{NFSU2_TR(0x4b0e79);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b0e7b:{NFSU2_TR(0x4b0e7b);
if(r1(R+518)){{goto L4b0e82;}}
}
B4b0e7d:L4b0e7d:{c.instructions+=1;NFSU2_TR(0x4b0e7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0e82ull));
TAIL_STATIC(0x496b20u,496);
}
B4b0e82:L4b0e82:{c.instructions+=4;NFSU2_TR(0x4b0e82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b0e85:{NFSU2_TR(0x4b0e85);
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
B4b0e87:{NFSU2_TR(0x4b0e87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b0e8a:{NFSU2_TR(0x4b0e8a);
if(r1(R+518)){{goto L4b0ee8;}}
}
B4b0e8c:L4b0e8c:{c.instructions+=1;NFSU2_TR(0x4b0e8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0e91ull));
TAIL_STATIC(0x496c50u,496);
}
B4b0e91:L4b0e91:{c.instructions+=2;NFSU2_TR(0x4b0e91);
w4(R+4,u32(0x838590ull));
}
B4b0e96:{NFSU2_TR(0x4b0e96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0e9bull));
TAIL_STATIC(0x501100u,501);
}
B4b0e9b:L4b0e9b:{c.instructions+=2;NFSU2_TR(0x4b0e9b);
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
B4b0e9d:{NFSU2_TR(0x4b0e9d);
if(r1(R+518)){{goto L4b0ee8;}}
}
B4b0e9f:L4b0e9f:{c.instructions+=2;NFSU2_TR(0x4b0e9f);
w4(R+4,u32(0x838590ull));
}
B4b0ea4:{NFSU2_TR(0x4b0ea4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0ea9ull));
TAIL_STATIC(0x501100u,501);
}
B4b0ea9:L4b0ea9:{c.instructions+=2;NFSU2_TR(0x4b0ea9);
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
B4b0eac:{NFSU2_TR(0x4b0eac);
if(r1(R+518)){{goto L4b0ee8;}}
}
B4b0eae:L4b0eae:{c.instructions+=2;NFSU2_TR(0x4b0eae);
w4(R+4,u32(0x838590ull));
}
B4b0eb3:{NFSU2_TR(0x4b0eb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0eb8ull));
TAIL_STATIC(0x501100u,501);
}
B4b0eb8:L4b0eb8:{c.instructions+=2;NFSU2_TR(0x4b0eb8);
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
B4b0ebb:{NFSU2_TR(0x4b0ebb);
if(r1(R+518)){{goto L4b0ee8;}}
}
B4b0ebd:L4b0ebd:{c.instructions+=2;NFSU2_TR(0x4b0ebd);
w4(R+4,u32(0x838590ull));
}
B4b0ec2:{NFSU2_TR(0x4b0ec2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0ec7ull));
TAIL_STATIC(0x501100u,501);
}
B4b0ec7:L4b0ec7:{c.instructions+=2;NFSU2_TR(0x4b0ec7);
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
B4b0eca:{NFSU2_TR(0x4b0eca);
if(r1(R+518)){{goto L4b0ee8;}}
}
B4b0ecc:L4b0ecc:{c.instructions+=4;NFSU2_TR(0x4b0ecc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b0ecf:{NFSU2_TR(0x4b0ecf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b0ed2:{NFSU2_TR(0x4b0ed2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0ed3:{NFSU2_TR(0x4b0ed3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0ed8ull));
TAIL_STATIC(0x4964d0u,496);
}
B4b0ed8:L4b0ed8:{c.instructions+=3;NFSU2_TR(0x4b0ed8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b0edb:{NFSU2_TR(0x4b0edb);
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
B4b0edd:{NFSU2_TR(0x4b0edd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b0ee8;}}
}
B4b0edf:L4b0edf:{c.instructions+=3;NFSU2_TR(0x4b0edf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b0ee2:{NFSU2_TR(0x4b0ee2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0ee3:{NFSU2_TR(0x4b0ee3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0ee8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b07f0u);}goto L4b07f0;}
}
B4b0ee8:L4b0ee8:{c.instructions+=3;NFSU2_TR(0x4b0ee8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b0ee9:{NFSU2_TR(0x4b0ee9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4b0eea:{NFSU2_TR(0x4b0eea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b0ef0:L4b0ef0:{c.instructions+=6;NFSU2_TR(0x4b0ef0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0ef1:{NFSU2_TR(0x4b0ef1);
__builtin_memmove((R+24),(R+4),4);
}
B4b0ef3:{NFSU2_TR(0x4b0ef3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0ef4:{NFSU2_TR(0x4b0ef4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b0ef7:{NFSU2_TR(0x4b0ef7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b0ef9:{NFSU2_TR(0x4b0ef9);
if(r1(R+518)){{goto L4b0fa8;}}
}
B4b0eff:L4b0eff:{c.instructions+=6;NFSU2_TR(0x4b0eff);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4b0f02:{NFSU2_TR(0x4b0f02);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b0f04:{NFSU2_TR(0x4b0f04);
__builtin_memmove((R+0),(R+518),1);
}
B4b0f07:{NFSU2_TR(0x4b0f07);
__builtin_memmove((R+4),(R+28),4);
}
B4b0f09:{NFSU2_TR(0x4b0f09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0f0a:{NFSU2_TR(0x4b0f0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0f0full));
TAIL_STATIC(0x496920u,496);
}
B4b0f0f:L4b0f0f:{c.instructions+=6;NFSU2_TR(0x4b0f0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b0f12:{NFSU2_TR(0x4b0f12);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4b0f14:{NFSU2_TR(0x4b0f14);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4b0f17:{NFSU2_TR(0x4b0f17);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0f18:{NFSU2_TR(0x4b0f18);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0f19:{NFSU2_TR(0x4b0f19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0f1eull));
TAIL_STATIC(0x496390u,496);
}
B4b0f1e:L4b0f1e:{c.instructions+=3;NFSU2_TR(0x4b0f1e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b0f21:{NFSU2_TR(0x4b0f21);
w4(R+4,u32(0x838590ull));
}
B4b0f26:{NFSU2_TR(0x4b0f26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0f2bull));
TAIL_STATIC(0x501100u,501);
}
B4b0f2b:L4b0f2b:{c.instructions+=2;NFSU2_TR(0x4b0f2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b0f2d:{NFSU2_TR(0x4b0f2d);
if(r1(R+518)){{goto L4b0f7a;}}
}
B4b0f2f:L4b0f2f:{c.instructions+=2;NFSU2_TR(0x4b0f2f);
w4(R+4,u32(0x838590ull));
}
B4b0f34:{NFSU2_TR(0x4b0f34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0f39ull));
TAIL_STATIC(0x501100u,501);
}
B4b0f39:L4b0f39:{c.instructions+=2;NFSU2_TR(0x4b0f39);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b0f3c:{NFSU2_TR(0x4b0f3c);
if(r1(R+518)){{goto L4b0f7a;}}
}
B4b0f3e:L4b0f3e:{c.instructions+=2;NFSU2_TR(0x4b0f3e);
w4(R+4,u32(0x838590ull));
}
B4b0f43:{NFSU2_TR(0x4b0f43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0f48ull));
TAIL_STATIC(0x501100u,501);
}
B4b0f48:L4b0f48:{c.instructions+=2;NFSU2_TR(0x4b0f48);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b0f4b:{NFSU2_TR(0x4b0f4b);
if(r1(R+518)){{goto L4b0f7a;}}
}
B4b0f4d:L4b0f4d:{c.instructions+=2;NFSU2_TR(0x4b0f4d);
w4(R+4,u32(0x838590ull));
}
B4b0f52:{NFSU2_TR(0x4b0f52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0f57ull));
TAIL_STATIC(0x501100u,501);
}
B4b0f57:L4b0f57:{c.instructions+=2;NFSU2_TR(0x4b0f57);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b0f5a:{NFSU2_TR(0x4b0f5a);
if(r1(R+518)){{goto L4b0f7a;}}
}
B4b0f5c:L4b0f5c:{c.instructions+=4;NFSU2_TR(0x4b0f5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b0f5f:{NFSU2_TR(0x4b0f5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b0f62:{NFSU2_TR(0x4b0f62);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0f63:{NFSU2_TR(0x4b0f63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0f68ull));
TAIL_STATIC(0x4964d0u,496);
}
B4b0f68:L4b0f68:{c.instructions+=3;NFSU2_TR(0x4b0f68);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b0f6b:{NFSU2_TR(0x4b0f6b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b0f6d:{NFSU2_TR(0x4b0f6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b0fa8;}}
}
B4b0f6f:L4b0f6f:{c.instructions+=3;NFSU2_TR(0x4b0f6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b0f72:{NFSU2_TR(0x4b0f72);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0f73:{NFSU2_TR(0x4b0f73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0f78ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b07f0u);}goto L4b07f0;}
}
B4b0f78:L4b0f78:{c.instructions+=1;NFSU2_TR(0x4b0f78);
{goto L4b0fa8;}
}
B4b0f7a:L4b0f7a:{c.instructions+=4;NFSU2_TR(0x4b0f7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b0f7d:{NFSU2_TR(0x4b0f7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b0f80:{NFSU2_TR(0x4b0f80);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0f81:{NFSU2_TR(0x4b0f81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0f86ull));
TAIL_STATIC(0x4964d0u,496);
}
B4b0f86:L4b0f86:{c.instructions+=3;NFSU2_TR(0x4b0f86);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b0f89:{NFSU2_TR(0x4b0f89);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b0f8b:{NFSU2_TR(0x4b0f8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b0fa8;}}
}
B4b0f8d:L4b0f8d:{c.instructions+=4;NFSU2_TR(0x4b0f8d);
__builtin_memmove((R+0),gp(0x838590),4);
}
B4b0f92:{NFSU2_TR(0x4b0f92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b0f95:{NFSU2_TR(0x4b0f95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0f96:{NFSU2_TR(0x4b0f96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0f9bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b07b0u);}goto L4b07b0;}
}
B4b0f9b:L4b0f9b:{c.instructions+=2;NFSU2_TR(0x4b0f9b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b0f9d:{NFSU2_TR(0x4b0f9d);
if(r1(R+518)){{goto L4b0fa8;}}
}
B4b0f9f:L4b0f9f:{c.instructions+=3;NFSU2_TR(0x4b0f9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b0fa2:{NFSU2_TR(0x4b0fa2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0fa3:{NFSU2_TR(0x4b0fa3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0fa8ull));
TAIL_STATIC(0x4967f0u,496);
}
B4b0fa8:L4b0fa8:{c.instructions+=4;NFSU2_TR(0x4b0fa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4b0fab:{NFSU2_TR(0x4b0fab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b0fae:{NFSU2_TR(0x4b0fae);
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
B4b0fb0:{NFSU2_TR(0x4b0fb0);
if(r1(R+518)){{goto L4b0fd8;}}
}
B4b0fb2:L4b0fb2:{c.instructions+=4;NFSU2_TR(0x4b0fb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b0fb5:{NFSU2_TR(0x4b0fb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b0fb8:{NFSU2_TR(0x4b0fb8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0fb9:{NFSU2_TR(0x4b0fb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0fbeull));
TAIL_STATIC(0x4964d0u,496);
}
B4b0fbe:L4b0fbe:{c.instructions+=3;NFSU2_TR(0x4b0fbe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b0fc1:{NFSU2_TR(0x4b0fc1);
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
B4b0fc3:{NFSU2_TR(0x4b0fc3);
if(r1(R+518)){{goto L4b0fd8;}}
}
B4b0fc5:L4b0fc5:{c.instructions+=4;NFSU2_TR(0x4b0fc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b0fc8:{NFSU2_TR(0x4b0fc8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0fc9:{NFSU2_TR(0x4b0fc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b0fd0:{NFSU2_TR(0x4b0fd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0fd5ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b0fd5:L4b0fd5:{c.instructions+=1;NFSU2_TR(0x4b0fd5);
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
B4b0fd8:L4b0fd8:{c.instructions+=3;NFSU2_TR(0x4b0fd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b0fd9:{NFSU2_TR(0x4b0fd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b0fda:{NFSU2_TR(0x4b0fda);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b0fe0:L4b0fe0:{c.instructions+=4;NFSU2_TR(0x4b0fe0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b0fe1:{NFSU2_TR(0x4b0fe1);
__builtin_memmove((R+24),(R+4),4);
}
B4b0fe3:{NFSU2_TR(0x4b0fe3);
w4(R+4,u32(0x838590ull));
}
B4b0fe8:{NFSU2_TR(0x4b0fe8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0fedull));
TAIL_STATIC(0x501100u,501);
}
B4b0fed:L4b0fed:{c.instructions+=2;NFSU2_TR(0x4b0fed);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b0fef:{NFSU2_TR(0x4b0fef);
if(r1(R+518)){TAIL_STATIC(0x4b101eu,4b1);}
}
B4b0ff1:L4b0ff1:{c.instructions+=2;NFSU2_TR(0x4b0ff1);
w4(R+4,u32(0x838590ull));
}
B4b0ff6:{NFSU2_TR(0x4b0ff6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b0ffbull));
TAIL_STATIC(0x501100u,501);
}
B4b0ffb:L4b0ffb:{c.instructions+=2;NFSU2_TR(0x4b0ffb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b0ffe:{NFSU2_TR(0x4b0ffe);
if(r1(R+518)){TAIL_STATIC(0x4b101eu,4b1);}
TAIL_STATIC(0x4b1000u,4b1);
}
XIT:NFSU2_TR_EXIT(0x4b0,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
