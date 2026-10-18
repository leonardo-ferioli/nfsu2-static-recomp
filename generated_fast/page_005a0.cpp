#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_431(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_486(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_56d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_593(u8* __restrict R,Cpu& c);
u32 body_598(u8* __restrict R,Cpu& c);
u32 body_59b(u8* __restrict R,Cpu& c);
u32 body_59f(u8* __restrict R,Cpu& c);
u32 body_5a1(u8* __restrict R,Cpu& c);
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 body_5f1(u8* __restrict R,Cpu& c);
u32 body_602(u8* __restrict R,Cpu& c);
u32 body_637(u8* __restrict R,Cpu& c);
u32 body_63a(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5a0,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5a0,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5a0(u8* __restrict R,Cpu& c);
u32 page_5a0(Cpu& c){return body_5a0(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5a0(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5a0000:goto L5a0000;
case 0x5a0005:c.instructions+=3;goto B5a0005;
case 0x5a0008:c.instructions+=2;goto B5a0008;
case 0x5a000a:c.instructions+=1;goto B5a000a;
case 0x5a000c:goto L5a000c;
case 0x5a0011:c.instructions+=2;goto B5a0011;
case 0x5a0013:c.instructions+=1;goto B5a0013;
case 0x5a0015:goto L5a0015;
case 0x5a001b:c.instructions+=1;goto B5a001b;
case 0x5a001d:goto L5a001d;
case 0x5a0023:goto L5a0023;
case 0x5a0029:c.instructions+=18;goto B5a0029;
case 0x5a0031:c.instructions+=17;goto B5a0031;
case 0x5a0033:c.instructions+=16;goto B5a0033;
case 0x5a003b:c.instructions+=15;goto B5a003b;
case 0x5a003f:c.instructions+=14;goto B5a003f;
case 0x5a0043:c.instructions+=13;goto B5a0043;
case 0x5a0047:c.instructions+=12;goto B5a0047;
case 0x5a0049:c.instructions+=11;goto B5a0049;
case 0x5a004a:c.instructions+=10;goto B5a004a;
case 0x5a004d:c.instructions+=9;goto B5a004d;
case 0x5a0051:c.instructions+=8;goto B5a0051;
case 0x5a0055:c.instructions+=7;goto B5a0055;
case 0x5a0057:c.instructions+=6;goto B5a0057;
case 0x5a005d:c.instructions+=5;goto B5a005d;
case 0x5a0061:c.instructions+=4;goto B5a0061;
case 0x5a0063:c.instructions+=3;goto B5a0063;
case 0x5a0066:c.instructions+=2;goto B5a0066;
case 0x5a0068:c.instructions+=1;goto B5a0068;
case 0x5a006d:goto L5a006d;
case 0x5a006f:c.instructions+=8;goto B5a006f;
case 0x5a0073:c.instructions+=7;goto B5a0073;
case 0x5a0076:c.instructions+=6;goto B5a0076;
case 0x5a007a:c.instructions+=5;goto B5a007a;
case 0x5a007b:c.instructions+=4;goto B5a007b;
case 0x5a007f:c.instructions+=3;goto B5a007f;
case 0x5a0080:c.instructions+=2;goto B5a0080;
case 0x5a0082:c.instructions+=1;goto B5a0082;
case 0x5a0085:goto L5a0085;
case 0x5a008a:c.instructions+=2;goto B5a008a;
case 0x5a008c:c.instructions+=1;goto B5a008c;
case 0x5a0092:goto L5a0092;
case 0x5a0097:c.instructions+=2;goto B5a0097;
case 0x5a0099:c.instructions+=1;goto B5a0099;
case 0x5a009f:goto L5a009f;
case 0x5a00a1:c.instructions+=1;goto B5a00a1;
case 0x5a00a6:goto L5a00a6;
case 0x5a00a8:c.instructions+=1;goto B5a00a8;
case 0x5a00ae:goto L5a00ae;
case 0x5a00b2:c.instructions+=4;goto B5a00b2;
case 0x5a00b8:c.instructions+=3;goto B5a00b8;
case 0x5a00ba:c.instructions+=2;goto B5a00ba;
case 0x5a00bd:c.instructions+=1;goto B5a00bd;
case 0x5a00bf:goto L5a00bf;
case 0x5a00c5:c.instructions+=2;goto B5a00c5;
case 0x5a00c7:c.instructions+=1;goto B5a00c7;
case 0x5a00cc:goto L5a00cc;
case 0x5a00ce:c.instructions+=1;goto B5a00ce;
case 0x5a00d0:goto L5a00d0;
case 0x5a00d3:c.instructions+=3;goto B5a00d3;
case 0x5a00d6:c.instructions+=2;goto B5a00d6;
case 0x5a00d9:c.instructions+=1;goto B5a00d9;
case 0x5a00db:goto L5a00db;
case 0x5a00de:c.instructions+=1;goto B5a00de;
case 0x5a00e0:goto L5a00e0;
case 0x5a00e2:c.instructions+=1;goto B5a00e2;
case 0x5a00e7:goto L5a00e7;
case 0x5a00e9:c.instructions+=1;goto B5a00e9;
case 0x5a00eb:goto L5a00eb;
case 0x5a00ed:c.instructions+=5;goto B5a00ed;
case 0x5a00ef:c.instructions+=4;goto B5a00ef;
case 0x5a00f1:c.instructions+=3;goto B5a00f1;
case 0x5a00f3:c.instructions+=2;goto B5a00f3;
case 0x5a00f5:c.instructions+=1;goto B5a00f5;
case 0x5a00fa:goto L5a00fa;
case 0x5a00fc:c.instructions+=1;goto B5a00fc;
case 0x5a00fe:goto L5a00fe;
case 0x5a0100:c.instructions+=1;goto B5a0100;
case 0x5a0105:goto L5a0105;
case 0x5a0107:goto L5a0107;
case 0x5a010d:c.instructions+=1;goto B5a010d;
case 0x5a0112:goto L5a0112;
case 0x5a0118:c.instructions+=3;goto B5a0118;
case 0x5a011e:c.instructions+=2;goto B5a011e;
case 0x5a0120:c.instructions+=1;goto B5a0120;
case 0x5a0122:goto L5a0122;
case 0x5a0124:c.instructions+=1;goto B5a0124;
case 0x5a0129:goto L5a0129;
case 0x5a012b:c.instructions+=2;goto B5a012b;
case 0x5a012d:c.instructions+=1;goto B5a012d;
case 0x5a0132:goto L5a0132;
case 0x5a0136:goto L5a0136;
case 0x5a013a:c.instructions+=4;goto B5a013a;
case 0x5a013b:c.instructions+=3;goto B5a013b;
case 0x5a013e:c.instructions+=2;goto B5a013e;
case 0x5a0142:c.instructions+=1;goto B5a0142;
case 0x5a0148:goto L5a0148;
case 0x5a0149:c.instructions+=5;goto B5a0149;
case 0x5a014a:c.instructions+=4;goto B5a014a;
case 0x5a014b:c.instructions+=3;goto B5a014b;
case 0x5a014d:c.instructions+=2;goto B5a014d;
case 0x5a014e:c.instructions+=1;goto B5a014e;
case 0x5a0160:goto L5a0160;
case 0x5a0163:c.instructions+=7;goto B5a0163;
case 0x5a0169:c.instructions+=6;goto B5a0169;
case 0x5a016a:c.instructions+=5;goto B5a016a;
case 0x5a016d:c.instructions+=4;goto B5a016d;
case 0x5a016f:c.instructions+=3;goto B5a016f;
case 0x5a0171:c.instructions+=2;goto B5a0171;
case 0x5a0172:c.instructions+=1;goto B5a0172;
case 0x5a0174:goto L5a0174;
case 0x5a0177:c.instructions+=6;goto B5a0177;
case 0x5a017a:c.instructions+=5;goto B5a017a;
case 0x5a017c:c.instructions+=4;goto B5a017c;
case 0x5a0182:c.instructions+=3;goto B5a0182;
case 0x5a0184:c.instructions+=2;goto B5a0184;
case 0x5a0187:c.instructions+=1;goto B5a0187;
case 0x5a0189:goto L5a0189;
case 0x5a018f:c.instructions+=2;goto B5a018f;
case 0x5a0192:c.instructions+=1;goto B5a0192;
case 0x5a0194:goto L5a0194;
case 0x5a0197:c.instructions+=6;goto B5a0197;
case 0x5a019a:c.instructions+=5;goto B5a019a;
case 0x5a019c:c.instructions+=4;goto B5a019c;
case 0x5a01a2:c.instructions+=3;goto B5a01a2;
case 0x5a01a4:c.instructions+=2;goto B5a01a4;
case 0x5a01a7:c.instructions+=1;goto B5a01a7;
case 0x5a01a9:goto L5a01a9;
case 0x5a01ab:c.instructions+=1;goto B5a01ab;
case 0x5a01ac:goto L5a01ac;
case 0x5a01ae:c.instructions+=1;goto B5a01ae;
case 0x5a01b0:goto L5a01b0;
case 0x5a01b3:c.instructions+=7;goto B5a01b3;
case 0x5a01b9:c.instructions+=6;goto B5a01b9;
case 0x5a01ba:c.instructions+=5;goto B5a01ba;
case 0x5a01bd:c.instructions+=4;goto B5a01bd;
case 0x5a01bf:c.instructions+=3;goto B5a01bf;
case 0x5a01c1:c.instructions+=2;goto B5a01c1;
case 0x5a01c2:c.instructions+=1;goto B5a01c2;
case 0x5a01c4:goto L5a01c4;
case 0x5a01c7:c.instructions+=6;goto B5a01c7;
case 0x5a01ca:c.instructions+=5;goto B5a01ca;
case 0x5a01cc:c.instructions+=4;goto B5a01cc;
case 0x5a01d2:c.instructions+=3;goto B5a01d2;
case 0x5a01d4:c.instructions+=2;goto B5a01d4;
case 0x5a01d7:c.instructions+=1;goto B5a01d7;
case 0x5a01d9:goto L5a01d9;
case 0x5a01df:c.instructions+=2;goto B5a01df;
case 0x5a01e2:c.instructions+=1;goto B5a01e2;
case 0x5a01e4:goto L5a01e4;
case 0x5a01e7:c.instructions+=6;goto B5a01e7;
case 0x5a01ea:c.instructions+=5;goto B5a01ea;
case 0x5a01ec:c.instructions+=4;goto B5a01ec;
case 0x5a01f2:c.instructions+=3;goto B5a01f2;
case 0x5a01f4:c.instructions+=2;goto B5a01f4;
case 0x5a01f7:c.instructions+=1;goto B5a01f7;
case 0x5a01f9:goto L5a01f9;
case 0x5a01fb:c.instructions+=1;goto B5a01fb;
case 0x5a01fc:goto L5a01fc;
case 0x5a01fe:c.instructions+=1;goto B5a01fe;
case 0x5a0200:goto L5a0200;
case 0x5a0202:c.instructions+=14;goto B5a0202;
case 0x5a0207:c.instructions+=13;goto B5a0207;
case 0x5a020d:c.instructions+=12;goto B5a020d;
case 0x5a020e:c.instructions+=11;goto B5a020e;
case 0x5a0215:c.instructions+=10;goto B5a0215;
case 0x5a0216:c.instructions+=9;goto B5a0216;
case 0x5a0217:c.instructions+=8;goto B5a0217;
case 0x5a0218:c.instructions+=7;goto B5a0218;
case 0x5a0219:c.instructions+=6;goto B5a0219;
case 0x5a021b:c.instructions+=5;goto B5a021b;
case 0x5a021c:c.instructions+=4;goto B5a021c;
case 0x5a0221:c.instructions+=3;goto B5a0221;
case 0x5a0223:c.instructions+=2;goto B5a0223;
case 0x5a0228:c.instructions+=1;goto B5a0228;
case 0x5a022d:goto L5a022d;
case 0x5a022e:c.instructions+=5;goto B5a022e;
case 0x5a0233:c.instructions+=4;goto B5a0233;
case 0x5a0235:c.instructions+=3;goto B5a0235;
case 0x5a023a:c.instructions+=2;goto B5a023a;
case 0x5a023f:c.instructions+=1;goto B5a023f;
case 0x5a0244:goto L5a0244;
case 0x5a0245:c.instructions+=5;goto B5a0245;
case 0x5a024a:c.instructions+=4;goto B5a024a;
case 0x5a024f:c.instructions+=3;goto B5a024f;
case 0x5a0254:c.instructions+=2;goto B5a0254;
case 0x5a0259:c.instructions+=1;goto B5a0259;
case 0x5a025e:goto L5a025e;
case 0x5a025f:c.instructions+=5;goto B5a025f;
case 0x5a0264:c.instructions+=4;goto B5a0264;
case 0x5a0269:c.instructions+=3;goto B5a0269;
case 0x5a026e:c.instructions+=2;goto B5a026e;
case 0x5a0273:c.instructions+=1;goto B5a0273;
case 0x5a0278:goto L5a0278;
case 0x5a027b:c.instructions+=3;goto B5a027b;
case 0x5a027d:c.instructions+=2;goto B5a027d;
case 0x5a0282:c.instructions+=1;goto B5a0282;
case 0x5a0287:goto L5a0287;
case 0x5a0289:c.instructions+=5;goto B5a0289;
case 0x5a028c:c.instructions+=4;goto B5a028c;
case 0x5a0290:c.instructions+=3;goto B5a0290;
case 0x5a0292:c.instructions+=2;goto B5a0292;
case 0x5a0296:c.instructions+=1;goto B5a0296;
case 0x5a0298:goto L5a0298;
case 0x5a029a:c.instructions+=4;goto B5a029a;
case 0x5a029d:c.instructions+=3;goto B5a029d;
case 0x5a02a0:c.instructions+=2;goto B5a02a0;
case 0x5a02a6:c.instructions+=1;goto B5a02a6;
case 0x5a02ab:goto L5a02ab;
case 0x5a02ad:c.instructions+=4;goto B5a02ad;
case 0x5a02b0:c.instructions+=3;goto B5a02b0;
case 0x5a02b3:c.instructions+=2;goto B5a02b3;
case 0x5a02b8:c.instructions+=1;goto B5a02b8;
case 0x5a02ba:goto L5a02ba;
case 0x5a02bc:goto L5a02bc;
case 0x5a02be:c.instructions+=2;goto B5a02be;
case 0x5a02c1:c.instructions+=1;goto B5a02c1;
case 0x5a02c3:goto L5a02c3;
case 0x5a02c5:goto L5a02c5;
case 0x5a02ca:c.instructions+=3;goto B5a02ca;
case 0x5a02d2:c.instructions+=2;goto B5a02d2;
case 0x5a02d8:c.instructions+=1;goto B5a02d8;
case 0x5a02dd:goto L5a02dd;
case 0x5a02df:c.instructions+=4;goto B5a02df;
case 0x5a02e1:c.instructions+=3;goto B5a02e1;
case 0x5a02e7:c.instructions+=2;goto B5a02e7;
case 0x5a02ec:c.instructions+=1;goto B5a02ec;
case 0x5a02f1:goto L5a02f1;
case 0x5a02f3:goto L5a02f3;
case 0x5a02f8:goto L5a02f8;
case 0x5a02fa:c.instructions+=3;goto B5a02fa;
case 0x5a02ff:c.instructions+=2;goto B5a02ff;
case 0x5a0304:c.instructions+=1;goto B5a0304;
case 0x5a0309:goto L5a0309;
case 0x5a030b:goto L5a030b;
case 0x5a0310:goto L5a0310;
case 0x5a0313:c.instructions+=4;goto B5a0313;
case 0x5a0315:c.instructions+=3;goto B5a0315;
case 0x5a031b:c.instructions+=2;goto B5a031b;
case 0x5a0320:c.instructions+=1;goto B5a0320;
case 0x5a0322:goto L5a0322;
case 0x5a0324:goto L5a0324;
case 0x5a0328:c.instructions+=6;goto B5a0328;
case 0x5a0329:c.instructions+=5;goto B5a0329;
case 0x5a032a:c.instructions+=4;goto B5a032a;
case 0x5a032b:c.instructions+=3;goto B5a032b;
case 0x5a0332:c.instructions+=2;goto B5a0332;
case 0x5a0335:c.instructions+=1;goto B5a0335;
case 0x5a0340:goto L5a0340;
case 0x5a0342:c.instructions+=21;goto B5a0342;
case 0x5a0347:c.instructions+=20;goto B5a0347;
case 0x5a034d:c.instructions+=19;goto B5a034d;
case 0x5a034e:c.instructions+=18;goto B5a034e;
case 0x5a0355:c.instructions+=17;goto B5a0355;
case 0x5a0356:c.instructions+=16;goto B5a0356;
case 0x5a0357:c.instructions+=15;goto B5a0357;
case 0x5a0358:c.instructions+=14;goto B5a0358;
case 0x5a0359:c.instructions+=13;goto B5a0359;
case 0x5a035b:c.instructions+=12;goto B5a035b;
case 0x5a035d:c.instructions+=11;goto B5a035d;
case 0x5a0363:c.instructions+=10;goto B5a0363;
case 0x5a0364:c.instructions+=9;goto B5a0364;
case 0x5a0368:c.instructions+=8;goto B5a0368;
case 0x5a036e:c.instructions+=7;goto B5a036e;
case 0x5a0374:c.instructions+=6;goto B5a0374;
case 0x5a0378:c.instructions+=5;goto B5a0378;
case 0x5a037c:c.instructions+=4;goto B5a037c;
case 0x5a0382:c.instructions+=3;goto B5a0382;
case 0x5a0386:c.instructions+=2;goto B5a0386;
case 0x5a038a:c.instructions+=1;goto B5a038a;
case 0x5a038c:goto L5a038c;
case 0x5a0391:c.instructions+=1;goto B5a0391;
case 0x5a0393:goto L5a0393;
case 0x5a0399:goto L5a0399;
case 0x5a039b:c.instructions+=3;goto B5a039b;
case 0x5a039c:c.instructions+=2;goto B5a039c;
case 0x5a039e:c.instructions+=1;goto B5a039e;
case 0x5a03a1:goto L5a03a1;
case 0x5a03a3:c.instructions+=4;goto B5a03a3;
case 0x5a03a4:c.instructions+=3;goto B5a03a4;
case 0x5a03a5:c.instructions+=2;goto B5a03a5;
case 0x5a03a7:c.instructions+=1;goto B5a03a7;
case 0x5a03aa:goto L5a03aa;
case 0x5a03ab:c.instructions+=2;goto B5a03ab;
case 0x5a03ad:c.instructions+=1;goto B5a03ad;
case 0x5a03b2:goto L5a03b2;
case 0x5a03b7:c.instructions+=5;goto B5a03b7;
case 0x5a03bd:c.instructions+=4;goto B5a03bd;
case 0x5a03be:c.instructions+=3;goto B5a03be;
case 0x5a03c0:c.instructions+=2;goto B5a03c0;
case 0x5a03c5:c.instructions+=1;goto B5a03c5;
case 0x5a03c7:goto L5a03c7;
case 0x5a03cc:goto L5a03cc;
case 0x5a03d2:c.instructions+=52;goto B5a03d2;
case 0x5a03d8:c.instructions+=51;goto B5a03d8;
case 0x5a03da:c.instructions+=50;goto B5a03da;
case 0x5a03df:c.instructions+=49;goto B5a03df;
case 0x5a03e2:c.instructions+=48;goto B5a03e2;
case 0x5a03e8:c.instructions+=47;goto B5a03e8;
case 0x5a03ee:c.instructions+=46;goto B5a03ee;
case 0x5a03f4:c.instructions+=45;goto B5a03f4;
case 0x5a03fa:c.instructions+=44;goto B5a03fa;
case 0x5a0400:c.instructions+=43;goto B5a0400;
case 0x5a0404:c.instructions+=42;goto B5a0404;
case 0x5a0408:c.instructions+=41;goto B5a0408;
case 0x5a040e:c.instructions+=40;goto B5a040e;
case 0x5a0410:c.instructions+=39;goto B5a0410;
case 0x5a0415:c.instructions+=38;goto B5a0415;
case 0x5a0417:c.instructions+=37;goto B5a0417;
case 0x5a041a:c.instructions+=36;goto B5a041a;
case 0x5a041c:c.instructions+=35;goto B5a041c;
case 0x5a041f:c.instructions+=34;goto B5a041f;
case 0x5a0421:c.instructions+=33;goto B5a0421;
case 0x5a0423:c.instructions+=32;goto B5a0423;
case 0x5a0425:c.instructions+=31;goto B5a0425;
case 0x5a0426:c.instructions+=30;goto B5a0426;
case 0x5a0428:c.instructions+=29;goto B5a0428;
case 0x5a042a:c.instructions+=28;goto B5a042a;
case 0x5a0430:c.instructions+=27;goto B5a0430;
case 0x5a0434:c.instructions+=26;goto B5a0434;
case 0x5a043a:c.instructions+=25;goto B5a043a;
case 0x5a0440:c.instructions+=24;goto B5a0440;
case 0x5a0444:c.instructions+=23;goto B5a0444;
case 0x5a0446:c.instructions+=22;goto B5a0446;
case 0x5a044b:c.instructions+=21;goto B5a044b;
case 0x5a044d:c.instructions+=20;goto B5a044d;
case 0x5a0450:c.instructions+=19;goto B5a0450;
case 0x5a0453:c.instructions+=18;goto B5a0453;
case 0x5a0455:c.instructions+=17;goto B5a0455;
case 0x5a0458:c.instructions+=16;goto B5a0458;
case 0x5a045a:c.instructions+=15;goto B5a045a;
case 0x5a045c:c.instructions+=14;goto B5a045c;
case 0x5a045e:c.instructions+=13;goto B5a045e;
case 0x5a0460:c.instructions+=12;goto B5a0460;
case 0x5a0466:c.instructions+=11;goto B5a0466;
case 0x5a0469:c.instructions+=10;goto B5a0469;
case 0x5a046f:c.instructions+=9;goto B5a046f;
case 0x5a0472:c.instructions+=8;goto B5a0472;
case 0x5a0476:c.instructions+=7;goto B5a0476;
case 0x5a0478:c.instructions+=6;goto B5a0478;
case 0x5a0479:c.instructions+=5;goto B5a0479;
case 0x5a047a:c.instructions+=4;goto B5a047a;
case 0x5a047b:c.instructions+=3;goto B5a047b;
case 0x5a0482:c.instructions+=2;goto B5a0482;
case 0x5a0485:c.instructions+=1;goto B5a0485;
case 0x5a0490:goto L5a0490;
case 0x5a0495:c.instructions+=3;goto B5a0495;
case 0x5a0497:c.instructions+=2;goto B5a0497;
case 0x5a0498:c.instructions+=1;goto B5a0498;
case 0x5a049a:goto L5a049a;
case 0x5a04a0:c.instructions+=1;goto B5a04a0;
case 0x5a04a2:goto L5a04a2;
case 0x5a04a4:goto L5a04a4;
case 0x5a04a9:c.instructions+=1;goto B5a04a9;
case 0x5a04ae:goto L5a04ae;
case 0x5a04b0:c.instructions+=1;goto B5a04b0;
case 0x5a04b2:goto L5a04b2;
case 0x5a04b6:c.instructions+=2;goto B5a04b6;
case 0x5a04ba:c.instructions+=1;goto B5a04ba;
case 0x5a04c0:goto L5a04c0;
case 0x5a04c6:c.instructions+=1;goto B5a04c6;
case 0x5a04c8:goto L5a04c8;
case 0x5a04ce:c.instructions+=1;goto B5a04ce;
case 0x5a04d0:goto L5a04d0;
case 0x5a04d6:c.instructions+=2;goto B5a04d6;
case 0x5a04d8:c.instructions+=1;goto B5a04d8;
case 0x5a04da:goto L5a04da;
case 0x5a04e0:c.instructions+=1;goto B5a04e0;
case 0x5a04e2:goto L5a04e2;
case 0x5a04e4:goto L5a04e4;
case 0x5a04e6:c.instructions+=1;goto B5a04e6;
case 0x5a04e8:goto L5a04e8;
case 0x5a04ea:c.instructions+=2;goto B5a04ea;
case 0x5a04eb:c.instructions+=1;goto B5a04eb;
case 0x5a04ec:goto L5a04ec;
case 0x5a04ee:c.instructions+=2;goto B5a04ee;
case 0x5a04ef:c.instructions+=1;goto B5a04ef;
case 0x5a04f0:goto L5a04f0;
case 0x5a04f4:c.instructions+=12;goto B5a04f4;
case 0x5a04f5:c.instructions+=11;goto B5a04f5;
case 0x5a04f7:c.instructions+=10;goto B5a04f7;
case 0x5a04f9:c.instructions+=9;goto B5a04f9;
case 0x5a04fa:c.instructions+=8;goto B5a04fa;
case 0x5a04fc:c.instructions+=7;goto B5a04fc;
case 0x5a0500:c.instructions+=6;goto B5a0500;
case 0x5a0506:c.instructions+=5;goto B5a0506;
case 0x5a050a:c.instructions+=4;goto B5a050a;
case 0x5a050d:c.instructions+=3;goto B5a050d;
case 0x5a0510:c.instructions+=2;goto B5a0510;
case 0x5a0513:c.instructions+=1;goto B5a0513;
case 0x5a0515:goto L5a0515;
case 0x5a051b:c.instructions+=3;goto B5a051b;
case 0x5a051e:c.instructions+=2;goto B5a051e;
case 0x5a051f:c.instructions+=1;goto B5a051f;
case 0x5a0524:goto L5a0524;
case 0x5a0528:c.instructions+=2;goto B5a0528;
case 0x5a052e:c.instructions+=1;goto B5a052e;
case 0x5a0531:goto L5a0531;
case 0x5a0536:c.instructions+=5;goto B5a0536;
case 0x5a053c:c.instructions+=4;goto B5a053c;
case 0x5a053d:c.instructions+=3;goto B5a053d;
case 0x5a053f:c.instructions+=2;goto B5a053f;
case 0x5a0544:c.instructions+=1;goto B5a0544;
case 0x5a0546:goto L5a0546;
case 0x5a054b:goto L5a054b;
case 0x5a0550:c.instructions+=20;goto B5a0550;
case 0x5a0553:c.instructions+=19;goto B5a0553;
case 0x5a0556:c.instructions+=18;goto B5a0556;
case 0x5a0559:c.instructions+=17;goto B5a0559;
case 0x5a055c:c.instructions+=16;goto B5a055c;
case 0x5a055f:c.instructions+=15;goto B5a055f;
case 0x5a0562:c.instructions+=14;goto B5a0562;
case 0x5a0568:c.instructions+=13;goto B5a0568;
case 0x5a056b:c.instructions+=12;goto B5a056b;
case 0x5a0570:c.instructions+=11;goto B5a0570;
case 0x5a0573:c.instructions+=10;goto B5a0573;
case 0x5a057a:c.instructions+=9;goto B5a057a;
case 0x5a057c:c.instructions+=8;goto B5a057c;
case 0x5a057f:c.instructions+=7;goto B5a057f;
case 0x5a0582:c.instructions+=6;goto B5a0582;
case 0x5a0585:c.instructions+=5;goto B5a0585;
case 0x5a0588:c.instructions+=4;goto B5a0588;
case 0x5a058a:c.instructions+=3;goto B5a058a;
case 0x5a058b:c.instructions+=2;goto B5a058b;
case 0x5a058c:c.instructions+=1;goto B5a058c;
case 0x5a0590:goto L5a0590;
case 0x5a0593:c.instructions+=1;goto B5a0593;
case 0x5a05a0:goto L5a05a0;
case 0x5a05a1:c.instructions+=10;goto B5a05a1;
case 0x5a05a2:c.instructions+=9;goto B5a05a2;
case 0x5a05a4:c.instructions+=8;goto B5a05a4;
case 0x5a05a7:c.instructions+=7;goto B5a05a7;
case 0x5a05aa:c.instructions+=6;goto B5a05aa;
case 0x5a05ae:c.instructions+=5;goto B5a05ae;
case 0x5a05b2:c.instructions+=4;goto B5a05b2;
case 0x5a05b6:c.instructions+=3;goto B5a05b6;
case 0x5a05b8:c.instructions+=2;goto B5a05b8;
case 0x5a05bb:c.instructions+=1;goto B5a05bb;
case 0x5a05c1:goto L5a05c1;
case 0x5a05c5:c.instructions+=4;goto B5a05c5;
case 0x5a05c9:c.instructions+=3;goto B5a05c9;
case 0x5a05cb:c.instructions+=2;goto B5a05cb;
case 0x5a05ce:c.instructions+=1;goto B5a05ce;
case 0x5a05d0:goto L5a05d0;
case 0x5a05d4:c.instructions+=4;goto B5a05d4;
case 0x5a05da:c.instructions+=3;goto B5a05da;
case 0x5a05dc:c.instructions+=2;goto B5a05dc;
case 0x5a05df:c.instructions+=1;goto B5a05df;
case 0x5a05e1:goto L5a05e1;
case 0x5a05e5:c.instructions+=4;goto B5a05e5;
case 0x5a05ea:c.instructions+=3;goto B5a05ea;
case 0x5a05eb:c.instructions+=2;goto B5a05eb;
case 0x5a05ec:c.instructions+=1;goto B5a05ec;
case 0x5a05ef:goto L5a05ef;
case 0x5a05f3:c.instructions+=4;goto B5a05f3;
case 0x5a05f7:c.instructions+=3;goto B5a05f7;
case 0x5a05f9:c.instructions+=2;goto B5a05f9;
case 0x5a05fc:c.instructions+=1;goto B5a05fc;
case 0x5a05fe:goto L5a05fe;
case 0x5a0602:c.instructions+=4;goto B5a0602;
case 0x5a0608:c.instructions+=3;goto B5a0608;
case 0x5a060a:c.instructions+=2;goto B5a060a;
case 0x5a060d:c.instructions+=1;goto B5a060d;
case 0x5a060f:goto L5a060f;
case 0x5a0614:c.instructions+=4;goto B5a0614;
case 0x5a0616:c.instructions+=3;goto B5a0616;
case 0x5a0617:c.instructions+=2;goto B5a0617;
case 0x5a061f:c.instructions+=1;goto B5a061f;
case 0x5a0621:goto L5a0621;
case 0x5a0624:c.instructions+=1;goto B5a0624;
case 0x5a0626:goto L5a0626;
case 0x5a0628:goto L5a0628;
case 0x5a062d:c.instructions+=1;goto B5a062d;
case 0x5a0632:goto L5a0632;
case 0x5a0634:c.instructions+=2;goto B5a0634;
case 0x5a0636:c.instructions+=1;goto B5a0636;
case 0x5a0638:goto L5a0638;
case 0x5a063a:c.instructions+=1;goto B5a063a;
case 0x5a063c:goto L5a063c;
case 0x5a063f:c.instructions+=5;goto B5a063f;
case 0x5a0642:c.instructions+=4;goto B5a0642;
case 0x5a0646:c.instructions+=3;goto B5a0646;
case 0x5a0648:c.instructions+=2;goto B5a0648;
case 0x5a064b:c.instructions+=1;goto B5a064b;
case 0x5a064d:goto L5a064d;
case 0x5a0651:c.instructions+=1;goto B5a0651;
case 0x5a0653:goto L5a0653;
case 0x5a0655:goto L5a0655;
case 0x5a0658:c.instructions+=2;goto B5a0658;
case 0x5a065a:c.instructions+=1;goto B5a065a;
case 0x5a065c:goto L5a065c;
case 0x5a065f:c.instructions+=1;goto B5a065f;
case 0x5a0661:goto L5a0661;
case 0x5a0663:goto L5a0663;
case 0x5a0665:c.instructions+=1;goto B5a0665;
case 0x5a0667:goto L5a0667;
case 0x5a066b:c.instructions+=2;goto B5a066b;
case 0x5a0671:c.instructions+=1;goto B5a0671;
case 0x5a0672:goto L5a0672;
case 0x5a0673:c.instructions+=2;goto B5a0673;
case 0x5a0674:c.instructions+=1;goto B5a0674;
case 0x5a0680:goto L5a0680;
case 0x5a0681:c.instructions+=10;goto B5a0681;
case 0x5a0682:c.instructions+=9;goto B5a0682;
case 0x5a0686:c.instructions+=8;goto B5a0686;
case 0x5a0688:c.instructions+=7;goto B5a0688;
case 0x5a0689:c.instructions+=6;goto B5a0689;
case 0x5a068d:c.instructions+=5;goto B5a068d;
case 0x5a068f:c.instructions+=4;goto B5a068f;
case 0x5a0690:c.instructions+=3;goto B5a0690;
case 0x5a0692:c.instructions+=2;goto B5a0692;
case 0x5a0695:c.instructions+=1;goto B5a0695;
case 0x5a069a:goto L5a069a;
case 0x5a069d:c.instructions+=12;goto B5a069d;
case 0x5a069f:c.instructions+=11;goto B5a069f;
case 0x5a06a2:c.instructions+=10;goto B5a06a2;
case 0x5a06a5:c.instructions+=9;goto B5a06a5;
case 0x5a06a8:c.instructions+=8;goto B5a06a8;
case 0x5a06ab:c.instructions+=7;goto B5a06ab;
case 0x5a06ad:c.instructions+=6;goto B5a06ad;
case 0x5a06b0:c.instructions+=5;goto B5a06b0;
case 0x5a06b3:c.instructions+=4;goto B5a06b3;
case 0x5a06b5:c.instructions+=3;goto B5a06b5;
case 0x5a06b7:c.instructions+=2;goto B5a06b7;
case 0x5a06ba:c.instructions+=1;goto B5a06ba;
case 0x5a06c0:goto L5a06c0;
case 0x5a06c5:c.instructions+=1;goto B5a06c5;
case 0x5a06ca:goto L5a06ca;
case 0x5a06ce:c.instructions+=2;goto B5a06ce;
case 0x5a06d1:c.instructions+=1;goto B5a06d1;
case 0x5a06d2:goto L5a06d2;
case 0x5a06d5:c.instructions+=2;goto B5a06d5;
case 0x5a06d7:c.instructions+=1;goto B5a06d7;
case 0x5a06d9:goto L5a06d9;
case 0x5a06dc:c.instructions+=1;goto B5a06dc;
case 0x5a06de:goto L5a06de;
case 0x5a06e0:goto L5a06e0;
case 0x5a06e2:c.instructions+=2;goto B5a06e2;
case 0x5a06e4:c.instructions+=1;goto B5a06e4;
case 0x5a06e6:goto L5a06e6;
case 0x5a06e9:c.instructions+=1;goto B5a06e9;
case 0x5a06eb:goto L5a06eb;
case 0x5a06ed:goto L5a06ed;
case 0x5a06f1:c.instructions+=1;goto B5a06f1;
case 0x5a06f7:goto L5a06f7;
case 0x5a06f9:c.instructions+=1;goto B5a06f9;
case 0x5a06fb:goto L5a06fb;
case 0x5a06fe:c.instructions+=2;goto B5a06fe;
case 0x5a0700:c.instructions+=1;goto B5a0700;
case 0x5a0702:goto L5a0702;
case 0x5a0705:c.instructions+=1;goto B5a0705;
case 0x5a0707:goto L5a0707;
case 0x5a0709:goto L5a0709;
case 0x5a070b:c.instructions+=1;goto B5a070b;
case 0x5a070d:goto L5a070d;
case 0x5a0710:c.instructions+=1;goto B5a0710;
case 0x5a0712:goto L5a0712;
case 0x5a0714:goto L5a0714;
case 0x5a0717:c.instructions+=4;goto B5a0717;
case 0x5a071a:c.instructions+=3;goto B5a071a;
case 0x5a071c:c.instructions+=2;goto B5a071c;
case 0x5a071f:c.instructions+=1;goto B5a071f;
case 0x5a0721:goto L5a0721;
case 0x5a0724:c.instructions+=4;goto B5a0724;
case 0x5a0727:c.instructions+=3;goto B5a0727;
case 0x5a0729:c.instructions+=2;goto B5a0729;
case 0x5a072c:c.instructions+=1;goto B5a072c;
case 0x5a072e:goto L5a072e;
case 0x5a0732:c.instructions+=8;goto B5a0732;
case 0x5a0736:c.instructions+=7;goto B5a0736;
case 0x5a0738:c.instructions+=6;goto B5a0738;
case 0x5a073c:c.instructions+=5;goto B5a073c;
case 0x5a073f:c.instructions+=4;goto B5a073f;
case 0x5a0741:c.instructions+=3;goto B5a0741;
case 0x5a0743:c.instructions+=2;goto B5a0743;
case 0x5a0747:c.instructions+=1;goto B5a0747;
case 0x5a0749:goto L5a0749;
case 0x5a074b:c.instructions+=5;goto B5a074b;
case 0x5a074d:c.instructions+=4;goto B5a074d;
case 0x5a0750:c.instructions+=3;goto B5a0750;
case 0x5a0752:c.instructions+=2;goto B5a0752;
case 0x5a0755:c.instructions+=1;goto B5a0755;
case 0x5a0757:goto L5a0757;
case 0x5a075a:c.instructions+=6;goto B5a075a;
case 0x5a075d:c.instructions+=5;goto B5a075d;
case 0x5a075f:c.instructions+=4;goto B5a075f;
case 0x5a0762:c.instructions+=3;goto B5a0762;
case 0x5a0765:c.instructions+=2;goto B5a0765;
case 0x5a0767:c.instructions+=1;goto B5a0767;
case 0x5a076c:goto L5a076c;
case 0x5a076e:c.instructions+=6;goto B5a076e;
case 0x5a0771:c.instructions+=5;goto B5a0771;
case 0x5a0773:c.instructions+=4;goto B5a0773;
case 0x5a0776:c.instructions+=3;goto B5a0776;
case 0x5a0779:c.instructions+=2;goto B5a0779;
case 0x5a077b:c.instructions+=1;goto B5a077b;
case 0x5a0780:goto L5a0780;
case 0x5a0784:c.instructions+=1;goto B5a0784;
case 0x5a078a:goto L5a078a;
case 0x5a078c:c.instructions+=1;goto B5a078c;
case 0x5a078e:goto L5a078e;
case 0x5a0791:c.instructions+=1;goto B5a0791;
case 0x5a0793:goto L5a0793;
case 0x5a0795:goto L5a0795;
case 0x5a0797:c.instructions+=1;goto B5a0797;
case 0x5a0799:goto L5a0799;
case 0x5a079c:c.instructions+=1;goto B5a079c;
case 0x5a079e:goto L5a079e;
case 0x5a07a0:goto L5a07a0;
case 0x5a07a2:c.instructions+=1;goto B5a07a2;
case 0x5a07a4:goto L5a07a4;
case 0x5a07a7:c.instructions+=1;goto B5a07a7;
case 0x5a07a9:goto L5a07a9;
case 0x5a07ab:goto L5a07ab;
case 0x5a07ae:c.instructions+=4;goto B5a07ae;
case 0x5a07b1:c.instructions+=3;goto B5a07b1;
case 0x5a07b3:c.instructions+=2;goto B5a07b3;
case 0x5a07b6:c.instructions+=1;goto B5a07b6;
case 0x5a07b8:goto L5a07b8;
case 0x5a07bb:c.instructions+=4;goto B5a07bb;
case 0x5a07be:c.instructions+=3;goto B5a07be;
case 0x5a07c0:c.instructions+=2;goto B5a07c0;
case 0x5a07c3:c.instructions+=1;goto B5a07c3;
case 0x5a07c5:goto L5a07c5;
case 0x5a07c9:c.instructions+=8;goto B5a07c9;
case 0x5a07cd:c.instructions+=7;goto B5a07cd;
case 0x5a07cf:c.instructions+=6;goto B5a07cf;
case 0x5a07d3:c.instructions+=5;goto B5a07d3;
case 0x5a07d6:c.instructions+=4;goto B5a07d6;
case 0x5a07d8:c.instructions+=3;goto B5a07d8;
case 0x5a07da:c.instructions+=2;goto B5a07da;
case 0x5a07de:c.instructions+=1;goto B5a07de;
case 0x5a07e0:goto L5a07e0;
case 0x5a07e2:c.instructions+=5;goto B5a07e2;
case 0x5a07e4:c.instructions+=4;goto B5a07e4;
case 0x5a07e7:c.instructions+=3;goto B5a07e7;
case 0x5a07e9:c.instructions+=2;goto B5a07e9;
case 0x5a07ec:c.instructions+=1;goto B5a07ec;
case 0x5a07ee:goto L5a07ee;
case 0x5a07f1:c.instructions+=6;goto B5a07f1;
case 0x5a07f4:c.instructions+=5;goto B5a07f4;
case 0x5a07f6:c.instructions+=4;goto B5a07f6;
case 0x5a07f9:c.instructions+=3;goto B5a07f9;
case 0x5a07fc:c.instructions+=2;goto B5a07fc;
case 0x5a07fe:c.instructions+=1;goto B5a07fe;
case 0x5a0803:goto L5a0803;
case 0x5a0805:c.instructions+=6;goto B5a0805;
case 0x5a0807:c.instructions+=5;goto B5a0807;
case 0x5a0809:c.instructions+=4;goto B5a0809;
case 0x5a080c:c.instructions+=3;goto B5a080c;
case 0x5a080f:c.instructions+=2;goto B5a080f;
case 0x5a0811:c.instructions+=1;goto B5a0811;
case 0x5a0816:goto L5a0816;
case 0x5a0817:goto L5a0817;
case 0x5a0818:c.instructions+=3;goto B5a0818;
case 0x5a0819:c.instructions+=2;goto B5a0819;
case 0x5a081a:c.instructions+=1;goto B5a081a;
case 0x5a0820:goto L5a0820;
case 0x5a0821:c.instructions+=8;goto B5a0821;
case 0x5a0822:c.instructions+=7;goto B5a0822;
case 0x5a0826:c.instructions+=6;goto B5a0826;
case 0x5a0827:c.instructions+=5;goto B5a0827;
case 0x5a0828:c.instructions+=4;goto B5a0828;
case 0x5a082a:c.instructions+=3;goto B5a082a;
case 0x5a082e:c.instructions+=2;goto B5a082e;
case 0x5a0830:c.instructions+=1;goto B5a0830;
case 0x5a0832:goto L5a0832;
case 0x5a0837:c.instructions+=3;goto B5a0837;
case 0x5a0839:c.instructions+=2;goto B5a0839;
case 0x5a083b:c.instructions+=1;goto B5a083b;
case 0x5a083d:goto L5a083d;
case 0x5a0843:c.instructions+=1;goto B5a0843;
case 0x5a0845:goto L5a0845;
case 0x5a0847:goto L5a0847;
case 0x5a084c:c.instructions+=1;goto B5a084c;
case 0x5a0851:goto L5a0851;
case 0x5a0853:c.instructions+=1;goto B5a0853;
case 0x5a0855:goto L5a0855;
case 0x5a085b:c.instructions+=2;goto B5a085b;
case 0x5a085d:c.instructions+=1;goto B5a085d;
case 0x5a085f:goto L5a085f;
case 0x5a0865:c.instructions+=1;goto B5a0865;
case 0x5a0867:goto L5a0867;
case 0x5a086d:c.instructions+=1;goto B5a086d;
case 0x5a086f:goto L5a086f;
case 0x5a0871:c.instructions+=1;goto B5a0871;
case 0x5a0873:goto L5a0873;
case 0x5a0874:goto L5a0874;
case 0x5a087a:c.instructions+=2;goto B5a087a;
case 0x5a087c:c.instructions+=1;goto B5a087c;
case 0x5a087e:goto L5a087e;
case 0x5a0884:c.instructions+=1;goto B5a0884;
case 0x5a0886:goto L5a0886;
case 0x5a0888:goto L5a0888;
case 0x5a088a:c.instructions+=1;goto B5a088a;
case 0x5a088c:goto L5a088c;
case 0x5a088d:c.instructions+=5;goto B5a088d;
case 0x5a088e:c.instructions+=4;goto B5a088e;
case 0x5a088f:c.instructions+=3;goto B5a088f;
case 0x5a0891:c.instructions+=2;goto B5a0891;
case 0x5a0892:c.instructions+=1;goto B5a0892;
case 0x5a0895:goto L5a0895;
case 0x5a089b:c.instructions+=5;goto B5a089b;
case 0x5a089c:c.instructions+=4;goto B5a089c;
case 0x5a089d:c.instructions+=3;goto B5a089d;
case 0x5a089e:c.instructions+=2;goto B5a089e;
case 0x5a089f:c.instructions+=1;goto B5a089f;
case 0x5a08b0:goto L5a08b0;
case 0x5a08b1:c.instructions+=13;goto B5a08b1;
case 0x5a08b3:c.instructions+=12;goto B5a08b3;
case 0x5a08b6:c.instructions+=11;goto B5a08b6;
case 0x5a08b9:c.instructions+=10;goto B5a08b9;
case 0x5a08ba:c.instructions+=9;goto B5a08ba;
case 0x5a08bb:c.instructions+=8;goto B5a08bb;
case 0x5a08bc:c.instructions+=7;goto B5a08bc;
case 0x5a08be:c.instructions+=6;goto B5a08be;
case 0x5a08c2:c.instructions+=5;goto B5a08c2;
case 0x5a08c4:c.instructions+=4;goto B5a08c4;
case 0x5a08c6:c.instructions+=3;goto B5a08c6;
case 0x5a08ce:c.instructions+=2;goto B5a08ce;
case 0x5a08d2:c.instructions+=1;goto B5a08d2;
case 0x5a08d8:goto L5a08d8;
case 0x5a08d9:c.instructions+=2;goto B5a08d9;
case 0x5a08db:c.instructions+=1;goto B5a08db;
case 0x5a08e0:goto L5a08e0;
case 0x5a08e2:c.instructions+=4;goto B5a08e2;
case 0x5a08e5:c.instructions+=3;goto B5a08e5;
case 0x5a08eb:c.instructions+=2;goto B5a08eb;
case 0x5a08ef:c.instructions+=1;goto B5a08ef;
case 0x5a08f1:goto L5a08f1;
case 0x5a08f4:c.instructions+=6;goto B5a08f4;
case 0x5a08f7:c.instructions+=5;goto B5a08f7;
case 0x5a08f9:c.instructions+=4;goto B5a08f9;
case 0x5a08ff:c.instructions+=3;goto B5a08ff;
case 0x5a0901:c.instructions+=2;goto B5a0901;
case 0x5a0904:c.instructions+=1;goto B5a0904;
case 0x5a0906:goto L5a0906;
case 0x5a090c:c.instructions+=2;goto B5a090c;
case 0x5a0910:c.instructions+=1;goto B5a0910;
case 0x5a0912:goto L5a0912;
case 0x5a0915:c.instructions+=6;goto B5a0915;
case 0x5a0918:c.instructions+=5;goto B5a0918;
case 0x5a091a:c.instructions+=4;goto B5a091a;
case 0x5a0920:c.instructions+=3;goto B5a0920;
case 0x5a0922:c.instructions+=2;goto B5a0922;
case 0x5a0925:c.instructions+=1;goto B5a0925;
case 0x5a0927:goto L5a0927;
case 0x5a0929:c.instructions+=2;goto B5a0929;
case 0x5a092b:c.instructions+=1;goto B5a092b;
case 0x5a092e:goto L5a092e;
case 0x5a0931:c.instructions+=14;goto B5a0931;
case 0x5a0934:c.instructions+=13;goto B5a0934;
case 0x5a0937:c.instructions+=12;goto B5a0937;
case 0x5a093b:c.instructions+=11;goto B5a093b;
case 0x5a093e:c.instructions+=10;goto B5a093e;
case 0x5a0940:c.instructions+=9;goto B5a0940;
case 0x5a0944:c.instructions+=8;goto B5a0944;
case 0x5a0947:c.instructions+=7;goto B5a0947;
case 0x5a0948:c.instructions+=6;goto B5a0948;
case 0x5a0949:c.instructions+=5;goto B5a0949;
case 0x5a094d:c.instructions+=4;goto B5a094d;
case 0x5a094f:c.instructions+=3;goto B5a094f;
case 0x5a0953:c.instructions+=2;goto B5a0953;
case 0x5a0957:c.instructions+=1;goto B5a0957;
case 0x5a095c:goto L5a095c;
case 0x5a0960:c.instructions+=5;goto B5a0960;
case 0x5a0963:c.instructions+=4;goto B5a0963;
case 0x5a0967:c.instructions+=3;goto B5a0967;
case 0x5a0969:c.instructions+=2;goto B5a0969;
case 0x5a096c:c.instructions+=1;goto B5a096c;
case 0x5a096e:goto L5a096e;
case 0x5a0972:c.instructions+=1;goto B5a0972;
case 0x5a0976:goto L5a0976;
case 0x5a097a:c.instructions+=3;goto B5a097a;
case 0x5a097b:c.instructions+=2;goto B5a097b;
case 0x5a097d:c.instructions+=1;goto B5a097d;
case 0x5a0983:goto L5a0983;
case 0x5a0987:c.instructions+=6;goto B5a0987;
case 0x5a0988:c.instructions+=5;goto B5a0988;
case 0x5a0989:c.instructions+=4;goto B5a0989;
case 0x5a098a:c.instructions+=3;goto B5a098a;
case 0x5a098c:c.instructions+=2;goto B5a098c;
case 0x5a098d:c.instructions+=1;goto B5a098d;
case 0x5a0990:goto L5a0990;
case 0x5a0991:c.instructions+=4;goto B5a0991;
case 0x5a0993:c.instructions+=3;goto B5a0993;
case 0x5a0996:c.instructions+=2;goto B5a0996;
case 0x5a0998:c.instructions+=1;goto B5a0998;
case 0x5a099a:goto L5a099a;
case 0x5a099e:c.instructions+=9;goto B5a099e;
case 0x5a09a2:c.instructions+=8;goto B5a09a2;
case 0x5a09a6:c.instructions+=7;goto B5a09a6;
case 0x5a09a7:c.instructions+=6;goto B5a09a7;
case 0x5a09ab:c.instructions+=5;goto B5a09ab;
case 0x5a09ac:c.instructions+=4;goto B5a09ac;
case 0x5a09af:c.instructions+=3;goto B5a09af;
case 0x5a09b0:c.instructions+=2;goto B5a09b0;
case 0x5a09b1:c.instructions+=1;goto B5a09b1;
case 0x5a09b6:goto L5a09b6;
case 0x5a09b7:c.instructions+=1;goto B5a09b7;
case 0x5a09ba:goto L5a09ba;
case 0x5a09bc:c.instructions+=2;goto B5a09bc;
case 0x5a09be:c.instructions+=1;goto B5a09be;
case 0x5a09c1:goto L5a09c1;
case 0x5a09c4:c.instructions+=10;goto B5a09c4;
case 0x5a09c7:c.instructions+=9;goto B5a09c7;
case 0x5a09c9:c.instructions+=8;goto B5a09c9;
case 0x5a09cd:c.instructions+=7;goto B5a09cd;
case 0x5a09cf:c.instructions+=6;goto B5a09cf;
case 0x5a09d2:c.instructions+=5;goto B5a09d2;
case 0x5a09d4:c.instructions+=4;goto B5a09d4;
case 0x5a09d6:c.instructions+=3;goto B5a09d6;
case 0x5a09d9:c.instructions+=2;goto B5a09d9;
case 0x5a09db:c.instructions+=1;goto B5a09db;
case 0x5a09de:goto L5a09de;
case 0x5a09e1:c.instructions+=9;goto B5a09e1;
case 0x5a09e4:c.instructions+=8;goto B5a09e4;
case 0x5a09e6:c.instructions+=7;goto B5a09e6;
case 0x5a09ea:c.instructions+=6;goto B5a09ea;
case 0x5a09ec:c.instructions+=5;goto B5a09ec;
case 0x5a09ef:c.instructions+=4;goto B5a09ef;
case 0x5a09f1:c.instructions+=3;goto B5a09f1;
case 0x5a09f2:c.instructions+=2;goto B5a09f2;
case 0x5a09f5:c.instructions+=1;goto B5a09f5;
case 0x5a0a00:goto L5a0a00;
case 0x5a0a01:c.instructions+=26;goto B5a0a01;
case 0x5a0a04:c.instructions+=25;goto B5a0a04;
case 0x5a0a07:c.instructions+=24;goto B5a0a07;
case 0x5a0a0b:c.instructions+=23;goto B5a0a0b;
case 0x5a0a11:c.instructions+=22;goto B5a0a11;
case 0x5a0a15:c.instructions+=21;goto B5a0a15;
case 0x5a0a18:c.instructions+=20;goto B5a0a18;
case 0x5a0a19:c.instructions+=19;goto B5a0a19;
case 0x5a0a1f:c.instructions+=18;goto B5a0a1f;
case 0x5a0a20:c.instructions+=17;goto B5a0a20;
case 0x5a0a22:c.instructions+=16;goto B5a0a22;
case 0x5a0a25:c.instructions+=15;goto B5a0a25;
case 0x5a0a2b:c.instructions+=14;goto B5a0a2b;
case 0x5a0a2d:c.instructions+=13;goto B5a0a2d;
case 0x5a0a33:c.instructions+=12;goto B5a0a33;
case 0x5a0a39:c.instructions+=11;goto B5a0a39;
case 0x5a0a3f:c.instructions+=10;goto B5a0a3f;
case 0x5a0a45:c.instructions+=9;goto B5a0a45;
case 0x5a0a4b:c.instructions+=8;goto B5a0a4b;
case 0x5a0a4d:c.instructions+=7;goto B5a0a4d;
case 0x5a0a53:c.instructions+=6;goto B5a0a53;
case 0x5a0a59:c.instructions+=5;goto B5a0a59;
case 0x5a0a5b:c.instructions+=4;goto B5a0a5b;
case 0x5a0a61:c.instructions+=3;goto B5a0a61;
case 0x5a0a63:c.instructions+=2;goto B5a0a63;
case 0x5a0a67:c.instructions+=1;goto B5a0a67;
case 0x5a0a6c:goto L5a0a6c;
case 0x5a0a70:c.instructions+=2;goto B5a0a70;
case 0x5a0a71:c.instructions+=1;goto B5a0a71;
case 0x5a0a80:goto L5a0a80;
case 0x5a0a86:c.instructions+=5;goto B5a0a86;
case 0x5a0a89:c.instructions+=4;goto B5a0a89;
case 0x5a0a8a:c.instructions+=3;goto B5a0a8a;
case 0x5a0a8d:c.instructions+=2;goto B5a0a8d;
case 0x5a0a91:c.instructions+=1;goto B5a0a91;
case 0x5a0a93:goto L5a0a93;
case 0x5a0a99:c.instructions+=2;goto B5a0a99;
case 0x5a0a9b:c.instructions+=1;goto B5a0a9b;
case 0x5a0a9d:goto L5a0a9d;
case 0x5a0aa1:c.instructions+=2;goto B5a0aa1;
case 0x5a0aa3:c.instructions+=1;goto B5a0aa3;
case 0x5a0aa5:goto L5a0aa5;
case 0x5a0aac:c.instructions+=1;goto B5a0aac;
case 0x5a0aae:goto L5a0aae;
case 0x5a0ab2:c.instructions+=2;goto B5a0ab2;
case 0x5a0ab4:c.instructions+=1;goto B5a0ab4;
case 0x5a0ab6:goto L5a0ab6;
case 0x5a0ab9:c.instructions+=1;goto B5a0ab9;
case 0x5a0abb:goto L5a0abb;
case 0x5a0abd:c.instructions+=2;goto B5a0abd;
case 0x5a0abe:c.instructions+=1;goto B5a0abe;
case 0x5a0ac1:goto L5a0ac1;
case 0x5a0ac7:c.instructions+=2;goto B5a0ac7;
case 0x5a0ace:c.instructions+=1;goto B5a0ace;
case 0x5a0ad0:goto L5a0ad0;
case 0x5a0ad3:c.instructions+=2;goto B5a0ad3;
case 0x5a0ad7:c.instructions+=1;goto B5a0ad7;
case 0x5a0ad9:goto L5a0ad9;
case 0x5a0adb:goto L5a0adb;
case 0x5a0adc:c.instructions+=1;goto B5a0adc;
case 0x5a0ae0:goto L5a0ae0;
case 0x5a0ae6:c.instructions+=3;goto B5a0ae6;
case 0x5a0aec:c.instructions+=2;goto B5a0aec;
case 0x5a0aee:c.instructions+=1;goto B5a0aee;
case 0x5a0af0:goto L5a0af0;
case 0x5a0af5:goto L5a0af5;
case 0x5a0afb:c.instructions+=1;goto B5a0afb;
case 0x5a0b00:goto L5a0b00;
case 0x5a0b01:c.instructions+=18;goto B5a0b01;
case 0x5a0b03:c.instructions+=17;goto B5a0b03;
case 0x5a0b06:c.instructions+=16;goto B5a0b06;
case 0x5a0b09:c.instructions+=15;goto B5a0b09;
case 0x5a0b0f:c.instructions+=14;goto B5a0b0f;
case 0x5a0b10:c.instructions+=13;goto B5a0b10;
case 0x5a0b16:c.instructions+=12;goto B5a0b16;
case 0x5a0b17:c.instructions+=11;goto B5a0b17;
case 0x5a0b1d:c.instructions+=10;goto B5a0b1d;
case 0x5a0b1f:c.instructions+=9;goto B5a0b1f;
case 0x5a0b22:c.instructions+=8;goto B5a0b22;
case 0x5a0b23:c.instructions+=7;goto B5a0b23;
case 0x5a0b27:c.instructions+=6;goto B5a0b27;
case 0x5a0b2d:c.instructions+=5;goto B5a0b2d;
case 0x5a0b31:c.instructions+=4;goto B5a0b31;
case 0x5a0b35:c.instructions+=3;goto B5a0b35;
case 0x5a0b37:c.instructions+=2;goto B5a0b37;
case 0x5a0b3a:c.instructions+=1;goto B5a0b3a;
case 0x5a0b3c:goto L5a0b3c;
case 0x5a0b3e:c.instructions+=2;goto B5a0b3e;
case 0x5a0b42:c.instructions+=1;goto B5a0b42;
case 0x5a0b46:goto L5a0b46;
case 0x5a0b49:c.instructions+=24;goto B5a0b49;
case 0x5a0b4b:c.instructions+=23;goto B5a0b4b;
case 0x5a0b4d:c.instructions+=22;goto B5a0b4d;
case 0x5a0b51:c.instructions+=21;goto B5a0b51;
case 0x5a0b54:c.instructions+=20;goto B5a0b54;
case 0x5a0b56:c.instructions+=19;goto B5a0b56;
case 0x5a0b5a:c.instructions+=18;goto B5a0b5a;
case 0x5a0b5d:c.instructions+=17;goto B5a0b5d;
case 0x5a0b63:c.instructions+=16;goto B5a0b63;
case 0x5a0b65:c.instructions+=15;goto B5a0b65;
case 0x5a0b69:c.instructions+=14;goto B5a0b69;
case 0x5a0b6c:c.instructions+=13;goto B5a0b6c;
case 0x5a0b6f:c.instructions+=12;goto B5a0b6f;
case 0x5a0b71:c.instructions+=11;goto B5a0b71;
case 0x5a0b75:c.instructions+=10;goto B5a0b75;
case 0x5a0b79:c.instructions+=9;goto B5a0b79;
case 0x5a0b7d:c.instructions+=8;goto B5a0b7d;
case 0x5a0b81:c.instructions+=7;goto B5a0b81;
case 0x5a0b83:c.instructions+=6;goto B5a0b83;
case 0x5a0b87:c.instructions+=5;goto B5a0b87;
case 0x5a0b8b:c.instructions+=4;goto B5a0b8b;
case 0x5a0b8d:c.instructions+=3;goto B5a0b8d;
case 0x5a0b8f:c.instructions+=2;goto B5a0b8f;
case 0x5a0b93:c.instructions+=1;goto B5a0b93;
case 0x5a0b95:goto L5a0b95;
case 0x5a0b9d:c.instructions+=1;goto B5a0b9d;
case 0x5a0b9f:goto L5a0b9f;
case 0x5a0ba5:c.instructions+=1;goto B5a0ba5;
case 0x5a0ba9:goto L5a0ba9;
case 0x5a0bad:c.instructions+=6;goto B5a0bad;
case 0x5a0bb0:c.instructions+=5;goto B5a0bb0;
case 0x5a0bb1:c.instructions+=4;goto B5a0bb1;
case 0x5a0bb2:c.instructions+=3;goto B5a0bb2;
case 0x5a0bb6:c.instructions+=2;goto B5a0bb6;
case 0x5a0bb7:c.instructions+=1;goto B5a0bb7;
case 0x5a0bbc:goto L5a0bbc;
case 0x5a0bc0:c.instructions+=4;goto B5a0bc0;
case 0x5a0bc1:c.instructions+=3;goto B5a0bc1;
case 0x5a0bc2:c.instructions+=2;goto B5a0bc2;
case 0x5a0bc4:c.instructions+=1;goto B5a0bc4;
case 0x5a0bc9:goto L5a0bc9;
case 0x5a0bca:c.instructions+=4;goto B5a0bca;
case 0x5a0bce:c.instructions+=3;goto B5a0bce;
case 0x5a0bcf:c.instructions+=2;goto B5a0bcf;
case 0x5a0bd1:c.instructions+=1;goto B5a0bd1;
case 0x5a0bd6:goto L5a0bd6;
case 0x5a0bd7:c.instructions+=5;goto B5a0bd7;
case 0x5a0bd8:c.instructions+=4;goto B5a0bd8;
case 0x5a0bd9:c.instructions+=3;goto B5a0bd9;
case 0x5a0bdb:c.instructions+=2;goto B5a0bdb;
case 0x5a0bdc:c.instructions+=1;goto B5a0bdc;
case 0x5a0be0:goto L5a0be0;
case 0x5a0be4:c.instructions+=3;goto B5a0be4;
case 0x5a0bea:c.instructions+=2;goto B5a0bea;
case 0x5a0bec:c.instructions+=1;goto B5a0bec;
case 0x5a0bf2:goto L5a0bf2;
case 0x5a0bf6:c.instructions+=1;goto B5a0bf6;
case 0x5a0bfc:goto L5a0bfc;
case 0x5a0bff:c.instructions+=6;goto B5a0bff;
case 0x5a0c02:c.instructions+=5;goto B5a0c02;
case 0x5a0c04:c.instructions+=4;goto B5a0c04;
case 0x5a0c0a:c.instructions+=3;goto B5a0c0a;
case 0x5a0c0c:c.instructions+=2;goto B5a0c0c;
case 0x5a0c0f:c.instructions+=1;goto B5a0c0f;
case 0x5a0c11:goto L5a0c11;
case 0x5a0c17:c.instructions+=17;goto B5a0c17;
case 0x5a0c19:c.instructions+=16;goto B5a0c19;
case 0x5a0c1f:c.instructions+=15;goto B5a0c1f;
case 0x5a0c21:c.instructions+=14;goto B5a0c21;
case 0x5a0c26:c.instructions+=13;goto B5a0c26;
case 0x5a0c28:c.instructions+=12;goto B5a0c28;
case 0x5a0c2c:c.instructions+=11;goto B5a0c2c;
case 0x5a0c30:c.instructions+=10;goto B5a0c30;
case 0x5a0c36:c.instructions+=9;goto B5a0c36;
case 0x5a0c3b:c.instructions+=8;goto B5a0c3b;
case 0x5a0c3d:c.instructions+=7;goto B5a0c3d;
case 0x5a0c43:c.instructions+=6;goto B5a0c43;
case 0x5a0c47:c.instructions+=5;goto B5a0c47;
case 0x5a0c4b:c.instructions+=4;goto B5a0c4b;
case 0x5a0c51:c.instructions+=3;goto B5a0c51;
case 0x5a0c53:c.instructions+=2;goto B5a0c53;
case 0x5a0c59:c.instructions+=1;goto B5a0c59;
case 0x5a0c5b:goto L5a0c5b;
case 0x5a0c61:c.instructions+=3;goto B5a0c61;
case 0x5a0c63:c.instructions+=2;goto B5a0c63;
case 0x5a0c66:c.instructions+=1;goto B5a0c66;
case 0x5a0c68:goto L5a0c68;
case 0x5a0c6a:c.instructions+=1;goto B5a0c6a;
case 0x5a0c70:goto L5a0c70;
case 0x5a0c76:c.instructions+=5;goto B5a0c76;
case 0x5a0c7c:c.instructions+=4;goto B5a0c7c;
case 0x5a0c7e:c.instructions+=3;goto B5a0c7e;
case 0x5a0c80:c.instructions+=2;goto B5a0c80;
case 0x5a0c83:c.instructions+=1;goto B5a0c83;
case 0x5a0c85:goto L5a0c85;
case 0x5a0c87:c.instructions+=1;goto B5a0c87;
case 0x5a0c8d:goto L5a0c8d;
case 0x5a0c90:goto L5a0c90;
case 0x5a0c94:c.instructions+=3;goto B5a0c94;
case 0x5a0c9a:c.instructions+=2;goto B5a0c9a;
case 0x5a0c9c:c.instructions+=1;goto B5a0c9c;
case 0x5a0c9e:goto L5a0c9e;
case 0x5a0ca2:c.instructions+=1;goto B5a0ca2;
case 0x5a0ca4:goto L5a0ca4;
case 0x5a0ca7:c.instructions+=6;goto B5a0ca7;
case 0x5a0caa:c.instructions+=5;goto B5a0caa;
case 0x5a0cac:c.instructions+=4;goto B5a0cac;
case 0x5a0cb2:c.instructions+=3;goto B5a0cb2;
case 0x5a0cb4:c.instructions+=2;goto B5a0cb4;
case 0x5a0cb7:c.instructions+=1;goto B5a0cb7;
case 0x5a0cb9:goto L5a0cb9;
case 0x5a0cbb:c.instructions+=2;goto B5a0cbb;
case 0x5a0cc1:c.instructions+=1;goto B5a0cc1;
case 0x5a0cc7:goto L5a0cc7;
case 0x5a0cd0:goto L5a0cd0;
case 0x5a0cd1:c.instructions+=4;goto B5a0cd1;
case 0x5a0cd2:c.instructions+=3;goto B5a0cd2;
case 0x5a0cd8:c.instructions+=2;goto B5a0cd8;
case 0x5a0cdd:c.instructions+=1;goto B5a0cdd;
case 0x5a0ce2:goto L5a0ce2;
case 0x5a0ce4:c.instructions+=2;goto B5a0ce4;
case 0x5a0ce6:c.instructions+=1;goto B5a0ce6;
case 0x5a0ce8:goto L5a0ce8;
case 0x5a0ce9:c.instructions+=1;goto B5a0ce9;
case 0x5a0cf0:goto L5a0cf0;
case 0x5a0cf3:c.instructions+=4;goto B5a0cf3;
case 0x5a0cf6:c.instructions+=3;goto B5a0cf6;
case 0x5a0cf8:c.instructions+=2;goto B5a0cf8;
case 0x5a0cfa:c.instructions+=1;goto B5a0cfa;
case 0x5a0cfc:goto L5a0cfc;
case 0x5a0cfe:c.instructions+=2;goto B5a0cfe;
case 0x5a0d00:c.instructions+=1;goto B5a0d00;
case 0x5a0d02:goto L5a0d02;
case 0x5a0d04:c.instructions+=2;goto B5a0d04;
case 0x5a0d06:c.instructions+=1;goto B5a0d06;
case 0x5a0d08:goto L5a0d08;
case 0x5a0d09:goto L5a0d09;
case 0x5a0d0a:c.instructions+=2;goto B5a0d0a;
case 0x5a0d0b:c.instructions+=1;goto B5a0d0b;
case 0x5a0d10:goto L5a0d10;
case 0x5a0d16:c.instructions+=1;goto B5a0d16;
case 0x5a0d20:goto L5a0d20;
case 0x5a0d23:c.instructions+=8;goto B5a0d23;
case 0x5a0d24:c.instructions+=7;goto B5a0d24;
case 0x5a0d25:c.instructions+=6;goto B5a0d25;
case 0x5a0d26:c.instructions+=5;goto B5a0d26;
case 0x5a0d29:c.instructions+=4;goto B5a0d29;
case 0x5a0d2a:c.instructions+=3;goto B5a0d2a;
case 0x5a0d2c:c.instructions+=2;goto B5a0d2c;
case 0x5a0d2e:c.instructions+=1;goto B5a0d2e;
case 0x5a0d30:goto L5a0d30;
case 0x5a0d33:c.instructions+=1;goto B5a0d33;
case 0x5a0d35:goto L5a0d35;
case 0x5a0d37:goto L5a0d37;
case 0x5a0d3b:c.instructions+=1;goto B5a0d3b;
case 0x5a0d40:goto L5a0d40;
case 0x5a0d42:c.instructions+=1;goto B5a0d42;
case 0x5a0d44:goto L5a0d44;
case 0x5a0d47:c.instructions+=1;goto B5a0d47;
case 0x5a0d49:goto L5a0d49;
case 0x5a0d4b:goto L5a0d4b;
case 0x5a0d4d:c.instructions+=1;goto B5a0d4d;
case 0x5a0d4f:goto L5a0d4f;
case 0x5a0d51:c.instructions+=4;goto B5a0d51;
case 0x5a0d55:c.instructions+=3;goto B5a0d55;
case 0x5a0d56:c.instructions+=2;goto B5a0d56;
case 0x5a0d58:c.instructions+=1;goto B5a0d58;
case 0x5a0d5b:goto L5a0d5b;
case 0x5a0d5d:c.instructions+=2;goto B5a0d5d;
case 0x5a0d5f:c.instructions+=1;goto B5a0d5f;
case 0x5a0d62:goto L5a0d62;
case 0x5a0d65:c.instructions+=3;goto B5a0d65;
case 0x5a0d67:c.instructions+=2;goto B5a0d67;
case 0x5a0d69:c.instructions+=1;goto B5a0d69;
case 0x5a0d6b:goto L5a0d6b;
case 0x5a0d6e:c.instructions+=1;goto B5a0d6e;
case 0x5a0d70:goto L5a0d70;
case 0x5a0d72:c.instructions+=1;goto B5a0d72;
case 0x5a0d74:goto L5a0d74;
case 0x5a0d75:c.instructions+=4;goto B5a0d75;
case 0x5a0d76:c.instructions+=3;goto B5a0d76;
case 0x5a0d77:c.instructions+=2;goto B5a0d77;
case 0x5a0d78:c.instructions+=1;goto B5a0d78;
case 0x5a0d80:goto L5a0d80;
case 0x5a0d83:c.instructions+=5;goto B5a0d83;
case 0x5a0d85:c.instructions+=4;goto B5a0d85;
case 0x5a0d86:c.instructions+=3;goto B5a0d86;
case 0x5a0d87:c.instructions+=2;goto B5a0d87;
case 0x5a0d8a:c.instructions+=1;goto B5a0d8a;
case 0x5a0d8c:goto L5a0d8c;
case 0x5a0d8f:c.instructions+=1;goto B5a0d8f;
case 0x5a0d91:goto L5a0d91;
case 0x5a0d93:goto L5a0d93;
case 0x5a0d95:c.instructions+=1;goto B5a0d95;
case 0x5a0d97:goto L5a0d97;
case 0x5a0d9a:c.instructions+=1;goto B5a0d9a;
case 0x5a0d9c:goto L5a0d9c;
case 0x5a0d9e:goto L5a0d9e;
case 0x5a0da0:c.instructions+=1;goto B5a0da0;
case 0x5a0da2:goto L5a0da2;
case 0x5a0da4:c.instructions+=2;goto B5a0da4;
case 0x5a0da6:c.instructions+=1;goto B5a0da6;
case 0x5a0da9:goto L5a0da9;
case 0x5a0dac:c.instructions+=2;goto B5a0dac;
case 0x5a0dae:c.instructions+=1;goto B5a0dae;
case 0x5a0db0:goto L5a0db0;
case 0x5a0db3:c.instructions+=1;goto B5a0db3;
case 0x5a0db5:goto L5a0db5;
case 0x5a0db6:c.instructions+=2;goto B5a0db6;
case 0x5a0db7:c.instructions+=1;goto B5a0db7;
case 0x5a0dc0:goto L5a0dc0;
case 0x5a0dc1:c.instructions+=11;goto B5a0dc1;
case 0x5a0dc3:c.instructions+=10;goto B5a0dc3;
case 0x5a0dc6:c.instructions+=9;goto B5a0dc6;
case 0x5a0dc9:c.instructions+=8;goto B5a0dc9;
case 0x5a0dca:c.instructions+=7;goto B5a0dca;
case 0x5a0dcc:c.instructions+=6;goto B5a0dcc;
case 0x5a0dcf:c.instructions+=5;goto B5a0dcf;
case 0x5a0dd2:c.instructions+=4;goto B5a0dd2;
case 0x5a0dd4:c.instructions+=3;goto B5a0dd4;
case 0x5a0dd6:c.instructions+=2;goto B5a0dd6;
case 0x5a0dd9:c.instructions+=1;goto B5a0dd9;
case 0x5a0ddb:goto L5a0ddb;
case 0x5a0dde:c.instructions+=2;goto B5a0dde;
case 0x5a0de0:c.instructions+=1;goto B5a0de0;
case 0x5a0de6:goto L5a0de6;
case 0x5a0de8:c.instructions+=6;goto B5a0de8;
case 0x5a0de9:c.instructions+=5;goto B5a0de9;
case 0x5a0dea:c.instructions+=4;goto B5a0dea;
case 0x5a0dee:c.instructions+=3;goto B5a0dee;
case 0x5a0def:c.instructions+=2;goto B5a0def;
case 0x5a0df1:c.instructions+=1;goto B5a0df1;
case 0x5a0df6:goto L5a0df6;
case 0x5a0df9:c.instructions+=4;goto B5a0df9;
case 0x5a0dff:c.instructions+=3;goto B5a0dff;
case 0x5a0e02:c.instructions+=2;goto B5a0e02;
case 0x5a0e04:c.instructions+=1;goto B5a0e04;
case 0x5a0e07:goto L5a0e07;
case 0x5a0e0b:c.instructions+=11;goto B5a0e0b;
case 0x5a0e0e:c.instructions+=10;goto B5a0e0e;
case 0x5a0e12:c.instructions+=9;goto B5a0e12;
case 0x5a0e15:c.instructions+=8;goto B5a0e15;
case 0x5a0e17:c.instructions+=7;goto B5a0e17;
case 0x5a0e1b:c.instructions+=6;goto B5a0e1b;
case 0x5a0e1d:c.instructions+=5;goto B5a0e1d;
case 0x5a0e1f:c.instructions+=4;goto B5a0e1f;
case 0x5a0e20:c.instructions+=3;goto B5a0e20;
case 0x5a0e22:c.instructions+=2;goto B5a0e22;
case 0x5a0e23:c.instructions+=1;goto B5a0e23;
case 0x5a0e26:goto L5a0e26;
case 0x5a0e29:c.instructions+=1;goto B5a0e29;
case 0x5a0e2b:goto L5a0e2b;
case 0x5a0e2e:c.instructions+=2;goto B5a0e2e;
case 0x5a0e30:c.instructions+=1;goto B5a0e30;
case 0x5a0e32:goto L5a0e32;
case 0x5a0e34:c.instructions+=6;goto B5a0e34;
case 0x5a0e35:c.instructions+=5;goto B5a0e35;
case 0x5a0e36:c.instructions+=4;goto B5a0e36;
case 0x5a0e3a:c.instructions+=3;goto B5a0e3a;
case 0x5a0e3b:c.instructions+=2;goto B5a0e3b;
case 0x5a0e3d:c.instructions+=1;goto B5a0e3d;
case 0x5a0e42:goto L5a0e42;
case 0x5a0e46:c.instructions+=16;goto B5a0e46;
case 0x5a0e49:c.instructions+=15;goto B5a0e49;
case 0x5a0e4b:c.instructions+=14;goto B5a0e4b;
case 0x5a0e4f:c.instructions+=13;goto B5a0e4f;
case 0x5a0e55:c.instructions+=12;goto B5a0e55;
case 0x5a0e57:c.instructions+=11;goto B5a0e57;
case 0x5a0e5b:c.instructions+=10;goto B5a0e5b;
case 0x5a0e5d:c.instructions+=9;goto B5a0e5d;
case 0x5a0e61:c.instructions+=8;goto B5a0e61;
case 0x5a0e65:c.instructions+=7;goto B5a0e65;
case 0x5a0e67:c.instructions+=6;goto B5a0e67;
case 0x5a0e6b:c.instructions+=5;goto B5a0e6b;
case 0x5a0e6e:c.instructions+=4;goto B5a0e6e;
case 0x5a0e72:c.instructions+=3;goto B5a0e72;
case 0x5a0e74:c.instructions+=2;goto B5a0e74;
case 0x5a0e78:c.instructions+=1;goto B5a0e78;
case 0x5a0e7b:goto L5a0e7b;
case 0x5a0e7f:c.instructions+=11;goto B5a0e7f;
case 0x5a0e82:c.instructions+=10;goto B5a0e82;
case 0x5a0e86:c.instructions+=9;goto B5a0e86;
case 0x5a0e89:c.instructions+=8;goto B5a0e89;
case 0x5a0e8b:c.instructions+=7;goto B5a0e8b;
case 0x5a0e8f:c.instructions+=6;goto B5a0e8f;
case 0x5a0e91:c.instructions+=5;goto B5a0e91;
case 0x5a0e93:c.instructions+=4;goto B5a0e93;
case 0x5a0e94:c.instructions+=3;goto B5a0e94;
case 0x5a0e96:c.instructions+=2;goto B5a0e96;
case 0x5a0e97:c.instructions+=1;goto B5a0e97;
case 0x5a0e9a:goto L5a0e9a;
case 0x5a0e9d:c.instructions+=6;goto B5a0e9d;
case 0x5a0ea3:c.instructions+=5;goto B5a0ea3;
case 0x5a0ea4:c.instructions+=4;goto B5a0ea4;
case 0x5a0eaa:c.instructions+=3;goto B5a0eaa;
case 0x5a0eac:c.instructions+=2;goto B5a0eac;
case 0x5a0ead:c.instructions+=1;goto B5a0ead;
case 0x5a0eb0:goto L5a0eb0;
case 0x5a0eb4:c.instructions+=10;goto B5a0eb4;
case 0x5a0eb7:c.instructions+=9;goto B5a0eb7;
case 0x5a0eba:c.instructions+=8;goto B5a0eba;
case 0x5a0ebb:c.instructions+=7;goto B5a0ebb;
case 0x5a0ebf:c.instructions+=6;goto B5a0ebf;
case 0x5a0ec2:c.instructions+=5;goto B5a0ec2;
case 0x5a0ec4:c.instructions+=4;goto B5a0ec4;
case 0x5a0eca:c.instructions+=3;goto B5a0eca;
case 0x5a0ecc:c.instructions+=2;goto B5a0ecc;
case 0x5a0ecf:c.instructions+=1;goto B5a0ecf;
case 0x5a0ed1:goto L5a0ed1;
case 0x5a0ed5:c.instructions+=2;goto B5a0ed5;
case 0x5a0ed6:c.instructions+=1;goto B5a0ed6;
case 0x5a0edb:goto L5a0edb;
case 0x5a0edf:c.instructions+=4;goto B5a0edf;
case 0x5a0ee3:c.instructions+=3;goto B5a0ee3;
case 0x5a0ee4:c.instructions+=2;goto B5a0ee4;
case 0x5a0ee6:c.instructions+=1;goto B5a0ee6;
case 0x5a0eeb:goto L5a0eeb;
case 0x5a0eef:c.instructions+=3;goto B5a0eef;
case 0x5a0ef3:c.instructions+=2;goto B5a0ef3;
case 0x5a0ef5:c.instructions+=1;goto B5a0ef5;
case 0x5a0ef7:goto L5a0ef7;
case 0x5a0efb:c.instructions+=2;goto B5a0efb;
case 0x5a0efd:c.instructions+=1;goto B5a0efd;
case 0x5a0eff:goto L5a0eff;
case 0x5a0f03:c.instructions+=2;goto B5a0f03;
case 0x5a0f07:c.instructions+=1;goto B5a0f07;
case 0x5a0f09:goto L5a0f09;
case 0x5a0f0c:c.instructions+=1;goto B5a0f0c;
case 0x5a0f0f:goto L5a0f0f;
case 0x5a0f11:c.instructions+=2;goto B5a0f11;
case 0x5a0f14:c.instructions+=1;goto B5a0f14;
case 0x5a0f16:goto L5a0f16;
case 0x5a0f18:c.instructions+=3;goto B5a0f18;
case 0x5a0f19:c.instructions+=2;goto B5a0f19;
case 0x5a0f1c:c.instructions+=1;goto B5a0f1c;
case 0x5a0f1d:goto L5a0f1d;
case 0x5a0f22:c.instructions+=3;goto B5a0f22;
case 0x5a0f23:c.instructions+=2;goto B5a0f23;
case 0x5a0f26:c.instructions+=1;goto B5a0f26;
case 0x5a0f30:goto L5a0f30;
case 0x5a0f33:c.instructions+=7;goto B5a0f33;
case 0x5a0f34:c.instructions+=6;goto B5a0f34;
case 0x5a0f36:c.instructions+=5;goto B5a0f36;
case 0x5a0f3c:c.instructions+=4;goto B5a0f3c;
case 0x5a0f42:c.instructions+=3;goto B5a0f42;
case 0x5a0f44:c.instructions+=2;goto B5a0f44;
case 0x5a0f47:c.instructions+=1;goto B5a0f47;
case 0x5a0f4d:goto L5a0f4d;
case 0x5a0f51:c.instructions+=4;goto B5a0f51;
case 0x5a0f57:c.instructions+=3;goto B5a0f57;
case 0x5a0f59:c.instructions+=2;goto B5a0f59;
case 0x5a0f5c:c.instructions+=1;goto B5a0f5c;
case 0x5a0f62:goto L5a0f62;
case 0x5a0f65:c.instructions+=14;goto B5a0f65;
case 0x5a0f6b:c.instructions+=13;goto B5a0f6b;
case 0x5a0f71:c.instructions+=12;goto B5a0f71;
case 0x5a0f72:c.instructions+=11;goto B5a0f72;
case 0x5a0f74:c.instructions+=10;goto B5a0f74;
case 0x5a0f76:c.instructions+=9;goto B5a0f76;
case 0x5a0f7a:c.instructions+=8;goto B5a0f7a;
case 0x5a0f80:c.instructions+=7;goto B5a0f80;
case 0x5a0f86:c.instructions+=6;goto B5a0f86;
case 0x5a0f8a:c.instructions+=5;goto B5a0f8a;
case 0x5a0f90:c.instructions+=4;goto B5a0f90;
case 0x5a0f94:c.instructions+=3;goto B5a0f94;
case 0x5a0f96:c.instructions+=2;goto B5a0f96;
case 0x5a0f9a:c.instructions+=1;goto B5a0f9a;
case 0x5a0fa0:goto L5a0fa0;
case 0x5a0fa1:c.instructions+=1;goto B5a0fa1;
case 0x5a0fa7:goto L5a0fa7;
case 0x5a0fa8:c.instructions+=1;goto B5a0fa8;
case 0x5a0fae:goto L5a0fae;
case 0x5a0fb4:c.instructions+=12;goto B5a0fb4;
case 0x5a0fb5:c.instructions+=11;goto B5a0fb5;
case 0x5a0fbb:c.instructions+=10;goto B5a0fbb;
case 0x5a0fbc:c.instructions+=9;goto B5a0fbc;
case 0x5a0fbe:c.instructions+=8;goto B5a0fbe;
case 0x5a0fc0:c.instructions+=7;goto B5a0fc0;
case 0x5a0fc2:c.instructions+=6;goto B5a0fc2;
case 0x5a0fc4:c.instructions+=5;goto B5a0fc4;
case 0x5a0fc6:c.instructions+=4;goto B5a0fc6;
case 0x5a0fcc:c.instructions+=3;goto B5a0fcc;
case 0x5a0fd2:c.instructions+=2;goto B5a0fd2;
case 0x5a0fd5:c.instructions+=1;goto B5a0fd5;
case 0x5a0fda:goto L5a0fda;
case 0x5a0fe0:c.instructions+=9;goto B5a0fe0;
case 0x5a0fe4:c.instructions+=8;goto B5a0fe4;
case 0x5a0fe6:c.instructions+=7;goto B5a0fe6;
case 0x5a0fe9:c.instructions+=6;goto B5a0fe9;
case 0x5a0fea:c.instructions+=5;goto B5a0fea;
case 0x5a0fed:c.instructions+=4;goto B5a0fed;
case 0x5a0ff1:c.instructions+=3;goto B5a0ff1;
case 0x5a0ff7:c.instructions+=2;goto B5a0ff7;
case 0x5a0ffb:c.instructions+=1;goto B5a0ffb;
default:missing_instruction(c.pc);}
B5a0000:L5a0000:{c.instructions+=4;NFSU2_TR(0x5a0000);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B5a0005:{NFSU2_TR(0x5a0005);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5a0008:{NFSU2_TR(0x5a0008);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a000a:{NFSU2_TR(0x5a000a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a0015;}}
}
B5a000c:L5a000c:{c.instructions+=3;NFSU2_TR(0x5a000c);
__builtin_memmove((R+0),gp(0x890108),4);
}
B5a0011:{NFSU2_TR(0x5a0011);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a0013:{NFSU2_TR(0x5a0013);
if(r1(R+518)){{goto L5a001d;}}
}
B5a0015:L5a0015:{c.instructions+=2;NFSU2_TR(0x5a0015);
{u32 ea_=u32(u32(8001632u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a001b:{NFSU2_TR(0x5a001b);
{goto L5a0023;}
}
B5a001d:L5a001d:{c.instructions+=1;NFSU2_TR(0x5a001d);
{u32 ea_=u32(u32(8001628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0023:L5a0023:{c.instructions+=19;NFSU2_TR(0x5a0023);
{u32 ea_=u32(u32(8001596u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0029:{NFSU2_TR(0x5a0029);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a0031:{NFSU2_TR(0x5a0031);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a0033:{NFSU2_TR(0x5a0033);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a003b:{NFSU2_TR(0x5a003b);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a003f:{NFSU2_TR(0x5a003f);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a0043:{NFSU2_TR(0x5a0043);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0047:{NFSU2_TR(0x5a0047);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a0049:{NFSU2_TR(0x5a0049);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a004a:{NFSU2_TR(0x5a004a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5a004d:{NFSU2_TR(0x5a004d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a0051:{NFSU2_TR(0x5a0051);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0055:{NFSU2_TR(0x5a0055);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5a0057:{NFSU2_TR(0x5a0057);
{u32 ea_=u32(u32(8001600u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a005d:{NFSU2_TR(0x5a005d);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a0061:{NFSU2_TR(0x5a0061);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a0063:{NFSU2_TR(0x5a0063);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a0066:{NFSU2_TR(0x5a0066);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a0068:{NFSU2_TR(0x5a0068);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a006dull));
TAIL_STATIC(0x401090u,401);
}
B5a006d:L5a006d:{c.instructions+=9;NFSU2_TR(0x5a006d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5a006f:{NFSU2_TR(0x5a006f);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a0073:{NFSU2_TR(0x5a0073);
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
B5a0076:{NFSU2_TR(0x5a0076);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a007a:{NFSU2_TR(0x5a007a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a007b:{NFSU2_TR(0x5a007b);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5a007f:{NFSU2_TR(0x5a007f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0080:{NFSU2_TR(0x5a0080);
__builtin_memmove((R+4),(R+24),4);
}
B5a0082:{NFSU2_TR(0x5a0082);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a0085ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5a0085:L5a0085:{c.instructions+=3;NFSU2_TR(0x5a0085);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B5a008a:{NFSU2_TR(0x5a008a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a008c:{NFSU2_TR(0x5a008c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a0136;}}
}
B5a0092:L5a0092:{c.instructions+=3;NFSU2_TR(0x5a0092);
__builtin_memmove((R+0),gp(0x890104),4);
}
B5a0097:{NFSU2_TR(0x5a0097);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a0099:{NFSU2_TR(0x5a0099);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a0136;}}
}
B5a009f:L5a009f:{c.instructions+=2;NFSU2_TR(0x5a009f);
__builtin_memmove((R+4),(R+28),4);
}
B5a00a1:{NFSU2_TR(0x5a00a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a00a6ull));
TAIL_STATIC(0x592c60u,592);
}
B5a00a6:L5a00a6:{c.instructions+=2;NFSU2_TR(0x5a00a6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a00a8:{NFSU2_TR(0x5a00a8);
if(r1(R+518)){{goto L5a0136;}}
}
B5a00ae:L5a00ae:{c.instructions+=5;NFSU2_TR(0x5a00ae);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a00b2:{NFSU2_TR(0x5a00b2);
{u32 ea_=u32(u32(8001636u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a00b8:{NFSU2_TR(0x5a00b8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a00ba:{NFSU2_TR(0x5a00ba);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a00bd:{NFSU2_TR(0x5a00bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a0136;}}
}
B5a00bf:L5a00bf:{c.instructions+=3;NFSU2_TR(0x5a00bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a00c5:{NFSU2_TR(0x5a00c5);
__builtin_memmove((R+4),(R+28),4);
}
B5a00c7:{NFSU2_TR(0x5a00c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a00ccull));
TAIL_STATIC(0x431dd0u,431);
}
B5a00cc:L5a00cc:{c.instructions+=2;NFSU2_TR(0x5a00cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a00ce:{NFSU2_TR(0x5a00ce);
if(r1(R+518)){{goto L5a0132;}}
}
B5a00d0:L5a00d0:{c.instructions+=4;NFSU2_TR(0x5a00d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a00d3:{NFSU2_TR(0x5a00d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a00d6:{NFSU2_TR(0x5a00d6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a00d9:{NFSU2_TR(0x5a00d9);
if(r1(R+518)){{goto L5a0132;}}
}
B5a00db:L5a00db:{c.instructions+=2;NFSU2_TR(0x5a00db);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a00de:{NFSU2_TR(0x5a00de);
if(r1(R+518)){{goto L5a0132;}}
}
B5a00e0:L5a00e0:{c.instructions+=2;NFSU2_TR(0x5a00e0);
__builtin_memmove((R+4),(R+28),4);
}
B5a00e2:{NFSU2_TR(0x5a00e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a00e7ull));
TAIL_STATIC(0x5f1ee0u,5f1);
}
B5a00e7:L5a00e7:{c.instructions+=2;NFSU2_TR(0x5a00e7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a00e9:{NFSU2_TR(0x5a00e9);
if(r1(R+518)){{goto L5a0132;}}
}
B5a00eb:L5a00eb:{c.instructions+=6;NFSU2_TR(0x5a00eb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a00ed:{NFSU2_TR(0x5a00ed);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a00ef:{NFSU2_TR(0x5a00ef);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a00f1:{NFSU2_TR(0x5a00f1);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a00f3:{NFSU2_TR(0x5a00f3);
__builtin_memmove((R+4),(R+28),4);
}
B5a00f5:{NFSU2_TR(0x5a00f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a00faull));
TAIL_STATIC(0x6022e0u,602);
}
B5a00fa:L5a00fa:{c.instructions+=2;NFSU2_TR(0x5a00fa);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a00fc:{NFSU2_TR(0x5a00fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a0107;}}
}
B5a00fe:L5a00fe:{c.instructions+=2;NFSU2_TR(0x5a00fe);
__builtin_memmove((R+4),(R+28),4);
}
B5a0100:{NFSU2_TR(0x5a0100);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a0105ull));
TAIL_STATIC(0x5ea640u,5ea);
}
B5a0105:L5a0105:{c.instructions+=1;NFSU2_TR(0x5a0105);
{goto L5a0132;}
}
B5a0107:L5a0107:{c.instructions+=2;NFSU2_TR(0x5a0107);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B5a010d:{NFSU2_TR(0x5a010d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a0112ull));
TAIL_STATIC(0x486130u,486);
}
B5a0112:L5a0112:{c.instructions+=4;NFSU2_TR(0x5a0112);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a0118:{NFSU2_TR(0x5a0118);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x958ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a011e:{NFSU2_TR(0x5a011e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a0120:{NFSU2_TR(0x5a0120);
if(r1(R+518)){{goto L5a0132;}}
}
B5a0122:L5a0122:{c.instructions+=2;NFSU2_TR(0x5a0122);
__builtin_memmove((R+4),(R+24),4);
}
B5a0124:{NFSU2_TR(0x5a0124);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a0129ull));
TAIL_STATIC(0x637d30u,637);
}
B5a0129:L5a0129:{c.instructions+=3;NFSU2_TR(0x5a0129);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a012b:{NFSU2_TR(0x5a012b);
__builtin_memmove((R+4),(R+24),4);
}
B5a012d:{NFSU2_TR(0x5a012d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a0132ull));
TAIL_STATIC(0x63a4b0u,63a);
}
B5a0132:L5a0132:{c.instructions+=1;NFSU2_TR(0x5a0132);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a0136:L5a0136:{c.instructions+=5;NFSU2_TR(0x5a0136);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a013a:{NFSU2_TR(0x5a013a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5a013b:{NFSU2_TR(0x5a013b);
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
B5a013e:{NFSU2_TR(0x5a013e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a0142:{NFSU2_TR(0x5a0142);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x59fc00u,59f);}
}
B5a0148:L5a0148:{c.instructions+=6;NFSU2_TR(0x5a0148);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a0149:{NFSU2_TR(0x5a0149);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a014a:{NFSU2_TR(0x5a014a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a014b:{NFSU2_TR(0x5a014b);
__builtin_memmove((R+16),(R+20),4);
}
B5a014d:{NFSU2_TR(0x5a014d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a014e:{NFSU2_TR(0x5a014e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a0160:L5a0160:{c.instructions+=8;NFSU2_TR(0x5a0160);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a0163:{NFSU2_TR(0x5a0163);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a0169:{NFSU2_TR(0x5a0169);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a016a:{NFSU2_TR(0x5a016a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5a016d:{NFSU2_TR(0x5a016d);
w1(R+8,u8(0x3ull));
}
B5a016f:{NFSU2_TR(0x5a016f);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(R+12))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5a0171:{NFSU2_TR(0x5a0171);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a0172:{NFSU2_TR(0x5a0172);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a0189;}}
}
B5a0174:L5a0174:{c.instructions+=7;NFSU2_TR(0x5a0174);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a0177:{NFSU2_TR(0x5a0177);
{u32 ea_=u32(r4(R+0)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a017a:{NFSU2_TR(0x5a017a);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5a017c:{NFSU2_TR(0x5a017c);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a0182:{NFSU2_TR(0x5a0182);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a0184:{NFSU2_TR(0x5a0184);
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
B5a0187:{NFSU2_TR(0x5a0187);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a01a9;}}
}
B5a0189:L5a0189:{c.instructions+=3;NFSU2_TR(0x5a0189);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a018f:{NFSU2_TR(0x5a018f);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+8))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5a0192:{NFSU2_TR(0x5a0192);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a01ac;}}
}
B5a0194:L5a0194:{c.instructions+=7;NFSU2_TR(0x5a0194);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a0197:{NFSU2_TR(0x5a0197);
{u32 ea_=u32(r4(R+4)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a019a:{NFSU2_TR(0x5a019a);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5a019c:{NFSU2_TR(0x5a019c);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a01a2:{NFSU2_TR(0x5a01a2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a01a4:{NFSU2_TR(0x5a01a4);
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
B5a01a7:{NFSU2_TR(0x5a01a7);
if(r1(R+514)){{goto L5a01ac;}}
}
B5a01a9:L5a01a9:{c.instructions+=2;NFSU2_TR(0x5a01a9);
w1(R+0,u8(0x1ull));
}
B5a01ab:{NFSU2_TR(0x5a01ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a01ac:L5a01ac:{c.instructions+=2;NFSU2_TR(0x5a01ac);
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
B5a01ae:{NFSU2_TR(0x5a01ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a01b0:L5a01b0:{c.instructions+=8;NFSU2_TR(0x5a01b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a01b3:{NFSU2_TR(0x5a01b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a01b9:{NFSU2_TR(0x5a01b9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a01ba:{NFSU2_TR(0x5a01ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5a01bd:{NFSU2_TR(0x5a01bd);
w1(R+8,u8(0x3ull));
}
B5a01bf:{NFSU2_TR(0x5a01bf);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(R+12))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5a01c1:{NFSU2_TR(0x5a01c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a01c2:{NFSU2_TR(0x5a01c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a01d9;}}
}
B5a01c4:L5a01c4:{c.instructions+=7;NFSU2_TR(0x5a01c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a01c7:{NFSU2_TR(0x5a01c7);
{u32 ea_=u32(r4(R+0)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a01ca:{NFSU2_TR(0x5a01ca);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5a01cc:{NFSU2_TR(0x5a01cc);
{u32 ea_=u32(u32(7881944u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a01d2:{NFSU2_TR(0x5a01d2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a01d4:{NFSU2_TR(0x5a01d4);
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
B5a01d7:{NFSU2_TR(0x5a01d7);
if(r1(R+518)){{goto L5a01f9;}}
}
B5a01d9:L5a01d9:{c.instructions+=3;NFSU2_TR(0x5a01d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a01df:{NFSU2_TR(0x5a01df);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+8))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5a01e2:{NFSU2_TR(0x5a01e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a01fc;}}
}
B5a01e4:L5a01e4:{c.instructions+=7;NFSU2_TR(0x5a01e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a01e7:{NFSU2_TR(0x5a01e7);
{u32 ea_=u32(r4(R+4)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a01ea:{NFSU2_TR(0x5a01ea);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5a01ec:{NFSU2_TR(0x5a01ec);
{u32 ea_=u32(u32(7881944u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a01f2:{NFSU2_TR(0x5a01f2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a01f4:{NFSU2_TR(0x5a01f4);
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
B5a01f7:{NFSU2_TR(0x5a01f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a01fc;}}
}
B5a01f9:L5a01f9:{c.instructions+=2;NFSU2_TR(0x5a01f9);
w1(R+0,u8(0x1ull));
}
B5a01fb:{NFSU2_TR(0x5a01fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a01fc:L5a01fc:{c.instructions+=2;NFSU2_TR(0x5a01fc);
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
B5a01fe:{NFSU2_TR(0x5a01fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a0200:L5a0200:{c.instructions+=15;NFSU2_TR(0x5a0200);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0202:{NFSU2_TR(0x5a0202);
u8 U[4];
w4(U+0,u32(0x778b84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0207:{NFSU2_TR(0x5a0207);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a020d:{NFSU2_TR(0x5a020d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a020e:{NFSU2_TR(0x5a020e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a0215:{NFSU2_TR(0x5a0215);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0216:{NFSU2_TR(0x5a0216);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0217:{NFSU2_TR(0x5a0217);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0218:{NFSU2_TR(0x5a0218);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0219:{NFSU2_TR(0x5a0219);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5a021b:{NFSU2_TR(0x5a021b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a021c:{NFSU2_TR(0x5a021c);
u8 U[4];
w4(U+0,u32(0x7a1fb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0221:{NFSU2_TR(0x5a0221);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0223:{NFSU2_TR(0x5a0223);
u8 U[4];
w4(U+0,u32(0x450ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0228:{NFSU2_TR(0x5a0228);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a022dull));
TAIL_STATIC(0x440df0u,440);
}
B5a022d:L5a022d:{c.instructions+=6;NFSU2_TR(0x5a022d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a022e:{NFSU2_TR(0x5a022e);
u8 U[4];
w4(U+0,u32(0x7a1f98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0233:{NFSU2_TR(0x5a0233);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0235:{NFSU2_TR(0x5a0235);
u8 U[4];
w4(U+0,u32(0x1a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a023a:{NFSU2_TR(0x5a023a);
__builtin_memmove(gp(0x86ad6c),(R+0),4);
}
B5a023f:{NFSU2_TR(0x5a023f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a0244ull));
TAIL_STATIC(0x440df0u,440);
}
B5a0244:L5a0244:{c.instructions+=6;NFSU2_TR(0x5a0244);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0245:{NFSU2_TR(0x5a0245);
u8 U[4];
w4(U+0,u32(0x7a1f74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a024a:{NFSU2_TR(0x5a024a);
u8 U[4];
w4(U+0,u32(0xa0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a024f:{NFSU2_TR(0x5a024f);
u8 U[4];
w4(U+0,u32(0x270ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0254:{NFSU2_TR(0x5a0254);
__builtin_memmove(gp(0x86ad60),(R+0),4);
}
B5a0259:{NFSU2_TR(0x5a0259);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a025eull));
TAIL_STATIC(0x440df0u,440);
}
B5a025e:L5a025e:{c.instructions+=6;NFSU2_TR(0x5a025e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a025f:{NFSU2_TR(0x5a025f);
u8 U[4];
w4(U+0,u32(0x7a1f54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0264:{NFSU2_TR(0x5a0264);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0269:{NFSU2_TR(0x5a0269);
u8 U[4];
w4(U+0,u32(0x250ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a026e:{NFSU2_TR(0x5a026e);
__builtin_memmove(gp(0x86ad68),(R+0),4);
}
B5a0273:{NFSU2_TR(0x5a0273);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a0278ull));
TAIL_STATIC(0x440df0u,440);
}
B5a0278:L5a0278:{c.instructions+=4;NFSU2_TR(0x5a0278);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B5a027b:{NFSU2_TR(0x5a027b);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a027d:{NFSU2_TR(0x5a027d);
__builtin_memmove(gp(0x86b0bc),(R+0),4);
}
B5a0282:{NFSU2_TR(0x5a0282);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a0287ull));
TAIL_STATIC(0x575620u,575);
}
B5a0287:L5a0287:{c.instructions+=6;NFSU2_TR(0x5a0287);
__builtin_memmove((R+24),(R+0),4);
}
B5a0289:{NFSU2_TR(0x5a0289);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5a028c:{NFSU2_TR(0x5a028c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a0290:{NFSU2_TR(0x5a0290);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a0292:{NFSU2_TR(0x5a0292);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a0296:{NFSU2_TR(0x5a0296);
if(r1(R+518)){{goto L5a02c3;}}
}
B5a0298:L5a0298:{c.instructions+=5;NFSU2_TR(0x5a0298);
u8 U[4];
w4(U+0,u32(0x1aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a029a:{NFSU2_TR(0x5a029a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a029d:{NFSU2_TR(0x5a029d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a02a0:{NFSU2_TR(0x5a02a0);
u8 U[4];
w4(U+0,u32(0xd6ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5a02a6:{NFSU2_TR(0x5a02a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a02abull));
TAIL_STATIC(0x575620u,575);
}
B5a02ab:L5a02ab:{c.instructions+=5;NFSU2_TR(0x5a02ab);
__builtin_memmove((R+28),(R+0),4);
}
B5a02ad:{NFSU2_TR(0x5a02ad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5a02b0:{NFSU2_TR(0x5a02b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a02b3:{NFSU2_TR(0x5a02b3);
w4(R+4,u32(0x6ull));
}
B5a02b8:{NFSU2_TR(0x5a02b8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5a02ba:L5a02ba:{c.instructions+=1;NFSU2_TR(0x5a02ba);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5a02bc;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a02bau);}goto L5a02ba;}
}
B5a02bc:L5a02bc:{c.instructions+=3;NFSU2_TR(0x5a02bc);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B5a02be:{NFSU2_TR(0x5a02be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a02c1:{NFSU2_TR(0x5a02c1);
{goto L5a02c5;}
}
B5a02c3:L5a02c3:{c.instructions+=1;NFSU2_TR(0x5a02c3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5a02c5:L5a02c5:{c.instructions+=4;NFSU2_TR(0x5a02c5);
u8 U[4];
w4(U+0,u32(0x358ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a02ca:{NFSU2_TR(0x5a02ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a02d2:{NFSU2_TR(0x5a02d2);
__builtin_memmove(gp(0x86b2bc),(R+24),4);
}
B5a02d8:{NFSU2_TR(0x5a02d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a02ddull));
TAIL_STATIC(0x575620u,575);
}
B5a02dd:L5a02dd:{c.instructions+=5;NFSU2_TR(0x5a02dd);
__builtin_memmove((R+28),(R+0),4);
}
B5a02df:{NFSU2_TR(0x5a02df);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5a02e1:{NFSU2_TR(0x5a02e1);
__builtin_memmove(gp(0x86b298),(R+28),4);
}
B5a02e7:{NFSU2_TR(0x5a02e7);
w4(R+4,u32(0xd6ull));
}
B5a02ec:{NFSU2_TR(0x5a02ec);
u8 U[4];
w4(U+0,u32(0x86b520ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a02f1:L5a02f1:{c.instructions+=1;NFSU2_TR(0x5a02f1);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5a02f3;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a02f1u);}goto L5a02f1;}
}
B5a02f3:L5a02f3:{c.instructions+=1;NFSU2_TR(0x5a02f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a02f8ull));
TAIL_STATIC(0x43c780u,43c);
}
B5a02f8:L5a02f8:{c.instructions+=4;NFSU2_TR(0x5a02f8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5a02fa:{NFSU2_TR(0x5a02fa);
w4(R+4,u32(0x10ull));
}
B5a02ff:{NFSU2_TR(0x5a02ff);
w4(R+28,u32(0x86b450ull));
}
B5a0304:{NFSU2_TR(0x5a0304);
u8 U[4];
w4(U+0,u32(0x165cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0309:L5a0309:{c.instructions+=1;NFSU2_TR(0x5a0309);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5a030b;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a0309u);}goto L5a0309;}
}
B5a030b:L5a030b:{c.instructions+=1;NFSU2_TR(0x5a030b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a0310ull));
TAIL_STATIC(0x575620u,575);
}
B5a0310:L5a0310:{c.instructions+=5;NFSU2_TR(0x5a0310);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5a0313:{NFSU2_TR(0x5a0313);
__builtin_memmove((R+28),(R+0),4);
}
B5a0315:{NFSU2_TR(0x5a0315);
__builtin_memmove(gp(0x86b0b0),(R+28),4);
}
B5a031b:{NFSU2_TR(0x5a031b);
w4(R+4,u32(0x597ull));
}
B5a0320:{NFSU2_TR(0x5a0320);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5a0322:L5a0322:{c.instructions+=1;NFSU2_TR(0x5a0322);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5a0324;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a0322u);}goto L5a0322;}
}
B5a0324:L5a0324:{c.instructions+=7;NFSU2_TR(0x5a0324);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a0328:{NFSU2_TR(0x5a0328);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a0329:{NFSU2_TR(0x5a0329);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a032a:{NFSU2_TR(0x5a032a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a032b:{NFSU2_TR(0x5a032b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a0332:{NFSU2_TR(0x5a0332);
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
B5a0335:{NFSU2_TR(0x5a0335);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a0340:L5a0340:{c.instructions+=22;NFSU2_TR(0x5a0340);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0342:{NFSU2_TR(0x5a0342);
u8 U[4];
w4(U+0,u32(0x778fb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0347:{NFSU2_TR(0x5a0347);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a034d:{NFSU2_TR(0x5a034d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a034e:{NFSU2_TR(0x5a034e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a0355:{NFSU2_TR(0x5a0355);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0356:{NFSU2_TR(0x5a0356);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0357:{NFSU2_TR(0x5a0357);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0358:{NFSU2_TR(0x5a0358);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0359:{NFSU2_TR(0x5a0359);
__builtin_memmove((R+24),(R+4),4);
}
B5a035b:{NFSU2_TR(0x5a035b);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5a035d:{NFSU2_TR(0x5a035d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a0363:{NFSU2_TR(0x5a0363);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0364:{NFSU2_TR(0x5a0364);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a0368:{NFSU2_TR(0x5a0368);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a036e:{NFSU2_TR(0x5a036e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x228ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a0374:{NFSU2_TR(0x5a0374);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a0378:{NFSU2_TR(0x5a0378);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5a037c:{NFSU2_TR(0x5a037c);
u8 U[4];
w4(U+0,u32(0x7a1fd8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5a0382:{NFSU2_TR(0x5a0382);
u8 U[14];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(r2(R+20))));
w1(R+523,sborrow<u16>(r2(U+10),r2(R+20)));
w2(U+12,u16(u32(r2(U+10))-u32(r2(R+20))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5a0386:{NFSU2_TR(0x5a0386);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a038a:{NFSU2_TR(0x5a038a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a0399;}}
}
B5a038c:L5a038c:{c.instructions+=2;NFSU2_TR(0x5a038c);
u8 U[14];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(u16(0xbull))));
w1(R+523,sborrow<u16>(r2(U+10),u16(0xbull)));
w2(U+12,u16(u32(r2(U+10))-u32(u16(0xbull))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5a0391:{NFSU2_TR(0x5a0391);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a0399;}}
}
B5a0393:L5a0393:{c.instructions+=1;NFSU2_TR(0x5a0393);
__builtin_memmove(gp(0x86b2b8),(R+24),4);
}
B5a0399:L5a0399:{c.instructions+=4;NFSU2_TR(0x5a0399);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a039b:{NFSU2_TR(0x5a039b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a039c:{NFSU2_TR(0x5a039c);
__builtin_memmove((R+4),(R+12),4);
}
B5a039e:{NFSU2_TR(0x5a039e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a03a1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5a03a1:L5a03a1:{c.instructions+=5;NFSU2_TR(0x5a03a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5a03a3:{NFSU2_TR(0x5a03a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a03a4:{NFSU2_TR(0x5a03a4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a03a5:{NFSU2_TR(0x5a03a5);
__builtin_memmove((R+4),(R+28),4);
}
B5a03a7:{NFSU2_TR(0x5a03a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a03aaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5a03aa:L5a03aa:{c.instructions+=3;NFSU2_TR(0x5a03aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a03ab:{NFSU2_TR(0x5a03ab);
__builtin_memmove((R+4),(R+24),4);
}
B5a03ad:{NFSU2_TR(0x5a03ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a03b2ull));
TAIL_STATIC(0x598590u,598);
}
B5a03b2:L5a03b2:{c.instructions+=6;NFSU2_TR(0x5a03b2);
__builtin_memmove((R+0),gp(0x86b248),4);
}
B5a03b7:{NFSU2_TR(0x5a03b7);
__builtin_memmove((R+4),gp(0x86b270),4);
}
B5a03bd:{NFSU2_TR(0x5a03bd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5a03be:{NFSU2_TR(0x5a03be);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a03c0:{NFSU2_TR(0x5a03c0);
__builtin_memmove(gp(0x86b248),(R+0),4);
}
B5a03c5:{NFSU2_TR(0x5a03c5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5a03cc;}}
}
B5a03c7:L5a03c7:{c.instructions+=1;NFSU2_TR(0x5a03c7);
__builtin_memmove(gp(0x86b270),(R+0),4);
}
B5a03cc:L5a03cc:{c.instructions+=53;NFSU2_TR(0x5a03cc);
__builtin_memmove((R+4),gp(0x86b494),4);
}
B5a03d2:{NFSU2_TR(0x5a03d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5a03d8:{NFSU2_TR(0x5a03d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5a03da:{NFSU2_TR(0x5a03da);
__builtin_memmove(gp(0x86b494),(R+0),4);
}
B5a03df:{NFSU2_TR(0x5a03df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a03e2:{NFSU2_TR(0x5a03e2);
u8 U[4];
w4(U+0,u32(0x86b490ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5a03e8:{NFSU2_TR(0x5a03e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a03ee:{NFSU2_TR(0x5a03ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a03f4:{NFSU2_TR(0x5a03f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x244ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a03fa:{NFSU2_TR(0x5a03fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x248ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a0400:{NFSU2_TR(0x5a0400);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5a0404:{NFSU2_TR(0x5a0404);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5a0408:{NFSU2_TR(0x5a0408);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0xd6ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5a040e:{NFSU2_TR(0x5a040e);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B5a0410:{NFSU2_TR(0x5a0410);
__builtin_memmove((R+0),gp(0x86b0b0),4);
}
B5a0415:{NFSU2_TR(0x5a0415);
__builtin_memmove((R+8),(R+4),4);
}
B5a0417:{NFSU2_TR(0x5a0417);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5a041a:{NFSU2_TR(0x5a041a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5a041c:{NFSU2_TR(0x5a041c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B5a041f:{NFSU2_TR(0x5a041f);
w1(R+8,u8(0x1ull));
}
B5a0421:{NFSU2_TR(0x5a0421);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w1(R+8,shl<u8>(r1(R+8),u64(r1(U+0))));
}
B5a0423:{NFSU2_TR(0x5a0423);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B5a0425:{NFSU2_TR(0x5a0425);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a0426:{NFSU2_TR(0x5a0426);
w1(R+4,u8(u32(r1(R+4))|u32(r1(R+8))));
}
B5a0428:{NFSU2_TR(0x5a0428);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B5a042a:{NFSU2_TR(0x5a042a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a0430:{NFSU2_TR(0x5a0430);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5a0434:{NFSU2_TR(0x5a0434);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a043a:{NFSU2_TR(0x5a043a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0xd6ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5a0440:{NFSU2_TR(0x5a0440);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5a0444:{NFSU2_TR(0x5a0444);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B5a0446:{NFSU2_TR(0x5a0446);
__builtin_memmove((R+0),gp(0x86b0b0),4);
}
B5a044b:{NFSU2_TR(0x5a044b);
__builtin_memmove((R+8),(R+4),4);
}
B5a044d:{NFSU2_TR(0x5a044d);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5a0450:{NFSU2_TR(0x5a0450);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+12),(U+8),1);
}
B5a0453:{NFSU2_TR(0x5a0453);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5a0455:{NFSU2_TR(0x5a0455);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B5a0458:{NFSU2_TR(0x5a0458);
w1(R+8,u8(0x1ull));
}
B5a045a:{NFSU2_TR(0x5a045a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w1(R+8,shl<u8>(r1(R+8),u64(r1(U+0))));
}
B5a045c:{NFSU2_TR(0x5a045c);
w1(R+12,u8(u32(r1(R+12))|u32(r1(R+8))));
}
B5a045e:{NFSU2_TR(0x5a045e);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+0)),r1(U+0));
}
B5a0460:{NFSU2_TR(0x5a0460);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a0466:{NFSU2_TR(0x5a0466);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))+u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B5a0469:{NFSU2_TR(0x5a0469);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a046f:{NFSU2_TR(0x5a046f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))+u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B5a0472:{NFSU2_TR(0x5a0472);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a0476:{NFSU2_TR(0x5a0476);
__builtin_memmove((R+0),(R+24),4);
}
B5a0478:{NFSU2_TR(0x5a0478);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a0479:{NFSU2_TR(0x5a0479);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a047a:{NFSU2_TR(0x5a047a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a047b:{NFSU2_TR(0x5a047b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a0482:{NFSU2_TR(0x5a0482);
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
B5a0485:{NFSU2_TR(0x5a0485);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a0490:L5a0490:{c.instructions+=4;NFSU2_TR(0x5a0490);
__builtin_memmove((R+0),gp(0x86b490),4);
}
B5a0495:{NFSU2_TR(0x5a0495);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a0497:{NFSU2_TR(0x5a0497);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0498:{NFSU2_TR(0x5a0498);
if(r1(R+518)){{goto L5a04a2;}}
}
B5a049a:L5a049a:{c.instructions+=2;NFSU2_TR(0x5a049a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffdd0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a04a0:{NFSU2_TR(0x5a04a0);
{goto L5a04a4;}
}
B5a04a2:L5a04a2:{c.instructions+=1;NFSU2_TR(0x5a04a2);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5a04a4:L5a04a4:{c.instructions+=2;NFSU2_TR(0x5a04a4);
w4(R+4,u32(0x86b490ull));
}
B5a04a9:{NFSU2_TR(0x5a04a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a04aeull));
TAIL_STATIC(0x56d4f0u,56d);
}
B5a04ae:L5a04ae:{c.instructions+=2;NFSU2_TR(0x5a04ae);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a04b0:{NFSU2_TR(0x5a04b0);
if(r1(R+518)){{goto L5a04e8;}}
}
B5a04b2:L5a04b2:{c.instructions+=3;NFSU2_TR(0x5a04b2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a04b6:{NFSU2_TR(0x5a04b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a04ba:{NFSU2_TR(0x5a04ba);
__builtin_memmove((R+12),(R+12),4);
}
B5a04c0:L5a04c0:{c.instructions+=2;NFSU2_TR(0x5a04c0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5a04c6:{NFSU2_TR(0x5a04c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a04d0;}}
}
B5a04c8:L5a04c8:{c.instructions+=2;NFSU2_TR(0x5a04c8);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
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
B5a04ce:{NFSU2_TR(0x5a04ce);
if(r1(R+518)){{goto L5a04ec;}}
}
B5a04d0:L5a04d0:{c.instructions+=3;NFSU2_TR(0x5a04d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a04d6:{NFSU2_TR(0x5a04d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a04d8:{NFSU2_TR(0x5a04d8);
if(r1(R+518)){{goto L5a04e2;}}
}
B5a04da:L5a04da:{c.instructions+=2;NFSU2_TR(0x5a04da);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffdd0ull))));
}
B5a04e0:{NFSU2_TR(0x5a04e0);
{goto L5a04e4;}
}
B5a04e2:L5a04e2:{c.instructions+=1;NFSU2_TR(0x5a04e2);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5a04e4:L5a04e4:{c.instructions+=2;NFSU2_TR(0x5a04e4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a04e6:{NFSU2_TR(0x5a04e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a04c0u);}goto L5a04c0;}}
}
B5a04e8:L5a04e8:{c.instructions+=3;NFSU2_TR(0x5a04e8);
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
B5a04ea:{NFSU2_TR(0x5a04ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a04eb:{NFSU2_TR(0x5a04eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a04ec:L5a04ec:{c.instructions+=3;NFSU2_TR(0x5a04ec);
__builtin_memmove((R+0),(R+24),4);
}
B5a04ee:{NFSU2_TR(0x5a04ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a04ef:{NFSU2_TR(0x5a04ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a04f0:L5a04f0:{c.instructions+=13;NFSU2_TR(0x5a04f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a04f4:{NFSU2_TR(0x5a04f4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a04f5:{NFSU2_TR(0x5a04f5);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5a04f7:{NFSU2_TR(0x5a04f7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a04f9:{NFSU2_TR(0x5a04f9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a04fa:{NFSU2_TR(0x5a04fa);
__builtin_memmove((R+24),(R+4),4);
}
B5a04fc:{NFSU2_TR(0x5a04fc);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5a0500:{NFSU2_TR(0x5a0500);
u8 U[4];
w4(U+0,u32(0x7a1fe0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5a0506:{NFSU2_TR(0x5a0506);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5a050a:{NFSU2_TR(0x5a050a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5a050d:{NFSU2_TR(0x5a050d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a0510:{NFSU2_TR(0x5a0510);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5a0513:{NFSU2_TR(0x5a0513);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5a0531;}}
}
B5a0515:L5a0515:{c.instructions+=4;NFSU2_TR(0x5a0515);
__builtin_memmove((R+4),gp(0x86b2bc),4);
}
B5a051b:{NFSU2_TR(0x5a051b);
w4(R+8,u32(s32(s16(r2(R+0)))));
}
B5a051e:{NFSU2_TR(0x5a051e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a051f:{NFSU2_TR(0x5a051f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a0524ull));
TAIL_STATIC(0x592df0u,592);
}
B5a0524:L5a0524:{c.instructions+=3;NFSU2_TR(0x5a0524);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5a0528:{NFSU2_TR(0x5a0528);
__builtin_memmove((R+4),gp(0x86b298),4);
}
B5a052e:{NFSU2_TR(0x5a052e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5a0531:L5a0531:{c.instructions+=6;NFSU2_TR(0x5a0531);
__builtin_memmove((R+0),gp(0x86b250),4);
}
B5a0536:{NFSU2_TR(0x5a0536);
__builtin_memmove((R+4),gp(0x86b278),4);
}
B5a053c:{NFSU2_TR(0x5a053c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5a053d:{NFSU2_TR(0x5a053d);
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
B5a053f:{NFSU2_TR(0x5a053f);
__builtin_memmove(gp(0x86b250),(R+0),4);
}
B5a0544:{NFSU2_TR(0x5a0544);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5a054b;}}
}
B5a0546:L5a0546:{c.instructions+=1;NFSU2_TR(0x5a0546);
__builtin_memmove(gp(0x86b278),(R+0),4);
}
B5a054b:L5a054b:{c.instructions+=21;NFSU2_TR(0x5a054b);
w4(R+0,u32(0xcb18967full));
}
B5a0550:{NFSU2_TR(0x5a0550);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a0553:{NFSU2_TR(0x5a0553);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a0556:{NFSU2_TR(0x5a0556);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a0559:{NFSU2_TR(0x5a0559);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a055c:{NFSU2_TR(0x5a055c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5a055f:{NFSU2_TR(0x5a055f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a0562:{NFSU2_TR(0x5a0562);
__builtin_memmove((R+4),gp(0x86b4c8),4);
}
B5a0568:{NFSU2_TR(0x5a0568);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5a056b:{NFSU2_TR(0x5a056b);
__builtin_memmove(gp(0x86b4c8),(R+0),4);
}
B5a0570:{NFSU2_TR(0x5a0570);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a0573:{NFSU2_TR(0x5a0573);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x86b4c8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a057a:{NFSU2_TR(0x5a057a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5a057c:{NFSU2_TR(0x5a057c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5a057f:{NFSU2_TR(0x5a057f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5a0582:{NFSU2_TR(0x5a0582);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5a0585:{NFSU2_TR(0x5a0585);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5a0588:{NFSU2_TR(0x5a0588);
__builtin_memmove((R+0),(R+24),4);
}
B5a058a:{NFSU2_TR(0x5a058a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a058b:{NFSU2_TR(0x5a058b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a058c:{NFSU2_TR(0x5a058c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a0590:L5a0590:{c.instructions+=2;NFSU2_TR(0x5a0590);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+523,scarry<u8>(r1(U+4),u8(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))+u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5a0593:{NFSU2_TR(0x5a0593);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a05a0:L5a05a0:{c.instructions+=11;NFSU2_TR(0x5a05a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a05a1:{NFSU2_TR(0x5a05a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a05a2:{NFSU2_TR(0x5a05a2);
__builtin_memmove((R+28),(R+4),4);
}
B5a05a4:{NFSU2_TR(0x5a05a4);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a05a7:{NFSU2_TR(0x5a05a7);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a05aa:{NFSU2_TR(0x5a05aa);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a05ae:{NFSU2_TR(0x5a05ae);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a05b2:{NFSU2_TR(0x5a05b2);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a05b6:{NFSU2_TR(0x5a05b6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a05b8:{NFSU2_TR(0x5a05b8);
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
B5a05bb:{NFSU2_TR(0x5a05bb);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a0672;}}
}
B5a05c1:L5a05c1:{c.instructions+=5;NFSU2_TR(0x5a05c1);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a05c5:{NFSU2_TR(0x5a05c5);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a05c9:{NFSU2_TR(0x5a05c9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a05cb:{NFSU2_TR(0x5a05cb);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a05ce:{NFSU2_TR(0x5a05ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a05ef;}}
}
B5a05d0:L5a05d0:{c.instructions+=5;NFSU2_TR(0x5a05d0);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a05d4:{NFSU2_TR(0x5a05d4);
{u32 ea_=u32(u32(8827548u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a05da:{NFSU2_TR(0x5a05da);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a05dc:{NFSU2_TR(0x5a05dc);
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
B5a05df:{NFSU2_TR(0x5a05df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a05ef;}}
}
B5a05e1:L5a05e1:{c.instructions+=5;NFSU2_TR(0x5a05e1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a05e5:{NFSU2_TR(0x5a05e5);
__builtin_memmove(gp(0x86b29c),(R+0),4);
}
B5a05ea:{NFSU2_TR(0x5a05ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a05eb:{NFSU2_TR(0x5a05eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5a05ec:{NFSU2_TR(0x5a05ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a05ef:L5a05ef:{c.instructions+=5;NFSU2_TR(0x5a05ef);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a05f3:{NFSU2_TR(0x5a05f3);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a05f7:{NFSU2_TR(0x5a05f7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a05f9:{NFSU2_TR(0x5a05f9);
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
B5a05fc:{NFSU2_TR(0x5a05fc);
if(r1(R+514)){{goto L5a0672;}}
}
B5a05fe:L5a05fe:{c.instructions+=5;NFSU2_TR(0x5a05fe);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0602:{NFSU2_TR(0x5a0602);
{u32 ea_=u32(u32(8827548u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a0608:{NFSU2_TR(0x5a0608);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a060a:{NFSU2_TR(0x5a060a);
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
B5a060d:{NFSU2_TR(0x5a060d);
if(r1(R+514)){{goto L5a0672;}}
}
B5a060f:L5a060f:{c.instructions+=5;NFSU2_TR(0x5a060f);
__builtin_memmove((R+0),gp(0x86b4c8),4);
}
B5a0614:{NFSU2_TR(0x5a0614);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a0616:{NFSU2_TR(0x5a0616);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0617:{NFSU2_TR(0x5a0617);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a061f:{NFSU2_TR(0x5a061f);
if(r1(R+518)){{goto L5a0626;}}
}
B5a0621:L5a0621:{c.instructions+=2;NFSU2_TR(0x5a0621);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a0624:{NFSU2_TR(0x5a0624);
{goto L5a0628;}
}
B5a0626:L5a0626:{c.instructions+=1;NFSU2_TR(0x5a0626);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5a0628:L5a0628:{c.instructions+=2;NFSU2_TR(0x5a0628);
w4(R+4,u32(0x86b4c8ull));
}
B5a062d:{NFSU2_TR(0x5a062d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a0632ull));
TAIL_STATIC(0x431780u,431);
}
B5a0632:L5a0632:{c.instructions+=3;NFSU2_TR(0x5a0632);
__builtin_memmove((R+4),(R+0),4);
}
B5a0634:{NFSU2_TR(0x5a0634);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B5a0636:{NFSU2_TR(0x5a0636);
if(r1(R+518)){{goto L5a0667;}}
}
B5a0638:L5a0638:{c.instructions+=2;NFSU2_TR(0x5a0638);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a063a:{NFSU2_TR(0x5a063a);
if(r1(R+518)){{goto L5a0655;}}
}
B5a063c:L5a063c:{c.instructions+=6;NFSU2_TR(0x5a063c);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a063f:{NFSU2_TR(0x5a063f);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a0642:{NFSU2_TR(0x5a0642);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a0646:{NFSU2_TR(0x5a0646);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a0648:{NFSU2_TR(0x5a0648);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a064b:{NFSU2_TR(0x5a064b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a0653;}}
}
B5a064d:L5a064d:{c.instructions+=2;NFSU2_TR(0x5a064d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a0651:{NFSU2_TR(0x5a0651);
{goto L5a0655;}
}
B5a0653:L5a0653:{c.instructions+=1;NFSU2_TR(0x5a0653);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a0655:L5a0655:{c.instructions+=3;NFSU2_TR(0x5a0655);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a0658:{NFSU2_TR(0x5a0658);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a065a:{NFSU2_TR(0x5a065a);
if(r1(R+518)){{goto L5a0661;}}
}
B5a065c:L5a065c:{c.instructions+=2;NFSU2_TR(0x5a065c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B5a065f:{NFSU2_TR(0x5a065f);
{goto L5a0663;}
}
B5a0661:L5a0661:{c.instructions+=1;NFSU2_TR(0x5a0661);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5a0663:L5a0663:{c.instructions+=2;NFSU2_TR(0x5a0663);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B5a0665:{NFSU2_TR(0x5a0665);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a0638u);}goto L5a0638;}}
}
B5a0667:L5a0667:{c.instructions+=3;NFSU2_TR(0x5a0667);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a066b:{NFSU2_TR(0x5a066b);
__builtin_memmove(gp(0x86b29c),(R+4),4);
}
B5a0671:{NFSU2_TR(0x5a0671);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a0672:L5a0672:{c.instructions+=3;NFSU2_TR(0x5a0672);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a0673:{NFSU2_TR(0x5a0673);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5a0674:{NFSU2_TR(0x5a0674);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a0680:L5a0680:{c.instructions+=11;NFSU2_TR(0x5a0680);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0681:{NFSU2_TR(0x5a0681);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0682:{NFSU2_TR(0x5a0682);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a0686:{NFSU2_TR(0x5a0686);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0688:{NFSU2_TR(0x5a0688);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0689:{NFSU2_TR(0x5a0689);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a068d:{NFSU2_TR(0x5a068d);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a068f:{NFSU2_TR(0x5a068f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0690:{NFSU2_TR(0x5a0690);
__builtin_memmove((R+12),(R+4),4);
}
B5a0692:{NFSU2_TR(0x5a0692);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a0695:{NFSU2_TR(0x5a0695);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a069aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a05a0u);}goto L5a05a0;}
}
B5a069a:L5a069a:{c.instructions+=13;NFSU2_TR(0x5a069a);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a069d:{NFSU2_TR(0x5a069d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a069f:{NFSU2_TR(0x5a069f);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a06a2:{NFSU2_TR(0x5a06a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a06a5:{NFSU2_TR(0x5a06a5);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a06a8:{NFSU2_TR(0x5a06a8);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a06ab:{NFSU2_TR(0x5a06ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5a06ad:{NFSU2_TR(0x5a06ad);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a06b0:{NFSU2_TR(0x5a06b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a06b3:{NFSU2_TR(0x5a06b3);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a06b5:{NFSU2_TR(0x5a06b5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a06b7:{NFSU2_TR(0x5a06b7);
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
B5a06ba:{NFSU2_TR(0x5a06ba);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a0817;}}
}
B5a06c0:L5a06c0:{c.instructions+=2;NFSU2_TR(0x5a06c0);
w4(R+4,u32(0x86b4c8ull));
}
B5a06c5:{NFSU2_TR(0x5a06c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a06caull));
TAIL_STATIC(0x431780u,431);
}
B5a06ca:L5a06ca:{c.instructions+=3;NFSU2_TR(0x5a06ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a06ce:{NFSU2_TR(0x5a06ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5a06d1:{NFSU2_TR(0x5a06d1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a06d2:L5a06d2:{c.instructions+=3;NFSU2_TR(0x5a06d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a06d5:{NFSU2_TR(0x5a06d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a06d7:{NFSU2_TR(0x5a06d7);
if(r1(R+518)){{goto L5a06de;}}
}
B5a06d9:L5a06d9:{c.instructions+=2;NFSU2_TR(0x5a06d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a06dc:{NFSU2_TR(0x5a06dc);
{goto L5a06e0;}
}
B5a06de:L5a06de:{c.instructions+=1;NFSU2_TR(0x5a06de);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5a06e0:L5a06e0:{c.instructions+=3;NFSU2_TR(0x5a06e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a06e2:{NFSU2_TR(0x5a06e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a06e4:{NFSU2_TR(0x5a06e4);
if(r1(R+518)){{goto L5a06eb;}}
}
B5a06e6:L5a06e6:{c.instructions+=2;NFSU2_TR(0x5a06e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a06e9:{NFSU2_TR(0x5a06e9);
{goto L5a06ed;}
}
B5a06eb:L5a06eb:{c.instructions+=1;NFSU2_TR(0x5a06eb);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5a06ed:L5a06ed:{c.instructions+=2;NFSU2_TR(0x5a06ed);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5a06f1:{NFSU2_TR(0x5a06f1);
if(r1(R+518)){{goto L5a0780;}}
}
B5a06f7:L5a06f7:{c.instructions+=2;NFSU2_TR(0x5a06f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a06f9:{NFSU2_TR(0x5a06f9);
if(r1(R+518)){{goto L5a0707;}}
}
B5a06fb:L5a06fb:{c.instructions+=3;NFSU2_TR(0x5a06fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5a06fe:{NFSU2_TR(0x5a06fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a0700:{NFSU2_TR(0x5a0700);
if(r1(R+518)){{goto L5a0707;}}
}
B5a0702:L5a0702:{c.instructions+=2;NFSU2_TR(0x5a0702);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a0705:{NFSU2_TR(0x5a0705);
{goto L5a0709;}
}
B5a0707:L5a0707:{c.instructions+=1;NFSU2_TR(0x5a0707);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5a0709:L5a0709:{c.instructions+=2;NFSU2_TR(0x5a0709);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a070b:{NFSU2_TR(0x5a070b);
if(r1(R+518)){{goto L5a0712;}}
}
B5a070d:L5a070d:{c.instructions+=2;NFSU2_TR(0x5a070d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B5a0710:{NFSU2_TR(0x5a0710);
{goto L5a0714;}
}
B5a0712:L5a0712:{c.instructions+=1;NFSU2_TR(0x5a0712);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5a0714:L5a0714:{c.instructions+=5;NFSU2_TR(0x5a0714);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0717:{NFSU2_TR(0x5a0717);
{u32 ea_=u32(r4(R+8)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a071a:{NFSU2_TR(0x5a071a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a071c:{NFSU2_TR(0x5a071c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a071f:{NFSU2_TR(0x5a071f);
if(r1(R+518)){{goto L5a0749;}}
}
B5a0721:L5a0721:{c.instructions+=5;NFSU2_TR(0x5a0721);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0724:{NFSU2_TR(0x5a0724);
{u32 ea_=u32(r4(R+8)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a0727:{NFSU2_TR(0x5a0727);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a0729:{NFSU2_TR(0x5a0729);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a072c:{NFSU2_TR(0x5a072c);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a0780;}}
}
B5a072e:L5a072e:{c.instructions+=9;NFSU2_TR(0x5a072e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5a0732:{NFSU2_TR(0x5a0732);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a0736:{NFSU2_TR(0x5a0736);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5a0738:{NFSU2_TR(0x5a0738);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+523,sborrow<u16>(r2(R+0),r2(U+6)));
w2(U+8,u16(u32(r2(R+0))-u32(r2(U+6))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5a073c:{NFSU2_TR(0x5a073c);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
__builtin_memmove((R+4),(U+2),1);
}
B5a073f:{NFSU2_TR(0x5a073f);
__builtin_memmove((R+0),(R+4),4);
}
B5a0741:{NFSU2_TR(0x5a0741);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a0743:{NFSU2_TR(0x5a0743);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a0747:{NFSU2_TR(0x5a0747);
if(r1(R+518)){{goto L5a0780;}}
}
B5a0749:L5a0749:{c.instructions+=6;NFSU2_TR(0x5a0749);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a074b:{NFSU2_TR(0x5a074b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a074d:{NFSU2_TR(0x5a074d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a0750:{NFSU2_TR(0x5a0750);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5a0752:{NFSU2_TR(0x5a0752);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a0755:{NFSU2_TR(0x5a0755);
if(r1(R+518)){{goto L5a076c;}}
}
B5a0757:L5a0757:{c.instructions+=7;NFSU2_TR(0x5a0757);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a075a:{NFSU2_TR(0x5a075a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5a075d:{NFSU2_TR(0x5a075d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5a075f:{NFSU2_TR(0x5a075f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a0762:{NFSU2_TR(0x5a0762);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a0765:{NFSU2_TR(0x5a0765);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5a0767:{NFSU2_TR(0x5a0767);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a06d2u);}goto L5a06d2;}
}
B5a076c:L5a076c:{c.instructions+=7;NFSU2_TR(0x5a076c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5a076e:{NFSU2_TR(0x5a076e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a0771:{NFSU2_TR(0x5a0771);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5a0773:{NFSU2_TR(0x5a0773);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a0776:{NFSU2_TR(0x5a0776);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a0779:{NFSU2_TR(0x5a0779);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5a077b:{NFSU2_TR(0x5a077b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a06d2u);}goto L5a06d2;}
}
B5a0780:L5a0780:{c.instructions+=2;NFSU2_TR(0x5a0780);
u8 U[22];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+20))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+14)));
w4(U+18,u32(u32(r4(R+20))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5a0784:{NFSU2_TR(0x5a0784);
if(r1(R+518)){{goto L5a0816;}}
}
B5a078a:L5a078a:{c.instructions+=2;NFSU2_TR(0x5a078a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a078c:{NFSU2_TR(0x5a078c);
if(r1(R+518)){{goto L5a0793;}}
}
B5a078e:L5a078e:{c.instructions+=2;NFSU2_TR(0x5a078e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5a0791:{NFSU2_TR(0x5a0791);
{goto L5a0795;}
}
B5a0793:L5a0793:{c.instructions+=1;NFSU2_TR(0x5a0793);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5a0795:L5a0795:{c.instructions+=2;NFSU2_TR(0x5a0795);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a0797:{NFSU2_TR(0x5a0797);
if(r1(R+518)){{goto L5a079e;}}
}
B5a0799:L5a0799:{c.instructions+=2;NFSU2_TR(0x5a0799);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a079c:{NFSU2_TR(0x5a079c);
{goto L5a07a0;}
}
B5a079e:L5a079e:{c.instructions+=1;NFSU2_TR(0x5a079e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5a07a0:L5a07a0:{c.instructions+=2;NFSU2_TR(0x5a07a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a07a2:{NFSU2_TR(0x5a07a2);
if(r1(R+518)){{goto L5a07a9;}}
}
B5a07a4:L5a07a4:{c.instructions+=2;NFSU2_TR(0x5a07a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B5a07a7:{NFSU2_TR(0x5a07a7);
{goto L5a07ab;}
}
B5a07a9:L5a07a9:{c.instructions+=1;NFSU2_TR(0x5a07a9);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5a07ab:L5a07ab:{c.instructions+=5;NFSU2_TR(0x5a07ab);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a07ae:{NFSU2_TR(0x5a07ae);
{u32 ea_=u32(r4(R+8)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a07b1:{NFSU2_TR(0x5a07b1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a07b3:{NFSU2_TR(0x5a07b3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a07b6:{NFSU2_TR(0x5a07b6);
if(r1(R+518)){{goto L5a07e0;}}
}
B5a07b8:L5a07b8:{c.instructions+=5;NFSU2_TR(0x5a07b8);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a07bb:{NFSU2_TR(0x5a07bb);
{u32 ea_=u32(r4(R+8)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a07be:{NFSU2_TR(0x5a07be);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a07c0:{NFSU2_TR(0x5a07c0);
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
B5a07c3:{NFSU2_TR(0x5a07c3);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a0816;}}
}
B5a07c5:L5a07c5:{c.instructions+=9;NFSU2_TR(0x5a07c5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5a07c9:{NFSU2_TR(0x5a07c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a07cd:{NFSU2_TR(0x5a07cd);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5a07cf:{NFSU2_TR(0x5a07cf);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+523,sborrow<u16>(r2(R+0),r2(U+6)));
w2(U+8,u16(u32(r2(R+0))-u32(r2(U+6))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5a07d3:{NFSU2_TR(0x5a07d3);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
__builtin_memmove((R+4),(U+2),1);
}
B5a07d6:{NFSU2_TR(0x5a07d6);
__builtin_memmove((R+0),(R+4),4);
}
B5a07d8:{NFSU2_TR(0x5a07d8);
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
B5a07da:{NFSU2_TR(0x5a07da);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a07de:{NFSU2_TR(0x5a07de);
if(r1(R+518)){{goto L5a0816;}}
}
B5a07e0:L5a07e0:{c.instructions+=6;NFSU2_TR(0x5a07e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a07e2:{NFSU2_TR(0x5a07e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a07e4:{NFSU2_TR(0x5a07e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a07e7:{NFSU2_TR(0x5a07e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5a07e9:{NFSU2_TR(0x5a07e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a07ec:{NFSU2_TR(0x5a07ec);
if(r1(R+518)){{goto L5a0803;}}
}
B5a07ee:L5a07ee:{c.instructions+=7;NFSU2_TR(0x5a07ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a07f1:{NFSU2_TR(0x5a07f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5a07f4:{NFSU2_TR(0x5a07f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5a07f6:{NFSU2_TR(0x5a07f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a07f9:{NFSU2_TR(0x5a07f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a07fc:{NFSU2_TR(0x5a07fc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5a07fe:{NFSU2_TR(0x5a07fe);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a06d2u);}goto L5a06d2;}
}
B5a0803:L5a0803:{c.instructions+=7;NFSU2_TR(0x5a0803);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5a0805:{NFSU2_TR(0x5a0805);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5a0807:{NFSU2_TR(0x5a0807);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5a0809:{NFSU2_TR(0x5a0809);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a080c:{NFSU2_TR(0x5a080c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a080f:{NFSU2_TR(0x5a080f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5a0811:{NFSU2_TR(0x5a0811);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a06d2u);}goto L5a06d2;}
}
B5a0816:L5a0816:{c.instructions+=1;NFSU2_TR(0x5a0816);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a0817:L5a0817:{c.instructions+=4;NFSU2_TR(0x5a0817);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a0818:{NFSU2_TR(0x5a0818);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a0819:{NFSU2_TR(0x5a0819);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a081a:{NFSU2_TR(0x5a081a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a0820:L5a0820:{c.instructions+=9;NFSU2_TR(0x5a0820);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0821:{NFSU2_TR(0x5a0821);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0822:{NFSU2_TR(0x5a0822);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5a0826:{NFSU2_TR(0x5a0826);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0827:{NFSU2_TR(0x5a0827);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0828:{NFSU2_TR(0x5a0828);
__builtin_memmove((R+28),(R+4),4);
}
B5a082a:{NFSU2_TR(0x5a082a);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5a082e:{NFSU2_TR(0x5a082e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a0830:{NFSU2_TR(0x5a0830);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5a088c;}}
}
B5a0832:L5a0832:{c.instructions+=4;NFSU2_TR(0x5a0832);
__builtin_memmove((R+0),gp(0x86b490),4);
}
B5a0837:{NFSU2_TR(0x5a0837);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5a0839:{NFSU2_TR(0x5a0839);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a083b:{NFSU2_TR(0x5a083b);
if(r1(R+518)){{goto L5a0845;}}
}
B5a083d:L5a083d:{c.instructions+=2;NFSU2_TR(0x5a083d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffdd0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a0843:{NFSU2_TR(0x5a0843);
{goto L5a0847;}
}
B5a0845:L5a0845:{c.instructions+=1;NFSU2_TR(0x5a0845);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5a0847:L5a0847:{c.instructions+=2;NFSU2_TR(0x5a0847);
w4(R+4,u32(0x86b490ull));
}
B5a084c:{NFSU2_TR(0x5a084c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a0851ull));
TAIL_STATIC(0x56d4f0u,56d);
}
B5a0851:L5a0851:{c.instructions+=2;NFSU2_TR(0x5a0851);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a0853:{NFSU2_TR(0x5a0853);
if(r1(R+518)){{goto L5a088c;}}
}
B5a0855:L5a0855:{c.instructions+=3;NFSU2_TR(0x5a0855);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x244ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a085b:{NFSU2_TR(0x5a085b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a085d:{NFSU2_TR(0x5a085d);
if(r1(R+518)){{goto L5a0874;}}
}
B5a085f:L5a085f:{c.instructions+=2;NFSU2_TR(0x5a085f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5a0865:{NFSU2_TR(0x5a0865);
if(r1(R+518)){{goto L5a086f;}}
}
B5a0867:L5a0867:{c.instructions+=2;NFSU2_TR(0x5a0867);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5a086d:{NFSU2_TR(0x5a086d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a0874;}}
}
B5a086f:L5a086f:{c.instructions+=2;NFSU2_TR(0x5a086f);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a0871:{NFSU2_TR(0x5a0871);
if(r1(R+518)){{goto L5a0895;}}
}
B5a0873:L5a0873:{c.instructions+=1;NFSU2_TR(0x5a0873);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5a0874:L5a0874:{c.instructions+=3;NFSU2_TR(0x5a0874);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a087a:{NFSU2_TR(0x5a087a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a087c:{NFSU2_TR(0x5a087c);
if(r1(R+518)){{goto L5a0886;}}
}
B5a087e:L5a087e:{c.instructions+=2;NFSU2_TR(0x5a087e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffdd0ull))));
}
B5a0884:{NFSU2_TR(0x5a0884);
{goto L5a0888;}
}
B5a0886:L5a0886:{c.instructions+=1;NFSU2_TR(0x5a0886);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5a0888:L5a0888:{c.instructions+=2;NFSU2_TR(0x5a0888);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a088a:{NFSU2_TR(0x5a088a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a0855u);}goto L5a0855;}}
}
B5a088c:L5a088c:{c.instructions+=6;NFSU2_TR(0x5a088c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a088d:{NFSU2_TR(0x5a088d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a088e:{NFSU2_TR(0x5a088e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a088f:{NFSU2_TR(0x5a088f);
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
B5a0891:{NFSU2_TR(0x5a0891);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a0892:{NFSU2_TR(0x5a0892);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a0895:L5a0895:{c.instructions+=6;NFSU2_TR(0x5a0895);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x244ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a089b:{NFSU2_TR(0x5a089b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a089c:{NFSU2_TR(0x5a089c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a089d:{NFSU2_TR(0x5a089d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a089e:{NFSU2_TR(0x5a089e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a089f:{NFSU2_TR(0x5a089f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a08b0:L5a08b0:{c.instructions+=14;NFSU2_TR(0x5a08b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a08b1:{NFSU2_TR(0x5a08b1);
__builtin_memmove((R+20),(R+16),4);
}
B5a08b3:{NFSU2_TR(0x5a08b3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5a08b6:{NFSU2_TR(0x5a08b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B5a08b9:{NFSU2_TR(0x5a08b9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a08ba:{NFSU2_TR(0x5a08ba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a08bb:{NFSU2_TR(0x5a08bb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a08bc:{NFSU2_TR(0x5a08bc);
__builtin_memmove((R+28),(R+4),4);
}
B5a08be:{NFSU2_TR(0x5a08be);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5a08c2:{NFSU2_TR(0x5a08c2);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5a08c4:{NFSU2_TR(0x5a08c4);
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
B5a08c6:{NFSU2_TR(0x5a08c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a08ce:{NFSU2_TR(0x5a08ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a08d2:{NFSU2_TR(0x5a08d2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5a0983;}}
}
B5a08d8:L5a08d8:{c.instructions+=3;NFSU2_TR(0x5a08d8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a08d9:{NFSU2_TR(0x5a08d9);
__builtin_memmove((R+4),(R+28),4);
}
B5a08db:{NFSU2_TR(0x5a08db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a08e0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a0820u);}goto L5a0820;}
}
B5a08e0:L5a08e0:{c.instructions+=5;NFSU2_TR(0x5a08e0);
__builtin_memmove((R+24),(R+0),4);
}
B5a08e2:{NFSU2_TR(0x5a08e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a08e5:{NFSU2_TR(0x5a08e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a08eb:{NFSU2_TR(0x5a08eb);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5a08ef:{NFSU2_TR(0x5a08ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a0906;}}
}
B5a08f1:L5a08f1:{c.instructions+=7;NFSU2_TR(0x5a08f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a08f4:{NFSU2_TR(0x5a08f4);
{u32 ea_=u32(r4(R+0)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a08f7:{NFSU2_TR(0x5a08f7);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5a08f9:{NFSU2_TR(0x5a08f9);
{u32 ea_=u32(u32(7881944u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a08ff:{NFSU2_TR(0x5a08ff);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a0901:{NFSU2_TR(0x5a0901);
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
B5a0904:{NFSU2_TR(0x5a0904);
if(r1(R+518)){{goto L5a0927;}}
}
B5a0906:L5a0906:{c.instructions+=3;NFSU2_TR(0x5a0906);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a090c:{NFSU2_TR(0x5a090c);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5a0910:{NFSU2_TR(0x5a0910);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a0976;}}
}
B5a0912:L5a0912:{c.instructions+=7;NFSU2_TR(0x5a0912);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a0915:{NFSU2_TR(0x5a0915);
{u32 ea_=u32(r4(R+4)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0918:{NFSU2_TR(0x5a0918);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5a091a:{NFSU2_TR(0x5a091a);
{u32 ea_=u32(u32(7881944u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a0920:{NFSU2_TR(0x5a0920);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a0922:{NFSU2_TR(0x5a0922);
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
B5a0925:{NFSU2_TR(0x5a0925);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a0976;}}
}
B5a0927:L5a0927:{c.instructions+=3;NFSU2_TR(0x5a0927);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5a0929:{NFSU2_TR(0x5a0929);
__builtin_memmove((R+4),(R+28),4);
}
B5a092b:{NFSU2_TR(0x5a092b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a092eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5a092e:L5a092e:{c.instructions+=15;NFSU2_TR(0x5a092e);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0931:{NFSU2_TR(0x5a0931);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a0934:{NFSU2_TR(0x5a0934);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0937:{NFSU2_TR(0x5a0937);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5a093b:{NFSU2_TR(0x5a093b);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a093e:{NFSU2_TR(0x5a093e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0940:{NFSU2_TR(0x5a0940);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a0944:{NFSU2_TR(0x5a0944);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a0947:{NFSU2_TR(0x5a0947);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0948:{NFSU2_TR(0x5a0948);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0949:{NFSU2_TR(0x5a0949);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a094d:{NFSU2_TR(0x5a094d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a094f:{NFSU2_TR(0x5a094f);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a0953:{NFSU2_TR(0x5a0953);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a0957:{NFSU2_TR(0x5a0957);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a095cull));
TAIL_STATIC(0x43cf10u,43c);
}
B5a095c:L5a095c:{c.instructions+=6;NFSU2_TR(0x5a095c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0960:{NFSU2_TR(0x5a0960);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5a0963:{NFSU2_TR(0x5a0963);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a0967:{NFSU2_TR(0x5a0967);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a0969:{NFSU2_TR(0x5a0969);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a096c:{NFSU2_TR(0x5a096c);
if(r1(R+518)){{goto L5a0976;}}
}
B5a096e:L5a096e:{c.instructions+=2;NFSU2_TR(0x5a096e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a0972:{NFSU2_TR(0x5a0972);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a0976:L5a0976:{c.instructions+=4;NFSU2_TR(0x5a0976);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a097a:{NFSU2_TR(0x5a097a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5a097b:{NFSU2_TR(0x5a097b);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a097d:{NFSU2_TR(0x5a097d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a08d8u);}goto L5a08d8;}}
}
B5a0983:L5a0983:{c.instructions+=7;NFSU2_TR(0x5a0983);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0987:{NFSU2_TR(0x5a0987);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a0988:{NFSU2_TR(0x5a0988);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a0989:{NFSU2_TR(0x5a0989);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a098a:{NFSU2_TR(0x5a098a);
__builtin_memmove((R+16),(R+20),4);
}
B5a098c:{NFSU2_TR(0x5a098c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a098d:{NFSU2_TR(0x5a098d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a0990:L5a0990:{c.instructions+=5;NFSU2_TR(0x5a0990);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0991:{NFSU2_TR(0x5a0991);
__builtin_memmove((R+24),(R+4),4);
}
B5a0993:{NFSU2_TR(0x5a0993);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a0996:{NFSU2_TR(0x5a0996);
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
B5a0998:{NFSU2_TR(0x5a0998);
if(r1(R+518)){{goto L5a09ba;}}
}
B5a099a:L5a099a:{c.instructions+=10;NFSU2_TR(0x5a099a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a099e:{NFSU2_TR(0x5a099e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a09a2:{NFSU2_TR(0x5a09a2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a09a6:{NFSU2_TR(0x5a09a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a09a7:{NFSU2_TR(0x5a09a7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a09ab:{NFSU2_TR(0x5a09ab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a09ac:{NFSU2_TR(0x5a09ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a09af:{NFSU2_TR(0x5a09af);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a09b0:{NFSU2_TR(0x5a09b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a09b1:{NFSU2_TR(0x5a09b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a09b6ull));
TAIL_STATIC(0x59bec0u,59b);
}
B5a09b6:L5a09b6:{c.instructions+=2;NFSU2_TR(0x5a09b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a09b7:{NFSU2_TR(0x5a09b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a09ba:L5a09ba:{c.instructions+=3;NFSU2_TR(0x5a09ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5a09bc:{NFSU2_TR(0x5a09bc);
__builtin_memmove((R+4),(R+24),4);
}
B5a09be:{NFSU2_TR(0x5a09be);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a09c1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5a09c1:L5a09c1:{c.instructions+=11;NFSU2_TR(0x5a09c1);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a09c4:{NFSU2_TR(0x5a09c4);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a09c7:{NFSU2_TR(0x5a09c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5a09c9:{NFSU2_TR(0x5a09c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a09cd:{NFSU2_TR(0x5a09cd);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a09cf:{NFSU2_TR(0x5a09cf);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a09d2:{NFSU2_TR(0x5a09d2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5a09d4:{NFSU2_TR(0x5a09d4);
__builtin_memmove((R+4),(R+24),4);
}
B5a09d6:{NFSU2_TR(0x5a09d6);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a09d9:{NFSU2_TR(0x5a09d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5a09db:{NFSU2_TR(0x5a09db);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a09deull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5a09de:L5a09de:{c.instructions+=10;NFSU2_TR(0x5a09de);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a09e1:{NFSU2_TR(0x5a09e1);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a09e4:{NFSU2_TR(0x5a09e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5a09e6:{NFSU2_TR(0x5a09e6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a09ea:{NFSU2_TR(0x5a09ea);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a09ec:{NFSU2_TR(0x5a09ec);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a09ef:{NFSU2_TR(0x5a09ef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5a09f1:{NFSU2_TR(0x5a09f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a09f2:{NFSU2_TR(0x5a09f2);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a09f5:{NFSU2_TR(0x5a09f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a0a00:L5a0a00:{c.instructions+=27;NFSU2_TR(0x5a0a00);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0a01:{NFSU2_TR(0x5a0a01);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a0a04:{NFSU2_TR(0x5a0a04);
{u32 ea_=u32(r4(R+4)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0a07:{NFSU2_TR(0x5a0a07);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a0a0b:{NFSU2_TR(0x5a0a0b);
{u32 ea_=u32(r4(R+4)+u32(168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a0a11:{NFSU2_TR(0x5a0a11);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a0a15:{NFSU2_TR(0x5a0a15);
{u32 ea_=u32(r4(R+4)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0a18:{NFSU2_TR(0x5a0a18);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0a19:{NFSU2_TR(0x5a0a19);
{u32 ea_=u32(r4(R+4)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a0a1f:{NFSU2_TR(0x5a0a1f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0a20:{NFSU2_TR(0x5a0a20);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a0a22:{NFSU2_TR(0x5a0a22);
{u32 ea_=u32(r4(R+4)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0a25:{NFSU2_TR(0x5a0a25);
{u32 ea_=u32(r4(R+4)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a0a2b:{NFSU2_TR(0x5a0a2b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a0a2d:{NFSU2_TR(0x5a0a2d);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a0a33:{NFSU2_TR(0x5a0a33);
{u32 ea_=u32(r4(R+4)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0a39:{NFSU2_TR(0x5a0a39);
{u32 ea_=u32(r4(R+4)+u32(200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a0a3f:{NFSU2_TR(0x5a0a3f);
{u32 ea_=u32(r4(R+4)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0a45:{NFSU2_TR(0x5a0a45);
{u32 ea_=u32(r4(R+4)+u32(196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a0a4b:{NFSU2_TR(0x5a0a4b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a0a4d:{NFSU2_TR(0x5a0a4d);
{u32 ea_=u32(r4(R+4)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0a53:{NFSU2_TR(0x5a0a53);
{u32 ea_=u32(r4(R+4)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a0a59:{NFSU2_TR(0x5a0a59);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a0a5b:{NFSU2_TR(0x5a0a5b);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a0a61:{NFSU2_TR(0x5a0a61);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a0a63:{NFSU2_TR(0x5a0a63);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a0a67:{NFSU2_TR(0x5a0a67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a0a6cull));
TAIL_STATIC(0x59bfd0u,59b);
}
B5a0a6c:L5a0a6c:{c.instructions+=3;NFSU2_TR(0x5a0a6c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a0a70:{NFSU2_TR(0x5a0a70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5a0a71:{NFSU2_TR(0x5a0a71);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a0a80:L5a0a80:{c.instructions+=6;NFSU2_TR(0x5a0a80);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a0a86:{NFSU2_TR(0x5a0a86);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a0a89:{NFSU2_TR(0x5a0a89);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0a8a:{NFSU2_TR(0x5a0a8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a0a8d:{NFSU2_TR(0x5a0a8d);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5a0a91:{NFSU2_TR(0x5a0a91);
if(r1(R+518)){{goto L5a0adb;}}
}
B5a0a93:L5a0a93:{c.instructions+=3;NFSU2_TR(0x5a0a93);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a0a99:{NFSU2_TR(0x5a0a99);
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
B5a0a9b:{NFSU2_TR(0x5a0a9b);
if(r1(R+518)){{goto L5a0adb;}}
}
B5a0a9d:L5a0a9d:{c.instructions+=3;NFSU2_TR(0x5a0a9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a0aa1:{NFSU2_TR(0x5a0aa1);
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
B5a0aa3:{NFSU2_TR(0x5a0aa3);
if(r1(R+518)){{goto L5a0adb;}}
}
B5a0aa5:L5a0aa5:{c.instructions+=2;NFSU2_TR(0x5a0aa5);
u8 U[22];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x4ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5a0aac:{NFSU2_TR(0x5a0aac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a0adb;}}
}
B5a0aae:L5a0aae:{c.instructions+=3;NFSU2_TR(0x5a0aae);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B5a0ab2:{NFSU2_TR(0x5a0ab2);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a0ab4:{NFSU2_TR(0x5a0ab4);
if(r1(R+518)){{goto L5a0ac1;}}
}
B5a0ab6:L5a0ab6:{c.instructions+=2;NFSU2_TR(0x5a0ab6);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B5a0ab9:{NFSU2_TR(0x5a0ab9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a0adb;}}
}
B5a0abb:L5a0abb:{c.instructions+=3;NFSU2_TR(0x5a0abb);
__builtin_memmove((R+0),(R+4),4);
}
B5a0abd:{NFSU2_TR(0x5a0abd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a0abe:{NFSU2_TR(0x5a0abe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a0ac1:L5a0ac1:{c.instructions+=3;NFSU2_TR(0x5a0ac1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a0ac7:{NFSU2_TR(0x5a0ac7);
u8 U[22];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x4ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5a0ace:{NFSU2_TR(0x5a0ace);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a0adb;}}
}
B5a0ad0:L5a0ad0:{c.instructions+=3;NFSU2_TR(0x5a0ad0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a0ad3:{NFSU2_TR(0x5a0ad3);
u8 U[22];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5a0ad7:{NFSU2_TR(0x5a0ad7);
if(r1(R+518)){{goto L5a0adb;}}
}
B5a0ad9:L5a0ad9:{c.instructions+=1;NFSU2_TR(0x5a0ad9);
__builtin_memmove((R+0),(R+4),4);
}
B5a0adb:L5a0adb:{c.instructions+=2;NFSU2_TR(0x5a0adb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a0adc:{NFSU2_TR(0x5a0adc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a0ae0:L5a0ae0:{c.instructions+=4;NFSU2_TR(0x5a0ae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a0ae6:{NFSU2_TR(0x5a0ae6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a0aec:{NFSU2_TR(0x5a0aec);
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
B5a0aee:{NFSU2_TR(0x5a0aee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a0af5;}}
}
B5a0af0:L5a0af0:{c.instructions+=1;NFSU2_TR(0x5a0af0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a08b0u);}goto L5a08b0;}
}
B5a0af5:L5a0af5:{c.instructions+=2;NFSU2_TR(0x5a0af5);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0afb:{NFSU2_TR(0x5a0afb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a0b00:L5a0b00:{c.instructions+=19;NFSU2_TR(0x5a0b00);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0b01:{NFSU2_TR(0x5a0b01);
__builtin_memmove((R+20),(R+16),4);
}
B5a0b03:{NFSU2_TR(0x5a0b03);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5a0b06:{NFSU2_TR(0x5a0b06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B5a0b09:{NFSU2_TR(0x5a0b09);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0b0f:{NFSU2_TR(0x5a0b0f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0b10:{NFSU2_TR(0x5a0b10);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0b16:{NFSU2_TR(0x5a0b16);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0b17:{NFSU2_TR(0x5a0b17);
{u32 ea_=u32(u32(8001668u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5a0b1d:{NFSU2_TR(0x5a0b1d);
__builtin_memmove((R+24),(R+4),4);
}
B5a0b1f:{NFSU2_TR(0x5a0b1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a0b22:{NFSU2_TR(0x5a0b22);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0b23:{NFSU2_TR(0x5a0b23);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a0b27:{NFSU2_TR(0x5a0b27);
{u32 ea_=u32(r4(R+4)+u32(360u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0b2d:{NFSU2_TR(0x5a0b2d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a0b31:{NFSU2_TR(0x5a0b31);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a0b35:{NFSU2_TR(0x5a0b35);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a0b37:{NFSU2_TR(0x5a0b37);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a0b3a:{NFSU2_TR(0x5a0b3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a0b46;}}
}
B5a0b3c:L5a0b3c:{c.instructions+=3;NFSU2_TR(0x5a0b3c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a0b3e:{NFSU2_TR(0x5a0b3e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0b42:{NFSU2_TR(0x5a0b42);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5a0b46:L5a0b46:{c.instructions+=25;NFSU2_TR(0x5a0b46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a0b49:{NFSU2_TR(0x5a0b49);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a0b4b:{NFSU2_TR(0x5a0b4b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a0b4d:{NFSU2_TR(0x5a0b4d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a0b51:{NFSU2_TR(0x5a0b51);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0b54:{NFSU2_TR(0x5a0b54);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a0b56:{NFSU2_TR(0x5a0b56);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a0b5a:{NFSU2_TR(0x5a0b5a);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0b5d:{NFSU2_TR(0x5a0b5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a0b63:{NFSU2_TR(0x5a0b63);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a0b65:{NFSU2_TR(0x5a0b65);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a0b69:{NFSU2_TR(0x5a0b69);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a0b6c:{NFSU2_TR(0x5a0b6c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a0b6f:{NFSU2_TR(0x5a0b6f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a0b71:{NFSU2_TR(0x5a0b71);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0b75:{NFSU2_TR(0x5a0b75);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a0b79:{NFSU2_TR(0x5a0b79);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0b7d:{NFSU2_TR(0x5a0b7d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a0b81:{NFSU2_TR(0x5a0b81);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a0b83:{NFSU2_TR(0x5a0b83);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0b87:{NFSU2_TR(0x5a0b87);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a0b8b:{NFSU2_TR(0x5a0b8b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a0b8d:{NFSU2_TR(0x5a0b8d);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5a0b8f:{NFSU2_TR(0x5a0b8f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a0b93:{NFSU2_TR(0x5a0b93);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a0b9f;}}
}
B5a0b95:L5a0b95:{c.instructions+=2;NFSU2_TR(0x5a0b95);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a0b9d:{NFSU2_TR(0x5a0b9d);
{goto L5a0ba9;}
}
B5a0b9f:L5a0b9f:{c.instructions+=2;NFSU2_TR(0x5a0b9f);
__builtin_memmove((R+8),gp(0x7a1888),4);
}
B5a0ba5:{NFSU2_TR(0x5a0ba5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a0ba9:L5a0ba9:{c.instructions+=7;NFSU2_TR(0x5a0ba9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a0bad:{NFSU2_TR(0x5a0bad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a0bb0:{NFSU2_TR(0x5a0bb0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0bb1:{NFSU2_TR(0x5a0bb1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0bb2:{NFSU2_TR(0x5a0bb2);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5a0bb6:{NFSU2_TR(0x5a0bb6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0bb7:{NFSU2_TR(0x5a0bb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a0bbcull));
TAIL_STATIC(0x59bd80u,59b);
}
B5a0bbc:L5a0bbc:{c.instructions+=5;NFSU2_TR(0x5a0bbc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5a0bc0:{NFSU2_TR(0x5a0bc0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0bc1:{NFSU2_TR(0x5a0bc1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0bc2:{NFSU2_TR(0x5a0bc2);
__builtin_memmove((R+4),(R+24),4);
}
B5a0bc4:{NFSU2_TR(0x5a0bc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a0bc9ull));
TAIL_STATIC(0x593bf0u,593);
}
B5a0bc9:L5a0bc9:{c.instructions+=5;NFSU2_TR(0x5a0bc9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0bca:{NFSU2_TR(0x5a0bca);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a0bce:{NFSU2_TR(0x5a0bce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0bcf:{NFSU2_TR(0x5a0bcf);
__builtin_memmove((R+4),(R+24),4);
}
B5a0bd1:{NFSU2_TR(0x5a0bd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a0bd6ull));
TAIL_STATIC(0x593c50u,593);
}
B5a0bd6:L5a0bd6:{c.instructions+=6;NFSU2_TR(0x5a0bd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a0bd7:{NFSU2_TR(0x5a0bd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a0bd8:{NFSU2_TR(0x5a0bd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a0bd9:{NFSU2_TR(0x5a0bd9);
__builtin_memmove((R+16),(R+20),4);
}
B5a0bdb:{NFSU2_TR(0x5a0bdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a0bdc:{NFSU2_TR(0x5a0bdc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a0be0:L5a0be0:{c.instructions+=4;NFSU2_TR(0x5a0be0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a0be4:{NFSU2_TR(0x5a0be4);
{u32 ea_=u32(u32(7894412u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0bea:{NFSU2_TR(0x5a0bea);
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
B5a0bec:{NFSU2_TR(0x5a0bec);
if(r1(R+518)){{goto L5a0c8d;}}
}
B5a0bf2:L5a0bf2:{c.instructions+=2;NFSU2_TR(0x5a0bf2);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x3ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x3ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x3ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5a0bf6:{NFSU2_TR(0x5a0bf6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a0c8d;}}
}
B5a0bfc:L5a0bfc:{c.instructions+=7;NFSU2_TR(0x5a0bfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a0bff:{NFSU2_TR(0x5a0bff);
{u32 ea_=u32(r4(R+0)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0c02:{NFSU2_TR(0x5a0c02);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5a0c04:{NFSU2_TR(0x5a0c04);
{u32 ea_=u32(u32(7881944u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a0c0a:{NFSU2_TR(0x5a0c0a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a0c0c:{NFSU2_TR(0x5a0c0c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a0c0f:{NFSU2_TR(0x5a0c0f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a0c5b;}}
}
B5a0c11:L5a0c11:{c.instructions+=18;NFSU2_TR(0x5a0c11);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a0c17:{NFSU2_TR(0x5a0c17);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a0c19:{NFSU2_TR(0x5a0c19);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a0c1f:{NFSU2_TR(0x5a0c1f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a0c21:{NFSU2_TR(0x5a0c21);
w4(R+4,u32(0x4ull));
}
B5a0c26:{NFSU2_TR(0x5a0c26);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B5a0c28:{NFSU2_TR(0x5a0c28);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a0c2c:{NFSU2_TR(0x5a0c2c);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a0c30:{NFSU2_TR(0x5a0c30);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x428ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a0c36:{NFSU2_TR(0x5a0c36);
w4(R+8,u32(0x4ull));
}
B5a0c3b:{NFSU2_TR(0x5a0c3b);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B5a0c3d:{NFSU2_TR(0x5a0c3d);
{u32 ea_=u32(u32(8001688u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a0c43:{NFSU2_TR(0x5a0c43);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a0c47:{NFSU2_TR(0x5a0c47);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a0c4b:{NFSU2_TR(0x5a0c4b);
{u32 ea_=u32(u32(8001684u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a0c51:{NFSU2_TR(0x5a0c51);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a0c53:{NFSU2_TR(0x5a0c53);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a0c59:{NFSU2_TR(0x5a0c59);
{goto L5a0c70;}
}
B5a0c5b:L5a0c5b:{c.instructions+=4;NFSU2_TR(0x5a0c5b);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a0c61:{NFSU2_TR(0x5a0c61);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a0c63:{NFSU2_TR(0x5a0c63);
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
B5a0c66:{NFSU2_TR(0x5a0c66);
if(r1(R+514)){{goto L5a0c8d;}}
}
B5a0c68:L5a0c68:{c.instructions+=2;NFSU2_TR(0x5a0c68);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a0c6a:{NFSU2_TR(0x5a0c6a);
{u32 ea_=u32(u32(8001680u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0c70:L5a0c70:{c.instructions+=6;NFSU2_TR(0x5a0c70);
{u32 ea_=u32(u32(7894412u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a0c76:{NFSU2_TR(0x5a0c76);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0c7c:{NFSU2_TR(0x5a0c7c);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5a0c7e:{NFSU2_TR(0x5a0c7e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a0c80:{NFSU2_TR(0x5a0c80);
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
B5a0c83:{NFSU2_TR(0x5a0c83);
if(r1(R+514)){{goto L5a0c8d;}}
}
B5a0c85:L5a0c85:{c.instructions+=2;NFSU2_TR(0x5a0c85);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a0c87:{NFSU2_TR(0x5a0c87);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0c8d:L5a0c8d:{c.instructions+=1;NFSU2_TR(0x5a0c8d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a0c90:L5a0c90:{c.instructions+=4;NFSU2_TR(0x5a0c90);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a0c94:{NFSU2_TR(0x5a0c94);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0c9a:{NFSU2_TR(0x5a0c9a);
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
B5a0c9c:{NFSU2_TR(0x5a0c9c);
if(r1(R+518)){{goto L5a0cc7;}}
}
B5a0c9e:L5a0c9e:{c.instructions+=2;NFSU2_TR(0x5a0c9e);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x3ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x3ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x3ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5a0ca2:{NFSU2_TR(0x5a0ca2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a0cc7;}}
}
B5a0ca4:L5a0ca4:{c.instructions+=7;NFSU2_TR(0x5a0ca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a0ca7:{NFSU2_TR(0x5a0ca7);
{u32 ea_=u32(r4(R+0)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0caa:{NFSU2_TR(0x5a0caa);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5a0cac:{NFSU2_TR(0x5a0cac);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a0cb2:{NFSU2_TR(0x5a0cb2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a0cb4:{NFSU2_TR(0x5a0cb4);
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
B5a0cb7:{NFSU2_TR(0x5a0cb7);
if(r1(R+514)){{goto L5a0cc7;}}
}
B5a0cb9:L5a0cb9:{c.instructions+=3;NFSU2_TR(0x5a0cb9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a0cbb:{NFSU2_TR(0x5a0cbb);
{u32 ea_=u32(u32(8001676u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0cc1:{NFSU2_TR(0x5a0cc1);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a0cc7:L5a0cc7:{c.instructions+=1;NFSU2_TR(0x5a0cc7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a0cd0:L5a0cd0:{c.instructions+=5;NFSU2_TR(0x5a0cd0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0cd1:{NFSU2_TR(0x5a0cd1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0cd2:{NFSU2_TR(0x5a0cd2);
__builtin_memmove((R+24),gp(0x86b5a0),4);
}
B5a0cd8:{NFSU2_TR(0x5a0cd8);
w4(R+4,u32(0x86b5a0ull));
}
B5a0cdd:{NFSU2_TR(0x5a0cdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a0ce2ull));
TAIL_STATIC(0x502fd0u,502);
}
B5a0ce2:L5a0ce2:{c.instructions+=3;NFSU2_TR(0x5a0ce2);
__builtin_memmove((R+12),(R+0),4);
}
B5a0ce4:{NFSU2_TR(0x5a0ce4);
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
B5a0ce6:{NFSU2_TR(0x5a0ce6);
if(r1(R+518)){{goto L5a0d09;}}
}
B5a0ce8:L5a0ce8:{c.instructions+=2;NFSU2_TR(0x5a0ce8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0ce9:{NFSU2_TR(0x5a0ce9);
__builtin_memmove((R+16),(R+16),4);
}
B5a0cf0:L5a0cf0:{c.instructions+=5;NFSU2_TR(0x5a0cf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a0cf3:{NFSU2_TR(0x5a0cf3);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5a0cf6:{NFSU2_TR(0x5a0cf6);
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
B5a0cf8:{NFSU2_TR(0x5a0cf8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5a0cfa:{NFSU2_TR(0x5a0cfa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a0d02;}}
}
B5a0cfc:L5a0cfc:{c.instructions+=3;NFSU2_TR(0x5a0cfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a0cfe:{NFSU2_TR(0x5a0cfe);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0d00:{NFSU2_TR(0x5a0d00);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a0d02ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5a0d02:L5a0d02:{c.instructions+=3;NFSU2_TR(0x5a0d02);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B5a0d04:{NFSU2_TR(0x5a0d04);
__builtin_memmove((R+24),(R+28),4);
}
B5a0d06:{NFSU2_TR(0x5a0d06);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a0cf0u);}goto L5a0cf0;}}
}
B5a0d08:L5a0d08:{c.instructions+=1;NFSU2_TR(0x5a0d08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a0d09:L5a0d09:{c.instructions+=3;NFSU2_TR(0x5a0d09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a0d0a:{NFSU2_TR(0x5a0d0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a0d0b:{NFSU2_TR(0x5a0d0b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a0d10:L5a0d10:{c.instructions+=2;NFSU2_TR(0x5a0d10);
u8 U[4];
w4(U+0,u32(0x7a1ef4ull));
s4(u32(r4(R+4)),r4(U+0));
}
B5a0d16:{NFSU2_TR(0x5a0d16);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a0d20:L5a0d20:{c.instructions+=9;NFSU2_TR(0x5a0d20);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a0d23:{NFSU2_TR(0x5a0d23);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0d24:{NFSU2_TR(0x5a0d24);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0d25:{NFSU2_TR(0x5a0d25);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0d26:{NFSU2_TR(0x5a0d26);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a0d29:{NFSU2_TR(0x5a0d29);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0d2a:{NFSU2_TR(0x5a0d2a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5a0d2c:{NFSU2_TR(0x5a0d2c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a0d2e:{NFSU2_TR(0x5a0d2e);
if(r1(R+518)){{goto L5a0d35;}}
}
B5a0d30:L5a0d30:{c.instructions+=2;NFSU2_TR(0x5a0d30);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a0d33:{NFSU2_TR(0x5a0d33);
{goto L5a0d37;}
}
B5a0d35:L5a0d35:{c.instructions+=1;NFSU2_TR(0x5a0d35);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5a0d37:L5a0d37:{c.instructions+=2;NFSU2_TR(0x5a0d37);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5a0d3b:{NFSU2_TR(0x5a0d3b);
{goto L5a0d40;}
}
B5a0d40:L5a0d40:{c.instructions+=2;NFSU2_TR(0x5a0d40);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a0d42:{NFSU2_TR(0x5a0d42);
if(r1(R+518)){{goto L5a0d49;}}
}
B5a0d44:L5a0d44:{c.instructions+=2;NFSU2_TR(0x5a0d44);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B5a0d47:{NFSU2_TR(0x5a0d47);
{goto L5a0d4b;}
}
B5a0d49:L5a0d49:{c.instructions+=1;NFSU2_TR(0x5a0d49);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5a0d4b:L5a0d4b:{c.instructions+=2;NFSU2_TR(0x5a0d4b);
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
B5a0d4d:{NFSU2_TR(0x5a0d4d);
if(r1(R+518)){{goto L5a0d74;}}
}
B5a0d4f:L5a0d4f:{c.instructions+=5;NFSU2_TR(0x5a0d4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a0d51:{NFSU2_TR(0x5a0d51);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5a0d55:{NFSU2_TR(0x5a0d55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0d56:{NFSU2_TR(0x5a0d56);
__builtin_memmove((R+4),(R+24),4);
}
B5a0d58:{NFSU2_TR(0x5a0d58);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a0d5bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5a0d5b:L5a0d5b:{c.instructions+=3;NFSU2_TR(0x5a0d5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5a0d5d:{NFSU2_TR(0x5a0d5d);
__builtin_memmove((R+4),(R+24),4);
}
B5a0d5f:{NFSU2_TR(0x5a0d5f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a0d62ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5a0d62:L5a0d62:{c.instructions+=4;NFSU2_TR(0x5a0d62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a0d65:{NFSU2_TR(0x5a0d65);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B5a0d67:{NFSU2_TR(0x5a0d67);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a0d69:{NFSU2_TR(0x5a0d69);
if(r1(R+518)){{goto L5a0d70;}}
}
B5a0d6b:L5a0d6b:{c.instructions+=2;NFSU2_TR(0x5a0d6b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B5a0d6e:{NFSU2_TR(0x5a0d6e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a0d40u);}goto L5a0d40;}
}
B5a0d70:L5a0d70:{c.instructions+=2;NFSU2_TR(0x5a0d70);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5a0d72:{NFSU2_TR(0x5a0d72);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a0d40u);}goto L5a0d40;}
}
B5a0d74:L5a0d74:{c.instructions+=5;NFSU2_TR(0x5a0d74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a0d75:{NFSU2_TR(0x5a0d75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a0d76:{NFSU2_TR(0x5a0d76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a0d77:{NFSU2_TR(0x5a0d77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a0d78:{NFSU2_TR(0x5a0d78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a0d80:L5a0d80:{c.instructions+=6;NFSU2_TR(0x5a0d80);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a0d83:{NFSU2_TR(0x5a0d83);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a0d85:{NFSU2_TR(0x5a0d85);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0d86:{NFSU2_TR(0x5a0d86);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0d87:{NFSU2_TR(0x5a0d87);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a0d8a:{NFSU2_TR(0x5a0d8a);
if(r1(R+518)){{goto L5a0d91;}}
}
B5a0d8c:L5a0d8c:{c.instructions+=2;NFSU2_TR(0x5a0d8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a0d8f:{NFSU2_TR(0x5a0d8f);
{goto L5a0d93;}
}
B5a0d91:L5a0d91:{c.instructions+=1;NFSU2_TR(0x5a0d91);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5a0d93:L5a0d93:{c.instructions+=2;NFSU2_TR(0x5a0d93);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a0d95:{NFSU2_TR(0x5a0d95);
if(r1(R+518)){{goto L5a0d9c;}}
}
B5a0d97:L5a0d97:{c.instructions+=2;NFSU2_TR(0x5a0d97);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B5a0d9a:{NFSU2_TR(0x5a0d9a);
{goto L5a0d9e;}
}
B5a0d9c:L5a0d9c:{c.instructions+=1;NFSU2_TR(0x5a0d9c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5a0d9e:L5a0d9e:{c.instructions+=2;NFSU2_TR(0x5a0d9e);
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
B5a0da0:{NFSU2_TR(0x5a0da0);
if(r1(R+518)){{goto L5a0db5;}}
}
B5a0da2:L5a0da2:{c.instructions+=3;NFSU2_TR(0x5a0da2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a0da4:{NFSU2_TR(0x5a0da4);
__builtin_memmove((R+4),(R+24),4);
}
B5a0da6:{NFSU2_TR(0x5a0da6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a0da9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5a0da9:L5a0da9:{c.instructions+=3;NFSU2_TR(0x5a0da9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a0dac:{NFSU2_TR(0x5a0dac);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a0dae:{NFSU2_TR(0x5a0dae);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a0d91u);}goto L5a0d91;}}
}
B5a0db0:L5a0db0:{c.instructions+=2;NFSU2_TR(0x5a0db0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B5a0db3:{NFSU2_TR(0x5a0db3);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a0d93u);}goto L5a0d93;}
}
B5a0db5:L5a0db5:{c.instructions+=3;NFSU2_TR(0x5a0db5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a0db6:{NFSU2_TR(0x5a0db6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a0db7:{NFSU2_TR(0x5a0db7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a0dc0:L5a0dc0:{c.instructions+=12;NFSU2_TR(0x5a0dc0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0dc1:{NFSU2_TR(0x5a0dc1);
__builtin_memmove((R+20),(R+16),4);
}
B5a0dc3:{NFSU2_TR(0x5a0dc3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5a0dc6:{NFSU2_TR(0x5a0dc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B5a0dc9:{NFSU2_TR(0x5a0dc9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0dca:{NFSU2_TR(0x5a0dca);
__builtin_memmove((R+24),(R+4),4);
}
B5a0dcc:{NFSU2_TR(0x5a0dcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a0dcf:{NFSU2_TR(0x5a0dcf);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5a0dd2:{NFSU2_TR(0x5a0dd2);
w1(R+8,u8(0x3ull));
}
B5a0dd4:{NFSU2_TR(0x5a0dd4);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5a0dd6:{NFSU2_TR(0x5a0dd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a0dd9:{NFSU2_TR(0x5a0dd9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a0e26;}}
}
B5a0ddb:L5a0ddb:{c.instructions+=3;NFSU2_TR(0x5a0ddb);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5a0dde:{NFSU2_TR(0x5a0dde);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a0de0:{NFSU2_TR(0x5a0de0);
if(r1(R+518)){{goto L5a0e9a;}}
}
B5a0de6:L5a0de6:{c.instructions+=7;NFSU2_TR(0x5a0de6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0de8:{NFSU2_TR(0x5a0de8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0de9:{NFSU2_TR(0x5a0de9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0dea:{NFSU2_TR(0x5a0dea);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a0dee:{NFSU2_TR(0x5a0dee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0def:{NFSU2_TR(0x5a0def);
__builtin_memmove((R+4),(R+24),4);
}
B5a0df1:{NFSU2_TR(0x5a0df1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a0df6ull));
TAIL_STATIC(0x593df0u,593);
}
B5a0df6:L5a0df6:{c.instructions+=5;NFSU2_TR(0x5a0df6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a0df9:{NFSU2_TR(0x5a0df9);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+4)),r4(U+0));
}
B5a0dff:{NFSU2_TR(0x5a0dff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a0e02:{NFSU2_TR(0x5a0e02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5a0e04:{NFSU2_TR(0x5a0e04);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a0e07ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5a0e07:L5a0e07:{c.instructions+=12;NFSU2_TR(0x5a0e07);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0e0b:{NFSU2_TR(0x5a0e0b);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a0e0e:{NFSU2_TR(0x5a0e0e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0e12:{NFSU2_TR(0x5a0e12);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a0e15:{NFSU2_TR(0x5a0e15);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a0e17:{NFSU2_TR(0x5a0e17);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0e1b:{NFSU2_TR(0x5a0e1b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a0e1d:{NFSU2_TR(0x5a0e1d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a0e1f:{NFSU2_TR(0x5a0e1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a0e20:{NFSU2_TR(0x5a0e20);
__builtin_memmove((R+16),(R+20),4);
}
B5a0e22:{NFSU2_TR(0x5a0e22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a0e23:{NFSU2_TR(0x5a0e23);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a0e26:L5a0e26:{c.instructions+=2;NFSU2_TR(0x5a0e26);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+8))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+8)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5a0e29:{NFSU2_TR(0x5a0e29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a0e9a;}}
}
B5a0e2b:L5a0e2b:{c.instructions+=3;NFSU2_TR(0x5a0e2b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5a0e2e:{NFSU2_TR(0x5a0e2e);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a0e30:{NFSU2_TR(0x5a0e30);
if(r1(R+518)){{goto L5a0e9a;}}
}
B5a0e32:L5a0e32:{c.instructions+=7;NFSU2_TR(0x5a0e32);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0e34:{NFSU2_TR(0x5a0e34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0e35:{NFSU2_TR(0x5a0e35);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0e36:{NFSU2_TR(0x5a0e36);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a0e3a:{NFSU2_TR(0x5a0e3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0e3b:{NFSU2_TR(0x5a0e3b);
__builtin_memmove((R+4),(R+24),4);
}
B5a0e3d:{NFSU2_TR(0x5a0e3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a0e42ull));
TAIL_STATIC(0x593df0u,593);
}
B5a0e42:L5a0e42:{c.instructions+=17;NFSU2_TR(0x5a0e42);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0e46:{NFSU2_TR(0x5a0e46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a0e49:{NFSU2_TR(0x5a0e49);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a0e4b:{NFSU2_TR(0x5a0e4b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0e4f:{NFSU2_TR(0x5a0e4f);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+8)),r4(U+0));
}
B5a0e55:{NFSU2_TR(0x5a0e55);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a0e57:{NFSU2_TR(0x5a0e57);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0e5b:{NFSU2_TR(0x5a0e5b);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a0e5d:{NFSU2_TR(0x5a0e5d);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a0e61:{NFSU2_TR(0x5a0e61);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a0e65:{NFSU2_TR(0x5a0e65);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a0e67:{NFSU2_TR(0x5a0e67);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a0e6b:{NFSU2_TR(0x5a0e6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a0e6e:{NFSU2_TR(0x5a0e6e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a0e72:{NFSU2_TR(0x5a0e72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a0e74:{NFSU2_TR(0x5a0e74);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a0e78:{NFSU2_TR(0x5a0e78);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a0e7bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5a0e7b:L5a0e7b:{c.instructions+=12;NFSU2_TR(0x5a0e7b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0e7f:{NFSU2_TR(0x5a0e7f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a0e82:{NFSU2_TR(0x5a0e82);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0e86:{NFSU2_TR(0x5a0e86);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a0e89:{NFSU2_TR(0x5a0e89);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a0e8b:{NFSU2_TR(0x5a0e8b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0e8f:{NFSU2_TR(0x5a0e8f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a0e91:{NFSU2_TR(0x5a0e91);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a0e93:{NFSU2_TR(0x5a0e93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a0e94:{NFSU2_TR(0x5a0e94);
__builtin_memmove((R+16),(R+20),4);
}
B5a0e96:{NFSU2_TR(0x5a0e96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a0e97:{NFSU2_TR(0x5a0e97);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a0e9a:L5a0e9a:{c.instructions+=7;NFSU2_TR(0x5a0e9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a0e9d:{NFSU2_TR(0x5a0e9d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0ea3:{NFSU2_TR(0x5a0ea3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a0ea4:{NFSU2_TR(0x5a0ea4);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B5a0eaa:{NFSU2_TR(0x5a0eaa);
__builtin_memmove((R+16),(R+20),4);
}
B5a0eac:{NFSU2_TR(0x5a0eac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a0ead:{NFSU2_TR(0x5a0ead);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a0eb0:L5a0eb0:{c.instructions+=11;NFSU2_TR(0x5a0eb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a0eb4:{NFSU2_TR(0x5a0eb4);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0eb7:{NFSU2_TR(0x5a0eb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5a0eba:{NFSU2_TR(0x5a0eba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0ebb:{NFSU2_TR(0x5a0ebb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a0ebf:{NFSU2_TR(0x5a0ebf);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a0ec2:{NFSU2_TR(0x5a0ec2);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5a0ec4:{NFSU2_TR(0x5a0ec4);
{u32 ea_=u32(u32(8371984u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a0eca:{NFSU2_TR(0x5a0eca);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a0ecc:{NFSU2_TR(0x5a0ecc);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a0ecf:{NFSU2_TR(0x5a0ecf);
if(r1(R+514)){{goto L5a0f09;}}
}
B5a0ed1:L5a0ed1:{c.instructions+=3;NFSU2_TR(0x5a0ed1);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a0ed5:{NFSU2_TR(0x5a0ed5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0ed6:{NFSU2_TR(0x5a0ed6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a0edbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a0dc0u);}goto L5a0dc0;}
}
B5a0edb:L5a0edb:{c.instructions+=5;NFSU2_TR(0x5a0edb);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a0edf:{NFSU2_TR(0x5a0edf);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5a0ee3:{NFSU2_TR(0x5a0ee3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0ee4:{NFSU2_TR(0x5a0ee4);
__builtin_memmove((R+4),(R+24),4);
}
B5a0ee6:{NFSU2_TR(0x5a0ee6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a0eebull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a0dc0u);}goto L5a0dc0;}
}
B5a0eeb:L5a0eeb:{c.instructions+=4;NFSU2_TR(0x5a0eeb);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a0eef:{NFSU2_TR(0x5a0eef);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a0ef3:{NFSU2_TR(0x5a0ef3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a0ef5:{NFSU2_TR(0x5a0ef5);
if(r1(R+518)){{goto L5a0f1d;}}
}
B5a0ef7:L5a0ef7:{c.instructions+=3;NFSU2_TR(0x5a0ef7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a0efb:{NFSU2_TR(0x5a0efb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a0efd:{NFSU2_TR(0x5a0efd);
if(r1(R+518)){{goto L5a0f1d;}}
}
B5a0eff:L5a0eff:{c.instructions+=3;NFSU2_TR(0x5a0eff);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0f03:{NFSU2_TR(0x5a0f03);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a0f07:{NFSU2_TR(0x5a0f07);
{goto L5a0f0f;}
}
B5a0f09:L5a0f09:{c.instructions+=2;NFSU2_TR(0x5a0f09);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0f0c:{NFSU2_TR(0x5a0f0c);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a0f0f:L5a0f0f:{c.instructions+=3;NFSU2_TR(0x5a0f0f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a0f11:{NFSU2_TR(0x5a0f11);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a0f14:{NFSU2_TR(0x5a0f14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a0f1d;}}
}
B5a0f16:L5a0f16:{c.instructions+=4;NFSU2_TR(0x5a0f16);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5a0f18:{NFSU2_TR(0x5a0f18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a0f19:{NFSU2_TR(0x5a0f19);
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
B5a0f1c:{NFSU2_TR(0x5a0f1c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a0f1d:L5a0f1d:{c.instructions+=4;NFSU2_TR(0x5a0f1d);
w4(R+0,u32(0x1ull));
}
B5a0f22:{NFSU2_TR(0x5a0f22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a0f23:{NFSU2_TR(0x5a0f23);
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
B5a0f26:{NFSU2_TR(0x5a0f26);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a0f30:L5a0f30:{c.instructions+=8;NFSU2_TR(0x5a0f30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5a0f33:{NFSU2_TR(0x5a0f33);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0f34:{NFSU2_TR(0x5a0f34);
__builtin_memmove((R+24),(R+4),4);
}
B5a0f36:{NFSU2_TR(0x5a0f36);
{u32 ea_=u32(r4(R+24)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0f3c:{NFSU2_TR(0x5a0f3c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a0f42:{NFSU2_TR(0x5a0f42);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a0f44:{NFSU2_TR(0x5a0f44);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a0f47:{NFSU2_TR(0x5a0f47);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){TAIL_STATIC(0x5a11ccu,5a1);}
}
B5a0f4d:L5a0f4d:{c.instructions+=5;NFSU2_TR(0x5a0f4d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0f51:{NFSU2_TR(0x5a0f51);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a0f57:{NFSU2_TR(0x5a0f57);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a0f59:{NFSU2_TR(0x5a0f59);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a0f5c:{NFSU2_TR(0x5a0f5c);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){TAIL_STATIC(0x5a11ccu,5a1);}
}
B5a0f62:L5a0f62:{c.instructions+=15;NFSU2_TR(0x5a0f62);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0f65:{NFSU2_TR(0x5a0f65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a0f6b:{NFSU2_TR(0x5a0f6b);
{u32 ea_=u32(u32(8002856u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a0f71:{NFSU2_TR(0x5a0f71);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0f72:{NFSU2_TR(0x5a0f72);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5a0f74:{NFSU2_TR(0x5a0f74);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5a0f76:{NFSU2_TR(0x5a0f76);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a0f7a:{NFSU2_TR(0x5a0f7a);
{u32 ea_=u32(r4(R+24)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0f80:{NFSU2_TR(0x5a0f80);
{u32 ea_=u32(u32(8001764u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5a0f86:{NFSU2_TR(0x5a0f86);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a0f8a:{NFSU2_TR(0x5a0f8a);
{u32 ea_=u32(u32(8001768u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0f90:{NFSU2_TR(0x5a0f90);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a0f94:{NFSU2_TR(0x5a0f94);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a0f96:{NFSU2_TR(0x5a0f96);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a0f9a:{NFSU2_TR(0x5a0f9a);
if(r1(R+518)){TAIL_STATIC(0x5a1178u,5a1);}
}
B5a0fa0:L5a0fa0:{c.instructions+=2;NFSU2_TR(0x5a0fa0);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5a0fa1:{NFSU2_TR(0x5a0fa1);
if(r1(R+518)){TAIL_STATIC(0x5a10dcu,5a1);}
}
B5a0fa7:L5a0fa7:{c.instructions+=2;NFSU2_TR(0x5a0fa7);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5a0fa8:{NFSU2_TR(0x5a0fa8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5a11cbu,5a1);}
}
B5a0fae:L5a0fae:{c.instructions+=13;NFSU2_TR(0x5a0fae);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0fb4:{NFSU2_TR(0x5a0fb4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0fb5:{NFSU2_TR(0x5a0fb5);
{u32 ea_=u32(u32(7894424u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a0fbb:{NFSU2_TR(0x5a0fbb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0fbc:{NFSU2_TR(0x5a0fbc);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5a0fbe:{NFSU2_TR(0x5a0fbe);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a0fc0:{NFSU2_TR(0x5a0fc0);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5a0fc2:{NFSU2_TR(0x5a0fc2);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a0fc4:{NFSU2_TR(0x5a0fc4);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5a0fc6:{NFSU2_TR(0x5a0fc6);
{u32 ea_=u32(u32(8001792u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a0fcc:{NFSU2_TR(0x5a0fcc);
{u32 ea_=u32(u32(7881300u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a0fd2:{NFSU2_TR(0x5a0fd2);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a0fd5:{NFSU2_TR(0x5a0fd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a0fdaull));
TAIL_STATIC(0x43c350u,43c);
}
B5a0fda:L5a0fda:{c.instructions+=10;NFSU2_TR(0x5a0fda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a0fe0:{NFSU2_TR(0x5a0fe0);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0fe4:{NFSU2_TR(0x5a0fe4);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B5a0fe6:{NFSU2_TR(0x5a0fe6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5a0fe9:{NFSU2_TR(0x5a0fe9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a0fea:{NFSU2_TR(0x5a0fea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5a0fed:{NFSU2_TR(0x5a0fed);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a0ff1:{NFSU2_TR(0x5a0ff1);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a0ff7:{NFSU2_TR(0x5a0ff7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5a0ffb:{NFSU2_TR(0x5a0ffb);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
TAIL_STATIC(0x5a1001u,5a1);
}
XIT:NFSU2_TR_EXIT(0x5a0,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
