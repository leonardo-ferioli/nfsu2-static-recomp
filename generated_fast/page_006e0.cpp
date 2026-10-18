#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_63d(u8* __restrict R,Cpu& c);
u32 body_6d8(u8* __restrict R,Cpu& c);
u32 body_6d9(u8* __restrict R,Cpu& c);
u32 body_6db(u8* __restrict R,Cpu& c);
u32 body_6dc(u8* __restrict R,Cpu& c);
u32 body_6de(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_81c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6e0,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6e0,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6e0(u8* __restrict R,Cpu& c);
u32 page_6e0(Cpu& c){return body_6e0(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6e0(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6e0004:goto L6e0004;
case 0x6e0008:c.instructions+=4;goto B6e0008;
case 0x6e000e:c.instructions+=3;goto B6e000e;
case 0x6e0010:c.instructions+=2;goto B6e0010;
case 0x6e0013:c.instructions+=1;goto B6e0013;
case 0x6e0015:goto L6e0015;
case 0x6e0019:c.instructions+=4;goto B6e0019;
case 0x6e001f:c.instructions+=3;goto B6e001f;
case 0x6e0021:c.instructions+=2;goto B6e0021;
case 0x6e0024:c.instructions+=1;goto B6e0024;
case 0x6e0026:goto L6e0026;
case 0x6e002a:c.instructions+=4;goto B6e002a;
case 0x6e0030:c.instructions+=3;goto B6e0030;
case 0x6e0032:c.instructions+=2;goto B6e0032;
case 0x6e0035:c.instructions+=1;goto B6e0035;
case 0x6e0037:goto L6e0037;
case 0x6e003b:c.instructions+=4;goto B6e003b;
case 0x6e0041:c.instructions+=3;goto B6e0041;
case 0x6e0043:c.instructions+=2;goto B6e0043;
case 0x6e0046:c.instructions+=1;goto B6e0046;
case 0x6e0048:goto L6e0048;
case 0x6e004c:c.instructions+=4;goto B6e004c;
case 0x6e0052:c.instructions+=3;goto B6e0052;
case 0x6e0054:c.instructions+=2;goto B6e0054;
case 0x6e0057:c.instructions+=1;goto B6e0057;
case 0x6e0059:goto L6e0059;
case 0x6e005d:c.instructions+=4;goto B6e005d;
case 0x6e0063:c.instructions+=3;goto B6e0063;
case 0x6e0065:c.instructions+=2;goto B6e0065;
case 0x6e0068:c.instructions+=1;goto B6e0068;
case 0x6e006e:goto L6e006e;
case 0x6e0072:c.instructions+=26;goto B6e0072;
case 0x6e0076:c.instructions+=25;goto B6e0076;
case 0x6e007a:c.instructions+=24;goto B6e007a;
case 0x6e007e:c.instructions+=23;goto B6e007e;
case 0x6e0082:c.instructions+=22;goto B6e0082;
case 0x6e0087:c.instructions+=21;goto B6e0087;
case 0x6e008b:c.instructions+=20;goto B6e008b;
case 0x6e0091:c.instructions+=19;goto B6e0091;
case 0x6e0095:c.instructions+=18;goto B6e0095;
case 0x6e0099:c.instructions+=17;goto B6e0099;
case 0x6e009d:c.instructions+=16;goto B6e009d;
case 0x6e00a2:c.instructions+=15;goto B6e00a2;
case 0x6e00a6:c.instructions+=14;goto B6e00a6;
case 0x6e00ac:c.instructions+=13;goto B6e00ac;
case 0x6e00b0:c.instructions+=12;goto B6e00b0;
case 0x6e00b1:c.instructions+=11;goto B6e00b1;
case 0x6e00b5:c.instructions+=10;goto B6e00b5;
case 0x6e00b6:c.instructions+=9;goto B6e00b6;
case 0x6e00bc:c.instructions+=8;goto B6e00bc;
case 0x6e00c2:c.instructions+=7;goto B6e00c2;
case 0x6e00c6:c.instructions+=6;goto B6e00c6;
case 0x6e00ca:c.instructions+=5;goto B6e00ca;
case 0x6e00cc:c.instructions+=4;goto B6e00cc;
case 0x6e00d2:c.instructions+=3;goto B6e00d2;
case 0x6e00da:c.instructions+=2;goto B6e00da;
case 0x6e00e2:c.instructions+=1;goto B6e00e2;
case 0x6e00e7:goto L6e00e7;
case 0x6e00eb:c.instructions+=8;goto B6e00eb;
case 0x6e00ef:c.instructions+=7;goto B6e00ef;
case 0x6e00f5:c.instructions+=6;goto B6e00f5;
case 0x6e00fb:c.instructions+=5;goto B6e00fb;
case 0x6e00fd:c.instructions+=4;goto B6e00fd;
case 0x6e0101:c.instructions+=3;goto B6e0101;
case 0x6e0105:c.instructions+=2;goto B6e0105;
case 0x6e0109:c.instructions+=1;goto B6e0109;
case 0x6e010b:goto L6e010b;
case 0x6e010d:c.instructions+=3;goto B6e010d;
case 0x6e0111:c.instructions+=2;goto B6e0111;
case 0x6e0113:c.instructions+=1;goto B6e0113;
case 0x6e0117:goto L6e0117;
case 0x6e011d:c.instructions+=4;goto B6e011d;
case 0x6e011f:c.instructions+=3;goto B6e011f;
case 0x6e0121:c.instructions+=2;goto B6e0121;
case 0x6e0124:c.instructions+=1;goto B6e0124;
case 0x6e0126:goto L6e0126;
case 0x6e012b:c.instructions+=7;goto B6e012b;
case 0x6e0131:c.instructions+=6;goto B6e0131;
case 0x6e0137:c.instructions+=5;goto B6e0137;
case 0x6e0139:c.instructions+=4;goto B6e0139;
case 0x6e013a:c.instructions+=3;goto B6e013a;
case 0x6e013c:c.instructions+=2;goto B6e013c;
case 0x6e013d:c.instructions+=1;goto B6e013d;
case 0x6e0143:goto L6e0143;
case 0x6e0145:goto L6e0145;
case 0x6e0147:goto L6e0147;
case 0x6e014d:c.instructions+=4;goto B6e014d;
case 0x6e0151:c.instructions+=3;goto B6e0151;
case 0x6e0153:c.instructions+=2;goto B6e0153;
case 0x6e0156:c.instructions+=1;goto B6e0156;
case 0x6e015c:goto L6e015c;
case 0x6e0160:c.instructions+=5;goto B6e0160;
case 0x6e0162:c.instructions+=4;goto B6e0162;
case 0x6e0163:c.instructions+=3;goto B6e0163;
case 0x6e0168:c.instructions+=2;goto B6e0168;
case 0x6e016a:c.instructions+=1;goto B6e016a;
case 0x6e016f:goto L6e016f;
case 0x6e0173:c.instructions+=3;goto B6e0173;
case 0x6e0174:c.instructions+=2;goto B6e0174;
case 0x6e0176:c.instructions+=1;goto B6e0176;
case 0x6e017b:goto L6e017b;
case 0x6e017f:c.instructions+=3;goto B6e017f;
case 0x6e0180:c.instructions+=2;goto B6e0180;
case 0x6e0182:c.instructions+=1;goto B6e0182;
case 0x6e0187:goto L6e0187;
case 0x6e018d:c.instructions+=3;goto B6e018d;
case 0x6e0193:c.instructions+=2;goto B6e0193;
case 0x6e0195:c.instructions+=1;goto B6e0195;
case 0x6e0197:goto L6e0197;
case 0x6e019b:c.instructions+=5;goto B6e019b;
case 0x6e019d:c.instructions+=4;goto B6e019d;
case 0x6e01a1:c.instructions+=3;goto B6e01a1;
case 0x6e01a5:c.instructions+=2;goto B6e01a5;
case 0x6e01a7:c.instructions+=1;goto B6e01a7;
case 0x6e01ab:goto L6e01ab;
case 0x6e01b1:c.instructions+=4;goto B6e01b1;
case 0x6e01b5:c.instructions+=3;goto B6e01b5;
case 0x6e01b7:c.instructions+=2;goto B6e01b7;
case 0x6e01ba:c.instructions+=1;goto B6e01ba;
case 0x6e01bc:goto L6e01bc;
case 0x6e01c0:c.instructions+=8;goto B6e01c0;
case 0x6e01c5:c.instructions+=7;goto B6e01c5;
case 0x6e01cb:c.instructions+=6;goto B6e01cb;
case 0x6e01d0:c.instructions+=5;goto B6e01d0;
case 0x6e01d2:c.instructions+=4;goto B6e01d2;
case 0x6e01d3:c.instructions+=3;goto B6e01d3;
case 0x6e01d5:c.instructions+=2;goto B6e01d5;
case 0x6e01d6:c.instructions+=1;goto B6e01d6;
case 0x6e01dc:goto L6e01dc;
case 0x6e01e2:c.instructions+=4;goto B6e01e2;
case 0x6e01e6:c.instructions+=3;goto B6e01e6;
case 0x6e01e8:c.instructions+=2;goto B6e01e8;
case 0x6e01eb:c.instructions+=1;goto B6e01eb;
case 0x6e01f1:goto L6e01f1;
case 0x6e01f5:c.instructions+=5;goto B6e01f5;
case 0x6e01f7:c.instructions+=4;goto B6e01f7;
case 0x6e01f8:c.instructions+=3;goto B6e01f8;
case 0x6e01fd:c.instructions+=2;goto B6e01fd;
case 0x6e01ff:c.instructions+=1;goto B6e01ff;
case 0x6e0204:goto L6e0204;
case 0x6e0208:c.instructions+=3;goto B6e0208;
case 0x6e0209:c.instructions+=2;goto B6e0209;
case 0x6e020b:c.instructions+=1;goto B6e020b;
case 0x6e0210:goto L6e0210;
case 0x6e0214:c.instructions+=3;goto B6e0214;
case 0x6e0215:c.instructions+=2;goto B6e0215;
case 0x6e0217:c.instructions+=1;goto B6e0217;
case 0x6e021c:goto L6e021c;
case 0x6e0220:c.instructions+=3;goto B6e0220;
case 0x6e0221:c.instructions+=2;goto B6e0221;
case 0x6e0223:c.instructions+=1;goto B6e0223;
case 0x6e0228:goto L6e0228;
case 0x6e022c:c.instructions+=8;goto B6e022c;
case 0x6e0230:c.instructions+=7;goto B6e0230;
case 0x6e0236:c.instructions+=6;goto B6e0236;
case 0x6e023c:c.instructions+=5;goto B6e023c;
case 0x6e023e:c.instructions+=4;goto B6e023e;
case 0x6e0244:c.instructions+=3;goto B6e0244;
case 0x6e0248:c.instructions+=2;goto B6e0248;
case 0x6e024e:c.instructions+=1;goto B6e024e;
case 0x6e0253:goto L6e0253;
case 0x6e0255:c.instructions+=1;goto B6e0255;
case 0x6e025a:goto L6e025a;
case 0x6e025e:c.instructions+=3;goto B6e025e;
case 0x6e025f:c.instructions+=2;goto B6e025f;
case 0x6e0262:c.instructions+=1;goto B6e0262;
case 0x6e0267:goto L6e0267;
case 0x6e026b:c.instructions+=2;goto B6e026b;
case 0x6e026c:c.instructions+=1;goto B6e026c;
case 0x6e026e:goto L6e026e;
case 0x6e026f:c.instructions+=1;goto B6e026f;
case 0x6e0271:goto L6e0271;
case 0x6e0277:c.instructions+=1;goto B6e0277;
case 0x6e0279:goto L6e0279;
case 0x6e027f:goto L6e027f;
case 0x6e0283:c.instructions+=1;goto B6e0283;
case 0x6e0289:goto L6e0289;
case 0x6e028f:c.instructions+=1;goto B6e028f;
case 0x6e0291:goto L6e0291;
case 0x6e0296:c.instructions+=6;goto B6e0296;
case 0x6e0297:c.instructions+=5;goto B6e0297;
case 0x6e029c:c.instructions+=4;goto B6e029c;
case 0x6e02a2:c.instructions+=3;goto B6e02a2;
case 0x6e02a4:c.instructions+=2;goto B6e02a4;
case 0x6e02a5:c.instructions+=1;goto B6e02a5;
case 0x6e02ab:goto L6e02ab;
case 0x6e02b1:c.instructions+=1;goto B6e02b1;
case 0x6e02b3:goto L6e02b3;
case 0x6e02b4:c.instructions+=2;goto B6e02b4;
case 0x6e02ba:c.instructions+=1;goto B6e02ba;
case 0x6e02bc:goto L6e02bc;
case 0x6e02c1:c.instructions+=3;goto B6e02c1;
case 0x6e02c3:c.instructions+=2;goto B6e02c3;
case 0x6e02c4:c.instructions+=1;goto B6e02c4;
case 0x6e02ca:goto L6e02ca;
case 0x6e02cb:c.instructions+=6;goto B6e02cb;
case 0x6e02cc:c.instructions+=5;goto B6e02cc;
case 0x6e02d2:c.instructions+=4;goto B6e02d2;
case 0x6e02d3:c.instructions+=3;goto B6e02d3;
case 0x6e02d4:c.instructions+=2;goto B6e02d4;
case 0x6e02d7:c.instructions+=1;goto B6e02d7;
case 0x6e02e0:goto L6e02e0;
case 0x6e02e1:c.instructions+=18;goto B6e02e1;
case 0x6e02e6:c.instructions+=17;goto B6e02e6;
case 0x6e02e9:c.instructions+=16;goto B6e02e9;
case 0x6e02ea:c.instructions+=15;goto B6e02ea;
case 0x6e02ed:c.instructions+=14;goto B6e02ed;
case 0x6e02ee:c.instructions+=13;goto B6e02ee;
case 0x6e02f1:c.instructions+=12;goto B6e02f1;
case 0x6e02f2:c.instructions+=11;goto B6e02f2;
case 0x6e02f3:c.instructions+=10;goto B6e02f3;
case 0x6e02f6:c.instructions+=9;goto B6e02f6;
case 0x6e02fa:c.instructions+=8;goto B6e02fa;
case 0x6e02fd:c.instructions+=7;goto B6e02fd;
case 0x6e0303:c.instructions+=6;goto B6e0303;
case 0x6e0306:c.instructions+=5;goto B6e0306;
case 0x6e0309:c.instructions+=4;goto B6e0309;
case 0x6e030b:c.instructions+=3;goto B6e030b;
case 0x6e030e:c.instructions+=2;goto B6e030e;
case 0x6e0310:c.instructions+=1;goto B6e0310;
case 0x6e0312:goto L6e0312;
case 0x6e0316:c.instructions+=1;goto B6e0316;
case 0x6e0318:goto L6e0318;
case 0x6e031c:c.instructions+=3;goto B6e031c;
case 0x6e031d:c.instructions+=2;goto B6e031d;
case 0x6e031e:c.instructions+=1;goto B6e031e;
case 0x6e0323:goto L6e0323;
case 0x6e0326:goto L6e0326;
case 0x6e032c:c.instructions+=8;goto B6e032c;
case 0x6e0333:c.instructions+=7;goto B6e0333;
case 0x6e0334:c.instructions+=6;goto B6e0334;
case 0x6e0335:c.instructions+=5;goto B6e0335;
case 0x6e0336:c.instructions+=4;goto B6e0336;
case 0x6e033b:c.instructions+=3;goto B6e033b;
case 0x6e033c:c.instructions+=2;goto B6e033c;
case 0x6e033d:c.instructions+=1;goto B6e033d;
case 0x6e0342:goto L6e0342;
case 0x6e0345:c.instructions+=2;goto B6e0345;
case 0x6e0349:c.instructions+=1;goto B6e0349;
case 0x6e034e:goto L6e034e;
case 0x6e0354:c.instructions+=9;goto B6e0354;
case 0x6e0358:c.instructions+=8;goto B6e0358;
case 0x6e035b:c.instructions+=7;goto B6e035b;
case 0x6e0360:c.instructions+=6;goto B6e0360;
case 0x6e0363:c.instructions+=5;goto B6e0363;
case 0x6e0369:c.instructions+=4;goto B6e0369;
case 0x6e036c:c.instructions+=3;goto B6e036c;
case 0x6e036f:c.instructions+=2;goto B6e036f;
case 0x6e0372:c.instructions+=1;goto B6e0372;
case 0x6e0377:goto L6e0377;
case 0x6e037d:c.instructions+=2;goto B6e037d;
case 0x6e037f:c.instructions+=1;goto B6e037f;
case 0x6e0381:goto L6e0381;
case 0x6e0384:c.instructions+=7;goto B6e0384;
case 0x6e0389:c.instructions+=6;goto B6e0389;
case 0x6e038d:c.instructions+=5;goto B6e038d;
case 0x6e038f:c.instructions+=4;goto B6e038f;
case 0x6e0390:c.instructions+=3;goto B6e0390;
case 0x6e0391:c.instructions+=2;goto B6e0391;
case 0x6e0395:c.instructions+=1;goto B6e0395;
case 0x6e039a:goto L6e039a;
case 0x6e039e:c.instructions+=3;goto B6e039e;
case 0x6e039f:c.instructions+=2;goto B6e039f;
case 0x6e03a0:c.instructions+=1;goto B6e03a0;
case 0x6e03a5:goto L6e03a5;
case 0x6e03a8:c.instructions+=6;goto B6e03a8;
case 0x6e03a9:c.instructions+=5;goto B6e03a9;
case 0x6e03aa:c.instructions+=4;goto B6e03aa;
case 0x6e03ab:c.instructions+=3;goto B6e03ab;
case 0x6e03ac:c.instructions+=2;goto B6e03ac;
case 0x6e03ad:c.instructions+=1;goto B6e03ad;
case 0x6e03b0:goto L6e03b0;
case 0x6e03b5:c.instructions+=8;goto B6e03b5;
case 0x6e03b8:c.instructions+=7;goto B6e03b8;
case 0x6e03be:c.instructions+=6;goto B6e03be;
case 0x6e03bf:c.instructions+=5;goto B6e03bf;
case 0x6e03c0:c.instructions+=4;goto B6e03c0;
case 0x6e03c4:c.instructions+=3;goto B6e03c4;
case 0x6e03c7:c.instructions+=2;goto B6e03c7;
case 0x6e03cd:c.instructions+=1;goto B6e03cd;
case 0x6e03d2:goto L6e03d2;
case 0x6e03d4:c.instructions+=4;goto B6e03d4;
case 0x6e03da:c.instructions+=3;goto B6e03da;
case 0x6e03dc:c.instructions+=2;goto B6e03dc;
case 0x6e03df:c.instructions+=1;goto B6e03df;
case 0x6e03e4:goto L6e03e4;
case 0x6e03e7:c.instructions+=4;goto B6e03e7;
case 0x6e03ed:c.instructions+=3;goto B6e03ed;
case 0x6e03ef:c.instructions+=2;goto B6e03ef;
case 0x6e03f2:c.instructions+=1;goto B6e03f2;
case 0x6e03f7:goto L6e03f7;
case 0x6e03fa:c.instructions+=4;goto B6e03fa;
case 0x6e0400:c.instructions+=3;goto B6e0400;
case 0x6e0402:c.instructions+=2;goto B6e0402;
case 0x6e0405:c.instructions+=1;goto B6e0405;
case 0x6e040a:goto L6e040a;
case 0x6e040c:c.instructions+=2;goto B6e040c;
case 0x6e040d:c.instructions+=1;goto B6e040d;
case 0x6e0412:goto L6e0412;
case 0x6e0415:c.instructions+=3;goto B6e0415;
case 0x6e0416:c.instructions+=2;goto B6e0416;
case 0x6e0417:c.instructions+=1;goto B6e0417;
case 0x6e0420:goto L6e0420;
case 0x6e0424:c.instructions+=13;goto B6e0424;
case 0x6e0428:c.instructions+=12;goto B6e0428;
case 0x6e0429:c.instructions+=11;goto B6e0429;
case 0x6e042a:c.instructions+=10;goto B6e042a;
case 0x6e042e:c.instructions+=9;goto B6e042e;
case 0x6e042f:c.instructions+=8;goto B6e042f;
case 0x6e0430:c.instructions+=7;goto B6e0430;
case 0x6e0434:c.instructions+=6;goto B6e0434;
case 0x6e0437:c.instructions+=5;goto B6e0437;
case 0x6e0439:c.instructions+=4;goto B6e0439;
case 0x6e043b:c.instructions+=3;goto B6e043b;
case 0x6e043e:c.instructions+=2;goto B6e043e;
case 0x6e0442:c.instructions+=1;goto B6e0442;
case 0x6e0444:goto L6e0444;
case 0x6e0448:c.instructions+=2;goto B6e0448;
case 0x6e044c:c.instructions+=1;goto B6e044c;
case 0x6e0450:goto L6e0450;
case 0x6e0454:c.instructions+=6;goto B6e0454;
case 0x6e0458:c.instructions+=5;goto B6e0458;
case 0x6e0459:c.instructions+=4;goto B6e0459;
case 0x6e045a:c.instructions+=3;goto B6e045a;
case 0x6e045b:c.instructions+=2;goto B6e045b;
case 0x6e045c:c.instructions+=1;goto B6e045c;
case 0x6e0461:goto L6e0461;
case 0x6e0465:c.instructions+=6;goto B6e0465;
case 0x6e0468:c.instructions+=5;goto B6e0468;
case 0x6e0469:c.instructions+=4;goto B6e0469;
case 0x6e046c:c.instructions+=3;goto B6e046c;
case 0x6e046e:c.instructions+=2;goto B6e046e;
case 0x6e0472:c.instructions+=1;goto B6e0472;
case 0x6e0474:goto L6e0474;
case 0x6e0476:c.instructions+=1;goto B6e0476;
case 0x6e0478:goto L6e0478;
case 0x6e047c:c.instructions+=3;goto B6e047c;
case 0x6e047e:c.instructions+=2;goto B6e047e;
case 0x6e0481:c.instructions+=1;goto B6e0481;
case 0x6e0483:goto L6e0483;
case 0x6e0487:c.instructions+=5;goto B6e0487;
case 0x6e0488:c.instructions+=4;goto B6e0488;
case 0x6e0489:c.instructions+=3;goto B6e0489;
case 0x6e048a:c.instructions+=2;goto B6e048a;
case 0x6e048b:c.instructions+=1;goto B6e048b;
case 0x6e0490:goto L6e0490;
case 0x6e0493:c.instructions+=4;goto B6e0493;
case 0x6e0494:c.instructions+=3;goto B6e0494;
case 0x6e0497:c.instructions+=2;goto B6e0497;
case 0x6e0499:c.instructions+=1;goto B6e0499;
case 0x6e049b:goto L6e049b;
case 0x6e049f:c.instructions+=2;goto B6e049f;
case 0x6e04a1:c.instructions+=1;goto B6e04a1;
case 0x6e04a3:goto L6e04a3;
case 0x6e04a7:c.instructions+=10;goto B6e04a7;
case 0x6e04ab:c.instructions+=9;goto B6e04ab;
case 0x6e04ad:c.instructions+=8;goto B6e04ad;
case 0x6e04af:c.instructions+=7;goto B6e04af;
case 0x6e04b2:c.instructions+=6;goto B6e04b2;
case 0x6e04b5:c.instructions+=5;goto B6e04b5;
case 0x6e04b7:c.instructions+=4;goto B6e04b7;
case 0x6e04b9:c.instructions+=3;goto B6e04b9;
case 0x6e04bb:c.instructions+=2;goto B6e04bb;
case 0x6e04bd:c.instructions+=1;goto B6e04bd;
case 0x6e04c0:goto L6e04c0;
case 0x6e04c2:c.instructions+=6;goto B6e04c2;
case 0x6e04c8:c.instructions+=5;goto B6e04c8;
case 0x6e04cb:c.instructions+=4;goto B6e04cb;
case 0x6e04cd:c.instructions+=3;goto B6e04cd;
case 0x6e04ce:c.instructions+=2;goto B6e04ce;
case 0x6e04cf:c.instructions+=1;goto B6e04cf;
case 0x6e04d4:goto L6e04d4;
case 0x6e04d7:c.instructions+=3;goto B6e04d7;
case 0x6e04da:c.instructions+=2;goto B6e04da;
case 0x6e04db:c.instructions+=1;goto B6e04db;
case 0x6e04dd:goto L6e04dd;
case 0x6e04de:c.instructions+=4;goto B6e04de;
case 0x6e04df:c.instructions+=3;goto B6e04df;
case 0x6e04e0:c.instructions+=2;goto B6e04e0;
case 0x6e04e1:c.instructions+=1;goto B6e04e1;
case 0x6e04f0:goto L6e04f0;
case 0x6e04f4:c.instructions+=13;goto B6e04f4;
case 0x6e04f8:c.instructions+=12;goto B6e04f8;
case 0x6e04f9:c.instructions+=11;goto B6e04f9;
case 0x6e04fa:c.instructions+=10;goto B6e04fa;
case 0x6e04fe:c.instructions+=9;goto B6e04fe;
case 0x6e04ff:c.instructions+=8;goto B6e04ff;
case 0x6e0500:c.instructions+=7;goto B6e0500;
case 0x6e0504:c.instructions+=6;goto B6e0504;
case 0x6e0507:c.instructions+=5;goto B6e0507;
case 0x6e0509:c.instructions+=4;goto B6e0509;
case 0x6e050b:c.instructions+=3;goto B6e050b;
case 0x6e050e:c.instructions+=2;goto B6e050e;
case 0x6e0512:c.instructions+=1;goto B6e0512;
case 0x6e0514:goto L6e0514;
case 0x6e0518:c.instructions+=2;goto B6e0518;
case 0x6e051c:c.instructions+=1;goto B6e051c;
case 0x6e0520:goto L6e0520;
case 0x6e0524:c.instructions+=6;goto B6e0524;
case 0x6e0528:c.instructions+=5;goto B6e0528;
case 0x6e0529:c.instructions+=4;goto B6e0529;
case 0x6e052a:c.instructions+=3;goto B6e052a;
case 0x6e052b:c.instructions+=2;goto B6e052b;
case 0x6e052c:c.instructions+=1;goto B6e052c;
case 0x6e0531:goto L6e0531;
case 0x6e0535:c.instructions+=6;goto B6e0535;
case 0x6e0538:c.instructions+=5;goto B6e0538;
case 0x6e0539:c.instructions+=4;goto B6e0539;
case 0x6e053c:c.instructions+=3;goto B6e053c;
case 0x6e053e:c.instructions+=2;goto B6e053e;
case 0x6e0542:c.instructions+=1;goto B6e0542;
case 0x6e0544:goto L6e0544;
case 0x6e0546:c.instructions+=1;goto B6e0546;
case 0x6e0548:goto L6e0548;
case 0x6e054c:c.instructions+=3;goto B6e054c;
case 0x6e054e:c.instructions+=2;goto B6e054e;
case 0x6e0551:c.instructions+=1;goto B6e0551;
case 0x6e0553:goto L6e0553;
case 0x6e0557:c.instructions+=5;goto B6e0557;
case 0x6e0558:c.instructions+=4;goto B6e0558;
case 0x6e0559:c.instructions+=3;goto B6e0559;
case 0x6e055a:c.instructions+=2;goto B6e055a;
case 0x6e055b:c.instructions+=1;goto B6e055b;
case 0x6e0560:goto L6e0560;
case 0x6e0563:c.instructions+=4;goto B6e0563;
case 0x6e0564:c.instructions+=3;goto B6e0564;
case 0x6e0567:c.instructions+=2;goto B6e0567;
case 0x6e0569:c.instructions+=1;goto B6e0569;
case 0x6e056b:goto L6e056b;
case 0x6e056f:c.instructions+=2;goto B6e056f;
case 0x6e0571:c.instructions+=1;goto B6e0571;
case 0x6e0573:goto L6e0573;
case 0x6e0577:c.instructions+=10;goto B6e0577;
case 0x6e057b:c.instructions+=9;goto B6e057b;
case 0x6e057d:c.instructions+=8;goto B6e057d;
case 0x6e057f:c.instructions+=7;goto B6e057f;
case 0x6e0582:c.instructions+=6;goto B6e0582;
case 0x6e0585:c.instructions+=5;goto B6e0585;
case 0x6e0587:c.instructions+=4;goto B6e0587;
case 0x6e0589:c.instructions+=3;goto B6e0589;
case 0x6e058b:c.instructions+=2;goto B6e058b;
case 0x6e058d:c.instructions+=1;goto B6e058d;
case 0x6e0590:goto L6e0590;
case 0x6e0592:c.instructions+=6;goto B6e0592;
case 0x6e0598:c.instructions+=5;goto B6e0598;
case 0x6e059b:c.instructions+=4;goto B6e059b;
case 0x6e059d:c.instructions+=3;goto B6e059d;
case 0x6e059e:c.instructions+=2;goto B6e059e;
case 0x6e059f:c.instructions+=1;goto B6e059f;
case 0x6e05a4:goto L6e05a4;
case 0x6e05a7:c.instructions+=3;goto B6e05a7;
case 0x6e05aa:c.instructions+=2;goto B6e05aa;
case 0x6e05ab:c.instructions+=1;goto B6e05ab;
case 0x6e05ad:goto L6e05ad;
case 0x6e05ae:c.instructions+=4;goto B6e05ae;
case 0x6e05af:c.instructions+=3;goto B6e05af;
case 0x6e05b0:c.instructions+=2;goto B6e05b0;
case 0x6e05b1:c.instructions+=1;goto B6e05b1;
case 0x6e05c0:goto L6e05c0;
case 0x6e05c4:c.instructions+=13;goto B6e05c4;
case 0x6e05c8:c.instructions+=12;goto B6e05c8;
case 0x6e05c9:c.instructions+=11;goto B6e05c9;
case 0x6e05ca:c.instructions+=10;goto B6e05ca;
case 0x6e05ce:c.instructions+=9;goto B6e05ce;
case 0x6e05cf:c.instructions+=8;goto B6e05cf;
case 0x6e05d0:c.instructions+=7;goto B6e05d0;
case 0x6e05d4:c.instructions+=6;goto B6e05d4;
case 0x6e05d7:c.instructions+=5;goto B6e05d7;
case 0x6e05d9:c.instructions+=4;goto B6e05d9;
case 0x6e05db:c.instructions+=3;goto B6e05db;
case 0x6e05de:c.instructions+=2;goto B6e05de;
case 0x6e05e2:c.instructions+=1;goto B6e05e2;
case 0x6e05e4:goto L6e05e4;
case 0x6e05e8:c.instructions+=2;goto B6e05e8;
case 0x6e05ec:c.instructions+=1;goto B6e05ec;
case 0x6e05f0:goto L6e05f0;
case 0x6e05f4:c.instructions+=6;goto B6e05f4;
case 0x6e05f8:c.instructions+=5;goto B6e05f8;
case 0x6e05f9:c.instructions+=4;goto B6e05f9;
case 0x6e05fa:c.instructions+=3;goto B6e05fa;
case 0x6e05fb:c.instructions+=2;goto B6e05fb;
case 0x6e05fc:c.instructions+=1;goto B6e05fc;
case 0x6e0601:goto L6e0601;
case 0x6e0605:c.instructions+=6;goto B6e0605;
case 0x6e0608:c.instructions+=5;goto B6e0608;
case 0x6e0609:c.instructions+=4;goto B6e0609;
case 0x6e060c:c.instructions+=3;goto B6e060c;
case 0x6e060e:c.instructions+=2;goto B6e060e;
case 0x6e0612:c.instructions+=1;goto B6e0612;
case 0x6e0614:goto L6e0614;
case 0x6e0616:c.instructions+=1;goto B6e0616;
case 0x6e0618:goto L6e0618;
case 0x6e061c:c.instructions+=3;goto B6e061c;
case 0x6e061e:c.instructions+=2;goto B6e061e;
case 0x6e0621:c.instructions+=1;goto B6e0621;
case 0x6e0623:goto L6e0623;
case 0x6e0627:c.instructions+=5;goto B6e0627;
case 0x6e0628:c.instructions+=4;goto B6e0628;
case 0x6e0629:c.instructions+=3;goto B6e0629;
case 0x6e062a:c.instructions+=2;goto B6e062a;
case 0x6e062b:c.instructions+=1;goto B6e062b;
case 0x6e0630:goto L6e0630;
case 0x6e0633:c.instructions+=4;goto B6e0633;
case 0x6e0634:c.instructions+=3;goto B6e0634;
case 0x6e0637:c.instructions+=2;goto B6e0637;
case 0x6e0639:c.instructions+=1;goto B6e0639;
case 0x6e063b:goto L6e063b;
case 0x6e063f:c.instructions+=2;goto B6e063f;
case 0x6e0641:c.instructions+=1;goto B6e0641;
case 0x6e0643:goto L6e0643;
case 0x6e0647:c.instructions+=10;goto B6e0647;
case 0x6e064b:c.instructions+=9;goto B6e064b;
case 0x6e064d:c.instructions+=8;goto B6e064d;
case 0x6e064f:c.instructions+=7;goto B6e064f;
case 0x6e0652:c.instructions+=6;goto B6e0652;
case 0x6e0655:c.instructions+=5;goto B6e0655;
case 0x6e0657:c.instructions+=4;goto B6e0657;
case 0x6e0659:c.instructions+=3;goto B6e0659;
case 0x6e065b:c.instructions+=2;goto B6e065b;
case 0x6e065d:c.instructions+=1;goto B6e065d;
case 0x6e0660:goto L6e0660;
case 0x6e0662:c.instructions+=6;goto B6e0662;
case 0x6e0668:c.instructions+=5;goto B6e0668;
case 0x6e066b:c.instructions+=4;goto B6e066b;
case 0x6e066d:c.instructions+=3;goto B6e066d;
case 0x6e066e:c.instructions+=2;goto B6e066e;
case 0x6e066f:c.instructions+=1;goto B6e066f;
case 0x6e0674:goto L6e0674;
case 0x6e0677:c.instructions+=3;goto B6e0677;
case 0x6e067a:c.instructions+=2;goto B6e067a;
case 0x6e067b:c.instructions+=1;goto B6e067b;
case 0x6e067d:goto L6e067d;
case 0x6e067e:c.instructions+=4;goto B6e067e;
case 0x6e067f:c.instructions+=3;goto B6e067f;
case 0x6e0680:c.instructions+=2;goto B6e0680;
case 0x6e0681:c.instructions+=1;goto B6e0681;
case 0x6e0690:goto L6e0690;
case 0x6e0696:c.instructions+=3;goto B6e0696;
case 0x6e0699:c.instructions+=2;goto B6e0699;
case 0x6e069b:c.instructions+=1;goto B6e069b;
case 0x6e069d:goto L6e069d;
case 0x6e06a0:c.instructions+=2;goto B6e06a0;
case 0x6e06a3:c.instructions+=1;goto B6e06a3;
case 0x6e06a5:goto L6e06a5;
case 0x6e06ab:c.instructions+=11;goto B6e06ab;
case 0x6e06ae:c.instructions+=10;goto B6e06ae;
case 0x6e06af:c.instructions+=9;goto B6e06af;
case 0x6e06b2:c.instructions+=8;goto B6e06b2;
case 0x6e06b5:c.instructions+=7;goto B6e06b5;
case 0x6e06b8:c.instructions+=6;goto B6e06b8;
case 0x6e06bb:c.instructions+=5;goto B6e06bb;
case 0x6e06c0:c.instructions+=4;goto B6e06c0;
case 0x6e06c3:c.instructions+=3;goto B6e06c3;
case 0x6e06c6:c.instructions+=2;goto B6e06c6;
case 0x6e06c8:c.instructions+=1;goto B6e06c8;
case 0x6e06c9:goto L6e06c9;
case 0x6e06cd:c.instructions+=10;goto B6e06cd;
case 0x6e06cf:c.instructions+=9;goto B6e06cf;
case 0x6e06d5:c.instructions+=8;goto B6e06d5;
case 0x6e06d8:c.instructions+=7;goto B6e06d8;
case 0x6e06dc:c.instructions+=6;goto B6e06dc;
case 0x6e06de:c.instructions+=5;goto B6e06de;
case 0x6e06e4:c.instructions+=4;goto B6e06e4;
case 0x6e06e7:c.instructions+=3;goto B6e06e7;
case 0x6e06eb:c.instructions+=2;goto B6e06eb;
case 0x6e06ed:c.instructions+=1;goto B6e06ed;
case 0x6e06f0:goto L6e06f0;
case 0x6e06f5:goto L6e06f5;
case 0x6e06f7:c.instructions+=1;goto B6e06f7;
case 0x6e06f9:goto L6e06f9;
case 0x6e06fe:c.instructions+=6;goto B6e06fe;
case 0x6e06ff:c.instructions+=5;goto B6e06ff;
case 0x6e0702:c.instructions+=4;goto B6e0702;
case 0x6e0707:c.instructions+=3;goto B6e0707;
case 0x6e070a:c.instructions+=2;goto B6e070a;
case 0x6e070c:c.instructions+=1;goto B6e070c;
case 0x6e070e:goto L6e070e;
case 0x6e0710:goto L6e0710;
case 0x6e0716:c.instructions+=12;goto B6e0716;
case 0x6e071c:c.instructions+=11;goto B6e071c;
case 0x6e0721:c.instructions+=10;goto B6e0721;
case 0x6e0722:c.instructions+=9;goto B6e0722;
case 0x6e0728:c.instructions+=8;goto B6e0728;
case 0x6e0729:c.instructions+=7;goto B6e0729;
case 0x6e072f:c.instructions+=6;goto B6e072f;
case 0x6e0730:c.instructions+=5;goto B6e0730;
case 0x6e0733:c.instructions+=4;goto B6e0733;
case 0x6e0734:c.instructions+=3;goto B6e0734;
case 0x6e0739:c.instructions+=2;goto B6e0739;
case 0x6e073a:c.instructions+=1;goto B6e073a;
case 0x6e073f:goto L6e073f;
case 0x6e0745:c.instructions+=6;goto B6e0745;
case 0x6e0748:c.instructions+=5;goto B6e0748;
case 0x6e074f:c.instructions+=4;goto B6e074f;
case 0x6e0750:c.instructions+=3;goto B6e0750;
case 0x6e0755:c.instructions+=2;goto B6e0755;
case 0x6e0756:c.instructions+=1;goto B6e0756;
case 0x6e075b:goto L6e075b;
case 0x6e075e:c.instructions+=1;goto B6e075e;
case 0x6e075f:goto L6e075f;
case 0x6e0760:goto L6e0760;
case 0x6e0765:goto L6e0765;
case 0x6e0767:c.instructions+=1;goto B6e0767;
case 0x6e0769:goto L6e0769;
case 0x6e076e:c.instructions+=6;goto B6e076e;
case 0x6e076f:c.instructions+=5;goto B6e076f;
case 0x6e0772:c.instructions+=4;goto B6e0772;
case 0x6e0777:c.instructions+=3;goto B6e0777;
case 0x6e077a:c.instructions+=2;goto B6e077a;
case 0x6e077c:c.instructions+=1;goto B6e077c;
case 0x6e077e:goto L6e077e;
case 0x6e0780:goto L6e0780;
case 0x6e0786:c.instructions+=12;goto B6e0786;
case 0x6e078c:c.instructions+=11;goto B6e078c;
case 0x6e0791:c.instructions+=10;goto B6e0791;
case 0x6e0792:c.instructions+=9;goto B6e0792;
case 0x6e0798:c.instructions+=8;goto B6e0798;
case 0x6e0799:c.instructions+=7;goto B6e0799;
case 0x6e079f:c.instructions+=6;goto B6e079f;
case 0x6e07a0:c.instructions+=5;goto B6e07a0;
case 0x6e07a3:c.instructions+=4;goto B6e07a3;
case 0x6e07a4:c.instructions+=3;goto B6e07a4;
case 0x6e07a9:c.instructions+=2;goto B6e07a9;
case 0x6e07aa:c.instructions+=1;goto B6e07aa;
case 0x6e07af:goto L6e07af;
case 0x6e07b5:c.instructions+=6;goto B6e07b5;
case 0x6e07b8:c.instructions+=5;goto B6e07b8;
case 0x6e07bf:c.instructions+=4;goto B6e07bf;
case 0x6e07c0:c.instructions+=3;goto B6e07c0;
case 0x6e07c5:c.instructions+=2;goto B6e07c5;
case 0x6e07c6:c.instructions+=1;goto B6e07c6;
case 0x6e07cb:goto L6e07cb;
case 0x6e07ce:c.instructions+=1;goto B6e07ce;
case 0x6e07cf:goto L6e07cf;
case 0x6e07d0:goto L6e07d0;
case 0x6e07d5:goto L6e07d5;
case 0x6e07d7:c.instructions+=1;goto B6e07d7;
case 0x6e07d9:goto L6e07d9;
case 0x6e07de:c.instructions+=6;goto B6e07de;
case 0x6e07df:c.instructions+=5;goto B6e07df;
case 0x6e07e2:c.instructions+=4;goto B6e07e2;
case 0x6e07e7:c.instructions+=3;goto B6e07e7;
case 0x6e07ea:c.instructions+=2;goto B6e07ea;
case 0x6e07ec:c.instructions+=1;goto B6e07ec;
case 0x6e07ee:goto L6e07ee;
case 0x6e07f0:goto L6e07f0;
case 0x6e07f6:c.instructions+=12;goto B6e07f6;
case 0x6e07fc:c.instructions+=11;goto B6e07fc;
case 0x6e0801:c.instructions+=10;goto B6e0801;
case 0x6e0802:c.instructions+=9;goto B6e0802;
case 0x6e0808:c.instructions+=8;goto B6e0808;
case 0x6e0809:c.instructions+=7;goto B6e0809;
case 0x6e080f:c.instructions+=6;goto B6e080f;
case 0x6e0810:c.instructions+=5;goto B6e0810;
case 0x6e0813:c.instructions+=4;goto B6e0813;
case 0x6e0814:c.instructions+=3;goto B6e0814;
case 0x6e0819:c.instructions+=2;goto B6e0819;
case 0x6e081a:c.instructions+=1;goto B6e081a;
case 0x6e081f:goto L6e081f;
case 0x6e0825:c.instructions+=6;goto B6e0825;
case 0x6e0828:c.instructions+=5;goto B6e0828;
case 0x6e082f:c.instructions+=4;goto B6e082f;
case 0x6e0830:c.instructions+=3;goto B6e0830;
case 0x6e0835:c.instructions+=2;goto B6e0835;
case 0x6e0836:c.instructions+=1;goto B6e0836;
case 0x6e083b:goto L6e083b;
case 0x6e083e:c.instructions+=1;goto B6e083e;
case 0x6e083f:goto L6e083f;
case 0x6e0840:goto L6e0840;
case 0x6e0845:goto L6e0845;
case 0x6e0847:c.instructions+=1;goto B6e0847;
case 0x6e0849:goto L6e0849;
case 0x6e084e:c.instructions+=12;goto B6e084e;
case 0x6e0854:c.instructions+=11;goto B6e0854;
case 0x6e085a:c.instructions+=10;goto B6e085a;
case 0x6e085b:c.instructions+=9;goto B6e085b;
case 0x6e0860:c.instructions+=8;goto B6e0860;
case 0x6e0861:c.instructions+=7;goto B6e0861;
case 0x6e0867:c.instructions+=6;goto B6e0867;
case 0x6e0868:c.instructions+=5;goto B6e0868;
case 0x6e086b:c.instructions+=4;goto B6e086b;
case 0x6e086c:c.instructions+=3;goto B6e086c;
case 0x6e0871:c.instructions+=2;goto B6e0871;
case 0x6e0872:c.instructions+=1;goto B6e0872;
case 0x6e0877:goto L6e0877;
case 0x6e087c:c.instructions+=5;goto B6e087c;
case 0x6e0882:c.instructions+=4;goto B6e0882;
case 0x6e0884:c.instructions+=3;goto B6e0884;
case 0x6e0887:c.instructions+=2;goto B6e0887;
case 0x6e0889:c.instructions+=1;goto B6e0889;
case 0x6e088b:goto L6e088b;
case 0x6e088c:c.instructions+=3;goto B6e088c;
case 0x6e088d:c.instructions+=2;goto B6e088d;
case 0x6e0892:c.instructions+=1;goto B6e0892;
case 0x6e0894:goto L6e0894;
case 0x6e0895:c.instructions+=2;goto B6e0895;
case 0x6e0896:c.instructions+=1;goto B6e0896;
case 0x6e089b:goto L6e089b;
case 0x6e089e:c.instructions+=2;goto B6e089e;
case 0x6e089f:c.instructions+=1;goto B6e089f;
case 0x6e08a1:goto L6e08a1;
case 0x6e08a2:c.instructions+=1;goto B6e08a2;
case 0x6e08a3:goto L6e08a3;
case 0x6e08b0:goto L6e08b0;
case 0x6e08b5:goto L6e08b5;
case 0x6e08b7:c.instructions+=1;goto B6e08b7;
case 0x6e08b9:goto L6e08b9;
case 0x6e08be:c.instructions+=12;goto B6e08be;
case 0x6e08c4:c.instructions+=11;goto B6e08c4;
case 0x6e08ca:c.instructions+=10;goto B6e08ca;
case 0x6e08cb:c.instructions+=9;goto B6e08cb;
case 0x6e08d0:c.instructions+=8;goto B6e08d0;
case 0x6e08d1:c.instructions+=7;goto B6e08d1;
case 0x6e08d7:c.instructions+=6;goto B6e08d7;
case 0x6e08d8:c.instructions+=5;goto B6e08d8;
case 0x6e08db:c.instructions+=4;goto B6e08db;
case 0x6e08dc:c.instructions+=3;goto B6e08dc;
case 0x6e08e1:c.instructions+=2;goto B6e08e1;
case 0x6e08e2:c.instructions+=1;goto B6e08e2;
case 0x6e08e7:goto L6e08e7;
case 0x6e08ec:c.instructions+=5;goto B6e08ec;
case 0x6e08f2:c.instructions+=4;goto B6e08f2;
case 0x6e08f4:c.instructions+=3;goto B6e08f4;
case 0x6e08f7:c.instructions+=2;goto B6e08f7;
case 0x6e08f9:c.instructions+=1;goto B6e08f9;
case 0x6e08fb:goto L6e08fb;
case 0x6e08fc:c.instructions+=3;goto B6e08fc;
case 0x6e08fd:c.instructions+=2;goto B6e08fd;
case 0x6e0902:c.instructions+=1;goto B6e0902;
case 0x6e0904:goto L6e0904;
case 0x6e0905:c.instructions+=2;goto B6e0905;
case 0x6e0906:c.instructions+=1;goto B6e0906;
case 0x6e090b:goto L6e090b;
case 0x6e090e:c.instructions+=2;goto B6e090e;
case 0x6e090f:c.instructions+=1;goto B6e090f;
case 0x6e0911:goto L6e0911;
case 0x6e0912:c.instructions+=1;goto B6e0912;
case 0x6e0913:goto L6e0913;
case 0x6e0920:goto L6e0920;
case 0x6e0925:goto L6e0925;
case 0x6e0927:c.instructions+=1;goto B6e0927;
case 0x6e0929:goto L6e0929;
case 0x6e092e:c.instructions+=12;goto B6e092e;
case 0x6e0934:c.instructions+=11;goto B6e0934;
case 0x6e093a:c.instructions+=10;goto B6e093a;
case 0x6e093b:c.instructions+=9;goto B6e093b;
case 0x6e0940:c.instructions+=8;goto B6e0940;
case 0x6e0941:c.instructions+=7;goto B6e0941;
case 0x6e0947:c.instructions+=6;goto B6e0947;
case 0x6e0948:c.instructions+=5;goto B6e0948;
case 0x6e094b:c.instructions+=4;goto B6e094b;
case 0x6e094c:c.instructions+=3;goto B6e094c;
case 0x6e0951:c.instructions+=2;goto B6e0951;
case 0x6e0952:c.instructions+=1;goto B6e0952;
case 0x6e0957:goto L6e0957;
case 0x6e095c:c.instructions+=5;goto B6e095c;
case 0x6e0962:c.instructions+=4;goto B6e0962;
case 0x6e0964:c.instructions+=3;goto B6e0964;
case 0x6e0967:c.instructions+=2;goto B6e0967;
case 0x6e0969:c.instructions+=1;goto B6e0969;
case 0x6e096b:goto L6e096b;
case 0x6e096c:c.instructions+=3;goto B6e096c;
case 0x6e096d:c.instructions+=2;goto B6e096d;
case 0x6e0972:c.instructions+=1;goto B6e0972;
case 0x6e0974:goto L6e0974;
case 0x6e0975:c.instructions+=2;goto B6e0975;
case 0x6e0976:c.instructions+=1;goto B6e0976;
case 0x6e097b:goto L6e097b;
case 0x6e097e:c.instructions+=2;goto B6e097e;
case 0x6e097f:c.instructions+=1;goto B6e097f;
case 0x6e0981:goto L6e0981;
case 0x6e0982:c.instructions+=1;goto B6e0982;
case 0x6e0983:goto L6e0983;
case 0x6e0990:goto L6e0990;
case 0x6e0991:c.instructions+=7;goto B6e0991;
case 0x6e0993:c.instructions+=6;goto B6e0993;
case 0x6e0996:c.instructions+=5;goto B6e0996;
case 0x6e0999:c.instructions+=4;goto B6e0999;
case 0x6e099a:c.instructions+=3;goto B6e099a;
case 0x6e099b:c.instructions+=2;goto B6e099b;
case 0x6e099c:c.instructions+=1;goto B6e099c;
case 0x6e09a1:goto L6e09a1;
case 0x6e09a3:c.instructions+=1;goto B6e09a3;
case 0x6e09a9:goto L6e09a9;
case 0x6e09ab:c.instructions+=8;goto B6e09ab;
case 0x6e09af:c.instructions+=7;goto B6e09af;
case 0x6e09b0:c.instructions+=6;goto B6e09b0;
case 0x6e09b4:c.instructions+=5;goto B6e09b4;
case 0x6e09b5:c.instructions+=4;goto B6e09b5;
case 0x6e09b9:c.instructions+=3;goto B6e09b9;
case 0x6e09ba:c.instructions+=2;goto B6e09ba;
case 0x6e09c2:c.instructions+=1;goto B6e09c2;
case 0x6e09c7:goto L6e09c7;
case 0x6e09cb:c.instructions+=11;goto B6e09cb;
case 0x6e09ce:c.instructions+=10;goto B6e09ce;
case 0x6e09d0:c.instructions+=9;goto B6e09d0;
case 0x6e09d3:c.instructions+=8;goto B6e09d3;
case 0x6e09d6:c.instructions+=7;goto B6e09d6;
case 0x6e09d7:c.instructions+=6;goto B6e09d7;
case 0x6e09db:c.instructions+=5;goto B6e09db;
case 0x6e09dc:c.instructions+=4;goto B6e09dc;
case 0x6e09dd:c.instructions+=3;goto B6e09dd;
case 0x6e09e1:c.instructions+=2;goto B6e09e1;
case 0x6e09e3:c.instructions+=1;goto B6e09e3;
case 0x6e09e8:goto L6e09e8;
case 0x6e09ee:c.instructions+=5;goto B6e09ee;
case 0x6e09f3:c.instructions+=4;goto B6e09f3;
case 0x6e09f6:c.instructions+=3;goto B6e09f6;
case 0x6e09fb:c.instructions+=2;goto B6e09fb;
case 0x6e09fd:c.instructions+=1;goto B6e09fd;
case 0x6e0a03:goto L6e0a03;
case 0x6e0a05:c.instructions+=1;goto B6e0a05;
case 0x6e0a0b:goto L6e0a0b;
case 0x6e0a0f:c.instructions+=2;goto B6e0a0f;
case 0x6e0a12:c.instructions+=1;goto B6e0a12;
case 0x6e0a16:goto L6e0a16;
case 0x6e0a1a:c.instructions+=59;goto B6e0a1a;
case 0x6e0a1c:c.instructions+=58;goto B6e0a1c;
case 0x6e0a1f:c.instructions+=57;goto B6e0a1f;
case 0x6e0a22:c.instructions+=56;goto B6e0a22;
case 0x6e0a26:c.instructions+=55;goto B6e0a26;
case 0x6e0a2a:c.instructions+=54;goto B6e0a2a;
case 0x6e0a30:c.instructions+=53;goto B6e0a30;
case 0x6e0a33:c.instructions+=52;goto B6e0a33;
case 0x6e0a36:c.instructions+=51;goto B6e0a36;
case 0x6e0a3b:c.instructions+=50;goto B6e0a3b;
case 0x6e0a3f:c.instructions+=49;goto B6e0a3f;
case 0x6e0a43:c.instructions+=48;goto B6e0a43;
case 0x6e0a46:c.instructions+=47;goto B6e0a46;
case 0x6e0a4a:c.instructions+=46;goto B6e0a4a;
case 0x6e0a4d:c.instructions+=45;goto B6e0a4d;
case 0x6e0a51:c.instructions+=44;goto B6e0a51;
case 0x6e0a57:c.instructions+=43;goto B6e0a57;
case 0x6e0a5a:c.instructions+=42;goto B6e0a5a;
case 0x6e0a5e:c.instructions+=41;goto B6e0a5e;
case 0x6e0a64:c.instructions+=40;goto B6e0a64;
case 0x6e0a66:c.instructions+=39;goto B6e0a66;
case 0x6e0a6a:c.instructions+=38;goto B6e0a6a;
case 0x6e0a6e:c.instructions+=37;goto B6e0a6e;
case 0x6e0a71:c.instructions+=36;goto B6e0a71;
case 0x6e0a75:c.instructions+=35;goto B6e0a75;
case 0x6e0a78:c.instructions+=34;goto B6e0a78;
case 0x6e0a7b:c.instructions+=33;goto B6e0a7b;
case 0x6e0a7e:c.instructions+=32;goto B6e0a7e;
case 0x6e0a81:c.instructions+=31;goto B6e0a81;
case 0x6e0a85:c.instructions+=30;goto B6e0a85;
case 0x6e0a8b:c.instructions+=29;goto B6e0a8b;
case 0x6e0a8e:c.instructions+=28;goto B6e0a8e;
case 0x6e0a92:c.instructions+=27;goto B6e0a92;
case 0x6e0a95:c.instructions+=26;goto B6e0a95;
case 0x6e0a98:c.instructions+=25;goto B6e0a98;
case 0x6e0a9b:c.instructions+=24;goto B6e0a9b;
case 0x6e0a9f:c.instructions+=23;goto B6e0a9f;
case 0x6e0aa5:c.instructions+=22;goto B6e0aa5;
case 0x6e0aa9:c.instructions+=21;goto B6e0aa9;
case 0x6e0aac:c.instructions+=20;goto B6e0aac;
case 0x6e0ab0:c.instructions+=19;goto B6e0ab0;
case 0x6e0ab6:c.instructions+=18;goto B6e0ab6;
case 0x6e0aba:c.instructions+=17;goto B6e0aba;
case 0x6e0abd:c.instructions+=16;goto B6e0abd;
case 0x6e0ac0:c.instructions+=15;goto B6e0ac0;
case 0x6e0ac3:c.instructions+=14;goto B6e0ac3;
case 0x6e0ac6:c.instructions+=13;goto B6e0ac6;
case 0x6e0ac9:c.instructions+=12;goto B6e0ac9;
case 0x6e0acc:c.instructions+=11;goto B6e0acc;
case 0x6e0ace:c.instructions+=10;goto B6e0ace;
case 0x6e0ad2:c.instructions+=9;goto B6e0ad2;
case 0x6e0ad7:c.instructions+=8;goto B6e0ad7;
case 0x6e0adc:c.instructions+=7;goto B6e0adc;
case 0x6e0ae0:c.instructions+=6;goto B6e0ae0;
case 0x6e0ae4:c.instructions+=5;goto B6e0ae4;
case 0x6e0ae7:c.instructions+=4;goto B6e0ae7;
case 0x6e0aea:c.instructions+=3;goto B6e0aea;
case 0x6e0aee:c.instructions+=2;goto B6e0aee;
case 0x6e0af3:c.instructions+=1;goto B6e0af3;
case 0x6e0af7:goto L6e0af7;
case 0x6e0af9:goto L6e0af9;
case 0x6e0afd:c.instructions+=11;goto B6e0afd;
case 0x6e0b01:c.instructions+=10;goto B6e0b01;
case 0x6e0b04:c.instructions+=9;goto B6e0b04;
case 0x6e0b07:c.instructions+=8;goto B6e0b07;
case 0x6e0b09:c.instructions+=7;goto B6e0b09;
case 0x6e0b0c:c.instructions+=6;goto B6e0b0c;
case 0x6e0b0d:c.instructions+=5;goto B6e0b0d;
case 0x6e0b0f:c.instructions+=4;goto B6e0b0f;
case 0x6e0b13:c.instructions+=3;goto B6e0b13;
case 0x6e0b17:c.instructions+=2;goto B6e0b17;
case 0x6e0b1b:c.instructions+=1;goto B6e0b1b;
case 0x6e0b21:goto L6e0b21;
case 0x6e0b25:c.instructions+=1;goto B6e0b25;
case 0x6e0b2a:goto L6e0b2a;
case 0x6e0b2f:c.instructions+=1;goto B6e0b2f;
case 0x6e0b34:goto L6e0b34;
case 0x6e0b39:c.instructions+=2;goto B6e0b39;
case 0x6e0b3b:c.instructions+=1;goto B6e0b3b;
case 0x6e0b41:goto L6e0b41;
case 0x6e0b43:c.instructions+=1;goto B6e0b43;
case 0x6e0b49:goto L6e0b49;
case 0x6e0b4d:c.instructions+=3;goto B6e0b4d;
case 0x6e0b51:c.instructions+=2;goto B6e0b51;
case 0x6e0b54:c.instructions+=1;goto B6e0b54;
case 0x6e0b58:goto L6e0b58;
case 0x6e0b5a:c.instructions+=91;goto B6e0b5a;
case 0x6e0b5c:c.instructions+=90;goto B6e0b5c;
case 0x6e0b5f:c.instructions+=89;goto B6e0b5f;
case 0x6e0b63:c.instructions+=88;goto B6e0b63;
case 0x6e0b66:c.instructions+=87;goto B6e0b66;
case 0x6e0b69:c.instructions+=86;goto B6e0b69;
case 0x6e0b6c:c.instructions+=85;goto B6e0b6c;
case 0x6e0b6f:c.instructions+=84;goto B6e0b6f;
case 0x6e0b72:c.instructions+=83;goto B6e0b72;
case 0x6e0b75:c.instructions+=82;goto B6e0b75;
case 0x6e0b78:c.instructions+=81;goto B6e0b78;
case 0x6e0b7b:c.instructions+=80;goto B6e0b7b;
case 0x6e0b7e:c.instructions+=79;goto B6e0b7e;
case 0x6e0b81:c.instructions+=78;goto B6e0b81;
case 0x6e0b84:c.instructions+=77;goto B6e0b84;
case 0x6e0b87:c.instructions+=76;goto B6e0b87;
case 0x6e0b8a:c.instructions+=75;goto B6e0b8a;
case 0x6e0b8d:c.instructions+=74;goto B6e0b8d;
case 0x6e0b90:c.instructions+=73;goto B6e0b90;
case 0x6e0b95:c.instructions+=72;goto B6e0b95;
case 0x6e0b99:c.instructions+=71;goto B6e0b99;
case 0x6e0b9d:c.instructions+=70;goto B6e0b9d;
case 0x6e0ba0:c.instructions+=69;goto B6e0ba0;
case 0x6e0ba4:c.instructions+=68;goto B6e0ba4;
case 0x6e0ba8:c.instructions+=67;goto B6e0ba8;
case 0x6e0bac:c.instructions+=66;goto B6e0bac;
case 0x6e0bb0:c.instructions+=65;goto B6e0bb0;
case 0x6e0bb4:c.instructions+=64;goto B6e0bb4;
case 0x6e0bb8:c.instructions+=63;goto B6e0bb8;
case 0x6e0bbc:c.instructions+=62;goto B6e0bbc;
case 0x6e0bbf:c.instructions+=61;goto B6e0bbf;
case 0x6e0bc3:c.instructions+=60;goto B6e0bc3;
case 0x6e0bc7:c.instructions+=59;goto B6e0bc7;
case 0x6e0bcb:c.instructions+=58;goto B6e0bcb;
case 0x6e0bcf:c.instructions+=57;goto B6e0bcf;
case 0x6e0bd3:c.instructions+=56;goto B6e0bd3;
case 0x6e0bd7:c.instructions+=55;goto B6e0bd7;
case 0x6e0bdb:c.instructions+=54;goto B6e0bdb;
case 0x6e0bdf:c.instructions+=53;goto B6e0bdf;
case 0x6e0be3:c.instructions+=52;goto B6e0be3;
case 0x6e0be7:c.instructions+=51;goto B6e0be7;
case 0x6e0beb:c.instructions+=50;goto B6e0beb;
case 0x6e0bef:c.instructions+=49;goto B6e0bef;
case 0x6e0bf2:c.instructions+=48;goto B6e0bf2;
case 0x6e0bf5:c.instructions+=47;goto B6e0bf5;
case 0x6e0bf9:c.instructions+=46;goto B6e0bf9;
case 0x6e0bfb:c.instructions+=45;goto B6e0bfb;
case 0x6e0bfe:c.instructions+=44;goto B6e0bfe;
case 0x6e0c01:c.instructions+=43;goto B6e0c01;
case 0x6e0c04:c.instructions+=42;goto B6e0c04;
case 0x6e0c07:c.instructions+=41;goto B6e0c07;
case 0x6e0c0a:c.instructions+=40;goto B6e0c0a;
case 0x6e0c0d:c.instructions+=39;goto B6e0c0d;
case 0x6e0c0f:c.instructions+=38;goto B6e0c0f;
case 0x6e0c12:c.instructions+=37;goto B6e0c12;
case 0x6e0c15:c.instructions+=36;goto B6e0c15;
case 0x6e0c18:c.instructions+=35;goto B6e0c18;
case 0x6e0c1b:c.instructions+=34;goto B6e0c1b;
case 0x6e0c1e:c.instructions+=33;goto B6e0c1e;
case 0x6e0c21:c.instructions+=32;goto B6e0c21;
case 0x6e0c24:c.instructions+=31;goto B6e0c24;
case 0x6e0c28:c.instructions+=30;goto B6e0c28;
case 0x6e0c2c:c.instructions+=29;goto B6e0c2c;
case 0x6e0c30:c.instructions+=28;goto B6e0c30;
case 0x6e0c34:c.instructions+=27;goto B6e0c34;
case 0x6e0c38:c.instructions+=26;goto B6e0c38;
case 0x6e0c3c:c.instructions+=25;goto B6e0c3c;
case 0x6e0c40:c.instructions+=24;goto B6e0c40;
case 0x6e0c44:c.instructions+=23;goto B6e0c44;
case 0x6e0c48:c.instructions+=22;goto B6e0c48;
case 0x6e0c4c:c.instructions+=21;goto B6e0c4c;
case 0x6e0c50:c.instructions+=20;goto B6e0c50;
case 0x6e0c54:c.instructions+=19;goto B6e0c54;
case 0x6e0c58:c.instructions+=18;goto B6e0c58;
case 0x6e0c5c:c.instructions+=17;goto B6e0c5c;
case 0x6e0c60:c.instructions+=16;goto B6e0c60;
case 0x6e0c64:c.instructions+=15;goto B6e0c64;
case 0x6e0c68:c.instructions+=14;goto B6e0c68;
case 0x6e0c6c:c.instructions+=13;goto B6e0c6c;
case 0x6e0c70:c.instructions+=12;goto B6e0c70;
case 0x6e0c73:c.instructions+=11;goto B6e0c73;
case 0x6e0c76:c.instructions+=10;goto B6e0c76;
case 0x6e0c78:c.instructions+=9;goto B6e0c78;
case 0x6e0c7b:c.instructions+=8;goto B6e0c7b;
case 0x6e0c7f:c.instructions+=7;goto B6e0c7f;
case 0x6e0c83:c.instructions+=6;goto B6e0c83;
case 0x6e0c85:c.instructions+=5;goto B6e0c85;
case 0x6e0c88:c.instructions+=4;goto B6e0c88;
case 0x6e0c89:c.instructions+=3;goto B6e0c89;
case 0x6e0c8d:c.instructions+=2;goto B6e0c8d;
case 0x6e0c91:c.instructions+=1;goto B6e0c91;
case 0x6e0c97:goto L6e0c97;
case 0x6e0c9b:c.instructions+=1;goto B6e0c9b;
case 0x6e0ca0:goto L6e0ca0;
case 0x6e0ca5:c.instructions+=1;goto B6e0ca5;
case 0x6e0caa:goto L6e0caa;
case 0x6e0cac:c.instructions+=1;goto B6e0cac;
case 0x6e0cb2:goto L6e0cb2;
case 0x6e0cb6:c.instructions+=3;goto B6e0cb6;
case 0x6e0cba:c.instructions+=2;goto B6e0cba;
case 0x6e0cbe:c.instructions+=1;goto B6e0cbe;
case 0x6e0cc0:goto L6e0cc0;
case 0x6e0cc3:c.instructions+=8;goto B6e0cc3;
case 0x6e0cc6:c.instructions+=7;goto B6e0cc6;
case 0x6e0ccb:c.instructions+=6;goto B6e0ccb;
case 0x6e0ccc:c.instructions+=5;goto B6e0ccc;
case 0x6e0ccd:c.instructions+=4;goto B6e0ccd;
case 0x6e0cce:c.instructions+=3;goto B6e0cce;
case 0x6e0cd2:c.instructions+=2;goto B6e0cd2;
case 0x6e0cd4:c.instructions+=1;goto B6e0cd4;
case 0x6e0cd9:goto L6e0cd9;
case 0x6e0cdc:c.instructions+=47;goto B6e0cdc;
case 0x6e0cdf:c.instructions+=46;goto B6e0cdf;
case 0x6e0ce2:c.instructions+=45;goto B6e0ce2;
case 0x6e0ce6:c.instructions+=44;goto B6e0ce6;
case 0x6e0cea:c.instructions+=43;goto B6e0cea;
case 0x6e0cee:c.instructions+=42;goto B6e0cee;
case 0x6e0cf2:c.instructions+=41;goto B6e0cf2;
case 0x6e0cf6:c.instructions+=40;goto B6e0cf6;
case 0x6e0cf8:c.instructions+=39;goto B6e0cf8;
case 0x6e0cfb:c.instructions+=38;goto B6e0cfb;
case 0x6e0cfd:c.instructions+=37;goto B6e0cfd;
case 0x6e0d00:c.instructions+=36;goto B6e0d00;
case 0x6e0d02:c.instructions+=35;goto B6e0d02;
case 0x6e0d04:c.instructions+=34;goto B6e0d04;
case 0x6e0d07:c.instructions+=33;goto B6e0d07;
case 0x6e0d0a:c.instructions+=32;goto B6e0d0a;
case 0x6e0d0d:c.instructions+=31;goto B6e0d0d;
case 0x6e0d10:c.instructions+=30;goto B6e0d10;
case 0x6e0d13:c.instructions+=29;goto B6e0d13;
case 0x6e0d16:c.instructions+=28;goto B6e0d16;
case 0x6e0d18:c.instructions+=27;goto B6e0d18;
case 0x6e0d1a:c.instructions+=26;goto B6e0d1a;
case 0x6e0d1c:c.instructions+=25;goto B6e0d1c;
case 0x6e0d1e:c.instructions+=24;goto B6e0d1e;
case 0x6e0d21:c.instructions+=23;goto B6e0d21;
case 0x6e0d24:c.instructions+=22;goto B6e0d24;
case 0x6e0d27:c.instructions+=21;goto B6e0d27;
case 0x6e0d2a:c.instructions+=20;goto B6e0d2a;
case 0x6e0d2d:c.instructions+=19;goto B6e0d2d;
case 0x6e0d30:c.instructions+=18;goto B6e0d30;
case 0x6e0d32:c.instructions+=17;goto B6e0d32;
case 0x6e0d34:c.instructions+=16;goto B6e0d34;
case 0x6e0d36:c.instructions+=15;goto B6e0d36;
case 0x6e0d38:c.instructions+=14;goto B6e0d38;
case 0x6e0d3a:c.instructions+=13;goto B6e0d3a;
case 0x6e0d3c:c.instructions+=12;goto B6e0d3c;
case 0x6e0d3e:c.instructions+=11;goto B6e0d3e;
case 0x6e0d40:c.instructions+=10;goto B6e0d40;
case 0x6e0d43:c.instructions+=9;goto B6e0d43;
case 0x6e0d46:c.instructions+=8;goto B6e0d46;
case 0x6e0d4a:c.instructions+=7;goto B6e0d4a;
case 0x6e0d4e:c.instructions+=6;goto B6e0d4e;
case 0x6e0d50:c.instructions+=5;goto B6e0d50;
case 0x6e0d53:c.instructions+=4;goto B6e0d53;
case 0x6e0d54:c.instructions+=3;goto B6e0d54;
case 0x6e0d58:c.instructions+=2;goto B6e0d58;
case 0x6e0d5c:c.instructions+=1;goto B6e0d5c;
case 0x6e0d62:goto L6e0d62;
case 0x6e0d66:c.instructions+=1;goto B6e0d66;
case 0x6e0d6b:goto L6e0d6b;
case 0x6e0d70:c.instructions+=1;goto B6e0d70;
case 0x6e0d72:goto L6e0d72;
case 0x6e0d77:c.instructions+=4;goto B6e0d77;
case 0x6e0d7a:c.instructions+=3;goto B6e0d7a;
case 0x6e0d7d:c.instructions+=2;goto B6e0d7d;
case 0x6e0d81:c.instructions+=1;goto B6e0d81;
case 0x6e0d87:goto L6e0d87;
case 0x6e0d8b:c.instructions+=4;goto B6e0d8b;
case 0x6e0d8e:c.instructions+=3;goto B6e0d8e;
case 0x6e0d8f:c.instructions+=2;goto B6e0d8f;
case 0x6e0d90:c.instructions+=1;goto B6e0d90;
case 0x6e0d95:goto L6e0d95;
case 0x6e0d98:c.instructions+=6;goto B6e0d98;
case 0x6e0d99:c.instructions+=5;goto B6e0d99;
case 0x6e0d9a:c.instructions+=4;goto B6e0d9a;
case 0x6e0d9b:c.instructions+=3;goto B6e0d9b;
case 0x6e0d9d:c.instructions+=2;goto B6e0d9d;
case 0x6e0d9e:c.instructions+=1;goto B6e0d9e;
case 0x6e0da0:goto L6e0da0;
case 0x6e0da1:c.instructions+=7;goto B6e0da1;
case 0x6e0da3:c.instructions+=6;goto B6e0da3;
case 0x6e0da6:c.instructions+=5;goto B6e0da6;
case 0x6e0da9:c.instructions+=4;goto B6e0da9;
case 0x6e0daa:c.instructions+=3;goto B6e0daa;
case 0x6e0dab:c.instructions+=2;goto B6e0dab;
case 0x6e0dac:c.instructions+=1;goto B6e0dac;
case 0x6e0db1:goto L6e0db1;
case 0x6e0db3:c.instructions+=1;goto B6e0db3;
case 0x6e0db9:goto L6e0db9;
case 0x6e0dbb:c.instructions+=8;goto B6e0dbb;
case 0x6e0dbf:c.instructions+=7;goto B6e0dbf;
case 0x6e0dc0:c.instructions+=6;goto B6e0dc0;
case 0x6e0dc4:c.instructions+=5;goto B6e0dc4;
case 0x6e0dc5:c.instructions+=4;goto B6e0dc5;
case 0x6e0dc9:c.instructions+=3;goto B6e0dc9;
case 0x6e0dca:c.instructions+=2;goto B6e0dca;
case 0x6e0dd2:c.instructions+=1;goto B6e0dd2;
case 0x6e0dd7:goto L6e0dd7;
case 0x6e0ddb:c.instructions+=11;goto B6e0ddb;
case 0x6e0dde:c.instructions+=10;goto B6e0dde;
case 0x6e0de0:c.instructions+=9;goto B6e0de0;
case 0x6e0de3:c.instructions+=8;goto B6e0de3;
case 0x6e0de6:c.instructions+=7;goto B6e0de6;
case 0x6e0de7:c.instructions+=6;goto B6e0de7;
case 0x6e0deb:c.instructions+=5;goto B6e0deb;
case 0x6e0dec:c.instructions+=4;goto B6e0dec;
case 0x6e0ded:c.instructions+=3;goto B6e0ded;
case 0x6e0df1:c.instructions+=2;goto B6e0df1;
case 0x6e0df3:c.instructions+=1;goto B6e0df3;
case 0x6e0df8:goto L6e0df8;
case 0x6e0dfe:c.instructions+=5;goto B6e0dfe;
case 0x6e0e03:c.instructions+=4;goto B6e0e03;
case 0x6e0e06:c.instructions+=3;goto B6e0e06;
case 0x6e0e0b:c.instructions+=2;goto B6e0e0b;
case 0x6e0e0d:c.instructions+=1;goto B6e0e0d;
case 0x6e0e13:goto L6e0e13;
case 0x6e0e15:c.instructions+=1;goto B6e0e15;
case 0x6e0e1b:goto L6e0e1b;
case 0x6e0e1e:c.instructions+=1;goto B6e0e1e;
case 0x6e0e22:goto L6e0e22;
case 0x6e0e25:c.instructions+=34;goto B6e0e25;
case 0x6e0e28:c.instructions+=33;goto B6e0e28;
case 0x6e0e2c:c.instructions+=32;goto B6e0e2c;
case 0x6e0e2f:c.instructions+=31;goto B6e0e2f;
case 0x6e0e35:c.instructions+=30;goto B6e0e35;
case 0x6e0e38:c.instructions+=29;goto B6e0e38;
case 0x6e0e3d:c.instructions+=28;goto B6e0e3d;
case 0x6e0e41:c.instructions+=27;goto B6e0e41;
case 0x6e0e45:c.instructions+=26;goto B6e0e45;
case 0x6e0e48:c.instructions+=25;goto B6e0e48;
case 0x6e0e4c:c.instructions+=24;goto B6e0e4c;
case 0x6e0e4f:c.instructions+=23;goto B6e0e4f;
case 0x6e0e53:c.instructions+=22;goto B6e0e53;
case 0x6e0e55:c.instructions+=21;goto B6e0e55;
case 0x6e0e5b:c.instructions+=20;goto B6e0e5b;
case 0x6e0e5e:c.instructions+=19;goto B6e0e5e;
case 0x6e0e62:c.instructions+=18;goto B6e0e62;
case 0x6e0e66:c.instructions+=17;goto B6e0e66;
case 0x6e0e6a:c.instructions+=16;goto B6e0e6a;
case 0x6e0e6e:c.instructions+=15;goto B6e0e6e;
case 0x6e0e71:c.instructions+=14;goto B6e0e71;
case 0x6e0e77:c.instructions+=13;goto B6e0e77;
case 0x6e0e7b:c.instructions+=12;goto B6e0e7b;
case 0x6e0e7e:c.instructions+=11;goto B6e0e7e;
case 0x6e0e81:c.instructions+=10;goto B6e0e81;
case 0x6e0e84:c.instructions+=9;goto B6e0e84;
case 0x6e0e87:c.instructions+=8;goto B6e0e87;
case 0x6e0e8b:c.instructions+=7;goto B6e0e8b;
case 0x6e0e8d:c.instructions+=6;goto B6e0e8d;
case 0x6e0e8f:c.instructions+=5;goto B6e0e8f;
case 0x6e0e90:c.instructions+=4;goto B6e0e90;
case 0x6e0e92:c.instructions+=3;goto B6e0e92;
case 0x6e0e94:c.instructions+=2;goto B6e0e94;
case 0x6e0e98:c.instructions+=1;goto B6e0e98;
case 0x6e0e9a:goto L6e0e9a;
case 0x6e0e9e:c.instructions+=1;goto B6e0e9e;
case 0x6e0ea3:goto L6e0ea3;
case 0x6e0ea8:c.instructions+=1;goto B6e0ea8;
case 0x6e0ead:goto L6e0ead;
case 0x6e0eb2:c.instructions+=2;goto B6e0eb2;
case 0x6e0eb4:c.instructions+=1;goto B6e0eb4;
case 0x6e0eba:goto L6e0eba;
case 0x6e0ebc:c.instructions+=1;goto B6e0ebc;
case 0x6e0ec2:goto L6e0ec2;
case 0x6e0ec6:goto L6e0ec6;
case 0x6e0ec8:c.instructions+=49;goto B6e0ec8;
case 0x6e0ecb:c.instructions+=48;goto B6e0ecb;
case 0x6e0ecd:c.instructions+=47;goto B6e0ecd;
case 0x6e0ed1:c.instructions+=46;goto B6e0ed1;
case 0x6e0ed4:c.instructions+=45;goto B6e0ed4;
case 0x6e0ed7:c.instructions+=44;goto B6e0ed7;
case 0x6e0eda:c.instructions+=43;goto B6e0eda;
case 0x6e0edd:c.instructions+=42;goto B6e0edd;
case 0x6e0ee0:c.instructions+=41;goto B6e0ee0;
case 0x6e0ee3:c.instructions+=40;goto B6e0ee3;
case 0x6e0ee6:c.instructions+=39;goto B6e0ee6;
case 0x6e0ee9:c.instructions+=38;goto B6e0ee9;
case 0x6e0eec:c.instructions+=37;goto B6e0eec;
case 0x6e0eef:c.instructions+=36;goto B6e0eef;
case 0x6e0ef2:c.instructions+=35;goto B6e0ef2;
case 0x6e0ef5:c.instructions+=34;goto B6e0ef5;
case 0x6e0ef8:c.instructions+=33;goto B6e0ef8;
case 0x6e0efb:c.instructions+=32;goto B6e0efb;
case 0x6e0efe:c.instructions+=31;goto B6e0efe;
case 0x6e0f01:c.instructions+=30;goto B6e0f01;
case 0x6e0f06:c.instructions+=29;goto B6e0f06;
case 0x6e0f0a:c.instructions+=28;goto B6e0f0a;
case 0x6e0f0e:c.instructions+=27;goto B6e0f0e;
case 0x6e0f11:c.instructions+=26;goto B6e0f11;
case 0x6e0f15:c.instructions+=25;goto B6e0f15;
case 0x6e0f19:c.instructions+=24;goto B6e0f19;
case 0x6e0f1d:c.instructions+=23;goto B6e0f1d;
case 0x6e0f21:c.instructions+=22;goto B6e0f21;
case 0x6e0f25:c.instructions+=21;goto B6e0f25;
case 0x6e0f29:c.instructions+=20;goto B6e0f29;
case 0x6e0f2d:c.instructions+=19;goto B6e0f2d;
case 0x6e0f30:c.instructions+=18;goto B6e0f30;
case 0x6e0f34:c.instructions+=17;goto B6e0f34;
case 0x6e0f38:c.instructions+=16;goto B6e0f38;
case 0x6e0f3c:c.instructions+=15;goto B6e0f3c;
case 0x6e0f40:c.instructions+=14;goto B6e0f40;
case 0x6e0f44:c.instructions+=13;goto B6e0f44;
case 0x6e0f48:c.instructions+=12;goto B6e0f48;
case 0x6e0f4c:c.instructions+=11;goto B6e0f4c;
case 0x6e0f50:c.instructions+=10;goto B6e0f50;
case 0x6e0f54:c.instructions+=9;goto B6e0f54;
case 0x6e0f58:c.instructions+=8;goto B6e0f58;
case 0x6e0f5c:c.instructions+=7;goto B6e0f5c;
case 0x6e0f60:c.instructions+=6;goto B6e0f60;
case 0x6e0f62:c.instructions+=5;goto B6e0f62;
case 0x6e0f64:c.instructions+=4;goto B6e0f64;
case 0x6e0f65:c.instructions+=3;goto B6e0f65;
case 0x6e0f67:c.instructions+=2;goto B6e0f67;
case 0x6e0f6b:c.instructions+=1;goto B6e0f6b;
case 0x6e0f71:goto L6e0f71;
case 0x6e0f75:c.instructions+=1;goto B6e0f75;
case 0x6e0f7a:goto L6e0f7a;
case 0x6e0f7f:c.instructions+=1;goto B6e0f7f;
case 0x6e0f81:goto L6e0f81;
case 0x6e0f83:c.instructions+=1;goto B6e0f83;
case 0x6e0f85:goto L6e0f85;
case 0x6e0f87:c.instructions+=2;goto B6e0f87;
case 0x6e0f8b:c.instructions+=1;goto B6e0f8b;
case 0x6e0f90:goto L6e0f90;
case 0x6e0f93:c.instructions+=7;goto B6e0f93;
case 0x6e0f97:c.instructions+=6;goto B6e0f97;
case 0x6e0f9a:c.instructions+=5;goto B6e0f9a;
case 0x6e0f9b:c.instructions+=4;goto B6e0f9b;
case 0x6e0fa1:c.instructions+=3;goto B6e0fa1;
case 0x6e0fa2:c.instructions+=2;goto B6e0fa2;
case 0x6e0fa3:c.instructions+=1;goto B6e0fa3;
case 0x6e0fa8:goto L6e0fa8;
case 0x6e0fac:c.instructions+=7;goto B6e0fac;
case 0x6e0faf:c.instructions+=6;goto B6e0faf;
case 0x6e0fb1:c.instructions+=5;goto B6e0fb1;
case 0x6e0fb4:c.instructions+=4;goto B6e0fb4;
case 0x6e0fb6:c.instructions+=3;goto B6e0fb6;
case 0x6e0fb7:c.instructions+=2;goto B6e0fb7;
case 0x6e0fbb:c.instructions+=1;goto B6e0fbb;
case 0x6e0fbd:goto L6e0fbd;
case 0x6e0fc1:c.instructions+=1;goto B6e0fc1;
case 0x6e0fc6:goto L6e0fc6;
case 0x6e0fcb:c.instructions+=1;goto B6e0fcb;
case 0x6e0fcd:goto L6e0fcd;
case 0x6e0fd2:c.instructions+=4;goto B6e0fd2;
case 0x6e0fd5:c.instructions+=3;goto B6e0fd5;
case 0x6e0fd8:c.instructions+=2;goto B6e0fd8;
case 0x6e0fdc:c.instructions+=1;goto B6e0fdc;
case 0x6e0fe2:goto L6e0fe2;
case 0x6e0fe6:c.instructions+=4;goto B6e0fe6;
case 0x6e0fe9:c.instructions+=3;goto B6e0fe9;
case 0x6e0fea:c.instructions+=2;goto B6e0fea;
case 0x6e0feb:c.instructions+=1;goto B6e0feb;
case 0x6e0ff0:goto L6e0ff0;
case 0x6e0ff3:c.instructions+=6;goto B6e0ff3;
case 0x6e0ff4:c.instructions+=5;goto B6e0ff4;
case 0x6e0ff5:c.instructions+=4;goto B6e0ff5;
case 0x6e0ff6:c.instructions+=3;goto B6e0ff6;
case 0x6e0ff8:c.instructions+=2;goto B6e0ff8;
case 0x6e0ff9:c.instructions+=1;goto B6e0ff9;
default:missing_instruction(c.pc);}
B6e0004:L6e0004:{c.instructions+=5;NFSU2_TR(0x6e0004);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e0008:{NFSU2_TR(0x6e0008);
{u32 ea_=u32(u32(9079300u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e000e:{NFSU2_TR(0x6e000e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e0010:{NFSU2_TR(0x6e0010);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e0013:{NFSU2_TR(0x6e0013);
if(r1(R+514)){{goto L6e006e;}}
}
B6e0015:L6e0015:{c.instructions+=5;NFSU2_TR(0x6e0015);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e0019:{NFSU2_TR(0x6e0019);
{u32 ea_=u32(u32(9079304u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e001f:{NFSU2_TR(0x6e001f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e0021:{NFSU2_TR(0x6e0021);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e0024:{NFSU2_TR(0x6e0024);
if(r1(R+514)){{goto L6e006e;}}
}
B6e0026:L6e0026:{c.instructions+=5;NFSU2_TR(0x6e0026);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e002a:{NFSU2_TR(0x6e002a);
{u32 ea_=u32(u32(9079308u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e0030:{NFSU2_TR(0x6e0030);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e0032:{NFSU2_TR(0x6e0032);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e0035:{NFSU2_TR(0x6e0035);
if(r1(R+514)){{goto L6e006e;}}
}
B6e0037:L6e0037:{c.instructions+=5;NFSU2_TR(0x6e0037);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e003b:{NFSU2_TR(0x6e003b);
{u32 ea_=u32(u32(9079312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e0041:{NFSU2_TR(0x6e0041);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e0043:{NFSU2_TR(0x6e0043);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e0046:{NFSU2_TR(0x6e0046);
if(r1(R+514)){{goto L6e006e;}}
}
B6e0048:L6e0048:{c.instructions+=5;NFSU2_TR(0x6e0048);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e004c:{NFSU2_TR(0x6e004c);
{u32 ea_=u32(u32(9079316u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e0052:{NFSU2_TR(0x6e0052);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e0054:{NFSU2_TR(0x6e0054);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e0057:{NFSU2_TR(0x6e0057);
if(r1(R+514)){{goto L6e006e;}}
}
B6e0059:L6e0059:{c.instructions+=5;NFSU2_TR(0x6e0059);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e005d:{NFSU2_TR(0x6e005d);
{u32 ea_=u32(u32(9079320u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e0063:{NFSU2_TR(0x6e0063);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e0065:{NFSU2_TR(0x6e0065);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e0068:{NFSU2_TR(0x6e0068);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e02ca;}}
}
B6e006e:L6e006e:{c.instructions+=27;NFSU2_TR(0x6e006e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e0072:{NFSU2_TR(0x6e0072);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e0076:{NFSU2_TR(0x6e0076);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e007a:{NFSU2_TR(0x6e007a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e007e:{NFSU2_TR(0x6e007e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0082:{NFSU2_TR(0x6e0082);
__builtin_memmove(gp(0x8a8a04),(R+0),4);
}
B6e0087:{NFSU2_TR(0x6e0087);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e008b:{NFSU2_TR(0x6e008b);
__builtin_memmove(gp(0x8a8a08),(R+4),4);
}
B6e0091:{NFSU2_TR(0x6e0091);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e0095:{NFSU2_TR(0x6e0095);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e0099:{NFSU2_TR(0x6e0099);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e009d:{NFSU2_TR(0x6e009d);
__builtin_memmove(gp(0x8a8a10),(R+0),4);
}
B6e00a2:{NFSU2_TR(0x6e00a2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e00a6:{NFSU2_TR(0x6e00a6);
__builtin_memmove(gp(0x8a8a14),(R+4),4);
}
B6e00ac:{NFSU2_TR(0x6e00ac);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6e00b0:{NFSU2_TR(0x6e00b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e00b1:{NFSU2_TR(0x6e00b1);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6e00b5:{NFSU2_TR(0x6e00b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e00b6:{NFSU2_TR(0x6e00b6);
__builtin_memmove((R+4),gp(0x80f264),4);
}
B6e00bc:{NFSU2_TR(0x6e00bc);
__builtin_memmove(gp(0x8a8a0c),(R+8),4);
}
B6e00c2:{NFSU2_TR(0x6e00c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e00c6:{NFSU2_TR(0x6e00c6);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e00ca:{NFSU2_TR(0x6e00ca);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e00cc:{NFSU2_TR(0x6e00cc);
__builtin_memmove(gp(0x8a8a18),(R+8),4);
}
B6e00d2:{NFSU2_TR(0x6e00d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e00da:{NFSU2_TR(0x6e00da);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e00e2:{NFSU2_TR(0x6e00e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e00e7ull));
TAIL_STATIC(0x6dba40u,6db);
}
B6e00e7:L6e00e7:{c.instructions+=9;NFSU2_TR(0x6e00e7);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e00eb:{NFSU2_TR(0x6e00eb);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B6e00ef:{NFSU2_TR(0x6e00ef);
__builtin_memmove((R+8),gp(0x8a7bdc),4);
}
B6e00f5:{NFSU2_TR(0x6e00f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6e00fb:{NFSU2_TR(0x6e00fb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B6e00fd:{NFSU2_TR(0x6e00fd);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e0101:{NFSU2_TR(0x6e0101);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B6e0105:{NFSU2_TR(0x6e0105);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e0109:{NFSU2_TR(0x6e0109);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L6e0117;}}
}
B6e010b:L6e010b:{c.instructions+=4;NFSU2_TR(0x6e010b);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e010d:{NFSU2_TR(0x6e010d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e0111:{NFSU2_TR(0x6e0111);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e0113:{NFSU2_TR(0x6e0113);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e0117:L6e0117:{c.instructions+=5;NFSU2_TR(0x6e0117);
{u32 ea_=u32(u32(8450272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e011d:{NFSU2_TR(0x6e011d);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B6e011f:{NFSU2_TR(0x6e011f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e0121:{NFSU2_TR(0x6e0121);
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
B6e0124:{NFSU2_TR(0x6e0124);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e0145;}}
}
B6e0126:L6e0126:{c.instructions+=8;NFSU2_TR(0x6e0126);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6e012b:{NFSU2_TR(0x6e012b);
{u32 ea_=u32(u32(8450272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e0131:{NFSU2_TR(0x6e0131);
__builtin_memmove((R+8),gp(0x80f0e0),4);
}
B6e0137:{NFSU2_TR(0x6e0137);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e0139:{NFSU2_TR(0x6e0139);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e013a:{NFSU2_TR(0x6e013a);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e013c:{NFSU2_TR(0x6e013c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e013d:{NFSU2_TR(0x6e013d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e0143ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e0143:L6e0143:{c.instructions+=1;NFSU2_TR(0x6e0143);
{goto L6e0147;}
}
B6e0145:L6e0145:{c.instructions+=1;NFSU2_TR(0x6e0145);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6e0147:L6e0147:{c.instructions+=5;NFSU2_TR(0x6e0147);
{u32 ea_=u32(u32(8450276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e014d:{NFSU2_TR(0x6e014d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e0151:{NFSU2_TR(0x6e0151);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e0153:{NFSU2_TR(0x6e0153);
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
B6e0156:{NFSU2_TR(0x6e0156);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e02ca;}}
}
B6e015c:L6e015c:{c.instructions+=6;NFSU2_TR(0x6e015c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e0160:{NFSU2_TR(0x6e0160);
__builtin_memmove((R+8),(R+0),4);
}
B6e0162:{NFSU2_TR(0x6e0162);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0163:{NFSU2_TR(0x6e0163);
__builtin_memmove(gp(0x80f0e4),(R+0),4);
}
B6e0168:{NFSU2_TR(0x6e0168);
u8 U[4];
w4(U+0,u32(0x25ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e016a:{NFSU2_TR(0x6e016a);
{goto L6e02bc;}
}
B6e016f:L6e016f:{c.instructions+=4;NFSU2_TR(0x6e016f);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6e0173:{NFSU2_TR(0x6e0173);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0174:{NFSU2_TR(0x6e0174);
__builtin_memmove((R+4),(R+24),4);
}
B6e0176:{NFSU2_TR(0x6e0176);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e017bull));
TAIL_STATIC(0x6d94d0u,6d9);
}
B6e017b:L6e017b:{c.instructions+=4;NFSU2_TR(0x6e017b);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6e017f:{NFSU2_TR(0x6e017f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0180:{NFSU2_TR(0x6e0180);
__builtin_memmove((R+4),(R+24),4);
}
B6e0182:{NFSU2_TR(0x6e0182);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e0187ull));
TAIL_STATIC(0x6d94f0u,6d9);
}
B6e0187:L6e0187:{c.instructions+=4;NFSU2_TR(0x6e0187);
__builtin_memmove((R+8),gp(0x8a7bdc),4);
}
B6e018d:{NFSU2_TR(0x6e018d);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6e0193:{NFSU2_TR(0x6e0193);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B6e0195:{NFSU2_TR(0x6e0195);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L6e01ab;}}
}
B6e0197:L6e0197:{c.instructions+=6;NFSU2_TR(0x6e0197);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e019b:{NFSU2_TR(0x6e019b);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e019d:{NFSU2_TR(0x6e019d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e01a1:{NFSU2_TR(0x6e01a1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e01a5:{NFSU2_TR(0x6e01a5);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e01a7:{NFSU2_TR(0x6e01a7);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e01ab:L6e01ab:{c.instructions+=5;NFSU2_TR(0x6e01ab);
{u32 ea_=u32(u32(8450272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e01b1:{NFSU2_TR(0x6e01b1);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e01b5:{NFSU2_TR(0x6e01b5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e01b7:{NFSU2_TR(0x6e01b7);
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
B6e01ba:{NFSU2_TR(0x6e01ba);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e01dc;}}
}
B6e01bc:L6e01bc:{c.instructions+=9;NFSU2_TR(0x6e01bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e01c0:{NFSU2_TR(0x6e01c0);
__builtin_memmove(gp(0x80f0e0),(R+0),4);
}
B6e01c5:{NFSU2_TR(0x6e01c5);
__builtin_memmove((R+8),gp(0x80f0e0),4);
}
B6e01cb:{NFSU2_TR(0x6e01cb);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6e01d0:{NFSU2_TR(0x6e01d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e01d2:{NFSU2_TR(0x6e01d2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e01d3:{NFSU2_TR(0x6e01d3);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e01d5:{NFSU2_TR(0x6e01d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e01d6:{NFSU2_TR(0x6e01d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e01dcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e01dc:L6e01dc:{c.instructions+=5;NFSU2_TR(0x6e01dc);
{u32 ea_=u32(u32(8450276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e01e2:{NFSU2_TR(0x6e01e2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e01e6:{NFSU2_TR(0x6e01e6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e01e8:{NFSU2_TR(0x6e01e8);
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
B6e01eb:{NFSU2_TR(0x6e01eb);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e02ca;}}
}
B6e01f1:L6e01f1:{c.instructions+=6;NFSU2_TR(0x6e01f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e01f5:{NFSU2_TR(0x6e01f5);
__builtin_memmove((R+8),(R+0),4);
}
B6e01f7:{NFSU2_TR(0x6e01f7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e01f8:{NFSU2_TR(0x6e01f8);
__builtin_memmove(gp(0x80f0e4),(R+0),4);
}
B6e01fd:{NFSU2_TR(0x6e01fd);
u8 U[4];
w4(U+0,u32(0x25ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e01ff:{NFSU2_TR(0x6e01ff);
{goto L6e02bc;}
}
B6e0204:L6e0204:{c.instructions+=4;NFSU2_TR(0x6e0204);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6e0208:{NFSU2_TR(0x6e0208);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0209:{NFSU2_TR(0x6e0209);
__builtin_memmove((R+4),(R+24),4);
}
B6e020b:{NFSU2_TR(0x6e020b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e0210ull));
TAIL_STATIC(0x6d94d0u,6d9);
}
B6e0210:L6e0210:{c.instructions+=4;NFSU2_TR(0x6e0210);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6e0214:{NFSU2_TR(0x6e0214);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0215:{NFSU2_TR(0x6e0215);
__builtin_memmove((R+4),(R+24),4);
}
B6e0217:{NFSU2_TR(0x6e0217);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e021cull));
TAIL_STATIC(0x6d94f0u,6d9);
}
B6e021c:L6e021c:{c.instructions+=4;NFSU2_TR(0x6e021c);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6e0220:{NFSU2_TR(0x6e0220);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0221:{NFSU2_TR(0x6e0221);
__builtin_memmove((R+4),(R+24),4);
}
B6e0223:{NFSU2_TR(0x6e0223);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e0228ull));
TAIL_STATIC(0x6d9570u,6d9);
}
B6e0228:L6e0228:{c.instructions+=9;NFSU2_TR(0x6e0228);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e022c:{NFSU2_TR(0x6e022c);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e0230:{NFSU2_TR(0x6e0230);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B6e0236:{NFSU2_TR(0x6e0236);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e023c:{NFSU2_TR(0x6e023c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6e023e:{NFSU2_TR(0x6e023e);
{u32 ea_=u32(u32(9075328u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e0244:{NFSU2_TR(0x6e0244);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e0248:{NFSU2_TR(0x6e0248);
{u32 ea_=u32(u32(9075332u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e024e:{NFSU2_TR(0x6e024e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e0253ull));
TAIL_STATIC(0x6d81f0u,6d8);
}
B6e0253:L6e0253:{c.instructions+=2;NFSU2_TR(0x6e0253);
__builtin_memmove((R+4),(R+0),4);
}
B6e0255:{NFSU2_TR(0x6e0255);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e025aull));
TAIL_STATIC(0x6d8190u,6d8);
}
B6e025a:L6e025a:{c.instructions+=4;NFSU2_TR(0x6e025a);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6e025e:{NFSU2_TR(0x6e025e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e025f:{NFSU2_TR(0x6e025f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e0262:{NFSU2_TR(0x6e0262);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e0267ull));
TAIL_STATIC(0x6d9550u,6d9);
}
B6e0267:L6e0267:{c.instructions+=3;NFSU2_TR(0x6e0267);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e026b:{NFSU2_TR(0x6e026b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6e026c:{NFSU2_TR(0x6e026c);
if(r1(R+518)){{goto L6e0279;}}
}
B6e026e:L6e026e:{c.instructions+=2;NFSU2_TR(0x6e026e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6e026f:{NFSU2_TR(0x6e026f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e0289;}}
}
B6e0271:L6e0271:{c.instructions+=2;NFSU2_TR(0x6e0271);
{u32 ea_=u32(u32(8130828u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e0277:{NFSU2_TR(0x6e0277);
{goto L6e027f;}
}
B6e0279:L6e0279:{c.instructions+=1;NFSU2_TR(0x6e0279);
{u32 ea_=u32(u32(8130824u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e027f:L6e027f:{c.instructions+=2;NFSU2_TR(0x6e027f);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e0283:{NFSU2_TR(0x6e0283);
{u32 ea_=u32(u32(9075340u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e0289:L6e0289:{c.instructions+=2;NFSU2_TR(0x6e0289);
u8 U[14];
__builtin_memmove((U+6),gp(0x8a7bd4),4);
w1(R+512,u8((r4(U+6))<(r4(R+20))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+20)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e028f:{NFSU2_TR(0x6e028f);
if(r1(R+518)){{goto L6e02ab;}}
}
B6e0291:L6e0291:{c.instructions+=7;NFSU2_TR(0x6e0291);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6e0296:{NFSU2_TR(0x6e0296);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0297:{NFSU2_TR(0x6e0297);
u8 U[4];
w4(U+0,u32(0x8cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e029c:{NFSU2_TR(0x6e029c);
__builtin_memmove(gp(0x8a7bd4),(R+20),4);
}
B6e02a2:{NFSU2_TR(0x6e02a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e02a4:{NFSU2_TR(0x6e02a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e02a5:{NFSU2_TR(0x6e02a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e02abull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e02ab:L6e02ab:{c.instructions+=2;NFSU2_TR(0x6e02ab);
u8 U[14];
__builtin_memmove((U+6),gp(0x8a7bd8),4);
w1(R+512,u8((r4(U+6))<(r4(R+20))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+20)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e02b1:{NFSU2_TR(0x6e02b1);
if(r1(R+518)){{goto L6e02ca;}}
}
B6e02b3:L6e02b3:{c.instructions+=3;NFSU2_TR(0x6e02b3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e02b4:{NFSU2_TR(0x6e02b4);
__builtin_memmove(gp(0x8a7bd8),(R+20),4);
}
B6e02ba:{NFSU2_TR(0x6e02ba);
u8 U[4];
w4(U+0,u32(0x23ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e02bc:L6e02bc:{c.instructions+=4;NFSU2_TR(0x6e02bc);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6e02c1:{NFSU2_TR(0x6e02c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e02c3:{NFSU2_TR(0x6e02c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e02c4:{NFSU2_TR(0x6e02c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e02caull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e02ca:L6e02ca:{c.instructions+=7;NFSU2_TR(0x6e02ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e02cb:{NFSU2_TR(0x6e02cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e02cc:{NFSU2_TR(0x6e02cc);
__builtin_memmove(gp(0x8a8a30),(R+20),4);
}
B6e02d2:{NFSU2_TR(0x6e02d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e02d3:{NFSU2_TR(0x6e02d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e02d4:{NFSU2_TR(0x6e02d4);
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
B6e02d7:{NFSU2_TR(0x6e02d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e02e0:L6e02e0:{c.instructions+=19;NFSU2_TR(0x6e02e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e02e1:{NFSU2_TR(0x6e02e1);
__builtin_memmove((R+0),gp(0x8a7a10),4);
}
B6e02e6:{NFSU2_TR(0x6e02e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e02e9:{NFSU2_TR(0x6e02e9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e02ea:{NFSU2_TR(0x6e02ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e02ed:{NFSU2_TR(0x6e02ed);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e02ee:{NFSU2_TR(0x6e02ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e02f1:{NFSU2_TR(0x6e02f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e02f2:{NFSU2_TR(0x6e02f2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e02f3:{NFSU2_TR(0x6e02f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e02f6:{NFSU2_TR(0x6e02f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e02fa:{NFSU2_TR(0x6e02fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e02fd:{NFSU2_TR(0x6e02fd);
__builtin_memmove((R+4),gp(0x8a7a14),4);
}
B6e0303:{NFSU2_TR(0x6e0303);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6e0306:{NFSU2_TR(0x6e0306);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0309:{NFSU2_TR(0x6e0309);
__builtin_memmove((R+24),(R+4),4);
}
B6e030b:{NFSU2_TR(0x6e030b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B6e030e:{NFSU2_TR(0x6e030e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e0310:{NFSU2_TR(0x6e0310);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e0377;}}
}
B6e0312:L6e0312:{c.instructions+=2;NFSU2_TR(0x6e0312);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e0316:{NFSU2_TR(0x6e0316);
if(r1(R+518)){{goto L6e0326;}}
}
B6e0318:L6e0318:{c.instructions+=4;NFSU2_TR(0x6e0318);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6e031c:{NFSU2_TR(0x6e031c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e031d:{NFSU2_TR(0x6e031d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e031e:{NFSU2_TR(0x6e031e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e0323ull));
TAIL_STATIC(0x6dc660u,6dc);
}
B6e0323:L6e0323:{c.instructions+=1;NFSU2_TR(0x6e0323);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6e0326:L6e0326:{c.instructions+=9;NFSU2_TR(0x6e0326);
__builtin_memmove((R+4),gp(0x8a8a28),4);
}
B6e032c:{NFSU2_TR(0x6e032c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6e0333:{NFSU2_TR(0x6e0333);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0334:{NFSU2_TR(0x6e0334);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0335:{NFSU2_TR(0x6e0335);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0336:{NFSU2_TR(0x6e0336);
u8 U[4];
w4(U+0,u32(0x208ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e033b:{NFSU2_TR(0x6e033b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e033c:{NFSU2_TR(0x6e033c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e033d:{NFSU2_TR(0x6e033d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e0342ull));
TAIL_STATIC(0x6dc720u,6dc);
}
B6e0342:L6e0342:{c.instructions+=3;NFSU2_TR(0x6e0342);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6e0345:{NFSU2_TR(0x6e0345);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0349:{NFSU2_TR(0x6e0349);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e034eull));
TAIL_STATIC(0x6dc2a0u,6dc);
}
B6e034e:L6e034e:{c.instructions+=10;NFSU2_TR(0x6e034e);
__builtin_memmove((R+8),gp(0x8a7a10),4);
}
B6e0354:{NFSU2_TR(0x6e0354);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e0358:{NFSU2_TR(0x6e0358);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e035b:{NFSU2_TR(0x6e035b);
__builtin_memmove((R+0),gp(0x8a7a10),4);
}
B6e0360:{NFSU2_TR(0x6e0360);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e0363:{NFSU2_TR(0x6e0363);
__builtin_memmove((R+8),gp(0x8a7a14),4);
}
B6e0369:{NFSU2_TR(0x6e0369);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6e036c:{NFSU2_TR(0x6e036c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6e036f:{NFSU2_TR(0x6e036f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0372:{NFSU2_TR(0x6e0372);
__builtin_memmove((R+0),gp(0x8a7a10),4);
}
B6e0377:L6e0377:{c.instructions+=3;NFSU2_TR(0x6e0377);
__builtin_memmove((R+4),gp(0x8a7a20),4);
}
B6e037d:{NFSU2_TR(0x6e037d);
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
B6e037f:{NFSU2_TR(0x6e037f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e039a;}}
}
B6e0381:L6e0381:{c.instructions+=8;NFSU2_TR(0x6e0381);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0384:{NFSU2_TR(0x6e0384);
__builtin_memmove((R+0),gp(0x8a7a14),4);
}
B6e0389:{NFSU2_TR(0x6e0389);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6e038d:{NFSU2_TR(0x6e038d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e038f:{NFSU2_TR(0x6e038f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0390:{NFSU2_TR(0x6e0390);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0391:{NFSU2_TR(0x6e0391);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e0395:{NFSU2_TR(0x6e0395);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e039aull));
TAIL_STATIC(0x6dcdc0u,6dc);
}
B6e039a:L6e039a:{c.instructions+=4;NFSU2_TR(0x6e039a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e039e:{NFSU2_TR(0x6e039e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e039f:{NFSU2_TR(0x6e039f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e03a0:{NFSU2_TR(0x6e03a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e03a5ull));
TAIL_STATIC(0x6dbfb0u,6db);
}
B6e03a5:L6e03a5:{c.instructions+=7;NFSU2_TR(0x6e03a5);
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
B6e03a8:{NFSU2_TR(0x6e03a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e03a9:{NFSU2_TR(0x6e03a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e03aa:{NFSU2_TR(0x6e03aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e03ab:{NFSU2_TR(0x6e03ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e03ac:{NFSU2_TR(0x6e03ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e03ad:{NFSU2_TR(0x6e03ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e03b0:L6e03b0:{c.instructions+=9;NFSU2_TR(0x6e03b0);
__builtin_memmove((R+0),gp(0x8a7a10),4);
}
B6e03b5:{NFSU2_TR(0x6e03b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e03b8:{NFSU2_TR(0x6e03b8);
__builtin_memmove((R+8),gp(0x8a7a14),4);
}
B6e03be:{NFSU2_TR(0x6e03be);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e03bf:{NFSU2_TR(0x6e03bf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e03c0:{NFSU2_TR(0x6e03c0);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B6e03c4:{NFSU2_TR(0x6e03c4);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e03c7:{NFSU2_TR(0x6e03c7);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e03cd:{NFSU2_TR(0x6e03cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e03d2ull));
TAIL_STATIC(0x75bed4u,75b);
}
B6e03d2:L6e03d2:{c.instructions+=5;NFSU2_TR(0x6e03d2);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e03d4:{NFSU2_TR(0x6e03d4);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e03da:{NFSU2_TR(0x6e03da);
__builtin_memmove((R+24),(R+0),4);
}
B6e03dc:{NFSU2_TR(0x6e03dc);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6e03df:{NFSU2_TR(0x6e03df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e03e4ull));
TAIL_STATIC(0x75bed4u,75b);
}
B6e03e4:L6e03e4:{c.instructions+=5;NFSU2_TR(0x6e03e4);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e03e7:{NFSU2_TR(0x6e03e7);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e03ed:{NFSU2_TR(0x6e03ed);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
}
B6e03ef:{NFSU2_TR(0x6e03ef);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6e03f2:{NFSU2_TR(0x6e03f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e03f7ull));
TAIL_STATIC(0x75bed4u,75b);
}
B6e03f7:L6e03f7:{c.instructions+=5;NFSU2_TR(0x6e03f7);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e03fa:{NFSU2_TR(0x6e03fa);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e0400:{NFSU2_TR(0x6e0400);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
}
B6e0402:{NFSU2_TR(0x6e0402);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6e0405:{NFSU2_TR(0x6e0405);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e040aull));
TAIL_STATIC(0x75bed4u,75b);
}
B6e040a:L6e040a:{c.instructions+=3;NFSU2_TR(0x6e040a);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
}
B6e040c:{NFSU2_TR(0x6e040c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e040d:{NFSU2_TR(0x6e040d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e0412ull));
TAIL_STATIC(0x6dc300u,6dc);
}
B6e0412:L6e0412:{c.instructions+=4;NFSU2_TR(0x6e0412);
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
B6e0415:{NFSU2_TR(0x6e0415);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e0416:{NFSU2_TR(0x6e0416);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e0417:{NFSU2_TR(0x6e0417);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e0420:L6e0420:{c.instructions+=14;NFSU2_TR(0x6e0420);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e0424:{NFSU2_TR(0x6e0424);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e0428:{NFSU2_TR(0x6e0428);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0429:{NFSU2_TR(0x6e0429);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e042a:{NFSU2_TR(0x6e042a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e042e:{NFSU2_TR(0x6e042e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e042f:{NFSU2_TR(0x6e042f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0430:{NFSU2_TR(0x6e0430);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e0434:{NFSU2_TR(0x6e0434);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B6e0437:{NFSU2_TR(0x6e0437);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6e0439:{NFSU2_TR(0x6e0439);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e043b:{NFSU2_TR(0x6e043b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6e043e:{NFSU2_TR(0x6e043e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0442:{NFSU2_TR(0x6e0442);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e0474;}}
}
B6e0444:L6e0444:{c.instructions+=3;NFSU2_TR(0x6e0444);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e0448:{NFSU2_TR(0x6e0448);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e044c:{NFSU2_TR(0x6e044c);
__builtin_memmove((R+16),(R+16),4);
}
B6e0450:L6e0450:{c.instructions+=7;NFSU2_TR(0x6e0450);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e0454:{NFSU2_TR(0x6e0454);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0458:{NFSU2_TR(0x6e0458);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0459:{NFSU2_TR(0x6e0459);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e045a:{NFSU2_TR(0x6e045a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e045b:{NFSU2_TR(0x6e045b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e045c:{NFSU2_TR(0x6e045c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e0461ull));
TAIL_STATIC(0x6de8b0u,6de);
}
B6e0461:L6e0461:{c.instructions+=7;NFSU2_TR(0x6e0461);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e0465:{NFSU2_TR(0x6e0465);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6e0468:{NFSU2_TR(0x6e0468);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6e0469:{NFSU2_TR(0x6e0469);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B6e046c:{NFSU2_TR(0x6e046c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e046e:{NFSU2_TR(0x6e046e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0472:{NFSU2_TR(0x6e0472);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e0450u);}goto L6e0450;}}
}
B6e0474:L6e0474:{c.instructions+=2;NFSU2_TR(0x6e0474);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e0476:{NFSU2_TR(0x6e0476);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e049b;}}
}
B6e0478:L6e0478:{c.instructions+=4;NFSU2_TR(0x6e0478);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e047c:{NFSU2_TR(0x6e047c);
__builtin_memmove((R+28),(R+24),4);
}
B6e047e:{NFSU2_TR(0x6e047e);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6e0481:{NFSU2_TR(0x6e0481);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B6e0483:L6e0483:{c.instructions+=6;NFSU2_TR(0x6e0483);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e0487:{NFSU2_TR(0x6e0487);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0488:{NFSU2_TR(0x6e0488);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0489:{NFSU2_TR(0x6e0489);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e048a:{NFSU2_TR(0x6e048a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e048b:{NFSU2_TR(0x6e048b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e0490ull));
TAIL_STATIC(0x6de800u,6de);
}
B6e0490:L6e0490:{c.instructions+=5;NFSU2_TR(0x6e0490);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6e0493:{NFSU2_TR(0x6e0493);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6e0494:{NFSU2_TR(0x6e0494);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x40ull))));
}
B6e0497:{NFSU2_TR(0x6e0497);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e0499:{NFSU2_TR(0x6e0499);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e0483u);}goto L6e0483;}}
}
B6e049b:L6e049b:{c.instructions+=3;NFSU2_TR(0x6e049b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e049f:{NFSU2_TR(0x6e049f);
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
B6e04a1:{NFSU2_TR(0x6e04a1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e04dd;}}
}
B6e04a3:L6e04a3:{c.instructions+=11;NFSU2_TR(0x6e04a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e04a7:{NFSU2_TR(0x6e04a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e04ab:{NFSU2_TR(0x6e04ab);
__builtin_memmove((R+12),(R+24),4);
}
B6e04ad:{NFSU2_TR(0x6e04ad);
__builtin_memmove((R+28),(R+24),4);
}
B6e04af:{NFSU2_TR(0x6e04af);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6e04b2:{NFSU2_TR(0x6e04b2);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6e04b5:{NFSU2_TR(0x6e04b5);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B6e04b7:{NFSU2_TR(0x6e04b7);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B6e04b9:{NFSU2_TR(0x6e04b9);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B6e04bb:{NFSU2_TR(0x6e04bb);
__builtin_memmove((R+24),(R+0),4);
}
B6e04bd:{NFSU2_TR(0x6e04bd);
__builtin_memmove((R+4),(R+4),4);
}
B6e04c0:L6e04c0:{c.instructions+=7;NFSU2_TR(0x6e04c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e04c2:{NFSU2_TR(0x6e04c2);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffull))));
}
B6e04c8:{NFSU2_TR(0x6e04c8);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6e04cb:{NFSU2_TR(0x6e04cb);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+20)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+20)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+20))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e04cd:{NFSU2_TR(0x6e04cd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e04ce:{NFSU2_TR(0x6e04ce);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e04cf:{NFSU2_TR(0x6e04cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e04d4ull));
TAIL_STATIC(0x63d12cu,63d);
}
B6e04d4:L6e04d4:{c.instructions+=4;NFSU2_TR(0x6e04d4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B6e04d7:{NFSU2_TR(0x6e04d7);
w1(R+512,carry<u32>(r4(R+12),u32(0x40ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x40ull))));
}
B6e04da:{NFSU2_TR(0x6e04da);
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
B6e04db:{NFSU2_TR(0x6e04db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e04c0u);}goto L6e04c0;}}
}
B6e04dd:L6e04dd:{c.instructions+=5;NFSU2_TR(0x6e04dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e04de:{NFSU2_TR(0x6e04de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e04df:{NFSU2_TR(0x6e04df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e04e0:{NFSU2_TR(0x6e04e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e04e1:{NFSU2_TR(0x6e04e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e04f0:L6e04f0:{c.instructions+=14;NFSU2_TR(0x6e04f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e04f4:{NFSU2_TR(0x6e04f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e04f8:{NFSU2_TR(0x6e04f8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e04f9:{NFSU2_TR(0x6e04f9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e04fa:{NFSU2_TR(0x6e04fa);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e04fe:{NFSU2_TR(0x6e04fe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e04ff:{NFSU2_TR(0x6e04ff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0500:{NFSU2_TR(0x6e0500);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e0504:{NFSU2_TR(0x6e0504);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B6e0507:{NFSU2_TR(0x6e0507);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6e0509:{NFSU2_TR(0x6e0509);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e050b:{NFSU2_TR(0x6e050b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6e050e:{NFSU2_TR(0x6e050e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0512:{NFSU2_TR(0x6e0512);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e0544;}}
}
B6e0514:L6e0514:{c.instructions+=3;NFSU2_TR(0x6e0514);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e0518:{NFSU2_TR(0x6e0518);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e051c:{NFSU2_TR(0x6e051c);
__builtin_memmove((R+16),(R+16),4);
}
B6e0520:L6e0520:{c.instructions+=7;NFSU2_TR(0x6e0520);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e0524:{NFSU2_TR(0x6e0524);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0528:{NFSU2_TR(0x6e0528);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0529:{NFSU2_TR(0x6e0529);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e052a:{NFSU2_TR(0x6e052a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e052b:{NFSU2_TR(0x6e052b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e052c:{NFSU2_TR(0x6e052c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e0531ull));
TAIL_STATIC(0x6dead0u,6de);
}
B6e0531:L6e0531:{c.instructions+=7;NFSU2_TR(0x6e0531);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e0535:{NFSU2_TR(0x6e0535);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6e0538:{NFSU2_TR(0x6e0538);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6e0539:{NFSU2_TR(0x6e0539);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B6e053c:{NFSU2_TR(0x6e053c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e053e:{NFSU2_TR(0x6e053e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0542:{NFSU2_TR(0x6e0542);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e0520u);}goto L6e0520;}}
}
B6e0544:L6e0544:{c.instructions+=2;NFSU2_TR(0x6e0544);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e0546:{NFSU2_TR(0x6e0546);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e056b;}}
}
B6e0548:L6e0548:{c.instructions+=4;NFSU2_TR(0x6e0548);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e054c:{NFSU2_TR(0x6e054c);
__builtin_memmove((R+28),(R+24),4);
}
B6e054e:{NFSU2_TR(0x6e054e);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6e0551:{NFSU2_TR(0x6e0551);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B6e0553:L6e0553:{c.instructions+=6;NFSU2_TR(0x6e0553);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e0557:{NFSU2_TR(0x6e0557);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0558:{NFSU2_TR(0x6e0558);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0559:{NFSU2_TR(0x6e0559);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e055a:{NFSU2_TR(0x6e055a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e055b:{NFSU2_TR(0x6e055b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e0560ull));
TAIL_STATIC(0x6de9b0u,6de);
}
B6e0560:L6e0560:{c.instructions+=5;NFSU2_TR(0x6e0560);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6e0563:{NFSU2_TR(0x6e0563);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6e0564:{NFSU2_TR(0x6e0564);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x40ull))));
}
B6e0567:{NFSU2_TR(0x6e0567);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e0569:{NFSU2_TR(0x6e0569);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e0553u);}goto L6e0553;}}
}
B6e056b:L6e056b:{c.instructions+=3;NFSU2_TR(0x6e056b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e056f:{NFSU2_TR(0x6e056f);
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
B6e0571:{NFSU2_TR(0x6e0571);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e05ad;}}
}
B6e0573:L6e0573:{c.instructions+=11;NFSU2_TR(0x6e0573);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e0577:{NFSU2_TR(0x6e0577);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e057b:{NFSU2_TR(0x6e057b);
__builtin_memmove((R+12),(R+24),4);
}
B6e057d:{NFSU2_TR(0x6e057d);
__builtin_memmove((R+28),(R+24),4);
}
B6e057f:{NFSU2_TR(0x6e057f);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6e0582:{NFSU2_TR(0x6e0582);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6e0585:{NFSU2_TR(0x6e0585);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B6e0587:{NFSU2_TR(0x6e0587);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B6e0589:{NFSU2_TR(0x6e0589);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B6e058b:{NFSU2_TR(0x6e058b);
__builtin_memmove((R+24),(R+0),4);
}
B6e058d:{NFSU2_TR(0x6e058d);
__builtin_memmove((R+4),(R+4),4);
}
B6e0590:L6e0590:{c.instructions+=7;NFSU2_TR(0x6e0590);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e0592:{NFSU2_TR(0x6e0592);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffull))));
}
B6e0598:{NFSU2_TR(0x6e0598);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6e059b:{NFSU2_TR(0x6e059b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+20)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+20)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+20))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e059d:{NFSU2_TR(0x6e059d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e059e:{NFSU2_TR(0x6e059e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e059f:{NFSU2_TR(0x6e059f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e05a4ull));
TAIL_STATIC(0x63d12cu,63d);
}
B6e05a4:L6e05a4:{c.instructions+=4;NFSU2_TR(0x6e05a4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B6e05a7:{NFSU2_TR(0x6e05a7);
w1(R+512,carry<u32>(r4(R+12),u32(0x40ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x40ull))));
}
B6e05aa:{NFSU2_TR(0x6e05aa);
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
B6e05ab:{NFSU2_TR(0x6e05ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e0590u);}goto L6e0590;}}
}
B6e05ad:L6e05ad:{c.instructions+=5;NFSU2_TR(0x6e05ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e05ae:{NFSU2_TR(0x6e05ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e05af:{NFSU2_TR(0x6e05af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e05b0:{NFSU2_TR(0x6e05b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e05b1:{NFSU2_TR(0x6e05b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e05c0:L6e05c0:{c.instructions+=14;NFSU2_TR(0x6e05c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e05c4:{NFSU2_TR(0x6e05c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e05c8:{NFSU2_TR(0x6e05c8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e05c9:{NFSU2_TR(0x6e05c9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e05ca:{NFSU2_TR(0x6e05ca);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e05ce:{NFSU2_TR(0x6e05ce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e05cf:{NFSU2_TR(0x6e05cf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e05d0:{NFSU2_TR(0x6e05d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e05d4:{NFSU2_TR(0x6e05d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B6e05d7:{NFSU2_TR(0x6e05d7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6e05d9:{NFSU2_TR(0x6e05d9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e05db:{NFSU2_TR(0x6e05db);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6e05de:{NFSU2_TR(0x6e05de);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e05e2:{NFSU2_TR(0x6e05e2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e0614;}}
}
B6e05e4:L6e05e4:{c.instructions+=3;NFSU2_TR(0x6e05e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e05e8:{NFSU2_TR(0x6e05e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e05ec:{NFSU2_TR(0x6e05ec);
__builtin_memmove((R+16),(R+16),4);
}
B6e05f0:L6e05f0:{c.instructions+=7;NFSU2_TR(0x6e05f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e05f4:{NFSU2_TR(0x6e05f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e05f8:{NFSU2_TR(0x6e05f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e05f9:{NFSU2_TR(0x6e05f9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e05fa:{NFSU2_TR(0x6e05fa);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e05fb:{NFSU2_TR(0x6e05fb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e05fc:{NFSU2_TR(0x6e05fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e0601ull));
TAIL_STATIC(0x6dede0u,6de);
}
B6e0601:L6e0601:{c.instructions+=7;NFSU2_TR(0x6e0601);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e0605:{NFSU2_TR(0x6e0605);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6e0608:{NFSU2_TR(0x6e0608);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6e0609:{NFSU2_TR(0x6e0609);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B6e060c:{NFSU2_TR(0x6e060c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e060e:{NFSU2_TR(0x6e060e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0612:{NFSU2_TR(0x6e0612);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e05f0u);}goto L6e05f0;}}
}
B6e0614:L6e0614:{c.instructions+=2;NFSU2_TR(0x6e0614);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e0616:{NFSU2_TR(0x6e0616);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e063b;}}
}
B6e0618:L6e0618:{c.instructions+=4;NFSU2_TR(0x6e0618);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e061c:{NFSU2_TR(0x6e061c);
__builtin_memmove((R+28),(R+24),4);
}
B6e061e:{NFSU2_TR(0x6e061e);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6e0621:{NFSU2_TR(0x6e0621);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B6e0623:L6e0623:{c.instructions+=6;NFSU2_TR(0x6e0623);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e0627:{NFSU2_TR(0x6e0627);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0628:{NFSU2_TR(0x6e0628);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0629:{NFSU2_TR(0x6e0629);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e062a:{NFSU2_TR(0x6e062a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e062b:{NFSU2_TR(0x6e062b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e0630ull));
TAIL_STATIC(0x6dec70u,6de);
}
B6e0630:L6e0630:{c.instructions+=5;NFSU2_TR(0x6e0630);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6e0633:{NFSU2_TR(0x6e0633);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6e0634:{NFSU2_TR(0x6e0634);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x40ull))));
}
B6e0637:{NFSU2_TR(0x6e0637);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e0639:{NFSU2_TR(0x6e0639);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e0623u);}goto L6e0623;}}
}
B6e063b:L6e063b:{c.instructions+=3;NFSU2_TR(0x6e063b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e063f:{NFSU2_TR(0x6e063f);
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
B6e0641:{NFSU2_TR(0x6e0641);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e067d;}}
}
B6e0643:L6e0643:{c.instructions+=11;NFSU2_TR(0x6e0643);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e0647:{NFSU2_TR(0x6e0647);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e064b:{NFSU2_TR(0x6e064b);
__builtin_memmove((R+12),(R+24),4);
}
B6e064d:{NFSU2_TR(0x6e064d);
__builtin_memmove((R+28),(R+24),4);
}
B6e064f:{NFSU2_TR(0x6e064f);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6e0652:{NFSU2_TR(0x6e0652);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6e0655:{NFSU2_TR(0x6e0655);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B6e0657:{NFSU2_TR(0x6e0657);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B6e0659:{NFSU2_TR(0x6e0659);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B6e065b:{NFSU2_TR(0x6e065b);
__builtin_memmove((R+24),(R+0),4);
}
B6e065d:{NFSU2_TR(0x6e065d);
__builtin_memmove((R+4),(R+4),4);
}
B6e0660:L6e0660:{c.instructions+=7;NFSU2_TR(0x6e0660);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e0662:{NFSU2_TR(0x6e0662);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffull))));
}
B6e0668:{NFSU2_TR(0x6e0668);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6e066b:{NFSU2_TR(0x6e066b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+20)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+20)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+20))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e066d:{NFSU2_TR(0x6e066d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e066e:{NFSU2_TR(0x6e066e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e066f:{NFSU2_TR(0x6e066f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e0674ull));
TAIL_STATIC(0x63d12cu,63d);
}
B6e0674:L6e0674:{c.instructions+=4;NFSU2_TR(0x6e0674);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B6e0677:{NFSU2_TR(0x6e0677);
w1(R+512,carry<u32>(r4(R+12),u32(0x40ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x40ull))));
}
B6e067a:{NFSU2_TR(0x6e067a);
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
B6e067b:{NFSU2_TR(0x6e067b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e0660u);}goto L6e0660;}}
}
B6e067d:L6e067d:{c.instructions+=5;NFSU2_TR(0x6e067d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e067e:{NFSU2_TR(0x6e067e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e067f:{NFSU2_TR(0x6e067f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e0680:{NFSU2_TR(0x6e0680);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e0681:{NFSU2_TR(0x6e0681);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e0690:L6e0690:{c.instructions+=4;NFSU2_TR(0x6e0690);
__builtin_memmove((R+8),gp(0x8a7a10),4);
}
B6e0696:{NFSU2_TR(0x6e0696);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e0699:{NFSU2_TR(0x6e0699);
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
B6e069b:{NFSU2_TR(0x6e069b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e06a5;}}
}
B6e069d:L6e069d:{c.instructions+=3;NFSU2_TR(0x6e069d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e06a0:{NFSU2_TR(0x6e06a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e06a3:{NFSU2_TR(0x6e06a3);
{goto L6e06c9;}
}
B6e06a5:L6e06a5:{c.instructions+=12;NFSU2_TR(0x6e06a5);
__builtin_memmove((R+4),gp(0x8a7b90),4);
}
B6e06ab:{NFSU2_TR(0x6e06ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e06ae:{NFSU2_TR(0x6e06ae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e06af:{NFSU2_TR(0x6e06af);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6e06b2:{NFSU2_TR(0x6e06b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e06b5:{NFSU2_TR(0x6e06b5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6e06b8:{NFSU2_TR(0x6e06b8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6e06bb:{NFSU2_TR(0x6e06bb);
u8 U[32];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B6e06c0:{NFSU2_TR(0x6e06c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e06c3:{NFSU2_TR(0x6e06c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6e06c6:{NFSU2_TR(0x6e06c6);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+24)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+24)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e06c8:{NFSU2_TR(0x6e06c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e06c9:L6e06c9:{c.instructions+=11;NFSU2_TR(0x6e06c9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e06cd:{NFSU2_TR(0x6e06cd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6e06cf:{NFSU2_TR(0x6e06cf);
__builtin_memmove((R+4),gp(0x8a7a10),4);
}
B6e06d5:{NFSU2_TR(0x6e06d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e06d8:{NFSU2_TR(0x6e06d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e06dc:{NFSU2_TR(0x6e06dc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6e06de:{NFSU2_TR(0x6e06de);
__builtin_memmove((R+8),gp(0x8a7a10),4);
}
B6e06e4:{NFSU2_TR(0x6e06e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e06e7:{NFSU2_TR(0x6e06e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e06eb:{NFSU2_TR(0x6e06eb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6e06ed:{NFSU2_TR(0x6e06ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e06f0:L6e06f0:{c.instructions+=1;NFSU2_TR(0x6e06f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e06f5ull));
TAIL_STATIC(0x6dc330u,6dc);
}
B6e06f5:L6e06f5:{c.instructions+=2;NFSU2_TR(0x6e06f5);
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
B6e06f7:{NFSU2_TR(0x6e06f7);
if(r1(R+518)){{goto L6e075f;}}
}
B6e06f9:L6e06f9:{c.instructions+=7;NFSU2_TR(0x6e06f9);
__builtin_memmove((R+0),gp(0x8a7a10),4);
}
B6e06fe:{NFSU2_TR(0x6e06fe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e06ff:{NFSU2_TR(0x6e06ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e0702:{NFSU2_TR(0x6e0702);
__builtin_memmove((R+0),gp(0x8a88a4),4);
}
B6e0707:{NFSU2_TR(0x6e0707);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B6e070a:{NFSU2_TR(0x6e070a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e070c:{NFSU2_TR(0x6e070c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e0710;}}
}
B6e070e:L6e070e:{c.instructions+=1;NFSU2_TR(0x6e070e);
__builtin_memmove((R+24),(R+0),4);
}
B6e0710:L6e0710:{c.instructions+=13;NFSU2_TR(0x6e0710);
__builtin_memmove((R+4),gp(0x8a8a24),4);
}
B6e0716:{NFSU2_TR(0x6e0716);
__builtin_memmove((R+8),gp(0x8a8a20),4);
}
B6e071c:{NFSU2_TR(0x6e071c);
__builtin_memmove((R+0),gp(0x8a8a1c),4);
}
B6e0721:{NFSU2_TR(0x6e0721);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0722:{NFSU2_TR(0x6e0722);
__builtin_memmove((R+4),gp(0x8a88a0),4);
}
B6e0728:{NFSU2_TR(0x6e0728);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0729:{NFSU2_TR(0x6e0729);
__builtin_memmove((R+8),gp(0x8a7a18),4);
}
B6e072f:{NFSU2_TR(0x6e072f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0730:{NFSU2_TR(0x6e0730);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e0733:{NFSU2_TR(0x6e0733);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0734:{NFSU2_TR(0x6e0734);
u8 U[4];
w4(U+0,u32(0x8a8a80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0739:{NFSU2_TR(0x6e0739);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e073a:{NFSU2_TR(0x6e073a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e073full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e05c0u);}goto L6e05c0;}
}
B6e073f:L6e073f:{c.instructions+=7;NFSU2_TR(0x6e073f);
__builtin_memmove((R+8),gp(0x8a7a10),4);
}
B6e0745:{NFSU2_TR(0x6e0745);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e0748:{NFSU2_TR(0x6e0748);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e074f:{NFSU2_TR(0x6e074f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0750:{NFSU2_TR(0x6e0750);
u8 U[4];
w4(U+0,u32(0x8a8a80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0755:{NFSU2_TR(0x6e0755);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0756:{NFSU2_TR(0x6e0756);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e075bull));
TAIL_STATIC(0x6dbf90u,6db);
}
B6e075b:L6e075b:{c.instructions+=2;NFSU2_TR(0x6e075b);
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
B6e075e:{NFSU2_TR(0x6e075e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e075f:L6e075f:{c.instructions+=1;NFSU2_TR(0x6e075f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e0760:L6e0760:{c.instructions+=1;NFSU2_TR(0x6e0760);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e0765ull));
TAIL_STATIC(0x6dc330u,6dc);
}
B6e0765:L6e0765:{c.instructions+=2;NFSU2_TR(0x6e0765);
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
B6e0767:{NFSU2_TR(0x6e0767);
if(r1(R+518)){{goto L6e07cf;}}
}
B6e0769:L6e0769:{c.instructions+=7;NFSU2_TR(0x6e0769);
__builtin_memmove((R+0),gp(0x8a7a10),4);
}
B6e076e:{NFSU2_TR(0x6e076e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e076f:{NFSU2_TR(0x6e076f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e0772:{NFSU2_TR(0x6e0772);
__builtin_memmove((R+0),gp(0x8a88a4),4);
}
B6e0777:{NFSU2_TR(0x6e0777);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B6e077a:{NFSU2_TR(0x6e077a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e077c:{NFSU2_TR(0x6e077c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e0780;}}
}
B6e077e:L6e077e:{c.instructions+=1;NFSU2_TR(0x6e077e);
__builtin_memmove((R+24),(R+0),4);
}
B6e0780:L6e0780:{c.instructions+=13;NFSU2_TR(0x6e0780);
__builtin_memmove((R+4),gp(0x8a8a24),4);
}
B6e0786:{NFSU2_TR(0x6e0786);
__builtin_memmove((R+8),gp(0x8a8a20),4);
}
B6e078c:{NFSU2_TR(0x6e078c);
__builtin_memmove((R+0),gp(0x8a8a1c),4);
}
B6e0791:{NFSU2_TR(0x6e0791);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0792:{NFSU2_TR(0x6e0792);
__builtin_memmove((R+4),gp(0x8a88a0),4);
}
B6e0798:{NFSU2_TR(0x6e0798);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0799:{NFSU2_TR(0x6e0799);
__builtin_memmove((R+8),gp(0x8a7a18),4);
}
B6e079f:{NFSU2_TR(0x6e079f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e07a0:{NFSU2_TR(0x6e07a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e07a3:{NFSU2_TR(0x6e07a3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e07a4:{NFSU2_TR(0x6e07a4);
u8 U[4];
w4(U+0,u32(0x8a8a80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e07a9:{NFSU2_TR(0x6e07a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e07aa:{NFSU2_TR(0x6e07aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e07afull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e0420u);}goto L6e0420;}
}
B6e07af:L6e07af:{c.instructions+=7;NFSU2_TR(0x6e07af);
__builtin_memmove((R+8),gp(0x8a7a10),4);
}
B6e07b5:{NFSU2_TR(0x6e07b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e07b8:{NFSU2_TR(0x6e07b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e07bf:{NFSU2_TR(0x6e07bf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e07c0:{NFSU2_TR(0x6e07c0);
u8 U[4];
w4(U+0,u32(0x8a8a80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e07c5:{NFSU2_TR(0x6e07c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e07c6:{NFSU2_TR(0x6e07c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e07cbull));
TAIL_STATIC(0x6dbf90u,6db);
}
B6e07cb:L6e07cb:{c.instructions+=2;NFSU2_TR(0x6e07cb);
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
B6e07ce:{NFSU2_TR(0x6e07ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e07cf:L6e07cf:{c.instructions+=1;NFSU2_TR(0x6e07cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e07d0:L6e07d0:{c.instructions+=1;NFSU2_TR(0x6e07d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e07d5ull));
TAIL_STATIC(0x6dc330u,6dc);
}
B6e07d5:L6e07d5:{c.instructions+=2;NFSU2_TR(0x6e07d5);
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
B6e07d7:{NFSU2_TR(0x6e07d7);
if(r1(R+518)){{goto L6e083f;}}
}
B6e07d9:L6e07d9:{c.instructions+=7;NFSU2_TR(0x6e07d9);
__builtin_memmove((R+0),gp(0x8a7a10),4);
}
B6e07de:{NFSU2_TR(0x6e07de);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e07df:{NFSU2_TR(0x6e07df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e07e2:{NFSU2_TR(0x6e07e2);
__builtin_memmove((R+0),gp(0x8a88a4),4);
}
B6e07e7:{NFSU2_TR(0x6e07e7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B6e07ea:{NFSU2_TR(0x6e07ea);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e07ec:{NFSU2_TR(0x6e07ec);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e07f0;}}
}
B6e07ee:L6e07ee:{c.instructions+=1;NFSU2_TR(0x6e07ee);
__builtin_memmove((R+24),(R+0),4);
}
B6e07f0:L6e07f0:{c.instructions+=13;NFSU2_TR(0x6e07f0);
__builtin_memmove((R+4),gp(0x8a8a24),4);
}
B6e07f6:{NFSU2_TR(0x6e07f6);
__builtin_memmove((R+8),gp(0x8a8a20),4);
}
B6e07fc:{NFSU2_TR(0x6e07fc);
__builtin_memmove((R+0),gp(0x8a8a1c),4);
}
B6e0801:{NFSU2_TR(0x6e0801);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0802:{NFSU2_TR(0x6e0802);
__builtin_memmove((R+4),gp(0x8a88a0),4);
}
B6e0808:{NFSU2_TR(0x6e0808);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0809:{NFSU2_TR(0x6e0809);
__builtin_memmove((R+8),gp(0x8a7a18),4);
}
B6e080f:{NFSU2_TR(0x6e080f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0810:{NFSU2_TR(0x6e0810);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e0813:{NFSU2_TR(0x6e0813);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0814:{NFSU2_TR(0x6e0814);
u8 U[4];
w4(U+0,u32(0x8a8a80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0819:{NFSU2_TR(0x6e0819);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e081a:{NFSU2_TR(0x6e081a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e081full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e04f0u);}goto L6e04f0;}
}
B6e081f:L6e081f:{c.instructions+=7;NFSU2_TR(0x6e081f);
__builtin_memmove((R+8),gp(0x8a7a10),4);
}
B6e0825:{NFSU2_TR(0x6e0825);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e0828:{NFSU2_TR(0x6e0828);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e082f:{NFSU2_TR(0x6e082f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0830:{NFSU2_TR(0x6e0830);
u8 U[4];
w4(U+0,u32(0x8a8a80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0835:{NFSU2_TR(0x6e0835);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0836:{NFSU2_TR(0x6e0836);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e083bull));
TAIL_STATIC(0x6dbf90u,6db);
}
B6e083b:L6e083b:{c.instructions+=2;NFSU2_TR(0x6e083b);
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
B6e083e:{NFSU2_TR(0x6e083e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e083f:L6e083f:{c.instructions+=1;NFSU2_TR(0x6e083f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e0840:L6e0840:{c.instructions+=1;NFSU2_TR(0x6e0840);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e0845ull));
TAIL_STATIC(0x6dc330u,6dc);
}
B6e0845:L6e0845:{c.instructions+=2;NFSU2_TR(0x6e0845);
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
B6e0847:{NFSU2_TR(0x6e0847);
if(r1(R+518)){{goto L6e08a3;}}
}
B6e0849:L6e0849:{c.instructions+=13;NFSU2_TR(0x6e0849);
__builtin_memmove((R+0),gp(0x8a8a24),4);
}
B6e084e:{NFSU2_TR(0x6e084e);
__builtin_memmove((R+4),gp(0x8a8a20),4);
}
B6e0854:{NFSU2_TR(0x6e0854);
__builtin_memmove((R+8),gp(0x8a8a1c),4);
}
B6e085a:{NFSU2_TR(0x6e085a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e085b:{NFSU2_TR(0x6e085b);
__builtin_memmove((R+0),gp(0x8a88a0),4);
}
B6e0860:{NFSU2_TR(0x6e0860);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0861:{NFSU2_TR(0x6e0861);
__builtin_memmove((R+4),gp(0x8a7a18),4);
}
B6e0867:{NFSU2_TR(0x6e0867);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0868:{NFSU2_TR(0x6e0868);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e086b:{NFSU2_TR(0x6e086b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e086c:{NFSU2_TR(0x6e086c);
u8 U[4];
w4(U+0,u32(0x8a8a80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0871:{NFSU2_TR(0x6e0871);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0872:{NFSU2_TR(0x6e0872);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e0877ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e05c0u);}goto L6e05c0;}
}
B6e0877:L6e0877:{c.instructions+=6;NFSU2_TR(0x6e0877);
__builtin_memmove((R+0),gp(0x8a8a20),4);
}
B6e087c:{NFSU2_TR(0x6e087c);
__builtin_memmove((R+4),gp(0x8a8a1c),4);
}
B6e0882:{NFSU2_TR(0x6e0882);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B6e0884:{NFSU2_TR(0x6e0884);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6e0887:{NFSU2_TR(0x6e0887);
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
B6e0889:{NFSU2_TR(0x6e0889);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e08a3;}}
}
B6e088b:L6e088b:{c.instructions+=4;NFSU2_TR(0x6e088b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e088c:{NFSU2_TR(0x6e088c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e088d:{NFSU2_TR(0x6e088d);
w4(R+24,u32(0x8a8a80ull));
}
B6e0892:{NFSU2_TR(0x6e0892);
__builtin_memmove((R+28),(R+0),4);
}
B6e0894:L6e0894:{c.instructions+=3;NFSU2_TR(0x6e0894);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0895:{NFSU2_TR(0x6e0895);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0896:{NFSU2_TR(0x6e0896);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e089bull));
TAIL_STATIC(0x63d12cu,63d);
}
B6e089b:L6e089b:{c.instructions+=3;NFSU2_TR(0x6e089b);
w1(R+512,carry<u32>(r4(R+24),u32(0x40ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B6e089e:{NFSU2_TR(0x6e089e);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e089f:{NFSU2_TR(0x6e089f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e0894u);}goto L6e0894;}}
}
B6e08a1:L6e08a1:{c.instructions+=2;NFSU2_TR(0x6e08a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e08a2:{NFSU2_TR(0x6e08a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e08a3:L6e08a3:{c.instructions+=1;NFSU2_TR(0x6e08a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e08b0:L6e08b0:{c.instructions+=1;NFSU2_TR(0x6e08b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e08b5ull));
TAIL_STATIC(0x6dc330u,6dc);
}
B6e08b5:L6e08b5:{c.instructions+=2;NFSU2_TR(0x6e08b5);
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
B6e08b7:{NFSU2_TR(0x6e08b7);
if(r1(R+518)){{goto L6e0913;}}
}
B6e08b9:L6e08b9:{c.instructions+=13;NFSU2_TR(0x6e08b9);
__builtin_memmove((R+0),gp(0x8a8a24),4);
}
B6e08be:{NFSU2_TR(0x6e08be);
__builtin_memmove((R+4),gp(0x8a8a20),4);
}
B6e08c4:{NFSU2_TR(0x6e08c4);
__builtin_memmove((R+8),gp(0x8a8a1c),4);
}
B6e08ca:{NFSU2_TR(0x6e08ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e08cb:{NFSU2_TR(0x6e08cb);
__builtin_memmove((R+0),gp(0x8a88a0),4);
}
B6e08d0:{NFSU2_TR(0x6e08d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e08d1:{NFSU2_TR(0x6e08d1);
__builtin_memmove((R+4),gp(0x8a7a18),4);
}
B6e08d7:{NFSU2_TR(0x6e08d7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e08d8:{NFSU2_TR(0x6e08d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e08db:{NFSU2_TR(0x6e08db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e08dc:{NFSU2_TR(0x6e08dc);
u8 U[4];
w4(U+0,u32(0x8a8a80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e08e1:{NFSU2_TR(0x6e08e1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e08e2:{NFSU2_TR(0x6e08e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e08e7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e0420u);}goto L6e0420;}
}
B6e08e7:L6e08e7:{c.instructions+=6;NFSU2_TR(0x6e08e7);
__builtin_memmove((R+0),gp(0x8a8a20),4);
}
B6e08ec:{NFSU2_TR(0x6e08ec);
__builtin_memmove((R+4),gp(0x8a8a1c),4);
}
B6e08f2:{NFSU2_TR(0x6e08f2);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B6e08f4:{NFSU2_TR(0x6e08f4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6e08f7:{NFSU2_TR(0x6e08f7);
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
B6e08f9:{NFSU2_TR(0x6e08f9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e0913;}}
}
B6e08fb:L6e08fb:{c.instructions+=4;NFSU2_TR(0x6e08fb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e08fc:{NFSU2_TR(0x6e08fc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e08fd:{NFSU2_TR(0x6e08fd);
w4(R+24,u32(0x8a8a80ull));
}
B6e0902:{NFSU2_TR(0x6e0902);
__builtin_memmove((R+28),(R+0),4);
}
B6e0904:L6e0904:{c.instructions+=3;NFSU2_TR(0x6e0904);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0905:{NFSU2_TR(0x6e0905);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0906:{NFSU2_TR(0x6e0906);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e090bull));
TAIL_STATIC(0x63d12cu,63d);
}
B6e090b:L6e090b:{c.instructions+=3;NFSU2_TR(0x6e090b);
w1(R+512,carry<u32>(r4(R+24),u32(0x40ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B6e090e:{NFSU2_TR(0x6e090e);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e090f:{NFSU2_TR(0x6e090f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e0904u);}goto L6e0904;}}
}
B6e0911:L6e0911:{c.instructions+=2;NFSU2_TR(0x6e0911);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e0912:{NFSU2_TR(0x6e0912);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e0913:L6e0913:{c.instructions+=1;NFSU2_TR(0x6e0913);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e0920:L6e0920:{c.instructions+=1;NFSU2_TR(0x6e0920);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e0925ull));
TAIL_STATIC(0x6dc330u,6dc);
}
B6e0925:L6e0925:{c.instructions+=2;NFSU2_TR(0x6e0925);
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
B6e0927:{NFSU2_TR(0x6e0927);
if(r1(R+518)){{goto L6e0983;}}
}
B6e0929:L6e0929:{c.instructions+=13;NFSU2_TR(0x6e0929);
__builtin_memmove((R+0),gp(0x8a8a24),4);
}
B6e092e:{NFSU2_TR(0x6e092e);
__builtin_memmove((R+4),gp(0x8a8a20),4);
}
B6e0934:{NFSU2_TR(0x6e0934);
__builtin_memmove((R+8),gp(0x8a8a1c),4);
}
B6e093a:{NFSU2_TR(0x6e093a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e093b:{NFSU2_TR(0x6e093b);
__builtin_memmove((R+0),gp(0x8a88a0),4);
}
B6e0940:{NFSU2_TR(0x6e0940);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0941:{NFSU2_TR(0x6e0941);
__builtin_memmove((R+4),gp(0x8a7a18),4);
}
B6e0947:{NFSU2_TR(0x6e0947);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0948:{NFSU2_TR(0x6e0948);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e094b:{NFSU2_TR(0x6e094b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e094c:{NFSU2_TR(0x6e094c);
u8 U[4];
w4(U+0,u32(0x8a8a80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0951:{NFSU2_TR(0x6e0951);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0952:{NFSU2_TR(0x6e0952);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e0957ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e04f0u);}goto L6e04f0;}
}
B6e0957:L6e0957:{c.instructions+=6;NFSU2_TR(0x6e0957);
__builtin_memmove((R+0),gp(0x8a8a20),4);
}
B6e095c:{NFSU2_TR(0x6e095c);
__builtin_memmove((R+4),gp(0x8a8a1c),4);
}
B6e0962:{NFSU2_TR(0x6e0962);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B6e0964:{NFSU2_TR(0x6e0964);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6e0967:{NFSU2_TR(0x6e0967);
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
B6e0969:{NFSU2_TR(0x6e0969);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e0983;}}
}
B6e096b:L6e096b:{c.instructions+=4;NFSU2_TR(0x6e096b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e096c:{NFSU2_TR(0x6e096c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e096d:{NFSU2_TR(0x6e096d);
w4(R+24,u32(0x8a8a80ull));
}
B6e0972:{NFSU2_TR(0x6e0972);
__builtin_memmove((R+28),(R+0),4);
}
B6e0974:L6e0974:{c.instructions+=3;NFSU2_TR(0x6e0974);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0975:{NFSU2_TR(0x6e0975);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0976:{NFSU2_TR(0x6e0976);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e097bull));
TAIL_STATIC(0x63d12cu,63d);
}
B6e097b:L6e097b:{c.instructions+=3;NFSU2_TR(0x6e097b);
w1(R+512,carry<u32>(r4(R+24),u32(0x40ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B6e097e:{NFSU2_TR(0x6e097e);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e097f:{NFSU2_TR(0x6e097f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e0974u);}goto L6e0974;}}
}
B6e0981:L6e0981:{c.instructions+=2;NFSU2_TR(0x6e0981);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e0982:{NFSU2_TR(0x6e0982);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e0983:L6e0983:{c.instructions+=1;NFSU2_TR(0x6e0983);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e0990:L6e0990:{c.instructions+=8;NFSU2_TR(0x6e0990);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0991:{NFSU2_TR(0x6e0991);
__builtin_memmove((R+20),(R+16),4);
}
B6e0993:{NFSU2_TR(0x6e0993);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B6e0996:{NFSU2_TR(0x6e0996);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x54ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x54ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x54ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e0999:{NFSU2_TR(0x6e0999);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e099a:{NFSU2_TR(0x6e099a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e099b:{NFSU2_TR(0x6e099b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e099c:{NFSU2_TR(0x6e099c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e09a1ull));
TAIL_STATIC(0x6dc330u,6dc);
}
B6e09a1:L6e09a1:{c.instructions+=2;NFSU2_TR(0x6e09a1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e09a3:{NFSU2_TR(0x6e09a3);
if(r1(R+518)){{goto L6e0d72;}}
}
B6e09a9:L6e09a9:{c.instructions+=9;NFSU2_TR(0x6e09a9);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e09ab:{NFSU2_TR(0x6e09ab);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6e09af:{NFSU2_TR(0x6e09af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e09b0:{NFSU2_TR(0x6e09b0);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6e09b4:{NFSU2_TR(0x6e09b4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e09b5:{NFSU2_TR(0x6e09b5);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6e09b9:{NFSU2_TR(0x6e09b9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e09ba:{NFSU2_TR(0x6e09ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e09c2:{NFSU2_TR(0x6e09c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e09c7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e0690u);}goto L6e0690;}
}
B6e09c7:L6e09c7:{c.instructions+=12;NFSU2_TR(0x6e09c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e09cb:{NFSU2_TR(0x6e09cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e09ce:{NFSU2_TR(0x6e09ce);
__builtin_memmove((R+4),(R+24),4);
}
B6e09d0:{NFSU2_TR(0x6e09d0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6e09d3:{NFSU2_TR(0x6e09d3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6e09d6:{NFSU2_TR(0x6e09d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e09d7:{NFSU2_TR(0x6e09d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6e09db:{NFSU2_TR(0x6e09db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e09dc:{NFSU2_TR(0x6e09dc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e09dd:{NFSU2_TR(0x6e09dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e09e1:{NFSU2_TR(0x6e09e1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e09e3:{NFSU2_TR(0x6e09e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e09e8ull));
TAIL_STATIC(0x6dcc00u,6dc);
}
B6e09e8:L6e09e8:{c.instructions+=6;NFSU2_TR(0x6e09e8);
__builtin_memmove((R+8),gp(0x8a7a10),4);
}
B6e09ee:{NFSU2_TR(0x6e09ee);
__builtin_memmove(gp(0x8a8a30),(R+0),4);
}
B6e09f3:{NFSU2_TR(0x6e09f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e09f6:{NFSU2_TR(0x6e09f6);
__builtin_memmove((R+0),gp(0x81cb38),4);
}
B6e09fb:{NFSU2_TR(0x6e09fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e09fd:{NFSU2_TR(0x6e09fd);
if(r1(R+518)){{goto L6e0b34;}}
}
B6e0a03:L6e0a03:{c.instructions+=2;NFSU2_TR(0x6e0a03);
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
B6e0a05:{NFSU2_TR(0x6e0a05);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e0d62;}}
}
B6e0a0b:L6e0a0b:{c.instructions+=3;NFSU2_TR(0x6e0a0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e0a0f:{NFSU2_TR(0x6e0a0f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x14ull))));
}
B6e0a12:{NFSU2_TR(0x6e0a12);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0a16:L6e0a16:{c.instructions+=60;NFSU2_TR(0x6e0a16);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e0a1a:{NFSU2_TR(0x6e0a1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e0a1c:{NFSU2_TR(0x6e0a1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e0a1f:{NFSU2_TR(0x6e0a1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e0a22:{NFSU2_TR(0x6e0a22);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e0a26:{NFSU2_TR(0x6e0a26);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0a2a:{NFSU2_TR(0x6e0a2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4800),(U+4),4);
w4(R+4804,u32(0x0ull));
w4(R+4808,u32(0x0ull));
w4(R+4812,u32(0x0ull));
}
B6e0a30:{NFSU2_TR(0x6e0a30);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0a33:{NFSU2_TR(0x6e0a33);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6e0a36:{NFSU2_TR(0x6e0a36);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8a8a80ull))));
}
B6e0a3b:{NFSU2_TR(0x6e0a3b);
u8 U[36];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4608),(U+20),4);
__builtin_memmove((R+4612),(U+24),4);
__builtin_memmove((R+4616),(U+28),4);
__builtin_memmove((R+4620),(U+32),4);
}
B6e0a3f:{NFSU2_TR(0x6e0a3f);
u8 U[36];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4672),(U+20),4);
__builtin_memmove((R+4676),(U+24),4);
__builtin_memmove((R+4680),(U+28),4);
__builtin_memmove((R+4684),(U+32),4);
}
B6e0a43:{NFSU2_TR(0x6e0a43);
u8 U[32];
__builtin_memmove((U+0),gp(u32(r4(R+0))),16);
__builtin_memmove((U+16),(U+0),16);
__builtin_memmove((R+4736),(U+16),4);
__builtin_memmove((R+4740),(U+20),4);
__builtin_memmove((R+4744),(U+24),4);
__builtin_memmove((R+4748),(U+28),4);
}
B6e0a46:{NFSU2_TR(0x6e0a46);
u8 U[36];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4992),(U+20),4);
__builtin_memmove((R+4996),(U+24),4);
__builtin_memmove((R+5000),(U+28),4);
__builtin_memmove((R+5004),(U+32),4);
}
B6e0a4a:{NFSU2_TR(0x6e0a4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e0a4d:{NFSU2_TR(0x6e0a4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0a51:{NFSU2_TR(0x6e0a51);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4864),(U+4),4);
w4(R+4868,u32(0x0ull));
w4(R+4872,u32(0x0ull));
w4(R+4876,u32(0x0ull));
}
B6e0a57:{NFSU2_TR(0x6e0a57);
__builtin_memmove((R+5056),(R+4608),4);
__builtin_memmove((R+5060),(R+4612),4);
__builtin_memmove((R+5064),(R+4616),4);
__builtin_memmove((R+5068),(R+4620),4);
}
B6e0a5a:{NFSU2_TR(0x6e0a5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0a5e:{NFSU2_TR(0x6e0a5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4928),(U+4),4);
w4(R+4932,u32(0x0ull));
w4(R+4936,u32(0x0ull));
w4(R+4940,u32(0x0ull));
}
B6e0a64:{NFSU2_TR(0x6e0a64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e0a66:{NFSU2_TR(0x6e0a66);
u8 U[76];
__builtin_memmove((U+44),(R+4864),4);
__builtin_memmove((U+48),(R+4868),4);
__builtin_memmove((U+52),(R+4872),4);
__builtin_memmove((U+56),(R+4876),4);
__builtin_memmove((U+60),(R+4864),4);
__builtin_memmove((U+64),(R+4868),4);
__builtin_memmove((U+68),(R+4872),4);
__builtin_memmove((U+72),(R+4876),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4864,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4868,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4872,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4876,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6e0a6a:{NFSU2_TR(0x6e0a6a);
u8 U[76];
__builtin_memmove((U+44),(R+4928),4);
__builtin_memmove((U+48),(R+4932),4);
__builtin_memmove((U+52),(R+4936),4);
__builtin_memmove((U+56),(R+4940),4);
__builtin_memmove((U+60),(R+4928),4);
__builtin_memmove((U+64),(R+4932),4);
__builtin_memmove((U+68),(R+4936),4);
__builtin_memmove((U+72),(R+4940),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4928,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4932,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4936,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4940,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6e0a6e:{NFSU2_TR(0x6e0a6e);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(R+4928))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(R+4932))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(R+4936))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(R+4940))));
}
B6e0a71:{NFSU2_TR(0x6e0a71);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4800),4);
__builtin_memmove((U+64),(R+4804),4);
__builtin_memmove((U+68),(R+4808),4);
__builtin_memmove((U+72),(R+4812),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4800,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4804,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4808,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4812,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6e0a75:{NFSU2_TR(0x6e0a75);
__builtin_memmove((R+4928),(R+4672),4);
__builtin_memmove((R+4932),(R+4676),4);
__builtin_memmove((R+4936),(R+4680),4);
__builtin_memmove((R+4940),(R+4684),4);
}
B6e0a78:{NFSU2_TR(0x6e0a78);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4864))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4868))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4872))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4876))));
}
B6e0a7b:{NFSU2_TR(0x6e0a7b);
__builtin_memmove((R+4864),(R+4736),4);
__builtin_memmove((R+4868),(R+4740),4);
__builtin_memmove((R+4872),(R+4744),4);
__builtin_memmove((R+4876),(R+4748),4);
}
B6e0a7e:{NFSU2_TR(0x6e0a7e);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(R+4800))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(R+4804))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(R+4808))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(R+4812))));
}
B6e0a81:{NFSU2_TR(0x6e0a81);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0a85:{NFSU2_TR(0x6e0a85);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4800),(U+4),4);
w4(R+4804,u32(0x0ull));
w4(R+4808,u32(0x0ull));
w4(R+4812,u32(0x0ull));
}
B6e0a8b:{NFSU2_TR(0x6e0a8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e0a8e:{NFSU2_TR(0x6e0a8e);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4800),4);
__builtin_memmove((U+64),(R+4804),4);
__builtin_memmove((U+68),(R+4808),4);
__builtin_memmove((U+72),(R+4812),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4800,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4804,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4808,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4812,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6e0a92:{NFSU2_TR(0x6e0a92);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(R+4800))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(R+4804))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(R+4808))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(R+4812))));
}
B6e0a95:{NFSU2_TR(0x6e0a95);
__builtin_memmove((R+4800),(R+4608),4);
__builtin_memmove((R+4804),(R+4612),4);
__builtin_memmove((R+4808),(R+4616),4);
__builtin_memmove((R+4812),(R+4620),4);
}
B6e0a98:{NFSU2_TR(0x6e0a98);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e0a9b:{NFSU2_TR(0x6e0a9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0a9f:{NFSU2_TR(0x6e0a9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4608),(U+4),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B6e0aa5:{NFSU2_TR(0x6e0aa5);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6e0aa9:{NFSU2_TR(0x6e0aa9);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4608))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(R+4612))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(R+4616))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(R+4620))));
}
B6e0aac:{NFSU2_TR(0x6e0aac);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0ab0:{NFSU2_TR(0x6e0ab0);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4608),(U+4),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B6e0ab6:{NFSU2_TR(0x6e0ab6);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6e0aba:{NFSU2_TR(0x6e0aba);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4608))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4612))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4616))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4620))));
}
B6e0abd:{NFSU2_TR(0x6e0abd);
w4(R+5056,b32(f32(r4(R+5056))+f32(r4(R+4992))));
w4(R+5060,b32(f32(r4(R+5060))+f32(r4(R+4996))));
w4(R+5064,b32(f32(r4(R+5064))+f32(r4(R+5000))));
w4(R+5068,b32(f32(r4(R+5068))+f32(r4(R+5004))));
}
B6e0ac0:{NFSU2_TR(0x6e0ac0);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(R+4928))));
w4(R+4868,b32(f32(r4(R+4868))+f32(r4(R+4932))));
w4(R+4872,b32(f32(r4(R+4872))+f32(r4(R+4936))));
w4(R+4876,b32(f32(r4(R+4876))+f32(r4(R+4940))));
}
B6e0ac3:{NFSU2_TR(0x6e0ac3);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(R+4672))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(R+4676))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(R+4680))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(R+4684))));
}
B6e0ac6:{NFSU2_TR(0x6e0ac6);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(R+5056))));
w4(R+4868,b32(f32(r4(R+4868))+f32(r4(R+5060))));
w4(R+4872,b32(f32(r4(R+4872))+f32(r4(R+5064))));
w4(R+4876,b32(f32(r4(R+4876))+f32(r4(R+5068))));
}
B6e0ac9:{NFSU2_TR(0x6e0ac9);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(R+4800))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(R+4804))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(R+4808))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(R+4812))));
}
B6e0acc:{NFSU2_TR(0x6e0acc);
w2(R+4260,u16(0xffffull));
}
B6e0ace:{NFSU2_TR(0x6e0ace);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0ad2:{NFSU2_TR(0x6e0ad2);
u8 U[20];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4864),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B6e0ad7:{NFSU2_TR(0x6e0ad7);
u8 U[20];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4736),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B6e0adc:{NFSU2_TR(0x6e0adc);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e0ae0:{NFSU2_TR(0x6e0ae0);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6e0ae4:{NFSU2_TR(0x6e0ae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0ae7:{NFSU2_TR(0x6e0ae7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0aea:{NFSU2_TR(0x6e0aea);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e0aee:{NFSU2_TR(0x6e0aee);
w4(R+4,u32(0x8ull));
}
B6e0af3:{NFSU2_TR(0x6e0af3);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B6e0af7:L6e0af7:{c.instructions+=1;NFSU2_TR(0x6e0af7);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6e0af9;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e0af7u);}goto L6e0af7;}
}
B6e0af9:L6e0af9:{c.instructions+=12;NFSU2_TR(0x6e0af9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e0afd:{NFSU2_TR(0x6e0afd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0b01:{NFSU2_TR(0x6e0b01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e0b04:{NFSU2_TR(0x6e0b04);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x20ull))));
}
B6e0b07:{NFSU2_TR(0x6e0b07);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B6e0b09:{NFSU2_TR(0x6e0b09);
w1(R+512,carry<u32>(r4(R+12),u32(0x20ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x20ull))));
}
B6e0b0c:{NFSU2_TR(0x6e0b0c);
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
B6e0b0d:{NFSU2_TR(0x6e0b0d);
w2(R+4260,u16(0xffffull));
}
B6e0b0f:{NFSU2_TR(0x6e0b0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0b13:{NFSU2_TR(0x6e0b13);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0b17:{NFSU2_TR(0x6e0b17);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0b1b:{NFSU2_TR(0x6e0b1b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e0a16u);}goto L6e0a16;}}
}
B6e0b21:L6e0b21:{c.instructions+=2;NFSU2_TR(0x6e0b21);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e0b25:{NFSU2_TR(0x6e0b25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e0b2aull));
TAIL_STATIC(0x6dc520u,6dc);
}
B6e0b2a:L6e0b2a:{c.instructions+=2;NFSU2_TR(0x6e0b2a);
__builtin_memmove((R+0),gp(0x8a7a10),4);
}
B6e0b2f:{NFSU2_TR(0x6e0b2f);
{goto L6e0d87;}
}
B6e0b34:L6e0b34:{c.instructions+=3;NFSU2_TR(0x6e0b34);
__builtin_memmove((R+0),gp(0x81cb54),4);
}
B6e0b39:{NFSU2_TR(0x6e0b39);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e0b3b:{NFSU2_TR(0x6e0b3b);
if(r1(R+518)){{goto L6e0caa;}}
}
B6e0b41:L6e0b41:{c.instructions+=2;NFSU2_TR(0x6e0b41);
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
B6e0b43:{NFSU2_TR(0x6e0b43);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e0d62;}}
}
B6e0b49:L6e0b49:{c.instructions+=4;NFSU2_TR(0x6e0b49);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e0b4d:{NFSU2_TR(0x6e0b4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0b51:{NFSU2_TR(0x6e0b51);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e0b54:{NFSU2_TR(0x6e0b54);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0b58:L6e0b58:{c.instructions+=92;NFSU2_TR(0x6e0b58);
w2(R+4260,0xffffu);
}
B6e0b5a:{NFSU2_TR(0x6e0b5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e0b5c:{NFSU2_TR(0x6e0b5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e0b5f:{NFSU2_TR(0x6e0b5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e0b63:{NFSU2_TR(0x6e0b63);
w8(R+4352,u64(r4(R+8)));
}
B6e0b66:{NFSU2_TR(0x6e0b66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0b69:{NFSU2_TR(0x6e0b69);
__builtin_memmove((R+4368),(R+4352),8);
}
B6e0b6c:{NFSU2_TR(0x6e0b6c);
__builtin_memmove((R+4372),(R+4352),4);
}
B6e0b6f:{NFSU2_TR(0x6e0b6f);
__builtin_memmove((R+4352),(R+4368),8);
}
B6e0b72:{NFSU2_TR(0x6e0b72);
w8(R+4368,u64(r4(R+8)));
}
B6e0b75:{NFSU2_TR(0x6e0b75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0b78:{NFSU2_TR(0x6e0b78);
__builtin_memmove((R+4384),(R+4368),8);
}
B6e0b7b:{NFSU2_TR(0x6e0b7b);
__builtin_memmove((R+4388),(R+4368),4);
}
B6e0b7e:{NFSU2_TR(0x6e0b7e);
__builtin_memmove((R+4368),(R+4384),8);
}
B6e0b81:{NFSU2_TR(0x6e0b81);
w8(R+4384,u64(r4(R+8)));
}
B6e0b84:{NFSU2_TR(0x6e0b84);
__builtin_memmove((R+4400),(R+4384),8);
}
B6e0b87:{NFSU2_TR(0x6e0b87);
__builtin_memmove((R+4404),(R+4384),4);
}
B6e0b8a:{NFSU2_TR(0x6e0b8a);
__builtin_memmove((R+4384),(R+4400),8);
}
B6e0b8d:{NFSU2_TR(0x6e0b8d);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6e0b90:{NFSU2_TR(0x6e0b90);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8a8a80ull))));
}
B6e0b95:{NFSU2_TR(0x6e0b95);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B6e0b99:{NFSU2_TR(0x6e0b99);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6e0b9d:{NFSU2_TR(0x6e0b9d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4432),(U+0),8);
}
B6e0ba0:{NFSU2_TR(0x6e0ba0);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4384))));}
}
B6e0ba4:{NFSU2_TR(0x6e0ba4);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B6e0ba8:{NFSU2_TR(0x6e0ba8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B6e0bac:{NFSU2_TR(0x6e0bac);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4368))));}
}
B6e0bb0:{NFSU2_TR(0x6e0bb0);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4352))));}
}
B6e0bb4:{NFSU2_TR(0x6e0bb4);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4400))));}
}
B6e0bb8:{NFSU2_TR(0x6e0bb8);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6e0bbc:{NFSU2_TR(0x6e0bbc);
u8 U[8];
__builtin_memmove((U+0),(R+4432),8);
s8_(u32(r4(R+4)),r8(U+0));
}
B6e0bbf:{NFSU2_TR(0x6e0bbf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B6e0bc3:{NFSU2_TR(0x6e0bc3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6e0bc7:{NFSU2_TR(0x6e0bc7);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4384))));}
}
B6e0bcb:{NFSU2_TR(0x6e0bcb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B6e0bcf:{NFSU2_TR(0x6e0bcf);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B6e0bd3:{NFSU2_TR(0x6e0bd3);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6e0bd7:{NFSU2_TR(0x6e0bd7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6e0bdb:{NFSU2_TR(0x6e0bdb);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B6e0bdf:{NFSU2_TR(0x6e0bdf);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B6e0be3:{NFSU2_TR(0x6e0be3);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4416))));}
}
B6e0be7:{NFSU2_TR(0x6e0be7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6e0beb:{NFSU2_TR(0x6e0beb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6e0bef:{NFSU2_TR(0x6e0bef);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4432),(U+0),8);
}
B6e0bf2:{NFSU2_TR(0x6e0bf2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6e0bf5:{NFSU2_TR(0x6e0bf5);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0bf9:{NFSU2_TR(0x6e0bf9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e0bfb:{NFSU2_TR(0x6e0bfb);
w8(R+4352,u64(r4(R+8)));
}
B6e0bfe:{NFSU2_TR(0x6e0bfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0c01:{NFSU2_TR(0x6e0c01);
__builtin_memmove((R+4368),(R+4352),8);
}
B6e0c04:{NFSU2_TR(0x6e0c04);
__builtin_memmove((R+4372),(R+4352),4);
}
B6e0c07:{NFSU2_TR(0x6e0c07);
__builtin_memmove((R+4352),(R+4368),8);
}
B6e0c0a:{NFSU2_TR(0x6e0c0a);
w8(R+4368,u64(r4(R+8)));
}
B6e0c0d:{NFSU2_TR(0x6e0c0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e0c0f:{NFSU2_TR(0x6e0c0f);
__builtin_memmove((R+4384),(R+4368),8);
}
B6e0c12:{NFSU2_TR(0x6e0c12);
__builtin_memmove((R+4388),(R+4368),4);
}
B6e0c15:{NFSU2_TR(0x6e0c15);
__builtin_memmove((R+4368),(R+4384),8);
}
B6e0c18:{NFSU2_TR(0x6e0c18);
w8(R+4384,u64(r4(R+8)));
}
B6e0c1b:{NFSU2_TR(0x6e0c1b);
__builtin_memmove((R+4400),(R+4384),8);
}
B6e0c1e:{NFSU2_TR(0x6e0c1e);
__builtin_memmove((R+4404),(R+4384),4);
}
B6e0c21:{NFSU2_TR(0x6e0c21);
__builtin_memmove((R+4384),(R+4400),8);
}
B6e0c24:{NFSU2_TR(0x6e0c24);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B6e0c28:{NFSU2_TR(0x6e0c28);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6e0c2c:{NFSU2_TR(0x6e0c2c);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4368))));}
}
B6e0c30:{NFSU2_TR(0x6e0c30);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4352))));}
}
B6e0c34:{NFSU2_TR(0x6e0c34);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6e0c38:{NFSU2_TR(0x6e0c38);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4400))));}
}
B6e0c3c:{NFSU2_TR(0x6e0c3c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6e0c40:{NFSU2_TR(0x6e0c40);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B6e0c44:{NFSU2_TR(0x6e0c44);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6e0c48:{NFSU2_TR(0x6e0c48);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B6e0c4c:{NFSU2_TR(0x6e0c4c);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6e0c50:{NFSU2_TR(0x6e0c50);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6e0c54:{NFSU2_TR(0x6e0c54);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B6e0c58:{NFSU2_TR(0x6e0c58);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B6e0c5c:{NFSU2_TR(0x6e0c5c);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B6e0c60:{NFSU2_TR(0x6e0c60);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0c64:{NFSU2_TR(0x6e0c64);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6e0c68:{NFSU2_TR(0x6e0c68);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e0c6c:{NFSU2_TR(0x6e0c6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e0c70:{NFSU2_TR(0x6e0c70);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0c73:{NFSU2_TR(0x6e0c73);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0c76:{NFSU2_TR(0x6e0c76);
w2(R+4260,0xffffu);
}
B6e0c78:{NFSU2_TR(0x6e0c78);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x20ull))));
}
B6e0c7b:{NFSU2_TR(0x6e0c7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e0c7f:{NFSU2_TR(0x6e0c7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e0c83:{NFSU2_TR(0x6e0c83);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B6e0c85:{NFSU2_TR(0x6e0c85);
w1(R+512,carry<u32>(r4(R+24),u32(0x20ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x20ull))));
}
B6e0c88:{NFSU2_TR(0x6e0c88);
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
B6e0c89:{NFSU2_TR(0x6e0c89);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0c8d:{NFSU2_TR(0x6e0c8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0c91:{NFSU2_TR(0x6e0c91);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e0b58u);}goto L6e0b58;}}
}
B6e0c97:L6e0c97:{c.instructions+=2;NFSU2_TR(0x6e0c97);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e0c9b:{NFSU2_TR(0x6e0c9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e0ca0ull));
TAIL_STATIC(0x6dc520u,6dc);
}
B6e0ca0:L6e0ca0:{c.instructions+=2;NFSU2_TR(0x6e0ca0);
__builtin_memmove((R+0),gp(0x8a7a10),4);
}
B6e0ca5:{NFSU2_TR(0x6e0ca5);
{goto L6e0d87;}
}
B6e0caa:L6e0caa:{c.instructions+=2;NFSU2_TR(0x6e0caa);
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
B6e0cac:{NFSU2_TR(0x6e0cac);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e0d62;}}
}
B6e0cb2:L6e0cb2:{c.instructions+=4;NFSU2_TR(0x6e0cb2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e0cb6:{NFSU2_TR(0x6e0cb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0cba:{NFSU2_TR(0x6e0cba);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e0cbe:{NFSU2_TR(0x6e0cbe);
__builtin_memmove((R+28),(R+28),4);
}
B6e0cc0:L6e0cc0:{c.instructions+=9;NFSU2_TR(0x6e0cc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e0cc3:{NFSU2_TR(0x6e0cc3);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6e0cc6:{NFSU2_TR(0x6e0cc6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8a8a80ull))));
}
B6e0ccb:{NFSU2_TR(0x6e0ccb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0ccc:{NFSU2_TR(0x6e0ccc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0ccd:{NFSU2_TR(0x6e0ccd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0cce:{NFSU2_TR(0x6e0cce);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0cd2:{NFSU2_TR(0x6e0cd2);
__builtin_memmove((R+12),(R+4),4);
}
B6e0cd4:{NFSU2_TR(0x6e0cd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e0cd9ull));
TAIL_STATIC(0x81cb20u,81c);
}
B6e0cd9:L6e0cd9:{c.instructions+=48;NFSU2_TR(0x6e0cd9);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B6e0cdc:{NFSU2_TR(0x6e0cdc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6e0cdf:{NFSU2_TR(0x6e0cdf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6e0ce2:{NFSU2_TR(0x6e0ce2);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0ce6:{NFSU2_TR(0x6e0ce6);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0cea:{NFSU2_TR(0x6e0cea);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e0cee:{NFSU2_TR(0x6e0cee);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e0cf2:{NFSU2_TR(0x6e0cf2);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0cf6:{NFSU2_TR(0x6e0cf6);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e0cf8:{NFSU2_TR(0x6e0cf8);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e0cfb:{NFSU2_TR(0x6e0cfb);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e0cfd:{NFSU2_TR(0x6e0cfd);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e0d00:{NFSU2_TR(0x6e0d00);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e0d02:{NFSU2_TR(0x6e0d02);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e0d04:{NFSU2_TR(0x6e0d04);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e0d07:{NFSU2_TR(0x6e0d07);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e0d0a:{NFSU2_TR(0x6e0d0a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e0d0d:{NFSU2_TR(0x6e0d0d);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e0d10:{NFSU2_TR(0x6e0d10);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e0d13:{NFSU2_TR(0x6e0d13);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e0d16:{NFSU2_TR(0x6e0d16);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B6e0d18:{NFSU2_TR(0x6e0d18);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B6e0d1a:{NFSU2_TR(0x6e0d1a);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B6e0d1c:{NFSU2_TR(0x6e0d1c);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B6e0d1e:{NFSU2_TR(0x6e0d1e);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e0d21:{NFSU2_TR(0x6e0d21);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e0d24:{NFSU2_TR(0x6e0d24);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e0d27:{NFSU2_TR(0x6e0d27);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e0d2a:{NFSU2_TR(0x6e0d2a);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e0d2d:{NFSU2_TR(0x6e0d2d);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e0d30:{NFSU2_TR(0x6e0d30);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B6e0d32:{NFSU2_TR(0x6e0d32);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B6e0d34:{NFSU2_TR(0x6e0d34);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B6e0d36:{NFSU2_TR(0x6e0d36);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B6e0d38:{NFSU2_TR(0x6e0d38);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B6e0d3a:{NFSU2_TR(0x6e0d3a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6e0d3c:{NFSU2_TR(0x6e0d3c);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B6e0d3e:{NFSU2_TR(0x6e0d3e);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e0d40:{NFSU2_TR(0x6e0d40);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e0d43:{NFSU2_TR(0x6e0d43);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e0d46:{NFSU2_TR(0x6e0d46);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e0d4a:{NFSU2_TR(0x6e0d4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e0d4e:{NFSU2_TR(0x6e0d4e);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B6e0d50:{NFSU2_TR(0x6e0d50);
w1(R+512,carry<u32>(r4(R+24),u32(0x20ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x20ull))));
}
B6e0d53:{NFSU2_TR(0x6e0d53);
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
B6e0d54:{NFSU2_TR(0x6e0d54);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0d58:{NFSU2_TR(0x6e0d58);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0d5c:{NFSU2_TR(0x6e0d5c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e0cc0u);}goto L6e0cc0;}}
}
B6e0d62:L6e0d62:{c.instructions+=2;NFSU2_TR(0x6e0d62);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e0d66:{NFSU2_TR(0x6e0d66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e0d6bull));
TAIL_STATIC(0x6dc520u,6dc);
}
B6e0d6b:L6e0d6b:{c.instructions+=2;NFSU2_TR(0x6e0d6b);
__builtin_memmove((R+0),gp(0x8a7a10),4);
}
B6e0d70:{NFSU2_TR(0x6e0d70);
{goto L6e0d87;}
}
B6e0d72:L6e0d72:{c.instructions+=5;NFSU2_TR(0x6e0d72);
__builtin_memmove((R+0),gp(0x8a7a10),4);
}
B6e0d77:{NFSU2_TR(0x6e0d77);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e0d7a:{NFSU2_TR(0x6e0d7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0d7d:{NFSU2_TR(0x6e0d7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0d81:{NFSU2_TR(0x6e0d81);
__builtin_memmove(gp(0x8a8a30),(R+8),4);
}
B6e0d87:L6e0d87:{c.instructions+=5;NFSU2_TR(0x6e0d87);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e0d8b:{NFSU2_TR(0x6e0d8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0d8e:{NFSU2_TR(0x6e0d8e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0d8f:{NFSU2_TR(0x6e0d8f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0d90:{NFSU2_TR(0x6e0d90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e0d95ull));
TAIL_STATIC(0x6dbfb0u,6db);
}
B6e0d95:L6e0d95:{c.instructions+=7;NFSU2_TR(0x6e0d95);
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
B6e0d98:{NFSU2_TR(0x6e0d98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e0d99:{NFSU2_TR(0x6e0d99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e0d9a:{NFSU2_TR(0x6e0d9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e0d9b:{NFSU2_TR(0x6e0d9b);
__builtin_memmove((R+16),(R+20),4);
}
B6e0d9d:{NFSU2_TR(0x6e0d9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e0d9e:{NFSU2_TR(0x6e0d9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e0da0:L6e0da0:{c.instructions+=8;NFSU2_TR(0x6e0da0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0da1:{NFSU2_TR(0x6e0da1);
__builtin_memmove((R+20),(R+16),4);
}
B6e0da3:{NFSU2_TR(0x6e0da3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B6e0da6:{NFSU2_TR(0x6e0da6);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x14ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e0da9:{NFSU2_TR(0x6e0da9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0daa:{NFSU2_TR(0x6e0daa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0dab:{NFSU2_TR(0x6e0dab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0dac:{NFSU2_TR(0x6e0dac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e0db1ull));
TAIL_STATIC(0x6dc330u,6dc);
}
B6e0db1:L6e0db1:{c.instructions+=2;NFSU2_TR(0x6e0db1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e0db3:{NFSU2_TR(0x6e0db3);
if(r1(R+518)){{goto L6e0fcd;}}
}
B6e0db9:L6e0db9:{c.instructions+=9;NFSU2_TR(0x6e0db9);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0dbb:{NFSU2_TR(0x6e0dbb);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6e0dbf:{NFSU2_TR(0x6e0dbf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0dc0:{NFSU2_TR(0x6e0dc0);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6e0dc4:{NFSU2_TR(0x6e0dc4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0dc5:{NFSU2_TR(0x6e0dc5);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6e0dc9:{NFSU2_TR(0x6e0dc9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0dca:{NFSU2_TR(0x6e0dca);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e0dd2:{NFSU2_TR(0x6e0dd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e0dd7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e0690u);}goto L6e0690;}
}
B6e0dd7:L6e0dd7:{c.instructions+=12;NFSU2_TR(0x6e0dd7);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e0ddb:{NFSU2_TR(0x6e0ddb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e0dde:{NFSU2_TR(0x6e0dde);
__builtin_memmove((R+4),(R+24),4);
}
B6e0de0:{NFSU2_TR(0x6e0de0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6e0de3:{NFSU2_TR(0x6e0de3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6e0de6:{NFSU2_TR(0x6e0de6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0de7:{NFSU2_TR(0x6e0de7);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6e0deb:{NFSU2_TR(0x6e0deb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0dec:{NFSU2_TR(0x6e0dec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0ded:{NFSU2_TR(0x6e0ded);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e0df1:{NFSU2_TR(0x6e0df1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0df3:{NFSU2_TR(0x6e0df3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e0df8ull));
TAIL_STATIC(0x6dcc00u,6dc);
}
B6e0df8:L6e0df8:{c.instructions+=6;NFSU2_TR(0x6e0df8);
__builtin_memmove((R+8),gp(0x8a7a10),4);
}
B6e0dfe:{NFSU2_TR(0x6e0dfe);
__builtin_memmove(gp(0x8a8a30),(R+0),4);
}
B6e0e03:{NFSU2_TR(0x6e0e03);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0e06:{NFSU2_TR(0x6e0e06);
__builtin_memmove((R+0),gp(0x81cb38),4);
}
B6e0e0b:{NFSU2_TR(0x6e0e0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e0e0d:{NFSU2_TR(0x6e0e0d);
if(r1(R+518)){{goto L6e0ead;}}
}
B6e0e13:L6e0e13:{c.instructions+=2;NFSU2_TR(0x6e0e13);
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
B6e0e15:{NFSU2_TR(0x6e0e15);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e0fbd;}}
}
B6e0e1b:L6e0e1b:{c.instructions+=2;NFSU2_TR(0x6e0e1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0e1e:{NFSU2_TR(0x6e0e1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e0e22:L6e0e22:{c.instructions+=35;NFSU2_TR(0x6e0e22);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e0e25:{NFSU2_TR(0x6e0e25);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e0e28:{NFSU2_TR(0x6e0e28);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0e2c:{NFSU2_TR(0x6e0e2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e0e2f:{NFSU2_TR(0x6e0e2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4608),(U+4),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B6e0e35:{NFSU2_TR(0x6e0e35);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6e0e38:{NFSU2_TR(0x6e0e38);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8a8a80ull))));
}
B6e0e3d:{NFSU2_TR(0x6e0e3d);
u8 U[36];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4672),(U+20),4);
__builtin_memmove((R+4676),(U+24),4);
__builtin_memmove((R+4680),(U+28),4);
__builtin_memmove((R+4684),(U+32),4);
}
B6e0e41:{NFSU2_TR(0x6e0e41);
u8 U[36];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4736),(U+20),4);
__builtin_memmove((R+4740),(U+24),4);
__builtin_memmove((R+4744),(U+28),4);
__builtin_memmove((R+4748),(U+32),4);
}
B6e0e45:{NFSU2_TR(0x6e0e45);
u8 U[32];
__builtin_memmove((U+0),gp(u32(r4(R+0))),16);
__builtin_memmove((U+16),(U+0),16);
__builtin_memmove((R+4800),(U+16),4);
__builtin_memmove((R+4804),(U+20),4);
__builtin_memmove((R+4808),(U+24),4);
__builtin_memmove((R+4812),(U+28),4);
}
B6e0e48:{NFSU2_TR(0x6e0e48);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6e0e4c:{NFSU2_TR(0x6e0e4c);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4608))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4612))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4616))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4620))));
}
B6e0e4f:{NFSU2_TR(0x6e0e4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0e53:{NFSU2_TR(0x6e0e53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6e0e55:{NFSU2_TR(0x6e0e55);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4608),(U+4),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B6e0e5b:{NFSU2_TR(0x6e0e5b);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(R+4672))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(R+4676))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(R+4680))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(R+4684))));
}
B6e0e5e:{NFSU2_TR(0x6e0e5e);
u8 U[36];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4672),(U+20),4);
__builtin_memmove((R+4676),(U+24),4);
__builtin_memmove((R+4680),(U+28),4);
__builtin_memmove((R+4684),(U+32),4);
}
B6e0e62:{NFSU2_TR(0x6e0e62);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e0e66:{NFSU2_TR(0x6e0e66);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6e0e6a:{NFSU2_TR(0x6e0e6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0e6e:{NFSU2_TR(0x6e0e6e);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4608))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(R+4612))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(R+4616))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(R+4620))));
}
B6e0e71:{NFSU2_TR(0x6e0e71);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4608),(U+4),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B6e0e77:{NFSU2_TR(0x6e0e77);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6e0e7b:{NFSU2_TR(0x6e0e7b);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4608))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(R+4612))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(R+4616))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(R+4620))));
}
B6e0e7e:{NFSU2_TR(0x6e0e7e);
w4(R+4800,b32(f32(r4(R+4800))+f32(r4(R+4672))));
w4(R+4804,b32(f32(r4(R+4804))+f32(r4(R+4676))));
w4(R+4808,b32(f32(r4(R+4808))+f32(r4(R+4680))));
w4(R+4812,b32(f32(r4(R+4812))+f32(r4(R+4684))));
}
B6e0e81:{NFSU2_TR(0x6e0e81);
w4(R+4800,b32(f32(r4(R+4800))+f32(r4(R+4736))));
w4(R+4804,b32(f32(r4(R+4804))+f32(r4(R+4740))));
w4(R+4808,b32(f32(r4(R+4808))+f32(r4(R+4744))));
w4(R+4812,b32(f32(r4(R+4812))+f32(r4(R+4748))));
}
B6e0e84:{NFSU2_TR(0x6e0e84);
u8 U[16];
__builtin_memmove((U+0),(R+4800),16);
__builtin_memmove(gp(u32(r4(R+0))),(U+0),16);
}
B6e0e87:{NFSU2_TR(0x6e0e87);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e0e8b:{NFSU2_TR(0x6e0e8b);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B6e0e8d:{NFSU2_TR(0x6e0e8d);
w1(R+512,carry<u32>(r4(R+4),r4(R+8)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B6e0e8f:{NFSU2_TR(0x6e0e8f);
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
B6e0e90:{NFSU2_TR(0x6e0e90);
w2(R+4260,u16(0xffffull));
}
B6e0e92:{NFSU2_TR(0x6e0e92);
w2(R+4260,u16(0xffffull));
}
B6e0e94:{NFSU2_TR(0x6e0e94);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0e98:{NFSU2_TR(0x6e0e98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e0e22u);}goto L6e0e22;}}
}
B6e0e9a:L6e0e9a:{c.instructions+=2;NFSU2_TR(0x6e0e9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e0e9e:{NFSU2_TR(0x6e0e9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e0ea3ull));
TAIL_STATIC(0x6dc520u,6dc);
}
B6e0ea3:L6e0ea3:{c.instructions+=2;NFSU2_TR(0x6e0ea3);
__builtin_memmove((R+0),gp(0x8a7a10),4);
}
B6e0ea8:{NFSU2_TR(0x6e0ea8);
{goto L6e0fe2;}
}
B6e0ead:L6e0ead:{c.instructions+=3;NFSU2_TR(0x6e0ead);
__builtin_memmove((R+0),gp(0x81cb54),4);
}
B6e0eb2:{NFSU2_TR(0x6e0eb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e0eb4:{NFSU2_TR(0x6e0eb4);
if(r1(R+518)){{goto L6e0f81;}}
}
B6e0eba:L6e0eba:{c.instructions+=2;NFSU2_TR(0x6e0eba);
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
B6e0ebc:{NFSU2_TR(0x6e0ebc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e0fbd;}}
}
B6e0ec2:L6e0ec2:{c.instructions+=1;NFSU2_TR(0x6e0ec2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e0ec6:L6e0ec6:{c.instructions+=50;NFSU2_TR(0x6e0ec6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6e0ec8:{NFSU2_TR(0x6e0ec8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e0ecb:{NFSU2_TR(0x6e0ecb);
w2(R+4260,0xffffu);
}
B6e0ecd:{NFSU2_TR(0x6e0ecd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0ed1:{NFSU2_TR(0x6e0ed1);
w8(R+4352,u64(r4(R+12)));
}
B6e0ed4:{NFSU2_TR(0x6e0ed4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e0ed7:{NFSU2_TR(0x6e0ed7);
__builtin_memmove((R+4368),(R+4352),8);
}
B6e0eda:{NFSU2_TR(0x6e0eda);
__builtin_memmove((R+4372),(R+4352),4);
}
B6e0edd:{NFSU2_TR(0x6e0edd);
__builtin_memmove((R+4352),(R+4368),8);
}
B6e0ee0:{NFSU2_TR(0x6e0ee0);
w8(R+4368,u64(r4(R+12)));
}
B6e0ee3:{NFSU2_TR(0x6e0ee3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e0ee6:{NFSU2_TR(0x6e0ee6);
__builtin_memmove((R+4384),(R+4368),8);
}
B6e0ee9:{NFSU2_TR(0x6e0ee9);
__builtin_memmove((R+4388),(R+4368),4);
}
B6e0eec:{NFSU2_TR(0x6e0eec);
__builtin_memmove((R+4368),(R+4384),8);
}
B6e0eef:{NFSU2_TR(0x6e0eef);
w8(R+4384,u64(r4(R+12)));
}
B6e0ef2:{NFSU2_TR(0x6e0ef2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e0ef5:{NFSU2_TR(0x6e0ef5);
__builtin_memmove((R+4400),(R+4384),8);
}
B6e0ef8:{NFSU2_TR(0x6e0ef8);
__builtin_memmove((R+4404),(R+4384),4);
}
B6e0efb:{NFSU2_TR(0x6e0efb);
__builtin_memmove((R+4384),(R+4400),8);
}
B6e0efe:{NFSU2_TR(0x6e0efe);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6e0f01:{NFSU2_TR(0x6e0f01);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8a8a80ull))));
}
B6e0f06:{NFSU2_TR(0x6e0f06);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B6e0f0a:{NFSU2_TR(0x6e0f0a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6e0f0e:{NFSU2_TR(0x6e0f0e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4432),(U+0),8);
}
B6e0f11:{NFSU2_TR(0x6e0f11);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4384))));}
}
B6e0f15:{NFSU2_TR(0x6e0f15);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B6e0f19:{NFSU2_TR(0x6e0f19);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B6e0f1d:{NFSU2_TR(0x6e0f1d);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4368))));}
}
B6e0f21:{NFSU2_TR(0x6e0f21);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4352))));}
}
B6e0f25:{NFSU2_TR(0x6e0f25);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4400))));}
}
B6e0f29:{NFSU2_TR(0x6e0f29);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6e0f2d:{NFSU2_TR(0x6e0f2d);
u8 U[8];
__builtin_memmove((U+0),(R+4432),8);
s8_(u32(r4(R+8)),r8(U+0));
}
B6e0f30:{NFSU2_TR(0x6e0f30);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B6e0f34:{NFSU2_TR(0x6e0f34);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6e0f38:{NFSU2_TR(0x6e0f38);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4384))));}
}
B6e0f3c:{NFSU2_TR(0x6e0f3c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B6e0f40:{NFSU2_TR(0x6e0f40);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B6e0f44:{NFSU2_TR(0x6e0f44);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6e0f48:{NFSU2_TR(0x6e0f48);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6e0f4c:{NFSU2_TR(0x6e0f4c);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B6e0f50:{NFSU2_TR(0x6e0f50);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B6e0f54:{NFSU2_TR(0x6e0f54);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4416))));}
}
B6e0f58:{NFSU2_TR(0x6e0f58);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6e0f5c:{NFSU2_TR(0x6e0f5c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0f60:{NFSU2_TR(0x6e0f60);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B6e0f62:{NFSU2_TR(0x6e0f62);
w1(R+512,carry<u32>(r4(R+4),r4(R+12)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B6e0f64:{NFSU2_TR(0x6e0f64);
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
B6e0f65:{NFSU2_TR(0x6e0f65);
w2(R+4260,0xffffu);
}
B6e0f67:{NFSU2_TR(0x6e0f67);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0f6b:{NFSU2_TR(0x6e0f6b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e0ec6u);}goto L6e0ec6;}}
}
B6e0f71:L6e0f71:{c.instructions+=2;NFSU2_TR(0x6e0f71);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e0f75:{NFSU2_TR(0x6e0f75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e0f7aull));
TAIL_STATIC(0x6dc520u,6dc);
}
B6e0f7a:L6e0f7a:{c.instructions+=2;NFSU2_TR(0x6e0f7a);
__builtin_memmove((R+0),gp(0x8a7a10),4);
}
B6e0f7f:{NFSU2_TR(0x6e0f7f);
{goto L6e0fe2;}
}
B6e0f81:L6e0f81:{c.instructions+=2;NFSU2_TR(0x6e0f81);
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
B6e0f83:{NFSU2_TR(0x6e0f83);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e0fbd;}}
}
B6e0f85:L6e0f85:{c.instructions+=3;NFSU2_TR(0x6e0f85);
__builtin_memmove((R+12),(R+24),4);
}
B6e0f87:{NFSU2_TR(0x6e0f87);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e0f8b:{NFSU2_TR(0x6e0f8b);
{goto L6e0f90;}
}
B6e0f90:L6e0f90:{c.instructions+=8;NFSU2_TR(0x6e0f90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0f93:{NFSU2_TR(0x6e0f93);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e0f97:{NFSU2_TR(0x6e0f97);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6e0f9a:{NFSU2_TR(0x6e0f9a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0f9b:{NFSU2_TR(0x6e0f9b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8a8a80ull))));
}
B6e0fa1:{NFSU2_TR(0x6e0fa1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0fa2:{NFSU2_TR(0x6e0fa2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0fa3:{NFSU2_TR(0x6e0fa3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e0fa8ull));
TAIL_STATIC(0x81cb20u,81c);
}
B6e0fa8:L6e0fa8:{c.instructions+=8;NFSU2_TR(0x6e0fa8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e0fac:{NFSU2_TR(0x6e0fac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0faf:{NFSU2_TR(0x6e0faf);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B6e0fb1:{NFSU2_TR(0x6e0fb1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6e0fb4:{NFSU2_TR(0x6e0fb4);
w1(R+512,carry<u32>(r4(R+24),r4(R+8)));
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B6e0fb6:{NFSU2_TR(0x6e0fb6);
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
B6e0fb7:{NFSU2_TR(0x6e0fb7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0fbb:{NFSU2_TR(0x6e0fbb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e0f90u);}goto L6e0f90;}}
}
B6e0fbd:L6e0fbd:{c.instructions+=2;NFSU2_TR(0x6e0fbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e0fc1:{NFSU2_TR(0x6e0fc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e0fc6ull));
TAIL_STATIC(0x6dc520u,6dc);
}
B6e0fc6:L6e0fc6:{c.instructions+=2;NFSU2_TR(0x6e0fc6);
__builtin_memmove((R+0),gp(0x8a7a10),4);
}
B6e0fcb:{NFSU2_TR(0x6e0fcb);
{goto L6e0fe2;}
}
B6e0fcd:L6e0fcd:{c.instructions+=5;NFSU2_TR(0x6e0fcd);
__builtin_memmove((R+0),gp(0x8a7a10),4);
}
B6e0fd2:{NFSU2_TR(0x6e0fd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e0fd5:{NFSU2_TR(0x6e0fd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0fd8:{NFSU2_TR(0x6e0fd8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e0fdc:{NFSU2_TR(0x6e0fdc);
__builtin_memmove(gp(0x8a8a30),(R+8),4);
}
B6e0fe2:L6e0fe2:{c.instructions+=5;NFSU2_TR(0x6e0fe2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e0fe6:{NFSU2_TR(0x6e0fe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e0fe9:{NFSU2_TR(0x6e0fe9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0fea:{NFSU2_TR(0x6e0fea);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e0feb:{NFSU2_TR(0x6e0feb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e0ff0ull));
TAIL_STATIC(0x6dbfb0u,6db);
}
B6e0ff0:L6e0ff0:{c.instructions+=7;NFSU2_TR(0x6e0ff0);
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
B6e0ff3:{NFSU2_TR(0x6e0ff3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e0ff4:{NFSU2_TR(0x6e0ff4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e0ff5:{NFSU2_TR(0x6e0ff5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e0ff6:{NFSU2_TR(0x6e0ff6);
__builtin_memmove((R+16),(R+20),4);
}
B6e0ff8:{NFSU2_TR(0x6e0ff8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e0ff9:{NFSU2_TR(0x6e0ff9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x6e0,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
