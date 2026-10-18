#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_403(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_48c(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_57e(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_60f(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_615(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_61c(u8* __restrict R,Cpu& c);
u32 body_61d(u8* __restrict R,Cpu& c);
u32 body_61f(u8* __restrict R,Cpu& c);
u32 body_631(u8* __restrict R,Cpu& c);
u32 body_634(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x633,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x633,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_633(u8* __restrict R,Cpu& c);
u32 page_633(Cpu& c){return body_633(c.regs.data(),c);}
__attribute__((noinline)) u32 body_633(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x633000:goto L633000;
case 0x633008:c.instructions+=25;goto B633008;
case 0x633010:c.instructions+=24;goto B633010;
case 0x63301b:c.instructions+=23;goto B63301b;
case 0x633022:c.instructions+=22;goto B633022;
case 0x63302d:c.instructions+=21;goto B63302d;
case 0x633038:c.instructions+=20;goto B633038;
case 0x633043:c.instructions+=19;goto B633043;
case 0x63304e:c.instructions+=18;goto B63304e;
case 0x633055:c.instructions+=17;goto B633055;
case 0x633060:c.instructions+=16;goto B633060;
case 0x63306b:c.instructions+=15;goto B63306b;
case 0x633076:c.instructions+=14;goto B633076;
case 0x633081:c.instructions+=13;goto B633081;
case 0x63308c:c.instructions+=12;goto B63308c;
case 0x633097:c.instructions+=11;goto B633097;
case 0x6330a2:c.instructions+=10;goto B6330a2;
case 0x6330a9:c.instructions+=9;goto B6330a9;
case 0x6330b1:c.instructions+=8;goto B6330b1;
case 0x6330b5:c.instructions+=7;goto B6330b5;
case 0x6330b9:c.instructions+=6;goto B6330b9;
case 0x6330bd:c.instructions+=5;goto B6330bd;
case 0x6330c1:c.instructions+=4;goto B6330c1;
case 0x6330c9:c.instructions+=3;goto B6330c9;
case 0x6330d1:c.instructions+=2;goto B6330d1;
case 0x6330d9:c.instructions+=1;goto B6330d9;
case 0x6330de:goto L6330de;
case 0x6330e0:c.instructions+=3;goto B6330e0;
case 0x6330e2:c.instructions+=2;goto B6330e2;
case 0x6330e6:c.instructions+=1;goto B6330e6;
case 0x6330eb:goto L6330eb;
case 0x6330ef:c.instructions+=3;goto B6330ef;
case 0x6330f2:c.instructions+=2;goto B6330f2;
case 0x6330f4:c.instructions+=1;goto B6330f4;
case 0x6330f6:goto L6330f6;
case 0x6330f8:c.instructions+=5;goto B6330f8;
case 0x6330fc:c.instructions+=4;goto B6330fc;
case 0x6330fd:c.instructions+=3;goto B6330fd;
case 0x6330ff:c.instructions+=2;goto B6330ff;
case 0x633100:c.instructions+=1;goto B633100;
case 0x633105:goto L633105;
case 0x633107:c.instructions+=3;goto B633107;
case 0x63310a:c.instructions+=2;goto B63310a;
case 0x63310c:c.instructions+=1;goto B63310c;
case 0x633112:goto L633112;
case 0x633114:c.instructions+=2;goto B633114;
case 0x63311a:c.instructions+=1;goto B63311a;
case 0x63311f:goto L63311f;
case 0x633121:c.instructions+=2;goto B633121;
case 0x633127:c.instructions+=1;goto B633127;
case 0x63312c:goto L63312c;
case 0x63312e:c.instructions+=2;goto B63312e;
case 0x633134:c.instructions+=1;goto B633134;
case 0x633139:goto L633139;
case 0x63313b:c.instructions+=2;goto B63313b;
case 0x633141:c.instructions+=1;goto B633141;
case 0x633146:goto L633146;
case 0x63314b:goto L63314b;
case 0x63314d:c.instructions+=1;goto B63314d;
case 0x633152:goto L633152;
case 0x633155:c.instructions+=3;goto B633155;
case 0x633157:c.instructions+=2;goto B633157;
case 0x633159:c.instructions+=1;goto B633159;
case 0x633160:goto L633160;
case 0x633164:c.instructions+=4;goto B633164;
case 0x633168:c.instructions+=3;goto B633168;
case 0x63316a:c.instructions+=2;goto B63316a;
case 0x63316c:c.instructions+=1;goto B63316c;
case 0x63316e:goto L63316e;
case 0x63316f:c.instructions+=2;goto B63316f;
case 0x633172:c.instructions+=1;goto B633172;
case 0x633174:goto L633174;
case 0x633176:c.instructions+=5;goto B633176;
case 0x63317a:c.instructions+=4;goto B63317a;
case 0x63317b:c.instructions+=3;goto B63317b;
case 0x63317c:c.instructions+=2;goto B63317c;
case 0x63317d:c.instructions+=1;goto B63317d;
case 0x633182:goto L633182;
case 0x633184:c.instructions+=2;goto B633184;
case 0x633188:c.instructions+=1;goto B633188;
case 0x63318d:goto L63318d;
case 0x633190:c.instructions+=2;goto B633190;
case 0x633192:c.instructions+=1;goto B633192;
case 0x633194:goto L633194;
case 0x633198:c.instructions+=4;goto B633198;
case 0x63319c:c.instructions+=3;goto B63319c;
case 0x63319e:c.instructions+=2;goto B63319e;
case 0x6331a0:c.instructions+=1;goto B6331a0;
case 0x6331a2:goto L6331a2;
case 0x6331a3:c.instructions+=2;goto B6331a3;
case 0x6331a6:c.instructions+=1;goto B6331a6;
case 0x6331a8:goto L6331a8;
case 0x6331aa:c.instructions+=5;goto B6331aa;
case 0x6331ae:c.instructions+=4;goto B6331ae;
case 0x6331af:c.instructions+=3;goto B6331af;
case 0x6331b0:c.instructions+=2;goto B6331b0;
case 0x6331b1:c.instructions+=1;goto B6331b1;
case 0x6331b6:goto L6331b6;
case 0x6331b8:c.instructions+=2;goto B6331b8;
case 0x6331ba:c.instructions+=1;goto B6331ba;
case 0x6331bf:goto L6331bf;
case 0x6331c3:c.instructions+=5;goto B6331c3;
case 0x6331c6:c.instructions+=4;goto B6331c6;
case 0x6331c8:c.instructions+=3;goto B6331c8;
case 0x6331ca:c.instructions+=2;goto B6331ca;
case 0x6331ce:c.instructions+=1;goto B6331ce;
case 0x6331d0:goto L6331d0;
case 0x6331d4:c.instructions+=4;goto B6331d4;
case 0x6331d8:c.instructions+=3;goto B6331d8;
case 0x6331da:c.instructions+=2;goto B6331da;
case 0x6331dc:c.instructions+=1;goto B6331dc;
case 0x6331de:goto L6331de;
case 0x6331df:c.instructions+=2;goto B6331df;
case 0x6331e2:c.instructions+=1;goto B6331e2;
case 0x6331e4:goto L6331e4;
case 0x6331e6:c.instructions+=5;goto B6331e6;
case 0x6331ea:c.instructions+=4;goto B6331ea;
case 0x6331eb:c.instructions+=3;goto B6331eb;
case 0x6331ec:c.instructions+=2;goto B6331ec;
case 0x6331ed:c.instructions+=1;goto B6331ed;
case 0x6331f2:goto L6331f2;
case 0x6331f4:c.instructions+=5;goto B6331f4;
case 0x6331f8:c.instructions+=4;goto B6331f8;
case 0x6331fb:c.instructions+=3;goto B6331fb;
case 0x6331fd:c.instructions+=2;goto B6331fd;
case 0x633203:c.instructions+=1;goto B633203;
case 0x633208:goto L633208;
case 0x63320a:c.instructions+=2;goto B63320a;
case 0x633210:c.instructions+=1;goto B633210;
case 0x633215:goto L633215;
case 0x633217:c.instructions+=2;goto B633217;
case 0x63321d:c.instructions+=1;goto B63321d;
case 0x633222:goto L633222;
case 0x633226:c.instructions+=2;goto B633226;
case 0x633227:c.instructions+=1;goto B633227;
case 0x63322c:goto L63322c;
case 0x633232:c.instructions+=2;goto B633232;
case 0x633233:c.instructions+=1;goto B633233;
case 0x633238:goto L633238;
case 0x63323b:c.instructions+=8;goto B63323b;
case 0x63323e:c.instructions+=7;goto B63323e;
case 0x633244:c.instructions+=6;goto B633244;
case 0x633248:c.instructions+=5;goto B633248;
case 0x63324d:c.instructions+=4;goto B63324d;
case 0x633251:c.instructions+=3;goto B633251;
case 0x633255:c.instructions+=2;goto B633255;
case 0x63325d:c.instructions+=1;goto B63325d;
case 0x633260:goto L633260;
case 0x633264:c.instructions+=11;goto B633264;
case 0x633267:c.instructions+=10;goto B633267;
case 0x633269:c.instructions+=9;goto B633269;
case 0x63326b:c.instructions+=8;goto B63326b;
case 0x63326c:c.instructions+=7;goto B63326c;
case 0x63326e:c.instructions+=6;goto B63326e;
case 0x633275:c.instructions+=5;goto B633275;
case 0x633276:c.instructions+=4;goto B633276;
case 0x633277:c.instructions+=3;goto B633277;
case 0x633278:c.instructions+=2;goto B633278;
case 0x63327d:c.instructions+=1;goto B63327d;
case 0x633282:goto L633282;
case 0x633285:c.instructions+=1;goto B633285;
case 0x633287:goto L633287;
case 0x63328a:c.instructions+=1;goto B63328a;
case 0x63328c:goto L63328c;
case 0x63328f:c.instructions+=1;goto B63328f;
case 0x633291:goto L633291;
case 0x633295:c.instructions+=3;goto B633295;
case 0x633297:c.instructions+=2;goto B633297;
case 0x633299:c.instructions+=1;goto B633299;
case 0x63329e:goto L63329e;
case 0x6332a2:c.instructions+=8;goto B6332a2;
case 0x6332a6:c.instructions+=7;goto B6332a6;
case 0x6332a9:c.instructions+=6;goto B6332a9;
case 0x6332ac:c.instructions+=5;goto B6332ac;
case 0x6332ad:c.instructions+=4;goto B6332ad;
case 0x6332ae:c.instructions+=3;goto B6332ae;
case 0x6332b2:c.instructions+=2;goto B6332b2;
case 0x6332b6:c.instructions+=1;goto B6332b6;
case 0x6332b8:goto L6332b8;
case 0x6332bc:c.instructions+=4;goto B6332bc;
case 0x6332c4:c.instructions+=3;goto B6332c4;
case 0x6332cc:c.instructions+=2;goto B6332cc;
case 0x6332d4:c.instructions+=1;goto B6332d4;
case 0x6332d6:goto L6332d6;
case 0x6332d8:c.instructions+=1;goto B6332d8;
case 0x6332dd:goto L6332dd;
case 0x6332e1:c.instructions+=8;goto B6332e1;
case 0x6332e5:c.instructions+=7;goto B6332e5;
case 0x6332e9:c.instructions+=6;goto B6332e9;
case 0x6332ec:c.instructions+=5;goto B6332ec;
case 0x6332ee:c.instructions+=4;goto B6332ee;
case 0x6332f2:c.instructions+=3;goto B6332f2;
case 0x6332f3:c.instructions+=2;goto B6332f3;
case 0x6332f6:c.instructions+=1;goto B6332f6;
case 0x6332f8:goto L6332f8;
case 0x6332fd:c.instructions+=2;goto B6332fd;
case 0x6332fe:c.instructions+=1;goto B6332fe;
case 0x633303:goto L633303;
case 0x63330a:c.instructions+=8;goto B63330a;
case 0x633310:c.instructions+=7;goto B633310;
case 0x633313:c.instructions+=6;goto B633313;
case 0x633317:c.instructions+=5;goto B633317;
case 0x63331c:c.instructions+=4;goto B63331c;
case 0x633320:c.instructions+=3;goto B633320;
case 0x633324:c.instructions+=2;goto B633324;
case 0x63332c:c.instructions+=1;goto B63332c;
case 0x633330:goto L633330;
case 0x633334:c.instructions+=11;goto B633334;
case 0x633337:c.instructions+=10;goto B633337;
case 0x633339:c.instructions+=9;goto B633339;
case 0x63333b:c.instructions+=8;goto B63333b;
case 0x63333d:c.instructions+=7;goto B63333d;
case 0x633344:c.instructions+=6;goto B633344;
case 0x633345:c.instructions+=5;goto B633345;
case 0x633346:c.instructions+=4;goto B633346;
case 0x633347:c.instructions+=3;goto B633347;
case 0x633348:c.instructions+=2;goto B633348;
case 0x63334d:c.instructions+=1;goto B63334d;
case 0x633352:goto L633352;
case 0x633355:c.instructions+=1;goto B633355;
case 0x633357:goto L633357;
case 0x63335a:c.instructions+=1;goto B63335a;
case 0x63335c:goto L63335c;
case 0x63335f:c.instructions+=1;goto B63335f;
case 0x633361:goto L633361;
case 0x633365:c.instructions+=3;goto B633365;
case 0x633367:c.instructions+=2;goto B633367;
case 0x633369:c.instructions+=1;goto B633369;
case 0x63336e:goto L63336e;
case 0x633372:c.instructions+=8;goto B633372;
case 0x633376:c.instructions+=7;goto B633376;
case 0x633379:c.instructions+=6;goto B633379;
case 0x63337c:c.instructions+=5;goto B63337c;
case 0x63337d:c.instructions+=4;goto B63337d;
case 0x63337e:c.instructions+=3;goto B63337e;
case 0x633382:c.instructions+=2;goto B633382;
case 0x633386:c.instructions+=1;goto B633386;
case 0x633388:goto L633388;
case 0x63338c:c.instructions+=4;goto B63338c;
case 0x633394:c.instructions+=3;goto B633394;
case 0x63339c:c.instructions+=2;goto B63339c;
case 0x6333a4:c.instructions+=1;goto B6333a4;
case 0x6333a6:goto L6333a6;
case 0x6333a8:c.instructions+=1;goto B6333a8;
case 0x6333ad:goto L6333ad;
case 0x6333b1:c.instructions+=8;goto B6333b1;
case 0x6333b5:c.instructions+=7;goto B6333b5;
case 0x6333b9:c.instructions+=6;goto B6333b9;
case 0x6333bc:c.instructions+=5;goto B6333bc;
case 0x6333be:c.instructions+=4;goto B6333be;
case 0x6333c2:c.instructions+=3;goto B6333c2;
case 0x6333c3:c.instructions+=2;goto B6333c3;
case 0x6333c6:c.instructions+=1;goto B6333c6;
case 0x6333c8:goto L6333c8;
case 0x6333cd:c.instructions+=2;goto B6333cd;
case 0x6333ce:c.instructions+=1;goto B6333ce;
case 0x6333d3:goto L6333d3;
case 0x6333da:c.instructions+=8;goto B6333da;
case 0x6333e0:c.instructions+=7;goto B6333e0;
case 0x6333e3:c.instructions+=6;goto B6333e3;
case 0x6333e7:c.instructions+=5;goto B6333e7;
case 0x6333ec:c.instructions+=4;goto B6333ec;
case 0x6333f0:c.instructions+=3;goto B6333f0;
case 0x6333f4:c.instructions+=2;goto B6333f4;
case 0x6333fc:c.instructions+=1;goto B6333fc;
case 0x633400:goto L633400;
case 0x633404:c.instructions+=11;goto B633404;
case 0x633407:c.instructions+=10;goto B633407;
case 0x633409:c.instructions+=9;goto B633409;
case 0x63340b:c.instructions+=8;goto B63340b;
case 0x63340d:c.instructions+=7;goto B63340d;
case 0x633414:c.instructions+=6;goto B633414;
case 0x633415:c.instructions+=5;goto B633415;
case 0x633416:c.instructions+=4;goto B633416;
case 0x633417:c.instructions+=3;goto B633417;
case 0x633418:c.instructions+=2;goto B633418;
case 0x63341d:c.instructions+=1;goto B63341d;
case 0x633422:goto L633422;
case 0x633425:c.instructions+=1;goto B633425;
case 0x633427:goto L633427;
case 0x63342a:c.instructions+=1;goto B63342a;
case 0x63342c:goto L63342c;
case 0x63342f:c.instructions+=1;goto B63342f;
case 0x633431:goto L633431;
case 0x633435:c.instructions+=3;goto B633435;
case 0x633437:c.instructions+=2;goto B633437;
case 0x633439:c.instructions+=1;goto B633439;
case 0x63343e:goto L63343e;
case 0x633442:c.instructions+=8;goto B633442;
case 0x633446:c.instructions+=7;goto B633446;
case 0x633449:c.instructions+=6;goto B633449;
case 0x63344c:c.instructions+=5;goto B63344c;
case 0x63344d:c.instructions+=4;goto B63344d;
case 0x63344e:c.instructions+=3;goto B63344e;
case 0x633452:c.instructions+=2;goto B633452;
case 0x633456:c.instructions+=1;goto B633456;
case 0x633458:goto L633458;
case 0x63345c:goto L63345c;
case 0x63345e:c.instructions+=1;goto B63345e;
case 0x633463:goto L633463;
case 0x633466:c.instructions+=3;goto B633466;
case 0x633468:c.instructions+=2;goto B633468;
case 0x63346a:c.instructions+=1;goto B63346a;
case 0x633470:goto L633470;
case 0x633478:c.instructions+=3;goto B633478;
case 0x63347a:c.instructions+=2;goto B63347a;
case 0x63347c:c.instructions+=1;goto B63347c;
case 0x63347e:goto L63347e;
case 0x63347f:c.instructions+=2;goto B63347f;
case 0x633482:c.instructions+=1;goto B633482;
case 0x633484:goto L633484;
case 0x633487:c.instructions+=1;goto B633487;
case 0x633489:goto L633489;
case 0x63348f:c.instructions+=4;goto B63348f;
case 0x633490:c.instructions+=3;goto B633490;
case 0x633491:c.instructions+=2;goto B633491;
case 0x633493:c.instructions+=1;goto B633493;
case 0x633498:goto L633498;
case 0x63349a:goto L63349a;
case 0x6334a0:c.instructions+=2;goto B6334a0;
case 0x6334a5:c.instructions+=1;goto B6334a5;
case 0x6334a7:goto L6334a7;
case 0x6334a9:c.instructions+=7;goto B6334a9;
case 0x6334aa:c.instructions+=6;goto B6334aa;
case 0x6334ab:c.instructions+=5;goto B6334ab;
case 0x6334ac:c.instructions+=4;goto B6334ac;
case 0x6334ad:c.instructions+=3;goto B6334ad;
case 0x6334ae:c.instructions+=2;goto B6334ae;
case 0x6334b3:c.instructions+=1;goto B6334b3;
case 0x6334b8:goto L6334b8;
case 0x6334be:c.instructions+=2;goto B6334be;
case 0x6334c1:c.instructions+=1;goto B6334c1;
case 0x6334c3:goto L6334c3;
case 0x6334c6:c.instructions+=1;goto B6334c6;
case 0x6334c8:goto L6334c8;
case 0x6334cb:c.instructions+=1;goto B6334cb;
case 0x6334cd:goto L6334cd;
case 0x6334d4:c.instructions+=1;goto B6334d4;
case 0x6334d6:goto L6334d6;
case 0x6334d9:c.instructions+=1;goto B6334d9;
case 0x6334db:goto L6334db;
case 0x6334de:c.instructions+=1;goto B6334de;
case 0x6334e0:goto L6334e0;
case 0x6334e3:c.instructions+=1;goto B6334e3;
case 0x6334e5:goto L6334e5;
case 0x6334ec:goto L6334ec;
case 0x6334ee:c.instructions+=1;goto B6334ee;
case 0x6334f3:goto L6334f3;
case 0x6334f9:c.instructions+=3;goto B6334f9;
case 0x6334fb:c.instructions+=2;goto B6334fb;
case 0x6334ff:c.instructions+=1;goto B6334ff;
case 0x633505:goto L633505;
case 0x63350b:c.instructions+=2;goto B63350b;
case 0x63350f:c.instructions+=1;goto B63350f;
case 0x633515:goto L633515;
case 0x63351a:c.instructions+=1;goto B63351a;
case 0x633520:goto L633520;
case 0x633524:c.instructions+=5;goto B633524;
case 0x633527:c.instructions+=4;goto B633527;
case 0x63352a:c.instructions+=3;goto B63352a;
case 0x63352c:c.instructions+=2;goto B63352c;
case 0x63352e:c.instructions+=1;goto B63352e;
case 0x633530:goto L633530;
case 0x633533:c.instructions+=2;goto B633533;
case 0x633534:c.instructions+=1;goto B633534;
case 0x633539:goto L633539;
case 0x63353b:c.instructions+=3;goto B63353b;
case 0x63353e:c.instructions+=2;goto B63353e;
case 0x63353f:c.instructions+=1;goto B63353f;
case 0x633544:goto L633544;
case 0x633548:c.instructions+=10;goto B633548;
case 0x63354a:c.instructions+=9;goto B63354a;
case 0x63354d:c.instructions+=8;goto B63354d;
case 0x63354f:c.instructions+=7;goto B63354f;
case 0x633550:c.instructions+=6;goto B633550;
case 0x633551:c.instructions+=5;goto B633551;
case 0x633553:c.instructions+=4;goto B633553;
case 0x633554:c.instructions+=3;goto B633554;
case 0x633559:c.instructions+=2;goto B633559;
case 0x63355d:c.instructions+=1;goto B63355d;
case 0x633562:goto L633562;
case 0x633564:c.instructions+=10;goto B633564;
case 0x633566:c.instructions+=9;goto B633566;
case 0x633568:c.instructions+=8;goto B633568;
case 0x63356c:c.instructions+=7;goto B63356c;
case 0x633570:c.instructions+=6;goto B633570;
case 0x633571:c.instructions+=5;goto B633571;
case 0x633572:c.instructions+=4;goto B633572;
case 0x633574:c.instructions+=3;goto B633574;
case 0x633575:c.instructions+=2;goto B633575;
case 0x63357a:c.instructions+=1;goto B63357a;
case 0x63357f:goto L63357f;
case 0x633581:c.instructions+=3;goto B633581;
case 0x633585:c.instructions+=2;goto B633585;
case 0x63358b:c.instructions+=1;goto B63358b;
case 0x633590:goto L633590;
case 0x633594:c.instructions+=3;goto B633594;
case 0x633596:c.instructions+=2;goto B633596;
case 0x63359c:c.instructions+=1;goto B63359c;
case 0x6335a1:goto L6335a1;
case 0x6335a5:goto L6335a5;
case 0x6335a9:c.instructions+=6;goto B6335a9;
case 0x6335af:c.instructions+=5;goto B6335af;
case 0x6335b0:c.instructions+=4;goto B6335b0;
case 0x6335b3:c.instructions+=3;goto B6335b3;
case 0x6335b5:c.instructions+=2;goto B6335b5;
case 0x6335b9:c.instructions+=1;goto B6335b9;
case 0x6335bf:goto L6335bf;
case 0x6335c0:c.instructions+=5;goto B6335c0;
case 0x6335c1:c.instructions+=4;goto B6335c1;
case 0x6335c2:c.instructions+=3;goto B6335c2;
case 0x6335c3:c.instructions+=2;goto B6335c3;
case 0x6335c9:c.instructions+=1;goto B6335c9;
case 0x6335d0:goto L6335d0;
case 0x6335d4:c.instructions+=18;goto B6335d4;
case 0x6335d5:c.instructions+=17;goto B6335d5;
case 0x6335d6:c.instructions+=16;goto B6335d6;
case 0x6335d8:c.instructions+=15;goto B6335d8;
case 0x6335dc:c.instructions+=14;goto B6335dc;
case 0x6335dd:c.instructions+=13;goto B6335dd;
case 0x6335de:c.instructions+=12;goto B6335de;
case 0x6335e4:c.instructions+=11;goto B6335e4;
case 0x6335e8:c.instructions+=10;goto B6335e8;
case 0x6335e9:c.instructions+=9;goto B6335e9;
case 0x6335eb:c.instructions+=8;goto B6335eb;
case 0x6335ec:c.instructions+=7;goto B6335ec;
case 0x6335ef:c.instructions+=6;goto B6335ef;
case 0x6335f0:c.instructions+=5;goto B6335f0;
case 0x6335f6:c.instructions+=4;goto B6335f6;
case 0x6335fc:c.instructions+=3;goto B6335fc;
case 0x633602:c.instructions+=2;goto B633602;
case 0x633608:c.instructions+=1;goto B633608;
case 0x63360d:goto L63360d;
case 0x633613:c.instructions+=5;goto B633613;
case 0x633619:c.instructions+=4;goto B633619;
case 0x63361f:c.instructions+=3;goto B63361f;
case 0x633621:c.instructions+=2;goto B633621;
case 0x633627:c.instructions+=1;goto B633627;
case 0x63362c:goto L63362c;
case 0x63362e:goto L63362e;
case 0x633631:c.instructions+=3;goto B633631;
case 0x633637:c.instructions+=2;goto B633637;
case 0x63363d:c.instructions+=1;goto B63363d;
case 0x633642:goto L633642;
case 0x633644:goto L633644;
case 0x633645:c.instructions+=4;goto B633645;
case 0x633647:c.instructions+=3;goto B633647;
case 0x633648:c.instructions+=2;goto B633648;
case 0x633649:c.instructions+=1;goto B633649;
case 0x633650:goto L633650;
case 0x633651:c.instructions+=16;goto B633651;
case 0x633653:c.instructions+=15;goto B633653;
case 0x633654:c.instructions+=14;goto B633654;
case 0x633655:c.instructions+=13;goto B633655;
case 0x633657:c.instructions+=12;goto B633657;
case 0x63365b:c.instructions+=11;goto B63365b;
case 0x63365f:c.instructions+=10;goto B63365f;
case 0x633663:c.instructions+=9;goto B633663;
case 0x633664:c.instructions+=8;goto B633664;
case 0x633666:c.instructions+=7;goto B633666;
case 0x633669:c.instructions+=6;goto B633669;
case 0x63366c:c.instructions+=5;goto B63366c;
case 0x63366f:c.instructions+=4;goto B63366f;
case 0x633670:c.instructions+=3;goto B633670;
case 0x633673:c.instructions+=2;goto B633673;
case 0x633678:c.instructions+=1;goto B633678;
case 0x63367a:goto L63367a;
case 0x63367c:goto L63367c;
case 0x63367e:c.instructions+=25;goto B63367e;
case 0x633681:c.instructions+=24;goto B633681;
case 0x633683:c.instructions+=23;goto B633683;
case 0x633686:c.instructions+=22;goto B633686;
case 0x633689:c.instructions+=21;goto B633689;
case 0x63368c:c.instructions+=20;goto B63368c;
case 0x63368e:c.instructions+=19;goto B63368e;
case 0x633691:c.instructions+=18;goto B633691;
case 0x633693:c.instructions+=17;goto B633693;
case 0x633696:c.instructions+=16;goto B633696;
case 0x633699:c.instructions+=15;goto B633699;
case 0x63369c:c.instructions+=14;goto B63369c;
case 0x63369f:c.instructions+=13;goto B63369f;
case 0x6336a1:c.instructions+=12;goto B6336a1;
case 0x6336a4:c.instructions+=11;goto B6336a4;
case 0x6336a7:c.instructions+=10;goto B6336a7;
case 0x6336aa:c.instructions+=9;goto B6336aa;
case 0x6336ad:c.instructions+=8;goto B6336ad;
case 0x6336af:c.instructions+=7;goto B6336af;
case 0x6336b2:c.instructions+=6;goto B6336b2;
case 0x6336b5:c.instructions+=5;goto B6336b5;
case 0x6336b8:c.instructions+=4;goto B6336b8;
case 0x6336bc:c.instructions+=3;goto B6336bc;
case 0x6336c2:c.instructions+=2;goto B6336c2;
case 0x6336c4:c.instructions+=1;goto B6336c4;
case 0x6336ca:goto L6336ca;
case 0x6336cd:c.instructions+=7;goto B6336cd;
case 0x6336d1:c.instructions+=6;goto B6336d1;
case 0x6336d4:c.instructions+=5;goto B6336d4;
case 0x6336d7:c.instructions+=4;goto B6336d7;
case 0x6336d9:c.instructions+=3;goto B6336d9;
case 0x6336dc:c.instructions+=2;goto B6336dc;
case 0x6336de:c.instructions+=1;goto B6336de;
case 0x6336e3:goto L6336e3;
case 0x6336e6:c.instructions+=5;goto B6336e6;
case 0x6336ea:c.instructions+=4;goto B6336ea;
case 0x6336f0:c.instructions+=3;goto B6336f0;
case 0x6336f3:c.instructions+=2;goto B6336f3;
case 0x6336f8:c.instructions+=1;goto B6336f8;
case 0x6336fd:goto L6336fd;
case 0x633700:c.instructions+=2;goto B633700;
case 0x633702:c.instructions+=1;goto B633702;
case 0x633708:goto L633708;
case 0x633710:c.instructions+=1;goto B633710;
case 0x633712:goto L633712;
case 0x633714:c.instructions+=2;goto B633714;
case 0x633718:c.instructions+=1;goto B633718;
case 0x633720:goto L633720;
case 0x633724:c.instructions+=2;goto B633724;
case 0x633728:c.instructions+=1;goto B633728;
case 0x63372a:goto L63372a;
case 0x63372c:c.instructions+=1;goto B63372c;
case 0x63372e:goto L63372e;
case 0x633731:c.instructions+=7;goto B633731;
case 0x633734:c.instructions+=6;goto B633734;
case 0x633739:c.instructions+=5;goto B633739;
case 0x63373c:c.instructions+=4;goto B63373c;
case 0x63373f:c.instructions+=3;goto B63373f;
case 0x633741:c.instructions+=2;goto B633741;
case 0x633744:c.instructions+=1;goto B633744;
case 0x633746:goto L633746;
case 0x63374b:c.instructions+=1;goto B63374b;
case 0x63374d:goto L63374d;
case 0x63374f:c.instructions+=1;goto B63374f;
case 0x633751:goto L633751;
case 0x633755:c.instructions+=3;goto B633755;
case 0x63375a:c.instructions+=2;goto B63375a;
case 0x63375d:c.instructions+=1;goto B63375d;
case 0x63375f:goto L63375f;
case 0x633761:c.instructions+=1;goto B633761;
case 0x633766:goto L633766;
case 0x63376a:c.instructions+=5;goto B63376a;
case 0x63376b:c.instructions+=4;goto B63376b;
case 0x63376c:c.instructions+=3;goto B63376c;
case 0x63376d:c.instructions+=2;goto B63376d;
case 0x63376f:c.instructions+=1;goto B63376f;
case 0x633774:goto L633774;
case 0x633778:goto L633778;
case 0x63377a:c.instructions+=5;goto B63377a;
case 0x63377b:c.instructions+=4;goto B63377b;
case 0x63377e:c.instructions+=3;goto B63377e;
case 0x633781:c.instructions+=2;goto B633781;
case 0x633785:c.instructions+=1;goto B633785;
case 0x633787:goto L633787;
case 0x63378b:c.instructions+=4;goto B63378b;
case 0x63378c:c.instructions+=3;goto B63378c;
case 0x63378f:c.instructions+=2;goto B63378f;
case 0x633793:c.instructions+=1;goto B633793;
case 0x633799:goto L633799;
case 0x63379c:c.instructions+=2;goto B63379c;
case 0x63379e:c.instructions+=1;goto B63379e;
case 0x6337a0:goto L6337a0;
case 0x6337a1:c.instructions+=2;goto B6337a1;
case 0x6337a6:c.instructions+=1;goto B6337a6;
case 0x6337ab:goto L6337ab;
case 0x6337ae:c.instructions+=8;goto B6337ae;
case 0x6337af:c.instructions+=7;goto B6337af;
case 0x6337b2:c.instructions+=6;goto B6337b2;
case 0x6337b3:c.instructions+=5;goto B6337b3;
case 0x6337b5:c.instructions+=4;goto B6337b5;
case 0x6337b6:c.instructions+=3;goto B6337b6;
case 0x6337b7:c.instructions+=2;goto B6337b7;
case 0x6337b8:c.instructions+=1;goto B6337b8;
case 0x6337bb:goto L6337bb;
case 0x6337bf:c.instructions+=2;goto B6337bf;
case 0x6337c3:c.instructions+=1;goto B6337c3;
case 0x6337c7:goto L6337c7;
case 0x6337c8:c.instructions+=6;goto B6337c8;
case 0x6337c9:c.instructions+=5;goto B6337c9;
case 0x6337cb:c.instructions+=4;goto B6337cb;
case 0x6337cc:c.instructions+=3;goto B6337cc;
case 0x6337cd:c.instructions+=2;goto B6337cd;
case 0x6337ce:c.instructions+=1;goto B6337ce;
case 0x6337e0:goto L6337e0;
case 0x6337e3:c.instructions+=19;goto B6337e3;
case 0x6337e7:c.instructions+=18;goto B6337e7;
case 0x6337e9:c.instructions+=17;goto B6337e9;
case 0x6337ea:c.instructions+=16;goto B6337ea;
case 0x6337eb:c.instructions+=15;goto B6337eb;
case 0x6337ef:c.instructions+=14;goto B6337ef;
case 0x6337f1:c.instructions+=13;goto B6337f1;
case 0x6337f3:c.instructions+=12;goto B6337f3;
case 0x6337f8:c.instructions+=11;goto B6337f8;
case 0x6337fb:c.instructions+=10;goto B6337fb;
case 0x6337fe:c.instructions+=9;goto B6337fe;
case 0x633800:c.instructions+=8;goto B633800;
case 0x633801:c.instructions+=7;goto B633801;
case 0x633802:c.instructions+=6;goto B633802;
case 0x633806:c.instructions+=5;goto B633806;
case 0x63380a:c.instructions+=4;goto B63380a;
case 0x633812:c.instructions+=3;goto B633812;
case 0x633816:c.instructions+=2;goto B633816;
case 0x63381a:c.instructions+=1;goto B63381a;
case 0x63381c:goto L63381c;
case 0x63381e:c.instructions+=4;goto B63381e;
case 0x633822:c.instructions+=3;goto B633822;
case 0x633826:c.instructions+=2;goto B633826;
case 0x63382e:c.instructions+=1;goto B63382e;
case 0x633830:goto L633830;
case 0x633834:goto L633834;
case 0x633838:c.instructions+=3;goto B633838;
case 0x63383a:c.instructions+=2;goto B63383a;
case 0x63383e:c.instructions+=1;goto B63383e;
case 0x633840:goto L633840;
case 0x633842:c.instructions+=1;goto B633842;
case 0x633848:goto L633848;
case 0x63384c:c.instructions+=2;goto B63384c;
case 0x633850:c.instructions+=1;goto B633850;
case 0x633856:goto L633856;
case 0x63385c:c.instructions+=7;goto B63385c;
case 0x63385f:c.instructions+=6;goto B63385f;
case 0x633862:c.instructions+=5;goto B633862;
case 0x633865:c.instructions+=4;goto B633865;
case 0x633868:c.instructions+=3;goto B633868;
case 0x63386b:c.instructions+=2;goto B63386b;
case 0x63386d:c.instructions+=1;goto B63386d;
case 0x63386f:goto L63386f;
case 0x633874:c.instructions+=1;goto B633874;
case 0x633876:goto L633876;
case 0x633878:c.instructions+=1;goto B633878;
case 0x63387a:goto L63387a;
case 0x63387e:c.instructions+=3;goto B63387e;
case 0x633884:c.instructions+=2;goto B633884;
case 0x633887:c.instructions+=1;goto B633887;
case 0x633889:goto L633889;
case 0x63388e:goto L63388e;
case 0x633892:c.instructions+=5;goto B633892;
case 0x633894:c.instructions+=4;goto B633894;
case 0x633898:c.instructions+=3;goto B633898;
case 0x63389b:c.instructions+=2;goto B63389b;
case 0x63389f:c.instructions+=1;goto B63389f;
case 0x6338a5:goto L6338a5;
case 0x6338a8:c.instructions+=1;goto B6338a8;
case 0x6338aa:goto L6338aa;
case 0x6338ac:c.instructions+=1;goto B6338ac;
case 0x6338ae:goto L6338ae;
case 0x6338b0:c.instructions+=7;goto B6338b0;
case 0x6338b3:c.instructions+=6;goto B6338b3;
case 0x6338b7:c.instructions+=5;goto B6338b7;
case 0x6338bb:c.instructions+=4;goto B6338bb;
case 0x6338c0:c.instructions+=3;goto B6338c0;
case 0x6338c5:c.instructions+=2;goto B6338c5;
case 0x6338ca:c.instructions+=1;goto B6338ca;
case 0x6338cc:goto L6338cc;
case 0x6338cd:c.instructions+=6;goto B6338cd;
case 0x6338d2:c.instructions+=5;goto B6338d2;
case 0x6338d5:c.instructions+=4;goto B6338d5;
case 0x6338d8:c.instructions+=3;goto B6338d8;
case 0x6338db:c.instructions+=2;goto B6338db;
case 0x6338dc:c.instructions+=1;goto B6338dc;
case 0x6338e1:goto L6338e1;
case 0x6338e4:goto L6338e4;
case 0x6338e5:c.instructions+=3;goto B6338e5;
case 0x6338e7:c.instructions+=2;goto B6338e7;
case 0x6338e8:c.instructions+=1;goto B6338e8;
case 0x6338ed:goto L6338ed;
case 0x6338ee:c.instructions+=3;goto B6338ee;
case 0x6338f2:c.instructions+=2;goto B6338f2;
case 0x6338f3:c.instructions+=1;goto B6338f3;
case 0x6338f8:goto L6338f8;
case 0x6338fb:goto L6338fb;
case 0x6338fd:c.instructions+=1;goto B6338fd;
case 0x6338ff:goto L6338ff;
case 0x633905:c.instructions+=1;goto B633905;
case 0x633907:goto L633907;
case 0x633909:c.instructions+=2;goto B633909;
case 0x63390b:c.instructions+=1;goto B63390b;
case 0x63390d:goto L63390d;
case 0x633911:c.instructions+=1;goto B633911;
case 0x633914:goto L633914;
case 0x633916:c.instructions+=1;goto B633916;
case 0x633918:goto L633918;
case 0x633919:c.instructions+=3;goto B633919;
case 0x63391c:c.instructions+=2;goto B63391c;
case 0x63391e:c.instructions+=1;goto B63391e;
case 0x633920:goto L633920;
case 0x633922:c.instructions+=1;goto B633922;
case 0x633924:goto L633924;
case 0x633928:c.instructions+=4;goto B633928;
case 0x63392a:c.instructions+=3;goto B63392a;
case 0x63392b:c.instructions+=2;goto B63392b;
case 0x63392e:c.instructions+=1;goto B63392e;
case 0x633932:goto L633932;
case 0x633936:goto L633936;
case 0x633937:c.instructions+=2;goto B633937;
case 0x63393a:c.instructions+=1;goto B63393a;
case 0x633940:goto L633940;
case 0x633944:c.instructions+=4;goto B633944;
case 0x633947:c.instructions+=3;goto B633947;
case 0x63394a:c.instructions+=2;goto B63394a;
case 0x63394e:c.instructions+=1;goto B63394e;
case 0x633954:goto L633954;
case 0x633958:c.instructions+=6;goto B633958;
case 0x63395c:c.instructions+=5;goto B63395c;
case 0x63395f:c.instructions+=4;goto B63395f;
case 0x633960:c.instructions+=3;goto B633960;
case 0x633964:c.instructions+=2;goto B633964;
case 0x633968:c.instructions+=1;goto B633968;
case 0x63396e:goto L63396e;
case 0x633973:c.instructions+=1;goto B633973;
case 0x633978:goto L633978;
case 0x63397c:c.instructions+=4;goto B63397c;
case 0x633980:c.instructions+=3;goto B633980;
case 0x633985:c.instructions+=2;goto B633985;
case 0x633986:c.instructions+=1;goto B633986;
case 0x63398b:goto L63398b;
case 0x63398f:c.instructions+=3;goto B63398f;
case 0x633994:c.instructions+=2;goto B633994;
case 0x633995:c.instructions+=1;goto B633995;
case 0x63399a:goto L63399a;
case 0x63399e:c.instructions+=3;goto B63399e;
case 0x6339a3:c.instructions+=2;goto B6339a3;
case 0x6339a4:c.instructions+=1;goto B6339a4;
case 0x6339a9:goto L6339a9;
case 0x6339ad:c.instructions+=3;goto B6339ad;
case 0x6339b2:c.instructions+=2;goto B6339b2;
case 0x6339b3:c.instructions+=1;goto B6339b3;
case 0x6339b8:goto L6339b8;
case 0x6339bc:c.instructions+=3;goto B6339bc;
case 0x6339c1:c.instructions+=2;goto B6339c1;
case 0x6339c2:c.instructions+=1;goto B6339c2;
case 0x6339c7:goto L6339c7;
case 0x6339ca:c.instructions+=4;goto B6339ca;
case 0x6339ce:c.instructions+=3;goto B6339ce;
case 0x6339cf:c.instructions+=2;goto B6339cf;
case 0x6339d5:c.instructions+=1;goto B6339d5;
case 0x6339d7:goto L6339d7;
case 0x6339d9:c.instructions+=8;goto B6339d9;
case 0x6339da:c.instructions+=7;goto B6339da;
case 0x6339dd:c.instructions+=6;goto B6339dd;
case 0x6339df:c.instructions+=5;goto B6339df;
case 0x6339e0:c.instructions+=4;goto B6339e0;
case 0x6339e1:c.instructions+=3;goto B6339e1;
case 0x6339e2:c.instructions+=2;goto B6339e2;
case 0x6339e5:c.instructions+=1;goto B6339e5;
case 0x6339e8:goto L6339e8;
case 0x6339e9:c.instructions+=7;goto B6339e9;
case 0x6339ec:c.instructions+=6;goto B6339ec;
case 0x6339ee:c.instructions+=5;goto B6339ee;
case 0x6339ef:c.instructions+=4;goto B6339ef;
case 0x6339f0:c.instructions+=3;goto B6339f0;
case 0x6339f1:c.instructions+=2;goto B6339f1;
case 0x6339f4:c.instructions+=1;goto B6339f4;
case 0x633a00:goto L633a00;
case 0x633a05:c.instructions+=6;goto B633a05;
case 0x633a08:c.instructions+=5;goto B633a08;
case 0x633a0b:c.instructions+=4;goto B633a0b;
case 0x633a0e:c.instructions+=3;goto B633a0e;
case 0x633a14:c.instructions+=2;goto B633a14;
case 0x633a17:c.instructions+=1;goto B633a17;
case 0x633a19:goto L633a19;
case 0x633a1a:c.instructions+=1;goto B633a1a;
case 0x633a1f:goto L633a1f;
case 0x633a24:goto L633a24;
case 0x633a26:c.instructions+=1;goto B633a26;
case 0x633a28:goto L633a28;
case 0x633a2d:goto L633a2d;
case 0x633a32:goto L633a32;
case 0x633a34:c.instructions+=1;goto B633a34;
case 0x633a36:goto L633a36;
case 0x633a40:goto L633a40;
case 0x633a41:c.instructions+=19;goto B633a41;
case 0x633a43:c.instructions+=18;goto B633a43;
case 0x633a44:c.instructions+=17;goto B633a44;
case 0x633a48:c.instructions+=16;goto B633a48;
case 0x633a4b:c.instructions+=15;goto B633a4b;
case 0x633a4d:c.instructions+=14;goto B633a4d;
case 0x633a50:c.instructions+=13;goto B633a50;
case 0x633a53:c.instructions+=12;goto B633a53;
case 0x633a56:c.instructions+=11;goto B633a56;
case 0x633a59:c.instructions+=10;goto B633a59;
case 0x633a5c:c.instructions+=9;goto B633a5c;
case 0x633a5d:c.instructions+=8;goto B633a5d;
case 0x633a60:c.instructions+=7;goto B633a60;
case 0x633a63:c.instructions+=6;goto B633a63;
case 0x633a64:c.instructions+=5;goto B633a64;
case 0x633a67:c.instructions+=4;goto B633a67;
case 0x633a6a:c.instructions+=3;goto B633a6a;
case 0x633a6b:c.instructions+=2;goto B633a6b;
case 0x633a6e:c.instructions+=1;goto B633a6e;
case 0x633a73:goto L633a73;
case 0x633a79:c.instructions+=12;goto B633a79;
case 0x633a7f:c.instructions+=11;goto B633a7f;
case 0x633a85:c.instructions+=10;goto B633a85;
case 0x633a8b:c.instructions+=9;goto B633a8b;
case 0x633a91:c.instructions+=8;goto B633a91;
case 0x633a97:c.instructions+=7;goto B633a97;
case 0x633a9d:c.instructions+=6;goto B633a9d;
case 0x633aa3:c.instructions+=5;goto B633aa3;
case 0x633aa9:c.instructions+=4;goto B633aa9;
case 0x633aaf:c.instructions+=3;goto B633aaf;
case 0x633ab5:c.instructions+=2;goto B633ab5;
case 0x633abb:c.instructions+=1;goto B633abb;
case 0x633ac0:goto L633ac0;
case 0x633ac2:goto L633ac2;
case 0x633ac8:c.instructions+=2;goto B633ac8;
case 0x633ace:c.instructions+=1;goto B633ace;
case 0x633ad3:goto L633ad3;
case 0x633ad5:goto L633ad5;
case 0x633ad7:c.instructions+=10;goto B633ad7;
case 0x633add:c.instructions+=9;goto B633add;
case 0x633ade:c.instructions+=8;goto B633ade;
case 0x633ae4:c.instructions+=7;goto B633ae4;
case 0x633aea:c.instructions+=6;goto B633aea;
case 0x633aeb:c.instructions+=5;goto B633aeb;
case 0x633af1:c.instructions+=4;goto B633af1;
case 0x633af2:c.instructions+=3;goto B633af2;
case 0x633af4:c.instructions+=2;goto B633af4;
case 0x633af5:c.instructions+=1;goto B633af5;
case 0x633b00:goto L633b00;
case 0x633b06:c.instructions+=12;goto B633b06;
case 0x633b08:c.instructions+=11;goto B633b08;
case 0x633b0d:c.instructions+=10;goto B633b0d;
case 0x633b0e:c.instructions+=9;goto B633b0e;
case 0x633b15:c.instructions+=8;goto B633b15;
case 0x633b16:c.instructions+=7;goto B633b16;
case 0x633b17:c.instructions+=6;goto B633b17;
case 0x633b1b:c.instructions+=5;goto B633b1b;
case 0x633b1c:c.instructions+=4;goto B633b1c;
case 0x633b1d:c.instructions+=3;goto B633b1d;
case 0x633b1e:c.instructions+=2;goto B633b1e;
case 0x633b20:c.instructions+=1;goto B633b20;
case 0x633b25:goto L633b25;
case 0x633b27:c.instructions+=2;goto B633b27;
case 0x633b29:c.instructions+=1;goto B633b29;
case 0x633b2b:goto L633b2b;
case 0x633b30:c.instructions+=2;goto B633b30;
case 0x633b31:c.instructions+=1;goto B633b31;
case 0x633b36:goto L633b36;
case 0x633b38:c.instructions+=5;goto B633b38;
case 0x633b3b:c.instructions+=4;goto B633b3b;
case 0x633b3f:c.instructions+=3;goto B633b3f;
case 0x633b41:c.instructions+=2;goto B633b41;
case 0x633b45:c.instructions+=1;goto B633b45;
case 0x633b47:goto L633b47;
case 0x633b4a:c.instructions+=3;goto B633b4a;
case 0x633b4b:c.instructions+=2;goto B633b4b;
case 0x633b4c:c.instructions+=1;goto B633b4c;
case 0x633b51:goto L633b51;
case 0x633b54:c.instructions+=6;goto B633b54;
case 0x633b57:c.instructions+=5;goto B633b57;
case 0x633b5a:c.instructions+=4;goto B633b5a;
case 0x633b5e:c.instructions+=3;goto B633b5e;
case 0x633b61:c.instructions+=2;goto B633b61;
case 0x633b63:c.instructions+=1;goto B633b63;
case 0x633b65:goto L633b65;
case 0x633b67:goto L633b67;
case 0x633b6a:c.instructions+=5;goto B633b6a;
case 0x633b6d:c.instructions+=4;goto B633b6d;
case 0x633b6f:c.instructions+=3;goto B633b6f;
case 0x633b72:c.instructions+=2;goto B633b72;
case 0x633b75:c.instructions+=1;goto B633b75;
case 0x633b77:goto L633b77;
case 0x633b7b:c.instructions+=8;goto B633b7b;
case 0x633b7f:c.instructions+=7;goto B633b7f;
case 0x633b80:c.instructions+=6;goto B633b80;
case 0x633b81:c.instructions+=5;goto B633b81;
case 0x633b82:c.instructions+=4;goto B633b82;
case 0x633b89:c.instructions+=3;goto B633b89;
case 0x633b8a:c.instructions+=2;goto B633b8a;
case 0x633b8d:c.instructions+=1;goto B633b8d;
case 0x633b90:goto L633b90;
case 0x633b96:c.instructions+=10;goto B633b96;
case 0x633b98:c.instructions+=9;goto B633b98;
case 0x633b9d:c.instructions+=8;goto B633b9d;
case 0x633b9e:c.instructions+=7;goto B633b9e;
case 0x633ba5:c.instructions+=6;goto B633ba5;
case 0x633ba6:c.instructions+=5;goto B633ba6;
case 0x633ba7:c.instructions+=4;goto B633ba7;
case 0x633bab:c.instructions+=3;goto B633bab;
case 0x633bac:c.instructions+=2;goto B633bac;
case 0x633bae:c.instructions+=1;goto B633bae;
case 0x633bb3:goto L633bb3;
case 0x633bb5:c.instructions+=1;goto B633bb5;
case 0x633bb7:goto L633bb7;
case 0x633bbc:c.instructions+=2;goto B633bbc;
case 0x633bbd:c.instructions+=1;goto B633bbd;
case 0x633bc2:goto L633bc2;
case 0x633bc5:c.instructions+=4;goto B633bc5;
case 0x633bc9:c.instructions+=3;goto B633bc9;
case 0x633bcb:c.instructions+=2;goto B633bcb;
case 0x633bd3:c.instructions+=1;goto B633bd3;
case 0x633bd5:goto L633bd5;
case 0x633bd9:c.instructions+=4;goto B633bd9;
case 0x633bda:c.instructions+=3;goto B633bda;
case 0x633bdb:c.instructions+=2;goto B633bdb;
case 0x633bdd:c.instructions+=1;goto B633bdd;
case 0x633be2:goto L633be2;
case 0x633be4:goto L633be4;
case 0x633be6:goto L633be6;
case 0x633be9:c.instructions+=5;goto B633be9;
case 0x633bec:c.instructions+=4;goto B633bec;
case 0x633bee:c.instructions+=3;goto B633bee;
case 0x633bf1:c.instructions+=2;goto B633bf1;
case 0x633bf4:c.instructions+=1;goto B633bf4;
case 0x633bf6:goto L633bf6;
case 0x633bfa:c.instructions+=6;goto B633bfa;
case 0x633bfe:c.instructions+=5;goto B633bfe;
case 0x633bff:c.instructions+=4;goto B633bff;
case 0x633c06:c.instructions+=3;goto B633c06;
case 0x633c07:c.instructions+=2;goto B633c07;
case 0x633c0a:c.instructions+=1;goto B633c0a;
case 0x633c10:goto L633c10;
case 0x633c11:c.instructions+=4;goto B633c11;
case 0x633c15:c.instructions+=3;goto B633c15;
case 0x633c1b:c.instructions+=2;goto B633c1b;
case 0x633c1c:c.instructions+=1;goto B633c1c;
case 0x633c21:goto L633c21;
case 0x633c24:c.instructions+=3;goto B633c24;
case 0x633c2b:c.instructions+=2;goto B633c2b;
case 0x633c2c:c.instructions+=1;goto B633c2c;
case 0x633c30:goto L633c30;
case 0x633c33:c.instructions+=10;goto B633c33;
case 0x633c37:c.instructions+=9;goto B633c37;
case 0x633c38:c.instructions+=8;goto B633c38;
case 0x633c39:c.instructions+=7;goto B633c39;
case 0x633c3a:c.instructions+=6;goto B633c3a;
case 0x633c3c:c.instructions+=5;goto B633c3c;
case 0x633c3e:c.instructions+=4;goto B633c3e;
case 0x633c3f:c.instructions+=3;goto B633c3f;
case 0x633c43:c.instructions+=2;goto B633c43;
case 0x633c47:c.instructions+=1;goto B633c47;
case 0x633c49:goto L633c49;
case 0x633c4a:c.instructions+=2;goto B633c4a;
case 0x633c4f:c.instructions+=1;goto B633c4f;
case 0x633c54:goto L633c54;
case 0x633c58:c.instructions+=1;goto B633c58;
case 0x633c5a:goto L633c5a;
case 0x633c5e:c.instructions+=4;goto B633c5e;
case 0x633c60:c.instructions+=3;goto B633c60;
case 0x633c62:c.instructions+=2;goto B633c62;
case 0x633c64:c.instructions+=1;goto B633c64;
case 0x633c6a:goto L633c6a;
case 0x633c70:goto L633c70;
case 0x633c74:c.instructions+=3;goto B633c74;
case 0x633c77:c.instructions+=2;goto B633c77;
case 0x633c79:c.instructions+=1;goto B633c79;
case 0x633c7b:goto L633c7b;
case 0x633c7d:c.instructions+=1;goto B633c7d;
case 0x633c7f:goto L633c7f;
case 0x633c80:c.instructions+=2;goto B633c80;
case 0x633c85:c.instructions+=1;goto B633c85;
case 0x633c8a:goto L633c8a;
case 0x633c8c:c.instructions+=1;goto B633c8c;
case 0x633c8e:goto L633c8e;
case 0x633c92:c.instructions+=4;goto B633c92;
case 0x633c95:c.instructions+=3;goto B633c95;
case 0x633c98:c.instructions+=2;goto B633c98;
case 0x633c9a:c.instructions+=1;goto B633c9a;
case 0x633c9c:goto L633c9c;
case 0x633ca0:goto L633ca0;
case 0x633ca3:c.instructions+=1;goto B633ca3;
case 0x633ca5:goto L633ca5;
case 0x633ca7:c.instructions+=2;goto B633ca7;
case 0x633ca9:c.instructions+=1;goto B633ca9;
case 0x633cab:goto L633cab;
case 0x633cb1:c.instructions+=2;goto B633cb1;
case 0x633cb2:c.instructions+=1;goto B633cb2;
case 0x633cb7:goto L633cb7;
case 0x633cba:c.instructions+=2;goto B633cba;
case 0x633cbc:c.instructions+=1;goto B633cbc;
case 0x633cbe:goto L633cbe;
case 0x633cc1:c.instructions+=4;goto B633cc1;
case 0x633cc7:c.instructions+=3;goto B633cc7;
case 0x633ccb:c.instructions+=2;goto B633ccb;
case 0x633ccf:c.instructions+=1;goto B633ccf;
case 0x633cd1:goto L633cd1;
case 0x633cd3:goto L633cd3;
case 0x633cd6:c.instructions+=4;goto B633cd6;
case 0x633cd8:c.instructions+=3;goto B633cd8;
case 0x633cdb:c.instructions+=2;goto B633cdb;
case 0x633cde:c.instructions+=1;goto B633cde;
case 0x633ce0:goto L633ce0;
case 0x633ce4:c.instructions+=4;goto B633ce4;
case 0x633ce8:c.instructions+=3;goto B633ce8;
case 0x633cec:c.instructions+=2;goto B633cec;
case 0x633cef:c.instructions+=1;goto B633cef;
case 0x633cf0:goto L633cf0;
case 0x633cf4:c.instructions+=3;goto B633cf4;
case 0x633cf5:c.instructions+=2;goto B633cf5;
case 0x633cf7:c.instructions+=1;goto B633cf7;
case 0x633cfd:goto L633cfd;
case 0x633d01:c.instructions+=2;goto B633d01;
case 0x633d03:c.instructions+=1;goto B633d03;
case 0x633d05:goto L633d05;
case 0x633d09:c.instructions+=3;goto B633d09;
case 0x633d0c:c.instructions+=2;goto B633d0c;
case 0x633d0e:c.instructions+=1;goto B633d0e;
case 0x633d10:goto L633d10;
case 0x633d12:goto L633d12;
case 0x633d13:c.instructions+=6;goto B633d13;
case 0x633d14:c.instructions+=5;goto B633d14;
case 0x633d16:c.instructions+=4;goto B633d16;
case 0x633d17:c.instructions+=3;goto B633d17;
case 0x633d18:c.instructions+=2;goto B633d18;
case 0x633d1b:c.instructions+=1;goto B633d1b;
case 0x633d20:goto L633d20;
case 0x633d24:c.instructions+=11;goto B633d24;
case 0x633d28:c.instructions+=10;goto B633d28;
case 0x633d2c:c.instructions+=9;goto B633d2c;
case 0x633d2d:c.instructions+=8;goto B633d2d;
case 0x633d31:c.instructions+=7;goto B633d31;
case 0x633d32:c.instructions+=6;goto B633d32;
case 0x633d36:c.instructions+=5;goto B633d36;
case 0x633d37:c.instructions+=4;goto B633d37;
case 0x633d38:c.instructions+=3;goto B633d38;
case 0x633d39:c.instructions+=2;goto B633d39;
case 0x633d3d:c.instructions+=1;goto B633d3d;
case 0x633d42:goto L633d42;
case 0x633d50:goto L633d50;
case 0x633d53:c.instructions+=5;goto B633d53;
case 0x633d54:c.instructions+=4;goto B633d54;
case 0x633d56:c.instructions+=3;goto B633d56;
case 0x633d5c:c.instructions+=2;goto B633d5c;
case 0x633d5e:c.instructions+=1;goto B633d5e;
case 0x633d60:goto L633d60;
case 0x633d64:c.instructions+=4;goto B633d64;
case 0x633d68:c.instructions+=3;goto B633d68;
case 0x633d6c:c.instructions+=2;goto B633d6c;
case 0x633d72:c.instructions+=1;goto B633d72;
case 0x633d74:goto L633d74;
case 0x633d7a:goto L633d7a;
case 0x633d7e:c.instructions+=8;goto B633d7e;
case 0x633d82:c.instructions+=7;goto B633d82;
case 0x633d86:c.instructions+=6;goto B633d86;
case 0x633d8c:c.instructions+=5;goto B633d8c;
case 0x633d90:c.instructions+=4;goto B633d90;
case 0x633d94:c.instructions+=3;goto B633d94;
case 0x633d96:c.instructions+=2;goto B633d96;
case 0x633d99:c.instructions+=1;goto B633d99;
case 0x633d9f:goto L633d9f;
case 0x633da1:c.instructions+=1;goto B633da1;
case 0x633da3:goto L633da3;
case 0x633da7:c.instructions+=4;goto B633da7;
case 0x633dab:c.instructions+=3;goto B633dab;
case 0x633daf:c.instructions+=2;goto B633daf;
case 0x633db5:c.instructions+=1;goto B633db5;
case 0x633db7:goto L633db7;
case 0x633dbd:goto L633dbd;
case 0x633dc1:c.instructions+=5;goto B633dc1;
case 0x633dc3:c.instructions+=4;goto B633dc3;
case 0x633dc9:c.instructions+=3;goto B633dc9;
case 0x633dcb:c.instructions+=2;goto B633dcb;
case 0x633dce:c.instructions+=1;goto B633dce;
case 0x633dd0:goto L633dd0;
case 0x633dd2:c.instructions+=1;goto B633dd2;
case 0x633dd4:goto L633dd4;
case 0x633dd8:c.instructions+=7;goto B633dd8;
case 0x633ddc:c.instructions+=6;goto B633ddc;
case 0x633de0:c.instructions+=5;goto B633de0;
case 0x633de6:c.instructions+=4;goto B633de6;
case 0x633dec:c.instructions+=3;goto B633dec;
case 0x633dee:c.instructions+=2;goto B633dee;
case 0x633df1:c.instructions+=1;goto B633df1;
case 0x633df3:goto L633df3;
case 0x633df6:c.instructions+=4;goto B633df6;
case 0x633df7:c.instructions+=3;goto B633df7;
case 0x633df9:c.instructions+=2;goto B633df9;
case 0x633dfb:c.instructions+=1;goto B633dfb;
case 0x633dfd:goto L633dfd;
case 0x633dfe:c.instructions+=1;goto B633dfe;
case 0x633e01:goto L633e01;
case 0x633e04:c.instructions+=2;goto B633e04;
case 0x633e06:c.instructions+=1;goto B633e06;
case 0x633e08:goto L633e08;
case 0x633e0b:c.instructions+=1;goto B633e0b;
case 0x633e10:goto L633e10;
case 0x633e13:c.instructions+=7;goto B633e13;
case 0x633e18:c.instructions+=6;goto B633e18;
case 0x633e1b:c.instructions+=5;goto B633e1b;
case 0x633e1c:c.instructions+=4;goto B633e1c;
case 0x633e1d:c.instructions+=3;goto B633e1d;
case 0x633e23:c.instructions+=2;goto B633e23;
case 0x633e2a:c.instructions+=1;goto B633e2a;
case 0x633e2f:goto L633e2f;
case 0x633e32:goto L633e32;
case 0x633e35:c.instructions+=4;goto B633e35;
case 0x633e36:c.instructions+=3;goto B633e36;
case 0x633e39:c.instructions+=2;goto B633e39;
case 0x633e3b:c.instructions+=1;goto B633e3b;
case 0x633e3d:goto L633e3d;
case 0x633e3e:goto L633e3e;
case 0x633e40:c.instructions+=2;goto B633e40;
case 0x633e42:c.instructions+=1;goto B633e42;
case 0x633e43:goto L633e43;
case 0x633e49:c.instructions+=2;goto B633e49;
case 0x633e4b:c.instructions+=1;goto B633e4b;
case 0x633e4d:goto L633e4d;
case 0x633e52:c.instructions+=1;goto B633e52;
case 0x633e54:goto L633e54;
case 0x633e56:goto L633e56;
case 0x633e58:c.instructions+=4;goto B633e58;
case 0x633e5c:c.instructions+=3;goto B633e5c;
case 0x633e5d:c.instructions+=2;goto B633e5d;
case 0x633e60:c.instructions+=1;goto B633e60;
case 0x633e62:goto L633e62;
case 0x633e66:goto L633e66;
case 0x633e67:c.instructions+=2;goto B633e67;
case 0x633e6a:c.instructions+=1;goto B633e6a;
case 0x633e70:goto L633e70;
case 0x633e71:c.instructions+=7;goto B633e71;
case 0x633e72:c.instructions+=6;goto B633e72;
case 0x633e73:c.instructions+=5;goto B633e73;
case 0x633e75:c.instructions+=4;goto B633e75;
case 0x633e78:c.instructions+=3;goto B633e78;
case 0x633e7a:c.instructions+=2;goto B633e7a;
case 0x633e7f:c.instructions+=1;goto B633e7f;
case 0x633e81:goto L633e81;
case 0x633e84:c.instructions+=4;goto B633e84;
case 0x633e86:c.instructions+=3;goto B633e86;
case 0x633e89:c.instructions+=2;goto B633e89;
case 0x633e8a:c.instructions+=1;goto B633e8a;
case 0x633e8c:goto L633e8c;
case 0x633e90:c.instructions+=3;goto B633e90;
case 0x633e92:c.instructions+=2;goto B633e92;
case 0x633e94:c.instructions+=1;goto B633e94;
case 0x633e96:goto L633e96;
case 0x633e99:c.instructions+=1;goto B633e99;
case 0x633e9b:goto L633e9b;
case 0x633e9d:goto L633e9d;
case 0x633e9e:c.instructions+=2;goto B633e9e;
case 0x633ea1:c.instructions+=1;goto B633ea1;
case 0x633ea6:goto L633ea6;
case 0x633ea8:c.instructions+=3;goto B633ea8;
case 0x633eaa:c.instructions+=2;goto B633eaa;
case 0x633ead:c.instructions+=1;goto B633ead;
case 0x633eaf:goto L633eaf;
case 0x633eb1:c.instructions+=2;goto B633eb1;
case 0x633eb3:c.instructions+=1;goto B633eb3;
case 0x633eb5:goto L633eb5;
case 0x633eb7:goto L633eb7;
case 0x633eba:c.instructions+=2;goto B633eba;
case 0x633ebb:c.instructions+=1;goto B633ebb;
case 0x633ebd:goto L633ebd;
case 0x633ebf:c.instructions+=1;goto B633ebf;
case 0x633ec0:goto L633ec0;
case 0x633ec2:c.instructions+=4;goto B633ec2;
case 0x633ec4:c.instructions+=3;goto B633ec4;
case 0x633ec5:c.instructions+=2;goto B633ec5;
case 0x633ec8:c.instructions+=1;goto B633ec8;
case 0x633ecd:goto L633ecd;
case 0x633ece:c.instructions+=2;goto B633ece;
case 0x633ed1:c.instructions+=1;goto B633ed1;
case 0x633ed3:goto L633ed3;
case 0x633ed5:c.instructions+=1;goto B633ed5;
case 0x633eda:goto L633eda;
case 0x633ee0:c.instructions+=1;goto B633ee0;
case 0x633ee2:goto L633ee2;
case 0x633ee7:goto L633ee7;
case 0x633ee9:c.instructions+=4;goto B633ee9;
case 0x633eea:c.instructions+=3;goto B633eea;
case 0x633eeb:c.instructions+=2;goto B633eeb;
case 0x633eec:c.instructions+=1;goto B633eec;
case 0x633ef0:goto L633ef0;
case 0x633ef1:c.instructions+=4;goto B633ef1;
case 0x633ef3:c.instructions+=3;goto B633ef3;
case 0x633ef6:c.instructions+=2;goto B633ef6;
case 0x633ef8:c.instructions+=1;goto B633ef8;
case 0x633efe:goto L633efe;
case 0x633f01:c.instructions+=1;goto B633f01;
case 0x633f06:goto L633f06;
case 0x633f08:c.instructions+=1;goto B633f08;
case 0x633f0d:goto L633f0d;
case 0x633f13:c.instructions+=2;goto B633f13;
case 0x633f19:c.instructions+=1;goto B633f19;
case 0x633f1f:goto L633f1f;
case 0x633f20:c.instructions+=5;goto B633f20;
case 0x633f21:c.instructions+=4;goto B633f21;
case 0x633f22:c.instructions+=3;goto B633f22;
case 0x633f24:c.instructions+=2;goto B633f24;
case 0x633f29:c.instructions+=1;goto B633f29;
case 0x633f30:goto L633f30;
case 0x633f36:c.instructions+=8;goto B633f36;
case 0x633f3c:c.instructions+=7;goto B633f3c;
case 0x633f3e:c.instructions+=6;goto B633f3e;
case 0x633f40:c.instructions+=5;goto B633f40;
case 0x633f42:c.instructions+=4;goto B633f42;
case 0x633f45:c.instructions+=3;goto B633f45;
case 0x633f48:c.instructions+=2;goto B633f48;
case 0x633f4a:c.instructions+=1;goto B633f4a;
case 0x633f4c:goto L633f4c;
case 0x633f4f:c.instructions+=1;goto B633f4f;
case 0x633f51:goto L633f51;
case 0x633f53:c.instructions+=4;goto B633f53;
case 0x633f56:c.instructions+=3;goto B633f56;
case 0x633f57:c.instructions+=2;goto B633f57;
case 0x633f5d:c.instructions+=1;goto B633f5d;
case 0x633f62:goto L633f62;
case 0x633f65:c.instructions+=2;goto B633f65;
case 0x633f67:c.instructions+=1;goto B633f67;
case 0x633f69:goto L633f69;
case 0x633f6b:c.instructions+=1;goto B633f6b;
case 0x633f6d:goto L633f6d;
case 0x633f74:c.instructions+=7;goto B633f74;
case 0x633f76:c.instructions+=6;goto B633f76;
case 0x633f78:c.instructions+=5;goto B633f78;
case 0x633f79:c.instructions+=4;goto B633f79;
case 0x633f7b:c.instructions+=3;goto B633f7b;
case 0x633f7e:c.instructions+=2;goto B633f7e;
case 0x633f7f:c.instructions+=1;goto B633f7f;
case 0x633f84:goto L633f84;
case 0x633f86:c.instructions+=9;goto B633f86;
case 0x633f8b:c.instructions+=8;goto B633f8b;
case 0x633f8d:c.instructions+=7;goto B633f8d;
case 0x633f93:c.instructions+=6;goto B633f93;
case 0x633f95:c.instructions+=5;goto B633f95;
case 0x633f97:c.instructions+=4;goto B633f97;
case 0x633f99:c.instructions+=3;goto B633f99;
case 0x633f9b:c.instructions+=2;goto B633f9b;
case 0x633f9d:c.instructions+=1;goto B633f9d;
case 0x633fa3:goto L633fa3;
case 0x633fa6:c.instructions+=3;goto B633fa6;
case 0x633fa9:c.instructions+=2;goto B633fa9;
case 0x633faf:c.instructions+=1;goto B633faf;
case 0x633fb5:goto L633fb5;
case 0x633fb7:c.instructions+=6;goto B633fb7;
case 0x633fbd:c.instructions+=5;goto B633fbd;
case 0x633fbe:c.instructions+=4;goto B633fbe;
case 0x633fbf:c.instructions+=3;goto B633fbf;
case 0x633fc0:c.instructions+=2;goto B633fc0;
case 0x633fc1:c.instructions+=1;goto B633fc1;
case 0x633fc6:goto L633fc6;
case 0x633fc7:c.instructions+=1;goto B633fc7;
case 0x633fd0:goto L633fd0;
case 0x633fd1:c.instructions+=5;goto B633fd1;
case 0x633fd3:c.instructions+=4;goto B633fd3;
case 0x633fd4:c.instructions+=3;goto B633fd4;
case 0x633fd7:c.instructions+=2;goto B633fd7;
case 0x633fd9:c.instructions+=1;goto B633fd9;
case 0x633fdb:goto L633fdb;
case 0x633fdd:c.instructions+=1;goto B633fdd;
case 0x633fe2:goto L633fe2;
case 0x633fe7:c.instructions+=3;goto B633fe7;
case 0x633fe8:c.instructions+=2;goto B633fe8;
case 0x633fe9:c.instructions+=1;goto B633fe9;
case 0x633fee:goto L633fee;
case 0x633ff1:goto L633ff1;
case 0x633ff4:c.instructions+=2;goto B633ff4;
case 0x633ff6:c.instructions+=1;goto B633ff6;
case 0x633ff8:goto L633ff8;
case 0x633ffa:c.instructions+=1;goto B633ffa;
case 0x633fff:goto L633fff;
default:missing_instruction(c.pc);}
B633000:L633000:{c.instructions+=26;NFSU2_TR(0x633000);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B633008:{NFSU2_TR(0x633008);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B633010:{NFSU2_TR(0x633010);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B63301b:{NFSU2_TR(0x63301b);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633022:{NFSU2_TR(0x633022);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B63302d:{NFSU2_TR(0x63302d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B633038:{NFSU2_TR(0x633038);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B633043:{NFSU2_TR(0x633043);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B63304e:{NFSU2_TR(0x63304e);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633055:{NFSU2_TR(0x633055);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
w4(U+4,u32(0xbull));
s4(u32(r4(U+0)),r4(U+4));
}
B633060:{NFSU2_TR(0x633060);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
w4(U+4,u32(0xcull));
s4(u32(r4(U+0)),r4(U+4));
}
B63306b:{NFSU2_TR(0x63306b);
u8 U[8];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
w4(U+4,u32(0xdull));
s4(u32(r4(U+0)),r4(U+4));
}
B633076:{NFSU2_TR(0x633076);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B633081:{NFSU2_TR(0x633081);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
w4(U+4,u32(0x11ull));
s4(u32(r4(U+0)),r4(U+4));
}
B63308c:{NFSU2_TR(0x63308c);
u8 U[8];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
w4(U+4,u32(0x12ull));
s4(u32(r4(U+0)),r4(U+4));
}
B633097:{NFSU2_TR(0x633097);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
w4(U+4,u32(0x13ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6330a2:{NFSU2_TR(0x6330a2);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6330a9:{NFSU2_TR(0x6330a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x19ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6330b1:{NFSU2_TR(0x6330b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6330b5:{NFSU2_TR(0x6330b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6330b9:{NFSU2_TR(0x6330b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6330bd:{NFSU2_TR(0x6330bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6330c1:{NFSU2_TR(0x6330c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x18ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6330c9:{NFSU2_TR(0x6330c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x1aull));
s4(u32(r4(U+0)),r4(U+4));
}
B6330d1:{NFSU2_TR(0x6330d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x1bull));
s4(u32(r4(U+0)),r4(U+4));
}
B6330d9:{NFSU2_TR(0x6330d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6330deull));
TAIL_STATIC(0x75bed4u,75b);
}
B6330de:L6330de:{c.instructions+=4;NFSU2_TR(0x6330de);
__builtin_memmove((R+28),(R+0),4);
}
B6330e0:{NFSU2_TR(0x6330e0);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6330e2:{NFSU2_TR(0x6330e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6330e6:{NFSU2_TR(0x6330e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6330ebull));
TAIL_STATIC(0x43c1c0u,43c);
}
B6330eb:L6330eb:{c.instructions+=4;NFSU2_TR(0x6330eb);
u8 U[16];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6330ef:{NFSU2_TR(0x6330ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6330f2:{NFSU2_TR(0x6330f2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6330f4:{NFSU2_TR(0x6330f4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L63314b;}}
}
B6330f6:L6330f6:{c.instructions+=6;NFSU2_TR(0x6330f6);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6330f8:{NFSU2_TR(0x6330f8);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6330fc:{NFSU2_TR(0x6330fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6330fd:{NFSU2_TR(0x6330fd);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6330ff:{NFSU2_TR(0x6330ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633100:{NFSU2_TR(0x633100);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633105ull));
TAIL_STATIC(0x61c4b0u,61c);
}
B633105:L633105:{c.instructions+=4;NFSU2_TR(0x633105);
__builtin_memmove((R+20),(R+0),4);
}
B633107:{NFSU2_TR(0x633107);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B63310a:{NFSU2_TR(0x63310a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63310c:{NFSU2_TR(0x63310c);
if(r1(R+518)){{goto L63345c;}}
}
B633112:L633112:{c.instructions+=3;NFSU2_TR(0x633112);
__builtin_memmove((R+4),(R+24),4);
}
B633114:{NFSU2_TR(0x633114);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x694ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63311a:{NFSU2_TR(0x63311a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63311full));
TAIL_STATIC(0x61bcd0u,61b);
}
B63311f:L63311f:{c.instructions+=3;NFSU2_TR(0x63311f);
__builtin_memmove((R+4),(R+24),4);
}
B633121:{NFSU2_TR(0x633121);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x698ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633127:{NFSU2_TR(0x633127);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63312cull));
TAIL_STATIC(0x61bcd0u,61b);
}
B63312c:L63312c:{c.instructions+=3;NFSU2_TR(0x63312c);
__builtin_memmove((R+4),(R+24),4);
}
B63312e:{NFSU2_TR(0x63312e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x69cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633134:{NFSU2_TR(0x633134);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633139ull));
TAIL_STATIC(0x61bcd0u,61b);
}
B633139:L633139:{c.instructions+=3;NFSU2_TR(0x633139);
__builtin_memmove((R+4),(R+24),4);
}
B63313b:{NFSU2_TR(0x63313b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x690ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633141:{NFSU2_TR(0x633141);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633146ull));
TAIL_STATIC(0x61bcd0u,61b);
}
B633146:L633146:{c.instructions+=1;NFSU2_TR(0x633146);
{goto L63345c;}
}
B63314b:L63314b:{c.instructions+=2;NFSU2_TR(0x63314b);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63314d:{NFSU2_TR(0x63314d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633152ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B633152:L633152:{c.instructions+=4;NFSU2_TR(0x633152);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B633155:{NFSU2_TR(0x633155);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B633157:{NFSU2_TR(0x633157);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B633159:{NFSU2_TR(0x633159);
__builtin_memmove((R+16),(R+16),4);
}
B633160:L633160:{c.instructions+=5;NFSU2_TR(0x633160);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B633164:{NFSU2_TR(0x633164);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+20,u32(s32(s8(r1(U+8)))));
}
B633168:{NFSU2_TR(0x633168);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+20))));
}
B63316a:{NFSU2_TR(0x63316a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63316c:{NFSU2_TR(0x63316c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L633174;}}
}
B63316e:L63316e:{c.instructions+=3;NFSU2_TR(0x63316e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B63316f:{NFSU2_TR(0x63316f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B633172:{NFSU2_TR(0x633172);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x633160u);}goto L633160;}}
}
B633174:L633174:{c.instructions+=6;NFSU2_TR(0x633174);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633176:{NFSU2_TR(0x633176);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B63317a:{NFSU2_TR(0x63317a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63317b:{NFSU2_TR(0x63317b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63317c:{NFSU2_TR(0x63317c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63317d:{NFSU2_TR(0x63317d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633182ull));
TAIL_STATIC(0x61c4b0u,61c);
}
B633182:L633182:{c.instructions+=3;NFSU2_TR(0x633182);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633184:{NFSU2_TR(0x633184);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633188:{NFSU2_TR(0x633188);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63318dull));
TAIL_STATIC(0x43c1c0u,43c);
}
B63318d:L63318d:{c.instructions+=3;NFSU2_TR(0x63318d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B633190:{NFSU2_TR(0x633190);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B633192:{NFSU2_TR(0x633192);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B633194:L633194:{c.instructions+=5;NFSU2_TR(0x633194);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B633198:{NFSU2_TR(0x633198);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+20,u32(s32(s8(r1(U+8)))));
}
B63319c:{NFSU2_TR(0x63319c);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+20))));
}
B63319e:{NFSU2_TR(0x63319e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6331a0:{NFSU2_TR(0x6331a0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6331a8;}}
}
B6331a2:L6331a2:{c.instructions+=3;NFSU2_TR(0x6331a2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6331a3:{NFSU2_TR(0x6331a3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6331a6:{NFSU2_TR(0x6331a6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x633194u);}goto L633194;}}
}
B6331a8:L6331a8:{c.instructions+=6;NFSU2_TR(0x6331a8);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6331aa:{NFSU2_TR(0x6331aa);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6331ae:{NFSU2_TR(0x6331ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6331af:{NFSU2_TR(0x6331af);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6331b0:{NFSU2_TR(0x6331b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6331b1:{NFSU2_TR(0x6331b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6331b6ull));
TAIL_STATIC(0x61c4b0u,61c);
}
B6331b6:L6331b6:{c.instructions+=3;NFSU2_TR(0x6331b6);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6331b8:{NFSU2_TR(0x6331b8);
__builtin_memmove((R+20),(R+0),4);
}
B6331ba:{NFSU2_TR(0x6331ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6331bfull));
TAIL_STATIC(0x43c1c0u,43c);
}
B6331bf:L6331bf:{c.instructions+=6;NFSU2_TR(0x6331bf);
u8 U[12];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6331c3:{NFSU2_TR(0x6331c3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6331c6:{NFSU2_TR(0x6331c6);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6331c8:{NFSU2_TR(0x6331c8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6331ca:{NFSU2_TR(0x6331ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6331ce:{NFSU2_TR(0x6331ce);
__builtin_memmove((R+28),(R+28),4);
}
B6331d0:L6331d0:{c.instructions+=5;NFSU2_TR(0x6331d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6331d4:{NFSU2_TR(0x6331d4);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+28,u32(s32(s8(r1(U+8)))));
}
B6331d8:{NFSU2_TR(0x6331d8);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B6331da:{NFSU2_TR(0x6331da);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6331dc:{NFSU2_TR(0x6331dc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6331e4;}}
}
B6331de:L6331de:{c.instructions+=3;NFSU2_TR(0x6331de);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6331df:{NFSU2_TR(0x6331df);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6331e2:{NFSU2_TR(0x6331e2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6331d0u);}goto L6331d0;}}
}
B6331e4:L6331e4:{c.instructions+=6;NFSU2_TR(0x6331e4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6331e6:{NFSU2_TR(0x6331e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6331ea:{NFSU2_TR(0x6331ea);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6331eb:{NFSU2_TR(0x6331eb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6331ec:{NFSU2_TR(0x6331ec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6331ed:{NFSU2_TR(0x6331ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6331f2ull));
TAIL_STATIC(0x61c4b0u,61c);
}
B6331f2:L6331f2:{c.instructions+=6;NFSU2_TR(0x6331f2);
__builtin_memmove((R+28),(R+0),4);
}
B6331f4:{NFSU2_TR(0x6331f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6331f8:{NFSU2_TR(0x6331f8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6331fb:{NFSU2_TR(0x6331fb);
__builtin_memmove((R+4),(R+24),4);
}
B6331fd:{NFSU2_TR(0x6331fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x690ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633203:{NFSU2_TR(0x633203);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633208ull));
TAIL_STATIC(0x61bcd0u,61b);
}
B633208:L633208:{c.instructions+=3;NFSU2_TR(0x633208);
__builtin_memmove((R+4),(R+24),4);
}
B63320a:{NFSU2_TR(0x63320a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x694ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633210:{NFSU2_TR(0x633210);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633215ull));
TAIL_STATIC(0x61bcd0u,61b);
}
B633215:L633215:{c.instructions+=3;NFSU2_TR(0x633215);
__builtin_memmove((R+4),(R+24),4);
}
B633217:{NFSU2_TR(0x633217);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x698ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63321d:{NFSU2_TR(0x63321d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633222ull));
TAIL_STATIC(0x61bcd0u,61b);
}
B633222:L633222:{c.instructions+=3;NFSU2_TR(0x633222);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B633226:{NFSU2_TR(0x633226);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633227:{NFSU2_TR(0x633227);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63322cull));
TAIL_STATIC(0x610570u,610);
}
B63322c:L63322c:{c.instructions+=3;NFSU2_TR(0x63322c);
__builtin_memmove((R+8),gp(0x802de0),4);
}
B633232:{NFSU2_TR(0x633232);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633233:{NFSU2_TR(0x633233);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633238ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B633238:L633238:{c.instructions+=9;NFSU2_TR(0x633238);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B63323b:{NFSU2_TR(0x63323b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B63323e:{NFSU2_TR(0x63323e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6c4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B633244:{NFSU2_TR(0x633244);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633248:{NFSU2_TR(0x633248);
w4(R+28,u32(0x4dull));
}
B63324d:{NFSU2_TR(0x63324d);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+20),(U+0),4);
}
B633251:{NFSU2_TR(0x633251);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633255:{NFSU2_TR(0x633255);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B63325d:{NFSU2_TR(0x63325d);
__builtin_memmove((R+4),(R+4),4);
}
B633260:L633260:{c.instructions+=12;NFSU2_TR(0x633260);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B633264:{NFSU2_TR(0x633264);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B633267:{NFSU2_TR(0x633267);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B633269:{NFSU2_TR(0x633269);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63326b:{NFSU2_TR(0x63326b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63326c:{NFSU2_TR(0x63326c);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B63326e:{NFSU2_TR(0x63326e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a43c8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B633275:{NFSU2_TR(0x633275);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633276:{NFSU2_TR(0x633276);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633277:{NFSU2_TR(0x633277);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633278:{NFSU2_TR(0x633278);
w4(R+4,u32(0x8a2b68ull));
}
B63327d:{NFSU2_TR(0x63327d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633282ull));
TAIL_STATIC(0x61b980u,61b);
}
B633282:L633282:{c.instructions+=2;NFSU2_TR(0x633282);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x61ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x61ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B633285:{NFSU2_TR(0x633285);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L63328c;}}
}
B633287:L633287:{c.instructions+=2;NFSU2_TR(0x633287);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x68ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x68ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63328a:{NFSU2_TR(0x63328a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L63329e;}}
}
B63328c:L63328c:{c.instructions+=2;NFSU2_TR(0x63328c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x19ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63328f:{NFSU2_TR(0x63328f);
if(r1(R+518)){{goto L63329e;}}
}
B633291:L633291:{c.instructions+=4;NFSU2_TR(0x633291);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B633295:{NFSU2_TR(0x633295);
__builtin_memmove((R+4),(R+24),4);
}
B633297:{NFSU2_TR(0x633297);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B633299:{NFSU2_TR(0x633299);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63329eull));
TAIL_STATIC(0x61bcd0u,61b);
}
B63329e:L63329e:{c.instructions+=9;NFSU2_TR(0x63329e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6332a2:{NFSU2_TR(0x6332a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6332a6:{NFSU2_TR(0x6332a6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6332a9:{NFSU2_TR(0x6332a9);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B6332ac:{NFSU2_TR(0x6332ac);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6332ad:{NFSU2_TR(0x6332ad);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6332ae:{NFSU2_TR(0x6332ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6332b2:{NFSU2_TR(0x6332b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6332b6:{NFSU2_TR(0x6332b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x633260u);}goto L633260;}}
}
B6332b8:L6332b8:{c.instructions+=5;NFSU2_TR(0x6332b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6332bc:{NFSU2_TR(0x6332bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6332c4:{NFSU2_TR(0x6332c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6332cc:{NFSU2_TR(0x6332cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6332d4:{NFSU2_TR(0x6332d4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6332d6:L6332d6:{c.instructions+=2;NFSU2_TR(0x6332d6);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6332d8:{NFSU2_TR(0x6332d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6332ddull));
TAIL_STATIC(0x43c1c0u,43c);
}
B6332dd:L6332dd:{c.instructions+=9;NFSU2_TR(0x6332dd);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6332e1:{NFSU2_TR(0x6332e1);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6332e5:{NFSU2_TR(0x6332e5);
u8 U[12];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6332e9:{NFSU2_TR(0x6332e9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6332ec:{NFSU2_TR(0x6332ec);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6332ee:{NFSU2_TR(0x6332ee);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6332f2:{NFSU2_TR(0x6332f2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6332f3:{NFSU2_TR(0x6332f3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6332f6:{NFSU2_TR(0x6332f6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6332d6u);}goto L6332d6;}}
}
B6332f8:L6332f8:{c.instructions+=3;NFSU2_TR(0x6332f8);
__builtin_memmove((R+0),gp(0x802de0),4);
}
B6332fd:{NFSU2_TR(0x6332fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6332fe:{NFSU2_TR(0x6332fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633303ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B633303:L633303:{c.instructions+=9;NFSU2_TR(0x633303);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B63330a:{NFSU2_TR(0x63330a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6d4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B633310:{NFSU2_TR(0x633310);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B633313:{NFSU2_TR(0x633313);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633317:{NFSU2_TR(0x633317);
w4(R+28,u32(0x51ull));
}
B63331c:{NFSU2_TR(0x63331c);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+20),(U+0),4);
}
B633320:{NFSU2_TR(0x633320);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633324:{NFSU2_TR(0x633324);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B63332c:{NFSU2_TR(0x63332c);
__builtin_memmove((R+16),(R+16),4);
}
B633330:L633330:{c.instructions+=12;NFSU2_TR(0x633330);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B633334:{NFSU2_TR(0x633334);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B633337:{NFSU2_TR(0x633337);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B633339:{NFSU2_TR(0x633339);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63333b:{NFSU2_TR(0x63333b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B63333d:{NFSU2_TR(0x63333d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a43c8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B633344:{NFSU2_TR(0x633344);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633345:{NFSU2_TR(0x633345);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633346:{NFSU2_TR(0x633346);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633347:{NFSU2_TR(0x633347);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633348:{NFSU2_TR(0x633348);
w4(R+4,u32(0x8a2b68ull));
}
B63334d:{NFSU2_TR(0x63334d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633352ull));
TAIL_STATIC(0x61b980u,61b);
}
B633352:L633352:{c.instructions+=2;NFSU2_TR(0x633352);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x61ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x61ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B633355:{NFSU2_TR(0x633355);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L63335c;}}
}
B633357:L633357:{c.instructions+=2;NFSU2_TR(0x633357);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x68ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x68ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63335a:{NFSU2_TR(0x63335a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L63336e;}}
}
B63335c:L63335c:{c.instructions+=2;NFSU2_TR(0x63335c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x19ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63335f:{NFSU2_TR(0x63335f);
if(r1(R+518)){{goto L63336e;}}
}
B633361:L633361:{c.instructions+=4;NFSU2_TR(0x633361);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B633365:{NFSU2_TR(0x633365);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B633367:{NFSU2_TR(0x633367);
__builtin_memmove((R+4),(R+24),4);
}
B633369:{NFSU2_TR(0x633369);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63336eull));
TAIL_STATIC(0x61bcd0u,61b);
}
B63336e:L63336e:{c.instructions+=9;NFSU2_TR(0x63336e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B633372:{NFSU2_TR(0x633372);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B633376:{NFSU2_TR(0x633376);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B633379:{NFSU2_TR(0x633379);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B63337c:{NFSU2_TR(0x63337c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B63337d:{NFSU2_TR(0x63337d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B63337e:{NFSU2_TR(0x63337e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633382:{NFSU2_TR(0x633382);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633386:{NFSU2_TR(0x633386);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x633330u);}goto L633330;}}
}
B633388:L633388:{c.instructions+=5;NFSU2_TR(0x633388);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63338c:{NFSU2_TR(0x63338c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B633394:{NFSU2_TR(0x633394);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B63339c:{NFSU2_TR(0x63339c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6333a4:{NFSU2_TR(0x6333a4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6333a6:L6333a6:{c.instructions+=2;NFSU2_TR(0x6333a6);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6333a8:{NFSU2_TR(0x6333a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6333adull));
TAIL_STATIC(0x43c1c0u,43c);
}
B6333ad:L6333ad:{c.instructions+=9;NFSU2_TR(0x6333ad);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6333b1:{NFSU2_TR(0x6333b1);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6333b5:{NFSU2_TR(0x6333b5);
u8 U[12];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6333b9:{NFSU2_TR(0x6333b9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6333bc:{NFSU2_TR(0x6333bc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6333be:{NFSU2_TR(0x6333be);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6333c2:{NFSU2_TR(0x6333c2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6333c3:{NFSU2_TR(0x6333c3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6333c6:{NFSU2_TR(0x6333c6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6333a6u);}goto L6333a6;}}
}
B6333c8:L6333c8:{c.instructions+=3;NFSU2_TR(0x6333c8);
__builtin_memmove((R+0),gp(0x802de0),4);
}
B6333cd:{NFSU2_TR(0x6333cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6333ce:{NFSU2_TR(0x6333ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6333d3ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B6333d3:L6333d3:{c.instructions+=9;NFSU2_TR(0x6333d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6333da:{NFSU2_TR(0x6333da);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6333e0:{NFSU2_TR(0x6333e0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6333e3:{NFSU2_TR(0x6333e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6333e7:{NFSU2_TR(0x6333e7);
w4(R+28,u32(0x55ull));
}
B6333ec:{NFSU2_TR(0x6333ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+20),(U+0),4);
}
B6333f0:{NFSU2_TR(0x6333f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6333f4:{NFSU2_TR(0x6333f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6333fc:{NFSU2_TR(0x6333fc);
__builtin_memmove((R+16),(R+16),4);
}
B633400:L633400:{c.instructions+=12;NFSU2_TR(0x633400);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B633404:{NFSU2_TR(0x633404);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B633407:{NFSU2_TR(0x633407);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B633409:{NFSU2_TR(0x633409);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63340b:{NFSU2_TR(0x63340b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B63340d:{NFSU2_TR(0x63340d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a43c8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B633414:{NFSU2_TR(0x633414);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633415:{NFSU2_TR(0x633415);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633416:{NFSU2_TR(0x633416);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633417:{NFSU2_TR(0x633417);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633418:{NFSU2_TR(0x633418);
w4(R+4,u32(0x8a2b68ull));
}
B63341d:{NFSU2_TR(0x63341d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633422ull));
TAIL_STATIC(0x61b980u,61b);
}
B633422:L633422:{c.instructions+=2;NFSU2_TR(0x633422);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x61ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x61ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B633425:{NFSU2_TR(0x633425);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L63342c;}}
}
B633427:L633427:{c.instructions+=2;NFSU2_TR(0x633427);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x68ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x68ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63342a:{NFSU2_TR(0x63342a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L63343e;}}
}
B63342c:L63342c:{c.instructions+=2;NFSU2_TR(0x63342c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x19ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63342f:{NFSU2_TR(0x63342f);
if(r1(R+518)){{goto L63343e;}}
}
B633431:L633431:{c.instructions+=4;NFSU2_TR(0x633431);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B633435:{NFSU2_TR(0x633435);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B633437:{NFSU2_TR(0x633437);
__builtin_memmove((R+4),(R+24),4);
}
B633439:{NFSU2_TR(0x633439);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63343eull));
TAIL_STATIC(0x61bcd0u,61b);
}
B63343e:L63343e:{c.instructions+=9;NFSU2_TR(0x63343e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B633442:{NFSU2_TR(0x633442);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B633446:{NFSU2_TR(0x633446);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B633449:{NFSU2_TR(0x633449);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B63344c:{NFSU2_TR(0x63344c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B63344d:{NFSU2_TR(0x63344d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B63344e:{NFSU2_TR(0x63344e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633452:{NFSU2_TR(0x633452);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633456:{NFSU2_TR(0x633456);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x633400u);}goto L633400;}}
}
B633458:L633458:{c.instructions+=1;NFSU2_TR(0x633458);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B63345c:L63345c:{c.instructions+=2;NFSU2_TR(0x63345c);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63345e:{NFSU2_TR(0x63345e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633463ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B633463:L633463:{c.instructions+=4;NFSU2_TR(0x633463);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B633466:{NFSU2_TR(0x633466);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B633468:{NFSU2_TR(0x633468);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B63346a:{NFSU2_TR(0x63346a);
__builtin_memmove((R+12),(R+12),4);
}
B633470:L633470:{c.instructions+=4;NFSU2_TR(0x633470);
u8 U[13];
w4(U+0,u32(u32(u32(0x802d58ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+20,u32(s32(s8(r1(U+12)))));
}
B633478:{NFSU2_TR(0x633478);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+20))));
}
B63347a:{NFSU2_TR(0x63347a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63347c:{NFSU2_TR(0x63347c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L633484;}}
}
B63347e:L63347e:{c.instructions+=3;NFSU2_TR(0x63347e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B63347f:{NFSU2_TR(0x63347f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B633482:{NFSU2_TR(0x633482);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x633470u);}goto L633470;}}
}
B633484:L633484:{c.instructions+=2;NFSU2_TR(0x633484);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B633487:{NFSU2_TR(0x633487);
if(r1(R+518)){{goto L63349a;}}
}
B633489:L633489:{c.instructions+=5;NFSU2_TR(0x633489);
__builtin_memmove((R+8),gp(0x802d4c),4);
}
B63348f:{NFSU2_TR(0x63348f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633490:{NFSU2_TR(0x633490);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633491:{NFSU2_TR(0x633491);
__builtin_memmove((R+4),(R+24),4);
}
B633493:{NFSU2_TR(0x633493);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633498ull));
TAIL_STATIC(0x631cb0u,631);
}
B633498:L633498:{c.instructions+=1;NFSU2_TR(0x633498);
{goto L6334b8;}
}
B63349a:L63349a:{c.instructions+=3;NFSU2_TR(0x63349a);
u8 U[2];
__builtin_memmove((U+0),gp(0x802d50),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6334a0:{NFSU2_TR(0x6334a0);
__builtin_memmove((R+0),gp(0x802d4c),4);
}
B6334a5:{NFSU2_TR(0x6334a5);
if(r1(R+518)){{goto L6334d6;}}
}
B6334a7:L6334a7:{c.instructions+=8;NFSU2_TR(0x6334a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6334a9:{NFSU2_TR(0x6334a9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6334aa:{NFSU2_TR(0x6334aa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6334ab:{NFSU2_TR(0x6334ab);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6334ac:{NFSU2_TR(0x6334ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6334ad:{NFSU2_TR(0x6334ad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6334ae:{NFSU2_TR(0x6334ae);
w4(R+4,u32(0x8a2b68ull));
}
B6334b3:{NFSU2_TR(0x6334b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6334b8ull));
TAIL_STATIC(0x61b980u,61b);
}
B6334b8:L6334b8:{c.instructions+=3;NFSU2_TR(0x6334b8);
__builtin_memmove((R+4),gp(0x802d4c),4);
}
B6334be:{NFSU2_TR(0x6334be);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x61ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x61ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6334c1:{NFSU2_TR(0x6334c1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6334c8;}}
}
B6334c3:L6334c3:{c.instructions+=2;NFSU2_TR(0x6334c3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x68ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x68ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6334c6:{NFSU2_TR(0x6334c6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6334f3;}}
}
B6334c8:L6334c8:{c.instructions+=2;NFSU2_TR(0x6334c8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x19ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6334cb:{NFSU2_TR(0x6334cb);
if(r1(R+518)){{goto L6334f3;}}
}
B6334cd:L6334cd:{c.instructions+=2;NFSU2_TR(0x6334cd);
u8 U[16];
w4(U+0,u32(u32(u32(0x590ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6334d4:{NFSU2_TR(0x6334d4);
{goto L6334ec;}
}
B6334d6:L6334d6:{c.instructions+=2;NFSU2_TR(0x6334d6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x61ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x61ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6334d9:{NFSU2_TR(0x6334d9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6334e0;}}
}
B6334db:L6334db:{c.instructions+=2;NFSU2_TR(0x6334db);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x68ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x68ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6334de:{NFSU2_TR(0x6334de);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6334f3;}}
}
B6334e0:L6334e0:{c.instructions+=2;NFSU2_TR(0x6334e0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x19ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6334e3:{NFSU2_TR(0x6334e3);
if(r1(R+518)){{goto L6334f3;}}
}
B6334e5:L6334e5:{c.instructions+=1;NFSU2_TR(0x6334e5);
u8 U[16];
w4(U+0,u32(u32(u32(0x590ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6334ec:L6334ec:{c.instructions+=2;NFSU2_TR(0x6334ec);
__builtin_memmove((R+4),(R+24),4);
}
B6334ee:{NFSU2_TR(0x6334ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6334f3ull));
TAIL_STATIC(0x61bcd0u,61b);
}
B6334f3:L6334f3:{c.instructions+=4;NFSU2_TR(0x6334f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6334f9:{NFSU2_TR(0x6334f9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6334fb:{NFSU2_TR(0x6334fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6334ff:{NFSU2_TR(0x6334ff);
if(r1(R+518)){{goto L6335bf;}}
}
B633505:L633505:{c.instructions+=3;NFSU2_TR(0x633505);
u8 U[8];
__builtin_memmove((U+0),gp(0x802ddc),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+12)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63350b:{NFSU2_TR(0x63350b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63350f:{NFSU2_TR(0x63350f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6335bf;}}
}
B633515:L633515:{c.instructions+=2;NFSU2_TR(0x633515);
w4(R+28,u32(0x8a4418ull));
}
B63351a:{NFSU2_TR(0x63351a);
__builtin_memmove((R+12),(R+12),4);
}
B633520:L633520:{c.instructions+=6;NFSU2_TR(0x633520);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B633524:{NFSU2_TR(0x633524);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+4,u32(r2(U+0)));
}
B633527:{NFSU2_TR(0x633527);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B63352a:{NFSU2_TR(0x63352a);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B63352c:{NFSU2_TR(0x63352c);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B63352e:{NFSU2_TR(0x63352e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6335a5;}}
}
B633530:L633530:{c.instructions+=3;NFSU2_TR(0x633530);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B633533:{NFSU2_TR(0x633533);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633534:{NFSU2_TR(0x633534);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633539ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B633539:L633539:{c.instructions+=4;NFSU2_TR(0x633539);
__builtin_memmove((R+20),(R+0),4);
}
B63353b:{NFSU2_TR(0x63353b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63353e:{NFSU2_TR(0x63353e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63353f:{NFSU2_TR(0x63353f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633544ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B633544:L633544:{c.instructions+=11;NFSU2_TR(0x633544);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B633548:{NFSU2_TR(0x633548);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B63354a:{NFSU2_TR(0x63354a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B63354d:{NFSU2_TR(0x63354d);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63354f:{NFSU2_TR(0x63354f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633550:{NFSU2_TR(0x633550);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633551:{NFSU2_TR(0x633551);
u8 U[4];
w4(U+0,u32(0x45ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633553:{NFSU2_TR(0x633553);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633554:{NFSU2_TR(0x633554);
w4(R+4,u32(0x8a2b68ull));
}
B633559:{NFSU2_TR(0x633559);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63355d:{NFSU2_TR(0x63355d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633562ull));
TAIL_STATIC(0x61b980u,61b);
}
B633562:L633562:{c.instructions+=11;NFSU2_TR(0x633562);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B633564:{NFSU2_TR(0x633564);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633566:{NFSU2_TR(0x633566);
__builtin_memmove((R+20),(R+0),4);
}
B633568:{NFSU2_TR(0x633568);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63356c:{NFSU2_TR(0x63356c);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B633570:{NFSU2_TR(0x633570);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633571:{NFSU2_TR(0x633571);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633572:{NFSU2_TR(0x633572);
u8 U[4];
w4(U+0,u32(0x47ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633574:{NFSU2_TR(0x633574);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633575:{NFSU2_TR(0x633575);
w4(R+4,u32(0x8a2b68ull));
}
B63357a:{NFSU2_TR(0x63357a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63357full));
TAIL_STATIC(0x61b980u,61b);
}
B63357f:L63357f:{c.instructions+=4;NFSU2_TR(0x63357f);
__builtin_memmove((R+4),(R+24),4);
}
B633581:{NFSU2_TR(0x633581);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633585:{NFSU2_TR(0x633585);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6a4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63358b:{NFSU2_TR(0x63358b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633590ull));
TAIL_STATIC(0x61bcd0u,61b);
}
B633590:L633590:{c.instructions+=4;NFSU2_TR(0x633590);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B633594:{NFSU2_TR(0x633594);
__builtin_memmove((R+4),(R+24),4);
}
B633596:{NFSU2_TR(0x633596);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6acull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63359c:{NFSU2_TR(0x63359c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6335a1ull));
TAIL_STATIC(0x61bcd0u,61b);
}
B6335a1:L6335a1:{c.instructions+=1;NFSU2_TR(0x6335a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6335a5:L6335a5:{c.instructions+=7;NFSU2_TR(0x6335a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6335a9:{NFSU2_TR(0x6335a9);
__builtin_memmove((R+8),gp(0x802ddc),4);
}
B6335af:{NFSU2_TR(0x6335af);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6335b0:{NFSU2_TR(0x6335b0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x28ull))));
}
B6335b3:{NFSU2_TR(0x6335b3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6335b5:{NFSU2_TR(0x6335b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6335b9:{NFSU2_TR(0x6335b9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x633520u);}goto L633520;}}
}
B6335bf:L6335bf:{c.instructions+=6;NFSU2_TR(0x6335bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6335c0:{NFSU2_TR(0x6335c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6335c1:{NFSU2_TR(0x6335c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6335c2:{NFSU2_TR(0x6335c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6335c3:{NFSU2_TR(0x6335c3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xacull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xacull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xacull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6335c9:{NFSU2_TR(0x6335c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6335d0:L6335d0:{c.instructions+=19;NFSU2_TR(0x6335d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6335d4:{NFSU2_TR(0x6335d4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6335d5:{NFSU2_TR(0x6335d5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6335d6:{NFSU2_TR(0x6335d6);
__builtin_memmove((R+24),(R+4),4);
}
B6335d8:{NFSU2_TR(0x6335d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6335dc:{NFSU2_TR(0x6335dc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6335dd:{NFSU2_TR(0x6335dd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6335de:{NFSU2_TR(0x6335de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6335e4:{NFSU2_TR(0x6335e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6335e8:{NFSU2_TR(0x6335e8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6335e9:{NFSU2_TR(0x6335e9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6335eb:{NFSU2_TR(0x6335eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6335ec:{NFSU2_TR(0x6335ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6335ef:{NFSU2_TR(0x6335ef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6335f0:{NFSU2_TR(0x6335f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x304ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6335f6:{NFSU2_TR(0x6335f6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x308ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6335fc:{NFSU2_TR(0x6335fc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x309ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B633602:{NFSU2_TR(0x633602);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30aull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B633608:{NFSU2_TR(0x633608);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63360dull));
TAIL_STATIC(0x631e20u,631);
}
B63360d:L63360d:{c.instructions+=6;NFSU2_TR(0x63360d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x310ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633613:{NFSU2_TR(0x633613);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x314ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633619:{NFSU2_TR(0x633619);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x318ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63361f:{NFSU2_TR(0x63361f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B633621:{NFSU2_TR(0x633621);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x31cull))));
__builtin_memmove((R+28),(U+0),4);
}
B633627:{NFSU2_TR(0x633627);
w4(R+4,u32(0x45ull));
}
B63362c:L63362c:{c.instructions+=1;NFSU2_TR(0x63362c);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L63362e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63362cu);}goto L63362c;}
}
B63362e:L63362e:{c.instructions+=4;NFSU2_TR(0x63362e);
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
B633631:{NFSU2_TR(0x633631);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x430ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633637:{NFSU2_TR(0x633637);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x434ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63363d:{NFSU2_TR(0x63363d);
w4(R+4,u32(0x45ull));
}
B633642:L633642:{c.instructions+=1;NFSU2_TR(0x633642);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L633644;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x633642u);}goto L633642;}
}
B633644:L633644:{c.instructions+=5;NFSU2_TR(0x633644);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B633645:{NFSU2_TR(0x633645);
__builtin_memmove((R+0),(R+24),4);
}
B633647:{NFSU2_TR(0x633647);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B633648:{NFSU2_TR(0x633648);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B633649:{NFSU2_TR(0x633649);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B633650:L633650:{c.instructions+=17;NFSU2_TR(0x633650);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633651:{NFSU2_TR(0x633651);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B633653:{NFSU2_TR(0x633653);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633654:{NFSU2_TR(0x633654);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633655:{NFSU2_TR(0x633655);
__builtin_memmove((R+20),(R+4),4);
}
B633657:{NFSU2_TR(0x633657);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B63365b:{NFSU2_TR(0x63365b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x9ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B63365f:{NFSU2_TR(0x63365f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xaull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B633663:{NFSU2_TR(0x633663);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633664:{NFSU2_TR(0x633664);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B633666:{NFSU2_TR(0x633666);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633669:{NFSU2_TR(0x633669);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63366c:{NFSU2_TR(0x63366c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63366f:{NFSU2_TR(0x63366f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633670:{NFSU2_TR(0x633670);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((R+12),(U+0),4);
}
B633673:{NFSU2_TR(0x633673);
w4(R+4,u32(0x8ull));
}
B633678:{NFSU2_TR(0x633678);
__builtin_memmove((R+28),(R+12),4);
}
B63367a:L63367a:{c.instructions+=1;NFSU2_TR(0x63367a);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L63367c;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63367au);}goto L63367a;}
}
B63367c:L63367c:{c.instructions+=26;NFSU2_TR(0x63367c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B63367e:{NFSU2_TR(0x63367e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x38ull))));
__builtin_memmove((R+0),(U+0),4);
}
B633681:{NFSU2_TR(0x633681);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B633683:{NFSU2_TR(0x633683);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633686:{NFSU2_TR(0x633686);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633689:{NFSU2_TR(0x633689);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63368c:{NFSU2_TR(0x63368c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B63368e:{NFSU2_TR(0x63368e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x48ull))));
__builtin_memmove((R+4),(U+0),4);
}
B633691:{NFSU2_TR(0x633691);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B633693:{NFSU2_TR(0x633693);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633696:{NFSU2_TR(0x633696);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633699:{NFSU2_TR(0x633699);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63369c:{NFSU2_TR(0x63369c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x58ull))));
__builtin_memmove((R+4),(U+0),4);
}
B63369f:{NFSU2_TR(0x63369f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6336a1:{NFSU2_TR(0x6336a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6336a4:{NFSU2_TR(0x6336a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6336a7:{NFSU2_TR(0x6336a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6336aa:{NFSU2_TR(0x6336aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x68ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6336ad:{NFSU2_TR(0x6336ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6336af:{NFSU2_TR(0x6336af);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6336b2:{NFSU2_TR(0x6336b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6336b5:{NFSU2_TR(0x6336b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6336b8:{NFSU2_TR(0x6336b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6336bc:{NFSU2_TR(0x6336bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x604ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6336c2:{NFSU2_TR(0x6336c2);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B6336c4:{NFSU2_TR(0x6336c4);
if(r1(R+518)){{goto L6337bb;}}
}
B6336ca:L6336ca:{c.instructions+=8;NFSU2_TR(0x6336ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6336cd:{NFSU2_TR(0x6336cd);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6336d1:{NFSU2_TR(0x6336d1);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+8,u32(r2(U+0)));
}
B6336d4:{NFSU2_TR(0x6336d4);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6336d7:{NFSU2_TR(0x6336d7);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B6336d9:{NFSU2_TR(0x6336d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6336dc:{NFSU2_TR(0x6336dc);
__builtin_memmove((R+4),(R+24),4);
}
B6336de:{NFSU2_TR(0x6336de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6336e3ull));
TAIL_STATIC(0x4951f0u,495);
}
B6336e3:L6336e3:{c.instructions+=6;NFSU2_TR(0x6336e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6336e6:{NFSU2_TR(0x6336e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6336ea:{NFSU2_TR(0x6336ea);
__builtin_memmove((R+4),gp(0x8a1cb8),4);
}
B6336f0:{NFSU2_TR(0x6336f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6336f3:{NFSU2_TR(0x6336f3);
u8 U[4];
w4(U+0,u32(0x7a8a90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6336f8:{NFSU2_TR(0x6336f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6336fdull));
TAIL_STATIC(0x43db50u,43d);
}
B6336fd:L6336fd:{c.instructions+=3;NFSU2_TR(0x6336fd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B633700:{NFSU2_TR(0x633700);
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
B633702:{NFSU2_TR(0x633702);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6337bb;}}
}
B633708:L633708:{c.instructions+=2;NFSU2_TR(0x633708);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B633710:{NFSU2_TR(0x633710);
__builtin_memmove((R+4),(R+12),4);
}
B633712:L633712:{c.instructions+=3;NFSU2_TR(0x633712);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B633714:{NFSU2_TR(0x633714);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633718:{NFSU2_TR(0x633718);
{goto L633720;}
}
B633720:L633720:{c.instructions+=3;NFSU2_TR(0x633720);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B633724:{NFSU2_TR(0x633724);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B633728:{NFSU2_TR(0x633728);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63372e;}}
}
B63372a:L63372a:{c.instructions+=2;NFSU2_TR(0x63372a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B63372c:{NFSU2_TR(0x63372c);
{goto L633778;}
}
B63372e:L63372e:{c.instructions+=8;NFSU2_TR(0x63372e);
w4(R+0,u32(r2(R+0)));
}
B633731:{NFSU2_TR(0x633731);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B633734:{NFSU2_TR(0x633734);
__builtin_memmove((R+0),gp(0x8a1cc8),4);
}
B633739:{NFSU2_TR(0x633739);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63373c:{NFSU2_TR(0x63373c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B63373f:{NFSU2_TR(0x63373f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B633741:{NFSU2_TR(0x633741);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B633744:{NFSU2_TR(0x633744);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63374d;}}
}
B633746:L633746:{c.instructions+=2;NFSU2_TR(0x633746);
w4(R+0,u32(0xffffffffull));
}
B63374b:{NFSU2_TR(0x63374b);
{goto L633766;}
}
B63374d:L63374d:{c.instructions+=2;NFSU2_TR(0x63374d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B63374f:{NFSU2_TR(0x63374f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63375f;}}
}
B633751:L633751:{c.instructions+=4;NFSU2_TR(0x633751);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B633755:{NFSU2_TR(0x633755);
__builtin_memmove((R+0),gp(0x8a1cb8),4);
}
B63375a:{NFSU2_TR(0x63375a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B63375d:{NFSU2_TR(0x63375d);
{goto L633766;}
}
B63375f:L63375f:{c.instructions+=2;NFSU2_TR(0x63375f);
__builtin_memmove((R+4),(R+24),4);
}
B633761:{NFSU2_TR(0x633761);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633766ull));
TAIL_STATIC(0x4fe110u,4fe);
}
B633766:L633766:{c.instructions+=6;NFSU2_TR(0x633766);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63376a:{NFSU2_TR(0x63376a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63376b:{NFSU2_TR(0x63376b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63376c:{NFSU2_TR(0x63376c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63376d:{NFSU2_TR(0x63376d);
__builtin_memmove((R+4),(R+28),4);
}
B63376f:{NFSU2_TR(0x63376f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633774ull));
TAIL_STATIC(0x60ff80u,60f);
}
B633774:L633774:{c.instructions+=1;NFSU2_TR(0x633774);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B633778:L633778:{c.instructions+=6;NFSU2_TR(0x633778);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B63377a:{NFSU2_TR(0x63377a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B63377b:{NFSU2_TR(0x63377b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B63377e:{NFSU2_TR(0x63377e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B633781:{NFSU2_TR(0x633781);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633785:{NFSU2_TR(0x633785);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x633720u);}goto L633720;}}
}
B633787:L633787:{c.instructions+=5;NFSU2_TR(0x633787);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63378b:{NFSU2_TR(0x63378b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B63378c:{NFSU2_TR(0x63378c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63378f:{NFSU2_TR(0x63378f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633793:{NFSU2_TR(0x633793);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x633712u);}goto L633712;}}
}
B633799:L633799:{c.instructions+=3;NFSU2_TR(0x633799);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63379c:{NFSU2_TR(0x63379c);
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
B63379e:{NFSU2_TR(0x63379e);
if(r1(R+518)){{goto L6337c7;}}
}
B6337a0:L6337a0:{c.instructions+=3;NFSU2_TR(0x6337a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6337a1:{NFSU2_TR(0x6337a1);
u8 U[4];
w4(U+0,u32(0x7a8a60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6337a6:{NFSU2_TR(0x6337a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6337abull));
TAIL_STATIC(0x43db80u,43d);
}
B6337ab:L6337ab:{c.instructions+=9;NFSU2_TR(0x6337ab);
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
B6337ae:{NFSU2_TR(0x6337ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6337af:{NFSU2_TR(0x6337af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6337b2:{NFSU2_TR(0x6337b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6337b3:{NFSU2_TR(0x6337b3);
__builtin_memmove((R+0),(R+20),4);
}
B6337b5:{NFSU2_TR(0x6337b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6337b6:{NFSU2_TR(0x6337b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6337b7:{NFSU2_TR(0x6337b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6337b8:{NFSU2_TR(0x6337b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6337bb:L6337bb:{c.instructions+=3;NFSU2_TR(0x6337bb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6337bf:{NFSU2_TR(0x6337bf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x9ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6337c3:{NFSU2_TR(0x6337c3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xaull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6337c7:L6337c7:{c.instructions+=7;NFSU2_TR(0x6337c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6337c8:{NFSU2_TR(0x6337c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6337c9:{NFSU2_TR(0x6337c9);
__builtin_memmove((R+0),(R+20),4);
}
B6337cb:{NFSU2_TR(0x6337cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6337cc:{NFSU2_TR(0x6337cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6337cd:{NFSU2_TR(0x6337cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6337ce:{NFSU2_TR(0x6337ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6337e0:L6337e0:{c.instructions+=20;NFSU2_TR(0x6337e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B6337e3:{NFSU2_TR(0x6337e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6337e7:{NFSU2_TR(0x6337e7);
__builtin_memmove((R+8),(R+4),4);
}
B6337e9:{NFSU2_TR(0x6337e9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6337ea:{NFSU2_TR(0x6337ea);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6337eb:{NFSU2_TR(0x6337eb);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6337ef:{NFSU2_TR(0x6337ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6337f1:{NFSU2_TR(0x6337f1);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6337f3:{NFSU2_TR(0x6337f3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x590ull))));
}
B6337f8:{NFSU2_TR(0x6337f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6337fb:{NFSU2_TR(0x6337fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6337fe:{NFSU2_TR(0x6337fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B633800:{NFSU2_TR(0x633800);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633801:{NFSU2_TR(0x633801);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633802:{NFSU2_TR(0x633802);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633806:{NFSU2_TR(0x633806);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63380a:{NFSU2_TR(0x63380a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x3full));
s4(u32(r4(U+0)),r4(U+4));
}
B633812:{NFSU2_TR(0x633812);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633816:{NFSU2_TR(0x633816);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63381a:{NFSU2_TR(0x63381a);
{goto L633834;}
}
B63381c:L63381c:{c.instructions+=5;NFSU2_TR(0x63381c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B63381e:{NFSU2_TR(0x63381e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B633822:{NFSU2_TR(0x633822);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633826:{NFSU2_TR(0x633826);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B63382e:{NFSU2_TR(0x63382e);
{goto L633834;}
}
B633830:L633830:{c.instructions+=1;NFSU2_TR(0x633830);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B633834:L633834:{c.instructions+=4;NFSU2_TR(0x633834);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B633838:{NFSU2_TR(0x633838);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B63383a:{NFSU2_TR(0x63383a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63383e:{NFSU2_TR(0x63383e);
__builtin_memmove((R+28),(R+28),4);
}
B633840:L633840:{c.instructions+=2;NFSU2_TR(0x633840);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B633842:{NFSU2_TR(0x633842);
if(r1(R+518)){{goto L633936;}}
}
B633848:L633848:{c.instructions+=3;NFSU2_TR(0x633848);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B63384c:{NFSU2_TR(0x63384c);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B633850:{NFSU2_TR(0x633850);
if(r1(R+518)){{goto L633936;}}
}
B633856:L633856:{c.instructions+=8;NFSU2_TR(0x633856);
__builtin_memmove((R+8),gp(0x8a1cc8),4);
}
B63385c:{NFSU2_TR(0x63385c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63385f:{NFSU2_TR(0x63385f);
w4(R+0,u32(r2(R+0)));
}
B633862:{NFSU2_TR(0x633862);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B633865:{NFSU2_TR(0x633865);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B633868:{NFSU2_TR(0x633868);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B63386b:{NFSU2_TR(0x63386b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B63386d:{NFSU2_TR(0x63386d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L633876;}}
}
B63386f:L63386f:{c.instructions+=2;NFSU2_TR(0x63386f);
w4(R+0,u32(0xffffffffull));
}
B633874:{NFSU2_TR(0x633874);
{goto L63388e;}
}
B633876:L633876:{c.instructions+=2;NFSU2_TR(0x633876);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B633878:{NFSU2_TR(0x633878);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L633889;}}
}
B63387a:L63387a:{c.instructions+=4;NFSU2_TR(0x63387a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B63387e:{NFSU2_TR(0x63387e);
__builtin_memmove((R+4),gp(0x8a1cb8),4);
}
B633884:{NFSU2_TR(0x633884);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B633887:{NFSU2_TR(0x633887);
{goto L63388e;}
}
B633889:L633889:{c.instructions+=1;NFSU2_TR(0x633889);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63388eull));
TAIL_STATIC(0x4fe110u,4fe);
}
B63388e:L63388e:{c.instructions+=6;NFSU2_TR(0x63388e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B633892:{NFSU2_TR(0x633892);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B633894:{NFSU2_TR(0x633894);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B633898:{NFSU2_TR(0x633898);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63389b:{NFSU2_TR(0x63389b);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B63389f:{NFSU2_TR(0x63389f);
if(r1(R+518)){{goto L633932;}}
}
B6338a5:L6338a5:{c.instructions+=2;NFSU2_TR(0x6338a5);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6338a8:{NFSU2_TR(0x6338a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6338ae;}}
}
B6338aa:L6338aa:{c.instructions+=2;NFSU2_TR(0x6338aa);
__builtin_memmove((R+0),(R+4),4);
}
B6338ac:{NFSU2_TR(0x6338ac);
{goto L6338fb;}
}
B6338ae:L6338ae:{c.instructions+=8;NFSU2_TR(0x6338ae);
__builtin_memmove((R+4),(R+12),1);
}
B6338b0:{NFSU2_TR(0x6338b0);
w1(R+4,u8(u32(r1(R+4))+u32(u8(0x41ull))));
}
B6338b3:{NFSU2_TR(0x6338b3);
u8 U[5];
w4(U+0,u32(u32(u32(0x2dull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6338b7:{NFSU2_TR(0x6338b7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B6338bb:{NFSU2_TR(0x6338bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B6338c0:{NFSU2_TR(0x6338c0);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w1(U+4,u8(0x5full));
s1(u32(r4(U+0)),r1(U+4));
}
B6338c5:{NFSU2_TR(0x6338c5);
u8 U[5];
w4(U+0,u32(u32(u32(0x2eull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6338ca:{NFSU2_TR(0x6338ca);
if(r1(R+518)){{goto L6338e4;}}
}
B6338cc:L6338cc:{c.instructions+=7;NFSU2_TR(0x6338cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6338cd:{NFSU2_TR(0x6338cd);
__builtin_memmove((R+0),gp(0x8a1cc8),4);
}
B6338d2:{NFSU2_TR(0x6338d2);
w4(R+8,u32(r2(R+4)));
}
B6338d5:{NFSU2_TR(0x6338d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6338d8:{NFSU2_TR(0x6338d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6338db:{NFSU2_TR(0x6338db);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6338dc:{NFSU2_TR(0x6338dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6338e1ull));
TAIL_STATIC(0x43db80u,43d);
}
B6338e1:L6338e1:{c.instructions+=1;NFSU2_TR(0x6338e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6338e4:L6338e4:{c.instructions+=4;NFSU2_TR(0x6338e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6338e5:{NFSU2_TR(0x6338e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6338e7:{NFSU2_TR(0x6338e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6338e8:{NFSU2_TR(0x6338e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6338edull));
TAIL_STATIC(0x43db80u,43d);
}
B6338ed:L6338ed:{c.instructions+=4;NFSU2_TR(0x6338ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6338ee:{NFSU2_TR(0x6338ee);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6338f2:{NFSU2_TR(0x6338f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6338f3:{NFSU2_TR(0x6338f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6338f8ull));
TAIL_STATIC(0x43db80u,43d);
}
B6338f8:L6338f8:{c.instructions+=1;NFSU2_TR(0x6338f8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6338fb:L6338fb:{c.instructions+=2;NFSU2_TR(0x6338fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6338fd:{NFSU2_TR(0x6338fd);
if(r1(R+518)){{goto L633932;}}
}
B6338ff:L6338ff:{c.instructions+=2;NFSU2_TR(0x6338ff);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xc0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B633905:{NFSU2_TR(0x633905);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L633932;}}
}
B633907:L633907:{c.instructions+=3;NFSU2_TR(0x633907);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B633909:{NFSU2_TR(0x633909);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63390b:{NFSU2_TR(0x63390b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L633920;}}
}
B63390d:L63390d:{c.instructions+=2;NFSU2_TR(0x63390d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B633911:{NFSU2_TR(0x633911);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x18ull))));
}
B633914:L633914:{c.instructions+=2;NFSU2_TR(0x633914);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B633916:{NFSU2_TR(0x633916);
if(r1(R+518)){{goto L633920;}}
}
B633918:L633918:{c.instructions+=4;NFSU2_TR(0x633918);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B633919:{NFSU2_TR(0x633919);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B63391c:{NFSU2_TR(0x63391c);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63391e:{NFSU2_TR(0x63391e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x633914u);}goto L633914;}}
}
B633920:L633920:{c.instructions+=2;NFSU2_TR(0x633920);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B633922:{NFSU2_TR(0x633922);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L633932;}}
}
B633924:L633924:{c.instructions+=5;NFSU2_TR(0x633924);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B633928:{NFSU2_TR(0x633928);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B63392a:{NFSU2_TR(0x63392a);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B63392b:{NFSU2_TR(0x63392b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B63392e:{NFSU2_TR(0x63392e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633932:L633932:{c.instructions+=1;NFSU2_TR(0x633932);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B633936:L633936:{c.instructions+=3;NFSU2_TR(0x633936);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B633937:{NFSU2_TR(0x633937);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63393a:{NFSU2_TR(0x63393a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x633840u);}goto L633840;}}
}
B633940:L633940:{c.instructions+=5;NFSU2_TR(0x633940);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B633944:{NFSU2_TR(0x633944);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B633947:{NFSU2_TR(0x633947);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63394a:{NFSU2_TR(0x63394a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63394e:{NFSU2_TR(0x63394e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x633830u);}goto L633830;}}
}
B633954:L633954:{c.instructions+=7;NFSU2_TR(0x633954);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B633958:{NFSU2_TR(0x633958);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63395c:{NFSU2_TR(0x63395c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B63395f:{NFSU2_TR(0x63395f);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B633960:{NFSU2_TR(0x633960);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633964:{NFSU2_TR(0x633964);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633968:{NFSU2_TR(0x633968);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63381cu);}goto L63381c;}}
}
B63396e:L63396e:{c.instructions+=2;NFSU2_TR(0x63396e);
u8 U[4];
w4(U+0,u32(0x7a8b30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633973:{NFSU2_TR(0x633973);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633978ull));
TAIL_STATIC(0x43db50u,43d);
}
B633978:L633978:{c.instructions+=5;NFSU2_TR(0x633978);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63397c:{NFSU2_TR(0x63397c);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B633980:{NFSU2_TR(0x633980);
u8 U[4];
w4(U+0,u32(0x7a8b14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633985:{NFSU2_TR(0x633985);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B633986:{NFSU2_TR(0x633986);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63398bull));
TAIL_STATIC(0x43db50u,43d);
}
B63398b:L63398b:{c.instructions+=4;NFSU2_TR(0x63398b);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B63398f:{NFSU2_TR(0x63398f);
u8 U[4];
w4(U+0,u32(0x7a8af8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633994:{NFSU2_TR(0x633994);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B633995:{NFSU2_TR(0x633995);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63399aull));
TAIL_STATIC(0x43db50u,43d);
}
B63399a:L63399a:{c.instructions+=4;NFSU2_TR(0x63399a);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B63399e:{NFSU2_TR(0x63399e);
u8 U[4];
w4(U+0,u32(0x7a8ad8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6339a3:{NFSU2_TR(0x6339a3);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B6339a4:{NFSU2_TR(0x6339a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6339a9ull));
TAIL_STATIC(0x43db50u,43d);
}
B6339a9:L6339a9:{c.instructions+=4;NFSU2_TR(0x6339a9);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6339ad:{NFSU2_TR(0x6339ad);
u8 U[4];
w4(U+0,u32(0x7a8ab8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6339b2:{NFSU2_TR(0x6339b2);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B6339b3:{NFSU2_TR(0x6339b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6339b8ull));
TAIL_STATIC(0x43db50u,43d);
}
B6339b8:L6339b8:{c.instructions+=4;NFSU2_TR(0x6339b8);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6339bc:{NFSU2_TR(0x6339bc);
u8 U[4];
w4(U+0,u32(0x7a8a98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6339c1:{NFSU2_TR(0x6339c1);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B6339c2:{NFSU2_TR(0x6339c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6339c7ull));
TAIL_STATIC(0x43db50u,43d);
}
B6339c7:L6339c7:{c.instructions+=5;NFSU2_TR(0x6339c7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6339ca:{NFSU2_TR(0x6339ca);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6339ce:{NFSU2_TR(0x6339ce);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B6339cf:{NFSU2_TR(0x6339cf);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6339d5:{NFSU2_TR(0x6339d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6339e8;}}
}
B6339d7:L6339d7:{c.instructions+=9;NFSU2_TR(0x6339d7);
__builtin_memmove((R+0),(R+20),4);
}
B6339d9:{NFSU2_TR(0x6339d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6339da:{NFSU2_TR(0x6339da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6339dd:{NFSU2_TR(0x6339dd);
__builtin_memmove((R+0),(R+24),4);
}
B6339df:{NFSU2_TR(0x6339df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6339e0:{NFSU2_TR(0x6339e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6339e1:{NFSU2_TR(0x6339e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6339e2:{NFSU2_TR(0x6339e2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6339e5:{NFSU2_TR(0x6339e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6339e8:L6339e8:{c.instructions+=8;NFSU2_TR(0x6339e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6339e9:{NFSU2_TR(0x6339e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6339ec:{NFSU2_TR(0x6339ec);
__builtin_memmove((R+0),(R+24),4);
}
B6339ee:{NFSU2_TR(0x6339ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6339ef:{NFSU2_TR(0x6339ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6339f0:{NFSU2_TR(0x6339f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6339f1:{NFSU2_TR(0x6339f1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6339f4:{NFSU2_TR(0x6339f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B633a00:L633a00:{c.instructions+=7;NFSU2_TR(0x633a00);
__builtin_memmove((R+0),gp(0x8900ac),4);
}
B633a05:{NFSU2_TR(0x633a05);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B633a08:{NFSU2_TR(0x633a08);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B633a0b:{NFSU2_TR(0x633a0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B633a0e:{NFSU2_TR(0x633a0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B633a14:{NFSU2_TR(0x633a14);
u8 U[22];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
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
B633a17:{NFSU2_TR(0x633a17);
if(r1(R+518)){{goto L633a36;}}
}
B633a19:L633a19:{c.instructions+=2;NFSU2_TR(0x633a19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633a1a:{NFSU2_TR(0x633a1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633a1full));
TAIL_STATIC(0x61c600u,61c);
}
B633a1f:L633a1f:{c.instructions+=1;NFSU2_TR(0x633a1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633a24ull));
TAIL_STATIC(0x571060u,571);
}
B633a24:L633a24:{c.instructions+=2;NFSU2_TR(0x633a24);
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
B633a26:{NFSU2_TR(0x633a26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L633a36;}}
}
B633a28:L633a28:{c.instructions+=1;NFSU2_TR(0x633a28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633a2dull));
TAIL_STATIC(0x57ef60u,57e);
}
B633a2d:L633a2d:{c.instructions+=1;NFSU2_TR(0x633a2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633a32ull));
TAIL_STATIC(0x571060u,571);
}
B633a32:L633a32:{c.instructions+=2;NFSU2_TR(0x633a32);
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
B633a34:{NFSU2_TR(0x633a34);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x633a28u);}goto L633a28;}}
}
B633a36:L633a36:{c.instructions+=1;NFSU2_TR(0x633a36);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B633a40:L633a40:{c.instructions+=20;NFSU2_TR(0x633a40);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633a41:{NFSU2_TR(0x633a41);
__builtin_memmove((R+12),(R+4),4);
}
B633a43:{NFSU2_TR(0x633a43);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633a44:{NFSU2_TR(0x633a44);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B633a48:{NFSU2_TR(0x633a48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B633a4b:{NFSU2_TR(0x633a4b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B633a4d:{NFSU2_TR(0x633a4d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B633a50:{NFSU2_TR(0x633a50);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B633a53:{NFSU2_TR(0x633a53);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B633a56:{NFSU2_TR(0x633a56);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B633a59:{NFSU2_TR(0x633a59);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B633a5c:{NFSU2_TR(0x633a5c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633a5d:{NFSU2_TR(0x633a5d);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B633a60:{NFSU2_TR(0x633a60);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B633a63:{NFSU2_TR(0x633a63);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633a64:{NFSU2_TR(0x633a64);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B633a67:{NFSU2_TR(0x633a67);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B633a6a:{NFSU2_TR(0x633a6a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633a6b:{NFSU2_TR(0x633a6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B633a6e:{NFSU2_TR(0x633a6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633a73ull));
TAIL_STATIC(0x61f5f0u,61f);
}
B633a73:L633a73:{c.instructions+=13;NFSU2_TR(0x633a73);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x580ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B633a79:{NFSU2_TR(0x633a79);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x580ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B633a7f:{NFSU2_TR(0x633a7f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x581ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B633a85:{NFSU2_TR(0x633a85);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x581ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B633a8b:{NFSU2_TR(0x633a8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x584ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B633a91:{NFSU2_TR(0x633a91);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x584ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633a97:{NFSU2_TR(0x633a97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x588ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B633a9d:{NFSU2_TR(0x633a9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x588ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633aa3:{NFSU2_TR(0x633aa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x58cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B633aa9:{NFSU2_TR(0x633aa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633aaf:{NFSU2_TR(0x633aaf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x590ull))));
__builtin_memmove((R+24),(U+0),4);
}
B633ab5:{NFSU2_TR(0x633ab5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x590ull))));
__builtin_memmove((R+28),(U+0),4);
}
B633abb:{NFSU2_TR(0x633abb);
w4(R+4,u32(0xaaull));
}
B633ac0:L633ac0:{c.instructions+=1;NFSU2_TR(0x633ac0);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L633ac2;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x633ac0u);}goto L633ac0;}
}
B633ac2:L633ac2:{c.instructions+=3;NFSU2_TR(0x633ac2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x838ull))));
__builtin_memmove((R+24),(U+0),4);
}
B633ac8:{NFSU2_TR(0x633ac8);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x838ull))));
__builtin_memmove((R+28),(U+0),4);
}
B633ace:{NFSU2_TR(0x633ace);
w4(R+4,u32(0x2aull));
}
B633ad3:L633ad3:{c.instructions+=1;NFSU2_TR(0x633ad3);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L633ad5;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x633ad3u);}goto L633ad3;}
}
B633ad5:L633ad5:{c.instructions+=11;NFSU2_TR(0x633ad5);
u8 U[36];
__builtin_memmove((U+18),(R+28),4);
w4(U+22,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+26,u32(r1(R+522)));
w4(U+30,u32(u32(u32(0x4ull))*u32(r4(U+26))));
w4(R+28,u32(u32(r4(U+22))-u32(r4(U+30))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),2);
__builtin_memmove((U+34),(U+16),2);
s2(u32(r4(U+18)),r2(U+34));
}
B633ad7:{NFSU2_TR(0x633ad7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B633add:{NFSU2_TR(0x633add);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B633ade:{NFSU2_TR(0x633ade);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8e4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633ae4:{NFSU2_TR(0x633ae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B633aea:{NFSU2_TR(0x633aea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B633aeb:{NFSU2_TR(0x633aeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8e8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633af1:{NFSU2_TR(0x633af1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B633af2:{NFSU2_TR(0x633af2);
__builtin_memmove((R+0),(R+12),4);
}
B633af4:{NFSU2_TR(0x633af4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B633af5:{NFSU2_TR(0x633af5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B633b00:L633b00:{c.instructions+=13;NFSU2_TR(0x633b00);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B633b06:{NFSU2_TR(0x633b06);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633b08:{NFSU2_TR(0x633b08);
u8 U[4];
w4(U+0,u32(0x77a1dbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633b0d:{NFSU2_TR(0x633b0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633b0e:{NFSU2_TR(0x633b0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633b15:{NFSU2_TR(0x633b15);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633b16:{NFSU2_TR(0x633b16);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633b17:{NFSU2_TR(0x633b17);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B633b1b:{NFSU2_TR(0x633b1b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633b1c:{NFSU2_TR(0x633b1c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633b1d:{NFSU2_TR(0x633b1d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633b1e:{NFSU2_TR(0x633b1e);
__builtin_memmove((R+28),(R+4),4);
}
B633b20:{NFSU2_TR(0x633b20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633b25ull));
TAIL_STATIC(0x61c990u,61c);
}
B633b25:L633b25:{c.instructions+=3;NFSU2_TR(0x633b25);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B633b27:{NFSU2_TR(0x633b27);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B633b29:{NFSU2_TR(0x633b29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L633b77;}}
}
B633b2b:L633b2b:{c.instructions+=3;NFSU2_TR(0x633b2b);
__builtin_memmove((R+0),gp(0x8a1cf8),4);
}
B633b30:{NFSU2_TR(0x633b30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633b31:{NFSU2_TR(0x633b31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633b36ull));
TAIL_STATIC(0x440e50u,440);
}
B633b36:L633b36:{c.instructions+=6;NFSU2_TR(0x633b36);
__builtin_memmove((R+24),(R+0),4);
}
B633b38:{NFSU2_TR(0x633b38);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B633b3b:{NFSU2_TR(0x633b3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633b3f:{NFSU2_TR(0x633b3f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B633b41:{NFSU2_TR(0x633b41);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633b45:{NFSU2_TR(0x633b45);
if(r1(R+518)){{goto L633b65;}}
}
B633b47:L633b47:{c.instructions+=4;NFSU2_TR(0x633b47);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B633b4a:{NFSU2_TR(0x633b4a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633b4b:{NFSU2_TR(0x633b4b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633b4c:{NFSU2_TR(0x633b4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633b51ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B633b51:L633b51:{c.instructions+=7;NFSU2_TR(0x633b51);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B633b54:{NFSU2_TR(0x633b54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633b57:{NFSU2_TR(0x633b57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633b5a:{NFSU2_TR(0x633b5a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B633b5e:{NFSU2_TR(0x633b5e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5aull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B633b61:{NFSU2_TR(0x633b61);
__builtin_memmove((R+0),(R+24),4);
}
B633b63:{NFSU2_TR(0x633b63);
{goto L633b67;}
}
B633b65:L633b65:{c.instructions+=1;NFSU2_TR(0x633b65);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B633b67:L633b67:{c.instructions+=6;NFSU2_TR(0x633b67);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B633b6a:{NFSU2_TR(0x633b6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B633b6d:{NFSU2_TR(0x633b6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B633b6f:{NFSU2_TR(0x633b6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633b72:{NFSU2_TR(0x633b72);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633b75:{NFSU2_TR(0x633b75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B633b77:L633b77:{c.instructions+=9;NFSU2_TR(0x633b77);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B633b7b:{NFSU2_TR(0x633b7b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B633b7f:{NFSU2_TR(0x633b7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B633b80:{NFSU2_TR(0x633b80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B633b81:{NFSU2_TR(0x633b81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B633b82:{NFSU2_TR(0x633b82);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633b89:{NFSU2_TR(0x633b89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B633b8a:{NFSU2_TR(0x633b8a);
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
B633b8d:{NFSU2_TR(0x633b8d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B633b90:L633b90:{c.instructions+=11;NFSU2_TR(0x633b90);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B633b96:{NFSU2_TR(0x633b96);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633b98:{NFSU2_TR(0x633b98);
u8 U[4];
w4(U+0,u32(0x77a1fbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633b9d:{NFSU2_TR(0x633b9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633b9e:{NFSU2_TR(0x633b9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633ba5:{NFSU2_TR(0x633ba5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633ba6:{NFSU2_TR(0x633ba6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633ba7:{NFSU2_TR(0x633ba7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B633bab:{NFSU2_TR(0x633bab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633bac:{NFSU2_TR(0x633bac);
__builtin_memmove((R+24),(R+4),4);
}
B633bae:{NFSU2_TR(0x633bae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633bb3ull));
TAIL_STATIC(0x61c9d0u,61c);
}
B633bb3:L633bb3:{c.instructions+=2;NFSU2_TR(0x633bb3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B633bb5:{NFSU2_TR(0x633bb5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L633bf6;}}
}
B633bb7:L633bb7:{c.instructions+=3;NFSU2_TR(0x633bb7);
__builtin_memmove((R+0),gp(0x8a1cf4),4);
}
B633bbc:{NFSU2_TR(0x633bbc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633bbd:{NFSU2_TR(0x633bbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633bc2ull));
TAIL_STATIC(0x440e50u,440);
}
B633bc2:L633bc2:{c.instructions+=5;NFSU2_TR(0x633bc2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B633bc5:{NFSU2_TR(0x633bc5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633bc9:{NFSU2_TR(0x633bc9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B633bcb:{NFSU2_TR(0x633bcb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B633bd3:{NFSU2_TR(0x633bd3);
if(r1(R+518)){{goto L633be4;}}
}
B633bd5:L633bd5:{c.instructions+=5;NFSU2_TR(0x633bd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B633bd9:{NFSU2_TR(0x633bd9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633bda:{NFSU2_TR(0x633bda);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633bdb:{NFSU2_TR(0x633bdb);
__builtin_memmove((R+4),(R+0),4);
}
B633bdd:{NFSU2_TR(0x633bdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633be2ull));
TAIL_STATIC(0x61c570u,61c);
}
B633be2:L633be2:{c.instructions+=1;NFSU2_TR(0x633be2);
{goto L633be6;}
}
B633be4:L633be4:{c.instructions+=1;NFSU2_TR(0x633be4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B633be6:L633be6:{c.instructions+=6;NFSU2_TR(0x633be6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B633be9:{NFSU2_TR(0x633be9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B633bec:{NFSU2_TR(0x633bec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B633bee:{NFSU2_TR(0x633bee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633bf1:{NFSU2_TR(0x633bf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633bf4:{NFSU2_TR(0x633bf4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B633bf6:L633bf6:{c.instructions+=7;NFSU2_TR(0x633bf6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B633bfa:{NFSU2_TR(0x633bfa);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B633bfe:{NFSU2_TR(0x633bfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B633bff:{NFSU2_TR(0x633bff);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633c06:{NFSU2_TR(0x633c06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B633c07:{NFSU2_TR(0x633c07);
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
B633c0a:{NFSU2_TR(0x633c0a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B633c10:L633c10:{c.instructions+=5;NFSU2_TR(0x633c10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633c11:{NFSU2_TR(0x633c11);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B633c15:{NFSU2_TR(0x633c15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x304ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B633c1b:{NFSU2_TR(0x633c1b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633c1c:{NFSU2_TR(0x633c1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633c21ull));
TAIL_STATIC(0x61d790u,61d);
}
B633c21:L633c21:{c.instructions+=4;NFSU2_TR(0x633c21);
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
B633c24:{NFSU2_TR(0x633c24);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B633c2b:{NFSU2_TR(0x633c2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B633c2c:{NFSU2_TR(0x633c2c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B633c30:L633c30:{c.instructions+=11;NFSU2_TR(0x633c30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B633c33:{NFSU2_TR(0x633c33);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B633c37:{NFSU2_TR(0x633c37);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633c38:{NFSU2_TR(0x633c38);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633c39:{NFSU2_TR(0x633c39);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633c3a:{NFSU2_TR(0x633c3a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B633c3c:{NFSU2_TR(0x633c3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B633c3e:{NFSU2_TR(0x633c3e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633c3f:{NFSU2_TR(0x633c3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633c43:{NFSU2_TR(0x633c43);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633c47:{NFSU2_TR(0x633c47);
if(r1(R+518)){{goto L633c5a;}}
}
B633c49:L633c49:{c.instructions+=3;NFSU2_TR(0x633c49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633c4a:{NFSU2_TR(0x633c4a);
w4(R+4,u32(0x83579cull));
}
B633c4f:{NFSU2_TR(0x633c4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633c54ull));
TAIL_STATIC(0x48ce80u,48c);
}
B633c54:L633c54:{c.instructions+=2;NFSU2_TR(0x633c54);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633c58:{NFSU2_TR(0x633c58);
__builtin_memmove((R+24),(R+0),4);
}
B633c5a:L633c5a:{c.instructions+=5;NFSU2_TR(0x633c5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B633c5e:{NFSU2_TR(0x633c5e);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B633c60:{NFSU2_TR(0x633c60);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B633c62:{NFSU2_TR(0x633c62);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B633c64:{NFSU2_TR(0x633c64);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L633cfd;}}
}
B633c6a:L633c6a:{c.instructions+=1;NFSU2_TR(0x633c6a);
__builtin_memmove((R+12),(R+12),4);
}
B633c70:L633c70:{c.instructions+=4;NFSU2_TR(0x633c70);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B633c74:{NFSU2_TR(0x633c74);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B633c77:{NFSU2_TR(0x633c77);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B633c79:{NFSU2_TR(0x633c79);
if(r1(R+518)){{goto L633cf0;}}
}
B633c7b:L633c7b:{c.instructions+=2;NFSU2_TR(0x633c7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B633c7d:{NFSU2_TR(0x633c7d);
if(r1(R+518)){{goto L633c8e;}}
}
B633c7f:L633c7f:{c.instructions+=3;NFSU2_TR(0x633c7f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633c80:{NFSU2_TR(0x633c80);
w4(R+4,u32(0x83579cull));
}
B633c85:{NFSU2_TR(0x633c85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633c8aull));
TAIL_STATIC(0x48ced0u,48c);
}
B633c8a:L633c8a:{c.instructions+=2;NFSU2_TR(0x633c8a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B633c8c:{NFSU2_TR(0x633c8c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L633cf0;}}
}
B633c8e:L633c8e:{c.instructions+=5;NFSU2_TR(0x633c8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B633c92:{NFSU2_TR(0x633c92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B633c95:{NFSU2_TR(0x633c95);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x38ull))));
}
B633c98:{NFSU2_TR(0x633c98);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B633c9a:{NFSU2_TR(0x633c9a);
if(r1(R+518)){{goto L633cab;}}
}
B633c9c:L633c9c:{c.instructions+=1;NFSU2_TR(0x633c9c);
__builtin_memmove((R+16),(R+16),4);
}
B633ca0:L633ca0:{c.instructions+=2;NFSU2_TR(0x633ca0);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B633ca3:{NFSU2_TR(0x633ca3);
if(r1(R+518)){{goto L633ce0;}}
}
B633ca5:L633ca5:{c.instructions+=3;NFSU2_TR(0x633ca5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B633ca7:{NFSU2_TR(0x633ca7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B633ca9:{NFSU2_TR(0x633ca9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x633ca0u);}goto L633ca0;}}
}
B633cab:L633cab:{c.instructions+=3;NFSU2_TR(0x633cab);
__builtin_memmove((R+4),gp(0x8a1cfc),4);
}
B633cb1:{NFSU2_TR(0x633cb1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633cb2:{NFSU2_TR(0x633cb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633cb7ull));
TAIL_STATIC(0x440e50u,440);
}
B633cb7:L633cb7:{c.instructions+=3;NFSU2_TR(0x633cb7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B633cba:{NFSU2_TR(0x633cba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B633cbc:{NFSU2_TR(0x633cbc);
if(r1(R+518)){{goto L633cd1;}}
}
B633cbe:L633cbe:{c.instructions+=5;NFSU2_TR(0x633cbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633cc1:{NFSU2_TR(0x633cc1);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w2(U+4,u16(0x0ull));
s2(u32(r4(U+0)),r2(U+4));
}
B633cc7:{NFSU2_TR(0x633cc7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B633ccb:{NFSU2_TR(0x633ccb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B633ccf:{NFSU2_TR(0x633ccf);
{goto L633cd3;}
}
B633cd1:L633cd1:{c.instructions+=1;NFSU2_TR(0x633cd1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B633cd3:L633cd3:{c.instructions+=5;NFSU2_TR(0x633cd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B633cd6:{NFSU2_TR(0x633cd6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B633cd8:{NFSU2_TR(0x633cd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633cdb:{NFSU2_TR(0x633cdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633cde:{NFSU2_TR(0x633cde);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B633ce0:L633ce0:{c.instructions+=5;NFSU2_TR(0x633ce0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B633ce4:{NFSU2_TR(0x633ce4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B633ce8:{NFSU2_TR(0x633ce8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B633cec:{NFSU2_TR(0x633cec);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B633cef:{NFSU2_TR(0x633cef);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B633cf0:L633cf0:{c.instructions+=4;NFSU2_TR(0x633cf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B633cf4:{NFSU2_TR(0x633cf4);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B633cf5:{NFSU2_TR(0x633cf5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B633cf7:{NFSU2_TR(0x633cf7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x633c70u);}goto L633c70;}}
}
B633cfd:L633cfd:{c.instructions+=3;NFSU2_TR(0x633cfd);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B633d01:{NFSU2_TR(0x633d01);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B633d03:{NFSU2_TR(0x633d03);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L633d12;}}
}
B633d05:L633d05:{c.instructions+=4;NFSU2_TR(0x633d05);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B633d09:{NFSU2_TR(0x633d09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B633d0c:{NFSU2_TR(0x633d0c);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+20))));
}
B633d0e:{NFSU2_TR(0x633d0e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B633d10:L633d10:{c.instructions+=1;NFSU2_TR(0x633d10);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L633d12;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x633d10u);}goto L633d10;}
}
B633d12:L633d12:{c.instructions+=7;NFSU2_TR(0x633d12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B633d13:{NFSU2_TR(0x633d13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B633d14:{NFSU2_TR(0x633d14);
__builtin_memmove((R+0),(R+20),4);
}
B633d16:{NFSU2_TR(0x633d16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B633d17:{NFSU2_TR(0x633d17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B633d18:{NFSU2_TR(0x633d18);
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
B633d1b:{NFSU2_TR(0x633d1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B633d20:L633d20:{c.instructions+=12;NFSU2_TR(0x633d20);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B633d24:{NFSU2_TR(0x633d24);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B633d28:{NFSU2_TR(0x633d28);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B633d2c:{NFSU2_TR(0x633d2c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633d2d:{NFSU2_TR(0x633d2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B633d31:{NFSU2_TR(0x633d31);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633d32:{NFSU2_TR(0x633d32);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B633d36:{NFSU2_TR(0x633d36);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633d37:{NFSU2_TR(0x633d37);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633d38:{NFSU2_TR(0x633d38);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633d39:{NFSU2_TR(0x633d39);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B633d3d:{NFSU2_TR(0x633d3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633d42ull));
TAIL_STATIC(0x61cbb0u,61c);
}
B633d42:L633d42:{c.instructions+=1;NFSU2_TR(0x633d42);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B633d50:L633d50:{c.instructions+=6;NFSU2_TR(0x633d50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B633d53:{NFSU2_TR(0x633d53);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633d54:{NFSU2_TR(0x633d54);
__builtin_memmove((R+28),(R+4),4);
}
B633d56:{NFSU2_TR(0x633d56);
__builtin_memmove((R+4),gp(0x89e7d2),1);
}
B633d5c:{NFSU2_TR(0x633d5c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B633d5e:{NFSU2_TR(0x633d5e);
if(r1(R+518)){{goto L633d74;}}
}
B633d60:L633d60:{c.instructions+=5;NFSU2_TR(0x633d60);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B633d64:{NFSU2_TR(0x633d64);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633d68:{NFSU2_TR(0x633d68);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B633d6c:{NFSU2_TR(0x633d6c);
{u32 ea_=u32(u32(7904964u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B633d72:{NFSU2_TR(0x633d72);
{goto L633d7a;}
}
B633d74:L633d74:{c.instructions+=1;NFSU2_TR(0x633d74);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B633d7a:L633d7a:{c.instructions+=9;NFSU2_TR(0x633d7a);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B633d7e:{NFSU2_TR(0x633d7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633d82:{NFSU2_TR(0x633d82);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B633d86:{NFSU2_TR(0x633d86);
{u32 ea_=u32(u32(7904964u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B633d8c:{NFSU2_TR(0x633d8c);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B633d90:{NFSU2_TR(0x633d90);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B633d94:{NFSU2_TR(0x633d94);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B633d96:{NFSU2_TR(0x633d96);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B633d99:{NFSU2_TR(0x633d99);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L633e66;}}
}
B633d9f:L633d9f:{c.instructions+=2;NFSU2_TR(0x633d9f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B633da1:{NFSU2_TR(0x633da1);
if(r1(R+518)){{goto L633db7;}}
}
B633da3:L633da3:{c.instructions+=5;NFSU2_TR(0x633da3);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B633da7:{NFSU2_TR(0x633da7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633dab:{NFSU2_TR(0x633dab);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B633daf:{NFSU2_TR(0x633daf);
{u32 ea_=u32(u32(7904964u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B633db5:{NFSU2_TR(0x633db5);
{goto L633dbd;}
}
B633db7:L633db7:{c.instructions+=1;NFSU2_TR(0x633db7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B633dbd:L633dbd:{c.instructions+=6;NFSU2_TR(0x633dbd);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B633dc1:{NFSU2_TR(0x633dc1);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B633dc3:{NFSU2_TR(0x633dc3);
{u32 ea_=u32(u32(7885248u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B633dc9:{NFSU2_TR(0x633dc9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B633dcb:{NFSU2_TR(0x633dcb);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B633dce:{NFSU2_TR(0x633dce);
if(r1(R+518)){{goto L633df3;}}
}
B633dd0:L633dd0:{c.instructions+=2;NFSU2_TR(0x633dd0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B633dd2:{NFSU2_TR(0x633dd2);
if(r1(R+518)){{goto L633df3;}}
}
B633dd4:L633dd4:{c.instructions+=8;NFSU2_TR(0x633dd4);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B633dd8:{NFSU2_TR(0x633dd8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633ddc:{NFSU2_TR(0x633ddc);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B633de0:{NFSU2_TR(0x633de0);
{u32 ea_=u32(u32(7904964u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B633de6:{NFSU2_TR(0x633de6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B633dec:{NFSU2_TR(0x633dec);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B633dee:{NFSU2_TR(0x633dee);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B633df1:{NFSU2_TR(0x633df1);
if(r1(R+514)){{goto L633e66;}}
}
B633df3:L633df3:{c.instructions+=5;NFSU2_TR(0x633df3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B633df6:{NFSU2_TR(0x633df6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633df7:{NFSU2_TR(0x633df7);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B633df9:{NFSU2_TR(0x633df9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B633dfb:{NFSU2_TR(0x633dfb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L633e3e;}}
}
B633dfd:L633dfd:{c.instructions+=2;NFSU2_TR(0x633dfd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633dfe:{NFSU2_TR(0x633dfe);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x74ull))));
__builtin_memmove((R+24),(U+0),4);
}
B633e01:L633e01:{c.instructions+=3;NFSU2_TR(0x633e01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B633e04:{NFSU2_TR(0x633e04);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B633e06:{NFSU2_TR(0x633e06);
if(r1(R+518)){{goto L633e32;}}
}
B633e08:L633e08:{c.instructions+=2;NFSU2_TR(0x633e08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B633e0b:{NFSU2_TR(0x633e0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633e10ull));
TAIL_STATIC(0x488ee0u,488);
}
B633e10:L633e10:{c.instructions+=8;NFSU2_TR(0x633e10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B633e13:{NFSU2_TR(0x633e13);
u8 U[4];
w4(U+0,u32(0x633d20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633e18:{NFSU2_TR(0x633e18);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffecull))));
__builtin_memmove((R+8),(U+0),4);
}
B633e1b:{NFSU2_TR(0x633e1b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633e1c:{NFSU2_TR(0x633e1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633e1d:{NFSU2_TR(0x633e1d);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B633e23:{NFSU2_TR(0x633e23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B633e2a:{NFSU2_TR(0x633e2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633e2full));
TAIL_STATIC(0x4022c0u,402);
}
B633e2f:L633e2f:{c.instructions+=1;NFSU2_TR(0x633e2f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B633e32:L633e32:{c.instructions+=5;NFSU2_TR(0x633e32);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B633e35:{NFSU2_TR(0x633e35);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B633e36:{NFSU2_TR(0x633e36);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1cull))));
}
B633e39:{NFSU2_TR(0x633e39);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B633e3b:{NFSU2_TR(0x633e3b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x633e01u);}goto L633e01;}}
}
B633e3d:L633e3d:{c.instructions+=1;NFSU2_TR(0x633e3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B633e3e:L633e3e:{c.instructions+=3;NFSU2_TR(0x633e3e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B633e40:{NFSU2_TR(0x633e40);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B633e42:{NFSU2_TR(0x633e42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B633e43:L633e43:{c.instructions+=3;NFSU2_TR(0x633e43);
__builtin_memmove((R+4),gp(0x89e7d2),1);
}
B633e49:{NFSU2_TR(0x633e49);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B633e4b:{NFSU2_TR(0x633e4b);
if(r1(R+518)){{goto L633e54;}}
}
B633e4d:L633e4d:{c.instructions+=2;NFSU2_TR(0x633e4d);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(r1(U+12)));
}
B633e52:{NFSU2_TR(0x633e52);
{goto L633e56;}
}
B633e54:L633e54:{c.instructions+=1;NFSU2_TR(0x633e54);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B633e56:L633e56:{c.instructions+=5;NFSU2_TR(0x633e56);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B633e58:{NFSU2_TR(0x633e58);
u8 U[13];
w4(U+0,u32(u32(u32(0x2aull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B633e5c:{NFSU2_TR(0x633e5c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B633e5d:{NFSU2_TR(0x633e5d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x20ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B633e60:{NFSU2_TR(0x633e60);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x633e43u);}goto L633e43;}}
}
B633e62:L633e62:{c.instructions+=1;NFSU2_TR(0x633e62);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4aull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B633e66:L633e66:{c.instructions+=3;NFSU2_TR(0x633e66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B633e67:{NFSU2_TR(0x633e67);
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
B633e6a:{NFSU2_TR(0x633e6a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B633e70:L633e70:{c.instructions+=8;NFSU2_TR(0x633e70);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633e71:{NFSU2_TR(0x633e71);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633e72:{NFSU2_TR(0x633e72);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633e73:{NFSU2_TR(0x633e73);
__builtin_memmove((R+28),(R+4),4);
}
B633e75:{NFSU2_TR(0x633e75);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((R+24),(U+0),4);
}
B633e78:{NFSU2_TR(0x633e78);
__builtin_memmove((R+0),(R+24),4);
}
B633e7a:{NFSU2_TR(0x633e7a);
w4(R+4,u32(0x6ull));
}
B633e7f:{NFSU2_TR(0x633e7f);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B633e81:L633e81:{c.instructions+=5;NFSU2_TR(0x633e81);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633e84:{NFSU2_TR(0x633e84);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+0)),r4(U+0));
}
B633e86:{NFSU2_TR(0x633e86);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B633e89:{NFSU2_TR(0x633e89);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B633e8a:{NFSU2_TR(0x633e8a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x633e81u);}goto L633e81;}}
}
B633e8c:L633e8c:{c.instructions+=4;NFSU2_TR(0x633e8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B633e90:{NFSU2_TR(0x633e90);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B633e92:{NFSU2_TR(0x633e92);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B633e94:{NFSU2_TR(0x633e94);
if(r1(R+518)){{goto L633e9b;}}
}
B633e96:L633e96:{c.instructions+=2;NFSU2_TR(0x633e96);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B633e99:{NFSU2_TR(0x633e99);
{goto L633e9d;}
}
B633e9b:L633e9b:{c.instructions+=1;NFSU2_TR(0x633e9b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B633e9d:L633e9d:{c.instructions+=3;NFSU2_TR(0x633e9d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633e9e:{NFSU2_TR(0x633e9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633ea1:{NFSU2_TR(0x633ea1);
w4(R+12,u32(0x6ull));
}
B633ea6:L633ea6:{c.instructions+=4;NFSU2_TR(0x633ea6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B633ea8:{NFSU2_TR(0x633ea8);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B633eaa:{NFSU2_TR(0x633eaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633ead:{NFSU2_TR(0x633ead);
if(r1(R+518)){{goto L633eb7;}}
}
B633eaf:L633eaf:{c.instructions+=3;NFSU2_TR(0x633eaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B633eb1:{NFSU2_TR(0x633eb1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633eb3:{NFSU2_TR(0x633eb3);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633eb5ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B633eb5:L633eb5:{c.instructions+=1;NFSU2_TR(0x633eb5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+24)),r4(U+0));
}
B633eb7:L633eb7:{c.instructions+=3;NFSU2_TR(0x633eb7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B633eba:{NFSU2_TR(0x633eba);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B633ebb:{NFSU2_TR(0x633ebb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x633ea6u);}goto L633ea6;}}
}
B633ebd:L633ebd:{c.instructions+=2;NFSU2_TR(0x633ebd);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B633ebf:{NFSU2_TR(0x633ebf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B633ec0:L633ec0:{c.instructions+=5;NFSU2_TR(0x633ec0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B633ec2:{NFSU2_TR(0x633ec2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633ec4:{NFSU2_TR(0x633ec4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633ec5:{NFSU2_TR(0x633ec5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B633ec8:{NFSU2_TR(0x633ec8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633ecdull));
TAIL_STATIC(0x5920b0u,592);
}
B633ecd:L633ecd:{c.instructions+=3;NFSU2_TR(0x633ecd);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B633ece:{NFSU2_TR(0x633ece);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B633ed1:{NFSU2_TR(0x633ed1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x633ec0u);}goto L633ec0;}}
}
B633ed3:L633ed3:{c.instructions+=2;NFSU2_TR(0x633ed3);
__builtin_memmove((R+4),(R+28),4);
}
B633ed5:{NFSU2_TR(0x633ed5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633edaull));
TAIL_STATIC(0x610cd0u,610);
}
B633eda:L633eda:{c.instructions+=2;NFSU2_TR(0x633eda);
u8 U[14];
__builtin_memmove((U+6),gp(0x8a1d04),4);
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
B633ee0:{NFSU2_TR(0x633ee0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L633ee7;}}
}
B633ee2:L633ee2:{c.instructions+=1;NFSU2_TR(0x633ee2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633ee7ull));
TAIL_STATIC(0x610b00u,610);
}
B633ee7:L633ee7:{c.instructions+=5;NFSU2_TR(0x633ee7);
__builtin_memmove((R+0),(R+28),4);
}
B633ee9:{NFSU2_TR(0x633ee9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B633eea:{NFSU2_TR(0x633eea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B633eeb:{NFSU2_TR(0x633eeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B633eec:{NFSU2_TR(0x633eec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B633ef0:L633ef0:{c.instructions+=5;NFSU2_TR(0x633ef0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633ef1:{NFSU2_TR(0x633ef1);
__builtin_memmove((R+28),(R+4),4);
}
B633ef3:{NFSU2_TR(0x633ef3);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B633ef6:{NFSU2_TR(0x633ef6);
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
B633ef8:{NFSU2_TR(0x633ef8);
if(r1(R+518)){{goto L633fc6;}}
}
B633efe:L633efe:{c.instructions+=2;NFSU2_TR(0x633efe);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B633f01:{NFSU2_TR(0x633f01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633f06ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x633d50u);}goto L633d50;}
}
B633f06:L633f06:{c.instructions+=2;NFSU2_TR(0x633f06);
__builtin_memmove((R+4),(R+28),4);
}
B633f08:{NFSU2_TR(0x633f08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633f0dull));
TAIL_STATIC(0x610ea0u,610);
}
B633f0d:L633f0d:{c.instructions+=3;NFSU2_TR(0x633f0d);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
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
B633f13:{NFSU2_TR(0x633f13);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633f19:{NFSU2_TR(0x633f19);
if(r1(R+518)){{goto L633fc6;}}
}
B633f1f:L633f1f:{c.instructions+=6;NFSU2_TR(0x633f1f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633f20:{NFSU2_TR(0x633f20);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633f21:{NFSU2_TR(0x633f21);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633f22:{NFSU2_TR(0x633f22);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B633f24:{NFSU2_TR(0x633f24);
w4(R+20,u32(0x803714ull));
}
B633f29:{NFSU2_TR(0x633f29);
__builtin_memmove((R+16),(R+16),4);
}
B633f30:L633f30:{c.instructions+=9;NFSU2_TR(0x633f30);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B633f36:{NFSU2_TR(0x633f36);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B633f3c:{NFSU2_TR(0x633f3c);
__builtin_memmove((R+4),(R+12),4);
}
B633f3e:{NFSU2_TR(0x633f3e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r1(U+0))));
}
B633f40:{NFSU2_TR(0x633f40);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r1(U+0))));
}
B633f42:{NFSU2_TR(0x633f42);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x3ull))));
}
B633f45:{NFSU2_TR(0x633f45);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B633f48:{NFSU2_TR(0x633f48);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B633f4a:{NFSU2_TR(0x633f4a);
if(r1(R+518)){{goto L633fa3;}}
}
B633f4c:L633f4c:{c.instructions+=2;NFSU2_TR(0x633f4c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B633f4f:{NFSU2_TR(0x633f4f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L633f62;}}
}
B633f51:L633f51:{c.instructions+=5;NFSU2_TR(0x633f51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B633f53:{NFSU2_TR(0x633f53);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x60ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B633f56:{NFSU2_TR(0x633f56);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633f57:{NFSU2_TR(0x633f57);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B633f5d:{NFSU2_TR(0x633f5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633f62ull));
TAIL_STATIC(0x4031c0u,403);
}
B633f62:L633f62:{c.instructions+=3;NFSU2_TR(0x633f62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B633f65:{NFSU2_TR(0x633f65);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B633f67:{NFSU2_TR(0x633f67);
if(r1(R+518)){{goto L633f84;}}
}
B633f69:L633f69:{c.instructions+=2;NFSU2_TR(0x633f69);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B633f6b:{NFSU2_TR(0x633f6b);
if(r1(R+518)){{goto L633f84;}}
}
B633f6d:L633f6d:{c.instructions+=8;NFSU2_TR(0x633f6d);
{u32 ea_=u32((r4(R+24)*4u)+u32(8403220u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B633f74:{NFSU2_TR(0x633f74);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633f76:{NFSU2_TR(0x633f76);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633f78:{NFSU2_TR(0x633f78);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633f79:{NFSU2_TR(0x633f79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B633f7b:{NFSU2_TR(0x633f7b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B633f7e:{NFSU2_TR(0x633f7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633f7f:{NFSU2_TR(0x633f7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633f84ull));
TAIL_STATIC(0x61fb00u,61f);
}
B633f84:L633f84:{c.instructions+=10;NFSU2_TR(0x633f84);
__builtin_memmove((R+4),(R+12),4);
}
B633f86:{NFSU2_TR(0x633f86);
w4(R+8,u32(0x3ull));
}
B633f8b:{NFSU2_TR(0x633f8b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B633f8d:{NFSU2_TR(0x633f8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B633f93:{NFSU2_TR(0x633f93);
w4(R+8,u32(~u32(r4(R+8))));
}
B633f95:{NFSU2_TR(0x633f95);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+4))));
}
B633f97:{NFSU2_TR(0x633f97);
__builtin_memmove((R+4),(R+12),4);
}
B633f99:{NFSU2_TR(0x633f99);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B633f9b:{NFSU2_TR(0x633f9b);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+24))));
}
B633f9d:{NFSU2_TR(0x633f9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B633fa3:L633fa3:{c.instructions+=4;NFSU2_TR(0x633fa3);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x24ull))));
}
B633fa6:{NFSU2_TR(0x633fa6);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x2ull))));
}
B633fa9:{NFSU2_TR(0x633fa9);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x803930ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x803930ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B633faf:{NFSU2_TR(0x633faf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x633f30u);}goto L633f30;}}
}
B633fb5:L633fb5:{c.instructions+=7;NFSU2_TR(0x633fb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B633fb7:{NFSU2_TR(0x633fb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x554ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B633fbd:{NFSU2_TR(0x633fbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B633fbe:{NFSU2_TR(0x633fbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B633fbf:{NFSU2_TR(0x633fbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B633fc0:{NFSU2_TR(0x633fc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B633fc1:{NFSU2_TR(0x633fc1);
TAIL_STATIC(0x615280u,615);
}
B633fc6:L633fc6:{c.instructions+=2;NFSU2_TR(0x633fc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B633fc7:{NFSU2_TR(0x633fc7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B633fd0:L633fd0:{c.instructions+=6;NFSU2_TR(0x633fd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633fd1:{NFSU2_TR(0x633fd1);
__builtin_memmove((R+24),(R+4),4);
}
B633fd3:{NFSU2_TR(0x633fd3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633fd4:{NFSU2_TR(0x633fd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B633fd7:{NFSU2_TR(0x633fd7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B633fd9:{NFSU2_TR(0x633fd9);
if(r1(R+518)){{goto L633ff1;}}
}
B633fdb:L633fdb:{c.instructions+=2;NFSU2_TR(0x633fdb);
__builtin_memmove((R+4),(R+28),4);
}
B633fdd:{NFSU2_TR(0x633fdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633fe2ull));
TAIL_STATIC(0x4903b0u,490);
}
B633fe2:L633fe2:{c.instructions+=4;NFSU2_TR(0x633fe2);
__builtin_memmove((R+0),gp(0x82da88),4);
}
B633fe7:{NFSU2_TR(0x633fe7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633fe8:{NFSU2_TR(0x633fe8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B633fe9:{NFSU2_TR(0x633fe9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633feeull));
TAIL_STATIC(0x43f920u,43f);
}
B633fee:L633fee:{c.instructions+=1;NFSU2_TR(0x633fee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B633ff1:L633ff1:{c.instructions+=3;NFSU2_TR(0x633ff1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B633ff4:{NFSU2_TR(0x633ff4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B633ff6:{NFSU2_TR(0x633ff6);
if(r1(R+518)){TAIL_STATIC(0x63400fu,634);}
}
B633ff8:L633ff8:{c.instructions+=2;NFSU2_TR(0x633ff8);
__builtin_memmove((R+4),(R+28),4);
}
B633ffa:{NFSU2_TR(0x633ffa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x633fffull));
TAIL_STATIC(0x4903b0u,490);
}
B633fff:L633fff:{c.instructions+=1;NFSU2_TR(0x633fff);
__builtin_memmove((R+4),gp(0x82da88),4);
TAIL_STATIC(0x634005u,634);
}
XIT:NFSU2_TR_EXIT(0x633,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
