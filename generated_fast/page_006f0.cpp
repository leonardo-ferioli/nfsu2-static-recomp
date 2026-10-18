#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_6e3(u8* __restrict R,Cpu& c);
u32 body_6e4(u8* __restrict R,Cpu& c);
u32 body_6ef(u8* __restrict R,Cpu& c);
u32 body_6f1(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6f0,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6f0,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6f0(u8* __restrict R,Cpu& c);
u32 page_6f0(Cpu& c){return body_6f0(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6f0(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6f0003:goto L6f0003;
case 0x6f0006:c.instructions+=10;goto B6f0006;
case 0x6f0009:c.instructions+=9;goto B6f0009;
case 0x6f000d:c.instructions+=8;goto B6f000d;
case 0x6f0011:c.instructions+=7;goto B6f0011;
case 0x6f0015:c.instructions+=6;goto B6f0015;
case 0x6f0018:c.instructions+=5;goto B6f0018;
case 0x6f001b:c.instructions+=4;goto B6f001b;
case 0x6f001f:c.instructions+=3;goto B6f001f;
case 0x6f0022:c.instructions+=2;goto B6f0022;
case 0x6f0025:c.instructions+=1;goto B6f0025;
case 0x6f002b:goto L6f002b;
case 0x6f002f:c.instructions+=3;goto B6f002f;
case 0x6f0033:c.instructions+=2;goto B6f0033;
case 0x6f0035:c.instructions+=1;goto B6f0035;
case 0x6f0037:goto L6f0037;
case 0x6f003b:c.instructions+=4;goto B6f003b;
case 0x6f003d:c.instructions+=3;goto B6f003d;
case 0x6f0040:c.instructions+=2;goto B6f0040;
case 0x6f0042:c.instructions+=1;goto B6f0042;
case 0x6f0044:goto L6f0044;
case 0x6f0047:c.instructions+=12;goto B6f0047;
case 0x6f004b:c.instructions+=11;goto B6f004b;
case 0x6f004e:c.instructions+=10;goto B6f004e;
case 0x6f0051:c.instructions+=9;goto B6f0051;
case 0x6f0055:c.instructions+=8;goto B6f0055;
case 0x6f0058:c.instructions+=7;goto B6f0058;
case 0x6f0059:c.instructions+=6;goto B6f0059;
case 0x6f005c:c.instructions+=5;goto B6f005c;
case 0x6f005f:c.instructions+=4;goto B6f005f;
case 0x6f0063:c.instructions+=3;goto B6f0063;
case 0x6f0066:c.instructions+=2;goto B6f0066;
case 0x6f0069:c.instructions+=1;goto B6f0069;
case 0x6f006b:goto L6f006b;
case 0x6f006f:c.instructions+=4;goto B6f006f;
case 0x6f0070:c.instructions+=3;goto B6f0070;
case 0x6f0072:c.instructions+=2;goto B6f0072;
case 0x6f0076:c.instructions+=1;goto B6f0076;
case 0x6f007c:goto L6f007c;
case 0x6f0080:c.instructions+=1;goto B6f0080;
case 0x6f0086:goto L6f0086;
case 0x6f0087:c.instructions+=5;goto B6f0087;
case 0x6f0088:c.instructions+=4;goto B6f0088;
case 0x6f0089:c.instructions+=3;goto B6f0089;
case 0x6f008a:c.instructions+=2;goto B6f008a;
case 0x6f008d:c.instructions+=1;goto B6f008d;
case 0x6f0090:goto L6f0090;
case 0x6f0093:c.instructions+=3;goto B6f0093;
case 0x6f0095:c.instructions+=2;goto B6f0095;
case 0x6f0097:c.instructions+=1;goto B6f0097;
case 0x6f009d:goto L6f009d;
case 0x6f009f:c.instructions+=1;goto B6f009f;
case 0x6f00a3:goto L6f00a3;
case 0x6f00a7:c.instructions+=5;goto B6f00a7;
case 0x6f00ab:c.instructions+=4;goto B6f00ab;
case 0x6f00ad:c.instructions+=3;goto B6f00ad;
case 0x6f00af:c.instructions+=2;goto B6f00af;
case 0x6f00b3:c.instructions+=1;goto B6f00b3;
case 0x6f00b9:goto L6f00b9;
case 0x6f00c0:goto L6f00c0;
case 0x6f00c4:c.instructions+=5;goto B6f00c4;
case 0x6f00c8:c.instructions+=4;goto B6f00c8;
case 0x6f00ca:c.instructions+=3;goto B6f00ca;
case 0x6f00cd:c.instructions+=2;goto B6f00cd;
case 0x6f00d1:c.instructions+=1;goto B6f00d1;
case 0x6f00d7:goto L6f00d7;
case 0x6f00db:c.instructions+=2;goto B6f00db;
case 0x6f00e0:c.instructions+=1;goto B6f00e0;
case 0x6f00e3:goto L6f00e3;
case 0x6f00e6:c.instructions+=44;goto B6f00e6;
case 0x6f00ea:c.instructions+=43;goto B6f00ea;
case 0x6f00ed:c.instructions+=42;goto B6f00ed;
case 0x6f00ee:c.instructions+=41;goto B6f00ee;
case 0x6f00f2:c.instructions+=40;goto B6f00f2;
case 0x6f00f5:c.instructions+=39;goto B6f00f5;
case 0x6f00f6:c.instructions+=38;goto B6f00f6;
case 0x6f00f9:c.instructions+=37;goto B6f00f9;
case 0x6f00fc:c.instructions+=36;goto B6f00fc;
case 0x6f00fd:c.instructions+=35;goto B6f00fd;
case 0x6f0100:c.instructions+=34;goto B6f0100;
case 0x6f0103:c.instructions+=33;goto B6f0103;
case 0x6f0106:c.instructions+=32;goto B6f0106;
case 0x6f0107:c.instructions+=31;goto B6f0107;
case 0x6f010a:c.instructions+=30;goto B6f010a;
case 0x6f010e:c.instructions+=29;goto B6f010e;
case 0x6f0111:c.instructions+=28;goto B6f0111;
case 0x6f0113:c.instructions+=27;goto B6f0113;
case 0x6f0116:c.instructions+=26;goto B6f0116;
case 0x6f0119:c.instructions+=25;goto B6f0119;
case 0x6f011d:c.instructions+=24;goto B6f011d;
case 0x6f0121:c.instructions+=23;goto B6f0121;
case 0x6f0125:c.instructions+=22;goto B6f0125;
case 0x6f0128:c.instructions+=21;goto B6f0128;
case 0x6f012b:c.instructions+=20;goto B6f012b;
case 0x6f012f:c.instructions+=19;goto B6f012f;
case 0x6f0132:c.instructions+=18;goto B6f0132;
case 0x6f0135:c.instructions+=17;goto B6f0135;
case 0x6f0139:c.instructions+=16;goto B6f0139;
case 0x6f013d:c.instructions+=15;goto B6f013d;
case 0x6f0141:c.instructions+=14;goto B6f0141;
case 0x6f0144:c.instructions+=13;goto B6f0144;
case 0x6f0147:c.instructions+=12;goto B6f0147;
case 0x6f014b:c.instructions+=11;goto B6f014b;
case 0x6f014e:c.instructions+=10;goto B6f014e;
case 0x6f0151:c.instructions+=9;goto B6f0151;
case 0x6f0155:c.instructions+=8;goto B6f0155;
case 0x6f0159:c.instructions+=7;goto B6f0159;
case 0x6f015d:c.instructions+=6;goto B6f015d;
case 0x6f0160:c.instructions+=5;goto B6f0160;
case 0x6f0163:c.instructions+=4;goto B6f0163;
case 0x6f0167:c.instructions+=3;goto B6f0167;
case 0x6f016a:c.instructions+=2;goto B6f016a;
case 0x6f016d:c.instructions+=1;goto B6f016d;
case 0x6f0173:goto L6f0173;
case 0x6f0177:c.instructions+=1;goto B6f0177;
case 0x6f017b:goto L6f017b;
case 0x6f017d:c.instructions+=1;goto B6f017d;
case 0x6f017f:goto L6f017f;
case 0x6f0183:c.instructions+=5;goto B6f0183;
case 0x6f0185:c.instructions+=4;goto B6f0185;
case 0x6f0188:c.instructions+=3;goto B6f0188;
case 0x6f018a:c.instructions+=2;goto B6f018a;
case 0x6f018c:c.instructions+=1;goto B6f018c;
case 0x6f0190:goto L6f0190;
case 0x6f0193:c.instructions+=12;goto B6f0193;
case 0x6f0197:c.instructions+=11;goto B6f0197;
case 0x6f019a:c.instructions+=10;goto B6f019a;
case 0x6f019b:c.instructions+=9;goto B6f019b;
case 0x6f019f:c.instructions+=8;goto B6f019f;
case 0x6f01a2:c.instructions+=7;goto B6f01a2;
case 0x6f01a3:c.instructions+=6;goto B6f01a3;
case 0x6f01a6:c.instructions+=5;goto B6f01a6;
case 0x6f01a9:c.instructions+=4;goto B6f01a9;
case 0x6f01ad:c.instructions+=3;goto B6f01ad;
case 0x6f01b0:c.instructions+=2;goto B6f01b0;
case 0x6f01b3:c.instructions+=1;goto B6f01b3;
case 0x6f01b5:goto L6f01b5;
case 0x6f01b9:c.instructions+=4;goto B6f01b9;
case 0x6f01ba:c.instructions+=3;goto B6f01ba;
case 0x6f01bc:c.instructions+=2;goto B6f01bc;
case 0x6f01c0:c.instructions+=1;goto B6f01c0;
case 0x6f01c6:goto L6f01c6;
case 0x6f01ca:c.instructions+=1;goto B6f01ca;
case 0x6f01d0:goto L6f01d0;
case 0x6f01d1:c.instructions+=5;goto B6f01d1;
case 0x6f01d2:c.instructions+=4;goto B6f01d2;
case 0x6f01d3:c.instructions+=3;goto B6f01d3;
case 0x6f01d4:c.instructions+=2;goto B6f01d4;
case 0x6f01d7:c.instructions+=1;goto B6f01d7;
case 0x6f01da:goto L6f01da;
case 0x6f01dd:c.instructions+=13;goto B6f01dd;
case 0x6f01de:c.instructions+=12;goto B6f01de;
case 0x6f01e0:c.instructions+=11;goto B6f01e0;
case 0x6f01e2:c.instructions+=10;goto B6f01e2;
case 0x6f01e6:c.instructions+=9;goto B6f01e6;
case 0x6f01e8:c.instructions+=8;goto B6f01e8;
case 0x6f01eb:c.instructions+=7;goto B6f01eb;
case 0x6f01ee:c.instructions+=6;goto B6f01ee;
case 0x6f01f0:c.instructions+=5;goto B6f01f0;
case 0x6f01f2:c.instructions+=4;goto B6f01f2;
case 0x6f01f4:c.instructions+=3;goto B6f01f4;
case 0x6f01f6:c.instructions+=2;goto B6f01f6;
case 0x6f01f8:c.instructions+=1;goto B6f01f8;
case 0x6f01fe:goto L6f01fe;
case 0x6f0200:c.instructions+=1;goto B6f0200;
case 0x6f0204:goto L6f0204;
case 0x6f0208:c.instructions+=4;goto B6f0208;
case 0x6f020a:c.instructions+=3;goto B6f020a;
case 0x6f020e:c.instructions+=2;goto B6f020e;
case 0x6f0216:c.instructions+=1;goto B6f0216;
case 0x6f021c:goto L6f021c;
case 0x6f0220:goto L6f0220;
case 0x6f0223:c.instructions+=6;goto B6f0223;
case 0x6f0227:c.instructions+=5;goto B6f0227;
case 0x6f022b:c.instructions+=4;goto B6f022b;
case 0x6f022f:c.instructions+=3;goto B6f022f;
case 0x6f0233:c.instructions+=2;goto B6f0233;
case 0x6f023b:c.instructions+=1;goto B6f023b;
case 0x6f0241:goto L6f0241;
case 0x6f0245:c.instructions+=3;goto B6f0245;
case 0x6f0249:c.instructions+=2;goto B6f0249;
case 0x6f024e:c.instructions+=1;goto B6f024e;
case 0x6f0251:goto L6f0251;
case 0x6f0253:c.instructions+=2;goto B6f0253;
case 0x6f0255:c.instructions+=1;goto B6f0255;
case 0x6f0257:goto L6f0257;
case 0x6f025a:c.instructions+=1;goto B6f025a;
case 0x6f025c:goto L6f025c;
case 0x6f025f:c.instructions+=1;goto B6f025f;
case 0x6f0260:goto L6f0260;
case 0x6f0263:c.instructions+=13;goto B6f0263;
case 0x6f0267:c.instructions+=12;goto B6f0267;
case 0x6f0269:c.instructions+=11;goto B6f0269;
case 0x6f026c:c.instructions+=10;goto B6f026c;
case 0x6f0270:c.instructions+=9;goto B6f0270;
case 0x6f0273:c.instructions+=8;goto B6f0273;
case 0x6f0275:c.instructions+=7;goto B6f0275;
case 0x6f0278:c.instructions+=6;goto B6f0278;
case 0x6f027b:c.instructions+=5;goto B6f027b;
case 0x6f027f:c.instructions+=4;goto B6f027f;
case 0x6f0281:c.instructions+=3;goto B6f0281;
case 0x6f0283:c.instructions+=2;goto B6f0283;
case 0x6f0285:c.instructions+=1;goto B6f0285;
case 0x6f0287:goto L6f0287;
case 0x6f028a:c.instructions+=1;goto B6f028a;
case 0x6f028c:goto L6f028c;
case 0x6f028f:c.instructions+=1;goto B6f028f;
case 0x6f0290:goto L6f0290;
case 0x6f0293:c.instructions+=13;goto B6f0293;
case 0x6f0297:c.instructions+=12;goto B6f0297;
case 0x6f0299:c.instructions+=11;goto B6f0299;
case 0x6f029c:c.instructions+=10;goto B6f029c;
case 0x6f02a0:c.instructions+=9;goto B6f02a0;
case 0x6f02a3:c.instructions+=8;goto B6f02a3;
case 0x6f02a5:c.instructions+=7;goto B6f02a5;
case 0x6f02a8:c.instructions+=6;goto B6f02a8;
case 0x6f02ab:c.instructions+=5;goto B6f02ab;
case 0x6f02af:c.instructions+=4;goto B6f02af;
case 0x6f02b2:c.instructions+=3;goto B6f02b2;
case 0x6f02b5:c.instructions+=2;goto B6f02b5;
case 0x6f02b7:c.instructions+=1;goto B6f02b7;
case 0x6f02b9:goto L6f02b9;
case 0x6f02bc:c.instructions+=1;goto B6f02bc;
case 0x6f02be:goto L6f02be;
case 0x6f02c1:c.instructions+=1;goto B6f02c1;
case 0x6f02c2:goto L6f02c2;
case 0x6f02c5:c.instructions+=13;goto B6f02c5;
case 0x6f02c9:c.instructions+=12;goto B6f02c9;
case 0x6f02cb:c.instructions+=11;goto B6f02cb;
case 0x6f02ce:c.instructions+=10;goto B6f02ce;
case 0x6f02d2:c.instructions+=9;goto B6f02d2;
case 0x6f02d5:c.instructions+=8;goto B6f02d5;
case 0x6f02d7:c.instructions+=7;goto B6f02d7;
case 0x6f02da:c.instructions+=6;goto B6f02da;
case 0x6f02dd:c.instructions+=5;goto B6f02dd;
case 0x6f02e1:c.instructions+=4;goto B6f02e1;
case 0x6f02e4:c.instructions+=3;goto B6f02e4;
case 0x6f02e7:c.instructions+=2;goto B6f02e7;
case 0x6f02e9:c.instructions+=1;goto B6f02e9;
case 0x6f02eb:goto L6f02eb;
case 0x6f02ee:c.instructions+=1;goto B6f02ee;
case 0x6f02f0:goto L6f02f0;
case 0x6f02f3:c.instructions+=1;goto B6f02f3;
case 0x6f02f4:goto L6f02f4;
case 0x6f02f7:c.instructions+=17;goto B6f02f7;
case 0x6f02fb:c.instructions+=16;goto B6f02fb;
case 0x6f02ff:c.instructions+=15;goto B6f02ff;
case 0x6f0301:c.instructions+=14;goto B6f0301;
case 0x6f0305:c.instructions+=13;goto B6f0305;
case 0x6f0308:c.instructions+=12;goto B6f0308;
case 0x6f030b:c.instructions+=11;goto B6f030b;
case 0x6f030e:c.instructions+=10;goto B6f030e;
case 0x6f0311:c.instructions+=9;goto B6f0311;
case 0x6f0314:c.instructions+=8;goto B6f0314;
case 0x6f0317:c.instructions+=7;goto B6f0317;
case 0x6f0319:c.instructions+=6;goto B6f0319;
case 0x6f031c:c.instructions+=5;goto B6f031c;
case 0x6f0320:c.instructions+=4;goto B6f0320;
case 0x6f0324:c.instructions+=3;goto B6f0324;
case 0x6f0327:c.instructions+=2;goto B6f0327;
case 0x6f032a:c.instructions+=1;goto B6f032a;
case 0x6f0330:goto L6f0330;
case 0x6f0334:c.instructions+=2;goto B6f0334;
case 0x6f0336:c.instructions+=1;goto B6f0336;
case 0x6f0338:goto L6f0338;
case 0x6f033c:c.instructions+=6;goto B6f033c;
case 0x6f0340:c.instructions+=5;goto B6f0340;
case 0x6f0342:c.instructions+=4;goto B6f0342;
case 0x6f0345:c.instructions+=3;goto B6f0345;
case 0x6f0347:c.instructions+=2;goto B6f0347;
case 0x6f0349:c.instructions+=1;goto B6f0349;
case 0x6f0350:goto L6f0350;
case 0x6f0352:c.instructions+=2;goto B6f0352;
case 0x6f0354:c.instructions+=1;goto B6f0354;
case 0x6f0356:goto L6f0356;
case 0x6f0359:c.instructions+=1;goto B6f0359;
case 0x6f035b:goto L6f035b;
case 0x6f035e:c.instructions+=1;goto B6f035e;
case 0x6f035f:goto L6f035f;
case 0x6f0362:c.instructions+=13;goto B6f0362;
case 0x6f0366:c.instructions+=12;goto B6f0366;
case 0x6f0368:c.instructions+=11;goto B6f0368;
case 0x6f036b:c.instructions+=10;goto B6f036b;
case 0x6f036f:c.instructions+=9;goto B6f036f;
case 0x6f0372:c.instructions+=8;goto B6f0372;
case 0x6f0375:c.instructions+=7;goto B6f0375;
case 0x6f0376:c.instructions+=6;goto B6f0376;
case 0x6f0379:c.instructions+=5;goto B6f0379;
case 0x6f037c:c.instructions+=4;goto B6f037c;
case 0x6f0380:c.instructions+=3;goto B6f0380;
case 0x6f0383:c.instructions+=2;goto B6f0383;
case 0x6f0386:c.instructions+=1;goto B6f0386;
case 0x6f0388:goto L6f0388;
case 0x6f038c:c.instructions+=5;goto B6f038c;
case 0x6f0390:c.instructions+=4;goto B6f0390;
case 0x6f0391:c.instructions+=3;goto B6f0391;
case 0x6f0393:c.instructions+=2;goto B6f0393;
case 0x6f0397:c.instructions+=1;goto B6f0397;
case 0x6f039d:goto L6f039d;
case 0x6f039f:c.instructions+=1;goto B6f039f;
case 0x6f03a1:goto L6f03a1;
case 0x6f03a2:c.instructions+=1;goto B6f03a2;
case 0x6f03a4:goto L6f03a4;
case 0x6f03a8:c.instructions+=1;goto B6f03a8;
case 0x6f03ae:goto L6f03ae;
case 0x6f03af:c.instructions+=5;goto B6f03af;
case 0x6f03b0:c.instructions+=4;goto B6f03b0;
case 0x6f03b1:c.instructions+=3;goto B6f03b1;
case 0x6f03b2:c.instructions+=2;goto B6f03b2;
case 0x6f03b5:c.instructions+=1;goto B6f03b5;
case 0x6f03c0:goto L6f03c0;
case 0x6f03c3:c.instructions+=7;goto B6f03c3;
case 0x6f03c4:c.instructions+=6;goto B6f03c4;
case 0x6f03c8:c.instructions+=5;goto B6f03c8;
case 0x6f03c9:c.instructions+=4;goto B6f03c9;
case 0x6f03cd:c.instructions+=3;goto B6f03cd;
case 0x6f03cf:c.instructions+=2;goto B6f03cf;
case 0x6f03d3:c.instructions+=1;goto B6f03d3;
case 0x6f03d9:goto L6f03d9;
case 0x6f03da:c.instructions+=3;goto B6f03da;
case 0x6f03db:c.instructions+=2;goto B6f03db;
case 0x6f03df:c.instructions+=1;goto B6f03df;
case 0x6f03e1:goto L6f03e1;
case 0x6f03e3:c.instructions+=1;goto B6f03e3;
case 0x6f03e5:goto L6f03e5;
case 0x6f03e8:c.instructions+=1;goto B6f03e8;
case 0x6f03ea:goto L6f03ea;
case 0x6f03ee:c.instructions+=2;goto B6f03ee;
case 0x6f03f2:c.instructions+=1;goto B6f03f2;
case 0x6f03f8:goto L6f03f8;
case 0x6f03fc:c.instructions+=4;goto B6f03fc;
case 0x6f03fe:c.instructions+=3;goto B6f03fe;
case 0x6f0400:c.instructions+=2;goto B6f0400;
case 0x6f0404:c.instructions+=1;goto B6f0404;
case 0x6f040a:goto L6f040a;
case 0x6f0410:goto L6f0410;
case 0x6f0414:c.instructions+=4;goto B6f0414;
case 0x6f0418:c.instructions+=3;goto B6f0418;
case 0x6f041b:c.instructions+=2;goto B6f041b;
case 0x6f041d:c.instructions+=1;goto B6f041d;
case 0x6f041f:goto L6f041f;
case 0x6f0423:c.instructions+=4;goto B6f0423;
case 0x6f0426:c.instructions+=3;goto B6f0426;
case 0x6f0428:c.instructions+=2;goto B6f0428;
case 0x6f042a:c.instructions+=1;goto B6f042a;
case 0x6f0430:goto L6f0430;
case 0x6f0433:c.instructions+=4;goto B6f0433;
case 0x6f0435:c.instructions+=3;goto B6f0435;
case 0x6f0438:c.instructions+=2;goto B6f0438;
case 0x6f0439:c.instructions+=1;goto B6f0439;
case 0x6f043b:goto L6f043b;
case 0x6f043f:c.instructions+=2;goto B6f043f;
case 0x6f0443:c.instructions+=1;goto B6f0443;
case 0x6f0447:goto L6f0447;
case 0x6f044b:c.instructions+=4;goto B6f044b;
case 0x6f044c:c.instructions+=3;goto B6f044c;
case 0x6f044e:c.instructions+=2;goto B6f044e;
case 0x6f0452:c.instructions+=1;goto B6f0452;
case 0x6f0454:goto L6f0454;
case 0x6f0456:goto L6f0456;
case 0x6f045a:c.instructions+=3;goto B6f045a;
case 0x6f045c:c.instructions+=2;goto B6f045c;
case 0x6f045e:c.instructions+=1;goto B6f045e;
case 0x6f0460:goto L6f0460;
case 0x6f0464:c.instructions+=6;goto B6f0464;
case 0x6f0468:c.instructions+=5;goto B6f0468;
case 0x6f046b:c.instructions+=4;goto B6f046b;
case 0x6f046d:c.instructions+=3;goto B6f046d;
case 0x6f0470:c.instructions+=2;goto B6f0470;
case 0x6f0474:c.instructions+=1;goto B6f0474;
case 0x6f0476:goto L6f0476;
case 0x6f047a:c.instructions+=3;goto B6f047a;
case 0x6f047d:c.instructions+=2;goto B6f047d;
case 0x6f0480:c.instructions+=1;goto B6f0480;
case 0x6f0482:goto L6f0482;
case 0x6f0484:c.instructions+=5;goto B6f0484;
case 0x6f0486:c.instructions+=4;goto B6f0486;
case 0x6f0489:c.instructions+=3;goto B6f0489;
case 0x6f048c:c.instructions+=2;goto B6f048c;
case 0x6f048d:c.instructions+=1;goto B6f048d;
case 0x6f048f:goto L6f048f;
case 0x6f0493:goto L6f0493;
case 0x6f0497:c.instructions+=3;goto B6f0497;
case 0x6f0498:c.instructions+=2;goto B6f0498;
case 0x6f049a:c.instructions+=1;goto B6f049a;
case 0x6f049c:goto L6f049c;
case 0x6f04a0:c.instructions+=1;goto B6f04a0;
case 0x6f04a2:goto L6f04a2;
case 0x6f04a4:c.instructions+=1;goto B6f04a4;
case 0x6f04aa:goto L6f04aa;
case 0x6f04ad:c.instructions+=6;goto B6f04ad;
case 0x6f04b0:c.instructions+=5;goto B6f04b0;
case 0x6f04b4:c.instructions+=4;goto B6f04b4;
case 0x6f04b7:c.instructions+=3;goto B6f04b7;
case 0x6f04b9:c.instructions+=2;goto B6f04b9;
case 0x6f04bd:c.instructions+=1;goto B6f04bd;
case 0x6f04c3:goto L6f04c3;
case 0x6f04c5:c.instructions+=1;goto B6f04c5;
case 0x6f04cb:goto L6f04cb;
case 0x6f04cd:c.instructions+=2;goto B6f04cd;
case 0x6f04d1:c.instructions+=1;goto B6f04d1;
case 0x6f04d7:goto L6f04d7;
case 0x6f04db:c.instructions+=4;goto B6f04db;
case 0x6f04dd:c.instructions+=3;goto B6f04dd;
case 0x6f04df:c.instructions+=2;goto B6f04df;
case 0x6f04e3:c.instructions+=1;goto B6f04e3;
case 0x6f04e9:goto L6f04e9;
case 0x6f04f0:goto L6f04f0;
case 0x6f04f4:c.instructions+=13;goto B6f04f4;
case 0x6f04f8:c.instructions+=12;goto B6f04f8;
case 0x6f04fb:c.instructions+=11;goto B6f04fb;
case 0x6f04fe:c.instructions+=10;goto B6f04fe;
case 0x6f0502:c.instructions+=9;goto B6f0502;
case 0x6f0505:c.instructions+=8;goto B6f0505;
case 0x6f050a:c.instructions+=7;goto B6f050a;
case 0x6f050e:c.instructions+=6;goto B6f050e;
case 0x6f0510:c.instructions+=5;goto B6f0510;
case 0x6f0513:c.instructions+=4;goto B6f0513;
case 0x6f0515:c.instructions+=3;goto B6f0515;
case 0x6f0518:c.instructions+=2;goto B6f0518;
case 0x6f051c:c.instructions+=1;goto B6f051c;
case 0x6f0522:goto L6f0522;
case 0x6f0526:c.instructions+=2;goto B6f0526;
case 0x6f052b:c.instructions+=1;goto B6f052b;
case 0x6f052e:goto L6f052e;
case 0x6f0531:c.instructions+=36;goto B6f0531;
case 0x6f0535:c.instructions+=35;goto B6f0535;
case 0x6f0538:c.instructions+=34;goto B6f0538;
case 0x6f053b:c.instructions+=33;goto B6f053b;
case 0x6f053f:c.instructions+=32;goto B6f053f;
case 0x6f0542:c.instructions+=31;goto B6f0542;
case 0x6f0545:c.instructions+=30;goto B6f0545;
case 0x6f0548:c.instructions+=29;goto B6f0548;
case 0x6f054b:c.instructions+=28;goto B6f054b;
case 0x6f054e:c.instructions+=27;goto B6f054e;
case 0x6f0551:c.instructions+=26;goto B6f0551;
case 0x6f0555:c.instructions+=25;goto B6f0555;
case 0x6f0559:c.instructions+=24;goto B6f0559;
case 0x6f055d:c.instructions+=23;goto B6f055d;
case 0x6f0560:c.instructions+=22;goto B6f0560;
case 0x6f0563:c.instructions+=21;goto B6f0563;
case 0x6f0566:c.instructions+=20;goto B6f0566;
case 0x6f0569:c.instructions+=19;goto B6f0569;
case 0x6f056d:c.instructions+=18;goto B6f056d;
case 0x6f0571:c.instructions+=17;goto B6f0571;
case 0x6f0575:c.instructions+=16;goto B6f0575;
case 0x6f0578:c.instructions+=15;goto B6f0578;
case 0x6f057b:c.instructions+=14;goto B6f057b;
case 0x6f057e:c.instructions+=13;goto B6f057e;
case 0x6f0581:c.instructions+=12;goto B6f0581;
case 0x6f0585:c.instructions+=11;goto B6f0585;
case 0x6f0589:c.instructions+=10;goto B6f0589;
case 0x6f058d:c.instructions+=9;goto B6f058d;
case 0x6f0590:c.instructions+=8;goto B6f0590;
case 0x6f0592:c.instructions+=7;goto B6f0592;
case 0x6f0596:c.instructions+=6;goto B6f0596;
case 0x6f059a:c.instructions+=5;goto B6f059a;
case 0x6f059d:c.instructions+=4;goto B6f059d;
case 0x6f05a0:c.instructions+=3;goto B6f05a0;
case 0x6f05a3:c.instructions+=2;goto B6f05a3;
case 0x6f05a6:c.instructions+=1;goto B6f05a6;
case 0x6f05a8:goto L6f05a8;
case 0x6f05ac:goto L6f05ac;
case 0x6f05ae:c.instructions+=1;goto B6f05ae;
case 0x6f05b0:goto L6f05b0;
case 0x6f05b3:c.instructions+=5;goto B6f05b3;
case 0x6f05b7:c.instructions+=4;goto B6f05b7;
case 0x6f05ba:c.instructions+=3;goto B6f05ba;
case 0x6f05bc:c.instructions+=2;goto B6f05bc;
case 0x6f05be:c.instructions+=1;goto B6f05be;
case 0x6f05c0:goto L6f05c0;
case 0x6f05c3:c.instructions+=11;goto B6f05c3;
case 0x6f05c7:c.instructions+=10;goto B6f05c7;
case 0x6f05ca:c.instructions+=9;goto B6f05ca;
case 0x6f05cd:c.instructions+=8;goto B6f05cd;
case 0x6f05d1:c.instructions+=7;goto B6f05d1;
case 0x6f05d4:c.instructions+=6;goto B6f05d4;
case 0x6f05d5:c.instructions+=5;goto B6f05d5;
case 0x6f05d8:c.instructions+=4;goto B6f05d8;
case 0x6f05db:c.instructions+=3;goto B6f05db;
case 0x6f05de:c.instructions+=2;goto B6f05de;
case 0x6f05e1:c.instructions+=1;goto B6f05e1;
case 0x6f05e3:goto L6f05e3;
case 0x6f05e7:c.instructions+=5;goto B6f05e7;
case 0x6f05eb:c.instructions+=4;goto B6f05eb;
case 0x6f05ec:c.instructions+=3;goto B6f05ec;
case 0x6f05ee:c.instructions+=2;goto B6f05ee;
case 0x6f05f2:c.instructions+=1;goto B6f05f2;
case 0x6f05f8:goto L6f05f8;
case 0x6f05fc:goto L6f05fc;
case 0x6f0600:c.instructions+=4;goto B6f0600;
case 0x6f0601:c.instructions+=3;goto B6f0601;
case 0x6f0603:c.instructions+=2;goto B6f0603;
case 0x6f0607:c.instructions+=1;goto B6f0607;
case 0x6f060d:goto L6f060d;
case 0x6f060e:c.instructions+=5;goto B6f060e;
case 0x6f060f:c.instructions+=4;goto B6f060f;
case 0x6f0610:c.instructions+=3;goto B6f0610;
case 0x6f0611:c.instructions+=2;goto B6f0611;
case 0x6f0614:c.instructions+=1;goto B6f0614;
case 0x6f0617:goto L6f0617;
case 0x6f0619:c.instructions+=2;goto B6f0619;
case 0x6f061d:c.instructions+=1;goto B6f061d;
case 0x6f0623:goto L6f0623;
case 0x6f0630:goto L6f0630;
case 0x6f0634:c.instructions+=3;goto B6f0634;
case 0x6f0636:c.instructions+=2;goto B6f0636;
case 0x6f063e:c.instructions+=1;goto B6f063e;
case 0x6f0644:goto L6f0644;
case 0x6f0648:c.instructions+=13;goto B6f0648;
case 0x6f064c:c.instructions+=12;goto B6f064c;
case 0x6f0650:c.instructions+=11;goto B6f0650;
case 0x6f0654:c.instructions+=10;goto B6f0654;
case 0x6f0657:c.instructions+=9;goto B6f0657;
case 0x6f065a:c.instructions+=8;goto B6f065a;
case 0x6f065e:c.instructions+=7;goto B6f065e;
case 0x6f0661:c.instructions+=6;goto B6f0661;
case 0x6f0666:c.instructions+=5;goto B6f0666;
case 0x6f0668:c.instructions+=4;goto B6f0668;
case 0x6f066a:c.instructions+=3;goto B6f066a;
case 0x6f066c:c.instructions+=2;goto B6f066c;
case 0x6f066f:c.instructions+=1;goto B6f066f;
case 0x6f0675:goto L6f0675;
case 0x6f067d:c.instructions+=1;goto B6f067d;
case 0x6f0680:goto L6f0680;
case 0x6f0683:c.instructions+=36;goto B6f0683;
case 0x6f0687:c.instructions+=35;goto B6f0687;
case 0x6f068a:c.instructions+=34;goto B6f068a;
case 0x6f068d:c.instructions+=33;goto B6f068d;
case 0x6f0691:c.instructions+=32;goto B6f0691;
case 0x6f0694:c.instructions+=31;goto B6f0694;
case 0x6f0697:c.instructions+=30;goto B6f0697;
case 0x6f069a:c.instructions+=29;goto B6f069a;
case 0x6f069d:c.instructions+=28;goto B6f069d;
case 0x6f06a0:c.instructions+=27;goto B6f06a0;
case 0x6f06a3:c.instructions+=26;goto B6f06a3;
case 0x6f06a7:c.instructions+=25;goto B6f06a7;
case 0x6f06ab:c.instructions+=24;goto B6f06ab;
case 0x6f06af:c.instructions+=23;goto B6f06af;
case 0x6f06b2:c.instructions+=22;goto B6f06b2;
case 0x6f06b5:c.instructions+=21;goto B6f06b5;
case 0x6f06b8:c.instructions+=20;goto B6f06b8;
case 0x6f06bb:c.instructions+=19;goto B6f06bb;
case 0x6f06bf:c.instructions+=18;goto B6f06bf;
case 0x6f06c3:c.instructions+=17;goto B6f06c3;
case 0x6f06c7:c.instructions+=16;goto B6f06c7;
case 0x6f06ca:c.instructions+=15;goto B6f06ca;
case 0x6f06cd:c.instructions+=14;goto B6f06cd;
case 0x6f06d0:c.instructions+=13;goto B6f06d0;
case 0x6f06d3:c.instructions+=12;goto B6f06d3;
case 0x6f06d7:c.instructions+=11;goto B6f06d7;
case 0x6f06db:c.instructions+=10;goto B6f06db;
case 0x6f06df:c.instructions+=9;goto B6f06df;
case 0x6f06e2:c.instructions+=8;goto B6f06e2;
case 0x6f06e4:c.instructions+=7;goto B6f06e4;
case 0x6f06e8:c.instructions+=6;goto B6f06e8;
case 0x6f06ec:c.instructions+=5;goto B6f06ec;
case 0x6f06ef:c.instructions+=4;goto B6f06ef;
case 0x6f06f2:c.instructions+=3;goto B6f06f2;
case 0x6f06f5:c.instructions+=2;goto B6f06f5;
case 0x6f06f8:c.instructions+=1;goto B6f06f8;
case 0x6f06fa:goto L6f06fa;
case 0x6f06fe:c.instructions+=1;goto B6f06fe;
case 0x6f0702:goto L6f0702;
case 0x6f0704:c.instructions+=1;goto B6f0704;
case 0x6f0706:goto L6f0706;
case 0x6f0708:c.instructions+=4;goto B6f0708;
case 0x6f070b:c.instructions+=3;goto B6f070b;
case 0x6f070d:c.instructions+=2;goto B6f070d;
case 0x6f070f:c.instructions+=1;goto B6f070f;
case 0x6f0710:goto L6f0710;
case 0x6f0713:c.instructions+=11;goto B6f0713;
case 0x6f0717:c.instructions+=10;goto B6f0717;
case 0x6f0718:c.instructions+=9;goto B6f0718;
case 0x6f071b:c.instructions+=8;goto B6f071b;
case 0x6f071f:c.instructions+=7;goto B6f071f;
case 0x6f0722:c.instructions+=6;goto B6f0722;
case 0x6f0723:c.instructions+=5;goto B6f0723;
case 0x6f0726:c.instructions+=4;goto B6f0726;
case 0x6f0729:c.instructions+=3;goto B6f0729;
case 0x6f072c:c.instructions+=2;goto B6f072c;
case 0x6f072f:c.instructions+=1;goto B6f072f;
case 0x6f0731:goto L6f0731;
case 0x6f0735:goto L6f0735;
case 0x6f0739:c.instructions+=5;goto B6f0739;
case 0x6f073d:c.instructions+=4;goto B6f073d;
case 0x6f073e:c.instructions+=3;goto B6f073e;
case 0x6f0740:c.instructions+=2;goto B6f0740;
case 0x6f0744:c.instructions+=1;goto B6f0744;
case 0x6f074a:goto L6f074a;
case 0x6f074e:goto L6f074e;
case 0x6f0752:c.instructions+=4;goto B6f0752;
case 0x6f0753:c.instructions+=3;goto B6f0753;
case 0x6f0755:c.instructions+=2;goto B6f0755;
case 0x6f0759:c.instructions+=1;goto B6f0759;
case 0x6f075f:goto L6f075f;
case 0x6f0760:c.instructions+=1;goto B6f0760;
case 0x6f0761:goto L6f0761;
case 0x6f0762:c.instructions+=3;goto B6f0762;
case 0x6f0763:c.instructions+=2;goto B6f0763;
case 0x6f0766:c.instructions+=1;goto B6f0766;
case 0x6f0770:goto L6f0770;
case 0x6f0773:c.instructions+=6;goto B6f0773;
case 0x6f0777:c.instructions+=5;goto B6f0777;
case 0x6f0778:c.instructions+=4;goto B6f0778;
case 0x6f077c:c.instructions+=3;goto B6f077c;
case 0x6f077e:c.instructions+=2;goto B6f077e;
case 0x6f0782:c.instructions+=1;goto B6f0782;
case 0x6f0788:goto L6f0788;
case 0x6f078a:c.instructions+=5;goto B6f078a;
case 0x6f078b:c.instructions+=4;goto B6f078b;
case 0x6f078c:c.instructions+=3;goto B6f078c;
case 0x6f078d:c.instructions+=2;goto B6f078d;
case 0x6f0791:c.instructions+=1;goto B6f0791;
case 0x6f0797:goto L6f0797;
case 0x6f079a:c.instructions+=1;goto B6f079a;
case 0x6f07a0:goto L6f07a0;
case 0x6f07a2:c.instructions+=1;goto B6f07a2;
case 0x6f07a8:goto L6f07a8;
case 0x6f07ac:c.instructions+=2;goto B6f07ac;
case 0x6f07ae:c.instructions+=1;goto B6f07ae;
case 0x6f07b4:goto L6f07b4;
case 0x6f07b8:c.instructions+=2;goto B6f07b8;
case 0x6f07bc:c.instructions+=1;goto B6f07bc;
case 0x6f07c0:goto L6f07c0;
case 0x6f07c3:c.instructions+=6;goto B6f07c3;
case 0x6f07c7:c.instructions+=5;goto B6f07c7;
case 0x6f07cb:c.instructions+=4;goto B6f07cb;
case 0x6f07cd:c.instructions+=3;goto B6f07cd;
case 0x6f07d0:c.instructions+=2;goto B6f07d0;
case 0x6f07d4:c.instructions+=1;goto B6f07d4;
case 0x6f07d6:goto L6f07d6;
case 0x6f07da:c.instructions+=1;goto B6f07da;
case 0x6f07de:goto L6f07de;
case 0x6f07e1:c.instructions+=27;goto B6f07e1;
case 0x6f07e4:c.instructions+=26;goto B6f07e4;
case 0x6f07e6:c.instructions+=25;goto B6f07e6;
case 0x6f07e9:c.instructions+=24;goto B6f07e9;
case 0x6f07ec:c.instructions+=23;goto B6f07ec;
case 0x6f07ef:c.instructions+=22;goto B6f07ef;
case 0x6f07f2:c.instructions+=21;goto B6f07f2;
case 0x6f07f4:c.instructions+=20;goto B6f07f4;
case 0x6f07f8:c.instructions+=19;goto B6f07f8;
case 0x6f07fb:c.instructions+=18;goto B6f07fb;
case 0x6f07fe:c.instructions+=17;goto B6f07fe;
case 0x6f0801:c.instructions+=16;goto B6f0801;
case 0x6f0803:c.instructions+=15;goto B6f0803;
case 0x6f0807:c.instructions+=14;goto B6f0807;
case 0x6f0809:c.instructions+=13;goto B6f0809;
case 0x6f080c:c.instructions+=12;goto B6f080c;
case 0x6f080f:c.instructions+=11;goto B6f080f;
case 0x6f0811:c.instructions+=10;goto B6f0811;
case 0x6f0815:c.instructions+=9;goto B6f0815;
case 0x6f0818:c.instructions+=8;goto B6f0818;
case 0x6f081c:c.instructions+=7;goto B6f081c;
case 0x6f081f:c.instructions+=6;goto B6f081f;
case 0x6f0822:c.instructions+=5;goto B6f0822;
case 0x6f0826:c.instructions+=4;goto B6f0826;
case 0x6f0829:c.instructions+=3;goto B6f0829;
case 0x6f082c:c.instructions+=2;goto B6f082c;
case 0x6f082e:c.instructions+=1;goto B6f082e;
case 0x6f0830:goto L6f0830;
case 0x6f0834:c.instructions+=1;goto B6f0834;
case 0x6f0838:goto L6f0838;
case 0x6f083a:c.instructions+=1;goto B6f083a;
case 0x6f083c:goto L6f083c;
case 0x6f0840:c.instructions+=1;goto B6f0840;
case 0x6f0844:goto L6f0844;
case 0x6f0847:c.instructions+=8;goto B6f0847;
case 0x6f084a:c.instructions+=7;goto B6f084a;
case 0x6f084c:c.instructions+=6;goto B6f084c;
case 0x6f084f:c.instructions+=5;goto B6f084f;
case 0x6f0851:c.instructions+=4;goto B6f0851;
case 0x6f0854:c.instructions+=3;goto B6f0854;
case 0x6f0855:c.instructions+=2;goto B6f0855;
case 0x6f0857:c.instructions+=1;goto B6f0857;
case 0x6f0859:goto L6f0859;
case 0x6f085d:goto L6f085d;
case 0x6f0861:c.instructions+=4;goto B6f0861;
case 0x6f0864:c.instructions+=3;goto B6f0864;
case 0x6f0865:c.instructions+=2;goto B6f0865;
case 0x6f0869:c.instructions+=1;goto B6f0869;
case 0x6f086f:goto L6f086f;
case 0x6f0873:c.instructions+=1;goto B6f0873;
case 0x6f0875:goto L6f0875;
case 0x6f0879:c.instructions+=3;goto B6f0879;
case 0x6f087b:c.instructions+=2;goto B6f087b;
case 0x6f087d:c.instructions+=1;goto B6f087d;
case 0x6f087f:goto L6f087f;
case 0x6f0880:goto L6f0880;
case 0x6f0884:c.instructions+=9;goto B6f0884;
case 0x6f0888:c.instructions+=8;goto B6f0888;
case 0x6f088c:c.instructions+=7;goto B6f088c;
case 0x6f0890:c.instructions+=6;goto B6f0890;
case 0x6f0892:c.instructions+=5;goto B6f0892;
case 0x6f0895:c.instructions+=4;goto B6f0895;
case 0x6f0897:c.instructions+=3;goto B6f0897;
case 0x6f089a:c.instructions+=2;goto B6f089a;
case 0x6f089e:c.instructions+=1;goto B6f089e;
case 0x6f08a0:goto L6f08a0;
case 0x6f08a3:c.instructions+=4;goto B6f08a3;
case 0x6f08a7:c.instructions+=3;goto B6f08a7;
case 0x6f08aa:c.instructions+=2;goto B6f08aa;
case 0x6f08ac:c.instructions+=1;goto B6f08ac;
case 0x6f08b0:goto L6f08b0;
case 0x6f08b2:c.instructions+=5;goto B6f08b2;
case 0x6f08b4:c.instructions+=4;goto B6f08b4;
case 0x6f08b7:c.instructions+=3;goto B6f08b7;
case 0x6f08ba:c.instructions+=2;goto B6f08ba;
case 0x6f08bb:c.instructions+=1;goto B6f08bb;
case 0x6f08bd:goto L6f08bd;
case 0x6f08c1:c.instructions+=3;goto B6f08c1;
case 0x6f08c2:c.instructions+=2;goto B6f08c2;
case 0x6f08c4:c.instructions+=1;goto B6f08c4;
case 0x6f08c6:goto L6f08c6;
case 0x6f08ca:goto L6f08ca;
case 0x6f08cc:goto L6f08cc;
case 0x6f08ce:c.instructions+=1;goto B6f08ce;
case 0x6f08d4:goto L6f08d4;
case 0x6f08d7:c.instructions+=6;goto B6f08d7;
case 0x6f08da:c.instructions+=5;goto B6f08da;
case 0x6f08de:c.instructions+=4;goto B6f08de;
case 0x6f08e2:c.instructions+=3;goto B6f08e2;
case 0x6f08e5:c.instructions+=2;goto B6f08e5;
case 0x6f08e7:c.instructions+=1;goto B6f08e7;
case 0x6f08ed:goto L6f08ed;
case 0x6f08ef:c.instructions+=1;goto B6f08ef;
case 0x6f08f5:goto L6f08f5;
case 0x6f08f7:c.instructions+=2;goto B6f08f7;
case 0x6f08fb:c.instructions+=1;goto B6f08fb;
case 0x6f0901:goto L6f0901;
case 0x6f0905:c.instructions+=3;goto B6f0905;
case 0x6f0907:c.instructions+=2;goto B6f0907;
case 0x6f090f:c.instructions+=1;goto B6f090f;
case 0x6f0915:goto L6f0915;
case 0x6f0920:goto L6f0920;
case 0x6f0924:c.instructions+=16;goto B6f0924;
case 0x6f0928:c.instructions+=15;goto B6f0928;
case 0x6f092c:c.instructions+=14;goto B6f092c;
case 0x6f092f:c.instructions+=13;goto B6f092f;
case 0x6f0934:c.instructions+=12;goto B6f0934;
case 0x6f0936:c.instructions+=11;goto B6f0936;
case 0x6f0939:c.instructions+=10;goto B6f0939;
case 0x6f093b:c.instructions+=9;goto B6f093b;
case 0x6f093e:c.instructions+=8;goto B6f093e;
case 0x6f0941:c.instructions+=7;goto B6f0941;
case 0x6f0945:c.instructions+=6;goto B6f0945;
case 0x6f0948:c.instructions+=5;goto B6f0948;
case 0x6f094c:c.instructions+=4;goto B6f094c;
case 0x6f0950:c.instructions+=3;goto B6f0950;
case 0x6f0954:c.instructions+=2;goto B6f0954;
case 0x6f095c:c.instructions+=1;goto B6f095c;
case 0x6f0962:goto L6f0962;
case 0x6f0966:c.instructions+=2;goto B6f0966;
case 0x6f096b:c.instructions+=1;goto B6f096b;
case 0x6f096f:goto L6f096f;
case 0x6f0972:c.instructions+=41;goto B6f0972;
case 0x6f0976:c.instructions+=40;goto B6f0976;
case 0x6f0979:c.instructions+=39;goto B6f0979;
case 0x6f097c:c.instructions+=38;goto B6f097c;
case 0x6f0980:c.instructions+=37;goto B6f0980;
case 0x6f0983:c.instructions+=36;goto B6f0983;
case 0x6f0986:c.instructions+=35;goto B6f0986;
case 0x6f0989:c.instructions+=34;goto B6f0989;
case 0x6f098c:c.instructions+=33;goto B6f098c;
case 0x6f098f:c.instructions+=32;goto B6f098f;
case 0x6f0993:c.instructions+=31;goto B6f0993;
case 0x6f0996:c.instructions+=30;goto B6f0996;
case 0x6f0999:c.instructions+=29;goto B6f0999;
case 0x6f099d:c.instructions+=28;goto B6f099d;
case 0x6f09a1:c.instructions+=27;goto B6f09a1;
case 0x6f09a5:c.instructions+=26;goto B6f09a5;
case 0x6f09a8:c.instructions+=25;goto B6f09a8;
case 0x6f09ab:c.instructions+=24;goto B6f09ab;
case 0x6f09af:c.instructions+=23;goto B6f09af;
case 0x6f09b2:c.instructions+=22;goto B6f09b2;
case 0x6f09b5:c.instructions+=21;goto B6f09b5;
case 0x6f09b9:c.instructions+=20;goto B6f09b9;
case 0x6f09bd:c.instructions+=19;goto B6f09bd;
case 0x6f09c1:c.instructions+=18;goto B6f09c1;
case 0x6f09c4:c.instructions+=17;goto B6f09c4;
case 0x6f09c7:c.instructions+=16;goto B6f09c7;
case 0x6f09cb:c.instructions+=15;goto B6f09cb;
case 0x6f09ce:c.instructions+=14;goto B6f09ce;
case 0x6f09d1:c.instructions+=13;goto B6f09d1;
case 0x6f09d5:c.instructions+=12;goto B6f09d5;
case 0x6f09d9:c.instructions+=11;goto B6f09d9;
case 0x6f09dd:c.instructions+=10;goto B6f09dd;
case 0x6f09e0:c.instructions+=9;goto B6f09e0;
case 0x6f09e2:c.instructions+=8;goto B6f09e2;
case 0x6f09e6:c.instructions+=7;goto B6f09e6;
case 0x6f09ea:c.instructions+=6;goto B6f09ea;
case 0x6f09ed:c.instructions+=5;goto B6f09ed;
case 0x6f09f0:c.instructions+=4;goto B6f09f0;
case 0x6f09f4:c.instructions+=3;goto B6f09f4;
case 0x6f09f7:c.instructions+=2;goto B6f09f7;
case 0x6f09fa:c.instructions+=1;goto B6f09fa;
case 0x6f0a00:goto L6f0a00;
case 0x6f0a04:goto L6f0a04;
case 0x6f0a08:c.instructions+=1;goto B6f0a08;
case 0x6f0a0a:goto L6f0a0a;
case 0x6f0a0e:c.instructions+=5;goto B6f0a0e;
case 0x6f0a11:c.instructions+=4;goto B6f0a11;
case 0x6f0a15:c.instructions+=3;goto B6f0a15;
case 0x6f0a17:c.instructions+=2;goto B6f0a17;
case 0x6f0a19:c.instructions+=1;goto B6f0a19;
case 0x6f0a20:goto L6f0a20;
case 0x6f0a23:c.instructions+=12;goto B6f0a23;
case 0x6f0a27:c.instructions+=11;goto B6f0a27;
case 0x6f0a2a:c.instructions+=10;goto B6f0a2a;
case 0x6f0a2d:c.instructions+=9;goto B6f0a2d;
case 0x6f0a31:c.instructions+=8;goto B6f0a31;
case 0x6f0a34:c.instructions+=7;goto B6f0a34;
case 0x6f0a35:c.instructions+=6;goto B6f0a35;
case 0x6f0a38:c.instructions+=5;goto B6f0a38;
case 0x6f0a3b:c.instructions+=4;goto B6f0a3b;
case 0x6f0a3f:c.instructions+=3;goto B6f0a3f;
case 0x6f0a42:c.instructions+=2;goto B6f0a42;
case 0x6f0a45:c.instructions+=1;goto B6f0a45;
case 0x6f0a47:goto L6f0a47;
case 0x6f0a4b:c.instructions+=5;goto B6f0a4b;
case 0x6f0a4f:c.instructions+=4;goto B6f0a4f;
case 0x6f0a50:c.instructions+=3;goto B6f0a50;
case 0x6f0a52:c.instructions+=2;goto B6f0a52;
case 0x6f0a56:c.instructions+=1;goto B6f0a56;
case 0x6f0a5c:goto L6f0a5c;
case 0x6f0a60:goto L6f0a60;
case 0x6f0a64:c.instructions+=4;goto B6f0a64;
case 0x6f0a65:c.instructions+=3;goto B6f0a65;
case 0x6f0a67:c.instructions+=2;goto B6f0a67;
case 0x6f0a6b:c.instructions+=1;goto B6f0a6b;
case 0x6f0a71:goto L6f0a71;
case 0x6f0a72:c.instructions+=5;goto B6f0a72;
case 0x6f0a73:c.instructions+=4;goto B6f0a73;
case 0x6f0a74:c.instructions+=3;goto B6f0a74;
case 0x6f0a75:c.instructions+=2;goto B6f0a75;
case 0x6f0a78:c.instructions+=1;goto B6f0a78;
case 0x6f0a7b:goto L6f0a7b;
case 0x6f0a7d:c.instructions+=2;goto B6f0a7d;
case 0x6f0a81:c.instructions+=1;goto B6f0a81;
case 0x6f0a87:goto L6f0a87;
case 0x6f0a90:goto L6f0a90;
case 0x6f0a94:c.instructions+=3;goto B6f0a94;
case 0x6f0a96:c.instructions+=2;goto B6f0a96;
case 0x6f0a9e:c.instructions+=1;goto B6f0a9e;
case 0x6f0aa4:goto L6f0aa4;
case 0x6f0aa8:c.instructions+=16;goto B6f0aa8;
case 0x6f0aac:c.instructions+=15;goto B6f0aac;
case 0x6f0ab0:c.instructions+=14;goto B6f0ab0;
case 0x6f0ab3:c.instructions+=13;goto B6f0ab3;
case 0x6f0ab8:c.instructions+=12;goto B6f0ab8;
case 0x6f0abc:c.instructions+=11;goto B6f0abc;
case 0x6f0abe:c.instructions+=10;goto B6f0abe;
case 0x6f0ac1:c.instructions+=9;goto B6f0ac1;
case 0x6f0ac3:c.instructions+=8;goto B6f0ac3;
case 0x6f0ac6:c.instructions+=7;goto B6f0ac6;
case 0x6f0ac8:c.instructions+=6;goto B6f0ac8;
case 0x6f0acb:c.instructions+=5;goto B6f0acb;
case 0x6f0acf:c.instructions+=4;goto B6f0acf;
case 0x6f0ad3:c.instructions+=3;goto B6f0ad3;
case 0x6f0ad7:c.instructions+=2;goto B6f0ad7;
case 0x6f0adf:c.instructions+=1;goto B6f0adf;
case 0x6f0ae5:goto L6f0ae5;
case 0x6f0ae9:c.instructions+=2;goto B6f0ae9;
case 0x6f0aee:c.instructions+=1;goto B6f0aee;
case 0x6f0af2:goto L6f0af2;
case 0x6f0af5:c.instructions+=41;goto B6f0af5;
case 0x6f0af9:c.instructions+=40;goto B6f0af9;
case 0x6f0afc:c.instructions+=39;goto B6f0afc;
case 0x6f0aff:c.instructions+=38;goto B6f0aff;
case 0x6f0b03:c.instructions+=37;goto B6f0b03;
case 0x6f0b06:c.instructions+=36;goto B6f0b06;
case 0x6f0b09:c.instructions+=35;goto B6f0b09;
case 0x6f0b0c:c.instructions+=34;goto B6f0b0c;
case 0x6f0b0f:c.instructions+=33;goto B6f0b0f;
case 0x6f0b12:c.instructions+=32;goto B6f0b12;
case 0x6f0b16:c.instructions+=31;goto B6f0b16;
case 0x6f0b19:c.instructions+=30;goto B6f0b19;
case 0x6f0b1c:c.instructions+=29;goto B6f0b1c;
case 0x6f0b20:c.instructions+=28;goto B6f0b20;
case 0x6f0b24:c.instructions+=27;goto B6f0b24;
case 0x6f0b28:c.instructions+=26;goto B6f0b28;
case 0x6f0b2b:c.instructions+=25;goto B6f0b2b;
case 0x6f0b2e:c.instructions+=24;goto B6f0b2e;
case 0x6f0b32:c.instructions+=23;goto B6f0b32;
case 0x6f0b35:c.instructions+=22;goto B6f0b35;
case 0x6f0b38:c.instructions+=21;goto B6f0b38;
case 0x6f0b3c:c.instructions+=20;goto B6f0b3c;
case 0x6f0b40:c.instructions+=19;goto B6f0b40;
case 0x6f0b44:c.instructions+=18;goto B6f0b44;
case 0x6f0b47:c.instructions+=17;goto B6f0b47;
case 0x6f0b4a:c.instructions+=16;goto B6f0b4a;
case 0x6f0b4e:c.instructions+=15;goto B6f0b4e;
case 0x6f0b51:c.instructions+=14;goto B6f0b51;
case 0x6f0b54:c.instructions+=13;goto B6f0b54;
case 0x6f0b58:c.instructions+=12;goto B6f0b58;
case 0x6f0b5c:c.instructions+=11;goto B6f0b5c;
case 0x6f0b60:c.instructions+=10;goto B6f0b60;
case 0x6f0b63:c.instructions+=9;goto B6f0b63;
case 0x6f0b65:c.instructions+=8;goto B6f0b65;
case 0x6f0b69:c.instructions+=7;goto B6f0b69;
case 0x6f0b6d:c.instructions+=6;goto B6f0b6d;
case 0x6f0b70:c.instructions+=5;goto B6f0b70;
case 0x6f0b73:c.instructions+=4;goto B6f0b73;
case 0x6f0b77:c.instructions+=3;goto B6f0b77;
case 0x6f0b7a:c.instructions+=2;goto B6f0b7a;
case 0x6f0b7d:c.instructions+=1;goto B6f0b7d;
case 0x6f0b83:goto L6f0b83;
case 0x6f0b87:goto L6f0b87;
case 0x6f0b8b:c.instructions+=1;goto B6f0b8b;
case 0x6f0b8d:goto L6f0b8d;
case 0x6f0b91:c.instructions+=5;goto B6f0b91;
case 0x6f0b95:c.instructions+=4;goto B6f0b95;
case 0x6f0b98:c.instructions+=3;goto B6f0b98;
case 0x6f0b9a:c.instructions+=2;goto B6f0b9a;
case 0x6f0b9c:c.instructions+=1;goto B6f0b9c;
case 0x6f0ba0:goto L6f0ba0;
case 0x6f0ba3:c.instructions+=12;goto B6f0ba3;
case 0x6f0ba7:c.instructions+=11;goto B6f0ba7;
case 0x6f0ba8:c.instructions+=10;goto B6f0ba8;
case 0x6f0bab:c.instructions+=9;goto B6f0bab;
case 0x6f0baf:c.instructions+=8;goto B6f0baf;
case 0x6f0bb2:c.instructions+=7;goto B6f0bb2;
case 0x6f0bb3:c.instructions+=6;goto B6f0bb3;
case 0x6f0bb6:c.instructions+=5;goto B6f0bb6;
case 0x6f0bb9:c.instructions+=4;goto B6f0bb9;
case 0x6f0bbd:c.instructions+=3;goto B6f0bbd;
case 0x6f0bc0:c.instructions+=2;goto B6f0bc0;
case 0x6f0bc3:c.instructions+=1;goto B6f0bc3;
case 0x6f0bc5:goto L6f0bc5;
case 0x6f0bc9:c.instructions+=5;goto B6f0bc9;
case 0x6f0bcd:c.instructions+=4;goto B6f0bcd;
case 0x6f0bce:c.instructions+=3;goto B6f0bce;
case 0x6f0bd0:c.instructions+=2;goto B6f0bd0;
case 0x6f0bd4:c.instructions+=1;goto B6f0bd4;
case 0x6f0bda:goto L6f0bda;
case 0x6f0bde:goto L6f0bde;
case 0x6f0be2:c.instructions+=4;goto B6f0be2;
case 0x6f0be3:c.instructions+=3;goto B6f0be3;
case 0x6f0be5:c.instructions+=2;goto B6f0be5;
case 0x6f0be9:c.instructions+=1;goto B6f0be9;
case 0x6f0bef:goto L6f0bef;
case 0x6f0bf0:c.instructions+=2;goto B6f0bf0;
case 0x6f0bf1:c.instructions+=1;goto B6f0bf1;
case 0x6f0bf2:goto L6f0bf2;
case 0x6f0bf3:c.instructions+=2;goto B6f0bf3;
case 0x6f0bf6:c.instructions+=1;goto B6f0bf6;
case 0x6f0c00:goto L6f0c00;
case 0x6f0c01:c.instructions+=6;goto B6f0c01;
case 0x6f0c02:c.instructions+=5;goto B6f0c02;
case 0x6f0c04:c.instructions+=4;goto B6f0c04;
case 0x6f0c05:c.instructions+=3;goto B6f0c05;
case 0x6f0c07:c.instructions+=2;goto B6f0c07;
case 0x6f0c08:c.instructions+=1;goto B6f0c08;
case 0x6f0c0a:goto L6f0c0a;
case 0x6f0c0e:c.instructions+=1;goto B6f0c0e;
case 0x6f0c10:goto L6f0c10;
case 0x6f0c13:c.instructions+=4;goto B6f0c13;
case 0x6f0c15:c.instructions+=3;goto B6f0c15;
case 0x6f0c1a:c.instructions+=2;goto B6f0c1a;
case 0x6f0c1d:c.instructions+=1;goto B6f0c1d;
case 0x6f0c1f:goto L6f0c1f;
case 0x6f0c22:c.instructions+=1;goto B6f0c22;
case 0x6f0c24:goto L6f0c24;
case 0x6f0c26:goto L6f0c26;
case 0x6f0c29:goto L6f0c29;
case 0x6f0c2b:c.instructions+=1;goto B6f0c2b;
case 0x6f0c2d:goto L6f0c2d;
case 0x6f0c2e:c.instructions+=4;goto B6f0c2e;
case 0x6f0c2f:c.instructions+=3;goto B6f0c2f;
case 0x6f0c31:c.instructions+=2;goto B6f0c31;
case 0x6f0c32:c.instructions+=1;goto B6f0c32;
case 0x6f0c35:goto L6f0c35;
case 0x6f0c36:c.instructions+=4;goto B6f0c36;
case 0x6f0c37:c.instructions+=3;goto B6f0c37;
case 0x6f0c3b:c.instructions+=2;goto B6f0c3b;
case 0x6f0c3c:c.instructions+=1;goto B6f0c3c;
case 0x6f0c40:goto L6f0c40;
case 0x6f0c45:c.instructions+=4;goto B6f0c45;
case 0x6f0c46:c.instructions+=3;goto B6f0c46;
case 0x6f0c48:c.instructions+=2;goto B6f0c48;
case 0x6f0c4b:c.instructions+=1;goto B6f0c4b;
case 0x6f0c50:goto L6f0c50;
case 0x6f0c52:c.instructions+=1;goto B6f0c52;
case 0x6f0c54:goto L6f0c54;
case 0x6f0c57:c.instructions+=4;goto B6f0c57;
case 0x6f0c5b:c.instructions+=3;goto B6f0c5b;
case 0x6f0c5d:c.instructions+=2;goto B6f0c5d;
case 0x6f0c5f:c.instructions+=1;goto B6f0c5f;
case 0x6f0c62:goto L6f0c62;
case 0x6f0c64:c.instructions+=1;goto B6f0c64;
case 0x6f0c70:goto L6f0c70;
case 0x6f0c71:c.instructions+=2;goto B6f0c71;
case 0x6f0c73:c.instructions+=1;goto B6f0c73;
case 0x6f0c78:goto L6f0c78;
case 0x6f0c7e:c.instructions+=5;goto B6f0c7e;
case 0x6f0c85:c.instructions+=4;goto B6f0c85;
case 0x6f0c8b:c.instructions+=3;goto B6f0c8b;
case 0x6f0c8d:c.instructions+=2;goto B6f0c8d;
case 0x6f0c8e:c.instructions+=1;goto B6f0c8e;
case 0x6f0c90:goto L6f0c90;
case 0x6f0c91:c.instructions+=2;goto B6f0c91;
case 0x6f0c93:c.instructions+=1;goto B6f0c93;
case 0x6f0c98:goto L6f0c98;
case 0x6f0c9d:c.instructions+=1;goto B6f0c9d;
case 0x6f0c9f:goto L6f0c9f;
case 0x6f0ca1:c.instructions+=2;goto B6f0ca1;
case 0x6f0ca2:c.instructions+=1;goto B6f0ca2;
case 0x6f0ca8:goto L6f0ca8;
case 0x6f0cab:goto L6f0cab;
case 0x6f0cad:c.instructions+=2;goto B6f0cad;
case 0x6f0cae:c.instructions+=1;goto B6f0cae;
case 0x6f0cc0:goto L6f0cc0;
case 0x6f0cc4:c.instructions+=3;goto B6f0cc4;
case 0x6f0cc7:c.instructions+=2;goto B6f0cc7;
case 0x6f0ccd:c.instructions+=1;goto B6f0ccd;
case 0x6f0cd0:goto L6f0cd0;
case 0x6f0cd4:c.instructions+=3;goto B6f0cd4;
case 0x6f0cda:c.instructions+=2;goto B6f0cda;
case 0x6f0cdc:c.instructions+=1;goto B6f0cdc;
case 0x6f0ce0:goto L6f0ce0;
case 0x6f0ce3:c.instructions+=12;goto B6f0ce3;
case 0x6f0ce7:c.instructions+=11;goto B6f0ce7;
case 0x6f0ce8:c.instructions+=10;goto B6f0ce8;
case 0x6f0cee:c.instructions+=9;goto B6f0cee;
case 0x6f0cef:c.instructions+=8;goto B6f0cef;
case 0x6f0cf3:c.instructions+=7;goto B6f0cf3;
case 0x6f0cf4:c.instructions+=6;goto B6f0cf4;
case 0x6f0cf8:c.instructions+=5;goto B6f0cf8;
case 0x6f0cfb:c.instructions+=4;goto B6f0cfb;
case 0x6f0cfd:c.instructions+=3;goto B6f0cfd;
case 0x6f0cfe:c.instructions+=2;goto B6f0cfe;
case 0x6f0d01:c.instructions+=1;goto B6f0d01;
case 0x6f0d03:goto L6f0d03;
case 0x6f0d09:c.instructions+=4;goto B6f0d09;
case 0x6f0d0d:c.instructions+=3;goto B6f0d0d;
case 0x6f0d11:c.instructions+=2;goto B6f0d11;
case 0x6f0d15:c.instructions+=1;goto B6f0d15;
case 0x6f0d17:goto L6f0d17;
case 0x6f0d1d:c.instructions+=3;goto B6f0d1d;
case 0x6f0d21:c.instructions+=2;goto B6f0d21;
case 0x6f0d25:c.instructions+=1;goto B6f0d25;
case 0x6f0d29:goto L6f0d29;
case 0x6f0d2c:c.instructions+=10;goto B6f0d2c;
case 0x6f0d32:c.instructions+=9;goto B6f0d32;
case 0x6f0d35:c.instructions+=8;goto B6f0d35;
case 0x6f0d39:c.instructions+=7;goto B6f0d39;
case 0x6f0d3d:c.instructions+=6;goto B6f0d3d;
case 0x6f0d42:c.instructions+=5;goto B6f0d42;
case 0x6f0d46:c.instructions+=4;goto B6f0d46;
case 0x6f0d4a:c.instructions+=3;goto B6f0d4a;
case 0x6f0d4c:c.instructions+=2;goto B6f0d4c;
case 0x6f0d4f:c.instructions+=1;goto B6f0d4f;
case 0x6f0d51:goto L6f0d51;
case 0x6f0d53:c.instructions+=1;goto B6f0d53;
case 0x6f0d58:goto L6f0d58;
case 0x6f0d5c:c.instructions+=7;goto B6f0d5c;
case 0x6f0d61:c.instructions+=6;goto B6f0d61;
case 0x6f0d65:c.instructions+=5;goto B6f0d65;
case 0x6f0d69:c.instructions+=4;goto B6f0d69;
case 0x6f0d6d:c.instructions+=3;goto B6f0d6d;
case 0x6f0d6f:c.instructions+=2;goto B6f0d6f;
case 0x6f0d72:c.instructions+=1;goto B6f0d72;
case 0x6f0d74:goto L6f0d74;
case 0x6f0d77:c.instructions+=1;goto B6f0d77;
case 0x6f0d7c:goto L6f0d7c;
case 0x6f0d80:c.instructions+=3;goto B6f0d80;
case 0x6f0d84:c.instructions+=2;goto B6f0d84;
case 0x6f0d88:c.instructions+=1;goto B6f0d88;
case 0x6f0d8a:goto L6f0d8a;
case 0x6f0d8c:c.instructions+=1;goto B6f0d8c;
case 0x6f0d8e:goto L6f0d8e;
case 0x6f0d91:goto L6f0d91;
case 0x6f0d95:c.instructions+=3;goto B6f0d95;
case 0x6f0d97:c.instructions+=2;goto B6f0d97;
case 0x6f0d9a:c.instructions+=1;goto B6f0d9a;
case 0x6f0d9c:goto L6f0d9c;
case 0x6f0d9d:c.instructions+=2;goto B6f0d9d;
case 0x6f0d9f:c.instructions+=1;goto B6f0d9f;
case 0x6f0da1:goto L6f0da1;
case 0x6f0da4:goto L6f0da4;
case 0x6f0da7:c.instructions+=2;goto B6f0da7;
case 0x6f0da9:c.instructions+=1;goto B6f0da9;
case 0x6f0dab:goto L6f0dab;
case 0x6f0dac:c.instructions+=3;goto B6f0dac;
case 0x6f0daf:c.instructions+=2;goto B6f0daf;
case 0x6f0db1:c.instructions+=1;goto B6f0db1;
case 0x6f0db3:goto L6f0db3;
case 0x6f0db5:goto L6f0db5;
case 0x6f0db7:c.instructions+=1;goto B6f0db7;
case 0x6f0db9:goto L6f0db9;
case 0x6f0dc0:goto L6f0dc0;
case 0x6f0dc3:c.instructions+=2;goto B6f0dc3;
case 0x6f0dc5:c.instructions+=1;goto B6f0dc5;
case 0x6f0dc7:goto L6f0dc7;
case 0x6f0dc8:c.instructions+=3;goto B6f0dc8;
case 0x6f0dcb:c.instructions+=2;goto B6f0dcb;
case 0x6f0dcd:c.instructions+=1;goto B6f0dcd;
case 0x6f0dcf:goto L6f0dcf;
case 0x6f0dd4:c.instructions+=1;goto B6f0dd4;
case 0x6f0dd6:goto L6f0dd6;
case 0x6f0dda:c.instructions+=8;goto B6f0dda;
case 0x6f0dde:c.instructions+=7;goto B6f0dde;
case 0x6f0de2:c.instructions+=6;goto B6f0de2;
case 0x6f0de6:c.instructions+=5;goto B6f0de6;
case 0x6f0dea:c.instructions+=4;goto B6f0dea;
case 0x6f0dee:c.instructions+=3;goto B6f0dee;
case 0x6f0df0:c.instructions+=2;goto B6f0df0;
case 0x6f0df3:c.instructions+=1;goto B6f0df3;
case 0x6f0df9:goto L6f0df9;
case 0x6f0dfe:c.instructions+=8;goto B6f0dfe;
case 0x6f0e00:c.instructions+=7;goto B6f0e00;
case 0x6f0e04:c.instructions+=6;goto B6f0e04;
case 0x6f0e08:c.instructions+=5;goto B6f0e08;
case 0x6f0e0c:c.instructions+=4;goto B6f0e0c;
case 0x6f0e11:c.instructions+=3;goto B6f0e11;
case 0x6f0e15:c.instructions+=2;goto B6f0e15;
case 0x6f0e19:c.instructions+=1;goto B6f0e19;
case 0x6f0e1b:goto L6f0e1b;
case 0x6f0e1f:c.instructions+=17;goto B6f0e1f;
case 0x6f0e23:c.instructions+=16;goto B6f0e23;
case 0x6f0e26:c.instructions+=15;goto B6f0e26;
case 0x6f0e2a:c.instructions+=14;goto B6f0e2a;
case 0x6f0e2e:c.instructions+=13;goto B6f0e2e;
case 0x6f0e30:c.instructions+=12;goto B6f0e30;
case 0x6f0e34:c.instructions+=11;goto B6f0e34;
case 0x6f0e38:c.instructions+=10;goto B6f0e38;
case 0x6f0e3c:c.instructions+=9;goto B6f0e3c;
case 0x6f0e3f:c.instructions+=8;goto B6f0e3f;
case 0x6f0e41:c.instructions+=7;goto B6f0e41;
case 0x6f0e45:c.instructions+=6;goto B6f0e45;
case 0x6f0e49:c.instructions+=5;goto B6f0e49;
case 0x6f0e4b:c.instructions+=4;goto B6f0e4b;
case 0x6f0e4f:c.instructions+=3;goto B6f0e4f;
case 0x6f0e53:c.instructions+=2;goto B6f0e53;
case 0x6f0e57:c.instructions+=1;goto B6f0e57;
case 0x6f0e5d:goto L6f0e5d;
case 0x6f0e61:c.instructions+=18;goto B6f0e61;
case 0x6f0e63:c.instructions+=17;goto B6f0e63;
case 0x6f0e66:c.instructions+=16;goto B6f0e66;
case 0x6f0e68:c.instructions+=15;goto B6f0e68;
case 0x6f0e6b:c.instructions+=14;goto B6f0e6b;
case 0x6f0e6e:c.instructions+=13;goto B6f0e6e;
case 0x6f0e74:c.instructions+=12;goto B6f0e74;
case 0x6f0e77:c.instructions+=11;goto B6f0e77;
case 0x6f0e7a:c.instructions+=10;goto B6f0e7a;
case 0x6f0e7b:c.instructions+=9;goto B6f0e7b;
case 0x6f0e7e:c.instructions+=8;goto B6f0e7e;
case 0x6f0e81:c.instructions+=7;goto B6f0e81;
case 0x6f0e83:c.instructions+=6;goto B6f0e83;
case 0x6f0e86:c.instructions+=5;goto B6f0e86;
case 0x6f0e88:c.instructions+=4;goto B6f0e88;
case 0x6f0e8a:c.instructions+=3;goto B6f0e8a;
case 0x6f0e8e:c.instructions+=2;goto B6f0e8e;
case 0x6f0e90:c.instructions+=1;goto B6f0e90;
case 0x6f0e92:goto L6f0e92;
case 0x6f0e94:c.instructions+=9;goto B6f0e94;
case 0x6f0e95:c.instructions+=8;goto B6f0e95;
case 0x6f0e99:c.instructions+=7;goto B6f0e99;
case 0x6f0e9d:c.instructions+=6;goto B6f0e9d;
case 0x6f0ea1:c.instructions+=5;goto B6f0ea1;
case 0x6f0ea5:c.instructions+=4;goto B6f0ea5;
case 0x6f0ea8:c.instructions+=3;goto B6f0ea8;
case 0x6f0eaa:c.instructions+=2;goto B6f0eaa;
case 0x6f0eae:c.instructions+=1;goto B6f0eae;
case 0x6f0eb0:goto L6f0eb0;
case 0x6f0eb3:c.instructions+=25;goto B6f0eb3;
case 0x6f0eb6:c.instructions+=24;goto B6f0eb6;
case 0x6f0eb9:c.instructions+=23;goto B6f0eb9;
case 0x6f0ebd:c.instructions+=22;goto B6f0ebd;
case 0x6f0ec0:c.instructions+=21;goto B6f0ec0;
case 0x6f0ec4:c.instructions+=20;goto B6f0ec4;
case 0x6f0ec7:c.instructions+=19;goto B6f0ec7;
case 0x6f0eca:c.instructions+=18;goto B6f0eca;
case 0x6f0ecd:c.instructions+=17;goto B6f0ecd;
case 0x6f0ed1:c.instructions+=16;goto B6f0ed1;
case 0x6f0ed5:c.instructions+=15;goto B6f0ed5;
case 0x6f0ed8:c.instructions+=14;goto B6f0ed8;
case 0x6f0edb:c.instructions+=13;goto B6f0edb;
case 0x6f0edf:c.instructions+=12;goto B6f0edf;
case 0x6f0ee2:c.instructions+=11;goto B6f0ee2;
case 0x6f0ee6:c.instructions+=10;goto B6f0ee6;
case 0x6f0eea:c.instructions+=9;goto B6f0eea;
case 0x6f0eed:c.instructions+=8;goto B6f0eed;
case 0x6f0ef0:c.instructions+=7;goto B6f0ef0;
case 0x6f0ef4:c.instructions+=6;goto B6f0ef4;
case 0x6f0ef7:c.instructions+=5;goto B6f0ef7;
case 0x6f0efb:c.instructions+=4;goto B6f0efb;
case 0x6f0eff:c.instructions+=3;goto B6f0eff;
case 0x6f0f00:c.instructions+=2;goto B6f0f00;
case 0x6f0f04:c.instructions+=1;goto B6f0f04;
case 0x6f0f06:goto L6f0f06;
case 0x6f0f0a:c.instructions+=1;goto B6f0f0a;
case 0x6f0f0e:goto L6f0f0e;
case 0x6f0f0f:c.instructions+=2;goto B6f0f0f;
case 0x6f0f11:c.instructions+=1;goto B6f0f11;
case 0x6f0f17:goto L6f0f17;
case 0x6f0f1b:c.instructions+=2;goto B6f0f1b;
case 0x6f0f1f:c.instructions+=1;goto B6f0f1f;
case 0x6f0f23:goto L6f0f23;
case 0x6f0f27:c.instructions+=8;goto B6f0f27;
case 0x6f0f2b:c.instructions+=7;goto B6f0f2b;
case 0x6f0f2f:c.instructions+=6;goto B6f0f2f;
case 0x6f0f32:c.instructions+=5;goto B6f0f32;
case 0x6f0f33:c.instructions+=4;goto B6f0f33;
case 0x6f0f34:c.instructions+=3;goto B6f0f34;
case 0x6f0f35:c.instructions+=2;goto B6f0f35;
case 0x6f0f36:c.instructions+=1;goto B6f0f36;
case 0x6f0f3b:goto L6f0f3b;
case 0x6f0f3e:c.instructions+=4;goto B6f0f3e;
case 0x6f0f41:c.instructions+=3;goto B6f0f41;
case 0x6f0f44:c.instructions+=2;goto B6f0f44;
case 0x6f0f45:c.instructions+=1;goto B6f0f45;
case 0x6f0f47:goto L6f0f47;
case 0x6f0f48:c.instructions+=6;goto B6f0f48;
case 0x6f0f49:c.instructions+=5;goto B6f0f49;
case 0x6f0f4a:c.instructions+=4;goto B6f0f4a;
case 0x6f0f4c:c.instructions+=3;goto B6f0f4c;
case 0x6f0f4d:c.instructions+=2;goto B6f0f4d;
case 0x6f0f50:c.instructions+=1;goto B6f0f50;
case 0x6f0f53:goto L6f0f53;
case 0x6f0f58:c.instructions+=1;goto B6f0f58;
case 0x6f0f5d:goto L6f0f5d;
case 0x6f0f5e:c.instructions+=7;goto B6f0f5e;
case 0x6f0f60:c.instructions+=6;goto B6f0f60;
case 0x6f0f63:c.instructions+=5;goto B6f0f63;
case 0x6f0f66:c.instructions+=4;goto B6f0f66;
case 0x6f0f67:c.instructions+=3;goto B6f0f67;
case 0x6f0f69:c.instructions+=2;goto B6f0f69;
case 0x6f0f70:c.instructions+=1;goto B6f0f70;
case 0x6f0f72:goto L6f0f72;
case 0x6f0f75:c.instructions+=8;goto B6f0f75;
case 0x6f0f76:c.instructions+=7;goto B6f0f76;
case 0x6f0f7a:c.instructions+=6;goto B6f0f7a;
case 0x6f0f7c:c.instructions+=5;goto B6f0f7c;
case 0x6f0f80:c.instructions+=4;goto B6f0f80;
case 0x6f0f83:c.instructions+=3;goto B6f0f83;
case 0x6f0f86:c.instructions+=2;goto B6f0f86;
case 0x6f0f8a:c.instructions+=1;goto B6f0f8a;
case 0x6f0f90:goto L6f0f90;
case 0x6f0f93:c.instructions+=15;goto B6f0f93;
case 0x6f0f96:c.instructions+=14;goto B6f0f96;
case 0x6f0f9a:c.instructions+=13;goto B6f0f9a;
case 0x6f0f9d:c.instructions+=12;goto B6f0f9d;
case 0x6f0fa0:c.instructions+=11;goto B6f0fa0;
case 0x6f0fa4:c.instructions+=10;goto B6f0fa4;
case 0x6f0fa8:c.instructions+=9;goto B6f0fa8;
case 0x6f0faa:c.instructions+=8;goto B6f0faa;
case 0x6f0fae:c.instructions+=7;goto B6f0fae;
case 0x6f0fb2:c.instructions+=6;goto B6f0fb2;
case 0x6f0fb6:c.instructions+=5;goto B6f0fb6;
case 0x6f0fb9:c.instructions+=4;goto B6f0fb9;
case 0x6f0fbc:c.instructions+=3;goto B6f0fbc;
case 0x6f0fbd:c.instructions+=2;goto B6f0fbd;
case 0x6f0fc1:c.instructions+=1;goto B6f0fc1;
case 0x6f0fc3:goto L6f0fc3;
case 0x6f0fc7:c.instructions+=1;goto B6f0fc7;
case 0x6f0fcb:goto L6f0fcb;
case 0x6f0fcc:c.instructions+=2;goto B6f0fcc;
case 0x6f0fce:c.instructions+=1;goto B6f0fce;
case 0x6f0fd0:goto L6f0fd0;
case 0x6f0fd4:c.instructions+=13;goto B6f0fd4;
case 0x6f0fd8:c.instructions+=12;goto B6f0fd8;
case 0x6f0fdb:c.instructions+=11;goto B6f0fdb;
case 0x6f0fdf:c.instructions+=10;goto B6f0fdf;
case 0x6f0fe2:c.instructions+=9;goto B6f0fe2;
case 0x6f0fe5:c.instructions+=8;goto B6f0fe5;
case 0x6f0fe9:c.instructions+=7;goto B6f0fe9;
case 0x6f0fed:c.instructions+=6;goto B6f0fed;
case 0x6f0fef:c.instructions+=5;goto B6f0fef;
case 0x6f0ff3:c.instructions+=4;goto B6f0ff3;
case 0x6f0ff7:c.instructions+=3;goto B6f0ff7;
case 0x6f0ffa:c.instructions+=2;goto B6f0ffa;
case 0x6f0ffe:c.instructions+=1;goto B6f0ffe;
default:missing_instruction(c.pc);}
B6f0003:L6f0003:{c.instructions+=11;NFSU2_TR(0x6f0003);
{u32 ea_=u32(r4(R+4)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f0006:{NFSU2_TR(0x6f0006);
{u32 ea_=u32(r4(R+4)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f0009:{NFSU2_TR(0x6f0009);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6f000d:{NFSU2_TR(0x6f000d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0011:{NFSU2_TR(0x6f0011);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f0015:{NFSU2_TR(0x6f0015);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f0018:{NFSU2_TR(0x6f0018);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f001b:{NFSU2_TR(0x6f001b);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f001f:{NFSU2_TR(0x6f001f);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f0022:{NFSU2_TR(0x6f0022);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f0025:{NFSU2_TR(0x6f0025);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6eff93u,6ef);}
}
B6f002b:L6f002b:{c.instructions+=4;NFSU2_TR(0x6f002b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f002f:{NFSU2_TR(0x6f002f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f0033:{NFSU2_TR(0x6f0033);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f0035:{NFSU2_TR(0x6f0035);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f006b;}}
}
B6f0037:L6f0037:{c.instructions+=5;NFSU2_TR(0x6f0037);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f003b:{NFSU2_TR(0x6f003b);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B6f003d:{NFSU2_TR(0x6f003d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6f0040:{NFSU2_TR(0x6f0040);
__builtin_memmove((R+24),(R+20),4);
}
B6f0042:{NFSU2_TR(0x6f0042);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+28))));
}
B6f0044:L6f0044:{c.instructions+=13;NFSU2_TR(0x6f0044);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+28,u32(r2(U+0)));
}
B6f0047:{NFSU2_TR(0x6f0047);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f004b:{NFSU2_TR(0x6f004b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B6f004e:{NFSU2_TR(0x6f004e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6f0051:{NFSU2_TR(0x6f0051);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f0055:{NFSU2_TR(0x6f0055);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6f0058:{NFSU2_TR(0x6f0058);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B6f0059:{NFSU2_TR(0x6f0059);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f005c:{NFSU2_TR(0x6f005c);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f005f:{NFSU2_TR(0x6f005f);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f0063:{NFSU2_TR(0x6f0063);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f0066:{NFSU2_TR(0x6f0066);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f0069:{NFSU2_TR(0x6f0069);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f0044u);}goto L6f0044;}}
}
B6f006b:L6f006b:{c.instructions+=5;NFSU2_TR(0x6f006b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f006f:{NFSU2_TR(0x6f006f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6f0070:{NFSU2_TR(0x6f0070);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f0072:{NFSU2_TR(0x6f0072);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0076:{NFSU2_TR(0x6f0076);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6eff70u,6ef);}
}
B6f007c:L6f007c:{c.instructions+=2;NFSU2_TR(0x6f007c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f0080:{NFSU2_TR(0x6f0080);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6eff53u,6ef);}
}
B6f0086:L6f0086:{c.instructions+=6;NFSU2_TR(0x6f0086);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f0087:{NFSU2_TR(0x6f0087);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f0088:{NFSU2_TR(0x6f0088);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f0089:{NFSU2_TR(0x6f0089);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f008a:{NFSU2_TR(0x6f008a);
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
B6f008d:{NFSU2_TR(0x6f008d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f0090:L6f0090:{c.instructions+=4;NFSU2_TR(0x6f0090);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B6f0093:{NFSU2_TR(0x6f0093);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B6f0095:{NFSU2_TR(0x6f0095);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f0097:{NFSU2_TR(0x6f0097);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f03ae;}}
}
B6f009d:L6f009d:{c.instructions+=2;NFSU2_TR(0x6f009d);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+4))));
}
B6f009f:{NFSU2_TR(0x6f009f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f00a3:L6f00a3:{c.instructions+=6;NFSU2_TR(0x6f00a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f00a7:{NFSU2_TR(0x6f00a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f00ab:{NFSU2_TR(0x6f00ab);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6f00ad:{NFSU2_TR(0x6f00ad);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f00af:{NFSU2_TR(0x6f00af);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f00b3:{NFSU2_TR(0x6f00b3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f01c6;}}
}
B6f00b9:L6f00b9:{c.instructions+=1;NFSU2_TR(0x6f00b9);
__builtin_memmove((R+16),(R+16),4);
}
B6f00c0:L6f00c0:{c.instructions+=6;NFSU2_TR(0x6f00c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f00c4:{NFSU2_TR(0x6f00c4);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(r2(U+8)));
}
B6f00c8:{NFSU2_TR(0x6f00c8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6f00ca:{NFSU2_TR(0x6f00ca);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f00cd:{NFSU2_TR(0x6f00cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f00d1:{NFSU2_TR(0x6f00d1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6f017b;}}
}
B6f00d7:L6f00d7:{c.instructions+=3;NFSU2_TR(0x6f00d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f00db:{NFSU2_TR(0x6f00db);
w4(R+24,u32(0x3ull));
}
B6f00e0:{NFSU2_TR(0x6f00e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6f00e3:L6f00e3:{c.instructions+=45;NFSU2_TR(0x6f00e3);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+12,u32(r1(U+0)));
}
B6f00e6:{NFSU2_TR(0x6f00e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f00ea:{NFSU2_TR(0x6f00ea);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B6f00ed:{NFSU2_TR(0x6f00ed);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6f00ee:{NFSU2_TR(0x6f00ee);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f00f2:{NFSU2_TR(0x6f00f2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B6f00f5:{NFSU2_TR(0x6f00f5);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6f00f6:{NFSU2_TR(0x6f00f6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B6f00f9:{NFSU2_TR(0x6f00f9);
{u32 ea_=u32(r4(R+0)+u32(4294967264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f00fc:{NFSU2_TR(0x6f00fc);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6f00fd:{NFSU2_TR(0x6f00fd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B6f0100:{NFSU2_TR(0x6f0100);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6f0103:{NFSU2_TR(0x6f0103);
{u32 ea_=u32(r4(R+0)+u32(4294967248u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f0106:{NFSU2_TR(0x6f0106);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6f0107:{NFSU2_TR(0x6f0107);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6f010a:{NFSU2_TR(0x6f010a);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f010e:{NFSU2_TR(0x6f010e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B6f0111:{NFSU2_TR(0x6f0111);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f0113:{NFSU2_TR(0x6f0113);
{u32 ea_=u32(r4(R+4)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f0116:{NFSU2_TR(0x6f0116);
{u32 ea_=u32(r4(R+4)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f0119:{NFSU2_TR(0x6f0119);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B6f011d:{NFSU2_TR(0x6f011d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0121:{NFSU2_TR(0x6f0121);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f0125:{NFSU2_TR(0x6f0125);
{u32 ea_=u32(r4(R+0)+u32(4294967264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f0128:{NFSU2_TR(0x6f0128);
{u32 ea_=u32(r4(R+0)+u32(4294967260u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f012b:{NFSU2_TR(0x6f012b);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f012f:{NFSU2_TR(0x6f012f);
{u32 ea_=u32(r4(R+4)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f0132:{NFSU2_TR(0x6f0132);
{u32 ea_=u32(r4(R+4)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f0135:{NFSU2_TR(0x6f0135);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B6f0139:{NFSU2_TR(0x6f0139);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f013d:{NFSU2_TR(0x6f013d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f0141:{NFSU2_TR(0x6f0141);
{u32 ea_=u32(r4(R+0)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f0144:{NFSU2_TR(0x6f0144);
{u32 ea_=u32(r4(R+0)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f0147:{NFSU2_TR(0x6f0147);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f014b:{NFSU2_TR(0x6f014b);
{u32 ea_=u32(r4(R+4)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f014e:{NFSU2_TR(0x6f014e);
{u32 ea_=u32(r4(R+4)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f0151:{NFSU2_TR(0x6f0151);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B6f0155:{NFSU2_TR(0x6f0155);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0159:{NFSU2_TR(0x6f0159);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f015d:{NFSU2_TR(0x6f015d);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f0160:{NFSU2_TR(0x6f0160);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f0163:{NFSU2_TR(0x6f0163);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f0167:{NFSU2_TR(0x6f0167);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f016a:{NFSU2_TR(0x6f016a);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f016d:{NFSU2_TR(0x6f016d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f00e3u);}goto L6f00e3;}}
}
B6f0173:L6f0173:{c.instructions+=2;NFSU2_TR(0x6f0173);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f0177:{NFSU2_TR(0x6f0177);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f017b:L6f017b:{c.instructions+=2;NFSU2_TR(0x6f017b);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f017d:{NFSU2_TR(0x6f017d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f01b5;}}
}
B6f017f:L6f017f:{c.instructions+=6;NFSU2_TR(0x6f017f);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f0183:{NFSU2_TR(0x6f0183);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B6f0185:{NFSU2_TR(0x6f0185);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6f0188:{NFSU2_TR(0x6f0188);
__builtin_memmove((R+24),(R+20),4);
}
B6f018a:{NFSU2_TR(0x6f018a);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+28))));
}
B6f018c:{NFSU2_TR(0x6f018c);
__builtin_memmove((R+16),(R+16),4);
}
B6f0190:L6f0190:{c.instructions+=13;NFSU2_TR(0x6f0190);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+28,u32(r1(U+0)));
}
B6f0193:{NFSU2_TR(0x6f0193);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0197:{NFSU2_TR(0x6f0197);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B6f019a:{NFSU2_TR(0x6f019a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6f019b:{NFSU2_TR(0x6f019b);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f019f:{NFSU2_TR(0x6f019f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6f01a2:{NFSU2_TR(0x6f01a2);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B6f01a3:{NFSU2_TR(0x6f01a3);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f01a6:{NFSU2_TR(0x6f01a6);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f01a9:{NFSU2_TR(0x6f01a9);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f01ad:{NFSU2_TR(0x6f01ad);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f01b0:{NFSU2_TR(0x6f01b0);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f01b3:{NFSU2_TR(0x6f01b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f0190u);}goto L6f0190;}}
}
B6f01b5:L6f01b5:{c.instructions+=5;NFSU2_TR(0x6f01b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f01b9:{NFSU2_TR(0x6f01b9);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6f01ba:{NFSU2_TR(0x6f01ba);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f01bc:{NFSU2_TR(0x6f01bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f01c0:{NFSU2_TR(0x6f01c0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f00c0u);}goto L6f00c0;}}
}
B6f01c6:L6f01c6:{c.instructions+=2;NFSU2_TR(0x6f01c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f01ca:{NFSU2_TR(0x6f01ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f00a3u);}goto L6f00a3;}}
}
B6f01d0:L6f01d0:{c.instructions+=6;NFSU2_TR(0x6f01d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f01d1:{NFSU2_TR(0x6f01d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f01d2:{NFSU2_TR(0x6f01d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f01d3:{NFSU2_TR(0x6f01d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f01d4:{NFSU2_TR(0x6f01d4);
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
B6f01d7:{NFSU2_TR(0x6f01d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f01da:L6f01da:{c.instructions+=14;NFSU2_TR(0x6f01da);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f01dd:{NFSU2_TR(0x6f01dd);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6f01de:{NFSU2_TR(0x6f01de);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6f01e0:{NFSU2_TR(0x6f01e0);
__builtin_memmove((R+24),(R+0),4);
}
B6f01e2:{NFSU2_TR(0x6f01e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f01e6:{NFSU2_TR(0x6f01e6);
w4(R+24,sar<u32>(r4(R+24),u64(u32(0x1ull))));
}
B6f01e8:{NFSU2_TR(0x6f01e8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B6f01eb:{NFSU2_TR(0x6f01eb);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffeull))));
}
B6f01ee:{NFSU2_TR(0x6f01ee);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B6f01f0:{NFSU2_TR(0x6f01f0);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B6f01f2:{NFSU2_TR(0x6f01f2);
u8 U[2];
__builtin_memmove((U+0),(R+512),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(R+0))));
w1(R+0,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B6f01f4:{NFSU2_TR(0x6f01f4);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B6f01f6:{NFSU2_TR(0x6f01f6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f01f8:{NFSU2_TR(0x6f01f8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f03ae;}}
}
B6f01fe:L6f01fe:{c.instructions+=2;NFSU2_TR(0x6f01fe);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+4))));
}
B6f0200:{NFSU2_TR(0x6f0200);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0204:L6f0204:{c.instructions+=5;NFSU2_TR(0x6f0204);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f0208:{NFSU2_TR(0x6f0208);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f020a:{NFSU2_TR(0x6f020a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f020e:{NFSU2_TR(0x6f020e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f0216:{NFSU2_TR(0x6f0216);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f039d;}}
}
B6f021c:L6f021c:{c.instructions+=1;NFSU2_TR(0x6f021c);
__builtin_memmove((R+16),(R+16),4);
}
B6f0220:L6f0220:{c.instructions+=7;NFSU2_TR(0x6f0220);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f0223:{NFSU2_TR(0x6f0223);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f0227:{NFSU2_TR(0x6f0227);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f022b:{NFSU2_TR(0x6f022b);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+8,u32(r2(U+8)));
}
B6f022f:{NFSU2_TR(0x6f022f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0233:{NFSU2_TR(0x6f0233);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f023b:{NFSU2_TR(0x6f023b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6f0330;}}
}
B6f0241:L6f0241:{c.instructions+=4;NFSU2_TR(0x6f0241);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f0245:{NFSU2_TR(0x6f0245);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f0249:{NFSU2_TR(0x6f0249);
w4(R+28,u32(0x3ull));
}
B6f024e:{NFSU2_TR(0x6f024e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6f0251:L6f0251:{c.instructions+=3;NFSU2_TR(0x6f0251);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f0253:{NFSU2_TR(0x6f0253);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+12),(U+0),1);
}
B6f0255:{NFSU2_TR(0x6f0255);
if(r1(R+518)){{goto L6f025c;}}
}
B6f0257:L6f0257:{c.instructions+=2;NFSU2_TR(0x6f0257);
w1(R+12,u8(u32(r1(R+12))&u32(u8(0xfull))));
}
B6f025a:{NFSU2_TR(0x6f025a);
{goto L6f0260;}
}
B6f025c:L6f025c:{c.instructions+=2;NFSU2_TR(0x6f025c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w1(R+12,shr<u8>(r1(R+12),u64(r4(U+0))));
}
B6f025f:{NFSU2_TR(0x6f025f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6f0260:L6f0260:{c.instructions+=14;NFSU2_TR(0x6f0260);
w4(R+12,u32(r1(R+12)));
}
B6f0263:{NFSU2_TR(0x6f0263);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0267:{NFSU2_TR(0x6f0267);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f0269:{NFSU2_TR(0x6f0269);
__builtin_memmove((R+0),(R+518),1);
}
B6f026c:{NFSU2_TR(0x6f026c);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f0270:{NFSU2_TR(0x6f0270);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B6f0273:{NFSU2_TR(0x6f0273);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f0275:{NFSU2_TR(0x6f0275);
{u32 ea_=u32(r4(R+4)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f0278:{NFSU2_TR(0x6f0278);
{u32 ea_=u32(r4(R+4)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f027b:{NFSU2_TR(0x6f027b);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f027f:{NFSU2_TR(0x6f027f);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f0281:{NFSU2_TR(0x6f0281);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f0283:{NFSU2_TR(0x6f0283);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+12),(U+0),1);
}
B6f0285:{NFSU2_TR(0x6f0285);
if(r1(R+518)){{goto L6f028c;}}
}
B6f0287:L6f0287:{c.instructions+=2;NFSU2_TR(0x6f0287);
w1(R+12,u8(u32(r1(R+12))&u32(u8(0xfull))));
}
B6f028a:{NFSU2_TR(0x6f028a);
{goto L6f0290;}
}
B6f028c:L6f028c:{c.instructions+=2;NFSU2_TR(0x6f028c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w1(R+12,shr<u8>(r1(R+12),u64(r4(U+0))));
}
B6f028f:{NFSU2_TR(0x6f028f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6f0290:L6f0290:{c.instructions+=14;NFSU2_TR(0x6f0290);
w4(R+12,u32(r1(R+12)));
}
B6f0293:{NFSU2_TR(0x6f0293);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0297:{NFSU2_TR(0x6f0297);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f0299:{NFSU2_TR(0x6f0299);
__builtin_memmove((R+0),(R+518),1);
}
B6f029c:{NFSU2_TR(0x6f029c);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f02a0:{NFSU2_TR(0x6f02a0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B6f02a3:{NFSU2_TR(0x6f02a3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f02a5:{NFSU2_TR(0x6f02a5);
{u32 ea_=u32(r4(R+4)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f02a8:{NFSU2_TR(0x6f02a8);
{u32 ea_=u32(r4(R+4)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f02ab:{NFSU2_TR(0x6f02ab);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f02af:{NFSU2_TR(0x6f02af);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f02b2:{NFSU2_TR(0x6f02b2);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f02b5:{NFSU2_TR(0x6f02b5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+12),(U+0),1);
}
B6f02b7:{NFSU2_TR(0x6f02b7);
if(r1(R+518)){{goto L6f02be;}}
}
B6f02b9:L6f02b9:{c.instructions+=2;NFSU2_TR(0x6f02b9);
w1(R+12,u8(u32(r1(R+12))&u32(u8(0xfull))));
}
B6f02bc:{NFSU2_TR(0x6f02bc);
{goto L6f02c2;}
}
B6f02be:L6f02be:{c.instructions+=2;NFSU2_TR(0x6f02be);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w1(R+12,shr<u8>(r1(R+12),u64(r4(U+0))));
}
B6f02c1:{NFSU2_TR(0x6f02c1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6f02c2:L6f02c2:{c.instructions+=14;NFSU2_TR(0x6f02c2);
w4(R+12,u32(r1(R+12)));
}
B6f02c5:{NFSU2_TR(0x6f02c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f02c9:{NFSU2_TR(0x6f02c9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f02cb:{NFSU2_TR(0x6f02cb);
__builtin_memmove((R+0),(R+518),1);
}
B6f02ce:{NFSU2_TR(0x6f02ce);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f02d2:{NFSU2_TR(0x6f02d2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B6f02d5:{NFSU2_TR(0x6f02d5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f02d7:{NFSU2_TR(0x6f02d7);
{u32 ea_=u32(r4(R+4)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f02da:{NFSU2_TR(0x6f02da);
{u32 ea_=u32(r4(R+4)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f02dd:{NFSU2_TR(0x6f02dd);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f02e1:{NFSU2_TR(0x6f02e1);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f02e4:{NFSU2_TR(0x6f02e4);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f02e7:{NFSU2_TR(0x6f02e7);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+12),(U+0),1);
}
B6f02e9:{NFSU2_TR(0x6f02e9);
if(r1(R+518)){{goto L6f02f0;}}
}
B6f02eb:L6f02eb:{c.instructions+=2;NFSU2_TR(0x6f02eb);
w1(R+12,u8(u32(r1(R+12))&u32(u8(0xfull))));
}
B6f02ee:{NFSU2_TR(0x6f02ee);
{goto L6f02f4;}
}
B6f02f0:L6f02f0:{c.instructions+=2;NFSU2_TR(0x6f02f0);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w1(R+12,shr<u8>(r1(R+12),u64(r4(U+0))));
}
B6f02f3:{NFSU2_TR(0x6f02f3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6f02f4:L6f02f4:{c.instructions+=18;NFSU2_TR(0x6f02f4);
w4(R+12,u32(r1(R+12)));
}
B6f02f7:{NFSU2_TR(0x6f02f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f02fb:{NFSU2_TR(0x6f02fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f02ff:{NFSU2_TR(0x6f02ff);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f0301:{NFSU2_TR(0x6f0301);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f0305:{NFSU2_TR(0x6f0305);
__builtin_memmove((R+0),(R+518),1);
}
B6f0308:{NFSU2_TR(0x6f0308);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B6f030b:{NFSU2_TR(0x6f030b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6f030e:{NFSU2_TR(0x6f030e);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f0311:{NFSU2_TR(0x6f0311);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B6f0314:{NFSU2_TR(0x6f0314);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B6f0317:{NFSU2_TR(0x6f0317);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f0319:{NFSU2_TR(0x6f0319);
{u32 ea_=u32(r4(R+4)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f031c:{NFSU2_TR(0x6f031c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0320:{NFSU2_TR(0x6f0320);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f0324:{NFSU2_TR(0x6f0324);
{u32 ea_=u32(r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f0327:{NFSU2_TR(0x6f0327);
{u32 ea_=u32(r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f032a:{NFSU2_TR(0x6f032a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f0251u);}goto L6f0251;}}
}
B6f0330:L6f0330:{c.instructions+=3;NFSU2_TR(0x6f0330);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f0334:{NFSU2_TR(0x6f0334);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f0336:{NFSU2_TR(0x6f0336);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f0388;}}
}
B6f0338:L6f0338:{c.instructions+=7;NFSU2_TR(0x6f0338);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f033c:{NFSU2_TR(0x6f033c);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f0340:{NFSU2_TR(0x6f0340);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B6f0342:{NFSU2_TR(0x6f0342);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6f0345:{NFSU2_TR(0x6f0345);
__builtin_memmove((R+12),(R+20),4);
}
B6f0347:{NFSU2_TR(0x6f0347);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+8))));
}
B6f0349:{NFSU2_TR(0x6f0349);
__builtin_memmove((R+16),(R+16),4);
}
B6f0350:L6f0350:{c.instructions+=3;NFSU2_TR(0x6f0350);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f0352:{NFSU2_TR(0x6f0352);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+8),(U+0),1);
}
B6f0354:{NFSU2_TR(0x6f0354);
if(r1(R+518)){{goto L6f035b;}}
}
B6f0356:L6f0356:{c.instructions+=2;NFSU2_TR(0x6f0356);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xfull))));
}
B6f0359:{NFSU2_TR(0x6f0359);
{goto L6f035f;}
}
B6f035b:L6f035b:{c.instructions+=2;NFSU2_TR(0x6f035b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w1(R+8,shr<u8>(r1(R+8),u64(r4(U+0))));
}
B6f035e:{NFSU2_TR(0x6f035e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6f035f:L6f035f:{c.instructions+=14;NFSU2_TR(0x6f035f);
w4(R+8,u32(r1(R+8)));
}
B6f0362:{NFSU2_TR(0x6f0362);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0366:{NFSU2_TR(0x6f0366);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f0368:{NFSU2_TR(0x6f0368);
__builtin_memmove((R+0),(R+518),1);
}
B6f036b:{NFSU2_TR(0x6f036b);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f036f:{NFSU2_TR(0x6f036f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B6f0372:{NFSU2_TR(0x6f0372);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6f0375:{NFSU2_TR(0x6f0375);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B6f0376:{NFSU2_TR(0x6f0376);
{u32 ea_=u32(r4(R+4)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f0379:{NFSU2_TR(0x6f0379);
{u32 ea_=u32(r4(R+4)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f037c:{NFSU2_TR(0x6f037c);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f0380:{NFSU2_TR(0x6f0380);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f0383:{NFSU2_TR(0x6f0383);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f0386:{NFSU2_TR(0x6f0386);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f0350u);}goto L6f0350;}}
}
B6f0388:L6f0388:{c.instructions+=6;NFSU2_TR(0x6f0388);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f038c:{NFSU2_TR(0x6f038c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f0390:{NFSU2_TR(0x6f0390);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6f0391:{NFSU2_TR(0x6f0391);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f0393:{NFSU2_TR(0x6f0393);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0397:{NFSU2_TR(0x6f0397);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f0220u);}goto L6f0220;}}
}
B6f039d:L6f039d:{c.instructions+=2;NFSU2_TR(0x6f039d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f039f:{NFSU2_TR(0x6f039f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f03a4;}}
}
B6f03a1:L6f03a1:{c.instructions+=2;NFSU2_TR(0x6f03a1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6f03a2:{NFSU2_TR(0x6f03a2);
w1(R+0,u8(0x1ull));
}
B6f03a4:L6f03a4:{c.instructions+=2;NFSU2_TR(0x6f03a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f03a8:{NFSU2_TR(0x6f03a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f0204u);}goto L6f0204;}}
}
B6f03ae:L6f03ae:{c.instructions+=6;NFSU2_TR(0x6f03ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f03af:{NFSU2_TR(0x6f03af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f03b0:{NFSU2_TR(0x6f03b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f03b1:{NFSU2_TR(0x6f03b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f03b2:{NFSU2_TR(0x6f03b2);
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
B6f03b5:{NFSU2_TR(0x6f03b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f03c0:L6f03c0:{c.instructions+=8;NFSU2_TR(0x6f03c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6f03c3:{NFSU2_TR(0x6f03c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f03c4:{NFSU2_TR(0x6f03c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f03c8:{NFSU2_TR(0x6f03c8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f03c9:{NFSU2_TR(0x6f03c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f03cd:{NFSU2_TR(0x6f03cd);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f03cf:{NFSU2_TR(0x6f03cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f03d3:{NFSU2_TR(0x6f03d3);
if(r1(R+518)){{goto L6f0761;}}
}
B6f03d9:L6f03d9:{c.instructions+=4;NFSU2_TR(0x6f03d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f03da:{NFSU2_TR(0x6f03da);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f03db:{NFSU2_TR(0x6f03db);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f03df:{NFSU2_TR(0x6f03df);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6f0456;}}
}
B6f03e1:L6f03e1:{c.instructions+=2;NFSU2_TR(0x6f03e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f03e3:{NFSU2_TR(0x6f03e3);
if(r1(R+518)){{goto L6f0456;}}
}
B6f03e5:L6f03e5:{c.instructions+=2;NFSU2_TR(0x6f03e5);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f03e8:{NFSU2_TR(0x6f03e8);
if(r1(R+518)){{goto L6f0456;}}
}
B6f03ea:L6f03ea:{c.instructions+=3;NFSU2_TR(0x6f03ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f03ee:{NFSU2_TR(0x6f03ee);
u8 U[16];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f03f2:{NFSU2_TR(0x6f03f2);
if(r1(R+518)){{goto L6f04a2;}}
}
B6f03f8:L6f03f8:{c.instructions+=5;NFSU2_TR(0x6f03f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f03fc:{NFSU2_TR(0x6f03fc);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6f03fe:{NFSU2_TR(0x6f03fe);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f0400:{NFSU2_TR(0x6f0400);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0404:{NFSU2_TR(0x6f0404);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f04a2;}}
}
B6f040a:L6f040a:{c.instructions+=1;NFSU2_TR(0x6f040a);
__builtin_memmove((R+12),(R+12),4);
}
B6f0410:L6f0410:{c.instructions+=5;NFSU2_TR(0x6f0410);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f0414:{NFSU2_TR(0x6f0414);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(r2(U+8)));
}
B6f0418:{NFSU2_TR(0x6f0418);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6f041b:{NFSU2_TR(0x6f041b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f041d:{NFSU2_TR(0x6f041d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f0447;}}
}
B6f041f:L6f041f:{c.instructions+=5;NFSU2_TR(0x6f041f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f0423:{NFSU2_TR(0x6f0423);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6f0426:{NFSU2_TR(0x6f0426);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B6f0428:{NFSU2_TR(0x6f0428);
__builtin_memmove((R+20),(R+28),4);
}
B6f042a:{NFSU2_TR(0x6f042a);
__builtin_memmove((R+12),(R+12),4);
}
B6f0430:L6f0430:{c.instructions+=5;NFSU2_TR(0x6f0430);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6f0433:{NFSU2_TR(0x6f0433);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6f0435:{NFSU2_TR(0x6f0435);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6f0438:{NFSU2_TR(0x6f0438);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B6f0439:{NFSU2_TR(0x6f0439);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f0430u);}goto L6f0430;}}
}
B6f043b:L6f043b:{c.instructions+=3;NFSU2_TR(0x6f043b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f043f:{NFSU2_TR(0x6f043f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f0443:{NFSU2_TR(0x6f0443);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f0447:L6f0447:{c.instructions+=5;NFSU2_TR(0x6f0447);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f044b:{NFSU2_TR(0x6f044b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6f044c:{NFSU2_TR(0x6f044c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f044e:{NFSU2_TR(0x6f044e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0452:{NFSU2_TR(0x6f0452);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f0410u);}goto L6f0410;}}
}
B6f0454:L6f0454:{c.instructions+=1;NFSU2_TR(0x6f0454);
{goto L6f04a2;}
}
B6f0456:L6f0456:{c.instructions+=4;NFSU2_TR(0x6f0456);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f045a:{NFSU2_TR(0x6f045a);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6f045c:{NFSU2_TR(0x6f045c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f045e:{NFSU2_TR(0x6f045e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f049c;}}
}
B6f0460:L6f0460:{c.instructions+=7;NFSU2_TR(0x6f0460);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f0464:{NFSU2_TR(0x6f0464);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(r2(U+8)));
}
B6f0468:{NFSU2_TR(0x6f0468);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6f046b:{NFSU2_TR(0x6f046b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f046d:{NFSU2_TR(0x6f046d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6f0470:{NFSU2_TR(0x6f0470);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6f0474:{NFSU2_TR(0x6f0474);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f0493;}}
}
B6f0476:L6f0476:{c.instructions+=4;NFSU2_TR(0x6f0476);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f047a:{NFSU2_TR(0x6f047a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6f047d:{NFSU2_TR(0x6f047d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B6f0480:{NFSU2_TR(0x6f0480);
__builtin_memmove((R+24),(R+28),4);
}
B6f0482:L6f0482:{c.instructions+=6;NFSU2_TR(0x6f0482);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6f0484:{NFSU2_TR(0x6f0484);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6f0486:{NFSU2_TR(0x6f0486);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6f0489:{NFSU2_TR(0x6f0489);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xcull))));
}
B6f048c:{NFSU2_TR(0x6f048c);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B6f048d:{NFSU2_TR(0x6f048d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f0482u);}goto L6f0482;}}
}
B6f048f:L6f048f:{c.instructions+=1;NFSU2_TR(0x6f048f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f0493:L6f0493:{c.instructions+=4;NFSU2_TR(0x6f0493);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f0497:{NFSU2_TR(0x6f0497);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B6f0498:{NFSU2_TR(0x6f0498);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f049a:{NFSU2_TR(0x6f049a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f0460u);}goto L6f0460;}}
}
B6f049c:L6f049c:{c.instructions+=2;NFSU2_TR(0x6f049c);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f04a0:{NFSU2_TR(0x6f04a0);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6f04a2:L6f04a2:{c.instructions+=2;NFSU2_TR(0x6f04a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f04a4:{NFSU2_TR(0x6f04a4);
if(r1(R+518)){{goto L6f075f;}}
}
B6f04aa:L6f04aa:{c.instructions+=7;NFSU2_TR(0x6f04aa);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(r2(U+0)));
}
B6f04ad:{NFSU2_TR(0x6f04ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6f04b0:{NFSU2_TR(0x6f04b0);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6f04b4:{NFSU2_TR(0x6f04b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6f04b7:{NFSU2_TR(0x6f04b7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f04b9:{NFSU2_TR(0x6f04b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f04bd:{NFSU2_TR(0x6f04bd);
if(r1(R+518)){{goto L6f0617;}}
}
B6f04c3:L6f04c3:{c.instructions+=2;NFSU2_TR(0x6f04c3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f04c5:{NFSU2_TR(0x6f04c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f075f;}}
}
B6f04cb:L6f04cb:{c.instructions+=3;NFSU2_TR(0x6f04cb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f04cd:{NFSU2_TR(0x6f04cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f04d1:{NFSU2_TR(0x6f04d1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f075f;}}
}
B6f04d7:L6f04d7:{c.instructions+=5;NFSU2_TR(0x6f04d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f04db:{NFSU2_TR(0x6f04db);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6f04dd:{NFSU2_TR(0x6f04dd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f04df:{NFSU2_TR(0x6f04df);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f04e3:{NFSU2_TR(0x6f04e3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f05fc;}}
}
B6f04e9:L6f04e9:{c.instructions+=1;NFSU2_TR(0x6f04e9);
__builtin_memmove((R+16),(R+16),4);
}
B6f04f0:L6f04f0:{c.instructions+=14;NFSU2_TR(0x6f04f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f04f4:{NFSU2_TR(0x6f04f4);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+12,u32(r2(U+8)));
}
B6f04f8:{NFSU2_TR(0x6f04f8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B6f04fb:{NFSU2_TR(0x6f04fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6f04fe:{NFSU2_TR(0x6f04fe);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6f0502:{NFSU2_TR(0x6f0502);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+4,u32(r2(U+0)));
}
B6f0505:{NFSU2_TR(0x6f0505);
u8 U[32];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B6f050a:{NFSU2_TR(0x6f050a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f050e:{NFSU2_TR(0x6f050e);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B6f0510:{NFSU2_TR(0x6f0510);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6f0513:{NFSU2_TR(0x6f0513);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6f0515:{NFSU2_TR(0x6f0515);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f0518:{NFSU2_TR(0x6f0518);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f051c:{NFSU2_TR(0x6f051c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6f05ac;}}
}
B6f0522:L6f0522:{c.instructions+=3;NFSU2_TR(0x6f0522);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f0526:{NFSU2_TR(0x6f0526);
w4(R+20,u32(0x3ull));
}
B6f052b:{NFSU2_TR(0x6f052b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6f052e:L6f052e:{c.instructions+=37;NFSU2_TR(0x6f052e);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+4,u32(r2(U+0)));
}
B6f0531:{NFSU2_TR(0x6f0531);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0535:{NFSU2_TR(0x6f0535);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B6f0538:{NFSU2_TR(0x6f0538);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B6f053b:{NFSU2_TR(0x6f053b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f053f:{NFSU2_TR(0x6f053f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B6f0542:{NFSU2_TR(0x6f0542);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B6f0545:{NFSU2_TR(0x6f0545);
{u32 ea_=u32(r4(R+0)+u32(4294967252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f0548:{NFSU2_TR(0x6f0548);
{u32 ea_=u32(r4(R+0)+u32(4294967248u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f054b:{NFSU2_TR(0x6f054b);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f054e:{NFSU2_TR(0x6f054e);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f0551:{NFSU2_TR(0x6f0551);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f0555:{NFSU2_TR(0x6f0555);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0559:{NFSU2_TR(0x6f0559);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f055d:{NFSU2_TR(0x6f055d);
{u32 ea_=u32(r4(R+0)+u32(4294967264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f0560:{NFSU2_TR(0x6f0560);
{u32 ea_=u32(r4(R+0)+u32(4294967260u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f0563:{NFSU2_TR(0x6f0563);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f0566:{NFSU2_TR(0x6f0566);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f0569:{NFSU2_TR(0x6f0569);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f056d:{NFSU2_TR(0x6f056d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0571:{NFSU2_TR(0x6f0571);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f0575:{NFSU2_TR(0x6f0575);
{u32 ea_=u32(r4(R+0)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f0578:{NFSU2_TR(0x6f0578);
{u32 ea_=u32(r4(R+0)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f057b:{NFSU2_TR(0x6f057b);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f057e:{NFSU2_TR(0x6f057e);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f0581:{NFSU2_TR(0x6f0581);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f0585:{NFSU2_TR(0x6f0585);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0589:{NFSU2_TR(0x6f0589);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f058d:{NFSU2_TR(0x6f058d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6f0590:{NFSU2_TR(0x6f0590);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f0592:{NFSU2_TR(0x6f0592);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f0596:{NFSU2_TR(0x6f0596);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f059a:{NFSU2_TR(0x6f059a);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f059d:{NFSU2_TR(0x6f059d);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f05a0:{NFSU2_TR(0x6f05a0);
{u32 ea_=u32(r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f05a3:{NFSU2_TR(0x6f05a3);
{u32 ea_=u32(r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f05a6:{NFSU2_TR(0x6f05a6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f052eu);}goto L6f052e;}}
}
B6f05a8:L6f05a8:{c.instructions+=1;NFSU2_TR(0x6f05a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f05ac:L6f05ac:{c.instructions+=2;NFSU2_TR(0x6f05ac);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f05ae:{NFSU2_TR(0x6f05ae);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f05e3;}}
}
B6f05b0:L6f05b0:{c.instructions+=6;NFSU2_TR(0x6f05b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6f05b3:{NFSU2_TR(0x6f05b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f05b7:{NFSU2_TR(0x6f05b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6f05ba:{NFSU2_TR(0x6f05ba);
__builtin_memmove((R+12),(R+28),4);
}
B6f05bc:{NFSU2_TR(0x6f05bc);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+4))));
}
B6f05be:{NFSU2_TR(0x6f05be);
__builtin_memmove((R+28),(R+28),4);
}
B6f05c0:L6f05c0:{c.instructions+=12;NFSU2_TR(0x6f05c0);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+4,u32(r2(U+0)));
}
B6f05c3:{NFSU2_TR(0x6f05c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f05c7:{NFSU2_TR(0x6f05c7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B6f05ca:{NFSU2_TR(0x6f05ca);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B6f05cd:{NFSU2_TR(0x6f05cd);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f05d1:{NFSU2_TR(0x6f05d1);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6f05d4:{NFSU2_TR(0x6f05d4);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B6f05d5:{NFSU2_TR(0x6f05d5);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f05d8:{NFSU2_TR(0x6f05d8);
{u32 ea_=u32(r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f05db:{NFSU2_TR(0x6f05db);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f05de:{NFSU2_TR(0x6f05de);
{u32 ea_=u32(r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f05e1:{NFSU2_TR(0x6f05e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f05c0u);}goto L6f05c0;}}
}
B6f05e3:L6f05e3:{c.instructions+=6;NFSU2_TR(0x6f05e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f05e7:{NFSU2_TR(0x6f05e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f05eb:{NFSU2_TR(0x6f05eb);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B6f05ec:{NFSU2_TR(0x6f05ec);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f05ee:{NFSU2_TR(0x6f05ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f05f2:{NFSU2_TR(0x6f05f2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f04f0u);}goto L6f04f0;}}
}
B6f05f8:L6f05f8:{c.instructions+=1;NFSU2_TR(0x6f05f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f05fc:L6f05fc:{c.instructions+=5;NFSU2_TR(0x6f05fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f0600:{NFSU2_TR(0x6f0600);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f0601:{NFSU2_TR(0x6f0601);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f0603:{NFSU2_TR(0x6f0603);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0607:{NFSU2_TR(0x6f0607);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f04d7u);}goto L6f04d7;}}
}
B6f060d:L6f060d:{c.instructions+=6;NFSU2_TR(0x6f060d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f060e:{NFSU2_TR(0x6f060e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f060f:{NFSU2_TR(0x6f060f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f0610:{NFSU2_TR(0x6f0610);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f0611:{NFSU2_TR(0x6f0611);
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
B6f0614:{NFSU2_TR(0x6f0614);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f0617:L6f0617:{c.instructions+=3;NFSU2_TR(0x6f0617);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f0619:{NFSU2_TR(0x6f0619);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f061d:{NFSU2_TR(0x6f061d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f075f;}}
}
B6f0623:L6f0623:{c.instructions+=1;NFSU2_TR(0x6f0623);
{goto L6f0630;}
}
B6f0630:L6f0630:{c.instructions+=4;NFSU2_TR(0x6f0630);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f0634:{NFSU2_TR(0x6f0634);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f0636:{NFSU2_TR(0x6f0636);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f063e:{NFSU2_TR(0x6f063e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f074e;}}
}
B6f0644:L6f0644:{c.instructions+=14;NFSU2_TR(0x6f0644);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f0648:{NFSU2_TR(0x6f0648);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f064c:{NFSU2_TR(0x6f064c);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+12,u32(r2(U+8)));
}
B6f0650:{NFSU2_TR(0x6f0650);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f0654:{NFSU2_TR(0x6f0654);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B6f0657:{NFSU2_TR(0x6f0657);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6f065a:{NFSU2_TR(0x6f065a);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6f065e:{NFSU2_TR(0x6f065e);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(r2(U+0)));
}
B6f0661:{NFSU2_TR(0x6f0661);
u8 U[32];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B6f0666:{NFSU2_TR(0x6f0666);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+20))));
}
B6f0668:{NFSU2_TR(0x6f0668);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B6f066a:{NFSU2_TR(0x6f066a);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6f066c:{NFSU2_TR(0x6f066c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f066f:{NFSU2_TR(0x6f066f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6f0702;}}
}
B6f0675:L6f0675:{c.instructions+=2;NFSU2_TR(0x6f0675);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f067d:{NFSU2_TR(0x6f067d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6f0680:L6f0680:{c.instructions+=37;NFSU2_TR(0x6f0680);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+4,u32(r1(U+0)));
}
B6f0683:{NFSU2_TR(0x6f0683);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0687:{NFSU2_TR(0x6f0687);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B6f068a:{NFSU2_TR(0x6f068a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B6f068d:{NFSU2_TR(0x6f068d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f0691:{NFSU2_TR(0x6f0691);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B6f0694:{NFSU2_TR(0x6f0694);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6f0697:{NFSU2_TR(0x6f0697);
{u32 ea_=u32(r4(R+0)+u32(4294967252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f069a:{NFSU2_TR(0x6f069a);
{u32 ea_=u32(r4(R+0)+u32(4294967248u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f069d:{NFSU2_TR(0x6f069d);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f06a0:{NFSU2_TR(0x6f06a0);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f06a3:{NFSU2_TR(0x6f06a3);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6f06a7:{NFSU2_TR(0x6f06a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f06ab:{NFSU2_TR(0x6f06ab);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f06af:{NFSU2_TR(0x6f06af);
{u32 ea_=u32(r4(R+0)+u32(4294967264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f06b2:{NFSU2_TR(0x6f06b2);
{u32 ea_=u32(r4(R+0)+u32(4294967260u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f06b5:{NFSU2_TR(0x6f06b5);
{u32 ea_=u32(r4(R+24)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f06b8:{NFSU2_TR(0x6f06b8);
{u32 ea_=u32(r4(R+24)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f06bb:{NFSU2_TR(0x6f06bb);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6f06bf:{NFSU2_TR(0x6f06bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f06c3:{NFSU2_TR(0x6f06c3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f06c7:{NFSU2_TR(0x6f06c7);
{u32 ea_=u32(r4(R+0)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f06ca:{NFSU2_TR(0x6f06ca);
{u32 ea_=u32(r4(R+0)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f06cd:{NFSU2_TR(0x6f06cd);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f06d0:{NFSU2_TR(0x6f06d0);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f06d3:{NFSU2_TR(0x6f06d3);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6f06d7:{NFSU2_TR(0x6f06d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f06db:{NFSU2_TR(0x6f06db);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f06df:{NFSU2_TR(0x6f06df);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6f06e2:{NFSU2_TR(0x6f06e2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f06e4:{NFSU2_TR(0x6f06e4);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f06e8:{NFSU2_TR(0x6f06e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f06ec:{NFSU2_TR(0x6f06ec);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f06ef:{NFSU2_TR(0x6f06ef);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f06f2:{NFSU2_TR(0x6f06f2);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f06f5:{NFSU2_TR(0x6f06f5);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f06f8:{NFSU2_TR(0x6f06f8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f0680u);}goto L6f0680;}}
}
B6f06fa:L6f06fa:{c.instructions+=2;NFSU2_TR(0x6f06fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f06fe:{NFSU2_TR(0x6f06fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f0702:L6f0702:{c.instructions+=2;NFSU2_TR(0x6f0702);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f0704:{NFSU2_TR(0x6f0704);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f0735;}}
}
B6f0706:L6f0706:{c.instructions+=5;NFSU2_TR(0x6f0706);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+20))));
}
B6f0708:{NFSU2_TR(0x6f0708);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6f070b:{NFSU2_TR(0x6f070b);
__builtin_memmove((R+12),(R+28),4);
}
B6f070d:{NFSU2_TR(0x6f070d);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+20))));
}
B6f070f:{NFSU2_TR(0x6f070f);
}
B6f0710:L6f0710:{c.instructions+=12;NFSU2_TR(0x6f0710);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+20,u32(r1(U+0)));
}
B6f0713:{NFSU2_TR(0x6f0713);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0717:{NFSU2_TR(0x6f0717);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6f0718:{NFSU2_TR(0x6f0718);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B6f071b:{NFSU2_TR(0x6f071b);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f071f:{NFSU2_TR(0x6f071f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6f0722:{NFSU2_TR(0x6f0722);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B6f0723:{NFSU2_TR(0x6f0723);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f0726:{NFSU2_TR(0x6f0726);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f0729:{NFSU2_TR(0x6f0729);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f072c:{NFSU2_TR(0x6f072c);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f072f:{NFSU2_TR(0x6f072f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f0710u);}goto L6f0710;}}
}
B6f0731:L6f0731:{c.instructions+=1;NFSU2_TR(0x6f0731);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f0735:L6f0735:{c.instructions+=6;NFSU2_TR(0x6f0735);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f0739:{NFSU2_TR(0x6f0739);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f073d:{NFSU2_TR(0x6f073d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f073e:{NFSU2_TR(0x6f073e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f0740:{NFSU2_TR(0x6f0740);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0744:{NFSU2_TR(0x6f0744);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f0644u);}goto L6f0644;}}
}
B6f074a:L6f074a:{c.instructions+=1;NFSU2_TR(0x6f074a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f074e:L6f074e:{c.instructions+=5;NFSU2_TR(0x6f074e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f0752:{NFSU2_TR(0x6f0752);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f0753:{NFSU2_TR(0x6f0753);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f0755:{NFSU2_TR(0x6f0755);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0759:{NFSU2_TR(0x6f0759);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f0630u);}goto L6f0630;}}
}
B6f075f:L6f075f:{c.instructions+=2;NFSU2_TR(0x6f075f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f0760:{NFSU2_TR(0x6f0760);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f0761:L6f0761:{c.instructions+=4;NFSU2_TR(0x6f0761);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f0762:{NFSU2_TR(0x6f0762);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f0763:{NFSU2_TR(0x6f0763);
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
B6f0766:{NFSU2_TR(0x6f0766);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f0770:L6f0770:{c.instructions+=7;NFSU2_TR(0x6f0770);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6f0773:{NFSU2_TR(0x6f0773);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f0777:{NFSU2_TR(0x6f0777);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f0778:{NFSU2_TR(0x6f0778);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f077c:{NFSU2_TR(0x6f077c);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f077e:{NFSU2_TR(0x6f077e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0782:{NFSU2_TR(0x6f0782);
if(r1(R+518)){{goto L6f0bf2;}}
}
B6f0788:L6f0788:{c.instructions+=6;NFSU2_TR(0x6f0788);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f078a:{NFSU2_TR(0x6f078a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f078b:{NFSU2_TR(0x6f078b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f078c:{NFSU2_TR(0x6f078c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f078d:{NFSU2_TR(0x6f078d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f0791:{NFSU2_TR(0x6f0791);
if(r1(R+518)){{goto L6f0875;}}
}
B6f0797:L6f0797:{c.instructions+=2;NFSU2_TR(0x6f0797);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f079a:{NFSU2_TR(0x6f079a);
if(r1(R+518)){{goto L6f0875;}}
}
B6f07a0:L6f07a0:{c.instructions+=2;NFSU2_TR(0x6f07a0);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f07a2:{NFSU2_TR(0x6f07a2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6f0875;}}
}
B6f07a8:L6f07a8:{c.instructions+=3;NFSU2_TR(0x6f07a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f07ac:{NFSU2_TR(0x6f07ac);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f07ae:{NFSU2_TR(0x6f07ae);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f08cc;}}
}
B6f07b4:L6f07b4:{c.instructions+=3;NFSU2_TR(0x6f07b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f07b8:{NFSU2_TR(0x6f07b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f07bc:{NFSU2_TR(0x6f07bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f07c0:L6f07c0:{c.instructions+=7;NFSU2_TR(0x6f07c0);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+0,u32(r2(U+0)));
}
B6f07c3:{NFSU2_TR(0x6f07c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f07c7:{NFSU2_TR(0x6f07c7);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+24,u32(r2(U+8)));
}
B6f07cb:{NFSU2_TR(0x6f07cb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f07cd:{NFSU2_TR(0x6f07cd);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f07d0:{NFSU2_TR(0x6f07d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f07d4:{NFSU2_TR(0x6f07d4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6f0838;}}
}
B6f07d6:L6f07d6:{c.instructions+=2;NFSU2_TR(0x6f07d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f07da:{NFSU2_TR(0x6f07da);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B6f07de:L6f07de:{c.instructions+=28;NFSU2_TR(0x6f07de);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+20,u32(r2(U+0)));
}
B6f07e1:{NFSU2_TR(0x6f07e1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+20,u32(r8(U+16)));
}
B6f07e4:{NFSU2_TR(0x6f07e4);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+0))));
}
B6f07e6:{NFSU2_TR(0x6f07e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+20),(U+8),4);
}
B6f07e9:{NFSU2_TR(0x6f07e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f07ec:{NFSU2_TR(0x6f07ec);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+20,u32(r2(U+0)));
}
B6f07ef:{NFSU2_TR(0x6f07ef);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+20,u32(r8(U+16)));
}
B6f07f2:{NFSU2_TR(0x6f07f2);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+0))));
}
B6f07f4:{NFSU2_TR(0x6f07f4);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+20),(U+12),4);
}
B6f07f8:{NFSU2_TR(0x6f07f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f07fb:{NFSU2_TR(0x6f07fb);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+20,u32(r2(U+0)));
}
B6f07fe:{NFSU2_TR(0x6f07fe);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+20,u32(r8(U+16)));
}
B6f0801:{NFSU2_TR(0x6f0801);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+0))));
}
B6f0803:{NFSU2_TR(0x6f0803);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+20),(U+12),4);
}
B6f0807:{NFSU2_TR(0x6f0807);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6f0809:{NFSU2_TR(0x6f0809);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+20,u32(r2(U+0)));
}
B6f080c:{NFSU2_TR(0x6f080c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+20,u32(r8(U+16)));
}
B6f080f:{NFSU2_TR(0x6f080f);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+0))));
}
B6f0811:{NFSU2_TR(0x6f0811);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+20),(U+12),4);
}
B6f0815:{NFSU2_TR(0x6f0815);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0818:{NFSU2_TR(0x6f0818);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f081c:{NFSU2_TR(0x6f081c);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B6f081f:{NFSU2_TR(0x6f081f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6f0822:{NFSU2_TR(0x6f0822);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0826:{NFSU2_TR(0x6f0826);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f0829:{NFSU2_TR(0x6f0829);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B6f082c:{NFSU2_TR(0x6f082c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f082e:{NFSU2_TR(0x6f082e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f07deu);}goto L6f07de;}}
}
B6f0830:L6f0830:{c.instructions+=2;NFSU2_TR(0x6f0830);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f0834:{NFSU2_TR(0x6f0834);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f0838:L6f0838:{c.instructions+=2;NFSU2_TR(0x6f0838);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f083a:{NFSU2_TR(0x6f083a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f085d;}}
}
B6f083c:L6f083c:{c.instructions+=2;NFSU2_TR(0x6f083c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f0840:{NFSU2_TR(0x6f0840);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6f0844:L6f0844:{c.instructions+=9;NFSU2_TR(0x6f0844);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+20,u32(r2(U+0)));
}
B6f0847:{NFSU2_TR(0x6f0847);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+20,u32(r8(U+16)));
}
B6f084a:{NFSU2_TR(0x6f084a);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+0))));
}
B6f084c:{NFSU2_TR(0x6f084c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+20),(U+8),4);
}
B6f084f:{NFSU2_TR(0x6f084f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6f0851:{NFSU2_TR(0x6f0851);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6f0854:{NFSU2_TR(0x6f0854);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f0855:{NFSU2_TR(0x6f0855);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f0857:{NFSU2_TR(0x6f0857);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f0844u);}goto L6f0844;}}
}
B6f0859:L6f0859:{c.instructions+=1;NFSU2_TR(0x6f0859);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f085d:L6f085d:{c.instructions+=5;NFSU2_TR(0x6f085d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f0861:{NFSU2_TR(0x6f0861);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6f0864:{NFSU2_TR(0x6f0864);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6f0865:{NFSU2_TR(0x6f0865);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0869:{NFSU2_TR(0x6f0869);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f07c0u);}goto L6f07c0;}}
}
B6f086f:L6f086f:{c.instructions+=2;NFSU2_TR(0x6f086f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f0873:{NFSU2_TR(0x6f0873);
{goto L6f08cc;}
}
B6f0875:L6f0875:{c.instructions+=4;NFSU2_TR(0x6f0875);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f0879:{NFSU2_TR(0x6f0879);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6f087b:{NFSU2_TR(0x6f087b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f087d:{NFSU2_TR(0x6f087d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f08ca;}}
}
B6f087f:L6f087f:{c.instructions+=1;NFSU2_TR(0x6f087f);
}
B6f0880:L6f0880:{c.instructions+=10;NFSU2_TR(0x6f0880);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f0884:{NFSU2_TR(0x6f0884);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+8,u32(r2(U+8)));
}
B6f0888:{NFSU2_TR(0x6f0888);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f088c:{NFSU2_TR(0x6f088c);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+24,u32(r2(U+8)));
}
B6f0890:{NFSU2_TR(0x6f0890);
__builtin_memmove((R+0),(R+8),4);
}
B6f0892:{NFSU2_TR(0x6f0892);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6f0895:{NFSU2_TR(0x6f0895);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f0897:{NFSU2_TR(0x6f0897);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6f089a:{NFSU2_TR(0x6f089a);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6f089e:{NFSU2_TR(0x6f089e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f08bd;}}
}
B6f08a0:L6f08a0:{c.instructions+=5;NFSU2_TR(0x6f08a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6f08a3:{NFSU2_TR(0x6f08a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f08a7:{NFSU2_TR(0x6f08a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6f08aa:{NFSU2_TR(0x6f08aa);
__builtin_memmove((R+24),(R+28),4);
}
B6f08ac:{NFSU2_TR(0x6f08ac);
__builtin_memmove((R+16),(R+16),4);
}
B6f08b0:L6f08b0:{c.instructions+=6;NFSU2_TR(0x6f08b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+20),(U+0),4);
}
B6f08b2:{NFSU2_TR(0x6f08b2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6f08b4:{NFSU2_TR(0x6f08b4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6f08b7:{NFSU2_TR(0x6f08b7);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xcull))));
}
B6f08ba:{NFSU2_TR(0x6f08ba);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B6f08bb:{NFSU2_TR(0x6f08bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f08b0u);}goto L6f08b0;}}
}
B6f08bd:L6f08bd:{c.instructions+=4;NFSU2_TR(0x6f08bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f08c1:{NFSU2_TR(0x6f08c1);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6f08c2:{NFSU2_TR(0x6f08c2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f08c4:{NFSU2_TR(0x6f08c4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f0880u);}goto L6f0880;}}
}
B6f08c6:L6f08c6:{c.instructions+=1;NFSU2_TR(0x6f08c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f08ca:L6f08ca:{c.instructions+=1;NFSU2_TR(0x6f08ca);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6f08cc:L6f08cc:{c.instructions+=2;NFSU2_TR(0x6f08cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f08ce:{NFSU2_TR(0x6f08ce);
if(r1(R+518)){{goto L6f0bef;}}
}
B6f08d4:L6f08d4:{c.instructions+=7;NFSU2_TR(0x6f08d4);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(r2(U+0)));
}
B6f08d7:{NFSU2_TR(0x6f08d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6f08da:{NFSU2_TR(0x6f08da);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6f08de:{NFSU2_TR(0x6f08de);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f08e2:{NFSU2_TR(0x6f08e2);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6f08e5:{NFSU2_TR(0x6f08e5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f08e7:{NFSU2_TR(0x6f08e7);
if(r1(R+518)){{goto L6f0a7b;}}
}
B6f08ed:L6f08ed:{c.instructions+=2;NFSU2_TR(0x6f08ed);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f08ef:{NFSU2_TR(0x6f08ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f0bef;}}
}
B6f08f5:L6f08f5:{c.instructions+=3;NFSU2_TR(0x6f08f5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f08f7:{NFSU2_TR(0x6f08f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f08fb:{NFSU2_TR(0x6f08fb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f0bef;}}
}
B6f0901:L6f0901:{c.instructions+=4;NFSU2_TR(0x6f0901);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f0905:{NFSU2_TR(0x6f0905);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f0907:{NFSU2_TR(0x6f0907);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f090f:{NFSU2_TR(0x6f090f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f0a60;}}
}
B6f0915:L6f0915:{c.instructions+=1;NFSU2_TR(0x6f0915);
{goto L6f0920;}
}
B6f0920:L6f0920:{c.instructions+=17;NFSU2_TR(0x6f0920);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f0924:{NFSU2_TR(0x6f0924);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f0928:{NFSU2_TR(0x6f0928);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+12,u32(r2(U+8)));
}
B6f092c:{NFSU2_TR(0x6f092c);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+24,u32(r2(U+0)));
}
B6f092f:{NFSU2_TR(0x6f092f);
u8 U[32];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w8(U+8,u64(s64(s32(r4(R+24)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+24,u32(r8(U+24)));
}
B6f0934:{NFSU2_TR(0x6f0934);
__builtin_memmove((R+8),(R+12),4);
}
B6f0936:{NFSU2_TR(0x6f0936);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B6f0939:{NFSU2_TR(0x6f0939);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B6f093b:{NFSU2_TR(0x6f093b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f093e:{NFSU2_TR(0x6f093e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6f0941:{NFSU2_TR(0x6f0941);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f0945:{NFSU2_TR(0x6f0945);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6f0948:{NFSU2_TR(0x6f0948);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f094c:{NFSU2_TR(0x6f094c);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+20,u32(r2(U+8)));
}
B6f0950:{NFSU2_TR(0x6f0950);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6f0954:{NFSU2_TR(0x6f0954);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f095c:{NFSU2_TR(0x6f095c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6f0a04;}}
}
B6f0962:L6f0962:{c.instructions+=3;NFSU2_TR(0x6f0962);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f0966:{NFSU2_TR(0x6f0966);
w4(R+12,u32(0x3ull));
}
B6f096b:{NFSU2_TR(0x6f096b);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6f096f:L6f096f:{c.instructions+=42;NFSU2_TR(0x6f096f);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+4,u32(r2(U+0)));
}
B6f0972:{NFSU2_TR(0x6f0972);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0976:{NFSU2_TR(0x6f0976);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B6f0979:{NFSU2_TR(0x6f0979);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B6f097c:{NFSU2_TR(0x6f097c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f0980:{NFSU2_TR(0x6f0980);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B6f0983:{NFSU2_TR(0x6f0983);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B6f0986:{NFSU2_TR(0x6f0986);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B6f0989:{NFSU2_TR(0x6f0989);
{u32 ea_=u32(r4(R+0)+u32(4294967252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f098c:{NFSU2_TR(0x6f098c);
{u32 ea_=u32(r4(R+0)+u32(4294967248u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f098f:{NFSU2_TR(0x6f098f);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f0993:{NFSU2_TR(0x6f0993);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f0996:{NFSU2_TR(0x6f0996);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f0999:{NFSU2_TR(0x6f0999);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f099d:{NFSU2_TR(0x6f099d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f09a1:{NFSU2_TR(0x6f09a1);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f09a5:{NFSU2_TR(0x6f09a5);
{u32 ea_=u32(r4(R+0)+u32(4294967264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f09a8:{NFSU2_TR(0x6f09a8);
{u32 ea_=u32(r4(R+0)+u32(4294967260u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f09ab:{NFSU2_TR(0x6f09ab);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f09af:{NFSU2_TR(0x6f09af);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f09b2:{NFSU2_TR(0x6f09b2);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f09b5:{NFSU2_TR(0x6f09b5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f09b9:{NFSU2_TR(0x6f09b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f09bd:{NFSU2_TR(0x6f09bd);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f09c1:{NFSU2_TR(0x6f09c1);
{u32 ea_=u32(r4(R+0)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f09c4:{NFSU2_TR(0x6f09c4);
{u32 ea_=u32(r4(R+0)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f09c7:{NFSU2_TR(0x6f09c7);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f09cb:{NFSU2_TR(0x6f09cb);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f09ce:{NFSU2_TR(0x6f09ce);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f09d1:{NFSU2_TR(0x6f09d1);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f09d5:{NFSU2_TR(0x6f09d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f09d9:{NFSU2_TR(0x6f09d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f09dd:{NFSU2_TR(0x6f09dd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6f09e0:{NFSU2_TR(0x6f09e0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f09e2:{NFSU2_TR(0x6f09e2);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f09e6:{NFSU2_TR(0x6f09e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f09ea:{NFSU2_TR(0x6f09ea);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f09ed:{NFSU2_TR(0x6f09ed);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f09f0:{NFSU2_TR(0x6f09f0);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f09f4:{NFSU2_TR(0x6f09f4);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f09f7:{NFSU2_TR(0x6f09f7);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f09fa:{NFSU2_TR(0x6f09fa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f096fu);}goto L6f096f;}}
}
B6f0a00:L6f0a00:{c.instructions+=1;NFSU2_TR(0x6f0a00);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f0a04:L6f0a04:{c.instructions+=2;NFSU2_TR(0x6f0a04);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+28)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B6f0a08:{NFSU2_TR(0x6f0a08);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f0a47;}}
}
B6f0a0a:L6f0a0a:{c.instructions+=6;NFSU2_TR(0x6f0a0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f0a0e:{NFSU2_TR(0x6f0a0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6f0a11:{NFSU2_TR(0x6f0a11);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f0a15:{NFSU2_TR(0x6f0a15);
__builtin_memmove((R+12),(R+28),4);
}
B6f0a17:{NFSU2_TR(0x6f0a17);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+20))));
}
B6f0a19:{NFSU2_TR(0x6f0a19);
__builtin_memmove((R+16),(R+16),4);
}
B6f0a20:L6f0a20:{c.instructions+=13;NFSU2_TR(0x6f0a20);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+20,u32(r2(U+0)));
}
B6f0a23:{NFSU2_TR(0x6f0a23);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0a27:{NFSU2_TR(0x6f0a27);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B6f0a2a:{NFSU2_TR(0x6f0a2a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B6f0a2d:{NFSU2_TR(0x6f0a2d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f0a31:{NFSU2_TR(0x6f0a31);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6f0a34:{NFSU2_TR(0x6f0a34);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B6f0a35:{NFSU2_TR(0x6f0a35);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f0a38:{NFSU2_TR(0x6f0a38);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f0a3b:{NFSU2_TR(0x6f0a3b);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f0a3f:{NFSU2_TR(0x6f0a3f);
{u32 ea_=u32(r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f0a42:{NFSU2_TR(0x6f0a42);
{u32 ea_=u32(r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f0a45:{NFSU2_TR(0x6f0a45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f0a20u);}goto L6f0a20;}}
}
B6f0a47:L6f0a47:{c.instructions+=6;NFSU2_TR(0x6f0a47);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f0a4b:{NFSU2_TR(0x6f0a4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f0a4f:{NFSU2_TR(0x6f0a4f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f0a50:{NFSU2_TR(0x6f0a50);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f0a52:{NFSU2_TR(0x6f0a52);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0a56:{NFSU2_TR(0x6f0a56);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f0920u);}goto L6f0920;}}
}
B6f0a5c:L6f0a5c:{c.instructions+=1;NFSU2_TR(0x6f0a5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f0a60:L6f0a60:{c.instructions+=5;NFSU2_TR(0x6f0a60);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f0a64:{NFSU2_TR(0x6f0a64);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f0a65:{NFSU2_TR(0x6f0a65);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f0a67:{NFSU2_TR(0x6f0a67);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0a6b:{NFSU2_TR(0x6f0a6b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f0901u);}goto L6f0901;}}
}
B6f0a71:L6f0a71:{c.instructions+=6;NFSU2_TR(0x6f0a71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f0a72:{NFSU2_TR(0x6f0a72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f0a73:{NFSU2_TR(0x6f0a73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f0a74:{NFSU2_TR(0x6f0a74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f0a75:{NFSU2_TR(0x6f0a75);
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
B6f0a78:{NFSU2_TR(0x6f0a78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f0a7b:L6f0a7b:{c.instructions+=3;NFSU2_TR(0x6f0a7b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f0a7d:{NFSU2_TR(0x6f0a7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0a81:{NFSU2_TR(0x6f0a81);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f0bef;}}
}
B6f0a87:L6f0a87:{c.instructions+=1;NFSU2_TR(0x6f0a87);
{goto L6f0a90;}
}
B6f0a90:L6f0a90:{c.instructions+=4;NFSU2_TR(0x6f0a90);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f0a94:{NFSU2_TR(0x6f0a94);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f0a96:{NFSU2_TR(0x6f0a96);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f0a9e:{NFSU2_TR(0x6f0a9e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f0bde;}}
}
B6f0aa4:L6f0aa4:{c.instructions+=17;NFSU2_TR(0x6f0aa4);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f0aa8:{NFSU2_TR(0x6f0aa8);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f0aac:{NFSU2_TR(0x6f0aac);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+12,u32(r2(U+8)));
}
B6f0ab0:{NFSU2_TR(0x6f0ab0);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(r2(U+0)));
}
B6f0ab3:{NFSU2_TR(0x6f0ab3);
u8 U[32];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B6f0ab8:{NFSU2_TR(0x6f0ab8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f0abc:{NFSU2_TR(0x6f0abc);
__builtin_memmove((R+24),(R+12),4);
}
B6f0abe:{NFSU2_TR(0x6f0abe);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B6f0ac1:{NFSU2_TR(0x6f0ac1);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+20))));
}
B6f0ac3:{NFSU2_TR(0x6f0ac3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6f0ac6:{NFSU2_TR(0x6f0ac6);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B6f0ac8:{NFSU2_TR(0x6f0ac8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f0acb:{NFSU2_TR(0x6f0acb);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f0acf:{NFSU2_TR(0x6f0acf);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+20,u32(r2(U+8)));
}
B6f0ad3:{NFSU2_TR(0x6f0ad3);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6f0ad7:{NFSU2_TR(0x6f0ad7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f0adf:{NFSU2_TR(0x6f0adf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6f0b87;}}
}
B6f0ae5:L6f0ae5:{c.instructions+=3;NFSU2_TR(0x6f0ae5);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f0ae9:{NFSU2_TR(0x6f0ae9);
w4(R+12,u32(0x3ull));
}
B6f0aee:{NFSU2_TR(0x6f0aee);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B6f0af2:L6f0af2:{c.instructions+=42;NFSU2_TR(0x6f0af2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+4,u32(r1(U+0)));
}
B6f0af5:{NFSU2_TR(0x6f0af5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0af9:{NFSU2_TR(0x6f0af9);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B6f0afc:{NFSU2_TR(0x6f0afc);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B6f0aff:{NFSU2_TR(0x6f0aff);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f0b03:{NFSU2_TR(0x6f0b03);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B6f0b06:{NFSU2_TR(0x6f0b06);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B6f0b09:{NFSU2_TR(0x6f0b09);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6f0b0c:{NFSU2_TR(0x6f0b0c);
{u32 ea_=u32(r4(R+0)+u32(4294967252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f0b0f:{NFSU2_TR(0x6f0b0f);
{u32 ea_=u32(r4(R+0)+u32(4294967248u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f0b12:{NFSU2_TR(0x6f0b12);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f0b16:{NFSU2_TR(0x6f0b16);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f0b19:{NFSU2_TR(0x6f0b19);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f0b1c:{NFSU2_TR(0x6f0b1c);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6f0b20:{NFSU2_TR(0x6f0b20);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0b24:{NFSU2_TR(0x6f0b24);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f0b28:{NFSU2_TR(0x6f0b28);
{u32 ea_=u32(r4(R+0)+u32(4294967264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f0b2b:{NFSU2_TR(0x6f0b2b);
{u32 ea_=u32(r4(R+0)+u32(4294967260u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f0b2e:{NFSU2_TR(0x6f0b2e);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f0b32:{NFSU2_TR(0x6f0b32);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f0b35:{NFSU2_TR(0x6f0b35);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f0b38:{NFSU2_TR(0x6f0b38);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6f0b3c:{NFSU2_TR(0x6f0b3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0b40:{NFSU2_TR(0x6f0b40);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f0b44:{NFSU2_TR(0x6f0b44);
{u32 ea_=u32(r4(R+0)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f0b47:{NFSU2_TR(0x6f0b47);
{u32 ea_=u32(r4(R+0)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f0b4a:{NFSU2_TR(0x6f0b4a);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f0b4e:{NFSU2_TR(0x6f0b4e);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f0b51:{NFSU2_TR(0x6f0b51);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f0b54:{NFSU2_TR(0x6f0b54);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6f0b58:{NFSU2_TR(0x6f0b58);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0b5c:{NFSU2_TR(0x6f0b5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f0b60:{NFSU2_TR(0x6f0b60);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6f0b63:{NFSU2_TR(0x6f0b63);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f0b65:{NFSU2_TR(0x6f0b65);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f0b69:{NFSU2_TR(0x6f0b69);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0b6d:{NFSU2_TR(0x6f0b6d);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f0b70:{NFSU2_TR(0x6f0b70);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f0b73:{NFSU2_TR(0x6f0b73);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f0b77:{NFSU2_TR(0x6f0b77);
{u32 ea_=u32(r4(R+24)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f0b7a:{NFSU2_TR(0x6f0b7a);
{u32 ea_=u32(r4(R+24)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f0b7d:{NFSU2_TR(0x6f0b7d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f0af2u);}goto L6f0af2;}}
}
B6f0b83:L6f0b83:{c.instructions+=1;NFSU2_TR(0x6f0b83);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f0b87:L6f0b87:{c.instructions+=2;NFSU2_TR(0x6f0b87);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+28)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B6f0b8b:{NFSU2_TR(0x6f0b8b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f0bc5;}}
}
B6f0b8d:L6f0b8d:{c.instructions+=6;NFSU2_TR(0x6f0b8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f0b91:{NFSU2_TR(0x6f0b91);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f0b95:{NFSU2_TR(0x6f0b95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B6f0b98:{NFSU2_TR(0x6f0b98);
__builtin_memmove((R+24),(R+28),4);
}
B6f0b9a:{NFSU2_TR(0x6f0b9a);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+12))));
}
B6f0b9c:{NFSU2_TR(0x6f0b9c);
__builtin_memmove((R+16),(R+16),4);
}
B6f0ba0:L6f0ba0:{c.instructions+=13;NFSU2_TR(0x6f0ba0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+12,u32(r1(U+0)));
}
B6f0ba3:{NFSU2_TR(0x6f0ba3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0ba7:{NFSU2_TR(0x6f0ba7);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6f0ba8:{NFSU2_TR(0x6f0ba8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B6f0bab:{NFSU2_TR(0x6f0bab);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f0baf:{NFSU2_TR(0x6f0baf);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B6f0bb2:{NFSU2_TR(0x6f0bb2);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B6f0bb3:{NFSU2_TR(0x6f0bb3);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f0bb6:{NFSU2_TR(0x6f0bb6);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f0bb9:{NFSU2_TR(0x6f0bb9);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f0bbd:{NFSU2_TR(0x6f0bbd);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f0bc0:{NFSU2_TR(0x6f0bc0);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f0bc3:{NFSU2_TR(0x6f0bc3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f0ba0u);}goto L6f0ba0;}}
}
B6f0bc5:L6f0bc5:{c.instructions+=6;NFSU2_TR(0x6f0bc5);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f0bc9:{NFSU2_TR(0x6f0bc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f0bcd:{NFSU2_TR(0x6f0bcd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f0bce:{NFSU2_TR(0x6f0bce);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f0bd0:{NFSU2_TR(0x6f0bd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0bd4:{NFSU2_TR(0x6f0bd4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f0aa4u);}goto L6f0aa4;}}
}
B6f0bda:L6f0bda:{c.instructions+=1;NFSU2_TR(0x6f0bda);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f0bde:L6f0bde:{c.instructions+=5;NFSU2_TR(0x6f0bde);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f0be2:{NFSU2_TR(0x6f0be2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f0be3:{NFSU2_TR(0x6f0be3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f0be5:{NFSU2_TR(0x6f0be5);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0be9:{NFSU2_TR(0x6f0be9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f0a90u);}goto L6f0a90;}}
}
B6f0bef:L6f0bef:{c.instructions+=3;NFSU2_TR(0x6f0bef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f0bf0:{NFSU2_TR(0x6f0bf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f0bf1:{NFSU2_TR(0x6f0bf1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f0bf2:L6f0bf2:{c.instructions+=3;NFSU2_TR(0x6f0bf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f0bf3:{NFSU2_TR(0x6f0bf3);
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
B6f0bf6:{NFSU2_TR(0x6f0bf6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f0c00:L6f0c00:{c.instructions+=7;NFSU2_TR(0x6f0c00);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f0c01:{NFSU2_TR(0x6f0c01);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f0c02:{NFSU2_TR(0x6f0c02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6f0c04:{NFSU2_TR(0x6f0c04);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f0c05:{NFSU2_TR(0x6f0c05);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6f0c07:{NFSU2_TR(0x6f0c07);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
}
B6f0c08:{NFSU2_TR(0x6f0c08);
if(r1(R+519)){{goto L6f0c2d;}}
}
B6f0c0a:L6f0c0a:{c.instructions+=2;NFSU2_TR(0x6f0c0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f0c0e:{NFSU2_TR(0x6f0c0e);
__builtin_memmove((R+28),(R+28),4);
}
B6f0c10:L6f0c10:{c.instructions+=5;NFSU2_TR(0x6f0c10);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6f0c13:{NFSU2_TR(0x6f0c13);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B6f0c15:{NFSU2_TR(0x6f0c15);
u8 U[14];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+8),(U+12),2);
}
B6f0c1a:{NFSU2_TR(0x6f0c1a);
u8 U[8];
__builtin_memmove((U+4),(R+8),2);
w1(R+512,u8((r2(R+12))<(r2(U+4))));
w1(R+523,sborrow<u16>(r2(R+12),r2(U+4)));
w2(U+6,u16(u32(r2(R+12))-u32(r2(U+4))));
w1(R+519,u8(s16(r2(U+6))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+6))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B6f0c1d:{NFSU2_TR(0x6f0c1d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6f0c24;}}
}
B6f0c1f:L6f0c1f:{c.instructions+=2;NFSU2_TR(0x6f0c1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f0c22:{NFSU2_TR(0x6f0c22);
{goto L6f0c29;}
}
B6f0c24:L6f0c24:{c.instructions+=1;NFSU2_TR(0x6f0c24);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6f0c35;}}
}
B6f0c26:L6f0c26:{c.instructions+=1;NFSU2_TR(0x6f0c26);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f0c29:L6f0c29:{c.instructions+=2;NFSU2_TR(0x6f0c29);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f0c2b:{NFSU2_TR(0x6f0c2b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f0c10u);}goto L6f0c10;}}
}
B6f0c2d:L6f0c2d:{c.instructions+=5;NFSU2_TR(0x6f0c2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f0c2e:{NFSU2_TR(0x6f0c2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f0c2f:{NFSU2_TR(0x6f0c2f);
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
B6f0c31:{NFSU2_TR(0x6f0c31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f0c32:{NFSU2_TR(0x6f0c32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f0c35:L6f0c35:{c.instructions+=5;NFSU2_TR(0x6f0c35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f0c36:{NFSU2_TR(0x6f0c36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f0c37:{NFSU2_TR(0x6f0c37);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6f0c3b:{NFSU2_TR(0x6f0c3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f0c3c:{NFSU2_TR(0x6f0c3c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f0c40:L6f0c40:{c.instructions+=5;NFSU2_TR(0x6f0c40);
u8 U[6];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B6f0c45:{NFSU2_TR(0x6f0c45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f0c46:{NFSU2_TR(0x6f0c46);
__builtin_memmove((R+0),(R+16),4);
}
B6f0c48:{NFSU2_TR(0x6f0c48);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+0)),r2(U+0));
}
B6f0c4b:{NFSU2_TR(0x6f0c4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f0c50ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f0c00u);}goto L6f0c00;}
}
B6f0c50:L6f0c50:{c.instructions+=2;NFSU2_TR(0x6f0c50);
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
B6f0c52:{NFSU2_TR(0x6f0c52);
if(r1(R+518)){{goto L6f0c62;}}
}
B6f0c54:L6f0c54:{c.instructions+=5;NFSU2_TR(0x6f0c54);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f0c57:{NFSU2_TR(0x6f0c57);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f0c5b:{NFSU2_TR(0x6f0c5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6f0c5d:{NFSU2_TR(0x6f0c5d);
w1(R+0,u8(0x1ull));
}
B6f0c5f:{NFSU2_TR(0x6f0c5f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f0c62:L6f0c62:{c.instructions+=2;NFSU2_TR(0x6f0c62);
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
B6f0c64:{NFSU2_TR(0x6f0c64);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f0c70:L6f0c70:{c.instructions+=3;NFSU2_TR(0x6f0c70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f0c71:{NFSU2_TR(0x6f0c71);
__builtin_memmove((R+24),(R+4),4);
}
B6f0c73:{NFSU2_TR(0x6f0c73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f0c78ull));
TAIL_STATIC(0x6e3ed0u,6e3);
}
B6f0c78:L6f0c78:{c.instructions+=6;NFSU2_TR(0x6f0c78);
u8 U[4];
w4(U+0,u32(0x7c2170ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6f0c7e:{NFSU2_TR(0x6f0c7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x19ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f0c85:{NFSU2_TR(0x6f0c85);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w2(U+4,u16(0x0ull));
s2(u32(r4(U+0)),r2(U+4));
}
B6f0c8b:{NFSU2_TR(0x6f0c8b);
__builtin_memmove((R+0),(R+24),4);
}
B6f0c8d:{NFSU2_TR(0x6f0c8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f0c8e:{NFSU2_TR(0x6f0c8e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f0c90:L6f0c90:{c.instructions+=3;NFSU2_TR(0x6f0c90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f0c91:{NFSU2_TR(0x6f0c91);
__builtin_memmove((R+24),(R+4),4);
}
B6f0c93:{NFSU2_TR(0x6f0c93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f0c98ull));
TAIL_STATIC(0x6e3ef0u,6e3);
}
B6f0c98:L6f0c98:{c.instructions+=2;NFSU2_TR(0x6f0c98);
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
B6f0c9d:{NFSU2_TR(0x6f0c9d);
if(r1(R+518)){{goto L6f0cab;}}
}
B6f0c9f:L6f0c9f:{c.instructions+=3;NFSU2_TR(0x6f0c9f);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f0ca1:{NFSU2_TR(0x6f0ca1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f0ca2:{NFSU2_TR(0x6f0ca2);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f0ca8ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f0ca8:L6f0ca8:{c.instructions+=1;NFSU2_TR(0x6f0ca8);
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
B6f0cab:L6f0cab:{c.instructions+=3;NFSU2_TR(0x6f0cab);
__builtin_memmove((R+0),(R+24),4);
}
B6f0cad:{NFSU2_TR(0x6f0cad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f0cae:{NFSU2_TR(0x6f0cae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f0cc0:L6f0cc0:{c.instructions+=4;NFSU2_TR(0x6f0cc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f0cc4:{NFSU2_TR(0x6f0cc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0cc7:{NFSU2_TR(0x6f0cc7);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w2(U+4,u16(0x0ull));
s2(u32(r4(U+0)),r2(U+4));
}
B6f0ccd:{NFSU2_TR(0x6f0ccd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f0cd0:L6f0cd0:{c.instructions+=4;NFSU2_TR(0x6f0cd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f0cd4:{NFSU2_TR(0x6f0cd4);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6f0cda:{NFSU2_TR(0x6f0cda);
w1(R+0,u8(0x1ull));
}
B6f0cdc:{NFSU2_TR(0x6f0cdc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f0ce0:L6f0ce0:{c.instructions+=13;NFSU2_TR(0x6f0ce0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B6f0ce3:{NFSU2_TR(0x6f0ce3);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f0ce7:{NFSU2_TR(0x6f0ce7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f0ce8:{NFSU2_TR(0x6f0ce8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6f0cee:{NFSU2_TR(0x6f0cee);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f0cef:{NFSU2_TR(0x6f0cef);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f0cf3:{NFSU2_TR(0x6f0cf3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f0cf4:{NFSU2_TR(0x6f0cf4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0cf8:{NFSU2_TR(0x6f0cf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f0cfb:{NFSU2_TR(0x6f0cfb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6f0cfd:{NFSU2_TR(0x6f0cfd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f0cfe:{NFSU2_TR(0x6f0cfe);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f0d01:{NFSU2_TR(0x6f0d01);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f0d17;}}
}
B6f0d03:L6f0d03:{c.instructions+=5;NFSU2_TR(0x6f0d03);
{u32 ea_=u32(u32(8133180u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f0d09:{NFSU2_TR(0x6f0d09);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f0d0d:{NFSU2_TR(0x6f0d0d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f0d11:{NFSU2_TR(0x6f0d11);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6f0d15:{NFSU2_TR(0x6f0d15);
{goto L6f0d29;}
}
B6f0d17:L6f0d17:{c.instructions+=4;NFSU2_TR(0x6f0d17);
{u32 ea_=u32(u32(8133180u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f0d1d:{NFSU2_TR(0x6f0d1d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f0d21:{NFSU2_TR(0x6f0d21);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f0d25:{NFSU2_TR(0x6f0d25);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6f0d29:L6f0d29:{c.instructions+=11;NFSU2_TR(0x6f0d29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f0d2c:{NFSU2_TR(0x6f0d2c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f0d32:{NFSU2_TR(0x6f0d32);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+0,u32(r2(U+0)));
}
B6f0d35:{NFSU2_TR(0x6f0d35);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f0d39:{NFSU2_TR(0x6f0d39);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0d3d:{NFSU2_TR(0x6f0d3d);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6f0d42:{NFSU2_TR(0x6f0d42);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f0d46:{NFSU2_TR(0x6f0d46);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6f0d4a:{NFSU2_TR(0x6f0d4a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6f0d4c:{NFSU2_TR(0x6f0d4c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f0d4f:{NFSU2_TR(0x6f0d4f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f0d58;}}
}
B6f0d51:L6f0d51:{c.instructions+=2;NFSU2_TR(0x6f0d51);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6f0d53:{NFSU2_TR(0x6f0d53);
{goto L6f0e1b;}
}
B6f0d58:L6f0d58:{c.instructions+=8;NFSU2_TR(0x6f0d58);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6f0d5c:{NFSU2_TR(0x6f0d5c);
u8 U[14];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+4,u32(r2(U+12)));
}
B6f0d61:{NFSU2_TR(0x6f0d61);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0d65:{NFSU2_TR(0x6f0d65);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f0d69:{NFSU2_TR(0x6f0d69);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6f0d6d:{NFSU2_TR(0x6f0d6d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6f0d6f:{NFSU2_TR(0x6f0d6f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6f0d72:{NFSU2_TR(0x6f0d72);
if(r1(R+514)){{goto L6f0d7c;}}
}
B6f0d74:L6f0d74:{c.instructions+=2;NFSU2_TR(0x6f0d74);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f0d77:{NFSU2_TR(0x6f0d77);
{goto L6f0e1b;}
}
B6f0d7c:L6f0d7c:{c.instructions+=4;NFSU2_TR(0x6f0d7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f0d80:{NFSU2_TR(0x6f0d80);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6f0d84:{NFSU2_TR(0x6f0d84);
w1(R+512,u8((r2(R+0))<(u16(0x1ull))));
}
B6f0d88:{NFSU2_TR(0x6f0d88);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6f0d8e;}}
}
B6f0d8a:L6f0d8a:{c.instructions+=2;NFSU2_TR(0x6f0d8a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6f0d8c:{NFSU2_TR(0x6f0d8c);
{goto L6f0d91;}
}
B6f0d8e:L6f0d8e:{c.instructions+=1;NFSU2_TR(0x6f0d8e);
w4(R+4,u32(r2(R+0)));
}
B6f0d91:L6f0d91:{c.instructions+=4;NFSU2_TR(0x6f0d91);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+20,u32(r2(U+8)));
}
B6f0d95:{NFSU2_TR(0x6f0d95);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f0d97:{NFSU2_TR(0x6f0d97);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6f0d9a:{NFSU2_TR(0x6f0d9a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6f0db5;}}
}
B6f0d9c:L6f0d9c:{c.instructions+=3;NFSU2_TR(0x6f0d9c);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B6f0d9d:{NFSU2_TR(0x6f0d9d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f0d9f:{NFSU2_TR(0x6f0d9f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f0dcf;}}
}
B6f0da1:L6f0da1:{c.instructions+=1;NFSU2_TR(0x6f0da1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6f0da4:L6f0da4:{c.instructions+=3;NFSU2_TR(0x6f0da4);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+20,u32(r2(U+0)));
}
B6f0da7:{NFSU2_TR(0x6f0da7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f0da9:{NFSU2_TR(0x6f0da9);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6f0dcf;}}
}
B6f0dab:L6f0dab:{c.instructions+=4;NFSU2_TR(0x6f0dab);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6f0dac:{NFSU2_TR(0x6f0dac);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6f0daf:{NFSU2_TR(0x6f0daf);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f0db1:{NFSU2_TR(0x6f0db1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f0da4u);}goto L6f0da4;}}
}
B6f0db3:L6f0db3:{c.instructions+=1;NFSU2_TR(0x6f0db3);
{goto L6f0dcf;}
}
B6f0db5:L6f0db5:{c.instructions+=2;NFSU2_TR(0x6f0db5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f0db7:{NFSU2_TR(0x6f0db7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f0dcf;}}
}
B6f0db9:L6f0db9:{c.instructions+=1;NFSU2_TR(0x6f0db9);
__builtin_memmove((R+16),(R+16),4);
}
B6f0dc0:L6f0dc0:{c.instructions+=3;NFSU2_TR(0x6f0dc0);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+8,u32(r2(U+0)));
}
B6f0dc3:{NFSU2_TR(0x6f0dc3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f0dc5:{NFSU2_TR(0x6f0dc5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f0dcf;}}
}
B6f0dc7:L6f0dc7:{c.instructions+=4;NFSU2_TR(0x6f0dc7);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6f0dc8:{NFSU2_TR(0x6f0dc8);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
}
B6f0dcb:{NFSU2_TR(0x6f0dcb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f0dcd:{NFSU2_TR(0x6f0dcd);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f0dc0u);}goto L6f0dc0;}}
}
B6f0dcf:L6f0dcf:{c.instructions+=2;NFSU2_TR(0x6f0dcf);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(u16(0x0ull))));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B6f0dd4:{NFSU2_TR(0x6f0dd4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6f0e1b;}}
}
B6f0dd6:L6f0dd6:{c.instructions+=9;NFSU2_TR(0x6f0dd6);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(r2(U+8)));
}
B6f0dda:{NFSU2_TR(0x6f0dda);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0dde:{NFSU2_TR(0x6f0dde);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f0de2:{NFSU2_TR(0x6f0de2);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f0de6:{NFSU2_TR(0x6f0de6);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f0dea:{NFSU2_TR(0x6f0dea);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6f0dee:{NFSU2_TR(0x6f0dee);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6f0df0:{NFSU2_TR(0x6f0df0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6f0df3:{NFSU2_TR(0x6f0df3);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6f0f53;}}
}
B6f0df9:L6f0df9:{c.instructions+=9;NFSU2_TR(0x6f0df9);
u8 U[14];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+8,u32(r2(U+12)));
}
B6f0dfe:{NFSU2_TR(0x6f0dfe);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6f0e00:{NFSU2_TR(0x6f0e00);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f0e04:{NFSU2_TR(0x6f0e04);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0e08:{NFSU2_TR(0x6f0e08);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f0e0c:{NFSU2_TR(0x6f0e0c);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6f0e11:{NFSU2_TR(0x6f0e11);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f0e15:{NFSU2_TR(0x6f0e15);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f0e19:{NFSU2_TR(0x6f0e19);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B6f0e1b:L6f0e1b:{c.instructions+=18;NFSU2_TR(0x6f0e1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f0e1f:{NFSU2_TR(0x6f0e1f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6f0e23:{NFSU2_TR(0x6f0e23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f0e26:{NFSU2_TR(0x6f0e26);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6f0e2a:{NFSU2_TR(0x6f0e2a);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+28,u32(r1(U+8)));
}
B6f0e2e:{NFSU2_TR(0x6f0e2e);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B6f0e30:{NFSU2_TR(0x6f0e30);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f0e34:{NFSU2_TR(0x6f0e34);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6f0e38:{NFSU2_TR(0x6f0e38);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B6f0e3c:{NFSU2_TR(0x6f0e3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f0e3f:{NFSU2_TR(0x6f0e3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+20),(U+0),4);
}
B6f0e41:{NFSU2_TR(0x6f0e41);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B6f0e45:{NFSU2_TR(0x6f0e45);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6f0e49:{NFSU2_TR(0x6f0e49);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f0e4b:{NFSU2_TR(0x6f0e4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0e4f:{NFSU2_TR(0x6f0e4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0e53:{NFSU2_TR(0x6f0e53);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0e57:{NFSU2_TR(0x6f0e57);
if(r1(R+518)){{goto L6f0f5d;}}
}
B6f0e5d:L6f0e5d:{c.instructions+=19;NFSU2_TR(0x6f0e5d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6f0e61:{NFSU2_TR(0x6f0e61);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6f0e63:{NFSU2_TR(0x6f0e63);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6f0e66:{NFSU2_TR(0x6f0e66);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B6f0e68:{NFSU2_TR(0x6f0e68);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6f0e6b:{NFSU2_TR(0x6f0e6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6f0e6e:{NFSU2_TR(0x6f0e6e);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B6f0e74:{NFSU2_TR(0x6f0e74);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B6f0e77:{NFSU2_TR(0x6f0e77);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x4ull))));
}
B6f0e7a:{NFSU2_TR(0x6f0e7a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6f0e7b:{NFSU2_TR(0x6f0e7b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6f0e7e:{NFSU2_TR(0x6f0e7e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f0e81:{NFSU2_TR(0x6f0e81);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6f0e83:{NFSU2_TR(0x6f0e83);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B6f0e86:{NFSU2_TR(0x6f0e86);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6f0e88:{NFSU2_TR(0x6f0e88);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6f0e8a:{NFSU2_TR(0x6f0e8a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f0e8e:{NFSU2_TR(0x6f0e8e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6f0e90:{NFSU2_TR(0x6f0e90);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6f0f0e;}}
}
B6f0e92:L6f0e92:{c.instructions+=10;NFSU2_TR(0x6f0e92);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B6f0e94:{NFSU2_TR(0x6f0e94);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6f0e95:{NFSU2_TR(0x6f0e95);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6f0e99:{NFSU2_TR(0x6f0e99);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B6f0e9d:{NFSU2_TR(0x6f0e9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f0ea1:{NFSU2_TR(0x6f0ea1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0ea5:{NFSU2_TR(0x6f0ea5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6f0ea8:{NFSU2_TR(0x6f0ea8);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B6f0eaa:{NFSU2_TR(0x6f0eaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B6f0eae:{NFSU2_TR(0x6f0eae);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B6f0eb0:L6f0eb0:{c.instructions+=26;NFSU2_TR(0x6f0eb0);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f0eb3:{NFSU2_TR(0x6f0eb3);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
w4(R+28,u32(r2(U+0)));
}
B6f0eb6:{NFSU2_TR(0x6f0eb6);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f0eb9:{NFSU2_TR(0x6f0eb9);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f0ebd:{NFSU2_TR(0x6f0ebd);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x10ull))));
}
B6f0ec0:{NFSU2_TR(0x6f0ec0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f0ec4:{NFSU2_TR(0x6f0ec4);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x10ull))));
}
B6f0ec7:{NFSU2_TR(0x6f0ec7);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x2ull))));
}
B6f0eca:{NFSU2_TR(0x6f0eca);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f0ecd:{NFSU2_TR(0x6f0ecd);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+20));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f0ed1:{NFSU2_TR(0x6f0ed1);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f0ed5:{NFSU2_TR(0x6f0ed5);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f0ed8:{NFSU2_TR(0x6f0ed8);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f0edb:{NFSU2_TR(0x6f0edb);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f0edf:{NFSU2_TR(0x6f0edf);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f0ee2:{NFSU2_TR(0x6f0ee2);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f0ee6:{NFSU2_TR(0x6f0ee6);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f0eea:{NFSU2_TR(0x6f0eea);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f0eed:{NFSU2_TR(0x6f0eed);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f0ef0:{NFSU2_TR(0x6f0ef0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f0ef4:{NFSU2_TR(0x6f0ef4);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f0ef7:{NFSU2_TR(0x6f0ef7);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f0efb:{NFSU2_TR(0x6f0efb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f0eff:{NFSU2_TR(0x6f0eff);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B6f0f00:{NFSU2_TR(0x6f0f00);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0f04:{NFSU2_TR(0x6f0f04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f0eb0u);}goto L6f0eb0;}}
}
B6f0f06:L6f0f06:{c.instructions+=2;NFSU2_TR(0x6f0f06);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f0f0a:{NFSU2_TR(0x6f0f0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f0f0e:L6f0f0e:{c.instructions+=3;NFSU2_TR(0x6f0f0e);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B6f0f0f:{NFSU2_TR(0x6f0f0f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6f0f11:{NFSU2_TR(0x6f0f11);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6f1008u,6f1);}
}
B6f0f17:L6f0f17:{c.instructions+=3;NFSU2_TR(0x6f0f17);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6f0f1b:{NFSU2_TR(0x6f0f1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6f0f1f:{NFSU2_TR(0x6f0f1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f0f23:L6f0f23:{c.instructions+=9;NFSU2_TR(0x6f0f23);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f0f27:{NFSU2_TR(0x6f0f27);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(r2(U+8)));
}
B6f0f2b:{NFSU2_TR(0x6f0f2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f0f2f:{NFSU2_TR(0x6f0f2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6f0f32:{NFSU2_TR(0x6f0f32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f0f33:{NFSU2_TR(0x6f0f33);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f0f34:{NFSU2_TR(0x6f0f34);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f0f35:{NFSU2_TR(0x6f0f35);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f0f36:{NFSU2_TR(0x6f0f36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f0f3bull));
TAIL_STATIC(0x6e4450u,6e4);
}
B6f0f3b:L6f0f3b:{c.instructions+=5;NFSU2_TR(0x6f0f3b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6f0f3e:{NFSU2_TR(0x6f0f3e);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x10ull))));
}
B6f0f41:{NFSU2_TR(0x6f0f41);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x10ull))));
}
B6f0f44:{NFSU2_TR(0x6f0f44);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
}
B6f0f45:{NFSU2_TR(0x6f0f45);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f0f23u);}goto L6f0f23;}}
}
B6f0f47:L6f0f47:{c.instructions+=7;NFSU2_TR(0x6f0f47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f0f48:{NFSU2_TR(0x6f0f48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f0f49:{NFSU2_TR(0x6f0f49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f0f4a:{NFSU2_TR(0x6f0f4a);
w1(R+0,u8(0x1ull));
}
B6f0f4c:{NFSU2_TR(0x6f0f4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f0f4d:{NFSU2_TR(0x6f0f4d);
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
B6f0f50:{NFSU2_TR(0x6f0f50);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f0f53:L6f0f53:{c.instructions+=2;NFSU2_TR(0x6f0f53);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6f0f58:{NFSU2_TR(0x6f0f58);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f0e1bu);}goto L6f0e1b;}
}
B6f0f5d:L6f0f5d:{c.instructions+=8;NFSU2_TR(0x6f0f5d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6f0f5e:{NFSU2_TR(0x6f0f5e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6f0f60:{NFSU2_TR(0x6f0f60);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6f0f63:{NFSU2_TR(0x6f0f63);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6f0f66:{NFSU2_TR(0x6f0f66);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B6f0f67:{NFSU2_TR(0x6f0f67);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6f0f69:{NFSU2_TR(0x6f0f69);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0xfffffffcull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6f0f70:{NFSU2_TR(0x6f0f70);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6f0fcb;}}
}
B6f0f72:L6f0f72:{c.instructions+=9;NFSU2_TR(0x6f0f72);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6f0f75:{NFSU2_TR(0x6f0f75);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6f0f76:{NFSU2_TR(0x6f0f76);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0f7a:{NFSU2_TR(0x6f0f7a);
w4(R+24,u32(0-u32(r4(R+24))));
}
B6f0f7c:{NFSU2_TR(0x6f0f7c);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6f0f80:{NFSU2_TR(0x6f0f80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6f0f83:{NFSU2_TR(0x6f0f83);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6f0f86:{NFSU2_TR(0x6f0f86);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0f8a:{NFSU2_TR(0x6f0f8a);
__builtin_memmove((R+12),(R+12),4);
}
B6f0f90:L6f0f90:{c.instructions+=16;NFSU2_TR(0x6f0f90);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+4,u32(r2(U+0)));
}
B6f0f93:{NFSU2_TR(0x6f0f93);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f0f96:{NFSU2_TR(0x6f0f96);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f0f9a:{NFSU2_TR(0x6f0f9a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6f0f9d:{NFSU2_TR(0x6f0f9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f0fa0:{NFSU2_TR(0x6f0fa0);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f0fa4:{NFSU2_TR(0x6f0fa4);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6f0fa8:{NFSU2_TR(0x6f0fa8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6f0faa:{NFSU2_TR(0x6f0faa);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f0fae:{NFSU2_TR(0x6f0fae);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6f0fb2:{NFSU2_TR(0x6f0fb2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f0fb6:{NFSU2_TR(0x6f0fb6);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x10ull))));
}
B6f0fb9:{NFSU2_TR(0x6f0fb9);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x2ull))));
}
B6f0fbc:{NFSU2_TR(0x6f0fbc);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6f0fbd:{NFSU2_TR(0x6f0fbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f0fc1:{NFSU2_TR(0x6f0fc1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f0f90u);}goto L6f0f90;}}
}
B6f0fc3:L6f0fc3:{c.instructions+=2;NFSU2_TR(0x6f0fc3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f0fc7:{NFSU2_TR(0x6f0fc7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f0fcb:L6f0fcb:{c.instructions+=3;NFSU2_TR(0x6f0fcb);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B6f0fcc:{NFSU2_TR(0x6f0fcc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6f0fce:{NFSU2_TR(0x6f0fce);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6f1008u,6f1);}
}
B6f0fd0:L6f0fd0:{c.instructions+=14;NFSU2_TR(0x6f0fd0);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6f0fd4:{NFSU2_TR(0x6f0fd4);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(r2(U+8)));
}
B6f0fd8:{NFSU2_TR(0x6f0fd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f0fdb:{NFSU2_TR(0x6f0fdb);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f0fdf:{NFSU2_TR(0x6f0fdf);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6f0fe2:{NFSU2_TR(0x6f0fe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f0fe5:{NFSU2_TR(0x6f0fe5);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f0fe9:{NFSU2_TR(0x6f0fe9);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6f0fed:{NFSU2_TR(0x6f0fed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6f0fef:{NFSU2_TR(0x6f0fef);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f0ff3:{NFSU2_TR(0x6f0ff3);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6f0ff7:{NFSU2_TR(0x6f0ff7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f0ffa:{NFSU2_TR(0x6f0ffa);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f0ffe:{NFSU2_TR(0x6f0ffe);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x10ull))));
TAIL_STATIC(0x6f1001u,6f1);
}
XIT:NFSU2_TR_EXIT(0x6f0,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
