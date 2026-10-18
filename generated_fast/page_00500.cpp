#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_4db(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_501(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5d9(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x500,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x500,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_500(u8* __restrict R,Cpu& c);
u32 page_500(Cpu& c){return body_500(c.regs.data(),c);}
__attribute__((noinline)) u32 body_500(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x500000:goto L500000;
case 0x500004:c.instructions+=17;goto B500004;
case 0x500009:c.instructions+=16;goto B500009;
case 0x50000b:c.instructions+=15;goto B50000b;
case 0x50000d:c.instructions+=14;goto B50000d;
case 0x50000f:c.instructions+=13;goto B50000f;
case 0x500011:c.instructions+=12;goto B500011;
case 0x500012:c.instructions+=11;goto B500012;
case 0x500016:c.instructions+=10;goto B500016;
case 0x500019:c.instructions+=9;goto B500019;
case 0x50001a:c.instructions+=8;goto B50001a;
case 0x50001c:c.instructions+=7;goto B50001c;
case 0x50001d:c.instructions+=6;goto B50001d;
case 0x50001f:c.instructions+=5;goto B50001f;
case 0x500021:c.instructions+=4;goto B500021;
case 0x500026:c.instructions+=3;goto B500026;
case 0x50002b:c.instructions+=2;goto B50002b;
case 0x500031:c.instructions+=1;goto B500031;
case 0x500037:goto L500037;
case 0x500039:goto L500039;
case 0x50003b:goto L50003b;
case 0x50003e:c.instructions+=1;goto B50003e;
case 0x500040:goto L500040;
case 0x500042:c.instructions+=3;goto B500042;
case 0x500044:c.instructions+=2;goto B500044;
case 0x500046:c.instructions+=1;goto B500046;
case 0x500048:goto L500048;
case 0x50004b:c.instructions+=1;goto B50004b;
case 0x500050:goto L500050;
case 0x500052:c.instructions+=6;goto B500052;
case 0x500059:c.instructions+=5;goto B500059;
case 0x50005b:c.instructions+=4;goto B50005b;
case 0x50005c:c.instructions+=3;goto B50005c;
case 0x50005f:c.instructions+=2;goto B50005f;
case 0x500061:c.instructions+=1;goto B500061;
case 0x500063:goto L500063;
case 0x500069:c.instructions+=2;goto B500069;
case 0x50006a:c.instructions+=1;goto B50006a;
case 0x50006c:goto L50006c;
case 0x50006d:c.instructions+=3;goto B50006d;
case 0x50006e:c.instructions+=2;goto B50006e;
case 0x50006f:c.instructions+=1;goto B50006f;
case 0x500070:goto L500070;
case 0x500075:c.instructions+=1;goto B500075;
case 0x50007b:goto L50007b;
case 0x50007c:c.instructions+=9;goto B50007c;
case 0x50007d:c.instructions+=8;goto B50007d;
case 0x50007e:c.instructions+=7;goto B50007e;
case 0x50007f:c.instructions+=6;goto B50007f;
case 0x500080:c.instructions+=5;goto B500080;
case 0x500084:c.instructions+=4;goto B500084;
case 0x50008a:c.instructions+=3;goto B50008a;
case 0x500090:c.instructions+=2;goto B500090;
case 0x500092:c.instructions+=1;goto B500092;
case 0x5000a0:goto L5000a0;
case 0x5000a5:c.instructions+=7;goto B5000a5;
case 0x5000a6:c.instructions+=6;goto B5000a6;
case 0x5000a7:c.instructions+=5;goto B5000a7;
case 0x5000a8:c.instructions+=4;goto B5000a8;
case 0x5000aa:c.instructions+=3;goto B5000aa;
case 0x5000ac:c.instructions+=2;goto B5000ac;
case 0x5000ad:c.instructions+=1;goto B5000ad;
case 0x5000af:goto L5000af;
case 0x5000b5:c.instructions+=3;goto B5000b5;
case 0x5000b9:c.instructions+=2;goto B5000b9;
case 0x5000bc:c.instructions+=1;goto B5000bc;
case 0x5000c0:goto L5000c0;
case 0x5000c2:c.instructions+=4;goto B5000c2;
case 0x5000c4:c.instructions+=3;goto B5000c4;
case 0x5000c6:c.instructions+=2;goto B5000c6;
case 0x5000c9:c.instructions+=1;goto B5000c9;
case 0x5000cb:goto L5000cb;
case 0x5000ce:c.instructions+=1;goto B5000ce;
case 0x5000d0:goto L5000d0;
case 0x5000d2:c.instructions+=1;goto B5000d2;
case 0x5000d4:goto L5000d4;
case 0x5000d5:c.instructions+=3;goto B5000d5;
case 0x5000d8:c.instructions+=2;goto B5000d8;
case 0x5000da:c.instructions+=1;goto B5000da;
case 0x5000dc:goto L5000dc;
case 0x5000e1:c.instructions+=4;goto B5000e1;
case 0x5000e2:c.instructions+=3;goto B5000e2;
case 0x5000e8:c.instructions+=2;goto B5000e8;
case 0x5000ea:c.instructions+=1;goto B5000ea;
case 0x5000ec:goto L5000ec;
case 0x5000ee:goto L5000ee;
case 0x5000ef:c.instructions+=4;goto B5000ef;
case 0x5000f0:c.instructions+=3;goto B5000f0;
case 0x5000f1:c.instructions+=2;goto B5000f1;
case 0x5000f2:c.instructions+=1;goto B5000f2;
case 0x500100:goto L500100;
case 0x500106:c.instructions+=6;goto B500106;
case 0x500107:c.instructions+=5;goto B500107;
case 0x500108:c.instructions+=4;goto B500108;
case 0x50010a:c.instructions+=3;goto B50010a;
case 0x50010c:c.instructions+=2;goto B50010c;
case 0x50010d:c.instructions+=1;goto B50010d;
case 0x50010f:goto L50010f;
case 0x500115:c.instructions+=4;goto B500115;
case 0x500119:c.instructions+=3;goto B500119;
case 0x50011d:c.instructions+=2;goto B50011d;
case 0x50011f:c.instructions+=1;goto B50011f;
case 0x500120:goto L500120;
case 0x500122:c.instructions+=1;goto B500122;
case 0x500124:goto L500124;
case 0x500127:c.instructions+=1;goto B500127;
case 0x500129:goto L500129;
case 0x50012a:c.instructions+=3;goto B50012a;
case 0x500130:c.instructions+=2;goto B500130;
case 0x500132:c.instructions+=1;goto B500132;
case 0x500134:goto L500134;
case 0x500135:c.instructions+=4;goto B500135;
case 0x500136:c.instructions+=3;goto B500136;
case 0x500138:c.instructions+=2;goto B500138;
case 0x500139:c.instructions+=1;goto B500139;
case 0x50013a:goto L50013a;
case 0x500140:c.instructions+=5;goto B500140;
case 0x500141:c.instructions+=4;goto B500141;
case 0x500142:c.instructions+=3;goto B500142;
case 0x500144:c.instructions+=2;goto B500144;
case 0x500145:c.instructions+=1;goto B500145;
case 0x500150:goto L500150;
case 0x500154:c.instructions+=2;goto B500154;
case 0x50015b:c.instructions+=1;goto B50015b;
case 0x500160:goto L500160;
case 0x500163:c.instructions+=3;goto B500163;
case 0x500165:c.instructions+=2;goto B500165;
case 0x500167:c.instructions+=1;goto B500167;
case 0x500169:goto L500169;
case 0x50016c:c.instructions+=1;goto B50016c;
case 0x500170:goto L500170;
case 0x500172:c.instructions+=3;goto B500172;
case 0x500175:c.instructions+=2;goto B500175;
case 0x500176:c.instructions+=1;goto B500176;
case 0x500178:goto L500178;
case 0x500180:goto L500180;
case 0x500183:c.instructions+=2;goto B500183;
case 0x500189:c.instructions+=1;goto B500189;
case 0x500190:goto L500190;
case 0x500196:c.instructions+=6;goto B500196;
case 0x500197:c.instructions+=5;goto B500197;
case 0x500198:c.instructions+=4;goto B500198;
case 0x50019a:c.instructions+=3;goto B50019a;
case 0x50019c:c.instructions+=2;goto B50019c;
case 0x50019d:c.instructions+=1;goto B50019d;
case 0x50019f:goto L50019f;
case 0x5001a5:c.instructions+=3;goto B5001a5;
case 0x5001a9:c.instructions+=2;goto B5001a9;
case 0x5001ab:c.instructions+=1;goto B5001ab;
case 0x5001b0:goto L5001b0;
case 0x5001b3:c.instructions+=2;goto B5001b3;
case 0x5001b5:c.instructions+=1;goto B5001b5;
case 0x5001b7:goto L5001b7;
case 0x5001b8:c.instructions+=3;goto B5001b8;
case 0x5001bb:c.instructions+=2;goto B5001bb;
case 0x5001bd:c.instructions+=1;goto B5001bd;
case 0x5001bf:goto L5001bf;
case 0x5001c0:c.instructions+=4;goto B5001c0;
case 0x5001c1:c.instructions+=3;goto B5001c1;
case 0x5001c3:c.instructions+=2;goto B5001c3;
case 0x5001c4:c.instructions+=1;goto B5001c4;
case 0x5001c5:goto L5001c5;
case 0x5001c8:c.instructions+=6;goto B5001c8;
case 0x5001cb:c.instructions+=5;goto B5001cb;
case 0x5001cd:c.instructions+=4;goto B5001cd;
case 0x5001ce:c.instructions+=3;goto B5001ce;
case 0x5001cf:c.instructions+=2;goto B5001cf;
case 0x5001d0:c.instructions+=1;goto B5001d0;
case 0x5001e0:goto L5001e0;
case 0x5001e5:c.instructions+=4;goto B5001e5;
case 0x5001e6:c.instructions+=3;goto B5001e6;
case 0x5001e8:c.instructions+=2;goto B5001e8;
case 0x5001ea:c.instructions+=1;goto B5001ea;
case 0x5001ec:goto L5001ec;
case 0x5001f1:c.instructions+=3;goto B5001f1;
case 0x5001f2:c.instructions+=2;goto B5001f2;
case 0x5001f3:c.instructions+=1;goto B5001f3;
case 0x5001f5:goto L5001f5;
case 0x5001fa:c.instructions+=1;goto B5001fa;
case 0x5001fc:goto L5001fc;
case 0x500200:c.instructions+=5;goto B500200;
case 0x500202:c.instructions+=4;goto B500202;
case 0x500207:c.instructions+=3;goto B500207;
case 0x500209:c.instructions+=2;goto B500209;
case 0x50020e:c.instructions+=1;goto B50020e;
case 0x500213:goto L500213;
case 0x500215:c.instructions+=1;goto B500215;
case 0x500217:goto L500217;
case 0x50021a:c.instructions+=1;goto B50021a;
case 0x50021c:goto L50021c;
case 0x50021d:c.instructions+=4;goto B50021d;
case 0x500222:c.instructions+=3;goto B500222;
case 0x500224:c.instructions+=2;goto B500224;
case 0x500229:c.instructions+=1;goto B500229;
case 0x50022e:goto L50022e;
case 0x500230:c.instructions+=1;goto B500230;
case 0x500232:goto L500232;
case 0x500237:goto L500237;
case 0x50023d:c.instructions+=4;goto B50023d;
case 0x50023e:c.instructions+=3;goto B50023e;
case 0x500244:c.instructions+=2;goto B500244;
case 0x500246:c.instructions+=1;goto B500246;
case 0x500248:goto L500248;
case 0x500249:c.instructions+=1;goto B500249;
case 0x50024a:goto L50024a;
case 0x50024b:c.instructions+=1;goto B50024b;
case 0x500250:goto L500250;
case 0x500256:c.instructions+=5;goto B500256;
case 0x500257:c.instructions+=4;goto B500257;
case 0x500259:c.instructions+=3;goto B500259;
case 0x50025b:c.instructions+=2;goto B50025b;
case 0x50025c:c.instructions+=1;goto B50025c;
case 0x50025e:goto L50025e;
case 0x500264:c.instructions+=3;goto B500264;
case 0x500268:c.instructions+=2;goto B500268;
case 0x50026a:c.instructions+=1;goto B50026a;
case 0x500270:goto L500270;
case 0x500272:c.instructions+=1;goto B500272;
case 0x500274:goto L500274;
case 0x500275:c.instructions+=3;goto B500275;
case 0x500278:c.instructions+=2;goto B500278;
case 0x50027a:c.instructions+=1;goto B50027a;
case 0x50027c:goto L50027c;
case 0x50027d:c.instructions+=3;goto B50027d;
case 0x50027e:c.instructions+=2;goto B50027e;
case 0x500280:c.instructions+=1;goto B500280;
case 0x500281:goto L500281;
case 0x500284:c.instructions+=4;goto B500284;
case 0x500287:c.instructions+=3;goto B500287;
case 0x500288:c.instructions+=2;goto B500288;
case 0x500289:c.instructions+=1;goto B500289;
case 0x500290:goto L500290;
case 0x500294:c.instructions+=5;goto B500294;
case 0x500296:c.instructions+=4;goto B500296;
case 0x500298:c.instructions+=3;goto B500298;
case 0x50029e:c.instructions+=2;goto B50029e;
case 0x5002a1:c.instructions+=1;goto B5002a1;
case 0x5002b0:goto L5002b0;
case 0x5002b1:c.instructions+=2;goto B5002b1;
case 0x5002b3:c.instructions+=1;goto B5002b3;
case 0x5002b8:goto L5002b8;
case 0x5002bd:c.instructions+=1;goto B5002bd;
case 0x5002bf:goto L5002bf;
case 0x5002c0:c.instructions+=1;goto B5002c0;
case 0x5002c5:goto L5002c5;
case 0x5002c8:goto L5002c8;
case 0x5002ca:c.instructions+=2;goto B5002ca;
case 0x5002cb:c.instructions+=1;goto B5002cb;
case 0x5002d0:goto L5002d0;
case 0x5002d6:c.instructions+=2;goto B5002d6;
case 0x5002dd:c.instructions+=1;goto B5002dd;
case 0x5002e0:goto L5002e0;
case 0x5002e4:c.instructions+=1;goto B5002e4;
case 0x5002e6:goto L5002e6;
case 0x5002eb:c.instructions+=1;goto B5002eb;
case 0x5002ec:goto L5002ec;
case 0x5002f0:c.instructions+=1;goto B5002f0;
case 0x5002f2:goto L5002f2;
case 0x5002f7:c.instructions+=1;goto B5002f7;
case 0x5002f8:goto L5002f8;
case 0x5002fc:c.instructions+=2;goto B5002fc;
case 0x5002ff:c.instructions+=1;goto B5002ff;
case 0x500301:goto L500301;
case 0x500308:goto L500308;
case 0x50030d:c.instructions+=1;goto B50030d;
case 0x50030e:goto L50030e;
case 0x500313:c.instructions+=1;goto B500313;
case 0x500314:goto L500314;
case 0x500319:c.instructions+=1;goto B500319;
case 0x50031a:goto L50031a;
case 0x50031f:c.instructions+=1;goto B50031f;
case 0x500320:goto L500320;
case 0x500322:c.instructions+=1;goto B500322;
case 0x500340:goto L500340;
case 0x500343:c.instructions+=2;goto B500343;
case 0x500345:c.instructions+=1;goto B500345;
case 0x500347:goto L500347;
case 0x50034c:c.instructions+=1;goto B50034c;
case 0x50034d:goto L50034d;
case 0x50034f:c.instructions+=1;goto B50034f;
case 0x500351:goto L500351;
case 0x500356:c.instructions+=1;goto B500356;
case 0x500357:goto L500357;
case 0x500359:c.instructions+=1;goto B500359;
case 0x50035b:goto L50035b;
case 0x500360:c.instructions+=1;goto B500360;
case 0x500361:goto L500361;
case 0x500363:c.instructions+=1;goto B500363;
case 0x500365:goto L500365;
case 0x50036a:c.instructions+=1;goto B50036a;
case 0x50036b:goto L50036b;
case 0x50036d:c.instructions+=1;goto B50036d;
case 0x50036f:goto L50036f;
case 0x500374:c.instructions+=1;goto B500374;
case 0x500375:goto L500375;
case 0x500377:c.instructions+=5;goto B500377;
case 0x500379:c.instructions+=4;goto B500379;
case 0x50037c:c.instructions+=3;goto B50037c;
case 0x500383:c.instructions+=2;goto B500383;
case 0x500385:c.instructions+=1;goto B500385;
case 0x500390:goto L500390;
case 0x500395:c.instructions+=5;goto B500395;
case 0x500397:c.instructions+=4;goto B500397;
case 0x500399:c.instructions+=3;goto B500399;
case 0x50039c:c.instructions+=2;goto B50039c;
case 0x50039d:c.instructions+=1;goto B50039d;
case 0x5003a2:goto L5003a2;
case 0x5003b0:goto L5003b0;
case 0x5003b1:c.instructions+=5;goto B5003b1;
case 0x5003b7:c.instructions+=4;goto B5003b7;
case 0x5003b9:c.instructions+=3;goto B5003b9;
case 0x5003bb:c.instructions+=2;goto B5003bb;
case 0x5003bc:c.instructions+=1;goto B5003bc;
case 0x5003be:goto L5003be;
case 0x5003c2:c.instructions+=1;goto B5003c2;
case 0x5003c8:goto L5003c8;
case 0x5003ca:c.instructions+=1;goto B5003ca;
case 0x5003cc:goto L5003cc;
case 0x5003cd:c.instructions+=3;goto B5003cd;
case 0x5003d0:c.instructions+=2;goto B5003d0;
case 0x5003d2:c.instructions+=1;goto B5003d2;
case 0x5003d4:goto L5003d4;
case 0x5003d5:c.instructions+=3;goto B5003d5;
case 0x5003d6:c.instructions+=2;goto B5003d6;
case 0x5003d8:c.instructions+=1;goto B5003d8;
case 0x5003db:goto L5003db;
case 0x5003dc:c.instructions+=3;goto B5003dc;
case 0x5003dd:c.instructions+=2;goto B5003dd;
case 0x5003e4:c.instructions+=1;goto B5003e4;
case 0x5003f0:goto L5003f0;
case 0x5003f4:c.instructions+=2;goto B5003f4;
case 0x5003f5:c.instructions+=1;goto B5003f5;
case 0x5003fa:goto L5003fa;
case 0x5003fd:c.instructions+=1;goto B5003fd;
case 0x500400:goto L500400;
case 0x500402:c.instructions+=4;goto B500402;
case 0x500408:c.instructions+=3;goto B500408;
case 0x50040d:c.instructions+=2;goto B50040d;
case 0x50040e:c.instructions+=1;goto B50040e;
case 0x500410:goto L500410;
case 0x500413:c.instructions+=2;goto B500413;
case 0x500415:c.instructions+=1;goto B500415;
case 0x500417:goto L500417;
case 0x500418:goto L500418;
case 0x50041b:c.instructions+=1;goto B50041b;
case 0x50041d:goto L50041d;
case 0x50041e:goto L50041e;
case 0x500421:c.instructions+=2;goto B500421;
case 0x500423:c.instructions+=1;goto B500423;
case 0x500425:goto L500425;
case 0x500426:goto L500426;
case 0x500429:c.instructions+=2;goto B500429;
case 0x50042b:c.instructions+=1;goto B50042b;
case 0x50042d:goto L50042d;
case 0x50042e:goto L50042e;
case 0x500431:c.instructions+=2;goto B500431;
case 0x500433:c.instructions+=1;goto B500433;
case 0x500435:goto L500435;
case 0x500436:goto L500436;
case 0x500439:c.instructions+=2;goto B500439;
case 0x50043b:c.instructions+=1;goto B50043b;
case 0x50043d:goto L50043d;
case 0x50043e:goto L50043e;
case 0x500441:c.instructions+=2;goto B500441;
case 0x500443:c.instructions+=1;goto B500443;
case 0x500445:goto L500445;
case 0x500446:goto L500446;
case 0x500449:c.instructions+=2;goto B500449;
case 0x50044b:c.instructions+=1;goto B50044b;
case 0x50044d:goto L50044d;
case 0x50044e:goto L50044e;
case 0x500451:c.instructions+=2;goto B500451;
case 0x500452:c.instructions+=1;goto B500452;
case 0x500454:goto L500454;
case 0x500455:c.instructions+=1;goto B500455;
case 0x500460:goto L500460;
case 0x500464:c.instructions+=7;goto B500464;
case 0x50046a:c.instructions+=6;goto B50046a;
case 0x50046b:c.instructions+=5;goto B50046b;
case 0x50046c:c.instructions+=4;goto B50046c;
case 0x50046f:c.instructions+=3;goto B50046f;
case 0x500471:c.instructions+=2;goto B500471;
case 0x500473:c.instructions+=1;goto B500473;
case 0x500475:goto L500475;
case 0x50047b:c.instructions+=1;goto B50047b;
case 0x500480:goto L500480;
case 0x500482:c.instructions+=1;goto B500482;
case 0x500484:goto L500484;
case 0x500485:c.instructions+=3;goto B500485;
case 0x500488:c.instructions+=2;goto B500488;
case 0x50048a:c.instructions+=1;goto B50048a;
case 0x50048c:goto L50048c;
case 0x50048d:c.instructions+=3;goto B50048d;
case 0x50048e:c.instructions+=2;goto B50048e;
case 0x500490:c.instructions+=1;goto B500490;
case 0x500493:goto L500493;
case 0x50049a:c.instructions+=2;goto B50049a;
case 0x50049c:c.instructions+=1;goto B50049c;
case 0x50049e:goto L50049e;
case 0x5004a2:c.instructions+=1;goto B5004a2;
case 0x5004a4:goto L5004a4;
case 0x5004a5:c.instructions+=3;goto B5004a5;
case 0x5004a6:c.instructions+=2;goto B5004a6;
case 0x5004a8:c.instructions+=1;goto B5004a8;
case 0x5004b0:goto L5004b0;
case 0x5004b4:c.instructions+=2;goto B5004b4;
case 0x5004ba:c.instructions+=1;goto B5004ba;
case 0x5004c0:goto L5004c0;
case 0x5004c6:c.instructions+=1;goto B5004c6;
case 0x5004d0:goto L5004d0;
case 0x5004d2:c.instructions+=4;goto B5004d2;
case 0x5004d5:c.instructions+=3;goto B5004d5;
case 0x5004da:c.instructions+=2;goto B5004da;
case 0x5004db:c.instructions+=1;goto B5004db;
case 0x5004e0:goto L5004e0;
case 0x5004e3:c.instructions+=2;goto B5004e3;
case 0x5004e5:c.instructions+=1;goto B5004e5;
case 0x5004e7:goto L5004e7;
case 0x5004e8:goto L5004e8;
case 0x5004eb:c.instructions+=2;goto B5004eb;
case 0x5004ed:c.instructions+=1;goto B5004ed;
case 0x5004ef:goto L5004ef;
case 0x5004f0:goto L5004f0;
case 0x5004f3:c.instructions+=1;goto B5004f3;
case 0x5004f5:goto L5004f5;
case 0x5004f6:goto L5004f6;
case 0x5004f9:c.instructions+=2;goto B5004f9;
case 0x5004fb:c.instructions+=1;goto B5004fb;
case 0x5004fd:goto L5004fd;
case 0x5004fe:goto L5004fe;
case 0x500501:c.instructions+=2;goto B500501;
case 0x500503:c.instructions+=1;goto B500503;
case 0x500505:goto L500505;
case 0x500506:goto L500506;
case 0x500509:c.instructions+=2;goto B500509;
case 0x50050b:c.instructions+=1;goto B50050b;
case 0x50050d:goto L50050d;
case 0x50050e:goto L50050e;
case 0x500511:c.instructions+=2;goto B500511;
case 0x500513:c.instructions+=1;goto B500513;
case 0x500515:goto L500515;
case 0x500516:goto L500516;
case 0x500519:c.instructions+=2;goto B500519;
case 0x50051a:c.instructions+=1;goto B50051a;
case 0x50051c:goto L50051c;
case 0x50051d:c.instructions+=1;goto B50051d;
case 0x500520:goto L500520;
case 0x500526:c.instructions+=3;goto B500526;
case 0x500528:c.instructions+=2;goto B500528;
case 0x50052a:c.instructions+=1;goto B50052a;
case 0x50052c:goto L50052c;
case 0x500531:goto L500531;
case 0x500537:c.instructions+=2;goto B500537;
case 0x500539:c.instructions+=1;goto B500539;
case 0x50053b:goto L50053b;
case 0x50053c:goto L50053c;
case 0x500542:c.instructions+=2;goto B500542;
case 0x500544:c.instructions+=1;goto B500544;
case 0x500546:goto L500546;
case 0x500547:goto L500547;
case 0x50054d:c.instructions+=2;goto B50054d;
case 0x50054f:c.instructions+=1;goto B50054f;
case 0x500551:goto L500551;
case 0x500552:goto L500552;
case 0x500558:c.instructions+=2;goto B500558;
case 0x50055a:c.instructions+=1;goto B50055a;
case 0x50055c:goto L50055c;
case 0x50055d:goto L50055d;
case 0x500563:c.instructions+=2;goto B500563;
case 0x500565:c.instructions+=1;goto B500565;
case 0x500567:goto L500567;
case 0x500568:goto L500568;
case 0x50056e:c.instructions+=2;goto B50056e;
case 0x500570:c.instructions+=1;goto B500570;
case 0x500572:goto L500572;
case 0x500573:goto L500573;
case 0x500579:c.instructions+=2;goto B500579;
case 0x50057b:c.instructions+=1;goto B50057b;
case 0x50057d:goto L50057d;
case 0x50057e:goto L50057e;
case 0x500584:c.instructions+=2;goto B500584;
case 0x500586:c.instructions+=1;goto B500586;
case 0x500588:goto L500588;
case 0x500589:goto L500589;
case 0x50058f:c.instructions+=2;goto B50058f;
case 0x500591:c.instructions+=1;goto B500591;
case 0x500593:goto L500593;
case 0x500594:goto L500594;
case 0x5005a0:goto L5005a0;
case 0x5005a6:c.instructions+=3;goto B5005a6;
case 0x5005a8:c.instructions+=2;goto B5005a8;
case 0x5005aa:c.instructions+=1;goto B5005aa;
case 0x5005ac:goto L5005ac;
case 0x5005b1:goto L5005b1;
case 0x5005b7:c.instructions+=2;goto B5005b7;
case 0x5005b9:c.instructions+=1;goto B5005b9;
case 0x5005bb:goto L5005bb;
case 0x5005bc:goto L5005bc;
case 0x5005c2:c.instructions+=2;goto B5005c2;
case 0x5005c4:c.instructions+=1;goto B5005c4;
case 0x5005c6:goto L5005c6;
case 0x5005c7:goto L5005c7;
case 0x5005cd:c.instructions+=2;goto B5005cd;
case 0x5005cf:c.instructions+=1;goto B5005cf;
case 0x5005d1:goto L5005d1;
case 0x5005d2:goto L5005d2;
case 0x5005e0:goto L5005e0;
case 0x5005e1:c.instructions+=4;goto B5005e1;
case 0x5005e7:c.instructions+=3;goto B5005e7;
case 0x5005e9:c.instructions+=2;goto B5005e9;
case 0x5005ed:c.instructions+=1;goto B5005ed;
case 0x5005ef:goto L5005ef;
case 0x5005f5:c.instructions+=3;goto B5005f5;
case 0x5005f9:c.instructions+=2;goto B5005f9;
case 0x5005fa:c.instructions+=1;goto B5005fa;
case 0x5005fb:goto L5005fb;
case 0x500601:c.instructions+=2;goto B500601;
case 0x500602:c.instructions+=1;goto B500602;
case 0x500610:goto L500610;
case 0x500616:c.instructions+=2;goto B500616;
case 0x500618:c.instructions+=1;goto B500618;
case 0x50061a:goto L50061a;
case 0x50061c:c.instructions+=1;goto B50061c;
case 0x50061d:goto L50061d;
case 0x50061e:c.instructions+=5;goto B50061e;
case 0x50061f:c.instructions+=4;goto B50061f;
case 0x500625:c.instructions+=3;goto B500625;
case 0x500627:c.instructions+=2;goto B500627;
case 0x500628:c.instructions+=1;goto B500628;
case 0x50062a:goto L50062a;
case 0x50062f:goto L50062f;
case 0x500633:c.instructions+=3;goto B500633;
case 0x500635:c.instructions+=2;goto B500635;
case 0x500637:c.instructions+=1;goto B500637;
case 0x500639:goto L500639;
case 0x50063c:c.instructions+=2;goto B50063c;
case 0x50063f:c.instructions+=1;goto B50063f;
case 0x500640:goto L500640;
case 0x500643:c.instructions+=1;goto B500643;
case 0x500645:goto L500645;
case 0x500648:c.instructions+=2;goto B500648;
case 0x50064a:c.instructions+=1;goto B50064a;
case 0x50064c:goto L50064c;
case 0x50064d:c.instructions+=4;goto B50064d;
case 0x500650:c.instructions+=3;goto B500650;
case 0x500653:c.instructions+=2;goto B500653;
case 0x500655:c.instructions+=1;goto B500655;
case 0x500657:goto L500657;
case 0x500658:c.instructions+=4;goto B500658;
case 0x500659:c.instructions+=3;goto B500659;
case 0x50065b:c.instructions+=2;goto B50065b;
case 0x50065c:c.instructions+=1;goto B50065c;
case 0x50065d:goto L50065d;
case 0x50065e:c.instructions+=4;goto B50065e;
case 0x50065f:c.instructions+=3;goto B50065f;
case 0x500661:c.instructions+=2;goto B500661;
case 0x500662:c.instructions+=1;goto B500662;
case 0x500670:goto L500670;
case 0x500671:c.instructions+=6;goto B500671;
case 0x500672:c.instructions+=5;goto B500672;
case 0x500673:c.instructions+=4;goto B500673;
case 0x500674:c.instructions+=3;goto B500674;
case 0x500676:c.instructions+=2;goto B500676;
case 0x500678:c.instructions+=1;goto B500678;
case 0x50067d:goto L50067d;
case 0x50067f:c.instructions+=4;goto B50067f;
case 0x500685:c.instructions+=3;goto B500685;
case 0x500689:c.instructions+=2;goto B500689;
case 0x50068b:c.instructions+=1;goto B50068b;
case 0x50068d:goto L50068d;
case 0x500690:c.instructions+=2;goto B500690;
case 0x500693:c.instructions+=1;goto B500693;
case 0x500694:goto L500694;
case 0x500696:c.instructions+=2;goto B500696;
case 0x500698:c.instructions+=1;goto B500698;
case 0x50069a:goto L50069a;
case 0x50069d:c.instructions+=2;goto B50069d;
case 0x50069f:c.instructions+=1;goto B50069f;
case 0x5006a1:goto L5006a1;
case 0x5006a5:c.instructions+=6;goto B5006a5;
case 0x5006a9:c.instructions+=5;goto B5006a9;
case 0x5006ad:c.instructions+=4;goto B5006ad;
case 0x5006b1:c.instructions+=3;goto B5006b1;
case 0x5006b3:c.instructions+=2;goto B5006b3;
case 0x5006b6:c.instructions+=1;goto B5006b6;
case 0x5006b8:goto L5006b8;
case 0x5006b9:goto L5006b9;
case 0x5006bc:c.instructions+=3;goto B5006bc;
case 0x5006bf:c.instructions+=2;goto B5006bf;
case 0x5006c0:c.instructions+=1;goto B5006c0;
case 0x5006c2:goto L5006c2;
case 0x5006c3:goto L5006c3;
case 0x5006c4:c.instructions+=5;goto B5006c4;
case 0x5006c5:c.instructions+=4;goto B5006c5;
case 0x5006c7:c.instructions+=3;goto B5006c7;
case 0x5006c8:c.instructions+=2;goto B5006c8;
case 0x5006c9:c.instructions+=1;goto B5006c9;
case 0x5006d0:goto L5006d0;
case 0x5006d4:c.instructions+=2;goto B5006d4;
case 0x5006d6:c.instructions+=1;goto B5006d6;
case 0x5006d8:goto L5006d8;
case 0x5006de:c.instructions+=3;goto B5006de;
case 0x5006e2:c.instructions+=2;goto B5006e2;
case 0x5006e4:c.instructions+=1;goto B5006e4;
case 0x5006e6:goto L5006e6;
case 0x5006ea:c.instructions+=1;goto B5006ea;
case 0x5006ed:goto L5006ed;
case 0x5006ef:c.instructions+=1;goto B5006ef;
case 0x500700:goto L500700;
case 0x500702:c.instructions+=6;goto B500702;
case 0x500703:c.instructions+=5;goto B500703;
case 0x500704:c.instructions+=4;goto B500704;
case 0x500706:c.instructions+=3;goto B500706;
case 0x500707:c.instructions+=2;goto B500707;
case 0x50070c:c.instructions+=1;goto B50070c;
case 0x50070e:goto L50070e;
case 0x500710:goto L500710;
case 0x500716:c.instructions+=7;goto B500716;
case 0x500718:c.instructions+=6;goto B500718;
case 0x50071b:c.instructions+=5;goto B50071b;
case 0x50071e:c.instructions+=4;goto B50071e;
case 0x500721:c.instructions+=3;goto B500721;
case 0x500727:c.instructions+=2;goto B500727;
case 0x50072c:c.instructions+=1;goto B50072c;
case 0x500732:goto L500732;
case 0x500734:goto L500734;
case 0x500736:c.instructions+=7;goto B500736;
case 0x500738:c.instructions+=6;goto B500738;
case 0x50073b:c.instructions+=5;goto B50073b;
case 0x50073e:c.instructions+=4;goto B50073e;
case 0x500741:c.instructions+=3;goto B500741;
case 0x500744:c.instructions+=2;goto B500744;
case 0x500749:c.instructions+=1;goto B500749;
case 0x50074f:goto L50074f;
case 0x500751:goto L500751;
case 0x500755:c.instructions+=9;goto B500755;
case 0x500757:c.instructions+=8;goto B500757;
case 0x50075a:c.instructions+=7;goto B50075a;
case 0x50075d:c.instructions+=6;goto B50075d;
case 0x500760:c.instructions+=5;goto B500760;
case 0x500763:c.instructions+=4;goto B500763;
case 0x500765:c.instructions+=3;goto B500765;
case 0x500766:c.instructions+=2;goto B500766;
case 0x50076c:c.instructions+=1;goto B50076c;
case 0x500771:goto L500771;
case 0x500774:c.instructions+=8;goto B500774;
case 0x500775:c.instructions+=7;goto B500775;
case 0x50077b:c.instructions+=6;goto B50077b;
case 0x500781:c.instructions+=5;goto B500781;
case 0x500787:c.instructions+=4;goto B500787;
case 0x50078d:c.instructions+=3;goto B50078d;
case 0x50078e:c.instructions+=2;goto B50078e;
case 0x50078f:c.instructions+=1;goto B50078f;
case 0x5007a0:goto L5007a0;
case 0x5007a1:c.instructions+=3;goto B5007a1;
case 0x5007a5:c.instructions+=2;goto B5007a5;
case 0x5007a7:c.instructions+=1;goto B5007a7;
case 0x5007ac:goto L5007ac;
case 0x5007b3:c.instructions+=3;goto B5007b3;
case 0x5007b5:c.instructions+=2;goto B5007b5;
case 0x5007bb:c.instructions+=1;goto B5007bb;
case 0x5007c0:goto L5007c0;
case 0x5007c3:c.instructions+=1;goto B5007c3;
case 0x5007c5:goto L5007c5;
case 0x5007c6:c.instructions+=3;goto B5007c6;
case 0x5007c9:c.instructions+=2;goto B5007c9;
case 0x5007cc:c.instructions+=1;goto B5007cc;
case 0x5007ce:goto L5007ce;
case 0x5007cf:c.instructions+=1;goto B5007cf;
case 0x5007d2:goto L5007d2;
case 0x5007d9:c.instructions+=2;goto B5007d9;
case 0x5007da:c.instructions+=1;goto B5007da;
case 0x5007e0:goto L5007e0;
case 0x5007e1:c.instructions+=4;goto B5007e1;
case 0x5007e5:c.instructions+=3;goto B5007e5;
case 0x5007e7:c.instructions+=2;goto B5007e7;
case 0x5007ed:c.instructions+=1;goto B5007ed;
case 0x5007f0:goto L5007f0;
case 0x5007f2:c.instructions+=2;goto B5007f2;
case 0x5007f4:c.instructions+=1;goto B5007f4;
case 0x5007f6:goto L5007f6;
case 0x5007f9:c.instructions+=2;goto B5007f9;
case 0x5007fc:c.instructions+=1;goto B5007fc;
case 0x5007fe:goto L5007fe;
case 0x5007ff:c.instructions+=3;goto B5007ff;
case 0x500802:c.instructions+=2;goto B500802;
case 0x500805:c.instructions+=1;goto B500805;
case 0x500807:goto L500807;
case 0x500809:c.instructions+=2;goto B500809;
case 0x50080a:c.instructions+=1;goto B50080a;
case 0x50080d:goto L50080d;
case 0x50080f:c.instructions+=2;goto B50080f;
case 0x500810:c.instructions+=1;goto B500810;
case 0x500820:goto L500820;
case 0x500822:c.instructions+=4;goto B500822;
case 0x500828:c.instructions+=3;goto B500828;
case 0x50082d:c.instructions+=2;goto B50082d;
case 0x50082e:c.instructions+=1;goto B50082e;
case 0x500830:goto L500830;
case 0x500833:c.instructions+=2;goto B500833;
case 0x500835:c.instructions+=1;goto B500835;
case 0x500837:goto L500837;
case 0x500838:goto L500838;
case 0x50083b:c.instructions+=1;goto B50083b;
case 0x50083d:goto L50083d;
case 0x50083e:goto L50083e;
case 0x500841:c.instructions+=2;goto B500841;
case 0x500843:c.instructions+=1;goto B500843;
case 0x500845:goto L500845;
case 0x500846:goto L500846;
case 0x500849:c.instructions+=2;goto B500849;
case 0x50084b:c.instructions+=1;goto B50084b;
case 0x50084d:goto L50084d;
case 0x50084e:goto L50084e;
case 0x500851:c.instructions+=2;goto B500851;
case 0x500853:c.instructions+=1;goto B500853;
case 0x500855:goto L500855;
case 0x500856:goto L500856;
case 0x500859:c.instructions+=2;goto B500859;
case 0x50085b:c.instructions+=1;goto B50085b;
case 0x50085d:goto L50085d;
case 0x50085e:goto L50085e;
case 0x500861:c.instructions+=2;goto B500861;
case 0x500863:c.instructions+=1;goto B500863;
case 0x500865:goto L500865;
case 0x500866:goto L500866;
case 0x500869:c.instructions+=2;goto B500869;
case 0x50086b:c.instructions+=1;goto B50086b;
case 0x50086d:goto L50086d;
case 0x50086e:goto L50086e;
case 0x500871:c.instructions+=2;goto B500871;
case 0x500872:c.instructions+=1;goto B500872;
case 0x500874:goto L500874;
case 0x500875:c.instructions+=1;goto B500875;
case 0x500880:goto L500880;
case 0x500881:c.instructions+=5;goto B500881;
case 0x500882:c.instructions+=4;goto B500882;
case 0x500884:c.instructions+=3;goto B500884;
case 0x50088a:c.instructions+=2;goto B50088a;
case 0x50088f:c.instructions+=1;goto B50088f;
case 0x500890:goto L500890;
case 0x500893:c.instructions+=2;goto B500893;
case 0x500895:c.instructions+=1;goto B500895;
case 0x500897:goto L500897;
case 0x50089a:c.instructions+=2;goto B50089a;
case 0x50089c:c.instructions+=1;goto B50089c;
case 0x50089e:goto L50089e;
case 0x50089f:goto L50089f;
case 0x5008a1:c.instructions+=2;goto B5008a1;
case 0x5008a3:c.instructions+=1;goto B5008a3;
case 0x5008a5:goto L5008a5;
case 0x5008a8:c.instructions+=2;goto B5008a8;
case 0x5008aa:c.instructions+=1;goto B5008aa;
case 0x5008ac:goto L5008ac;
case 0x5008ad:goto L5008ad;
case 0x5008b0:c.instructions+=2;goto B5008b0;
case 0x5008b2:c.instructions+=1;goto B5008b2;
case 0x5008b4:goto L5008b4;
case 0x5008b7:c.instructions+=2;goto B5008b7;
case 0x5008b9:c.instructions+=1;goto B5008b9;
case 0x5008bb:goto L5008bb;
case 0x5008bc:goto L5008bc;
case 0x5008bf:c.instructions+=2;goto B5008bf;
case 0x5008c1:c.instructions+=1;goto B5008c1;
case 0x5008c3:goto L5008c3;
case 0x5008c6:c.instructions+=2;goto B5008c6;
case 0x5008c8:c.instructions+=1;goto B5008c8;
case 0x5008ca:goto L5008ca;
case 0x5008cb:goto L5008cb;
case 0x5008ce:c.instructions+=2;goto B5008ce;
case 0x5008d0:c.instructions+=1;goto B5008d0;
case 0x5008d2:goto L5008d2;
case 0x5008d5:c.instructions+=2;goto B5008d5;
case 0x5008d7:c.instructions+=1;goto B5008d7;
case 0x5008d9:goto L5008d9;
case 0x5008da:goto L5008da;
case 0x5008dd:c.instructions+=2;goto B5008dd;
case 0x5008df:c.instructions+=1;goto B5008df;
case 0x5008e1:goto L5008e1;
case 0x5008e4:c.instructions+=2;goto B5008e4;
case 0x5008e6:c.instructions+=1;goto B5008e6;
case 0x5008e8:goto L5008e8;
case 0x5008e9:goto L5008e9;
case 0x5008ec:c.instructions+=2;goto B5008ec;
case 0x5008ee:c.instructions+=1;goto B5008ee;
case 0x5008f0:goto L5008f0;
case 0x5008f3:c.instructions+=2;goto B5008f3;
case 0x5008f5:c.instructions+=1;goto B5008f5;
case 0x5008f7:goto L5008f7;
case 0x5008f8:goto L5008f8;
case 0x5008fb:c.instructions+=2;goto B5008fb;
case 0x5008fd:c.instructions+=1;goto B5008fd;
case 0x5008ff:goto L5008ff;
case 0x500902:c.instructions+=2;goto B500902;
case 0x500904:c.instructions+=1;goto B500904;
case 0x500906:goto L500906;
case 0x500907:goto L500907;
case 0x50090a:c.instructions+=2;goto B50090a;
case 0x50090b:c.instructions+=1;goto B50090b;
case 0x50090d:goto L50090d;
case 0x50090e:c.instructions+=2;goto B50090e;
case 0x50090f:c.instructions+=1;goto B50090f;
case 0x500910:goto L500910;
case 0x500912:c.instructions+=4;goto B500912;
case 0x500915:c.instructions+=3;goto B500915;
case 0x50091a:c.instructions+=2;goto B50091a;
case 0x50091b:c.instructions+=1;goto B50091b;
case 0x500920:goto L500920;
case 0x500923:c.instructions+=2;goto B500923;
case 0x500925:c.instructions+=1;goto B500925;
case 0x500927:goto L500927;
case 0x500928:goto L500928;
case 0x50092b:c.instructions+=2;goto B50092b;
case 0x50092d:c.instructions+=1;goto B50092d;
case 0x50092f:goto L50092f;
case 0x500930:goto L500930;
case 0x500933:c.instructions+=1;goto B500933;
case 0x500935:goto L500935;
case 0x500936:goto L500936;
case 0x500939:c.instructions+=2;goto B500939;
case 0x50093b:c.instructions+=1;goto B50093b;
case 0x50093d:goto L50093d;
case 0x50093e:goto L50093e;
case 0x500941:c.instructions+=2;goto B500941;
case 0x500943:c.instructions+=1;goto B500943;
case 0x500945:goto L500945;
case 0x500946:goto L500946;
case 0x500949:c.instructions+=2;goto B500949;
case 0x50094b:c.instructions+=1;goto B50094b;
case 0x50094d:goto L50094d;
case 0x50094e:goto L50094e;
case 0x500951:c.instructions+=2;goto B500951;
case 0x500953:c.instructions+=1;goto B500953;
case 0x500955:goto L500955;
case 0x500956:goto L500956;
case 0x500959:c.instructions+=2;goto B500959;
case 0x50095b:c.instructions+=1;goto B50095b;
case 0x50095d:goto L50095d;
case 0x50095e:goto L50095e;
case 0x500961:c.instructions+=2;goto B500961;
case 0x500962:c.instructions+=1;goto B500962;
case 0x500964:goto L500964;
case 0x500965:c.instructions+=1;goto B500965;
case 0x500970:goto L500970;
case 0x500971:c.instructions+=6;goto B500971;
case 0x500972:c.instructions+=5;goto B500972;
case 0x500974:c.instructions+=4;goto B500974;
case 0x500976:c.instructions+=3;goto B500976;
case 0x50097c:c.instructions+=2;goto B50097c;
case 0x500981:c.instructions+=1;goto B500981;
case 0x500982:goto L500982;
case 0x500984:c.instructions+=2;goto B500984;
case 0x500986:c.instructions+=1;goto B500986;
case 0x500988:goto L500988;
case 0x50098b:c.instructions+=2;goto B50098b;
case 0x50098d:c.instructions+=1;goto B50098d;
case 0x50098f:goto L50098f;
case 0x500990:goto L500990;
case 0x500993:c.instructions+=2;goto B500993;
case 0x500994:c.instructions+=1;goto B500994;
case 0x500996:goto L500996;
case 0x500998:c.instructions+=2;goto B500998;
case 0x500999:c.instructions+=1;goto B500999;
case 0x50099b:goto L50099b;
case 0x50099c:c.instructions+=1;goto B50099c;
case 0x5009a1:goto L5009a1;
case 0x5009a4:c.instructions+=3;goto B5009a4;
case 0x5009a5:c.instructions+=2;goto B5009a5;
case 0x5009a8:c.instructions+=1;goto B5009a8;
case 0x5009b0:goto L5009b0;
case 0x5009b1:c.instructions+=4;goto B5009b1;
case 0x5009b8:c.instructions+=3;goto B5009b8;
case 0x5009ba:c.instructions+=2;goto B5009ba;
case 0x5009c1:c.instructions+=1;goto B5009c1;
case 0x5009c3:goto L5009c3;
case 0x5009c6:c.instructions+=4;goto B5009c6;
case 0x5009c9:c.instructions+=3;goto B5009c9;
case 0x5009ca:c.instructions+=2;goto B5009ca;
case 0x5009cc:c.instructions+=1;goto B5009cc;
case 0x5009ce:goto L5009ce;
case 0x5009cf:c.instructions+=1;goto B5009cf;
case 0x5009d1:goto L5009d1;
case 0x5009d8:c.instructions+=3;goto B5009d8;
case 0x5009d9:c.instructions+=2;goto B5009d9;
case 0x5009da:c.instructions+=1;goto B5009da;
case 0x5009db:goto L5009db;
case 0x5009dc:c.instructions+=3;goto B5009dc;
case 0x5009de:c.instructions+=2;goto B5009de;
case 0x5009df:c.instructions+=1;goto B5009df;
case 0x5009e0:goto L5009e0;
case 0x5009e6:c.instructions+=3;goto B5009e6;
case 0x5009e8:c.instructions+=2;goto B5009e8;
case 0x5009ea:c.instructions+=1;goto B5009ea;
case 0x5009ec:goto L5009ec;
case 0x5009f1:goto L5009f1;
case 0x5009f7:c.instructions+=2;goto B5009f7;
case 0x5009f9:c.instructions+=1;goto B5009f9;
case 0x5009fb:goto L5009fb;
case 0x5009fc:goto L5009fc;
case 0x500a02:c.instructions+=2;goto B500a02;
case 0x500a04:c.instructions+=1;goto B500a04;
case 0x500a06:goto L500a06;
case 0x500a07:goto L500a07;
case 0x500a0d:c.instructions+=2;goto B500a0d;
case 0x500a0f:c.instructions+=1;goto B500a0f;
case 0x500a11:goto L500a11;
case 0x500a12:goto L500a12;
case 0x500a18:c.instructions+=2;goto B500a18;
case 0x500a1a:c.instructions+=1;goto B500a1a;
case 0x500a1c:goto L500a1c;
case 0x500a1d:goto L500a1d;
case 0x500a23:c.instructions+=2;goto B500a23;
case 0x500a25:c.instructions+=1;goto B500a25;
case 0x500a27:goto L500a27;
case 0x500a28:goto L500a28;
case 0x500a2e:c.instructions+=2;goto B500a2e;
case 0x500a30:c.instructions+=1;goto B500a30;
case 0x500a32:goto L500a32;
case 0x500a33:goto L500a33;
case 0x500a39:c.instructions+=2;goto B500a39;
case 0x500a3b:c.instructions+=1;goto B500a3b;
case 0x500a3d:goto L500a3d;
case 0x500a3e:goto L500a3e;
case 0x500a40:goto L500a40;
case 0x500a41:c.instructions+=5;goto B500a41;
case 0x500a47:c.instructions+=4;goto B500a47;
case 0x500a4a:c.instructions+=3;goto B500a4a;
case 0x500a4c:c.instructions+=2;goto B500a4c;
case 0x500a4e:c.instructions+=1;goto B500a4e;
case 0x500a50:goto L500a50;
case 0x500a51:c.instructions+=5;goto B500a51;
case 0x500a55:c.instructions+=4;goto B500a55;
case 0x500a56:c.instructions+=3;goto B500a56;
case 0x500a57:c.instructions+=2;goto B500a57;
case 0x500a5d:c.instructions+=1;goto B500a5d;
case 0x500a60:goto L500a60;
case 0x500a62:c.instructions+=1;goto B500a62;
case 0x500a64:goto L500a64;
case 0x500a66:c.instructions+=1;goto B500a66;
case 0x500a68:goto L500a68;
case 0x500a6a:c.instructions+=1;goto B500a6a;
case 0x500a6c:goto L500a6c;
case 0x500a6e:goto L500a6e;
case 0x500a72:c.instructions+=2;goto B500a72;
case 0x500a74:c.instructions+=1;goto B500a74;
case 0x500a76:goto L500a76;
case 0x500a7a:c.instructions+=1;goto B500a7a;
case 0x500a7c:goto L500a7c;
case 0x500a7f:c.instructions+=1;goto B500a7f;
case 0x500a81:goto L500a81;
case 0x500a84:goto L500a84;
case 0x500a85:c.instructions+=3;goto B500a85;
case 0x500a8b:c.instructions+=2;goto B500a8b;
case 0x500a8d:c.instructions+=1;goto B500a8d;
case 0x500a8f:goto L500a8f;
case 0x500a92:c.instructions+=4;goto B500a92;
case 0x500a93:c.instructions+=3;goto B500a93;
case 0x500a94:c.instructions+=2;goto B500a94;
case 0x500a95:c.instructions+=1;goto B500a95;
case 0x500a97:goto L500a97;
case 0x500a99:goto L500a99;
case 0x500a9a:c.instructions+=1;goto B500a9a;
case 0x500aa0:goto L500aa0;
case 0x500aa6:c.instructions+=4;goto B500aa6;
case 0x500aa8:c.instructions+=3;goto B500aa8;
case 0x500aaa:c.instructions+=2;goto B500aaa;
case 0x500aad:c.instructions+=1;goto B500aad;
case 0x500ab0:goto L500ab0;
case 0x500ab5:c.instructions+=2;goto B500ab5;
case 0x500ab7:c.instructions+=1;goto B500ab7;
case 0x500ab9:goto L500ab9;
case 0x500abc:c.instructions+=10;goto B500abc;
case 0x500ac3:c.instructions+=9;goto B500ac3;
case 0x500ac6:c.instructions+=8;goto B500ac6;
case 0x500ac9:c.instructions+=7;goto B500ac9;
case 0x500acc:c.instructions+=6;goto B500acc;
case 0x500ace:c.instructions+=5;goto B500ace;
case 0x500ad4:c.instructions+=4;goto B500ad4;
case 0x500ada:c.instructions+=3;goto B500ada;
case 0x500ae0:c.instructions+=2;goto B500ae0;
case 0x500ae7:c.instructions+=1;goto B500ae7;
case 0x500aee:goto L500aee;
case 0x500b00:goto L500b00;
case 0x500b06:c.instructions+=10;goto B500b06;
case 0x500b0c:c.instructions+=9;goto B500b0c;
case 0x500b12:c.instructions+=8;goto B500b12;
case 0x500b18:c.instructions+=7;goto B500b18;
case 0x500b1e:c.instructions+=6;goto B500b1e;
case 0x500b24:c.instructions+=5;goto B500b24;
case 0x500b2a:c.instructions+=4;goto B500b2a;
case 0x500b30:c.instructions+=3;goto B500b30;
case 0x500b36:c.instructions+=2;goto B500b36;
case 0x500b3c:c.instructions+=1;goto B500b3c;
case 0x500b40:goto L500b40;
case 0x500b42:c.instructions+=5;goto B500b42;
case 0x500b48:c.instructions+=4;goto B500b48;
case 0x500b4e:c.instructions+=3;goto B500b4e;
case 0x500b54:c.instructions+=2;goto B500b54;
case 0x500b5a:c.instructions+=1;goto B500b5a;
case 0x500b60:goto L500b60;
case 0x500b66:c.instructions+=3;goto B500b66;
case 0x500b6b:c.instructions+=2;goto B500b6b;
case 0x500b6d:c.instructions+=1;goto B500b6d;
case 0x500b6f:goto L500b6f;
case 0x500b75:c.instructions+=2;goto B500b75;
case 0x500b77:c.instructions+=1;goto B500b77;
case 0x500b79:goto L500b79;
case 0x500b7b:goto L500b7b;
case 0x500b80:goto L500b80;
case 0x500b81:c.instructions+=5;goto B500b81;
case 0x500b87:c.instructions+=4;goto B500b87;
case 0x500b89:c.instructions+=3;goto B500b89;
case 0x500b8b:c.instructions+=2;goto B500b8b;
case 0x500b8c:c.instructions+=1;goto B500b8c;
case 0x500b8e:goto L500b8e;
case 0x500b92:c.instructions+=1;goto B500b92;
case 0x500b98:goto L500b98;
case 0x500b9a:c.instructions+=1;goto B500b9a;
case 0x500b9c:goto L500b9c;
case 0x500b9d:c.instructions+=3;goto B500b9d;
case 0x500ba0:c.instructions+=2;goto B500ba0;
case 0x500ba2:c.instructions+=1;goto B500ba2;
case 0x500ba4:goto L500ba4;
case 0x500ba5:c.instructions+=3;goto B500ba5;
case 0x500ba6:c.instructions+=2;goto B500ba6;
case 0x500ba8:c.instructions+=1;goto B500ba8;
case 0x500bab:goto L500bab;
case 0x500bb2:c.instructions+=2;goto B500bb2;
case 0x500bb4:c.instructions+=1;goto B500bb4;
case 0x500bb6:goto L500bb6;
case 0x500bb9:c.instructions+=7;goto B500bb9;
case 0x500bbb:c.instructions+=6;goto B500bbb;
case 0x500bbc:c.instructions+=5;goto B500bbc;
case 0x500bbf:c.instructions+=4;goto B500bbf;
case 0x500bc2:c.instructions+=3;goto B500bc2;
case 0x500bc3:c.instructions+=2;goto B500bc3;
case 0x500bc5:c.instructions+=1;goto B500bc5;
case 0x500bd0:goto L500bd0;
case 0x500bd4:c.instructions+=3;goto B500bd4;
case 0x500bdb:c.instructions+=2;goto B500bdb;
case 0x500be1:c.instructions+=1;goto B500be1;
case 0x500bf0:goto L500bf0;
case 0x500bf2:c.instructions+=1;goto B500bf2;
case 0x500c00:goto L500c00;
case 0x500c04:c.instructions+=2;goto B500c04;
case 0x500c06:c.instructions+=1;goto B500c06;
case 0x500c08:goto L500c08;
case 0x500c0b:c.instructions+=1;goto B500c0b;
case 0x500c0d:goto L500c0d;
case 0x500c13:c.instructions+=3;goto B500c13;
case 0x500c1a:c.instructions+=2;goto B500c1a;
case 0x500c20:c.instructions+=1;goto B500c20;
case 0x500c23:goto L500c23;
case 0x500c25:c.instructions+=2;goto B500c25;
case 0x500c2b:c.instructions+=1;goto B500c2b;
case 0x500c30:goto L500c30;
case 0x500c34:c.instructions+=2;goto B500c34;
case 0x500c38:c.instructions+=1;goto B500c38;
case 0x500c3a:goto L500c3a;
case 0x500c40:c.instructions+=4;goto B500c40;
case 0x500c46:c.instructions+=3;goto B500c46;
case 0x500c4d:c.instructions+=2;goto B500c4d;
case 0x500c4f:c.instructions+=1;goto B500c4f;
case 0x500c51:goto L500c51;
case 0x500c55:c.instructions+=1;goto B500c55;
case 0x500c58:goto L500c58;
case 0x500c5b:c.instructions+=1;goto B500c5b;
case 0x500c60:goto L500c60;
case 0x500c64:c.instructions+=2;goto B500c64;
case 0x500c66:c.instructions+=1;goto B500c66;
case 0x500c68:goto L500c68;
case 0x500c6b:c.instructions+=1;goto B500c6b;
case 0x500c6d:goto L500c6d;
case 0x500c73:c.instructions+=2;goto B500c73;
case 0x500c7a:c.instructions+=1;goto B500c7a;
case 0x500c7c:goto L500c7c;
case 0x500c7e:goto L500c7e;
case 0x500c84:c.instructions+=2;goto B500c84;
case 0x500c86:c.instructions+=1;goto B500c86;
case 0x500c88:goto L500c88;
case 0x500c8c:c.instructions+=1;goto B500c8c;
case 0x500c8f:goto L500c8f;
case 0x500c91:c.instructions+=1;goto B500c91;
case 0x500ca0:goto L500ca0;
case 0x500ca2:c.instructions+=3;goto B500ca2;
case 0x500ca8:c.instructions+=2;goto B500ca8;
case 0x500cae:c.instructions+=1;goto B500cae;
case 0x500cb0:goto L500cb0;
case 0x500cb6:c.instructions+=3;goto B500cb6;
case 0x500cbb:c.instructions+=2;goto B500cbb;
case 0x500cbd:c.instructions+=1;goto B500cbd;
case 0x500cbf:goto L500cbf;
case 0x500cc5:c.instructions+=2;goto B500cc5;
case 0x500cc7:c.instructions+=1;goto B500cc7;
case 0x500cc9:goto L500cc9;
case 0x500ccf:c.instructions+=2;goto B500ccf;
case 0x500cd1:c.instructions+=1;goto B500cd1;
case 0x500cd3:goto L500cd3;
case 0x500cd5:c.instructions+=1;goto B500cd5;
case 0x500cd6:goto L500cd6;
case 0x500cd7:c.instructions+=7;goto B500cd7;
case 0x500cdd:c.instructions+=6;goto B500cdd;
case 0x500cdf:c.instructions+=5;goto B500cdf;
case 0x500ce1:c.instructions+=4;goto B500ce1;
case 0x500ce4:c.instructions+=3;goto B500ce4;
case 0x500ce6:c.instructions+=2;goto B500ce6;
case 0x500ce7:c.instructions+=1;goto B500ce7;
case 0x500cf0:goto L500cf0;
case 0x500cf6:c.instructions+=1;goto B500cf6;
case 0x500d00:goto L500d00;
case 0x500d04:c.instructions+=3;goto B500d04;
case 0x500d0a:c.instructions+=2;goto B500d0a;
case 0x500d0e:c.instructions+=1;goto B500d0e;
case 0x500d20:goto L500d20;
case 0x500d24:c.instructions+=4;goto B500d24;
case 0x500d26:c.instructions+=3;goto B500d26;
case 0x500d27:c.instructions+=2;goto B500d27;
case 0x500d29:c.instructions+=1;goto B500d29;
case 0x500d2b:goto L500d2b;
case 0x500d2c:c.instructions+=3;goto B500d2c;
case 0x500d31:c.instructions+=2;goto B500d31;
case 0x500d37:c.instructions+=1;goto B500d37;
case 0x500d3c:goto L500d3c;
case 0x500d46:c.instructions+=2;goto B500d46;
case 0x500d47:c.instructions+=1;goto B500d47;
case 0x500d4a:goto L500d4a;
case 0x500d50:c.instructions+=3;goto B500d50;
case 0x500d56:c.instructions+=2;goto B500d56;
case 0x500d57:c.instructions+=1;goto B500d57;
case 0x500d5c:goto L500d5c;
case 0x500d66:c.instructions+=2;goto B500d66;
case 0x500d67:c.instructions+=1;goto B500d67;
case 0x500d70:goto L500d70;
case 0x500d7a:c.instructions+=1;goto B500d7a;
case 0x500d80:goto L500d80;
case 0x500d86:c.instructions+=4;goto B500d86;
case 0x500d88:c.instructions+=3;goto B500d88;
case 0x500d8b:c.instructions+=2;goto B500d8b;
case 0x500d8e:c.instructions+=1;goto B500d8e;
case 0x500d90:goto L500d90;
case 0x500d94:c.instructions+=2;goto B500d94;
case 0x500d96:c.instructions+=1;goto B500d96;
case 0x500d98:goto L500d98;
case 0x500d9b:c.instructions+=1;goto B500d9b;
case 0x500d9d:goto L500d9d;
case 0x500da0:c.instructions+=2;goto B500da0;
case 0x500da4:c.instructions+=1;goto B500da4;
case 0x500da7:goto L500da7;
case 0x500da9:c.instructions+=1;goto B500da9;
case 0x500db0:goto L500db0;
case 0x500db3:c.instructions+=2;goto B500db3;
case 0x500db5:c.instructions+=1;goto B500db5;
case 0x500db7:goto L500db7;
case 0x500dba:c.instructions+=2;goto B500dba;
case 0x500dbc:c.instructions+=1;goto B500dbc;
case 0x500dbe:goto L500dbe;
case 0x500dc3:c.instructions+=1;goto B500dc3;
case 0x500dc4:goto L500dc4;
case 0x500dc6:c.instructions+=1;goto B500dc6;
case 0x500dd0:goto L500dd0;
case 0x500dd3:c.instructions+=1;goto B500dd3;
case 0x500de0:goto L500de0;
case 0x500de3:c.instructions+=1;goto B500de3;
case 0x500de5:goto L500de5;
case 0x500de8:c.instructions+=2;goto B500de8;
case 0x500dea:c.instructions+=1;goto B500dea;
case 0x500dec:goto L500dec;
case 0x500df1:goto L500df1;
case 0x500df4:c.instructions+=2;goto B500df4;
case 0x500df6:c.instructions+=1;goto B500df6;
case 0x500df8:goto L500df8;
case 0x500dfd:c.instructions+=1;goto B500dfd;
case 0x500dfe:goto L500dfe;
case 0x500e01:c.instructions+=2;goto B500e01;
case 0x500e03:c.instructions+=1;goto B500e03;
case 0x500e05:goto L500e05;
case 0x500e0a:goto L500e0a;
case 0x500e0d:c.instructions+=2;goto B500e0d;
case 0x500e0f:c.instructions+=1;goto B500e0f;
case 0x500e11:goto L500e11;
case 0x500e16:c.instructions+=1;goto B500e16;
case 0x500e17:goto L500e17;
case 0x500e19:c.instructions+=1;goto B500e19;
case 0x500e20:goto L500e20;
case 0x500e22:c.instructions+=1;goto B500e22;
case 0x500e24:goto L500e24;
case 0x500e27:c.instructions+=1;goto B500e27;
case 0x500e29:goto L500e29;
case 0x500e2a:c.instructions+=3;goto B500e2a;
case 0x500e2d:c.instructions+=2;goto B500e2d;
case 0x500e30:c.instructions+=1;goto B500e30;
case 0x500e32:goto L500e32;
case 0x500e34:c.instructions+=1;goto B500e34;
case 0x500e37:goto L500e37;
case 0x500e3a:c.instructions+=3;goto B500e3a;
case 0x500e3d:c.instructions+=2;goto B500e3d;
case 0x500e3f:c.instructions+=1;goto B500e3f;
case 0x500e41:goto L500e41;
case 0x500e45:c.instructions+=4;goto B500e45;
case 0x500e49:c.instructions+=3;goto B500e49;
case 0x500e4b:c.instructions+=2;goto B500e4b;
case 0x500e4e:c.instructions+=1;goto B500e4e;
case 0x500e55:goto L500e55;
case 0x500e60:goto L500e60;
case 0x500e62:c.instructions+=1;goto B500e62;
case 0x500e64:goto L500e64;
case 0x500e67:c.instructions+=1;goto B500e67;
case 0x500e69:goto L500e69;
case 0x500e6a:c.instructions+=3;goto B500e6a;
case 0x500e6d:c.instructions+=2;goto B500e6d;
case 0x500e70:c.instructions+=1;goto B500e70;
case 0x500e72:goto L500e72;
case 0x500e74:c.instructions+=1;goto B500e74;
case 0x500e77:goto L500e77;
case 0x500e7a:c.instructions+=3;goto B500e7a;
case 0x500e7d:c.instructions+=2;goto B500e7d;
case 0x500e7f:c.instructions+=1;goto B500e7f;
case 0x500e81:goto L500e81;
case 0x500e85:c.instructions+=4;goto B500e85;
case 0x500e89:c.instructions+=3;goto B500e89;
case 0x500e8b:c.instructions+=2;goto B500e8b;
case 0x500e8e:c.instructions+=1;goto B500e8e;
case 0x500e95:goto L500e95;
case 0x500ea0:goto L500ea0;
case 0x500ea2:c.instructions+=2;goto B500ea2;
case 0x500ea4:c.instructions+=1;goto B500ea4;
case 0x500ea5:goto L500ea5;
case 0x500ea8:c.instructions+=1;goto B500ea8;
case 0x500eaa:goto L500eaa;
case 0x500eab:c.instructions+=3;goto B500eab;
case 0x500eae:c.instructions+=2;goto B500eae;
case 0x500eb1:c.instructions+=1;goto B500eb1;
case 0x500eb3:goto L500eb3;
case 0x500eb5:c.instructions+=2;goto B500eb5;
case 0x500eb6:c.instructions+=1;goto B500eb6;
case 0x500eb9:goto L500eb9;
case 0x500ebc:c.instructions+=3;goto B500ebc;
case 0x500ebf:c.instructions+=2;goto B500ebf;
case 0x500ec1:c.instructions+=1;goto B500ec1;
case 0x500ec3:goto L500ec3;
case 0x500ec7:c.instructions+=3;goto B500ec7;
case 0x500ec8:c.instructions+=2;goto B500ec8;
case 0x500ecd:c.instructions+=1;goto B500ecd;
case 0x500ecf:goto L500ecf;
case 0x500ed1:goto L500ed1;
case 0x500ed8:c.instructions+=1;goto B500ed8;
case 0x500ed9:goto L500ed9;
case 0x500eda:c.instructions+=1;goto B500eda;
case 0x500ee0:goto L500ee0;
case 0x500ee7:c.instructions+=1;goto B500ee7;
case 0x500ee9:goto L500ee9;
case 0x500eeb:c.instructions+=1;goto B500eeb;
case 0x500eee:goto L500eee;
case 0x500ef2:c.instructions+=2;goto B500ef2;
case 0x500ef4:c.instructions+=1;goto B500ef4;
case 0x500ef6:goto L500ef6;
case 0x500ef8:c.instructions+=5;goto B500ef8;
case 0x500efd:c.instructions+=4;goto B500efd;
case 0x500eff:c.instructions+=3;goto B500eff;
case 0x500f02:c.instructions+=2;goto B500f02;
case 0x500f03:c.instructions+=1;goto B500f03;
case 0x500f05:goto L500f05;
case 0x500f07:c.instructions+=1;goto B500f07;
case 0x500f09:goto L500f09;
case 0x500f0c:c.instructions+=1;goto B500f0c;
case 0x500f0e:goto L500f0e;
case 0x500f11:c.instructions+=1;goto B500f11;
case 0x500f14:goto L500f14;
case 0x500f17:c.instructions+=1;goto B500f17;
case 0x500f19:goto L500f19;
case 0x500f1a:c.instructions+=3;goto B500f1a;
case 0x500f1d:c.instructions+=2;goto B500f1d;
case 0x500f20:c.instructions+=1;goto B500f20;
case 0x500f22:goto L500f22;
case 0x500f24:c.instructions+=1;goto B500f24;
case 0x500f27:goto L500f27;
case 0x500f2a:c.instructions+=2;goto B500f2a;
case 0x500f2d:c.instructions+=1;goto B500f2d;
case 0x500f30:goto L500f30;
case 0x500f31:c.instructions+=6;goto B500f31;
case 0x500f33:c.instructions+=5;goto B500f33;
case 0x500f34:c.instructions+=4;goto B500f34;
case 0x500f37:c.instructions+=3;goto B500f37;
case 0x500f3c:c.instructions+=2;goto B500f3c;
case 0x500f3e:c.instructions+=1;goto B500f3e;
case 0x500f40:goto L500f40;
case 0x500f43:c.instructions+=7;goto B500f43;
case 0x500f46:c.instructions+=6;goto B500f46;
case 0x500f48:c.instructions+=5;goto B500f48;
case 0x500f4b:c.instructions+=4;goto B500f4b;
case 0x500f4e:c.instructions+=3;goto B500f4e;
case 0x500f51:c.instructions+=2;goto B500f51;
case 0x500f52:c.instructions+=1;goto B500f52;
case 0x500f54:goto L500f54;
case 0x500f56:c.instructions+=2;goto B500f56;
case 0x500f5c:c.instructions+=1;goto B500f5c;
case 0x500f61:goto L500f61;
case 0x500f63:goto L500f63;
case 0x500f69:c.instructions+=1;goto B500f69;
case 0x500f6e:goto L500f6e;
case 0x500f70:goto L500f70;
case 0x500f71:c.instructions+=2;goto B500f71;
case 0x500f72:c.instructions+=1;goto B500f72;
case 0x500f80:goto L500f80;
case 0x500f82:c.instructions+=4;goto B500f82;
case 0x500f86:c.instructions+=3;goto B500f86;
case 0x500f88:c.instructions+=2;goto B500f88;
case 0x500f8a:c.instructions+=1;goto B500f8a;
case 0x500f90:goto L500f90;
case 0x500f92:c.instructions+=1;goto B500f92;
case 0x500fa0:goto L500fa0;
case 0x500fa3:c.instructions+=10;goto B500fa3;
case 0x500fa4:c.instructions+=9;goto B500fa4;
case 0x500fa8:c.instructions+=8;goto B500fa8;
case 0x500fa9:c.instructions+=7;goto B500fa9;
case 0x500fab:c.instructions+=6;goto B500fab;
case 0x500fac:c.instructions+=5;goto B500fac;
case 0x500fad:c.instructions+=4;goto B500fad;
case 0x500faf:c.instructions+=3;goto B500faf;
case 0x500fb5:c.instructions+=2;goto B500fb5;
case 0x500fba:c.instructions+=1;goto B500fba;
case 0x500fbc:goto L500fbc;
case 0x500fbe:goto L500fbe;
case 0x500fc0:c.instructions+=14;goto B500fc0;
case 0x500fc6:c.instructions+=13;goto B500fc6;
case 0x500fc8:c.instructions+=12;goto B500fc8;
case 0x500fca:c.instructions+=11;goto B500fca;
case 0x500fcd:c.instructions+=10;goto B500fcd;
case 0x500fd0:c.instructions+=9;goto B500fd0;
case 0x500fd3:c.instructions+=8;goto B500fd3;
case 0x500fd6:c.instructions+=7;goto B500fd6;
case 0x500fd9:c.instructions+=6;goto B500fd9;
case 0x500fdc:c.instructions+=5;goto B500fdc;
case 0x500fdf:c.instructions+=4;goto B500fdf;
case 0x500fe1:c.instructions+=3;goto B500fe1;
case 0x500fe4:c.instructions+=2;goto B500fe4;
case 0x500fe9:c.instructions+=1;goto B500fe9;
case 0x500fef:goto L500fef;
case 0x500ff1:goto L500ff1;
case 0x500ff3:c.instructions+=2;goto B500ff3;
case 0x500ff8:c.instructions+=1;goto B500ff8;
case 0x500ffe:goto L500ffe;
default:missing_instruction(c.pc);}
B500000:L500000:{c.instructions+=18;NFSU2_TR(0x500000);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B500004:{NFSU2_TR(0x500004);
w4(R+0,u32(0x58ed2309ull));
}
B500009:{NFSU2_TR(0x500009);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(r4(R+4)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B50000b:{NFSU2_TR(0x50000b);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B50000d:{NFSU2_TR(0x50000d);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B50000f:{NFSU2_TR(0x50000f);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B500011:{NFSU2_TR(0x500011);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500012:{NFSU2_TR(0x500012);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B500016:{NFSU2_TR(0x500016);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B500019:{NFSU2_TR(0x500019);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50001a:{NFSU2_TR(0x50001a);
__builtin_memmove((R+24),(R+4),4);
}
B50001c:{NFSU2_TR(0x50001c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50001d:{NFSU2_TR(0x50001d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B50001f:{NFSU2_TR(0x50001f);
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
B500021:{NFSU2_TR(0x500021);
w4(R+4,u32(0x44ull));
}
B500026:{NFSU2_TR(0x500026);
w4(R+28,u32(0x837b90ull));
}
B50002b:{NFSU2_TR(0x50002b);
__builtin_memmove(gp(0x8383f8),(R+12),4);
}
B500031:{NFSU2_TR(0x500031);
__builtin_memmove(gp(0x8383fc),(R+24),4);
}
B500037:L500037:{c.instructions+=1;NFSU2_TR(0x500037);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L500039;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x500037u);}goto L500037;}
}
B500039:L500039:{c.instructions+=1;NFSU2_TR(0x500039);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L50006c;}}
}
B50003b:L50003b:{c.instructions+=2;NFSU2_TR(0x50003b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B50003e:{NFSU2_TR(0x50003e);
__builtin_memmove((R+28),(R+28),4);
}
B500040:L500040:{c.instructions+=4;NFSU2_TR(0x500040);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B500042:{NFSU2_TR(0x500042);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B500044:{NFSU2_TR(0x500044);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B500046:{NFSU2_TR(0x500046);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L500063;}}
}
B500048:L500048:{c.instructions+=2;NFSU2_TR(0x500048);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B50004b:{NFSU2_TR(0x50004b);
{goto L500050;}
}
B500050:L500050:{c.instructions+=7;NFSU2_TR(0x500050);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B500052:{NFSU2_TR(0x500052);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x837b90ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B500059:{NFSU2_TR(0x500059);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B50005b:{NFSU2_TR(0x50005b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B50005c:{NFSU2_TR(0x50005c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
}
B50005f:{NFSU2_TR(0x50005f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B500061:{NFSU2_TR(0x500061);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x500050u);}goto L500050;}}
}
B500063:L500063:{c.instructions+=3;NFSU2_TR(0x500063);
w1(R+512,carry<u32>(r4(R+8),u32(0x17cull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x17cull))));
}
B500069:{NFSU2_TR(0x500069);
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
B50006a:{NFSU2_TR(0x50006a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x500040u);}goto L500040;}}
}
B50006c:L50006c:{c.instructions+=4;NFSU2_TR(0x50006c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50006d:{NFSU2_TR(0x50006d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50006e:{NFSU2_TR(0x50006e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50006f:{NFSU2_TR(0x50006f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500070:L500070:{c.instructions+=2;NFSU2_TR(0x500070);
__builtin_memmove((R+0),gp(0x8383fc),4);
}
B500075:{NFSU2_TR(0x500075);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50007b:L50007b:{c.instructions+=10;NFSU2_TR(0x50007b);
}
B50007c:{NFSU2_TR(0x50007c);
}
B50007d:{NFSU2_TR(0x50007d);
}
B50007e:{NFSU2_TR(0x50007e);
}
B50007f:{NFSU2_TR(0x50007f);
}
B500080:{NFSU2_TR(0x500080);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B500084:{NFSU2_TR(0x500084);
__builtin_memmove((R+4),gp(0x8383f8),4);
}
B50008a:{NFSU2_TR(0x50008a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x17cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B500090:{NFSU2_TR(0x500090);
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
B500092:{NFSU2_TR(0x500092);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5000a0:L5000a0:{c.instructions+=8;NFSU2_TR(0x5000a0);
__builtin_memmove((R+0),gp(0x8383fc),4);
}
B5000a5:{NFSU2_TR(0x5000a5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5000a6:{NFSU2_TR(0x5000a6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5000a7:{NFSU2_TR(0x5000a7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5000a8:{NFSU2_TR(0x5000a8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5000aa:{NFSU2_TR(0x5000aa);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5000ac:{NFSU2_TR(0x5000ac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5000ad:{NFSU2_TR(0x5000ad);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5000ec;}}
}
B5000af:L5000af:{c.instructions+=4;NFSU2_TR(0x5000af);
__builtin_memmove((R+28),gp(0x8383f8),4);
}
B5000b5:{NFSU2_TR(0x5000b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5000b9:{NFSU2_TR(0x5000b9);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B5000bc:{NFSU2_TR(0x5000bc);
__builtin_memmove((R+16),(R+16),4);
}
B5000c0:L5000c0:{c.instructions+=5;NFSU2_TR(0x5000c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5000c2:{NFSU2_TR(0x5000c2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5000c4:{NFSU2_TR(0x5000c4);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5000c6:{NFSU2_TR(0x5000c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5000c9:{NFSU2_TR(0x5000c9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5000dc;}}
}
B5000cb:L5000cb:{c.instructions+=2;NFSU2_TR(0x5000cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5000ce:{NFSU2_TR(0x5000ce);
__builtin_memmove((R+28),(R+28),4);
}
B5000d0:L5000d0:{c.instructions+=2;NFSU2_TR(0x5000d0);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(R+20))<(r4(U+10))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+10)));
w4(U+14,u32(u32(r4(R+20))-u32(r4(U+10))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5000d2:{NFSU2_TR(0x5000d2);
if(r1(R+518)){{goto L5000ee;}}
}
B5000d4:L5000d4:{c.instructions+=4;NFSU2_TR(0x5000d4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5000d5:{NFSU2_TR(0x5000d5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x5cull))));
}
B5000d8:{NFSU2_TR(0x5000d8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B5000da:{NFSU2_TR(0x5000da);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5000d0u);}goto L5000d0;}}
}
B5000dc:L5000dc:{c.instructions+=5;NFSU2_TR(0x5000dc);
__builtin_memmove((R+0),gp(0x8383fc),4);
}
B5000e1:{NFSU2_TR(0x5000e1);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5000e2:{NFSU2_TR(0x5000e2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x17cull))));
}
B5000e8:{NFSU2_TR(0x5000e8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5000ea:{NFSU2_TR(0x5000ea);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5000c0u);}goto L5000c0;}}
}
B5000ec:L5000ec:{c.instructions+=1;NFSU2_TR(0x5000ec);
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
B5000ee:L5000ee:{c.instructions+=5;NFSU2_TR(0x5000ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5000ef:{NFSU2_TR(0x5000ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5000f0:{NFSU2_TR(0x5000f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5000f1:{NFSU2_TR(0x5000f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5000f2:{NFSU2_TR(0x5000f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500100:L500100:{c.instructions+=7;NFSU2_TR(0x500100);
__builtin_memmove((R+8),gp(0x8383fc),4);
}
B500106:{NFSU2_TR(0x500106);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500107:{NFSU2_TR(0x500107);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500108:{NFSU2_TR(0x500108);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B50010a:{NFSU2_TR(0x50010a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50010c:{NFSU2_TR(0x50010c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50010d:{NFSU2_TR(0x50010d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L500134;}}
}
B50010f:L50010f:{c.instructions+=5;NFSU2_TR(0x50010f);
__builtin_memmove((R+12),gp(0x8383f8),4);
}
B500115:{NFSU2_TR(0x500115);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B500119:{NFSU2_TR(0x500119);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50011d:{NFSU2_TR(0x50011d);
__builtin_memmove((R+4),(R+12),4);
}
B50011f:{NFSU2_TR(0x50011f);
}
B500120:L500120:{c.instructions+=2;NFSU2_TR(0x500120);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B500122:{NFSU2_TR(0x500122);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L500129;}}
}
B500124:L500124:{c.instructions+=2;NFSU2_TR(0x500124);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B500127:{NFSU2_TR(0x500127);
if(r1(R+518)){{goto L50013a;}}
}
B500129:L500129:{c.instructions+=4;NFSU2_TR(0x500129);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B50012a:{NFSU2_TR(0x50012a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x17cull))));
}
B500130:{NFSU2_TR(0x500130);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B500132:{NFSU2_TR(0x500132);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x500120u);}goto L500120;}}
}
B500134:L500134:{c.instructions+=5;NFSU2_TR(0x500134);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B500135:{NFSU2_TR(0x500135);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B500136:{NFSU2_TR(0x500136);
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
B500138:{NFSU2_TR(0x500138);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B500139:{NFSU2_TR(0x500139);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50013a:L50013a:{c.instructions+=6;NFSU2_TR(0x50013a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x17cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B500140:{NFSU2_TR(0x500140);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B500141:{NFSU2_TR(0x500141);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B500142:{NFSU2_TR(0x500142);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+12)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+12)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B500144:{NFSU2_TR(0x500144);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B500145:{NFSU2_TR(0x500145);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500150:L500150:{c.instructions+=3;NFSU2_TR(0x500150);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B500154:{NFSU2_TR(0x500154);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x837b90ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B50015b:{NFSU2_TR(0x50015b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500160:L500160:{c.instructions+=4;NFSU2_TR(0x500160);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B500163:{NFSU2_TR(0x500163);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B500165:{NFSU2_TR(0x500165);
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
B500167:{NFSU2_TR(0x500167);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L500178;}}
}
B500169:L500169:{c.instructions+=2;NFSU2_TR(0x500169);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B50016c:{NFSU2_TR(0x50016c);
__builtin_memmove((R+16),(R+16),4);
}
B500170:L500170:{c.instructions+=4;NFSU2_TR(0x500170);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+0))));
}
B500172:{NFSU2_TR(0x500172);
w1(R+512,carry<u32>(r4(R+4),u32(0x5cull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x5cull))));
}
B500175:{NFSU2_TR(0x500175);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B500176:{NFSU2_TR(0x500176);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x500170u);}goto L500170;}}
}
B500178:L500178:{c.instructions+=1;NFSU2_TR(0x500178);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500180:L500180:{c.instructions+=3;NFSU2_TR(0x500180);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(r2(U+0)));
}
B500183:{NFSU2_TR(0x500183);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),m4(0x838428)));
w1(R+523,scarry<u32>(r4(R+0),m4(0x838428)));
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x838428))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B500189:{NFSU2_TR(0x500189);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500190:L500190:{c.instructions+=7;NFSU2_TR(0x500190);
__builtin_memmove((R+8),gp(0x838418),4);
}
B500196:{NFSU2_TR(0x500196);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500197:{NFSU2_TR(0x500197);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500198:{NFSU2_TR(0x500198);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B50019a:{NFSU2_TR(0x50019a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50019c:{NFSU2_TR(0x50019c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50019d:{NFSU2_TR(0x50019d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5001bf;}}
}
B50019f:L50019f:{c.instructions+=4;NFSU2_TR(0x50019f);
__builtin_memmove((R+28),gp(0x83841c),4);
}
B5001a5:{NFSU2_TR(0x5001a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5001a9:{NFSU2_TR(0x5001a9);
__builtin_memmove((R+4),(R+28),4);
}
B5001ab:{NFSU2_TR(0x5001ab);
{goto L5001b0;}
}
B5001b0:L5001b0:{c.instructions+=3;NFSU2_TR(0x5001b0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+12,u32(s32(s8(r1(U+0)))));
}
B5001b3:{NFSU2_TR(0x5001b3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5001b5:{NFSU2_TR(0x5001b5);
if(r1(R+518)){{goto L5001c5;}}
}
B5001b7:L5001b7:{c.instructions+=4;NFSU2_TR(0x5001b7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5001b8:{NFSU2_TR(0x5001b8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x50ull))));
}
B5001bb:{NFSU2_TR(0x5001bb);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5001bd:{NFSU2_TR(0x5001bd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5001b0u);}goto L5001b0;}}
}
B5001bf:L5001bf:{c.instructions+=5;NFSU2_TR(0x5001bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5001c0:{NFSU2_TR(0x5001c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5001c1:{NFSU2_TR(0x5001c1);
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
B5001c3:{NFSU2_TR(0x5001c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5001c4:{NFSU2_TR(0x5001c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5001c5:L5001c5:{c.instructions+=7;NFSU2_TR(0x5001c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5001c8:{NFSU2_TR(0x5001c8);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5001cb:{NFSU2_TR(0x5001cb);
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
B5001cd:{NFSU2_TR(0x5001cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5001ce:{NFSU2_TR(0x5001ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5001cf:{NFSU2_TR(0x5001cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5001d0:{NFSU2_TR(0x5001d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5001e0:L5001e0:{c.instructions+=5;NFSU2_TR(0x5001e0);
__builtin_memmove((R+0),gp(0x8383f4),4);
}
B5001e5:{NFSU2_TR(0x5001e5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5001e6:{NFSU2_TR(0x5001e6);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5001e8:{NFSU2_TR(0x5001e8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5001ea:{NFSU2_TR(0x5001ea);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L50024a;}}
}
B5001ec:L5001ec:{c.instructions+=4;NFSU2_TR(0x5001ec);
__builtin_memmove((R+0),gp(0x8383f0),4);
}
B5001f1:{NFSU2_TR(0x5001f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5001f2:{NFSU2_TR(0x5001f2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5001f3:{NFSU2_TR(0x5001f3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5001f5:L5001f5:{c.instructions+=2;NFSU2_TR(0x5001f5);
u8 U[15];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+13),(U+12),1);
w1(U+14,u8(u32(r1(U+13))-u32(u8(0x6ull))));
w1(R+518,u8((r1(U+14))==(u8(0x0ull))));
}
B5001fa:{NFSU2_TR(0x5001fa);
if(r1(R+518)){{goto L500237;}}
}
B5001fc:L5001fc:{c.instructions+=6;NFSU2_TR(0x5001fc);
u8 U[16];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B500200:{NFSU2_TR(0x500200);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500202:{NFSU2_TR(0x500202);
u8 U[4];
w4(U+0,u32(0xe000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500207:{NFSU2_TR(0x500207);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500209:{NFSU2_TR(0x500209);
w4(R+4,u32(0x88f298ull));
}
B50020e:{NFSU2_TR(0x50020e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x500213ull));
TAIL_STATIC(0x5d9c70u,5d9);
}
B500213:L500213:{c.instructions+=2;NFSU2_TR(0x500213);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B500215:{NFSU2_TR(0x500215);
if(r1(R+518)){{goto L500232;}}
}
B500217:L500217:{c.instructions+=2;NFSU2_TR(0x500217);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B50021a:{NFSU2_TR(0x50021a);
if(r1(R+518)){{goto L500232;}}
}
B50021c:L50021c:{c.instructions+=5;NFSU2_TR(0x50021c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50021d:{NFSU2_TR(0x50021d);
u8 U[4];
w4(U+0,u32(0xe000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500222:{NFSU2_TR(0x500222);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500224:{NFSU2_TR(0x500224);
w4(R+4,u32(0x88f298ull));
}
B500229:{NFSU2_TR(0x500229);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50022eull));
TAIL_STATIC(0x5d9c70u,5d9);
}
B50022e:L50022e:{c.instructions+=2;NFSU2_TR(0x50022e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B500230:{NFSU2_TR(0x500230);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x500217u);}goto L500217;}}
}
B500232:L500232:{c.instructions+=1;NFSU2_TR(0x500232);
__builtin_memmove((R+0),gp(0x8383f0),4);
}
B500237:L500237:{c.instructions+=5;NFSU2_TR(0x500237);
__builtin_memmove((R+4),gp(0x8383f4),4);
}
B50023d:{NFSU2_TR(0x50023d);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B50023e:{NFSU2_TR(0x50023e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xa0ull))));
}
B500244:{NFSU2_TR(0x500244);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B500246:{NFSU2_TR(0x500246);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5001f5u);}goto L5001f5;}}
}
B500248:L500248:{c.instructions+=2;NFSU2_TR(0x500248);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B500249:{NFSU2_TR(0x500249);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50024a:L50024a:{c.instructions+=2;NFSU2_TR(0x50024a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50024b:{NFSU2_TR(0x50024b);
TAIL_STATIC(0x5016d0u,501);
}
B500250:L500250:{c.instructions+=6;NFSU2_TR(0x500250);
__builtin_memmove((R+8),gp(0x83843c),4);
}
B500256:{NFSU2_TR(0x500256);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500257:{NFSU2_TR(0x500257);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B500259:{NFSU2_TR(0x500259);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50025b:{NFSU2_TR(0x50025b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50025c:{NFSU2_TR(0x50025c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L50027c;}}
}
B50025e:L50025e:{c.instructions+=4;NFSU2_TR(0x50025e);
__builtin_memmove((R+28),gp(0x838438),4);
}
B500264:{NFSU2_TR(0x500264);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B500268:{NFSU2_TR(0x500268);
__builtin_memmove((R+4),(R+28),4);
}
B50026a:{NFSU2_TR(0x50026a);
__builtin_memmove((R+12),(R+12),4);
}
B500270:L500270:{c.instructions+=2;NFSU2_TR(0x500270);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+24)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B500272:{NFSU2_TR(0x500272);
if(r1(R+518)){{goto L500281;}}
}
B500274:L500274:{c.instructions+=4;NFSU2_TR(0x500274);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B500275:{NFSU2_TR(0x500275);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B500278:{NFSU2_TR(0x500278);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B50027a:{NFSU2_TR(0x50027a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x500270u);}goto L500270;}}
}
B50027c:L50027c:{c.instructions+=4;NFSU2_TR(0x50027c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50027d:{NFSU2_TR(0x50027d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50027e:{NFSU2_TR(0x50027e);
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
B500280:{NFSU2_TR(0x500280);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500281:L500281:{c.instructions+=5;NFSU2_TR(0x500281);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B500284:{NFSU2_TR(0x500284);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B500287:{NFSU2_TR(0x500287);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B500288:{NFSU2_TR(0x500288);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B500289:{NFSU2_TR(0x500289);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500290:L500290:{c.instructions+=6;NFSU2_TR(0x500290);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B500294:{NFSU2_TR(0x500294);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B500296:{NFSU2_TR(0x500296);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B500298:{NFSU2_TR(0x500298);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x80034a10ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x80034a10ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x80034a10ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50029e:{NFSU2_TR(0x50029e);
__builtin_memmove((R+0),(R+518),1);
}
B5002a1:{NFSU2_TR(0x5002a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5002b0:L5002b0:{c.instructions+=3;NFSU2_TR(0x5002b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5002b1:{NFSU2_TR(0x5002b1);
__builtin_memmove((R+24),(R+4),4);
}
B5002b3:{NFSU2_TR(0x5002b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5002b8ull));
{goto L5002d0;}
}
B5002b8:L5002b8:{c.instructions+=2;NFSU2_TR(0x5002b8);
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
B5002bd:{NFSU2_TR(0x5002bd);
if(r1(R+518)){{goto L5002c8;}}
}
B5002bf:L5002bf:{c.instructions+=2;NFSU2_TR(0x5002bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5002c0:{NFSU2_TR(0x5002c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5002c5ull));
TAIL_STATIC(0x575630u,575);
}
B5002c5:L5002c5:{c.instructions+=1;NFSU2_TR(0x5002c5);
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
B5002c8:L5002c8:{c.instructions+=3;NFSU2_TR(0x5002c8);
__builtin_memmove((R+0),(R+24),4);
}
B5002ca:{NFSU2_TR(0x5002ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5002cb:{NFSU2_TR(0x5002cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5002d0:L5002d0:{c.instructions+=3;NFSU2_TR(0x5002d0);
u8 U[4];
w4(U+0,u32(0x79aa90ull));
s4(u32(r4(R+4)),r4(U+0));
}
B5002d6:{NFSU2_TR(0x5002d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
w4(U+4,u32(0x78f544ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5002dd:{NFSU2_TR(0x5002dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5002e0:L5002e0:{c.instructions+=2;NFSU2_TR(0x5002e0);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xdull))));
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
B5002e4:{NFSU2_TR(0x5002e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5002ec;}}
}
B5002e6:L5002e6:{c.instructions+=2;NFSU2_TR(0x5002e6);
w4(R+0,u32(0x7ull));
}
B5002eb:{NFSU2_TR(0x5002eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5002ec:L5002ec:{c.instructions+=2;NFSU2_TR(0x5002ec);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x2ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x2ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5002f0:{NFSU2_TR(0x5002f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5002f8;}}
}
B5002f2:L5002f2:{c.instructions+=2;NFSU2_TR(0x5002f2);
w4(R+0,u32(0x5ull));
}
B5002f7:{NFSU2_TR(0x5002f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5002f8:L5002f8:{c.instructions+=3;NFSU2_TR(0x5002f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5002fc:{NFSU2_TR(0x5002fc);
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
B5002ff:{NFSU2_TR(0x5002ff);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L500320;}}
}
B500301:L500301:{c.instructions+=1;NFSU2_TR(0x500301);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x500324ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B500308:L500308:{c.instructions+=2;NFSU2_TR(0x500308);
w4(R+0,u32(0x4ull));
}
B50030d:{NFSU2_TR(0x50030d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50030e:L50030e:{c.instructions+=2;NFSU2_TR(0x50030e);
w4(R+0,u32(0x2ull));
}
B500313:{NFSU2_TR(0x500313);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500314:L500314:{c.instructions+=2;NFSU2_TR(0x500314);
w4(R+0,u32(0x1ull));
}
B500319:{NFSU2_TR(0x500319);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50031a:L50031a:{c.instructions+=2;NFSU2_TR(0x50031a);
w4(R+0,u32(0x3ull));
}
B50031f:{NFSU2_TR(0x50031f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500320:L500320:{c.instructions+=2;NFSU2_TR(0x500320);
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
B500322:{NFSU2_TR(0x500322);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500340:L500340:{c.instructions+=3;NFSU2_TR(0x500340);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B500343:{NFSU2_TR(0x500343);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x1ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B500345:{NFSU2_TR(0x500345);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50034d;}}
}
B500347:L500347:{c.instructions+=2;NFSU2_TR(0x500347);
w4(R+0,u32(0x9ull));
}
B50034c:{NFSU2_TR(0x50034c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50034d:L50034d:{c.instructions+=2;NFSU2_TR(0x50034d);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x2ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x2ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50034f:{NFSU2_TR(0x50034f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L500357;}}
}
B500351:L500351:{c.instructions+=2;NFSU2_TR(0x500351);
w4(R+0,u32(0xaull));
}
B500356:{NFSU2_TR(0x500356);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500357:L500357:{c.instructions+=2;NFSU2_TR(0x500357);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x5ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x5ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B500359:{NFSU2_TR(0x500359);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L500361;}}
}
B50035b:L50035b:{c.instructions+=2;NFSU2_TR(0x50035b);
w4(R+0,u32(0xbull));
}
B500360:{NFSU2_TR(0x500360);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500361:L500361:{c.instructions+=2;NFSU2_TR(0x500361);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x3ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x3ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B500363:{NFSU2_TR(0x500363);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50036b;}}
}
B500365:L500365:{c.instructions+=2;NFSU2_TR(0x500365);
w4(R+0,u32(0xcull));
}
B50036a:{NFSU2_TR(0x50036a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50036b:L50036b:{c.instructions+=2;NFSU2_TR(0x50036b);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x4ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x4ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x4ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50036d:{NFSU2_TR(0x50036d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L500375;}}
}
B50036f:L50036f:{c.instructions+=2;NFSU2_TR(0x50036f);
w4(R+0,u32(0xdull));
}
B500374:{NFSU2_TR(0x500374);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500375:L500375:{c.instructions+=6;NFSU2_TR(0x500375);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B500377:{NFSU2_TR(0x500377);
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
B500379:{NFSU2_TR(0x500379);
__builtin_memmove((R+4),(R+518),1);
}
B50037c:{NFSU2_TR(0x50037c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0xaull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B500383:{NFSU2_TR(0x500383);
__builtin_memmove((R+0),(R+4),4);
}
B500385:{NFSU2_TR(0x500385);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500390:L500390:{c.instructions+=6;NFSU2_TR(0x500390);
u8 U[4];
w4(U+0,u32(0x4fe270ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500395:{NFSU2_TR(0x500395);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500397:{NFSU2_TR(0x500397);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500399:{NFSU2_TR(0x500399);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B50039c:{NFSU2_TR(0x50039c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50039d:{NFSU2_TR(0x50039d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5003a2ull));
TAIL_STATIC(0x75c401u,75c);
}
B5003a2:L5003a2:{c.instructions+=1;NFSU2_TR(0x5003a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5003b0:L5003b0:{c.instructions+=6;NFSU2_TR(0x5003b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5003b1:{NFSU2_TR(0x5003b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7afcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5003b7:{NFSU2_TR(0x5003b7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5003b9:{NFSU2_TR(0x5003b9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5003bb:{NFSU2_TR(0x5003bb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5003bc:{NFSU2_TR(0x5003bc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5003d4;}}
}
B5003be:L5003be:{c.instructions+=2;NFSU2_TR(0x5003be);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5003c2:{NFSU2_TR(0x5003c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7b00ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5003c8:L5003c8:{c.instructions+=2;NFSU2_TR(0x5003c8);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+28)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5003ca:{NFSU2_TR(0x5003ca);
if(r1(R+518)){{goto L5003db;}}
}
B5003cc:L5003cc:{c.instructions+=4;NFSU2_TR(0x5003cc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5003cd:{NFSU2_TR(0x5003cd);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B5003d0:{NFSU2_TR(0x5003d0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5003d2:{NFSU2_TR(0x5003d2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5003c8u);}goto L5003c8;}}
}
B5003d4:L5003d4:{c.instructions+=4;NFSU2_TR(0x5003d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5003d5:{NFSU2_TR(0x5003d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5003d6:{NFSU2_TR(0x5003d6);
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
B5003d8:{NFSU2_TR(0x5003d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5003db:L5003db:{c.instructions+=4;NFSU2_TR(0x5003db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5003dc:{NFSU2_TR(0x5003dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5003dd:{NFSU2_TR(0x5003dd);
u8 U[12];
w4(U+0,u32(u32(u32(0x7b00ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5003e4:{NFSU2_TR(0x5003e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5003f0:L5003f0:{c.instructions+=3;NFSU2_TR(0x5003f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5003f4:{NFSU2_TR(0x5003f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5003f5:{NFSU2_TR(0x5003f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5003faull));
TAIL_STATIC(0x4ffc90u,4ff);
}
B5003fa:L5003fa:{c.instructions+=2;NFSU2_TR(0x5003fa);
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
B5003fd:{NFSU2_TR(0x5003fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500400:L500400:{c.instructions+=5;NFSU2_TR(0x500400);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B500402:{NFSU2_TR(0x500402);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x886aull))));
}
B500408:{NFSU2_TR(0x500408);
w4(R+8,u32(0x2ull));
}
B50040d:{NFSU2_TR(0x50040d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50040e:{NFSU2_TR(0x50040e);
__builtin_memmove((R+28),(R+28),4);
}
B500410:L500410:{c.instructions+=3;NFSU2_TR(0x500410);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B500413:{NFSU2_TR(0x500413);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B500415:{NFSU2_TR(0x500415);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L500418;}}
}
B500417:L500417:{c.instructions+=1;NFSU2_TR(0x500417);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B500418:L500418:{c.instructions+=2;NFSU2_TR(0x500418);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B50041b:{NFSU2_TR(0x50041b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50041e;}}
}
B50041d:L50041d:{c.instructions+=1;NFSU2_TR(0x50041d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B50041e:L50041e:{c.instructions+=3;NFSU2_TR(0x50041e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B500421:{NFSU2_TR(0x500421);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B500423:{NFSU2_TR(0x500423);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L500426;}}
}
B500425:L500425:{c.instructions+=1;NFSU2_TR(0x500425);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B500426:L500426:{c.instructions+=3;NFSU2_TR(0x500426);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B500429:{NFSU2_TR(0x500429);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50042b:{NFSU2_TR(0x50042b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50042e;}}
}
B50042d:L50042d:{c.instructions+=1;NFSU2_TR(0x50042d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B50042e:L50042e:{c.instructions+=3;NFSU2_TR(0x50042e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B500431:{NFSU2_TR(0x500431);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B500433:{NFSU2_TR(0x500433);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L500436;}}
}
B500435:L500435:{c.instructions+=1;NFSU2_TR(0x500435);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B500436:L500436:{c.instructions+=3;NFSU2_TR(0x500436);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B500439:{NFSU2_TR(0x500439);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50043b:{NFSU2_TR(0x50043b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50043e;}}
}
B50043d:L50043d:{c.instructions+=1;NFSU2_TR(0x50043d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B50043e:L50043e:{c.instructions+=3;NFSU2_TR(0x50043e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B500441:{NFSU2_TR(0x500441);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B500443:{NFSU2_TR(0x500443);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L500446;}}
}
B500445:L500445:{c.instructions+=1;NFSU2_TR(0x500445);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B500446:L500446:{c.instructions+=3;NFSU2_TR(0x500446);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B500449:{NFSU2_TR(0x500449);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50044b:{NFSU2_TR(0x50044b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50044e;}}
}
B50044d:L50044d:{c.instructions+=1;NFSU2_TR(0x50044d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B50044e:L50044e:{c.instructions+=3;NFSU2_TR(0x50044e);
w1(R+512,carry<u32>(r4(R+4),u32(0x8ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B500451:{NFSU2_TR(0x500451);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B500452:{NFSU2_TR(0x500452);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x500410u);}goto L500410;}}
}
B500454:L500454:{c.instructions+=2;NFSU2_TR(0x500454);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B500455:{NFSU2_TR(0x500455);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500460:L500460:{c.instructions+=8;NFSU2_TR(0x500460);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B500464:{NFSU2_TR(0x500464);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7afcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50046a:{NFSU2_TR(0x50046a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50046b:{NFSU2_TR(0x50046b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50046c:{NFSU2_TR(0x50046c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50046f:{NFSU2_TR(0x50046f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B500471:{NFSU2_TR(0x500471);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B500473:{NFSU2_TR(0x500473);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L50048c;}}
}
B500475:L500475:{c.instructions+=2;NFSU2_TR(0x500475);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7b00ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50047b:{NFSU2_TR(0x50047b);
{goto L500480;}
}
B500480:L500480:{c.instructions+=2;NFSU2_TR(0x500480);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B500482:{NFSU2_TR(0x500482);
if(r1(R+518)){{goto L500493;}}
}
B500484:L500484:{c.instructions+=4;NFSU2_TR(0x500484);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B500485:{NFSU2_TR(0x500485);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B500488:{NFSU2_TR(0x500488);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B50048a:{NFSU2_TR(0x50048a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x500480u);}goto L500480;}}
}
B50048c:L50048c:{c.instructions+=4;NFSU2_TR(0x50048c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50048d:{NFSU2_TR(0x50048d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50048e:{NFSU2_TR(0x50048e);
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
B500490:{NFSU2_TR(0x500490);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500493:L500493:{c.instructions+=3;NFSU2_TR(0x500493);
u8 U[12];
w4(U+0,u32(u32(u32(0x7b00ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B50049a:{NFSU2_TR(0x50049a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50049c:{NFSU2_TR(0x50049c);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50048cu);}goto L50048c;}}
}
B50049e:L50049e:{c.instructions+=2;NFSU2_TR(0x50049e);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x5ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x5ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5004a2:{NFSU2_TR(0x5004a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50048cu);}goto L50048c;}}
}
B5004a4:L5004a4:{c.instructions+=4;NFSU2_TR(0x5004a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5004a5:{NFSU2_TR(0x5004a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5004a6:{NFSU2_TR(0x5004a6);
w1(R+0,u8(0x1ull));
}
B5004a8:{NFSU2_TR(0x5004a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5004b0:L5004b0:{c.instructions+=3;NFSU2_TR(0x5004b0);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5004b4:{NFSU2_TR(0x5004b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7138ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5004ba:{NFSU2_TR(0x5004ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5004c0:L5004c0:{c.instructions+=2;NFSU2_TR(0x5004c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5004c6:{NFSU2_TR(0x5004c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5004d0:L5004d0:{c.instructions+=5;NFSU2_TR(0x5004d0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5004d2:{NFSU2_TR(0x5004d2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B5004d5:{NFSU2_TR(0x5004d5);
w4(R+8,u32(0x5ull));
}
B5004da:{NFSU2_TR(0x5004da);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5004db:{NFSU2_TR(0x5004db);
{goto L5004e0;}
}
B5004e0:L5004e0:{c.instructions+=3;NFSU2_TR(0x5004e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5004e3:{NFSU2_TR(0x5004e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5004e5:{NFSU2_TR(0x5004e5);
if(r1(R+518)){{goto L5004e8;}}
}
B5004e7:L5004e7:{c.instructions+=1;NFSU2_TR(0x5004e7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5004e8:L5004e8:{c.instructions+=3;NFSU2_TR(0x5004e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5004eb:{NFSU2_TR(0x5004eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5004ed:{NFSU2_TR(0x5004ed);
if(r1(R+518)){{goto L5004f0;}}
}
B5004ef:L5004ef:{c.instructions+=1;NFSU2_TR(0x5004ef);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5004f0:L5004f0:{c.instructions+=2;NFSU2_TR(0x5004f0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5004f3:{NFSU2_TR(0x5004f3);
if(r1(R+518)){{goto L5004f6;}}
}
B5004f5:L5004f5:{c.instructions+=1;NFSU2_TR(0x5004f5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5004f6:L5004f6:{c.instructions+=3;NFSU2_TR(0x5004f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5004f9:{NFSU2_TR(0x5004f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5004fb:{NFSU2_TR(0x5004fb);
if(r1(R+518)){{goto L5004fe;}}
}
B5004fd:L5004fd:{c.instructions+=1;NFSU2_TR(0x5004fd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5004fe:L5004fe:{c.instructions+=3;NFSU2_TR(0x5004fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B500501:{NFSU2_TR(0x500501);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B500503:{NFSU2_TR(0x500503);
if(r1(R+518)){{goto L500506;}}
}
B500505:L500505:{c.instructions+=1;NFSU2_TR(0x500505);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B500506:L500506:{c.instructions+=3;NFSU2_TR(0x500506);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B500509:{NFSU2_TR(0x500509);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50050b:{NFSU2_TR(0x50050b);
if(r1(R+518)){{goto L50050e;}}
}
B50050d:L50050d:{c.instructions+=1;NFSU2_TR(0x50050d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B50050e:L50050e:{c.instructions+=3;NFSU2_TR(0x50050e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B500511:{NFSU2_TR(0x500511);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B500513:{NFSU2_TR(0x500513);
if(r1(R+518)){{goto L500516;}}
}
B500515:L500515:{c.instructions+=1;NFSU2_TR(0x500515);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B500516:L500516:{c.instructions+=3;NFSU2_TR(0x500516);
w1(R+512,carry<u32>(r4(R+4),u32(0x1cull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1cull))));
}
B500519:{NFSU2_TR(0x500519);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50051a:{NFSU2_TR(0x50051a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5004e0u);}goto L5004e0;}}
}
B50051c:L50051c:{c.instructions+=2;NFSU2_TR(0x50051c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50051d:{NFSU2_TR(0x50051d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500520:L500520:{c.instructions+=4;NFSU2_TR(0x500520);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B500526:{NFSU2_TR(0x500526);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B500528:{NFSU2_TR(0x500528);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50052a:{NFSU2_TR(0x50052a);
if(r1(R+518)){{goto L500531;}}
}
B50052c:L50052c:{c.instructions+=1;NFSU2_TR(0x50052c);
w4(R+0,u32(0x1ull));
}
B500531:L500531:{c.instructions+=3;NFSU2_TR(0x500531);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B500537:{NFSU2_TR(0x500537);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B500539:{NFSU2_TR(0x500539);
if(r1(R+518)){{goto L50053c;}}
}
B50053b:L50053b:{c.instructions+=1;NFSU2_TR(0x50053b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B50053c:L50053c:{c.instructions+=3;NFSU2_TR(0x50053c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B500542:{NFSU2_TR(0x500542);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B500544:{NFSU2_TR(0x500544);
if(r1(R+518)){{goto L500547;}}
}
B500546:L500546:{c.instructions+=1;NFSU2_TR(0x500546);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B500547:L500547:{c.instructions+=3;NFSU2_TR(0x500547);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50054d:{NFSU2_TR(0x50054d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50054f:{NFSU2_TR(0x50054f);
if(r1(R+518)){{goto L500552;}}
}
B500551:L500551:{c.instructions+=1;NFSU2_TR(0x500551);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B500552:L500552:{c.instructions+=3;NFSU2_TR(0x500552);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B500558:{NFSU2_TR(0x500558);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50055a:{NFSU2_TR(0x50055a);
if(r1(R+518)){{goto L50055d;}}
}
B50055c:L50055c:{c.instructions+=1;NFSU2_TR(0x50055c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B50055d:L50055d:{c.instructions+=3;NFSU2_TR(0x50055d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B500563:{NFSU2_TR(0x500563);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B500565:{NFSU2_TR(0x500565);
if(r1(R+518)){{goto L500568;}}
}
B500567:L500567:{c.instructions+=1;NFSU2_TR(0x500567);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B500568:L500568:{c.instructions+=3;NFSU2_TR(0x500568);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50056e:{NFSU2_TR(0x50056e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B500570:{NFSU2_TR(0x500570);
if(r1(R+518)){{goto L500573;}}
}
B500572:L500572:{c.instructions+=1;NFSU2_TR(0x500572);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B500573:L500573:{c.instructions+=3;NFSU2_TR(0x500573);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B500579:{NFSU2_TR(0x500579);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50057b:{NFSU2_TR(0x50057b);
if(r1(R+518)){{goto L50057e;}}
}
B50057d:L50057d:{c.instructions+=1;NFSU2_TR(0x50057d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B50057e:L50057e:{c.instructions+=3;NFSU2_TR(0x50057e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B500584:{NFSU2_TR(0x500584);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B500586:{NFSU2_TR(0x500586);
if(r1(R+518)){{goto L500589;}}
}
B500588:L500588:{c.instructions+=1;NFSU2_TR(0x500588);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B500589:L500589:{c.instructions+=3;NFSU2_TR(0x500589);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50058f:{NFSU2_TR(0x50058f);
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
B500591:{NFSU2_TR(0x500591);
if(r1(R+518)){{goto L500594;}}
}
B500593:L500593:{c.instructions+=1;NFSU2_TR(0x500593);
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
B500594:L500594:{c.instructions+=1;NFSU2_TR(0x500594);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5005a0:L5005a0:{c.instructions+=4;NFSU2_TR(0x5005a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5005a6:{NFSU2_TR(0x5005a6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5005a8:{NFSU2_TR(0x5005a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5005aa:{NFSU2_TR(0x5005aa);
if(r1(R+518)){{goto L5005b1;}}
}
B5005ac:L5005ac:{c.instructions+=1;NFSU2_TR(0x5005ac);
w4(R+0,u32(0x1ull));
}
B5005b1:L5005b1:{c.instructions+=3;NFSU2_TR(0x5005b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5005b7:{NFSU2_TR(0x5005b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5005b9:{NFSU2_TR(0x5005b9);
if(r1(R+518)){{goto L5005bc;}}
}
B5005bb:L5005bb:{c.instructions+=1;NFSU2_TR(0x5005bb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5005bc:L5005bc:{c.instructions+=3;NFSU2_TR(0x5005bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5005c2:{NFSU2_TR(0x5005c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5005c4:{NFSU2_TR(0x5005c4);
if(r1(R+518)){{goto L5005c7;}}
}
B5005c6:L5005c6:{c.instructions+=1;NFSU2_TR(0x5005c6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5005c7:L5005c7:{c.instructions+=3;NFSU2_TR(0x5005c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5005cd:{NFSU2_TR(0x5005cd);
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
B5005cf:{NFSU2_TR(0x5005cf);
if(r1(R+518)){{goto L5005d2;}}
}
B5005d1:L5005d1:{c.instructions+=1;NFSU2_TR(0x5005d1);
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
B5005d2:L5005d2:{c.instructions+=1;NFSU2_TR(0x5005d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5005e0:L5005e0:{c.instructions+=5;NFSU2_TR(0x5005e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5005e1:{NFSU2_TR(0x5005e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5005e7:{NFSU2_TR(0x5005e7);
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
B5005e9:{NFSU2_TR(0x5005e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5005ed:{NFSU2_TR(0x5005ed);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5005fb;}}
}
B5005ef:L5005ef:{c.instructions+=4;NFSU2_TR(0x5005ef);
{u32 ea_=u32(r4(R+4)+u32(224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5005f5:{NFSU2_TR(0x5005f5);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xda,0x30"::"a"(ea_):"memory");}
}
B5005f9:{NFSU2_TR(0x5005f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5005fa:{NFSU2_TR(0x5005fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5005fb:L5005fb:{c.instructions+=3;NFSU2_TR(0x5005fb);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B500601:{NFSU2_TR(0x500601);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B500602:{NFSU2_TR(0x500602);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500610:L500610:{c.instructions+=3;NFSU2_TR(0x500610);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B500616:{NFSU2_TR(0x500616);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B500618:{NFSU2_TR(0x500618);
if(r1(R+518)){{goto L50061d;}}
}
B50061a:L50061a:{c.instructions+=2;NFSU2_TR(0x50061a);
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
B50061c:{NFSU2_TR(0x50061c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50061d:L50061d:{c.instructions+=6;NFSU2_TR(0x50061d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50061e:{NFSU2_TR(0x50061e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50061f:{NFSU2_TR(0x50061f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B500625:{NFSU2_TR(0x500625);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B500627:{NFSU2_TR(0x500627);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500628:{NFSU2_TR(0x500628);
if(r1(R+518)){{goto L500657;}}
}
B50062a:L50062a:{c.instructions+=1;NFSU2_TR(0x50062a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50062full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5004d0u);}goto L5004d0;}
}
B50062f:L50062f:{c.instructions+=4;NFSU2_TR(0x50062f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B500633:{NFSU2_TR(0x500633);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B500635:{NFSU2_TR(0x500635);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B500637:{NFSU2_TR(0x500637);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L500657;}}
}
B500639:L500639:{c.instructions+=3;NFSU2_TR(0x500639);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+28),(U+0),4);
}
B50063c:{NFSU2_TR(0x50063c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B50063f:{NFSU2_TR(0x50063f);
}
B500640:L500640:{c.instructions+=2;NFSU2_TR(0x500640);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B500643:{NFSU2_TR(0x500643);
if(r1(R+518)){{goto L50064c;}}
}
B500645:L500645:{c.instructions+=3;NFSU2_TR(0x500645);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+12,u32(s32(s16(r2(U+0)))));
}
B500648:{NFSU2_TR(0x500648);
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
B50064a:{NFSU2_TR(0x50064a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L50065d;}}
}
B50064c:L50064c:{c.instructions+=5;NFSU2_TR(0x50064c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B50064d:{NFSU2_TR(0x50064d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B500650:{NFSU2_TR(0x500650);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B500653:{NFSU2_TR(0x500653);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B500655:{NFSU2_TR(0x500655);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x500640u);}goto L500640;}}
}
B500657:L500657:{c.instructions+=5;NFSU2_TR(0x500657);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B500658:{NFSU2_TR(0x500658);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B500659:{NFSU2_TR(0x500659);
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
B50065b:{NFSU2_TR(0x50065b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50065c:{NFSU2_TR(0x50065c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50065d:L50065d:{c.instructions+=5;NFSU2_TR(0x50065d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50065e:{NFSU2_TR(0x50065e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50065f:{NFSU2_TR(0x50065f);
w1(R+0,u8(0x1ull));
}
B500661:{NFSU2_TR(0x500661);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B500662:{NFSU2_TR(0x500662);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500670:L500670:{c.instructions+=7;NFSU2_TR(0x500670);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500671:{NFSU2_TR(0x500671);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500672:{NFSU2_TR(0x500672);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500673:{NFSU2_TR(0x500673);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500674:{NFSU2_TR(0x500674);
__builtin_memmove((R+24),(R+4),4);
}
B500676:{NFSU2_TR(0x500676);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B500678:{NFSU2_TR(0x500678);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50067dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5004d0u);}goto L5004d0;}
}
B50067d:L50067d:{c.instructions+=5;NFSU2_TR(0x50067d);
__builtin_memmove((R+28),(R+0),4);
}
B50067f:{NFSU2_TR(0x50067f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B500685:{NFSU2_TR(0x500685);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B500689:{NFSU2_TR(0x500689);
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
B50068b:{NFSU2_TR(0x50068b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5006c3;}}
}
B50068d:L50068d:{c.instructions+=3;NFSU2_TR(0x50068d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B500690:{NFSU2_TR(0x500690);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((R+24),(U+0),4);
}
B500693:{NFSU2_TR(0x500693);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500694:L500694:{c.instructions+=3;NFSU2_TR(0x500694);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B500696:{NFSU2_TR(0x500696);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B500698:{NFSU2_TR(0x500698);
if(r1(R+518)){{goto L5006b9;}}
}
B50069a:L50069a:{c.instructions+=3;NFSU2_TR(0x50069a);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+20,u32(s32(s16(r2(U+0)))));
}
B50069d:{NFSU2_TR(0x50069d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B50069f:{NFSU2_TR(0x50069f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5006b9;}}
}
B5006a1:L5006a1:{c.instructions+=7;NFSU2_TR(0x5006a1);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5006a5:{NFSU2_TR(0x5006a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5006a9:{NFSU2_TR(0x5006a9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5006ad:{NFSU2_TR(0x5006ad);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5006b1:{NFSU2_TR(0x5006b1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5006b3:{NFSU2_TR(0x5006b3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5006b6:{NFSU2_TR(0x5006b6);
if(r1(R+514)){{goto L5006b9;}}
}
B5006b8:L5006b8:{c.instructions+=1;NFSU2_TR(0x5006b8);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5006b9:L5006b9:{c.instructions+=4;NFSU2_TR(0x5006b9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B5006bc:{NFSU2_TR(0x5006bc);
w1(R+512,carry<u32>(r4(R+8),u32(0x4ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B5006bf:{NFSU2_TR(0x5006bf);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5006c0:{NFSU2_TR(0x5006c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x500694u);}goto L500694;}}
}
B5006c2:L5006c2:{c.instructions+=1;NFSU2_TR(0x5006c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5006c3:L5006c3:{c.instructions+=6;NFSU2_TR(0x5006c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5006c4:{NFSU2_TR(0x5006c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5006c5:{NFSU2_TR(0x5006c5);
__builtin_memmove((R+0),(R+12),4);
}
B5006c7:{NFSU2_TR(0x5006c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5006c8:{NFSU2_TR(0x5006c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5006c9:{NFSU2_TR(0x5006c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5006d0:L5006d0:{c.instructions+=3;NFSU2_TR(0x5006d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5006d4:{NFSU2_TR(0x5006d4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5006d6:{NFSU2_TR(0x5006d6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5006ed;}}
}
B5006d8:L5006d8:{c.instructions+=4;NFSU2_TR(0x5006d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5006de:{NFSU2_TR(0x5006de);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5006e2:{NFSU2_TR(0x5006e2);
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
B5006e4:{NFSU2_TR(0x5006e4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5006ed;}}
}
B5006e6:L5006e6:{c.instructions+=2;NFSU2_TR(0x5006e6);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5006ea:{NFSU2_TR(0x5006ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5006ed:L5006ed:{c.instructions+=2;NFSU2_TR(0x5006ed);
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
B5006ef:{NFSU2_TR(0x5006ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500700:L500700:{c.instructions+=7;NFSU2_TR(0x500700);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B500702:{NFSU2_TR(0x500702);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500703:{NFSU2_TR(0x500703);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500704:{NFSU2_TR(0x500704);
__builtin_memmove((R+24),(R+4),4);
}
B500706:{NFSU2_TR(0x500706);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500707:{NFSU2_TR(0x500707);
w4(R+4,u32(0x23ull));
}
B50070c:{NFSU2_TR(0x50070c);
__builtin_memmove((R+28),(R+24),4);
}
B50070e:L50070e:{c.instructions+=1;NFSU2_TR(0x50070e);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L500710;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50070eu);}goto L50070e;}
}
B500710:L500710:{c.instructions+=8;NFSU2_TR(0x500710);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((R+4),(U+0),4);
}
B500716:{NFSU2_TR(0x500716);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B500718:{NFSU2_TR(0x500718);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50071b:{NFSU2_TR(0x50071b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50071e:{NFSU2_TR(0x50071e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B500721:{NFSU2_TR(0x500721);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B500727:{NFSU2_TR(0x500727);
w4(R+4,u32(0xaull));
}
B50072c:{NFSU2_TR(0x50072c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((R+28),(U+0),4);
}
B500732:L500732:{c.instructions+=1;NFSU2_TR(0x500732);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L500734;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x500732u);}goto L500732;}
}
B500734:L500734:{c.instructions+=8;NFSU2_TR(0x500734);
__builtin_memmove((R+4),(R+8),4);
}
B500736:{NFSU2_TR(0x500736);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B500738:{NFSU2_TR(0x500738);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50073b:{NFSU2_TR(0x50073b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50073e:{NFSU2_TR(0x50073e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B500741:{NFSU2_TR(0x500741);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B500744:{NFSU2_TR(0x500744);
w4(R+4,u32(0x6ull));
}
B500749:{NFSU2_TR(0x500749);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50074f:L50074f:{c.instructions+=1;NFSU2_TR(0x50074f);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L500751;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50074fu);}goto L50074f;}
}
B500751:L500751:{c.instructions+=10;NFSU2_TR(0x500751);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B500755:{NFSU2_TR(0x500755);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B500757:{NFSU2_TR(0x500757);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50075a:{NFSU2_TR(0x50075a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50075d:{NFSU2_TR(0x50075d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B500760:{NFSU2_TR(0x500760);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B500763:{NFSU2_TR(0x500763);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B500765:{NFSU2_TR(0x500765);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500766:{NFSU2_TR(0x500766);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B50076c:{NFSU2_TR(0x50076c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x500771ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x500190u);}goto L500190;}
}
B500771:L500771:{c.instructions+=9;NFSU2_TR(0x500771);
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
B500774:{NFSU2_TR(0x500774);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B500775:{NFSU2_TR(0x500775);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50077b:{NFSU2_TR(0x50077b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B500781:{NFSU2_TR(0x500781);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B500787:{NFSU2_TR(0x500787);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50078d:{NFSU2_TR(0x50078d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50078e:{NFSU2_TR(0x50078e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50078f:{NFSU2_TR(0x50078f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5007a0:L5007a0:{c.instructions+=4;NFSU2_TR(0x5007a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5007a1:{NFSU2_TR(0x5007a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5007a5:{NFSU2_TR(0x5007a5);
__builtin_memmove((R+0),(R+24),4);
}
B5007a7:{NFSU2_TR(0x5007a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5007acull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5002e0u);}goto L5002e0;}
}
B5007ac:L5007ac:{c.instructions+=4;NFSU2_TR(0x5007ac);
u8 U[13];
w4(U+0,u32(u32(u32(0x180ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+12,u8(u32(r1(U+12))+u32(u8(0x1ull))));
s1(u32(r4(U+8)),r1(U+12));
}
B5007b3:{NFSU2_TR(0x5007b3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5007b5:{NFSU2_TR(0x5007b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5007bb:{NFSU2_TR(0x5007bb);
{goto L5007c0;}
}
B5007c0:L5007c0:{c.instructions+=2;NFSU2_TR(0x5007c0);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
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
B5007c3:{NFSU2_TR(0x5007c3);
if(r1(R+518)){{goto L5007d2;}}
}
B5007c5:L5007c5:{c.instructions+=4;NFSU2_TR(0x5007c5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5007c6:{NFSU2_TR(0x5007c6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B5007c9:{NFSU2_TR(0x5007c9);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x40ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x40ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5007cc:{NFSU2_TR(0x5007cc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5007c0u);}goto L5007c0;}}
}
B5007ce:L5007ce:{c.instructions+=2;NFSU2_TR(0x5007ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5007cf:{NFSU2_TR(0x5007cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5007d2:L5007d2:{c.instructions+=3;NFSU2_TR(0x5007d2);
u8 U[16];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5007d9:{NFSU2_TR(0x5007d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5007da:{NFSU2_TR(0x5007da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5007e0:L5007e0:{c.instructions+=5;NFSU2_TR(0x5007e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5007e1:{NFSU2_TR(0x5007e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5007e5:{NFSU2_TR(0x5007e5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5007e7:{NFSU2_TR(0x5007e7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x80ull))));
}
B5007ed:{NFSU2_TR(0x5007ed);
__builtin_memmove((R+4),(R+4),4);
}
B5007f0:L5007f0:{c.instructions+=3;NFSU2_TR(0x5007f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5007f2:{NFSU2_TR(0x5007f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5007f4:{NFSU2_TR(0x5007f4);
if(r1(R+518)){{goto L5007fe;}}
}
B5007f6:L5007f6:{c.instructions+=3;NFSU2_TR(0x5007f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5007f9:{NFSU2_TR(0x5007f9);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5007fc:{NFSU2_TR(0x5007fc);
if(r1(R+518)){{goto L50080d;}}
}
B5007fe:L5007fe:{c.instructions+=4;NFSU2_TR(0x5007fe);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5007ff:{NFSU2_TR(0x5007ff);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B500802:{NFSU2_TR(0x500802);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B500805:{NFSU2_TR(0x500805);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5007f0u);}goto L5007f0;}}
}
B500807:L500807:{c.instructions+=3;NFSU2_TR(0x500807);
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
B500809:{NFSU2_TR(0x500809);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50080a:{NFSU2_TR(0x50080a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50080d:L50080d:{c.instructions+=3;NFSU2_TR(0x50080d);
w1(R+0,u8(0x1ull));
}
B50080f:{NFSU2_TR(0x50080f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B500810:{NFSU2_TR(0x500810);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500820:L500820:{c.instructions+=5;NFSU2_TR(0x500820);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B500822:{NFSU2_TR(0x500822);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x84ull))));
}
B500828:{NFSU2_TR(0x500828);
w4(R+8,u32(0x8ull));
}
B50082d:{NFSU2_TR(0x50082d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50082e:{NFSU2_TR(0x50082e);
__builtin_memmove((R+28),(R+28),4);
}
B500830:L500830:{c.instructions+=3;NFSU2_TR(0x500830);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B500833:{NFSU2_TR(0x500833);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B500835:{NFSU2_TR(0x500835);
if(r1(R+518)){{goto L500838;}}
}
B500837:L500837:{c.instructions+=1;NFSU2_TR(0x500837);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B500838:L500838:{c.instructions+=2;NFSU2_TR(0x500838);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B50083b:{NFSU2_TR(0x50083b);
if(r1(R+518)){{goto L50083e;}}
}
B50083d:L50083d:{c.instructions+=1;NFSU2_TR(0x50083d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B50083e:L50083e:{c.instructions+=3;NFSU2_TR(0x50083e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B500841:{NFSU2_TR(0x500841);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B500843:{NFSU2_TR(0x500843);
if(r1(R+518)){{goto L500846;}}
}
B500845:L500845:{c.instructions+=1;NFSU2_TR(0x500845);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B500846:L500846:{c.instructions+=3;NFSU2_TR(0x500846);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B500849:{NFSU2_TR(0x500849);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50084b:{NFSU2_TR(0x50084b);
if(r1(R+518)){{goto L50084e;}}
}
B50084d:L50084d:{c.instructions+=1;NFSU2_TR(0x50084d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B50084e:L50084e:{c.instructions+=3;NFSU2_TR(0x50084e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B500851:{NFSU2_TR(0x500851);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B500853:{NFSU2_TR(0x500853);
if(r1(R+518)){{goto L500856;}}
}
B500855:L500855:{c.instructions+=1;NFSU2_TR(0x500855);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B500856:L500856:{c.instructions+=3;NFSU2_TR(0x500856);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B500859:{NFSU2_TR(0x500859);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50085b:{NFSU2_TR(0x50085b);
if(r1(R+518)){{goto L50085e;}}
}
B50085d:L50085d:{c.instructions+=1;NFSU2_TR(0x50085d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B50085e:L50085e:{c.instructions+=3;NFSU2_TR(0x50085e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B500861:{NFSU2_TR(0x500861);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B500863:{NFSU2_TR(0x500863);
if(r1(R+518)){{goto L500866;}}
}
B500865:L500865:{c.instructions+=1;NFSU2_TR(0x500865);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B500866:L500866:{c.instructions+=3;NFSU2_TR(0x500866);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B500869:{NFSU2_TR(0x500869);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50086b:{NFSU2_TR(0x50086b);
if(r1(R+518)){{goto L50086e;}}
}
B50086d:L50086d:{c.instructions+=1;NFSU2_TR(0x50086d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B50086e:L50086e:{c.instructions+=3;NFSU2_TR(0x50086e);
w1(R+512,carry<u32>(r4(R+4),u32(0x20ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B500871:{NFSU2_TR(0x500871);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B500872:{NFSU2_TR(0x500872);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x500830u);}goto L500830;}}
}
B500874:L500874:{c.instructions+=2;NFSU2_TR(0x500874);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B500875:{NFSU2_TR(0x500875);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500880:L500880:{c.instructions+=6;NFSU2_TR(0x500880);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500881:{NFSU2_TR(0x500881);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500882:{NFSU2_TR(0x500882);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B500884:{NFSU2_TR(0x500884);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x84ull))));
}
B50088a:{NFSU2_TR(0x50088a);
w4(R+24,u32(0x8ull));
}
B50088f:{NFSU2_TR(0x50088f);
}
B500890:L500890:{c.instructions+=3;NFSU2_TR(0x500890);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B500893:{NFSU2_TR(0x500893);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B500895:{NFSU2_TR(0x500895);
if(r1(R+518)){{goto L50089f;}}
}
B500897:L500897:{c.instructions+=3;NFSU2_TR(0x500897);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B50089a:{NFSU2_TR(0x50089a);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50089c:{NFSU2_TR(0x50089c);
if(r1(R+518)){{goto L50089f;}}
}
B50089e:L50089e:{c.instructions+=1;NFSU2_TR(0x50089e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B50089f:L50089f:{c.instructions+=3;NFSU2_TR(0x50089f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5008a1:{NFSU2_TR(0x5008a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5008a3:{NFSU2_TR(0x5008a3);
if(r1(R+518)){{goto L5008ad;}}
}
B5008a5:L5008a5:{c.instructions+=3;NFSU2_TR(0x5008a5);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5008a8:{NFSU2_TR(0x5008a8);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5008aa:{NFSU2_TR(0x5008aa);
if(r1(R+518)){{goto L5008ad;}}
}
B5008ac:L5008ac:{c.instructions+=1;NFSU2_TR(0x5008ac);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5008ad:L5008ad:{c.instructions+=3;NFSU2_TR(0x5008ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5008b0:{NFSU2_TR(0x5008b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5008b2:{NFSU2_TR(0x5008b2);
if(r1(R+518)){{goto L5008bc;}}
}
B5008b4:L5008b4:{c.instructions+=3;NFSU2_TR(0x5008b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5008b7:{NFSU2_TR(0x5008b7);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5008b9:{NFSU2_TR(0x5008b9);
if(r1(R+518)){{goto L5008bc;}}
}
B5008bb:L5008bb:{c.instructions+=1;NFSU2_TR(0x5008bb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5008bc:L5008bc:{c.instructions+=3;NFSU2_TR(0x5008bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5008bf:{NFSU2_TR(0x5008bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5008c1:{NFSU2_TR(0x5008c1);
if(r1(R+518)){{goto L5008cb;}}
}
B5008c3:L5008c3:{c.instructions+=3;NFSU2_TR(0x5008c3);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5008c6:{NFSU2_TR(0x5008c6);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5008c8:{NFSU2_TR(0x5008c8);
if(r1(R+518)){{goto L5008cb;}}
}
B5008ca:L5008ca:{c.instructions+=1;NFSU2_TR(0x5008ca);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5008cb:L5008cb:{c.instructions+=3;NFSU2_TR(0x5008cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5008ce:{NFSU2_TR(0x5008ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5008d0:{NFSU2_TR(0x5008d0);
if(r1(R+518)){{goto L5008da;}}
}
B5008d2:L5008d2:{c.instructions+=3;NFSU2_TR(0x5008d2);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5008d5:{NFSU2_TR(0x5008d5);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5008d7:{NFSU2_TR(0x5008d7);
if(r1(R+518)){{goto L5008da;}}
}
B5008d9:L5008d9:{c.instructions+=1;NFSU2_TR(0x5008d9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5008da:L5008da:{c.instructions+=3;NFSU2_TR(0x5008da);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5008dd:{NFSU2_TR(0x5008dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5008df:{NFSU2_TR(0x5008df);
if(r1(R+518)){{goto L5008e9;}}
}
B5008e1:L5008e1:{c.instructions+=3;NFSU2_TR(0x5008e1);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5008e4:{NFSU2_TR(0x5008e4);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5008e6:{NFSU2_TR(0x5008e6);
if(r1(R+518)){{goto L5008e9;}}
}
B5008e8:L5008e8:{c.instructions+=1;NFSU2_TR(0x5008e8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5008e9:L5008e9:{c.instructions+=3;NFSU2_TR(0x5008e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5008ec:{NFSU2_TR(0x5008ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5008ee:{NFSU2_TR(0x5008ee);
if(r1(R+518)){{goto L5008f8;}}
}
B5008f0:L5008f0:{c.instructions+=3;NFSU2_TR(0x5008f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5008f3:{NFSU2_TR(0x5008f3);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5008f5:{NFSU2_TR(0x5008f5);
if(r1(R+518)){{goto L5008f8;}}
}
B5008f7:L5008f7:{c.instructions+=1;NFSU2_TR(0x5008f7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5008f8:L5008f8:{c.instructions+=3;NFSU2_TR(0x5008f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5008fb:{NFSU2_TR(0x5008fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5008fd:{NFSU2_TR(0x5008fd);
if(r1(R+518)){{goto L500907;}}
}
B5008ff:L5008ff:{c.instructions+=3;NFSU2_TR(0x5008ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B500902:{NFSU2_TR(0x500902);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B500904:{NFSU2_TR(0x500904);
if(r1(R+518)){{goto L500907;}}
}
B500906:L500906:{c.instructions+=1;NFSU2_TR(0x500906);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B500907:L500907:{c.instructions+=3;NFSU2_TR(0x500907);
w1(R+512,carry<u32>(r4(R+4),u32(0x20ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B50090a:{NFSU2_TR(0x50090a);
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
B50090b:{NFSU2_TR(0x50090b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x500890u);}goto L500890;}}
}
B50090d:L50090d:{c.instructions+=3;NFSU2_TR(0x50090d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50090e:{NFSU2_TR(0x50090e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50090f:{NFSU2_TR(0x50090f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500910:L500910:{c.instructions+=5;NFSU2_TR(0x500910);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B500912:{NFSU2_TR(0x500912);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B500915:{NFSU2_TR(0x500915);
w4(R+8,u32(0x4ull));
}
B50091a:{NFSU2_TR(0x50091a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50091b:{NFSU2_TR(0x50091b);
{goto L500920;}
}
B500920:L500920:{c.instructions+=3;NFSU2_TR(0x500920);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B500923:{NFSU2_TR(0x500923);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B500925:{NFSU2_TR(0x500925);
if(r1(R+518)){{goto L500928;}}
}
B500927:L500927:{c.instructions+=1;NFSU2_TR(0x500927);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B500928:L500928:{c.instructions+=3;NFSU2_TR(0x500928);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50092b:{NFSU2_TR(0x50092b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50092d:{NFSU2_TR(0x50092d);
if(r1(R+518)){{goto L500930;}}
}
B50092f:L50092f:{c.instructions+=1;NFSU2_TR(0x50092f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B500930:L500930:{c.instructions+=2;NFSU2_TR(0x500930);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B500933:{NFSU2_TR(0x500933);
if(r1(R+518)){{goto L500936;}}
}
B500935:L500935:{c.instructions+=1;NFSU2_TR(0x500935);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B500936:L500936:{c.instructions+=3;NFSU2_TR(0x500936);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B500939:{NFSU2_TR(0x500939);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50093b:{NFSU2_TR(0x50093b);
if(r1(R+518)){{goto L50093e;}}
}
B50093d:L50093d:{c.instructions+=1;NFSU2_TR(0x50093d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B50093e:L50093e:{c.instructions+=3;NFSU2_TR(0x50093e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B500941:{NFSU2_TR(0x500941);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B500943:{NFSU2_TR(0x500943);
if(r1(R+518)){{goto L500946;}}
}
B500945:L500945:{c.instructions+=1;NFSU2_TR(0x500945);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B500946:L500946:{c.instructions+=3;NFSU2_TR(0x500946);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B500949:{NFSU2_TR(0x500949);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50094b:{NFSU2_TR(0x50094b);
if(r1(R+518)){{goto L50094e;}}
}
B50094d:L50094d:{c.instructions+=1;NFSU2_TR(0x50094d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B50094e:L50094e:{c.instructions+=3;NFSU2_TR(0x50094e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B500951:{NFSU2_TR(0x500951);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B500953:{NFSU2_TR(0x500953);
if(r1(R+518)){{goto L500956;}}
}
B500955:L500955:{c.instructions+=1;NFSU2_TR(0x500955);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B500956:L500956:{c.instructions+=3;NFSU2_TR(0x500956);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B500959:{NFSU2_TR(0x500959);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50095b:{NFSU2_TR(0x50095b);
if(r1(R+518)){{goto L50095e;}}
}
B50095d:L50095d:{c.instructions+=1;NFSU2_TR(0x50095d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B50095e:L50095e:{c.instructions+=3;NFSU2_TR(0x50095e);
w1(R+512,carry<u32>(r4(R+4),u32(0x20ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B500961:{NFSU2_TR(0x500961);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B500962:{NFSU2_TR(0x500962);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x500920u);}goto L500920;}}
}
B500964:L500964:{c.instructions+=2;NFSU2_TR(0x500964);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B500965:{NFSU2_TR(0x500965);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500970:L500970:{c.instructions+=7;NFSU2_TR(0x500970);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500971:{NFSU2_TR(0x500971);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500972:{NFSU2_TR(0x500972);
__builtin_memmove((R+28),(R+4),4);
}
B500974:{NFSU2_TR(0x500974);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B500976:{NFSU2_TR(0x500976);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50097c:{NFSU2_TR(0x50097c);
w4(R+8,u32(0x40ull));
}
B500981:{NFSU2_TR(0x500981);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500982:L500982:{c.instructions+=3;NFSU2_TR(0x500982);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B500984:{NFSU2_TR(0x500984);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B500986:{NFSU2_TR(0x500986);
if(r1(R+518)){{goto L500990;}}
}
B500988:L500988:{c.instructions+=3;NFSU2_TR(0x500988);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B50098b:{NFSU2_TR(0x50098b);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50098d:{NFSU2_TR(0x50098d);
if(r1(R+518)){{goto L500990;}}
}
B50098f:L50098f:{c.instructions+=1;NFSU2_TR(0x50098f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B500990:L500990:{c.instructions+=3;NFSU2_TR(0x500990);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B500993:{NFSU2_TR(0x500993);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B500994:{NFSU2_TR(0x500994);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x500982u);}goto L500982;}}
}
B500996:L500996:{c.instructions+=3;NFSU2_TR(0x500996);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B500998:{NFSU2_TR(0x500998);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B500999:{NFSU2_TR(0x500999);
if(r1(R+518)){{goto L5009db;}}
}
B50099b:L50099b:{c.instructions+=2;NFSU2_TR(0x50099b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50099c:{NFSU2_TR(0x50099c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5009a1ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B5009a1:L5009a1:{c.instructions+=4;NFSU2_TR(0x5009a1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5009a4:{NFSU2_TR(0x5009a4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5009a5:{NFSU2_TR(0x5009a5);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xffffffffull))));
}
B5009a8:{NFSU2_TR(0x5009a8);
{goto L5009b0;}
}
B5009b0:L5009b0:{c.instructions+=5;NFSU2_TR(0x5009b0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5009b1:{NFSU2_TR(0x5009b1);
u8 U[16];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B5009b8:{NFSU2_TR(0x5009b8);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5009ba:{NFSU2_TR(0x5009ba);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5009c1:{NFSU2_TR(0x5009c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5009ce;}}
}
B5009c3:L5009c3:{c.instructions+=5;NFSU2_TR(0x5009c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5009c6:{NFSU2_TR(0x5009c6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5009c9:{NFSU2_TR(0x5009c9);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5009ca:{NFSU2_TR(0x5009ca);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5009cc:{NFSU2_TR(0x5009cc);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5009c3u);}goto L5009c3;}}
}
B5009ce:L5009ce:{c.instructions+=2;NFSU2_TR(0x5009ce);
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
B5009cf:{NFSU2_TR(0x5009cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5009b0u);}goto L5009b0;}}
}
B5009d1:L5009d1:{c.instructions+=4;NFSU2_TR(0x5009d1);
u8 U[16];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5009d8:{NFSU2_TR(0x5009d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5009d9:{NFSU2_TR(0x5009d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5009da:{NFSU2_TR(0x5009da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5009db:L5009db:{c.instructions+=4;NFSU2_TR(0x5009db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5009dc:{NFSU2_TR(0x5009dc);
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
B5009de:{NFSU2_TR(0x5009de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5009df:{NFSU2_TR(0x5009df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5009e0:L5009e0:{c.instructions+=4;NFSU2_TR(0x5009e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x73c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5009e6:{NFSU2_TR(0x5009e6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5009e8:{NFSU2_TR(0x5009e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5009ea:{NFSU2_TR(0x5009ea);
if(r1(R+518)){{goto L5009f1;}}
}
B5009ec:L5009ec:{c.instructions+=1;NFSU2_TR(0x5009ec);
w4(R+0,u32(0x1ull));
}
B5009f1:L5009f1:{c.instructions+=3;NFSU2_TR(0x5009f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5009f7:{NFSU2_TR(0x5009f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5009f9:{NFSU2_TR(0x5009f9);
if(r1(R+518)){{goto L5009fc;}}
}
B5009fb:L5009fb:{c.instructions+=1;NFSU2_TR(0x5009fb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5009fc:L5009fc:{c.instructions+=3;NFSU2_TR(0x5009fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x75c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B500a02:{NFSU2_TR(0x500a02);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B500a04:{NFSU2_TR(0x500a04);
if(r1(R+518)){{goto L500a07;}}
}
B500a06:L500a06:{c.instructions+=1;NFSU2_TR(0x500a06);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B500a07:L500a07:{c.instructions+=3;NFSU2_TR(0x500a07);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x76ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B500a0d:{NFSU2_TR(0x500a0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B500a0f:{NFSU2_TR(0x500a0f);
if(r1(R+518)){{goto L500a12;}}
}
B500a11:L500a11:{c.instructions+=1;NFSU2_TR(0x500a11);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B500a12:L500a12:{c.instructions+=3;NFSU2_TR(0x500a12);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x77d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B500a18:{NFSU2_TR(0x500a18);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B500a1a:{NFSU2_TR(0x500a1a);
if(r1(R+518)){{goto L500a1d;}}
}
B500a1c:L500a1c:{c.instructions+=1;NFSU2_TR(0x500a1c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B500a1d:L500a1d:{c.instructions+=3;NFSU2_TR(0x500a1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B500a23:{NFSU2_TR(0x500a23);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B500a25:{NFSU2_TR(0x500a25);
if(r1(R+518)){{goto L500a28;}}
}
B500a27:L500a27:{c.instructions+=1;NFSU2_TR(0x500a27);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B500a28:L500a28:{c.instructions+=3;NFSU2_TR(0x500a28);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x79d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B500a2e:{NFSU2_TR(0x500a2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B500a30:{NFSU2_TR(0x500a30);
if(r1(R+518)){{goto L500a33;}}
}
B500a32:L500a32:{c.instructions+=1;NFSU2_TR(0x500a32);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B500a33:L500a33:{c.instructions+=3;NFSU2_TR(0x500a33);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7adcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B500a39:{NFSU2_TR(0x500a39);
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
B500a3b:{NFSU2_TR(0x500a3b);
if(r1(R+518)){{goto L500a3e;}}
}
B500a3d:L500a3d:{c.instructions+=1;NFSU2_TR(0x500a3d);
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
B500a3e:L500a3e:{c.instructions+=1;NFSU2_TR(0x500a3e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500a40:L500a40:{c.instructions+=6;NFSU2_TR(0x500a40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500a41:{NFSU2_TR(0x500a41);
__builtin_memmove((R+24),gp(0x8383e4),4);
}
B500a47:{NFSU2_TR(0x500a47);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B500a4a:{NFSU2_TR(0x500a4a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B500a4c:{NFSU2_TR(0x500a4c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B500a4e:{NFSU2_TR(0x500a4e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L500a97;}}
}
B500a50:L500a50:{c.instructions+=6;NFSU2_TR(0x500a50);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500a51:{NFSU2_TR(0x500a51);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B500a55:{NFSU2_TR(0x500a55);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500a56:{NFSU2_TR(0x500a56);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500a57:{NFSU2_TR(0x500a57);
__builtin_memmove((R+28),gp(0x8383e0),4);
}
B500a5d:{NFSU2_TR(0x500a5d);
__builtin_memmove((R+4),(R+4),4);
}
B500a60:L500a60:{c.instructions+=2;NFSU2_TR(0x500a60);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B500a62:{NFSU2_TR(0x500a62);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L500a6c;}}
}
B500a64:L500a64:{c.instructions+=2;NFSU2_TR(0x500a64);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B500a66:{NFSU2_TR(0x500a66);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L500a6c;}}
}
B500a68:L500a68:{c.instructions+=2;NFSU2_TR(0x500a68);
__builtin_memmove((R+4),(R+28),4);
}
B500a6a:{NFSU2_TR(0x500a6a);
{goto L500a6e;}
}
B500a6c:L500a6c:{c.instructions+=1;NFSU2_TR(0x500a6c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B500a6e:L500a6e:{c.instructions+=3;NFSU2_TR(0x500a6e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x37ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+20,u32(s32(s8(r1(U+4)))));
}
B500a72:{NFSU2_TR(0x500a72);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B500a74:{NFSU2_TR(0x500a74);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L500a84;}}
}
B500a76:L500a76:{c.instructions+=2;NFSU2_TR(0x500a76);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B500a7a:{NFSU2_TR(0x500a7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L500a84;}}
}
B500a7c:L500a7c:{c.instructions+=2;NFSU2_TR(0x500a7c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B500a7f:{NFSU2_TR(0x500a7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L500a84;}}
}
B500a81:L500a81:{c.instructions+=1;NFSU2_TR(0x500a81);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B500a84:L500a84:{c.instructions+=4;NFSU2_TR(0x500a84);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B500a85:{NFSU2_TR(0x500a85);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x88ull))));
}
B500a8b:{NFSU2_TR(0x500a8b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B500a8d:{NFSU2_TR(0x500a8d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x500a60u);}goto L500a60;}}
}
B500a8f:L500a8f:{c.instructions+=5;NFSU2_TR(0x500a8f);
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
B500a92:{NFSU2_TR(0x500a92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B500a93:{NFSU2_TR(0x500a93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B500a94:{NFSU2_TR(0x500a94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B500a95:{NFSU2_TR(0x500a95);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L500a99;}}
}
B500a97:L500a97:{c.instructions+=1;NFSU2_TR(0x500a97);
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
B500a99:L500a99:{c.instructions+=2;NFSU2_TR(0x500a99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B500a9a:{NFSU2_TR(0x500a9a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500aa0:L500aa0:{c.instructions+=5;NFSU2_TR(0x500aa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x713cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B500aa6:{NFSU2_TR(0x500aa6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B500aa8:{NFSU2_TR(0x500aa8);
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
B500aaa:{NFSU2_TR(0x500aaa);
__builtin_memmove((R+0),(R+518),1);
}
B500aad:{NFSU2_TR(0x500aad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500ab0:L500ab0:{c.instructions+=3;NFSU2_TR(0x500ab0);
__builtin_memmove((R+0),gp(0x8900ac),4);
}
B500ab5:{NFSU2_TR(0x500ab5);
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
B500ab7:{NFSU2_TR(0x500ab7);
if(r1(R+518)){{goto L500aee;}}
}
B500ab9:L500ab9:{c.instructions+=11;NFSU2_TR(0x500ab9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B500abc:{NFSU2_TR(0x500abc);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8744ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B500ac3:{NFSU2_TR(0x500ac3);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B500ac6:{NFSU2_TR(0x500ac6);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B500ac9:{NFSU2_TR(0x500ac9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B500acc:{NFSU2_TR(0x500acc);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B500ace:{NFSU2_TR(0x500ace);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8750ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B500ad4:{NFSU2_TR(0x500ad4);
{u32 ea_=u32(r4(R+4)+u32(34644u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B500ada:{NFSU2_TR(0x500ada);
{u32 ea_=u32(r4(R+4)+u32(34648u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B500ae0:{NFSU2_TR(0x500ae0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B500ae7:{NFSU2_TR(0x500ae7);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8760ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B500aee:L500aee:{c.instructions+=1;NFSU2_TR(0x500aee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500b00:L500b00:{c.instructions+=11;NFSU2_TR(0x500b00);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8700ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B500b06:{NFSU2_TR(0x500b06);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x871cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B500b0c:{NFSU2_TR(0x500b0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8704ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B500b12:{NFSU2_TR(0x500b12);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8724ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B500b18:{NFSU2_TR(0x500b18);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8708ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B500b1e:{NFSU2_TR(0x500b1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8728ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B500b24:{NFSU2_TR(0x500b24);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x870cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B500b2a:{NFSU2_TR(0x500b2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8720ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B500b30:{NFSU2_TR(0x500b30);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8710ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B500b36:{NFSU2_TR(0x500b36);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8714ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B500b3c:{NFSU2_TR(0x500b3c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500b40:L500b40:{c.instructions+=6;NFSU2_TR(0x500b40);
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
B500b42:{NFSU2_TR(0x500b42);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8704ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B500b48:{NFSU2_TR(0x500b48);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8708ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B500b4e:{NFSU2_TR(0x500b4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x870cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B500b54:{NFSU2_TR(0x500b54);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8710ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B500b5a:{NFSU2_TR(0x500b5a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500b60:L500b60:{c.instructions+=4;NFSU2_TR(0x500b60);
__builtin_memmove((R+4),gp(0x850078),4);
}
B500b66:{NFSU2_TR(0x500b66);
w4(R+0,u32(0x1ull));
}
B500b6b:{NFSU2_TR(0x500b6b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B500b6d:{NFSU2_TR(0x500b6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L500b79;}}
}
B500b6f:L500b6f:{c.instructions+=3;NFSU2_TR(0x500b6f);
__builtin_memmove((R+4),gp(0x89e7b0),4);
}
B500b75:{NFSU2_TR(0x500b75);
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
B500b77:{NFSU2_TR(0x500b77);
if(r1(R+518)){{goto L500b7b;}}
}
B500b79:L500b79:{c.instructions+=1;NFSU2_TR(0x500b79);
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
B500b7b:L500b7b:{c.instructions+=1;NFSU2_TR(0x500b7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500b80:L500b80:{c.instructions+=6;NFSU2_TR(0x500b80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500b81:{NFSU2_TR(0x500b81);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7afcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B500b87:{NFSU2_TR(0x500b87);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B500b89:{NFSU2_TR(0x500b89);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B500b8b:{NFSU2_TR(0x500b8b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500b8c:{NFSU2_TR(0x500b8c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L500ba4;}}
}
B500b8e:L500b8e:{c.instructions+=2;NFSU2_TR(0x500b8e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B500b92:{NFSU2_TR(0x500b92);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7b00ull))));
__builtin_memmove((R+8),(U+0),4);
}
B500b98:L500b98:{c.instructions+=2;NFSU2_TR(0x500b98);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B500b9a:{NFSU2_TR(0x500b9a);
if(r1(R+518)){{goto L500bab;}}
}
B500b9c:L500b9c:{c.instructions+=4;NFSU2_TR(0x500b9c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B500b9d:{NFSU2_TR(0x500b9d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B500ba0:{NFSU2_TR(0x500ba0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B500ba2:{NFSU2_TR(0x500ba2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x500b98u);}goto L500b98;}}
}
B500ba4:L500ba4:{c.instructions+=4;NFSU2_TR(0x500ba4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B500ba5:{NFSU2_TR(0x500ba5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B500ba6:{NFSU2_TR(0x500ba6);
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
B500ba8:{NFSU2_TR(0x500ba8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500bab:L500bab:{c.instructions+=3;NFSU2_TR(0x500bab);
u8 U[12];
w4(U+0,u32(u32(u32(0x7b00ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B500bb2:{NFSU2_TR(0x500bb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B500bb4:{NFSU2_TR(0x500bb4);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x500ba4u);}goto L500ba4;}}
}
B500bb6:L500bb6:{c.instructions+=8;NFSU2_TR(0x500bb6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B500bb9:{NFSU2_TR(0x500bb9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B500bbb:{NFSU2_TR(0x500bbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B500bbc:{NFSU2_TR(0x500bbc);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
w1(R+512,u8((r1(U+3))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x1ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B500bbf:{NFSU2_TR(0x500bbf);
__builtin_memmove((R+4),(R+518),1);
}
B500bc2:{NFSU2_TR(0x500bc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B500bc3:{NFSU2_TR(0x500bc3);
__builtin_memmove((R+0),(R+4),1);
}
B500bc5:{NFSU2_TR(0x500bc5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500bd0:L500bd0:{c.instructions+=4;NFSU2_TR(0x500bd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B500bd4:{NFSU2_TR(0x500bd4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x873dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B500bdb:{NFSU2_TR(0x500bdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8740ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B500be1:{NFSU2_TR(0x500be1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500bf0:L500bf0:{c.instructions+=2;NFSU2_TR(0x500bf0);
w1(R+0,u8(0x1ull));
}
B500bf2:{NFSU2_TR(0x500bf2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500c00:L500c00:{c.instructions+=3;NFSU2_TR(0x500c00);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B500c04:{NFSU2_TR(0x500c04);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B500c06:{NFSU2_TR(0x500c06);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L500c23;}}
}
B500c08:L500c08:{c.instructions+=2;NFSU2_TR(0x500c08);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B500c0b:{NFSU2_TR(0x500c0b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L500c23;}}
}
B500c0d:L500c0d:{c.instructions+=4;NFSU2_TR(0x500c0d);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(u32(0x104ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B500c13:{NFSU2_TR(0x500c13);
u8 U[12];
w4(U+0,u32(u32(u32(0x72d8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B500c1a:{NFSU2_TR(0x500c1a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B500c20:{NFSU2_TR(0x500c20);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500c23:L500c23:{c.instructions+=3;NFSU2_TR(0x500c23);
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
B500c25:{NFSU2_TR(0x500c25);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B500c2b:{NFSU2_TR(0x500c2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500c30:L500c30:{c.instructions+=3;NFSU2_TR(0x500c30);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B500c34:{NFSU2_TR(0x500c34);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
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
B500c38:{NFSU2_TR(0x500c38);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L500c58;}}
}
B500c3a:L500c3a:{c.instructions+=5;NFSU2_TR(0x500c3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7af8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B500c40:{NFSU2_TR(0x500c40);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B500c46:{NFSU2_TR(0x500c46);
u8 U[16];
w4(U+0,u32(u32(u32(0x73c0ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B500c4d:{NFSU2_TR(0x500c4d);
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
B500c4f:{NFSU2_TR(0x500c4f);
if(r1(R+518)){{goto L500c58;}}
}
B500c51:L500c51:{c.instructions+=2;NFSU2_TR(0x500c51);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B500c55:{NFSU2_TR(0x500c55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500c58:L500c58:{c.instructions+=2;NFSU2_TR(0x500c58);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B500c5b:{NFSU2_TR(0x500c5b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500c60:L500c60:{c.instructions+=3;NFSU2_TR(0x500c60);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B500c64:{NFSU2_TR(0x500c64);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B500c66:{NFSU2_TR(0x500c66);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L500c7c;}}
}
B500c68:L500c68:{c.instructions+=2;NFSU2_TR(0x500c68);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B500c6b:{NFSU2_TR(0x500c6b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L500c7c;}}
}
B500c6d:L500c6d:{c.instructions+=3;NFSU2_TR(0x500c6d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B500c73:{NFSU2_TR(0x500c73);
u8 U[12];
w4(U+0,u32(u32(u32(0x72d8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B500c7a:{NFSU2_TR(0x500c7a);
{goto L500c7e;}
}
B500c7c:L500c7c:{c.instructions+=1;NFSU2_TR(0x500c7c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B500c7e:L500c7e:{c.instructions+=3;NFSU2_TR(0x500c7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B500c84:{NFSU2_TR(0x500c84);
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
B500c86:{NFSU2_TR(0x500c86);
if(r1(R+518)){{goto L500c8f;}}
}
B500c88:L500c88:{c.instructions+=2;NFSU2_TR(0x500c88);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B500c8c:{NFSU2_TR(0x500c8c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500c8f:L500c8f:{c.instructions+=2;NFSU2_TR(0x500c8f);
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
B500c91:{NFSU2_TR(0x500c91);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500ca0:L500ca0:{c.instructions+=4;NFSU2_TR(0x500ca0);
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
B500ca2:{NFSU2_TR(0x500ca2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ae4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B500ca8:{NFSU2_TR(0x500ca8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ae8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B500cae:{NFSU2_TR(0x500cae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500cb0:L500cb0:{c.instructions+=4;NFSU2_TR(0x500cb0);
__builtin_memmove((R+8),gp(0x850078),4);
}
B500cb6:{NFSU2_TR(0x500cb6);
w4(R+0,u32(0x1ull));
}
B500cbb:{NFSU2_TR(0x500cbb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B500cbd:{NFSU2_TR(0x500cbd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L500cd6;}}
}
B500cbf:L500cbf:{c.instructions+=3;NFSU2_TR(0x500cbf);
__builtin_memmove((R+8),gp(0x862838),4);
}
B500cc5:{NFSU2_TR(0x500cc5);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B500cc7:{NFSU2_TR(0x500cc7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L500cd6;}}
}
B500cc9:L500cc9:{c.instructions+=3;NFSU2_TR(0x500cc9);
__builtin_memmove((R+8),gp(0x86347e),1);
}
B500ccf:{NFSU2_TR(0x500ccf);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B500cd1:{NFSU2_TR(0x500cd1);
if(r1(R+518)){{goto L500cd6;}}
}
B500cd3:L500cd3:{c.instructions+=2;NFSU2_TR(0x500cd3);
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
B500cd5:{NFSU2_TR(0x500cd5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500cd6:L500cd6:{c.instructions+=8;NFSU2_TR(0x500cd6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500cd7:{NFSU2_TR(0x500cd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ae8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B500cdd:{NFSU2_TR(0x500cdd);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B500cdf:{NFSU2_TR(0x500cdf);
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
B500ce1:{NFSU2_TR(0x500ce1);
__builtin_memmove((R+8),(R+518),1);
}
B500ce4:{NFSU2_TR(0x500ce4);
__builtin_memmove((R+0),(R+8),1);
}
B500ce6:{NFSU2_TR(0x500ce6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B500ce7:{NFSU2_TR(0x500ce7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500cf0:L500cf0:{c.instructions+=2;NFSU2_TR(0x500cf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ae0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B500cf6:{NFSU2_TR(0x500cf6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500d00:L500d00:{c.instructions+=4;NFSU2_TR(0x500d00);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B500d04:{NFSU2_TR(0x500d04);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(u32(0x8f0ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B500d0a:{NFSU2_TR(0x500d0a);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B500d0e:{NFSU2_TR(0x500d0e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500d20:L500d20:{c.instructions+=5;NFSU2_TR(0x500d20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B500d24:{NFSU2_TR(0x500d24);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B500d26:{NFSU2_TR(0x500d26);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500d27:{NFSU2_TR(0x500d27);
__builtin_memmove((R+24),(R+4),4);
}
B500d29:{NFSU2_TR(0x500d29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L500d4a;}}
}
B500d2b:L500d2b:{c.instructions+=4;NFSU2_TR(0x500d2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500d2c:{NFSU2_TR(0x500d2c);
__builtin_memmove((R+0),gp(0x8900ac),4);
}
B500d31:{NFSU2_TR(0x500d31);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B500d37:{NFSU2_TR(0x500d37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x500d3cull));
TAIL_STATIC(0x4db890u,4db);
}
B500d3c:L500d3c:{c.instructions+=3;NFSU2_TR(0x500d3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ae8ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B500d46:{NFSU2_TR(0x500d46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B500d47:{NFSU2_TR(0x500d47);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500d4a:L500d4a:{c.instructions+=4;NFSU2_TR(0x500d4a);
__builtin_memmove((R+4),gp(0x8900ac),4);
}
B500d50:{NFSU2_TR(0x500d50);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B500d56:{NFSU2_TR(0x500d56);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500d57:{NFSU2_TR(0x500d57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x500d5cull));
TAIL_STATIC(0x4db890u,4db);
}
B500d5c:L500d5c:{c.instructions+=3;NFSU2_TR(0x500d5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ae8ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B500d66:{NFSU2_TR(0x500d66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B500d67:{NFSU2_TR(0x500d67);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500d70:L500d70:{c.instructions+=2;NFSU2_TR(0x500d70);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ae8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B500d7a:{NFSU2_TR(0x500d7a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500d80:L500d80:{c.instructions+=5;NFSU2_TR(0x500d80);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ae8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B500d86:{NFSU2_TR(0x500d86);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B500d88:{NFSU2_TR(0x500d88);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B500d8b:{NFSU2_TR(0x500d8b);
__builtin_memmove((R+0),(R+518),1);
}
B500d8e:{NFSU2_TR(0x500d8e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500d90:L500d90:{c.instructions+=3;NFSU2_TR(0x500d90);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B500d94:{NFSU2_TR(0x500d94);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B500d96:{NFSU2_TR(0x500d96);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L500da7;}}
}
B500d98:L500d98:{c.instructions+=2;NFSU2_TR(0x500d98);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B500d9b:{NFSU2_TR(0x500d9b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L500da7;}}
}
B500d9d:L500d9d:{c.instructions+=3;NFSU2_TR(0x500d9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B500da0:{NFSU2_TR(0x500da0);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B500da4:{NFSU2_TR(0x500da4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500da7:L500da7:{c.instructions+=2;NFSU2_TR(0x500da7);
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
B500da9:{NFSU2_TR(0x500da9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500db0:L500db0:{c.instructions+=3;NFSU2_TR(0x500db0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B500db3:{NFSU2_TR(0x500db3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B500db5:{NFSU2_TR(0x500db5);
if(r1(R+518)){{goto L500dc4;}}
}
B500db7:L500db7:{c.instructions+=3;NFSU2_TR(0x500db7);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B500dba:{NFSU2_TR(0x500dba);
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
B500dbc:{NFSU2_TR(0x500dbc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L500dc4;}}
}
B500dbe:L500dbe:{c.instructions+=2;NFSU2_TR(0x500dbe);
w4(R+0,u32(0x1ull));
}
B500dc3:{NFSU2_TR(0x500dc3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500dc4:L500dc4:{c.instructions+=2;NFSU2_TR(0x500dc4);
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
B500dc6:{NFSU2_TR(0x500dc6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500dd0:L500dd0:{c.instructions+=2;NFSU2_TR(0x500dd0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B500dd3:{NFSU2_TR(0x500dd3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500de0:L500de0:{c.instructions+=2;NFSU2_TR(0x500de0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B500de3:{NFSU2_TR(0x500de3);
if(r1(R+518)){{goto L500e17;}}
}
B500de5:L500de5:{c.instructions+=3;NFSU2_TR(0x500de5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B500de8:{NFSU2_TR(0x500de8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B500dea:{NFSU2_TR(0x500dea);
if(r1(R+518)){{goto L500df1;}}
}
B500dec:L500dec:{c.instructions+=1;NFSU2_TR(0x500dec);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x500340u);}goto L500340;}
}
B500df1:L500df1:{c.instructions+=3;NFSU2_TR(0x500df1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B500df4:{NFSU2_TR(0x500df4);
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
B500df6:{NFSU2_TR(0x500df6);
if(r1(R+518)){{goto L500dfe;}}
}
B500df8:L500df8:{c.instructions+=2;NFSU2_TR(0x500df8);
w4(R+0,u32(0x6ull));
}
B500dfd:{NFSU2_TR(0x500dfd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500dfe:L500dfe:{c.instructions+=3;NFSU2_TR(0x500dfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B500e01:{NFSU2_TR(0x500e01);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B500e03:{NFSU2_TR(0x500e03);
if(r1(R+518)){{goto L500e0a;}}
}
B500e05:L500e05:{c.instructions+=1;NFSU2_TR(0x500e05);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5002e0u);}goto L5002e0;}
}
B500e0a:L500e0a:{c.instructions+=3;NFSU2_TR(0x500e0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B500e0d:{NFSU2_TR(0x500e0d);
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
B500e0f:{NFSU2_TR(0x500e0f);
if(r1(R+518)){{goto L500e17;}}
}
B500e11:L500e11:{c.instructions+=2;NFSU2_TR(0x500e11);
w4(R+0,u32(0xfull));
}
B500e16:{NFSU2_TR(0x500e16);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500e17:L500e17:{c.instructions+=2;NFSU2_TR(0x500e17);
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
B500e19:{NFSU2_TR(0x500e19);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500e20:L500e20:{c.instructions+=2;NFSU2_TR(0x500e20);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B500e22:{NFSU2_TR(0x500e22);
__builtin_memmove((R+8),(R+4),4);
}
B500e24:L500e24:{c.instructions+=2;NFSU2_TR(0x500e24);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B500e27:{NFSU2_TR(0x500e27);
if(r1(R+518)){{goto L500e37;}}
}
B500e29:L500e29:{c.instructions+=4;NFSU2_TR(0x500e29);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B500e2a:{NFSU2_TR(0x500e2a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x18ull))));
}
B500e2d:{NFSU2_TR(0x500e2d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B500e30:{NFSU2_TR(0x500e30);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x500e24u);}goto L500e24;}}
}
B500e32:L500e32:{c.instructions+=2;NFSU2_TR(0x500e32);
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
B500e34:{NFSU2_TR(0x500e34);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500e37:L500e37:{c.instructions+=4;NFSU2_TR(0x500e37);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B500e3a:{NFSU2_TR(0x500e3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B500e3d:{NFSU2_TR(0x500e3d);
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
B500e3f:{NFSU2_TR(0x500e3f);
if(r1(R+518)){{goto L500e55;}}
}
B500e41:L500e41:{c.instructions+=5;NFSU2_TR(0x500e41);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B500e45:{NFSU2_TR(0x500e45);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B500e49:{NFSU2_TR(0x500e49);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B500e4b:{NFSU2_TR(0x500e4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B500e4e:{NFSU2_TR(0x500e4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B500e55:L500e55:{c.instructions+=1;NFSU2_TR(0x500e55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500e60:L500e60:{c.instructions+=2;NFSU2_TR(0x500e60);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B500e62:{NFSU2_TR(0x500e62);
__builtin_memmove((R+8),(R+4),4);
}
B500e64:L500e64:{c.instructions+=2;NFSU2_TR(0x500e64);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B500e67:{NFSU2_TR(0x500e67);
if(r1(R+518)){{goto L500e77;}}
}
B500e69:L500e69:{c.instructions+=4;NFSU2_TR(0x500e69);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B500e6a:{NFSU2_TR(0x500e6a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x18ull))));
}
B500e6d:{NFSU2_TR(0x500e6d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B500e70:{NFSU2_TR(0x500e70);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x500e64u);}goto L500e64;}}
}
B500e72:L500e72:{c.instructions+=2;NFSU2_TR(0x500e72);
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
B500e74:{NFSU2_TR(0x500e74);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500e77:L500e77:{c.instructions+=4;NFSU2_TR(0x500e77);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B500e7a:{NFSU2_TR(0x500e7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B500e7d:{NFSU2_TR(0x500e7d);
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
B500e7f:{NFSU2_TR(0x500e7f);
if(r1(R+518)){{goto L500e95;}}
}
B500e81:L500e81:{c.instructions+=5;NFSU2_TR(0x500e81);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B500e85:{NFSU2_TR(0x500e85);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B500e89:{NFSU2_TR(0x500e89);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B500e8b:{NFSU2_TR(0x500e8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B500e8e:{NFSU2_TR(0x500e8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B500e95:L500e95:{c.instructions+=1;NFSU2_TR(0x500e95);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500ea0:L500ea0:{c.instructions+=3;NFSU2_TR(0x500ea0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B500ea2:{NFSU2_TR(0x500ea2);
__builtin_memmove((R+8),(R+4),4);
}
B500ea4:{NFSU2_TR(0x500ea4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500ea5:L500ea5:{c.instructions+=2;NFSU2_TR(0x500ea5);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B500ea8:{NFSU2_TR(0x500ea8);
if(r1(R+518)){{goto L500eb9;}}
}
B500eaa:L500eaa:{c.instructions+=4;NFSU2_TR(0x500eaa);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B500eab:{NFSU2_TR(0x500eab);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x18ull))));
}
B500eae:{NFSU2_TR(0x500eae);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B500eb1:{NFSU2_TR(0x500eb1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x500ea5u);}goto L500ea5;}}
}
B500eb3:L500eb3:{c.instructions+=3;NFSU2_TR(0x500eb3);
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
B500eb5:{NFSU2_TR(0x500eb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B500eb6:{NFSU2_TR(0x500eb6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500eb9:L500eb9:{c.instructions+=4;NFSU2_TR(0x500eb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B500ebc:{NFSU2_TR(0x500ebc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B500ebf:{NFSU2_TR(0x500ebf);
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
B500ec1:{NFSU2_TR(0x500ec1);
if(r1(R+518)){{goto L500ed9;}}
}
B500ec3:L500ec3:{c.instructions+=4;NFSU2_TR(0x500ec3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B500ec7:{NFSU2_TR(0x500ec7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500ec8:{NFSU2_TR(0x500ec8);
w4(R+4,u32(0x6ull));
}
B500ecd:{NFSU2_TR(0x500ecd);
__builtin_memmove((R+28),(R+0),4);
}
B500ecf:L500ecf:{c.instructions+=1;NFSU2_TR(0x500ecf);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L500ed1;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x500ecfu);}goto L500ecf;}
}
B500ed1:L500ed1:{c.instructions+=2;NFSU2_TR(0x500ed1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B500ed8:{NFSU2_TR(0x500ed8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B500ed9:L500ed9:{c.instructions+=2;NFSU2_TR(0x500ed9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B500eda:{NFSU2_TR(0x500eda);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500ee0:L500ee0:{c.instructions+=2;NFSU2_TR(0x500ee0);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B500ee7:{NFSU2_TR(0x500ee7);
if(r1(R+518)){{goto L500eee;}}
}
B500ee9:L500ee9:{c.instructions+=2;NFSU2_TR(0x500ee9);
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
B500eeb:{NFSU2_TR(0x500eeb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500eee:L500eee:{c.instructions+=3;NFSU2_TR(0x500eee);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B500ef2:{NFSU2_TR(0x500ef2);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B500ef4:{NFSU2_TR(0x500ef4);
if(r1(R+518)){{goto L500f0e;}}
}
B500ef6:L500ef6:{c.instructions+=6;NFSU2_TR(0x500ef6);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B500ef8:{NFSU2_TR(0x500ef8);
w4(R+0,u32(0xaaaaaaabull));
}
B500efd:{NFSU2_TR(0x500efd);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(r4(R+8)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B500eff:{NFSU2_TR(0x500eff);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B500f02:{NFSU2_TR(0x500f02);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B500f03:{NFSU2_TR(0x500f03);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L500f09;}}
}
B500f05:L500f05:{c.instructions+=2;NFSU2_TR(0x500f05);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B500f07:{NFSU2_TR(0x500f07);
{goto L500f0e;}
}
B500f09:L500f09:{c.instructions+=2;NFSU2_TR(0x500f09);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B500f0c:{NFSU2_TR(0x500f0c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L500f22;}}
}
B500f0e:L500f0e:{c.instructions+=2;NFSU2_TR(0x500f0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B500f11:{NFSU2_TR(0x500f11);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B500f14:L500f14:{c.instructions+=2;NFSU2_TR(0x500f14);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
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
B500f17:{NFSU2_TR(0x500f17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L500f27;}}
}
B500f19:L500f19:{c.instructions+=4;NFSU2_TR(0x500f19);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B500f1a:{NFSU2_TR(0x500f1a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
}
B500f1d:{NFSU2_TR(0x500f1d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B500f20:{NFSU2_TR(0x500f20);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x500f14u);}goto L500f14;}}
}
B500f22:L500f22:{c.instructions+=2;NFSU2_TR(0x500f22);
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
B500f24:{NFSU2_TR(0x500f24);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500f27:L500f27:{c.instructions+=3;NFSU2_TR(0x500f27);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B500f2a:{NFSU2_TR(0x500f2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B500f2d:{NFSU2_TR(0x500f2d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500f30:L500f30:{c.instructions+=7;NFSU2_TR(0x500f30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500f31:{NFSU2_TR(0x500f31);
__builtin_memmove((R+24),(R+4),4);
}
B500f33:{NFSU2_TR(0x500f33);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500f34:{NFSU2_TR(0x500f34);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B500f37:{NFSU2_TR(0x500f37);
w4(R+8,u32(0x40ull));
}
B500f3c:{NFSU2_TR(0x500f3c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B500f3e:{NFSU2_TR(0x500f3e);
__builtin_memmove((R+28),(R+28),4);
}
B500f40:L500f40:{c.instructions+=8;NFSU2_TR(0x500f40);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B500f43:{NFSU2_TR(0x500f43);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B500f46:{NFSU2_TR(0x500f46);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B500f48:{NFSU2_TR(0x500f48);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B500f4b:{NFSU2_TR(0x500f4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B500f4e:{NFSU2_TR(0x500f4e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
}
B500f51:{NFSU2_TR(0x500f51);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B500f52:{NFSU2_TR(0x500f52);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x500f40u);}goto L500f40;}}
}
B500f54:L500f54:{c.instructions+=3;NFSU2_TR(0x500f54);
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
B500f56:{NFSU2_TR(0x500f56);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x600ull))));
__builtin_memmove((R+28),(U+0),4);
}
B500f5c:{NFSU2_TR(0x500f5c);
w4(R+4,u32(0x80ull));
}
B500f61:L500f61:{c.instructions+=1;NFSU2_TR(0x500f61);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L500f63;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x500f61u);}goto L500f61;}
}
B500f63:L500f63:{c.instructions+=2;NFSU2_TR(0x500f63);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x800ull))));
__builtin_memmove((R+28),(U+0),4);
}
B500f69:{NFSU2_TR(0x500f69);
w4(R+4,u32(0x100ull));
}
B500f6e:L500f6e:{c.instructions+=1;NFSU2_TR(0x500f6e);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L500f70;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x500f6eu);}goto L500f6e;}
}
B500f70:L500f70:{c.instructions+=3;NFSU2_TR(0x500f70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B500f71:{NFSU2_TR(0x500f71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B500f72:{NFSU2_TR(0x500f72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500f80:L500f80:{c.instructions+=5;NFSU2_TR(0x500f80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B500f82:{NFSU2_TR(0x500f82);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B500f86:{NFSU2_TR(0x500f86);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),r4(R+0)));
w1(R+523,scarry<u32>(r4(R+8),r4(R+0)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B500f88:{NFSU2_TR(0x500f88);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B500f8a:{NFSU2_TR(0x500f8a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500f90:L500f90:{c.instructions+=2;NFSU2_TR(0x500f90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B500f92:{NFSU2_TR(0x500f92);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B500fa0:L500fa0:{c.instructions+=11;NFSU2_TR(0x500fa0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B500fa3:{NFSU2_TR(0x500fa3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500fa4:{NFSU2_TR(0x500fa4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B500fa8:{NFSU2_TR(0x500fa8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500fa9:{NFSU2_TR(0x500fa9);
__builtin_memmove((R+20),(R+4),4);
}
B500fab:{NFSU2_TR(0x500fab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500fac:{NFSU2_TR(0x500fac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B500fad:{NFSU2_TR(0x500fad);
__builtin_memmove((R+28),(R+12),4);
}
B500faf:{NFSU2_TR(0x500faf);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8cull))));
}
B500fb5:{NFSU2_TR(0x500fb5);
w4(R+4,u32(0x23ull));
}
B500fba:{NFSU2_TR(0x500fba);
__builtin_memmove((R+24),(R+20),4);
}
B500fbc:L500fbc:{c.instructions+=1;NFSU2_TR(0x500fbc);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L500fbe;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x500fbcu);}goto L500fbc;}
}
B500fbe:L500fbe:{c.instructions+=15;NFSU2_TR(0x500fbe);
__builtin_memmove((R+4),(R+12),4);
}
B500fc0:{NFSU2_TR(0x500fc0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8cull))));
__builtin_memmove((R+0),(U+0),4);
}
B500fc6:{NFSU2_TR(0x500fc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B500fc8:{NFSU2_TR(0x500fc8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B500fca:{NFSU2_TR(0x500fca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B500fcd:{NFSU2_TR(0x500fcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B500fd0:{NFSU2_TR(0x500fd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B500fd3:{NFSU2_TR(0x500fd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B500fd6:{NFSU2_TR(0x500fd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B500fd9:{NFSU2_TR(0x500fd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B500fdc:{NFSU2_TR(0x500fdc);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B500fdf:{NFSU2_TR(0x500fdf);
__builtin_memmove((R+28),(R+12),4);
}
B500fe1:{NFSU2_TR(0x500fe1);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x28ull))));
}
B500fe4:{NFSU2_TR(0x500fe4);
w4(R+4,u32(0xaull));
}
B500fe9:{NFSU2_TR(0x500fe9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x9cull))));
__builtin_memmove((R+24),(U+0),4);
}
B500fef:L500fef:{c.instructions+=1;NFSU2_TR(0x500fef);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L500ff1;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x500fefu);}goto L500fef;}
}
B500ff1:L500ff1:{c.instructions+=3;NFSU2_TR(0x500ff1);
__builtin_memmove((R+28),(R+12),4);
}
B500ff3:{NFSU2_TR(0x500ff3);
w4(R+4,u32(0x6ull));
}
B500ff8:{NFSU2_TR(0x500ff8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xc4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B500ffe:L500ffe:{c.instructions+=1;NFSU2_TR(0x500ffe);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){TAIL_STATIC(0x501000u,501);}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x500ffeu);}goto L500ffe;}
}
XIT:NFSU2_TR_EXIT(0x500,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
