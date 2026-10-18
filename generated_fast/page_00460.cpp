#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_59f(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_734(u8* __restrict R,Cpu& c);
u32 body_735(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x460,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x460,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_460(u8* __restrict R,Cpu& c);
u32 page_460(Cpu& c){return body_460(c.regs.data(),c);}
__attribute__((noinline)) u32 body_460(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x460004:goto L460004;
case 0x460007:c.instructions+=6;goto B460007;
case 0x46000a:c.instructions+=5;goto B46000a;
case 0x460010:c.instructions+=4;goto B460010;
case 0x460016:c.instructions+=3;goto B460016;
case 0x460018:c.instructions+=2;goto B460018;
case 0x46001b:c.instructions+=1;goto B46001b;
case 0x46001d:goto L46001d;
case 0x46001f:c.instructions+=2;goto B46001f;
case 0x460025:c.instructions+=1;goto B460025;
case 0x460027:goto L460027;
case 0x46002d:c.instructions+=3;goto B46002d;
case 0x46002f:c.instructions+=2;goto B46002f;
case 0x460032:c.instructions+=1;goto B460032;
case 0x460034:goto L460034;
case 0x460036:c.instructions+=2;goto B460036;
case 0x46003c:c.instructions+=1;goto B46003c;
case 0x460042:goto L460042;
case 0x460048:c.instructions+=3;goto B460048;
case 0x46004e:c.instructions+=2;goto B46004e;
case 0x460050:c.instructions+=1;goto B460050;
case 0x460055:goto L460055;
case 0x46005b:c.instructions+=3;goto B46005b;
case 0x46005d:c.instructions+=2;goto B46005d;
case 0x460063:c.instructions+=1;goto B460063;
case 0x460068:goto L460068;
case 0x46006e:c.instructions+=4;goto B46006e;
case 0x460070:c.instructions+=3;goto B460070;
case 0x460075:c.instructions+=2;goto B460075;
case 0x460077:c.instructions+=1;goto B460077;
case 0x46007c:goto L46007c;
case 0x460082:c.instructions+=8;goto B460082;
case 0x460088:c.instructions+=7;goto B460088;
case 0x46008e:c.instructions+=6;goto B46008e;
case 0x460094:c.instructions+=5;goto B460094;
case 0x46009a:c.instructions+=4;goto B46009a;
case 0x46009d:c.instructions+=3;goto B46009d;
case 0x46009f:c.instructions+=2;goto B46009f;
case 0x4600a2:c.instructions+=1;goto B4600a2;
case 0x4600a4:goto L4600a4;
case 0x4600aa:c.instructions+=2;goto B4600aa;
case 0x4600ad:c.instructions+=1;goto B4600ad;
case 0x4600b3:goto L4600b3;
case 0x4600b4:c.instructions+=1;goto B4600b4;
case 0x4600b9:goto L4600b9;
case 0x4600bf:c.instructions+=3;goto B4600bf;
case 0x4600c0:c.instructions+=2;goto B4600c0;
case 0x4600c4:c.instructions+=1;goto B4600c4;
case 0x4600c9:goto L4600c9;
case 0x4600cf:c.instructions+=5;goto B4600cf;
case 0x4600d0:c.instructions+=4;goto B4600d0;
case 0x4600d4:c.instructions+=3;goto B4600d4;
case 0x4600da:c.instructions+=2;goto B4600da;
case 0x4600de:c.instructions+=1;goto B4600de;
case 0x4600e3:goto L4600e3;
case 0x4600e9:c.instructions+=3;goto B4600e9;
case 0x4600ea:c.instructions+=2;goto B4600ea;
case 0x4600ee:c.instructions+=1;goto B4600ee;
case 0x4600f3:goto L4600f3;
case 0x4600f9:c.instructions+=8;goto B4600f9;
case 0x4600fe:c.instructions+=7;goto B4600fe;
case 0x460100:c.instructions+=6;goto B460100;
case 0x460101:c.instructions+=5;goto B460101;
case 0x460105:c.instructions+=4;goto B460105;
case 0x460109:c.instructions+=3;goto B460109;
case 0x46010f:c.instructions+=2;goto B46010f;
case 0x460113:c.instructions+=1;goto B460113;
case 0x460118:goto L460118;
case 0x46011e:c.instructions+=4;goto B46011e;
case 0x460122:c.instructions+=3;goto B460122;
case 0x460123:c.instructions+=2;goto B460123;
case 0x460127:c.instructions+=1;goto B460127;
case 0x46012c:goto L46012c;
case 0x460132:c.instructions+=5;goto B460132;
case 0x460133:c.instructions+=4;goto B460133;
case 0x460137:c.instructions+=3;goto B460137;
case 0x46013d:c.instructions+=2;goto B46013d;
case 0x460141:c.instructions+=1;goto B460141;
case 0x460146:goto L460146;
case 0x46014c:c.instructions+=3;goto B46014c;
case 0x46014d:c.instructions+=2;goto B46014d;
case 0x460151:c.instructions+=1;goto B460151;
case 0x460156:goto L460156;
case 0x46015c:c.instructions+=6;goto B46015c;
case 0x460162:c.instructions+=5;goto B460162;
case 0x460165:c.instructions+=4;goto B460165;
case 0x460167:c.instructions+=3;goto B460167;
case 0x46016b:c.instructions+=2;goto B46016b;
case 0x460171:c.instructions+=1;goto B460171;
case 0x460173:goto L460173;
case 0x460177:c.instructions+=8;goto B460177;
case 0x46017a:c.instructions+=7;goto B46017a;
case 0x460180:c.instructions+=6;goto B460180;
case 0x460184:c.instructions+=5;goto B460184;
case 0x460187:c.instructions+=4;goto B460187;
case 0x46018d:c.instructions+=3;goto B46018d;
case 0x460190:c.instructions+=2;goto B460190;
case 0x460196:c.instructions+=1;goto B460196;
case 0x460198:goto L460198;
case 0x46019c:c.instructions+=7;goto B46019c;
case 0x46019f:c.instructions+=6;goto B46019f;
case 0x4601a5:c.instructions+=5;goto B4601a5;
case 0x4601a7:c.instructions+=4;goto B4601a7;
case 0x4601aa:c.instructions+=3;goto B4601aa;
case 0x4601b0:c.instructions+=2;goto B4601b0;
case 0x4601b3:c.instructions+=1;goto B4601b3;
case 0x4601b9:goto L4601b9;
case 0x4601bf:c.instructions+=2;goto B4601bf;
case 0x4601c1:c.instructions+=1;goto B4601c1;
case 0x4601c3:goto L4601c3;
case 0x4601c5:c.instructions+=9;goto B4601c5;
case 0x4601c9:c.instructions+=8;goto B4601c9;
case 0x4601cc:c.instructions+=7;goto B4601cc;
case 0x4601d2:c.instructions+=6;goto B4601d2;
case 0x4601d6:c.instructions+=5;goto B4601d6;
case 0x4601d9:c.instructions+=4;goto B4601d9;
case 0x4601df:c.instructions+=3;goto B4601df;
case 0x4601e2:c.instructions+=2;goto B4601e2;
case 0x4601e8:c.instructions+=1;goto B4601e8;
case 0x4601ea:goto L4601ea;
case 0x4601ee:c.instructions+=6;goto B4601ee;
case 0x4601f1:c.instructions+=5;goto B4601f1;
case 0x4601f7:c.instructions+=4;goto B4601f7;
case 0x4601fa:c.instructions+=3;goto B4601fa;
case 0x460200:c.instructions+=2;goto B460200;
case 0x460203:c.instructions+=1;goto B460203;
case 0x460209:goto L460209;
case 0x460210:c.instructions+=1;goto B460210;
case 0x460216:goto L460216;
case 0x46021c:c.instructions+=5;goto B46021c;
case 0x460222:c.instructions+=4;goto B460222;
case 0x460224:c.instructions+=3;goto B460224;
case 0x46022a:c.instructions+=2;goto B46022a;
case 0x460230:c.instructions+=1;goto B460230;
case 0x460232:goto L460232;
case 0x460238:c.instructions+=6;goto B460238;
case 0x46023e:c.instructions+=5;goto B46023e;
case 0x460244:c.instructions+=4;goto B460244;
case 0x46024a:c.instructions+=3;goto B46024a;
case 0x46024c:c.instructions+=2;goto B46024c;
case 0x460252:c.instructions+=1;goto B460252;
case 0x460258:goto L460258;
case 0x46025e:c.instructions+=3;goto B46025e;
case 0x460260:c.instructions+=2;goto B460260;
case 0x460263:c.instructions+=1;goto B460263;
case 0x460269:goto L460269;
case 0x46026f:c.instructions+=2;goto B46026f;
case 0x460271:c.instructions+=1;goto B460271;
case 0x460277:goto L460277;
case 0x46027d:c.instructions+=4;goto B46027d;
case 0x460283:c.instructions+=3;goto B460283;
case 0x460284:c.instructions+=2;goto B460284;
case 0x460285:c.instructions+=1;goto B460285;
case 0x46028a:goto L46028a;
case 0x46028e:c.instructions+=6;goto B46028e;
case 0x460291:c.instructions+=5;goto B460291;
case 0x460292:c.instructions+=4;goto B460292;
case 0x460296:c.instructions+=3;goto B460296;
case 0x460297:c.instructions+=2;goto B460297;
case 0x460299:c.instructions+=1;goto B460299;
case 0x46029e:goto L46029e;
case 0x4602a1:c.instructions+=19;goto B4602a1;
case 0x4602a4:c.instructions+=18;goto B4602a4;
case 0x4602a6:c.instructions+=17;goto B4602a6;
case 0x4602ac:c.instructions+=16;goto B4602ac;
case 0x4602ae:c.instructions+=15;goto B4602ae;
case 0x4602b1:c.instructions+=14;goto B4602b1;
case 0x4602b3:c.instructions+=13;goto B4602b3;
case 0x4602b4:c.instructions+=12;goto B4602b4;
case 0x4602b7:c.instructions+=11;goto B4602b7;
case 0x4602bb:c.instructions+=10;goto B4602bb;
case 0x4602c1:c.instructions+=9;goto B4602c1;
case 0x4602c7:c.instructions+=8;goto B4602c7;
case 0x4602cd:c.instructions+=7;goto B4602cd;
case 0x4602d3:c.instructions+=6;goto B4602d3;
case 0x4602d5:c.instructions+=5;goto B4602d5;
case 0x4602d8:c.instructions+=4;goto B4602d8;
case 0x4602d9:c.instructions+=3;goto B4602d9;
case 0x4602da:c.instructions+=2;goto B4602da;
case 0x4602dc:c.instructions+=1;goto B4602dc;
case 0x4602e1:goto L4602e1;
case 0x4602e5:c.instructions+=12;goto B4602e5;
case 0x4602eb:c.instructions+=11;goto B4602eb;
case 0x4602f2:c.instructions+=10;goto B4602f2;
case 0x4602fc:c.instructions+=9;goto B4602fc;
case 0x4602ff:c.instructions+=8;goto B4602ff;
case 0x460302:c.instructions+=7;goto B460302;
case 0x460304:c.instructions+=6;goto B460304;
case 0x460306:c.instructions+=5;goto B460306;
case 0x460309:c.instructions+=4;goto B460309;
case 0x46030f:c.instructions+=3;goto B46030f;
case 0x460315:c.instructions+=2;goto B460315;
case 0x46031b:c.instructions+=1;goto B46031b;
case 0x46031d:goto L46031d;
case 0x460324:c.instructions+=1;goto B460324;
case 0x460326:goto L460326;
case 0x46032d:goto L46032d;
case 0x460333:c.instructions+=15;goto B460333;
case 0x460339:c.instructions+=14;goto B460339;
case 0x46033f:c.instructions+=13;goto B46033f;
case 0x460345:c.instructions+=12;goto B460345;
case 0x46034b:c.instructions+=11;goto B46034b;
case 0x46034d:c.instructions+=10;goto B46034d;
case 0x460353:c.instructions+=9;goto B460353;
case 0x460359:c.instructions+=8;goto B460359;
case 0x46035f:c.instructions+=7;goto B46035f;
case 0x460365:c.instructions+=6;goto B460365;
case 0x46036b:c.instructions+=5;goto B46036b;
case 0x46036d:c.instructions+=4;goto B46036d;
case 0x460373:c.instructions+=3;goto B460373;
case 0x460379:c.instructions+=2;goto B460379;
case 0x46037f:c.instructions+=1;goto B46037f;
case 0x460381:goto L460381;
case 0x460387:c.instructions+=6;goto B460387;
case 0x46038d:c.instructions+=5;goto B46038d;
case 0x460393:c.instructions+=4;goto B460393;
case 0x460399:c.instructions+=3;goto B460399;
case 0x46039b:c.instructions+=2;goto B46039b;
case 0x4603a1:c.instructions+=1;goto B4603a1;
case 0x4603a7:goto L4603a7;
case 0x4603ad:c.instructions+=3;goto B4603ad;
case 0x4603af:c.instructions+=2;goto B4603af;
case 0x4603b2:c.instructions+=1;goto B4603b2;
case 0x4603b8:goto L4603b8;
case 0x4603be:c.instructions+=2;goto B4603be;
case 0x4603c0:c.instructions+=1;goto B4603c0;
case 0x4603c6:goto L4603c6;
case 0x4603cc:c.instructions+=4;goto B4603cc;
case 0x4603d2:c.instructions+=3;goto B4603d2;
case 0x4603d3:c.instructions+=2;goto B4603d3;
case 0x4603d4:c.instructions+=1;goto B4603d4;
case 0x4603d9:goto L4603d9;
case 0x4603dd:c.instructions+=6;goto B4603dd;
case 0x4603e0:c.instructions+=5;goto B4603e0;
case 0x4603e1:c.instructions+=4;goto B4603e1;
case 0x4603e5:c.instructions+=3;goto B4603e5;
case 0x4603e6:c.instructions+=2;goto B4603e6;
case 0x4603e8:c.instructions+=1;goto B4603e8;
case 0x4603ed:goto L4603ed;
case 0x4603f0:c.instructions+=19;goto B4603f0;
case 0x4603f3:c.instructions+=18;goto B4603f3;
case 0x4603f5:c.instructions+=17;goto B4603f5;
case 0x4603fb:c.instructions+=16;goto B4603fb;
case 0x4603fd:c.instructions+=15;goto B4603fd;
case 0x460400:c.instructions+=14;goto B460400;
case 0x460402:c.instructions+=13;goto B460402;
case 0x460403:c.instructions+=12;goto B460403;
case 0x460406:c.instructions+=11;goto B460406;
case 0x46040a:c.instructions+=10;goto B46040a;
case 0x460410:c.instructions+=9;goto B460410;
case 0x460416:c.instructions+=8;goto B460416;
case 0x46041c:c.instructions+=7;goto B46041c;
case 0x460422:c.instructions+=6;goto B460422;
case 0x460424:c.instructions+=5;goto B460424;
case 0x460427:c.instructions+=4;goto B460427;
case 0x460428:c.instructions+=3;goto B460428;
case 0x460429:c.instructions+=2;goto B460429;
case 0x46042b:c.instructions+=1;goto B46042b;
case 0x460430:goto L460430;
case 0x460434:c.instructions+=12;goto B460434;
case 0x46043a:c.instructions+=11;goto B46043a;
case 0x460441:c.instructions+=10;goto B460441;
case 0x46044b:c.instructions+=9;goto B46044b;
case 0x46044e:c.instructions+=8;goto B46044e;
case 0x460451:c.instructions+=7;goto B460451;
case 0x460453:c.instructions+=6;goto B460453;
case 0x460455:c.instructions+=5;goto B460455;
case 0x460458:c.instructions+=4;goto B460458;
case 0x46045b:c.instructions+=3;goto B46045b;
case 0x46045d:c.instructions+=2;goto B46045d;
case 0x460460:c.instructions+=1;goto B460460;
case 0x460462:goto L460462;
case 0x460469:c.instructions+=1;goto B460469;
case 0x46046b:goto L46046b;
case 0x460472:goto L460472;
case 0x460478:c.instructions+=15;goto B460478;
case 0x46047e:c.instructions+=14;goto B46047e;
case 0x460484:c.instructions+=13;goto B460484;
case 0x46048a:c.instructions+=12;goto B46048a;
case 0x460490:c.instructions+=11;goto B460490;
case 0x460492:c.instructions+=10;goto B460492;
case 0x460498:c.instructions+=9;goto B460498;
case 0x46049e:c.instructions+=8;goto B46049e;
case 0x4604a4:c.instructions+=7;goto B4604a4;
case 0x4604aa:c.instructions+=6;goto B4604aa;
case 0x4604b0:c.instructions+=5;goto B4604b0;
case 0x4604b6:c.instructions+=4;goto B4604b6;
case 0x4604bc:c.instructions+=3;goto B4604bc;
case 0x4604c2:c.instructions+=2;goto B4604c2;
case 0x4604c8:c.instructions+=1;goto B4604c8;
case 0x4604ce:goto L4604ce;
case 0x4604cf:c.instructions+=5;goto B4604cf;
case 0x4604d0:c.instructions+=4;goto B4604d0;
case 0x4604d1:c.instructions+=3;goto B4604d1;
case 0x4604d3:c.instructions+=2;goto B4604d3;
case 0x4604d4:c.instructions+=1;goto B4604d4;
case 0x4604e0:goto L4604e0;
case 0x4604e1:c.instructions+=7;goto B4604e1;
case 0x4604e2:c.instructions+=6;goto B4604e2;
case 0x4604e3:c.instructions+=5;goto B4604e3;
case 0x4604e4:c.instructions+=4;goto B4604e4;
case 0x4604e6:c.instructions+=3;goto B4604e6;
case 0x4604e8:c.instructions+=2;goto B4604e8;
case 0x4604ea:c.instructions+=1;goto B4604ea;
case 0x4604ed:goto L4604ed;
case 0x4604ef:c.instructions+=6;goto B4604ef;
case 0x4604f1:c.instructions+=5;goto B4604f1;
case 0x4604f8:c.instructions+=4;goto B4604f8;
case 0x4604fa:c.instructions+=3;goto B4604fa;
case 0x4604fc:c.instructions+=2;goto B4604fc;
case 0x4604ff:c.instructions+=1;goto B4604ff;
case 0x460502:goto L460502;
case 0x460504:c.instructions+=7;goto B460504;
case 0x46050b:c.instructions+=6;goto B46050b;
case 0x460511:c.instructions+=5;goto B460511;
case 0x460513:c.instructions+=4;goto B460513;
case 0x460516:c.instructions+=3;goto B460516;
case 0x460518:c.instructions+=2;goto B460518;
case 0x460520:c.instructions+=1;goto B460520;
case 0x460522:goto L460522;
case 0x460526:c.instructions+=2;goto B460526;
case 0x460527:c.instructions+=1;goto B460527;
case 0x46052c:goto L46052c;
case 0x460532:c.instructions+=8;goto B460532;
case 0x460538:c.instructions+=7;goto B460538;
case 0x46053a:c.instructions+=6;goto B46053a;
case 0x46053d:c.instructions+=5;goto B46053d;
case 0x460540:c.instructions+=4;goto B460540;
case 0x460543:c.instructions+=3;goto B460543;
case 0x460546:c.instructions+=2;goto B460546;
case 0x460548:c.instructions+=1;goto B460548;
case 0x46054a:goto L46054a;
case 0x46054c:c.instructions+=1;goto B46054c;
case 0x46054e:goto L46054e;
case 0x460554:c.instructions+=1;goto B460554;
case 0x460556:goto L460556;
case 0x46055b:goto L46055b;
case 0x46055d:c.instructions+=3;goto B46055d;
case 0x460560:c.instructions+=2;goto B460560;
case 0x460566:c.instructions+=1;goto B460566;
case 0x460568:goto L460568;
case 0x46056a:c.instructions+=1;goto B46056a;
case 0x46056c:goto L46056c;
case 0x460571:c.instructions+=1;goto B460571;
case 0x460573:goto L460573;
case 0x460578:goto L460578;
case 0x46057b:c.instructions+=5;goto B46057b;
case 0x460580:c.instructions+=4;goto B460580;
case 0x460583:c.instructions+=3;goto B460583;
case 0x460585:c.instructions+=2;goto B460585;
case 0x46058a:c.instructions+=1;goto B46058a;
case 0x46058c:goto L46058c;
case 0x46058f:c.instructions+=2;goto B46058f;
case 0x460591:c.instructions+=1;goto B460591;
case 0x460593:goto L460593;
case 0x460596:c.instructions+=5;goto B460596;
case 0x46059c:c.instructions+=4;goto B46059c;
case 0x46059f:c.instructions+=3;goto B46059f;
case 0x4605a1:c.instructions+=2;goto B4605a1;
case 0x4605a4:c.instructions+=1;goto B4605a4;
case 0x4605a6:goto L4605a6;
case 0x4605a8:goto L4605a8;
case 0x4605aa:c.instructions+=3;goto B4605aa;
case 0x4605b0:c.instructions+=2;goto B4605b0;
case 0x4605b2:c.instructions+=1;goto B4605b2;
case 0x4605b4:goto L4605b4;
case 0x4605b6:c.instructions+=1;goto B4605b6;
case 0x4605b8:goto L4605b8;
case 0x4605be:c.instructions+=1;goto B4605be;
case 0x4605c0:goto L4605c0;
case 0x4605c5:goto L4605c5;
case 0x4605c8:c.instructions+=4;goto B4605c8;
case 0x4605ca:c.instructions+=3;goto B4605ca;
case 0x4605cc:c.instructions+=2;goto B4605cc;
case 0x4605ce:c.instructions+=1;goto B4605ce;
case 0x4605d1:goto L4605d1;
case 0x4605d3:c.instructions+=2;goto B4605d3;
case 0x4605d9:c.instructions+=1;goto B4605d9;
case 0x4605db:goto L4605db;
case 0x4605dd:c.instructions+=1;goto B4605dd;
case 0x4605df:goto L4605df;
case 0x4605e4:c.instructions+=1;goto B4605e4;
case 0x4605e6:goto L4605e6;
case 0x4605eb:goto L4605eb;
case 0x4605ee:c.instructions+=4;goto B4605ee;
case 0x4605f0:c.instructions+=3;goto B4605f0;
case 0x4605f2:c.instructions+=2;goto B4605f2;
case 0x4605f4:c.instructions+=1;goto B4605f4;
case 0x4605f7:goto L4605f7;
case 0x4605f9:c.instructions+=2;goto B4605f9;
case 0x4605ff:c.instructions+=1;goto B4605ff;
case 0x460601:goto L460601;
case 0x460603:c.instructions+=1;goto B460603;
case 0x460605:goto L460605;
case 0x46060a:c.instructions+=1;goto B46060a;
case 0x46060c:goto L46060c;
case 0x460611:goto L460611;
case 0x460614:c.instructions+=4;goto B460614;
case 0x46061a:c.instructions+=3;goto B46061a;
case 0x46061c:c.instructions+=2;goto B46061c;
case 0x460622:c.instructions+=1;goto B460622;
case 0x460624:goto L460624;
case 0x460626:c.instructions+=1;goto B460626;
case 0x460628:goto L460628;
case 0x46062d:c.instructions+=1;goto B46062d;
case 0x46062f:goto L46062f;
case 0x460634:goto L460634;
case 0x460637:c.instructions+=4;goto B460637;
case 0x46063d:c.instructions+=3;goto B46063d;
case 0x46063f:c.instructions+=2;goto B46063f;
case 0x460641:c.instructions+=1;goto B460641;
case 0x460643:goto L460643;
case 0x460646:c.instructions+=2;goto B460646;
case 0x460647:c.instructions+=1;goto B460647;
case 0x46064c:goto L46064c;
case 0x46064d:c.instructions+=4;goto B46064d;
case 0x46064e:c.instructions+=3;goto B46064e;
case 0x46064f:c.instructions+=2;goto B46064f;
case 0x460650:c.instructions+=1;goto B460650;
case 0x460660:goto L460660;
case 0x460665:c.instructions+=1;goto B460665;
case 0x460670:goto L460670;
case 0x460675:c.instructions+=1;goto B460675;
case 0x460680:goto L460680;
case 0x460682:c.instructions+=13;goto B460682;
case 0x460687:c.instructions+=12;goto B460687;
case 0x46068d:c.instructions+=11;goto B46068d;
case 0x46068e:c.instructions+=10;goto B46068e;
case 0x460695:c.instructions+=9;goto B460695;
case 0x460698:c.instructions+=8;goto B460698;
case 0x460699:c.instructions+=7;goto B460699;
case 0x46069a:c.instructions+=6;goto B46069a;
case 0x46069e:c.instructions+=5;goto B46069e;
case 0x46069f:c.instructions+=4;goto B46069f;
case 0x4606a0:c.instructions+=3;goto B4606a0;
case 0x4606a2:c.instructions+=2;goto B4606a2;
case 0x4606ac:c.instructions+=1;goto B4606ac;
case 0x4606b1:goto L4606b1;
case 0x4606b4:c.instructions+=1;goto B4606b4;
case 0x4606b9:goto L4606b9;
case 0x4606bd:c.instructions+=9;goto B4606bd;
case 0x4606bf:c.instructions+=8;goto B4606bf;
case 0x4606c3:c.instructions+=7;goto B4606c3;
case 0x4606c4:c.instructions+=6;goto B4606c4;
case 0x4606c8:c.instructions+=5;goto B4606c8;
case 0x4606cc:c.instructions+=4;goto B4606cc;
case 0x4606d0:c.instructions+=3;goto B4606d0;
case 0x4606d2:c.instructions+=2;goto B4606d2;
case 0x4606d4:c.instructions+=1;goto B4606d4;
case 0x4606d6:goto L4606d6;
case 0x4606d8:c.instructions+=1;goto B4606d8;
case 0x4606dd:goto L4606dd;
case 0x4606e1:c.instructions+=3;goto B4606e1;
case 0x4606e3:c.instructions+=2;goto B4606e3;
case 0x4606e7:c.instructions+=1;goto B4606e7;
case 0x4606e9:goto L4606e9;
case 0x4606ea:c.instructions+=9;goto B4606ea;
case 0x4606ed:c.instructions+=8;goto B4606ed;
case 0x4606ee:c.instructions+=7;goto B4606ee;
case 0x4606ef:c.instructions+=6;goto B4606ef;
case 0x4606f4:c.instructions+=5;goto B4606f4;
case 0x4606f6:c.instructions+=4;goto B4606f6;
case 0x4606f9:c.instructions+=3;goto B4606f9;
case 0x4606fc:c.instructions+=2;goto B4606fc;
case 0x4606ff:c.instructions+=1;goto B4606ff;
case 0x460704:goto L460704;
case 0x460707:c.instructions+=2;goto B460707;
case 0x460709:c.instructions+=1;goto B460709;
case 0x46070b:goto L46070b;
case 0x460710:c.instructions+=2;goto B460710;
case 0x460715:c.instructions+=1;goto B460715;
case 0x46071a:goto L46071a;
case 0x46071b:c.instructions+=3;goto B46071b;
case 0x46071c:c.instructions+=2;goto B46071c;
case 0x460721:c.instructions+=1;goto B460721;
case 0x460726:goto L460726;
case 0x460729:goto L460729;
case 0x46072a:c.instructions+=1;goto B46072a;
case 0x46072c:goto L46072c;
case 0x46072e:goto L46072e;
case 0x460734:c.instructions+=6;goto B460734;
case 0x460736:c.instructions+=5;goto B460736;
case 0x460738:c.instructions+=4;goto B460738;
case 0x46073a:c.instructions+=3;goto B46073a;
case 0x460742:c.instructions+=2;goto B460742;
case 0x460746:c.instructions+=1;goto B460746;
case 0x460748:goto L460748;
case 0x46074c:c.instructions+=2;goto B46074c;
case 0x46074d:c.instructions+=1;goto B46074d;
case 0x460752:goto L460752;
case 0x460756:goto L460756;
case 0x46075a:c.instructions+=7;goto B46075a;
case 0x46075b:c.instructions+=6;goto B46075b;
case 0x460761:c.instructions+=5;goto B460761;
case 0x460762:c.instructions+=4;goto B460762;
case 0x460763:c.instructions+=3;goto B460763;
case 0x46076a:c.instructions+=2;goto B46076a;
case 0x46076d:c.instructions+=1;goto B46076d;
case 0x460770:goto L460770;
case 0x460771:c.instructions+=5;goto B460771;
case 0x460772:c.instructions+=4;goto B460772;
case 0x460774:c.instructions+=3;goto B460774;
case 0x46077a:c.instructions+=2;goto B46077a;
case 0x46077c:c.instructions+=1;goto B46077c;
case 0x46077e:goto L46077e;
case 0x460780:c.instructions+=2;goto B460780;
case 0x460782:c.instructions+=1;goto B460782;
case 0x460785:goto L460785;
case 0x460789:c.instructions+=3;goto B460789;
case 0x46078d:c.instructions+=2;goto B46078d;
case 0x460793:c.instructions+=1;goto B460793;
case 0x460798:goto L460798;
case 0x46079a:c.instructions+=2;goto B46079a;
case 0x4607a0:c.instructions+=1;goto B4607a0;
case 0x4607a2:goto L4607a2;
case 0x4607a4:c.instructions+=1;goto B4607a4;
case 0x4607a6:goto L4607a6;
case 0x4607ab:c.instructions+=1;goto B4607ab;
case 0x4607ad:goto L4607ad;
case 0x4607b2:goto L4607b2;
case 0x4607b5:c.instructions+=8;goto B4607b5;
case 0x4607bb:c.instructions+=7;goto B4607bb;
case 0x4607c2:c.instructions+=6;goto B4607c2;
case 0x4607c8:c.instructions+=5;goto B4607c8;
case 0x4607cf:c.instructions+=4;goto B4607cf;
case 0x4607d5:c.instructions+=3;goto B4607d5;
case 0x4607d7:c.instructions+=2;goto B4607d7;
case 0x4607d9:c.instructions+=1;goto B4607d9;
case 0x4607db:goto L4607db;
case 0x4607de:c.instructions+=2;goto B4607de;
case 0x4607df:c.instructions+=1;goto B4607df;
case 0x4607e4:goto L4607e4;
case 0x4607e5:c.instructions+=2;goto B4607e5;
case 0x4607e6:c.instructions+=1;goto B4607e6;
case 0x4607f0:goto L4607f0;
case 0x4607f5:c.instructions+=1;goto B4607f5;
case 0x460800:goto L460800;
case 0x460805:c.instructions+=1;goto B460805;
case 0x460810:goto L460810;
case 0x460814:c.instructions+=2;goto B460814;
case 0x460817:c.instructions+=1;goto B460817;
case 0x460819:goto L460819;
case 0x46081a:c.instructions+=1;goto B46081a;
case 0x46081c:goto L46081c;
case 0x46081d:c.instructions+=1;goto B46081d;
case 0x46081f:goto L46081f;
case 0x460822:c.instructions+=1;goto B460822;
case 0x460825:goto L460825;
case 0x46082a:c.instructions+=1;goto B46082a;
case 0x46082d:goto L46082d;
case 0x460832:c.instructions+=1;goto B460832;
case 0x460835:goto L460835;
case 0x46083a:c.instructions+=1;goto B46083a;
case 0x460840:goto L460840;
case 0x460841:c.instructions+=7;goto B460841;
case 0x460842:c.instructions+=6;goto B460842;
case 0x460844:c.instructions+=5;goto B460844;
case 0x460848:c.instructions+=4;goto B460848;
case 0x46084b:c.instructions+=3;goto B46084b;
case 0x460850:c.instructions+=2;goto B460850;
case 0x460852:c.instructions+=1;goto B460852;
case 0x460854:goto L460854;
case 0x460857:c.instructions+=1;goto B460857;
case 0x460859:goto L460859;
case 0x460863:c.instructions+=1;goto B460863;
case 0x460865:goto L460865;
case 0x46086b:goto L46086b;
case 0x46086e:c.instructions+=4;goto B46086e;
case 0x460874:c.instructions+=3;goto B460874;
case 0x46087a:c.instructions+=2;goto B46087a;
case 0x46087c:c.instructions+=1;goto B46087c;
case 0x46087f:goto L46087f;
case 0x460882:c.instructions+=3;goto B460882;
case 0x460883:c.instructions+=2;goto B460883;
case 0x460886:c.instructions+=1;goto B460886;
case 0x460888:goto L460888;
case 0x46088f:goto L46088f;
case 0x460899:c.instructions+=3;goto B460899;
case 0x46089a:c.instructions+=2;goto B46089a;
case 0x46089b:c.instructions+=1;goto B46089b;
case 0x46089e:goto L46089e;
case 0x4608a4:c.instructions+=3;goto B4608a4;
case 0x4608a5:c.instructions+=2;goto B4608a5;
case 0x4608a6:c.instructions+=1;goto B4608a6;
case 0x4608a9:goto L4608a9;
case 0x4608b3:c.instructions+=3;goto B4608b3;
case 0x4608b4:c.instructions+=2;goto B4608b4;
case 0x4608b5:c.instructions+=1;goto B4608b5;
case 0x4608d0:goto L4608d0;
case 0x4608d2:c.instructions+=13;goto B4608d2;
case 0x4608d7:c.instructions+=12;goto B4608d7;
case 0x4608dd:c.instructions+=11;goto B4608dd;
case 0x4608de:c.instructions+=10;goto B4608de;
case 0x4608e5:c.instructions+=9;goto B4608e5;
case 0x4608e8:c.instructions+=8;goto B4608e8;
case 0x4608e9:c.instructions+=7;goto B4608e9;
case 0x4608f3:c.instructions+=6;goto B4608f3;
case 0x4608f9:c.instructions+=5;goto B4608f9;
case 0x4608fb:c.instructions+=4;goto B4608fb;
case 0x4608fd:c.instructions+=3;goto B4608fd;
case 0x460901:c.instructions+=2;goto B460901;
case 0x460905:c.instructions+=1;goto B460905;
case 0x46090b:goto L46090b;
case 0x46090c:c.instructions+=6;goto B46090c;
case 0x46090d:c.instructions+=5;goto B46090d;
case 0x460913:c.instructions+=4;goto B460913;
case 0x460914:c.instructions+=3;goto B460914;
case 0x460918:c.instructions+=2;goto B460918;
case 0x46091e:c.instructions+=1;goto B46091e;
case 0x460920:goto L460920;
case 0x460922:c.instructions+=2;goto B460922;
case 0x460924:c.instructions+=1;goto B460924;
case 0x460926:goto L460926;
case 0x460928:c.instructions+=2;goto B460928;
case 0x46092a:c.instructions+=1;goto B46092a;
case 0x46092c:goto L46092c;
case 0x460931:goto L460931;
case 0x460935:c.instructions+=2;goto B460935;
case 0x460936:c.instructions+=1;goto B460936;
case 0x46093b:goto L46093b;
case 0x46093e:c.instructions+=1;goto B46093e;
case 0x460943:goto L460943;
case 0x460947:c.instructions+=4;goto B460947;
case 0x460949:c.instructions+=3;goto B460949;
case 0x46094a:c.instructions+=2;goto B46094a;
case 0x46094b:c.instructions+=1;goto B46094b;
case 0x46094e:goto L46094e;
case 0x460953:goto L460953;
case 0x460957:c.instructions+=5;goto B460957;
case 0x460958:c.instructions+=4;goto B460958;
case 0x46095b:c.instructions+=3;goto B46095b;
case 0x46095e:c.instructions+=2;goto B46095e;
case 0x460961:c.instructions+=1;goto B460961;
case 0x460966:goto L460966;
case 0x460969:c.instructions+=1;goto B460969;
case 0x46096e:goto L46096e;
case 0x460972:c.instructions+=8;goto B460972;
case 0x460976:c.instructions+=7;goto B460976;
case 0x460977:c.instructions+=6;goto B460977;
case 0x46097b:c.instructions+=5;goto B46097b;
case 0x46097f:c.instructions+=4;goto B46097f;
case 0x460983:c.instructions+=3;goto B460983;
case 0x460985:c.instructions+=2;goto B460985;
case 0x460987:c.instructions+=1;goto B460987;
case 0x460989:goto L460989;
case 0x46098b:c.instructions+=1;goto B46098b;
case 0x460990:goto L460990;
case 0x460994:c.instructions+=3;goto B460994;
case 0x460996:c.instructions+=2;goto B460996;
case 0x46099a:c.instructions+=1;goto B46099a;
case 0x4609a0:goto L4609a0;
case 0x4609a5:c.instructions+=10;goto B4609a5;
case 0x4609a7:c.instructions+=9;goto B4609a7;
case 0x4609aa:c.instructions+=8;goto B4609aa;
case 0x4609ac:c.instructions+=7;goto B4609ac;
case 0x4609af:c.instructions+=6;goto B4609af;
case 0x4609b2:c.instructions+=5;goto B4609b2;
case 0x4609b5:c.instructions+=4;goto B4609b5;
case 0x4609b8:c.instructions+=3;goto B4609b8;
case 0x4609bb:c.instructions+=2;goto B4609bb;
case 0x4609be:c.instructions+=1;goto B4609be;
case 0x4609c0:goto L4609c0;
case 0x4609c2:c.instructions+=1;goto B4609c2;
case 0x4609c4:goto L4609c4;
case 0x4609c7:c.instructions+=1;goto B4609c7;
case 0x4609c9:goto L4609c9;
case 0x4609ce:goto L4609ce;
case 0x4609cf:c.instructions+=14;goto B4609cf;
case 0x4609d2:c.instructions+=13;goto B4609d2;
case 0x4609d7:c.instructions+=12;goto B4609d7;
case 0x4609d8:c.instructions+=11;goto B4609d8;
case 0x4609dd:c.instructions+=10;goto B4609dd;
case 0x4609e0:c.instructions+=9;goto B4609e0;
case 0x4609e3:c.instructions+=8;goto B4609e3;
case 0x4609e6:c.instructions+=7;goto B4609e6;
case 0x4609e9:c.instructions+=6;goto B4609e9;
case 0x4609ec:c.instructions+=5;goto B4609ec;
case 0x4609ef:c.instructions+=4;goto B4609ef;
case 0x4609f2:c.instructions+=3;goto B4609f2;
case 0x4609f5:c.instructions+=2;goto B4609f5;
case 0x4609f8:c.instructions+=1;goto B4609f8;
case 0x4609fd:goto L4609fd;
case 0x460a00:c.instructions+=2;goto B460a00;
case 0x460a02:c.instructions+=1;goto B460a02;
case 0x460a04:goto L460a04;
case 0x460a09:c.instructions+=2;goto B460a09;
case 0x460a0e:c.instructions+=1;goto B460a0e;
case 0x460a13:goto L460a13;
case 0x460a14:c.instructions+=3;goto B460a14;
case 0x460a15:c.instructions+=2;goto B460a15;
case 0x460a1a:c.instructions+=1;goto B460a1a;
case 0x460a1f:goto L460a1f;
case 0x460a22:goto L460a22;
case 0x460a26:c.instructions+=1;goto B460a26;
case 0x460a28:goto L460a28;
case 0x460a2a:goto L460a2a;
case 0x460a2e:c.instructions+=11;goto B460a2e;
case 0x460a32:c.instructions+=10;goto B460a32;
case 0x460a34:c.instructions+=9;goto B460a34;
case 0x460a3a:c.instructions+=8;goto B460a3a;
case 0x460a3b:c.instructions+=7;goto B460a3b;
case 0x460a3e:c.instructions+=6;goto B460a3e;
case 0x460a41:c.instructions+=5;goto B460a41;
case 0x460a43:c.instructions+=4;goto B460a43;
case 0x460a4b:c.instructions+=3;goto B460a4b;
case 0x460a4f:c.instructions+=2;goto B460a4f;
case 0x460a53:c.instructions+=1;goto B460a53;
case 0x460a59:goto L460a59;
case 0x460a5a:c.instructions+=2;goto B460a5a;
case 0x460a5b:c.instructions+=1;goto B460a5b;
case 0x460a5c:goto L460a5c;
case 0x460a60:c.instructions+=4;goto B460a60;
case 0x460a61:c.instructions+=3;goto B460a61;
case 0x460a68:c.instructions+=2;goto B460a68;
case 0x460a6b:c.instructions+=1;goto B460a6b;
case 0x460a70:goto L460a70;
case 0x460a76:c.instructions+=4;goto B460a76;
case 0x460a77:c.instructions+=3;goto B460a77;
case 0x460a79:c.instructions+=2;goto B460a79;
case 0x460a7b:c.instructions+=1;goto B460a7b;
case 0x460a81:goto L460a81;
case 0x460a87:c.instructions+=3;goto B460a87;
case 0x460a89:c.instructions+=2;goto B460a89;
case 0x460a8b:c.instructions+=1;goto B460a8b;
case 0x460a91:goto L460a91;
case 0x460a92:c.instructions+=2;goto B460a92;
case 0x460a93:c.instructions+=1;goto B460a93;
case 0x460a94:goto L460a94;
case 0x460a97:c.instructions+=2;goto B460a97;
case 0x460a9d:c.instructions+=1;goto B460a9d;
case 0x460a9f:goto L460a9f;
case 0x460aa2:c.instructions+=1;goto B460aa2;
case 0x460aa4:goto L460aa4;
case 0x460aaa:c.instructions+=3;goto B460aaa;
case 0x460ab0:c.instructions+=2;goto B460ab0;
case 0x460ab2:c.instructions+=1;goto B460ab2;
case 0x460ab4:goto L460ab4;
case 0x460aba:c.instructions+=2;goto B460aba;
case 0x460abc:c.instructions+=1;goto B460abc;
case 0x460abe:goto L460abe;
case 0x460ac0:c.instructions+=1;goto B460ac0;
case 0x460ac2:goto L460ac2;
case 0x460ac4:c.instructions+=1;goto B460ac4;
case 0x460ac6:goto L460ac6;
case 0x460acc:c.instructions+=1;goto B460acc;
case 0x460ace:goto L460ace;
case 0x460ad0:c.instructions+=1;goto B460ad0;
case 0x460ad2:goto L460ad2;
case 0x460ad4:c.instructions+=1;goto B460ad4;
case 0x460ad6:goto L460ad6;
case 0x460adc:c.instructions+=1;goto B460adc;
case 0x460ade:goto L460ade;
case 0x460ae4:goto L460ae4;
case 0x460ae7:c.instructions+=1;goto B460ae7;
case 0x460ae9:goto L460ae9;
case 0x460aec:c.instructions+=1;goto B460aec;
case 0x460aee:goto L460aee;
case 0x460af1:c.instructions+=1;goto B460af1;
case 0x460af3:goto L460af3;
case 0x460af6:c.instructions+=9;goto B460af6;
case 0x460af9:c.instructions+=8;goto B460af9;
case 0x460aff:c.instructions+=7;goto B460aff;
case 0x460b05:c.instructions+=6;goto B460b05;
case 0x460b0b:c.instructions+=5;goto B460b0b;
case 0x460b0f:c.instructions+=4;goto B460b0f;
case 0x460b12:c.instructions+=3;goto B460b12;
case 0x460b14:c.instructions+=2;goto B460b14;
case 0x460b1a:c.instructions+=1;goto B460b1a;
case 0x460b1c:goto L460b1c;
case 0x460b1f:c.instructions+=6;goto B460b1f;
case 0x460b22:c.instructions+=5;goto B460b22;
case 0x460b26:c.instructions+=4;goto B460b26;
case 0x460b2b:c.instructions+=3;goto B460b2b;
case 0x460b2e:c.instructions+=2;goto B460b2e;
case 0x460b34:c.instructions+=1;goto B460b34;
case 0x460b36:goto L460b36;
case 0x460b3c:c.instructions+=4;goto B460b3c;
case 0x460b3f:c.instructions+=3;goto B460b3f;
case 0x460b42:c.instructions+=2;goto B460b42;
case 0x460b45:c.instructions+=1;goto B460b45;
case 0x460b47:goto L460b47;
case 0x460b49:c.instructions+=1;goto B460b49;
case 0x460b4b:goto L460b4b;
case 0x460b51:c.instructions+=2;goto B460b51;
case 0x460b57:c.instructions+=1;goto B460b57;
case 0x460b59:goto L460b59;
case 0x460b5b:goto L460b5b;
case 0x460b5e:c.instructions+=1;goto B460b5e;
case 0x460b60:goto L460b60;
case 0x460b66:c.instructions+=2;goto B460b66;
case 0x460b6c:c.instructions+=1;goto B460b6c;
case 0x460b6e:goto L460b6e;
case 0x460b71:c.instructions+=1;goto B460b71;
case 0x460b73:goto L460b73;
case 0x460b79:c.instructions+=1;goto B460b79;
case 0x460b7f:goto L460b7f;
case 0x460b81:goto L460b81;
case 0x460b87:c.instructions+=2;goto B460b87;
case 0x460b89:c.instructions+=1;goto B460b89;
case 0x460b8f:goto L460b8f;
case 0x460b95:c.instructions+=3;goto B460b95;
case 0x460b96:c.instructions+=2;goto B460b96;
case 0x460b9c:c.instructions+=1;goto B460b9c;
case 0x460b9e:goto L460b9e;
case 0x460b9f:c.instructions+=1;goto B460b9f;
case 0x460ba1:goto L460ba1;
case 0x460ba3:c.instructions+=1;goto B460ba3;
case 0x460ba5:goto L460ba5;
case 0x460bab:c.instructions+=1;goto B460bab;
case 0x460bad:goto L460bad;
case 0x460bb0:c.instructions+=1;goto B460bb0;
case 0x460bb2:goto L460bb2;
case 0x460bb8:c.instructions+=1;goto B460bb8;
case 0x460bba:goto L460bba;
case 0x460bbc:c.instructions+=1;goto B460bbc;
case 0x460bbe:goto L460bbe;
case 0x460bc4:c.instructions+=2;goto B460bc4;
case 0x460bca:c.instructions+=1;goto B460bca;
case 0x460bcc:goto L460bcc;
case 0x460bd2:c.instructions+=4;goto B460bd2;
case 0x460bd8:c.instructions+=3;goto B460bd8;
case 0x460bd9:c.instructions+=2;goto B460bd9;
case 0x460bdf:c.instructions+=1;goto B460bdf;
case 0x460be1:goto L460be1;
case 0x460be2:c.instructions+=1;goto B460be2;
case 0x460be4:goto L460be4;
case 0x460be6:c.instructions+=1;goto B460be6;
case 0x460be8:goto L460be8;
case 0x460bee:c.instructions+=1;goto B460bee;
case 0x460bf0:goto L460bf0;
case 0x460bf3:c.instructions+=1;goto B460bf3;
case 0x460bf5:goto L460bf5;
case 0x460bfb:c.instructions+=1;goto B460bfb;
case 0x460bfd:goto L460bfd;
case 0x460bff:c.instructions+=1;goto B460bff;
case 0x460c01:goto L460c01;
case 0x460c07:c.instructions+=2;goto B460c07;
case 0x460c0d:c.instructions+=1;goto B460c0d;
case 0x460c0f:goto L460c0f;
case 0x460c13:c.instructions+=5;goto B460c13;
case 0x460c16:c.instructions+=4;goto B460c16;
case 0x460c1c:c.instructions+=3;goto B460c1c;
case 0x460c1d:c.instructions+=2;goto B460c1d;
case 0x460c23:c.instructions+=1;goto B460c23;
case 0x460c25:goto L460c25;
case 0x460c26:c.instructions+=1;goto B460c26;
case 0x460c28:goto L460c28;
case 0x460c2a:c.instructions+=1;goto B460c2a;
case 0x460c2c:goto L460c2c;
case 0x460c32:c.instructions+=1;goto B460c32;
case 0x460c34:goto L460c34;
case 0x460c37:c.instructions+=1;goto B460c37;
case 0x460c39:goto L460c39;
case 0x460c3f:c.instructions+=1;goto B460c3f;
case 0x460c41:goto L460c41;
case 0x460c43:c.instructions+=1;goto B460c43;
case 0x460c45:goto L460c45;
case 0x460c4b:c.instructions+=2;goto B460c4b;
case 0x460c51:c.instructions+=1;goto B460c51;
case 0x460c53:goto L460c53;
case 0x460c59:c.instructions+=4;goto B460c59;
case 0x460c5f:c.instructions+=3;goto B460c5f;
case 0x460c60:c.instructions+=2;goto B460c60;
case 0x460c62:c.instructions+=1;goto B460c62;
case 0x460c68:goto L460c68;
case 0x460c69:c.instructions+=2;goto B460c69;
case 0x460c6a:c.instructions+=1;goto B460c6a;
case 0x460c6b:goto L460c6b;
case 0x460c6c:c.instructions+=1;goto B460c6c;
case 0x460c70:goto L460c70;
case 0x460c71:c.instructions+=6;goto B460c71;
case 0x460c72:c.instructions+=5;goto B460c72;
case 0x460c74:c.instructions+=4;goto B460c74;
case 0x460c7a:c.instructions+=3;goto B460c7a;
case 0x460c7c:c.instructions+=2;goto B460c7c;
case 0x460c7e:c.instructions+=1;goto B460c7e;
case 0x460c84:goto L460c84;
case 0x460c8a:c.instructions+=4;goto B460c8a;
case 0x460c8b:c.instructions+=3;goto B460c8b;
case 0x460c8d:c.instructions+=2;goto B460c8d;
case 0x460c8f:c.instructions+=1;goto B460c8f;
case 0x460c95:goto L460c95;
case 0x460c96:c.instructions+=2;goto B460c96;
case 0x460c9b:c.instructions+=1;goto B460c9b;
case 0x460ca0:goto L460ca0;
case 0x460ca7:c.instructions+=1;goto B460ca7;
case 0x460cad:goto L460cad;
case 0x460caf:c.instructions+=1;goto B460caf;
case 0x460cb5:goto L460cb5;
case 0x460cb7:c.instructions+=3;goto B460cb7;
case 0x460cb9:c.instructions+=2;goto B460cb9;
case 0x460cbb:c.instructions+=1;goto B460cbb;
case 0x460cbe:goto L460cbe;
case 0x460cc5:c.instructions+=4;goto B460cc5;
case 0x460ccb:c.instructions+=3;goto B460ccb;
case 0x460cce:c.instructions+=2;goto B460cce;
case 0x460cd0:c.instructions+=1;goto B460cd0;
case 0x460cd2:goto L460cd2;
case 0x460cd4:c.instructions+=1;goto B460cd4;
case 0x460cd6:goto L460cd6;
case 0x460cdb:c.instructions+=1;goto B460cdb;
case 0x460cdd:goto L460cdd;
case 0x460ce2:goto L460ce2;
case 0x460ce5:c.instructions+=4;goto B460ce5;
case 0x460ce7:c.instructions+=3;goto B460ce7;
case 0x460ce9:c.instructions+=2;goto B460ce9;
case 0x460ceb:c.instructions+=1;goto B460ceb;
case 0x460cee:goto L460cee;
case 0x460cf5:c.instructions+=4;goto B460cf5;
case 0x460cfb:c.instructions+=3;goto B460cfb;
case 0x460cfe:c.instructions+=2;goto B460cfe;
case 0x460d00:c.instructions+=1;goto B460d00;
case 0x460d02:goto L460d02;
case 0x460d04:c.instructions+=1;goto B460d04;
case 0x460d06:goto L460d06;
case 0x460d0b:c.instructions+=1;goto B460d0b;
case 0x460d0d:goto L460d0d;
case 0x460d12:goto L460d12;
case 0x460d15:c.instructions+=4;goto B460d15;
case 0x460d17:c.instructions+=3;goto B460d17;
case 0x460d19:c.instructions+=2;goto B460d19;
case 0x460d1b:c.instructions+=1;goto B460d1b;
case 0x460d1e:goto L460d1e;
case 0x460d25:c.instructions+=4;goto B460d25;
case 0x460d2b:c.instructions+=3;goto B460d2b;
case 0x460d2e:c.instructions+=2;goto B460d2e;
case 0x460d30:c.instructions+=1;goto B460d30;
case 0x460d32:goto L460d32;
case 0x460d34:c.instructions+=1;goto B460d34;
case 0x460d36:goto L460d36;
case 0x460d3b:c.instructions+=1;goto B460d3b;
case 0x460d3d:goto L460d3d;
case 0x460d42:goto L460d42;
case 0x460d45:c.instructions+=4;goto B460d45;
case 0x460d47:c.instructions+=3;goto B460d47;
case 0x460d49:c.instructions+=2;goto B460d49;
case 0x460d4b:c.instructions+=1;goto B460d4b;
case 0x460d4e:goto L460d4e;
case 0x460d50:c.instructions+=2;goto B460d50;
case 0x460d56:c.instructions+=1;goto B460d56;
case 0x460d58:goto L460d58;
case 0x460d5a:c.instructions+=1;goto B460d5a;
case 0x460d5c:goto L460d5c;
case 0x460d61:c.instructions+=1;goto B460d61;
case 0x460d63:goto L460d63;
case 0x460d68:goto L460d68;
case 0x460d6b:c.instructions+=4;goto B460d6b;
case 0x460d71:c.instructions+=3;goto B460d71;
case 0x460d77:c.instructions+=2;goto B460d77;
case 0x460d7a:c.instructions+=1;goto B460d7a;
case 0x460d7c:goto L460d7c;
case 0x460d7f:c.instructions+=1;goto B460d7f;
case 0x460d81:goto L460d81;
case 0x460d87:c.instructions+=2;goto B460d87;
case 0x460d8a:c.instructions+=1;goto B460d8a;
case 0x460d8f:goto L460d8f;
case 0x460d95:c.instructions+=2;goto B460d95;
case 0x460d98:c.instructions+=1;goto B460d98;
case 0x460d9d:goto L460d9d;
case 0x460d9f:c.instructions+=1;goto B460d9f;
case 0x460da5:goto L460da5;
case 0x460da7:c.instructions+=3;goto B460da7;
case 0x460da8:c.instructions+=2;goto B460da8;
case 0x460daa:c.instructions+=1;goto B460daa;
case 0x460dad:goto L460dad;
case 0x460db4:c.instructions+=4;goto B460db4;
case 0x460dba:c.instructions+=3;goto B460dba;
case 0x460dbd:c.instructions+=2;goto B460dbd;
case 0x460dbf:c.instructions+=1;goto B460dbf;
case 0x460dc1:goto L460dc1;
case 0x460dc3:c.instructions+=1;goto B460dc3;
case 0x460dc5:goto L460dc5;
case 0x460dca:c.instructions+=1;goto B460dca;
case 0x460dcc:goto L460dcc;
case 0x460dd1:goto L460dd1;
case 0x460dd4:c.instructions+=4;goto B460dd4;
case 0x460dd6:c.instructions+=3;goto B460dd6;
case 0x460dd8:c.instructions+=2;goto B460dd8;
case 0x460dda:c.instructions+=1;goto B460dda;
case 0x460ddd:goto L460ddd;
case 0x460de4:c.instructions+=4;goto B460de4;
case 0x460dea:c.instructions+=3;goto B460dea;
case 0x460ded:c.instructions+=2;goto B460ded;
case 0x460def:c.instructions+=1;goto B460def;
case 0x460df1:goto L460df1;
case 0x460df3:c.instructions+=1;goto B460df3;
case 0x460df5:goto L460df5;
case 0x460dfa:c.instructions+=1;goto B460dfa;
case 0x460dfc:goto L460dfc;
case 0x460e01:goto L460e01;
case 0x460e04:c.instructions+=4;goto B460e04;
case 0x460e06:c.instructions+=3;goto B460e06;
case 0x460e07:c.instructions+=2;goto B460e07;
case 0x460e09:c.instructions+=1;goto B460e09;
case 0x460e0c:goto L460e0c;
case 0x460e13:c.instructions+=4;goto B460e13;
case 0x460e19:c.instructions+=3;goto B460e19;
case 0x460e1c:c.instructions+=2;goto B460e1c;
case 0x460e1e:c.instructions+=1;goto B460e1e;
case 0x460e20:goto L460e20;
case 0x460e22:c.instructions+=1;goto B460e22;
case 0x460e24:goto L460e24;
case 0x460e29:c.instructions+=1;goto B460e29;
case 0x460e2b:goto L460e2b;
case 0x460e30:goto L460e30;
case 0x460e33:c.instructions+=4;goto B460e33;
case 0x460e39:c.instructions+=3;goto B460e39;
case 0x460e3f:c.instructions+=2;goto B460e3f;
case 0x460e42:c.instructions+=1;goto B460e42;
case 0x460e44:goto L460e44;
case 0x460e47:c.instructions+=1;goto B460e47;
case 0x460e49:goto L460e49;
case 0x460e4f:c.instructions+=2;goto B460e4f;
case 0x460e52:c.instructions+=1;goto B460e52;
case 0x460e54:goto L460e54;
case 0x460e5a:c.instructions+=1;goto B460e5a;
case 0x460e5d:goto L460e5d;
case 0x460e5f:c.instructions+=3;goto B460e5f;
case 0x460e60:c.instructions+=2;goto B460e60;
case 0x460e62:c.instructions+=1;goto B460e62;
case 0x460e65:goto L460e65;
case 0x460e67:c.instructions+=2;goto B460e67;
case 0x460e6d:c.instructions+=1;goto B460e6d;
case 0x460e6f:goto L460e6f;
case 0x460e71:c.instructions+=1;goto B460e71;
case 0x460e73:goto L460e73;
case 0x460e78:c.instructions+=1;goto B460e78;
case 0x460e7a:goto L460e7a;
case 0x460e7f:goto L460e7f;
case 0x460e82:goto L460e82;
case 0x460e89:c.instructions+=5;goto B460e89;
case 0x460e8c:c.instructions+=4;goto B460e8c;
case 0x460e8f:c.instructions+=3;goto B460e8f;
case 0x460e95:c.instructions+=2;goto B460e95;
case 0x460e97:c.instructions+=1;goto B460e97;
case 0x460e99:goto L460e99;
case 0x460e9b:c.instructions+=1;goto B460e9b;
case 0x460e9d:goto L460e9d;
case 0x460ea2:c.instructions+=1;goto B460ea2;
case 0x460ea4:goto L460ea4;
case 0x460ea9:goto L460ea9;
case 0x460eac:c.instructions+=5;goto B460eac;
case 0x460eb0:c.instructions+=4;goto B460eb0;
case 0x460eb3:c.instructions+=3;goto B460eb3;
case 0x460eb5:c.instructions+=2;goto B460eb5;
case 0x460ebc:c.instructions+=1;goto B460ebc;
case 0x460ebe:goto L460ebe;
case 0x460ec0:c.instructions+=1;goto B460ec0;
case 0x460ec2:goto L460ec2;
case 0x460ec7:c.instructions+=1;goto B460ec7;
case 0x460ec9:goto L460ec9;
case 0x460ece:goto L460ece;
case 0x460ed1:c.instructions+=4;goto B460ed1;
case 0x460ed7:c.instructions+=3;goto B460ed7;
case 0x460ed9:c.instructions+=2;goto B460ed9;
case 0x460ee0:c.instructions+=1;goto B460ee0;
case 0x460ee2:goto L460ee2;
case 0x460ee4:c.instructions+=1;goto B460ee4;
case 0x460ee6:goto L460ee6;
case 0x460eeb:c.instructions+=1;goto B460eeb;
case 0x460eed:goto L460eed;
case 0x460ef2:goto L460ef2;
case 0x460ef5:c.instructions+=4;goto B460ef5;
case 0x460ef8:c.instructions+=3;goto B460ef8;
case 0x460efb:c.instructions+=2;goto B460efb;
case 0x460efe:c.instructions+=1;goto B460efe;
case 0x460f03:goto L460f03;
case 0x460f05:c.instructions+=2;goto B460f05;
case 0x460f0b:c.instructions+=1;goto B460f0b;
case 0x460f10:goto L460f10;
case 0x460f12:c.instructions+=2;goto B460f12;
case 0x460f19:c.instructions+=1;goto B460f19;
case 0x460f1b:goto L460f1b;
case 0x460f1d:c.instructions+=1;goto B460f1d;
case 0x460f1f:goto L460f1f;
case 0x460f24:c.instructions+=1;goto B460f24;
case 0x460f26:goto L460f26;
case 0x460f2b:goto L460f2b;
case 0x460f2e:c.instructions+=5;goto B460f2e;
case 0x460f31:c.instructions+=4;goto B460f31;
case 0x460f34:c.instructions+=3;goto B460f34;
case 0x460f3a:c.instructions+=2;goto B460f3a;
case 0x460f40:c.instructions+=1;goto B460f40;
case 0x460f45:goto L460f45;
case 0x460f47:c.instructions+=2;goto B460f47;
case 0x460f4e:c.instructions+=1;goto B460f4e;
case 0x460f50:goto L460f50;
case 0x460f52:c.instructions+=1;goto B460f52;
case 0x460f54:goto L460f54;
case 0x460f59:c.instructions+=1;goto B460f59;
case 0x460f5b:goto L460f5b;
case 0x460f60:goto L460f60;
case 0x460f63:c.instructions+=3;goto B460f63;
case 0x460f66:c.instructions+=2;goto B460f66;
case 0x460f69:c.instructions+=1;goto B460f69;
case 0x460f6e:goto L460f6e;
case 0x460f73:goto L460f73;
case 0x460f75:c.instructions+=2;goto B460f75;
case 0x460f7c:c.instructions+=1;goto B460f7c;
case 0x460f7e:goto L460f7e;
case 0x460f80:c.instructions+=1;goto B460f80;
case 0x460f82:goto L460f82;
case 0x460f87:c.instructions+=1;goto B460f87;
case 0x460f89:goto L460f89;
case 0x460f8e:goto L460f8e;
case 0x460f91:c.instructions+=3;goto B460f91;
case 0x460f94:c.instructions+=2;goto B460f94;
case 0x460f97:c.instructions+=1;goto B460f97;
case 0x460f9c:goto L460f9c;
case 0x460fa1:goto L460fa1;
case 0x460fa3:c.instructions+=2;goto B460fa3;
case 0x460faa:c.instructions+=1;goto B460faa;
case 0x460fac:goto L460fac;
case 0x460fae:c.instructions+=1;goto B460fae;
case 0x460fb0:goto L460fb0;
case 0x460fb5:c.instructions+=1;goto B460fb5;
case 0x460fb7:goto L460fb7;
case 0x460fbc:goto L460fbc;
case 0x460fbf:c.instructions+=4;goto B460fbf;
case 0x460fc6:c.instructions+=3;goto B460fc6;
case 0x460fc8:c.instructions+=2;goto B460fc8;
case 0x460fca:c.instructions+=1;goto B460fca;
case 0x460fcc:goto L460fcc;
case 0x460fcf:c.instructions+=2;goto B460fcf;
case 0x460fd0:c.instructions+=1;goto B460fd0;
case 0x460fd5:goto L460fd5;
case 0x460fdb:c.instructions+=3;goto B460fdb;
case 0x460fdc:c.instructions+=2;goto B460fdc;
case 0x460fde:c.instructions+=1;goto B460fde;
case 0x460fe4:goto L460fe4;
case 0x460fe5:goto L460fe5;
case 0x460fe6:goto L460fe6;
case 0x460fe7:c.instructions+=2;goto B460fe7;
case 0x460fe8:c.instructions+=1;goto B460fe8;
case 0x460ff0:goto L460ff0;
case 0x460ff2:c.instructions+=1;goto B460ff2;
default:missing_instruction(c.pc);}
B460004:L460004:{c.instructions+=7;NFSU2_TR(0x460004);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B460007:{NFSU2_TR(0x460007);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B46000a:{NFSU2_TR(0x46000a);
{u32 ea_=u32(r4(R+28)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B460010:{NFSU2_TR(0x460010);
{u32 ea_=u32(u32(7899204u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B460016:{NFSU2_TR(0x460016);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B460018:{NFSU2_TR(0x460018);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B46001b:{NFSU2_TR(0x46001b);
if(r1(R+514)){{goto L460027;}}
}
B46001d:L46001d:{c.instructions+=3;NFSU2_TR(0x46001d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46001f:{NFSU2_TR(0x46001f);
{u32 ea_=u32(u32(7899204u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B460025:{NFSU2_TR(0x460025);
{goto L460042;}
}
B460027:L460027:{c.instructions+=4;NFSU2_TR(0x460027);
{u32 ea_=u32(u32(7899208u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B46002d:{NFSU2_TR(0x46002d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46002f:{NFSU2_TR(0x46002f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B460032:{NFSU2_TR(0x460032);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L460042;}}
}
B460034:L460034:{c.instructions+=3;NFSU2_TR(0x460034);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B460036:{NFSU2_TR(0x460036);
{u32 ea_=u32(u32(7899208u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46003c:{NFSU2_TR(0x46003c);
{u32 ea_=u32(u32(7881972u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B460042:L460042:{c.instructions+=4;NFSU2_TR(0x460042);
{u32 ea_=u32(u32(7899208u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B460048:{NFSU2_TR(0x460048);
{u32 ea_=u32(u32(7905892u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46004e:{NFSU2_TR(0x46004e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B460050:{NFSU2_TR(0x460050);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x460055ull));
TAIL_STATIC(0x75bed4u,75b);
}
B460055:L460055:{c.instructions+=4;NFSU2_TR(0x460055);
{u32 ea_=u32(u32(7905888u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46005b:{NFSU2_TR(0x46005b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B46005d:{NFSU2_TR(0x46005d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460063:{NFSU2_TR(0x460063);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x460068ull));
TAIL_STATIC(0x75bed4u,75b);
}
B460068:L460068:{c.instructions+=5;NFSU2_TR(0x460068);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46006e:{NFSU2_TR(0x46006e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B460070:{NFSU2_TR(0x460070);
w4(R+12,u32(0x500ull));
}
B460075:{NFSU2_TR(0x460075);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B460077:{NFSU2_TR(0x460077);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46007cull));
TAIL_STATIC(0x75bed4u,75b);
}
B46007c:L46007c:{c.instructions+=9;NFSU2_TR(0x46007c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B460082:{NFSU2_TR(0x460082);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B460088:{NFSU2_TR(0x460088);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x190ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46008e:{NFSU2_TR(0x46008e);
{u32 ea_=u32(u32(7899200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B460094:{NFSU2_TR(0x460094);
{u32 ea_=u32(r4(R+24)+u32(396u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B46009a:{NFSU2_TR(0x46009a);
{u32 ea_=u32(r4(R+4)+u32(112u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46009d:{NFSU2_TR(0x46009d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46009f:{NFSU2_TR(0x46009f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4600a2:{NFSU2_TR(0x4600a2);
if(r1(R+514)){{goto L4600b3;}}
}
B4600a4:L4600a4:{c.instructions+=3;NFSU2_TR(0x4600a4);
{u32 ea_=u32(u32(7899220u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4600aa:{NFSU2_TR(0x4600aa);
{u32 ea_=u32(r4(R+4)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4600ad:{NFSU2_TR(0x4600ad);
{u32 ea_=u32(r4(R+24)+u32(396u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4600b3:L4600b3:{c.instructions+=2;NFSU2_TR(0x4600b3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4600b4:{NFSU2_TR(0x4600b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4600b9ull));
TAIL_STATIC(0x43c370u,43c);
}
B4600b9:L4600b9:{c.instructions+=4;NFSU2_TR(0x4600b9);
{u32 ea_=u32(r4(R+28)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4600bf:{NFSU2_TR(0x4600bf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4600c0:{NFSU2_TR(0x4600c0);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4600c4:{NFSU2_TR(0x4600c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4600c9ull));
TAIL_STATIC(0x43c2b0u,43c);
}
B4600c9:L4600c9:{c.instructions+=6;NFSU2_TR(0x4600c9);
{u32 ea_=u32(r4(R+28)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4600cf:{NFSU2_TR(0x4600cf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4600d0:{NFSU2_TR(0x4600d0);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4600d4:{NFSU2_TR(0x4600d4);
{u32 ea_=u32(r4(R+24)+u32(396u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4600da:{NFSU2_TR(0x4600da);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4600de:{NFSU2_TR(0x4600de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4600e3ull));
TAIL_STATIC(0x43c370u,43c);
}
B4600e3:L4600e3:{c.instructions+=4;NFSU2_TR(0x4600e3);
{u32 ea_=u32(r4(R+28)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4600e9:{NFSU2_TR(0x4600e9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4600ea:{NFSU2_TR(0x4600ea);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4600ee:{NFSU2_TR(0x4600ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4600f3ull));
TAIL_STATIC(0x43c2b0u,43c);
}
B4600f3:L4600f3:{c.instructions+=9;NFSU2_TR(0x4600f3);
{u32 ea_=u32(r4(R+28)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4600f9:{NFSU2_TR(0x4600f9);
w4(R+0,u32(0xffffull));
}
B4600fe:{NFSU2_TR(0x4600fe);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B460100:{NFSU2_TR(0x460100);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460101:{NFSU2_TR(0x460101);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B460105:{NFSU2_TR(0x460105);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460109:{NFSU2_TR(0x460109);
{u32 ea_=u32(r4(R+24)+u32(396u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46010f:{NFSU2_TR(0x46010f);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B460113:{NFSU2_TR(0x460113);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x460118ull));
TAIL_STATIC(0x43c370u,43c);
}
B460118:L460118:{c.instructions+=5;NFSU2_TR(0x460118);
{u32 ea_=u32(r4(R+28)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46011e:{NFSU2_TR(0x46011e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B460122:{NFSU2_TR(0x460122);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460123:{NFSU2_TR(0x460123);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B460127:{NFSU2_TR(0x460127);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46012cull));
TAIL_STATIC(0x43c2b0u,43c);
}
B46012c:L46012c:{c.instructions+=6;NFSU2_TR(0x46012c);
{u32 ea_=u32(r4(R+28)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B460132:{NFSU2_TR(0x460132);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460133:{NFSU2_TR(0x460133);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B460137:{NFSU2_TR(0x460137);
{u32 ea_=u32(r4(R+24)+u32(396u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46013d:{NFSU2_TR(0x46013d);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B460141:{NFSU2_TR(0x460141);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x460146ull));
TAIL_STATIC(0x43c370u,43c);
}
B460146:L460146:{c.instructions+=4;NFSU2_TR(0x460146);
{u32 ea_=u32(r4(R+28)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46014c:{NFSU2_TR(0x46014c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46014d:{NFSU2_TR(0x46014d);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B460151:{NFSU2_TR(0x460151);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x460156ull));
TAIL_STATIC(0x43c2b0u,43c);
}
B460156:L460156:{c.instructions+=7;NFSU2_TR(0x460156);
{u32 ea_=u32(r4(R+28)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46015c:{NFSU2_TR(0x46015c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B460162:{NFSU2_TR(0x460162);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B460165:{NFSU2_TR(0x460165);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B460167:{NFSU2_TR(0x460167);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46016b:{NFSU2_TR(0x46016b);
{u32 ea_=u32(r4(R+24)+u32(396u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B460171:{NFSU2_TR(0x460171);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L460198;}}
}
B460173:L460173:{c.instructions+=9;NFSU2_TR(0x460173);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B460177:{NFSU2_TR(0x460177);
{u32 ea_=u32(r4(R+28)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46017a:{NFSU2_TR(0x46017a);
{u32 ea_=u32(r4(R+24)+u32(288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B460180:{NFSU2_TR(0x460180);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B460184:{NFSU2_TR(0x460184);
{u32 ea_=u32(r4(R+28)+u32(100u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B460187:{NFSU2_TR(0x460187);
{u32 ea_=u32(r4(R+24)+u32(292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46018d:{NFSU2_TR(0x46018d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B460190:{NFSU2_TR(0x460190);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460196:{NFSU2_TR(0x460196);
{goto L4601b9;}
}
B460198:L460198:{c.instructions+=8;NFSU2_TR(0x460198);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46019c:{NFSU2_TR(0x46019c);
{u32 ea_=u32(r4(R+28)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46019f:{NFSU2_TR(0x46019f);
{u32 ea_=u32(r4(R+24)+u32(304u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4601a5:{NFSU2_TR(0x4601a5);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4601a7:{NFSU2_TR(0x4601a7);
{u32 ea_=u32(r4(R+28)+u32(100u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4601aa:{NFSU2_TR(0x4601aa);
{u32 ea_=u32(r4(R+24)+u32(308u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4601b0:{NFSU2_TR(0x4601b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4601b3:{NFSU2_TR(0x4601b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4601b9:L4601b9:{c.instructions+=3;NFSU2_TR(0x4601b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4601bf:{NFSU2_TR(0x4601bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4601c1:{NFSU2_TR(0x4601c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4601ea;}}
}
B4601c3:L4601c3:{c.instructions+=10;NFSU2_TR(0x4601c3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4601c5:{NFSU2_TR(0x4601c5);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4601c9:{NFSU2_TR(0x4601c9);
{u32 ea_=u32(r4(R+28)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4601cc:{NFSU2_TR(0x4601cc);
{u32 ea_=u32(r4(R+24)+u32(288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4601d2:{NFSU2_TR(0x4601d2);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4601d6:{NFSU2_TR(0x4601d6);
{u32 ea_=u32(r4(R+28)+u32(100u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4601d9:{NFSU2_TR(0x4601d9);
{u32 ea_=u32(r4(R+24)+u32(292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4601df:{NFSU2_TR(0x4601df);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4601e2:{NFSU2_TR(0x4601e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4601e8:{NFSU2_TR(0x4601e8);
{goto L460209;}
}
B4601ea:L4601ea:{c.instructions+=7;NFSU2_TR(0x4601ea);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4601ee:{NFSU2_TR(0x4601ee);
{u32 ea_=u32(r4(R+28)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4601f1:{NFSU2_TR(0x4601f1);
{u32 ea_=u32(r4(R+24)+u32(304u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4601f7:{NFSU2_TR(0x4601f7);
{u32 ea_=u32(r4(R+28)+u32(100u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4601fa:{NFSU2_TR(0x4601fa);
{u32 ea_=u32(r4(R+24)+u32(308u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B460200:{NFSU2_TR(0x460200);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B460203:{NFSU2_TR(0x460203);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460209:L460209:{c.instructions+=2;NFSU2_TR(0x460209);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb1ull))));
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
B460210:{NFSU2_TR(0x460210);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4604ce;}}
}
B460216:L460216:{c.instructions+=6;NFSU2_TR(0x460216);
{u32 ea_=u32(r4(R+24)+u32(372u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46021c:{NFSU2_TR(0x46021c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B460222:{NFSU2_TR(0x460222);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B460224:{NFSU2_TR(0x460224);
{u32 ea_=u32(r4(R+24)+u32(360u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B46022a:{NFSU2_TR(0x46022a);
{u32 ea_=u32(r4(R+24)+u32(352u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B460230:{NFSU2_TR(0x460230);
if(r1(R+518)){{goto L460258;}}
}
B460232:L460232:{c.instructions+=7;NFSU2_TR(0x460232);
{u32 ea_=u32(r4(R+24)+u32(308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B460238:{NFSU2_TR(0x460238);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46023e:{NFSU2_TR(0x46023e);
{u32 ea_=u32(r4(R+24)+u32(312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B460244:{NFSU2_TR(0x460244);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46024a:{NFSU2_TR(0x46024a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46024c:{NFSU2_TR(0x46024c);
{u32 ea_=u32(r4(R+24)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B460252:{NFSU2_TR(0x460252);
{u32 ea_=u32(r4(R+24)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B460258:L460258:{c.instructions+=4;NFSU2_TR(0x460258);
{u32 ea_=u32(r4(R+24)+u32(352u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46025e:{NFSU2_TR(0x46025e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B460260:{NFSU2_TR(0x460260);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B460263:{NFSU2_TR(0x460263);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46032d;}}
}
B460269:L460269:{c.instructions+=3;NFSU2_TR(0x460269);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46026f:{NFSU2_TR(0x46026f);
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
B460271:{NFSU2_TR(0x460271);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46031d;}}
}
B460277:L460277:{c.instructions+=5;NFSU2_TR(0x460277);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46027d:{NFSU2_TR(0x46027d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((R+12),(U+0),4);
}
B460283:{NFSU2_TR(0x460283);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460284:{NFSU2_TR(0x460284);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460285:{NFSU2_TR(0x460285);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46028aull));
TAIL_STATIC(0x43ce10u,43c);
}
B46028a:L46028a:{c.instructions+=7;NFSU2_TR(0x46028a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46028e:{NFSU2_TR(0x46028e);
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
B460291:{NFSU2_TR(0x460291);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460292:{NFSU2_TR(0x460292);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B460296:{NFSU2_TR(0x460296);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460297:{NFSU2_TR(0x460297);
__builtin_memmove((R+4),(R+28),4);
}
B460299:{NFSU2_TR(0x460299);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46029eull));
TAIL_STATIC(0x401250u,401);
}
B46029e:L46029e:{c.instructions+=20;NFSU2_TR(0x46029e);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4602a1:{NFSU2_TR(0x4602a1);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4602a4:{NFSU2_TR(0x4602a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4602a6:{NFSU2_TR(0x4602a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4602ac:{NFSU2_TR(0x4602ac);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4602ae:{NFSU2_TR(0x4602ae);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4602b1:{NFSU2_TR(0x4602b1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4602b3:{NFSU2_TR(0x4602b3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4602b4:{NFSU2_TR(0x4602b4);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4602b7:{NFSU2_TR(0x4602b7);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4602bb:{NFSU2_TR(0x4602bb);
{u32 ea_=u32(r4(R+24)+u32(352u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4602c1:{NFSU2_TR(0x4602c1);
{u32 ea_=u32(r4(R+24)+u32(360u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4602c7:{NFSU2_TR(0x4602c7);
{u32 ea_=u32(r4(R+24)+u32(360u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4602cd:{NFSU2_TR(0x4602cd);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4602d3:{NFSU2_TR(0x4602d3);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B4602d5:{NFSU2_TR(0x4602d5);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4602d8:{NFSU2_TR(0x4602d8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4602d9:{NFSU2_TR(0x4602d9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4602da:{NFSU2_TR(0x4602da);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4602dc:{NFSU2_TR(0x4602dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4602e1ull));
TAIL_STATIC(0x4011f0u,401);
}
B4602e1:L4602e1:{c.instructions+=13;NFSU2_TR(0x4602e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4602e5:{NFSU2_TR(0x4602e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4602eb:{NFSU2_TR(0x4602eb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4602f2:{NFSU2_TR(0x4602f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4602fc:{NFSU2_TR(0x4602fc);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4602ff:{NFSU2_TR(0x4602ff);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B460302:{NFSU2_TR(0x460302);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B460304:{NFSU2_TR(0x460304);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B460306:{NFSU2_TR(0x460306);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B460309:{NFSU2_TR(0x460309);
{u32 ea_=u32(r4(R+24)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46030f:{NFSU2_TR(0x46030f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460315:{NFSU2_TR(0x460315);
{u32 ea_=u32(r4(R+24)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46031b:{NFSU2_TR(0x46031b);
{goto L46032d;}
}
B46031d:L46031d:{c.instructions+=2;NFSU2_TR(0x46031d);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x171ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B460324:{NFSU2_TR(0x460324);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46032d;}}
}
B460326:L460326:{c.instructions+=1;NFSU2_TR(0x460326);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb1ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46032d:L46032d:{c.instructions+=16;NFSU2_TR(0x46032d);
{u32 ea_=u32(r4(R+24)+u32(324u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B460333:{NFSU2_TR(0x460333);
{u32 ea_=u32(r4(R+24)+u32(328u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B460339:{NFSU2_TR(0x460339);
{u32 ea_=u32(r4(R+24)+u32(320u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46033f:{NFSU2_TR(0x46033f);
{u32 ea_=u32(r4(R+24)+u32(224u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B460345:{NFSU2_TR(0x460345);
{u32 ea_=u32(r4(R+24)+u32(224u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46034b:{NFSU2_TR(0x46034b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46034d:{NFSU2_TR(0x46034d);
{u32 ea_=u32(r4(R+24)+u32(228u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B460353:{NFSU2_TR(0x460353);
{u32 ea_=u32(r4(R+24)+u32(228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B460359:{NFSU2_TR(0x460359);
{u32 ea_=u32(r4(R+24)+u32(232u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46035f:{NFSU2_TR(0x46035f);
{u32 ea_=u32(r4(R+24)+u32(232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B460365:{NFSU2_TR(0x460365);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x171ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46036b:{NFSU2_TR(0x46036b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46036d:{NFSU2_TR(0x46036d);
{u32 ea_=u32(r4(R+24)+u32(376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B460373:{NFSU2_TR(0x460373);
{u32 ea_=u32(r4(R+24)+u32(364u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B460379:{NFSU2_TR(0x460379);
{u32 ea_=u32(r4(R+24)+u32(356u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46037f:{NFSU2_TR(0x46037f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4603a7;}}
}
B460381:L460381:{c.instructions+=7;NFSU2_TR(0x460381);
{u32 ea_=u32(r4(R+24)+u32(308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B460387:{NFSU2_TR(0x460387);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46038d:{NFSU2_TR(0x46038d);
{u32 ea_=u32(r4(R+24)+u32(312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B460393:{NFSU2_TR(0x460393);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460399:{NFSU2_TR(0x460399);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46039b:{NFSU2_TR(0x46039b);
{u32 ea_=u32(r4(R+24)+u32(212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4603a1:{NFSU2_TR(0x4603a1);
{u32 ea_=u32(r4(R+24)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4603a7:L4603a7:{c.instructions+=4;NFSU2_TR(0x4603a7);
{u32 ea_=u32(r4(R+24)+u32(356u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4603ad:{NFSU2_TR(0x4603ad);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4603af:{NFSU2_TR(0x4603af);
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
B4603b2:{NFSU2_TR(0x4603b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L460472;}}
}
B4603b8:L4603b8:{c.instructions+=3;NFSU2_TR(0x4603b8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x171ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4603be:{NFSU2_TR(0x4603be);
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
B4603c0:{NFSU2_TR(0x4603c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L460462;}}
}
B4603c6:L4603c6:{c.instructions+=5;NFSU2_TR(0x4603c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4603cc:{NFSU2_TR(0x4603cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4603d2:{NFSU2_TR(0x4603d2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4603d3:{NFSU2_TR(0x4603d3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4603d4:{NFSU2_TR(0x4603d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4603d9ull));
TAIL_STATIC(0x43ce10u,43c);
}
B4603d9:L4603d9:{c.instructions+=7;NFSU2_TR(0x4603d9);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4603dd:{NFSU2_TR(0x4603dd);
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
B4603e0:{NFSU2_TR(0x4603e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4603e1:{NFSU2_TR(0x4603e1);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4603e5:{NFSU2_TR(0x4603e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4603e6:{NFSU2_TR(0x4603e6);
__builtin_memmove((R+4),(R+28),4);
}
B4603e8:{NFSU2_TR(0x4603e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4603edull));
TAIL_STATIC(0x401250u,401);
}
B4603ed:L4603ed:{c.instructions+=20;NFSU2_TR(0x4603ed);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4603f0:{NFSU2_TR(0x4603f0);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4603f3:{NFSU2_TR(0x4603f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4603f5:{NFSU2_TR(0x4603f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4603fb:{NFSU2_TR(0x4603fb);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4603fd:{NFSU2_TR(0x4603fd);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B460400:{NFSU2_TR(0x460400);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B460402:{NFSU2_TR(0x460402);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460403:{NFSU2_TR(0x460403);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B460406:{NFSU2_TR(0x460406);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46040a:{NFSU2_TR(0x46040a);
{u32 ea_=u32(r4(R+24)+u32(356u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B460410:{NFSU2_TR(0x460410);
{u32 ea_=u32(r4(R+24)+u32(364u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B460416:{NFSU2_TR(0x460416);
{u32 ea_=u32(r4(R+24)+u32(364u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B46041c:{NFSU2_TR(0x46041c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B460422:{NFSU2_TR(0x460422);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B460424:{NFSU2_TR(0x460424);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B460427:{NFSU2_TR(0x460427);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460428:{NFSU2_TR(0x460428);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460429:{NFSU2_TR(0x460429);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46042b:{NFSU2_TR(0x46042b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x460430ull));
TAIL_STATIC(0x4011f0u,401);
}
B460430:L460430:{c.instructions+=13;NFSU2_TR(0x460430);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B460434:{NFSU2_TR(0x460434);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46043a:{NFSU2_TR(0x46043a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x171ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B460441:{NFSU2_TR(0x460441);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46044b:{NFSU2_TR(0x46044b);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46044e:{NFSU2_TR(0x46044e);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B460451:{NFSU2_TR(0x460451);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B460453:{NFSU2_TR(0x460453);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B460455:{NFSU2_TR(0x460455);
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
B460458:{NFSU2_TR(0x460458);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46045b:{NFSU2_TR(0x46045b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B46045d:{NFSU2_TR(0x46045d);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B460460:{NFSU2_TR(0x460460);
{goto L460472;}
}
B460462:L460462:{c.instructions+=2;NFSU2_TR(0x460462);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
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
B460469:{NFSU2_TR(0x460469);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L460472;}}
}
B46046b:L46046b:{c.instructions+=1;NFSU2_TR(0x46046b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb1ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B460472:L460472:{c.instructions+=16;NFSU2_TR(0x460472);
{u32 ea_=u32(r4(R+24)+u32(340u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B460478:{NFSU2_TR(0x460478);
{u32 ea_=u32(r4(R+24)+u32(344u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46047e:{NFSU2_TR(0x46047e);
{u32 ea_=u32(r4(R+24)+u32(240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B460484:{NFSU2_TR(0x460484);
{u32 ea_=u32(r4(R+24)+u32(336u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46048a:{NFSU2_TR(0x46048a);
{u32 ea_=u32(r4(R+24)+u32(240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B460490:{NFSU2_TR(0x460490);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B460492:{NFSU2_TR(0x460492);
{u32 ea_=u32(r4(R+24)+u32(244u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B460498:{NFSU2_TR(0x460498);
{u32 ea_=u32(r4(R+24)+u32(244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46049e:{NFSU2_TR(0x46049e);
{u32 ea_=u32(r4(R+24)+u32(248u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4604a4:{NFSU2_TR(0x4604a4);
{u32 ea_=u32(r4(R+24)+u32(248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4604aa:{NFSU2_TR(0x4604aa);
{u32 ea_=u32(r4(R+24)+u32(380u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4604b0:{NFSU2_TR(0x4604b0);
{u32 ea_=u32(r4(R+24)+u32(376u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4604b6:{NFSU2_TR(0x4604b6);
{u32 ea_=u32(r4(R+24)+u32(376u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4604bc:{NFSU2_TR(0x4604bc);
{u32 ea_=u32(r4(R+24)+u32(380u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4604c2:{NFSU2_TR(0x4604c2);
{u32 ea_=u32(r4(R+24)+u32(372u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4604c8:{NFSU2_TR(0x4604c8);
{u32 ea_=u32(r4(R+24)+u32(372u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4604ce:L4604ce:{c.instructions+=6;NFSU2_TR(0x4604ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4604cf:{NFSU2_TR(0x4604cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4604d0:{NFSU2_TR(0x4604d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4604d1:{NFSU2_TR(0x4604d1);
__builtin_memmove((R+16),(R+20),4);
}
B4604d3:{NFSU2_TR(0x4604d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4604d4:{NFSU2_TR(0x4604d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4604e0:L4604e0:{c.instructions+=8;NFSU2_TR(0x4604e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4604e1:{NFSU2_TR(0x4604e1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4604e2:{NFSU2_TR(0x4604e2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4604e3:{NFSU2_TR(0x4604e3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4604e4:{NFSU2_TR(0x4604e4);
__builtin_memmove((R+24),(R+4),4);
}
B4604e6:{NFSU2_TR(0x4604e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4604e8:{NFSU2_TR(0x4604e8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4604ea:{NFSU2_TR(0x4604ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4604edull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4604ed:L4604ed:{c.instructions+=7;NFSU2_TR(0x4604ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4604ef:{NFSU2_TR(0x4604ef);
__builtin_memmove((R+28),(R+0),4);
}
B4604f1:{NFSU2_TR(0x4604f1);
u8 U[40];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x190ull))));
w8(U+16,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+28,u32(r8(U+32)));
w8(U+8,u64(s64(s32(r4(R+28)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
__builtin_memmove((R+523),(R+512),1);
}
B4604f8:{NFSU2_TR(0x4604f8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4604fa:{NFSU2_TR(0x4604fa);
__builtin_memmove((R+4),(R+24),4);
}
B4604fc:{NFSU2_TR(0x4604fc);
u8 U[47];
w4(U+39,u32(u32(u32(0xfull))&u32(u32(0x1full))));
__builtin_memmove((U+43),(R+28),4);
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+39))));
w1(U+24,u8((r4(U+39))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+39))-u32(u32(0x1ull))));
w4(U+29,sar<u32>(r4(U+43),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+39))==(u32(0x1ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+39))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+28))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B4604ff:{NFSU2_TR(0x4604ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x460502ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B460502:L460502:{c.instructions+=8;NFSU2_TR(0x460502);
__builtin_memmove((R+12),(R+0),4);
}
B460504:{NFSU2_TR(0x460504);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x190ull))));
w8(U+8,u64(s64(s32(r4(R+12)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+12,u32(r8(U+24)));
}
B46050b:{NFSU2_TR(0x46050b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x194ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B460511:{NFSU2_TR(0x460511);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B460513:{NFSU2_TR(0x460513);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B460516:{NFSU2_TR(0x460516);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B460518:{NFSU2_TR(0x460518);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B460520:{NFSU2_TR(0x460520);
if(r1(R+518)){{goto L46052c;}}
}
B460522:L460522:{c.instructions+=3;NFSU2_TR(0x460522);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B460526:{NFSU2_TR(0x460526);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460527:{NFSU2_TR(0x460527);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46052cull));
TAIL_STATIC(0x735070u,735);
}
B46052c:L46052c:{c.instructions+=9;NFSU2_TR(0x46052c);
__builtin_memmove((R+4),gp(0x7ed3ec),4);
}
B460532:{NFSU2_TR(0x460532);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x194ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B460538:{NFSU2_TR(0x460538);
__builtin_memmove((R+0),(R+4),4);
}
B46053a:{NFSU2_TR(0x46053a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B46053d:{NFSU2_TR(0x46053d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B460540:{NFSU2_TR(0x460540);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B460543:{NFSU2_TR(0x460543);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B460546:{NFSU2_TR(0x460546);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B460548:{NFSU2_TR(0x460548);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46054e;}}
}
B46054a:L46054a:{c.instructions+=2;NFSU2_TR(0x46054a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B46054c:{NFSU2_TR(0x46054c);
{goto L46055b;}
}
B46054e:L46054e:{c.instructions+=2;NFSU2_TR(0x46054e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7fffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B460554:{NFSU2_TR(0x460554);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L46055b;}}
}
B460556:L460556:{c.instructions+=1;NFSU2_TR(0x460556);
w4(R+4,u32(0x7fffull));
}
B46055b:L46055b:{c.instructions+=4;NFSU2_TR(0x46055b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B46055d:{NFSU2_TR(0x46055d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460560:{NFSU2_TR(0x460560);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x194ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B460566:{NFSU2_TR(0x460566);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46056c;}}
}
B460568:L460568:{c.instructions+=2;NFSU2_TR(0x460568);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B46056a:{NFSU2_TR(0x46056a);
{goto L460578;}
}
B46056c:L46056c:{c.instructions+=2;NFSU2_TR(0x46056c);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B460571:{NFSU2_TR(0x460571);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L460578;}}
}
B460573:L460573:{c.instructions+=1;NFSU2_TR(0x460573);
w4(R+0,u32(0x7fffull));
}
B460578:L460578:{c.instructions+=6;NFSU2_TR(0x460578);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46057b:{NFSU2_TR(0x46057b);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B460580:{NFSU2_TR(0x460580);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B460583:{NFSU2_TR(0x460583);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B460585:{NFSU2_TR(0x460585);
w4(R+4,u32(0x1000ull));
}
B46058a:{NFSU2_TR(0x46058a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4605a6;}}
}
B46058c:L46058c:{c.instructions+=3;NFSU2_TR(0x46058c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B46058f:{NFSU2_TR(0x46058f);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B460591:{NFSU2_TR(0x460591);
if(r1(R+518)){{goto L4605a8;}}
}
B460593:L460593:{c.instructions+=6;NFSU2_TR(0x460593);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B460596:{NFSU2_TR(0x460596);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46059c:{NFSU2_TR(0x46059c);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46059f:{NFSU2_TR(0x46059f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4605a1:{NFSU2_TR(0x4605a1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4605a4:{NFSU2_TR(0x4605a4);
if(r1(R+514)){{goto L4605a8;}}
}
B4605a6:L4605a6:{c.instructions+=1;NFSU2_TR(0x4605a6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4605a8:L4605a8:{c.instructions+=4;NFSU2_TR(0x4605a8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4605aa:{NFSU2_TR(0x4605aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x194ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4605b0:{NFSU2_TR(0x4605b0);
__builtin_memmove((R+0),(R+4),4);
}
B4605b2:{NFSU2_TR(0x4605b2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4605b8;}}
}
B4605b4:L4605b4:{c.instructions+=2;NFSU2_TR(0x4605b4);
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
B4605b6:{NFSU2_TR(0x4605b6);
{goto L4605c5;}
}
B4605b8:L4605b8:{c.instructions+=2;NFSU2_TR(0x4605b8);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x1fffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1fffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1fffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4605be:{NFSU2_TR(0x4605be);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4605c5;}}
}
B4605c0:L4605c0:{c.instructions+=1;NFSU2_TR(0x4605c0);
w4(R+0,u32(0x1fffull));
}
B4605c5:L4605c5:{c.instructions+=5;NFSU2_TR(0x4605c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4605c8:{NFSU2_TR(0x4605c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4605ca:{NFSU2_TR(0x4605ca);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4605cc:{NFSU2_TR(0x4605cc);
__builtin_memmove((R+4),(R+24),4);
}
B4605ce:{NFSU2_TR(0x4605ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4605d1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4605d1:L4605d1:{c.instructions+=3;NFSU2_TR(0x4605d1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4605d3:{NFSU2_TR(0x4605d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x194ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4605d9:{NFSU2_TR(0x4605d9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4605df;}}
}
B4605db:L4605db:{c.instructions+=2;NFSU2_TR(0x4605db);
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
B4605dd:{NFSU2_TR(0x4605dd);
{goto L4605eb;}
}
B4605df:L4605df:{c.instructions+=2;NFSU2_TR(0x4605df);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xffffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4605e4:{NFSU2_TR(0x4605e4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4605eb;}}
}
B4605e6:L4605e6:{c.instructions+=1;NFSU2_TR(0x4605e6);
w4(R+0,u32(0xffffull));
}
B4605eb:L4605eb:{c.instructions+=5;NFSU2_TR(0x4605eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4605ee:{NFSU2_TR(0x4605ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4605f0:{NFSU2_TR(0x4605f0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4605f2:{NFSU2_TR(0x4605f2);
__builtin_memmove((R+4),(R+24),4);
}
B4605f4:{NFSU2_TR(0x4605f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4605f7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4605f7:L4605f7:{c.instructions+=3;NFSU2_TR(0x4605f7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4605f9:{NFSU2_TR(0x4605f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x194ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4605ff:{NFSU2_TR(0x4605ff);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L460605;}}
}
B460601:L460601:{c.instructions+=2;NFSU2_TR(0x460601);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B460603:{NFSU2_TR(0x460603);
{goto L460611;}
}
B460605:L460605:{c.instructions+=2;NFSU2_TR(0x460605);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46060a:{NFSU2_TR(0x46060a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L460611;}}
}
B46060c:L46060c:{c.instructions+=1;NFSU2_TR(0x46060c);
w4(R+0,u32(0xffffull));
}
B460611:L460611:{c.instructions+=5;NFSU2_TR(0x460611);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460614:{NFSU2_TR(0x460614);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46061a:{NFSU2_TR(0x46061a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B46061c:{NFSU2_TR(0x46061c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x194ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B460622:{NFSU2_TR(0x460622);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L460628;}}
}
B460624:L460624:{c.instructions+=2;NFSU2_TR(0x460624);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B460626:{NFSU2_TR(0x460626);
{goto L460634;}
}
B460628:L460628:{c.instructions+=2;NFSU2_TR(0x460628);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x410ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x410ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46062d:{NFSU2_TR(0x46062d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L460634;}}
}
B46062f:L46062f:{c.instructions+=1;NFSU2_TR(0x46062f);
w4(R+0,u32(0x410ull));
}
B460634:L460634:{c.instructions+=5;NFSU2_TR(0x460634);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460637:{NFSU2_TR(0x460637);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x194ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46063d:{NFSU2_TR(0x46063d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B46063f:{NFSU2_TR(0x46063f);
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
B460641:{NFSU2_TR(0x460641);
if(r1(R+518)){{goto L46064c;}}
}
B460643:L460643:{c.instructions+=3;NFSU2_TR(0x460643);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B460646:{NFSU2_TR(0x460646);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460647:{NFSU2_TR(0x460647);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46064cull));
TAIL_STATIC(0x735580u,735);
}
B46064c:L46064c:{c.instructions+=5;NFSU2_TR(0x46064c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46064d:{NFSU2_TR(0x46064d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46064e:{NFSU2_TR(0x46064e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46064f:{NFSU2_TR(0x46064f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B460650:{NFSU2_TR(0x460650);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B460660:L460660:{c.instructions+=2;NFSU2_TR(0x460660);
w4(R+0,u32(0x7ed420ull));
}
B460665:{NFSU2_TR(0x460665);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B460670:L460670:{c.instructions+=2;NFSU2_TR(0x460670);
__builtin_memmove((R+0),gp(0x7ed424),4);
}
B460675:{NFSU2_TR(0x460675);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B460680:L460680:{c.instructions+=14;NFSU2_TR(0x460680);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460682:{NFSU2_TR(0x460682);
u8 U[4];
w4(U+0,u32(0x77259bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460687:{NFSU2_TR(0x460687);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46068d:{NFSU2_TR(0x46068d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46068e:{NFSU2_TR(0x46068e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460695:{NFSU2_TR(0x460695);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B460698:{NFSU2_TR(0x460698);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460699:{NFSU2_TR(0x460699);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46069a:{NFSU2_TR(0x46069a);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B46069e:{NFSU2_TR(0x46069e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46069f:{NFSU2_TR(0x46069f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4606a0:{NFSU2_TR(0x4606a0);
__builtin_memmove((R+20),(R+4),4);
}
B4606a2:{NFSU2_TR(0x4606a2);
s4(0x7ec844,u32(0x78a268ull));
}
B4606ac:{NFSU2_TR(0x4606ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4606b1ull));
TAIL_STATIC(0x734df0u,734);
}
B4606b1:L4606b1:{c.instructions+=2;NFSU2_TR(0x4606b1);
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
B4606b4:{NFSU2_TR(0x4606b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4606b9ull));
TAIL_STATIC(0x734e40u,734);
}
B4606b9:L4606b9:{c.instructions+=10;NFSU2_TR(0x4606b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4606bd:{NFSU2_TR(0x4606bd);
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
B4606bf:{NFSU2_TR(0x4606bf);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4606c3:{NFSU2_TR(0x4606c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4606c4:{NFSU2_TR(0x4606c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4606c8:{NFSU2_TR(0x4606c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4606cc:{NFSU2_TR(0x4606cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4606d0:{NFSU2_TR(0x4606d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4606d2:{NFSU2_TR(0x4606d2);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4606d4:{NFSU2_TR(0x4606d4);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4606d6ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4606d6:L4606d6:{c.instructions+=2;NFSU2_TR(0x4606d6);
__builtin_memmove((R+24),(R+0),4);
}
B4606d8:{NFSU2_TR(0x4606d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4606ddull));
TAIL_STATIC(0x734e60u,734);
}
B4606dd:L4606dd:{c.instructions+=4;NFSU2_TR(0x4606dd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4606e1:{NFSU2_TR(0x4606e1);
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
B4606e3:{NFSU2_TR(0x4606e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4606e7:{NFSU2_TR(0x4606e7);
if(r1(R+518)){{goto L46072c;}}
}
B4606e9:L4606e9:{c.instructions+=10;NFSU2_TR(0x4606e9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4606ea:{NFSU2_TR(0x4606ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4606ed:{NFSU2_TR(0x4606ed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4606ee:{NFSU2_TR(0x4606ee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4606ef:{NFSU2_TR(0x4606ef);
u8 U[4];
w4(U+0,u32(0x82c4f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4606f4:{NFSU2_TR(0x4606f4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B4606f6:{NFSU2_TR(0x4606f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4606f9:{NFSU2_TR(0x4606f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4606fc:{NFSU2_TR(0x4606fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4606ff:{NFSU2_TR(0x4606ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x460704ull));
TAIL_STATIC(0x7358c0u,735);
}
B460704:L460704:{c.instructions+=3;NFSU2_TR(0x460704);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B460707:{NFSU2_TR(0x460707);
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
B460709:{NFSU2_TR(0x460709);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L460729;}}
}
B46070b:L46070b:{c.instructions+=3;NFSU2_TR(0x46070b);
u8 U[4];
w4(U+0,u32(0x7edd78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460710:{NFSU2_TR(0x460710);
w4(R+4,u32(0x82c4f8ull));
}
B460715:{NFSU2_TR(0x460715);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46071aull));
TAIL_STATIC(0x735840u,735);
}
B46071a:L46071a:{c.instructions+=4;NFSU2_TR(0x46071a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46071b:{NFSU2_TR(0x46071b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46071c:{NFSU2_TR(0x46071c);
u8 U[4];
w4(U+0,u32(0x82c4f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460721:{NFSU2_TR(0x460721);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x460726ull));
TAIL_STATIC(0x7358c0u,735);
}
B460726:L460726:{c.instructions+=1;NFSU2_TR(0x460726);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B460729:L460729:{c.instructions+=2;NFSU2_TR(0x460729);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46072a:{NFSU2_TR(0x46072a);
{goto L46072e;}
}
B46072c:L46072c:{c.instructions+=1;NFSU2_TR(0x46072c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B46072e:L46072e:{c.instructions+=7;NFSU2_TR(0x46072e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460734:{NFSU2_TR(0x460734);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B460736:{NFSU2_TR(0x460736);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B460738:{NFSU2_TR(0x460738);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46073a:{NFSU2_TR(0x46073a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B460742:{NFSU2_TR(0x460742);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460746:{NFSU2_TR(0x460746);
if(r1(R+518)){{goto L460756;}}
}
B460748:L460748:{c.instructions+=3;NFSU2_TR(0x460748);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B46074c:{NFSU2_TR(0x46074c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46074d:{NFSU2_TR(0x46074d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x460752ull));
TAIL_STATIC(0x735070u,735);
}
B460752:L460752:{c.instructions+=1;NFSU2_TR(0x460752);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B460756:L460756:{c.instructions+=8;NFSU2_TR(0x460756);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46075a:{NFSU2_TR(0x46075a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46075b:{NFSU2_TR(0x46075b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460761:{NFSU2_TR(0x460761);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B460762:{NFSU2_TR(0x460762);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B460763:{NFSU2_TR(0x460763);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46076a:{NFSU2_TR(0x46076a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46076d:{NFSU2_TR(0x46076d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B460770:L460770:{c.instructions+=6;NFSU2_TR(0x460770);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460771:{NFSU2_TR(0x460771);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460772:{NFSU2_TR(0x460772);
__builtin_memmove((R+24),(R+4),4);
}
B460774:{NFSU2_TR(0x460774);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46077a:{NFSU2_TR(0x46077a);
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
B46077c:{NFSU2_TR(0x46077c);
if(r1(R+518)){{goto L4607e4;}}
}
B46077e:L46077e:{c.instructions+=3;NFSU2_TR(0x46077e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B460780:{NFSU2_TR(0x460780);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460782:{NFSU2_TR(0x460782);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x460785ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B460785:L460785:{c.instructions+=4;NFSU2_TR(0x460785);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460789:{NFSU2_TR(0x460789);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46078d:{NFSU2_TR(0x46078d);
{u32 ea_=u32(r4(R+24)+u32(180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B460793:{NFSU2_TR(0x460793);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x460798ull));
TAIL_STATIC(0x75bed4u,75b);
}
B460798:L460798:{c.instructions+=3;NFSU2_TR(0x460798);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B46079a:{NFSU2_TR(0x46079a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4607a0:{NFSU2_TR(0x4607a0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4607a6;}}
}
B4607a2:L4607a2:{c.instructions+=2;NFSU2_TR(0x4607a2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4607a4:{NFSU2_TR(0x4607a4);
{goto L4607b2;}
}
B4607a6:L4607a6:{c.instructions+=2;NFSU2_TR(0x4607a6);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4607ab:{NFSU2_TR(0x4607ab);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4607b2;}}
}
B4607ad:L4607ad:{c.instructions+=1;NFSU2_TR(0x4607ad);
w4(R+0,u32(0x7fffull));
}
B4607b2:L4607b2:{c.instructions+=9;NFSU2_TR(0x4607b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4607b5:{NFSU2_TR(0x4607b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4607bb:{NFSU2_TR(0x4607bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0xfa0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4607c2:{NFSU2_TR(0x4607c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4607c8:{NFSU2_TR(0x4607c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4607cf:{NFSU2_TR(0x4607cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4607d5:{NFSU2_TR(0x4607d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4607d7:{NFSU2_TR(0x4607d7);
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
B4607d9:{NFSU2_TR(0x4607d9);
if(r1(R+518)){{goto L4607e4;}}
}
B4607db:L4607db:{c.instructions+=3;NFSU2_TR(0x4607db);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4607de:{NFSU2_TR(0x4607de);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4607df:{NFSU2_TR(0x4607df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4607e4ull));
TAIL_STATIC(0x735580u,735);
}
B4607e4:L4607e4:{c.instructions+=3;NFSU2_TR(0x4607e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4607e5:{NFSU2_TR(0x4607e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4607e6:{NFSU2_TR(0x4607e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4607f0:L4607f0:{c.instructions+=2;NFSU2_TR(0x4607f0);
w4(R+0,u32(0x7ed430ull));
}
B4607f5:{NFSU2_TR(0x4607f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B460800:L460800:{c.instructions+=2;NFSU2_TR(0x460800);
__builtin_memmove((R+0),gp(0x7ed434),4);
}
B460805:{NFSU2_TR(0x460805);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B460810:L460810:{c.instructions+=3;NFSU2_TR(0x460810);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B460814:{NFSU2_TR(0x460814);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x0ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B460817:{NFSU2_TR(0x460817);
if(r1(R+518)){{goto L460835;}}
}
B460819:L460819:{c.instructions+=2;NFSU2_TR(0x460819);
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
B46081a:{NFSU2_TR(0x46081a);
if(r1(R+518)){{goto L46082d;}}
}
B46081c:L46081c:{c.instructions+=2;NFSU2_TR(0x46081c);
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
B46081d:{NFSU2_TR(0x46081d);
if(r1(R+518)){{goto L460825;}}
}
B46081f:L46081f:{c.instructions+=2;NFSU2_TR(0x46081f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B460822:{NFSU2_TR(0x460822);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B460825:L460825:{c.instructions+=2;NFSU2_TR(0x460825);
w4(R+0,u32(0x8ull));
}
B46082a:{NFSU2_TR(0x46082a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46082d:L46082d:{c.instructions+=2;NFSU2_TR(0x46082d);
w4(R+0,u32(0x2ull));
}
B460832:{NFSU2_TR(0x460832);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B460835:L460835:{c.instructions+=2;NFSU2_TR(0x460835);
w4(R+0,u32(0x1ull));
}
B46083a:{NFSU2_TR(0x46083a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B460840:L460840:{c.instructions+=8;NFSU2_TR(0x460840);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460841:{NFSU2_TR(0x460841);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460842:{NFSU2_TR(0x460842);
__builtin_memmove((R+24),(R+4),4);
}
B460844:{NFSU2_TR(0x460844);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B460848:{NFSU2_TR(0x460848);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46084b:{NFSU2_TR(0x46084b);
w4(R+12,u32(0x1ull));
}
B460850:{NFSU2_TR(0x460850);
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
B460852:{NFSU2_TR(0x460852);
if(r1(R+518)){{goto L460865;}}
}
B460854:L460854:{c.instructions+=2;NFSU2_TR(0x460854);
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
B460857:{NFSU2_TR(0x460857);
if(r1(R+518)){{goto L460865;}}
}
B460859:L460859:{c.instructions+=2;NFSU2_TR(0x460859);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B460863:{NFSU2_TR(0x460863);
{goto L46086b;}
}
B460865:L460865:{c.instructions+=1;NFSU2_TR(0x460865);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46086b:L46086b:{c.instructions+=5;NFSU2_TR(0x46086b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46086e:{NFSU2_TR(0x46086e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B460874:{NFSU2_TR(0x460874);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46087a:{NFSU2_TR(0x46087a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46087c:{NFSU2_TR(0x46087c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46087full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46087f:L46087f:{c.instructions+=4;NFSU2_TR(0x46087f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B460882:{NFSU2_TR(0x460882);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B460883:{NFSU2_TR(0x460883);
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
B460886:{NFSU2_TR(0x460886);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4608a9;}}
}
B460888:L460888:{c.instructions+=1;NFSU2_TR(0x460888);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4608b8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46088f:L46088f:{c.instructions+=4;NFSU2_TR(0x46088f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B460899:{NFSU2_TR(0x460899);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46089a:{NFSU2_TR(0x46089a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46089b:{NFSU2_TR(0x46089b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46089e:L46089e:{c.instructions+=4;NFSU2_TR(0x46089e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4608a4:{NFSU2_TR(0x4608a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4608a5:{NFSU2_TR(0x4608a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4608a6:{NFSU2_TR(0x4608a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4608a9:L4608a9:{c.instructions+=4;NFSU2_TR(0x4608a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4608b3:{NFSU2_TR(0x4608b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4608b4:{NFSU2_TR(0x4608b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4608b5:{NFSU2_TR(0x4608b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4608d0:L4608d0:{c.instructions+=14;NFSU2_TR(0x4608d0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4608d2:{NFSU2_TR(0x4608d2);
u8 U[4];
w4(U+0,u32(0x77265bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4608d7:{NFSU2_TR(0x4608d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4608dd:{NFSU2_TR(0x4608dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4608de:{NFSU2_TR(0x4608de);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4608e5:{NFSU2_TR(0x4608e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B4608e8:{NFSU2_TR(0x4608e8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4608e9:{NFSU2_TR(0x4608e9);
s4(0x7ec844,u32(0x78a280ull));
}
B4608f3:{NFSU2_TR(0x4608f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4608f9:{NFSU2_TR(0x4608f9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4608fb:{NFSU2_TR(0x4608fb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4608fd:{NFSU2_TR(0x4608fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460901:{NFSU2_TR(0x460901);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460905:{NFSU2_TR(0x460905);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L460a5c;}}
}
B46090b:L46090b:{c.instructions+=7;NFSU2_TR(0x46090b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46090c:{NFSU2_TR(0x46090c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46090d:{NFSU2_TR(0x46090d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((R+12),(U+0),4);
}
B460913:{NFSU2_TR(0x460913);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460914:{NFSU2_TR(0x460914);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460918:{NFSU2_TR(0x460918);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xccull))));
__builtin_memmove((R+20),(U+0),4);
}
B46091e:{NFSU2_TR(0x46091e);
__builtin_memmove((R+28),(R+28),4);
}
B460920:L460920:{c.instructions+=3;NFSU2_TR(0x460920);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B460922:{NFSU2_TR(0x460922);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B460924:{NFSU2_TR(0x460924);
if(r1(R+518)){{goto L460953;}}
}
B460926:L460926:{c.instructions+=3;NFSU2_TR(0x460926);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B460928:{NFSU2_TR(0x460928);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B46092a:{NFSU2_TR(0x46092a);
if(r1(R+518)){{goto L460931;}}
}
B46092c:L46092c:{c.instructions+=1;NFSU2_TR(0x46092c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x460931ull));
TAIL_STATIC(0x735550u,735);
}
B460931:L460931:{c.instructions+=3;NFSU2_TR(0x460931);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B460935:{NFSU2_TR(0x460935);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460936:{NFSU2_TR(0x460936);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46093bull));
TAIL_STATIC(0x734df0u,734);
}
B46093b:L46093b:{c.instructions+=2;NFSU2_TR(0x46093b);
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
B46093e:{NFSU2_TR(0x46093e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x460943ull));
TAIL_STATIC(0x734e40u,734);
}
B460943:L460943:{c.instructions+=5;NFSU2_TR(0x460943);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B460947:{NFSU2_TR(0x460947);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B460949:{NFSU2_TR(0x460949);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46094a:{NFSU2_TR(0x46094a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46094b:{NFSU2_TR(0x46094b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46094eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46094e:L46094e:{c.instructions+=1;NFSU2_TR(0x46094e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x460953ull));
TAIL_STATIC(0x734e60u,734);
}
B460953:L460953:{c.instructions+=6;NFSU2_TR(0x460953);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B460957:{NFSU2_TR(0x460957);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460958:{NFSU2_TR(0x460958);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46095b:{NFSU2_TR(0x46095b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+20)),r4(U+0));
}
B46095e:{NFSU2_TR(0x46095e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460961:{NFSU2_TR(0x460961);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x460966ull));
TAIL_STATIC(0x734df0u,734);
}
B460966:L460966:{c.instructions+=2;NFSU2_TR(0x460966);
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
B460969:{NFSU2_TR(0x460969);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46096eull));
TAIL_STATIC(0x734e40u,734);
}
B46096e:L46096e:{c.instructions+=9;NFSU2_TR(0x46096e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B460972:{NFSU2_TR(0x460972);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B460976:{NFSU2_TR(0x460976);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460977:{NFSU2_TR(0x460977);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46097b:{NFSU2_TR(0x46097b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46097f:{NFSU2_TR(0x46097f);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460983:{NFSU2_TR(0x460983);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B460985:{NFSU2_TR(0x460985);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460987:{NFSU2_TR(0x460987);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x460989ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B460989:L460989:{c.instructions+=2;NFSU2_TR(0x460989);
__builtin_memmove((R+24),(R+0),4);
}
B46098b:{NFSU2_TR(0x46098b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x460990ull));
TAIL_STATIC(0x734e60u,734);
}
B460990:L460990:{c.instructions+=4;NFSU2_TR(0x460990);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460994:{NFSU2_TR(0x460994);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B460996:{NFSU2_TR(0x460996);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46099a:{NFSU2_TR(0x46099a);
if(r1(R+518)){{goto L460a28;}}
}
B4609a0:L4609a0:{c.instructions+=11;NFSU2_TR(0x4609a0);
__builtin_memmove((R+0),gp(0x82bc2c),4);
}
B4609a5:{NFSU2_TR(0x4609a5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4609a7:{NFSU2_TR(0x4609a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4609aa:{NFSU2_TR(0x4609aa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B4609ac:{NFSU2_TR(0x4609ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4609af:{NFSU2_TR(0x4609af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4609b2:{NFSU2_TR(0x4609b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4609b5:{NFSU2_TR(0x4609b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4609b8:{NFSU2_TR(0x4609b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4609bb:{NFSU2_TR(0x4609bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4609be:{NFSU2_TR(0x4609be);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4609c4;}}
}
B4609c0:L4609c0:{c.instructions+=2;NFSU2_TR(0x4609c0);
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
B4609c2:{NFSU2_TR(0x4609c2);
{goto L4609ce;}
}
B4609c4:L4609c4:{c.instructions+=2;NFSU2_TR(0x4609c4);
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
B4609c7:{NFSU2_TR(0x4609c7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4609ce;}}
}
B4609c9:L4609c9:{c.instructions+=1;NFSU2_TR(0x4609c9);
w4(R+0,u32(0x3ull));
}
B4609ce:L4609ce:{c.instructions+=15;NFSU2_TR(0x4609ce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4609cf:{NFSU2_TR(0x4609cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4609d2:{NFSU2_TR(0x4609d2);
w4(R+0,u32(0x1000ull));
}
B4609d7:{NFSU2_TR(0x4609d7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4609d8:{NFSU2_TR(0x4609d8);
u8 U[4];
w4(U+0,u32(0x82c500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4609dd:{NFSU2_TR(0x4609dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4609e0:{NFSU2_TR(0x4609e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4609e3:{NFSU2_TR(0x4609e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4609e6:{NFSU2_TR(0x4609e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4609e9:{NFSU2_TR(0x4609e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4609ec:{NFSU2_TR(0x4609ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4609ef:{NFSU2_TR(0x4609ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4609f2:{NFSU2_TR(0x4609f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4609f5:{NFSU2_TR(0x4609f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4609f8:{NFSU2_TR(0x4609f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4609fdull));
TAIL_STATIC(0x7358c0u,735);
}
B4609fd:L4609fd:{c.instructions+=3;NFSU2_TR(0x4609fd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B460a00:{NFSU2_TR(0x460a00);
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
B460a02:{NFSU2_TR(0x460a02);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L460a22;}}
}
B460a04:L460a04:{c.instructions+=3;NFSU2_TR(0x460a04);
u8 U[4];
w4(U+0,u32(0x7eddc8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460a09:{NFSU2_TR(0x460a09);
w4(R+4,u32(0x82c500ull));
}
B460a0e:{NFSU2_TR(0x460a0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x460a13ull));
TAIL_STATIC(0x735840u,735);
}
B460a13:L460a13:{c.instructions+=4;NFSU2_TR(0x460a13);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460a14:{NFSU2_TR(0x460a14);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460a15:{NFSU2_TR(0x460a15);
u8 U[4];
w4(U+0,u32(0x82c500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460a1a:{NFSU2_TR(0x460a1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x460a1full));
TAIL_STATIC(0x7358c0u,735);
}
B460a1f:L460a1f:{c.instructions+=1;NFSU2_TR(0x460a1f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B460a22:L460a22:{c.instructions+=2;NFSU2_TR(0x460a22);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B460a26:{NFSU2_TR(0x460a26);
{goto L460a2a;}
}
B460a28:L460a28:{c.instructions+=1;NFSU2_TR(0x460a28);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B460a2a:L460a2a:{c.instructions+=12;NFSU2_TR(0x460a2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B460a2e:{NFSU2_TR(0x460a2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B460a32:{NFSU2_TR(0x460a32);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+12)),r4(U+0));
}
B460a34:{NFSU2_TR(0x460a34);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B460a3a:{NFSU2_TR(0x460a3a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B460a3b:{NFSU2_TR(0x460a3b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B460a3e:{NFSU2_TR(0x460a3e);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0xcull))));
}
B460a41:{NFSU2_TR(0x460a41);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B460a43:{NFSU2_TR(0x460a43);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B460a4b:{NFSU2_TR(0x460a4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460a4f:{NFSU2_TR(0x460a4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460a53:{NFSU2_TR(0x460a53);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x460920u);}goto L460920;}}
}
B460a59:L460a59:{c.instructions+=3;NFSU2_TR(0x460a59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B460a5a:{NFSU2_TR(0x460a5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B460a5b:{NFSU2_TR(0x460a5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B460a5c:L460a5c:{c.instructions+=5;NFSU2_TR(0x460a5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B460a60:{NFSU2_TR(0x460a60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B460a61:{NFSU2_TR(0x460a61);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460a68:{NFSU2_TR(0x460a68);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B460a6b:{NFSU2_TR(0x460a6b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B460a70:L460a70:{c.instructions+=5;NFSU2_TR(0x460a70);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B460a76:{NFSU2_TR(0x460a76);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460a77:{NFSU2_TR(0x460a77);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B460a79:{NFSU2_TR(0x460a79);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
w1(R+512,u8((r1(R+0))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+0),r1(U+3)));
w1(U+4,u8(u32(r1(R+0))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B460a7b:{NFSU2_TR(0x460a7b);
if(r1(R+518)){{goto L460c6b;}}
}
B460a81:L460a81:{c.instructions+=4;NFSU2_TR(0x460a81);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B460a87:{NFSU2_TR(0x460a87);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B460a89:{NFSU2_TR(0x460a89);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B460a8b:{NFSU2_TR(0x460a8b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L460c6b;}}
}
B460a91:L460a91:{c.instructions+=3;NFSU2_TR(0x460a91);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460a92:{NFSU2_TR(0x460a92);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460a93:{NFSU2_TR(0x460a93);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460a94:L460a94:{c.instructions+=3;NFSU2_TR(0x460a94);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B460a97:{NFSU2_TR(0x460a97);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B460a9d:{NFSU2_TR(0x460a9d);
if(r1(R+518)){{goto L460ad2;}}
}
B460a9f:L460a9f:{c.instructions+=2;NFSU2_TR(0x460a9f);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B460aa2:{NFSU2_TR(0x460aa2);
if(r1(R+518)){{goto L460ad2;}}
}
B460aa4:L460aa4:{c.instructions+=4;NFSU2_TR(0x460aa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B460aaa:{NFSU2_TR(0x460aaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B460ab0:{NFSU2_TR(0x460ab0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B460ab2:{NFSU2_TR(0x460ab2);
if(r1(R+518)){{goto L460ae4;}}
}
B460ab4:L460ab4:{c.instructions+=3;NFSU2_TR(0x460ab4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B460aba:{NFSU2_TR(0x460aba);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B460abc:{NFSU2_TR(0x460abc);
if(r1(R+518)){{goto L460ac6;}}
}
B460abe:L460abe:{c.instructions+=2;NFSU2_TR(0x460abe);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B460ac0:{NFSU2_TR(0x460ac0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L460ae4;}}
}
B460ac2:L460ac2:{c.instructions+=2;NFSU2_TR(0x460ac2);
__builtin_memmove((R+8),(R+28),4);
}
B460ac4:{NFSU2_TR(0x460ac4);
{goto L460ae4;}
}
B460ac6:L460ac6:{c.instructions+=2;NFSU2_TR(0x460ac6);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B460acc:{NFSU2_TR(0x460acc);
if(r1(R+518)){{goto L460ae4;}}
}
B460ace:L460ace:{c.instructions+=2;NFSU2_TR(0x460ace);
__builtin_memmove((R+8),(R+28),4);
}
B460ad0:{NFSU2_TR(0x460ad0);
{goto L460ae4;}
}
B460ad2:L460ad2:{c.instructions+=2;NFSU2_TR(0x460ad2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B460ad4:{NFSU2_TR(0x460ad4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L460ade;}}
}
B460ad6:L460ad6:{c.instructions+=2;NFSU2_TR(0x460ad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B460adc:{NFSU2_TR(0x460adc);
{goto L460ae4;}
}
B460ade:L460ade:{c.instructions+=1;NFSU2_TR(0x460ade);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B460ae4:L460ae4:{c.instructions+=2;NFSU2_TR(0x460ae4);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xeull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B460ae7:{NFSU2_TR(0x460ae7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L460b1c;}}
}
B460ae9:L460ae9:{c.instructions+=2;NFSU2_TR(0x460ae9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B460aec:{NFSU2_TR(0x460aec);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L460af3;}}
}
B460aee:L460aee:{c.instructions+=2;NFSU2_TR(0x460aee);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x16ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B460af1:{NFSU2_TR(0x460af1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L460b1c;}}
}
B460af3:L460af3:{c.instructions+=10;NFSU2_TR(0x460af3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B460af6:{NFSU2_TR(0x460af6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B460af9:{NFSU2_TR(0x460af9);
__builtin_memmove((R+8),gp(0x7ed240),4);
}
B460aff:{NFSU2_TR(0x460aff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460b05:{NFSU2_TR(0x460b05);
__builtin_memmove((R+28),gp(0x7ed240),4);
}
B460b0b:{NFSU2_TR(0x460b0b);
u8 U[12];
w4(U+0,u32(u32(u32(0x33ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B460b0f:{NFSU2_TR(0x460b0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B460b12:{NFSU2_TR(0x460b12);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+8)),r4(U+0));
}
B460b14:{NFSU2_TR(0x460b14);
__builtin_memmove((R+28),gp(0x7ed240),4);
}
B460b1a:{NFSU2_TR(0x460b1a);
{goto L460b36;}
}
B460b1c:L460b1c:{c.instructions+=7;NFSU2_TR(0x460b1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B460b1f:{NFSU2_TR(0x460b1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B460b22:{NFSU2_TR(0x460b22);
u8 U[12];
w4(U+0,u32(u32(u32(0x33ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B460b26:{NFSU2_TR(0x460b26);
w4(R+28,u32(0x7fffull));
}
B460b2b:{NFSU2_TR(0x460b2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B460b2e:{NFSU2_TR(0x460b2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460b34:{NFSU2_TR(0x460b34);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+8)),r4(U+0));
}
B460b36:L460b36:{c.instructions+=5;NFSU2_TR(0x460b36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460b3c:{NFSU2_TR(0x460b3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B460b3f:{NFSU2_TR(0x460b3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B460b42:{NFSU2_TR(0x460b42);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B460b45:{NFSU2_TR(0x460b45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L460b6e;}}
}
B460b47:L460b47:{c.instructions+=2;NFSU2_TR(0x460b47);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B460b49:{NFSU2_TR(0x460b49);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L460b5b;}}
}
B460b4b:L460b4b:{c.instructions+=3;NFSU2_TR(0x460b4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B460b51:{NFSU2_TR(0x460b51);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B460b57:{NFSU2_TR(0x460b57);
if(r1(R+518)){{goto L460b81;}}
}
B460b59:L460b59:{c.instructions+=1;NFSU2_TR(0x460b59);
{goto L460b8f;}
}
B460b5b:L460b5b:{c.instructions+=2;NFSU2_TR(0x460b5b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B460b5e:{NFSU2_TR(0x460b5e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L460b8f;}}
}
B460b60:L460b60:{c.instructions+=3;NFSU2_TR(0x460b60);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B460b66:{NFSU2_TR(0x460b66);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B460b6c:{NFSU2_TR(0x460b6c);
{goto L460b7f;}
}
B460b6e:L460b6e:{c.instructions+=2;NFSU2_TR(0x460b6e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B460b71:{NFSU2_TR(0x460b71);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L460b8f;}}
}
B460b73:L460b73:{c.instructions+=2;NFSU2_TR(0x460b73);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B460b79:{NFSU2_TR(0x460b79);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B460b7f:L460b7f:{c.instructions+=1;NFSU2_TR(0x460b7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L460b8f;}}
}
B460b81:L460b81:{c.instructions+=3;NFSU2_TR(0x460b81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460b87:{NFSU2_TR(0x460b87);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+8)),r4(U+0));
}
B460b89:{NFSU2_TR(0x460b89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460b8f:L460b8f:{c.instructions+=4;NFSU2_TR(0x460b8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B460b95:{NFSU2_TR(0x460b95);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B460b96:{NFSU2_TR(0x460b96);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B460b9c:{NFSU2_TR(0x460b9c);
if(r1(R+518)){{goto L460bbe;}}
}
B460b9e:L460b9e:{c.instructions+=2;NFSU2_TR(0x460b9e);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B460b9f:{NFSU2_TR(0x460b9f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L460bba;}}
}
B460ba1:L460ba1:{c.instructions+=2;NFSU2_TR(0x460ba1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B460ba3:{NFSU2_TR(0x460ba3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L460bad;}}
}
B460ba5:L460ba5:{c.instructions+=2;NFSU2_TR(0x460ba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B460bab:{NFSU2_TR(0x460bab);
{goto L460bcc;}
}
B460bad:L460bad:{c.instructions+=2;NFSU2_TR(0x460bad);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B460bb0:{NFSU2_TR(0x460bb0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L460bba;}}
}
B460bb2:L460bb2:{c.instructions+=2;NFSU2_TR(0x460bb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x194ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B460bb8:{NFSU2_TR(0x460bb8);
{goto L460bcc;}
}
B460bba:L460bba:{c.instructions+=2;NFSU2_TR(0x460bba);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B460bbc:{NFSU2_TR(0x460bbc);
{goto L460bcc;}
}
B460bbe:L460bbe:{c.instructions+=3;NFSU2_TR(0x460bbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B460bc4:{NFSU2_TR(0x460bc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x194ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B460bca:{NFSU2_TR(0x460bca);
w4(R+8,sar<u32>(r4(R+8),u64(u32(0x1ull))));
}
B460bcc:L460bcc:{c.instructions+=5;NFSU2_TR(0x460bcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460bd2:{NFSU2_TR(0x460bd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B460bd8:{NFSU2_TR(0x460bd8);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B460bd9:{NFSU2_TR(0x460bd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B460bdf:{NFSU2_TR(0x460bdf);
if(r1(R+518)){{goto L460c01;}}
}
B460be1:L460be1:{c.instructions+=2;NFSU2_TR(0x460be1);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B460be2:{NFSU2_TR(0x460be2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L460bfd;}}
}
B460be4:L460be4:{c.instructions+=2;NFSU2_TR(0x460be4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B460be6:{NFSU2_TR(0x460be6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L460bf0;}}
}
B460be8:L460be8:{c.instructions+=2;NFSU2_TR(0x460be8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B460bee:{NFSU2_TR(0x460bee);
{goto L460c0f;}
}
B460bf0:L460bf0:{c.instructions+=2;NFSU2_TR(0x460bf0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B460bf3:{NFSU2_TR(0x460bf3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L460bfd;}}
}
B460bf5:L460bf5:{c.instructions+=2;NFSU2_TR(0x460bf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x198ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B460bfb:{NFSU2_TR(0x460bfb);
{goto L460c0f;}
}
B460bfd:L460bfd:{c.instructions+=2;NFSU2_TR(0x460bfd);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B460bff:{NFSU2_TR(0x460bff);
{goto L460c0f;}
}
B460c01:L460c01:{c.instructions+=3;NFSU2_TR(0x460c01);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B460c07:{NFSU2_TR(0x460c07);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x198ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B460c0d:{NFSU2_TR(0x460c0d);
w4(R+8,sar<u32>(r4(R+8),u64(u32(0x1ull))));
}
B460c0f:L460c0f:{c.instructions+=6;NFSU2_TR(0x460c0f);
u8 U[12];
w4(U+0,u32(u32(u32(0x3full))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B460c13:{NFSU2_TR(0x460c13);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B460c16:{NFSU2_TR(0x460c16);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B460c1c:{NFSU2_TR(0x460c1c);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B460c1d:{NFSU2_TR(0x460c1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B460c23:{NFSU2_TR(0x460c23);
if(r1(R+518)){{goto L460c45;}}
}
B460c25:L460c25:{c.instructions+=2;NFSU2_TR(0x460c25);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B460c26:{NFSU2_TR(0x460c26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L460c41;}}
}
B460c28:L460c28:{c.instructions+=2;NFSU2_TR(0x460c28);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B460c2a:{NFSU2_TR(0x460c2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L460c34;}}
}
B460c2c:L460c2c:{c.instructions+=2;NFSU2_TR(0x460c2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B460c32:{NFSU2_TR(0x460c32);
{goto L460c53;}
}
B460c34:L460c34:{c.instructions+=2;NFSU2_TR(0x460c34);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B460c37:{NFSU2_TR(0x460c37);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L460c41;}}
}
B460c39:L460c39:{c.instructions+=2;NFSU2_TR(0x460c39);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x19cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B460c3f:{NFSU2_TR(0x460c3f);
{goto L460c53;}
}
B460c41:L460c41:{c.instructions+=2;NFSU2_TR(0x460c41);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B460c43:{NFSU2_TR(0x460c43);
{goto L460c53;}
}
B460c45:L460c45:{c.instructions+=3;NFSU2_TR(0x460c45);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B460c4b:{NFSU2_TR(0x460c4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x19cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B460c51:{NFSU2_TR(0x460c51);
w4(R+8,sar<u32>(r4(R+8),u64(u32(0x1ull))));
}
B460c53:L460c53:{c.instructions+=5;NFSU2_TR(0x460c53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460c59:{NFSU2_TR(0x460c59);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B460c5f:{NFSU2_TR(0x460c5f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B460c60:{NFSU2_TR(0x460c60);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B460c62:{NFSU2_TR(0x460c62);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x460a94u);}goto L460a94;}}
}
B460c68:L460c68:{c.instructions+=3;NFSU2_TR(0x460c68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B460c69:{NFSU2_TR(0x460c69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B460c6a:{NFSU2_TR(0x460c6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B460c6b:L460c6b:{c.instructions+=2;NFSU2_TR(0x460c6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B460c6c:{NFSU2_TR(0x460c6c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B460c70:L460c70:{c.instructions+=7;NFSU2_TR(0x460c70);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460c71:{NFSU2_TR(0x460c71);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460c72:{NFSU2_TR(0x460c72);
__builtin_memmove((R+24),(R+4),4);
}
B460c74:{NFSU2_TR(0x460c74);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B460c7a:{NFSU2_TR(0x460c7a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B460c7c:{NFSU2_TR(0x460c7c);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
w1(R+512,u8((r1(R+0))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+0),r1(U+3)));
w1(U+4,u8(u32(r1(R+0))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B460c7e:{NFSU2_TR(0x460c7e);
if(r1(R+518)){{goto L460fe6;}}
}
B460c84:L460c84:{c.instructions+=5;NFSU2_TR(0x460c84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B460c8a:{NFSU2_TR(0x460c8a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460c8b:{NFSU2_TR(0x460c8b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B460c8d:{NFSU2_TR(0x460c8d);
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
B460c8f:{NFSU2_TR(0x460c8f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L460fe5;}}
}
B460c95:L460c95:{c.instructions+=3;NFSU2_TR(0x460c95);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460c96:{NFSU2_TR(0x460c96);
w4(R+20,u32(0x1ull));
}
B460c9b:{NFSU2_TR(0x460c9b);
{goto L460ca0;}
}
B460ca0:L460ca0:{c.instructions+=2;NFSU2_TR(0x460ca0);
u8 U[24];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+12))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B460ca7:{NFSU2_TR(0x460ca7);
if(r1(R+518)){{goto L460fd5;}}
}
B460cad:L460cad:{c.instructions+=2;NFSU2_TR(0x460cad);
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
B460caf:{NFSU2_TR(0x460caf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L460d9d;}}
}
B460cb5:L460cb5:{c.instructions+=4;NFSU2_TR(0x460cb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B460cb7:{NFSU2_TR(0x460cb7);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460cb9:{NFSU2_TR(0x460cb9);
__builtin_memmove((R+4),(R+24),4);
}
B460cbb:{NFSU2_TR(0x460cbb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x460cbeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B460cbe:L460cbe:{c.instructions+=5;NFSU2_TR(0x460cbe);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B460cc5:{NFSU2_TR(0x460cc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B460ccb:{NFSU2_TR(0x460ccb);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B460cce:{NFSU2_TR(0x460cce);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B460cd0:{NFSU2_TR(0x460cd0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L460cd6;}}
}
B460cd2:L460cd2:{c.instructions+=2;NFSU2_TR(0x460cd2);
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
B460cd4:{NFSU2_TR(0x460cd4);
{goto L460ce2;}
}
B460cd6:L460cd6:{c.instructions+=2;NFSU2_TR(0x460cd6);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7fffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B460cdb:{NFSU2_TR(0x460cdb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L460ce2;}}
}
B460cdd:L460cdd:{c.instructions+=1;NFSU2_TR(0x460cdd);
w4(R+0,u32(0x7fffull));
}
B460ce2:L460ce2:{c.instructions+=5;NFSU2_TR(0x460ce2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460ce5:{NFSU2_TR(0x460ce5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B460ce7:{NFSU2_TR(0x460ce7);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460ce9:{NFSU2_TR(0x460ce9);
__builtin_memmove((R+4),(R+24),4);
}
B460ceb:{NFSU2_TR(0x460ceb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x460ceeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B460cee:L460cee:{c.instructions+=5;NFSU2_TR(0x460cee);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B460cf5:{NFSU2_TR(0x460cf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B460cfb:{NFSU2_TR(0x460cfb);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B460cfe:{NFSU2_TR(0x460cfe);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B460d00:{NFSU2_TR(0x460d00);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L460d06;}}
}
B460d02:L460d02:{c.instructions+=2;NFSU2_TR(0x460d02);
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
B460d04:{NFSU2_TR(0x460d04);
{goto L460d12;}
}
B460d06:L460d06:{c.instructions+=2;NFSU2_TR(0x460d06);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7fffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B460d0b:{NFSU2_TR(0x460d0b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L460d12;}}
}
B460d0d:L460d0d:{c.instructions+=1;NFSU2_TR(0x460d0d);
w4(R+0,u32(0x7fffull));
}
B460d12:L460d12:{c.instructions+=5;NFSU2_TR(0x460d12);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460d15:{NFSU2_TR(0x460d15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B460d17:{NFSU2_TR(0x460d17);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460d19:{NFSU2_TR(0x460d19);
__builtin_memmove((R+4),(R+24),4);
}
B460d1b:{NFSU2_TR(0x460d1b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x460d1eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B460d1e:L460d1e:{c.instructions+=5;NFSU2_TR(0x460d1e);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B460d25:{NFSU2_TR(0x460d25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B460d2b:{NFSU2_TR(0x460d2b);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B460d2e:{NFSU2_TR(0x460d2e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B460d30:{NFSU2_TR(0x460d30);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L460d36;}}
}
B460d32:L460d32:{c.instructions+=2;NFSU2_TR(0x460d32);
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
B460d34:{NFSU2_TR(0x460d34);
{goto L460d42;}
}
B460d36:L460d36:{c.instructions+=2;NFSU2_TR(0x460d36);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7fffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B460d3b:{NFSU2_TR(0x460d3b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L460d42;}}
}
B460d3d:L460d3d:{c.instructions+=1;NFSU2_TR(0x460d3d);
w4(R+0,u32(0x7fffull));
}
B460d42:L460d42:{c.instructions+=5;NFSU2_TR(0x460d42);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460d45:{NFSU2_TR(0x460d45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B460d47:{NFSU2_TR(0x460d47);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460d49:{NFSU2_TR(0x460d49);
__builtin_memmove((R+4),(R+24),4);
}
B460d4b:{NFSU2_TR(0x460d4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x460d4eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B460d4e:L460d4e:{c.instructions+=3;NFSU2_TR(0x460d4e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B460d50:{NFSU2_TR(0x460d50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B460d56:{NFSU2_TR(0x460d56);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L460d5c;}}
}
B460d58:L460d58:{c.instructions+=2;NFSU2_TR(0x460d58);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B460d5a:{NFSU2_TR(0x460d5a);
{goto L460d68;}
}
B460d5c:L460d5c:{c.instructions+=2;NFSU2_TR(0x460d5c);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B460d61:{NFSU2_TR(0x460d61);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L460d68;}}
}
B460d63:L460d63:{c.instructions+=1;NFSU2_TR(0x460d63);
w4(R+0,u32(0xffffull));
}
B460d68:L460d68:{c.instructions+=5;NFSU2_TR(0x460d68);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460d6b:{NFSU2_TR(0x460d6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B460d71:{NFSU2_TR(0x460d71);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B460d77:{NFSU2_TR(0x460d77);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B460d7a:{NFSU2_TR(0x460d7a);
if(r1(R+518)){{goto L460d8f;}}
}
B460d7c:L460d7c:{c.instructions+=2;NFSU2_TR(0x460d7c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B460d7f:{NFSU2_TR(0x460d7f);
if(r1(R+518)){{goto L460d8f;}}
}
B460d81:L460d81:{c.instructions+=3;NFSU2_TR(0x460d81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B460d87:{NFSU2_TR(0x460d87);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460d8a:{NFSU2_TR(0x460d8a);
{goto L460e82;}
}
B460d8f:L460d8f:{c.instructions+=3;NFSU2_TR(0x460d8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B460d95:{NFSU2_TR(0x460d95);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460d98:{NFSU2_TR(0x460d98);
{goto L460e82;}
}
B460d9d:L460d9d:{c.instructions+=2;NFSU2_TR(0x460d9d);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B460d9f:{NFSU2_TR(0x460d9f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L460e82;}}
}
B460da5:L460da5:{c.instructions+=4;NFSU2_TR(0x460da5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B460da7:{NFSU2_TR(0x460da7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460da8:{NFSU2_TR(0x460da8);
__builtin_memmove((R+4),(R+24),4);
}
B460daa:{NFSU2_TR(0x460daa);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x460dadull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B460dad:L460dad:{c.instructions+=5;NFSU2_TR(0x460dad);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B460db4:{NFSU2_TR(0x460db4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B460dba:{NFSU2_TR(0x460dba);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B460dbd:{NFSU2_TR(0x460dbd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B460dbf:{NFSU2_TR(0x460dbf);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L460dc5;}}
}
B460dc1:L460dc1:{c.instructions+=2;NFSU2_TR(0x460dc1);
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
B460dc3:{NFSU2_TR(0x460dc3);
{goto L460dd1;}
}
B460dc5:L460dc5:{c.instructions+=2;NFSU2_TR(0x460dc5);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7fffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B460dca:{NFSU2_TR(0x460dca);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L460dd1;}}
}
B460dcc:L460dcc:{c.instructions+=1;NFSU2_TR(0x460dcc);
w4(R+0,u32(0x7fffull));
}
B460dd1:L460dd1:{c.instructions+=5;NFSU2_TR(0x460dd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460dd4:{NFSU2_TR(0x460dd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B460dd6:{NFSU2_TR(0x460dd6);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460dd8:{NFSU2_TR(0x460dd8);
__builtin_memmove((R+4),(R+24),4);
}
B460dda:{NFSU2_TR(0x460dda);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x460dddull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B460ddd:L460ddd:{c.instructions+=5;NFSU2_TR(0x460ddd);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B460de4:{NFSU2_TR(0x460de4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B460dea:{NFSU2_TR(0x460dea);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B460ded:{NFSU2_TR(0x460ded);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B460def:{NFSU2_TR(0x460def);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L460df5;}}
}
B460df1:L460df1:{c.instructions+=2;NFSU2_TR(0x460df1);
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
B460df3:{NFSU2_TR(0x460df3);
{goto L460e01;}
}
B460df5:L460df5:{c.instructions+=2;NFSU2_TR(0x460df5);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7fffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B460dfa:{NFSU2_TR(0x460dfa);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L460e01;}}
}
B460dfc:L460dfc:{c.instructions+=1;NFSU2_TR(0x460dfc);
w4(R+0,u32(0x7fffull));
}
B460e01:L460e01:{c.instructions+=5;NFSU2_TR(0x460e01);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460e04:{NFSU2_TR(0x460e04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B460e06:{NFSU2_TR(0x460e06);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460e07:{NFSU2_TR(0x460e07);
__builtin_memmove((R+4),(R+24),4);
}
B460e09:{NFSU2_TR(0x460e09);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x460e0cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B460e0c:L460e0c:{c.instructions+=5;NFSU2_TR(0x460e0c);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B460e13:{NFSU2_TR(0x460e13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B460e19:{NFSU2_TR(0x460e19);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B460e1c:{NFSU2_TR(0x460e1c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B460e1e:{NFSU2_TR(0x460e1e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L460e24;}}
}
B460e20:L460e20:{c.instructions+=2;NFSU2_TR(0x460e20);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B460e22:{NFSU2_TR(0x460e22);
{goto L460e30;}
}
B460e24:L460e24:{c.instructions+=2;NFSU2_TR(0x460e24);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B460e29:{NFSU2_TR(0x460e29);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L460e30;}}
}
B460e2b:L460e2b:{c.instructions+=1;NFSU2_TR(0x460e2b);
w4(R+0,u32(0x7fffull));
}
B460e30:L460e30:{c.instructions+=5;NFSU2_TR(0x460e30);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460e33:{NFSU2_TR(0x460e33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B460e39:{NFSU2_TR(0x460e39);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B460e3f:{NFSU2_TR(0x460e3f);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B460e42:{NFSU2_TR(0x460e42);
if(r1(R+518)){{goto L460e54;}}
}
B460e44:L460e44:{c.instructions+=2;NFSU2_TR(0x460e44);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x9ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B460e47:{NFSU2_TR(0x460e47);
if(r1(R+518)){{goto L460e54;}}
}
B460e49:L460e49:{c.instructions+=3;NFSU2_TR(0x460e49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B460e4f:{NFSU2_TR(0x460e4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460e52:{NFSU2_TR(0x460e52);
{goto L460e5d;}
}
B460e54:L460e54:{c.instructions+=2;NFSU2_TR(0x460e54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B460e5a:{NFSU2_TR(0x460e5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460e5d:L460e5d:{c.instructions+=4;NFSU2_TR(0x460e5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B460e5f:{NFSU2_TR(0x460e5f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460e60:{NFSU2_TR(0x460e60);
__builtin_memmove((R+4),(R+24),4);
}
B460e62:{NFSU2_TR(0x460e62);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x460e65ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B460e65:L460e65:{c.instructions+=3;NFSU2_TR(0x460e65);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B460e67:{NFSU2_TR(0x460e67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B460e6d:{NFSU2_TR(0x460e6d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L460e73;}}
}
B460e6f:L460e6f:{c.instructions+=2;NFSU2_TR(0x460e6f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B460e71:{NFSU2_TR(0x460e71);
{goto L460e7f;}
}
B460e73:L460e73:{c.instructions+=2;NFSU2_TR(0x460e73);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B460e78:{NFSU2_TR(0x460e78);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L460e7f;}}
}
B460e7a:L460e7a:{c.instructions+=1;NFSU2_TR(0x460e7a);
w4(R+0,u32(0xffffull));
}
B460e7f:L460e7f:{c.instructions+=1;NFSU2_TR(0x460e7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460e82:L460e82:{c.instructions+=6;NFSU2_TR(0x460e82);
u8 U[16];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B460e89:{NFSU2_TR(0x460e89);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B460e8c:{NFSU2_TR(0x460e8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B460e8f:{NFSU2_TR(0x460e8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B460e95:{NFSU2_TR(0x460e95);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B460e97:{NFSU2_TR(0x460e97);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L460e9d;}}
}
B460e99:L460e99:{c.instructions+=2;NFSU2_TR(0x460e99);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B460e9b:{NFSU2_TR(0x460e9b);
{goto L460ea9;}
}
B460e9d:L460e9d:{c.instructions+=2;NFSU2_TR(0x460e9d);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x400ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x400ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B460ea2:{NFSU2_TR(0x460ea2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L460ea9;}}
}
B460ea4:L460ea4:{c.instructions+=1;NFSU2_TR(0x460ea4);
w4(R+0,u32(0x400ull));
}
B460ea9:L460ea9:{c.instructions+=6;NFSU2_TR(0x460ea9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460eac:{NFSU2_TR(0x460eac);
u8 U[12];
w4(U+0,u32(u32(u32(0x3full))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B460eb0:{NFSU2_TR(0x460eb0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B460eb3:{NFSU2_TR(0x460eb3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B460eb5:{NFSU2_TR(0x460eb5);
u8 U[16];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B460ebc:{NFSU2_TR(0x460ebc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L460ec2;}}
}
B460ebe:L460ebe:{c.instructions+=2;NFSU2_TR(0x460ebe);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B460ec0:{NFSU2_TR(0x460ec0);
{goto L460ece;}
}
B460ec2:L460ec2:{c.instructions+=2;NFSU2_TR(0x460ec2);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x400ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x400ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B460ec7:{NFSU2_TR(0x460ec7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L460ece;}}
}
B460ec9:L460ec9:{c.instructions+=1;NFSU2_TR(0x460ec9);
w4(R+0,u32(0x400ull));
}
B460ece:L460ece:{c.instructions+=5;NFSU2_TR(0x460ece);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460ed1:{NFSU2_TR(0x460ed1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B460ed7:{NFSU2_TR(0x460ed7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B460ed9:{NFSU2_TR(0x460ed9);
u8 U[16];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B460ee0:{NFSU2_TR(0x460ee0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L460ee6;}}
}
B460ee2:L460ee2:{c.instructions+=2;NFSU2_TR(0x460ee2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B460ee4:{NFSU2_TR(0x460ee4);
{goto L460ef2;}
}
B460ee6:L460ee6:{c.instructions+=2;NFSU2_TR(0x460ee6);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x3ffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x3ffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B460eeb:{NFSU2_TR(0x460eeb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L460ef2;}}
}
B460eed:L460eed:{c.instructions+=1;NFSU2_TR(0x460eed);
w4(R+0,u32(0x3ffull));
}
B460ef2:L460ef2:{c.instructions+=5;NFSU2_TR(0x460ef2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460ef5:{NFSU2_TR(0x460ef5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B460ef8:{NFSU2_TR(0x460ef8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B460efb:{NFSU2_TR(0x460efb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B460efe:{NFSU2_TR(0x460efe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x460f03ull));
TAIL_STATIC(0x59fa10u,59f);
}
B460f03:L460f03:{c.instructions+=3;NFSU2_TR(0x460f03);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B460f05:{NFSU2_TR(0x460f05);
{u32 ea_=u32(u32(7881292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B460f0b:{NFSU2_TR(0x460f0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x460f10ull));
TAIL_STATIC(0x75bed4u,75b);
}
B460f10:L460f10:{c.instructions+=3;NFSU2_TR(0x460f10);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B460f12:{NFSU2_TR(0x460f12);
u8 U[16];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B460f19:{NFSU2_TR(0x460f19);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L460f1f;}}
}
B460f1b:L460f1b:{c.instructions+=2;NFSU2_TR(0x460f1b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B460f1d:{NFSU2_TR(0x460f1d);
{goto L460f2b;}
}
B460f1f:L460f1f:{c.instructions+=2;NFSU2_TR(0x460f1f);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb4ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb4ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B460f24:{NFSU2_TR(0x460f24);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L460f2b;}}
}
B460f26:L460f26:{c.instructions+=1;NFSU2_TR(0x460f26);
w4(R+0,u32(0xb4ull));
}
B460f2b:L460f2b:{c.instructions+=6;NFSU2_TR(0x460f2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460f2e:{NFSU2_TR(0x460f2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B460f31:{NFSU2_TR(0x460f31);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B460f34:{NFSU2_TR(0x460f34);
{u32 ea_=u32(r4(R+4)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B460f3a:{NFSU2_TR(0x460f3a);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B460f40:{NFSU2_TR(0x460f40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x460f45ull));
TAIL_STATIC(0x75bed4u,75b);
}
B460f45:L460f45:{c.instructions+=3;NFSU2_TR(0x460f45);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B460f47:{NFSU2_TR(0x460f47);
u8 U[16];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B460f4e:{NFSU2_TR(0x460f4e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L460f54;}}
}
B460f50:L460f50:{c.instructions+=2;NFSU2_TR(0x460f50);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B460f52:{NFSU2_TR(0x460f52);
{goto L460f60;}
}
B460f54:L460f54:{c.instructions+=2;NFSU2_TR(0x460f54);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x3e8ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x3e8ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B460f59:{NFSU2_TR(0x460f59);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L460f60;}}
}
B460f5b:L460f5b:{c.instructions+=1;NFSU2_TR(0x460f5b);
w4(R+0,u32(0x3e8ull));
}
B460f60:L460f60:{c.instructions+=4;NFSU2_TR(0x460f60);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460f63:{NFSU2_TR(0x460f63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B460f66:{NFSU2_TR(0x460f66);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B460f69:{NFSU2_TR(0x460f69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x460f6eull));
TAIL_STATIC(0x5ed490u,5ed);
}
B460f6e:L460f6e:{c.instructions+=1;NFSU2_TR(0x460f6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x460f73ull));
TAIL_STATIC(0x75bed4u,75b);
}
B460f73:L460f73:{c.instructions+=3;NFSU2_TR(0x460f73);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B460f75:{NFSU2_TR(0x460f75);
u8 U[16];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B460f7c:{NFSU2_TR(0x460f7c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L460f82;}}
}
B460f7e:L460f7e:{c.instructions+=2;NFSU2_TR(0x460f7e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B460f80:{NFSU2_TR(0x460f80);
{goto L460f8e;}
}
B460f82:L460f82:{c.instructions+=2;NFSU2_TR(0x460f82);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x400ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x400ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B460f87:{NFSU2_TR(0x460f87);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L460f8e;}}
}
B460f89:L460f89:{c.instructions+=1;NFSU2_TR(0x460f89);
w4(R+0,u32(0x400ull));
}
B460f8e:L460f8e:{c.instructions+=4;NFSU2_TR(0x460f8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460f91:{NFSU2_TR(0x460f91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B460f94:{NFSU2_TR(0x460f94);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B460f97:{NFSU2_TR(0x460f97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x460f9cull));
TAIL_STATIC(0x5ed530u,5ed);
}
B460f9c:L460f9c:{c.instructions+=1;NFSU2_TR(0x460f9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x460fa1ull));
TAIL_STATIC(0x75bed4u,75b);
}
B460fa1:L460fa1:{c.instructions+=3;NFSU2_TR(0x460fa1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B460fa3:{NFSU2_TR(0x460fa3);
u8 U[16];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B460faa:{NFSU2_TR(0x460faa);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L460fb0;}}
}
B460fac:L460fac:{c.instructions+=2;NFSU2_TR(0x460fac);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B460fae:{NFSU2_TR(0x460fae);
{goto L460fbc;}
}
B460fb0:L460fb0:{c.instructions+=2;NFSU2_TR(0x460fb0);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x400ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x400ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B460fb5:{NFSU2_TR(0x460fb5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L460fbc;}}
}
B460fb7:L460fb7:{c.instructions+=1;NFSU2_TR(0x460fb7);
w4(R+0,u32(0x400ull));
}
B460fbc:L460fbc:{c.instructions+=5;NFSU2_TR(0x460fbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B460fbf:{NFSU2_TR(0x460fbf);
u8 U[16];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B460fc6:{NFSU2_TR(0x460fc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B460fc8:{NFSU2_TR(0x460fc8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B460fca:{NFSU2_TR(0x460fca);
if(r1(R+518)){{goto L460fd5;}}
}
B460fcc:L460fcc:{c.instructions+=3;NFSU2_TR(0x460fcc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B460fcf:{NFSU2_TR(0x460fcf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B460fd0:{NFSU2_TR(0x460fd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x460fd5ull));
TAIL_STATIC(0x735580u,735);
}
B460fd5:L460fd5:{c.instructions+=4;NFSU2_TR(0x460fd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B460fdb:{NFSU2_TR(0x460fdb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B460fdc:{NFSU2_TR(0x460fdc);
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
B460fde:{NFSU2_TR(0x460fde);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x460ca0u);}goto L460ca0;}}
}
B460fe4:L460fe4:{c.instructions+=1;NFSU2_TR(0x460fe4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B460fe5:L460fe5:{c.instructions+=1;NFSU2_TR(0x460fe5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B460fe6:L460fe6:{c.instructions+=3;NFSU2_TR(0x460fe6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B460fe7:{NFSU2_TR(0x460fe7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B460fe8:{NFSU2_TR(0x460fe8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B460ff0:L460ff0:{c.instructions+=2;NFSU2_TR(0x460ff0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B460ff2:{NFSU2_TR(0x460ff2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x460,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
