#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_59a(u8* __restrict R,Cpu& c);
u32 body_59b(u8* __restrict R,Cpu& c);
u32 body_59d(u8* __restrict R,Cpu& c);
u32 body_59e(u8* __restrict R,Cpu& c);
u32 body_5a0(u8* __restrict R,Cpu& c);
u32 body_5a5(u8* __restrict R,Cpu& c);
u32 body_5aa(u8* __restrict R,Cpu& c);
u32 body_5ab(u8* __restrict R,Cpu& c);
u32 body_5ac(u8* __restrict R,Cpu& c);
u32 body_5ad(u8* __restrict R,Cpu& c);
u32 body_5af(u8* __restrict R,Cpu& c);
u32 body_5b1(u8* __restrict R,Cpu& c);
u32 body_5b2(u8* __restrict R,Cpu& c);
u32 body_5bb(u8* __restrict R,Cpu& c);
u32 body_5d6(u8* __restrict R,Cpu& c);
u32 body_5d7(u8* __restrict R,Cpu& c);
u32 body_5db(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5b0,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5b0,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5b0(u8* __restrict R,Cpu& c);
u32 page_5b0(Cpu& c){return body_5b0(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5b0(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5b0003:goto L5b0003;
case 0x5b0006:c.instructions+=1;goto B5b0006;
case 0x5b0010:goto L5b0010;
case 0x5b0013:c.instructions+=1;goto B5b0013;
case 0x5b0020:goto L5b0020;
case 0x5b0023:c.instructions+=1;goto B5b0023;
case 0x5b0029:goto L5b0029;
case 0x5b0030:goto L5b0030;
case 0x5b0031:c.instructions+=66;goto B5b0031;
case 0x5b0033:c.instructions+=65;goto B5b0033;
case 0x5b0035:c.instructions+=64;goto B5b0035;
case 0x5b003a:c.instructions+=63;goto B5b003a;
case 0x5b0040:c.instructions+=62;goto B5b0040;
case 0x5b0041:c.instructions+=61;goto B5b0041;
case 0x5b0048:c.instructions+=60;goto B5b0048;
case 0x5b0049:c.instructions+=59;goto B5b0049;
case 0x5b004a:c.instructions+=58;goto B5b004a;
case 0x5b004b:c.instructions+=57;goto B5b004b;
case 0x5b004d:c.instructions+=56;goto B5b004d;
case 0x5b004e:c.instructions+=55;goto B5b004e;
case 0x5b0051:c.instructions+=54;goto B5b0051;
case 0x5b0054:c.instructions+=53;goto B5b0054;
case 0x5b005a:c.instructions+=52;goto B5b005a;
case 0x5b0060:c.instructions+=51;goto B5b0060;
case 0x5b0066:c.instructions+=50;goto B5b0066;
case 0x5b006c:c.instructions+=49;goto B5b006c;
case 0x5b0072:c.instructions+=48;goto B5b0072;
case 0x5b0077:c.instructions+=47;goto B5b0077;
case 0x5b0079:c.instructions+=46;goto B5b0079;
case 0x5b007f:c.instructions+=45;goto B5b007f;
case 0x5b0085:c.instructions+=44;goto B5b0085;
case 0x5b008b:c.instructions+=43;goto B5b008b;
case 0x5b008d:c.instructions+=42;goto B5b008d;
case 0x5b0093:c.instructions+=41;goto B5b0093;
case 0x5b0095:c.instructions+=40;goto B5b0095;
case 0x5b009b:c.instructions+=39;goto B5b009b;
case 0x5b009d:c.instructions+=38;goto B5b009d;
case 0x5b00a0:c.instructions+=37;goto B5b00a0;
case 0x5b00a6:c.instructions+=36;goto B5b00a6;
case 0x5b00ac:c.instructions+=35;goto B5b00ac;
case 0x5b00ae:c.instructions+=34;goto B5b00ae;
case 0x5b00b4:c.instructions+=33;goto B5b00b4;
case 0x5b00b6:c.instructions+=32;goto B5b00b6;
case 0x5b00bc:c.instructions+=31;goto B5b00bc;
case 0x5b00c2:c.instructions+=30;goto B5b00c2;
case 0x5b00cc:c.instructions+=29;goto B5b00cc;
case 0x5b00ce:c.instructions+=28;goto B5b00ce;
case 0x5b00d4:c.instructions+=27;goto B5b00d4;
case 0x5b00da:c.instructions+=26;goto B5b00da;
case 0x5b00dc:c.instructions+=25;goto B5b00dc;
case 0x5b00de:c.instructions+=24;goto B5b00de;
case 0x5b00e4:c.instructions+=23;goto B5b00e4;
case 0x5b00ea:c.instructions+=22;goto B5b00ea;
case 0x5b00ec:c.instructions+=21;goto B5b00ec;
case 0x5b00f2:c.instructions+=20;goto B5b00f2;
case 0x5b00f4:c.instructions+=19;goto B5b00f4;
case 0x5b00fa:c.instructions+=18;goto B5b00fa;
case 0x5b0100:c.instructions+=17;goto B5b0100;
case 0x5b0106:c.instructions+=16;goto B5b0106;
case 0x5b0108:c.instructions+=15;goto B5b0108;
case 0x5b0109:c.instructions+=14;goto B5b0109;
case 0x5b010f:c.instructions+=13;goto B5b010f;
case 0x5b0110:c.instructions+=12;goto B5b0110;
case 0x5b0112:c.instructions+=11;goto B5b0112;
case 0x5b0113:c.instructions+=10;goto B5b0113;
case 0x5b0115:c.instructions+=9;goto B5b0115;
case 0x5b011f:c.instructions+=8;goto B5b011f;
case 0x5b0125:c.instructions+=7;goto B5b0125;
case 0x5b0126:c.instructions+=6;goto B5b0126;
case 0x5b012c:c.instructions+=5;goto B5b012c;
case 0x5b0132:c.instructions+=4;goto B5b0132;
case 0x5b0138:c.instructions+=3;goto B5b0138;
case 0x5b013b:c.instructions+=2;goto B5b013b;
case 0x5b013d:c.instructions+=1;goto B5b013d;
case 0x5b0142:goto L5b0142;
case 0x5b0148:c.instructions+=5;goto B5b0148;
case 0x5b014b:c.instructions+=4;goto B5b014b;
case 0x5b0151:c.instructions+=3;goto B5b0151;
case 0x5b0153:c.instructions+=2;goto B5b0153;
case 0x5b0156:c.instructions+=1;goto B5b0156;
case 0x5b0158:goto L5b0158;
case 0x5b015d:c.instructions+=1;goto B5b015d;
case 0x5b015f:goto L5b015f;
case 0x5b0161:goto L5b0161;
case 0x5b0167:c.instructions+=7;goto B5b0167;
case 0x5b0169:c.instructions+=6;goto B5b0169;
case 0x5b016f:c.instructions+=5;goto B5b016f;
case 0x5b0171:c.instructions+=4;goto B5b0171;
case 0x5b0174:c.instructions+=3;goto B5b0174;
case 0x5b0176:c.instructions+=2;goto B5b0176;
case 0x5b0179:c.instructions+=1;goto B5b0179;
case 0x5b017b:goto L5b017b;
case 0x5b0180:goto L5b0180;
case 0x5b0183:c.instructions+=15;goto B5b0183;
case 0x5b0189:c.instructions+=14;goto B5b0189;
case 0x5b018c:c.instructions+=13;goto B5b018c;
case 0x5b0192:c.instructions+=12;goto B5b0192;
case 0x5b0195:c.instructions+=11;goto B5b0195;
case 0x5b019b:c.instructions+=10;goto B5b019b;
case 0x5b01a0:c.instructions+=9;goto B5b01a0;
case 0x5b01a5:c.instructions+=8;goto B5b01a5;
case 0x5b01a6:c.instructions+=7;goto B5b01a6;
case 0x5b01ac:c.instructions+=6;goto B5b01ac;
case 0x5b01af:c.instructions+=5;goto B5b01af;
case 0x5b01b2:c.instructions+=4;goto B5b01b2;
case 0x5b01bc:c.instructions+=3;goto B5b01bc;
case 0x5b01c2:c.instructions+=2;goto B5b01c2;
case 0x5b01c8:c.instructions+=1;goto B5b01c8;
case 0x5b01cd:goto L5b01cd;
case 0x5b01d0:c.instructions+=10;goto B5b01d0;
case 0x5b01d6:c.instructions+=9;goto B5b01d6;
case 0x5b01dc:c.instructions+=8;goto B5b01dc;
case 0x5b01de:c.instructions+=7;goto B5b01de;
case 0x5b01e4:c.instructions+=6;goto B5b01e4;
case 0x5b01ea:c.instructions+=5;goto B5b01ea;
case 0x5b01ed:c.instructions+=4;goto B5b01ed;
case 0x5b01f3:c.instructions+=3;goto B5b01f3;
case 0x5b01f6:c.instructions+=2;goto B5b01f6;
case 0x5b01fc:c.instructions+=1;goto B5b01fc;
case 0x5b0200:goto L5b0200;
case 0x5b0203:c.instructions+=34;goto B5b0203;
case 0x5b0205:c.instructions+=33;goto B5b0205;
case 0x5b0208:c.instructions+=32;goto B5b0208;
case 0x5b020b:c.instructions+=31;goto B5b020b;
case 0x5b020e:c.instructions+=30;goto B5b020e;
case 0x5b0210:c.instructions+=29;goto B5b0210;
case 0x5b0213:c.instructions+=28;goto B5b0213;
case 0x5b0216:c.instructions+=27;goto B5b0216;
case 0x5b021d:c.instructions+=26;goto B5b021d;
case 0x5b0220:c.instructions+=25;goto B5b0220;
case 0x5b0226:c.instructions+=24;goto B5b0226;
case 0x5b022c:c.instructions+=23;goto B5b022c;
case 0x5b0232:c.instructions+=22;goto B5b0232;
case 0x5b0238:c.instructions+=21;goto B5b0238;
case 0x5b023b:c.instructions+=20;goto B5b023b;
case 0x5b023d:c.instructions+=19;goto B5b023d;
case 0x5b0240:c.instructions+=18;goto B5b0240;
case 0x5b0243:c.instructions+=17;goto B5b0243;
case 0x5b0246:c.instructions+=16;goto B5b0246;
case 0x5b0249:c.instructions+=15;goto B5b0249;
case 0x5b024f:c.instructions+=14;goto B5b024f;
case 0x5b0255:c.instructions+=13;goto B5b0255;
case 0x5b025b:c.instructions+=12;goto B5b025b;
case 0x5b0261:c.instructions+=11;goto B5b0261;
case 0x5b0267:c.instructions+=10;goto B5b0267;
case 0x5b026d:c.instructions+=9;goto B5b026d;
case 0x5b026f:c.instructions+=8;goto B5b026f;
case 0x5b0272:c.instructions+=7;goto B5b0272;
case 0x5b0278:c.instructions+=6;goto B5b0278;
case 0x5b0279:c.instructions+=5;goto B5b0279;
case 0x5b027f:c.instructions+=4;goto B5b027f;
case 0x5b0282:c.instructions+=3;goto B5b0282;
case 0x5b0285:c.instructions+=2;goto B5b0285;
case 0x5b0288:c.instructions+=1;goto B5b0288;
case 0x5b028e:goto L5b028e;
case 0x5b0291:c.instructions+=8;goto B5b0291;
case 0x5b0292:c.instructions+=7;goto B5b0292;
case 0x5b0294:c.instructions+=6;goto B5b0294;
case 0x5b0295:c.instructions+=5;goto B5b0295;
case 0x5b0296:c.instructions+=4;goto B5b0296;
case 0x5b029d:c.instructions+=3;goto B5b029d;
case 0x5b029f:c.instructions+=2;goto B5b029f;
case 0x5b02a0:c.instructions+=1;goto B5b02a0;
case 0x5b02b0:goto L5b02b0;
case 0x5b02b4:c.instructions+=10;goto B5b02b4;
case 0x5b02b7:c.instructions+=9;goto B5b02b7;
case 0x5b02b9:c.instructions+=8;goto B5b02b9;
case 0x5b02bb:c.instructions+=7;goto B5b02bb;
case 0x5b02be:c.instructions+=6;goto B5b02be;
case 0x5b02c1:c.instructions+=5;goto B5b02c1;
case 0x5b02c4:c.instructions+=4;goto B5b02c4;
case 0x5b02c7:c.instructions+=3;goto B5b02c7;
case 0x5b02ca:c.instructions+=2;goto B5b02ca;
case 0x5b02cd:c.instructions+=1;goto B5b02cd;
case 0x5b02d0:goto L5b02d0;
case 0x5b02d4:c.instructions+=10;goto B5b02d4;
case 0x5b02d6:c.instructions+=9;goto B5b02d6;
case 0x5b02d9:c.instructions+=8;goto B5b02d9;
case 0x5b02db:c.instructions+=7;goto B5b02db;
case 0x5b02de:c.instructions+=6;goto B5b02de;
case 0x5b02e1:c.instructions+=5;goto B5b02e1;
case 0x5b02e4:c.instructions+=4;goto B5b02e4;
case 0x5b02e7:c.instructions+=3;goto B5b02e7;
case 0x5b02ea:c.instructions+=2;goto B5b02ea;
case 0x5b02ed:c.instructions+=1;goto B5b02ed;
case 0x5b02f0:goto L5b02f0;
case 0x5b02f1:c.instructions+=2;goto B5b02f1;
case 0x5b02f3:c.instructions+=1;goto B5b02f3;
case 0x5b02f8:goto L5b02f8;
case 0x5b02fd:c.instructions+=1;goto B5b02fd;
case 0x5b02ff:goto L5b02ff;
case 0x5b0304:c.instructions+=3;goto B5b0304;
case 0x5b0305:c.instructions+=2;goto B5b0305;
case 0x5b0306:c.instructions+=1;goto B5b0306;
case 0x5b030b:goto L5b030b;
case 0x5b030e:goto L5b030e;
case 0x5b0310:c.instructions+=2;goto B5b0310;
case 0x5b0311:c.instructions+=1;goto B5b0311;
case 0x5b0320:goto L5b0320;
case 0x5b0326:c.instructions+=2;goto B5b0326;
case 0x5b032d:c.instructions+=1;goto B5b032d;
case 0x5b0340:goto L5b0340;
case 0x5b0343:c.instructions+=1;goto B5b0343;
case 0x5b0350:goto L5b0350;
case 0x5b0351:c.instructions+=2;goto B5b0351;
case 0x5b0353:c.instructions+=1;goto B5b0353;
case 0x5b0358:goto L5b0358;
case 0x5b035d:c.instructions+=1;goto B5b035d;
case 0x5b035f:goto L5b035f;
case 0x5b0360:c.instructions+=1;goto B5b0360;
case 0x5b0365:goto L5b0365;
case 0x5b0368:goto L5b0368;
case 0x5b036a:c.instructions+=2;goto B5b036a;
case 0x5b036b:c.instructions+=1;goto B5b036b;
case 0x5b0370:goto L5b0370;
case 0x5b0371:c.instructions+=25;goto B5b0371;
case 0x5b0373:c.instructions+=24;goto B5b0373;
case 0x5b0376:c.instructions+=23;goto B5b0376;
case 0x5b0378:c.instructions+=22;goto B5b0378;
case 0x5b037d:c.instructions+=21;goto B5b037d;
case 0x5b0383:c.instructions+=20;goto B5b0383;
case 0x5b0384:c.instructions+=19;goto B5b0384;
case 0x5b038b:c.instructions+=18;goto B5b038b;
case 0x5b038e:c.instructions+=17;goto B5b038e;
case 0x5b038f:c.instructions+=16;goto B5b038f;
case 0x5b0390:c.instructions+=15;goto B5b0390;
case 0x5b0392:c.instructions+=14;goto B5b0392;
case 0x5b0395:c.instructions+=13;goto B5b0395;
case 0x5b0396:c.instructions+=12;goto B5b0396;
case 0x5b039a:c.instructions+=11;goto B5b039a;
case 0x5b03a0:c.instructions+=10;goto B5b03a0;
case 0x5b03a6:c.instructions+=9;goto B5b03a6;
case 0x5b03a9:c.instructions+=8;goto B5b03a9;
case 0x5b03ac:c.instructions+=7;goto B5b03ac;
case 0x5b03b0:c.instructions+=6;goto B5b03b0;
case 0x5b03b3:c.instructions+=5;goto B5b03b3;
case 0x5b03bd:c.instructions+=4;goto B5b03bd;
case 0x5b03c0:c.instructions+=3;goto B5b03c0;
case 0x5b03c2:c.instructions+=2;goto B5b03c2;
case 0x5b03ca:c.instructions+=1;goto B5b03ca;
case 0x5b03cc:goto L5b03cc;
case 0x5b03cf:c.instructions+=3;goto B5b03cf;
case 0x5b03d0:c.instructions+=2;goto B5b03d0;
case 0x5b03d3:c.instructions+=1;goto B5b03d3;
case 0x5b03d8:goto L5b03d8;
case 0x5b03db:c.instructions+=19;goto B5b03db;
case 0x5b03de:c.instructions+=18;goto B5b03de;
case 0x5b03e1:c.instructions+=17;goto B5b03e1;
case 0x5b03e4:c.instructions+=16;goto B5b03e4;
case 0x5b03e7:c.instructions+=15;goto B5b03e7;
case 0x5b03ea:c.instructions+=14;goto B5b03ea;
case 0x5b03ec:c.instructions+=13;goto B5b03ec;
case 0x5b03ef:c.instructions+=12;goto B5b03ef;
case 0x5b03f1:c.instructions+=11;goto B5b03f1;
case 0x5b03f4:c.instructions+=10;goto B5b03f4;
case 0x5b03f7:c.instructions+=9;goto B5b03f7;
case 0x5b03fa:c.instructions+=8;goto B5b03fa;
case 0x5b03fc:c.instructions+=7;goto B5b03fc;
case 0x5b0400:c.instructions+=6;goto B5b0400;
case 0x5b0401:c.instructions+=5;goto B5b0401;
case 0x5b0404:c.instructions+=4;goto B5b0404;
case 0x5b0405:c.instructions+=3;goto B5b0405;
case 0x5b0409:c.instructions+=2;goto B5b0409;
case 0x5b040a:c.instructions+=1;goto B5b040a;
case 0x5b040f:goto L5b040f;
case 0x5b0412:c.instructions+=16;goto B5b0412;
case 0x5b0416:c.instructions+=15;goto B5b0416;
case 0x5b0419:c.instructions+=14;goto B5b0419;
case 0x5b041c:c.instructions+=13;goto B5b041c;
case 0x5b0420:c.instructions+=12;goto B5b0420;
case 0x5b0424:c.instructions+=11;goto B5b0424;
case 0x5b0428:c.instructions+=10;goto B5b0428;
case 0x5b042c:c.instructions+=9;goto B5b042c;
case 0x5b042f:c.instructions+=8;goto B5b042f;
case 0x5b0433:c.instructions+=7;goto B5b0433;
case 0x5b0437:c.instructions+=6;goto B5b0437;
case 0x5b043b:c.instructions+=5;goto B5b043b;
case 0x5b043f:c.instructions+=4;goto B5b043f;
case 0x5b0441:c.instructions+=3;goto B5b0441;
case 0x5b0444:c.instructions+=2;goto B5b0444;
case 0x5b0447:c.instructions+=1;goto B5b0447;
case 0x5b044a:goto L5b044a;
case 0x5b044d:c.instructions+=2;goto B5b044d;
case 0x5b044f:c.instructions+=1;goto B5b044f;
case 0x5b0451:goto L5b0451;
case 0x5b0453:c.instructions+=2;goto B5b0453;
case 0x5b0455:c.instructions+=1;goto B5b0455;
case 0x5b0457:goto L5b0457;
case 0x5b045a:c.instructions+=4;goto B5b045a;
case 0x5b045b:c.instructions+=3;goto B5b045b;
case 0x5b0460:c.instructions+=2;goto B5b0460;
case 0x5b0461:c.instructions+=1;goto B5b0461;
case 0x5b0466:goto L5b0466;
case 0x5b0469:c.instructions+=3;goto B5b0469;
case 0x5b046b:c.instructions+=2;goto B5b046b;
case 0x5b0470:c.instructions+=1;goto B5b0470;
case 0x5b0475:goto L5b0475;
case 0x5b0479:c.instructions+=8;goto B5b0479;
case 0x5b047a:c.instructions+=7;goto B5b047a;
case 0x5b0480:c.instructions+=6;goto B5b0480;
case 0x5b0481:c.instructions+=5;goto B5b0481;
case 0x5b0488:c.instructions+=4;goto B5b0488;
case 0x5b0489:c.instructions+=3;goto B5b0489;
case 0x5b048b:c.instructions+=2;goto B5b048b;
case 0x5b048c:c.instructions+=1;goto B5b048c;
case 0x5b0490:goto L5b0490;
case 0x5b0493:c.instructions+=1;goto B5b0493;
case 0x5b04a0:goto L5b04a0;
case 0x5b04a6:c.instructions+=1;goto B5b04a6;
case 0x5b04b0:goto L5b04b0;
case 0x5b04b6:c.instructions+=1;goto B5b04b6;
case 0x5b04c0:goto L5b04c0;
case 0x5b04c3:c.instructions+=1;goto B5b04c3;
case 0x5b04d0:goto L5b04d0;
case 0x5b04d1:c.instructions+=7;goto B5b04d1;
case 0x5b04d2:c.instructions+=6;goto B5b04d2;
case 0x5b04d4:c.instructions+=5;goto B5b04d4;
case 0x5b04d7:c.instructions+=4;goto B5b04d7;
case 0x5b04d9:c.instructions+=3;goto B5b04d9;
case 0x5b04da:c.instructions+=2;goto B5b04da;
case 0x5b04dd:c.instructions+=1;goto B5b04dd;
case 0x5b04df:goto L5b04df;
case 0x5b04e2:c.instructions+=1;goto B5b04e2;
case 0x5b04e4:goto L5b04e4;
case 0x5b04e6:goto L5b04e6;
case 0x5b04e8:c.instructions+=1;goto B5b04e8;
case 0x5b04ea:goto L5b04ea;
case 0x5b04ed:c.instructions+=1;goto B5b04ed;
case 0x5b04ef:goto L5b04ef;
case 0x5b04f1:goto L5b04f1;
case 0x5b04f3:c.instructions+=1;goto B5b04f3;
case 0x5b04f5:goto L5b04f5;
case 0x5b04f7:c.instructions+=2;goto B5b04f7;
case 0x5b04f9:c.instructions+=1;goto B5b04f9;
case 0x5b04fc:goto L5b04fc;
case 0x5b04ff:c.instructions+=2;goto B5b04ff;
case 0x5b0501:c.instructions+=1;goto B5b0501;
case 0x5b0503:goto L5b0503;
case 0x5b0506:c.instructions+=1;goto B5b0506;
case 0x5b0508:goto L5b0508;
case 0x5b050b:c.instructions+=1;goto B5b050b;
case 0x5b0510:goto L5b0510;
case 0x5b0512:c.instructions+=5;goto B5b0512;
case 0x5b0514:c.instructions+=4;goto B5b0514;
case 0x5b0515:c.instructions+=3;goto B5b0515;
case 0x5b0516:c.instructions+=2;goto B5b0516;
case 0x5b0517:c.instructions+=1;goto B5b0517;
case 0x5b0520:goto L5b0520;
case 0x5b0521:c.instructions+=11;goto B5b0521;
case 0x5b0523:c.instructions+=10;goto B5b0523;
case 0x5b0526:c.instructions+=9;goto B5b0526;
case 0x5b0529:c.instructions+=8;goto B5b0529;
case 0x5b052a:c.instructions+=7;goto B5b052a;
case 0x5b052b:c.instructions+=6;goto B5b052b;
case 0x5b052d:c.instructions+=5;goto B5b052d;
case 0x5b0530:c.instructions+=4;goto B5b0530;
case 0x5b0532:c.instructions+=3;goto B5b0532;
case 0x5b0533:c.instructions+=2;goto B5b0533;
case 0x5b0537:c.instructions+=1;goto B5b0537;
case 0x5b0539:goto L5b0539;
case 0x5b053c:c.instructions+=4;goto B5b053c;
case 0x5b053f:c.instructions+=3;goto B5b053f;
case 0x5b0545:c.instructions+=2;goto B5b0545;
case 0x5b0549:c.instructions+=1;goto B5b0549;
case 0x5b054b:goto L5b054b;
case 0x5b054e:c.instructions+=2;goto B5b054e;
case 0x5b0554:c.instructions+=1;goto B5b0554;
case 0x5b055a:goto L5b055a;
case 0x5b055d:c.instructions+=2;goto B5b055d;
case 0x5b055f:c.instructions+=1;goto B5b055f;
case 0x5b0562:goto L5b0562;
case 0x5b0565:c.instructions+=3;goto B5b0565;
case 0x5b0569:c.instructions+=2;goto B5b0569;
case 0x5b056a:c.instructions+=1;goto B5b056a;
case 0x5b056f:goto L5b056f;
case 0x5b0572:c.instructions+=2;goto B5b0572;
case 0x5b0577:c.instructions+=1;goto B5b0577;
case 0x5b0580:goto L5b0580;
case 0x5b0582:c.instructions+=8;goto B5b0582;
case 0x5b0585:c.instructions+=7;goto B5b0585;
case 0x5b058b:c.instructions+=6;goto B5b058b;
case 0x5b058d:c.instructions+=5;goto B5b058d;
case 0x5b058e:c.instructions+=4;goto B5b058e;
case 0x5b0592:c.instructions+=3;goto B5b0592;
case 0x5b0598:c.instructions+=2;goto B5b0598;
case 0x5b0599:c.instructions+=1;goto B5b0599;
case 0x5b059e:goto L5b059e;
case 0x5b05a4:c.instructions+=3;goto B5b05a4;
case 0x5b05a7:c.instructions+=2;goto B5b05a7;
case 0x5b05a8:c.instructions+=1;goto B5b05a8;
case 0x5b05aa:goto L5b05aa;
case 0x5b05ae:c.instructions+=3;goto B5b05ae;
case 0x5b05b1:c.instructions+=2;goto B5b05b1;
case 0x5b05b3:c.instructions+=1;goto B5b05b3;
case 0x5b05b8:goto L5b05b8;
case 0x5b05bb:c.instructions+=2;goto B5b05bb;
case 0x5b05bd:c.instructions+=1;goto B5b05bd;
case 0x5b05c5:goto L5b05c5;
case 0x5b05c7:c.instructions+=3;goto B5b05c7;
case 0x5b05cd:c.instructions+=2;goto B5b05cd;
case 0x5b05cf:c.instructions+=1;goto B5b05cf;
case 0x5b05d1:goto L5b05d1;
case 0x5b05d7:c.instructions+=14;goto B5b05d7;
case 0x5b05dd:c.instructions+=13;goto B5b05dd;
case 0x5b05e3:c.instructions+=12;goto B5b05e3;
case 0x5b05e9:c.instructions+=11;goto B5b05e9;
case 0x5b05eb:c.instructions+=10;goto B5b05eb;
case 0x5b05ee:c.instructions+=9;goto B5b05ee;
case 0x5b05f4:c.instructions+=8;goto B5b05f4;
case 0x5b05f7:c.instructions+=7;goto B5b05f7;
case 0x5b05fd:c.instructions+=6;goto B5b05fd;
case 0x5b0600:c.instructions+=5;goto B5b0600;
case 0x5b0604:c.instructions+=4;goto B5b0604;
case 0x5b0606:c.instructions+=3;goto B5b0606;
case 0x5b060a:c.instructions+=2;goto B5b060a;
case 0x5b060e:c.instructions+=1;goto B5b060e;
case 0x5b0610:goto L5b0610;
case 0x5b0614:c.instructions+=4;goto B5b0614;
case 0x5b0615:c.instructions+=3;goto B5b0615;
case 0x5b061a:c.instructions+=2;goto B5b061a;
case 0x5b061b:c.instructions+=1;goto B5b061b;
case 0x5b0620:goto L5b0620;
case 0x5b0624:c.instructions+=4;goto B5b0624;
case 0x5b0627:c.instructions+=3;goto B5b0627;
case 0x5b0628:c.instructions+=2;goto B5b0628;
case 0x5b062c:c.instructions+=1;goto B5b062c;
case 0x5b062e:goto L5b062e;
case 0x5b0630:c.instructions+=1;goto B5b0630;
case 0x5b0635:goto L5b0635;
case 0x5b0638:c.instructions+=2;goto B5b0638;
case 0x5b063a:c.instructions+=1;goto B5b063a;
case 0x5b063c:goto L5b063c;
case 0x5b0641:goto L5b0641;
case 0x5b0646:c.instructions+=2;goto B5b0646;
case 0x5b0648:c.instructions+=1;goto B5b0648;
case 0x5b064a:goto L5b064a;
case 0x5b064f:c.instructions+=2;goto B5b064f;
case 0x5b0651:c.instructions+=1;goto B5b0651;
case 0x5b0653:goto L5b0653;
case 0x5b0658:c.instructions+=2;goto B5b0658;
case 0x5b065a:c.instructions+=1;goto B5b065a;
case 0x5b065c:goto L5b065c;
case 0x5b0661:c.instructions+=2;goto B5b0661;
case 0x5b0663:c.instructions+=1;goto B5b0663;
case 0x5b0665:goto L5b0665;
case 0x5b066a:c.instructions+=2;goto B5b066a;
case 0x5b066c:c.instructions+=1;goto B5b066c;
case 0x5b066e:goto L5b066e;
case 0x5b0670:c.instructions+=1;goto B5b0670;
case 0x5b0675:goto L5b0675;
case 0x5b0677:c.instructions+=1;goto B5b0677;
case 0x5b067c:goto L5b067c;
case 0x5b067f:c.instructions+=2;goto B5b067f;
case 0x5b0681:c.instructions+=1;goto B5b0681;
case 0x5b0683:goto L5b0683;
case 0x5b0685:c.instructions+=1;goto B5b0685;
case 0x5b068a:goto L5b068a;
case 0x5b068b:c.instructions+=5;goto B5b068b;
case 0x5b068c:c.instructions+=4;goto B5b068c;
case 0x5b068d:c.instructions+=3;goto B5b068d;
case 0x5b068f:c.instructions+=2;goto B5b068f;
case 0x5b0690:c.instructions+=1;goto B5b0690;
case 0x5b06a0:goto L5b06a0;
case 0x5b06a6:c.instructions+=19;goto B5b06a6;
case 0x5b06a7:c.instructions+=18;goto B5b06a7;
case 0x5b06a8:c.instructions+=17;goto B5b06a8;
case 0x5b06a9:c.instructions+=16;goto B5b06a9;
case 0x5b06ab:c.instructions+=15;goto B5b06ab;
case 0x5b06b1:c.instructions+=14;goto B5b06b1;
case 0x5b06b7:c.instructions+=13;goto B5b06b7;
case 0x5b06bd:c.instructions+=12;goto B5b06bd;
case 0x5b06c1:c.instructions+=11;goto B5b06c1;
case 0x5b06c5:c.instructions+=10;goto B5b06c5;
case 0x5b06c9:c.instructions+=9;goto B5b06c9;
case 0x5b06cc:c.instructions+=8;goto B5b06cc;
case 0x5b06d0:c.instructions+=7;goto B5b06d0;
case 0x5b06d6:c.instructions+=6;goto B5b06d6;
case 0x5b06d7:c.instructions+=5;goto B5b06d7;
case 0x5b06d9:c.instructions+=4;goto B5b06d9;
case 0x5b06df:c.instructions+=3;goto B5b06df;
case 0x5b06e7:c.instructions+=2;goto B5b06e7;
case 0x5b06eb:c.instructions+=1;goto B5b06eb;
case 0x5b06f0:goto L5b06f0;
case 0x5b06f3:c.instructions+=33;goto B5b06f3;
case 0x5b06f5:c.instructions+=32;goto B5b06f5;
case 0x5b06f8:c.instructions+=31;goto B5b06f8;
case 0x5b06fb:c.instructions+=30;goto B5b06fb;
case 0x5b06fe:c.instructions+=29;goto B5b06fe;
case 0x5b0701:c.instructions+=28;goto B5b0701;
case 0x5b0704:c.instructions+=27;goto B5b0704;
case 0x5b070a:c.instructions+=26;goto B5b070a;
case 0x5b0710:c.instructions+=25;goto B5b0710;
case 0x5b0712:c.instructions+=24;goto B5b0712;
case 0x5b0716:c.instructions+=23;goto B5b0716;
case 0x5b0718:c.instructions+=22;goto B5b0718;
case 0x5b0719:c.instructions+=21;goto B5b0719;
case 0x5b071f:c.instructions+=20;goto B5b071f;
case 0x5b0723:c.instructions+=19;goto B5b0723;
case 0x5b0725:c.instructions+=18;goto B5b0725;
case 0x5b0726:c.instructions+=17;goto B5b0726;
case 0x5b0729:c.instructions+=16;goto B5b0729;
case 0x5b072a:c.instructions+=15;goto B5b072a;
case 0x5b072b:c.instructions+=14;goto B5b072b;
case 0x5b072f:c.instructions+=13;goto B5b072f;
case 0x5b0731:c.instructions+=12;goto B5b0731;
case 0x5b0735:c.instructions+=11;goto B5b0735;
case 0x5b0739:c.instructions+=10;goto B5b0739;
case 0x5b073d:c.instructions+=9;goto B5b073d;
case 0x5b0741:c.instructions+=8;goto B5b0741;
case 0x5b0746:c.instructions+=7;goto B5b0746;
case 0x5b074e:c.instructions+=6;goto B5b074e;
case 0x5b0751:c.instructions+=5;goto B5b0751;
case 0x5b0753:c.instructions+=4;goto B5b0753;
case 0x5b0756:c.instructions+=3;goto B5b0756;
case 0x5b0758:c.instructions+=2;goto B5b0758;
case 0x5b075c:c.instructions+=1;goto B5b075c;
case 0x5b0761:goto L5b0761;
case 0x5b0765:c.instructions+=4;goto B5b0765;
case 0x5b0768:c.instructions+=3;goto B5b0768;
case 0x5b076a:c.instructions+=2;goto B5b076a;
case 0x5b076e:c.instructions+=1;goto B5b076e;
case 0x5b0771:goto L5b0771;
case 0x5b0779:c.instructions+=1;goto B5b0779;
case 0x5b077f:goto L5b077f;
case 0x5b0781:c.instructions+=9;goto B5b0781;
case 0x5b0787:c.instructions+=8;goto B5b0787;
case 0x5b078b:c.instructions+=7;goto B5b078b;
case 0x5b078f:c.instructions+=6;goto B5b078f;
case 0x5b0793:c.instructions+=5;goto B5b0793;
case 0x5b0795:c.instructions+=4;goto B5b0795;
case 0x5b0799:c.instructions+=3;goto B5b0799;
case 0x5b079f:c.instructions+=2;goto B5b079f;
case 0x5b07a3:c.instructions+=1;goto B5b07a3;
case 0x5b07a5:goto L5b07a5;
case 0x5b07ab:c.instructions+=5;goto B5b07ab;
case 0x5b07ae:c.instructions+=4;goto B5b07ae;
case 0x5b07b2:c.instructions+=3;goto B5b07b2;
case 0x5b07b4:c.instructions+=2;goto B5b07b4;
case 0x5b07b7:c.instructions+=1;goto B5b07b7;
case 0x5b07b9:goto L5b07b9;
case 0x5b07bd:c.instructions+=14;goto B5b07bd;
case 0x5b07c3:c.instructions+=13;goto B5b07c3;
case 0x5b07c5:c.instructions+=12;goto B5b07c5;
case 0x5b07c7:c.instructions+=11;goto B5b07c7;
case 0x5b07ca:c.instructions+=10;goto B5b07ca;
case 0x5b07cc:c.instructions+=9;goto B5b07cc;
case 0x5b07cd:c.instructions+=8;goto B5b07cd;
case 0x5b07d0:c.instructions+=7;goto B5b07d0;
case 0x5b07d7:c.instructions+=6;goto B5b07d7;
case 0x5b07db:c.instructions+=5;goto B5b07db;
case 0x5b07df:c.instructions+=4;goto B5b07df;
case 0x5b07e5:c.instructions+=3;goto B5b07e5;
case 0x5b07e7:c.instructions+=2;goto B5b07e7;
case 0x5b07ea:c.instructions+=1;goto B5b07ea;
case 0x5b07f0:goto L5b07f0;
case 0x5b07f6:c.instructions+=3;goto B5b07f6;
case 0x5b07fe:c.instructions+=2;goto B5b07fe;
case 0x5b0803:c.instructions+=1;goto B5b0803;
case 0x5b0805:goto L5b0805;
case 0x5b0809:c.instructions+=4;goto B5b0809;
case 0x5b080a:c.instructions+=3;goto B5b080a;
case 0x5b080e:c.instructions+=2;goto B5b080e;
case 0x5b0810:c.instructions+=1;goto B5b0810;
case 0x5b0815:goto L5b0815;
case 0x5b0817:c.instructions+=3;goto B5b0817;
case 0x5b081b:c.instructions+=2;goto B5b081b;
case 0x5b081f:c.instructions+=1;goto B5b081f;
case 0x5b0823:goto L5b0823;
case 0x5b0827:c.instructions+=21;goto B5b0827;
case 0x5b082d:c.instructions+=20;goto B5b082d;
case 0x5b0831:c.instructions+=19;goto B5b0831;
case 0x5b0837:c.instructions+=18;goto B5b0837;
case 0x5b0839:c.instructions+=17;goto B5b0839;
case 0x5b083f:c.instructions+=16;goto B5b083f;
case 0x5b0843:c.instructions+=15;goto B5b0843;
case 0x5b0847:c.instructions+=14;goto B5b0847;
case 0x5b084d:c.instructions+=13;goto B5b084d;
case 0x5b0853:c.instructions+=12;goto B5b0853;
case 0x5b0855:c.instructions+=11;goto B5b0855;
case 0x5b0859:c.instructions+=10;goto B5b0859;
case 0x5b085f:c.instructions+=9;goto B5b085f;
case 0x5b0863:c.instructions+=8;goto B5b0863;
case 0x5b0867:c.instructions+=7;goto B5b0867;
case 0x5b086b:c.instructions+=6;goto B5b086b;
case 0x5b086f:c.instructions+=5;goto B5b086f;
case 0x5b0872:c.instructions+=4;goto B5b0872;
case 0x5b0878:c.instructions+=3;goto B5b0878;
case 0x5b087a:c.instructions+=2;goto B5b087a;
case 0x5b087d:c.instructions+=1;goto B5b087d;
case 0x5b087f:goto L5b087f;
case 0x5b0883:c.instructions+=5;goto B5b0883;
case 0x5b0889:c.instructions+=4;goto B5b0889;
case 0x5b088f:c.instructions+=3;goto B5b088f;
case 0x5b0891:c.instructions+=2;goto B5b0891;
case 0x5b0894:c.instructions+=1;goto B5b0894;
case 0x5b0896:goto L5b0896;
case 0x5b0898:c.instructions+=3;goto B5b0898;
case 0x5b089c:c.instructions+=2;goto B5b089c;
case 0x5b08a3:c.instructions+=1;goto B5b08a3;
case 0x5b08a6:goto L5b08a6;
case 0x5b08a9:c.instructions+=4;goto B5b08a9;
case 0x5b08af:c.instructions+=3;goto B5b08af;
case 0x5b08b1:c.instructions+=2;goto B5b08b1;
case 0x5b08b4:c.instructions+=1;goto B5b08b4;
case 0x5b08b6:goto L5b08b6;
case 0x5b08ba:c.instructions+=5;goto B5b08ba;
case 0x5b08c0:c.instructions+=4;goto B5b08c0;
case 0x5b08c6:c.instructions+=3;goto B5b08c6;
case 0x5b08c8:c.instructions+=2;goto B5b08c8;
case 0x5b08cb:c.instructions+=1;goto B5b08cb;
case 0x5b08cd:goto L5b08cd;
case 0x5b08cf:c.instructions+=3;goto B5b08cf;
case 0x5b08d3:c.instructions+=2;goto B5b08d3;
case 0x5b08da:c.instructions+=1;goto B5b08da;
case 0x5b08dd:goto L5b08dd;
case 0x5b08e0:c.instructions+=4;goto B5b08e0;
case 0x5b08e6:c.instructions+=3;goto B5b08e6;
case 0x5b08e8:c.instructions+=2;goto B5b08e8;
case 0x5b08eb:c.instructions+=1;goto B5b08eb;
case 0x5b08ed:goto L5b08ed;
case 0x5b08f1:c.instructions+=4;goto B5b08f1;
case 0x5b08f7:c.instructions+=3;goto B5b08f7;
case 0x5b08f9:c.instructions+=2;goto B5b08f9;
case 0x5b08fc:c.instructions+=1;goto B5b08fc;
case 0x5b08fe:goto L5b08fe;
case 0x5b0902:c.instructions+=3;goto B5b0902;
case 0x5b0906:c.instructions+=2;goto B5b0906;
case 0x5b0909:c.instructions+=1;goto B5b0909;
case 0x5b090c:goto L5b090c;
case 0x5b090f:c.instructions+=4;goto B5b090f;
case 0x5b0915:c.instructions+=3;goto B5b0915;
case 0x5b0917:c.instructions+=2;goto B5b0917;
case 0x5b091a:c.instructions+=1;goto B5b091a;
case 0x5b091c:goto L5b091c;
case 0x5b091f:c.instructions+=4;goto B5b091f;
case 0x5b0925:c.instructions+=3;goto B5b0925;
case 0x5b0927:c.instructions+=2;goto B5b0927;
case 0x5b092a:c.instructions+=1;goto B5b092a;
case 0x5b092c:goto L5b092c;
case 0x5b092f:c.instructions+=4;goto B5b092f;
case 0x5b0935:c.instructions+=3;goto B5b0935;
case 0x5b0937:c.instructions+=2;goto B5b0937;
case 0x5b093a:c.instructions+=1;goto B5b093a;
case 0x5b093c:goto L5b093c;
case 0x5b093f:c.instructions+=4;goto B5b093f;
case 0x5b0945:c.instructions+=3;goto B5b0945;
case 0x5b0947:c.instructions+=2;goto B5b0947;
case 0x5b094a:c.instructions+=1;goto B5b094a;
case 0x5b094c:goto L5b094c;
case 0x5b094e:c.instructions+=1;goto B5b094e;
case 0x5b0950:goto L5b0950;
case 0x5b0954:c.instructions+=4;goto B5b0954;
case 0x5b095a:c.instructions+=3;goto B5b095a;
case 0x5b095c:c.instructions+=2;goto B5b095c;
case 0x5b095f:c.instructions+=1;goto B5b095f;
case 0x5b0961:goto L5b0961;
case 0x5b0963:c.instructions+=4;goto B5b0963;
case 0x5b0966:c.instructions+=3;goto B5b0966;
case 0x5b096e:c.instructions+=2;goto B5b096e;
case 0x5b0973:c.instructions+=1;goto B5b0973;
case 0x5b0976:goto L5b0976;
case 0x5b097c:c.instructions+=1;goto B5b097c;
case 0x5b0981:goto L5b0981;
case 0x5b0983:goto L5b0983;
case 0x5b0987:c.instructions+=4;goto B5b0987;
case 0x5b0988:c.instructions+=3;goto B5b0988;
case 0x5b098a:c.instructions+=2;goto B5b098a;
case 0x5b098e:c.instructions+=1;goto B5b098e;
case 0x5b0994:goto L5b0994;
case 0x5b0995:c.instructions+=5;goto B5b0995;
case 0x5b0996:c.instructions+=4;goto B5b0996;
case 0x5b0997:c.instructions+=3;goto B5b0997;
case 0x5b0998:c.instructions+=2;goto B5b0998;
case 0x5b099e:c.instructions+=1;goto B5b099e;
case 0x5b09a0:goto L5b09a0;
case 0x5b09a4:c.instructions+=14;goto B5b09a4;
case 0x5b09a5:c.instructions+=13;goto B5b09a5;
case 0x5b09a9:c.instructions+=12;goto B5b09a9;
case 0x5b09aa:c.instructions+=11;goto B5b09aa;
case 0x5b09ae:c.instructions+=10;goto B5b09ae;
case 0x5b09af:c.instructions+=9;goto B5b09af;
case 0x5b09b0:c.instructions+=8;goto B5b09b0;
case 0x5b09b4:c.instructions+=7;goto B5b09b4;
case 0x5b09b6:c.instructions+=6;goto B5b09b6;
case 0x5b09b7:c.instructions+=5;goto B5b09b7;
case 0x5b09b8:c.instructions+=4;goto B5b09b8;
case 0x5b09b9:c.instructions+=3;goto B5b09b9;
case 0x5b09ba:c.instructions+=2;goto B5b09ba;
case 0x5b09bc:c.instructions+=1;goto B5b09bc;
case 0x5b09c1:goto L5b09c1;
case 0x5b09c4:c.instructions+=3;goto B5b09c4;
case 0x5b09c5:c.instructions+=2;goto B5b09c5;
case 0x5b09c6:c.instructions+=1;goto B5b09c6;
case 0x5b09cb:goto L5b09cb;
case 0x5b09cd:c.instructions+=3;goto B5b09cd;
case 0x5b09d0:c.instructions+=2;goto B5b09d0;
case 0x5b09d2:c.instructions+=1;goto B5b09d2;
case 0x5b09d8:goto L5b09d8;
case 0x5b09dc:c.instructions+=2;goto B5b09dc;
case 0x5b09de:c.instructions+=1;goto B5b09de;
case 0x5b09e4:goto L5b09e4;
case 0x5b09e7:c.instructions+=2;goto B5b09e7;
case 0x5b09ec:c.instructions+=1;goto B5b09ec;
case 0x5b09ee:goto L5b09ee;
case 0x5b09f1:c.instructions+=1;goto B5b09f1;
case 0x5b09f6:goto L5b09f6;
case 0x5b09f9:c.instructions+=4;goto B5b09f9;
case 0x5b09fc:c.instructions+=3;goto B5b09fc;
case 0x5b0a00:c.instructions+=2;goto B5b0a00;
case 0x5b0a04:c.instructions+=1;goto B5b0a04;
case 0x5b0a06:goto L5b0a06;
case 0x5b0a09:c.instructions+=1;goto B5b0a09;
case 0x5b0a0b:goto L5b0a0b;
case 0x5b0a0f:c.instructions+=4;goto B5b0a0f;
case 0x5b0a11:c.instructions+=3;goto B5b0a11;
case 0x5b0a12:c.instructions+=2;goto B5b0a12;
case 0x5b0a14:c.instructions+=1;goto B5b0a14;
case 0x5b0a19:goto L5b0a19;
case 0x5b0a1d:goto L5b0a1d;
case 0x5b0a21:c.instructions+=5;goto B5b0a21;
case 0x5b0a25:c.instructions+=4;goto B5b0a25;
case 0x5b0a28:c.instructions+=3;goto B5b0a28;
case 0x5b0a2b:c.instructions+=2;goto B5b0a2b;
case 0x5b0a2e:c.instructions+=1;goto B5b0a2e;
case 0x5b0a30:goto L5b0a30;
case 0x5b0a37:c.instructions+=1;goto B5b0a37;
case 0x5b0a3e:goto L5b0a3e;
case 0x5b0a41:c.instructions+=4;goto B5b0a41;
case 0x5b0a43:c.instructions+=3;goto B5b0a43;
case 0x5b0a46:c.instructions+=2;goto B5b0a46;
case 0x5b0a4a:c.instructions+=1;goto B5b0a4a;
case 0x5b0a4c:goto L5b0a4c;
case 0x5b0a52:c.instructions+=1;goto B5b0a52;
case 0x5b0a54:goto L5b0a54;
case 0x5b0a5a:c.instructions+=1;goto B5b0a5a;
case 0x5b0a5c:goto L5b0a5c;
case 0x5b0a5f:c.instructions+=5;goto B5b0a5f;
case 0x5b0a61:c.instructions+=4;goto B5b0a61;
case 0x5b0a64:c.instructions+=3;goto B5b0a64;
case 0x5b0a68:c.instructions+=2;goto B5b0a68;
case 0x5b0a6e:c.instructions+=1;goto B5b0a6e;
case 0x5b0a70:goto L5b0a70;
case 0x5b0a76:c.instructions+=1;goto B5b0a76;
case 0x5b0a78:goto L5b0a78;
case 0x5b0a7b:c.instructions+=4;goto B5b0a7b;
case 0x5b0a7d:c.instructions+=3;goto B5b0a7d;
case 0x5b0a80:c.instructions+=2;goto B5b0a80;
case 0x5b0a84:c.instructions+=1;goto B5b0a84;
case 0x5b0a86:goto L5b0a86;
case 0x5b0a8c:c.instructions+=1;goto B5b0a8c;
case 0x5b0a8e:goto L5b0a8e;
case 0x5b0a94:goto L5b0a94;
case 0x5b0a97:goto L5b0a97;
case 0x5b0a9a:c.instructions+=2;goto B5b0a9a;
case 0x5b0a9f:c.instructions+=1;goto B5b0a9f;
case 0x5b0aa1:goto L5b0aa1;
case 0x5b0aa3:c.instructions+=2;goto B5b0aa3;
case 0x5b0aa5:c.instructions+=1;goto B5b0aa5;
case 0x5b0aaa:goto L5b0aaa;
case 0x5b0aad:c.instructions+=4;goto B5b0aad;
case 0x5b0aaf:c.instructions+=3;goto B5b0aaf;
case 0x5b0ab3:c.instructions+=2;goto B5b0ab3;
case 0x5b0ab7:c.instructions+=1;goto B5b0ab7;
case 0x5b0ab9:goto L5b0ab9;
case 0x5b0abc:c.instructions+=1;goto B5b0abc;
case 0x5b0abe:goto L5b0abe;
case 0x5b0ac2:c.instructions+=4;goto B5b0ac2;
case 0x5b0ac4:c.instructions+=3;goto B5b0ac4;
case 0x5b0ac5:c.instructions+=2;goto B5b0ac5;
case 0x5b0ac7:c.instructions+=1;goto B5b0ac7;
case 0x5b0acc:goto L5b0acc;
case 0x5b0ad0:goto L5b0ad0;
case 0x5b0ad4:c.instructions+=5;goto B5b0ad4;
case 0x5b0ad8:c.instructions+=4;goto B5b0ad8;
case 0x5b0adb:c.instructions+=3;goto B5b0adb;
case 0x5b0ade:c.instructions+=2;goto B5b0ade;
case 0x5b0ae0:c.instructions+=1;goto B5b0ae0;
case 0x5b0ae2:goto L5b0ae2;
case 0x5b0ae9:c.instructions+=1;goto B5b0ae9;
case 0x5b0af0:goto L5b0af0;
case 0x5b0af3:c.instructions+=4;goto B5b0af3;
case 0x5b0af5:c.instructions+=3;goto B5b0af5;
case 0x5b0af8:c.instructions+=2;goto B5b0af8;
case 0x5b0afc:c.instructions+=1;goto B5b0afc;
case 0x5b0afe:goto L5b0afe;
case 0x5b0b04:c.instructions+=1;goto B5b0b04;
case 0x5b0b06:goto L5b0b06;
case 0x5b0b0c:c.instructions+=1;goto B5b0b0c;
case 0x5b0b0e:goto L5b0b0e;
case 0x5b0b11:c.instructions+=5;goto B5b0b11;
case 0x5b0b13:c.instructions+=4;goto B5b0b13;
case 0x5b0b16:c.instructions+=3;goto B5b0b16;
case 0x5b0b1a:c.instructions+=2;goto B5b0b1a;
case 0x5b0b20:c.instructions+=1;goto B5b0b20;
case 0x5b0b22:goto L5b0b22;
case 0x5b0b28:c.instructions+=1;goto B5b0b28;
case 0x5b0b2a:goto L5b0b2a;
case 0x5b0b2d:c.instructions+=4;goto B5b0b2d;
case 0x5b0b2f:c.instructions+=3;goto B5b0b2f;
case 0x5b0b32:c.instructions+=2;goto B5b0b32;
case 0x5b0b36:c.instructions+=1;goto B5b0b36;
case 0x5b0b38:goto L5b0b38;
case 0x5b0b3e:c.instructions+=1;goto B5b0b3e;
case 0x5b0b40:goto L5b0b40;
case 0x5b0b46:goto L5b0b46;
case 0x5b0b48:goto L5b0b48;
case 0x5b0b4b:c.instructions+=4;goto B5b0b4b;
case 0x5b0b4d:c.instructions+=3;goto B5b0b4d;
case 0x5b0b4f:c.instructions+=2;goto B5b0b4f;
case 0x5b0b52:c.instructions+=1;goto B5b0b52;
case 0x5b0b54:goto L5b0b54;
case 0x5b0b56:c.instructions+=3;goto B5b0b56;
case 0x5b0b59:c.instructions+=2;goto B5b0b59;
case 0x5b0b5c:c.instructions+=1;goto B5b0b5c;
case 0x5b0b5e:goto L5b0b5e;
case 0x5b0b61:c.instructions+=4;goto B5b0b61;
case 0x5b0b63:c.instructions+=3;goto B5b0b63;
case 0x5b0b65:c.instructions+=2;goto B5b0b65;
case 0x5b0b68:c.instructions+=1;goto B5b0b68;
case 0x5b0b6a:goto L5b0b6a;
case 0x5b0b6c:c.instructions+=2;goto B5b0b6c;
case 0x5b0b72:c.instructions+=1;goto B5b0b72;
case 0x5b0b74:goto L5b0b74;
case 0x5b0b75:c.instructions+=4;goto B5b0b75;
case 0x5b0b76:c.instructions+=3;goto B5b0b76;
case 0x5b0b77:c.instructions+=2;goto B5b0b77;
case 0x5b0b78:c.instructions+=1;goto B5b0b78;
case 0x5b0bd0:goto L5b0bd0;
case 0x5b0bd4:c.instructions+=10;goto B5b0bd4;
case 0x5b0bd8:c.instructions+=9;goto B5b0bd8;
case 0x5b0bd9:c.instructions+=8;goto B5b0bd9;
case 0x5b0bda:c.instructions+=7;goto B5b0bda;
case 0x5b0bde:c.instructions+=6;goto B5b0bde;
case 0x5b0bdf:c.instructions+=5;goto B5b0bdf;
case 0x5b0be3:c.instructions+=4;goto B5b0be3;
case 0x5b0be7:c.instructions+=3;goto B5b0be7;
case 0x5b0be8:c.instructions+=2;goto B5b0be8;
case 0x5b0be9:c.instructions+=1;goto B5b0be9;
case 0x5b0bee:goto L5b0bee;
case 0x5b0bf2:c.instructions+=1;goto B5b0bf2;
case 0x5b0c00:goto L5b0c00;
case 0x5b0c04:c.instructions+=10;goto B5b0c04;
case 0x5b0c08:c.instructions+=9;goto B5b0c08;
case 0x5b0c09:c.instructions+=8;goto B5b0c09;
case 0x5b0c0a:c.instructions+=7;goto B5b0c0a;
case 0x5b0c0e:c.instructions+=6;goto B5b0c0e;
case 0x5b0c0f:c.instructions+=5;goto B5b0c0f;
case 0x5b0c13:c.instructions+=4;goto B5b0c13;
case 0x5b0c17:c.instructions+=3;goto B5b0c17;
case 0x5b0c18:c.instructions+=2;goto B5b0c18;
case 0x5b0c19:c.instructions+=1;goto B5b0c19;
case 0x5b0c1e:goto L5b0c1e;
case 0x5b0c22:c.instructions+=1;goto B5b0c22;
case 0x5b0c30:goto L5b0c30;
case 0x5b0c32:c.instructions+=13;goto B5b0c32;
case 0x5b0c37:c.instructions+=12;goto B5b0c37;
case 0x5b0c3d:c.instructions+=11;goto B5b0c3d;
case 0x5b0c3e:c.instructions+=10;goto B5b0c3e;
case 0x5b0c45:c.instructions+=9;goto B5b0c45;
case 0x5b0c48:c.instructions+=8;goto B5b0c48;
case 0x5b0c4a:c.instructions+=7;goto B5b0c4a;
case 0x5b0c4c:c.instructions+=6;goto B5b0c4c;
case 0x5b0c50:c.instructions+=5;goto B5b0c50;
case 0x5b0c54:c.instructions+=4;goto B5b0c54;
case 0x5b0c58:c.instructions+=3;goto B5b0c58;
case 0x5b0c5c:c.instructions+=2;goto B5b0c5c;
case 0x5b0c60:c.instructions+=1;goto B5b0c60;
case 0x5b0c66:goto L5b0c66;
case 0x5b0c67:c.instructions+=5;goto B5b0c67;
case 0x5b0c68:c.instructions+=4;goto B5b0c68;
case 0x5b0c69:c.instructions+=3;goto B5b0c69;
case 0x5b0c6a:c.instructions+=2;goto B5b0c6a;
case 0x5b0c6d:c.instructions+=1;goto B5b0c6d;
case 0x5b0c71:goto L5b0c71;
case 0x5b0c75:c.instructions+=14;goto B5b0c75;
case 0x5b0c77:c.instructions+=13;goto B5b0c77;
case 0x5b0c79:c.instructions+=12;goto B5b0c79;
case 0x5b0c7c:c.instructions+=11;goto B5b0c7c;
case 0x5b0c7e:c.instructions+=10;goto B5b0c7e;
case 0x5b0c81:c.instructions+=9;goto B5b0c81;
case 0x5b0c87:c.instructions+=8;goto B5b0c87;
case 0x5b0c8c:c.instructions+=7;goto B5b0c8c;
case 0x5b0c8e:c.instructions+=6;goto B5b0c8e;
case 0x5b0c94:c.instructions+=5;goto B5b0c94;
case 0x5b0c96:c.instructions+=4;goto B5b0c96;
case 0x5b0c9a:c.instructions+=3;goto B5b0c9a;
case 0x5b0c9e:c.instructions+=2;goto B5b0c9e;
case 0x5b0ca0:c.instructions+=1;goto B5b0ca0;
case 0x5b0ca6:goto L5b0ca6;
case 0x5b0cac:c.instructions+=2;goto B5b0cac;
case 0x5b0cb1:c.instructions+=1;goto B5b0cb1;
case 0x5b0cb6:goto L5b0cb6;
case 0x5b0cb8:c.instructions+=1;goto B5b0cb8;
case 0x5b0cba:goto L5b0cba;
case 0x5b0cbc:c.instructions+=1;goto B5b0cbc;
case 0x5b0cc0:goto L5b0cc0;
case 0x5b0cc6:c.instructions+=1;goto B5b0cc6;
case 0x5b0cc8:goto L5b0cc8;
case 0x5b0cca:c.instructions+=2;goto B5b0cca;
case 0x5b0ccc:c.instructions+=1;goto B5b0ccc;
case 0x5b0cce:goto L5b0cce;
case 0x5b0cd0:c.instructions+=2;goto B5b0cd0;
case 0x5b0cd4:c.instructions+=1;goto B5b0cd4;
case 0x5b0cd6:goto L5b0cd6;
case 0x5b0cda:c.instructions+=4;goto B5b0cda;
case 0x5b0cdb:c.instructions+=3;goto B5b0cdb;
case 0x5b0cde:c.instructions+=2;goto B5b0cde;
case 0x5b0ce2:c.instructions+=1;goto B5b0ce2;
case 0x5b0ce4:goto L5b0ce4;
case 0x5b0ce8:goto L5b0ce8;
case 0x5b0cec:c.instructions+=6;goto B5b0cec;
case 0x5b0cee:c.instructions+=5;goto B5b0cee;
case 0x5b0cf0:c.instructions+=4;goto B5b0cf0;
case 0x5b0cf4:c.instructions+=3;goto B5b0cf4;
case 0x5b0cf6:c.instructions+=2;goto B5b0cf6;
case 0x5b0cf8:c.instructions+=1;goto B5b0cf8;
case 0x5b0cfd:goto L5b0cfd;
case 0x5b0d01:c.instructions+=2;goto B5b0d01;
case 0x5b0d02:c.instructions+=1;goto B5b0d02;
case 0x5b0d07:goto L5b0d07;
case 0x5b0d09:c.instructions+=4;goto B5b0d09;
case 0x5b0d0d:c.instructions+=3;goto B5b0d0d;
case 0x5b0d10:c.instructions+=2;goto B5b0d10;
case 0x5b0d12:c.instructions+=1;goto B5b0d12;
case 0x5b0d17:goto L5b0d17;
case 0x5b0d1b:c.instructions+=1;goto B5b0d1b;
case 0x5b0d1d:goto L5b0d1d;
case 0x5b0d22:c.instructions+=2;goto B5b0d22;
case 0x5b0d23:c.instructions+=1;goto B5b0d23;
case 0x5b0d28:goto L5b0d28;
case 0x5b0d2b:c.instructions+=4;goto B5b0d2b;
case 0x5b0d2f:c.instructions+=3;goto B5b0d2f;
case 0x5b0d31:c.instructions+=2;goto B5b0d31;
case 0x5b0d39:c.instructions+=1;goto B5b0d39;
case 0x5b0d3f:goto L5b0d3f;
case 0x5b0d40:c.instructions+=3;goto B5b0d40;
case 0x5b0d41:c.instructions+=2;goto B5b0d41;
case 0x5b0d43:c.instructions+=1;goto B5b0d43;
case 0x5b0d48:goto L5b0d48;
case 0x5b0d4d:goto L5b0d4d;
case 0x5b0d53:c.instructions+=2;goto B5b0d53;
case 0x5b0d58:c.instructions+=1;goto B5b0d58;
case 0x5b0d5d:goto L5b0d5d;
case 0x5b0d5f:c.instructions+=2;goto B5b0d5f;
case 0x5b0d61:c.instructions+=1;goto B5b0d61;
case 0x5b0d67:goto L5b0d67;
case 0x5b0d6a:c.instructions+=3;goto B5b0d6a;
case 0x5b0d6f:c.instructions+=2;goto B5b0d6f;
case 0x5b0d70:c.instructions+=1;goto B5b0d70;
case 0x5b0d75:goto L5b0d75;
case 0x5b0d78:c.instructions+=2;goto B5b0d78;
case 0x5b0d7a:c.instructions+=1;goto B5b0d7a;
case 0x5b0d7c:goto L5b0d7c;
case 0x5b0d7f:c.instructions+=2;goto B5b0d7f;
case 0x5b0d81:c.instructions+=1;goto B5b0d81;
case 0x5b0d83:goto L5b0d83;
case 0x5b0d86:c.instructions+=3;goto B5b0d86;
case 0x5b0d88:c.instructions+=2;goto B5b0d88;
case 0x5b0d8a:c.instructions+=1;goto B5b0d8a;
case 0x5b0d8c:goto L5b0d8c;
case 0x5b0d90:c.instructions+=1;goto B5b0d90;
case 0x5b0d93:goto L5b0d93;
case 0x5b0d96:c.instructions+=1;goto B5b0d96;
case 0x5b0d98:goto L5b0d98;
case 0x5b0d99:c.instructions+=3;goto B5b0d99;
case 0x5b0d9c:c.instructions+=2;goto B5b0d9c;
case 0x5b0d9e:c.instructions+=1;goto B5b0d9e;
case 0x5b0da0:goto L5b0da0;
case 0x5b0da4:goto L5b0da4;
case 0x5b0da6:c.instructions+=2;goto B5b0da6;
case 0x5b0da8:c.instructions+=1;goto B5b0da8;
case 0x5b0daa:goto L5b0daa;
case 0x5b0dac:goto L5b0dac;
case 0x5b0db2:c.instructions+=2;goto B5b0db2;
case 0x5b0db3:c.instructions+=1;goto B5b0db3;
case 0x5b0db8:goto L5b0db8;
case 0x5b0dbb:c.instructions+=4;goto B5b0dbb;
case 0x5b0dbf:c.instructions+=3;goto B5b0dbf;
case 0x5b0dc1:c.instructions+=2;goto B5b0dc1;
case 0x5b0dc9:c.instructions+=1;goto B5b0dc9;
case 0x5b0dcb:goto L5b0dcb;
case 0x5b0dcf:c.instructions+=4;goto B5b0dcf;
case 0x5b0dd0:c.instructions+=3;goto B5b0dd0;
case 0x5b0dd1:c.instructions+=2;goto B5b0dd1;
case 0x5b0dd3:c.instructions+=1;goto B5b0dd3;
case 0x5b0dd8:goto L5b0dd8;
case 0x5b0ddc:goto L5b0ddc;
case 0x5b0de4:goto L5b0de4;
case 0x5b0de7:c.instructions+=2;goto B5b0de7;
case 0x5b0de9:c.instructions+=1;goto B5b0de9;
case 0x5b0deb:goto L5b0deb;
case 0x5b0def:c.instructions+=4;goto B5b0def;
case 0x5b0df3:c.instructions+=3;goto B5b0df3;
case 0x5b0df5:c.instructions+=2;goto B5b0df5;
case 0x5b0df7:c.instructions+=1;goto B5b0df7;
case 0x5b0df9:goto L5b0df9;
case 0x5b0dfd:c.instructions+=8;goto B5b0dfd;
case 0x5b0e01:c.instructions+=7;goto B5b0e01;
case 0x5b0e05:c.instructions+=6;goto B5b0e05;
case 0x5b0e06:c.instructions+=5;goto B5b0e06;
case 0x5b0e09:c.instructions+=4;goto B5b0e09;
case 0x5b0e0b:c.instructions+=3;goto B5b0e0b;
case 0x5b0e0f:c.instructions+=2;goto B5b0e0f;
case 0x5b0e13:c.instructions+=1;goto B5b0e13;
case 0x5b0e19:goto L5b0e19;
case 0x5b0e1a:c.instructions+=3;goto B5b0e1a;
case 0x5b0e1b:c.instructions+=2;goto B5b0e1b;
case 0x5b0e1c:c.instructions+=1;goto B5b0e1c;
case 0x5b0e1d:goto L5b0e1d;
case 0x5b0e21:c.instructions+=3;goto B5b0e21;
case 0x5b0e28:c.instructions+=2;goto B5b0e28;
case 0x5b0e2b:c.instructions+=1;goto B5b0e2b;
case 0x5b0e30:goto L5b0e30;
case 0x5b0e31:c.instructions+=10;goto B5b0e31;
case 0x5b0e33:c.instructions+=9;goto B5b0e33;
case 0x5b0e36:c.instructions+=8;goto B5b0e36;
case 0x5b0e39:c.instructions+=7;goto B5b0e39;
case 0x5b0e3c:c.instructions+=6;goto B5b0e3c;
case 0x5b0e3e:c.instructions+=5;goto B5b0e3e;
case 0x5b0e43:c.instructions+=4;goto B5b0e43;
case 0x5b0e44:c.instructions+=3;goto B5b0e44;
case 0x5b0e45:c.instructions+=2;goto B5b0e45;
case 0x5b0e46:c.instructions+=1;goto B5b0e46;
case 0x5b0e4c:goto L5b0e4c;
case 0x5b0e4f:c.instructions+=9;goto B5b0e4f;
case 0x5b0e52:c.instructions+=8;goto B5b0e52;
case 0x5b0e54:c.instructions+=7;goto B5b0e54;
case 0x5b0e57:c.instructions+=6;goto B5b0e57;
case 0x5b0e59:c.instructions+=5;goto B5b0e59;
case 0x5b0e5d:c.instructions+=4;goto B5b0e5d;
case 0x5b0e60:c.instructions+=3;goto B5b0e60;
case 0x5b0e63:c.instructions+=2;goto B5b0e63;
case 0x5b0e65:c.instructions+=1;goto B5b0e65;
case 0x5b0e6b:goto L5b0e6b;
case 0x5b0e6d:c.instructions+=1;goto B5b0e6d;
case 0x5b0e71:goto L5b0e71;
case 0x5b0e76:c.instructions+=7;goto B5b0e76;
case 0x5b0e78:c.instructions+=6;goto B5b0e78;
case 0x5b0e7e:c.instructions+=5;goto B5b0e7e;
case 0x5b0e81:c.instructions+=4;goto B5b0e81;
case 0x5b0e87:c.instructions+=3;goto B5b0e87;
case 0x5b0e88:c.instructions+=2;goto B5b0e88;
case 0x5b0e8e:c.instructions+=1;goto B5b0e8e;
case 0x5b0e93:goto L5b0e93;
case 0x5b0e99:c.instructions+=4;goto B5b0e99;
case 0x5b0e9c:c.instructions+=3;goto B5b0e9c;
case 0x5b0ea2:c.instructions+=2;goto B5b0ea2;
case 0x5b0ea4:c.instructions+=1;goto B5b0ea4;
case 0x5b0eb0:goto L5b0eb0;
case 0x5b0eb7:c.instructions+=2;goto B5b0eb7;
case 0x5b0eb8:c.instructions+=1;goto B5b0eb8;
case 0x5b0ebd:goto L5b0ebd;
case 0x5b0ec0:c.instructions+=2;goto B5b0ec0;
case 0x5b0ec2:c.instructions+=1;goto B5b0ec2;
case 0x5b0ec4:goto L5b0ec4;
case 0x5b0ec5:c.instructions+=2;goto B5b0ec5;
case 0x5b0ec8:c.instructions+=1;goto B5b0ec8;
case 0x5b0eca:goto L5b0eca;
case 0x5b0ecc:goto L5b0ecc;
case 0x5b0ed2:c.instructions+=11;goto B5b0ed2;
case 0x5b0ed8:c.instructions+=10;goto B5b0ed8;
case 0x5b0eda:c.instructions+=9;goto B5b0eda;
case 0x5b0edd:c.instructions+=8;goto B5b0edd;
case 0x5b0ee3:c.instructions+=7;goto B5b0ee3;
case 0x5b0ee5:c.instructions+=6;goto B5b0ee5;
case 0x5b0ee8:c.instructions+=5;goto B5b0ee8;
case 0x5b0eec:c.instructions+=4;goto B5b0eec;
case 0x5b0ef2:c.instructions+=3;goto B5b0ef2;
case 0x5b0ef3:c.instructions+=2;goto B5b0ef3;
case 0x5b0ef7:c.instructions+=1;goto B5b0ef7;
case 0x5b0efd:goto L5b0efd;
case 0x5b0f03:c.instructions+=2;goto B5b0f03;
case 0x5b0f08:c.instructions+=1;goto B5b0f08;
case 0x5b0f0d:goto L5b0f0d;
case 0x5b0f0f:c.instructions+=1;goto B5b0f0f;
case 0x5b0f11:goto L5b0f11;
case 0x5b0f17:c.instructions+=2;goto B5b0f17;
case 0x5b0f1c:c.instructions+=1;goto B5b0f1c;
case 0x5b0f20:goto L5b0f20;
case 0x5b0f22:c.instructions+=2;goto B5b0f22;
case 0x5b0f24:c.instructions+=1;goto B5b0f24;
case 0x5b0f26:goto L5b0f26;
case 0x5b0f2c:c.instructions+=2;goto B5b0f2c;
case 0x5b0f2e:c.instructions+=1;goto B5b0f2e;
case 0x5b0f30:goto L5b0f30;
case 0x5b0f36:c.instructions+=1;goto B5b0f36;
case 0x5b0f38:goto L5b0f38;
case 0x5b0f3a:c.instructions+=2;goto B5b0f3a;
case 0x5b0f3c:c.instructions+=1;goto B5b0f3c;
case 0x5b0f3e:goto L5b0f3e;
case 0x5b0f40:goto L5b0f40;
case 0x5b0f43:goto L5b0f43;
case 0x5b0f46:c.instructions+=2;goto B5b0f46;
case 0x5b0f47:c.instructions+=1;goto B5b0f47;
case 0x5b0f49:goto L5b0f49;
case 0x5b0f4b:c.instructions+=2;goto B5b0f4b;
case 0x5b0f4d:c.instructions+=1;goto B5b0f4d;
case 0x5b0f4f:goto L5b0f4f;
case 0x5b0f54:c.instructions+=6;goto B5b0f54;
case 0x5b0f55:c.instructions+=5;goto B5b0f55;
case 0x5b0f56:c.instructions+=4;goto B5b0f56;
case 0x5b0f57:c.instructions+=3;goto B5b0f57;
case 0x5b0f59:c.instructions+=2;goto B5b0f59;
case 0x5b0f5a:c.instructions+=1;goto B5b0f5a;
case 0x5b0f5b:goto L5b0f5b;
case 0x5b0f60:c.instructions+=1;goto B5b0f60;
case 0x5b0f66:goto L5b0f66;
case 0x5b0f69:c.instructions+=4;goto B5b0f69;
case 0x5b0f6c:c.instructions+=3;goto B5b0f6c;
case 0x5b0f6f:c.instructions+=2;goto B5b0f6f;
case 0x5b0f71:c.instructions+=1;goto B5b0f71;
case 0x5b0f77:goto L5b0f77;
case 0x5b0f7c:c.instructions+=3;goto B5b0f7c;
case 0x5b0f80:c.instructions+=2;goto B5b0f80;
case 0x5b0f88:c.instructions+=1;goto B5b0f88;
case 0x5b0f8e:goto L5b0f8e;
case 0x5b0f91:c.instructions+=5;goto B5b0f91;
case 0x5b0f94:c.instructions+=4;goto B5b0f94;
case 0x5b0f98:c.instructions+=3;goto B5b0f98;
case 0x5b0f99:c.instructions+=2;goto B5b0f99;
case 0x5b0f9a:c.instructions+=1;goto B5b0f9a;
case 0x5b0f9f:goto L5b0f9f;
case 0x5b0fa3:c.instructions+=8;goto B5b0fa3;
case 0x5b0fa4:c.instructions+=7;goto B5b0fa4;
case 0x5b0fa8:c.instructions+=6;goto B5b0fa8;
case 0x5b0fa9:c.instructions+=5;goto B5b0fa9;
case 0x5b0fb1:c.instructions+=4;goto B5b0fb1;
case 0x5b0fb9:c.instructions+=3;goto B5b0fb9;
case 0x5b0fc1:c.instructions+=2;goto B5b0fc1;
case 0x5b0fc9:c.instructions+=1;goto B5b0fc9;
case 0x5b0fce:goto L5b0fce;
case 0x5b0fd1:c.instructions+=11;goto B5b0fd1;
case 0x5b0fd3:c.instructions+=10;goto B5b0fd3;
case 0x5b0fd7:c.instructions+=9;goto B5b0fd7;
case 0x5b0fda:c.instructions+=8;goto B5b0fda;
case 0x5b0fde:c.instructions+=7;goto B5b0fde;
case 0x5b0fe2:c.instructions+=6;goto B5b0fe2;
case 0x5b0fe5:c.instructions+=5;goto B5b0fe5;
case 0x5b0fe6:c.instructions+=4;goto B5b0fe6;
case 0x5b0fea:c.instructions+=3;goto B5b0fea;
case 0x5b0feb:c.instructions+=2;goto B5b0feb;
case 0x5b0fef:c.instructions+=1;goto B5b0fef;
case 0x5b0ff4:goto L5b0ff4;
case 0x5b0ff8:c.instructions+=3;goto B5b0ff8;
case 0x5b0ffc:c.instructions+=2;goto B5b0ffc;
case 0x5b0fff:c.instructions+=1;goto B5b0fff;
default:missing_instruction(c.pc);}
B5b0003:L5b0003:{c.instructions+=2;NFSU2_TR(0x5b0003);
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
B5b0006:{NFSU2_TR(0x5b0006);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b0010:L5b0010:{c.instructions+=2;NFSU2_TR(0x5b0010);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b0013:{NFSU2_TR(0x5b0013);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b0020:L5b0020:{c.instructions+=2;NFSU2_TR(0x5b0020);
w1(R+512,u8((r4(R+4))<(u32(0x8ull))));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x8ull))));
}
B5b0023:{NFSU2_TR(0x5b0023);
TAIL_STATIC(0x5b2280u,5b2);
}
B5b0029:L5b0029:{c.instructions+=1;NFSU2_TR(0x5b0029);
u8 U[4];
{SPILL();c.pc=0x5b0029u;V r_=user_op(c,262160,{V(0x3ull)});SPILL();wv<4>((U+0),r_);}
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
{u32 t_=u32(u8(0x0ull));TAIL_DYNAMIC(t_);}
}
B5b0030:L5b0030:{c.instructions+=67;NFSU2_TR(0x5b0030);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0031:{NFSU2_TR(0x5b0031);
__builtin_memmove((R+20),(R+16),4);
}
B5b0033:{NFSU2_TR(0x5b0033);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0035:{NFSU2_TR(0x5b0035);
u8 U[4];
w4(U+0,u32(0x778e68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b003a:{NFSU2_TR(0x5b003a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b0040:{NFSU2_TR(0x5b0040);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0041:{NFSU2_TR(0x5b0041);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0048:{NFSU2_TR(0x5b0048);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0049:{NFSU2_TR(0x5b0049);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b004a:{NFSU2_TR(0x5b004a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b004b:{NFSU2_TR(0x5b004b);
__builtin_memmove((R+24),(R+4),4);
}
B5b004d:{NFSU2_TR(0x5b004d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b004e:{NFSU2_TR(0x5b004e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0051:{NFSU2_TR(0x5b0051);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5b0054:{NFSU2_TR(0x5b0054);
u8 U[4];
w4(U+0,u32(0x7a2560ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5b005a:{NFSU2_TR(0x5b005a);
{u32 ea_=u32(r4(R+28)+u32(504u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b0060:{NFSU2_TR(0x5b0060);
{u32 ea_=u32(r4(R+28)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b0066:{NFSU2_TR(0x5b0066);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1f0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b006c:{NFSU2_TR(0x5b006c);
{u32 ea_=u32(r4(R+24)+u32(348u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5b0072:{NFSU2_TR(0x5b0072);
w4(R+4,u32(0x9ull));
}
B5b0077:{NFSU2_TR(0x5b0077);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5b0079:{NFSU2_TR(0x5b0079);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b007f:{NFSU2_TR(0x5b007f);
{u32 ea_=u32(r4(R+24)+u32(352u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b0085:{NFSU2_TR(0x5b0085);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x200ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5b008b:{NFSU2_TR(0x5b008b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b008d:{NFSU2_TR(0x5b008d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0093:{NFSU2_TR(0x5b0093);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5b0095:{NFSU2_TR(0x5b0095);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x248ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5b009b:{NFSU2_TR(0x5b009b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5b009d:{NFSU2_TR(0x5b009d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b00a0:{NFSU2_TR(0x5b00a0);
{u32 ea_=u32(u32(7897588u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5b00a6:{NFSU2_TR(0x5b00a6);
{u32 ea_=u32(r4(R+24)+u32(356u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b00ac:{NFSU2_TR(0x5b00ac);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b00ae:{NFSU2_TR(0x5b00ae);
{u32 ea_=u32(r4(R+28)+u32(504u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b00b4:{NFSU2_TR(0x5b00b4);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b00b6:{NFSU2_TR(0x5b00b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b00bc:{NFSU2_TR(0x5b00bc);
{u32 ea_=u32(r4(R+24)+u32(368u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5b00c2:{NFSU2_TR(0x5b00c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b00cc:{NFSU2_TR(0x5b00cc);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5b00ce:{NFSU2_TR(0x5b00ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19cull))));
__builtin_memmove((R+8),(U+0),4);
}
B5b00d4:{NFSU2_TR(0x5b00d4);
{u32 ea_=u32(r4(R+24)+u32(372u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b00da:{NFSU2_TR(0x5b00da);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b00dc:{NFSU2_TR(0x5b00dc);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5b00de:{NFSU2_TR(0x5b00de);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5b00e4:{NFSU2_TR(0x5b00e4);
{u32 ea_=u32(r4(R+24)+u32(376u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b00ea:{NFSU2_TR(0x5b00ea);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b00ec:{NFSU2_TR(0x5b00ec);
{u32 ea_=u32(r4(R+28)+u32(500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b00f2:{NFSU2_TR(0x5b00f2);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b00f4:{NFSU2_TR(0x5b00f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b00fa:{NFSU2_TR(0x5b00fa);
{u32 ea_=u32(r4(R+24)+u32(388u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5b0100:{NFSU2_TR(0x5b0100);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b0106:{NFSU2_TR(0x5b0106);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5b0108:{NFSU2_TR(0x5b0108);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0109:{NFSU2_TR(0x5b0109);
{u32 ea_=u32(r4(R+24)+u32(392u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b010f:{NFSU2_TR(0x5b010f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0110:{NFSU2_TR(0x5b0110);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b0112:{NFSU2_TR(0x5b0112);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0113:{NFSU2_TR(0x5b0113);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5b0115:{NFSU2_TR(0x5b0115);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x190ull))));
w4(U+4,u32(0x7fbf38ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b011f:{NFSU2_TR(0x5b011f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1b0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b0125:{NFSU2_TR(0x5b0125);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0126:{NFSU2_TR(0x5b0126);
{u32 ea_=u32(u32(7897588u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5b012c:{NFSU2_TR(0x5b012c);
{u32 ea_=u32(r4(R+24)+u32(396u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b0132:{NFSU2_TR(0x5b0132);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0138:{NFSU2_TR(0x5b0138);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b013b:{NFSU2_TR(0x5b013b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b013d:{NFSU2_TR(0x5b013d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b0142ull));
TAIL_STATIC(0x5ac7d0u,5ac);
}
B5b0142:L5b0142:{c.instructions+=6;NFSU2_TR(0x5b0142);
{u32 ea_=u32(r4(R+28)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b0148:{NFSU2_TR(0x5b0148);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5b014b:{NFSU2_TR(0x5b014b);
{u32 ea_=u32(u32(7882068u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b0151:{NFSU2_TR(0x5b0151);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b0153:{NFSU2_TR(0x5b0153);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b0156:{NFSU2_TR(0x5b0156);
if(r1(R+514)){{goto L5b015f;}}
}
B5b0158:L5b0158:{c.instructions+=2;NFSU2_TR(0x5b0158);
w4(R+0,u32(0x1ull));
}
B5b015d:{NFSU2_TR(0x5b015d);
{goto L5b0161;}
}
B5b015f:L5b015f:{c.instructions+=1;NFSU2_TR(0x5b015f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b0161:L5b0161:{c.instructions+=8;NFSU2_TR(0x5b0161);
{u32 ea_=u32(r4(R+28)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b0167:{NFSU2_TR(0x5b0167);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5b0169:{NFSU2_TR(0x5b0169);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b016f:{NFSU2_TR(0x5b016f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b0171:{NFSU2_TR(0x5b0171);
__builtin_memmove((R+4),(R+518),1);
}
B5b0174:{NFSU2_TR(0x5b0174);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b0176:{NFSU2_TR(0x5b0176);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b0179:{NFSU2_TR(0x5b0179);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b0180;}}
}
B5b017b:L5b017b:{c.instructions+=1;NFSU2_TR(0x5b017b);
w4(R+4,u32(0x2ull));
}
B5b0180:L5b0180:{c.instructions+=16;NFSU2_TR(0x5b0180);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b0183:{NFSU2_TR(0x5b0183);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x144ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5b0189:{NFSU2_TR(0x5b0189);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b018c:{NFSU2_TR(0x5b018c);
{u32 ea_=u32(r4(R+4)+u32(8372920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b0192:{NFSU2_TR(0x5b0192);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b0195:{NFSU2_TR(0x5b0195);
{u32 ea_=u32(r4(R+24)+u32(416u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b019b:{NFSU2_TR(0x5b019b);
u8 U[4];
w4(U+0,u32(0x7a2558ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b01a0:{NFSU2_TR(0x5b01a0);
w4(R+28,u32(0x3f800000ull));
}
B5b01a5:{NFSU2_TR(0x5b01a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b01a6:{NFSU2_TR(0x5b01a6);
{u32 ea_=u32(r4(R+24)+u32(416u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b01ac:{NFSU2_TR(0x5b01ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b01af:{NFSU2_TR(0x5b01af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b01b2:{NFSU2_TR(0x5b01b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b01bc:{NFSU2_TR(0x5b01bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b01c2:{NFSU2_TR(0x5b01c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b01c8:{NFSU2_TR(0x5b01c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b01cdull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5b01cd:L5b01cd:{c.instructions+=11;NFSU2_TR(0x5b01cd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b01d0:{NFSU2_TR(0x5b01d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b01d6:{NFSU2_TR(0x5b01d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b01dc:{NFSU2_TR(0x5b01dc);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5b01de:{NFSU2_TR(0x5b01de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b01e4:{NFSU2_TR(0x5b01e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b01ea:{NFSU2_TR(0x5b01ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b01ed:{NFSU2_TR(0x5b01ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5b01f3:{NFSU2_TR(0x5b01f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b01f6:{NFSU2_TR(0x5b01f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b01fc:{NFSU2_TR(0x5b01fc);
__builtin_memmove((R+16),(R+16),4);
}
B5b0200:L5b0200:{c.instructions+=35;NFSU2_TR(0x5b0200);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0203:{NFSU2_TR(0x5b0203);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5b0205:{NFSU2_TR(0x5b0205);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0208:{NFSU2_TR(0x5b0208);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b020b:{NFSU2_TR(0x5b020b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b020e:{NFSU2_TR(0x5b020e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5b0210:{NFSU2_TR(0x5b0210);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0213:{NFSU2_TR(0x5b0213);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0216:{NFSU2_TR(0x5b0216);
u8 U[13];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5b021d:{NFSU2_TR(0x5b021d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0220:{NFSU2_TR(0x5b0220);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0226:{NFSU2_TR(0x5b0226);
{u32 ea_=u32(u32(8827796u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b022c:{NFSU2_TR(0x5b022c);
{u32 ea_=u32(u32(8827800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b0232:{NFSU2_TR(0x5b0232);
__builtin_memmove((R+28),gp(0x86b390),4);
}
B5b0238:{NFSU2_TR(0x5b0238);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b023b:{NFSU2_TR(0x5b023b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b023d:{NFSU2_TR(0x5b023d);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b0240:{NFSU2_TR(0x5b0240);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5b0243:{NFSU2_TR(0x5b0243);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B5b0246:{NFSU2_TR(0x5b0246);
{u32 ea_=u32(r4(R+4)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b0249:{NFSU2_TR(0x5b0249);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1a4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b024f:{NFSU2_TR(0x5b024f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0255:{NFSU2_TR(0x5b0255);
{u32 ea_=u32(u32(8827796u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b025b:{NFSU2_TR(0x5b025b);
{u32 ea_=u32(u32(8827800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b0261:{NFSU2_TR(0x5b0261);
__builtin_memmove((R+28),gp(0x86b390),4);
}
B5b0267:{NFSU2_TR(0x5b0267);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b026d:{NFSU2_TR(0x5b026d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b026f:{NFSU2_TR(0x5b026f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5b0272:{NFSU2_TR(0x5b0272);
{u32 ea_=u32(r4(R+4)+u32(284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b0278:{NFSU2_TR(0x5b0278);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5b0279:{NFSU2_TR(0x5b0279);
{u32 ea_=u32(r4(R+4)+u32(288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b027f:{NFSU2_TR(0x5b027f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B5b0282:{NFSU2_TR(0x5b0282);
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
B5b0285:{NFSU2_TR(0x5b0285);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0288:{NFSU2_TR(0x5b0288);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b0200u);}goto L5b0200;}}
}
B5b028e:L5b028e:{c.instructions+=9;NFSU2_TR(0x5b028e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b0291:{NFSU2_TR(0x5b0291);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b0292:{NFSU2_TR(0x5b0292);
__builtin_memmove((R+0),(R+24),4);
}
B5b0294:{NFSU2_TR(0x5b0294);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b0295:{NFSU2_TR(0x5b0295);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b0296:{NFSU2_TR(0x5b0296);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b029d:{NFSU2_TR(0x5b029d);
__builtin_memmove((R+16),(R+20),4);
}
B5b029f:{NFSU2_TR(0x5b029f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b02a0:{NFSU2_TR(0x5b02a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b02b0:L5b02b0:{c.instructions+=11;NFSU2_TR(0x5b02b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b02b4:{NFSU2_TR(0x5b02b4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x20ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b02b7:{NFSU2_TR(0x5b02b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b02b9:{NFSU2_TR(0x5b02b9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5b02bb:{NFSU2_TR(0x5b02bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b02be:{NFSU2_TR(0x5b02be);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b02c1:{NFSU2_TR(0x5b02c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b02c4:{NFSU2_TR(0x5b02c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b02c7:{NFSU2_TR(0x5b02c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b02ca:{NFSU2_TR(0x5b02ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b02cd:{NFSU2_TR(0x5b02cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b02d0:L5b02d0:{c.instructions+=11;NFSU2_TR(0x5b02d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b02d4:{NFSU2_TR(0x5b02d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b02d6:{NFSU2_TR(0x5b02d6);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x20ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b02d9:{NFSU2_TR(0x5b02d9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5b02db:{NFSU2_TR(0x5b02db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b02de:{NFSU2_TR(0x5b02de);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b02e1:{NFSU2_TR(0x5b02e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b02e4:{NFSU2_TR(0x5b02e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b02e7:{NFSU2_TR(0x5b02e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b02ea:{NFSU2_TR(0x5b02ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b02ed:{NFSU2_TR(0x5b02ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b02f0:L5b02f0:{c.instructions+=3;NFSU2_TR(0x5b02f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b02f1:{NFSU2_TR(0x5b02f1);
__builtin_memmove((R+24),(R+4),4);
}
B5b02f3:{NFSU2_TR(0x5b02f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b02f8ull));
TAIL_STATIC(0x5a0d10u,5a0);
}
B5b02f8:L5b02f8:{c.instructions+=2;NFSU2_TR(0x5b02f8);
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
B5b02fd:{NFSU2_TR(0x5b02fd);
if(r1(R+518)){{goto L5b030e;}}
}
B5b02ff:L5b02ff:{c.instructions+=4;NFSU2_TR(0x5b02ff);
__builtin_memmove((R+0),gp(0x86b2fc),4);
}
B5b0304:{NFSU2_TR(0x5b0304);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0305:{NFSU2_TR(0x5b0305);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0306:{NFSU2_TR(0x5b0306);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b030bull));
TAIL_STATIC(0x43f920u,43f);
}
B5b030b:L5b030b:{c.instructions+=1;NFSU2_TR(0x5b030b);
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
B5b030e:L5b030e:{c.instructions+=3;NFSU2_TR(0x5b030e);
__builtin_memmove((R+0),(R+24),4);
}
B5b0310:{NFSU2_TR(0x5b0310);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b0311:{NFSU2_TR(0x5b0311);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b0320:L5b0320:{c.instructions+=3;NFSU2_TR(0x5b0320);
u8 U[4];
w4(U+0,u32(0x7a2590ull));
s4(u32(r4(R+4)),r4(U+0));
}
B5b0326:{NFSU2_TR(0x5b0326);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
w4(U+4,u32(0x7a2584ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b032d:{NFSU2_TR(0x5b032d);
TAIL_STATIC(0x5aff60u,5af);
}
B5b0340:L5b0340:{c.instructions+=2;NFSU2_TR(0x5b0340);
w1(R+512,u8((r4(R+4))<(u32(0x8ull))));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x8ull))));
}
B5b0343:{NFSU2_TR(0x5b0343);
TAIL_STATIC(0x5b27c0u,5b2);
}
B5b0350:L5b0350:{c.instructions+=3;NFSU2_TR(0x5b0350);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0351:{NFSU2_TR(0x5b0351);
__builtin_memmove((R+24),(R+4),4);
}
B5b0353:{NFSU2_TR(0x5b0353);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b0358ull));
TAIL_STATIC(0x5a0d10u,5a0);
}
B5b0358:L5b0358:{c.instructions+=2;NFSU2_TR(0x5b0358);
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
B5b035d:{NFSU2_TR(0x5b035d);
if(r1(R+518)){{goto L5b0368;}}
}
B5b035f:L5b035f:{c.instructions+=2;NFSU2_TR(0x5b035f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0360:{NFSU2_TR(0x5b0360);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b0365ull));
TAIL_STATIC(0x440540u,440);
}
B5b0365:L5b0365:{c.instructions+=1;NFSU2_TR(0x5b0365);
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
B5b0368:L5b0368:{c.instructions+=3;NFSU2_TR(0x5b0368);
__builtin_memmove((R+0),(R+24),4);
}
B5b036a:{NFSU2_TR(0x5b036a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b036b:{NFSU2_TR(0x5b036b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b0370:L5b0370:{c.instructions+=26;NFSU2_TR(0x5b0370);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0371:{NFSU2_TR(0x5b0371);
__builtin_memmove((R+20),(R+16),4);
}
B5b0373:{NFSU2_TR(0x5b0373);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5b0376:{NFSU2_TR(0x5b0376);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0378:{NFSU2_TR(0x5b0378);
u8 U[4];
w4(U+0,u32(0x778eb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b037d:{NFSU2_TR(0x5b037d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b0383:{NFSU2_TR(0x5b0383);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0384:{NFSU2_TR(0x5b0384);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b038b:{NFSU2_TR(0x5b038b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B5b038e:{NFSU2_TR(0x5b038e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b038f:{NFSU2_TR(0x5b038f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0390:{NFSU2_TR(0x5b0390);
__builtin_memmove((R+24),(R+4),4);
}
B5b0392:{NFSU2_TR(0x5b0392);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b0395:{NFSU2_TR(0x5b0395);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0396:{NFSU2_TR(0x5b0396);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b039a:{NFSU2_TR(0x5b039a);
u8 U[4];
w4(U+0,u32(0x7a25e0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5b03a0:{NFSU2_TR(0x5b03a0);
u8 U[4];
w4(U+0,u32(0x7a25d4ull));
s4(u32(r4(R+12)),r4(U+0));
}
B5b03a6:{NFSU2_TR(0x5b03a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b03a9:{NFSU2_TR(0x5b03a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b03ac:{NFSU2_TR(0x5b03ac);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x19ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b03b0:{NFSU2_TR(0x5b03b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b03b3:{NFSU2_TR(0x5b03b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x160ull))));
w4(U+4,u32(0x411ccccdull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b03bd:{NFSU2_TR(0x5b03bd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b03c0:{NFSU2_TR(0x5b03c0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b03c2:{NFSU2_TR(0x5b03c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b03ca:{NFSU2_TR(0x5b03ca);
if(r1(R+518)){{goto L5b044a;}}
}
B5b03cc:L5b03cc:{c.instructions+=4;NFSU2_TR(0x5b03cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b03cf:{NFSU2_TR(0x5b03cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b03d0:{NFSU2_TR(0x5b03d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b03d3:{NFSU2_TR(0x5b03d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b03d8ull));
TAIL_STATIC(0x59b8b0u,59b);
}
B5b03d8:L5b03d8:{c.instructions+=20;NFSU2_TR(0x5b03d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b03db:{NFSU2_TR(0x5b03db);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b03de:{NFSU2_TR(0x5b03de);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b03e1:{NFSU2_TR(0x5b03e1);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b03e4:{NFSU2_TR(0x5b03e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b03e7:{NFSU2_TR(0x5b03e7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B5b03ea:{NFSU2_TR(0x5b03ea);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b03ec:{NFSU2_TR(0x5b03ec);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b03ef:{NFSU2_TR(0x5b03ef);
__builtin_memmove((R+0),(R+8),4);
}
B5b03f1:{NFSU2_TR(0x5b03f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b03f4:{NFSU2_TR(0x5b03f4);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b03f7:{NFSU2_TR(0x5b03f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5b03fa:{NFSU2_TR(0x5b03fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b03fc:{NFSU2_TR(0x5b03fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0400:{NFSU2_TR(0x5b0400);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0401:{NFSU2_TR(0x5b0401);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5b0404:{NFSU2_TR(0x5b0404);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0405:{NFSU2_TR(0x5b0405);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b0409:{NFSU2_TR(0x5b0409);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b040a:{NFSU2_TR(0x5b040a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b040full));
TAIL_STATIC(0x43c9c0u,43c);
}
B5b040f:L5b040f:{c.instructions+=17;NFSU2_TR(0x5b040f);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b0412:{NFSU2_TR(0x5b0412);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b0416:{NFSU2_TR(0x5b0416);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b0419:{NFSU2_TR(0x5b0419);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b041c:{NFSU2_TR(0x5b041c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0420:{NFSU2_TR(0x5b0420);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b0424:{NFSU2_TR(0x5b0424);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0428:{NFSU2_TR(0x5b0428);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b042c:{NFSU2_TR(0x5b042c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5b042f:{NFSU2_TR(0x5b042f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b0433:{NFSU2_TR(0x5b0433);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b0437:{NFSU2_TR(0x5b0437);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b043b:{NFSU2_TR(0x5b043b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b043f:{NFSU2_TR(0x5b043f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b0441:{NFSU2_TR(0x5b0441);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b0444:{NFSU2_TR(0x5b0444);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0447:{NFSU2_TR(0x5b0447);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b044a:L5b044a:{c.instructions+=3;NFSU2_TR(0x5b044a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b044d:{NFSU2_TR(0x5b044d);
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
B5b044f:{NFSU2_TR(0x5b044f);
if(r1(R+518)){{goto L5b0457;}}
}
B5b0451:L5b0451:{c.instructions+=3;NFSU2_TR(0x5b0451);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b0453:{NFSU2_TR(0x5b0453);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0455:{NFSU2_TR(0x5b0455);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b0457ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5b0457:L5b0457:{c.instructions+=5;NFSU2_TR(0x5b0457);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b045a:{NFSU2_TR(0x5b045a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b045b:{NFSU2_TR(0x5b045b);
__builtin_memmove((R+0),gp(0x86b2f4),4);
}
B5b0460:{NFSU2_TR(0x5b0460);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0461:{NFSU2_TR(0x5b0461);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b0466ull));
TAIL_STATIC(0x43f920u,43f);
}
B5b0466:L5b0466:{c.instructions+=4;NFSU2_TR(0x5b0466);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b0469:{NFSU2_TR(0x5b0469);
__builtin_memmove((R+4),(R+12),4);
}
B5b046b:{NFSU2_TR(0x5b046b);
u8 U[5];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b0470:{NFSU2_TR(0x5b0470);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b0475ull));
TAIL_STATIC(0x5aa410u,5aa);
}
B5b0475:L5b0475:{c.instructions+=9;NFSU2_TR(0x5b0475);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b0479:{NFSU2_TR(0x5b0479);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b047a:{NFSU2_TR(0x5b047a);
u8 U[4];
w4(U+0,u32(0x78427cull));
s4(u32(r4(R+24)),r4(U+0));
}
B5b0480:{NFSU2_TR(0x5b0480);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b0481:{NFSU2_TR(0x5b0481);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0488:{NFSU2_TR(0x5b0488);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b0489:{NFSU2_TR(0x5b0489);
__builtin_memmove((R+16),(R+20),4);
}
B5b048b:{NFSU2_TR(0x5b048b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b048c:{NFSU2_TR(0x5b048c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b0490:L5b0490:{c.instructions+=2;NFSU2_TR(0x5b0490);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b0493:{NFSU2_TR(0x5b0493);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b04a0:L5b04a0:{c.instructions+=2;NFSU2_TR(0x5b04a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b04a6:{NFSU2_TR(0x5b04a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b04b0:L5b04b0:{c.instructions+=2;NFSU2_TR(0x5b04b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x110ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b04b6:{NFSU2_TR(0x5b04b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b04c0:L5b04c0:{c.instructions+=2;NFSU2_TR(0x5b04c0);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x8ull))));
}
B5b04c3:{NFSU2_TR(0x5b04c3);
TAIL_STATIC(0x5b27e0u,5b2);
}
B5b04d0:L5b04d0:{c.instructions+=8;NFSU2_TR(0x5b04d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b04d1:{NFSU2_TR(0x5b04d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b04d2:{NFSU2_TR(0x5b04d2);
__builtin_memmove((R+12),(R+4),4);
}
B5b04d4:{NFSU2_TR(0x5b04d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b04d7:{NFSU2_TR(0x5b04d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b04d9:{NFSU2_TR(0x5b04d9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b04da:{NFSU2_TR(0x5b04da);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b04dd:{NFSU2_TR(0x5b04dd);
if(r1(R+518)){{goto L5b04e4;}}
}
B5b04df:L5b04df:{c.instructions+=2;NFSU2_TR(0x5b04df);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b04e2:{NFSU2_TR(0x5b04e2);
{goto L5b04e6;}
}
B5b04e4:L5b04e4:{c.instructions+=1;NFSU2_TR(0x5b04e4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5b04e6:L5b04e6:{c.instructions+=2;NFSU2_TR(0x5b04e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b04e8:{NFSU2_TR(0x5b04e8);
if(r1(R+518)){{goto L5b04ef;}}
}
B5b04ea:L5b04ea:{c.instructions+=2;NFSU2_TR(0x5b04ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b04ed:{NFSU2_TR(0x5b04ed);
{goto L5b04f1;}
}
B5b04ef:L5b04ef:{c.instructions+=1;NFSU2_TR(0x5b04ef);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b04f1:L5b04f1:{c.instructions+=2;NFSU2_TR(0x5b04f1);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5b04f3:{NFSU2_TR(0x5b04f3);
if(r1(R+518)){{goto L5b0508;}}
}
B5b04f5:L5b04f5:{c.instructions+=3;NFSU2_TR(0x5b04f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b04f7:{NFSU2_TR(0x5b04f7);
__builtin_memmove((R+4),(R+24),4);
}
B5b04f9:{NFSU2_TR(0x5b04f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b04fcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b04fc:L5b04fc:{c.instructions+=3;NFSU2_TR(0x5b04fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5b04ff:{NFSU2_TR(0x5b04ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b0501:{NFSU2_TR(0x5b0501);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b04e4u);}goto L5b04e4;}}
}
B5b0503:L5b0503:{c.instructions+=2;NFSU2_TR(0x5b0503);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B5b0506:{NFSU2_TR(0x5b0506);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b04e6u);}goto L5b04e6;}
}
B5b0508:L5b0508:{c.instructions+=2;NFSU2_TR(0x5b0508);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b050b:{NFSU2_TR(0x5b050b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b0510ull));
TAIL_STATIC(0x5abb00u,5ab);
}
B5b0510:L5b0510:{c.instructions+=6;NFSU2_TR(0x5b0510);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b0512:{NFSU2_TR(0x5b0512);
__builtin_memmove((R+4),(R+12),4);
}
B5b0514:{NFSU2_TR(0x5b0514);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b0515:{NFSU2_TR(0x5b0515);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b0516:{NFSU2_TR(0x5b0516);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b0517:{NFSU2_TR(0x5b0517);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5b0520:L5b0520:{c.instructions+=12;NFSU2_TR(0x5b0520);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0521:{NFSU2_TR(0x5b0521);
__builtin_memmove((R+20),(R+16),4);
}
B5b0523:{NFSU2_TR(0x5b0523);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5b0526:{NFSU2_TR(0x5b0526);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B5b0529:{NFSU2_TR(0x5b0529);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b052a:{NFSU2_TR(0x5b052a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b052b:{NFSU2_TR(0x5b052b);
__builtin_memmove((R+24),(R+4),4);
}
B5b052d:{NFSU2_TR(0x5b052d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b0530:{NFSU2_TR(0x5b0530);
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
B5b0532:{NFSU2_TR(0x5b0532);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0533:{NFSU2_TR(0x5b0533);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0537:{NFSU2_TR(0x5b0537);
if(r1(R+518)){{goto L5b055a;}}
}
B5b0539:L5b0539:{c.instructions+=5;NFSU2_TR(0x5b0539);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b053c:{NFSU2_TR(0x5b053c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b053f:{NFSU2_TR(0x5b053f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b0545:{NFSU2_TR(0x5b0545);
u8 U[22];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x2ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5b0549:{NFSU2_TR(0x5b0549);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b055a;}}
}
B5b054b:L5b054b:{c.instructions+=3;NFSU2_TR(0x5b054b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b054e:{NFSU2_TR(0x5b054e);
__builtin_memmove((R+4),gp(0x7a1a20),4);
}
B5b0554:{NFSU2_TR(0x5b0554);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b055a:L5b055a:{c.instructions+=3;NFSU2_TR(0x5b055a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b055d:{NFSU2_TR(0x5b055d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b055f:{NFSU2_TR(0x5b055f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b0562ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b0562:L5b0562:{c.instructions+=4;NFSU2_TR(0x5b0562);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b0565:{NFSU2_TR(0x5b0565);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b0569:{NFSU2_TR(0x5b0569);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b056a:{NFSU2_TR(0x5b056a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b056full));
TAIL_STATIC(0x59e620u,59e);
}
B5b056f:L5b056f:{c.instructions+=3;NFSU2_TR(0x5b056f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b0572:{NFSU2_TR(0x5b0572);
w4(R+12,u32(0x4ull));
}
B5b0577:{NFSU2_TR(0x5b0577);
{goto L5b0580;}
}
B5b0580:L5b0580:{c.instructions+=9;NFSU2_TR(0x5b0580);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5b0582:{NFSU2_TR(0x5b0582);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b0585:{NFSU2_TR(0x5b0585);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b058b:{NFSU2_TR(0x5b058b);
__builtin_memmove((R+8),(R+4),4);
}
B5b058d:{NFSU2_TR(0x5b058d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b058e:{NFSU2_TR(0x5b058e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0592:{NFSU2_TR(0x5b0592);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b0598:{NFSU2_TR(0x5b0598);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0599:{NFSU2_TR(0x5b0599);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b059eull));
TAIL_STATIC(0x59d160u,59d);
}
B5b059e:L5b059e:{c.instructions+=4;NFSU2_TR(0x5b059e);
{u32 ea_=u32(r4(R+24)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b05a4:{NFSU2_TR(0x5b05a4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5b05a7:{NFSU2_TR(0x5b05a7);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B5b05a8:{NFSU2_TR(0x5b05a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b0580u);}goto L5b0580;}}
}
B5b05aa:L5b05aa:{c.instructions+=4;NFSU2_TR(0x5b05aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5b05ae:{NFSU2_TR(0x5b05ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b05b1:{NFSU2_TR(0x5b05b1);
__builtin_memmove((R+4),(R+28),4);
}
B5b05b3:{NFSU2_TR(0x5b05b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b05b8ull));
TAIL_STATIC(0x5abdf0u,5ab);
}
B5b05b8:L5b05b8:{c.instructions+=3;NFSU2_TR(0x5b05b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b05bb:{NFSU2_TR(0x5b05bb);
__builtin_memmove((R+24),(R+0),4);
}
B5b05bd:{NFSU2_TR(0x5b05bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b05c5:L5b05c5:{c.instructions+=4;NFSU2_TR(0x5b05c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b05c7:{NFSU2_TR(0x5b05c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b05cd:{NFSU2_TR(0x5b05cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b05cf:{NFSU2_TR(0x5b05cf);
if(r1(R+518)){{goto L5b0620;}}
}
B5b05d1:L5b05d1:{c.instructions+=15;NFSU2_TR(0x5b05d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b05d7:{NFSU2_TR(0x5b05d7);
{u32 ea_=u32(r4(R+0)+u32(324u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b05dd:{NFSU2_TR(0x5b05dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b05e3:{NFSU2_TR(0x5b05e3);
__builtin_memmove((R+8),gp(0x86b36c),4);
}
B5b05e9:{NFSU2_TR(0x5b05e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b05eb:{NFSU2_TR(0x5b05eb);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b05ee:{NFSU2_TR(0x5b05ee);
{u32 ea_=u32(r4(R+0)+u32(328u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b05f4:{NFSU2_TR(0x5b05f4);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b05f7:{NFSU2_TR(0x5b05f7);
{u32 ea_=u32(r4(R+0)+u32(320u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b05fd:{NFSU2_TR(0x5b05fd);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b0600:{NFSU2_TR(0x5b0600);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b0604:{NFSU2_TR(0x5b0604);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b0606:{NFSU2_TR(0x5b0606);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b060a:{NFSU2_TR(0x5b060a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b060e:{NFSU2_TR(0x5b060e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b0620;}}
}
B5b0610:L5b0610:{c.instructions+=5;NFSU2_TR(0x5b0610);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b0614:{NFSU2_TR(0x5b0614);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0615:{NFSU2_TR(0x5b0615);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x130ull))));
}
B5b061a:{NFSU2_TR(0x5b061a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b061b:{NFSU2_TR(0x5b061b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b0620ull));
TAIL_STATIC(0x59bb00u,59b);
}
B5b0620:L5b0620:{c.instructions+=5;NFSU2_TR(0x5b0620);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b0624:{NFSU2_TR(0x5b0624);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5b0627:{NFSU2_TR(0x5b0627);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5b0628:{NFSU2_TR(0x5b0628);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b062c:{NFSU2_TR(0x5b062c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b05c5u);}goto L5b05c5;}}
}
B5b062e:L5b062e:{c.instructions+=2;NFSU2_TR(0x5b062e);
__builtin_memmove((R+4),(R+28),4);
}
B5b0630:{NFSU2_TR(0x5b0630);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b0635ull));
TAIL_STATIC(0x5a5b60u,5a5);
}
B5b0635:L5b0635:{c.instructions+=3;NFSU2_TR(0x5b0635);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b0638:{NFSU2_TR(0x5b0638);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b063a:{NFSU2_TR(0x5b063a);
if(r1(R+518)){{goto L5b0641;}}
}
B5b063c:L5b063c:{c.instructions+=1;NFSU2_TR(0x5b063c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b0641ull));
TAIL_STATIC(0x5ecf70u,5ec);
}
B5b0641:L5b0641:{c.instructions+=3;NFSU2_TR(0x5b0641);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B5b0646:{NFSU2_TR(0x5b0646);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b0648:{NFSU2_TR(0x5b0648);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b0675;}}
}
B5b064a:L5b064a:{c.instructions+=3;NFSU2_TR(0x5b064a);
__builtin_memmove((R+0),gp(0x890108),4);
}
B5b064f:{NFSU2_TR(0x5b064f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b0651:{NFSU2_TR(0x5b0651);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b0675;}}
}
B5b0653:L5b0653:{c.instructions+=3;NFSU2_TR(0x5b0653);
__builtin_memmove((R+0),gp(0x890114),4);
}
B5b0658:{NFSU2_TR(0x5b0658);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b065a:{NFSU2_TR(0x5b065a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b066e;}}
}
B5b065c:L5b065c:{c.instructions+=3;NFSU2_TR(0x5b065c);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B5b0661:{NFSU2_TR(0x5b0661);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b0663:{NFSU2_TR(0x5b0663);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b066e;}}
}
B5b0665:L5b0665:{c.instructions+=3;NFSU2_TR(0x5b0665);
__builtin_memmove((R+0),gp(0x890104),4);
}
B5b066a:{NFSU2_TR(0x5b066a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b066c:{NFSU2_TR(0x5b066c);
if(r1(R+518)){{goto L5b0675;}}
}
B5b066e:L5b066e:{c.instructions+=2;NFSU2_TR(0x5b066e);
__builtin_memmove((R+4),(R+28),4);
}
B5b0670:{NFSU2_TR(0x5b0670);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b0675ull));
TAIL_STATIC(0x5ac260u,5ac);
}
B5b0675:L5b0675:{c.instructions+=2;NFSU2_TR(0x5b0675);
__builtin_memmove((R+4),(R+28),4);
}
B5b0677:{NFSU2_TR(0x5b0677);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b067cull));
TAIL_STATIC(0x5a51b0u,5a5);
}
B5b067c:L5b067c:{c.instructions+=3;NFSU2_TR(0x5b067c);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b067f:{NFSU2_TR(0x5b067f);
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
B5b0681:{NFSU2_TR(0x5b0681);
if(r1(R+518)){{goto L5b068a;}}
}
B5b0683:L5b0683:{c.instructions+=2;NFSU2_TR(0x5b0683);
__builtin_memmove((R+4),(R+28),4);
}
B5b0685:{NFSU2_TR(0x5b0685);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b068aull));
TAIL_STATIC(0x5a5c20u,5a5);
}
B5b068a:L5b068a:{c.instructions+=6;NFSU2_TR(0x5b068a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b068b:{NFSU2_TR(0x5b068b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b068c:{NFSU2_TR(0x5b068c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b068d:{NFSU2_TR(0x5b068d);
__builtin_memmove((R+16),(R+20),4);
}
B5b068f:{NFSU2_TR(0x5b068f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b0690:{NFSU2_TR(0x5b0690);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b06a0:L5b06a0:{c.instructions+=20;NFSU2_TR(0x5b06a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x88ull))));
}
B5b06a6:{NFSU2_TR(0x5b06a6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b06a7:{NFSU2_TR(0x5b06a7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b06a8:{NFSU2_TR(0x5b06a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b06a9:{NFSU2_TR(0x5b06a9);
__builtin_memmove((R+24),(R+4),4);
}
B5b06ab:{NFSU2_TR(0x5b06ab);
{u32 ea_=u32(r4(R+24)+u32(552u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b06b1:{NFSU2_TR(0x5b06b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b06b7:{NFSU2_TR(0x5b06b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b06bd:{NFSU2_TR(0x5b06bd);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5b06c1:{NFSU2_TR(0x5b06c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b06c5:{NFSU2_TR(0x5b06c5);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b06c9:{NFSU2_TR(0x5b06c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b06cc:{NFSU2_TR(0x5b06cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b06d0:{NFSU2_TR(0x5b06d0);
{u32 ea_=u32(u32(7897588u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5b06d6:{NFSU2_TR(0x5b06d6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b06d7:{NFSU2_TR(0x5b06d7);
__builtin_memmove((R+4),(R+24),4);
}
B5b06d9:{NFSU2_TR(0x5b06d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b06df:{NFSU2_TR(0x5b06df);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b06e7:{NFSU2_TR(0x5b06e7);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b06eb:{NFSU2_TR(0x5b06eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b06f0ull));
TAIL_STATIC(0x59a350u,59a);
}
B5b06f0:L5b06f0:{c.instructions+=34;NFSU2_TR(0x5b06f0);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b06f3:{NFSU2_TR(0x5b06f3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5b06f5:{NFSU2_TR(0x5b06f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b06f8:{NFSU2_TR(0x5b06f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b06fb:{NFSU2_TR(0x5b06fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b06fe:{NFSU2_TR(0x5b06fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0701:{NFSU2_TR(0x5b0701);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b0704:{NFSU2_TR(0x5b0704);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b070a:{NFSU2_TR(0x5b070a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b0710:{NFSU2_TR(0x5b0710);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5b0712:{NFSU2_TR(0x5b0712);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b0716:{NFSU2_TR(0x5b0716);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5b0718:{NFSU2_TR(0x5b0718);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0719:{NFSU2_TR(0x5b0719);
{u32 ea_=u32(r4(R+24)+u32(176u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b071f:{NFSU2_TR(0x5b071f);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b0723:{NFSU2_TR(0x5b0723);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5b0725:{NFSU2_TR(0x5b0725);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0726:{NFSU2_TR(0x5b0726);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b0729:{NFSU2_TR(0x5b0729);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b072a:{NFSU2_TR(0x5b072a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b072b:{NFSU2_TR(0x5b072b);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b072f:{NFSU2_TR(0x5b072f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5b0731:{NFSU2_TR(0x5b0731);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0735:{NFSU2_TR(0x5b0735);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0739:{NFSU2_TR(0x5b0739);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b073d:{NFSU2_TR(0x5b073d);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b0741:{NFSU2_TR(0x5b0741);
u8 U[5];
w4(U+0,u32(u32(u32(0x23ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b0746:{NFSU2_TR(0x5b0746);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b074e:{NFSU2_TR(0x5b074e);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b0751:{NFSU2_TR(0x5b0751);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b0753:{NFSU2_TR(0x5b0753);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b0756:{NFSU2_TR(0x5b0756);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5b0758:{NFSU2_TR(0x5b0758);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b075c:{NFSU2_TR(0x5b075c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b0761ull));
TAIL_STATIC(0x5ac7d0u,5ac);
}
B5b0761:L5b0761:{c.instructions+=5;NFSU2_TR(0x5b0761);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0765:{NFSU2_TR(0x5b0765);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5b0768:{NFSU2_TR(0x5b0768);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5b076a:{NFSU2_TR(0x5b076a);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+20),(U+0),4);
}
B5b076e:{NFSU2_TR(0x5b076e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x28ull))));
}
B5b0771:L5b0771:{c.instructions+=2;NFSU2_TR(0x5b0771);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0xf423full)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xf423full))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5b0779:{NFSU2_TR(0x5b0779);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5b0994;}}
}
B5b077f:L5b077f:{c.instructions+=10;NFSU2_TR(0x5b077f);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b0781:{NFSU2_TR(0x5b0781);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b0787:{NFSU2_TR(0x5b0787);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5b078b:{NFSU2_TR(0x5b078b);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5b078f:{NFSU2_TR(0x5b078f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b0793:{NFSU2_TR(0x5b0793);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b0795:{NFSU2_TR(0x5b0795);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b0799:{NFSU2_TR(0x5b0799);
{u32 ea_=u32(u32(8002856u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b079f:{NFSU2_TR(0x5b079f);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b07a3:{NFSU2_TR(0x5b07a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b0805;}}
}
B5b07a5:L5b07a5:{c.instructions+=6;NFSU2_TR(0x5b07a5);
{u32 ea_=u32(u32(8372884u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b07ab:{NFSU2_TR(0x5b07ab);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b07ae:{NFSU2_TR(0x5b07ae);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b07b2:{NFSU2_TR(0x5b07b2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b07b4:{NFSU2_TR(0x5b07b4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b07b7:{NFSU2_TR(0x5b07b7);
if(r1(R+514)){{goto L5b0805;}}
}
B5b07b9:L5b07b9:{c.instructions+=15;NFSU2_TR(0x5b07b9);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b07bd:{NFSU2_TR(0x5b07bd);
{u32 ea_=u32(u32(8002244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b07c3:{NFSU2_TR(0x5b07c3);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5b07c5:{NFSU2_TR(0x5b07c5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b07c7:{NFSU2_TR(0x5b07c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B5b07ca:{NFSU2_TR(0x5b07ca);
w1(R+12,u8(0x1ull));
}
B5b07cc:{NFSU2_TR(0x5b07cc);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B5b07cd:{NFSU2_TR(0x5b07cd);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x2ull))));
}
B5b07d0:{NFSU2_TR(0x5b07d0);
{u32 ea_=u32((r4(R+8)*4u)+u32(8372888u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b07d7:{NFSU2_TR(0x5b07d7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b07db:{NFSU2_TR(0x5b07db);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5b07df:{NFSU2_TR(0x5b07df);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b07e5:{NFSU2_TR(0x5b07e5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b07e7:{NFSU2_TR(0x5b07e7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b07ea:{NFSU2_TR(0x5b07ea);
if(r1(R+514)){{goto L5b0950;}}
}
B5b07f0:L5b07f0:{c.instructions+=4;NFSU2_TR(0x5b07f0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b07f6:{NFSU2_TR(0x5b07f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b07fe:{NFSU2_TR(0x5b07fe);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b0803:{NFSU2_TR(0x5b0803);
{goto L5b0823;}
}
B5b0805:L5b0805:{c.instructions+=5;NFSU2_TR(0x5b0805);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b0809:{NFSU2_TR(0x5b0809);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b080a:{NFSU2_TR(0x5b080a);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b080e:{NFSU2_TR(0x5b080e);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5b0810:{NFSU2_TR(0x5b0810);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b0815ull));
TAIL_STATIC(0x5764d0u,576);
}
B5b0815:L5b0815:{c.instructions+=4;NFSU2_TR(0x5b0815);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b0817:{NFSU2_TR(0x5b0817);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b081b:{NFSU2_TR(0x5b081b);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b081f:{NFSU2_TR(0x5b081f);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5b0823:L5b0823:{c.instructions+=22;NFSU2_TR(0x5b0823);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b0827:{NFSU2_TR(0x5b0827);
{u32 ea_=u32(r4(R+24)+u32(656u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b082d:{NFSU2_TR(0x5b082d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b0831:{NFSU2_TR(0x5b0831);
{u32 ea_=u32(r4(R+24)+u32(320u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5b0837:{NFSU2_TR(0x5b0837);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B5b0839:{NFSU2_TR(0x5b0839);
{u32 ea_=u32(u32(8002244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b083f:{NFSU2_TR(0x5b083f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b0843:{NFSU2_TR(0x5b0843);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b0847:{NFSU2_TR(0x5b0847);
{u32 ea_=u32(u32(8002244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b084d:{NFSU2_TR(0x5b084d);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b0853:{NFSU2_TR(0x5b0853);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5b0855:{NFSU2_TR(0x5b0855);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b0859:{NFSU2_TR(0x5b0859);
{u32 ea_=u32(u32(8002244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b085f:{NFSU2_TR(0x5b085f);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b0863:{NFSU2_TR(0x5b0863);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b0867:{NFSU2_TR(0x5b0867);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b086b:{NFSU2_TR(0x5b086b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b086f:{NFSU2_TR(0x5b086f);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b0872:{NFSU2_TR(0x5b0872);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b0878:{NFSU2_TR(0x5b0878);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b087a:{NFSU2_TR(0x5b087a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b087d:{NFSU2_TR(0x5b087d);
if(r1(R+514)){{goto L5b08a6;}}
}
B5b087f:L5b087f:{c.instructions+=6;NFSU2_TR(0x5b087f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b0883:{NFSU2_TR(0x5b0883);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b0889:{NFSU2_TR(0x5b0889);
{u32 ea_=u32(u32(7894416u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b088f:{NFSU2_TR(0x5b088f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b0891:{NFSU2_TR(0x5b0891);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b0894:{NFSU2_TR(0x5b0894);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b08a6;}}
}
B5b0896:L5b0896:{c.instructions+=4;NFSU2_TR(0x5b0896);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b0898:{NFSU2_TR(0x5b0898);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b089c:{NFSU2_TR(0x5b089c);
{u32 ea_=u32((r4(R+4)*4u)+u32(8372512u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b08a3:{NFSU2_TR(0x5b08a3);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b08a6:L5b08a6:{c.instructions+=5;NFSU2_TR(0x5b08a6);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b08a9:{NFSU2_TR(0x5b08a9);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b08af:{NFSU2_TR(0x5b08af);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b08b1:{NFSU2_TR(0x5b08b1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b08b4:{NFSU2_TR(0x5b08b4);
if(r1(R+514)){{goto L5b08dd;}}
}
B5b08b6:L5b08b6:{c.instructions+=6;NFSU2_TR(0x5b08b6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b08ba:{NFSU2_TR(0x5b08ba);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b08c0:{NFSU2_TR(0x5b08c0);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b08c6:{NFSU2_TR(0x5b08c6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b08c8:{NFSU2_TR(0x5b08c8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b08cb:{NFSU2_TR(0x5b08cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b08dd;}}
}
B5b08cd:L5b08cd:{c.instructions+=4;NFSU2_TR(0x5b08cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b08cf:{NFSU2_TR(0x5b08cf);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b08d3:{NFSU2_TR(0x5b08d3);
{u32 ea_=u32((r4(R+8)*4u)+u32(8372696u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b08da:{NFSU2_TR(0x5b08da);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b08dd:L5b08dd:{c.instructions+=5;NFSU2_TR(0x5b08dd);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b08e0:{NFSU2_TR(0x5b08e0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b08e6:{NFSU2_TR(0x5b08e6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b08e8:{NFSU2_TR(0x5b08e8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b08eb:{NFSU2_TR(0x5b08eb);
if(r1(R+514)){{goto L5b090c;}}
}
B5b08ed:L5b08ed:{c.instructions+=5;NFSU2_TR(0x5b08ed);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b08f1:{NFSU2_TR(0x5b08f1);
{u32 ea_=u32(u32(8003768u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b08f7:{NFSU2_TR(0x5b08f7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b08f9:{NFSU2_TR(0x5b08f9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b08fc:{NFSU2_TR(0x5b08fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b090c;}}
}
B5b08fe:L5b08fe:{c.instructions+=4;NFSU2_TR(0x5b08fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b0902:{NFSU2_TR(0x5b0902);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b0906:{NFSU2_TR(0x5b0906);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0909:{NFSU2_TR(0x5b0909);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b090c:L5b090c:{c.instructions+=5;NFSU2_TR(0x5b090c);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b090f:{NFSU2_TR(0x5b090f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b0915:{NFSU2_TR(0x5b0915);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b0917:{NFSU2_TR(0x5b0917);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b091a:{NFSU2_TR(0x5b091a);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5b0981;}}
}
B5b091c:L5b091c:{c.instructions+=5;NFSU2_TR(0x5b091c);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b091f:{NFSU2_TR(0x5b091f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b0925:{NFSU2_TR(0x5b0925);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b0927:{NFSU2_TR(0x5b0927);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b092a:{NFSU2_TR(0x5b092a);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5b0981;}}
}
B5b092c:L5b092c:{c.instructions+=5;NFSU2_TR(0x5b092c);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b092f:{NFSU2_TR(0x5b092f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b0935:{NFSU2_TR(0x5b0935);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b0937:{NFSU2_TR(0x5b0937);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b093a:{NFSU2_TR(0x5b093a);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5b0981;}}
}
B5b093c:L5b093c:{c.instructions+=5;NFSU2_TR(0x5b093c);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b093f:{NFSU2_TR(0x5b093f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b0945:{NFSU2_TR(0x5b0945);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b0947:{NFSU2_TR(0x5b0947);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b094a:{NFSU2_TR(0x5b094a);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5b0981;}}
}
B5b094c:L5b094c:{c.instructions+=2;NFSU2_TR(0x5b094c);
w1(R+0,u8(0x1ull));
}
B5b094e:{NFSU2_TR(0x5b094e);
{goto L5b0983;}
}
B5b0950:L5b0950:{c.instructions+=5;NFSU2_TR(0x5b0950);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b0954:{NFSU2_TR(0x5b0954);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b095a:{NFSU2_TR(0x5b095a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b095c:{NFSU2_TR(0x5b095c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b095f:{NFSU2_TR(0x5b095f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b0976;}}
}
B5b0961:L5b0961:{c.instructions+=5;NFSU2_TR(0x5b0961);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5b0963:{NFSU2_TR(0x5b0963);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B5b0966:{NFSU2_TR(0x5b0966);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b096e:{NFSU2_TR(0x5b096e);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b0973:{NFSU2_TR(0x5b0973);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5b0976:L5b0976:{c.instructions+=2;NFSU2_TR(0x5b0976);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b097c:{NFSU2_TR(0x5b097c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b0823u);}goto L5b0823;}
}
B5b0981:L5b0981:{c.instructions+=1;NFSU2_TR(0x5b0981);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5b0983:L5b0983:{c.instructions+=5;NFSU2_TR(0x5b0983);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b0987:{NFSU2_TR(0x5b0987);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5b0988:{NFSU2_TR(0x5b0988);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b098a:{NFSU2_TR(0x5b098a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b098e:{NFSU2_TR(0x5b098e);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b0771u);}goto L5b0771;}}
}
B5b0994:L5b0994:{c.instructions+=6;NFSU2_TR(0x5b0994);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b0995:{NFSU2_TR(0x5b0995);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b0996:{NFSU2_TR(0x5b0996);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b0997:{NFSU2_TR(0x5b0997);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b0998:{NFSU2_TR(0x5b0998);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x88ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x88ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x88ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b099e:{NFSU2_TR(0x5b099e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b09a0:L5b09a0:{c.instructions+=15;NFSU2_TR(0x5b09a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b09a4:{NFSU2_TR(0x5b09a4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b09a5:{NFSU2_TR(0x5b09a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5b09a9:{NFSU2_TR(0x5b09a9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b09aa:{NFSU2_TR(0x5b09aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5b09ae:{NFSU2_TR(0x5b09ae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b09af:{NFSU2_TR(0x5b09af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b09b0:{NFSU2_TR(0x5b09b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5b09b4:{NFSU2_TR(0x5b09b4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b09b6:{NFSU2_TR(0x5b09b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b09b7:{NFSU2_TR(0x5b09b7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b09b8:{NFSU2_TR(0x5b09b8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b09b9:{NFSU2_TR(0x5b09b9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b09ba:{NFSU2_TR(0x5b09ba);
__builtin_memmove((R+24),(R+4),4);
}
B5b09bc:{NFSU2_TR(0x5b09bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b09c1ull));
TAIL_STATIC(0x5aca50u,5ac);
}
B5b09c1:L5b09c1:{c.instructions+=4;NFSU2_TR(0x5b09c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b09c4:{NFSU2_TR(0x5b09c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b09c5:{NFSU2_TR(0x5b09c5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b09c6:{NFSU2_TR(0x5b09c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b09cbull));
TAIL_STATIC(0x59ae40u,59a);
}
B5b09cb:L5b09cb:{c.instructions+=4;NFSU2_TR(0x5b09cb);
__builtin_memmove((R+8),(R+0),4);
}
B5b09cd:{NFSU2_TR(0x5b09cd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b09d0:{NFSU2_TR(0x5b09d0);
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
B5b09d2:{NFSU2_TR(0x5b09d2);
if(r1(R+518)){{goto L5b0b74;}}
}
B5b09d8:L5b09d8:{c.instructions+=3;NFSU2_TR(0x5b09d8);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b09dc:{NFSU2_TR(0x5b09dc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b09de:{NFSU2_TR(0x5b09de);
if(r1(R+518)){{goto L5b0b5e;}}
}
B5b09e4:L5b09e4:{c.instructions+=3;NFSU2_TR(0x5b09e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b09e7:{NFSU2_TR(0x5b09e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc2c7fae1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b09ec:{NFSU2_TR(0x5b09ec);
if(r1(R+518)){{goto L5b09f6;}}
}
B5b09ee:L5b09ee:{c.instructions+=2;NFSU2_TR(0x5b09ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+20)),r4(U+0));
}
B5b09f1:{NFSU2_TR(0x5b09f1);
{goto L5b0a97;}
}
B5b09f6:L5b09f6:{c.instructions+=5;NFSU2_TR(0x5b09f6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b09f9:{NFSU2_TR(0x5b09f9);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b09fc:{NFSU2_TR(0x5b09fc);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5b0a00:{NFSU2_TR(0x5b0a00);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b0a04:{NFSU2_TR(0x5b0a04);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5b0a1d;}}
}
B5b0a06:L5b0a06:{c.instructions+=2;NFSU2_TR(0x5b0a06);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b0a09:{NFSU2_TR(0x5b0a09);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5b0a1d;}}
}
B5b0a0b:L5b0a0b:{c.instructions+=5;NFSU2_TR(0x5b0a0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b0a0f:{NFSU2_TR(0x5b0a0f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0a11:{NFSU2_TR(0x5b0a11);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0a12:{NFSU2_TR(0x5b0a12);
__builtin_memmove((R+4),(R+24),4);
}
B5b0a14:{NFSU2_TR(0x5b0a14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b0a19ull));
TAIL_STATIC(0x59b5c0u,59b);
}
B5b0a19:L5b0a19:{c.instructions+=1;NFSU2_TR(0x5b0a19);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b0a1d:L5b0a1d:{c.instructions+=6;NFSU2_TR(0x5b0a1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b0a21:{NFSU2_TR(0x5b0a21);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b0a25:{NFSU2_TR(0x5b0a25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+20)),r4(U+0));
}
B5b0a28:{NFSU2_TR(0x5b0a28);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffdull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b0a2b:{NFSU2_TR(0x5b0a2b);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x15ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x15ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x15ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b0a2e:{NFSU2_TR(0x5b0a2e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5b0a94;}}
}
B5b0a30:L5b0a30:{c.instructions+=2;NFSU2_TR(0x5b0a30);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5b0b8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B5b0a37:{NFSU2_TR(0x5b0a37);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5b0b7cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b0a3e:L5b0a3e:{c.instructions+=5;NFSU2_TR(0x5b0a3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b0a41:{NFSU2_TR(0x5b0a41);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b0a43:{NFSU2_TR(0x5b0a43);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b0a46:{NFSU2_TR(0x5b0a46);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b0a4a:{NFSU2_TR(0x5b0a4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b0a54;}}
}
B5b0a4c:L5b0a4c:{c.instructions+=2;NFSU2_TR(0x5b0a4c);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b0a52:{NFSU2_TR(0x5b0a52);
{goto L5b0a94;}
}
B5b0a54:L5b0a54:{c.instructions+=2;NFSU2_TR(0x5b0a54);
{u32 ea_=u32(u32(8003180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b0a5a:{NFSU2_TR(0x5b0a5a);
{goto L5b0a94;}
}
B5b0a5c:L5b0a5c:{c.instructions+=6;NFSU2_TR(0x5b0a5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b0a5f:{NFSU2_TR(0x5b0a5f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b0a61:{NFSU2_TR(0x5b0a61);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b0a64:{NFSU2_TR(0x5b0a64);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b0a68:{NFSU2_TR(0x5b0a68);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b0a6e:{NFSU2_TR(0x5b0a6e);
if(r1(R+518)){{goto L5b0a94;}}
}
B5b0a70:L5b0a70:{c.instructions+=2;NFSU2_TR(0x5b0a70);
{u32 ea_=u32(u32(7978748u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b0a76:{NFSU2_TR(0x5b0a76);
{goto L5b0a94;}
}
B5b0a78:L5b0a78:{c.instructions+=5;NFSU2_TR(0x5b0a78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b0a7b:{NFSU2_TR(0x5b0a7b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b0a7d:{NFSU2_TR(0x5b0a7d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b0a80:{NFSU2_TR(0x5b0a80);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b0a84:{NFSU2_TR(0x5b0a84);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b0a8e;}}
}
B5b0a86:L5b0a86:{c.instructions+=2;NFSU2_TR(0x5b0a86);
{u32 ea_=u32(u32(7931132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b0a8c:{NFSU2_TR(0x5b0a8c);
{goto L5b0a94;}
}
B5b0a8e:L5b0a8e:{c.instructions+=1;NFSU2_TR(0x5b0a8e);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b0a94:L5b0a94:{c.instructions+=1;NFSU2_TR(0x5b0a94);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b0a97:L5b0a97:{c.instructions+=3;NFSU2_TR(0x5b0a97);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b0a9a:{NFSU2_TR(0x5b0a9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc2c7fae1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b0a9f:{NFSU2_TR(0x5b0a9f);
if(r1(R+518)){{goto L5b0aaa;}}
}
B5b0aa1:L5b0aa1:{c.instructions+=3;NFSU2_TR(0x5b0aa1);
__builtin_memmove((R+8),(R+0),4);
}
B5b0aa3:{NFSU2_TR(0x5b0aa3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+12)),r4(U+0));
}
B5b0aa5:{NFSU2_TR(0x5b0aa5);
{goto L5b0b48;}
}
B5b0aaa:L5b0aaa:{c.instructions+=5;NFSU2_TR(0x5b0aaa);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b0aad:{NFSU2_TR(0x5b0aad);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b0aaf:{NFSU2_TR(0x5b0aaf);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5b0ab3:{NFSU2_TR(0x5b0ab3);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b0ab7:{NFSU2_TR(0x5b0ab7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5b0ad0;}}
}
B5b0ab9:L5b0ab9:{c.instructions+=2;NFSU2_TR(0x5b0ab9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b0abc:{NFSU2_TR(0x5b0abc);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5b0ad0;}}
}
B5b0abe:L5b0abe:{c.instructions+=5;NFSU2_TR(0x5b0abe);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b0ac2:{NFSU2_TR(0x5b0ac2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0ac4:{NFSU2_TR(0x5b0ac4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0ac5:{NFSU2_TR(0x5b0ac5);
__builtin_memmove((R+4),(R+24),4);
}
B5b0ac7:{NFSU2_TR(0x5b0ac7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b0accull));
TAIL_STATIC(0x59b5c0u,59b);
}
B5b0acc:L5b0acc:{c.instructions+=1;NFSU2_TR(0x5b0acc);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b0ad0:L5b0ad0:{c.instructions+=6;NFSU2_TR(0x5b0ad0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b0ad4:{NFSU2_TR(0x5b0ad4);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b0ad8:{NFSU2_TR(0x5b0ad8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffdull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b0adb:{NFSU2_TR(0x5b0adb);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x15ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x15ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x15ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b0ade:{NFSU2_TR(0x5b0ade);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+12)),r4(U+0));
}
B5b0ae0:{NFSU2_TR(0x5b0ae0);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5b0b46;}}
}
B5b0ae2:L5b0ae2:{c.instructions+=2;NFSU2_TR(0x5b0ae2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5b0bb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B5b0ae9:{NFSU2_TR(0x5b0ae9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5b0ba4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b0af0:L5b0af0:{c.instructions+=5;NFSU2_TR(0x5b0af0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b0af3:{NFSU2_TR(0x5b0af3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b0af5:{NFSU2_TR(0x5b0af5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b0af8:{NFSU2_TR(0x5b0af8);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b0afc:{NFSU2_TR(0x5b0afc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b0b06;}}
}
B5b0afe:L5b0afe:{c.instructions+=2;NFSU2_TR(0x5b0afe);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b0b04:{NFSU2_TR(0x5b0b04);
{goto L5b0b46;}
}
B5b0b06:L5b0b06:{c.instructions+=2;NFSU2_TR(0x5b0b06);
{u32 ea_=u32(u32(8003180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b0b0c:{NFSU2_TR(0x5b0b0c);
{goto L5b0b46;}
}
B5b0b0e:L5b0b0e:{c.instructions+=6;NFSU2_TR(0x5b0b0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b0b11:{NFSU2_TR(0x5b0b11);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b0b13:{NFSU2_TR(0x5b0b13);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b0b16:{NFSU2_TR(0x5b0b16);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b0b1a:{NFSU2_TR(0x5b0b1a);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b0b20:{NFSU2_TR(0x5b0b20);
if(r1(R+518)){{goto L5b0b46;}}
}
B5b0b22:L5b0b22:{c.instructions+=2;NFSU2_TR(0x5b0b22);
{u32 ea_=u32(u32(7978748u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b0b28:{NFSU2_TR(0x5b0b28);
{goto L5b0b46;}
}
B5b0b2a:L5b0b2a:{c.instructions+=5;NFSU2_TR(0x5b0b2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b0b2d:{NFSU2_TR(0x5b0b2d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b0b2f:{NFSU2_TR(0x5b0b2f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b0b32:{NFSU2_TR(0x5b0b32);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b0b36:{NFSU2_TR(0x5b0b36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b0b40;}}
}
B5b0b38:L5b0b38:{c.instructions+=2;NFSU2_TR(0x5b0b38);
{u32 ea_=u32(u32(7931132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b0b3e:{NFSU2_TR(0x5b0b3e);
{goto L5b0b46;}
}
B5b0b40:L5b0b40:{c.instructions+=1;NFSU2_TR(0x5b0b40);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b0b46:L5b0b46:{c.instructions+=1;NFSU2_TR(0x5b0b46);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b0b48:L5b0b48:{c.instructions+=5;NFSU2_TR(0x5b0b48);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b0b4b:{NFSU2_TR(0x5b0b4b);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b0b4d:{NFSU2_TR(0x5b0b4d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b0b4f:{NFSU2_TR(0x5b0b4f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b0b52:{NFSU2_TR(0x5b0b52);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b0b5e;}}
}
B5b0b54:L5b0b54:{c.instructions+=4;NFSU2_TR(0x5b0b54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b0b56:{NFSU2_TR(0x5b0b56);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b0b59:{NFSU2_TR(0x5b0b59);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+20)),r4(U+0));
}
B5b0b5c:{NFSU2_TR(0x5b0b5c);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b0b5e:L5b0b5e:{c.instructions+=5;NFSU2_TR(0x5b0b5e);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b0b61:{NFSU2_TR(0x5b0b61);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b0b63:{NFSU2_TR(0x5b0b63);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b0b65:{NFSU2_TR(0x5b0b65);
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
B5b0b68:{NFSU2_TR(0x5b0b68);
if(r1(R+514)){{goto L5b0b74;}}
}
B5b0b6a:L5b0b6a:{c.instructions+=3;NFSU2_TR(0x5b0b6a);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b0b6c:{NFSU2_TR(0x5b0b6c);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b0b72:{NFSU2_TR(0x5b0b72);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b0b74:L5b0b74:{c.instructions+=5;NFSU2_TR(0x5b0b74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b0b75:{NFSU2_TR(0x5b0b75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b0b76:{NFSU2_TR(0x5b0b76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b0b77:{NFSU2_TR(0x5b0b77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b0b78:{NFSU2_TR(0x5b0b78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b0bd0:L5b0bd0:{c.instructions+=11;NFSU2_TR(0x5b0bd0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b0bd4:{NFSU2_TR(0x5b0bd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b0bd8:{NFSU2_TR(0x5b0bd8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0bd9:{NFSU2_TR(0x5b0bd9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0bda:{NFSU2_TR(0x5b0bda);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b0bde:{NFSU2_TR(0x5b0bde);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0bdf:{NFSU2_TR(0x5b0bdf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b0be3:{NFSU2_TR(0x5b0be3);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b0be7:{NFSU2_TR(0x5b0be7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0be8:{NFSU2_TR(0x5b0be8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0be9:{NFSU2_TR(0x5b0be9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b0beeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b09a0u);}goto L5b09a0;}
}
B5b0bee:L5b0bee:{c.instructions+=2;NFSU2_TR(0x5b0bee);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b0bf2:{NFSU2_TR(0x5b0bf2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b0c00:L5b0c00:{c.instructions+=11;NFSU2_TR(0x5b0c00);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b0c04:{NFSU2_TR(0x5b0c04);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b0c08:{NFSU2_TR(0x5b0c08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0c09:{NFSU2_TR(0x5b0c09);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0c0a:{NFSU2_TR(0x5b0c0a);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b0c0e:{NFSU2_TR(0x5b0c0e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0c0f:{NFSU2_TR(0x5b0c0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b0c13:{NFSU2_TR(0x5b0c13);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b0c17:{NFSU2_TR(0x5b0c17);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0c18:{NFSU2_TR(0x5b0c18);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0c19:{NFSU2_TR(0x5b0c19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b0c1eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b09a0u);}goto L5b09a0;}
}
B5b0c1e:L5b0c1e:{c.instructions+=2;NFSU2_TR(0x5b0c1e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b0c22:{NFSU2_TR(0x5b0c22);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b0c30:L5b0c30:{c.instructions+=14;NFSU2_TR(0x5b0c30);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0c32:{NFSU2_TR(0x5b0c32);
u8 U[4];
w4(U+0,u32(0x778ee6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0c37:{NFSU2_TR(0x5b0c37);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b0c3d:{NFSU2_TR(0x5b0c3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0c3e:{NFSU2_TR(0x5b0c3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0c45:{NFSU2_TR(0x5b0c45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B5b0c48:{NFSU2_TR(0x5b0c48);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b0c4a:{NFSU2_TR(0x5b0c4a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5b0c4c:{NFSU2_TR(0x5b0c4c);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+523,sborrow<u16>(r2(U+6),r2(R+0)));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+0))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5b0c50:{NFSU2_TR(0x5b0c50);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0c54:{NFSU2_TR(0x5b0c54);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0c58:{NFSU2_TR(0x5b0c58);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0c5c:{NFSU2_TR(0x5b0c5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0c60:{NFSU2_TR(0x5b0c60);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5b0e1d;}}
}
B5b0c66:L5b0c66:{c.instructions+=6;NFSU2_TR(0x5b0c66);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0c67:{NFSU2_TR(0x5b0c67);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0c68:{NFSU2_TR(0x5b0c68);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0c69:{NFSU2_TR(0x5b0c69);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0c6a:{NFSU2_TR(0x5b0c6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b0c6d:{NFSU2_TR(0x5b0c6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0c71:L5b0c71:{c.instructions+=15;NFSU2_TR(0x5b0c71);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B5b0c75:{NFSU2_TR(0x5b0c75);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+8))));
}
B5b0c77:{NFSU2_TR(0x5b0c77);
__builtin_memmove((R+24),(R+20),4);
}
B5b0c79:{NFSU2_TR(0x5b0c79);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7ull))));
}
B5b0c7c:{NFSU2_TR(0x5b0c7c);
__builtin_memmove((R+0),(R+20),4);
}
B5b0c7e:{NFSU2_TR(0x5b0c7e);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B5b0c81:{NFSU2_TR(0x5b0c81);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x86ad78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5b0c87:{NFSU2_TR(0x5b0c87);
w4(R+8,u32(0x1ull));
}
B5b0c8c:{NFSU2_TR(0x5b0c8c);
__builtin_memmove((R+4),(R+24),4);
}
B5b0c8e:{NFSU2_TR(0x5b0c8e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x86ad78ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b0c94:{NFSU2_TR(0x5b0c94);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B5b0c96:{NFSU2_TR(0x5b0c96);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0c9a:{NFSU2_TR(0x5b0c9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0c9e:{NFSU2_TR(0x5b0c9e);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b0ca0:{NFSU2_TR(0x5b0ca0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b0df9;}}
}
B5b0ca6:L5b0ca6:{c.instructions+=3;NFSU2_TR(0x5b0ca6);
__builtin_memmove((R+24),gp(0x86b5a8),4);
}
B5b0cac:{NFSU2_TR(0x5b0cac);
w4(R+4,u32(0x86b5a8ull));
}
B5b0cb1:{NFSU2_TR(0x5b0cb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b0cb6ull));
TAIL_STATIC(0x502fd0u,502);
}
B5b0cb6:L5b0cb6:{c.instructions+=2;NFSU2_TR(0x5b0cb6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b0cb8:{NFSU2_TR(0x5b0cb8);
if(r1(R+518)){{goto L5b0cce;}}
}
B5b0cba:L5b0cba:{c.instructions+=2;NFSU2_TR(0x5b0cba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b0cbc:{NFSU2_TR(0x5b0cbc);
__builtin_memmove((R+16),(R+16),4);
}
B5b0cc0:L5b0cc0:{c.instructions+=2;NFSU2_TR(0x5b0cc0);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+4)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5b0cc6:{NFSU2_TR(0x5b0cc6);
if(r1(R+518)){{goto L5b0cfd;}}
}
B5b0cc8:L5b0cc8:{c.instructions+=3;NFSU2_TR(0x5b0cc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5b0cca:{NFSU2_TR(0x5b0cca);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b0ccc:{NFSU2_TR(0x5b0ccc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b0cc0u);}goto L5b0cc0;}}
}
B5b0cce:L5b0cce:{c.instructions+=3;NFSU2_TR(0x5b0cce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b0cd0:{NFSU2_TR(0x5b0cd0);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5b0cd4:{NFSU2_TR(0x5b0cd4);
if(r1(R+518)){{goto L5b0ce8;}}
}
B5b0cd6:L5b0cd6:{c.instructions+=5;NFSU2_TR(0x5b0cd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b0cda:{NFSU2_TR(0x5b0cda);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5b0cdb:{NFSU2_TR(0x5b0cdb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b0cde:{NFSU2_TR(0x5b0cde);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0ce2:{NFSU2_TR(0x5b0ce2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5b0ce8;}}
}
B5b0ce4:L5b0ce4:{c.instructions+=1;NFSU2_TR(0x5b0ce4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0ce8:L5b0ce8:{c.instructions+=7;NFSU2_TR(0x5b0ce8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b0cec:{NFSU2_TR(0x5b0cec);
w1(R+0,u8(0x1ull));
}
B5b0cee:{NFSU2_TR(0x5b0cee);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w1(R+0,shl<u8>(r1(R+0),u64(r1(U+0))));
}
B5b0cf0:{NFSU2_TR(0x5b0cf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b0cf4:{NFSU2_TR(0x5b0cf4);
w1(R+0,u8(u32(r1(R+0))|u32(r1(R+12))));
}
B5b0cf6:{NFSU2_TR(0x5b0cf6);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B5b0cf8:{NFSU2_TR(0x5b0cf8);
{goto L5b0df9;}
}
B5b0cfd:L5b0cfd:{c.instructions+=3;NFSU2_TR(0x5b0cfd);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B5b0d01:{NFSU2_TR(0x5b0d01);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0d02:{NFSU2_TR(0x5b0d02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b0d07ull));
TAIL_STATIC(0x5d6430u,5d6);
}
B5b0d07:L5b0d07:{c.instructions+=5;NFSU2_TR(0x5b0d07);
__builtin_memmove((R+24),(R+0),4);
}
B5b0d09:{NFSU2_TR(0x5b0d09);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x10ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B5b0d0d:{NFSU2_TR(0x5b0d0d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b0d10:{NFSU2_TR(0x5b0d10);
__builtin_memmove((R+4),(R+24),4);
}
B5b0d12:{NFSU2_TR(0x5b0d12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b0d17ull));
TAIL_STATIC(0x5db0e0u,5db);
}
B5b0d17:L5b0d17:{c.instructions+=2;NFSU2_TR(0x5b0d17);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x1ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5b0d1b:{NFSU2_TR(0x5b0d1b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b0d4d;}}
}
B5b0d1d:L5b0d1d:{c.instructions+=3;NFSU2_TR(0x5b0d1d);
__builtin_memmove((R+0),gp(0x86b370),4);
}
B5b0d22:{NFSU2_TR(0x5b0d22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0d23:{NFSU2_TR(0x5b0d23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b0d28ull));
TAIL_STATIC(0x440e50u,440);
}
B5b0d28:L5b0d28:{c.instructions+=5;NFSU2_TR(0x5b0d28);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b0d2b:{NFSU2_TR(0x5b0d2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0d2f:{NFSU2_TR(0x5b0d2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b0d31:{NFSU2_TR(0x5b0d31);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b0d39:{NFSU2_TR(0x5b0d39);
if(r1(R+518)){{goto L5b0ddc;}}
}
B5b0d3f:L5b0d3f:{c.instructions+=4;NFSU2_TR(0x5b0d3f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0d40:{NFSU2_TR(0x5b0d40);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0d41:{NFSU2_TR(0x5b0d41);
__builtin_memmove((R+4),(R+0),4);
}
B5b0d43:{NFSU2_TR(0x5b0d43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b0d48ull));
TAIL_STATIC(0x5ad8f0u,5ad);
}
B5b0d48:L5b0d48:{c.instructions+=1;NFSU2_TR(0x5b0d48);
{goto L5b0ddc;}
}
B5b0d4d:L5b0d4d:{c.instructions+=3;NFSU2_TR(0x5b0d4d);
__builtin_memmove((R+24),gp(0x88f760),4);
}
B5b0d53:{NFSU2_TR(0x5b0d53);
w4(R+4,u32(0x88f760ull));
}
B5b0d58:{NFSU2_TR(0x5b0d58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b0d5dull));
TAIL_STATIC(0x502fd0u,502);
}
B5b0d5d:L5b0d5d:{c.instructions+=3;NFSU2_TR(0x5b0d5d);
__builtin_memmove((R+12),(R+0),4);
}
B5b0d5f:{NFSU2_TR(0x5b0d5f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b0d61:{NFSU2_TR(0x5b0d61);
if(r1(R+518)){{goto L5b0de4;}}
}
B5b0d67:L5b0d67:{c.instructions+=4;NFSU2_TR(0x5b0d67);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b0d6a:{NFSU2_TR(0x5b0d6a);
u8 U[4];
w4(U+0,u32(0x7a2600ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0d6f:{NFSU2_TR(0x5b0d6f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0d70:{NFSU2_TR(0x5b0d70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b0d75ull));
TAIL_STATIC(0x43dc30u,43d);
}
B5b0d75:L5b0d75:{c.instructions+=3;NFSU2_TR(0x5b0d75);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b0d78:{NFSU2_TR(0x5b0d78);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b0d7a:{NFSU2_TR(0x5b0d7a);
if(r1(R+518)){{goto L5b0da4;}}
}
B5b0d7c:L5b0d7c:{c.instructions+=3;NFSU2_TR(0x5b0d7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b0d7f:{NFSU2_TR(0x5b0d7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b0d81:{NFSU2_TR(0x5b0d81);
if(r1(R+518)){{goto L5b0da4;}}
}
B5b0d83:L5b0d83:{c.instructions+=4;NFSU2_TR(0x5b0d83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b0d86:{NFSU2_TR(0x5b0d86);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b0d88:{NFSU2_TR(0x5b0d88);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b0d8a:{NFSU2_TR(0x5b0d8a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5b0da4;}}
}
B5b0d8c:L5b0d8c:{c.instructions+=2;NFSU2_TR(0x5b0d8c);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B5b0d90:{NFSU2_TR(0x5b0d90);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b0d93:L5b0d93:{c.instructions+=2;NFSU2_TR(0x5b0d93);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(r2(R+28))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B5b0d96:{NFSU2_TR(0x5b0d96);
if(r1(R+518)){{goto L5b0dac;}}
}
B5b0d98:L5b0d98:{c.instructions+=4;NFSU2_TR(0x5b0d98);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5b0d99:{NFSU2_TR(0x5b0d99);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B5b0d9c:{NFSU2_TR(0x5b0d9c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b0d9e:{NFSU2_TR(0x5b0d9e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b0d93u);}goto L5b0d93;}}
}
B5b0da0:L5b0da0:{c.instructions+=1;NFSU2_TR(0x5b0da0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5b0da4:L5b0da4:{c.instructions+=3;NFSU2_TR(0x5b0da4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5b0da6:{NFSU2_TR(0x5b0da6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b0da8:{NFSU2_TR(0x5b0da8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b0d67u);}goto L5b0d67;}}
}
B5b0daa:L5b0daa:{c.instructions+=1;NFSU2_TR(0x5b0daa);
{goto L5b0de4;}
}
B5b0dac:L5b0dac:{c.instructions+=3;NFSU2_TR(0x5b0dac);
__builtin_memmove((R+8),gp(0x86b370),4);
}
B5b0db2:{NFSU2_TR(0x5b0db2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0db3:{NFSU2_TR(0x5b0db3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b0db8ull));
TAIL_STATIC(0x440e50u,440);
}
B5b0db8:L5b0db8:{c.instructions+=5;NFSU2_TR(0x5b0db8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b0dbb:{NFSU2_TR(0x5b0dbb);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0dbf:{NFSU2_TR(0x5b0dbf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b0dc1:{NFSU2_TR(0x5b0dc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b0dc9:{NFSU2_TR(0x5b0dc9);
if(r1(R+518)){{goto L5b0dd8;}}
}
B5b0dcb:L5b0dcb:{c.instructions+=5;NFSU2_TR(0x5b0dcb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b0dcf:{NFSU2_TR(0x5b0dcf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0dd0:{NFSU2_TR(0x5b0dd0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0dd1:{NFSU2_TR(0x5b0dd1);
__builtin_memmove((R+4),(R+0),4);
}
B5b0dd3:{NFSU2_TR(0x5b0dd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b0dd8ull));
TAIL_STATIC(0x5ad8f0u,5ad);
}
B5b0dd8:L5b0dd8:{c.instructions+=1;NFSU2_TR(0x5b0dd8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5b0ddc:L5b0ddc:{c.instructions+=1;NFSU2_TR(0x5b0ddc);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b0de4:L5b0de4:{c.instructions+=3;NFSU2_TR(0x5b0de4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b0de7:{NFSU2_TR(0x5b0de7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b0de9:{NFSU2_TR(0x5b0de9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b0df9;}}
}
B5b0deb:L5b0deb:{c.instructions+=5;NFSU2_TR(0x5b0deb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b0def:{NFSU2_TR(0x5b0def);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b0df3:{NFSU2_TR(0x5b0df3);
w1(R+8,u8(0x1ull));
}
B5b0df5:{NFSU2_TR(0x5b0df5);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w1(R+8,shl<u8>(r1(R+8),u64(r1(U+0))));
}
B5b0df7:{NFSU2_TR(0x5b0df7);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))|u32(r1(R+8))));
s1(u32(r4(R+0)),r1(U+0));
}
B5b0df9:L5b0df9:{c.instructions+=9;NFSU2_TR(0x5b0df9);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b0dfd:{NFSU2_TR(0x5b0dfd);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b0e01:{NFSU2_TR(0x5b0e01);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5b0e05:{NFSU2_TR(0x5b0e05);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5b0e06:{NFSU2_TR(0x5b0e06);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x70ull))));
}
B5b0e09:{NFSU2_TR(0x5b0e09);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b0e0b:{NFSU2_TR(0x5b0e0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0e0f:{NFSU2_TR(0x5b0e0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0e13:{NFSU2_TR(0x5b0e13);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b0c71u);}goto L5b0c71;}}
}
B5b0e19:L5b0e19:{c.instructions+=4;NFSU2_TR(0x5b0e19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b0e1a:{NFSU2_TR(0x5b0e1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b0e1b:{NFSU2_TR(0x5b0e1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b0e1c:{NFSU2_TR(0x5b0e1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b0e1d:L5b0e1d:{c.instructions+=4;NFSU2_TR(0x5b0e1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b0e21:{NFSU2_TR(0x5b0e21);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0e28:{NFSU2_TR(0x5b0e28);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b0e2b:{NFSU2_TR(0x5b0e2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b0e30:L5b0e30:{c.instructions+=11;NFSU2_TR(0x5b0e30);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0e31:{NFSU2_TR(0x5b0e31);
__builtin_memmove((R+20),(R+16),4);
}
B5b0e33:{NFSU2_TR(0x5b0e33);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5b0e36:{NFSU2_TR(0x5b0e36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B5b0e39:{NFSU2_TR(0x5b0e39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b0e3c:{NFSU2_TR(0x5b0e3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b0e3e:{NFSU2_TR(0x5b0e3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34026ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b0e43:{NFSU2_TR(0x5b0e43);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0e44:{NFSU2_TR(0x5b0e44);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0e45:{NFSU2_TR(0x5b0e45);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0e46:{NFSU2_TR(0x5b0e46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b0f5b;}}
}
B5b0e4c:L5b0e4c:{c.instructions+=10;NFSU2_TR(0x5b0e4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5b0e4f:{NFSU2_TR(0x5b0e4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b0e52:{NFSU2_TR(0x5b0e52);
__builtin_memmove((R+8),(R+0),4);
}
B5b0e54:{NFSU2_TR(0x5b0e54);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffff0ull))));
}
B5b0e57:{NFSU2_TR(0x5b0e57);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B5b0e59:{NFSU2_TR(0x5b0e59);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5b0e5d:{NFSU2_TR(0x5b0e5d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5b0e60:{NFSU2_TR(0x5b0e60);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff0ull))));
}
B5b0e63:{NFSU2_TR(0x5b0e63);
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
B5b0e65:{NFSU2_TR(0x5b0e65);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5b0efd;}}
}
B5b0e6b:L5b0e6b:{c.instructions+=2;NFSU2_TR(0x5b0e6b);
__builtin_memmove((R+24),(R+0),4);
}
B5b0e6d:{NFSU2_TR(0x5b0e6d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0e71:L5b0e71:{c.instructions+=8;NFSU2_TR(0x5b0e71);
__builtin_memmove((R+0),gp(0x86b5ac),4);
}
B5b0e76:{NFSU2_TR(0x5b0e76);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5b0e78:{NFSU2_TR(0x5b0e78);
__builtin_memmove(gp(0x86b5ac),(R+24),4);
}
B5b0e7e:{NFSU2_TR(0x5b0e7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0e81:{NFSU2_TR(0x5b0e81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b0e87:{NFSU2_TR(0x5b0e87);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0e88:{NFSU2_TR(0x5b0e88);
u8 U[4];
w4(U+0,u32(0x86b5a8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5b0e8e:{NFSU2_TR(0x5b0e8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b0e93ull));
TAIL_STATIC(0x5d7b50u,5d7);
}
B5b0e93:L5b0e93:{c.instructions+=5;NFSU2_TR(0x5b0e93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5b0e99:{NFSU2_TR(0x5b0e99);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b0e9c:{NFSU2_TR(0x5b0e9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0ea2:{NFSU2_TR(0x5b0ea2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5b0ea4:{NFSU2_TR(0x5b0ea4);
{goto L5b0eb0;}
}
B5b0eb0:L5b0eb0:{c.instructions+=3;NFSU2_TR(0x5b0eb0);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7fc808ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5b0eb7:{NFSU2_TR(0x5b0eb7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0eb8:{NFSU2_TR(0x5b0eb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b0ebdull));
TAIL_STATIC(0x43db50u,43d);
}
B5b0ebd:L5b0ebd:{c.instructions+=3;NFSU2_TR(0x5b0ebd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b0ec0:{NFSU2_TR(0x5b0ec0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b0ec2:{NFSU2_TR(0x5b0ec2);
if(r1(R+518)){{goto L5b0ecc;}}
}
B5b0ec4:L5b0ec4:{c.instructions+=3;NFSU2_TR(0x5b0ec4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5b0ec5:{NFSU2_TR(0x5b0ec5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x13ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b0ec8:{NFSU2_TR(0x5b0ec8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b0eb0u);}goto L5b0eb0;}}
}
B5b0eca:L5b0eca:{c.instructions+=1;NFSU2_TR(0x5b0eca);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5b0ecc:L5b0ecc:{c.instructions+=12;NFSU2_TR(0x5b0ecc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0ed2:{NFSU2_TR(0x5b0ed2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b0ed8:{NFSU2_TR(0x5b0ed8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5b0eda:{NFSU2_TR(0x5b0eda);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0edd:{NFSU2_TR(0x5b0edd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b0ee3:{NFSU2_TR(0x5b0ee3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5b0ee5:{NFSU2_TR(0x5b0ee5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0ee8:{NFSU2_TR(0x5b0ee8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b0eec:{NFSU2_TR(0x5b0eec);
w1(R+512,carry<u32>(r4(R+24),u32(0x100ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x100ull))));
}
B5b0ef2:{NFSU2_TR(0x5b0ef2);
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
B5b0ef3:{NFSU2_TR(0x5b0ef3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0ef7:{NFSU2_TR(0x5b0ef7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b0e71u);}goto L5b0e71;}}
}
B5b0efd:L5b0efd:{c.instructions+=3;NFSU2_TR(0x5b0efd);
__builtin_memmove((R+28),gp(0x86b5a8),4);
}
B5b0f03:{NFSU2_TR(0x5b0f03);
w4(R+4,u32(0x86b5a8ull));
}
B5b0f08:{NFSU2_TR(0x5b0f08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b0f0dull));
TAIL_STATIC(0x502fd0u,502);
}
B5b0f0d:L5b0f0d:{c.instructions+=2;NFSU2_TR(0x5b0f0d);
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
B5b0f0f:{NFSU2_TR(0x5b0f0f);
if(r1(R+518)){{goto L5b0f4f;}}
}
B5b0f11:L5b0f11:{c.instructions+=3;NFSU2_TR(0x5b0f11);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b0f17:{NFSU2_TR(0x5b0f17);
w4(R+12,u32(0x4ull));
}
B5b0f1c:{NFSU2_TR(0x5b0f1c);
__builtin_memmove((R+16),(R+16),4);
}
B5b0f20:L5b0f20:{c.instructions+=3;NFSU2_TR(0x5b0f20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b0f22:{NFSU2_TR(0x5b0f22);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b0f24:{NFSU2_TR(0x5b0f24);
if(r1(R+518)){{goto L5b0f43;}}
}
B5b0f26:L5b0f26:{c.instructions+=3;NFSU2_TR(0x5b0f26);
__builtin_memmove((R+4),gp(0x86b5a8),4);
}
B5b0f2c:{NFSU2_TR(0x5b0f2c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b0f2e:{NFSU2_TR(0x5b0f2e);
if(r1(R+518)){{goto L5b0f3e;}}
}
B5b0f30:L5b0f30:{c.instructions+=2;NFSU2_TR(0x5b0f30);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5b0f36:{NFSU2_TR(0x5b0f36);
if(r1(R+518)){{goto L5b0f40;}}
}
B5b0f38:L5b0f38:{c.instructions+=3;NFSU2_TR(0x5b0f38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b0f3a:{NFSU2_TR(0x5b0f3a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b0f3c:{NFSU2_TR(0x5b0f3c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b0f30u);}goto L5b0f30;}}
}
B5b0f3e:L5b0f3e:{c.instructions+=1;NFSU2_TR(0x5b0f3e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5b0f40:L5b0f40:{c.instructions+=1;NFSU2_TR(0x5b0f40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0f43:L5b0f43:{c.instructions+=3;NFSU2_TR(0x5b0f43);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5b0f46:{NFSU2_TR(0x5b0f46);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B5b0f47:{NFSU2_TR(0x5b0f47);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b0f20u);}goto L5b0f20;}}
}
B5b0f49:L5b0f49:{c.instructions+=3;NFSU2_TR(0x5b0f49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5b0f4b:{NFSU2_TR(0x5b0f4b);
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
B5b0f4d:{NFSU2_TR(0x5b0f4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b0f11u);}goto L5b0f11;}}
}
B5b0f4f:L5b0f4f:{c.instructions+=7;NFSU2_TR(0x5b0f4f);
w4(R+0,u32(0x1ull));
}
B5b0f54:{NFSU2_TR(0x5b0f54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b0f55:{NFSU2_TR(0x5b0f55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b0f56:{NFSU2_TR(0x5b0f56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b0f57:{NFSU2_TR(0x5b0f57);
__builtin_memmove((R+16),(R+20),4);
}
B5b0f59:{NFSU2_TR(0x5b0f59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b0f5a:{NFSU2_TR(0x5b0f5a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b0f5b:L5b0f5b:{c.instructions+=2;NFSU2_TR(0x5b0f5b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34027ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b0f60:{NFSU2_TR(0x5b0f60);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5b1076u,5b1);}
}
B5b0f66:L5b0f66:{c.instructions+=5;NFSU2_TR(0x5b0f66);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b0f69:{NFSU2_TR(0x5b0f69);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffff0ull))));
}
B5b0f6c:{NFSU2_TR(0x5b0f6c);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b0f6f:{NFSU2_TR(0x5b0f6f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b0f71:{NFSU2_TR(0x5b0f71);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5b100bu,5b1);}
}
B5b0f77:L5b0f77:{c.instructions+=4;NFSU2_TR(0x5b0f77);
u8 U[14];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(u16(0x0ull))));
w1(R+523,sborrow<u16>(r2(U+10),u16(0x0ull)));
w2(U+12,u16(u32(r2(U+10))-u32(u16(0x0ull))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5b0f7c:{NFSU2_TR(0x5b0f7c);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b0f80:{NFSU2_TR(0x5b0f80);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b0f88:{NFSU2_TR(0x5b0f88);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x5b100bu,5b1);}
}
B5b0f8e:L5b0f8e:{c.instructions+=6;NFSU2_TR(0x5b0f8e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b0f91:{NFSU2_TR(0x5b0f91);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffc8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b0f94:{NFSU2_TR(0x5b0f94);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b0f98:{NFSU2_TR(0x5b0f98);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0f99:{NFSU2_TR(0x5b0f99);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0f9a:{NFSU2_TR(0x5b0f9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b0f9full));
TAIL_STATIC(0x4012b0u,401);
}
B5b0f9f:L5b0f9f:{c.instructions+=9;NFSU2_TR(0x5b0f9f);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b0fa3:{NFSU2_TR(0x5b0fa3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0fa4:{NFSU2_TR(0x5b0fa4);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b0fa8:{NFSU2_TR(0x5b0fa8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0fa9:{NFSU2_TR(0x5b0fa9);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b0fb1:{NFSU2_TR(0x5b0fb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b0fb9:{NFSU2_TR(0x5b0fb9);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b0fc1:{NFSU2_TR(0x5b0fc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b0fc9:{NFSU2_TR(0x5b0fc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b0fceull));
TAIL_STATIC(0x5bb0d0u,5bb);
}
B5b0fce:L5b0fce:{c.instructions+=12;NFSU2_TR(0x5b0fce);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b0fd1:{NFSU2_TR(0x5b0fd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b0fd3:{NFSU2_TR(0x5b0fd3);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b0fd7:{NFSU2_TR(0x5b0fd7);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b0fda:{NFSU2_TR(0x5b0fda);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b0fde:{NFSU2_TR(0x5b0fde);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b0fe2:{NFSU2_TR(0x5b0fe2);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b0fe5:{NFSU2_TR(0x5b0fe5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0fe6:{NFSU2_TR(0x5b0fe6);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b0fea:{NFSU2_TR(0x5b0fea);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b0feb:{NFSU2_TR(0x5b0feb);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b0fef:{NFSU2_TR(0x5b0fef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b0ff4ull));
TAIL_STATIC(0x4012b0u,401);
}
B5b0ff4:L5b0ff4:{c.instructions+=4;NFSU2_TR(0x5b0ff4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b0ff8:{NFSU2_TR(0x5b0ff8);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5b0ffc:{NFSU2_TR(0x5b0ffc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B5b0fff:{NFSU2_TR(0x5b0fff);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
TAIL_STATIC(0x5b1000u,5b1);
}
XIT:NFSU2_TR_EXIT(0x5b0,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
