#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_403(u8* __restrict R,Cpu& c);
u32 body_42f(u8* __restrict R,Cpu& c);
u32 body_430(u8* __restrict R,Cpu& c);
u32 body_432(u8* __restrict R,Cpu& c);
u32 body_435(u8* __restrict R,Cpu& c);
u32 body_437(u8* __restrict R,Cpu& c);
u32 body_439(u8* __restrict R,Cpu& c);
u32 body_43a(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_441(u8* __restrict R,Cpu& c);
u32 body_444(u8* __restrict R,Cpu& c);
u32 body_455(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_593(u8* __restrict R,Cpu& c);
u32 body_5d4(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_5f5(u8* __restrict R,Cpu& c);
u32 body_5fa(u8* __restrict R,Cpu& c);
u32 body_5fb(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x443,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x443,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_443(u8* __restrict R,Cpu& c);
u32 page_443(Cpu& c){return body_443(c.regs.data(),c);}
__attribute__((noinline)) u32 body_443(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x443000:goto L443000;
case 0x443002:goto L443002;
case 0x443008:c.instructions+=3;goto B443008;
case 0x443009:c.instructions+=2;goto B443009;
case 0x44300a:c.instructions+=1;goto B44300a;
case 0x443010:goto L443010;
case 0x443011:c.instructions+=10;goto B443011;
case 0x443012:c.instructions+=9;goto B443012;
case 0x443013:c.instructions+=8;goto B443013;
case 0x443014:c.instructions+=7;goto B443014;
case 0x443016:c.instructions+=6;goto B443016;
case 0x44301c:c.instructions+=5;goto B44301c;
case 0x443020:c.instructions+=4;goto B443020;
case 0x443023:c.instructions+=3;goto B443023;
case 0x443025:c.instructions+=2;goto B443025;
case 0x443027:c.instructions+=1;goto B443027;
case 0x44302d:goto L44302d;
case 0x44302f:c.instructions+=4;goto B44302f;
case 0x443035:c.instructions+=3;goto B443035;
case 0x44303c:c.instructions+=2;goto B44303c;
case 0x44303d:c.instructions+=1;goto B44303d;
case 0x443040:goto L443040;
case 0x443042:c.instructions+=7;goto B443042;
case 0x443044:c.instructions+=6;goto B443044;
case 0x443047:c.instructions+=5;goto B443047;
case 0x443048:c.instructions+=4;goto B443048;
case 0x44304a:c.instructions+=3;goto B44304a;
case 0x44304c:c.instructions+=2;goto B44304c;
case 0x44304e:c.instructions+=1;goto B44304e;
case 0x443050:goto L443050;
case 0x443052:c.instructions+=1;goto B443052;
case 0x443054:goto L443054;
case 0x443056:goto L443056;
case 0x44305c:c.instructions+=3;goto B44305c;
case 0x443063:c.instructions+=2;goto B443063;
case 0x443067:c.instructions+=1;goto B443067;
case 0x443069:goto L443069;
case 0x443071:goto L443071;
case 0x443072:c.instructions+=8;goto B443072;
case 0x443074:c.instructions+=7;goto B443074;
case 0x443076:c.instructions+=6;goto B443076;
case 0x443079:c.instructions+=5;goto B443079;
case 0x44307a:c.instructions+=4;goto B44307a;
case 0x44307c:c.instructions+=3;goto B44307c;
case 0x44307e:c.instructions+=2;goto B44307e;
case 0x443080:c.instructions+=1;goto B443080;
case 0x443082:goto L443082;
case 0x443084:c.instructions+=1;goto B443084;
case 0x443086:goto L443086;
case 0x443088:goto L443088;
case 0x44308e:c.instructions+=2;goto B44308e;
case 0x443095:c.instructions+=1;goto B443095;
case 0x443097:goto L443097;
case 0x44309d:goto L44309d;
case 0x4430a3:c.instructions+=6;goto B4430a3;
case 0x4430a7:c.instructions+=5;goto B4430a7;
case 0x4430ab:c.instructions+=4;goto B4430ab;
case 0x4430af:c.instructions+=3;goto B4430af;
case 0x4430b1:c.instructions+=2;goto B4430b1;
case 0x4430b4:c.instructions+=1;goto B4430b4;
case 0x4430b6:goto L4430b6;
case 0x4430b8:c.instructions+=1;goto B4430b8;
case 0x4430bc:goto L4430bc;
case 0x4430bf:c.instructions+=5;goto B4430bf;
case 0x4430c5:c.instructions+=4;goto B4430c5;
case 0x4430c8:c.instructions+=3;goto B4430c8;
case 0x4430ce:c.instructions+=2;goto B4430ce;
case 0x4430d0:c.instructions+=1;goto B4430d0;
case 0x4430d6:goto L4430d6;
case 0x4430d7:goto L4430d7;
case 0x4430d9:c.instructions+=2;goto B4430d9;
case 0x4430db:c.instructions+=1;goto B4430db;
case 0x4430e1:goto L4430e1;
case 0x4430e7:c.instructions+=2;goto B4430e7;
case 0x4430ee:c.instructions+=1;goto B4430ee;
case 0x4430f0:goto L4430f0;
case 0x4430f6:c.instructions+=8;goto B4430f6;
case 0x4430f8:c.instructions+=7;goto B4430f8;
case 0x4430fa:c.instructions+=6;goto B4430fa;
case 0x4430fd:c.instructions+=5;goto B4430fd;
case 0x4430fe:c.instructions+=4;goto B4430fe;
case 0x443100:c.instructions+=3;goto B443100;
case 0x443102:c.instructions+=2;goto B443102;
case 0x443104:c.instructions+=1;goto B443104;
case 0x443106:goto L443106;
case 0x443108:c.instructions+=1;goto B443108;
case 0x44310a:goto L44310a;
case 0x44310c:goto L44310c;
case 0x443112:c.instructions+=3;goto B443112;
case 0x443119:c.instructions+=2;goto B443119;
case 0x44311d:c.instructions+=1;goto B44311d;
case 0x44311f:goto L44311f;
case 0x443127:goto L443127;
case 0x44312a:c.instructions+=7;goto B44312a;
case 0x44312c:c.instructions+=6;goto B44312c;
case 0x44312e:c.instructions+=5;goto B44312e;
case 0x443131:c.instructions+=4;goto B443131;
case 0x443132:c.instructions+=3;goto B443132;
case 0x443134:c.instructions+=2;goto B443134;
case 0x443136:c.instructions+=1;goto B443136;
case 0x443138:goto L443138;
case 0x44313a:c.instructions+=1;goto B44313a;
case 0x44313c:goto L44313c;
case 0x44313e:goto L44313e;
case 0x443144:c.instructions+=2;goto B443144;
case 0x44314b:c.instructions+=1;goto B44314b;
case 0x44314d:goto L44314d;
case 0x443153:goto L443153;
case 0x443157:c.instructions+=6;goto B443157;
case 0x44315d:c.instructions+=5;goto B44315d;
case 0x443161:c.instructions+=4;goto B443161;
case 0x443165:c.instructions+=3;goto B443165;
case 0x443167:c.instructions+=2;goto B443167;
case 0x44316a:c.instructions+=1;goto B44316a;
case 0x44316c:goto L44316c;
case 0x44316e:c.instructions+=1;goto B44316e;
case 0x443172:goto L443172;
case 0x443175:c.instructions+=4;goto B443175;
case 0x443177:c.instructions+=3;goto B443177;
case 0x44317d:c.instructions+=2;goto B44317d;
case 0x44317f:c.instructions+=1;goto B44317f;
case 0x443185:goto L443185;
case 0x443186:c.instructions+=4;goto B443186;
case 0x443187:c.instructions+=3;goto B443187;
case 0x443188:c.instructions+=2;goto B443188;
case 0x443189:c.instructions+=1;goto B443189;
case 0x443190:goto L443190;
case 0x443194:c.instructions+=20;goto B443194;
case 0x443198:c.instructions+=19;goto B443198;
case 0x44319e:c.instructions+=18;goto B44319e;
case 0x4431a0:c.instructions+=17;goto B4431a0;
case 0x4431a6:c.instructions+=16;goto B4431a6;
case 0x4431aa:c.instructions+=15;goto B4431aa;
case 0x4431ae:c.instructions+=14;goto B4431ae;
case 0x4431b0:c.instructions+=13;goto B4431b0;
case 0x4431b6:c.instructions+=12;goto B4431b6;
case 0x4431bc:c.instructions+=11;goto B4431bc;
case 0x4431bd:c.instructions+=10;goto B4431bd;
case 0x4431c3:c.instructions+=9;goto B4431c3;
case 0x4431ca:c.instructions+=8;goto B4431ca;
case 0x4431ce:c.instructions+=7;goto B4431ce;
case 0x4431d2:c.instructions+=6;goto B4431d2;
case 0x4431d4:c.instructions+=5;goto B4431d4;
case 0x4431d8:c.instructions+=4;goto B4431d8;
case 0x4431da:c.instructions+=3;goto B4431da;
case 0x4431dc:c.instructions+=2;goto B4431dc;
case 0x4431df:c.instructions+=1;goto B4431df;
case 0x4431e1:goto L4431e1;
case 0x4431e3:c.instructions+=1;goto B4431e3;
case 0x4431e7:goto L4431e7;
case 0x4431eb:c.instructions+=4;goto B4431eb;
case 0x4431ed:c.instructions+=3;goto B4431ed;
case 0x4431ef:c.instructions+=2;goto B4431ef;
case 0x4431f2:c.instructions+=1;goto B4431f2;
case 0x4431f4:goto L4431f4;
case 0x4431f6:c.instructions+=1;goto B4431f6;
case 0x4431fa:goto L4431fa;
case 0x4431fb:c.instructions+=2;goto B4431fb;
case 0x4431fd:c.instructions+=1;goto B4431fd;
case 0x443202:goto L443202;
case 0x443203:c.instructions+=1;goto B443203;
case 0x443210:goto L443210;
case 0x443214:c.instructions+=11;goto B443214;
case 0x443218:c.instructions+=10;goto B443218;
case 0x44321c:c.instructions+=9;goto B44321c;
case 0x44321f:c.instructions+=8;goto B44321f;
case 0x443221:c.instructions+=7;goto B443221;
case 0x443228:c.instructions+=6;goto B443228;
case 0x44322a:c.instructions+=5;goto B44322a;
case 0x44322e:c.instructions+=4;goto B44322e;
case 0x443234:c.instructions+=3;goto B443234;
case 0x443236:c.instructions+=2;goto B443236;
case 0x443239:c.instructions+=1;goto B443239;
case 0x44323b:goto L44323b;
case 0x44323f:c.instructions+=5;goto B44323f;
case 0x443245:c.instructions+=4;goto B443245;
case 0x443249:c.instructions+=3;goto B443249;
case 0x44324b:c.instructions+=2;goto B44324b;
case 0x44324e:c.instructions+=1;goto B44324e;
case 0x443250:goto L443250;
case 0x443252:c.instructions+=2;goto B443252;
case 0x443258:c.instructions+=1;goto B443258;
case 0x44325b:goto L44325b;
case 0x443261:goto L443261;
case 0x443263:c.instructions+=1;goto B443263;
case 0x443270:goto L443270;
case 0x443271:c.instructions+=10;goto B443271;
case 0x443273:c.instructions+=9;goto B443273;
case 0x443276:c.instructions+=8;goto B443276;
case 0x443279:c.instructions+=7;goto B443279;
case 0x44327a:c.instructions+=6;goto B44327a;
case 0x44327b:c.instructions+=5;goto B44327b;
case 0x44327c:c.instructions+=4;goto B44327c;
case 0x44327e:c.instructions+=3;goto B44327e;
case 0x443284:c.instructions+=2;goto B443284;
case 0x443287:c.instructions+=1;goto B443287;
case 0x443289:goto L443289;
case 0x44328a:c.instructions+=1;goto B44328a;
case 0x44328c:goto L44328c;
case 0x44328d:c.instructions+=1;goto B44328d;
case 0x44328f:goto L44328f;
case 0x443296:c.instructions+=1;goto B443296;
case 0x443298:goto L443298;
case 0x44329e:c.instructions+=3;goto B44329e;
case 0x44329f:c.instructions+=2;goto B44329f;
case 0x4432a4:c.instructions+=1;goto B4432a4;
case 0x4432a9:goto L4432a9;
case 0x4432ab:c.instructions+=2;goto B4432ab;
case 0x4432ad:c.instructions+=1;goto B4432ad;
case 0x4432af:goto L4432af;
case 0x4432b1:c.instructions+=1;goto B4432b1;
case 0x4432b6:goto L4432b6;
case 0x4432b8:c.instructions+=1;goto B4432b8;
case 0x4432ba:goto L4432ba;
case 0x4432bc:c.instructions+=1;goto B4432bc;
case 0x4432c1:goto L4432c1;
case 0x4432c4:c.instructions+=5;goto B4432c4;
case 0x4432c5:c.instructions+=4;goto B4432c5;
case 0x4432cb:c.instructions+=3;goto B4432cb;
case 0x4432cd:c.instructions+=2;goto B4432cd;
case 0x4432d0:c.instructions+=1;goto B4432d0;
case 0x4432d5:goto L4432d5;
case 0x4432d6:c.instructions+=5;goto B4432d6;
case 0x4432d7:c.instructions+=4;goto B4432d7;
case 0x4432d8:c.instructions+=3;goto B4432d8;
case 0x4432da:c.instructions+=2;goto B4432da;
case 0x4432db:c.instructions+=1;goto B4432db;
case 0x4432de:goto L4432de;
case 0x4432e4:c.instructions+=12;goto B4432e4;
case 0x4432e7:c.instructions+=11;goto B4432e7;
case 0x4432ed:c.instructions+=10;goto B4432ed;
case 0x4432f0:c.instructions+=9;goto B4432f0;
case 0x4432f3:c.instructions+=8;goto B4432f3;
case 0x4432f7:c.instructions+=7;goto B4432f7;
case 0x4432fb:c.instructions+=6;goto B4432fb;
case 0x4432fc:c.instructions+=5;goto B4432fc;
case 0x443300:c.instructions+=4;goto B443300;
case 0x443306:c.instructions+=3;goto B443306;
case 0x44330a:c.instructions+=2;goto B44330a;
case 0x44330d:c.instructions+=1;goto B44330d;
case 0x443312:goto L443312;
case 0x443318:c.instructions+=7;goto B443318;
case 0x44331c:c.instructions+=6;goto B44331c;
case 0x443320:c.instructions+=5;goto B443320;
case 0x443322:c.instructions+=4;goto B443322;
case 0x443323:c.instructions+=3;goto B443323;
case 0x443327:c.instructions+=2;goto B443327;
case 0x443328:c.instructions+=1;goto B443328;
case 0x44332d:goto L44332d;
case 0x443331:c.instructions+=14;goto B443331;
case 0x443335:c.instructions+=13;goto B443335;
case 0x443339:c.instructions+=12;goto B443339;
case 0x44333d:c.instructions+=11;goto B44333d;
case 0x443340:c.instructions+=10;goto B443340;
case 0x443344:c.instructions+=9;goto B443344;
case 0x443347:c.instructions+=8;goto B443347;
case 0x44334b:c.instructions+=7;goto B44334b;
case 0x44334f:c.instructions+=6;goto B44334f;
case 0x443350:c.instructions+=5;goto B443350;
case 0x443354:c.instructions+=4;goto B443354;
case 0x44335a:c.instructions+=3;goto B44335a;
case 0x44335e:c.instructions+=2;goto B44335e;
case 0x443361:c.instructions+=1;goto B443361;
case 0x443366:goto L443366;
case 0x44336a:c.instructions+=7;goto B44336a;
case 0x44336c:c.instructions+=6;goto B44336c;
case 0x443370:c.instructions+=5;goto B443370;
case 0x443371:c.instructions+=4;goto B443371;
case 0x443375:c.instructions+=3;goto B443375;
case 0x443376:c.instructions+=2;goto B443376;
case 0x44337c:c.instructions+=1;goto B44337c;
case 0x443381:goto L443381;
case 0x443385:c.instructions+=28;goto B443385;
case 0x443389:c.instructions+=27;goto B443389;
case 0x44338d:c.instructions+=26;goto B44338d;
case 0x443391:c.instructions+=25;goto B443391;
case 0x443395:c.instructions+=24;goto B443395;
case 0x443399:c.instructions+=23;goto B443399;
case 0x44339d:c.instructions+=22;goto B44339d;
case 0x4433a1:c.instructions+=21;goto B4433a1;
case 0x4433a5:c.instructions+=20;goto B4433a5;
case 0x4433a9:c.instructions+=19;goto B4433a9;
case 0x4433aa:c.instructions+=18;goto B4433aa;
case 0x4433ae:c.instructions+=17;goto B4433ae;
case 0x4433b2:c.instructions+=16;goto B4433b2;
case 0x4433b6:c.instructions+=15;goto B4433b6;
case 0x4433ba:c.instructions+=14;goto B4433ba;
case 0x4433be:c.instructions+=13;goto B4433be;
case 0x4433c2:c.instructions+=12;goto B4433c2;
case 0x4433c6:c.instructions+=11;goto B4433c6;
case 0x4433ca:c.instructions+=10;goto B4433ca;
case 0x4433ce:c.instructions+=9;goto B4433ce;
case 0x4433d0:c.instructions+=8;goto B4433d0;
case 0x4433d4:c.instructions+=7;goto B4433d4;
case 0x4433d8:c.instructions+=6;goto B4433d8;
case 0x4433da:c.instructions+=5;goto B4433da;
case 0x4433dd:c.instructions+=4;goto B4433dd;
case 0x4433de:c.instructions+=3;goto B4433de;
case 0x4433df:c.instructions+=2;goto B4433df;
case 0x4433e0:c.instructions+=1;goto B4433e0;
case 0x4433e5:goto L4433e5;
case 0x4433e9:c.instructions+=4;goto B4433e9;
case 0x4433ed:c.instructions+=3;goto B4433ed;
case 0x4433ee:c.instructions+=2;goto B4433ee;
case 0x4433ef:c.instructions+=1;goto B4433ef;
case 0x4433f4:goto L4433f4;
case 0x4433f7:c.instructions+=13;goto B4433f7;
case 0x4433fa:c.instructions+=12;goto B4433fa;
case 0x4433fd:c.instructions+=11;goto B4433fd;
case 0x4433ff:c.instructions+=10;goto B4433ff;
case 0x443403:c.instructions+=9;goto B443403;
case 0x443406:c.instructions+=8;goto B443406;
case 0x44340a:c.instructions+=7;goto B44340a;
case 0x44340b:c.instructions+=6;goto B44340b;
case 0x44340d:c.instructions+=5;goto B44340d;
case 0x443411:c.instructions+=4;goto B443411;
case 0x443415:c.instructions+=3;goto B443415;
case 0x443416:c.instructions+=2;goto B443416;
case 0x443418:c.instructions+=1;goto B443418;
case 0x44341d:goto L44341d;
case 0x443423:c.instructions+=2;goto B443423;
case 0x443425:c.instructions+=1;goto B443425;
case 0x443427:goto L443427;
case 0x443429:c.instructions+=1;goto B443429;
case 0x44342e:goto L44342e;
case 0x443431:c.instructions+=24;goto B443431;
case 0x443435:c.instructions+=23;goto B443435;
case 0x443438:c.instructions+=22;goto B443438;
case 0x443439:c.instructions+=21;goto B443439;
case 0x44343c:c.instructions+=20;goto B44343c;
case 0x44343f:c.instructions+=19;goto B44343f;
case 0x443443:c.instructions+=18;goto B443443;
case 0x443445:c.instructions+=17;goto B443445;
case 0x443449:c.instructions+=16;goto B443449;
case 0x44344d:c.instructions+=15;goto B44344d;
case 0x443451:c.instructions+=14;goto B443451;
case 0x443455:c.instructions+=13;goto B443455;
case 0x443459:c.instructions+=12;goto B443459;
case 0x44345f:c.instructions+=11;goto B44345f;
case 0x443465:c.instructions+=10;goto B443465;
case 0x443469:c.instructions+=9;goto B443469;
case 0x44346b:c.instructions+=8;goto B44346b;
case 0x44346f:c.instructions+=7;goto B44346f;
case 0x443471:c.instructions+=6;goto B443471;
case 0x443473:c.instructions+=5;goto B443473;
case 0x443477:c.instructions+=4;goto B443477;
case 0x443479:c.instructions+=3;goto B443479;
case 0x44347d:c.instructions+=2;goto B44347d;
case 0x44347f:c.instructions+=1;goto B44347f;
case 0x443484:goto L443484;
case 0x443487:c.instructions+=5;goto B443487;
case 0x44348d:c.instructions+=4;goto B44348d;
case 0x443493:c.instructions+=3;goto B443493;
case 0x443495:c.instructions+=2;goto B443495;
case 0x443499:c.instructions+=1;goto B443499;
case 0x4434a0:goto L4434a0;
case 0x4434a3:c.instructions+=10;goto B4434a3;
case 0x4434a7:c.instructions+=9;goto B4434a7;
case 0x4434aa:c.instructions+=8;goto B4434aa;
case 0x4434b0:c.instructions+=7;goto B4434b0;
case 0x4434b2:c.instructions+=6;goto B4434b2;
case 0x4434b6:c.instructions+=5;goto B4434b6;
case 0x4434ba:c.instructions+=4;goto B4434ba;
case 0x4434bc:c.instructions+=3;goto B4434bc;
case 0x4434bf:c.instructions+=2;goto B4434bf;
case 0x4434c1:c.instructions+=1;goto B4434c1;
case 0x4434c6:goto L4434c6;
case 0x4434c8:c.instructions+=5;goto B4434c8;
case 0x4434cb:c.instructions+=4;goto B4434cb;
case 0x4434ce:c.instructions+=3;goto B4434ce;
case 0x4434d1:c.instructions+=2;goto B4434d1;
case 0x4434d7:c.instructions+=1;goto B4434d7;
case 0x4434d9:goto L4434d9;
case 0x4434da:c.instructions+=5;goto B4434da;
case 0x4434db:c.instructions+=4;goto B4434db;
case 0x4434dc:c.instructions+=3;goto B4434dc;
case 0x4434de:c.instructions+=2;goto B4434de;
case 0x4434df:c.instructions+=1;goto B4434df;
case 0x4434f0:goto L4434f0;
case 0x4434f4:c.instructions+=6;goto B4434f4;
case 0x4434f6:c.instructions+=5;goto B4434f6;
case 0x4434f7:c.instructions+=4;goto B4434f7;
case 0x4434fb:c.instructions+=3;goto B4434fb;
case 0x4434fd:c.instructions+=2;goto B4434fd;
case 0x4434ff:c.instructions+=1;goto B4434ff;
case 0x443501:goto L443501;
case 0x443504:c.instructions+=2;goto B443504;
case 0x443507:c.instructions+=1;goto B443507;
case 0x443509:goto L443509;
case 0x44350c:c.instructions+=2;goto B44350c;
case 0x44350f:c.instructions+=1;goto B44350f;
case 0x443511:goto L443511;
case 0x443513:c.instructions+=2;goto B443513;
case 0x443514:c.instructions+=1;goto B443514;
case 0x443517:goto L443517;
case 0x443518:c.instructions+=12;goto B443518;
case 0x443519:c.instructions+=11;goto B443519;
case 0x44351d:c.instructions+=10;goto B44351d;
case 0x443521:c.instructions+=9;goto B443521;
case 0x443522:c.instructions+=8;goto B443522;
case 0x443526:c.instructions+=7;goto B443526;
case 0x443529:c.instructions+=6;goto B443529;
case 0x44352d:c.instructions+=5;goto B44352d;
case 0x443531:c.instructions+=4;goto B443531;
case 0x443534:c.instructions+=3;goto B443534;
case 0x443536:c.instructions+=2;goto B443536;
case 0x44353a:c.instructions+=1;goto B44353a;
case 0x443540:goto L443540;
case 0x443544:c.instructions+=8;goto B443544;
case 0x443548:c.instructions+=7;goto B443548;
case 0x44354a:c.instructions+=6;goto B44354a;
case 0x44354c:c.instructions+=5;goto B44354c;
case 0x44354e:c.instructions+=4;goto B44354e;
case 0x443554:c.instructions+=3;goto B443554;
case 0x443556:c.instructions+=2;goto B443556;
case 0x443559:c.instructions+=1;goto B443559;
case 0x44355b:goto L44355b;
case 0x44355e:c.instructions+=13;goto B44355e;
case 0x443561:c.instructions+=12;goto B443561;
case 0x443563:c.instructions+=11;goto B443563;
case 0x443566:c.instructions+=10;goto B443566;
case 0x44356a:c.instructions+=9;goto B44356a;
case 0x44356d:c.instructions+=8;goto B44356d;
case 0x443570:c.instructions+=7;goto B443570;
case 0x443572:c.instructions+=6;goto B443572;
case 0x443575:c.instructions+=5;goto B443575;
case 0x443577:c.instructions+=4;goto B443577;
case 0x44357d:c.instructions+=3;goto B44357d;
case 0x44357f:c.instructions+=2;goto B44357f;
case 0x443582:c.instructions+=1;goto B443582;
case 0x443584:goto L443584;
case 0x443588:c.instructions+=9;goto B443588;
case 0x44358c:c.instructions+=8;goto B44358c;
case 0x443591:c.instructions+=7;goto B443591;
case 0x443592:c.instructions+=6;goto B443592;
case 0x443594:c.instructions+=5;goto B443594;
case 0x443596:c.instructions+=4;goto B443596;
case 0x443599:c.instructions+=3;goto B443599;
case 0x44359d:c.instructions+=2;goto B44359d;
case 0x4435a1:c.instructions+=1;goto B4435a1;
case 0x4435a3:goto L4435a3;
case 0x4435a4:c.instructions+=5;goto B4435a4;
case 0x4435a5:c.instructions+=4;goto B4435a5;
case 0x4435a6:c.instructions+=3;goto B4435a6;
case 0x4435a8:c.instructions+=2;goto B4435a8;
case 0x4435a9:c.instructions+=1;goto B4435a9;
case 0x4435ac:goto L4435ac;
case 0x4435ad:c.instructions+=5;goto B4435ad;
case 0x4435ae:c.instructions+=4;goto B4435ae;
case 0x4435af:c.instructions+=3;goto B4435af;
case 0x4435b1:c.instructions+=2;goto B4435b1;
case 0x4435b2:c.instructions+=1;goto B4435b2;
case 0x4435c0:goto L4435c0;
case 0x4435c1:c.instructions+=4;goto B4435c1;
case 0x4435c6:c.instructions+=3;goto B4435c6;
case 0x4435cc:c.instructions+=2;goto B4435cc;
case 0x4435cd:c.instructions+=1;goto B4435cd;
case 0x4435d0:goto L4435d0;
case 0x4435d6:c.instructions+=33;goto B4435d6;
case 0x4435dc:c.instructions+=32;goto B4435dc;
case 0x4435e0:c.instructions+=31;goto B4435e0;
case 0x4435e2:c.instructions+=30;goto B4435e2;
case 0x4435e8:c.instructions+=29;goto B4435e8;
case 0x4435ec:c.instructions+=28;goto B4435ec;
case 0x4435f2:c.instructions+=27;goto B4435f2;
case 0x4435f8:c.instructions+=26;goto B4435f8;
case 0x4435fc:c.instructions+=25;goto B4435fc;
case 0x443602:c.instructions+=24;goto B443602;
case 0x443608:c.instructions+=23;goto B443608;
case 0x44360b:c.instructions+=22;goto B44360b;
case 0x443611:c.instructions+=21;goto B443611;
case 0x443617:c.instructions+=20;goto B443617;
case 0x44361b:c.instructions+=19;goto B44361b;
case 0x443621:c.instructions+=18;goto B443621;
case 0x443627:c.instructions+=17;goto B443627;
case 0x44362b:c.instructions+=16;goto B44362b;
case 0x443631:c.instructions+=15;goto B443631;
case 0x443637:c.instructions+=14;goto B443637;
case 0x44363b:c.instructions+=13;goto B44363b;
case 0x443641:c.instructions+=12;goto B443641;
case 0x443647:c.instructions+=11;goto B443647;
case 0x44364b:c.instructions+=10;goto B44364b;
case 0x443651:c.instructions+=9;goto B443651;
case 0x443657:c.instructions+=8;goto B443657;
case 0x44365b:c.instructions+=7;goto B44365b;
case 0x443661:c.instructions+=6;goto B443661;
case 0x443667:c.instructions+=5;goto B443667;
case 0x44366b:c.instructions+=4;goto B44366b;
case 0x44366e:c.instructions+=3;goto B44366e;
case 0x443674:c.instructions+=2;goto B443674;
case 0x443679:c.instructions+=1;goto B443679;
case 0x44367f:goto L44367f;
case 0x443685:c.instructions+=4;goto B443685;
case 0x443686:c.instructions+=3;goto B443686;
case 0x44368c:c.instructions+=2;goto B44368c;
case 0x44368d:c.instructions+=1;goto B44368d;
case 0x443690:goto L443690;
case 0x443696:c.instructions+=6;goto B443696;
case 0x44369c:c.instructions+=5;goto B44369c;
case 0x44369d:c.instructions+=4;goto B44369d;
case 0x44369e:c.instructions+=3;goto B44369e;
case 0x4436a5:c.instructions+=2;goto B4436a5;
case 0x4436a8:c.instructions+=1;goto B4436a8;
case 0x4436ad:goto L4436ad;
case 0x4436af:goto L4436af;
case 0x4436b0:c.instructions+=2;goto B4436b0;
case 0x4436b1:c.instructions+=1;goto B4436b1;
case 0x4436c0:goto L4436c0;
case 0x4436c6:c.instructions+=7;goto B4436c6;
case 0x4436cc:c.instructions+=6;goto B4436cc;
case 0x4436d3:c.instructions+=5;goto B4436d3;
case 0x4436d5:c.instructions+=4;goto B4436d5;
case 0x4436db:c.instructions+=3;goto B4436db;
case 0x4436e1:c.instructions+=2;goto B4436e1;
case 0x4436e7:c.instructions+=1;goto B4436e7;
case 0x4436f0:goto L4436f0;
case 0x4436f4:c.instructions+=9;goto B4436f4;
case 0x4436f5:c.instructions+=8;goto B4436f5;
case 0x4436f6:c.instructions+=7;goto B4436f6;
case 0x4436f7:c.instructions+=6;goto B4436f7;
case 0x4436fb:c.instructions+=5;goto B4436fb;
case 0x4436fc:c.instructions+=4;goto B4436fc;
case 0x4436fe:c.instructions+=3;goto B4436fe;
case 0x4436ff:c.instructions+=2;goto B4436ff;
case 0x443704:c.instructions+=1;goto B443704;
case 0x443709:goto L443709;
case 0x44370b:c.instructions+=2;goto B44370b;
case 0x44370d:c.instructions+=1;goto B44370d;
case 0x44370f:goto L44370f;
case 0x443711:c.instructions+=3;goto B443711;
case 0x443713:c.instructions+=2;goto B443713;
case 0x443719:c.instructions+=1;goto B443719;
case 0x44371e:goto L44371e;
case 0x44371f:c.instructions+=5;goto B44371f;
case 0x443729:c.instructions+=4;goto B443729;
case 0x44372a:c.instructions+=3;goto B44372a;
case 0x44372c:c.instructions+=2;goto B44372c;
case 0x44372d:c.instructions+=1;goto B44372d;
case 0x443730:goto L443730;
case 0x443731:c.instructions+=5;goto B443731;
case 0x44373b:c.instructions+=4;goto B44373b;
case 0x44373c:c.instructions+=3;goto B44373c;
case 0x44373e:c.instructions+=2;goto B44373e;
case 0x44373f:c.instructions+=1;goto B44373f;
case 0x443750:goto L443750;
case 0x443751:c.instructions+=4;goto B443751;
case 0x443753:c.instructions+=3;goto B443753;
case 0x443755:c.instructions+=2;goto B443755;
case 0x44375a:c.instructions+=1;goto B44375a;
case 0x44375f:goto L44375f;
case 0x443765:c.instructions+=3;goto B443765;
case 0x443767:c.instructions+=2;goto B443767;
case 0x443771:c.instructions+=1;goto B443771;
case 0x443773:goto L443773;
case 0x443774:c.instructions+=2;goto B443774;
case 0x443779:c.instructions+=1;goto B443779;
case 0x44377e:goto L44377e;
case 0x443788:goto L443788;
case 0x44378e:c.instructions+=2;goto B44378e;
case 0x443790:c.instructions+=1;goto B443790;
case 0x443795:goto L443795;
case 0x44379b:c.instructions+=3;goto B44379b;
case 0x44379e:c.instructions+=2;goto B44379e;
case 0x4437a0:c.instructions+=1;goto B4437a0;
case 0x4437a2:goto L4437a2;
case 0x4437a4:c.instructions+=3;goto B4437a4;
case 0x4437a6:c.instructions+=2;goto B4437a6;
case 0x4437a8:c.instructions+=1;goto B4437a8;
case 0x4437ab:goto L4437ab;
case 0x4437ad:c.instructions+=1;goto B4437ad;
case 0x4437af:goto L4437af;
case 0x4437b1:c.instructions+=1;goto B4437b1;
case 0x4437b6:goto L4437b6;
case 0x4437bc:c.instructions+=3;goto B4437bc;
case 0x4437be:c.instructions+=2;goto B4437be;
case 0x4437bf:c.instructions+=1;goto B4437bf;
case 0x4437c1:goto L4437c1;
case 0x4437c3:c.instructions+=1;goto B4437c3;
case 0x4437c8:goto L4437c8;
case 0x4437d0:goto L4437d0;
case 0x4437d2:c.instructions+=5;goto B4437d2;
case 0x4437d6:c.instructions+=4;goto B4437d6;
case 0x4437da:c.instructions+=3;goto B4437da;
case 0x4437dd:c.instructions+=2;goto B4437dd;
case 0x4437e3:c.instructions+=1;goto B4437e3;
case 0x4437e5:goto L4437e5;
case 0x4437ef:goto L4437ef;
case 0x4437f3:c.instructions+=4;goto B4437f3;
case 0x4437f4:c.instructions+=3;goto B4437f4;
case 0x4437f5:c.instructions+=2;goto B4437f5;
case 0x4437f6:c.instructions+=1;goto B4437f6;
case 0x4437f8:goto L4437f8;
case 0x4437fa:c.instructions+=1;goto B4437fa;
case 0x4437fc:goto L4437fc;
case 0x4437ff:c.instructions+=1;goto B4437ff;
case 0x443801:goto L443801;
case 0x443803:goto L443803;
case 0x443809:c.instructions+=4;goto B443809;
case 0x44380f:c.instructions+=3;goto B44380f;
case 0x443811:c.instructions+=2;goto B443811;
case 0x443814:c.instructions+=1;goto B443814;
case 0x44381a:goto L44381a;
case 0x44381c:goto L44381c;
case 0x44381e:c.instructions+=1;goto B44381e;
case 0x443821:goto L443821;
case 0x443823:goto L443823;
case 0x443824:c.instructions+=2;goto B443824;
case 0x443825:c.instructions+=1;goto B443825;
case 0x443830:goto L443830;
case 0x443834:c.instructions+=5;goto B443834;
case 0x443835:c.instructions+=4;goto B443835;
case 0x443839:c.instructions+=3;goto B443839;
case 0x44383a:c.instructions+=2;goto B44383a;
case 0x44383c:c.instructions+=1;goto B44383c;
case 0x443840:goto L443840;
case 0x443842:c.instructions+=3;goto B443842;
case 0x443844:c.instructions+=2;goto B443844;
case 0x443845:c.instructions+=1;goto B443845;
case 0x44384a:goto L44384a;
case 0x443850:c.instructions+=3;goto B443850;
case 0x443853:c.instructions+=2;goto B443853;
case 0x443856:c.instructions+=1;goto B443856;
case 0x443858:goto L443858;
case 0x443859:c.instructions+=1;goto B443859;
case 0x44385b:goto L44385b;
case 0x44385c:c.instructions+=1;goto B44385c;
case 0x44385e:goto L44385e;
case 0x443860:c.instructions+=1;goto B443860;
case 0x443862:goto L443862;
case 0x443864:c.instructions+=1;goto B443864;
case 0x443866:goto L443866;
case 0x443869:c.instructions+=1;goto B443869;
case 0x44386b:goto L44386b;
case 0x44386c:c.instructions+=2;goto B44386c;
case 0x44386d:c.instructions+=1;goto B44386d;
case 0x443870:goto L443870;
case 0x443872:c.instructions+=2;goto B443872;
case 0x443873:c.instructions+=1;goto B443873;
case 0x443875:goto L443875;
case 0x443878:goto L443878;
case 0x44387a:goto L44387a;
case 0x44387b:c.instructions+=2;goto B44387b;
case 0x44387c:c.instructions+=1;goto B44387c;
case 0x443880:goto L443880;
case 0x443884:c.instructions+=3;goto B443884;
case 0x443886:c.instructions+=2;goto B443886;
case 0x443888:c.instructions+=1;goto B443888;
case 0x443890:goto L443890;
case 0x443897:c.instructions+=1;goto B443897;
case 0x443899:goto L443899;
case 0x44389a:c.instructions+=2;goto B44389a;
case 0x44389d:c.instructions+=1;goto B44389d;
case 0x44389f:goto L44389f;
case 0x4438a1:goto L4438a1;
case 0x4438a3:goto L4438a3;
case 0x4438a7:c.instructions+=4;goto B4438a7;
case 0x4438a9:c.instructions+=3;goto B4438a9;
case 0x4438ab:c.instructions+=2;goto B4438ab;
case 0x4438ac:c.instructions+=1;goto B4438ac;
case 0x4438b1:goto L4438b1;
case 0x4438b8:c.instructions+=2;goto B4438b8;
case 0x4438bb:c.instructions+=1;goto B4438bb;
case 0x4438c0:goto L4438c0;
case 0x4438c5:c.instructions+=4;goto B4438c5;
case 0x4438c7:c.instructions+=3;goto B4438c7;
case 0x4438c8:c.instructions+=2;goto B4438c8;
case 0x4438ca:c.instructions+=1;goto B4438ca;
case 0x4438d0:goto L4438d0;
case 0x4438d1:c.instructions+=3;goto B4438d1;
case 0x4438d5:c.instructions+=2;goto B4438d5;
case 0x4438d7:c.instructions+=1;goto B4438d7;
case 0x4438d9:goto L4438d9;
case 0x4438e0:c.instructions+=1;goto B4438e0;
case 0x4438e6:goto L4438e6;
case 0x4438ec:goto L4438ec;
case 0x4438ef:c.instructions+=1;goto B4438ef;
case 0x4438f5:goto L4438f5;
case 0x4438f6:c.instructions+=1;goto B4438f6;
case 0x4438f8:goto L4438f8;
case 0x4438f9:c.instructions+=1;goto B4438f9;
case 0x4438ff:goto L4438ff;
case 0x443901:c.instructions+=1;goto B443901;
case 0x443903:goto L443903;
case 0x443906:c.instructions+=1;goto B443906;
case 0x44390b:goto L44390b;
case 0x44390e:c.instructions+=2;goto B44390e;
case 0x443910:c.instructions+=1;goto B443910;
case 0x443912:goto L443912;
case 0x443915:c.instructions+=1;goto B443915;
case 0x443917:goto L443917;
case 0x44391c:c.instructions+=1;goto B44391c;
case 0x44391e:goto L44391e;
case 0x443924:c.instructions+=1;goto B443924;
case 0x443929:goto L443929;
case 0x44392b:c.instructions+=1;goto B44392b;
case 0x44392d:goto L44392d;
case 0x443931:c.instructions+=5;goto B443931;
case 0x443934:c.instructions+=4;goto B443934;
case 0x443936:c.instructions+=3;goto B443936;
case 0x44393c:c.instructions+=2;goto B44393c;
case 0x443940:c.instructions+=1;goto B443940;
case 0x443942:goto L443942;
case 0x443948:c.instructions+=2;goto B443948;
case 0x44394a:c.instructions+=1;goto B44394a;
case 0x44394c:goto L44394c;
case 0x44394f:c.instructions+=2;goto B44394f;
case 0x443955:c.instructions+=1;goto B443955;
case 0x443959:goto L443959;
case 0x44395e:goto L44395e;
case 0x443961:c.instructions+=2;goto B443961;
case 0x443963:c.instructions+=1;goto B443963;
case 0x443965:goto L443965;
case 0x443968:c.instructions+=2;goto B443968;
case 0x44396a:c.instructions+=1;goto B44396a;
case 0x443970:goto L443970;
case 0x443977:goto L443977;
case 0x443979:c.instructions+=1;goto B443979;
case 0x44397f:goto L44397f;
case 0x443981:c.instructions+=1;goto B443981;
case 0x443986:goto L443986;
case 0x44398c:c.instructions+=3;goto B44398c;
case 0x44398e:c.instructions+=2;goto B44398e;
case 0x443991:c.instructions+=1;goto B443991;
case 0x443997:goto L443997;
case 0x44399b:c.instructions+=1;goto B44399b;
case 0x44399d:goto L44399d;
case 0x4439a3:c.instructions+=1;goto B4439a3;
case 0x4439a5:goto L4439a5;
case 0x4439a7:c.instructions+=2;goto B4439a7;
case 0x4439ac:c.instructions+=1;goto B4439ac;
case 0x4439b1:goto L4439b1;
case 0x4439b3:c.instructions+=1;goto B4439b3;
case 0x4439b9:goto L4439b9;
case 0x4439ba:c.instructions+=2;goto B4439ba;
case 0x4439bf:c.instructions+=1;goto B4439bf;
case 0x4439c4:goto L4439c4;
case 0x4439c6:c.instructions+=1;goto B4439c6;
case 0x4439cc:goto L4439cc;
case 0x4439cf:goto L4439cf;
case 0x4439d5:c.instructions+=3;goto B4439d5;
case 0x4439d7:c.instructions+=2;goto B4439d7;
case 0x4439da:c.instructions+=1;goto B4439da;
case 0x4439e0:goto L4439e0;
case 0x4439e6:goto L4439e6;
case 0x4439ec:c.instructions+=3;goto B4439ec;
case 0x4439ee:c.instructions+=2;goto B4439ee;
case 0x4439f1:c.instructions+=1;goto B4439f1;
case 0x4439f7:goto L4439f7;
case 0x4439f9:c.instructions+=1;goto B4439f9;
case 0x4439fb:goto L4439fb;
case 0x4439ff:c.instructions+=3;goto B4439ff;
case 0x443a02:c.instructions+=2;goto B443a02;
case 0x443a04:c.instructions+=1;goto B443a04;
case 0x443a06:goto L443a06;
case 0x443a08:goto L443a08;
case 0x443a0b:c.instructions+=1;goto B443a0b;
case 0x443a0d:goto L443a0d;
case 0x443a13:c.instructions+=1;goto B443a13;
case 0x443a19:goto L443a19;
case 0x443a1d:c.instructions+=5;goto B443a1d;
case 0x443a21:c.instructions+=4;goto B443a21;
case 0x443a23:c.instructions+=3;goto B443a23;
case 0x443a25:c.instructions+=2;goto B443a25;
case 0x443a28:c.instructions+=1;goto B443a28;
case 0x443a2a:goto L443a2a;
case 0x443a2e:c.instructions+=2;goto B443a2e;
case 0x443a32:c.instructions+=1;goto B443a32;
case 0x443a34:goto L443a34;
case 0x443a36:c.instructions+=1;goto B443a36;
case 0x443a38:goto L443a38;
case 0x443a3c:goto L443a3c;
case 0x443a40:c.instructions+=4;goto B443a40;
case 0x443a42:c.instructions+=3;goto B443a42;
case 0x443a44:c.instructions+=2;goto B443a44;
case 0x443a47:c.instructions+=1;goto B443a47;
case 0x443a49:goto L443a49;
case 0x443a4d:c.instructions+=3;goto B443a4d;
case 0x443a4f:c.instructions+=2;goto B443a4f;
case 0x443a53:c.instructions+=1;goto B443a53;
case 0x443a55:goto L443a55;
case 0x443a59:goto L443a59;
case 0x443a5b:c.instructions+=1;goto B443a5b;
case 0x443a5d:goto L443a5d;
case 0x443a60:c.instructions+=1;goto B443a60;
case 0x443a62:goto L443a62;
case 0x443a65:c.instructions+=2;goto B443a65;
case 0x443a67:c.instructions+=1;goto B443a67;
case 0x443a69:goto L443a69;
case 0x443a6b:c.instructions+=4;goto B443a6b;
case 0x443a6f:c.instructions+=3;goto B443a6f;
case 0x443a71:c.instructions+=2;goto B443a71;
case 0x443a74:c.instructions+=1;goto B443a74;
case 0x443a76:goto L443a76;
case 0x443a78:c.instructions+=1;goto B443a78;
case 0x443a7a:goto L443a7a;
case 0x443a7e:goto L443a7e;
case 0x443a82:c.instructions+=4;goto B443a82;
case 0x443a84:c.instructions+=3;goto B443a84;
case 0x443a86:c.instructions+=2;goto B443a86;
case 0x443a89:c.instructions+=1;goto B443a89;
case 0x443a8b:goto L443a8b;
case 0x443a8d:c.instructions+=1;goto B443a8d;
case 0x443a91:goto L443a91;
case 0x443a93:c.instructions+=5;goto B443a93;
case 0x443a95:c.instructions+=4;goto B443a95;
case 0x443a97:c.instructions+=3;goto B443a97;
case 0x443a99:c.instructions+=2;goto B443a99;
case 0x443a9c:c.instructions+=1;goto B443a9c;
case 0x443a9e:goto L443a9e;
case 0x443a9f:c.instructions+=2;goto B443a9f;
case 0x443aa5:c.instructions+=1;goto B443aa5;
case 0x443aaa:goto L443aaa;
case 0x443ab0:c.instructions+=2;goto B443ab0;
case 0x443ab1:c.instructions+=1;goto B443ab1;
case 0x443ab3:goto L443ab3;
case 0x443ab4:c.instructions+=2;goto B443ab4;
case 0x443ab5:c.instructions+=1;goto B443ab5;
case 0x443ab8:goto L443ab8;
case 0x443aba:goto L443aba;
case 0x443abb:goto L443abb;
case 0x443abc:c.instructions+=1;goto B443abc;
case 0x443ac0:goto L443ac0;
case 0x443ac4:c.instructions+=3;goto B443ac4;
case 0x443ac5:c.instructions+=2;goto B443ac5;
case 0x443ac7:c.instructions+=1;goto B443ac7;
case 0x443acc:goto L443acc;
case 0x443ad0:c.instructions+=7;goto B443ad0;
case 0x443ad3:c.instructions+=6;goto B443ad3;
case 0x443ad7:c.instructions+=5;goto B443ad7;
case 0x443ad8:c.instructions+=4;goto B443ad8;
case 0x443ada:c.instructions+=3;goto B443ada;
case 0x443ade:c.instructions+=2;goto B443ade;
case 0x443ae2:c.instructions+=1;goto B443ae2;
case 0x443ae7:goto L443ae7;
case 0x443aea:c.instructions+=10;goto B443aea;
case 0x443aee:c.instructions+=9;goto B443aee;
case 0x443af1:c.instructions+=8;goto B443af1;
case 0x443af5:c.instructions+=7;goto B443af5;
case 0x443af9:c.instructions+=6;goto B443af9;
case 0x443afd:c.instructions+=5;goto B443afd;
case 0x443b03:c.instructions+=4;goto B443b03;
case 0x443b07:c.instructions+=3;goto B443b07;
case 0x443b09:c.instructions+=2;goto B443b09;
case 0x443b0c:c.instructions+=1;goto B443b0c;
case 0x443b0e:goto L443b0e;
case 0x443b12:c.instructions+=4;goto B443b12;
case 0x443b18:c.instructions+=3;goto B443b18;
case 0x443b1a:c.instructions+=2;goto B443b1a;
case 0x443b1d:c.instructions+=1;goto B443b1d;
case 0x443b1f:goto L443b1f;
case 0x443b25:c.instructions+=7;goto B443b25;
case 0x443b29:c.instructions+=6;goto B443b29;
case 0x443b2d:c.instructions+=5;goto B443b2d;
case 0x443b33:c.instructions+=4;goto B443b33;
case 0x443b35:c.instructions+=3;goto B443b35;
case 0x443b37:c.instructions+=2;goto B443b37;
case 0x443b3a:c.instructions+=1;goto B443b3a;
case 0x443b40:goto L443b40;
case 0x443b42:c.instructions+=2;goto B443b42;
case 0x443b48:c.instructions+=1;goto B443b48;
case 0x443b4b:goto L443b4b;
case 0x443b4f:c.instructions+=4;goto B443b4f;
case 0x443b55:c.instructions+=3;goto B443b55;
case 0x443b57:c.instructions+=2;goto B443b57;
case 0x443b5a:c.instructions+=1;goto B443b5a;
case 0x443b5c:goto L443b5c;
case 0x443b62:c.instructions+=7;goto B443b62;
case 0x443b66:c.instructions+=6;goto B443b66;
case 0x443b6a:c.instructions+=5;goto B443b6a;
case 0x443b70:c.instructions+=4;goto B443b70;
case 0x443b72:c.instructions+=3;goto B443b72;
case 0x443b74:c.instructions+=2;goto B443b74;
case 0x443b77:c.instructions+=1;goto B443b77;
case 0x443b79:goto L443b79;
case 0x443b7b:c.instructions+=2;goto B443b7b;
case 0x443b81:c.instructions+=1;goto B443b81;
case 0x443b84:goto L443b84;
case 0x443b8a:c.instructions+=1;goto B443b8a;
case 0x443b8d:goto L443b8d;
case 0x443b91:c.instructions+=10;goto B443b91;
case 0x443b93:c.instructions+=9;goto B443b93;
case 0x443b99:c.instructions+=8;goto B443b99;
case 0x443b9d:c.instructions+=7;goto B443b9d;
case 0x443ba1:c.instructions+=6;goto B443ba1;
case 0x443ba5:c.instructions+=5;goto B443ba5;
case 0x443ba9:c.instructions+=4;goto B443ba9;
case 0x443bab:c.instructions+=3;goto B443bab;
case 0x443bad:c.instructions+=2;goto B443bad;
case 0x443bb0:c.instructions+=1;goto B443bb0;
case 0x443bb2:goto L443bb2;
case 0x443bb4:c.instructions+=1;goto B443bb4;
case 0x443bb8:goto L443bb8;
case 0x443bbc:c.instructions+=4;goto B443bbc;
case 0x443bbe:c.instructions+=3;goto B443bbe;
case 0x443bc0:c.instructions+=2;goto B443bc0;
case 0x443bc3:c.instructions+=1;goto B443bc3;
case 0x443bc5:goto L443bc5;
case 0x443bc7:c.instructions+=1;goto B443bc7;
case 0x443bcb:goto L443bcb;
case 0x443bd0:goto L443bd0;
case 0x443bd4:c.instructions+=9;goto B443bd4;
case 0x443bd7:c.instructions+=8;goto B443bd7;
case 0x443bd9:c.instructions+=7;goto B443bd9;
case 0x443bda:c.instructions+=6;goto B443bda;
case 0x443bdb:c.instructions+=5;goto B443bdb;
case 0x443bdc:c.instructions+=4;goto B443bdc;
case 0x443be0:c.instructions+=3;goto B443be0;
case 0x443be2:c.instructions+=2;goto B443be2;
case 0x443be4:c.instructions+=1;goto B443be4;
case 0x443be6:goto L443be6;
case 0x443be9:c.instructions+=5;goto B443be9;
case 0x443bf0:c.instructions+=4;goto B443bf0;
case 0x443bf1:c.instructions+=3;goto B443bf1;
case 0x443bf6:c.instructions+=2;goto B443bf6;
case 0x443bf7:c.instructions+=1;goto B443bf7;
case 0x443bfc:goto L443bfc;
case 0x443bfd:c.instructions+=1;goto B443bfd;
case 0x443c02:goto L443c02;
case 0x443c04:c.instructions+=3;goto B443c04;
case 0x443c07:c.instructions+=2;goto B443c07;
case 0x443c09:c.instructions+=1;goto B443c09;
case 0x443c0b:goto L443c0b;
case 0x443c0e:goto L443c0e;
case 0x443c11:c.instructions+=2;goto B443c11;
case 0x443c14:c.instructions+=1;goto B443c14;
case 0x443c16:goto L443c16;
case 0x443c17:c.instructions+=1;goto B443c17;
case 0x443c19:goto L443c19;
case 0x443c1a:c.instructions+=1;goto B443c1a;
case 0x443c20:goto L443c20;
case 0x443c22:c.instructions+=2;goto B443c22;
case 0x443c23:c.instructions+=1;goto B443c23;
case 0x443c28:goto L443c28;
case 0x443c29:c.instructions+=3;goto B443c29;
case 0x443c2e:c.instructions+=2;goto B443c2e;
case 0x443c2f:c.instructions+=1;goto B443c2f;
case 0x443c34:goto L443c34;
case 0x443c37:c.instructions+=5;goto B443c37;
case 0x443c38:c.instructions+=4;goto B443c38;
case 0x443c39:c.instructions+=3;goto B443c39;
case 0x443c3a:c.instructions+=2;goto B443c3a;
case 0x443c3d:c.instructions+=1;goto B443c3d;
case 0x443c40:goto L443c40;
case 0x443c45:c.instructions+=2;goto B443c45;
case 0x443c4a:c.instructions+=1;goto B443c4a;
case 0x443c4c:goto L443c4c;
case 0x443c51:goto L443c51;
case 0x443c52:c.instructions+=5;goto B443c52;
case 0x443c55:c.instructions+=4;goto B443c55;
case 0x443c56:c.instructions+=3;goto B443c56;
case 0x443c5b:c.instructions+=2;goto B443c5b;
case 0x443c5c:c.instructions+=1;goto B443c5c;
case 0x443c61:goto L443c61;
case 0x443c64:c.instructions+=5;goto B443c64;
case 0x443c65:c.instructions+=4;goto B443c65;
case 0x443c66:c.instructions+=3;goto B443c66;
case 0x443c67:c.instructions+=2;goto B443c67;
case 0x443c6a:c.instructions+=1;goto B443c6a;
case 0x443c6d:goto L443c6d;
case 0x443c6f:c.instructions+=5;goto B443c6f;
case 0x443c73:c.instructions+=4;goto B443c73;
case 0x443c74:c.instructions+=3;goto B443c74;
case 0x443c7a:c.instructions+=2;goto B443c7a;
case 0x443c7b:c.instructions+=1;goto B443c7b;
case 0x443c80:goto L443c80;
case 0x443c84:c.instructions+=2;goto B443c84;
case 0x443c86:c.instructions+=1;goto B443c86;
case 0x443c88:goto L443c88;
case 0x443c8a:c.instructions+=4;goto B443c8a;
case 0x443c8b:c.instructions+=3;goto B443c8b;
case 0x443c90:c.instructions+=2;goto B443c90;
case 0x443c91:c.instructions+=1;goto B443c91;
case 0x443c96:goto L443c96;
case 0x443c99:c.instructions+=5;goto B443c99;
case 0x443c9a:c.instructions+=4;goto B443c9a;
case 0x443c9b:c.instructions+=3;goto B443c9b;
case 0x443c9c:c.instructions+=2;goto B443c9c;
case 0x443c9f:c.instructions+=1;goto B443c9f;
case 0x443ca2:goto L443ca2;
case 0x443ca6:c.instructions+=4;goto B443ca6;
case 0x443ca7:c.instructions+=3;goto B443ca7;
case 0x443cac:c.instructions+=2;goto B443cac;
case 0x443cad:c.instructions+=1;goto B443cad;
case 0x443cb2:goto L443cb2;
case 0x443cb5:goto L443cb5;
case 0x443cb6:c.instructions+=4;goto B443cb6;
case 0x443cb7:c.instructions+=3;goto B443cb7;
case 0x443cb8:c.instructions+=2;goto B443cb8;
case 0x443cbb:c.instructions+=1;goto B443cbb;
case 0x443cc0:goto L443cc0;
case 0x443cc1:c.instructions+=5;goto B443cc1;
case 0x443cc5:c.instructions+=4;goto B443cc5;
case 0x443cc7:c.instructions+=3;goto B443cc7;
case 0x443cc9:c.instructions+=2;goto B443cc9;
case 0x443ccb:c.instructions+=1;goto B443ccb;
case 0x443ccd:goto L443ccd;
case 0x443cce:c.instructions+=1;goto B443cce;
case 0x443cd0:goto L443cd0;
case 0x443cd1:c.instructions+=1;goto B443cd1;
case 0x443cd3:goto L443cd3;
case 0x443cd6:c.instructions+=2;goto B443cd6;
case 0x443cd9:c.instructions+=1;goto B443cd9;
case 0x443cdb:goto L443cdb;
case 0x443cde:c.instructions+=2;goto B443cde;
case 0x443ce1:c.instructions+=1;goto B443ce1;
case 0x443ce3:goto L443ce3;
case 0x443ce6:c.instructions+=1;goto B443ce6;
case 0x443ce9:goto L443ce9;
case 0x443ceb:c.instructions+=2;goto B443ceb;
case 0x443ced:c.instructions+=1;goto B443ced;
case 0x443cef:goto L443cef;
case 0x443cf3:goto L443cf3;
case 0x443cf5:c.instructions+=1;goto B443cf5;
case 0x443cf7:goto L443cf7;
case 0x443cf8:c.instructions+=3;goto B443cf8;
case 0x443cfb:c.instructions+=2;goto B443cfb;
case 0x443cfd:c.instructions+=1;goto B443cfd;
case 0x443cff:goto L443cff;
case 0x443d01:goto L443d01;
case 0x443d02:c.instructions+=1;goto B443d02;
case 0x443d10:goto L443d10;
case 0x443d1a:c.instructions+=1;goto B443d1a;
case 0x443d20:goto L443d20;
case 0x443d26:c.instructions+=6;goto B443d26;
case 0x443d2a:c.instructions+=5;goto B443d2a;
case 0x443d30:c.instructions+=4;goto B443d30;
case 0x443d31:c.instructions+=3;goto B443d31;
case 0x443d34:c.instructions+=2;goto B443d34;
case 0x443d35:c.instructions+=1;goto B443d35;
case 0x443d3a:goto L443d3a;
case 0x443d3d:c.instructions+=3;goto B443d3d;
case 0x443d40:c.instructions+=2;goto B443d40;
case 0x443d42:c.instructions+=1;goto B443d42;
case 0x443d50:goto L443d50;
case 0x443d51:c.instructions+=5;goto B443d51;
case 0x443d53:c.instructions+=4;goto B443d53;
case 0x443d58:c.instructions+=3;goto B443d58;
case 0x443d5b:c.instructions+=2;goto B443d5b;
case 0x443d5c:c.instructions+=1;goto B443d5c;
case 0x443d61:goto L443d61;
case 0x443d65:c.instructions+=2;goto B443d65;
case 0x443d66:c.instructions+=1;goto B443d66;
case 0x443d6b:goto L443d6b;
case 0x443d6f:c.instructions+=5;goto B443d6f;
case 0x443d72:c.instructions+=4;goto B443d72;
case 0x443d73:c.instructions+=3;goto B443d73;
case 0x443d79:c.instructions+=2;goto B443d79;
case 0x443d7f:c.instructions+=1;goto B443d7f;
case 0x443d80:goto L443d80;
case 0x443d86:c.instructions+=7;goto B443d86;
case 0x443d8a:c.instructions+=6;goto B443d8a;
case 0x443d90:c.instructions+=5;goto B443d90;
case 0x443d91:c.instructions+=4;goto B443d91;
case 0x443d92:c.instructions+=3;goto B443d92;
case 0x443d95:c.instructions+=2;goto B443d95;
case 0x443d96:c.instructions+=1;goto B443d96;
case 0x443d9b:goto L443d9b;
case 0x443da1:c.instructions+=10;goto B443da1;
case 0x443da7:c.instructions+=9;goto B443da7;
case 0x443da9:c.instructions+=8;goto B443da9;
case 0x443dac:c.instructions+=7;goto B443dac;
case 0x443db0:c.instructions+=6;goto B443db0;
case 0x443db4:c.instructions+=5;goto B443db4;
case 0x443dba:c.instructions+=4;goto B443dba;
case 0x443dbe:c.instructions+=3;goto B443dbe;
case 0x443dc0:c.instructions+=2;goto B443dc0;
case 0x443dc3:c.instructions+=1;goto B443dc3;
case 0x443dc8:goto L443dc8;
case 0x443dcb:c.instructions+=9;goto B443dcb;
case 0x443dce:c.instructions+=8;goto B443dce;
case 0x443dcf:c.instructions+=7;goto B443dcf;
case 0x443dd1:c.instructions+=6;goto B443dd1;
case 0x443dd4:c.instructions+=5;goto B443dd4;
case 0x443dd6:c.instructions+=4;goto B443dd6;
case 0x443dda:c.instructions+=3;goto B443dda;
case 0x443dde:c.instructions+=2;goto B443dde;
case 0x443de4:c.instructions+=1;goto B443de4;
case 0x443df0:goto L443df0;
case 0x443df6:c.instructions+=40;goto B443df6;
case 0x443dfd:c.instructions+=39;goto B443dfd;
case 0x443e05:c.instructions+=38;goto B443e05;
case 0x443e0b:c.instructions+=37;goto B443e0b;
case 0x443e13:c.instructions+=36;goto B443e13;
case 0x443e1b:c.instructions+=35;goto B443e1b;
case 0x443e23:c.instructions+=34;goto B443e23;
case 0x443e2b:c.instructions+=33;goto B443e2b;
case 0x443e33:c.instructions+=32;goto B443e33;
case 0x443e3b:c.instructions+=31;goto B443e3b;
case 0x443e43:c.instructions+=30;goto B443e43;
case 0x443e4b:c.instructions+=29;goto B443e4b;
case 0x443e53:c.instructions+=28;goto B443e53;
case 0x443e5b:c.instructions+=27;goto B443e5b;
case 0x443e63:c.instructions+=26;goto B443e63;
case 0x443e6b:c.instructions+=25;goto B443e6b;
case 0x443e73:c.instructions+=24;goto B443e73;
case 0x443e7b:c.instructions+=23;goto B443e7b;
case 0x443e83:c.instructions+=22;goto B443e83;
case 0x443e8b:c.instructions+=21;goto B443e8b;
case 0x443e93:c.instructions+=20;goto B443e93;
case 0x443e9b:c.instructions+=19;goto B443e9b;
case 0x443ea3:c.instructions+=18;goto B443ea3;
case 0x443eab:c.instructions+=17;goto B443eab;
case 0x443eb3:c.instructions+=16;goto B443eb3;
case 0x443ebb:c.instructions+=15;goto B443ebb;
case 0x443ec3:c.instructions+=14;goto B443ec3;
case 0x443ecb:c.instructions+=13;goto B443ecb;
case 0x443ed3:c.instructions+=12;goto B443ed3;
case 0x443edb:c.instructions+=11;goto B443edb;
case 0x443ee3:c.instructions+=10;goto B443ee3;
case 0x443eeb:c.instructions+=9;goto B443eeb;
case 0x443ef3:c.instructions+=8;goto B443ef3;
case 0x443efb:c.instructions+=7;goto B443efb;
case 0x443f03:c.instructions+=6;goto B443f03;
case 0x443f0e:c.instructions+=5;goto B443f0e;
case 0x443f19:c.instructions+=4;goto B443f19;
case 0x443f24:c.instructions+=3;goto B443f24;
case 0x443f2f:c.instructions+=2;goto B443f2f;
case 0x443f3a:c.instructions+=1;goto B443f3a;
case 0x443f3f:goto L443f3f;
case 0x443f41:c.instructions+=1;goto B443f41;
case 0x443f43:goto L443f43;
case 0x443f45:c.instructions+=3;goto B443f45;
case 0x443f49:c.instructions+=2;goto B443f49;
case 0x443f4f:c.instructions+=1;goto B443f4f;
case 0x443f50:goto L443f50;
case 0x443f53:c.instructions+=1;goto B443f53;
case 0x443f55:goto L443f55;
case 0x443f5a:goto L443f5a;
case 0x443f5e:c.instructions+=2;goto B443f5e;
case 0x443f64:c.instructions+=1;goto B443f64;
case 0x443f70:goto L443f70;
case 0x443f74:c.instructions+=12;goto B443f74;
case 0x443f78:c.instructions+=11;goto B443f78;
case 0x443f7a:c.instructions+=10;goto B443f7a;
case 0x443f7b:c.instructions+=9;goto B443f7b;
case 0x443f7f:c.instructions+=8;goto B443f7f;
case 0x443f81:c.instructions+=7;goto B443f81;
case 0x443f85:c.instructions+=6;goto B443f85;
case 0x443f87:c.instructions+=5;goto B443f87;
case 0x443f8b:c.instructions+=4;goto B443f8b;
case 0x443f8d:c.instructions+=3;goto B443f8d;
case 0x443f8f:c.instructions+=2;goto B443f8f;
case 0x443f92:c.instructions+=1;goto B443f92;
case 0x443f94:goto L443f94;
case 0x443f96:c.instructions+=1;goto B443f96;
case 0x443f9a:goto L443f9a;
case 0x443f9e:c.instructions+=4;goto B443f9e;
case 0x443fa0:c.instructions+=3;goto B443fa0;
case 0x443fa2:c.instructions+=2;goto B443fa2;
case 0x443fa5:c.instructions+=1;goto B443fa5;
case 0x443fa7:goto L443fa7;
case 0x443fa9:c.instructions+=1;goto B443fa9;
case 0x443fad:goto L443fad;
case 0x443fb0:c.instructions+=8;goto B443fb0;
case 0x443fb3:c.instructions+=7;goto B443fb3;
case 0x443fb6:c.instructions+=6;goto B443fb6;
case 0x443fba:c.instructions+=5;goto B443fba;
case 0x443fbe:c.instructions+=4;goto B443fbe;
case 0x443fc0:c.instructions+=3;goto B443fc0;
case 0x443fc2:c.instructions+=2;goto B443fc2;
case 0x443fc5:c.instructions+=1;goto B443fc5;
case 0x443fc7:goto L443fc7;
case 0x443fc9:c.instructions+=1;goto B443fc9;
case 0x443fcd:goto L443fcd;
case 0x443fd1:c.instructions+=4;goto B443fd1;
case 0x443fd3:c.instructions+=3;goto B443fd3;
case 0x443fd5:c.instructions+=2;goto B443fd5;
case 0x443fd8:c.instructions+=1;goto B443fd8;
case 0x443fda:goto L443fda;
case 0x443fdc:c.instructions+=1;goto B443fdc;
case 0x443fe0:goto L443fe0;
case 0x443fe3:c.instructions+=9;goto B443fe3;
case 0x443fe6:c.instructions+=8;goto B443fe6;
case 0x443fe9:c.instructions+=7;goto B443fe9;
case 0x443fed:c.instructions+=6;goto B443fed;
case 0x443ff1:c.instructions+=5;goto B443ff1;
case 0x443ff2:c.instructions+=4;goto B443ff2;
case 0x443ff4:c.instructions+=3;goto B443ff4;
case 0x443ff6:c.instructions+=2;goto B443ff6;
case 0x443ff9:c.instructions+=1;goto B443ff9;
case 0x443ffb:goto L443ffb;
case 0x443ffd:c.instructions+=1;goto B443ffd;
default:missing_instruction(c.pc);}
B443000:L443000:{c.instructions+=1;NFSU2_TR(0x443000);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L443002;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x443000u);}goto L443000;}
}
B443002:L443002:{c.instructions+=4;NFSU2_TR(0x443002);
{u32 ea_=u32(r4(R+0)+u32(424u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B443008:{NFSU2_TR(0x443008);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B443009:{NFSU2_TR(0x443009);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44300a:{NFSU2_TR(0x44300a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B443010:L443010:{c.instructions+=11;NFSU2_TR(0x443010);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443011:{NFSU2_TR(0x443011);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443012:{NFSU2_TR(0x443012);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443013:{NFSU2_TR(0x443013);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443014:{NFSU2_TR(0x443014);
__builtin_memmove((R+28),(R+4),4);
}
B443016:{NFSU2_TR(0x443016);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44301c:{NFSU2_TR(0x44301c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B443020:{NFSU2_TR(0x443020);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B443023:{NFSU2_TR(0x443023);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B443025:{NFSU2_TR(0x443025);
__builtin_memmove((R+8),(R+4),4);
}
B443027:{NFSU2_TR(0x443027);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4430d7;}}
}
B44302d:L44302d:{c.instructions+=5;NFSU2_TR(0x44302d);
__builtin_memmove((R+24),(R+4),4);
}
B44302f:{NFSU2_TR(0x44302f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B443035:{NFSU2_TR(0x443035);
u8 U[12];
w4(U+0,u32(u32(u32(0x230ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B44303c:{NFSU2_TR(0x44303c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44303d:{NFSU2_TR(0x44303d);
__builtin_memmove((R+4),(R+4),4);
}
B443040:L443040:{c.instructions+=8;NFSU2_TR(0x443040);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B443042:{NFSU2_TR(0x443042);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B443044:{NFSU2_TR(0x443044);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+12),(U+1),1);
}
B443047:{NFSU2_TR(0x443047);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B443048:{NFSU2_TR(0x443048);
w4(R+12,u32(u32(r4(R+12))&u32(r4(R+8))));
}
B44304a:{NFSU2_TR(0x44304a);
__builtin_memmove((R+24),(R+12),4);
}
B44304c:{NFSU2_TR(0x44304c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44304e:{NFSU2_TR(0x44304e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L443054;}}
}
B443050:L443050:{c.instructions+=2;NFSU2_TR(0x443050);
__builtin_memmove((R+24),(R+0),4);
}
B443052:{NFSU2_TR(0x443052);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B443054:L443054:{c.instructions+=1;NFSU2_TR(0x443054);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L443069;}}
}
B443056:L443056:{c.instructions+=4;NFSU2_TR(0x443056);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B44305c:{NFSU2_TR(0x44305c);
{u32 ea_=u32(r4(R+28)+r4(R+24)+u32(424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443063:{NFSU2_TR(0x443063);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B443067:{NFSU2_TR(0x443067);
{goto L443071;}
}
B443069:L443069:{c.instructions+=1;NFSU2_TR(0x443069);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B443071:L443071:{c.instructions+=9;NFSU2_TR(0x443071);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B443072:{NFSU2_TR(0x443072);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B443074:{NFSU2_TR(0x443074);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B443076:{NFSU2_TR(0x443076);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+12),(U+1),1);
}
B443079:{NFSU2_TR(0x443079);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B44307a:{NFSU2_TR(0x44307a);
w4(R+12,u32(u32(r4(R+12))&u32(r4(R+8))));
}
B44307c:{NFSU2_TR(0x44307c);
__builtin_memmove((R+24),(R+12),4);
}
B44307e:{NFSU2_TR(0x44307e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B443080:{NFSU2_TR(0x443080);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L443086;}}
}
B443082:L443082:{c.instructions+=2;NFSU2_TR(0x443082);
__builtin_memmove((R+24),(R+0),4);
}
B443084:{NFSU2_TR(0x443084);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B443086:L443086:{c.instructions+=1;NFSU2_TR(0x443086);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L443097;}}
}
B443088:L443088:{c.instructions+=3;NFSU2_TR(0x443088);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B44308e:{NFSU2_TR(0x44308e);
{u32 ea_=u32(r4(R+28)+r4(R+24)+u32(424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443095:{NFSU2_TR(0x443095);
{goto L44309d;}
}
B443097:L443097:{c.instructions+=1;NFSU2_TR(0x443097);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44309d:L44309d:{c.instructions+=7;NFSU2_TR(0x44309d);
{u32 ea_=u32(u32(7892944u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4430a3:{NFSU2_TR(0x4430a3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4430a7:{NFSU2_TR(0x4430a7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4430ab:{NFSU2_TR(0x4430ab);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4430af:{NFSU2_TR(0x4430af);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4430b1:{NFSU2_TR(0x4430b1);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4430b4:{NFSU2_TR(0x4430b4);
if(r1(R+518)){{goto L4430bc;}}
}
B4430b6:L4430b6:{c.instructions+=2;NFSU2_TR(0x4430b6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4430b8:{NFSU2_TR(0x4430b8);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4430bc:L4430bc:{c.instructions+=6;NFSU2_TR(0x4430bc);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4430bf:{NFSU2_TR(0x4430bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4430c5:{NFSU2_TR(0x4430c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B4430c8:{NFSU2_TR(0x4430c8);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x88ull))));
}
B4430ce:{NFSU2_TR(0x4430ce);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4430d0:{NFSU2_TR(0x4430d0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x443040u);}goto L443040;}}
}
B4430d6:L4430d6:{c.instructions+=1;NFSU2_TR(0x4430d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4430d7:L4430d7:{c.instructions+=3;NFSU2_TR(0x4430d7);
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
B4430d9:{NFSU2_TR(0x4430d9);
__builtin_memmove((R+0),(R+4),4);
}
B4430db:{NFSU2_TR(0x4430db);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L443185;}}
}
B4430e1:L4430e1:{c.instructions+=3;NFSU2_TR(0x4430e1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4430e7:{NFSU2_TR(0x4430e7);
u8 U[12];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B4430ee:{NFSU2_TR(0x4430ee);
__builtin_memmove((R+28),(R+28),4);
}
B4430f0:L4430f0:{c.instructions+=9;NFSU2_TR(0x4430f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4430f6:{NFSU2_TR(0x4430f6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4430f8:{NFSU2_TR(0x4430f8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4430fa:{NFSU2_TR(0x4430fa);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+4),(U+1),1);
}
B4430fd:{NFSU2_TR(0x4430fd);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B4430fe:{NFSU2_TR(0x4430fe);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
}
B443100:{NFSU2_TR(0x443100);
__builtin_memmove((R+24),(R+4),4);
}
B443102:{NFSU2_TR(0x443102);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B443104:{NFSU2_TR(0x443104);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L44310a;}}
}
B443106:L443106:{c.instructions+=2;NFSU2_TR(0x443106);
__builtin_memmove((R+24),(R+8),4);
}
B443108:{NFSU2_TR(0x443108);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B44310a:L44310a:{c.instructions+=1;NFSU2_TR(0x44310a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L44311f;}}
}
B44310c:L44310c:{c.instructions+=4;NFSU2_TR(0x44310c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B443112:{NFSU2_TR(0x443112);
{u32 ea_=u32(r4(R+28)+r4(R+24)+u32(424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443119:{NFSU2_TR(0x443119);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44311d:{NFSU2_TR(0x44311d);
{goto L443127;}
}
B44311f:L44311f:{c.instructions+=1;NFSU2_TR(0x44311f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B443127:L443127:{c.instructions+=8;NFSU2_TR(0x443127);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B44312a:{NFSU2_TR(0x44312a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B44312c:{NFSU2_TR(0x44312c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44312e:{NFSU2_TR(0x44312e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+0),(U+1),1);
}
B443131:{NFSU2_TR(0x443131);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B443132:{NFSU2_TR(0x443132);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+24))));
}
B443134:{NFSU2_TR(0x443134);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B443136:{NFSU2_TR(0x443136);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L44313c;}}
}
B443138:L443138:{c.instructions+=2;NFSU2_TR(0x443138);
__builtin_memmove((R+0),(R+8),4);
}
B44313a:{NFSU2_TR(0x44313a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B44313c:L44313c:{c.instructions+=1;NFSU2_TR(0x44313c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L44314d;}}
}
B44313e:L44313e:{c.instructions+=3;NFSU2_TR(0x44313e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B443144:{NFSU2_TR(0x443144);
{u32 ea_=u32(r4(R+28)+r4(R+0)+u32(424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44314b:{NFSU2_TR(0x44314b);
{goto L443153;}
}
B44314d:L44314d:{c.instructions+=1;NFSU2_TR(0x44314d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443153:L443153:{c.instructions+=7;NFSU2_TR(0x443153);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443157:{NFSU2_TR(0x443157);
{u32 ea_=u32(u32(7892944u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44315d:{NFSU2_TR(0x44315d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B443161:{NFSU2_TR(0x443161);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B443165:{NFSU2_TR(0x443165);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B443167:{NFSU2_TR(0x443167);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44316a:{NFSU2_TR(0x44316a);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L443172;}}
}
B44316c:L44316c:{c.instructions+=2;NFSU2_TR(0x44316c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44316e:{NFSU2_TR(0x44316e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443172:L443172:{c.instructions+=5;NFSU2_TR(0x443172);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B443175:{NFSU2_TR(0x443175);
__builtin_memmove((R+0),(R+24),4);
}
B443177:{NFSU2_TR(0x443177);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x88ull))));
}
B44317d:{NFSU2_TR(0x44317d);
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
B44317f:{NFSU2_TR(0x44317f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4430f0u);}goto L4430f0;}}
}
B443185:L443185:{c.instructions+=5;NFSU2_TR(0x443185);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B443186:{NFSU2_TR(0x443186);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B443187:{NFSU2_TR(0x443187);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B443188:{NFSU2_TR(0x443188);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B443189:{NFSU2_TR(0x443189);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B443190:L443190:{c.instructions+=21;NFSU2_TR(0x443190);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B443194:{NFSU2_TR(0x443194);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B443198:{NFSU2_TR(0x443198);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44319e:{NFSU2_TR(0x44319e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B4431a0:{NFSU2_TR(0x4431a0);
{u32 ea_=u32(u32(7892944u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4431a6:{NFSU2_TR(0x4431a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4431aa:{NFSU2_TR(0x4431aa);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4431ae:{NFSU2_TR(0x4431ae);
__builtin_memmove((R+0),(R+8),4);
}
B4431b0:{NFSU2_TR(0x4431b0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4431b6:{NFSU2_TR(0x4431b6);
{u32 ea_=u32(u32(7892944u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4431bc:{NFSU2_TR(0x4431bc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4431bd:{NFSU2_TR(0x4431bd);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4431c3:{NFSU2_TR(0x4431c3);
u8 U[12];
w4(U+0,u32(u32(u32(0x1a8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B4431ca:{NFSU2_TR(0x4431ca);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4431ce:{NFSU2_TR(0x4431ce);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4431d2:{NFSU2_TR(0x4431d2);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4431d4:{NFSU2_TR(0x4431d4);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4431d8:{NFSU2_TR(0x4431d8);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4431da:{NFSU2_TR(0x4431da);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4431dc:{NFSU2_TR(0x4431dc);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4431df:{NFSU2_TR(0x4431df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4431e7;}}
}
B4431e1:L4431e1:{c.instructions+=2;NFSU2_TR(0x4431e1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4431e3:{NFSU2_TR(0x4431e3);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4431e7:L4431e7:{c.instructions+=5;NFSU2_TR(0x4431e7);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4431eb:{NFSU2_TR(0x4431eb);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4431ed:{NFSU2_TR(0x4431ed);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4431ef:{NFSU2_TR(0x4431ef);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4431f2:{NFSU2_TR(0x4431f2);
if(r1(R+514)){{goto L4431fa;}}
}
B4431f4:L4431f4:{c.instructions+=2;NFSU2_TR(0x4431f4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4431f6:{NFSU2_TR(0x4431f6);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4431fa:L4431fa:{c.instructions+=3;NFSU2_TR(0x4431fa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4431fb:{NFSU2_TR(0x4431fb);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4431fd:{NFSU2_TR(0x4431fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x443202ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x443010u);}goto L443010;}
}
B443202:L443202:{c.instructions+=2;NFSU2_TR(0x443202);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B443203:{NFSU2_TR(0x443203);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B443210:L443210:{c.instructions+=12;NFSU2_TR(0x443210);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B443214:{NFSU2_TR(0x443214);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443218:{NFSU2_TR(0x443218);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44321c:{NFSU2_TR(0x44321c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x22ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B44321f:{NFSU2_TR(0x44321f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B443221:{NFSU2_TR(0x443221);
u8 U[12];
w4(U+0,u32(u32(u32(0x1acull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B443228:{NFSU2_TR(0x443228);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44322a:{NFSU2_TR(0x44322a);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B44322e:{NFSU2_TR(0x44322e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B443234:{NFSU2_TR(0x443234);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B443236:{NFSU2_TR(0x443236);
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
B443239:{NFSU2_TR(0x443239);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44325b;}}
}
B44323b:L44323b:{c.instructions+=6;NFSU2_TR(0x44323b);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44323f:{NFSU2_TR(0x44323f);
{u32 ea_=u32(u32(7881704u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443245:{NFSU2_TR(0x443245);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B443249:{NFSU2_TR(0x443249);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44324b:{NFSU2_TR(0x44324b);
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
B44324e:{NFSU2_TR(0x44324e);
if(r1(R+514)){{goto L443261;}}
}
B443250:L443250:{c.instructions+=3;NFSU2_TR(0x443250);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B443252:{NFSU2_TR(0x443252);
u8 U[4];
w4(U+0,u32(0x40a00000ull));
s4(u32(r4(R+4)),r4(U+0));
}
B443258:{NFSU2_TR(0x443258);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44325b:L44325b:{c.instructions+=1;NFSU2_TR(0x44325b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443261:L443261:{c.instructions+=2;NFSU2_TR(0x443261);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B443263:{NFSU2_TR(0x443263);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B443270:L443270:{c.instructions+=11;NFSU2_TR(0x443270);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443271:{NFSU2_TR(0x443271);
__builtin_memmove((R+20),(R+16),4);
}
B443273:{NFSU2_TR(0x443273);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B443276:{NFSU2_TR(0x443276);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x74ull))));
}
B443279:{NFSU2_TR(0x443279);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44327a:{NFSU2_TR(0x44327a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44327b:{NFSU2_TR(0x44327b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44327c:{NFSU2_TR(0x44327c);
__builtin_memmove((R+28),(R+4),4);
}
B44327e:{NFSU2_TR(0x44327e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B443284:{NFSU2_TR(0x443284);
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B443287:{NFSU2_TR(0x443287);
if(r1(R+518)){{goto L44328f;}}
}
B443289:L443289:{c.instructions+=2;NFSU2_TR(0x443289);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B44328a:{NFSU2_TR(0x44328a);
if(r1(R+518)){{goto L4432de;}}
}
B44328c:L44328c:{c.instructions+=2;NFSU2_TR(0x44328c);
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
B44328d:{NFSU2_TR(0x44328d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4432d5;}}
}
B44328f:L44328f:{c.instructions+=2;NFSU2_TR(0x44328f);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x5ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B443296:{NFSU2_TR(0x443296);
if(r1(R+518)){{goto L4432d5;}}
}
B443298:L443298:{c.instructions+=4;NFSU2_TR(0x443298);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44329e:{NFSU2_TR(0x44329e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44329f:{NFSU2_TR(0x44329f);
w4(R+4,u32(0x827b88ull));
}
B4432a4:{NFSU2_TR(0x4432a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4432a9ull));
TAIL_STATIC(0x432490u,432);
}
B4432a9:L4432a9:{c.instructions+=3;NFSU2_TR(0x4432a9);
__builtin_memmove((R+24),(R+0),4);
}
B4432ab:{NFSU2_TR(0x4432ab);
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
B4432ad:{NFSU2_TR(0x4432ad);
if(r1(R+518)){{goto L4432d5;}}
}
B4432af:L4432af:{c.instructions+=2;NFSU2_TR(0x4432af);
__builtin_memmove((R+4),(R+24),4);
}
B4432b1:{NFSU2_TR(0x4432b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4432b6ull));
TAIL_STATIC(0x4307d0u,430);
}
B4432b6:L4432b6:{c.instructions+=2;NFSU2_TR(0x4432b6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4432b8:{NFSU2_TR(0x4432b8);
if(r1(R+518)){{goto L4432c1;}}
}
B4432ba:L4432ba:{c.instructions+=2;NFSU2_TR(0x4432ba);
__builtin_memmove((R+4),(R+24),4);
}
B4432bc:{NFSU2_TR(0x4432bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4432c1ull));
TAIL_STATIC(0x439120u,439);
}
B4432c1:L4432c1:{c.instructions+=6;NFSU2_TR(0x4432c1);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4432c4:{NFSU2_TR(0x4432c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4432c5:{NFSU2_TR(0x4432c5);
{u32 ea_=u32(r4(R+28)+u32(7280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4432cb:{NFSU2_TR(0x4432cb);
__builtin_memmove((R+4),(R+24),4);
}
B4432cd:{NFSU2_TR(0x4432cd);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4432d0:{NFSU2_TR(0x4432d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4432d5ull));
TAIL_STATIC(0x43af80u,43a);
}
B4432d5:L4432d5:{c.instructions+=6;NFSU2_TR(0x4432d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4432d6:{NFSU2_TR(0x4432d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4432d7:{NFSU2_TR(0x4432d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4432d8:{NFSU2_TR(0x4432d8);
__builtin_memmove((R+16),(R+20),4);
}
B4432da:{NFSU2_TR(0x4432da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4432db:{NFSU2_TR(0x4432db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4432de:L4432de:{c.instructions+=13;NFSU2_TR(0x4432de);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4432e4:{NFSU2_TR(0x4432e4);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4432e7:{NFSU2_TR(0x4432e7);
{u32 ea_=u32(r4(R+28)+u32(7280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4432ed:{NFSU2_TR(0x4432ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4432f0:{NFSU2_TR(0x4432f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4432f3:{NFSU2_TR(0x4432f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4432f7:{NFSU2_TR(0x4432f7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4432fb:{NFSU2_TR(0x4432fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4432fc:{NFSU2_TR(0x4432fc);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443300:{NFSU2_TR(0x443300);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B443306:{NFSU2_TR(0x443306);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44330a:{NFSU2_TR(0x44330a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44330d:{NFSU2_TR(0x44330d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x443312ull));
TAIL_STATIC(0x577710u,577);
}
B443312:L443312:{c.instructions+=8;NFSU2_TR(0x443312);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B443318:{NFSU2_TR(0x443318);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44331c:{NFSU2_TR(0x44331c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B443320:{NFSU2_TR(0x443320);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443322:{NFSU2_TR(0x443322);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443323:{NFSU2_TR(0x443323);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B443327:{NFSU2_TR(0x443327);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443328:{NFSU2_TR(0x443328);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44332dull));
TAIL_STATIC(0x570640u,570);
}
B44332d:L44332d:{c.instructions+=15;NFSU2_TR(0x44332d);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B443331:{NFSU2_TR(0x443331);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B443335:{NFSU2_TR(0x443335);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B443339:{NFSU2_TR(0x443339);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44333d:{NFSU2_TR(0x44333d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B443340:{NFSU2_TR(0x443340);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B443344:{NFSU2_TR(0x443344);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B443347:{NFSU2_TR(0x443347);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44334b:{NFSU2_TR(0x44334b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44334f:{NFSU2_TR(0x44334f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443350:{NFSU2_TR(0x443350);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B443354:{NFSU2_TR(0x443354);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44335a:{NFSU2_TR(0x44335a);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44335e:{NFSU2_TR(0x44335e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B443361:{NFSU2_TR(0x443361);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x443366ull));
TAIL_STATIC(0x577710u,577);
}
B443366:L443366:{c.instructions+=8;NFSU2_TR(0x443366);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44336a:{NFSU2_TR(0x44336a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44336c:{NFSU2_TR(0x44336c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B443370:{NFSU2_TR(0x443370);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443371:{NFSU2_TR(0x443371);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B443375:{NFSU2_TR(0x443375);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443376:{NFSU2_TR(0x443376);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44337c:{NFSU2_TR(0x44337c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x443381ull));
TAIL_STATIC(0x570640u,570);
}
B443381:L443381:{c.instructions+=29;NFSU2_TR(0x443381);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443385:{NFSU2_TR(0x443385);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B443389:{NFSU2_TR(0x443389);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44338d:{NFSU2_TR(0x44338d);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B443391:{NFSU2_TR(0x443391);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B443395:{NFSU2_TR(0x443395);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B443399:{NFSU2_TR(0x443399);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44339d:{NFSU2_TR(0x44339d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4433a1:{NFSU2_TR(0x4433a1);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4433a5:{NFSU2_TR(0x4433a5);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4433a9:{NFSU2_TR(0x4433a9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4433aa:{NFSU2_TR(0x4433aa);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4433ae:{NFSU2_TR(0x4433ae);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4433b2:{NFSU2_TR(0x4433b2);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4433b6:{NFSU2_TR(0x4433b6);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4433ba:{NFSU2_TR(0x4433ba);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4433be:{NFSU2_TR(0x4433be);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4433c2:{NFSU2_TR(0x4433c2);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4433c6:{NFSU2_TR(0x4433c6);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4433ca:{NFSU2_TR(0x4433ca);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4433ce:{NFSU2_TR(0x4433ce);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4433d0:{NFSU2_TR(0x4433d0);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4433d4:{NFSU2_TR(0x4433d4);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4433d8:{NFSU2_TR(0x4433d8);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B4433da:{NFSU2_TR(0x4433da);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4433dd:{NFSU2_TR(0x4433dd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4433de:{NFSU2_TR(0x4433de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4433df:{NFSU2_TR(0x4433df);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4433e0:{NFSU2_TR(0x4433e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4433e5ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B4433e5:L4433e5:{c.instructions+=5;NFSU2_TR(0x4433e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4433e9:{NFSU2_TR(0x4433e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4433ed:{NFSU2_TR(0x4433ed);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4433ee:{NFSU2_TR(0x4433ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4433ef:{NFSU2_TR(0x4433ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4433f4ull));
TAIL_STATIC(0x43e6d0u,43e);
}
B4433f4:L4433f4:{c.instructions+=14;NFSU2_TR(0x4433f4);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4433f7:{NFSU2_TR(0x4433f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4433fa:{NFSU2_TR(0x4433fa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4433fd:{NFSU2_TR(0x4433fd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4433ff:{NFSU2_TR(0x4433ff);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B443403:{NFSU2_TR(0x443403);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443406:{NFSU2_TR(0x443406);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44340a:{NFSU2_TR(0x44340a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44340b:{NFSU2_TR(0x44340b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44340d:{NFSU2_TR(0x44340d);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B443411:{NFSU2_TR(0x443411);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B443415:{NFSU2_TR(0x443415);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443416:{NFSU2_TR(0x443416);
__builtin_memmove((R+4),(R+24),4);
}
B443418:{NFSU2_TR(0x443418);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44341dull));
TAIL_STATIC(0x5fbd60u,5fb);
}
B44341d:L44341d:{c.instructions+=3;NFSU2_TR(0x44341d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B443423:{NFSU2_TR(0x443423);
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
B443425:{NFSU2_TR(0x443425);
if(r1(R+518)){{goto L44342e;}}
}
B443427:L443427:{c.instructions+=2;NFSU2_TR(0x443427);
__builtin_memmove((R+4),(R+24),4);
}
B443429:{NFSU2_TR(0x443429);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44342eull));
TAIL_STATIC(0x5f5010u,5f5);
}
B44342e:L44342e:{c.instructions+=25;NFSU2_TR(0x44342e);
{u32 ea_=u32(r4(R+24)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443431:{NFSU2_TR(0x443431);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B443435:{NFSU2_TR(0x443435);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443438:{NFSU2_TR(0x443438);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443439:{NFSU2_TR(0x443439);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44343c:{NFSU2_TR(0x44343c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44343f:{NFSU2_TR(0x44343f);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B443443:{NFSU2_TR(0x443443);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B443445:{NFSU2_TR(0x443445);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B443449:{NFSU2_TR(0x443449);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44344d:{NFSU2_TR(0x44344d);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B443451:{NFSU2_TR(0x443451);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443455:{NFSU2_TR(0x443455);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B443459:{NFSU2_TR(0x443459);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44345f:{NFSU2_TR(0x44345f);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B443465:{NFSU2_TR(0x443465);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443469:{NFSU2_TR(0x443469);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B44346b:{NFSU2_TR(0x44346b);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44346f:{NFSU2_TR(0x44346f);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B443471:{NFSU2_TR(0x443471);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B443473:{NFSU2_TR(0x443473);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B443477:{NFSU2_TR(0x443477);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B443479:{NFSU2_TR(0x443479);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44347d:{NFSU2_TR(0x44347d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44347f:{NFSU2_TR(0x44347f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x443484ull));
TAIL_STATIC(0x592160u,592);
}
B443484:L443484:{c.instructions+=6;NFSU2_TR(0x443484);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443487:{NFSU2_TR(0x443487);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x340ull))));
__builtin_memmove((R+12),(U+0),4);
}
B44348d:{NFSU2_TR(0x44348d);
{u32 ea_=u32(r4(R+28)+u32(7280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B443493:{NFSU2_TR(0x443493);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B443495:{NFSU2_TR(0x443495);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B443499:{NFSU2_TR(0x443499);
__builtin_memmove((R+16),(R+16),4);
}
B4434a0:L4434a0:{c.instructions+=11;NFSU2_TR(0x4434a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4434a3:{NFSU2_TR(0x4434a3);
{u32 ea_=u32(r4(R+4)+r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4434a7:{NFSU2_TR(0x4434a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4434aa:{NFSU2_TR(0x4434aa);
{u32 ea_=u32(u32(7892832u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4434b0:{NFSU2_TR(0x4434b0);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B4434b2:{NFSU2_TR(0x4434b2);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4434b6:{NFSU2_TR(0x4434b6);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4434ba:{NFSU2_TR(0x4434ba);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B4434bc:{NFSU2_TR(0x4434bc);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4434bf:{NFSU2_TR(0x4434bf);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4434c1:{NFSU2_TR(0x4434c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4434c6ull));
TAIL_STATIC(0x43c240u,43c);
}
B4434c6:L4434c6:{c.instructions+=6;NFSU2_TR(0x4434c6);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4434c8:{NFSU2_TR(0x4434c8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x30ull))));
}
B4434cb:{NFSU2_TR(0x4434cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4434ce:{NFSU2_TR(0x4434ce);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B4434d1:{NFSU2_TR(0x4434d1);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xc0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4434d7:{NFSU2_TR(0x4434d7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4434a0u);}goto L4434a0;}}
}
B4434d9:L4434d9:{c.instructions+=6;NFSU2_TR(0x4434d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4434da:{NFSU2_TR(0x4434da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4434db:{NFSU2_TR(0x4434db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4434dc:{NFSU2_TR(0x4434dc);
__builtin_memmove((R+16),(R+20),4);
}
B4434de:{NFSU2_TR(0x4434de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4434df:{NFSU2_TR(0x4434df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4434f0:L4434f0:{c.instructions+=7;NFSU2_TR(0x4434f0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4434f4:{NFSU2_TR(0x4434f4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B4434f6:{NFSU2_TR(0x4434f6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4434f7:{NFSU2_TR(0x4434f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4434fb:{NFSU2_TR(0x4434fb);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+4),(U+0),1);
}
B4434fd:{NFSU2_TR(0x4434fd);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4434ff:{NFSU2_TR(0x4434ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L443511;}}
}
B443501:L443501:{c.instructions+=3;NFSU2_TR(0x443501);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B443504:{NFSU2_TR(0x443504);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(R+8))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B443507:{NFSU2_TR(0x443507);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L443511;}}
}
B443509:L443509:{c.instructions+=3;NFSU2_TR(0x443509);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B44350c:{NFSU2_TR(0x44350c);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(R+4))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B44350f:{NFSU2_TR(0x44350f);
if(r1(R+518)){{goto L443517;}}
}
B443511:L443511:{c.instructions+=3;NFSU2_TR(0x443511);
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
B443513:{NFSU2_TR(0x443513);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B443514:{NFSU2_TR(0x443514);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B443517:L443517:{c.instructions+=13;NFSU2_TR(0x443517);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443518:{NFSU2_TR(0x443518);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443519:{NFSU2_TR(0x443519);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B44351d:{NFSU2_TR(0x44351d);
u8 U[12];
w4(U+0,u32(u32(u32(0x6ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B443521:{NFSU2_TR(0x443521);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443522:{NFSU2_TR(0x443522);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B443526:{NFSU2_TR(0x443526);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B443529:{NFSU2_TR(0x443529);
u8 U[12];
w4(U+0,u32(u32(u32(0x6ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B44352d:{NFSU2_TR(0x44352d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B443531:{NFSU2_TR(0x443531);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B443534:{NFSU2_TR(0x443534);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B443536:{NFSU2_TR(0x443536);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44353a:{NFSU2_TR(0x44353a);
__builtin_memmove((R+12),(R+12),4);
}
B443540:L443540:{c.instructions+=9;NFSU2_TR(0x443540);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B443544:{NFSU2_TR(0x443544);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B443548:{NFSU2_TR(0x443548);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44354a:{NFSU2_TR(0x44354a);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44354c:{NFSU2_TR(0x44354c);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B44354e:{NFSU2_TR(0x44354e);
{u32 ea_=u32(u32(7882144u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B443554:{NFSU2_TR(0x443554);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B443556:{NFSU2_TR(0x443556);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B443559:{NFSU2_TR(0x443559);
if(r1(R+518)){{goto L4435ac;}}
}
B44355b:L44355b:{c.instructions+=14;NFSU2_TR(0x44355b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B44355e:{NFSU2_TR(0x44355e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B443561:{NFSU2_TR(0x443561);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B443563:{NFSU2_TR(0x443563);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443566:{NFSU2_TR(0x443566);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44356a:{NFSU2_TR(0x44356a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44356d:{NFSU2_TR(0x44356d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B443570:{NFSU2_TR(0x443570);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+20))));
}
B443572:{NFSU2_TR(0x443572);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B443575:{NFSU2_TR(0x443575);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B443577:{NFSU2_TR(0x443577);
{u32 ea_=u32(u32(7882144u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44357d:{NFSU2_TR(0x44357d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44357f:{NFSU2_TR(0x44357f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B443582:{NFSU2_TR(0x443582);
if(r1(R+518)){{goto L4435ac;}}
}
B443584:L443584:{c.instructions+=10;NFSU2_TR(0x443584);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B443588:{NFSU2_TR(0x443588);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44358c:{NFSU2_TR(0x44358c);
w4(R+0,u32(0x4ull));
}
B443591:{NFSU2_TR(0x443591);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B443592:{NFSU2_TR(0x443592);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+0))));
}
B443594:{NFSU2_TR(0x443594);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B443596:{NFSU2_TR(0x443596);
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
B443599:{NFSU2_TR(0x443599);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44359d:{NFSU2_TR(0x44359d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4435a1:{NFSU2_TR(0x4435a1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x443540u);}goto L443540;}}
}
B4435a3:L4435a3:{c.instructions+=6;NFSU2_TR(0x4435a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4435a4:{NFSU2_TR(0x4435a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4435a5:{NFSU2_TR(0x4435a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4435a6:{NFSU2_TR(0x4435a6);
w1(R+0,u8(0x1ull));
}
B4435a8:{NFSU2_TR(0x4435a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4435a9:{NFSU2_TR(0x4435a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4435ac:L4435ac:{c.instructions+=6;NFSU2_TR(0x4435ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4435ad:{NFSU2_TR(0x4435ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4435ae:{NFSU2_TR(0x4435ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4435af:{NFSU2_TR(0x4435af);
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
B4435b1:{NFSU2_TR(0x4435b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4435b2:{NFSU2_TR(0x4435b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4435c0:L4435c0:{c.instructions+=5;NFSU2_TR(0x4435c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4435c1:{NFSU2_TR(0x4435c1);
w4(R+0,u32(0xcull));
}
B4435c6:{NFSU2_TR(0x4435c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x230ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4435cc:{NFSU2_TR(0x4435cc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4435cd:{NFSU2_TR(0x4435cd);
__builtin_memmove((R+4),(R+4),4);
}
B4435d0:L4435d0:{c.instructions+=34;NFSU2_TR(0x4435d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffff78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4435d6:{NFSU2_TR(0x4435d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4435dc:{NFSU2_TR(0x4435dc);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4435e0:{NFSU2_TR(0x4435e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B4435e2:{NFSU2_TR(0x4435e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4435e8:{NFSU2_TR(0x4435e8);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4435ec:{NFSU2_TR(0x4435ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4435f2:{NFSU2_TR(0x4435f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4435f8:{NFSU2_TR(0x4435f8);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4435fc:{NFSU2_TR(0x4435fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B443602:{NFSU2_TR(0x443602);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B443608:{NFSU2_TR(0x443608);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B44360b:{NFSU2_TR(0x44360b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x198ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B443611:{NFSU2_TR(0x443611);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B443617:{NFSU2_TR(0x443617);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B44361b:{NFSU2_TR(0x44361b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B443621:{NFSU2_TR(0x443621);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B443627:{NFSU2_TR(0x443627);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B44362b:{NFSU2_TR(0x44362b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B443631:{NFSU2_TR(0x443631);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B443637:{NFSU2_TR(0x443637);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B44363b:{NFSU2_TR(0x44363b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x330ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B443641:{NFSU2_TR(0x443641);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B443647:{NFSU2_TR(0x443647);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B44364b:{NFSU2_TR(0x44364b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B443651:{NFSU2_TR(0x443651);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B443657:{NFSU2_TR(0x443657);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B44365b:{NFSU2_TR(0x44365b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x440ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B443661:{NFSU2_TR(0x443661);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B443667:{NFSU2_TR(0x443667);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B44366b:{NFSU2_TR(0x44366b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
}
B44366e:{NFSU2_TR(0x44366e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x550ull))));
}
B443674:{NFSU2_TR(0x443674);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xd4ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xd4ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xd4ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B443679:{NFSU2_TR(0x443679);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4435d0u);}goto L4435d0;}}
}
B44367f:L44367f:{c.instructions+=5;NFSU2_TR(0x44367f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B443685:{NFSU2_TR(0x443685);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B443686:{NFSU2_TR(0x443686);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44368c:{NFSU2_TR(0x44368c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44368d:{NFSU2_TR(0x44368d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B443690:L443690:{c.instructions+=7;NFSU2_TR(0x443690);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B443696:{NFSU2_TR(0x443696);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(u32(0x88ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B44369c:{NFSU2_TR(0x44369c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44369d:{NFSU2_TR(0x44369d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44369e:{NFSU2_TR(0x44369e);
u8 U[12];
w4(U+0,u32(u32(u32(0x19cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B4436a5:{NFSU2_TR(0x4436a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4436a8:{NFSU2_TR(0x4436a8);
w4(R+4,u32(0x22ull));
}
B4436ad:L4436ad:{c.instructions+=1;NFSU2_TR(0x4436ad);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4436af;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4436adu);}goto L4436ad;}
}
B4436af:L4436af:{c.instructions+=3;NFSU2_TR(0x4436af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4436b0:{NFSU2_TR(0x4436b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4436b1:{NFSU2_TR(0x4436b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4436c0:L4436c0:{c.instructions+=8;NFSU2_TR(0x4436c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4436c6:{NFSU2_TR(0x4436c6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4436cc:{NFSU2_TR(0x4436cc);
u8 U[16];
w4(U+0,u32(u32(u32(0x1acull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B4436d3:{NFSU2_TR(0x4436d3);
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
B4436d5:{NFSU2_TR(0x4436d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4436db:{NFSU2_TR(0x4436db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4436e1:{NFSU2_TR(0x4436e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4436e7:{NFSU2_TR(0x4436e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4436f0:L4436f0:{c.instructions+=10;NFSU2_TR(0x4436f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4436f4:{NFSU2_TR(0x4436f4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4436f5:{NFSU2_TR(0x4436f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4436f6:{NFSU2_TR(0x4436f6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4436f7:{NFSU2_TR(0x4436f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4436fb:{NFSU2_TR(0x4436fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4436fc:{NFSU2_TR(0x4436fc);
__builtin_memmove((R+24),(R+4),4);
}
B4436fe:{NFSU2_TR(0x4436fe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4436ff:{NFSU2_TR(0x4436ff);
w4(R+4,u32(0x827b88ull));
}
B443704:{NFSU2_TR(0x443704);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x443709ull));
TAIL_STATIC(0x435be0u,435);
}
B443709:L443709:{c.instructions+=3;NFSU2_TR(0x443709);
__builtin_memmove((R+12),(R+0),1);
}
B44370b:{NFSU2_TR(0x44370b);
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
B44370d:{NFSU2_TR(0x44370d);
if(r1(R+518)){{goto L443730;}}
}
B44370f:L44370f:{c.instructions+=4;NFSU2_TR(0x44370f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443711:{NFSU2_TR(0x443711);
__builtin_memmove((R+4),(R+24),4);
}
B443713:{NFSU2_TR(0x443713);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c58ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B443719:{NFSU2_TR(0x443719);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44371eull));
TAIL_STATIC(0x455c80u,455);
}
B44371e:L44371e:{c.instructions+=6;NFSU2_TR(0x44371e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44371f:{NFSU2_TR(0x44371f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cc8ull))));
w4(U+4,u32(0x12cull));
s4(u32(r4(U+0)),r4(U+4));
}
B443729:{NFSU2_TR(0x443729);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44372a:{NFSU2_TR(0x44372a);
__builtin_memmove((R+0),(R+12),1);
}
B44372c:{NFSU2_TR(0x44372c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B44372d:{NFSU2_TR(0x44372d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B443730:L443730:{c.instructions+=6;NFSU2_TR(0x443730);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B443731:{NFSU2_TR(0x443731);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cd0ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44373b:{NFSU2_TR(0x44373b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44373c:{NFSU2_TR(0x44373c);
__builtin_memmove((R+0),(R+12),1);
}
B44373e:{NFSU2_TR(0x44373e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B44373f:{NFSU2_TR(0x44373f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B443750:L443750:{c.instructions+=5;NFSU2_TR(0x443750);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443751:{NFSU2_TR(0x443751);
__builtin_memmove((R+24),(R+4),4);
}
B443753:{NFSU2_TR(0x443753);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443755:{NFSU2_TR(0x443755);
w4(R+4,u32(0x827b88ull));
}
B44375a:{NFSU2_TR(0x44375a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44375full));
TAIL_STATIC(0x43b380u,43b);
}
B44375f:L44375f:{c.instructions+=4;NFSU2_TR(0x44375f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B443765:{NFSU2_TR(0x443765);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B443767:{NFSU2_TR(0x443767);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c5cull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B443771:{NFSU2_TR(0x443771);
if(r1(R+518)){{goto L443788;}}
}
B443773:L443773:{c.instructions+=3;NFSU2_TR(0x443773);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443774:{NFSU2_TR(0x443774);
w4(R+4,u32(0x827b88ull));
}
B443779:{NFSU2_TR(0x443779);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44377eull));
TAIL_STATIC(0x4376f0u,437);
}
B44377e:L44377e:{c.instructions+=1;NFSU2_TR(0x44377e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c58ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B443788:L443788:{c.instructions+=3;NFSU2_TR(0x443788);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44378e:{NFSU2_TR(0x44378e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443790:{NFSU2_TR(0x443790);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x443795ull));
TAIL_STATIC(0x5f46a0u,5f4);
}
B443795:L443795:{c.instructions+=4;NFSU2_TR(0x443795);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44379b:{NFSU2_TR(0x44379b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B44379e:{NFSU2_TR(0x44379e);
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
B4437a0:{NFSU2_TR(0x4437a0);
if(r1(R+518)){{goto L4437b6;}}
}
B4437a2:L4437a2:{c.instructions+=4;NFSU2_TR(0x4437a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4437a4:{NFSU2_TR(0x4437a4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4437a6:{NFSU2_TR(0x4437a6);
__builtin_memmove((R+4),(R+24),4);
}
B4437a8:{NFSU2_TR(0x4437a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4437abull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4437ab:L4437ab:{c.instructions+=2;NFSU2_TR(0x4437ab);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4437ad:{NFSU2_TR(0x4437ad);
if(r1(R+518)){{goto L4437b6;}}
}
B4437af:L4437af:{c.instructions+=2;NFSU2_TR(0x4437af);
__builtin_memmove((R+4),(R+24),4);
}
B4437b1:{NFSU2_TR(0x4437b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4437b6ull));
TAIL_STATIC(0x5930f0u,593);
}
B4437b6:L4437b6:{c.instructions+=4;NFSU2_TR(0x4437b6);
__builtin_memmove((R+4),gp(0x8900b4),4);
}
B4437bc:{NFSU2_TR(0x4437bc);
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
B4437be:{NFSU2_TR(0x4437be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4437bf:{NFSU2_TR(0x4437bf);
if(r1(R+518)){{goto L4437c8;}}
}
B4437c1:L4437c1:{c.instructions+=2;NFSU2_TR(0x4437c1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4437c3:{NFSU2_TR(0x4437c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4437c8ull));
TAIL_STATIC(0x5fa820u,5fa);
}
B4437c8:L4437c8:{c.instructions+=1;NFSU2_TR(0x4437c8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4437d0:L4437d0:{c.instructions+=6;NFSU2_TR(0x4437d0);
__builtin_memmove((R+8),(R+4),4);
}
B4437d2:{NFSU2_TR(0x4437d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4437d6:{NFSU2_TR(0x4437d6);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B4437da:{NFSU2_TR(0x4437da);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x32ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x32ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4437dd:{NFSU2_TR(0x4437dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1c2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4437e3:{NFSU2_TR(0x4437e3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4437ef;}}
}
B4437e5:L4437e5:{c.instructions+=1;NFSU2_TR(0x4437e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1c2cull))));
w4(U+4,u32(0x32ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4437ef:L4437ef:{c.instructions+=5;NFSU2_TR(0x4437ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B4437f3:{NFSU2_TR(0x4437f3);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B4437f4:{NFSU2_TR(0x4437f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4437f5:{NFSU2_TR(0x4437f5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4437f6:{NFSU2_TR(0x4437f6);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L4437fc;}}
}
B4437f8:L4437f8:{c.instructions+=2;NFSU2_TR(0x4437f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4437fa:{NFSU2_TR(0x4437fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L443801;}}
}
B4437fc:L4437fc:{c.instructions+=2;NFSU2_TR(0x4437fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4437ff:{NFSU2_TR(0x4437ff);
{goto L443803;}
}
B443801:L443801:{c.instructions+=1;NFSU2_TR(0x443801);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B443803:L443803:{c.instructions+=5;NFSU2_TR(0x443803);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1c2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B443809:{NFSU2_TR(0x443809);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B44380f:{NFSU2_TR(0x44380f);
__builtin_memmove((R+0),(R+4),4);
}
B443811:{NFSU2_TR(0x443811);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B443814:{NFSU2_TR(0x443814);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x19cull))));
__builtin_memmove((R+28),(U+0),4);
}
B44381a:L44381a:{c.instructions+=1;NFSU2_TR(0x44381a);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L44381c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44381au);}goto L44381a;}
}
B44381c:L44381c:{c.instructions+=2;NFSU2_TR(0x44381c);
__builtin_memmove((R+4),(R+0),4);
}
B44381e:{NFSU2_TR(0x44381e);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B443821:L443821:{c.instructions+=1;NFSU2_TR(0x443821);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L443823;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x443821u);}goto L443821;}
}
B443823:L443823:{c.instructions+=3;NFSU2_TR(0x443823);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B443824:{NFSU2_TR(0x443824);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B443825:{NFSU2_TR(0x443825);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B443830:L443830:{c.instructions+=6;NFSU2_TR(0x443830);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B443834:{NFSU2_TR(0x443834);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443835:{NFSU2_TR(0x443835);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B443839:{NFSU2_TR(0x443839);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44383a:{NFSU2_TR(0x44383a);
__builtin_memmove((R+28),(R+4),4);
}
B44383c:{NFSU2_TR(0x44383c);
__builtin_memmove((R+16),(R+16),4);
}
B443840:L443840:{c.instructions+=4;NFSU2_TR(0x443840);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B443842:{NFSU2_TR(0x443842);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443844:{NFSU2_TR(0x443844);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443845:{NFSU2_TR(0x443845);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44384aull));
TAIL_STATIC(0x43c280u,43c);
}
B44384a:L44384a:{c.instructions+=4;NFSU2_TR(0x44384a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B443850:{NFSU2_TR(0x443850);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B443853:{NFSU2_TR(0x443853);
w1(R+512,u8((r4(R+4))<(u32(0x0ull))));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B443856:{NFSU2_TR(0x443856);
if(r1(R+518)){{goto L443870;}}
}
B443858:L443858:{c.instructions+=2;NFSU2_TR(0x443858);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B443859:{NFSU2_TR(0x443859);
if(r1(R+518)){{goto L443862;}}
}
B44385b:L44385b:{c.instructions+=2;NFSU2_TR(0x44385b);
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
B44385c:{NFSU2_TR(0x44385c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44387a;}}
}
B44385e:L44385e:{c.instructions+=2;NFSU2_TR(0x44385e);
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
B443860:{NFSU2_TR(0x443860);
{goto L443878;}
}
B443862:L443862:{c.instructions+=2;NFSU2_TR(0x443862);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B443864:{NFSU2_TR(0x443864);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x443840u);}goto L443840;}}
}
B443866:L443866:{c.instructions+=2;NFSU2_TR(0x443866);
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
B443869:{NFSU2_TR(0x443869);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x443840u);}goto L443840;}}
}
B44386b:L44386b:{c.instructions+=3;NFSU2_TR(0x44386b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44386c:{NFSU2_TR(0x44386c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44386d:{NFSU2_TR(0x44386d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B443870:L443870:{c.instructions+=3;NFSU2_TR(0x443870);
__builtin_memmove((R+4),(R+0),4);
}
B443872:{NFSU2_TR(0x443872);
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
B443873:{NFSU2_TR(0x443873);
if(r1(R+518)){{goto L44387a;}}
}
B443875:L443875:{c.instructions+=1;NFSU2_TR(0x443875);
u8 U[6];
w1(R+512,u8((r4(R+4))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(R+4),u32(0x2ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B443878:L443878:{c.instructions+=1;NFSU2_TR(0x443878);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x443840u);}goto L443840;}}
}
B44387a:L44387a:{c.instructions+=3;NFSU2_TR(0x44387a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44387b:{NFSU2_TR(0x44387b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44387c:{NFSU2_TR(0x44387c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B443880:L443880:{c.instructions+=4;NFSU2_TR(0x443880);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B443884:{NFSU2_TR(0x443884);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B443886:{NFSU2_TR(0x443886);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B443888:{NFSU2_TR(0x443888);
{goto L443890;}
}
B443890:L443890:{c.instructions+=2;NFSU2_TR(0x443890);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x7eb524ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+8))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B443897:{NFSU2_TR(0x443897);
if(r1(R+518)){{goto L4438a1;}}
}
B443899:L443899:{c.instructions+=3;NFSU2_TR(0x443899);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B44389a:{NFSU2_TR(0x44389a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B44389d:{NFSU2_TR(0x44389d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x443890u);}goto L443890;}}
}
B44389f:L44389f:{c.instructions+=1;NFSU2_TR(0x44389f);
{goto L4438a3;}
}
B4438a1:L4438a1:{c.instructions+=1;NFSU2_TR(0x4438a1);
__builtin_memmove((R+4),(R+0),4);
}
B4438a3:L4438a3:{c.instructions+=5;NFSU2_TR(0x4438a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4438a7:{NFSU2_TR(0x4438a7);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B4438a9:{NFSU2_TR(0x4438a9);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4438ab:{NFSU2_TR(0x4438ab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4438ac:{NFSU2_TR(0x4438ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4438b1ull));
TAIL_STATIC(0x43c280u,43c);
}
B4438b1:L4438b1:{c.instructions+=3;NFSU2_TR(0x4438b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x7eb524ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4438b8:{NFSU2_TR(0x4438b8);
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
B4438bb:{NFSU2_TR(0x4438bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4438c0:L4438c0:{c.instructions+=5;NFSU2_TR(0x4438c0);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B4438c5:{NFSU2_TR(0x4438c5);
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
B4438c7:{NFSU2_TR(0x4438c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4438c8:{NFSU2_TR(0x4438c8);
__builtin_memmove((R+28),(R+4),4);
}
B4438ca:{NFSU2_TR(0x4438ca);
if(r1(R+518)){{goto L443abb;}}
}
B4438d0:L4438d0:{c.instructions+=4;NFSU2_TR(0x4438d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4438d1:{NFSU2_TR(0x4438d1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4438d5:{NFSU2_TR(0x4438d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4438d7:{NFSU2_TR(0x4438d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44390b;}}
}
B4438d9:L4438d9:{c.instructions+=2;NFSU2_TR(0x4438d9);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x5ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4438e0:{NFSU2_TR(0x4438e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L443aba;}}
}
B4438e6:L4438e6:{c.instructions+=1;NFSU2_TR(0x4438e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4438ec:L4438ec:{c.instructions+=2;NFSU2_TR(0x4438ec);
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4438ef:{NFSU2_TR(0x4438ef);
if(r1(R+518)){{goto L4439a5;}}
}
B4438f5:L4438f5:{c.instructions+=2;NFSU2_TR(0x4438f5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4438f6:{NFSU2_TR(0x4438f6);
if(r1(R+518)){{goto L443929;}}
}
B4438f8:L4438f8:{c.instructions+=2;NFSU2_TR(0x4438f8);
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
B4438f9:{NFSU2_TR(0x4438f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L443aba;}}
}
B4438ff:L4438ff:{c.instructions+=2;NFSU2_TR(0x4438ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B443901:{NFSU2_TR(0x443901);
if(r1(R+518)){{goto L44391e;}}
}
B443903:L443903:{c.instructions+=2;NFSU2_TR(0x443903);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443906:{NFSU2_TR(0x443906);
{goto L4439cf;}
}
B44390b:L44390b:{c.instructions+=3;NFSU2_TR(0x44390b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44390e:{NFSU2_TR(0x44390e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B443910:{NFSU2_TR(0x443910);
if(r1(R+518)){{goto L443917;}}
}
B443912:L443912:{c.instructions+=2;NFSU2_TR(0x443912);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B443915:{NFSU2_TR(0x443915);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4438ecu);}goto L4438ec;}
}
B443917:L443917:{c.instructions+=2;NFSU2_TR(0x443917);
w4(R+0,u32(0x3ull));
}
B44391c:{NFSU2_TR(0x44391c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4438ecu);}goto L4438ec;}
}
B44391e:L44391e:{c.instructions+=2;NFSU2_TR(0x44391e);
{u32 ea_=u32(r4(R+28)+u32(7280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443924:{NFSU2_TR(0x443924);
{goto L4439cf;}
}
B443929:L443929:{c.instructions+=2;NFSU2_TR(0x443929);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44392b:{NFSU2_TR(0x44392b);
if(r1(R+518)){{goto L44399d;}}
}
B44392d:L44392d:{c.instructions+=6;NFSU2_TR(0x44392d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B443931:{NFSU2_TR(0x443931);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B443934:{NFSU2_TR(0x443934);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B443936:{NFSU2_TR(0x443936);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44393c:{NFSU2_TR(0x44393c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B443940:{NFSU2_TR(0x443940);
if(r1(R+518)){{goto L443959;}}
}
B443942:L443942:{c.instructions+=3;NFSU2_TR(0x443942);
__builtin_memmove((R+8),gp(0x88f2be),1);
}
B443948:{NFSU2_TR(0x443948);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44394a:{NFSU2_TR(0x44394a);
if(r1(R+518)){{goto L443959;}}
}
B44394c:L44394c:{c.instructions+=3;NFSU2_TR(0x44394c);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44394f:{NFSU2_TR(0x44394f);
{u32 ea_=u32(u32(8975024u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B443955:{NFSU2_TR(0x443955);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B443959:L443959:{c.instructions+=1;NFSU2_TR(0x443959);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44395eull));
TAIL_STATIC(0x5ec0a0u,5ec);
}
B44395e:L44395e:{c.instructions+=3;NFSU2_TR(0x44395e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B443961:{NFSU2_TR(0x443961);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B443963:{NFSU2_TR(0x443963);
if(r1(R+518)){{goto L443977;}}
}
B443965:L443965:{c.instructions+=3;NFSU2_TR(0x443965);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+0,u32(r2(U+0)));
}
B443968:{NFSU2_TR(0x443968);
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
B44396a:{NFSU2_TR(0x44396a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L443aba;}}
}
B443970:L443970:{c.instructions+=1;NFSU2_TR(0x443970);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B443977:L443977:{c.instructions+=2;NFSU2_TR(0x443977);
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
B443979:{NFSU2_TR(0x443979);
if(r1(R+518)){{goto L443aba;}}
}
B44397f:L44397f:{c.instructions+=2;NFSU2_TR(0x44397f);
__builtin_memmove((R+4),(R+0),4);
}
B443981:{NFSU2_TR(0x443981);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x443986ull));
TAIL_STATIC(0x5d4520u,5d4);
}
B443986:L443986:{c.instructions+=4;NFSU2_TR(0x443986);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B44398c:{NFSU2_TR(0x44398c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44398e:{NFSU2_TR(0x44398e);
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
B443991:{NFSU2_TR(0x443991);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L443ab8;}}
}
B443997:L443997:{c.instructions+=2;NFSU2_TR(0x443997);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B44399b:{NFSU2_TR(0x44399b);
{goto L4439e6;}
}
B44399d:L44399d:{c.instructions+=2;NFSU2_TR(0x44399d);
{u32 ea_=u32(u32(8303728u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4439a3:{NFSU2_TR(0x4439a3);
{goto L4439e6;}
}
B4439a5:L4439a5:{c.instructions+=3;NFSU2_TR(0x4439a5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4439a7:{NFSU2_TR(0x4439a7);
w4(R+4,u32(0x827b88ull));
}
B4439ac:{NFSU2_TR(0x4439ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4439b1ull));
TAIL_STATIC(0x4324d0u,432);
}
B4439b1:L4439b1:{c.instructions+=2;NFSU2_TR(0x4439b1);
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
B4439b3:{NFSU2_TR(0x4439b3);
if(r1(R+518)){{goto L443aba;}}
}
B4439b9:L4439b9:{c.instructions+=3;NFSU2_TR(0x4439b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4439ba:{NFSU2_TR(0x4439ba);
w4(R+4,u32(0x827b88ull));
}
B4439bf:{NFSU2_TR(0x4439bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4439c4ull));
TAIL_STATIC(0x432490u,432);
}
B4439c4:L4439c4:{c.instructions+=2;NFSU2_TR(0x4439c4);
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
B4439c6:{NFSU2_TR(0x4439c6);
if(r1(R+518)){{goto L443aba;}}
}
B4439cc:L4439cc:{c.instructions+=1;NFSU2_TR(0x4439cc);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4439cf:L4439cf:{c.instructions+=4;NFSU2_TR(0x4439cf);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4439d5:{NFSU2_TR(0x4439d5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4439d7:{NFSU2_TR(0x4439d7);
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
B4439da:{NFSU2_TR(0x4439da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L443ab8;}}
}
B4439e0:L4439e0:{c.instructions+=1;NFSU2_TR(0x4439e0);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B4439e6:L4439e6:{c.instructions+=4;NFSU2_TR(0x4439e6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4439ec:{NFSU2_TR(0x4439ec);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4439ee:{NFSU2_TR(0x4439ee);
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
B4439f1:{NFSU2_TR(0x4439f1);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L443ab8;}}
}
B4439f7:L4439f7:{c.instructions+=2;NFSU2_TR(0x4439f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4439f9:{NFSU2_TR(0x4439f9);
if(r1(R+518)){{goto L443a0d;}}
}
B4439fb:L4439fb:{c.instructions+=4;NFSU2_TR(0x4439fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B4439ff:{NFSU2_TR(0x4439ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B443a02:{NFSU2_TR(0x443a02);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B443a04:{NFSU2_TR(0x443a04);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L443a08;}}
}
B443a06:L443a06:{c.instructions+=1;NFSU2_TR(0x443a06);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L443a34;}}
}
B443a08:L443a08:{c.instructions+=2;NFSU2_TR(0x443a08);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B443a0b:{NFSU2_TR(0x443a0b);
{goto L443a19;}
}
B443a0d:L443a0d:{c.instructions+=2;NFSU2_TR(0x443a0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B443a13:{NFSU2_TR(0x443a13);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x19cull))));
__builtin_memmove((R+4),(U+0),4);
}
B443a19:L443a19:{c.instructions+=6;NFSU2_TR(0x443a19);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B443a1d:{NFSU2_TR(0x443a1d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443a21:{NFSU2_TR(0x443a21);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B443a23:{NFSU2_TR(0x443a23);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B443a25:{NFSU2_TR(0x443a25);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B443a28:{NFSU2_TR(0x443a28);
if(r1(R+514)){{goto L443a38;}}
}
B443a2a:L443a2a:{c.instructions+=3;NFSU2_TR(0x443a2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B443a2e:{NFSU2_TR(0x443a2e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B443a32:{NFSU2_TR(0x443a32);
{goto L443a3c;}
}
B443a34:L443a34:{c.instructions+=2;NFSU2_TR(0x443a34);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B443a36:{NFSU2_TR(0x443a36);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x443a19u);}goto L443a19;}
}
B443a38:L443a38:{c.instructions+=1;NFSU2_TR(0x443a38);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B443a3c:L443a3c:{c.instructions+=5;NFSU2_TR(0x443a3c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443a40:{NFSU2_TR(0x443a40);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B443a42:{NFSU2_TR(0x443a42);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B443a44:{NFSU2_TR(0x443a44);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B443a47:{NFSU2_TR(0x443a47);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L443a55;}}
}
B443a49:L443a49:{c.instructions+=4;NFSU2_TR(0x443a49);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B443a4d:{NFSU2_TR(0x443a4d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B443a4f:{NFSU2_TR(0x443a4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B443a53:{NFSU2_TR(0x443a53);
{goto L443a59;}
}
B443a55:L443a55:{c.instructions+=1;NFSU2_TR(0x443a55);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B443a59:L443a59:{c.instructions+=2;NFSU2_TR(0x443a59);
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
B443a5b:{NFSU2_TR(0x443a5b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L443aba;}}
}
B443a5d:L443a5d:{c.instructions+=2;NFSU2_TR(0x443a5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
}
B443a60:{NFSU2_TR(0x443a60);
__builtin_memmove((R+28),(R+8),4);
}
B443a62:L443a62:{c.instructions+=3;NFSU2_TR(0x443a62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B443a65:{NFSU2_TR(0x443a65);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B443a67:{NFSU2_TR(0x443a67);
if(r1(R+518)){{goto L443aaa;}}
}
B443a69:L443a69:{c.instructions+=5;NFSU2_TR(0x443a69);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443a6b:{NFSU2_TR(0x443a6b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B443a6f:{NFSU2_TR(0x443a6f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B443a71:{NFSU2_TR(0x443a71);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B443a74:{NFSU2_TR(0x443a74);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L443a7a;}}
}
B443a76:L443a76:{c.instructions+=2;NFSU2_TR(0x443a76);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B443a78:{NFSU2_TR(0x443a78);
{goto L443a7e;}
}
B443a7a:L443a7a:{c.instructions+=1;NFSU2_TR(0x443a7a);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443a7e:L443a7e:{c.instructions+=5;NFSU2_TR(0x443a7e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443a82:{NFSU2_TR(0x443a82);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B443a84:{NFSU2_TR(0x443a84);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B443a86:{NFSU2_TR(0x443a86);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B443a89:{NFSU2_TR(0x443a89);
if(r1(R+514)){{goto L443a91;}}
}
B443a8b:L443a8b:{c.instructions+=2;NFSU2_TR(0x443a8b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B443a8d:{NFSU2_TR(0x443a8d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443a91:L443a91:{c.instructions+=6;NFSU2_TR(0x443a91);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B443a93:{NFSU2_TR(0x443a93);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B443a95:{NFSU2_TR(0x443a95);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B443a97:{NFSU2_TR(0x443a97);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B443a99:{NFSU2_TR(0x443a99);
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
B443a9c:{NFSU2_TR(0x443a9c);
if(r1(R+514)){{goto L443aaa;}}
}
B443a9e:L443a9e:{c.instructions+=3;NFSU2_TR(0x443a9e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443a9f:{NFSU2_TR(0x443a9f);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B443aa5:{NFSU2_TR(0x443aa5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x443aaaull));
TAIL_STATIC(0x4031c0u,403);
}
B443aaa:L443aaa:{c.instructions+=3;NFSU2_TR(0x443aaa);
w1(R+512,carry<u32>(r4(R+24),u32(0x88ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x88ull))));
}
B443ab0:{NFSU2_TR(0x443ab0);
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
B443ab1:{NFSU2_TR(0x443ab1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x443a62u);}goto L443a62;}}
}
B443ab3:L443ab3:{c.instructions+=3;NFSU2_TR(0x443ab3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B443ab4:{NFSU2_TR(0x443ab4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B443ab5:{NFSU2_TR(0x443ab5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B443ab8:L443ab8:{c.instructions+=1;NFSU2_TR(0x443ab8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B443aba:L443aba:{c.instructions+=1;NFSU2_TR(0x443aba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B443abb:L443abb:{c.instructions+=2;NFSU2_TR(0x443abb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B443abc:{NFSU2_TR(0x443abc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B443ac0:L443ac0:{c.instructions+=4;NFSU2_TR(0x443ac0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B443ac4:{NFSU2_TR(0x443ac4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443ac5:{NFSU2_TR(0x443ac5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443ac7:{NFSU2_TR(0x443ac7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x443accull));
TAIL_STATIC(0x571a00u,571);
}
B443acc:L443acc:{c.instructions+=8;NFSU2_TR(0x443acc);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B443ad0:{NFSU2_TR(0x443ad0);
w4(R+4,u32(r1(R+0)));
}
B443ad3:{NFSU2_TR(0x443ad3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B443ad7:{NFSU2_TR(0x443ad7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443ad8:{NFSU2_TR(0x443ad8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443ada:{NFSU2_TR(0x443ada);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B443ade:{NFSU2_TR(0x443ade);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B443ae2:{NFSU2_TR(0x443ae2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x443ae7ull));
TAIL_STATIC(0x571a00u,571);
}
B443ae7:L443ae7:{c.instructions+=11;NFSU2_TR(0x443ae7);
w4(R+0,u32(r1(R+0)));
}
B443aea:{NFSU2_TR(0x443aea);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B443aee:{NFSU2_TR(0x443aee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B443af1:{NFSU2_TR(0x443af1);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B443af5:{NFSU2_TR(0x443af5);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B443af9:{NFSU2_TR(0x443af9);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B443afd:{NFSU2_TR(0x443afd);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443b03:{NFSU2_TR(0x443b03);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B443b07:{NFSU2_TR(0x443b07);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B443b09:{NFSU2_TR(0x443b09);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B443b0c:{NFSU2_TR(0x443b0c);
if(r1(R+514)){{goto L443b8d;}}
}
B443b0e:L443b0e:{c.instructions+=5;NFSU2_TR(0x443b0e);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443b12:{NFSU2_TR(0x443b12);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B443b18:{NFSU2_TR(0x443b18);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B443b1a:{NFSU2_TR(0x443b1a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B443b1d:{NFSU2_TR(0x443b1d);
if(r1(R+514)){{goto L443b4b;}}
}
B443b1f:L443b1f:{c.instructions+=8;NFSU2_TR(0x443b1f);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443b25:{NFSU2_TR(0x443b25);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B443b29:{NFSU2_TR(0x443b29);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B443b2d:{NFSU2_TR(0x443b2d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443b33:{NFSU2_TR(0x443b33);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B443b35:{NFSU2_TR(0x443b35);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B443b37:{NFSU2_TR(0x443b37);
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
B443b3a:{NFSU2_TR(0x443b3a);
if(r1(R+514)){{goto L443bcb;}}
}
B443b40:L443b40:{c.instructions+=3;NFSU2_TR(0x443b40);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B443b42:{NFSU2_TR(0x443b42);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443b48:{NFSU2_TR(0x443b48);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B443b4b:L443b4b:{c.instructions+=5;NFSU2_TR(0x443b4b);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443b4f:{NFSU2_TR(0x443b4f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B443b55:{NFSU2_TR(0x443b55);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B443b57:{NFSU2_TR(0x443b57);
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
B443b5a:{NFSU2_TR(0x443b5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L443b84;}}
}
B443b5c:L443b5c:{c.instructions+=8;NFSU2_TR(0x443b5c);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443b62:{NFSU2_TR(0x443b62);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B443b66:{NFSU2_TR(0x443b66);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B443b6a:{NFSU2_TR(0x443b6a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443b70:{NFSU2_TR(0x443b70);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B443b72:{NFSU2_TR(0x443b72);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B443b74:{NFSU2_TR(0x443b74);
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
B443b77:{NFSU2_TR(0x443b77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L443bcb;}}
}
B443b79:L443b79:{c.instructions+=3;NFSU2_TR(0x443b79);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B443b7b:{NFSU2_TR(0x443b7b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443b81:{NFSU2_TR(0x443b81);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B443b84:L443b84:{c.instructions+=2;NFSU2_TR(0x443b84);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443b8a:{NFSU2_TR(0x443b8a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B443b8d:L443b8d:{c.instructions+=11;NFSU2_TR(0x443b8d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443b91:{NFSU2_TR(0x443b91);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B443b93:{NFSU2_TR(0x443b93);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443b99:{NFSU2_TR(0x443b99);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B443b9d:{NFSU2_TR(0x443b9d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B443ba1:{NFSU2_TR(0x443ba1);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B443ba5:{NFSU2_TR(0x443ba5);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B443ba9:{NFSU2_TR(0x443ba9);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B443bab:{NFSU2_TR(0x443bab);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B443bad:{NFSU2_TR(0x443bad);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B443bb0:{NFSU2_TR(0x443bb0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L443bb8;}}
}
B443bb2:L443bb2:{c.instructions+=2;NFSU2_TR(0x443bb2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B443bb4:{NFSU2_TR(0x443bb4);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443bb8:L443bb8:{c.instructions+=5;NFSU2_TR(0x443bb8);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443bbc:{NFSU2_TR(0x443bbc);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B443bbe:{NFSU2_TR(0x443bbe);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B443bc0:{NFSU2_TR(0x443bc0);
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
B443bc3:{NFSU2_TR(0x443bc3);
if(r1(R+514)){{goto L443bcb;}}
}
B443bc5:L443bc5:{c.instructions+=2;NFSU2_TR(0x443bc5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B443bc7:{NFSU2_TR(0x443bc7);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443bcb:L443bcb:{c.instructions+=1;NFSU2_TR(0x443bcb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B443bd0:L443bd0:{c.instructions+=10;NFSU2_TR(0x443bd0);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B443bd4:{NFSU2_TR(0x443bd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B443bd7:{NFSU2_TR(0x443bd7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B443bd9:{NFSU2_TR(0x443bd9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443bda:{NFSU2_TR(0x443bda);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443bdb:{NFSU2_TR(0x443bdb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443bdc:{NFSU2_TR(0x443bdc);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B443be0:{NFSU2_TR(0x443be0);
__builtin_memmove((R+24),(R+4),4);
}
B443be2:{NFSU2_TR(0x443be2);
__builtin_memmove((R+12),(R+28),4);
}
B443be4:{NFSU2_TR(0x443be4);
if(r1(R+518)){{goto L443c0b;}}
}
B443be6:L443be6:{c.instructions+=6;NFSU2_TR(0x443be6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B443be9:{NFSU2_TR(0x443be9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7eb578ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B443bf0:{NFSU2_TR(0x443bf0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443bf1:{NFSU2_TR(0x443bf1);
u8 U[4];
w4(U+0,u32(0x787accull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443bf6:{NFSU2_TR(0x443bf6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443bf7:{NFSU2_TR(0x443bf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x443bfcull));
TAIL_STATIC(0x4400d0u,440);
}
B443bfc:L443bfc:{c.instructions+=2;NFSU2_TR(0x443bfc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443bfd:{NFSU2_TR(0x443bfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x443c02ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B443c02:L443c02:{c.instructions+=4;NFSU2_TR(0x443c02);
__builtin_memmove((R+12),(R+0),4);
}
B443c04:{NFSU2_TR(0x443c04);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B443c07:{NFSU2_TR(0x443c07);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B443c09:{NFSU2_TR(0x443c09);
{goto L443c0e;}
}
B443c0b:L443c0b:{c.instructions+=1;NFSU2_TR(0x443c0b);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+28)),r1(U+0));
}
B443c0e:L443c0e:{c.instructions+=3;NFSU2_TR(0x443c0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B443c11:{NFSU2_TR(0x443c11);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B443c14:{NFSU2_TR(0x443c14);
if(r1(R+518)){{goto L443c6d;}}
}
B443c16:L443c16:{c.instructions+=2;NFSU2_TR(0x443c16);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B443c17:{NFSU2_TR(0x443c17);
if(r1(R+518)){{goto L443c40;}}
}
B443c19:L443c19:{c.instructions+=2;NFSU2_TR(0x443c19);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B443c1a:{NFSU2_TR(0x443c1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L443cb5;}}
}
B443c20:L443c20:{c.instructions+=3;NFSU2_TR(0x443c20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B443c22:{NFSU2_TR(0x443c22);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443c23:{NFSU2_TR(0x443c23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x443c28ull));
TAIL_STATIC(0x441f70u,441);
}
B443c28:L443c28:{c.instructions+=4;NFSU2_TR(0x443c28);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443c29:{NFSU2_TR(0x443c29);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443c2e:{NFSU2_TR(0x443c2e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443c2f:{NFSU2_TR(0x443c2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x443c34ull));
TAIL_STATIC(0x4400d0u,440);
}
B443c34:L443c34:{c.instructions+=6;NFSU2_TR(0x443c34);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B443c37:{NFSU2_TR(0x443c37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B443c38:{NFSU2_TR(0x443c38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B443c39:{NFSU2_TR(0x443c39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B443c3a:{NFSU2_TR(0x443c3a);
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
B443c3d:{NFSU2_TR(0x443c3d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B443c40:L443c40:{c.instructions+=3;NFSU2_TR(0x443c40);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B443c45:{NFSU2_TR(0x443c45);
w4(R+0,u32(0x787ac8ull));
}
B443c4a:{NFSU2_TR(0x443c4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L443c51;}}
}
B443c4c:L443c4c:{c.instructions+=1;NFSU2_TR(0x443c4c);
w4(R+0,u32(0x787ac4ull));
}
B443c51:L443c51:{c.instructions+=6;NFSU2_TR(0x443c51);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443c52:{NFSU2_TR(0x443c52);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+0,u32(r2(U+0)));
}
B443c55:{NFSU2_TR(0x443c55);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443c56:{NFSU2_TR(0x443c56);
u8 U[4];
w4(U+0,u32(0x787abcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443c5b:{NFSU2_TR(0x443c5b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443c5c:{NFSU2_TR(0x443c5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x443c61ull));
TAIL_STATIC(0x4400d0u,440);
}
B443c61:L443c61:{c.instructions+=6;NFSU2_TR(0x443c61);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B443c64:{NFSU2_TR(0x443c64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B443c65:{NFSU2_TR(0x443c65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B443c66:{NFSU2_TR(0x443c66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B443c67:{NFSU2_TR(0x443c67);
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
B443c6a:{NFSU2_TR(0x443c6a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B443c6d:L443c6d:{c.instructions+=6;NFSU2_TR(0x443c6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B443c6f:{NFSU2_TR(0x443c6f);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B443c73:{NFSU2_TR(0x443c73);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443c74:{NFSU2_TR(0x443c74);
__builtin_memmove((R+4),gp(0x827ad8),4);
}
B443c7a:{NFSU2_TR(0x443c7a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443c7b:{NFSU2_TR(0x443c7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x443c80ull));
TAIL_STATIC(0x42fbf0u,42f);
}
B443c80:L443c80:{c.instructions+=3;NFSU2_TR(0x443c80);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B443c84:{NFSU2_TR(0x443c84);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B443c86:{NFSU2_TR(0x443c86);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L443ca2;}}
}
B443c88:L443c88:{c.instructions+=5;NFSU2_TR(0x443c88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B443c8a:{NFSU2_TR(0x443c8a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443c8b:{NFSU2_TR(0x443c8b);
u8 U[4];
w4(U+0,u32(0x787aa8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443c90:{NFSU2_TR(0x443c90);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443c91:{NFSU2_TR(0x443c91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x443c96ull));
TAIL_STATIC(0x4400d0u,440);
}
B443c96:L443c96:{c.instructions+=6;NFSU2_TR(0x443c96);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B443c99:{NFSU2_TR(0x443c99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B443c9a:{NFSU2_TR(0x443c9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B443c9b:{NFSU2_TR(0x443c9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B443c9c:{NFSU2_TR(0x443c9c);
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
B443c9f:{NFSU2_TR(0x443c9f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B443ca2:L443ca2:{c.instructions+=5;NFSU2_TR(0x443ca2);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B443ca6:{NFSU2_TR(0x443ca6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443ca7:{NFSU2_TR(0x443ca7);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443cac:{NFSU2_TR(0x443cac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443cad:{NFSU2_TR(0x443cad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x443cb2ull));
TAIL_STATIC(0x4400d0u,440);
}
B443cb2:L443cb2:{c.instructions+=1;NFSU2_TR(0x443cb2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B443cb5:L443cb5:{c.instructions+=5;NFSU2_TR(0x443cb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B443cb6:{NFSU2_TR(0x443cb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B443cb7:{NFSU2_TR(0x443cb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B443cb8:{NFSU2_TR(0x443cb8);
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
B443cbb:{NFSU2_TR(0x443cbb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B443cc0:L443cc0:{c.instructions+=6;NFSU2_TR(0x443cc0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443cc1:{NFSU2_TR(0x443cc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B443cc5:{NFSU2_TR(0x443cc5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B443cc7:{NFSU2_TR(0x443cc7);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B443cc9:{NFSU2_TR(0x443cc9);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B443ccb:{NFSU2_TR(0x443ccb);
if(r1(R+518)){{goto L443ce3;}}
}
B443ccd:L443ccd:{c.instructions+=2;NFSU2_TR(0x443ccd);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B443cce:{NFSU2_TR(0x443cce);
if(r1(R+518)){{goto L443cdb;}}
}
B443cd0:L443cd0:{c.instructions+=2;NFSU2_TR(0x443cd0);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B443cd1:{NFSU2_TR(0x443cd1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L443ce9;}}
}
B443cd3:L443cd3:{c.instructions+=3;NFSU2_TR(0x443cd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B443cd6:{NFSU2_TR(0x443cd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B443cd9:{NFSU2_TR(0x443cd9);
{goto L443ce9;}
}
B443cdb:L443cdb:{c.instructions+=3;NFSU2_TR(0x443cdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B443cde:{NFSU2_TR(0x443cde);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B443ce1:{NFSU2_TR(0x443ce1);
{goto L443ce9;}
}
B443ce3:L443ce3:{c.instructions+=2;NFSU2_TR(0x443ce3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B443ce6:{NFSU2_TR(0x443ce6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B443ce9:L443ce9:{c.instructions+=3;NFSU2_TR(0x443ce9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B443ceb:{NFSU2_TR(0x443ceb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B443ced:{NFSU2_TR(0x443ced);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L443cff;}}
}
B443cef:L443cef:{c.instructions+=1;NFSU2_TR(0x443cef);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B443cf3:L443cf3:{c.instructions+=2;NFSU2_TR(0x443cf3);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+10))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+10)));
w4(U+14,u32(u32(r4(R+24))-u32(r4(U+10))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B443cf5:{NFSU2_TR(0x443cf5);
if(r1(R+518)){{goto L443d01;}}
}
B443cf7:L443cf7:{c.instructions+=4;NFSU2_TR(0x443cf7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B443cf8:{NFSU2_TR(0x443cf8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B443cfb:{NFSU2_TR(0x443cfb);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B443cfd:{NFSU2_TR(0x443cfd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x443cf3u);}goto L443cf3;}}
}
B443cff:L443cff:{c.instructions+=1;NFSU2_TR(0x443cff);
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
B443d01:L443d01:{c.instructions+=2;NFSU2_TR(0x443d01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B443d02:{NFSU2_TR(0x443d02);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B443d10:L443d10:{c.instructions+=2;NFSU2_TR(0x443d10);
s4(0x828650,u32(0x0ull));
}
B443d1a:{NFSU2_TR(0x443d1a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B443d20:L443d20:{c.instructions+=7;NFSU2_TR(0x443d20);
{u32 ea_=u32(u32(7893160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443d26:{NFSU2_TR(0x443d26);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B443d2a:{NFSU2_TR(0x443d2a);
{u32 ea_=u32(u32(7893164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B443d30:{NFSU2_TR(0x443d30);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443d31:{NFSU2_TR(0x443d31);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B443d34:{NFSU2_TR(0x443d34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443d35:{NFSU2_TR(0x443d35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x443d3aull));
TAIL_STATIC(0x43e6d0u,43e);
}
B443d3a:L443d3a:{c.instructions+=4;NFSU2_TR(0x443d3a);
w4(R+0,u32(r2(R+0)));
}
B443d3d:{NFSU2_TR(0x443d3d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B443d40:{NFSU2_TR(0x443d40);
u8 U[7];
w1(R+512,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+523,u8(u32(r1(R+512))^u32(r1(U+6))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B443d42:{NFSU2_TR(0x443d42);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B443d50:L443d50:{c.instructions+=6;NFSU2_TR(0x443d50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443d51:{NFSU2_TR(0x443d51);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B443d53:{NFSU2_TR(0x443d53);
u8 U[6];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B443d58:{NFSU2_TR(0x443d58);
w2(R+24,shr<u16>(r2(R+24),u64(u32(0x1ull))));
}
B443d5b:{NFSU2_TR(0x443d5b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443d5c:{NFSU2_TR(0x443d5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x443d61ull));
TAIL_STATIC(0x43c2b0u,43c);
}
B443d61:L443d61:{c.instructions+=3;NFSU2_TR(0x443d61);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B443d65:{NFSU2_TR(0x443d65);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443d66:{NFSU2_TR(0x443d66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x443d6bull));
TAIL_STATIC(0x43c370u,43c);
}
B443d6b:L443d6b:{c.instructions+=6;NFSU2_TR(0x443d6b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B443d6f:{NFSU2_TR(0x443d6f);
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
B443d72:{NFSU2_TR(0x443d72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B443d73:{NFSU2_TR(0x443d73);
{u32 ea_=u32(u32(7893160u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B443d79:{NFSU2_TR(0x443d79);
{u32 ea_=u32(u32(7893164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B443d7f:{NFSU2_TR(0x443d7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B443d80:L443d80:{c.instructions+=8;NFSU2_TR(0x443d80);
{u32 ea_=u32(u32(7893160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443d86:{NFSU2_TR(0x443d86);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B443d8a:{NFSU2_TR(0x443d8a);
{u32 ea_=u32(u32(7893164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B443d90:{NFSU2_TR(0x443d90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443d91:{NFSU2_TR(0x443d91);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443d92:{NFSU2_TR(0x443d92);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B443d95:{NFSU2_TR(0x443d95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443d96:{NFSU2_TR(0x443d96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x443d9bull));
TAIL_STATIC(0x43e6d0u,43e);
}
B443d9b:L443d9b:{c.instructions+=11;NFSU2_TR(0x443d9b);
{u32 ea_=u32(u32(7893160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443da1:{NFSU2_TR(0x443da1);
{u32 ea_=u32(u32(7893164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B443da7:{NFSU2_TR(0x443da7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B443da9:{NFSU2_TR(0x443da9);
__builtin_memmove((R+24),(R+0),2);
}
B443dac:{NFSU2_TR(0x443dac);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B443db0:{NFSU2_TR(0x443db0);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443db4:{NFSU2_TR(0x443db4);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B443dba:{NFSU2_TR(0x443dba);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B443dbe:{NFSU2_TR(0x443dbe);
w4(R+24,shl<u32>(r4(R+24),u64(u32(0x1ull))));
}
B443dc0:{NFSU2_TR(0x443dc0);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B443dc3:{NFSU2_TR(0x443dc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x443dc8ull));
TAIL_STATIC(0x43e6d0u,43e);
}
B443dc8:L443dc8:{c.instructions+=10;NFSU2_TR(0x443dc8);
w4(R+8,u32(s32(s16(r2(R+24)))));
}
B443dcb:{NFSU2_TR(0x443dcb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B443dce:{NFSU2_TR(0x443dce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B443dcf:{NFSU2_TR(0x443dcf);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B443dd1:{NFSU2_TR(0x443dd1);
w4(R+4,u32(s32(s16(r2(R+0)))));
}
B443dd4:{NFSU2_TR(0x443dd4);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(R+4),r4(R+8)));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B443dd6:{NFSU2_TR(0x443dd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B443dda:{NFSU2_TR(0x443dda);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B443dde:{NFSU2_TR(0x443dde);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B443de4:{NFSU2_TR(0x443de4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B443df0:L443df0:{c.instructions+=41;NFSU2_TR(0x443df0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x94ull))));
}
B443df6:{NFSU2_TR(0x443df6);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443dfd:{NFSU2_TR(0x443dfd);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
s4(u32(r4(R+16)),r4(U+0));
}
B443e05:{NFSU2_TR(0x443e05);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B443e0b:{NFSU2_TR(0x443e0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f8facd6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B443e13:{NFSU2_TR(0x443e13);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x3fa14518ull));
s4(u32(r4(U+0)),r4(U+4));
}
B443e1b:{NFSU2_TR(0x443e1b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x3fb504f3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B443e23:{NFSU2_TR(0x443e23);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x3fcb2ff5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B443e2b:{NFSU2_TR(0x443e2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x3fe411f0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B443e33:{NFSU2_TR(0x443e33);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x40000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B443e3b:{NFSU2_TR(0x443e3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x400facd6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B443e43:{NFSU2_TR(0x443e43);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x40214518ull));
s4(u32(r4(U+0)),r4(U+4));
}
B443e4b:{NFSU2_TR(0x443e4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x403504f3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B443e53:{NFSU2_TR(0x443e53);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x404b2ff5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B443e5b:{NFSU2_TR(0x443e5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x406411f0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B443e63:{NFSU2_TR(0x443e63);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x40800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B443e6b:{NFSU2_TR(0x443e6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x408facd6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B443e73:{NFSU2_TR(0x443e73);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x40a14518ull));
s4(u32(r4(U+0)),r4(U+4));
}
B443e7b:{NFSU2_TR(0x443e7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x40b504f3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B443e83:{NFSU2_TR(0x443e83);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x40cb2ff5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B443e8b:{NFSU2_TR(0x443e8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x40e411f0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B443e93:{NFSU2_TR(0x443e93);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x41000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B443e9b:{NFSU2_TR(0x443e9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x410facd6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B443ea3:{NFSU2_TR(0x443ea3);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x41214518ull));
s4(u32(r4(U+0)),r4(U+4));
}
B443eab:{NFSU2_TR(0x443eab);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w4(U+4,u32(0x413504f3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B443eb3:{NFSU2_TR(0x443eb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(0x414b2ff5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B443ebb:{NFSU2_TR(0x443ebb);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
w4(U+4,u32(0x416411f0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B443ec3:{NFSU2_TR(0x443ec3);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
w4(U+4,u32(0x41800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B443ecb:{NFSU2_TR(0x443ecb);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(0x418facd6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B443ed3:{NFSU2_TR(0x443ed3);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
w4(U+4,u32(0x41a14518ull));
s4(u32(r4(U+0)),r4(U+4));
}
B443edb:{NFSU2_TR(0x443edb);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
w4(U+4,u32(0x41b504f3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B443ee3:{NFSU2_TR(0x443ee3);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
w4(U+4,u32(0x41cb2ff5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B443eeb:{NFSU2_TR(0x443eeb);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
w4(U+4,u32(0x41e411f0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B443ef3:{NFSU2_TR(0x443ef3);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
w4(U+4,u32(0x42000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B443efb:{NFSU2_TR(0x443efb);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
w4(U+4,u32(0x420facd6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B443f03:{NFSU2_TR(0x443f03);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
w4(U+4,u32(0x42214518ull));
s4(u32(r4(U+0)),r4(U+4));
}
B443f0e:{NFSU2_TR(0x443f0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
w4(U+4,u32(0x423504f3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B443f19:{NFSU2_TR(0x443f19);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
w4(U+4,u32(0x424b2ff5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B443f24:{NFSU2_TR(0x443f24);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
w4(U+4,u32(0x426411f0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B443f2f:{NFSU2_TR(0x443f2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
w4(U+4,u32(0x42800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B443f3a:{NFSU2_TR(0x443f3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x443f3full));
TAIL_STATIC(0x75bed4u,75b);
}
B443f3f:L443f3f:{c.instructions+=2;NFSU2_TR(0x443f3f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B443f41:{NFSU2_TR(0x443f41);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L443f50;}}
}
B443f43:L443f43:{c.instructions+=4;NFSU2_TR(0x443f43);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B443f45:{NFSU2_TR(0x443f45);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443f49:{NFSU2_TR(0x443f49);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x94ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x94ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x94ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B443f4f:{NFSU2_TR(0x443f4f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B443f50:L443f50:{c.instructions+=2;NFSU2_TR(0x443f50);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x24ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B443f53:{NFSU2_TR(0x443f53);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L443f5a;}}
}
B443f55:L443f55:{c.instructions+=1;NFSU2_TR(0x443f55);
w4(R+0,u32(0x24ull));
}
B443f5a:L443f5a:{c.instructions+=3;NFSU2_TR(0x443f5a);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443f5e:{NFSU2_TR(0x443f5e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x94ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x94ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x94ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B443f64:{NFSU2_TR(0x443f64);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B443f70:L443f70:{c.instructions+=13;NFSU2_TR(0x443f70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B443f74:{NFSU2_TR(0x443f74);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B443f78:{NFSU2_TR(0x443f78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B443f7a:{NFSU2_TR(0x443f7a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B443f7b:{NFSU2_TR(0x443f7b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B443f7f:{NFSU2_TR(0x443f7f);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443f81:{NFSU2_TR(0x443f81);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B443f85:{NFSU2_TR(0x443f85);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443f87:{NFSU2_TR(0x443f87);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B443f8b:{NFSU2_TR(0x443f8b);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B443f8d:{NFSU2_TR(0x443f8d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B443f8f:{NFSU2_TR(0x443f8f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B443f92:{NFSU2_TR(0x443f92);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L443f9a;}}
}
B443f94:L443f94:{c.instructions+=2;NFSU2_TR(0x443f94);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B443f96:{NFSU2_TR(0x443f96);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443f9a:L443f9a:{c.instructions+=5;NFSU2_TR(0x443f9a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443f9e:{NFSU2_TR(0x443f9e);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B443fa0:{NFSU2_TR(0x443fa0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B443fa2:{NFSU2_TR(0x443fa2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B443fa5:{NFSU2_TR(0x443fa5);
if(r1(R+514)){{goto L443fad;}}
}
B443fa7:L443fa7:{c.instructions+=2;NFSU2_TR(0x443fa7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B443fa9:{NFSU2_TR(0x443fa9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443fad:L443fad:{c.instructions+=9;NFSU2_TR(0x443fad);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443fb0:{NFSU2_TR(0x443fb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B443fb3:{NFSU2_TR(0x443fb3);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443fb6:{NFSU2_TR(0x443fb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B443fba:{NFSU2_TR(0x443fba);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B443fbe:{NFSU2_TR(0x443fbe);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B443fc0:{NFSU2_TR(0x443fc0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B443fc2:{NFSU2_TR(0x443fc2);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B443fc5:{NFSU2_TR(0x443fc5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L443fcd;}}
}
B443fc7:L443fc7:{c.instructions+=2;NFSU2_TR(0x443fc7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B443fc9:{NFSU2_TR(0x443fc9);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443fcd:L443fcd:{c.instructions+=5;NFSU2_TR(0x443fcd);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443fd1:{NFSU2_TR(0x443fd1);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B443fd3:{NFSU2_TR(0x443fd3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B443fd5:{NFSU2_TR(0x443fd5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B443fd8:{NFSU2_TR(0x443fd8);
if(r1(R+514)){{goto L443fe0;}}
}
B443fda:L443fda:{c.instructions+=2;NFSU2_TR(0x443fda);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B443fdc:{NFSU2_TR(0x443fdc);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443fe0:L443fe0:{c.instructions+=10;NFSU2_TR(0x443fe0);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443fe3:{NFSU2_TR(0x443fe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B443fe6:{NFSU2_TR(0x443fe6);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B443fe9:{NFSU2_TR(0x443fe9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B443fed:{NFSU2_TR(0x443fed);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B443ff1:{NFSU2_TR(0x443ff1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B443ff2:{NFSU2_TR(0x443ff2);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B443ff4:{NFSU2_TR(0x443ff4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B443ff6:{NFSU2_TR(0x443ff6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B443ff9:{NFSU2_TR(0x443ff9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x444001u,444);}
}
B443ffb:L443ffb:{c.instructions+=2;NFSU2_TR(0x443ffb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B443ffd:{NFSU2_TR(0x443ffd);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
TAIL_STATIC(0x444001u,444);
}
XIT:NFSU2_TR_EXIT(0x443,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
