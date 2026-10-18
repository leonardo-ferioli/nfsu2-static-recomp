#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_591(u8* __restrict R,Cpu& c);
u32 body_593(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x592,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x592,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_592(u8* __restrict R,Cpu& c);
u32 page_592(Cpu& c){return body_592(c.regs.data(),c);}
__attribute__((noinline)) u32 body_592(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x592000:goto L592000;
case 0x592004:c.instructions+=1;goto B592004;
case 0x592009:goto L592009;
case 0x59200d:c.instructions+=6;goto B59200d;
case 0x59200e:c.instructions+=5;goto B59200e;
case 0x592012:c.instructions+=4;goto B592012;
case 0x592013:c.instructions+=3;goto B592013;
case 0x592017:c.instructions+=2;goto B592017;
case 0x592018:c.instructions+=1;goto B592018;
case 0x59201d:goto L59201d;
case 0x592021:c.instructions+=9;goto B592021;
case 0x592024:c.instructions+=8;goto B592024;
case 0x592028:c.instructions+=7;goto B592028;
case 0x59202a:c.instructions+=6;goto B59202a;
case 0x59202d:c.instructions+=5;goto B59202d;
case 0x592030:c.instructions+=4;goto B592030;
case 0x592031:c.instructions+=3;goto B592031;
case 0x592033:c.instructions+=2;goto B592033;
case 0x592034:c.instructions+=1;goto B592034;
case 0x592040:goto L592040;
case 0x592044:c.instructions+=6;goto B592044;
case 0x59204b:c.instructions+=5;goto B59204b;
case 0x59204d:c.instructions+=4;goto B59204d;
case 0x59204e:c.instructions+=3;goto B59204e;
case 0x592052:c.instructions+=2;goto B592052;
case 0x592059:c.instructions+=1;goto B592059;
case 0x59205b:goto L59205b;
case 0x59205d:c.instructions+=1;goto B59205d;
case 0x59205f:goto L59205f;
case 0x592065:c.instructions+=2;goto B592065;
case 0x592066:c.instructions+=1;goto B592066;
case 0x592069:goto L592069;
case 0x59206b:c.instructions+=1;goto B59206b;
case 0x59206d:goto L59206d;
case 0x592073:goto L592073;
case 0x592074:c.instructions+=1;goto B592074;
case 0x592080:goto L592080;
case 0x592084:c.instructions+=4;goto B592084;
case 0x592088:c.instructions+=3;goto B592088;
case 0x59208f:c.instructions+=2;goto B59208f;
case 0x592096:c.instructions+=1;goto B592096;
case 0x592098:goto L592098;
case 0x59209f:goto L59209f;
case 0x5920b0:goto L5920b0;
case 0x5920b1:c.instructions+=10;goto B5920b1;
case 0x5920b2:c.instructions+=9;goto B5920b2;
case 0x5920b4:c.instructions+=8;goto B5920b4;
case 0x5920b8:c.instructions+=7;goto B5920b8;
case 0x5920b9:c.instructions+=6;goto B5920b9;
case 0x5920bd:c.instructions+=5;goto B5920bd;
case 0x5920c4:c.instructions+=4;goto B5920c4;
case 0x5920c6:c.instructions+=3;goto B5920c6;
case 0x5920c8:c.instructions+=2;goto B5920c8;
case 0x5920cf:c.instructions+=1;goto B5920cf;
case 0x5920d1:goto L5920d1;
case 0x5920d3:c.instructions+=1;goto B5920d3;
case 0x5920d5:goto L5920d5;
case 0x5920db:c.instructions+=6;goto B5920db;
case 0x5920dc:c.instructions+=5;goto B5920dc;
case 0x5920dd:c.instructions+=4;goto B5920dd;
case 0x5920e3:c.instructions+=3;goto B5920e3;
case 0x5920e4:c.instructions+=2;goto B5920e4;
case 0x5920e5:c.instructions+=1;goto B5920e5;
case 0x5920e8:goto L5920e8;
case 0x5920ea:c.instructions+=1;goto B5920ea;
case 0x5920ec:goto L5920ec;
case 0x5920f2:goto L5920f2;
case 0x5920f4:c.instructions+=4;goto B5920f4;
case 0x5920f7:c.instructions+=3;goto B5920f7;
case 0x5920fe:c.instructions+=2;goto B5920fe;
case 0x5920ff:c.instructions+=1;goto B5920ff;
case 0x592104:goto L592104;
case 0x59210b:c.instructions+=11;goto B59210b;
case 0x592112:c.instructions+=10;goto B592112;
case 0x592119:c.instructions+=9;goto B592119;
case 0x592120:c.instructions+=8;goto B592120;
case 0x592127:c.instructions+=7;goto B592127;
case 0x59212e:c.instructions+=6;goto B59212e;
case 0x592135:c.instructions+=5;goto B592135;
case 0x59213c:c.instructions+=4;goto B59213c;
case 0x592143:c.instructions+=3;goto B592143;
case 0x59214a:c.instructions+=2;goto B59214a;
case 0x59214d:c.instructions+=1;goto B59214d;
case 0x592155:goto L592155;
case 0x592156:c.instructions+=3;goto B592156;
case 0x592157:c.instructions+=2;goto B592157;
case 0x592158:c.instructions+=1;goto B592158;
case 0x592160:goto L592160;
case 0x592164:c.instructions+=25;goto B592164;
case 0x592167:c.instructions+=24;goto B592167;
case 0x592169:c.instructions+=23;goto B592169;
case 0x59216c:c.instructions+=22;goto B59216c;
case 0x59216f:c.instructions+=21;goto B59216f;
case 0x592171:c.instructions+=20;goto B592171;
case 0x592174:c.instructions+=19;goto B592174;
case 0x592177:c.instructions+=18;goto B592177;
case 0x59217a:c.instructions+=17;goto B59217a;
case 0x59217d:c.instructions+=16;goto B59217d;
case 0x59217f:c.instructions+=15;goto B59217f;
case 0x592186:c.instructions+=14;goto B592186;
case 0x592188:c.instructions+=13;goto B592188;
case 0x59218a:c.instructions+=12;goto B59218a;
case 0x59218c:c.instructions+=11;goto B59218c;
case 0x59218e:c.instructions+=10;goto B59218e;
case 0x592190:c.instructions+=9;goto B592190;
case 0x592192:c.instructions+=8;goto B592192;
case 0x592194:c.instructions+=7;goto B592194;
case 0x592196:c.instructions+=6;goto B592196;
case 0x592198:c.instructions+=5;goto B592198;
case 0x59219a:c.instructions+=4;goto B59219a;
case 0x59219c:c.instructions+=3;goto B59219c;
case 0x59219e:c.instructions+=2;goto B59219e;
case 0x5921a4:c.instructions+=1;goto B5921a4;
case 0x5921b0:goto L5921b0;
case 0x5921b1:c.instructions+=10;goto B5921b1;
case 0x5921b3:c.instructions+=9;goto B5921b3;
case 0x5921b6:c.instructions+=8;goto B5921b6;
case 0x5921bc:c.instructions+=7;goto B5921bc;
case 0x5921bd:c.instructions+=6;goto B5921bd;
case 0x5921c0:c.instructions+=5;goto B5921c0;
case 0x5921c1:c.instructions+=4;goto B5921c1;
case 0x5921c3:c.instructions+=3;goto B5921c3;
case 0x5921ca:c.instructions+=2;goto B5921ca;
case 0x5921cc:c.instructions+=1;goto B5921cc;
case 0x5921d2:goto L5921d2;
case 0x5921d9:c.instructions+=34;goto B5921d9;
case 0x5921e1:c.instructions+=33;goto B5921e1;
case 0x5921e7:c.instructions+=32;goto B5921e7;
case 0x5921ef:c.instructions+=31;goto B5921ef;
case 0x5921f7:c.instructions+=30;goto B5921f7;
case 0x5921ff:c.instructions+=29;goto B5921ff;
case 0x592207:c.instructions+=28;goto B592207;
case 0x59220f:c.instructions+=27;goto B59220f;
case 0x592217:c.instructions+=26;goto B592217;
case 0x59221f:c.instructions+=25;goto B59221f;
case 0x592227:c.instructions+=24;goto B592227;
case 0x59222f:c.instructions+=23;goto B59222f;
case 0x592237:c.instructions+=22;goto B592237;
case 0x59223f:c.instructions+=21;goto B59223f;
case 0x592247:c.instructions+=20;goto B592247;
case 0x59224f:c.instructions+=19;goto B59224f;
case 0x592257:c.instructions+=18;goto B592257;
case 0x59225f:c.instructions+=17;goto B59225f;
case 0x592267:c.instructions+=16;goto B592267;
case 0x59226f:c.instructions+=15;goto B59226f;
case 0x592277:c.instructions+=14;goto B592277;
case 0x59227f:c.instructions+=13;goto B59227f;
case 0x592287:c.instructions+=12;goto B592287;
case 0x59228f:c.instructions+=11;goto B59228f;
case 0x592297:c.instructions+=10;goto B592297;
case 0x59229f:c.instructions+=9;goto B59229f;
case 0x5922a7:c.instructions+=8;goto B5922a7;
case 0x5922af:c.instructions+=7;goto B5922af;
case 0x5922b7:c.instructions+=6;goto B5922b7;
case 0x5922bf:c.instructions+=5;goto B5922bf;
case 0x5922ca:c.instructions+=4;goto B5922ca;
case 0x5922d5:c.instructions+=3;goto B5922d5;
case 0x5922e0:c.instructions+=2;goto B5922e0;
case 0x5922eb:c.instructions+=1;goto B5922eb;
case 0x5922f0:goto L5922f0;
case 0x5922f4:c.instructions+=5;goto B5922f4;
case 0x5922f5:c.instructions+=4;goto B5922f5;
case 0x5922f9:c.instructions+=3;goto B5922f9;
case 0x5922fa:c.instructions+=2;goto B5922fa;
case 0x5922fb:c.instructions+=1;goto B5922fb;
case 0x592300:goto L592300;
case 0x592303:c.instructions+=2;goto B592303;
case 0x592306:c.instructions+=1;goto B592306;
case 0x592308:goto L592308;
case 0x59230a:c.instructions+=7;goto B59230a;
case 0x592311:c.instructions+=6;goto B592311;
case 0x592315:c.instructions+=5;goto B592315;
case 0x592319:c.instructions+=4;goto B592319;
case 0x59231a:c.instructions+=3;goto B59231a;
case 0x59231b:c.instructions+=2;goto B59231b;
case 0x59231c:c.instructions+=1;goto B59231c;
case 0x592321:goto L592321;
case 0x592323:c.instructions+=7;goto B592323;
case 0x59232a:c.instructions+=6;goto B59232a;
case 0x59232e:c.instructions+=5;goto B59232e;
case 0x592332:c.instructions+=4;goto B592332;
case 0x592333:c.instructions+=3;goto B592333;
case 0x592334:c.instructions+=2;goto B592334;
case 0x592335:c.instructions+=1;goto B592335;
case 0x59233a:goto L59233a;
case 0x59233d:goto L59233d;
case 0x59233f:c.instructions+=30;goto B59233f;
case 0x592342:c.instructions+=29;goto B592342;
case 0x592345:c.instructions+=28;goto B592345;
case 0x592349:c.instructions+=27;goto B592349;
case 0x59234d:c.instructions+=26;goto B59234d;
case 0x592351:c.instructions+=25;goto B592351;
case 0x592353:c.instructions+=24;goto B592353;
case 0x59235a:c.instructions+=23;goto B59235a;
case 0x592361:c.instructions+=22;goto B592361;
case 0x592368:c.instructions+=21;goto B592368;
case 0x592373:c.instructions+=20;goto B592373;
case 0x592376:c.instructions+=19;goto B592376;
case 0x592379:c.instructions+=18;goto B592379;
case 0x59237b:c.instructions+=17;goto B59237b;
case 0x59237f:c.instructions+=16;goto B59237f;
case 0x592381:c.instructions+=15;goto B592381;
case 0x592385:c.instructions+=14;goto B592385;
case 0x592389:c.instructions+=13;goto B592389;
case 0x59238d:c.instructions+=12;goto B59238d;
case 0x59238e:c.instructions+=11;goto B59238e;
case 0x592395:c.instructions+=10;goto B592395;
case 0x592399:c.instructions+=9;goto B592399;
case 0x5923a1:c.instructions+=8;goto B5923a1;
case 0x5923a8:c.instructions+=7;goto B5923a8;
case 0x5923af:c.instructions+=6;goto B5923af;
case 0x5923b2:c.instructions+=5;goto B5923b2;
case 0x5923b4:c.instructions+=4;goto B5923b4;
case 0x5923ba:c.instructions+=3;goto B5923ba;
case 0x5923bb:c.instructions+=2;goto B5923bb;
case 0x5923bf:c.instructions+=1;goto B5923bf;
case 0x5923c4:goto L5923c4;
case 0x5923c8:c.instructions+=4;goto B5923c8;
case 0x5923c9:c.instructions+=3;goto B5923c9;
case 0x5923cf:c.instructions+=2;goto B5923cf;
case 0x5923d0:c.instructions+=1;goto B5923d0;
case 0x5923d5:goto L5923d5;
case 0x5923d8:goto L5923d8;
case 0x5923d9:c.instructions+=4;goto B5923d9;
case 0x5923da:c.instructions+=3;goto B5923da;
case 0x5923dc:c.instructions+=2;goto B5923dc;
case 0x5923dd:c.instructions+=1;goto B5923dd;
case 0x5923e0:goto L5923e0;
case 0x5923e1:c.instructions+=3;goto B5923e1;
case 0x5923e2:c.instructions+=2;goto B5923e2;
case 0x5923e4:c.instructions+=1;goto B5923e4;
case 0x5923e6:goto L5923e6;
case 0x5923e7:c.instructions+=2;goto B5923e7;
case 0x5923e9:c.instructions+=1;goto B5923e9;
case 0x5923ee:goto L5923ee;
case 0x5923ef:c.instructions+=2;goto B5923ef;
case 0x5923f2:c.instructions+=1;goto B5923f2;
case 0x5923f4:goto L5923f4;
case 0x5923f5:c.instructions+=2;goto B5923f5;
case 0x5923f6:c.instructions+=1;goto B5923f6;
case 0x592400:goto L592400;
case 0x592401:c.instructions+=9;goto B592401;
case 0x592403:c.instructions+=8;goto B592403;
case 0x592406:c.instructions+=7;goto B592406;
case 0x592409:c.instructions+=6;goto B592409;
case 0x59240c:c.instructions+=5;goto B59240c;
case 0x59240e:c.instructions+=4;goto B59240e;
case 0x59240f:c.instructions+=3;goto B59240f;
case 0x592411:c.instructions+=2;goto B592411;
case 0x592415:c.instructions+=1;goto B592415;
case 0x592417:goto L592417;
case 0x592418:c.instructions+=1;goto B592418;
case 0x59241a:goto L59241a;
case 0x59241c:c.instructions+=1;goto B59241c;
case 0x59241d:goto L59241d;
case 0x592420:c.instructions+=3;goto B592420;
case 0x592421:c.instructions+=2;goto B592421;
case 0x592422:c.instructions+=1;goto B592422;
case 0x592427:goto L592427;
case 0x59242a:c.instructions+=16;goto B59242a;
case 0x59242e:c.instructions+=15;goto B59242e;
case 0x592431:c.instructions+=14;goto B592431;
case 0x592434:c.instructions+=13;goto B592434;
case 0x592438:c.instructions+=12;goto B592438;
case 0x59243b:c.instructions+=11;goto B59243b;
case 0x59243f:c.instructions+=10;goto B59243f;
case 0x592443:c.instructions+=9;goto B592443;
case 0x592447:c.instructions+=8;goto B592447;
case 0x592449:c.instructions+=7;goto B592449;
case 0x59244c:c.instructions+=6;goto B59244c;
case 0x59244f:c.instructions+=5;goto B59244f;
case 0x592452:c.instructions+=4;goto B592452;
case 0x592453:c.instructions+=3;goto B592453;
case 0x592455:c.instructions+=2;goto B592455;
case 0x592456:c.instructions+=1;goto B592456;
case 0x592460:goto L592460;
case 0x592463:c.instructions+=4;goto B592463;
case 0x592464:c.instructions+=3;goto B592464;
case 0x59246a:c.instructions+=2;goto B59246a;
case 0x59246b:c.instructions+=1;goto B59246b;
case 0x592470:goto L592470;
case 0x592473:c.instructions+=1;goto B592473;
case 0x592480:goto L592480;
case 0x592481:c.instructions+=4;goto B592481;
case 0x592483:c.instructions+=3;goto B592483;
case 0x592489:c.instructions+=2;goto B592489;
case 0x59248b:c.instructions+=1;goto B59248b;
case 0x59248d:goto L59248d;
case 0x592492:c.instructions+=1;goto B592492;
case 0x592494:goto L592494;
case 0x592499:c.instructions+=1;goto B592499;
case 0x59249e:goto L59249e;
case 0x5924a0:c.instructions+=2;goto B5924a0;
case 0x5924a5:c.instructions+=1;goto B5924a5;
case 0x5924a7:goto L5924a7;
case 0x5924ac:goto L5924ac;
case 0x5924ae:c.instructions+=5;goto B5924ae;
case 0x5924b4:c.instructions+=4;goto B5924b4;
case 0x5924ba:c.instructions+=3;goto B5924ba;
case 0x5924c0:c.instructions+=2;goto B5924c0;
case 0x5924c2:c.instructions+=1;goto B5924c2;
case 0x5924c4:goto L5924c4;
case 0x5924ca:goto L5924ca;
case 0x5924d0:c.instructions+=2;goto B5924d0;
case 0x5924d2:c.instructions+=1;goto B5924d2;
case 0x5924d4:goto L5924d4;
case 0x5924d9:c.instructions+=1;goto B5924d9;
case 0x5924db:goto L5924db;
case 0x5924e1:c.instructions+=4;goto B5924e1;
case 0x5924e2:c.instructions+=3;goto B5924e2;
case 0x5924e8:c.instructions+=2;goto B5924e8;
case 0x5924ea:c.instructions+=1;goto B5924ea;
case 0x5924eb:goto L5924eb;
case 0x5924f1:c.instructions+=2;goto B5924f1;
case 0x5924f2:c.instructions+=1;goto B5924f2;
case 0x592500:goto L592500;
case 0x592501:c.instructions+=5;goto B592501;
case 0x592502:c.instructions+=4;goto B592502;
case 0x592504:c.instructions+=3;goto B592504;
case 0x59250a:c.instructions+=2;goto B59250a;
case 0x59250c:c.instructions+=1;goto B59250c;
case 0x592512:goto L592512;
case 0x592517:c.instructions+=1;goto B592517;
case 0x59251d:goto L59251d;
case 0x592522:c.instructions+=1;goto B592522;
case 0x592527:goto L592527;
case 0x592529:c.instructions+=2;goto B592529;
case 0x59252e:c.instructions+=1;goto B59252e;
case 0x592530:goto L592530;
case 0x592535:goto L592535;
case 0x59253b:c.instructions+=12;goto B59253b;
case 0x59253d:c.instructions+=11;goto B59253d;
case 0x592543:c.instructions+=10;goto B592543;
case 0x592547:c.instructions+=9;goto B592547;
case 0x59254d:c.instructions+=8;goto B59254d;
case 0x592551:c.instructions+=7;goto B592551;
case 0x592557:c.instructions+=6;goto B592557;
case 0x592559:c.instructions+=5;goto B592559;
case 0x59255f:c.instructions+=4;goto B59255f;
case 0x592561:c.instructions+=3;goto B592561;
case 0x592563:c.instructions+=2;goto B592563;
case 0x592566:c.instructions+=1;goto B592566;
case 0x592568:goto L592568;
case 0x59256a:c.instructions+=1;goto B59256a;
case 0x592570:goto L592570;
case 0x592576:c.instructions+=2;goto B592576;
case 0x59257c:c.instructions+=1;goto B59257c;
case 0x592581:goto L592581;
case 0x592587:c.instructions+=3;goto B592587;
case 0x59258c:c.instructions+=2;goto B59258c;
case 0x59258e:c.instructions+=1;goto B59258e;
case 0x592590:goto L592590;
case 0x59259a:goto L59259a;
case 0x5925a4:goto L5925a4;
case 0x5925a5:c.instructions+=2;goto B5925a5;
case 0x5925a6:c.instructions+=1;goto B5925a6;
case 0x5925b0:goto L5925b0;
case 0x5925b3:c.instructions+=4;goto B5925b3;
case 0x5925b4:c.instructions+=3;goto B5925b4;
case 0x5925b6:c.instructions+=2;goto B5925b6;
case 0x5925be:c.instructions+=1;goto B5925be;
case 0x5925c3:goto L5925c3;
case 0x5925c7:c.instructions+=3;goto B5925c7;
case 0x5925cd:c.instructions+=2;goto B5925cd;
case 0x5925cf:c.instructions+=1;goto B5925cf;
case 0x5925d1:goto L5925d1;
case 0x5925d6:c.instructions+=1;goto B5925d6;
case 0x5925d8:goto L5925d8;
case 0x5925de:c.instructions+=5;goto B5925de;
case 0x5925e4:c.instructions+=4;goto B5925e4;
case 0x5925ea:c.instructions+=3;goto B5925ea;
case 0x5925ec:c.instructions+=2;goto B5925ec;
case 0x5925ef:c.instructions+=1;goto B5925ef;
case 0x5925f1:goto L5925f1;
case 0x5925f5:c.instructions+=4;goto B5925f5;
case 0x5925f7:c.instructions+=3;goto B5925f7;
case 0x5925f9:c.instructions+=2;goto B5925f9;
case 0x5925fc:c.instructions+=1;goto B5925fc;
case 0x5925fe:goto L5925fe;
case 0x592602:c.instructions+=12;goto B592602;
case 0x592603:c.instructions+=11;goto B592603;
case 0x592605:c.instructions+=10;goto B592605;
case 0x59260b:c.instructions+=9;goto B59260b;
case 0x59260d:c.instructions+=8;goto B59260d;
case 0x59260f:c.instructions+=7;goto B59260f;
case 0x592613:c.instructions+=6;goto B592613;
case 0x592617:c.instructions+=5;goto B592617;
case 0x592619:c.instructions+=4;goto B592619;
case 0x59261b:c.instructions+=3;goto B59261b;
case 0x59261d:c.instructions+=2;goto B59261d;
case 0x592620:c.instructions+=1;goto B592620;
case 0x592621:goto L592621;
case 0x592625:c.instructions+=7;goto B592625;
case 0x592626:c.instructions+=6;goto B592626;
case 0x59262a:c.instructions+=5;goto B59262a;
case 0x59262c:c.instructions+=4;goto B59262c;
case 0x59262e:c.instructions+=3;goto B59262e;
case 0x592630:c.instructions+=2;goto B592630;
case 0x592633:c.instructions+=1;goto B592633;
case 0x592634:goto L592634;
case 0x592636:goto L592636;
case 0x59263a:c.instructions+=3;goto B59263a;
case 0x59263b:c.instructions+=2;goto B59263b;
case 0x59263e:c.instructions+=1;goto B59263e;
case 0x592640:goto L592640;
case 0x592641:c.instructions+=5;goto B592641;
case 0x592642:c.instructions+=4;goto B592642;
case 0x592644:c.instructions+=3;goto B592644;
case 0x59264a:c.instructions+=2;goto B59264a;
case 0x59264c:c.instructions+=1;goto B59264c;
case 0x59264e:goto L59264e;
case 0x592653:c.instructions+=1;goto B592653;
case 0x592655:goto L592655;
case 0x59265b:c.instructions+=3;goto B59265b;
case 0x592661:c.instructions+=2;goto B592661;
case 0x592665:c.instructions+=1;goto B592665;
case 0x592667:goto L592667;
case 0x59266f:goto L59266f;
case 0x592671:c.instructions+=1;goto B592671;
case 0x592676:goto L592676;
case 0x59267a:c.instructions+=7;goto B59267a;
case 0x592680:c.instructions+=6;goto B592680;
case 0x592682:c.instructions+=5;goto B592682;
case 0x592684:c.instructions+=4;goto B592684;
case 0x59268a:c.instructions+=3;goto B59268a;
case 0x59268d:c.instructions+=2;goto B59268d;
case 0x59268f:c.instructions+=1;goto B59268f;
case 0x592695:goto L592695;
case 0x592698:c.instructions+=1;goto B592698;
case 0x59269a:goto L59269a;
case 0x5926a0:c.instructions+=5;goto B5926a0;
case 0x5926a2:c.instructions+=4;goto B5926a2;
case 0x5926a4:c.instructions+=3;goto B5926a4;
case 0x5926a6:c.instructions+=2;goto B5926a6;
case 0x5926a9:c.instructions+=1;goto B5926a9;
case 0x5926ab:goto L5926ab;
case 0x5926ad:c.instructions+=1;goto B5926ad;
case 0x5926af:goto L5926af;
case 0x5926b5:c.instructions+=2;goto B5926b5;
case 0x5926b7:c.instructions+=1;goto B5926b7;
case 0x5926b9:goto L5926b9;
case 0x5926be:c.instructions+=1;goto B5926be;
case 0x5926c0:goto L5926c0;
case 0x5926c6:c.instructions+=2;goto B5926c6;
case 0x5926cc:c.instructions+=1;goto B5926cc;
case 0x5926ce:goto L5926ce;
case 0x5926d4:goto L5926d4;
case 0x5926d6:c.instructions+=5;goto B5926d6;
case 0x5926da:c.instructions+=4;goto B5926da;
case 0x5926dc:c.instructions+=3;goto B5926dc;
case 0x5926e2:c.instructions+=2;goto B5926e2;
case 0x5926e8:c.instructions+=1;goto B5926e8;
case 0x5926ed:goto L5926ed;
case 0x5926ef:c.instructions+=7;goto B5926ef;
case 0x5926f1:c.instructions+=6;goto B5926f1;
case 0x5926f7:c.instructions+=5;goto B5926f7;
case 0x5926f9:c.instructions+=4;goto B5926f9;
case 0x5926fb:c.instructions+=3;goto B5926fb;
case 0x5926fd:c.instructions+=2;goto B5926fd;
case 0x592701:c.instructions+=1;goto B592701;
case 0x592703:goto L592703;
case 0x592709:c.instructions+=3;goto B592709;
case 0x59270b:c.instructions+=2;goto B59270b;
case 0x59270e:c.instructions+=1;goto B59270e;
case 0x592714:goto L592714;
case 0x59271a:c.instructions+=5;goto B59271a;
case 0x592720:c.instructions+=4;goto B592720;
case 0x592724:c.instructions+=3;goto B592724;
case 0x592726:c.instructions+=2;goto B592726;
case 0x592729:c.instructions+=1;goto B592729;
case 0x59272b:goto L59272b;
case 0x59272d:c.instructions+=1;goto B59272d;
case 0x592731:goto L592731;
case 0x592737:c.instructions+=2;goto B592737;
case 0x592739:c.instructions+=1;goto B592739;
case 0x59273b:goto L59273b;
case 0x592740:c.instructions+=1;goto B592740;
case 0x592742:goto L592742;
case 0x592748:c.instructions+=2;goto B592748;
case 0x59274e:c.instructions+=1;goto B59274e;
case 0x592750:goto L592750;
case 0x592756:goto L592756;
case 0x59275c:c.instructions+=6;goto B59275c;
case 0x59275e:c.instructions+=5;goto B59275e;
case 0x592762:c.instructions+=4;goto B592762;
case 0x592764:c.instructions+=3;goto B592764;
case 0x59276a:c.instructions+=2;goto B59276a;
case 0x592770:c.instructions+=1;goto B592770;
case 0x592775:goto L592775;
case 0x592777:c.instructions+=5;goto B592777;
case 0x59277d:c.instructions+=4;goto B59277d;
case 0x59277f:c.instructions+=3;goto B59277f;
case 0x592780:c.instructions+=2;goto B592780;
case 0x592781:c.instructions+=1;goto B592781;
case 0x592784:goto L592784;
case 0x592787:c.instructions+=1;goto B592787;
case 0x592789:goto L592789;
case 0x59278b:c.instructions+=6;goto B59278b;
case 0x592791:c.instructions+=5;goto B592791;
case 0x592793:c.instructions+=4;goto B592793;
case 0x592795:c.instructions+=3;goto B592795;
case 0x592797:c.instructions+=2;goto B592797;
case 0x59279a:c.instructions+=1;goto B59279a;
case 0x59279c:goto L59279c;
case 0x59279e:c.instructions+=1;goto B59279e;
case 0x5927a0:goto L5927a0;
case 0x5927a6:c.instructions+=2;goto B5927a6;
case 0x5927a8:c.instructions+=1;goto B5927a8;
case 0x5927aa:goto L5927aa;
case 0x5927af:c.instructions+=1;goto B5927af;
case 0x5927b1:goto L5927b1;
case 0x5927b7:c.instructions+=2;goto B5927b7;
case 0x5927bd:c.instructions+=1;goto B5927bd;
case 0x5927bf:goto L5927bf;
case 0x5927c5:goto L5927c5;
case 0x5927cb:c.instructions+=6;goto B5927cb;
case 0x5927cd:c.instructions+=5;goto B5927cd;
case 0x5927d1:c.instructions+=4;goto B5927d1;
case 0x5927d3:c.instructions+=3;goto B5927d3;
case 0x5927d9:c.instructions+=2;goto B5927d9;
case 0x5927df:c.instructions+=1;goto B5927df;
case 0x5927e4:goto L5927e4;
case 0x5927e6:c.instructions+=7;goto B5927e6;
case 0x5927e8:c.instructions+=6;goto B5927e8;
case 0x5927ee:c.instructions+=5;goto B5927ee;
case 0x5927f0:c.instructions+=4;goto B5927f0;
case 0x5927f2:c.instructions+=3;goto B5927f2;
case 0x5927f4:c.instructions+=2;goto B5927f4;
case 0x5927f8:c.instructions+=1;goto B5927f8;
case 0x5927fa:goto L5927fa;
case 0x592800:c.instructions+=3;goto B592800;
case 0x592802:c.instructions+=2;goto B592802;
case 0x592805:c.instructions+=1;goto B592805;
case 0x592807:goto L592807;
case 0x592809:c.instructions+=4;goto B592809;
case 0x59280d:c.instructions+=3;goto B59280d;
case 0x59280f:c.instructions+=2;goto B59280f;
case 0x592812:c.instructions+=1;goto B592812;
case 0x592814:goto L592814;
case 0x592816:c.instructions+=1;goto B592816;
case 0x59281a:goto L59281a;
case 0x592820:c.instructions+=2;goto B592820;
case 0x592822:c.instructions+=1;goto B592822;
case 0x592824:goto L592824;
case 0x592829:c.instructions+=1;goto B592829;
case 0x59282b:goto L59282b;
case 0x592831:c.instructions+=2;goto B592831;
case 0x592837:c.instructions+=1;goto B592837;
case 0x592839:goto L592839;
case 0x59283f:goto L59283f;
case 0x592841:c.instructions+=5;goto B592841;
case 0x592845:c.instructions+=4;goto B592845;
case 0x592847:c.instructions+=3;goto B592847;
case 0x59284d:c.instructions+=2;goto B59284d;
case 0x592853:c.instructions+=1;goto B592853;
case 0x592858:goto L592858;
case 0x59285e:goto L59285e;
case 0x592860:c.instructions+=3;goto B592860;
case 0x592861:c.instructions+=2;goto B592861;
case 0x592862:c.instructions+=1;goto B592862;
case 0x592870:goto L592870;
case 0x592872:c.instructions+=5;goto B592872;
case 0x592878:c.instructions+=4;goto B592878;
case 0x59287e:c.instructions+=3;goto B59287e;
case 0x592880:c.instructions+=2;goto B592880;
case 0x592883:c.instructions+=1;goto B592883;
case 0x592885:goto L592885;
case 0x592889:c.instructions+=2;goto B592889;
case 0x59288c:c.instructions+=1;goto B59288c;
case 0x59288e:goto L59288e;
case 0x592890:c.instructions+=1;goto B592890;
case 0x592892:goto L592892;
case 0x592894:c.instructions+=1;goto B592894;
case 0x592897:goto L592897;
case 0x59289d:c.instructions+=4;goto B59289d;
case 0x5928a3:c.instructions+=3;goto B5928a3;
case 0x5928a5:c.instructions+=2;goto B5928a5;
case 0x5928a8:c.instructions+=1;goto B5928a8;
case 0x5928aa:goto L5928aa;
case 0x5928ae:c.instructions+=2;goto B5928ae;
case 0x5928b1:c.instructions+=1;goto B5928b1;
case 0x5928b3:goto L5928b3;
case 0x5928b6:c.instructions+=1;goto B5928b6;
case 0x5928b8:goto L5928b8;
case 0x5928ba:c.instructions+=1;goto B5928ba;
case 0x5928bd:goto L5928bd;
case 0x5928c2:c.instructions+=1;goto B5928c2;
case 0x5928d0:goto L5928d0;
case 0x5928d2:c.instructions+=2;goto B5928d2;
case 0x5928d8:c.instructions+=1;goto B5928d8;
case 0x5928e0:goto L5928e0;
case 0x5928e6:c.instructions+=2;goto B5928e6;
case 0x5928e8:c.instructions+=1;goto B5928e8;
case 0x5928ea:goto L5928ea;
case 0x5928f0:c.instructions+=4;goto B5928f0;
case 0x5928f6:c.instructions+=3;goto B5928f6;
case 0x5928f8:c.instructions+=2;goto B5928f8;
case 0x5928fb:c.instructions+=1;goto B5928fb;
case 0x5928fd:goto L5928fd;
case 0x592902:c.instructions+=1;goto B592902;
case 0x592903:goto L592903;
case 0x592905:c.instructions+=1;goto B592905;
case 0x592910:goto L592910;
case 0x592911:c.instructions+=27;goto B592911;
case 0x592913:c.instructions+=26;goto B592913;
case 0x592916:c.instructions+=25;goto B592916;
case 0x592919:c.instructions+=24;goto B592919;
case 0x59291c:c.instructions+=23;goto B59291c;
case 0x59291f:c.instructions+=22;goto B59291f;
case 0x592922:c.instructions+=21;goto B592922;
case 0x592925:c.instructions+=20;goto B592925;
case 0x592928:c.instructions+=19;goto B592928;
case 0x59292b:c.instructions+=18;goto B59292b;
case 0x59292d:c.instructions+=17;goto B59292d;
case 0x59292f:c.instructions+=16;goto B59292f;
case 0x592932:c.instructions+=15;goto B592932;
case 0x592935:c.instructions+=14;goto B592935;
case 0x592938:c.instructions+=13;goto B592938;
case 0x59293b:c.instructions+=12;goto B59293b;
case 0x59293e:c.instructions+=11;goto B59293e;
case 0x592941:c.instructions+=10;goto B592941;
case 0x592944:c.instructions+=9;goto B592944;
case 0x592947:c.instructions+=8;goto B592947;
case 0x59294a:c.instructions+=7;goto B59294a;
case 0x59294c:c.instructions+=6;goto B59294c;
case 0x59294e:c.instructions+=5;goto B59294e;
case 0x592951:c.instructions+=4;goto B592951;
case 0x592954:c.instructions+=3;goto B592954;
case 0x592956:c.instructions+=2;goto B592956;
case 0x592957:c.instructions+=1;goto B592957;
case 0x592960:goto L592960;
case 0x592964:c.instructions+=6;goto B592964;
case 0x592968:c.instructions+=5;goto B592968;
case 0x59296b:c.instructions+=4;goto B59296b;
case 0x59296e:c.instructions+=3;goto B59296e;
case 0x592970:c.instructions+=2;goto B592970;
case 0x592973:c.instructions+=1;goto B592973;
case 0x592975:goto L592975;
case 0x592978:c.instructions+=5;goto B592978;
case 0x59297c:c.instructions+=4;goto B59297c;
case 0x59297f:c.instructions+=3;goto B59297f;
case 0x592981:c.instructions+=2;goto B592981;
case 0x592984:c.instructions+=1;goto B592984;
case 0x592986:goto L592986;
case 0x59298a:c.instructions+=5;goto B59298a;
case 0x59298d:c.instructions+=4;goto B59298d;
case 0x592990:c.instructions+=3;goto B592990;
case 0x592992:c.instructions+=2;goto B592992;
case 0x592995:c.instructions+=1;goto B592995;
case 0x592997:goto L592997;
case 0x59299a:c.instructions+=5;goto B59299a;
case 0x59299e:c.instructions+=4;goto B59299e;
case 0x5929a1:c.instructions+=3;goto B5929a1;
case 0x5929a3:c.instructions+=2;goto B5929a3;
case 0x5929a6:c.instructions+=1;goto B5929a6;
case 0x5929a8:goto L5929a8;
case 0x5929ad:c.instructions+=1;goto B5929ad;
case 0x5929b0:goto L5929b0;
case 0x5929b2:c.instructions+=1;goto B5929b2;
case 0x5929c0:goto L5929c0;
case 0x5929c3:c.instructions+=1;goto B5929c3;
case 0x5929d0:goto L5929d0;
case 0x5929d4:c.instructions+=4;goto B5929d4;
case 0x5929da:c.instructions+=3;goto B5929da;
case 0x5929db:c.instructions+=2;goto B5929db;
case 0x5929dc:c.instructions+=1;goto B5929dc;
case 0x5929e1:goto L5929e1;
case 0x5929e4:c.instructions+=1;goto B5929e4;
case 0x5929f0:goto L5929f0;
case 0x5929f4:c.instructions+=4;goto B5929f4;
case 0x5929fa:c.instructions+=3;goto B5929fa;
case 0x5929fb:c.instructions+=2;goto B5929fb;
case 0x5929fc:c.instructions+=1;goto B5929fc;
case 0x592a01:goto L592a01;
case 0x592a04:c.instructions+=1;goto B592a04;
case 0x592a10:goto L592a10;
case 0x592a16:c.instructions+=16;goto B592a16;
case 0x592a1c:c.instructions+=15;goto B592a1c;
case 0x592a22:c.instructions+=14;goto B592a22;
case 0x592a26:c.instructions+=13;goto B592a26;
case 0x592a28:c.instructions+=12;goto B592a28;
case 0x592a2a:c.instructions+=11;goto B592a2a;
case 0x592a2d:c.instructions+=10;goto B592a2d;
case 0x592a30:c.instructions+=9;goto B592a30;
case 0x592a34:c.instructions+=8;goto B592a34;
case 0x592a3a:c.instructions+=7;goto B592a3a;
case 0x592a40:c.instructions+=6;goto B592a40;
case 0x592a46:c.instructions+=5;goto B592a46;
case 0x592a48:c.instructions+=4;goto B592a48;
case 0x592a4a:c.instructions+=3;goto B592a4a;
case 0x592a4d:c.instructions+=2;goto B592a4d;
case 0x592a50:c.instructions+=1;goto B592a50;
case 0x592a60:goto L592a60;
case 0x592a64:c.instructions+=4;goto B592a64;
case 0x592a6a:c.instructions+=3;goto B592a6a;
case 0x592a6b:c.instructions+=2;goto B592a6b;
case 0x592a6c:c.instructions+=1;goto B592a6c;
case 0x592a71:goto L592a71;
case 0x592a74:c.instructions+=1;goto B592a74;
case 0x592a80:goto L592a80;
case 0x592a84:c.instructions+=4;goto B592a84;
case 0x592a8a:c.instructions+=3;goto B592a8a;
case 0x592a8b:c.instructions+=2;goto B592a8b;
case 0x592a8c:c.instructions+=1;goto B592a8c;
case 0x592a91:goto L592a91;
case 0x592a94:c.instructions+=1;goto B592a94;
case 0x592aa0:goto L592aa0;
case 0x592aa4:c.instructions+=4;goto B592aa4;
case 0x592aaa:c.instructions+=3;goto B592aaa;
case 0x592aab:c.instructions+=2;goto B592aab;
case 0x592aac:c.instructions+=1;goto B592aac;
case 0x592ab1:goto L592ab1;
case 0x592ab4:c.instructions+=1;goto B592ab4;
case 0x592ac0:goto L592ac0;
case 0x592ac4:c.instructions+=4;goto B592ac4;
case 0x592aca:c.instructions+=3;goto B592aca;
case 0x592acb:c.instructions+=2;goto B592acb;
case 0x592acc:c.instructions+=1;goto B592acc;
case 0x592ad1:goto L592ad1;
case 0x592ad4:c.instructions+=1;goto B592ad4;
case 0x592ae0:goto L592ae0;
case 0x592ae4:c.instructions+=4;goto B592ae4;
case 0x592aea:c.instructions+=3;goto B592aea;
case 0x592aeb:c.instructions+=2;goto B592aeb;
case 0x592aec:c.instructions+=1;goto B592aec;
case 0x592af1:goto L592af1;
case 0x592af4:c.instructions+=1;goto B592af4;
case 0x592b00:goto L592b00;
case 0x592b02:c.instructions+=4;goto B592b02;
case 0x592b07:c.instructions+=3;goto B592b07;
case 0x592b09:c.instructions+=2;goto B592b09;
case 0x592b0e:c.instructions+=1;goto B592b0e;
case 0x592b13:goto L592b13;
case 0x592b16:c.instructions+=2;goto B592b16;
case 0x592b1b:c.instructions+=1;goto B592b1b;
case 0x592b20:goto L592b20;
case 0x592b25:c.instructions+=2;goto B592b25;
case 0x592b26:c.instructions+=1;goto B592b26;
case 0x592b2b:goto L592b2b;
case 0x592b2e:c.instructions+=2;goto B592b2e;
case 0x592b38:c.instructions+=1;goto B592b38;
case 0x592b40:goto L592b40;
case 0x592b41:c.instructions+=7;goto B592b41;
case 0x592b42:c.instructions+=6;goto B592b42;
case 0x592b46:c.instructions+=5;goto B592b46;
case 0x592b48:c.instructions+=4;goto B592b48;
case 0x592b4d:c.instructions+=3;goto B592b4d;
case 0x592b4e:c.instructions+=2;goto B592b4e;
case 0x592b50:c.instructions+=1;goto B592b50;
case 0x592b55:goto L592b55;
case 0x592b58:c.instructions+=3;goto B592b58;
case 0x592b59:c.instructions+=2;goto B592b59;
case 0x592b5b:c.instructions+=1;goto B592b5b;
case 0x592b60:goto L592b60;
case 0x592b63:c.instructions+=3;goto B592b63;
case 0x592b64:c.instructions+=2;goto B592b64;
case 0x592b66:c.instructions+=1;goto B592b66;
case 0x592b6b:goto L592b6b;
case 0x592b6d:c.instructions+=6;goto B592b6d;
case 0x592b6f:c.instructions+=5;goto B592b6f;
case 0x592b71:c.instructions+=4;goto B592b71;
case 0x592b74:c.instructions+=3;goto B592b74;
case 0x592b75:c.instructions+=2;goto B592b75;
case 0x592b77:c.instructions+=1;goto B592b77;
case 0x592b7c:goto L592b7c;
case 0x592b7e:c.instructions+=6;goto B592b7e;
case 0x592b80:c.instructions+=5;goto B592b80;
case 0x592b82:c.instructions+=4;goto B592b82;
case 0x592b85:c.instructions+=3;goto B592b85;
case 0x592b86:c.instructions+=2;goto B592b86;
case 0x592b88:c.instructions+=1;goto B592b88;
case 0x592b8d:goto L592b8d;
case 0x592b8f:c.instructions+=6;goto B592b8f;
case 0x592b91:c.instructions+=5;goto B592b91;
case 0x592b93:c.instructions+=4;goto B592b93;
case 0x592b96:c.instructions+=3;goto B592b96;
case 0x592b97:c.instructions+=2;goto B592b97;
case 0x592b99:c.instructions+=1;goto B592b99;
case 0x592b9e:goto L592b9e;
case 0x592ba1:c.instructions+=3;goto B592ba1;
case 0x592ba2:c.instructions+=2;goto B592ba2;
case 0x592ba4:c.instructions+=1;goto B592ba4;
case 0x592ba9:goto L592ba9;
case 0x592bab:c.instructions+=6;goto B592bab;
case 0x592bad:c.instructions+=5;goto B592bad;
case 0x592baf:c.instructions+=4;goto B592baf;
case 0x592bb2:c.instructions+=3;goto B592bb2;
case 0x592bb3:c.instructions+=2;goto B592bb3;
case 0x592bb5:c.instructions+=1;goto B592bb5;
case 0x592bba:goto L592bba;
case 0x592bbc:c.instructions+=1;goto B592bbc;
case 0x592bc1:goto L592bc1;
case 0x592bc2:c.instructions+=2;goto B592bc2;
case 0x592bc3:c.instructions+=1;goto B592bc3;
case 0x592bd0:goto L592bd0;
case 0x592bd1:c.instructions+=9;goto B592bd1;
case 0x592bd6:c.instructions+=8;goto B592bd6;
case 0x592bd9:c.instructions+=7;goto B592bd9;
case 0x592bdd:c.instructions+=6;goto B592bdd;
case 0x592be1:c.instructions+=5;goto B592be1;
case 0x592be7:c.instructions+=4;goto B592be7;
case 0x592bed:c.instructions+=3;goto B592bed;
case 0x592bef:c.instructions+=2;goto B592bef;
case 0x592bf2:c.instructions+=1;goto B592bf2;
case 0x592bf4:goto L592bf4;
case 0x592bf9:c.instructions+=2;goto B592bf9;
case 0x592bfa:c.instructions+=1;goto B592bfa;
case 0x592bfd:goto L592bfd;
case 0x592bff:c.instructions+=2;goto B592bff;
case 0x592c00:c.instructions+=1;goto B592c00;
case 0x592c10:goto L592c10;
case 0x592c11:c.instructions+=6;goto B592c11;
case 0x592c13:c.instructions+=5;goto B592c13;
case 0x592c16:c.instructions+=4;goto B592c16;
case 0x592c1c:c.instructions+=3;goto B592c1c;
case 0x592c1e:c.instructions+=2;goto B592c1e;
case 0x592c1f:c.instructions+=1;goto B592c1f;
case 0x592c22:goto L592c22;
case 0x592c24:c.instructions+=4;goto B592c24;
case 0x592c27:c.instructions+=3;goto B592c27;
case 0x592c2d:c.instructions+=2;goto B592c2d;
case 0x592c2f:c.instructions+=1;goto B592c2f;
case 0x592c32:goto L592c32;
case 0x592c34:c.instructions+=10;goto B592c34;
case 0x592c36:c.instructions+=9;goto B592c36;
case 0x592c3c:c.instructions+=8;goto B592c3c;
case 0x592c3e:c.instructions+=7;goto B592c3e;
case 0x592c44:c.instructions+=6;goto B592c44;
case 0x592c4a:c.instructions+=5;goto B592c4a;
case 0x592c50:c.instructions+=4;goto B592c50;
case 0x592c52:c.instructions+=3;goto B592c52;
case 0x592c55:c.instructions+=2;goto B592c55;
case 0x592c57:c.instructions+=1;goto B592c57;
case 0x592c59:goto L592c59;
case 0x592c5b:goto L592c5b;
case 0x592c5c:c.instructions+=2;goto B592c5c;
case 0x592c5d:c.instructions+=1;goto B592c5d;
case 0x592c60:goto L592c60;
case 0x592c63:c.instructions+=4;goto B592c63;
case 0x592c69:c.instructions+=3;goto B592c69;
case 0x592c6c:c.instructions+=2;goto B592c6c;
case 0x592c6e:c.instructions+=1;goto B592c6e;
case 0x592c70:goto L592c70;
case 0x592c76:c.instructions+=3;goto B592c76;
case 0x592c79:c.instructions+=2;goto B592c79;
case 0x592c7b:c.instructions+=1;goto B592c7b;
case 0x592c7d:goto L592c7d;
case 0x592c82:c.instructions+=1;goto B592c82;
case 0x592c83:goto L592c83;
case 0x592c85:c.instructions+=1;goto B592c85;
case 0x592c90:goto L592c90;
case 0x592c94:c.instructions+=10;goto B592c94;
case 0x592c95:c.instructions+=9;goto B592c95;
case 0x592c9b:c.instructions+=8;goto B592c9b;
case 0x592c9c:c.instructions+=7;goto B592c9c;
case 0x592ca0:c.instructions+=6;goto B592ca0;
case 0x592ca6:c.instructions+=5;goto B592ca6;
case 0x592ca9:c.instructions+=4;goto B592ca9;
case 0x592caf:c.instructions+=3;goto B592caf;
case 0x592cb2:c.instructions+=2;goto B592cb2;
case 0x592cb4:c.instructions+=1;goto B592cb4;
case 0x592cb6:goto L592cb6;
case 0x592cbc:c.instructions+=1;goto B592cbc;
case 0x592cbe:goto L592cbe;
case 0x592cc1:c.instructions+=4;goto B592cc1;
case 0x592cc7:c.instructions+=3;goto B592cc7;
case 0x592cca:c.instructions+=2;goto B592cca;
case 0x592ccc:c.instructions+=1;goto B592ccc;
case 0x592cce:goto L592cce;
case 0x592cd4:c.instructions+=1;goto B592cd4;
case 0x592cd6:goto L592cd6;
case 0x592cd7:c.instructions+=2;goto B592cd7;
case 0x592cd8:c.instructions+=1;goto B592cd8;
case 0x592ce0:goto L592ce0;
case 0x592ce4:c.instructions+=4;goto B592ce4;
case 0x592ce8:c.instructions+=3;goto B592ce8;
case 0x592cee:c.instructions+=2;goto B592cee;
case 0x592cf4:c.instructions+=1;goto B592cf4;
case 0x592d00:goto L592d00;
case 0x592d03:c.instructions+=8;goto B592d03;
case 0x592d09:c.instructions+=7;goto B592d09;
case 0x592d0a:c.instructions+=6;goto B592d0a;
case 0x592d0d:c.instructions+=5;goto B592d0d;
case 0x592d0e:c.instructions+=4;goto B592d0e;
case 0x592d10:c.instructions+=3;goto B592d10;
case 0x592d12:c.instructions+=2;goto B592d12;
case 0x592d14:c.instructions+=1;goto B592d14;
case 0x592d16:goto L592d16;
case 0x592d1c:goto L592d1c;
case 0x592d22:c.instructions+=3;goto B592d22;
case 0x592d25:c.instructions+=2;goto B592d25;
case 0x592d27:c.instructions+=1;goto B592d27;
case 0x592d29:goto L592d29;
case 0x592d2f:goto L592d2f;
case 0x592d31:c.instructions+=1;goto B592d31;
case 0x592d33:goto L592d33;
case 0x592d36:c.instructions+=2;goto B592d36;
case 0x592d38:c.instructions+=1;goto B592d38;
case 0x592d3a:goto L592d3a;
case 0x592d3c:c.instructions+=1;goto B592d3c;
case 0x592d3e:goto L592d3e;
case 0x592d41:c.instructions+=2;goto B592d41;
case 0x592d43:c.instructions+=1;goto B592d43;
case 0x592d45:goto L592d45;
case 0x592d46:c.instructions+=3;goto B592d46;
case 0x592d48:c.instructions+=2;goto B592d48;
case 0x592d49:c.instructions+=1;goto B592d49;
case 0x592d4a:goto L592d4a;
case 0x592d4b:c.instructions+=3;goto B592d4b;
case 0x592d4d:c.instructions+=2;goto B592d4d;
case 0x592d4e:c.instructions+=1;goto B592d4e;
case 0x592d50:goto L592d50;
case 0x592d53:c.instructions+=7;goto B592d53;
case 0x592d59:c.instructions+=6;goto B592d59;
case 0x592d5a:c.instructions+=5;goto B592d5a;
case 0x592d5d:c.instructions+=4;goto B592d5d;
case 0x592d62:c.instructions+=3;goto B592d62;
case 0x592d64:c.instructions+=2;goto B592d64;
case 0x592d65:c.instructions+=1;goto B592d65;
case 0x592d67:goto L592d67;
case 0x592d6d:c.instructions+=2;goto B592d6d;
case 0x592d70:c.instructions+=1;goto B592d70;
case 0x592d72:goto L592d72;
case 0x592d74:c.instructions+=1;goto B592d74;
case 0x592d75:goto L592d75;
case 0x592d77:c.instructions+=1;goto B592d77;
case 0x592d80:goto L592d80;
case 0x592d83:c.instructions+=6;goto B592d83;
case 0x592d89:c.instructions+=5;goto B592d89;
case 0x592d8a:c.instructions+=4;goto B592d8a;
case 0x592d8d:c.instructions+=3;goto B592d8d;
case 0x592d8f:c.instructions+=2;goto B592d8f;
case 0x592d91:c.instructions+=1;goto B592d91;
case 0x592d93:goto L592d93;
case 0x592d99:c.instructions+=6;goto B592d99;
case 0x592d9c:c.instructions+=5;goto B592d9c;
case 0x592d9e:c.instructions+=4;goto B592d9e;
case 0x592da0:c.instructions+=3;goto B592da0;
case 0x592da3:c.instructions+=2;goto B592da3;
case 0x592da4:c.instructions+=1;goto B592da4;
case 0x592da6:goto L592da6;
case 0x592da7:c.instructions+=1;goto B592da7;
case 0x592db0:goto L592db0;
case 0x592db4:c.instructions+=4;goto B592db4;
case 0x592dba:c.instructions+=3;goto B592dba;
case 0x592dbb:c.instructions+=2;goto B592dbb;
case 0x592dbc:c.instructions+=1;goto B592dbc;
case 0x592dc1:goto L592dc1;
case 0x592dc4:c.instructions+=1;goto B592dc4;
case 0x592dd0:goto L592dd0;
case 0x592dd4:c.instructions+=4;goto B592dd4;
case 0x592dda:c.instructions+=3;goto B592dda;
case 0x592ddb:c.instructions+=2;goto B592ddb;
case 0x592ddc:c.instructions+=1;goto B592ddc;
case 0x592de1:goto L592de1;
case 0x592de4:c.instructions+=1;goto B592de4;
case 0x592df0:goto L592df0;
case 0x592df1:c.instructions+=6;goto B592df1;
case 0x592df3:c.instructions+=5;goto B592df3;
case 0x592df6:c.instructions+=4;goto B592df6;
case 0x592df7:c.instructions+=3;goto B592df7;
case 0x592dfb:c.instructions+=2;goto B592dfb;
case 0x592dfd:c.instructions+=1;goto B592dfd;
case 0x592dff:goto L592dff;
case 0x592e01:c.instructions+=3;goto B592e01;
case 0x592e04:c.instructions+=2;goto B592e04;
case 0x592e06:c.instructions+=1;goto B592e06;
case 0x592e08:goto L592e08;
case 0x592e09:c.instructions+=2;goto B592e09;
case 0x592e0c:c.instructions+=1;goto B592e0c;
case 0x592e10:goto L592e10;
case 0x592e12:c.instructions+=8;goto B592e12;
case 0x592e15:c.instructions+=7;goto B592e15;
case 0x592e1a:c.instructions+=6;goto B592e1a;
case 0x592e1c:c.instructions+=5;goto B592e1c;
case 0x592e1e:c.instructions+=4;goto B592e1e;
case 0x592e21:c.instructions+=3;goto B592e21;
case 0x592e24:c.instructions+=2;goto B592e24;
case 0x592e26:c.instructions+=1;goto B592e26;
case 0x592e28:goto L592e28;
case 0x592e2a:c.instructions+=3;goto B592e2a;
case 0x592e2b:c.instructions+=2;goto B592e2b;
case 0x592e2d:c.instructions+=1;goto B592e2d;
case 0x592e2f:goto L592e2f;
case 0x592e30:goto L592e30;
case 0x592e33:goto L592e33;
case 0x592e36:c.instructions+=13;goto B592e36;
case 0x592e38:c.instructions+=12;goto B592e38;
case 0x592e3b:c.instructions+=11;goto B592e3b;
case 0x592e3d:c.instructions+=10;goto B592e3d;
case 0x592e3f:c.instructions+=9;goto B592e3f;
case 0x592e42:c.instructions+=8;goto B592e42;
case 0x592e44:c.instructions+=7;goto B592e44;
case 0x592e46:c.instructions+=6;goto B592e46;
case 0x592e48:c.instructions+=5;goto B592e48;
case 0x592e49:c.instructions+=4;goto B592e49;
case 0x592e4a:c.instructions+=3;goto B592e4a;
case 0x592e4c:c.instructions+=2;goto B592e4c;
case 0x592e4e:c.instructions+=1;goto B592e4e;
case 0x592e60:goto L592e60;
case 0x592e61:c.instructions+=4;goto B592e61;
case 0x592e63:c.instructions+=3;goto B592e63;
case 0x592e69:c.instructions+=2;goto B592e69;
case 0x592e6b:c.instructions+=1;goto B592e6b;
case 0x592e6d:goto L592e6d;
case 0x592e6f:c.instructions+=2;goto B592e6f;
case 0x592e70:c.instructions+=1;goto B592e70;
case 0x592e71:goto L592e71;
case 0x592e72:c.instructions+=7;goto B592e72;
case 0x592e78:c.instructions+=6;goto B592e78;
case 0x592e79:c.instructions+=5;goto B592e79;
case 0x592e7f:c.instructions+=4;goto B592e7f;
case 0x592e81:c.instructions+=3;goto B592e81;
case 0x592e82:c.instructions+=2;goto B592e82;
case 0x592e84:c.instructions+=1;goto B592e84;
case 0x592e89:goto L592e89;
case 0x592e8b:c.instructions+=1;goto B592e8b;
case 0x592e8d:goto L592e8d;
case 0x592e90:c.instructions+=2;goto B592e90;
case 0x592e92:c.instructions+=1;goto B592e92;
case 0x592e94:goto L592e94;
case 0x592e97:c.instructions+=2;goto B592e97;
case 0x592e99:c.instructions+=1;goto B592e99;
case 0x592e9b:goto L592e9b;
case 0x592e9d:c.instructions+=3;goto B592e9d;
case 0x592e9e:c.instructions+=2;goto B592e9e;
case 0x592ea0:c.instructions+=1;goto B592ea0;
case 0x592ea3:goto L592ea3;
case 0x592ea5:c.instructions+=1;goto B592ea5;
case 0x592ea7:goto L592ea7;
case 0x592ead:c.instructions+=4;goto B592ead;
case 0x592eb3:c.instructions+=3;goto B592eb3;
case 0x592eb5:c.instructions+=2;goto B592eb5;
case 0x592eb6:c.instructions+=1;goto B592eb6;
case 0x592eb9:goto L592eb9;
case 0x592ebb:c.instructions+=1;goto B592ebb;
case 0x592ebd:goto L592ebd;
case 0x592ebe:c.instructions+=4;goto B592ebe;
case 0x592ebf:c.instructions+=3;goto B592ebf;
case 0x592ec1:c.instructions+=2;goto B592ec1;
case 0x592ec2:c.instructions+=1;goto B592ec2;
case 0x592ec3:goto L592ec3;
case 0x592ec4:c.instructions+=4;goto B592ec4;
case 0x592ec5:c.instructions+=3;goto B592ec5;
case 0x592eca:c.instructions+=2;goto B592eca;
case 0x592ecb:c.instructions+=1;goto B592ecb;
case 0x592ed0:goto L592ed0;
case 0x592ed4:c.instructions+=3;goto B592ed4;
case 0x592ed8:c.instructions+=2;goto B592ed8;
case 0x592eda:c.instructions+=1;goto B592eda;
case 0x592edc:goto L592edc;
case 0x592edf:c.instructions+=1;goto B592edf;
case 0x592ee1:goto L592ee1;
case 0x592ee4:c.instructions+=1;goto B592ee4;
case 0x592ee6:goto L592ee6;
case 0x592ee9:c.instructions+=4;goto B592ee9;
case 0x592eed:c.instructions+=3;goto B592eed;
case 0x592ef0:c.instructions+=2;goto B592ef0;
case 0x592ef2:c.instructions+=1;goto B592ef2;
case 0x592ef3:goto L592ef3;
case 0x592ef8:c.instructions+=1;goto B592ef8;
case 0x592ef9:goto L592ef9;
case 0x592efb:c.instructions+=1;goto B592efb;
case 0x592f00:goto L592f00;
case 0x592f01:c.instructions+=10;goto B592f01;
case 0x592f03:c.instructions+=9;goto B592f03;
case 0x592f06:c.instructions+=8;goto B592f06;
case 0x592f09:c.instructions+=7;goto B592f09;
case 0x592f0f:c.instructions+=6;goto B592f0f;
case 0x592f12:c.instructions+=5;goto B592f12;
case 0x592f15:c.instructions+=4;goto B592f15;
case 0x592f16:c.instructions+=3;goto B592f16;
case 0x592f17:c.instructions+=2;goto B592f17;
case 0x592f18:c.instructions+=1;goto B592f18;
case 0x592f1a:goto L592f1a;
case 0x592f20:c.instructions+=2;goto B592f20;
case 0x592f24:c.instructions+=1;goto B592f24;
case 0x592f26:goto L592f26;
case 0x592f28:c.instructions+=1;goto B592f28;
case 0x592f2a:goto L592f2a;
case 0x592f30:c.instructions+=2;goto B592f30;
case 0x592f34:c.instructions+=1;goto B592f34;
case 0x592f3a:goto L592f3a;
case 0x592f3d:c.instructions+=1;goto B592f3d;
case 0x592f43:goto L592f43;
case 0x592f45:c.instructions+=1;goto B592f45;
case 0x592f47:goto L592f47;
case 0x592f49:c.instructions+=1;goto B592f49;
case 0x592f4f:goto L592f4f;
case 0x592f51:c.instructions+=1;goto B592f51;
case 0x592f57:goto L592f57;
case 0x592f5a:c.instructions+=3;goto B592f5a;
case 0x592f5c:c.instructions+=2;goto B592f5c;
case 0x592f60:c.instructions+=1;goto B592f60;
case 0x592f66:goto L592f66;
case 0x592f69:c.instructions+=11;goto B592f69;
case 0x592f6c:c.instructions+=10;goto B592f6c;
case 0x592f6f:c.instructions+=9;goto B592f6f;
case 0x592f71:c.instructions+=8;goto B592f71;
case 0x592f74:c.instructions+=7;goto B592f74;
case 0x592f78:c.instructions+=6;goto B592f78;
case 0x592f7b:c.instructions+=5;goto B592f7b;
case 0x592f7f:c.instructions+=4;goto B592f7f;
case 0x592f83:c.instructions+=3;goto B592f83;
case 0x592f85:c.instructions+=2;goto B592f85;
case 0x592f87:c.instructions+=1;goto B592f87;
case 0x592f8a:goto L592f8a;
case 0x592f8c:c.instructions+=5;goto B592f8c;
case 0x592f8f:c.instructions+=4;goto B592f8f;
case 0x592f92:c.instructions+=3;goto B592f92;
case 0x592f98:c.instructions+=2;goto B592f98;
case 0x592f9b:c.instructions+=1;goto B592f9b;
case 0x592f9d:goto L592f9d;
case 0x592f9f:c.instructions+=2;goto B592f9f;
case 0x592fa1:c.instructions+=1;goto B592fa1;
case 0x592fa4:goto L592fa4;
case 0x592fa7:c.instructions+=1;goto B592fa7;
case 0x592faa:goto L592faa;
case 0x592fac:c.instructions+=2;goto B592fac;
case 0x592fae:c.instructions+=1;goto B592fae;
case 0x592fb1:goto L592fb1;
case 0x592fb3:c.instructions+=20;goto B592fb3;
case 0x592fb5:c.instructions+=19;goto B592fb5;
case 0x592fba:c.instructions+=18;goto B592fba;
case 0x592fbd:c.instructions+=17;goto B592fbd;
case 0x592fc0:c.instructions+=16;goto B592fc0;
case 0x592fc3:c.instructions+=15;goto B592fc3;
case 0x592fc6:c.instructions+=14;goto B592fc6;
case 0x592fca:c.instructions+=13;goto B592fca;
case 0x592fcc:c.instructions+=12;goto B592fcc;
case 0x592fce:c.instructions+=11;goto B592fce;
case 0x592fd2:c.instructions+=10;goto B592fd2;
case 0x592fd4:c.instructions+=9;goto B592fd4;
case 0x592fd6:c.instructions+=8;goto B592fd6;
case 0x592fda:c.instructions+=7;goto B592fda;
case 0x592fdc:c.instructions+=6;goto B592fdc;
case 0x592fde:c.instructions+=5;goto B592fde;
case 0x592fe4:c.instructions+=4;goto B592fe4;
case 0x592fe6:c.instructions+=3;goto B592fe6;
case 0x592fe8:c.instructions+=2;goto B592fe8;
case 0x592feb:c.instructions+=1;goto B592feb;
case 0x592fed:goto L592fed;
case 0x592ff2:goto L592ff2;
case 0x592ff4:c.instructions+=3;goto B592ff4;
case 0x592ff6:c.instructions+=2;goto B592ff6;
case 0x592ff8:c.instructions+=1;goto B592ff8;
case 0x592ffb:goto L592ffb;
case 0x592fff:c.instructions+=1;goto B592fff;
default:missing_instruction(c.pc);}
B592000:L592000:{c.instructions+=2;NFSU2_TR(0x592000);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B592004:{NFSU2_TR(0x592004);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x592009ull));
TAIL_STATIC(0x43c9d0u,43c);
}
B592009:L592009:{c.instructions+=7;NFSU2_TR(0x592009);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59200d:{NFSU2_TR(0x59200d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59200e:{NFSU2_TR(0x59200e);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B592012:{NFSU2_TR(0x592012);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592013:{NFSU2_TR(0x592013);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B592017:{NFSU2_TR(0x592017);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592018:{NFSU2_TR(0x592018);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59201dull));
TAIL_STATIC(0x43c9c0u,43c);
}
B59201d:L59201d:{c.instructions+=10;NFSU2_TR(0x59201d);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B592021:{NFSU2_TR(0x592021);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592024:{NFSU2_TR(0x592024);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B592028:{NFSU2_TR(0x592028);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59202a:{NFSU2_TR(0x59202a);
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
B59202d:{NFSU2_TR(0x59202d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B592030:{NFSU2_TR(0x592030);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B592031:{NFSU2_TR(0x592031);
__builtin_memmove((R+16),(R+20),4);
}
B592033:{NFSU2_TR(0x592033);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B592034:{NFSU2_TR(0x592034);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592040:L592040:{c.instructions+=7;NFSU2_TR(0x592040);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592044:{NFSU2_TR(0x592044);
u8 U[13];
w4(U+0,u32(u32(u32(0x350ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B59204b:{NFSU2_TR(0x59204b);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59204d:{NFSU2_TR(0x59204d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59204e:{NFSU2_TR(0x59204e);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B592052:{NFSU2_TR(0x592052);
u8 U[13];
w4(U+0,u32(u32(u32(0x350ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B592059:{NFSU2_TR(0x592059);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L592069;}}
}
B59205b:L59205b:{c.instructions+=2;NFSU2_TR(0x59205b);
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
B59205d:{NFSU2_TR(0x59205d);
if(r1(R+518)){{goto L592073;}}
}
B59205f:L59205f:{c.instructions+=3;NFSU2_TR(0x59205f);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B592065:{NFSU2_TR(0x592065);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B592066:{NFSU2_TR(0x592066);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592069:L592069:{c.instructions+=2;NFSU2_TR(0x592069);
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
B59206b:{NFSU2_TR(0x59206b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L592073;}}
}
B59206d:L59206d:{c.instructions+=1;NFSU2_TR(0x59206d);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B592073:L592073:{c.instructions+=2;NFSU2_TR(0x592073);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B592074:{NFSU2_TR(0x592074);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592080:L592080:{c.instructions+=5;NFSU2_TR(0x592080);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B592084:{NFSU2_TR(0x592084);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592088:{NFSU2_TR(0x592088);
u8 U[30];
w4(U+0,u32(u32(u32(0x364ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+22),(U+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+22))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+22)));
w4(U+26,u32(u32(r4(R+0))-u32(r4(U+22))));
w1(R+519,u8(s32(r4(U+26))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+26))==(u32(0x0ull))));
w4(U+16,u32(u32(r4(U+26))&u32(u32(0xffull))));
w1(U+20,u8(__builtin_popcountll(u64(r4(U+16)))));
w1(U+21,u8(u32(r1(U+20))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+21))==(u8(0x0ull))));
}
B59208f:{NFSU2_TR(0x59208f);
u8 U[16];
w4(U+0,u32(u32(u32(0x354ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B592096:{NFSU2_TR(0x592096);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L59209f;}}
}
B592098:L592098:{c.instructions+=1;NFSU2_TR(0x592098);
u8 U[16];
w4(U+0,u32(u32(u32(0x364ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B59209f:L59209f:{c.instructions+=1;NFSU2_TR(0x59209f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5920b0:L5920b0:{c.instructions+=11;NFSU2_TR(0x5920b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5920b1:{NFSU2_TR(0x5920b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5920b2:{NFSU2_TR(0x5920b2);
__builtin_memmove((R+24),(R+4),4);
}
B5920b4:{NFSU2_TR(0x5920b4);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5920b8:{NFSU2_TR(0x5920b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5920b9:{NFSU2_TR(0x5920b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5920bd:{NFSU2_TR(0x5920bd);
u8 U[13];
w4(U+0,u32(u32(u32(0x3b4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B5920c4:{NFSU2_TR(0x5920c4);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5920c6:{NFSU2_TR(0x5920c6);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5920c8:{NFSU2_TR(0x5920c8);
u8 U[13];
w4(U+0,u32(u32(u32(0x3b4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5920cf:{NFSU2_TR(0x5920cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5920e8;}}
}
B5920d1:L5920d1:{c.instructions+=2;NFSU2_TR(0x5920d1);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+512,u8((r1(R+4))<(r1(U+0))));
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5920d3:{NFSU2_TR(0x5920d3);
if(r1(R+518)){{goto L5920f2;}}
}
B5920d5:L5920d5:{c.instructions+=7;NFSU2_TR(0x5920d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5920db:{NFSU2_TR(0x5920db);
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
B5920dc:{NFSU2_TR(0x5920dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5920dd:{NFSU2_TR(0x5920dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3e8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5920e3:{NFSU2_TR(0x5920e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5920e4:{NFSU2_TR(0x5920e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5920e5:{NFSU2_TR(0x5920e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5920e8:L5920e8:{c.instructions+=2;NFSU2_TR(0x5920e8);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
w1(R+512,u8((r1(R+4))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+4),r1(U+3)));
w1(U+4,u8(u32(r1(R+4))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5920ea:{NFSU2_TR(0x5920ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L592155;}}
}
B5920ec:L5920ec:{c.instructions+=1;NFSU2_TR(0x5920ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5920f2:L5920f2:{c.instructions+=5;NFSU2_TR(0x5920f2);
__builtin_memmove((R+0),(R+28),4);
}
B5920f4:{NFSU2_TR(0x5920f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5920f7:{NFSU2_TR(0x5920f7);
u8 U[12];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5920fe:{NFSU2_TR(0x5920fe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5920ff:{NFSU2_TR(0x5920ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x592104ull));
TAIL_STATIC(0x43c780u,43c);
}
B592104:L592104:{c.instructions+=12;NFSU2_TR(0x592104);
u8 U[16];
w4(U+0,u32(u32(u32(0x300ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B59210b:{NFSU2_TR(0x59210b);
u8 U[16];
w4(U+0,u32(u32(u32(0x2f0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B592112:{NFSU2_TR(0x592112);
u8 U[16];
w4(U+0,u32(u32(u32(0x330ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B592119:{NFSU2_TR(0x592119);
u8 U[16];
w4(U+0,u32(u32(u32(0x320ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B592120:{NFSU2_TR(0x592120);
u8 U[16];
w4(U+0,u32(u32(u32(0x374ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B592127:{NFSU2_TR(0x592127);
u8 U[16];
w4(U+0,u32(u32(u32(0x378ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B59212e:{NFSU2_TR(0x59212e);
u8 U[16];
w4(U+0,u32(u32(u32(0x3a4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B592135:{NFSU2_TR(0x592135);
u8 U[16];
w4(U+0,u32(u32(u32(0x340ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B59213c:{NFSU2_TR(0x59213c);
u8 U[16];
w4(U+0,u32(u32(u32(0x394ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B592143:{NFSU2_TR(0x592143);
u8 U[16];
w4(U+0,u32(u32(u32(0x310ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B59214a:{NFSU2_TR(0x59214a);
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
B59214d:{NFSU2_TR(0x59214d);
u8 U[13];
w4(U+0,u32(u32(u32(0x350ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x1ull));
s1(u32(r4(U+8)),r1(U+12));
}
B592155:L592155:{c.instructions+=4;NFSU2_TR(0x592155);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B592156:{NFSU2_TR(0x592156);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B592157:{NFSU2_TR(0x592157);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B592158:{NFSU2_TR(0x592158);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592160:L592160:{c.instructions+=26;NFSU2_TR(0x592160);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592164:{NFSU2_TR(0x592164);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B592167:{NFSU2_TR(0x592167);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B592169:{NFSU2_TR(0x592169);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59216c:{NFSU2_TR(0x59216c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59216f:{NFSU2_TR(0x59216f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B592171:{NFSU2_TR(0x592171);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B592174:{NFSU2_TR(0x592174);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B592177:{NFSU2_TR(0x592177);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59217a:{NFSU2_TR(0x59217a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59217d:{NFSU2_TR(0x59217d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59217f:{NFSU2_TR(0x59217f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x480ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B592186:{NFSU2_TR(0x592186);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B592188:{NFSU2_TR(0x592188);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59218a:{NFSU2_TR(0x59218a);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B59218c:{NFSU2_TR(0x59218c);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B59218e:{NFSU2_TR(0x59218e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B592190:{NFSU2_TR(0x592190);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B592192:{NFSU2_TR(0x592192);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B592194:{NFSU2_TR(0x592194);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B592196:{NFSU2_TR(0x592196);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B592198:{NFSU2_TR(0x592198);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B59219a:{NFSU2_TR(0x59219a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59219c:{NFSU2_TR(0x59219c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59219e:{NFSU2_TR(0x59219e);
{u32 ea_=u32(r4(R+4)+u32(1008u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5921a4:{NFSU2_TR(0x5921a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5921b0:L5921b0:{c.instructions+=11;NFSU2_TR(0x5921b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5921b1:{NFSU2_TR(0x5921b1);
__builtin_memmove((R+20),(R+16),4);
}
B5921b3:{NFSU2_TR(0x5921b3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5921b6:{NFSU2_TR(0x5921b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x88ull))));
}
B5921bc:{NFSU2_TR(0x5921bc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5921bd:{NFSU2_TR(0x5921bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5921c0:{NFSU2_TR(0x5921c0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5921c1:{NFSU2_TR(0x5921c1);
__builtin_memmove((R+28),(R+4),4);
}
B5921c3:{NFSU2_TR(0x5921c3);
u8 U[13];
w4(U+0,u32(u32(u32(0x3b4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B5921ca:{NFSU2_TR(0x5921ca);
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
B5921cc:{NFSU2_TR(0x5921cc);
if(r1(R+518)){{goto L5923d8;}}
}
B5921d2:L5921d2:{c.instructions+=35;NFSU2_TR(0x5921d2);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+28)+u32(768u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5921d9:{NFSU2_TR(0x5921d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5921e1:{NFSU2_TR(0x5921e1);
{u32 ea_=u32(u32(7881276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5921e7:{NFSU2_TR(0x5921e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5921ef:{NFSU2_TR(0x5921ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5921f7:{NFSU2_TR(0x5921f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5921ff:{NFSU2_TR(0x5921ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B592207:{NFSU2_TR(0x592207);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59220f:{NFSU2_TR(0x59220f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B592217:{NFSU2_TR(0x592217);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59221f:{NFSU2_TR(0x59221f);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B592227:{NFSU2_TR(0x592227);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59222f:{NFSU2_TR(0x59222f);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B592237:{NFSU2_TR(0x592237);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59223f:{NFSU2_TR(0x59223f);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B592247:{NFSU2_TR(0x592247);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59224f:{NFSU2_TR(0x59224f);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B592257:{NFSU2_TR(0x592257);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59225f:{NFSU2_TR(0x59225f);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B592267:{NFSU2_TR(0x592267);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59226f:{NFSU2_TR(0x59226f);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B592277:{NFSU2_TR(0x592277);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59227f:{NFSU2_TR(0x59227f);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B592287:{NFSU2_TR(0x592287);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59228f:{NFSU2_TR(0x59228f);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B592297:{NFSU2_TR(0x592297);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59229f:{NFSU2_TR(0x59229f);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5922a7:{NFSU2_TR(0x5922a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5922af:{NFSU2_TR(0x5922af);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5922b7:{NFSU2_TR(0x5922b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5922bf:{NFSU2_TR(0x5922bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5922ca:{NFSU2_TR(0x5922ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5922d5:{NFSU2_TR(0x5922d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5922e0:{NFSU2_TR(0x5922e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5922eb:{NFSU2_TR(0x5922eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5922f0ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5922f0:L5922f0:{c.instructions+=6;NFSU2_TR(0x5922f0);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5922f4:{NFSU2_TR(0x5922f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5922f5:{NFSU2_TR(0x5922f5);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5922f9:{NFSU2_TR(0x5922f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5922fa:{NFSU2_TR(0x5922fa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5922fb:{NFSU2_TR(0x5922fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x592300ull));
TAIL_STATIC(0x5bada0u,5ba);
}
B592300:L592300:{c.instructions+=3;NFSU2_TR(0x592300);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B592303:{NFSU2_TR(0x592303);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B592306:{NFSU2_TR(0x592306);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L59233d;}}
}
B592308:L592308:{c.instructions+=8;NFSU2_TR(0x592308);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B59230a:{NFSU2_TR(0x59230a);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ceull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B592311:{NFSU2_TR(0x592311);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B592315:{NFSU2_TR(0x592315);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B592319:{NFSU2_TR(0x592319);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59231a:{NFSU2_TR(0x59231a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59231b:{NFSU2_TR(0x59231b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59231c:{NFSU2_TR(0x59231c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x592321ull));
TAIL_STATIC(0x5bae60u,5ba);
}
B592321:L592321:{c.instructions+=8;NFSU2_TR(0x592321);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B592323:{NFSU2_TR(0x592323);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ceull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B59232a:{NFSU2_TR(0x59232a);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59232e:{NFSU2_TR(0x59232e);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B592332:{NFSU2_TR(0x592332);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592333:{NFSU2_TR(0x592333);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592334:{NFSU2_TR(0x592334);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592335:{NFSU2_TR(0x592335);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59233aull));
TAIL_STATIC(0x5bae60u,5ba);
}
B59233a:L59233a:{c.instructions+=1;NFSU2_TR(0x59233a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B59233d:L59233d:{c.instructions+=31;NFSU2_TR(0x59233d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B59233f:{NFSU2_TR(0x59233f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B592342:{NFSU2_TR(0x592342);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B592345:{NFSU2_TR(0x592345);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B592349:{NFSU2_TR(0x592349);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59234d:{NFSU2_TR(0x59234d);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B592351:{NFSU2_TR(0x592351);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B592353:{NFSU2_TR(0x592353);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59235a:{NFSU2_TR(0x59235a);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B592361:{NFSU2_TR(0x592361);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B592368:{NFSU2_TR(0x592368);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B592373:{NFSU2_TR(0x592373);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B592376:{NFSU2_TR(0x592376);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B592379:{NFSU2_TR(0x592379);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B59237b:{NFSU2_TR(0x59237b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59237f:{NFSU2_TR(0x59237f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B592381:{NFSU2_TR(0x592381);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B592385:{NFSU2_TR(0x592385);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B592389:{NFSU2_TR(0x592389);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59238d:{NFSU2_TR(0x59238d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59238e:{NFSU2_TR(0x59238e);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+28)+u32(832u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B592395:{NFSU2_TR(0x592395);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B592399:{NFSU2_TR(0x592399);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5923a1:{NFSU2_TR(0x5923a1);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5923a8:{NFSU2_TR(0x5923a8);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+28)+u32(832u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5923af:{NFSU2_TR(0x5923af);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B5923b2:{NFSU2_TR(0x5923b2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+24),r4(R+28)));
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5923b4:{NFSU2_TR(0x5923b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5923ba:{NFSU2_TR(0x5923ba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5923bb:{NFSU2_TR(0x5923bb);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5923bf:{NFSU2_TR(0x5923bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5923c4ull));
TAIL_STATIC(0x4012b0u,401);
}
B5923c4:L5923c4:{c.instructions+=5;NFSU2_TR(0x5923c4);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5923c8:{NFSU2_TR(0x5923c8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5923c9:{NFSU2_TR(0x5923c9);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x1f0ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x1f0ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5923cf:{NFSU2_TR(0x5923cf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5923d0:{NFSU2_TR(0x5923d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5923d5ull));
TAIL_STATIC(0x4012b0u,401);
}
B5923d5:L5923d5:{c.instructions+=1;NFSU2_TR(0x5923d5);
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
B5923d8:L5923d8:{c.instructions+=5;NFSU2_TR(0x5923d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5923d9:{NFSU2_TR(0x5923d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5923da:{NFSU2_TR(0x5923da);
__builtin_memmove((R+16),(R+20),4);
}
B5923dc:{NFSU2_TR(0x5923dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5923dd:{NFSU2_TR(0x5923dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5923e0:L5923e0:{c.instructions+=4;NFSU2_TR(0x5923e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5923e1:{NFSU2_TR(0x5923e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5923e2:{NFSU2_TR(0x5923e2);
__builtin_memmove((R+28),(R+4),4);
}
B5923e4:{NFSU2_TR(0x5923e4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5923e6:L5923e6:{c.instructions+=3;NFSU2_TR(0x5923e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5923e7:{NFSU2_TR(0x5923e7);
__builtin_memmove((R+4),(R+28),4);
}
B5923e9:{NFSU2_TR(0x5923e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5923eeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5921b0u);}goto L5921b0;}
}
B5923ee:L5923ee:{c.instructions+=3;NFSU2_TR(0x5923ee);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5923ef:{NFSU2_TR(0x5923ef);
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
B5923f2:{NFSU2_TR(0x5923f2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5923e6u);}goto L5923e6;}}
}
B5923f4:L5923f4:{c.instructions+=3;NFSU2_TR(0x5923f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5923f5:{NFSU2_TR(0x5923f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5923f6:{NFSU2_TR(0x5923f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592400:L592400:{c.instructions+=10;NFSU2_TR(0x592400);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592401:{NFSU2_TR(0x592401);
__builtin_memmove((R+20),(R+16),4);
}
B592403:{NFSU2_TR(0x592403);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B592406:{NFSU2_TR(0x592406);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B592409:{NFSU2_TR(0x592409);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59240c:{NFSU2_TR(0x59240c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59240e:{NFSU2_TR(0x59240e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59240f:{NFSU2_TR(0x59240f);
__builtin_memmove((R+24),(R+4),4);
}
B592411:{NFSU2_TR(0x592411);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B592415:{NFSU2_TR(0x592415);
if(r1(R+518)){{goto L59241a;}}
}
B592417:L592417:{c.instructions+=2;NFSU2_TR(0x592417);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592418:{NFSU2_TR(0x592418);
{goto L59241d;}
}
B59241a:L59241a:{c.instructions+=2;NFSU2_TR(0x59241a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B59241c:{NFSU2_TR(0x59241c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59241d:L59241d:{c.instructions+=4;NFSU2_TR(0x59241d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B592420:{NFSU2_TR(0x592420);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592421:{NFSU2_TR(0x592421);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592422:{NFSU2_TR(0x592422);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x592427ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B592427:L592427:{c.instructions+=17;NFSU2_TR(0x592427);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59242a:{NFSU2_TR(0x59242a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59242e:{NFSU2_TR(0x59242e);
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
B592431:{NFSU2_TR(0x592431);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B592434:{NFSU2_TR(0x592434);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B592438:{NFSU2_TR(0x592438);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59243b:{NFSU2_TR(0x59243b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59243f:{NFSU2_TR(0x59243f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B592443:{NFSU2_TR(0x592443);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B592447:{NFSU2_TR(0x592447);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B592449:{NFSU2_TR(0x592449);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59244c:{NFSU2_TR(0x59244c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59244f:{NFSU2_TR(0x59244f);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B592452:{NFSU2_TR(0x592452);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B592453:{NFSU2_TR(0x592453);
__builtin_memmove((R+16),(R+20),4);
}
B592455:{NFSU2_TR(0x592455);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B592456:{NFSU2_TR(0x592456);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592460:L592460:{c.instructions+=5;NFSU2_TR(0x592460);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B592463:{NFSU2_TR(0x592463);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592464:{NFSU2_TR(0x592464);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x90ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x90ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x90ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59246a:{NFSU2_TR(0x59246a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59246b:{NFSU2_TR(0x59246b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x592470ull));
TAIL_STATIC(0x4012b0u,401);
}
B592470:L592470:{c.instructions+=2;NFSU2_TR(0x592470);
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
B592473:{NFSU2_TR(0x592473);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592480:L592480:{c.instructions+=5;NFSU2_TR(0x592480);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592481:{NFSU2_TR(0x592481);
__builtin_memmove((R+24),(R+4),4);
}
B592483:{NFSU2_TR(0x592483);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x420ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592489:{NFSU2_TR(0x592489);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59248b:{NFSU2_TR(0x59248b);
if(r1(R+518)){{goto L5924c4;}}
}
B59248d:L59248d:{c.instructions+=2;NFSU2_TR(0x59248d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B592492:{NFSU2_TR(0x592492);
if(r1(R+518)){{goto L5924c4;}}
}
B592494:L592494:{c.instructions+=2;NFSU2_TR(0x592494);
w4(R+4,u32(0x89cf48ull));
}
B592499:{NFSU2_TR(0x592499);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59249eull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B59249e:L59249e:{c.instructions+=3;NFSU2_TR(0x59249e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5924a0:{NFSU2_TR(0x5924a0);
w4(R+0,u32(0x8651acull));
}
B5924a5:{NFSU2_TR(0x5924a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5924ac;}}
}
B5924a7:L5924a7:{c.instructions+=1;NFSU2_TR(0x5924a7);
w4(R+0,u32(0x86518cull));
}
B5924ac:L5924ac:{c.instructions+=6;NFSU2_TR(0x5924ac);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5924ae:{NFSU2_TR(0x5924ae);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5924b4:{NFSU2_TR(0x5924b4);
{u32 ea_=u32(r4(R+24)+u32(1056u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5924ba:{NFSU2_TR(0x5924ba);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5924c0:{NFSU2_TR(0x5924c0);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B5924c2:{NFSU2_TR(0x5924c2);
{goto L5924ca;}
}
B5924c4:L5924c4:{c.instructions+=1;NFSU2_TR(0x5924c4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5924ca:L5924ca:{c.instructions+=3;NFSU2_TR(0x5924ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5924d0:{NFSU2_TR(0x5924d0);
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
B5924d2:{NFSU2_TR(0x5924d2);
if(r1(R+518)){{goto L5924eb;}}
}
B5924d4:L5924d4:{c.instructions+=2;NFSU2_TR(0x5924d4);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7fffffffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffffffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5924d9:{NFSU2_TR(0x5924d9);
if(r1(R+518)){{goto L5924eb;}}
}
B5924db:L5924db:{c.instructions+=5;NFSU2_TR(0x5924db);
{u32 ea_=u32(r4(R+24)+u32(1052u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5924e1:{NFSU2_TR(0x5924e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5924e2:{NFSU2_TR(0x5924e2);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5924e8:{NFSU2_TR(0x5924e8);
__asm__ volatile(".byte 0xde,0xe1":::"memory");
}
B5924ea:{NFSU2_TR(0x5924ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5924eb:L5924eb:{c.instructions+=3;NFSU2_TR(0x5924eb);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5924f1:{NFSU2_TR(0x5924f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5924f2:{NFSU2_TR(0x5924f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592500:L592500:{c.instructions+=6;NFSU2_TR(0x592500);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592501:{NFSU2_TR(0x592501);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592502:{NFSU2_TR(0x592502);
__builtin_memmove((R+24),(R+4),4);
}
B592504:{NFSU2_TR(0x592504);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x420ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59250a:{NFSU2_TR(0x59250a);
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
B59250c:{NFSU2_TR(0x59250c);
if(r1(R+518)){{goto L5925a4;}}
}
B592512:L592512:{c.instructions+=2;NFSU2_TR(0x592512);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7fffffffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffffffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B592517:{NFSU2_TR(0x592517);
if(r1(R+518)){{goto L5925a4;}}
}
B59251d:L59251d:{c.instructions+=2;NFSU2_TR(0x59251d);
w4(R+4,u32(0x89cf48ull));
}
B592522:{NFSU2_TR(0x592522);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x592527ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B592527:L592527:{c.instructions+=3;NFSU2_TR(0x592527);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B592529:{NFSU2_TR(0x592529);
w4(R+0,u32(0x8651acull));
}
B59252e:{NFSU2_TR(0x59252e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L592535;}}
}
B592530:L592530:{c.instructions+=1;NFSU2_TR(0x592530);
w4(R+0,u32(0x86518cull));
}
B592535:L592535:{c.instructions+=13;NFSU2_TR(0x592535);
{u32 ea_=u32(r4(R+24)+u32(1052u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B59253b:{NFSU2_TR(0x59253b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B59253d:{NFSU2_TR(0x59253d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x420ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B592543:{NFSU2_TR(0x592543);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B592547:{NFSU2_TR(0x592547);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59254d:{NFSU2_TR(0x59254d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B592551:{NFSU2_TR(0x592551);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B592557:{NFSU2_TR(0x592557);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B592559:{NFSU2_TR(0x592559);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59255f:{NFSU2_TR(0x59255f);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B592561:{NFSU2_TR(0x592561);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B592563:{NFSU2_TR(0x592563);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B592566:{NFSU2_TR(0x592566);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L592570;}}
}
B592568:L592568:{c.instructions+=2;NFSU2_TR(0x592568);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59256a:{NFSU2_TR(0x59256a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B592570:L592570:{c.instructions+=3;NFSU2_TR(0x592570);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B592576:{NFSU2_TR(0x592576);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59257c:{NFSU2_TR(0x59257c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x592581ull));
TAIL_STATIC(0x75bed4u,75b);
}
B592581:L592581:{c.instructions+=4;NFSU2_TR(0x592581);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B592587:{NFSU2_TR(0x592587);
__builtin_memmove((R+0),gp(0x7fbedc),4);
}
B59258c:{NFSU2_TR(0x59258c);
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
B59258e:{NFSU2_TR(0x59258e);
if(r1(R+518)){{goto L59259a;}}
}
B592590:L592590:{c.instructions+=1;NFSU2_TR(0x592590);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x418ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59259a:L59259a:{c.instructions+=1;NFSU2_TR(0x59259a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x420ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5925a4:L5925a4:{c.instructions+=3;NFSU2_TR(0x5925a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5925a5:{NFSU2_TR(0x5925a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5925a6:{NFSU2_TR(0x5925a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5925b0:L5925b0:{c.instructions+=5;NFSU2_TR(0x5925b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5925b3:{NFSU2_TR(0x5925b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5925b4:{NFSU2_TR(0x5925b4);
__builtin_memmove((R+24),(R+4),4);
}
B5925b6:{NFSU2_TR(0x5925b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5925be:{NFSU2_TR(0x5925be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5925c3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x592480u);}goto L592480;}
}
B5925c3:L5925c3:{c.instructions+=4;NFSU2_TR(0x5925c3);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5925c7:{NFSU2_TR(0x5925c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x414ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5925cd:{NFSU2_TR(0x5925cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5925cf:{NFSU2_TR(0x5925cf);
if(r1(R+518)){{goto L592636;}}
}
B5925d1:L5925d1:{c.instructions+=2;NFSU2_TR(0x5925d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5925d6:{NFSU2_TR(0x5925d6);
if(r1(R+518)){{goto L592636;}}
}
B5925d8:L5925d8:{c.instructions+=6;NFSU2_TR(0x5925d8);
{u32 ea_=u32(r4(R+24)+u32(1044u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5925de:{NFSU2_TR(0x5925de);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5925e4:{NFSU2_TR(0x5925e4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5925ea:{NFSU2_TR(0x5925ea);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5925ec:{NFSU2_TR(0x5925ec);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5925ef:{NFSU2_TR(0x5925ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L592634;}}
}
B5925f1:L5925f1:{c.instructions+=5;NFSU2_TR(0x5925f1);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5925f5:{NFSU2_TR(0x5925f5);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5925f7:{NFSU2_TR(0x5925f7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5925f9:{NFSU2_TR(0x5925f9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5925fc:{NFSU2_TR(0x5925fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L592621;}}
}
B5925fe:L5925fe:{c.instructions+=13;NFSU2_TR(0x5925fe);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B592602:{NFSU2_TR(0x592602);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B592603:{NFSU2_TR(0x592603);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B592605:{NFSU2_TR(0x592605);
{u32 ea_=u32(u32(8001420u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B59260b:{NFSU2_TR(0x59260b);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B59260d:{NFSU2_TR(0x59260d);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B59260f:{NFSU2_TR(0x59260f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B592613:{NFSU2_TR(0x592613);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B592617:{NFSU2_TR(0x592617);
__asm__ volatile(".byte 0xde,0xf2":::"memory");
}
B592619:{NFSU2_TR(0x592619);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59261b:{NFSU2_TR(0x59261b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59261d:{NFSU2_TR(0x59261d);
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
B592620:{NFSU2_TR(0x592620);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592621:L592621:{c.instructions+=8;NFSU2_TR(0x592621);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B592625:{NFSU2_TR(0x592625);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B592626:{NFSU2_TR(0x592626);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59262a:{NFSU2_TR(0x59262a);
__asm__ volatile(".byte 0xde,0xf2":::"memory");
}
B59262c:{NFSU2_TR(0x59262c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59262e:{NFSU2_TR(0x59262e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B592630:{NFSU2_TR(0x592630);
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
B592633:{NFSU2_TR(0x592633);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592634:L592634:{c.instructions+=1;NFSU2_TR(0x592634);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B592636:L592636:{c.instructions+=4;NFSU2_TR(0x592636);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59263a:{NFSU2_TR(0x59263a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59263b:{NFSU2_TR(0x59263b);
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
B59263e:{NFSU2_TR(0x59263e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592640:L592640:{c.instructions+=6;NFSU2_TR(0x592640);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592641:{NFSU2_TR(0x592641);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592642:{NFSU2_TR(0x592642);
__builtin_memmove((R+24),(R+4),4);
}
B592644:{NFSU2_TR(0x592644);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x414ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59264a:{NFSU2_TR(0x59264a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59264c:{NFSU2_TR(0x59264c);
if(r1(R+518)){{goto L592667;}}
}
B59264e:L59264e:{c.instructions+=2;NFSU2_TR(0x59264e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B592653:{NFSU2_TR(0x592653);
if(r1(R+518)){{goto L592667;}}
}
B592655:L592655:{c.instructions+=4;NFSU2_TR(0x592655);
{u32 ea_=u32(r4(R+24)+u32(1044u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B59265b:{NFSU2_TR(0x59265b);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B592661:{NFSU2_TR(0x592661);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B592665:{NFSU2_TR(0x592665);
{goto L59266f;}
}
B592667:L592667:{c.instructions+=1;NFSU2_TR(0x592667);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59266f:L59266f:{c.instructions+=2;NFSU2_TR(0x59266f);
__builtin_memmove((R+4),(R+24),4);
}
B592671:{NFSU2_TR(0x592671);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x592676ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5925b0u);}goto L5925b0;}
}
B592676:L592676:{c.instructions+=8;NFSU2_TR(0x592676);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59267a:{NFSU2_TR(0x59267a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B592680:{NFSU2_TR(0x592680);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B592682:{NFSU2_TR(0x592682);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B592684:{NFSU2_TR(0x592684);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59268a:{NFSU2_TR(0x59268a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59268d:{NFSU2_TR(0x59268d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59268f:{NFSU2_TR(0x59268f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L592784;}}
}
B592695:L592695:{c.instructions+=2;NFSU2_TR(0x592695);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B592698:{NFSU2_TR(0x592698);
if(r1(R+514)){{goto L592703;}}
}
B59269a:L59269a:{c.instructions+=6;NFSU2_TR(0x59269a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5926a0:{NFSU2_TR(0x5926a0);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B5926a2:{NFSU2_TR(0x5926a2);
__asm__ volatile(".byte 0xd8,0xd1":::"memory");
}
B5926a4:{NFSU2_TR(0x5926a4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5926a6:{NFSU2_TR(0x5926a6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5926a9:{NFSU2_TR(0x5926a9);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5926af;}}
}
B5926ab:L5926ab:{c.instructions+=2;NFSU2_TR(0x5926ab);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5926ad:{NFSU2_TR(0x5926ad);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5926af:L5926af:{c.instructions+=3;NFSU2_TR(0x5926af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5926b5:{NFSU2_TR(0x5926b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5926b7:{NFSU2_TR(0x5926b7);
if(r1(R+518)){{goto L5926ce;}}
}
B5926b9:L5926b9:{c.instructions+=2;NFSU2_TR(0x5926b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5926be:{NFSU2_TR(0x5926be);
if(r1(R+518)){{goto L5926ce;}}
}
B5926c0:L5926c0:{c.instructions+=3;NFSU2_TR(0x5926c0);
{u32 ea_=u32(r4(R+24)+u32(1052u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5926c6:{NFSU2_TR(0x5926c6);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5926cc:{NFSU2_TR(0x5926cc);
{goto L5926d4;}
}
B5926ce:L5926ce:{c.instructions+=1;NFSU2_TR(0x5926ce);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5926d4:L5926d4:{c.instructions+=6;NFSU2_TR(0x5926d4);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5926d6:{NFSU2_TR(0x5926d6);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5926da:{NFSU2_TR(0x5926da);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5926dc:{NFSU2_TR(0x5926dc);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5926e2:{NFSU2_TR(0x5926e2);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5926e8:{NFSU2_TR(0x5926e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5926edull));
TAIL_STATIC(0x75bed4u,75b);
}
B5926ed:L5926ed:{c.instructions+=8;NFSU2_TR(0x5926ed);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5926ef:{NFSU2_TR(0x5926ef);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5926f1:{NFSU2_TR(0x5926f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5926f7:{NFSU2_TR(0x5926f7);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B5926f9:{NFSU2_TR(0x5926f9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5926fb:{NFSU2_TR(0x5926fb);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5926fd:{NFSU2_TR(0x5926fd);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B592701:{NFSU2_TR(0x592701);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B592703:L592703:{c.instructions+=4;NFSU2_TR(0x592703);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B592709:{NFSU2_TR(0x592709);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59270b:{NFSU2_TR(0x59270b);
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
B59270e:{NFSU2_TR(0x59270e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59285e;}}
}
B592714:L592714:{c.instructions+=6;NFSU2_TR(0x592714);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59271a:{NFSU2_TR(0x59271a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B592720:{NFSU2_TR(0x592720);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B592724:{NFSU2_TR(0x592724);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B592726:{NFSU2_TR(0x592726);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B592729:{NFSU2_TR(0x592729);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L592731;}}
}
B59272b:L59272b:{c.instructions+=2;NFSU2_TR(0x59272b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59272d:{NFSU2_TR(0x59272d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B592731:L592731:{c.instructions+=3;NFSU2_TR(0x592731);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592737:{NFSU2_TR(0x592737);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B592739:{NFSU2_TR(0x592739);
if(r1(R+518)){{goto L592750;}}
}
B59273b:L59273b:{c.instructions+=2;NFSU2_TR(0x59273b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B592740:{NFSU2_TR(0x592740);
if(r1(R+518)){{goto L592750;}}
}
B592742:L592742:{c.instructions+=3;NFSU2_TR(0x592742);
{u32 ea_=u32(r4(R+24)+u32(1052u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B592748:{NFSU2_TR(0x592748);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59274e:{NFSU2_TR(0x59274e);
{goto L592756;}
}
B592750:L592750:{c.instructions+=1;NFSU2_TR(0x592750);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B592756:L592756:{c.instructions+=7;NFSU2_TR(0x592756);
{u32 ea_=u32(u32(8001420u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59275c:{NFSU2_TR(0x59275c);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B59275e:{NFSU2_TR(0x59275e);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B592762:{NFSU2_TR(0x592762);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B592764:{NFSU2_TR(0x592764);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59276a:{NFSU2_TR(0x59276a);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B592770:{NFSU2_TR(0x592770);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x592775ull));
TAIL_STATIC(0x75bed4u,75b);
}
B592775:L592775:{c.instructions+=6;NFSU2_TR(0x592775);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B592777:{NFSU2_TR(0x592777);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59277d:{NFSU2_TR(0x59277d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59277f:{NFSU2_TR(0x59277f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B592780:{NFSU2_TR(0x592780);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B592781:{NFSU2_TR(0x592781);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592784:L592784:{c.instructions+=2;NFSU2_TR(0x592784);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B592787:{NFSU2_TR(0x592787);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5927fa;}}
}
B592789:L592789:{c.instructions+=7;NFSU2_TR(0x592789);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B59278b:{NFSU2_TR(0x59278b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B592791:{NFSU2_TR(0x592791);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B592793:{NFSU2_TR(0x592793);
__asm__ volatile(".byte 0xd8,0xd1":::"memory");
}
B592795:{NFSU2_TR(0x592795);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B592797:{NFSU2_TR(0x592797);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59279a:{NFSU2_TR(0x59279a);
if(r1(R+518)){{goto L5927a0;}}
}
B59279c:L59279c:{c.instructions+=2;NFSU2_TR(0x59279c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59279e:{NFSU2_TR(0x59279e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5927a0:L5927a0:{c.instructions+=3;NFSU2_TR(0x5927a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5927a6:{NFSU2_TR(0x5927a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5927a8:{NFSU2_TR(0x5927a8);
if(r1(R+518)){{goto L5927bf;}}
}
B5927aa:L5927aa:{c.instructions+=2;NFSU2_TR(0x5927aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5927af:{NFSU2_TR(0x5927af);
if(r1(R+518)){{goto L5927bf;}}
}
B5927b1:L5927b1:{c.instructions+=3;NFSU2_TR(0x5927b1);
{u32 ea_=u32(r4(R+24)+u32(1052u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5927b7:{NFSU2_TR(0x5927b7);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5927bd:{NFSU2_TR(0x5927bd);
{goto L5927c5;}
}
B5927bf:L5927bf:{c.instructions+=1;NFSU2_TR(0x5927bf);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5927c5:L5927c5:{c.instructions+=7;NFSU2_TR(0x5927c5);
{u32 ea_=u32(u32(8001420u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5927cb:{NFSU2_TR(0x5927cb);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5927cd:{NFSU2_TR(0x5927cd);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5927d1:{NFSU2_TR(0x5927d1);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5927d3:{NFSU2_TR(0x5927d3);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5927d9:{NFSU2_TR(0x5927d9);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5927df:{NFSU2_TR(0x5927df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5927e4ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5927e4:L5927e4:{c.instructions+=8;NFSU2_TR(0x5927e4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5927e6:{NFSU2_TR(0x5927e6);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5927e8:{NFSU2_TR(0x5927e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5927ee:{NFSU2_TR(0x5927ee);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B5927f0:{NFSU2_TR(0x5927f0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5927f2:{NFSU2_TR(0x5927f2);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5927f4:{NFSU2_TR(0x5927f4);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5927f8:{NFSU2_TR(0x5927f8);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B5927fa:L5927fa:{c.instructions+=4;NFSU2_TR(0x5927fa);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B592800:{NFSU2_TR(0x592800);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B592802:{NFSU2_TR(0x592802);
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
B592805:{NFSU2_TR(0x592805);
if(r1(R+514)){{goto L59285e;}}
}
B592807:L592807:{c.instructions+=5;NFSU2_TR(0x592807);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B592809:{NFSU2_TR(0x592809);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B59280d:{NFSU2_TR(0x59280d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59280f:{NFSU2_TR(0x59280f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B592812:{NFSU2_TR(0x592812);
if(r1(R+518)){{goto L59281a;}}
}
B592814:L592814:{c.instructions+=2;NFSU2_TR(0x592814);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B592816:{NFSU2_TR(0x592816);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59281a:L59281a:{c.instructions+=3;NFSU2_TR(0x59281a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592820:{NFSU2_TR(0x592820);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B592822:{NFSU2_TR(0x592822);
if(r1(R+518)){{goto L592839;}}
}
B592824:L592824:{c.instructions+=2;NFSU2_TR(0x592824);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B592829:{NFSU2_TR(0x592829);
if(r1(R+518)){{goto L592839;}}
}
B59282b:L59282b:{c.instructions+=3;NFSU2_TR(0x59282b);
{u32 ea_=u32(r4(R+24)+u32(1052u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B592831:{NFSU2_TR(0x592831);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B592837:{NFSU2_TR(0x592837);
{goto L59283f;}
}
B592839:L592839:{c.instructions+=1;NFSU2_TR(0x592839);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59283f:L59283f:{c.instructions+=6;NFSU2_TR(0x59283f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B592841:{NFSU2_TR(0x592841);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B592845:{NFSU2_TR(0x592845);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B592847:{NFSU2_TR(0x592847);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59284d:{NFSU2_TR(0x59284d);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B592853:{NFSU2_TR(0x592853);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x592858ull));
TAIL_STATIC(0x75bed4u,75b);
}
B592858:L592858:{c.instructions+=1;NFSU2_TR(0x592858);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59285e:L59285e:{c.instructions+=4;NFSU2_TR(0x59285e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B592860:{NFSU2_TR(0x592860);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B592861:{NFSU2_TR(0x592861);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B592862:{NFSU2_TR(0x592862);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592870:L592870:{c.instructions+=6;NFSU2_TR(0x592870);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B592872:{NFSU2_TR(0x592872);
{u32 ea_=u32(r4(R+4)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B592878:{NFSU2_TR(0x592878);
{u32 ea_=u32(u32(7882068u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59287e:{NFSU2_TR(0x59287e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B592880:{NFSU2_TR(0x592880);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B592883:{NFSU2_TR(0x592883);
if(r1(R+514)){{goto L592897;}}
}
B592885:L592885:{c.instructions+=3;NFSU2_TR(0x592885);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592889:{NFSU2_TR(0x592889);
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
B59288c:{NFSU2_TR(0x59288c);
if(r1(R+518)){{goto L5928bd;}}
}
B59288e:L59288e:{c.instructions+=2;NFSU2_TR(0x59288e);
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
B592890:{NFSU2_TR(0x592890);
if(r1(R+518)){{goto L5928bd;}}
}
B592892:L592892:{c.instructions+=2;NFSU2_TR(0x592892);
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
B592894:{NFSU2_TR(0x592894);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592897:L592897:{c.instructions+=5;NFSU2_TR(0x592897);
{u32 ea_=u32(r4(R+4)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59289d:{NFSU2_TR(0x59289d);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5928a3:{NFSU2_TR(0x5928a3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5928a5:{NFSU2_TR(0x5928a5);
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
B5928a8:{NFSU2_TR(0x5928a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5928bd;}}
}
B5928aa:L5928aa:{c.instructions+=3;NFSU2_TR(0x5928aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5928ae:{NFSU2_TR(0x5928ae);
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
B5928b1:{NFSU2_TR(0x5928b1);
if(r1(R+518)){{goto L5928bd;}}
}
B5928b3:L5928b3:{c.instructions+=2;NFSU2_TR(0x5928b3);
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
B5928b6:{NFSU2_TR(0x5928b6);
if(r1(R+518)){{goto L5928bd;}}
}
B5928b8:L5928b8:{c.instructions+=2;NFSU2_TR(0x5928b8);
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
B5928ba:{NFSU2_TR(0x5928ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5928bd:L5928bd:{c.instructions+=2;NFSU2_TR(0x5928bd);
w4(R+0,u32(0x1ull));
}
B5928c2:{NFSU2_TR(0x5928c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5928d0:L5928d0:{c.instructions+=3;NFSU2_TR(0x5928d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5928d2:{NFSU2_TR(0x5928d2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1f0ull))));
}
B5928d8:{NFSU2_TR(0x5928d8);
TAIL_STATIC(0x591090u,591);
}
B5928e0:L5928e0:{c.instructions+=3;NFSU2_TR(0x5928e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5928e6:{NFSU2_TR(0x5928e6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5928e8:{NFSU2_TR(0x5928e8);
if(r1(R+518)){{goto L592903;}}
}
B5928ea:L5928ea:{c.instructions+=5;NFSU2_TR(0x5928ea);
{u32 ea_=u32(r4(R+4)+u32(468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5928f0:{NFSU2_TR(0x5928f0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5928f6:{NFSU2_TR(0x5928f6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5928f8:{NFSU2_TR(0x5928f8);
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
B5928fb:{NFSU2_TR(0x5928fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L592903;}}
}
B5928fd:L5928fd:{c.instructions+=2;NFSU2_TR(0x5928fd);
w4(R+0,u32(0x1ull));
}
B592902:{NFSU2_TR(0x592902);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592903:L592903:{c.instructions+=2;NFSU2_TR(0x592903);
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
B592905:{NFSU2_TR(0x592905);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592910:L592910:{c.instructions+=28;NFSU2_TR(0x592910);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592911:{NFSU2_TR(0x592911);
__builtin_memmove((R+20),(R+16),4);
}
B592913:{NFSU2_TR(0x592913);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B592916:{NFSU2_TR(0x592916);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592919:{NFSU2_TR(0x592919);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59291c:{NFSU2_TR(0x59291c);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59291f:{NFSU2_TR(0x59291f);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B592922:{NFSU2_TR(0x592922);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B592925:{NFSU2_TR(0x592925);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B592928:{NFSU2_TR(0x592928);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59292b:{NFSU2_TR(0x59292b);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B59292d:{NFSU2_TR(0x59292d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59292f:{NFSU2_TR(0x59292f);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B592932:{NFSU2_TR(0x592932);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B592935:{NFSU2_TR(0x592935);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592938:{NFSU2_TR(0x592938);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59293b:{NFSU2_TR(0x59293b);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59293e:{NFSU2_TR(0x59293e);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B592941:{NFSU2_TR(0x592941);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B592944:{NFSU2_TR(0x592944);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B592947:{NFSU2_TR(0x592947);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59294a:{NFSU2_TR(0x59294a);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B59294c:{NFSU2_TR(0x59294c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59294e:{NFSU2_TR(0x59294e);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B592951:{NFSU2_TR(0x592951);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B592954:{NFSU2_TR(0x592954);
__builtin_memmove((R+16),(R+20),4);
}
B592956:{NFSU2_TR(0x592956);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B592957:{NFSU2_TR(0x592957);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592960:L592960:{c.instructions+=7;NFSU2_TR(0x592960);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B592964:{NFSU2_TR(0x592964);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B592968:{NFSU2_TR(0x592968);
{u32 ea_=u32(r4(R+8)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59296b:{NFSU2_TR(0x59296b);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59296e:{NFSU2_TR(0x59296e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B592970:{NFSU2_TR(0x592970);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B592973:{NFSU2_TR(0x592973);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5929b0;}}
}
B592975:L592975:{c.instructions+=6;NFSU2_TR(0x592975);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B592978:{NFSU2_TR(0x592978);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59297c:{NFSU2_TR(0x59297c);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59297f:{NFSU2_TR(0x59297f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B592981:{NFSU2_TR(0x592981);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B592984:{NFSU2_TR(0x592984);
if(r1(R+514)){{goto L5929b0;}}
}
B592986:L592986:{c.instructions+=6;NFSU2_TR(0x592986);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59298a:{NFSU2_TR(0x59298a);
{u32 ea_=u32(r4(R+8)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59298d:{NFSU2_TR(0x59298d);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B592990:{NFSU2_TR(0x592990);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B592992:{NFSU2_TR(0x592992);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B592995:{NFSU2_TR(0x592995);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5929b0;}}
}
B592997:L592997:{c.instructions+=6;NFSU2_TR(0x592997);
{u32 ea_=u32(r4(R+8)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59299a:{NFSU2_TR(0x59299a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59299e:{NFSU2_TR(0x59299e);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5929a1:{NFSU2_TR(0x5929a1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5929a3:{NFSU2_TR(0x5929a3);
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
B5929a6:{NFSU2_TR(0x5929a6);
if(r1(R+514)){{goto L5929b0;}}
}
B5929a8:L5929a8:{c.instructions+=2;NFSU2_TR(0x5929a8);
w4(R+0,u32(0x1ull));
}
B5929ad:{NFSU2_TR(0x5929ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5929b0:L5929b0:{c.instructions+=2;NFSU2_TR(0x5929b0);
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
B5929b2:{NFSU2_TR(0x5929b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5929c0:L5929c0:{c.instructions+=2;NFSU2_TR(0x5929c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+523,sborrow<u8>(r1(U+4),u8(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))-u32(u8(0x1ull))));
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
B5929c3:{NFSU2_TR(0x5929c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5929d0:L5929d0:{c.instructions+=5;NFSU2_TR(0x5929d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5929d4:{NFSU2_TR(0x5929d4);
__builtin_memmove((R+4),gp(0x86b0bc),4);
}
B5929da:{NFSU2_TR(0x5929da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5929db:{NFSU2_TR(0x5929db);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5929dc:{NFSU2_TR(0x5929dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5929e1ull));
TAIL_STATIC(0x43f920u,43f);
}
B5929e1:L5929e1:{c.instructions+=2;NFSU2_TR(0x5929e1);
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
B5929e4:{NFSU2_TR(0x5929e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5929f0:L5929f0:{c.instructions+=5;NFSU2_TR(0x5929f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5929f4:{NFSU2_TR(0x5929f4);
__builtin_memmove((R+4),gp(0x86ad68),4);
}
B5929fa:{NFSU2_TR(0x5929fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5929fb:{NFSU2_TR(0x5929fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5929fc:{NFSU2_TR(0x5929fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x592a01ull));
TAIL_STATIC(0x43f920u,43f);
}
B592a01:L592a01:{c.instructions+=2;NFSU2_TR(0x592a01);
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
B592a04:{NFSU2_TR(0x592a04);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592a10:L592a10:{c.instructions+=17;NFSU2_TR(0x592a10);
{u32 ea_=u32(r4(R+4)+u32(228u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B592a16:{NFSU2_TR(0x592a16);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B592a1c:{NFSU2_TR(0x592a1c);
{u32 ea_=u32(r4(R+4)+u32(232u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B592a22:{NFSU2_TR(0x592a22);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592a26:{NFSU2_TR(0x592a26);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B592a28:{NFSU2_TR(0x592a28);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B592a2a:{NFSU2_TR(0x592a2a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B592a2d:{NFSU2_TR(0x592a2d);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B592a30:{NFSU2_TR(0x592a30);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592a34:{NFSU2_TR(0x592a34);
{u32 ea_=u32(r4(R+4)+u32(244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B592a3a:{NFSU2_TR(0x592a3a);
{u32 ea_=u32(r4(R+4)+u32(248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B592a40:{NFSU2_TR(0x592a40);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B592a46:{NFSU2_TR(0x592a46);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B592a48:{NFSU2_TR(0x592a48);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B592a4a:{NFSU2_TR(0x592a4a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B592a4d:{NFSU2_TR(0x592a4d);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B592a50:{NFSU2_TR(0x592a50);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592a60:L592a60:{c.instructions+=5;NFSU2_TR(0x592a60);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592a64:{NFSU2_TR(0x592a64);
__builtin_memmove((R+4),gp(0x86b240),4);
}
B592a6a:{NFSU2_TR(0x592a6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592a6b:{NFSU2_TR(0x592a6b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592a6c:{NFSU2_TR(0x592a6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x592a71ull));
TAIL_STATIC(0x43f920u,43f);
}
B592a71:L592a71:{c.instructions+=2;NFSU2_TR(0x592a71);
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
B592a74:{NFSU2_TR(0x592a74);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592a80:L592a80:{c.instructions+=5;NFSU2_TR(0x592a80);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592a84:{NFSU2_TR(0x592a84);
__builtin_memmove((R+4),gp(0x86b2ec),4);
}
B592a8a:{NFSU2_TR(0x592a8a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592a8b:{NFSU2_TR(0x592a8b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592a8c:{NFSU2_TR(0x592a8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x592a91ull));
TAIL_STATIC(0x43f920u,43f);
}
B592a91:L592a91:{c.instructions+=2;NFSU2_TR(0x592a91);
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
B592a94:{NFSU2_TR(0x592a94);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592aa0:L592aa0:{c.instructions+=5;NFSU2_TR(0x592aa0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592aa4:{NFSU2_TR(0x592aa4);
__builtin_memmove((R+4),gp(0x86b2f0),4);
}
B592aaa:{NFSU2_TR(0x592aaa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592aab:{NFSU2_TR(0x592aab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592aac:{NFSU2_TR(0x592aac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x592ab1ull));
TAIL_STATIC(0x43f920u,43f);
}
B592ab1:L592ab1:{c.instructions+=2;NFSU2_TR(0x592ab1);
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
B592ab4:{NFSU2_TR(0x592ab4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592ac0:L592ac0:{c.instructions+=5;NFSU2_TR(0x592ac0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592ac4:{NFSU2_TR(0x592ac4);
__builtin_memmove((R+4),gp(0x86b370),4);
}
B592aca:{NFSU2_TR(0x592aca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592acb:{NFSU2_TR(0x592acb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592acc:{NFSU2_TR(0x592acc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x592ad1ull));
TAIL_STATIC(0x43f920u,43f);
}
B592ad1:L592ad1:{c.instructions+=2;NFSU2_TR(0x592ad1);
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
B592ad4:{NFSU2_TR(0x592ad4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592ae0:L592ae0:{c.instructions+=5;NFSU2_TR(0x592ae0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592ae4:{NFSU2_TR(0x592ae4);
__builtin_memmove((R+4),gp(0x86b374),4);
}
B592aea:{NFSU2_TR(0x592aea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592aeb:{NFSU2_TR(0x592aeb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592aec:{NFSU2_TR(0x592aec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x592af1ull));
TAIL_STATIC(0x43f920u,43f);
}
B592af1:L592af1:{c.instructions+=2;NFSU2_TR(0x592af1);
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
B592af4:{NFSU2_TR(0x592af4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592b00:L592b00:{c.instructions+=5;NFSU2_TR(0x592b00);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592b02:{NFSU2_TR(0x592b02);
u8 U[4];
w4(U+0,u32(0x7a1ca8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592b07:{NFSU2_TR(0x592b07);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592b09:{NFSU2_TR(0x592b09);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592b0e:{NFSU2_TR(0x592b0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x592b13ull));
TAIL_STATIC(0x440df0u,440);
}
B592b13:L592b13:{c.instructions+=3;NFSU2_TR(0x592b13);
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
B592b16:{NFSU2_TR(0x592b16);
__builtin_memmove(gp(0x86b240),(R+0),4);
}
B592b1b:{NFSU2_TR(0x592b1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592b20:L592b20:{c.instructions+=3;NFSU2_TR(0x592b20);
__builtin_memmove((R+0),gp(0x86b240),4);
}
B592b25:{NFSU2_TR(0x592b25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592b26:{NFSU2_TR(0x592b26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x592b2bull));
TAIL_STATIC(0x440e40u,440);
}
B592b2b:L592b2b:{c.instructions+=3;NFSU2_TR(0x592b2b);
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
B592b2e:{NFSU2_TR(0x592b2e);
s4(0x86b240,u32(0x0ull));
}
B592b38:{NFSU2_TR(0x592b38);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592b40:L592b40:{c.instructions+=8;NFSU2_TR(0x592b40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592b41:{NFSU2_TR(0x592b41);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592b42:{NFSU2_TR(0x592b42);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B592b46:{NFSU2_TR(0x592b46);
__builtin_memmove((R+24),(R+4),4);
}
B592b48:{NFSU2_TR(0x592b48);
u8 U[4];
w4(U+0,u32(0x7a1cbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592b4d:{NFSU2_TR(0x592b4d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592b4e:{NFSU2_TR(0x592b4e);
__builtin_memmove((R+4),(R+28),4);
}
B592b50:{NFSU2_TR(0x592b50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x592b55ull));
TAIL_STATIC(0x578ce0u,578);
}
B592b55:L592b55:{c.instructions+=4;NFSU2_TR(0x592b55);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B592b58:{NFSU2_TR(0x592b58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592b59:{NFSU2_TR(0x592b59);
__builtin_memmove((R+4),(R+28),4);
}
B592b5b:{NFSU2_TR(0x592b5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x592b60ull));
TAIL_STATIC(0x571770u,571);
}
B592b60:L592b60:{c.instructions+=4;NFSU2_TR(0x592b60);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B592b63:{NFSU2_TR(0x592b63);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592b64:{NFSU2_TR(0x592b64);
__builtin_memmove((R+4),(R+28),4);
}
B592b66:{NFSU2_TR(0x592b66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x592b6bull));
TAIL_STATIC(0x571770u,571);
}
B592b6b:L592b6b:{c.instructions+=7;NFSU2_TR(0x592b6b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592b6d:{NFSU2_TR(0x592b6d);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592b6f:{NFSU2_TR(0x592b6f);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592b71:{NFSU2_TR(0x592b71);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+8),(U+0),4);
}
B592b74:{NFSU2_TR(0x592b74);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592b75:{NFSU2_TR(0x592b75);
__builtin_memmove((R+4),(R+28),4);
}
B592b77:{NFSU2_TR(0x592b77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x592b7cull));
TAIL_STATIC(0x571640u,571);
}
B592b7c:L592b7c:{c.instructions+=7;NFSU2_TR(0x592b7c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592b7e:{NFSU2_TR(0x592b7e);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592b80:{NFSU2_TR(0x592b80);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592b82:{NFSU2_TR(0x592b82);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B592b85:{NFSU2_TR(0x592b85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592b86:{NFSU2_TR(0x592b86);
__builtin_memmove((R+4),(R+28),4);
}
B592b88:{NFSU2_TR(0x592b88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x592b8dull));
TAIL_STATIC(0x571640u,571);
}
B592b8d:L592b8d:{c.instructions+=7;NFSU2_TR(0x592b8d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592b8f:{NFSU2_TR(0x592b8f);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592b91:{NFSU2_TR(0x592b91);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592b93:{NFSU2_TR(0x592b93);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B592b96:{NFSU2_TR(0x592b96);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592b97:{NFSU2_TR(0x592b97);
__builtin_memmove((R+4),(R+28),4);
}
B592b99:{NFSU2_TR(0x592b99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x592b9eull));
TAIL_STATIC(0x571640u,571);
}
B592b9e:L592b9e:{c.instructions+=4;NFSU2_TR(0x592b9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+8),(U+0),4);
}
B592ba1:{NFSU2_TR(0x592ba1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592ba2:{NFSU2_TR(0x592ba2);
__builtin_memmove((R+4),(R+28),4);
}
B592ba4:{NFSU2_TR(0x592ba4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x592ba9ull));
TAIL_STATIC(0x571770u,571);
}
B592ba9:L592ba9:{c.instructions+=7;NFSU2_TR(0x592ba9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592bab:{NFSU2_TR(0x592bab);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592bad:{NFSU2_TR(0x592bad);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592baf:{NFSU2_TR(0x592baf);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B592bb2:{NFSU2_TR(0x592bb2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592bb3:{NFSU2_TR(0x592bb3);
__builtin_memmove((R+4),(R+28),4);
}
B592bb5:{NFSU2_TR(0x592bb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x592bbaull));
TAIL_STATIC(0x571640u,571);
}
B592bba:L592bba:{c.instructions+=2;NFSU2_TR(0x592bba);
__builtin_memmove((R+4),(R+28),4);
}
B592bbc:{NFSU2_TR(0x592bbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x592bc1ull));
TAIL_STATIC(0x578d90u,578);
}
B592bc1:L592bc1:{c.instructions+=3;NFSU2_TR(0x592bc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B592bc2:{NFSU2_TR(0x592bc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B592bc3:{NFSU2_TR(0x592bc3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592bd0:L592bd0:{c.instructions+=10;NFSU2_TR(0x592bd0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592bd1:{NFSU2_TR(0x592bd1);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B592bd6:{NFSU2_TR(0x592bd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B592bd9:{NFSU2_TR(0x592bd9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B592bdd:{NFSU2_TR(0x592bdd);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B592be1:{NFSU2_TR(0x592be1);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B592be7:{NFSU2_TR(0x592be7);
{u32 ea_=u32(u32(8371936u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B592bed:{NFSU2_TR(0x592bed);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B592bef:{NFSU2_TR(0x592bef);
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
B592bf2:{NFSU2_TR(0x592bf2);
if(r1(R+514)){{goto L592bfd;}}
}
B592bf4:L592bf4:{c.instructions+=3;NFSU2_TR(0x592bf4);
w4(R+0,u32(0x1ull));
}
B592bf9:{NFSU2_TR(0x592bf9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B592bfa:{NFSU2_TR(0x592bfa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592bfd:L592bfd:{c.instructions+=3;NFSU2_TR(0x592bfd);
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
B592bff:{NFSU2_TR(0x592bff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B592c00:{NFSU2_TR(0x592c00);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592c10:L592c10:{c.instructions+=7;NFSU2_TR(0x592c10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592c11:{NFSU2_TR(0x592c11);
__builtin_memmove((R+24),(R+4),4);
}
B592c13:{NFSU2_TR(0x592c13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592c16:{NFSU2_TR(0x592c16);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B592c1c:{NFSU2_TR(0x592c1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B592c1e:{NFSU2_TR(0x592c1e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592c1f:{NFSU2_TR(0x592c1f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x592c22ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B592c22:L592c22:{c.instructions+=5;NFSU2_TR(0x592c22);
__builtin_memmove((R+28),(R+0),4);
}
B592c24:{NFSU2_TR(0x592c24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592c27:{NFSU2_TR(0x592c27);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B592c2d:{NFSU2_TR(0x592c2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B592c2f:{NFSU2_TR(0x592c2f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x592c32ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B592c32:L592c32:{c.instructions+=11;NFSU2_TR(0x592c32);
__builtin_memmove((R+4),(R+0),4);
}
B592c34:{NFSU2_TR(0x592c34);
__builtin_memmove((R+0),(R+28),4);
}
B592c36:{NFSU2_TR(0x592c36);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x98ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B592c3c:{NFSU2_TR(0x592c3c);
__builtin_memmove((R+8),(R+4),4);
}
B592c3e:{NFSU2_TR(0x592c3e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x98ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B592c44:{NFSU2_TR(0x592c44);
{u32 ea_=u32(r4(R+0)+u32(8392468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B592c4a:{NFSU2_TR(0x592c4a);
{u32 ea_=u32(r4(R+8)+u32(8392468u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B592c50:{NFSU2_TR(0x592c50);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B592c52:{NFSU2_TR(0x592c52);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B592c55:{NFSU2_TR(0x592c55);
__builtin_memmove((R+0),(R+28),4);
}
B592c57:{NFSU2_TR(0x592c57);
if(r1(R+518)){{goto L592c5b;}}
}
B592c59:L592c59:{c.instructions+=1;NFSU2_TR(0x592c59);
__builtin_memmove((R+0),(R+4),4);
}
B592c5b:L592c5b:{c.instructions+=3;NFSU2_TR(0x592c5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B592c5c:{NFSU2_TR(0x592c5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B592c5d:{NFSU2_TR(0x592c5d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592c60:L592c60:{c.instructions+=5;NFSU2_TR(0x592c60);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592c63:{NFSU2_TR(0x592c63);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B592c69:{NFSU2_TR(0x592c69);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B592c6c:{NFSU2_TR(0x592c6c);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B592c6e:{NFSU2_TR(0x592c6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L592c83;}}
}
B592c70:L592c70:{c.instructions+=4;NFSU2_TR(0x592c70);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B592c76:{NFSU2_TR(0x592c76);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B592c79:{NFSU2_TR(0x592c79);
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
B592c7b:{NFSU2_TR(0x592c7b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L592c83;}}
}
B592c7d:L592c7d:{c.instructions+=2;NFSU2_TR(0x592c7d);
w4(R+0,u32(0x1ull));
}
B592c82:{NFSU2_TR(0x592c82);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592c83:L592c83:{c.instructions+=2;NFSU2_TR(0x592c83);
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
B592c85:{NFSU2_TR(0x592c85);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592c90:L592c90:{c.instructions+=11;NFSU2_TR(0x592c90);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B592c94:{NFSU2_TR(0x592c94);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592c95:{NFSU2_TR(0x592c95);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+8)),r4(U+0));
}
B592c9b:{NFSU2_TR(0x592c9b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592c9c:{NFSU2_TR(0x592c9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B592ca0:{NFSU2_TR(0x592ca0);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B592ca6:{NFSU2_TR(0x592ca6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592ca9:{NFSU2_TR(0x592ca9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592caf:{NFSU2_TR(0x592caf);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B592cb2:{NFSU2_TR(0x592cb2);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B592cb4:{NFSU2_TR(0x592cb4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L592cbe;}}
}
B592cb6:L592cb6:{c.instructions+=2;NFSU2_TR(0x592cb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592cbc:{NFSU2_TR(0x592cbc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B592cbe:L592cbe:{c.instructions+=5;NFSU2_TR(0x592cbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B592cc1:{NFSU2_TR(0x592cc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592cc7:{NFSU2_TR(0x592cc7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B592cca:{NFSU2_TR(0x592cca);
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
B592ccc:{NFSU2_TR(0x592ccc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L592cd6;}}
}
B592cce:L592cce:{c.instructions+=2;NFSU2_TR(0x592cce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B592cd4:{NFSU2_TR(0x592cd4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B592cd6:L592cd6:{c.instructions+=3;NFSU2_TR(0x592cd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B592cd7:{NFSU2_TR(0x592cd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B592cd8:{NFSU2_TR(0x592cd8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592ce0:L592ce0:{c.instructions+=5;NFSU2_TR(0x592ce0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592ce4:{NFSU2_TR(0x592ce4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B592ce8:{NFSU2_TR(0x592ce8);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B592cee:{NFSU2_TR(0x592cee);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B592cf4:{NFSU2_TR(0x592cf4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592d00:L592d00:{c.instructions+=9;NFSU2_TR(0x592d00);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592d03:{NFSU2_TR(0x592d03);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B592d09:{NFSU2_TR(0x592d09);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592d0a:{NFSU2_TR(0x592d0a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B592d0d:{NFSU2_TR(0x592d0d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592d0e:{NFSU2_TR(0x592d0e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B592d10:{NFSU2_TR(0x592d10);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B592d12:{NFSU2_TR(0x592d12);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B592d14:{NFSU2_TR(0x592d14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L592d1c;}}
}
B592d16:L592d16:{c.instructions+=1;NFSU2_TR(0x592d16);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B592d1c:L592d1c:{c.instructions+=4;NFSU2_TR(0x592d1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592d22:{NFSU2_TR(0x592d22);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B592d25:{NFSU2_TR(0x592d25);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B592d27:{NFSU2_TR(0x592d27);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L592d2f;}}
}
B592d29:L592d29:{c.instructions+=1;NFSU2_TR(0x592d29);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B592d2f:L592d2f:{c.instructions+=2;NFSU2_TR(0x592d2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B592d31:{NFSU2_TR(0x592d31);
if(r1(R+518)){{goto L592d3a;}}
}
B592d33:L592d33:{c.instructions+=3;NFSU2_TR(0x592d33);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592d36:{NFSU2_TR(0x592d36);
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
B592d38:{NFSU2_TR(0x592d38);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L592d45;}}
}
B592d3a:L592d3a:{c.instructions+=2;NFSU2_TR(0x592d3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B592d3c:{NFSU2_TR(0x592d3c);
if(r1(R+518)){{goto L592d4a;}}
}
B592d3e:L592d3e:{c.instructions+=3;NFSU2_TR(0x592d3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592d41:{NFSU2_TR(0x592d41);
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
B592d43:{NFSU2_TR(0x592d43);
if(r1(R+518)){{goto L592d4a;}}
}
B592d45:L592d45:{c.instructions+=4;NFSU2_TR(0x592d45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B592d46:{NFSU2_TR(0x592d46);
w1(R+0,u8(0x1ull));
}
B592d48:{NFSU2_TR(0x592d48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B592d49:{NFSU2_TR(0x592d49);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592d4a:L592d4a:{c.instructions+=4;NFSU2_TR(0x592d4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B592d4b:{NFSU2_TR(0x592d4b);
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
B592d4d:{NFSU2_TR(0x592d4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B592d4e:{NFSU2_TR(0x592d4e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592d50:L592d50:{c.instructions+=8;NFSU2_TR(0x592d50);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592d53:{NFSU2_TR(0x592d53);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B592d59:{NFSU2_TR(0x592d59);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592d5a:{NFSU2_TR(0x592d5a);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B592d5d:{NFSU2_TR(0x592d5d);
w4(R+4,u32(0x1ull));
}
B592d62:{NFSU2_TR(0x592d62);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(R+12))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+12),r1(U+3)));
w1(U+4,u8(u32(r1(R+12))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B592d64:{NFSU2_TR(0x592d64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B592d65:{NFSU2_TR(0x592d65);
if(r1(R+518)){{goto L592d75;}}
}
B592d67:L592d67:{c.instructions+=3;NFSU2_TR(0x592d67);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592d6d:{NFSU2_TR(0x592d6d);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+4))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+4)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B592d70:{NFSU2_TR(0x592d70);
if(r1(R+518)){{goto L592d75;}}
}
B592d72:L592d72:{c.instructions+=2;NFSU2_TR(0x592d72);
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
B592d74:{NFSU2_TR(0x592d74);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592d75:L592d75:{c.instructions+=2;NFSU2_TR(0x592d75);
__builtin_memmove((R+0),(R+4),4);
}
B592d77:{NFSU2_TR(0x592d77);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592d80:L592d80:{c.instructions+=7;NFSU2_TR(0x592d80);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B592d83:{NFSU2_TR(0x592d83);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592d89:{NFSU2_TR(0x592d89);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592d8a:{NFSU2_TR(0x592d8a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B592d8d:{NFSU2_TR(0x592d8d);
w1(R+8,u8(0x1ull));
}
B592d8f:{NFSU2_TR(0x592d8f);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
w1(R+512,u8((r1(R+12))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+12),r1(U+3)));
w1(U+4,u8(u32(r1(R+12))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B592d91:{NFSU2_TR(0x592d91);
if(r1(R+518)){{goto L592da6;}}
}
B592d93:L592d93:{c.instructions+=7;NFSU2_TR(0x592d93);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B592d99:{NFSU2_TR(0x592d99);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B592d9c:{NFSU2_TR(0x592d9c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B592d9e:{NFSU2_TR(0x592d9e);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(R+12))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B592da0:{NFSU2_TR(0x592da0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B592da3:{NFSU2_TR(0x592da3);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B592da4:{NFSU2_TR(0x592da4);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B592da6:L592da6:{c.instructions+=2;NFSU2_TR(0x592da6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B592da7:{NFSU2_TR(0x592da7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592db0:L592db0:{c.instructions+=5;NFSU2_TR(0x592db0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592db4:{NFSU2_TR(0x592db4);
__builtin_memmove((R+4),gp(0x86b2fc),4);
}
B592dba:{NFSU2_TR(0x592dba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592dbb:{NFSU2_TR(0x592dbb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592dbc:{NFSU2_TR(0x592dbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x592dc1ull));
TAIL_STATIC(0x43f920u,43f);
}
B592dc1:L592dc1:{c.instructions+=2;NFSU2_TR(0x592dc1);
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
B592dc4:{NFSU2_TR(0x592dc4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592dd0:L592dd0:{c.instructions+=5;NFSU2_TR(0x592dd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592dd4:{NFSU2_TR(0x592dd4);
__builtin_memmove((R+4),gp(0x86b2cc),4);
}
B592dda:{NFSU2_TR(0x592dda);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592ddb:{NFSU2_TR(0x592ddb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592ddc:{NFSU2_TR(0x592ddc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x592de1ull));
TAIL_STATIC(0x43f920u,43f);
}
B592de1:L592de1:{c.instructions+=2;NFSU2_TR(0x592de1);
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
B592de4:{NFSU2_TR(0x592de4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592df0:L592df0:{c.instructions+=7;NFSU2_TR(0x592df0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592df1:{NFSU2_TR(0x592df1);
__builtin_memmove((R+24),(R+4),4);
}
B592df3:{NFSU2_TR(0x592df3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592df6:{NFSU2_TR(0x592df6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592df7:{NFSU2_TR(0x592df7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B592dfb:{NFSU2_TR(0x592dfb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B592dfd:{NFSU2_TR(0x592dfd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L592e33;}}
}
B592dff:L592dff:{c.instructions+=4;NFSU2_TR(0x592dff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B592e01:{NFSU2_TR(0x592e01);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B592e04:{NFSU2_TR(0x592e04);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B592e06:{NFSU2_TR(0x592e06);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L592e30;}}
}
B592e08:L592e08:{c.instructions+=3;NFSU2_TR(0x592e08);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592e09:{NFSU2_TR(0x592e09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B592e0c:{NFSU2_TR(0x592e0c);
__builtin_memmove((R+16),(R+16),4);
}
B592e10:L592e10:{c.instructions+=9;NFSU2_TR(0x592e10);
__builtin_memmove((R+4),(R+0),4);
}
B592e12:{NFSU2_TR(0x592e12);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B592e15:{NFSU2_TR(0x592e15);
w4(R+8,u32(0x1ull));
}
B592e1a:{NFSU2_TR(0x592e1a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B592e1c:{NFSU2_TR(0x592e1c);
__builtin_memmove((R+4),(R+0),4);
}
B592e1e:{NFSU2_TR(0x592e1e);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B592e21:{NFSU2_TR(0x592e21);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+4),(U+8),1);
}
B592e24:{NFSU2_TR(0x592e24);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B592e26:{NFSU2_TR(0x592e26);
if(r1(R+518)){{goto L592e2f;}}
}
B592e28:L592e28:{c.instructions+=4;NFSU2_TR(0x592e28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B592e2a:{NFSU2_TR(0x592e2a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B592e2b:{NFSU2_TR(0x592e2b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B592e2d:{NFSU2_TR(0x592e2d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x592e10u);}goto L592e10;}}
}
B592e2f:L592e2f:{c.instructions+=1;NFSU2_TR(0x592e2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B592e30:L592e30:{c.instructions+=1;NFSU2_TR(0x592e30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B592e33:L592e33:{c.instructions+=14;NFSU2_TR(0x592e33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592e36:{NFSU2_TR(0x592e36);
__builtin_memmove((R+8),(R+28),4);
}
B592e38:{NFSU2_TR(0x592e38);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B592e3b:{NFSU2_TR(0x592e3b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B592e3d:{NFSU2_TR(0x592e3d);
__builtin_memmove((R+4),(R+28),4);
}
B592e3f:{NFSU2_TR(0x592e3f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B592e42:{NFSU2_TR(0x592e42);
w1(R+8,u8(0x1ull));
}
B592e44:{NFSU2_TR(0x592e44);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w1(R+8,shl<u8>(r1(R+8),u64(r1(U+0))));
}
B592e46:{NFSU2_TR(0x592e46);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B592e48:{NFSU2_TR(0x592e48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B592e49:{NFSU2_TR(0x592e49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B592e4a:{NFSU2_TR(0x592e4a);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+4,u8(u32(r1(R+4))|u32(r1(R+8))));
w1(R+519,u8(s8(r1(R+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B592e4c:{NFSU2_TR(0x592e4c);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B592e4e:{NFSU2_TR(0x592e4e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592e60:L592e60:{c.instructions+=5;NFSU2_TR(0x592e60);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592e61:{NFSU2_TR(0x592e61);
__builtin_memmove((R+28),(R+4),4);
}
B592e63:{NFSU2_TR(0x592e63);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x244ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592e69:{NFSU2_TR(0x592e69);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B592e6b:{NFSU2_TR(0x592e6b);
if(r1(R+518)){{goto L592e71;}}
}
B592e6d:L592e6d:{c.instructions+=3;NFSU2_TR(0x592e6d);
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
B592e6f:{NFSU2_TR(0x592e6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B592e70:{NFSU2_TR(0x592e70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592e71:L592e71:{c.instructions+=8;NFSU2_TR(0x592e71);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592e72:{NFSU2_TR(0x592e72);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B592e78:{NFSU2_TR(0x592e78);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592e79:{NFSU2_TR(0x592e79);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B592e7f:{NFSU2_TR(0x592e7f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592e81:{NFSU2_TR(0x592e81);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592e82:{NFSU2_TR(0x592e82);
__builtin_memmove((R+4),(R+24),4);
}
B592e84:{NFSU2_TR(0x592e84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x592e89ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x592960u);}goto L592960;}
}
B592e89:L592e89:{c.instructions+=2;NFSU2_TR(0x592e89);
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
B592e8b:{NFSU2_TR(0x592e8b);
if(r1(R+518)){{goto L592ec3;}}
}
B592e8d:L592e8d:{c.instructions+=3;NFSU2_TR(0x592e8d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B592e90:{NFSU2_TR(0x592e90);
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
B592e92:{NFSU2_TR(0x592e92);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L592e9b;}}
}
B592e94:L592e94:{c.instructions+=3;NFSU2_TR(0x592e94);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x19ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B592e97:{NFSU2_TR(0x592e97);
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
B592e99:{NFSU2_TR(0x592e99);
if(r1(R+518)){{goto L592ec3;}}
}
B592e9b:L592e9b:{c.instructions+=4;NFSU2_TR(0x592e9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B592e9d:{NFSU2_TR(0x592e9d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592e9e:{NFSU2_TR(0x592e9e);
__builtin_memmove((R+4),(R+24),4);
}
B592ea0:{NFSU2_TR(0x592ea0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x592ea3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B592ea3:L592ea3:{c.instructions+=2;NFSU2_TR(0x592ea3);
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
B592ea5:{NFSU2_TR(0x592ea5);
if(r1(R+518)){{goto L592ec3;}}
}
B592ea7:L592ea7:{c.instructions+=5;NFSU2_TR(0x592ea7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B592ead:{NFSU2_TR(0x592ead);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592eb3:{NFSU2_TR(0x592eb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B592eb5:{NFSU2_TR(0x592eb5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592eb6:{NFSU2_TR(0x592eb6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x592eb9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B592eb9:L592eb9:{c.instructions+=2;NFSU2_TR(0x592eb9);
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
B592ebb:{NFSU2_TR(0x592ebb);
if(r1(R+518)){{goto L592ec3;}}
}
B592ebd:L592ebd:{c.instructions+=5;NFSU2_TR(0x592ebd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B592ebe:{NFSU2_TR(0x592ebe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B592ebf:{NFSU2_TR(0x592ebf);
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
B592ec1:{NFSU2_TR(0x592ec1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B592ec2:{NFSU2_TR(0x592ec2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592ec3:L592ec3:{c.instructions+=5;NFSU2_TR(0x592ec3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B592ec4:{NFSU2_TR(0x592ec4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B592ec5:{NFSU2_TR(0x592ec5);
w4(R+0,u32(0x1ull));
}
B592eca:{NFSU2_TR(0x592eca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B592ecb:{NFSU2_TR(0x592ecb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592ed0:L592ed0:{c.instructions+=4;NFSU2_TR(0x592ed0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B592ed4:{NFSU2_TR(0x592ed4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B592ed8:{NFSU2_TR(0x592ed8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B592eda:{NFSU2_TR(0x592eda);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L592ef9;}}
}
B592edc:L592edc:{c.instructions+=2;NFSU2_TR(0x592edc);
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
B592edf:{NFSU2_TR(0x592edf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L592ef3;}}
}
B592ee1:L592ee1:{c.instructions+=2;NFSU2_TR(0x592ee1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B592ee4:{NFSU2_TR(0x592ee4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L592ef9;}}
}
B592ee6:L592ee6:{c.instructions+=5;NFSU2_TR(0x592ee6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592ee9:{NFSU2_TR(0x592ee9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B592eed:{NFSU2_TR(0x592eed);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x2ull))));
}
B592ef0:{NFSU2_TR(0x592ef0);
u8 U[10];
w4(U+6,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+512,u8((r4(U+6))!=(u32(0x0ull))));
w1(R+523,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B592ef2:{NFSU2_TR(0x592ef2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592ef3:L592ef3:{c.instructions+=2;NFSU2_TR(0x592ef3);
w4(R+0,u32(0x1ull));
}
B592ef8:{NFSU2_TR(0x592ef8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592ef9:L592ef9:{c.instructions+=2;NFSU2_TR(0x592ef9);
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
B592efb:{NFSU2_TR(0x592efb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B592f00:L592f00:{c.instructions+=11;NFSU2_TR(0x592f00);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592f01:{NFSU2_TR(0x592f01);
__builtin_memmove((R+20),(R+16),4);
}
B592f03:{NFSU2_TR(0x592f03);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B592f06:{NFSU2_TR(0x592f06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B592f09:{NFSU2_TR(0x592f09);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592f0f:{NFSU2_TR(0x592f0f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B592f12:{NFSU2_TR(0x592f12);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B592f15:{NFSU2_TR(0x592f15);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592f16:{NFSU2_TR(0x592f16);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592f17:{NFSU2_TR(0x592f17);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592f18:{NFSU2_TR(0x592f18);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L592f2a;}}
}
B592f1a:L592f1a:{c.instructions+=3;NFSU2_TR(0x592f1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B592f20:{NFSU2_TR(0x592f20);
u8 U[7];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B592f24:{NFSU2_TR(0x592f24);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L592f2a;}}
}
B592f26:L592f26:{c.instructions+=2;NFSU2_TR(0x592f26);
__builtin_memmove((R+24),(R+0),4);
}
B592f28:{NFSU2_TR(0x592f28);
{goto L592f47;}
}
B592f2a:L592f2a:{c.instructions+=3;NFSU2_TR(0x592f2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B592f30:{NFSU2_TR(0x592f30);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11ull))));
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
B592f34:{NFSU2_TR(0x592f34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x593005u,593);}
}
B592f3a:L592f3a:{c.instructions+=2;NFSU2_TR(0x592f3a);
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
B592f3d:{NFSU2_TR(0x592f3d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x593005u,593);}
}
B592f43:L592f43:{c.instructions+=2;NFSU2_TR(0x592f43);
__builtin_memmove((R+24),(R+4),4);
}
B592f45:{NFSU2_TR(0x592f45);
__builtin_memmove((R+12),(R+0),4);
}
B592f47:L592f47:{c.instructions+=2;NFSU2_TR(0x592f47);
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
B592f49:{NFSU2_TR(0x592f49);
if(r1(R+518)){TAIL_STATIC(0x593005u,593);}
}
B592f4f:L592f4f:{c.instructions+=2;NFSU2_TR(0x592f4f);
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
B592f51:{NFSU2_TR(0x592f51);
if(r1(R+518)){TAIL_STATIC(0x593005u,593);}
}
B592f57:L592f57:{c.instructions+=4;NFSU2_TR(0x592f57);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B592f5a:{NFSU2_TR(0x592f5a);
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
B592f5c:{NFSU2_TR(0x592f5c);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B592f60:{NFSU2_TR(0x592f60);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L592ff2;}}
}
B592f66:L592f66:{c.instructions+=12;NFSU2_TR(0x592f66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592f69:{NFSU2_TR(0x592f69);
{u32 ea_=u32(r4(R+0)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B592f6c:{NFSU2_TR(0x592f6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B592f6f:{NFSU2_TR(0x592f6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B592f71:{NFSU2_TR(0x592f71);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x70ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x70ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B592f74:{NFSU2_TR(0x592f74);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B592f78:{NFSU2_TR(0x592f78);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B592f7b:{NFSU2_TR(0x592f7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B592f7f:{NFSU2_TR(0x592f7f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B592f83:{NFSU2_TR(0x592f83);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592f85:{NFSU2_TR(0x592f85);
__builtin_memmove((R+4),(R+24),4);
}
B592f87:{NFSU2_TR(0x592f87);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x592f8aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B592f8a:L592f8a:{c.instructions+=6;NFSU2_TR(0x592f8a);
__builtin_memmove((R+28),(R+0),4);
}
B592f8c:{NFSU2_TR(0x592f8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592f8f:{NFSU2_TR(0x592f8f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B592f92:{NFSU2_TR(0x592f92);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1f0ull))));
}
B592f98:{NFSU2_TR(0x592f98);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B592f9b:{NFSU2_TR(0x592f9b);
if(r1(R+518)){{goto L592faa;}}
}
B592f9d:L592f9d:{c.instructions+=3;NFSU2_TR(0x592f9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B592f9f:{NFSU2_TR(0x592f9f);
__builtin_memmove((R+4),(R+12),4);
}
B592fa1:{NFSU2_TR(0x592fa1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x592fa4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B592fa4:L592fa4:{c.instructions+=2;NFSU2_TR(0x592fa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B592fa7:{NFSU2_TR(0x592fa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B592faa:L592faa:{c.instructions+=3;NFSU2_TR(0x592faa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B592fac:{NFSU2_TR(0x592fac);
__builtin_memmove((R+4),(R+12),4);
}
B592fae:{NFSU2_TR(0x592fae);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x592fb1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B592fb1:L592fb1:{c.instructions+=21;NFSU2_TR(0x592fb1);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B592fb3:{NFSU2_TR(0x592fb3);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B592fb5:{NFSU2_TR(0x592fb5);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B592fba:{NFSU2_TR(0x592fba);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B592fbd:{NFSU2_TR(0x592fbd);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B592fc0:{NFSU2_TR(0x592fc0);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B592fc3:{NFSU2_TR(0x592fc3);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B592fc6:{NFSU2_TR(0x592fc6);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B592fca:{NFSU2_TR(0x592fca);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B592fcc:{NFSU2_TR(0x592fcc);
__asm__ volatile(".byte 0xd9,0xcb":::"memory");
}
B592fce:{NFSU2_TR(0x592fce);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B592fd2:{NFSU2_TR(0x592fd2);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B592fd4:{NFSU2_TR(0x592fd4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B592fd6:{NFSU2_TR(0x592fd6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B592fda:{NFSU2_TR(0x592fda);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B592fdc:{NFSU2_TR(0x592fdc);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B592fde:{NFSU2_TR(0x592fde);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B592fe4:{NFSU2_TR(0x592fe4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B592fe6:{NFSU2_TR(0x592fe6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B592fe8:{NFSU2_TR(0x592fe8);
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
B592feb:{NFSU2_TR(0x592feb);
if(r1(R+518)){{goto L592ff2;}}
}
B592fed:L592fed:{c.instructions+=1;NFSU2_TR(0x592fed);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B592ff2:L592ff2:{c.instructions+=4;NFSU2_TR(0x592ff2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B592ff4:{NFSU2_TR(0x592ff4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B592ff6:{NFSU2_TR(0x592ff6);
__builtin_memmove((R+4),(R+24),4);
}
B592ff8:{NFSU2_TR(0x592ff8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x592ffbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B592ffb:L592ffb:{c.instructions+=2;NFSU2_TR(0x592ffb);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B592fff:{NFSU2_TR(0x592fff);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
TAIL_STATIC(0x593005u,593);
}
XIT:NFSU2_TR_EXIT(0x592,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
