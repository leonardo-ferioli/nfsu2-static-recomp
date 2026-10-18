#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_583(u8* __restrict R,Cpu& c);
u32 body_598(u8* __restrict R,Cpu& c);
u32 body_74a(u8* __restrict R,Cpu& c);
u32 body_74b(u8* __restrict R,Cpu& c);
u32 body_757(u8* __restrict R,Cpu& c);
u32 body_759(u8* __restrict R,Cpu& c);
u32 body_75a(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x758,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x758,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_758(u8* __restrict R,Cpu& c);
u32 page_758(Cpu& c){return body_758(c.regs.data(),c);}
__attribute__((noinline)) u32 body_758(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x758002:goto L758002;
case 0x758005:goto L758005;
case 0x758007:goto L758007;
case 0x758009:c.instructions+=1;goto B758009;
case 0x75800c:goto L75800c;
case 0x75800e:goto L75800e;
case 0x758012:c.instructions+=3;goto B758012;
case 0x758014:c.instructions+=2;goto B758014;
case 0x758015:c.instructions+=1;goto B758015;
case 0x758017:goto L758017;
case 0x75801a:c.instructions+=1;goto B75801a;
case 0x75801c:goto L75801c;
case 0x75801e:c.instructions+=2;goto B75801e;
case 0x75801f:c.instructions+=1;goto B75801f;
case 0x758020:goto L758020;
case 0x758024:c.instructions+=9;goto B758024;
case 0x758028:c.instructions+=8;goto B758028;
case 0x75802c:c.instructions+=7;goto B75802c;
case 0x75802d:c.instructions+=6;goto B75802d;
case 0x758031:c.instructions+=5;goto B758031;
case 0x758032:c.instructions+=4;goto B758032;
case 0x758033:c.instructions+=3;goto B758033;
case 0x758034:c.instructions+=2;goto B758034;
case 0x758035:c.instructions+=1;goto B758035;
case 0x75803a:goto L75803a;
case 0x75803c:c.instructions+=3;goto B75803c;
case 0x75803f:c.instructions+=2;goto B75803f;
case 0x758041:c.instructions+=1;goto B758041;
case 0x758043:goto L758043;
case 0x758049:c.instructions+=5;goto B758049;
case 0x75804f:c.instructions+=4;goto B75804f;
case 0x758051:c.instructions+=3;goto B758051;
case 0x758052:c.instructions+=2;goto B758052;
case 0x758058:c.instructions+=1;goto B758058;
case 0x75805e:goto L75805e;
case 0x758060:c.instructions+=2;goto B758060;
case 0x758061:c.instructions+=1;goto B758061;
case 0x758070:goto L758070;
case 0x758071:c.instructions+=4;goto B758071;
case 0x758072:c.instructions+=3;goto B758072;
case 0x758073:c.instructions+=2;goto B758073;
case 0x758078:c.instructions+=1;goto B758078;
case 0x75807d:goto L75807d;
case 0x75807f:c.instructions+=5;goto B75807f;
case 0x758081:c.instructions+=4;goto B758081;
case 0x758084:c.instructions+=3;goto B758084;
case 0x758086:c.instructions+=2;goto B758086;
case 0x758088:c.instructions+=1;goto B758088;
case 0x75808e:goto L75808e;
case 0x75808f:c.instructions+=2;goto B75808f;
case 0x758094:c.instructions+=1;goto B758094;
case 0x758096:goto L758096;
case 0x758098:goto L758098;
case 0x75809e:c.instructions+=23;goto B75809e;
case 0x7580a5:c.instructions+=22;goto B7580a5;
case 0x7580ac:c.instructions+=21;goto B7580ac;
case 0x7580b3:c.instructions+=20;goto B7580b3;
case 0x7580ba:c.instructions+=19;goto B7580ba;
case 0x7580c1:c.instructions+=18;goto B7580c1;
case 0x7580c8:c.instructions+=17;goto B7580c8;
case 0x7580cf:c.instructions+=16;goto B7580cf;
case 0x7580d6:c.instructions+=15;goto B7580d6;
case 0x7580dd:c.instructions+=14;goto B7580dd;
case 0x7580e4:c.instructions+=13;goto B7580e4;
case 0x7580eb:c.instructions+=12;goto B7580eb;
case 0x7580f2:c.instructions+=11;goto B7580f2;
case 0x7580f9:c.instructions+=10;goto B7580f9;
case 0x7580ff:c.instructions+=9;goto B7580ff;
case 0x758102:c.instructions+=8;goto B758102;
case 0x758104:c.instructions+=7;goto B758104;
case 0x75810b:c.instructions+=6;goto B75810b;
case 0x75810f:c.instructions+=5;goto B75810f;
case 0x758115:c.instructions+=4;goto B758115;
case 0x75811b:c.instructions+=3;goto B75811b;
case 0x75811c:c.instructions+=2;goto B75811c;
case 0x75811f:c.instructions+=1;goto B75811f;
case 0x758125:goto L758125;
case 0x758129:c.instructions+=7;goto B758129;
case 0x75812c:c.instructions+=6;goto B75812c;
case 0x75812e:c.instructions+=5;goto B75812e;
case 0x758133:c.instructions+=4;goto B758133;
case 0x758134:c.instructions+=3;goto B758134;
case 0x75813a:c.instructions+=2;goto B75813a;
case 0x758140:c.instructions+=1;goto B758140;
case 0x758145:goto L758145;
case 0x75814b:c.instructions+=5;goto B75814b;
case 0x758150:c.instructions+=4;goto B758150;
case 0x758151:c.instructions+=3;goto B758151;
case 0x758157:c.instructions+=2;goto B758157;
case 0x75815d:c.instructions+=1;goto B75815d;
case 0x758162:goto L758162;
case 0x758165:c.instructions+=8;goto B758165;
case 0x75816b:c.instructions+=7;goto B75816b;
case 0x758171:c.instructions+=6;goto B758171;
case 0x758177:c.instructions+=5;goto B758177;
case 0x75817d:c.instructions+=4;goto B75817d;
case 0x758187:c.instructions+=3;goto B758187;
case 0x758191:c.instructions+=2;goto B758191;
case 0x758197:c.instructions+=1;goto B758197;
case 0x75819d:goto L75819d;
case 0x7581a3:c.instructions+=7;goto B7581a3;
case 0x7581a4:c.instructions+=6;goto B7581a4;
case 0x7581a6:c.instructions+=5;goto B7581a6;
case 0x7581a8:c.instructions+=4;goto B7581a8;
case 0x7581a9:c.instructions+=3;goto B7581a9;
case 0x7581af:c.instructions+=2;goto B7581af;
case 0x7581b6:c.instructions+=1;goto B7581b6;
case 0x7581b8:goto L7581b8;
case 0x7581b9:c.instructions+=5;goto B7581b9;
case 0x7581bb:c.instructions+=4;goto B7581bb;
case 0x7581bd:c.instructions+=3;goto B7581bd;
case 0x7581be:c.instructions+=2;goto B7581be;
case 0x7581c4:c.instructions+=1;goto B7581c4;
case 0x7581c6:goto L7581c6;
case 0x7581c7:c.instructions+=5;goto B7581c7;
case 0x7581c9:c.instructions+=4;goto B7581c9;
case 0x7581cb:c.instructions+=3;goto B7581cb;
case 0x7581cc:c.instructions+=2;goto B7581cc;
case 0x7581d2:c.instructions+=1;goto B7581d2;
case 0x7581d4:goto L7581d4;
case 0x7581da:c.instructions+=8;goto B7581da;
case 0x7581de:c.instructions+=7;goto B7581de;
case 0x7581df:c.instructions+=6;goto B7581df;
case 0x7581e0:c.instructions+=5;goto B7581e0;
case 0x7581e1:c.instructions+=4;goto B7581e1;
case 0x7581e6:c.instructions+=3;goto B7581e6;
case 0x7581e7:c.instructions+=2;goto B7581e7;
case 0x7581e8:c.instructions+=1;goto B7581e8;
case 0x7581ee:goto L7581ee;
case 0x7581f0:c.instructions+=2;goto B7581f0;
case 0x7581f2:c.instructions+=1;goto B7581f2;
case 0x7581f4:goto L7581f4;
case 0x7581f5:c.instructions+=5;goto B7581f5;
case 0x7581f6:c.instructions+=4;goto B7581f6;
case 0x7581f8:c.instructions+=3;goto B7581f8;
case 0x7581f9:c.instructions+=2;goto B7581f9;
case 0x7581fa:c.instructions+=1;goto B7581fa;
case 0x7581fb:goto L7581fb;
case 0x7581fd:c.instructions+=2;goto B7581fd;
case 0x7581fe:c.instructions+=1;goto B7581fe;
case 0x758204:goto L758204;
case 0x758205:c.instructions+=1;goto B758205;
case 0x75820b:goto L75820b;
case 0x75820d:c.instructions+=1;goto B75820d;
case 0x75820e:goto L75820e;
case 0x75820f:c.instructions+=3;goto B75820f;
case 0x758210:c.instructions+=2;goto B758210;
case 0x758211:c.instructions+=1;goto B758211;
case 0x758220:goto L758220;
case 0x758221:c.instructions+=3;goto B758221;
case 0x758226:c.instructions+=2;goto B758226;
case 0x758228:c.instructions+=1;goto B758228;
case 0x75822a:goto L75822a;
case 0x75822f:goto L75822f;
case 0x758234:goto L758234;
case 0x758239:goto L758239;
case 0x75823f:c.instructions+=8;goto B75823f;
case 0x758241:c.instructions+=7;goto B758241;
case 0x758247:c.instructions+=6;goto B758247;
case 0x758249:c.instructions+=5;goto B758249;
case 0x75824f:c.instructions+=4;goto B75824f;
case 0x758255:c.instructions+=3;goto B758255;
case 0x758258:c.instructions+=2;goto B758258;
case 0x758259:c.instructions+=1;goto B758259;
case 0x758260:goto L758260;
case 0x758264:c.instructions+=4;goto B758264;
case 0x758265:c.instructions+=3;goto B758265;
case 0x758268:c.instructions+=2;goto B758268;
case 0x75826c:c.instructions+=1;goto B75826c;
case 0x75826e:goto L75826e;
case 0x758272:c.instructions+=3;goto B758272;
case 0x758274:c.instructions+=2;goto B758274;
case 0x75827a:c.instructions+=1;goto B75827a;
case 0x75827c:goto L75827c;
case 0x75827d:c.instructions+=6;goto B75827d;
case 0x758281:c.instructions+=5;goto B758281;
case 0x758283:c.instructions+=4;goto B758283;
case 0x758285:c.instructions+=3;goto B758285;
case 0x75828a:c.instructions+=2;goto B75828a;
case 0x75828b:c.instructions+=1;goto B75828b;
case 0x758290:goto L758290;
case 0x758294:c.instructions+=4;goto B758294;
case 0x758295:c.instructions+=3;goto B758295;
case 0x758296:c.instructions+=2;goto B758296;
case 0x758297:c.instructions+=1;goto B758297;
case 0x75829c:goto L75829c;
case 0x75829f:c.instructions+=1;goto B75829f;
case 0x7582a0:goto L7582a0;
case 0x7582a1:c.instructions+=2;goto B7582a1;
case 0x7582a2:c.instructions+=1;goto B7582a2;
case 0x7582b0:goto L7582b0;
case 0x7582b1:c.instructions+=6;goto B7582b1;
case 0x7582b2:c.instructions+=5;goto B7582b2;
case 0x7582b6:c.instructions+=4;goto B7582b6;
case 0x7582b8:c.instructions+=3;goto B7582b8;
case 0x7582ba:c.instructions+=2;goto B7582ba;
case 0x7582bc:c.instructions+=1;goto B7582bc;
case 0x7582be:goto L7582be;
case 0x7582bf:c.instructions+=1;goto B7582bf;
case 0x7582c4:goto L7582c4;
case 0x7582c7:c.instructions+=1;goto B7582c7;
case 0x7582c9:goto L7582c9;
case 0x7582cc:c.instructions+=2;goto B7582cc;
case 0x7582ce:c.instructions+=1;goto B7582ce;
case 0x7582d0:goto L7582d0;
case 0x7582d1:c.instructions+=1;goto B7582d1;
case 0x7582d4:goto L7582d4;
case 0x7582d7:c.instructions+=1;goto B7582d7;
case 0x7582da:goto L7582da;
case 0x7582db:c.instructions+=5;goto B7582db;
case 0x7582df:c.instructions+=4;goto B7582df;
case 0x7582e1:c.instructions+=3;goto B7582e1;
case 0x7582e7:c.instructions+=2;goto B7582e7;
case 0x7582f1:c.instructions+=1;goto B7582f1;
case 0x7582f3:goto L7582f3;
case 0x7582f9:c.instructions+=2;goto B7582f9;
case 0x7582fb:c.instructions+=1;goto B7582fb;
case 0x7582fd:goto L7582fd;
case 0x7582fe:c.instructions+=1;goto B7582fe;
case 0x758303:goto L758303;
case 0x758306:c.instructions+=2;goto B758306;
case 0x75830c:c.instructions+=1;goto B75830c;
case 0x75830e:goto L75830e;
case 0x758314:c.instructions+=1;goto B758314;
case 0x758316:goto L758316;
case 0x758317:c.instructions+=2;goto B758317;
case 0x75831c:c.instructions+=1;goto B75831c;
case 0x758321:goto L758321;
case 0x758323:c.instructions+=4;goto B758323;
case 0x758326:c.instructions+=3;goto B758326;
case 0x758328:c.instructions+=2;goto B758328;
case 0x75832e:c.instructions+=1;goto B75832e;
case 0x758330:goto L758330;
case 0x758332:c.instructions+=1;goto B758332;
case 0x758337:goto L758337;
case 0x758339:goto L758339;
case 0x75833f:c.instructions+=5;goto B75833f;
case 0x758344:c.instructions+=4;goto B758344;
case 0x758345:c.instructions+=3;goto B758345;
case 0x758346:c.instructions+=2;goto B758346;
case 0x758347:c.instructions+=1;goto B758347;
case 0x75834c:goto L75834c;
case 0x75834f:goto L75834f;
case 0x758350:goto L758350;
case 0x758356:c.instructions+=2;goto B758356;
case 0x758358:c.instructions+=1;goto B758358;
case 0x75835a:goto L75835a;
case 0x758364:c.instructions+=2;goto B758364;
case 0x758366:c.instructions+=1;goto B758366;
case 0x758370:goto L758370;
case 0x758372:c.instructions+=6;goto B758372;
case 0x758375:c.instructions+=5;goto B758375;
case 0x75837c:c.instructions+=4;goto B75837c;
case 0x758382:c.instructions+=3;goto B758382;
case 0x758383:c.instructions+=2;goto B758383;
case 0x758385:c.instructions+=1;goto B758385;
case 0x758387:goto L758387;
case 0x758389:c.instructions+=9;goto B758389;
case 0x75838c:c.instructions+=8;goto B75838c;
case 0x758392:c.instructions+=7;goto B758392;
case 0x758398:c.instructions+=6;goto B758398;
case 0x75839e:c.instructions+=5;goto B75839e;
case 0x7583a4:c.instructions+=4;goto B7583a4;
case 0x7583aa:c.instructions+=3;goto B7583aa;
case 0x7583b0:c.instructions+=2;goto B7583b0;
case 0x7583b6:c.instructions+=1;goto B7583b6;
case 0x7583bc:goto L7583bc;
case 0x7583be:c.instructions+=2;goto B7583be;
case 0x7583bf:c.instructions+=1;goto B7583bf;
case 0x7583c1:goto L7583c1;
case 0x7583c3:c.instructions+=1;goto B7583c3;
case 0x7583c5:goto L7583c5;
case 0x7583c6:c.instructions+=3;goto B7583c6;
case 0x7583cb:c.instructions+=2;goto B7583cb;
case 0x7583cc:c.instructions+=1;goto B7583cc;
case 0x7583cd:goto L7583cd;
case 0x7583ce:c.instructions+=3;goto B7583ce;
case 0x7583d0:c.instructions+=2;goto B7583d0;
case 0x7583d1:c.instructions+=1;goto B7583d1;
case 0x7583e0:goto L7583e0;
case 0x7583e3:c.instructions+=8;goto B7583e3;
case 0x7583e8:c.instructions+=7;goto B7583e8;
case 0x7583ec:c.instructions+=6;goto B7583ec;
case 0x7583ef:c.instructions+=5;goto B7583ef;
case 0x7583f3:c.instructions+=4;goto B7583f3;
case 0x7583f7:c.instructions+=3;goto B7583f7;
case 0x7583f8:c.instructions+=2;goto B7583f8;
case 0x7583fe:c.instructions+=1;goto B7583fe;
case 0x758404:goto L758404;
case 0x75840a:c.instructions+=1;goto B75840a;
case 0x758410:goto L758410;
case 0x758416:c.instructions+=6;goto B758416;
case 0x758418:c.instructions+=5;goto B758418;
case 0x758419:c.instructions+=4;goto B758419;
case 0x75841e:c.instructions+=3;goto B75841e;
case 0x758420:c.instructions+=2;goto B758420;
case 0x758424:c.instructions+=1;goto B758424;
case 0x758426:goto L758426;
case 0x75842b:goto L75842b;
case 0x75842c:c.instructions+=7;goto B75842c;
case 0x758430:c.instructions+=6;goto B758430;
case 0x758433:c.instructions+=5;goto B758433;
case 0x758434:c.instructions+=4;goto B758434;
case 0x758437:c.instructions+=3;goto B758437;
case 0x75843b:c.instructions+=2;goto B75843b;
case 0x75843d:c.instructions+=1;goto B75843d;
case 0x758440:goto L758440;
case 0x758442:goto L758442;
case 0x758444:c.instructions+=2;goto B758444;
case 0x75844b:c.instructions+=1;goto B75844b;
case 0x75844e:goto L75844e;
case 0x758450:goto L758450;
case 0x758456:c.instructions+=4;goto B758456;
case 0x75845a:c.instructions+=3;goto B75845a;
case 0x75845c:c.instructions+=2;goto B75845c;
case 0x75845e:c.instructions+=1;goto B75845e;
case 0x758460:goto L758460;
case 0x758461:c.instructions+=8;goto B758461;
case 0x758463:c.instructions+=7;goto B758463;
case 0x758465:c.instructions+=6;goto B758465;
case 0x758467:c.instructions+=5;goto B758467;
case 0x758468:c.instructions+=4;goto B758468;
case 0x75846a:c.instructions+=3;goto B75846a;
case 0x758471:c.instructions+=2;goto B758471;
case 0x758475:c.instructions+=1;goto B758475;
case 0x758477:goto L758477;
case 0x758482:goto L758482;
case 0x758489:c.instructions+=4;goto B758489;
case 0x75848b:c.instructions+=3;goto B75848b;
case 0x75848e:c.instructions+=2;goto B75848e;
case 0x758490:c.instructions+=1;goto B758490;
case 0x758494:goto L758494;
case 0x758496:goto L758496;
case 0x758498:c.instructions+=1;goto B758498;
case 0x75849b:goto L75849b;
case 0x75849d:goto L75849d;
case 0x7584a3:c.instructions+=4;goto B7584a3;
case 0x7584a5:c.instructions+=3;goto B7584a5;
case 0x7584a7:c.instructions+=2;goto B7584a7;
case 0x7584a9:c.instructions+=1;goto B7584a9;
case 0x7584af:goto L7584af;
case 0x7584b5:c.instructions+=10;goto B7584b5;
case 0x7584b9:c.instructions+=9;goto B7584b9;
case 0x7584bf:c.instructions+=8;goto B7584bf;
case 0x7584c3:c.instructions+=7;goto B7584c3;
case 0x7584c9:c.instructions+=6;goto B7584c9;
case 0x7584cd:c.instructions+=5;goto B7584cd;
case 0x7584d3:c.instructions+=4;goto B7584d3;
case 0x7584d7:c.instructions+=3;goto B7584d7;
case 0x7584d8:c.instructions+=2;goto B7584d8;
case 0x7584dc:c.instructions+=1;goto B7584dc;
case 0x7584e1:goto L7584e1;
case 0x7584e7:c.instructions+=6;goto B7584e7;
case 0x7584e8:c.instructions+=5;goto B7584e8;
case 0x7584ee:c.instructions+=4;goto B7584ee;
case 0x7584ef:c.instructions+=3;goto B7584ef;
case 0x7584f3:c.instructions+=2;goto B7584f3;
case 0x7584f4:c.instructions+=1;goto B7584f4;
case 0x7584f9:goto L7584f9;
case 0x7584fd:c.instructions+=9;goto B7584fd;
case 0x758501:c.instructions+=8;goto B758501;
case 0x758503:c.instructions+=7;goto B758503;
case 0x758505:c.instructions+=6;goto B758505;
case 0x758506:c.instructions+=5;goto B758506;
case 0x758509:c.instructions+=4;goto B758509;
case 0x75850a:c.instructions+=3;goto B75850a;
case 0x75850e:c.instructions+=2;goto B75850e;
case 0x75850f:c.instructions+=1;goto B75850f;
case 0x758514:goto L758514;
case 0x758516:c.instructions+=5;goto B758516;
case 0x75851a:c.instructions+=4;goto B75851a;
case 0x75851b:c.instructions+=3;goto B75851b;
case 0x75851f:c.instructions+=2;goto B75851f;
case 0x758520:c.instructions+=1;goto B758520;
case 0x758525:goto L758525;
case 0x758527:c.instructions+=5;goto B758527;
case 0x75852a:c.instructions+=4;goto B75852a;
case 0x75852b:c.instructions+=3;goto B75852b;
case 0x75852f:c.instructions+=2;goto B75852f;
case 0x758530:c.instructions+=1;goto B758530;
case 0x758535:goto L758535;
case 0x75853c:c.instructions+=2;goto B75853c;
case 0x75853f:c.instructions+=1;goto B75853f;
case 0x758541:goto L758541;
case 0x758547:c.instructions+=5;goto B758547;
case 0x758548:c.instructions+=4;goto B758548;
case 0x75854a:c.instructions+=3;goto B75854a;
case 0x75854d:c.instructions+=2;goto B75854d;
case 0x75854e:c.instructions+=1;goto B75854e;
case 0x758550:goto L758550;
case 0x758551:c.instructions+=5;goto B758551;
case 0x758554:c.instructions+=4;goto B758554;
case 0x758555:c.instructions+=3;goto B758555;
case 0x75855b:c.instructions+=2;goto B75855b;
case 0x75855c:c.instructions+=1;goto B75855c;
case 0x758561:goto L758561;
case 0x758565:c.instructions+=2;goto B758565;
case 0x75856c:c.instructions+=1;goto B75856c;
case 0x75856f:goto L75856f;
case 0x758571:c.instructions+=1;goto B758571;
case 0x758573:goto L758573;
case 0x75857b:c.instructions+=2;goto B75857b;
case 0x75857f:c.instructions+=1;goto B75857f;
case 0x758582:goto L758582;
case 0x758583:c.instructions+=7;goto B758583;
case 0x758586:c.instructions+=6;goto B758586;
case 0x75858a:c.instructions+=5;goto B75858a;
case 0x75858b:c.instructions+=4;goto B75858b;
case 0x75858e:c.instructions+=3;goto B75858e;
case 0x758590:c.instructions+=2;goto B758590;
case 0x758594:c.instructions+=1;goto B758594;
case 0x758596:goto L758596;
case 0x758598:c.instructions+=1;goto B758598;
case 0x75859c:goto L75859c;
case 0x7585a2:c.instructions+=9;goto B7585a2;
case 0x7585a5:c.instructions+=8;goto B7585a5;
case 0x7585a6:c.instructions+=7;goto B7585a6;
case 0x7585ac:c.instructions+=6;goto B7585ac;
case 0x7585ad:c.instructions+=5;goto B7585ad;
case 0x7585b0:c.instructions+=4;goto B7585b0;
case 0x7585b2:c.instructions+=3;goto B7585b2;
case 0x7585b3:c.instructions+=2;goto B7585b3;
case 0x7585b7:c.instructions+=1;goto B7585b7;
case 0x7585bc:goto L7585bc;
case 0x7585bf:c.instructions+=1;goto B7585bf;
case 0x7585c0:goto L7585c0;
case 0x7585c4:c.instructions+=3;goto B7585c4;
case 0x7585c7:c.instructions+=2;goto B7585c7;
case 0x7585c8:c.instructions+=1;goto B7585c8;
case 0x7585cd:goto L7585cd;
case 0x7585d0:c.instructions+=1;goto B7585d0;
case 0x7585e0:goto L7585e0;
case 0x7585e3:c.instructions+=21;goto B7585e3;
case 0x7585e8:c.instructions+=20;goto B7585e8;
case 0x7585ec:c.instructions+=19;goto B7585ec;
case 0x7585f0:c.instructions+=18;goto B7585f0;
case 0x7585f1:c.instructions+=17;goto B7585f1;
case 0x7585f7:c.instructions+=16;goto B7585f7;
case 0x7585fd:c.instructions+=15;goto B7585fd;
case 0x7585fe:c.instructions+=14;goto B7585fe;
case 0x7585ff:c.instructions+=13;goto B7585ff;
case 0x758605:c.instructions+=12;goto B758605;
case 0x758607:c.instructions+=11;goto B758607;
case 0x758609:c.instructions+=10;goto B758609;
case 0x75860f:c.instructions+=9;goto B75860f;
case 0x758611:c.instructions+=8;goto B758611;
case 0x758614:c.instructions+=7;goto B758614;
case 0x758616:c.instructions+=6;goto B758616;
case 0x758618:c.instructions+=5;goto B758618;
case 0x75861a:c.instructions+=4;goto B75861a;
case 0x758621:c.instructions+=3;goto B758621;
case 0x758627:c.instructions+=2;goto B758627;
case 0x758629:c.instructions+=1;goto B758629;
case 0x75862f:goto L75862f;
case 0x758630:c.instructions+=5;goto B758630;
case 0x758631:c.instructions+=4;goto B758631;
case 0x758637:c.instructions+=3;goto B758637;
case 0x758638:c.instructions+=2;goto B758638;
case 0x758639:c.instructions+=1;goto B758639;
case 0x75863e:goto L75863e;
case 0x758644:c.instructions+=11;goto B758644;
case 0x75864b:c.instructions+=10;goto B75864b;
case 0x758651:c.instructions+=9;goto B758651;
case 0x758658:c.instructions+=8;goto B758658;
case 0x75865e:c.instructions+=7;goto B75865e;
case 0x758661:c.instructions+=6;goto B758661;
case 0x758668:c.instructions+=5;goto B758668;
case 0x75866e:c.instructions+=4;goto B75866e;
case 0x758672:c.instructions+=3;goto B758672;
case 0x758673:c.instructions+=2;goto B758673;
case 0x75867a:c.instructions+=1;goto B75867a;
case 0x75867f:goto L75867f;
case 0x758685:c.instructions+=6;goto B758685;
case 0x758686:c.instructions+=5;goto B758686;
case 0x75868c:c.instructions+=4;goto B75868c;
case 0x75868d:c.instructions+=3;goto B75868d;
case 0x758691:c.instructions+=2;goto B758691;
case 0x758692:c.instructions+=1;goto B758692;
case 0x758697:goto L758697;
case 0x75869a:c.instructions+=7;goto B75869a;
case 0x75869d:c.instructions+=6;goto B75869d;
case 0x75869e:c.instructions+=5;goto B75869e;
case 0x75869f:c.instructions+=4;goto B75869f;
case 0x7586a3:c.instructions+=3;goto B7586a3;
case 0x7586a4:c.instructions+=2;goto B7586a4;
case 0x7586a8:c.instructions+=1;goto B7586a8;
case 0x7586ad:goto L7586ad;
case 0x7586af:c.instructions+=5;goto B7586af;
case 0x7586b6:c.instructions+=4;goto B7586b6;
case 0x7586b7:c.instructions+=3;goto B7586b7;
case 0x7586bb:c.instructions+=2;goto B7586bb;
case 0x7586bc:c.instructions+=1;goto B7586bc;
case 0x7586c1:goto L7586c1;
case 0x7586c3:c.instructions+=5;goto B7586c3;
case 0x7586c7:c.instructions+=4;goto B7586c7;
case 0x7586c8:c.instructions+=3;goto B7586c8;
case 0x7586cc:c.instructions+=2;goto B7586cc;
case 0x7586cd:c.instructions+=1;goto B7586cd;
case 0x7586d2:goto L7586d2;
case 0x7586d5:c.instructions+=3;goto B7586d5;
case 0x7586da:c.instructions+=2;goto B7586da;
case 0x7586de:c.instructions+=1;goto B7586de;
case 0x7586e0:goto L7586e0;
case 0x7586e2:goto L7586e2;
case 0x7586e3:c.instructions+=1;goto B7586e3;
case 0x7586e5:goto L7586e5;
case 0x7586e7:c.instructions+=1;goto B7586e7;
case 0x7586e9:goto L7586e9;
case 0x7586ed:c.instructions+=2;goto B7586ed;
case 0x7586f3:c.instructions+=1;goto B7586f3;
case 0x7586f9:goto L7586f9;
case 0x7586ff:c.instructions+=8;goto B7586ff;
case 0x758703:c.instructions+=7;goto B758703;
case 0x758704:c.instructions+=6;goto B758704;
case 0x75870a:c.instructions+=5;goto B75870a;
case 0x75870c:c.instructions+=4;goto B75870c;
case 0x75870d:c.instructions+=3;goto B75870d;
case 0x75870e:c.instructions+=2;goto B75870e;
case 0x75870f:c.instructions+=1;goto B75870f;
case 0x758714:goto L758714;
case 0x758717:c.instructions+=1;goto B758717;
case 0x758720:goto L758720;
case 0x758723:c.instructions+=5;goto B758723;
case 0x758728:c.instructions+=4;goto B758728;
case 0x75872c:c.instructions+=3;goto B75872c;
case 0x75872f:c.instructions+=2;goto B75872f;
case 0x758730:c.instructions+=1;goto B758730;
case 0x758735:goto L758735;
case 0x758739:c.instructions+=6;goto B758739;
case 0x75873d:c.instructions+=5;goto B75873d;
case 0x75873e:c.instructions+=4;goto B75873e;
case 0x75873f:c.instructions+=3;goto B75873f;
case 0x758743:c.instructions+=2;goto B758743;
case 0x758744:c.instructions+=1;goto B758744;
case 0x758749:goto L758749;
case 0x75874d:c.instructions+=5;goto B75874d;
case 0x75874f:c.instructions+=4;goto B75874f;
case 0x758750:c.instructions+=3;goto B758750;
case 0x758754:c.instructions+=2;goto B758754;
case 0x758755:c.instructions+=1;goto B758755;
case 0x75875a:goto L75875a;
case 0x75875e:c.instructions+=1;goto B75875e;
case 0x758763:goto L758763;
case 0x758766:c.instructions+=1;goto B758766;
case 0x758770:goto L758770;
case 0x758773:c.instructions+=5;goto B758773;
case 0x758778:c.instructions+=4;goto B758778;
case 0x75877c:c.instructions+=3;goto B75877c;
case 0x75877f:c.instructions+=2;goto B75877f;
case 0x758780:c.instructions+=1;goto B758780;
case 0x758785:goto L758785;
case 0x758789:c.instructions+=6;goto B758789;
case 0x75878d:c.instructions+=5;goto B75878d;
case 0x75878e:c.instructions+=4;goto B75878e;
case 0x75878f:c.instructions+=3;goto B75878f;
case 0x758793:c.instructions+=2;goto B758793;
case 0x758794:c.instructions+=1;goto B758794;
case 0x758799:goto L758799;
case 0x75879d:c.instructions+=5;goto B75879d;
case 0x75879f:c.instructions+=4;goto B75879f;
case 0x7587a0:c.instructions+=3;goto B7587a0;
case 0x7587a4:c.instructions+=2;goto B7587a4;
case 0x7587a5:c.instructions+=1;goto B7587a5;
case 0x7587aa:goto L7587aa;
case 0x7587ae:c.instructions+=1;goto B7587ae;
case 0x7587b3:goto L7587b3;
case 0x7587b6:c.instructions+=1;goto B7587b6;
case 0x7587c0:goto L7587c0;
case 0x7587c6:c.instructions+=17;goto B7587c6;
case 0x7587cb:c.instructions+=16;goto B7587cb;
case 0x7587cc:c.instructions+=15;goto B7587cc;
case 0x7587cd:c.instructions+=14;goto B7587cd;
case 0x7587d4:c.instructions+=13;goto B7587d4;
case 0x7587db:c.instructions+=12;goto B7587db;
case 0x7587dd:c.instructions+=11;goto B7587dd;
case 0x7587df:c.instructions+=10;goto B7587df;
case 0x7587e2:c.instructions+=9;goto B7587e2;
case 0x7587e3:c.instructions+=8;goto B7587e3;
case 0x7587e5:c.instructions+=7;goto B7587e5;
case 0x7587e8:c.instructions+=6;goto B7587e8;
case 0x7587eb:c.instructions+=5;goto B7587eb;
case 0x7587ec:c.instructions+=4;goto B7587ec;
case 0x7587ed:c.instructions+=3;goto B7587ed;
case 0x7587f1:c.instructions+=2;goto B7587f1;
case 0x7587f2:c.instructions+=1;goto B7587f2;
case 0x7587f7:goto L7587f7;
case 0x7587fe:c.instructions+=5;goto B7587fe;
case 0x7587ff:c.instructions+=4;goto B7587ff;
case 0x758800:c.instructions+=3;goto B758800;
case 0x758804:c.instructions+=2;goto B758804;
case 0x758805:c.instructions+=1;goto B758805;
case 0x75880a:goto L75880a;
case 0x75880e:c.instructions+=2;goto B75880e;
case 0x75880f:c.instructions+=1;goto B75880f;
case 0x758814:goto L758814;
case 0x758817:c.instructions+=6;goto B758817;
case 0x758819:c.instructions+=5;goto B758819;
case 0x75881b:c.instructions+=4;goto B75881b;
case 0x758822:c.instructions+=3;goto B758822;
case 0x758824:c.instructions+=2;goto B758824;
case 0x758827:c.instructions+=1;goto B758827;
case 0x75882b:goto L75882b;
case 0x75882d:goto L75882d;
case 0x75882f:c.instructions+=2;goto B75882f;
case 0x758832:c.instructions+=1;goto B758832;
case 0x758835:goto L758835;
case 0x758837:goto L758837;
case 0x75883e:c.instructions+=3;goto B75883e;
case 0x75883f:c.instructions+=2;goto B75883f;
case 0x758840:c.instructions+=1;goto B758840;
case 0x758845:goto L758845;
case 0x75884b:c.instructions+=1;goto B75884b;
case 0x758850:goto L758850;
case 0x758852:c.instructions+=1;goto B758852;
case 0x758854:goto L758854;
case 0x75885a:goto L75885a;
case 0x75885c:c.instructions+=1;goto B75885c;
case 0x75885e:goto L75885e;
case 0x758864:goto L758864;
case 0x758866:c.instructions+=1;goto B758866;
case 0x758868:goto L758868;
case 0x75886a:c.instructions+=1;goto B75886a;
case 0x75886c:goto L75886c;
case 0x75886e:c.instructions+=1;goto B75886e;
case 0x758870:goto L758870;
case 0x758873:c.instructions+=1;goto B758873;
case 0x758875:goto L758875;
case 0x758876:c.instructions+=2;goto B758876;
case 0x758878:c.instructions+=1;goto B758878;
case 0x75887a:goto L75887a;
case 0x75887c:c.instructions+=1;goto B75887c;
case 0x75887d:goto L75887d;
case 0x758880:c.instructions+=4;goto B758880;
case 0x758881:c.instructions+=3;goto B758881;
case 0x758884:c.instructions+=2;goto B758884;
case 0x758885:c.instructions+=1;goto B758885;
case 0x758887:goto L758887;
case 0x758889:c.instructions+=3;goto B758889;
case 0x75888c:c.instructions+=2;goto B75888c;
case 0x758891:c.instructions+=1;goto B758891;
case 0x758893:goto L758893;
case 0x758895:c.instructions+=1;goto B758895;
case 0x758897:goto L758897;
case 0x75889a:c.instructions+=6;goto B75889a;
case 0x75889d:c.instructions+=5;goto B75889d;
case 0x75889f:c.instructions+=4;goto B75889f;
case 0x7588a0:c.instructions+=3;goto B7588a0;
case 0x7588a1:c.instructions+=2;goto B7588a1;
case 0x7588a3:c.instructions+=1;goto B7588a3;
case 0x7588a5:goto L7588a5;
case 0x7588a7:c.instructions+=1;goto B7588a7;
case 0x7588a9:goto L7588a9;
case 0x7588ab:goto L7588ab;
case 0x7588ac:c.instructions+=1;goto B7588ac;
case 0x7588ad:goto L7588ad;
case 0x7588af:c.instructions+=2;goto B7588af;
case 0x7588b0:c.instructions+=1;goto B7588b0;
case 0x7588c0:goto L7588c0;
case 0x7588c1:c.instructions+=7;goto B7588c1;
case 0x7588c2:c.instructions+=6;goto B7588c2;
case 0x7588c6:c.instructions+=5;goto B7588c6;
case 0x7588c7:c.instructions+=4;goto B7588c7;
case 0x7588c8:c.instructions+=3;goto B7588c8;
case 0x7588ca:c.instructions+=2;goto B7588ca;
case 0x7588cf:c.instructions+=1;goto B7588cf;
case 0x7588d0:goto L7588d0;
case 0x7588d2:c.instructions+=2;goto B7588d2;
case 0x7588d4:c.instructions+=1;goto B7588d4;
case 0x7588d6:goto L7588d6;
case 0x7588da:c.instructions+=2;goto B7588da;
case 0x7588dd:c.instructions+=1;goto B7588dd;
case 0x7588df:goto L7588df;
case 0x7588e1:goto L7588e1;
case 0x7588e3:goto L7588e3;
case 0x7588e6:c.instructions+=4;goto B7588e6;
case 0x7588e9:c.instructions+=3;goto B7588e9;
case 0x7588ea:c.instructions+=2;goto B7588ea;
case 0x7588ec:c.instructions+=1;goto B7588ec;
case 0x7588ee:goto L7588ee;
case 0x7588ef:c.instructions+=5;goto B7588ef;
case 0x7588f0:c.instructions+=4;goto B7588f0;
case 0x7588f1:c.instructions+=3;goto B7588f1;
case 0x7588f3:c.instructions+=2;goto B7588f3;
case 0x7588f4:c.instructions+=1;goto B7588f4;
case 0x7588f5:goto L7588f5;
case 0x7588f6:c.instructions+=6;goto B7588f6;
case 0x7588f7:c.instructions+=5;goto B7588f7;
case 0x7588fa:c.instructions+=4;goto B7588fa;
case 0x758901:c.instructions+=3;goto B758901;
case 0x758902:c.instructions+=2;goto B758902;
case 0x758903:c.instructions+=1;goto B758903;
case 0x758910:goto L758910;
case 0x758913:c.instructions+=12;goto B758913;
case 0x758918:c.instructions+=11;goto B758918;
case 0x75891c:c.instructions+=10;goto B75891c;
case 0x75891d:c.instructions+=9;goto B75891d;
case 0x758921:c.instructions+=8;goto B758921;
case 0x758925:c.instructions+=7;goto B758925;
case 0x758926:c.instructions+=6;goto B758926;
case 0x758929:c.instructions+=5;goto B758929;
case 0x75892a:c.instructions+=4;goto B75892a;
case 0x75892b:c.instructions+=3;goto B75892b;
case 0x75892f:c.instructions+=2;goto B75892f;
case 0x758931:c.instructions+=1;goto B758931;
case 0x758936:goto L758936;
case 0x758938:goto L758938;
case 0x75893c:c.instructions+=5;goto B75893c;
case 0x758940:c.instructions+=4;goto B758940;
case 0x758942:c.instructions+=3;goto B758942;
case 0x758944:c.instructions+=2;goto B758944;
case 0x758948:c.instructions+=1;goto B758948;
case 0x75894d:goto L75894d;
case 0x75894f:c.instructions+=1;goto B75894f;
case 0x758955:goto L758955;
case 0x758959:c.instructions+=3;goto B758959;
case 0x75895e:c.instructions+=2;goto B75895e;
case 0x758960:c.instructions+=1;goto B758960;
case 0x758966:goto L758966;
case 0x75896a:c.instructions+=2;goto B75896a;
case 0x75896e:c.instructions+=1;goto B75896e;
case 0x758973:goto L758973;
case 0x758975:c.instructions+=1;goto B758975;
case 0x75897b:goto L75897b;
case 0x75897f:c.instructions+=1;goto B75897f;
case 0x758985:goto L758985;
case 0x758989:c.instructions+=6;goto B758989;
case 0x75898c:c.instructions+=5;goto B75898c;
case 0x75898f:c.instructions+=4;goto B75898f;
case 0x758992:c.instructions+=3;goto B758992;
case 0x758996:c.instructions+=2;goto B758996;
case 0x75899a:c.instructions+=1;goto B75899a;
case 0x75899c:goto L75899c;
case 0x75899e:c.instructions+=1;goto B75899e;
case 0x7589a0:goto L7589a0;
case 0x7589a1:c.instructions+=2;goto B7589a1;
case 0x7589a3:c.instructions+=1;goto B7589a3;
case 0x7589a5:goto L7589a5;
case 0x7589a8:c.instructions+=3;goto B7589a8;
case 0x7589a9:c.instructions+=2;goto B7589a9;
case 0x7589ac:c.instructions+=1;goto B7589ac;
case 0x7589ae:goto L7589ae;
case 0x7589b0:c.instructions+=3;goto B7589b0;
case 0x7589b3:c.instructions+=2;goto B7589b3;
case 0x7589b8:c.instructions+=1;goto B7589b8;
case 0x7589ba:goto L7589ba;
case 0x7589c0:goto L7589c0;
case 0x7589c2:c.instructions+=1;goto B7589c2;
case 0x7589c4:goto L7589c4;
case 0x7589c7:c.instructions+=6;goto B7589c7;
case 0x7589ca:c.instructions+=5;goto B7589ca;
case 0x7589cc:c.instructions+=4;goto B7589cc;
case 0x7589cd:c.instructions+=3;goto B7589cd;
case 0x7589ce:c.instructions+=2;goto B7589ce;
case 0x7589d0:c.instructions+=1;goto B7589d0;
case 0x7589d2:goto L7589d2;
case 0x7589d4:c.instructions+=2;goto B7589d4;
case 0x7589d8:c.instructions+=1;goto B7589d8;
case 0x7589da:goto L7589da;
case 0x7589db:c.instructions+=6;goto B7589db;
case 0x7589dc:c.instructions+=5;goto B7589dc;
case 0x7589dd:c.instructions+=4;goto B7589dd;
case 0x7589e2:c.instructions+=3;goto B7589e2;
case 0x7589e3:c.instructions+=2;goto B7589e3;
case 0x7589e7:c.instructions+=1;goto B7589e7;
case 0x7589ec:goto L7589ec;
case 0x7589ef:c.instructions+=1;goto B7589ef;
case 0x7589f0:goto L7589f0;
case 0x7589f2:goto L7589f2;
case 0x7589f6:c.instructions+=3;goto B7589f6;
case 0x7589fa:c.instructions+=2;goto B7589fa;
case 0x7589fc:c.instructions+=1;goto B7589fc;
case 0x758a01:goto L758a01;
case 0x758a03:c.instructions+=1;goto B758a03;
case 0x758a09:goto L758a09;
case 0x758a0d:c.instructions+=2;goto B758a0d;
case 0x758a0f:c.instructions+=1;goto B758a0f;
case 0x758a15:goto L758a15;
case 0x758a18:c.instructions+=1;goto B758a18;
case 0x758a1e:goto L758a1e;
case 0x758a22:c.instructions+=6;goto B758a22;
case 0x758a28:c.instructions+=5;goto B758a28;
case 0x758a2a:c.instructions+=4;goto B758a2a;
case 0x758a2c:c.instructions+=3;goto B758a2c;
case 0x758a2f:c.instructions+=2;goto B758a2f;
case 0x758a31:c.instructions+=1;goto B758a31;
case 0x758a37:goto L758a37;
case 0x758a39:goto L758a39;
case 0x758a3b:c.instructions+=1;goto B758a3b;
case 0x758a3e:goto L758a3e;
case 0x758a40:goto L758a40;
case 0x758a42:c.instructions+=4;goto B758a42;
case 0x758a46:c.instructions+=3;goto B758a46;
case 0x758a4a:c.instructions+=2;goto B758a4a;
case 0x758a4c:c.instructions+=1;goto B758a4c;
case 0x758a51:goto L758a51;
case 0x758a53:c.instructions+=1;goto B758a53;
case 0x758a59:goto L758a59;
case 0x758a5e:c.instructions+=1;goto B758a5e;
case 0x758a64:goto L758a64;
case 0x758a68:c.instructions+=4;goto B758a68;
case 0x758a6b:c.instructions+=3;goto B758a6b;
case 0x758a6f:c.instructions+=2;goto B758a6f;
case 0x758a73:c.instructions+=1;goto B758a73;
case 0x758a78:goto L758a78;
case 0x758a7a:c.instructions+=1;goto B758a7a;
case 0x758a80:goto L758a80;
case 0x758a85:c.instructions+=1;goto B758a85;
case 0x758a8b:goto L758a8b;
case 0x758a8f:c.instructions+=3;goto B758a8f;
case 0x758a90:c.instructions+=2;goto B758a90;
case 0x758a91:c.instructions+=1;goto B758a91;
case 0x758a96:goto L758a96;
case 0x758a9a:c.instructions+=4;goto B758a9a;
case 0x758a9d:c.instructions+=3;goto B758a9d;
case 0x758a9f:c.instructions+=2;goto B758a9f;
case 0x758aa5:c.instructions+=1;goto B758aa5;
case 0x758aa7:goto L758aa7;
case 0x758aa8:c.instructions+=6;goto B758aa8;
case 0x758aa9:c.instructions+=5;goto B758aa9;
case 0x758aaa:c.instructions+=4;goto B758aaa;
case 0x758aaf:c.instructions+=3;goto B758aaf;
case 0x758ab0:c.instructions+=2;goto B758ab0;
case 0x758ab4:c.instructions+=1;goto B758ab4;
case 0x758ab9:goto L758ab9;
case 0x758abc:c.instructions+=1;goto B758abc;
case 0x758abd:goto L758abd;
case 0x758ac1:c.instructions+=4;goto B758ac1;
case 0x758ac5:c.instructions+=3;goto B758ac5;
case 0x758ac7:c.instructions+=2;goto B758ac7;
case 0x758ac9:c.instructions+=1;goto B758ac9;
case 0x758ace:goto L758ace;
case 0x758ad0:c.instructions+=1;goto B758ad0;
case 0x758ad6:goto L758ad6;
case 0x758adb:c.instructions+=1;goto B758adb;
case 0x758ae1:goto L758ae1;
case 0x758ae5:c.instructions+=5;goto B758ae5;
case 0x758ae8:c.instructions+=4;goto B758ae8;
case 0x758aec:c.instructions+=3;goto B758aec;
case 0x758af0:c.instructions+=2;goto B758af0;
case 0x758af2:c.instructions+=1;goto B758af2;
case 0x758af7:goto L758af7;
case 0x758af9:c.instructions+=2;goto B758af9;
case 0x758afb:c.instructions+=1;goto B758afb;
case 0x758b01:goto L758b01;
case 0x758b05:c.instructions+=3;goto B758b05;
case 0x758b08:c.instructions+=2;goto B758b08;
case 0x758b0c:c.instructions+=1;goto B758b0c;
case 0x758b12:goto L758b12;
case 0x758b15:c.instructions+=1;goto B758b15;
case 0x758b1b:goto L758b1b;
case 0x758b1e:c.instructions+=2;goto B758b1e;
case 0x758b22:c.instructions+=1;goto B758b22;
case 0x758b24:goto L758b24;
case 0x758b25:c.instructions+=2;goto B758b25;
case 0x758b26:c.instructions+=1;goto B758b26;
case 0x758b2b:goto L758b2b;
case 0x758b2e:c.instructions+=2;goto B758b2e;
case 0x758b30:c.instructions+=1;goto B758b30;
case 0x758b35:goto L758b35;
case 0x758b38:c.instructions+=1;goto B758b38;
case 0x758b3a:goto L758b3a;
case 0x758b3d:c.instructions+=1;goto B758b3d;
case 0x758b43:goto L758b43;
case 0x758b46:c.instructions+=1;goto B758b46;
case 0x758b48:goto L758b48;
case 0x758b4a:c.instructions+=3;goto B758b4a;
case 0x758b4f:c.instructions+=2;goto B758b4f;
case 0x758b52:c.instructions+=1;goto B758b52;
case 0x758b58:goto L758b58;
case 0x758b5a:c.instructions+=2;goto B758b5a;
case 0x758b5c:c.instructions+=1;goto B758b5c;
case 0x758b60:goto L758b60;
case 0x758b63:c.instructions+=1;goto B758b63;
case 0x758b69:goto L758b69;
case 0x758b6c:c.instructions+=6;goto B758b6c;
case 0x758b6e:c.instructions+=5;goto B758b6e;
case 0x758b6f:c.instructions+=4;goto B758b6f;
case 0x758b70:c.instructions+=3;goto B758b70;
case 0x758b74:c.instructions+=2;goto B758b74;
case 0x758b76:c.instructions+=1;goto B758b76;
case 0x758b78:goto L758b78;
case 0x758b7d:goto L758b7d;
case 0x758b80:c.instructions+=1;goto B758b80;
case 0x758b82:goto L758b82;
case 0x758b84:c.instructions+=3;goto B758b84;
case 0x758b89:c.instructions+=2;goto B758b89;
case 0x758b8c:c.instructions+=1;goto B758b8c;
case 0x758b92:goto L758b92;
case 0x758b94:c.instructions+=1;goto B758b94;
case 0x758b96:goto L758b96;
case 0x758b99:c.instructions+=1;goto B758b99;
case 0x758b9f:goto L758b9f;
case 0x758ba2:c.instructions+=6;goto B758ba2;
case 0x758ba4:c.instructions+=5;goto B758ba4;
case 0x758ba5:c.instructions+=4;goto B758ba5;
case 0x758ba6:c.instructions+=3;goto B758ba6;
case 0x758baa:c.instructions+=2;goto B758baa;
case 0x758bac:c.instructions+=1;goto B758bac;
case 0x758bae:goto L758bae;
case 0x758bb3:goto L758bb3;
case 0x758bb6:c.instructions+=1;goto B758bb6;
case 0x758bb8:goto L758bb8;
case 0x758bba:c.instructions+=3;goto B758bba;
case 0x758bbf:c.instructions+=2;goto B758bbf;
case 0x758bc2:c.instructions+=1;goto B758bc2;
case 0x758bc8:goto L758bc8;
case 0x758bca:c.instructions+=2;goto B758bca;
case 0x758bcc:c.instructions+=1;goto B758bcc;
case 0x758bd0:goto L758bd0;
case 0x758bd3:c.instructions+=1;goto B758bd3;
case 0x758bd9:goto L758bd9;
case 0x758bdc:c.instructions+=6;goto B758bdc;
case 0x758bde:c.instructions+=5;goto B758bde;
case 0x758bdf:c.instructions+=4;goto B758bdf;
case 0x758be0:c.instructions+=3;goto B758be0;
case 0x758be4:c.instructions+=2;goto B758be4;
case 0x758be6:c.instructions+=1;goto B758be6;
case 0x758be8:goto L758be8;
case 0x758bed:goto L758bed;
case 0x758bf0:c.instructions+=1;goto B758bf0;
case 0x758bf2:goto L758bf2;
case 0x758bf4:c.instructions+=3;goto B758bf4;
case 0x758bf9:c.instructions+=2;goto B758bf9;
case 0x758bfc:c.instructions+=1;goto B758bfc;
case 0x758c02:goto L758c02;
case 0x758c04:c.instructions+=1;goto B758c04;
case 0x758c06:goto L758c06;
case 0x758c09:c.instructions+=1;goto B758c09;
case 0x758c0b:goto L758c0b;
case 0x758c0e:c.instructions+=6;goto B758c0e;
case 0x758c10:c.instructions+=5;goto B758c10;
case 0x758c11:c.instructions+=4;goto B758c11;
case 0x758c12:c.instructions+=3;goto B758c12;
case 0x758c16:c.instructions+=2;goto B758c16;
case 0x758c18:c.instructions+=1;goto B758c18;
case 0x758c1a:goto L758c1a;
case 0x758c1c:goto L758c1c;
case 0x758c1f:c.instructions+=1;goto B758c1f;
case 0x758c21:goto L758c21;
case 0x758c23:c.instructions+=3;goto B758c23;
case 0x758c28:c.instructions+=2;goto B758c28;
case 0x758c2e:c.instructions+=1;goto B758c2e;
case 0x758c30:goto L758c30;
case 0x758c32:c.instructions+=1;goto B758c32;
case 0x758c34:goto L758c34;
case 0x758c37:c.instructions+=1;goto B758c37;
case 0x758c39:goto L758c39;
case 0x758c3c:c.instructions+=6;goto B758c3c;
case 0x758c3e:c.instructions+=5;goto B758c3e;
case 0x758c3f:c.instructions+=4;goto B758c3f;
case 0x758c40:c.instructions+=3;goto B758c40;
case 0x758c44:c.instructions+=2;goto B758c44;
case 0x758c46:c.instructions+=1;goto B758c46;
case 0x758c48:goto L758c48;
case 0x758c4a:goto L758c4a;
case 0x758c4d:c.instructions+=1;goto B758c4d;
case 0x758c4f:goto L758c4f;
case 0x758c51:c.instructions+=3;goto B758c51;
case 0x758c56:c.instructions+=2;goto B758c56;
case 0x758c5c:c.instructions+=1;goto B758c5c;
case 0x758c5e:goto L758c5e;
case 0x758c60:c.instructions+=1;goto B758c60;
case 0x758c62:goto L758c62;
case 0x758c65:c.instructions+=1;goto B758c65;
case 0x758c67:goto L758c67;
case 0x758c6a:c.instructions+=6;goto B758c6a;
case 0x758c6c:c.instructions+=5;goto B758c6c;
case 0x758c6d:c.instructions+=4;goto B758c6d;
case 0x758c6e:c.instructions+=3;goto B758c6e;
case 0x758c72:c.instructions+=2;goto B758c72;
case 0x758c74:c.instructions+=1;goto B758c74;
case 0x758c76:goto L758c76;
case 0x758c78:c.instructions+=1;goto B758c78;
case 0x758c7a:goto L758c7a;
case 0x758c7d:goto L758c7d;
case 0x758c7f:goto L758c7f;
case 0x758c81:goto L758c81;
case 0x758c85:c.instructions+=4;goto B758c85;
case 0x758c89:c.instructions+=3;goto B758c89;
case 0x758c8d:c.instructions+=2;goto B758c8d;
case 0x758c8f:c.instructions+=1;goto B758c8f;
case 0x758c94:goto L758c94;
case 0x758c96:c.instructions+=2;goto B758c96;
case 0x758c98:c.instructions+=1;goto B758c98;
case 0x758c9e:goto L758c9e;
case 0x758ca2:c.instructions+=4;goto B758ca2;
case 0x758ca6:c.instructions+=3;goto B758ca6;
case 0x758caa:c.instructions+=2;goto B758caa;
case 0x758cae:c.instructions+=1;goto B758cae;
case 0x758cb3:goto L758cb3;
case 0x758cb5:c.instructions+=1;goto B758cb5;
case 0x758cbb:goto L758cbb;
case 0x758cc0:c.instructions+=1;goto B758cc0;
case 0x758cc6:goto L758cc6;
case 0x758cca:c.instructions+=1;goto B758cca;
case 0x758ccf:goto L758ccf;
case 0x758cd1:c.instructions+=2;goto B758cd1;
case 0x758cd3:c.instructions+=1;goto B758cd3;
case 0x758cd9:goto L758cd9;
case 0x758cdd:c.instructions+=3;goto B758cdd;
case 0x758ce2:c.instructions+=2;goto B758ce2;
case 0x758ce4:c.instructions+=1;goto B758ce4;
case 0x758cea:goto L758cea;
case 0x758cee:c.instructions+=5;goto B758cee;
case 0x758cf2:c.instructions+=4;goto B758cf2;
case 0x758cf8:c.instructions+=3;goto B758cf8;
case 0x758cfa:c.instructions+=2;goto B758cfa;
case 0x758cff:c.instructions+=1;goto B758cff;
case 0x758d01:goto L758d01;
case 0x758d03:c.instructions+=1;goto B758d03;
case 0x758d05:goto L758d05;
case 0x758d08:c.instructions+=1;goto B758d08;
case 0x758d0a:goto L758d0a;
case 0x758d0d:c.instructions+=6;goto B758d0d;
case 0x758d0f:c.instructions+=5;goto B758d0f;
case 0x758d10:c.instructions+=4;goto B758d10;
case 0x758d11:c.instructions+=3;goto B758d11;
case 0x758d15:c.instructions+=2;goto B758d15;
case 0x758d17:c.instructions+=1;goto B758d17;
case 0x758d19:goto L758d19;
case 0x758d1b:c.instructions+=1;goto B758d1b;
case 0x758d1d:goto L758d1d;
case 0x758d20:goto L758d20;
case 0x758d24:c.instructions+=5;goto B758d24;
case 0x758d26:c.instructions+=4;goto B758d26;
case 0x758d2a:c.instructions+=3;goto B758d2a;
case 0x758d2e:c.instructions+=2;goto B758d2e;
case 0x758d30:c.instructions+=1;goto B758d30;
case 0x758d35:goto L758d35;
case 0x758d37:c.instructions+=2;goto B758d37;
case 0x758d39:c.instructions+=1;goto B758d39;
case 0x758d3f:goto L758d3f;
case 0x758d43:c.instructions+=1;goto B758d43;
case 0x758d49:goto L758d49;
case 0x758d4d:c.instructions+=5;goto B758d4d;
case 0x758d51:c.instructions+=4;goto B758d51;
case 0x758d57:c.instructions+=3;goto B758d57;
case 0x758d59:c.instructions+=2;goto B758d59;
case 0x758d5e:c.instructions+=1;goto B758d5e;
case 0x758d60:goto L758d60;
case 0x758d62:c.instructions+=1;goto B758d62;
case 0x758d64:goto L758d64;
case 0x758d67:c.instructions+=1;goto B758d67;
case 0x758d69:goto L758d69;
case 0x758d6c:c.instructions+=6;goto B758d6c;
case 0x758d6e:c.instructions+=5;goto B758d6e;
case 0x758d6f:c.instructions+=4;goto B758d6f;
case 0x758d70:c.instructions+=3;goto B758d70;
case 0x758d74:c.instructions+=2;goto B758d74;
case 0x758d76:c.instructions+=1;goto B758d76;
case 0x758d78:goto L758d78;
case 0x758d7a:c.instructions+=1;goto B758d7a;
case 0x758d7c:goto L758d7c;
case 0x758d7f:goto L758d7f;
case 0x758d83:c.instructions+=5;goto B758d83;
case 0x758d85:c.instructions+=4;goto B758d85;
case 0x758d89:c.instructions+=3;goto B758d89;
case 0x758d8d:c.instructions+=2;goto B758d8d;
case 0x758d8f:c.instructions+=1;goto B758d8f;
case 0x758d94:goto L758d94;
case 0x758d96:c.instructions+=1;goto B758d96;
case 0x758d9c:goto L758d9c;
case 0x758da1:c.instructions+=1;goto B758da1;
case 0x758da7:goto L758da7;
case 0x758dab:c.instructions+=5;goto B758dab;
case 0x758dae:c.instructions+=4;goto B758dae;
case 0x758db2:c.instructions+=3;goto B758db2;
case 0x758db6:c.instructions+=2;goto B758db6;
case 0x758db8:c.instructions+=1;goto B758db8;
case 0x758dbd:goto L758dbd;
case 0x758dbf:c.instructions+=3;goto B758dbf;
case 0x758dc3:c.instructions+=2;goto B758dc3;
case 0x758dc7:c.instructions+=1;goto B758dc7;
case 0x758dcd:goto L758dcd;
case 0x758dd0:goto L758dd0;
case 0x758dd4:c.instructions+=2;goto B758dd4;
case 0x758dd7:c.instructions+=1;goto B758dd7;
case 0x758ddd:goto L758ddd;
case 0x758de0:c.instructions+=1;goto B758de0;
case 0x758de6:goto L758de6;
case 0x758de9:c.instructions+=2;goto B758de9;
case 0x758ded:c.instructions+=1;goto B758ded;
case 0x758def:goto L758def;
case 0x758df3:c.instructions+=3;goto B758df3;
case 0x758df4:c.instructions+=2;goto B758df4;
case 0x758df5:c.instructions+=1;goto B758df5;
case 0x758dfa:goto L758dfa;
case 0x758dfd:c.instructions+=2;goto B758dfd;
case 0x758dff:c.instructions+=1;goto B758dff;
case 0x758e04:goto L758e04;
case 0x758e07:c.instructions+=1;goto B758e07;
case 0x758e09:goto L758e09;
case 0x758e0c:c.instructions+=1;goto B758e0c;
case 0x758e12:goto L758e12;
case 0x758e15:c.instructions+=1;goto B758e15;
case 0x758e17:goto L758e17;
case 0x758e19:c.instructions+=3;goto B758e19;
case 0x758e1e:c.instructions+=2;goto B758e1e;
case 0x758e24:c.instructions+=1;goto B758e24;
case 0x758e2a:goto L758e2a;
case 0x758e2e:c.instructions+=1;goto B758e2e;
case 0x758e30:goto L758e30;
case 0x758e33:c.instructions+=1;goto B758e33;
case 0x758e39:goto L758e39;
case 0x758e3c:c.instructions+=6;goto B758e3c;
case 0x758e3e:c.instructions+=5;goto B758e3e;
case 0x758e3f:c.instructions+=4;goto B758e3f;
case 0x758e40:c.instructions+=3;goto B758e40;
case 0x758e44:c.instructions+=2;goto B758e44;
case 0x758e46:c.instructions+=1;goto B758e46;
case 0x758e48:goto L758e48;
case 0x758e4d:goto L758e4d;
case 0x758e50:c.instructions+=1;goto B758e50;
case 0x758e52:goto L758e52;
case 0x758e54:c.instructions+=3;goto B758e54;
case 0x758e59:c.instructions+=2;goto B758e59;
case 0x758e5f:c.instructions+=1;goto B758e5f;
case 0x758e65:goto L758e65;
case 0x758e69:c.instructions+=2;goto B758e69;
case 0x758e6b:c.instructions+=1;goto B758e6b;
case 0x758e70:goto L758e70;
case 0x758e73:c.instructions+=1;goto B758e73;
case 0x758e79:goto L758e79;
case 0x758e7c:c.instructions+=6;goto B758e7c;
case 0x758e7e:c.instructions+=5;goto B758e7e;
case 0x758e7f:c.instructions+=4;goto B758e7f;
case 0x758e80:c.instructions+=3;goto B758e80;
case 0x758e84:c.instructions+=2;goto B758e84;
case 0x758e86:c.instructions+=1;goto B758e86;
case 0x758e88:goto L758e88;
case 0x758e8d:goto L758e8d;
case 0x758e90:c.instructions+=1;goto B758e90;
case 0x758e92:goto L758e92;
case 0x758e94:c.instructions+=3;goto B758e94;
case 0x758e99:c.instructions+=2;goto B758e99;
case 0x758e9f:c.instructions+=1;goto B758e9f;
case 0x758ea5:goto L758ea5;
case 0x758ea9:c.instructions+=2;goto B758ea9;
case 0x758eab:c.instructions+=1;goto B758eab;
case 0x758eb0:goto L758eb0;
case 0x758eb3:c.instructions+=1;goto B758eb3;
case 0x758eb9:goto L758eb9;
case 0x758ebc:c.instructions+=6;goto B758ebc;
case 0x758ebe:c.instructions+=5;goto B758ebe;
case 0x758ebf:c.instructions+=4;goto B758ebf;
case 0x758ec0:c.instructions+=3;goto B758ec0;
case 0x758ec4:c.instructions+=2;goto B758ec4;
case 0x758ec6:c.instructions+=1;goto B758ec6;
case 0x758ec8:goto L758ec8;
case 0x758ecd:goto L758ecd;
case 0x758ed0:c.instructions+=1;goto B758ed0;
case 0x758ed2:goto L758ed2;
case 0x758ed4:c.instructions+=3;goto B758ed4;
case 0x758ed9:c.instructions+=2;goto B758ed9;
case 0x758edf:c.instructions+=1;goto B758edf;
case 0x758ee1:goto L758ee1;
case 0x758ee5:c.instructions+=1;goto B758ee5;
case 0x758ee7:goto L758ee7;
case 0x758eea:c.instructions+=1;goto B758eea;
case 0x758eec:goto L758eec;
case 0x758eef:c.instructions+=6;goto B758eef;
case 0x758ef1:c.instructions+=5;goto B758ef1;
case 0x758ef2:c.instructions+=4;goto B758ef2;
case 0x758ef3:c.instructions+=3;goto B758ef3;
case 0x758ef7:c.instructions+=2;goto B758ef7;
case 0x758ef9:c.instructions+=1;goto B758ef9;
case 0x758efb:goto L758efb;
case 0x758efd:goto L758efd;
case 0x758f00:c.instructions+=1;goto B758f00;
case 0x758f02:goto L758f02;
case 0x758f04:c.instructions+=3;goto B758f04;
case 0x758f09:c.instructions+=2;goto B758f09;
case 0x758f0f:c.instructions+=1;goto B758f0f;
case 0x758f11:goto L758f11;
case 0x758f15:c.instructions+=1;goto B758f15;
case 0x758f17:goto L758f17;
case 0x758f1a:c.instructions+=1;goto B758f1a;
case 0x758f1c:goto L758f1c;
case 0x758f1f:c.instructions+=6;goto B758f1f;
case 0x758f21:c.instructions+=5;goto B758f21;
case 0x758f22:c.instructions+=4;goto B758f22;
case 0x758f23:c.instructions+=3;goto B758f23;
case 0x758f27:c.instructions+=2;goto B758f27;
case 0x758f29:c.instructions+=1;goto B758f29;
case 0x758f2b:goto L758f2b;
case 0x758f2d:goto L758f2d;
case 0x758f30:c.instructions+=1;goto B758f30;
case 0x758f32:goto L758f32;
case 0x758f34:c.instructions+=3;goto B758f34;
case 0x758f39:c.instructions+=2;goto B758f39;
case 0x758f3f:c.instructions+=1;goto B758f3f;
case 0x758f41:goto L758f41;
case 0x758f45:c.instructions+=1;goto B758f45;
case 0x758f47:goto L758f47;
case 0x758f4a:c.instructions+=1;goto B758f4a;
case 0x758f4c:goto L758f4c;
case 0x758f4f:c.instructions+=6;goto B758f4f;
case 0x758f51:c.instructions+=5;goto B758f51;
case 0x758f52:c.instructions+=4;goto B758f52;
case 0x758f53:c.instructions+=3;goto B758f53;
case 0x758f57:c.instructions+=2;goto B758f57;
case 0x758f59:c.instructions+=1;goto B758f59;
case 0x758f5b:goto L758f5b;
case 0x758f5d:c.instructions+=1;goto B758f5d;
case 0x758f5f:goto L758f5f;
case 0x758f62:goto L758f62;
case 0x758f64:goto L758f64;
case 0x758f68:goto L758f68;
case 0x758f6c:c.instructions+=4;goto B758f6c;
case 0x758f70:c.instructions+=3;goto B758f70;
case 0x758f74:c.instructions+=2;goto B758f74;
case 0x758f78:c.instructions+=1;goto B758f78;
case 0x758f7d:goto L758f7d;
case 0x758f7f:c.instructions+=2;goto B758f7f;
case 0x758f83:c.instructions+=1;goto B758f83;
case 0x758f89:goto L758f89;
case 0x758f8d:c.instructions+=4;goto B758f8d;
case 0x758f91:c.instructions+=3;goto B758f91;
case 0x758f95:c.instructions+=2;goto B758f95;
case 0x758f99:c.instructions+=1;goto B758f99;
case 0x758f9e:goto L758f9e;
case 0x758fa0:c.instructions+=1;goto B758fa0;
case 0x758fa6:goto L758fa6;
case 0x758faa:c.instructions+=3;goto B758faa;
case 0x758faf:c.instructions+=2;goto B758faf;
case 0x758fb1:c.instructions+=1;goto B758fb1;
case 0x758fb7:goto L758fb7;
case 0x758fbb:c.instructions+=1;goto B758fbb;
case 0x758fc0:goto L758fc0;
case 0x758fc2:c.instructions+=1;goto B758fc2;
case 0x758fc8:goto L758fc8;
case 0x758fcc:c.instructions+=1;goto B758fcc;
case 0x758fd2:goto L758fd2;
case 0x758fd6:c.instructions+=4;goto B758fd6;
case 0x758fd9:c.instructions+=3;goto B758fd9;
case 0x758fdd:c.instructions+=2;goto B758fdd;
case 0x758fdf:c.instructions+=1;goto B758fdf;
case 0x758fe4:goto L758fe4;
case 0x758fe6:c.instructions+=1;goto B758fe6;
case 0x758fec:goto L758fec;
case 0x758ff1:c.instructions+=1;goto B758ff1;
case 0x758ff7:goto L758ff7;
case 0x758ffb:c.instructions+=3;goto B758ffb;
case 0x758ffc:c.instructions+=2;goto B758ffc;
case 0x758ffd:c.instructions+=1;goto B758ffd;
default:missing_instruction(c.pc);}
B758002:L758002:{c.instructions+=1;NFSU2_TR(0x758002);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B758005:L758005:{c.instructions+=1;NFSU2_TR(0x758005);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L758007;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758005u);}goto L758005;}
}
B758007:L758007:{c.instructions+=2;NFSU2_TR(0x758007);
__builtin_memmove((R+4),(R+8),4);
}
B758009:{NFSU2_TR(0x758009);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B75800c:L75800c:{c.instructions+=1;NFSU2_TR(0x75800c);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L75800e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75800cu);}goto L75800c;}
}
B75800e:L75800e:{c.instructions+=4;NFSU2_TR(0x75800e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B758012:{NFSU2_TR(0x758012);
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
B758014:{NFSU2_TR(0x758014);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B758015:{NFSU2_TR(0x758015);
if(r1(R+518)){{goto L75801c;}}
}
B758017:L758017:{c.instructions+=2;NFSU2_TR(0x758017);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75801a:{NFSU2_TR(0x75801a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B75801c:L75801c:{c.instructions+=3;NFSU2_TR(0x75801c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B75801e:{NFSU2_TR(0x75801e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75801f:{NFSU2_TR(0x75801f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B758020:L758020:{c.instructions+=10;NFSU2_TR(0x758020);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B758024:{NFSU2_TR(0x758024);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B758028:{NFSU2_TR(0x758028);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75802c:{NFSU2_TR(0x75802c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75802d:{NFSU2_TR(0x75802d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B758031:{NFSU2_TR(0x758031);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758032:{NFSU2_TR(0x758032);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758033:{NFSU2_TR(0x758033);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758034:{NFSU2_TR(0x758034);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758035:{NFSU2_TR(0x758035);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75803aull));
TAIL_STATIC(0x757fa0u,757);
}
B75803a:L75803a:{c.instructions+=4;NFSU2_TR(0x75803a);
__builtin_memmove((R+4),(R+0),4);
}
B75803c:{NFSU2_TR(0x75803c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B75803f:{NFSU2_TR(0x75803f);
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
B758041:{NFSU2_TR(0x758041);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L75805e;}}
}
B758043:L758043:{c.instructions+=6;NFSU2_TR(0x758043);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B758049:{NFSU2_TR(0x758049);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75804f:{NFSU2_TR(0x75804f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B758051:{NFSU2_TR(0x758051);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B758052:{NFSU2_TR(0x758052);
u8 U[64];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x758052);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x758052);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B758058:{NFSU2_TR(0x758058);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75805e:L75805e:{c.instructions+=3;NFSU2_TR(0x75805e);
__builtin_memmove((R+0),(R+4),4);
}
B758060:{NFSU2_TR(0x758060);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B758061:{NFSU2_TR(0x758061);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B758070:L758070:{c.instructions+=5;NFSU2_TR(0x758070);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758071:{NFSU2_TR(0x758071);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758072:{NFSU2_TR(0x758072);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758073:{NFSU2_TR(0x758073);
u8 U[4];
w4(U+0,u32(0x1940ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758078:{NFSU2_TR(0x758078);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75807dull));
TAIL_STATIC(0x5832f0u,583);
}
B75807d:L75807d:{c.instructions+=6;NFSU2_TR(0x75807d);
__builtin_memmove((R+24),(R+0),4);
}
B75807f:{NFSU2_TR(0x75807f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B758081:{NFSU2_TR(0x758081);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B758084:{NFSU2_TR(0x758084);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B758086:{NFSU2_TR(0x758086);
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
B758088:{NFSU2_TR(0x758088);
if(r1(R+518)){{goto L75820e;}}
}
B75808e:L75808e:{c.instructions+=3;NFSU2_TR(0x75808e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75808f:{NFSU2_TR(0x75808f);
w4(R+4,u32(0x650ull));
}
B758094:{NFSU2_TR(0x758094);
__builtin_memmove((R+28),(R+24),4);
}
B758096:L758096:{c.instructions+=1;NFSU2_TR(0x758096);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L758098;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758096u);}goto L758096;}
}
B758098:L758098:{c.instructions+=24;NFSU2_TR(0x758098);
u8 U[4];
w4(U+0,u32(0x758070ull));
s4(u32(r4(R+24)),r4(U+0));
}
B75809e:{NFSU2_TR(0x75809e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x757700ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7580a5:{NFSU2_TR(0x7580a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x7577c0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7580ac:{NFSU2_TR(0x7580ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x757900ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7580b3:{NFSU2_TR(0x7580b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x757cd0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7580ba:{NFSU2_TR(0x7580ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x757d30ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7580c1:{NFSU2_TR(0x7580c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x757db0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7580c8:{NFSU2_TR(0x7580c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0x757e10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7580cf:{NFSU2_TR(0x7580cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w4(U+4,u32(0x757900ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7580d6:{NFSU2_TR(0x7580d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
w4(U+4,u32(0x757e20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7580dd:{NFSU2_TR(0x7580dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x754c40ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7580e4:{NFSU2_TR(0x7580e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
w4(U+4,u32(0x757e60ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7580eb:{NFSU2_TR(0x7580eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
w4(U+4,u32(0x757fa0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7580f2:{NFSU2_TR(0x7580f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
w4(U+4,u32(0x758020ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7580f9:{NFSU2_TR(0x7580f9);
__builtin_memmove((R+4),gp(0x7d35a4),4);
}
B7580ff:{NFSU2_TR(0x7580ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((R+0),(U+0),4);
}
B758102:{NFSU2_TR(0x758102);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B758104:{NFSU2_TR(0x758104);
__builtin_memmove((R+8),gp(0x7d35a8),2);
}
B75810b:{NFSU2_TR(0x75810b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B75810f:{NFSU2_TR(0x75810f);
__builtin_memmove((R+4),gp(0x7d35aa),1);
}
B758115:{NFSU2_TR(0x758115);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x191cull))));
__builtin_memmove((R+8),(U+0),4);
}
B75811b:{NFSU2_TR(0x75811b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75811c:{NFSU2_TR(0x75811c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75811f:{NFSU2_TR(0x75811f);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831b0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x758125ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B758125:L758125:{c.instructions+=8;NFSU2_TR(0x758125);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B758129:{NFSU2_TR(0x758129);
u8 U[6];
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75812c:{NFSU2_TR(0x75812c);
__builtin_memmove((R+0),(R+28),4);
}
B75812e:{NFSU2_TR(0x75812e);
u8 U[40];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w8(U+16,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+0,u32(r8(U+32)));
w8(U+8,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
__builtin_memmove((R+523),(R+512),1);
}
B758133:{NFSU2_TR(0x758133);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758134:{NFSU2_TR(0x758134);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75813a:{NFSU2_TR(0x75813a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B758140:{NFSU2_TR(0x758140);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x758145ull));
TAIL_STATIC(0x5832f0u,583);
}
B758145:L758145:{c.instructions+=6;NFSU2_TR(0x758145);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75814b:{NFSU2_TR(0x75814b);
u8 U[40];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w8(U+16,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+28,u32(r8(U+32)));
w8(U+8,u64(s64(s32(r4(R+28)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
__builtin_memmove((R+523),(R+512),1);
}
B758150:{NFSU2_TR(0x758150);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758151:{NFSU2_TR(0x758151);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B758157:{NFSU2_TR(0x758157);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75815d:{NFSU2_TR(0x75815d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x758162ull));
TAIL_STATIC(0x5832f0u,583);
}
B758162:L758162:{c.instructions+=9;NFSU2_TR(0x758162);
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
B758165:{NFSU2_TR(0x758165);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75816b:{NFSU2_TR(0x75816b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x904ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B758171:{NFSU2_TR(0x758171);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1910ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B758177:{NFSU2_TR(0x758177);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x190cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75817d:{NFSU2_TR(0x75817d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1908ull))));
w4(U+4,u32(0x800ull));
s4(u32(r4(U+0)),r4(U+4));
}
B758187:{NFSU2_TR(0x758187);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B758191:{NFSU2_TR(0x758191);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B758197:{NFSU2_TR(0x758197);
u8 U[4];
__builtin_memmove((U+0),gp(0x783200),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75819dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75819d:L75819d:{c.instructions+=8;NFSU2_TR(0x75819d);
__builtin_memmove((R+28),gp(0x783210),4);
}
B7581a3:{NFSU2_TR(0x7581a3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7581a4:{NFSU2_TR(0x7581a4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7581a6:{NFSU2_TR(0x7581a6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7581a8:{NFSU2_TR(0x7581a8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7581a9:{NFSU2_TR(0x7581a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7581af:{NFSU2_TR(0x7581af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B7581b6:{NFSU2_TR(0x7581b6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7581b8ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7581b8:L7581b8:{c.instructions+=6;NFSU2_TR(0x7581b8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7581b9:{NFSU2_TR(0x7581b9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7581bb:{NFSU2_TR(0x7581bb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7581bd:{NFSU2_TR(0x7581bd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7581be:{NFSU2_TR(0x7581be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7581c4:{NFSU2_TR(0x7581c4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7581c6ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7581c6:L7581c6:{c.instructions+=6;NFSU2_TR(0x7581c6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7581c7:{NFSU2_TR(0x7581c7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7581c9:{NFSU2_TR(0x7581c9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7581cb:{NFSU2_TR(0x7581cb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7581cc:{NFSU2_TR(0x7581cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7581d2:{NFSU2_TR(0x7581d2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7581d4ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7581d4:L7581d4:{c.instructions+=9;NFSU2_TR(0x7581d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7581da:{NFSU2_TR(0x7581da);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B7581de:{NFSU2_TR(0x7581de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7581df:{NFSU2_TR(0x7581df);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7581e0:{NFSU2_TR(0x7581e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7581e1:{NFSU2_TR(0x7581e1);
u8 U[4];
w4(U+0,u32(0x757390ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7581e6:{NFSU2_TR(0x7581e6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7581e7:{NFSU2_TR(0x7581e7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7581e8:{NFSU2_TR(0x7581e8);
u8 U[4];
__builtin_memmove((U+0),gp(0x783248),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7581eeull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7581ee:L7581ee:{c.instructions+=3;NFSU2_TR(0x7581ee);
__builtin_memmove((R+28),(R+0),4);
}
B7581f0:{NFSU2_TR(0x7581f0);
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
B7581f2:{NFSU2_TR(0x7581f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7581fb;}}
}
B7581f4:L7581f4:{c.instructions+=6;NFSU2_TR(0x7581f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7581f5:{NFSU2_TR(0x7581f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7581f6:{NFSU2_TR(0x7581f6);
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
B7581f8:{NFSU2_TR(0x7581f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7581f9:{NFSU2_TR(0x7581f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7581fa:{NFSU2_TR(0x7581fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7581fb:L7581fb:{c.instructions+=3;NFSU2_TR(0x7581fb);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7581fd:{NFSU2_TR(0x7581fd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7581fe:{NFSU2_TR(0x7581fe);
u8 U[4];
__builtin_memmove((U+0),gp(0x783174),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x758204ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B758204:L758204:{c.instructions+=2;NFSU2_TR(0x758204);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758205:{NFSU2_TR(0x758205);
u8 U[4];
__builtin_memmove((U+0),gp(0x783144),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75820bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75820b:L75820b:{c.instructions+=2;NFSU2_TR(0x75820b);
__builtin_memmove((R+0),(R+24),4);
}
B75820d:{NFSU2_TR(0x75820d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75820e:L75820e:{c.instructions+=4;NFSU2_TR(0x75820e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75820f:{NFSU2_TR(0x75820f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B758210:{NFSU2_TR(0x758210);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B758211:{NFSU2_TR(0x758211);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B758220:L758220:{c.instructions+=4;NFSU2_TR(0x758220);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758221:{NFSU2_TR(0x758221);
__builtin_memmove((R+0),gp(0x8b8408),4);
}
B758226:{NFSU2_TR(0x758226);
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
B758228:{NFSU2_TR(0x758228);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L758234;}}
}
B75822a:L75822a:{c.instructions+=1;NFSU2_TR(0x75822a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75822full));
TAIL_STATIC(0x74b730u,74b);
}
B75822f:L75822f:{c.instructions+=1;NFSU2_TR(0x75822f);
__builtin_memmove(gp(0x8b8408),(R+0),4);
}
B758234:L758234:{c.instructions+=1;NFSU2_TR(0x758234);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x758239ull));
TAIL_STATIC(0x74b730u,74b);
}
B758239:L758239:{c.instructions+=9;NFSU2_TR(0x758239);
__builtin_memmove((R+4),gp(0x8b840c),4);
}
B75823f:{NFSU2_TR(0x75823f);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B758241:{NFSU2_TR(0x758241);
s4(0x8b8410,u32(u32(m4(0x8b8410))+u32(u32(0x1ull))));
}
B758247:{NFSU2_TR(0x758247);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B758249:{NFSU2_TR(0x758249);
__builtin_memmove(gp(0x8b840c),(R+4),4);
}
B75824f:{NFSU2_TR(0x75824f);
__builtin_memmove((R+4),gp(0x8b8414),4);
}
B758255:{NFSU2_TR(0x758255);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B758258:{NFSU2_TR(0x758258);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758259:{NFSU2_TR(0x758259);
__builtin_memmove((R+16),(R+16),4);
}
B758260:L758260:{c.instructions+=5;NFSU2_TR(0x758260);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+12))));
}
B758264:{NFSU2_TR(0x758264);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B758265:{NFSU2_TR(0x758265);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x20ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B758268:{NFSU2_TR(0x758268);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75826c:{NFSU2_TR(0x75826c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758260u);}goto L758260;}}
}
B75826e:L75826e:{c.instructions+=4;NFSU2_TR(0x75826e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B758272:{NFSU2_TR(0x758272);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B758274:{NFSU2_TR(0x758274);
__builtin_memmove(gp(0x8b8414),(R+4),4);
}
B75827a:{NFSU2_TR(0x75827a);
if(r1(R+518)){{goto L7582a0;}}
}
B75827c:L75827c:{c.instructions+=7;NFSU2_TR(0x75827c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75827d:{NFSU2_TR(0x75827d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B758281:{NFSU2_TR(0x758281);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758283:{NFSU2_TR(0x758283);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758285:{NFSU2_TR(0x758285);
u8 U[4];
w4(U+0,u32(0x8b8408ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75828a:{NFSU2_TR(0x75828a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75828b:{NFSU2_TR(0x75828b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x758290ull));
TAIL_STATIC(0x75a430u,75a);
}
B758290:L758290:{c.instructions+=5;NFSU2_TR(0x758290);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B758294:{NFSU2_TR(0x758294);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758295:{NFSU2_TR(0x758295);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758296:{NFSU2_TR(0x758296);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758297:{NFSU2_TR(0x758297);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75829cull));
TAIL_STATIC(0x75a590u,75a);
}
B75829c:L75829c:{c.instructions+=2;NFSU2_TR(0x75829c);
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
B75829f:{NFSU2_TR(0x75829f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7582a0:L7582a0:{c.instructions+=3;NFSU2_TR(0x7582a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7582a1:{NFSU2_TR(0x7582a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7582a2:{NFSU2_TR(0x7582a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7582b0:L7582b0:{c.instructions+=7;NFSU2_TR(0x7582b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7582b1:{NFSU2_TR(0x7582b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7582b2:{NFSU2_TR(0x7582b2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7582b6:{NFSU2_TR(0x7582b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7582b8:{NFSU2_TR(0x7582b8);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B7582ba:{NFSU2_TR(0x7582ba);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7582bc:{NFSU2_TR(0x7582bc);
if(r1(R+518)){{goto L7582c9;}}
}
B7582be:L7582be:{c.instructions+=2;NFSU2_TR(0x7582be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7582bf:{NFSU2_TR(0x7582bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7582c4ull));
TAIL_STATIC(0x74a2d0u,74a);
}
B7582c4:L7582c4:{c.instructions+=2;NFSU2_TR(0x7582c4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7582c7:{NFSU2_TR(0x7582c7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+24)),r4(U+0));
}
B7582c9:L7582c9:{c.instructions+=3;NFSU2_TR(0x7582c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7582cc:{NFSU2_TR(0x7582cc);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B7582ce:{NFSU2_TR(0x7582ce);
if(r1(R+518)){{goto L7582da;}}
}
B7582d0:L7582d0:{c.instructions+=2;NFSU2_TR(0x7582d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7582d1:{NFSU2_TR(0x7582d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7582d4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B7582d4:L7582d4:{c.instructions+=2;NFSU2_TR(0x7582d4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7582d7:{NFSU2_TR(0x7582d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7582da:L7582da:{c.instructions+=6;NFSU2_TR(0x7582da);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7582db:{NFSU2_TR(0x7582db);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7582df:{NFSU2_TR(0x7582df);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7582e1:{NFSU2_TR(0x7582e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7582e7:{NFSU2_TR(0x7582e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7582f1:{NFSU2_TR(0x7582f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75830e;}}
}
B7582f3:L7582f3:{c.instructions+=3;NFSU2_TR(0x7582f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7582f9:{NFSU2_TR(0x7582f9);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7582fb:{NFSU2_TR(0x7582fb);
if(r1(R+518)){{goto L758350;}}
}
B7582fd:L7582fd:{c.instructions+=2;NFSU2_TR(0x7582fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7582fe:{NFSU2_TR(0x7582fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x758303ull));
TAIL_STATIC(0x598ec0u,598);
}
B758303:L758303:{c.instructions+=3;NFSU2_TR(0x758303);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B758306:{NFSU2_TR(0x758306);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75830c:{NFSU2_TR(0x75830c);
{goto L758350;}
}
B75830e:L75830e:{c.instructions+=2;NFSU2_TR(0x75830e);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+20))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+20)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B758314:{NFSU2_TR(0x758314);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L758350;}}
}
B758316:L758316:{c.instructions+=3;NFSU2_TR(0x758316);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758317:{NFSU2_TR(0x758317);
u8 U[4];
w4(U+0,u32(0x88c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75831c:{NFSU2_TR(0x75831c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x758321ull));
TAIL_STATIC(0x5832f0u,583);
}
B758321:L758321:{c.instructions+=5;NFSU2_TR(0x758321);
__builtin_memmove((R+28),(R+0),4);
}
B758323:{NFSU2_TR(0x758323);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B758326:{NFSU2_TR(0x758326);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758328:{NFSU2_TR(0x758328);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75832e:{NFSU2_TR(0x75832e);
if(r1(R+518)){{goto L75834f;}}
}
B758330:L758330:{c.instructions+=2;NFSU2_TR(0x758330);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B758332:{NFSU2_TR(0x758332);
w4(R+4,u32(0x2230ull));
}
B758337:L758337:{c.instructions+=1;NFSU2_TR(0x758337);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L758339;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758337u);}goto L758337;}
}
B758339:L758339:{c.instructions+=6;NFSU2_TR(0x758339);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75833f:{NFSU2_TR(0x75833f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x86bcull))));
}
B758344:{NFSU2_TR(0x758344);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758345:{NFSU2_TR(0x758345);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758346:{NFSU2_TR(0x758346);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758347:{NFSU2_TR(0x758347);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75834cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758220u);}goto L758220;}
}
B75834c:L75834c:{c.instructions+=1;NFSU2_TR(0x75834c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B75834f:L75834f:{c.instructions+=1;NFSU2_TR(0x75834f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B758350:L758350:{c.instructions+=3;NFSU2_TR(0x758350);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B758356:{NFSU2_TR(0x758356);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758358:{NFSU2_TR(0x758358);
if(r1(R+518)){{goto L7583bc;}}
}
B75835a:L75835a:{c.instructions+=3;NFSU2_TR(0x75835a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x81b4ull))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B758364:{NFSU2_TR(0x758364);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B758366:{NFSU2_TR(0x758366);
{goto L758370;}
}
B758370:L758370:{c.instructions+=7;NFSU2_TR(0x758370);
__builtin_memmove((R+8),(R+4),1);
}
B758372:{NFSU2_TR(0x758372);
w1(R+8,u8(u32(r1(R+8))+u32(u8(0x30ull))));
}
B758375:{NFSU2_TR(0x758375);
u8 U[13];
w4(U+0,u32(u32(u32(0x81b8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B75837c:{NFSU2_TR(0x75837c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x81b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B758382:{NFSU2_TR(0x758382);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B758383:{NFSU2_TR(0x758383);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B758385:{NFSU2_TR(0x758385);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758370u);}goto L758370;}}
}
B758387:L758387:{c.instructions+=10;NFSU2_TR(0x758387);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+0)),r4(U+0));
}
B758389:{NFSU2_TR(0x758389);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75838c:{NFSU2_TR(0x75838c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4008ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B758392:{NFSU2_TR(0x758392);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x400cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B758398:{NFSU2_TR(0x758398);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4010ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75839e:{NFSU2_TR(0x75839e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8018ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7583a4:{NFSU2_TR(0x7583a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x801cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7583aa:{NFSU2_TR(0x7583aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8024ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7583b0:{NFSU2_TR(0x7583b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80a8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7583b6:{NFSU2_TR(0x7583b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x812cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7583bc:L7583bc:{c.instructions+=3;NFSU2_TR(0x7583bc);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7583be:{NFSU2_TR(0x7583be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7583bf:{NFSU2_TR(0x7583bf);
if(r1(R+518)){{goto L7583cd;}}
}
B7583c1:L7583c1:{c.instructions+=2;NFSU2_TR(0x7583c1);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B7583c3:{NFSU2_TR(0x7583c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7583cd;}}
}
B7583c5:L7583c5:{c.instructions+=4;NFSU2_TR(0x7583c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7583c6:{NFSU2_TR(0x7583c6);
w4(R+0,u32(0xfffffff8ull));
}
B7583cb:{NFSU2_TR(0x7583cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7583cc:{NFSU2_TR(0x7583cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7583cd:L7583cd:{c.instructions+=4;NFSU2_TR(0x7583cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7583ce:{NFSU2_TR(0x7583ce);
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
B7583d0:{NFSU2_TR(0x7583d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7583d1:{NFSU2_TR(0x7583d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7583e0:L7583e0:{c.instructions+=9;NFSU2_TR(0x7583e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x64ull))));
}
B7583e3:{NFSU2_TR(0x7583e3);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B7583e8:{NFSU2_TR(0x7583e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7583ec:{NFSU2_TR(0x7583ec);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7583ef:{NFSU2_TR(0x7583ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7583f3:{NFSU2_TR(0x7583f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7583f7:{NFSU2_TR(0x7583f7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7583f8:{NFSU2_TR(0x7583f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B7583fe:{NFSU2_TR(0x7583fe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7585c0;}}
}
B758404:L758404:{c.instructions+=2;NFSU2_TR(0x758404);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3e80ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3e80ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75840a:{NFSU2_TR(0x75840a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7585c0;}}
}
B758410:L758410:{c.instructions+=7;NFSU2_TR(0x758410);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x812cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B758416:{NFSU2_TR(0x758416);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758418:{NFSU2_TR(0x758418);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758419:{NFSU2_TR(0x758419);
w4(R+12,u32(0x4ull));
}
B75841e:{NFSU2_TR(0x75841e);
__builtin_memmove((R+8),(R+12),4);
}
B758420:{NFSU2_TR(0x758420);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B758424:{NFSU2_TR(0x758424);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75842b;}}
}
B758426:L758426:{c.instructions+=1;NFSU2_TR(0x758426);
w4(R+12,u32(0x14ull));
}
B75842b:L75842b:{c.instructions+=8;NFSU2_TR(0x75842b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75842c:{NFSU2_TR(0x75842c);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B758430:{NFSU2_TR(0x758430);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B758433:{NFSU2_TR(0x758433);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758434:{NFSU2_TR(0x758434);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B758437:{NFSU2_TR(0x758437);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75843b:{NFSU2_TR(0x75843b);
__builtin_memmove((R+0),(R+4),4);
}
B75843d:{NFSU2_TR(0x75843d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B758440:L758440:{c.instructions+=1;NFSU2_TR(0x758440);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L758442;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758440u);}goto L758440;}
}
B758442:L758442:{c.instructions+=3;NFSU2_TR(0x758442);
__builtin_memmove((R+4),(R+0),4);
}
B758444:{NFSU2_TR(0x758444);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75844b:{NFSU2_TR(0x75844b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B75844e:L75844e:{c.instructions+=1;NFSU2_TR(0x75844e);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L758450;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75844eu);}goto L75844e;}
}
B758450:L758450:{c.instructions+=5;NFSU2_TR(0x758450);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x81b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B758456:{NFSU2_TR(0x758456);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75845a:{NFSU2_TR(0x75845a);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B75845c:{NFSU2_TR(0x75845c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75845e:{NFSU2_TR(0x75845e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L758477;}}
}
B758460:L758460:{c.instructions+=9;NFSU2_TR(0x758460);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B758461:{NFSU2_TR(0x758461);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x758461);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x758461);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B758463:{NFSU2_TR(0x758463);
__builtin_memmove((R+0),(R+4),4);
}
B758465:{NFSU2_TR(0x758465);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B758467:{NFSU2_TR(0x758467);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B758468:{NFSU2_TR(0x758468);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x758468);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x758468);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B75846a:{NFSU2_TR(0x75846a);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B758471:{NFSU2_TR(0x758471);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B758475:{NFSU2_TR(0x758475);
{goto L758482;}
}
B758477:L758477:{c.instructions+=1;NFSU2_TR(0x758477);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B758482:L758482:{c.instructions+=5;NFSU2_TR(0x758482);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B758489:{NFSU2_TR(0x758489);
__builtin_memmove((R+24),(R+4),4);
}
B75848b:{NFSU2_TR(0x75848b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B75848e:{NFSU2_TR(0x75848e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B758490:{NFSU2_TR(0x758490);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B758494:L758494:{c.instructions+=1;NFSU2_TR(0x758494);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L758496;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758494u);}goto L758494;}
}
B758496:L758496:{c.instructions+=2;NFSU2_TR(0x758496);
__builtin_memmove((R+4),(R+24),4);
}
B758498:{NFSU2_TR(0x758498);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B75849b:L75849b:{c.instructions+=1;NFSU2_TR(0x75849b);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L75849d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75849bu);}goto L75849b;}
}
B75849d:L75849d:{c.instructions+=5;NFSU2_TR(0x75849d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x812cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7584a3:{NFSU2_TR(0x7584a3);
__builtin_memmove((R+4),(R+24),4);
}
B7584a5:{NFSU2_TR(0x7584a5);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B7584a7:{NFSU2_TR(0x7584a7);
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
B7584a9:{NFSU2_TR(0x7584a9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L758541;}}
}
B7584af:L7584af:{c.instructions+=11;NFSU2_TR(0x7584af);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x400bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B7584b5:{NFSU2_TR(0x7584b5);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7584b9:{NFSU2_TR(0x7584b9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x400aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B7584bf:{NFSU2_TR(0x7584bf);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7584c3:{NFSU2_TR(0x7584c3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4009ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B7584c9:{NFSU2_TR(0x7584c9);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7584cd:{NFSU2_TR(0x7584cd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4008ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B7584d3:{NFSU2_TR(0x7584d3);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B7584d7:{NFSU2_TR(0x7584d7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7584d8:{NFSU2_TR(0x7584d8);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7584dc:{NFSU2_TR(0x7584dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7584e1ull));
TAIL_STATIC(0x75aeb0u,75a);
}
B7584e1:L7584e1:{c.instructions+=7;NFSU2_TR(0x7584e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x812cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7584e7:{NFSU2_TR(0x7584e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7584e8:{NFSU2_TR(0x7584e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8130ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7584ee:{NFSU2_TR(0x7584ee);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7584ef:{NFSU2_TR(0x7584ef);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B7584f3:{NFSU2_TR(0x7584f3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7584f4:{NFSU2_TR(0x7584f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7584f9ull));
TAIL_STATIC(0x75aee0u,75a);
}
B7584f9:L7584f9:{c.instructions+=10;NFSU2_TR(0x7584f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7584fd:{NFSU2_TR(0x7584fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B758501:{NFSU2_TR(0x758501);
__builtin_memmove((R+0),(R+12),4);
}
B758503:{NFSU2_TR(0x758503);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B758505:{NFSU2_TR(0x758505);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758506:{NFSU2_TR(0x758506);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B758509:{NFSU2_TR(0x758509);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75850a:{NFSU2_TR(0x75850a);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B75850e:{NFSU2_TR(0x75850e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75850f:{NFSU2_TR(0x75850f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x758514ull));
TAIL_STATIC(0x75aee0u,75a);
}
B758514:L758514:{c.instructions+=6;NFSU2_TR(0x758514);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758516:{NFSU2_TR(0x758516);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B75851a:{NFSU2_TR(0x75851a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75851b:{NFSU2_TR(0x75851b);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B75851f:{NFSU2_TR(0x75851f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758520:{NFSU2_TR(0x758520);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x758525ull));
TAIL_STATIC(0x75aee0u,75a);
}
B758525:L758525:{c.instructions+=6;NFSU2_TR(0x758525);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758527:{NFSU2_TR(0x758527);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B75852a:{NFSU2_TR(0x75852a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75852b:{NFSU2_TR(0x75852b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B75852f:{NFSU2_TR(0x75852f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758530:{NFSU2_TR(0x758530);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x758535ull));
TAIL_STATIC(0x75af40u,75a);
}
B758535:L758535:{c.instructions+=3;NFSU2_TR(0x758535);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75853c:{NFSU2_TR(0x75853c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
}
B75853f:{NFSU2_TR(0x75853f);
__builtin_memmove((R+4),(R+24),4);
}
B758541:L758541:{c.instructions+=6;NFSU2_TR(0x758541);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x812cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B758547:{NFSU2_TR(0x758547);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B758548:{NFSU2_TR(0x758548);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75854a:{NFSU2_TR(0x75854a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B75854d:{NFSU2_TR(0x75854d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75854e:{NFSU2_TR(0x75854e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75856f;}}
}
B758550:L758550:{c.instructions+=6;NFSU2_TR(0x758550);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758551:{NFSU2_TR(0x758551);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B758554:{NFSU2_TR(0x758554);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758555:{NFSU2_TR(0x758555);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x87beull))));
__builtin_memmove((R+8),(U+0),4);
}
B75855b:{NFSU2_TR(0x75855b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75855c:{NFSU2_TR(0x75855c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x758561ull));
TAIL_STATIC(0x75a590u,75a);
}
B758561:L758561:{c.instructions+=3;NFSU2_TR(0x758561);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B758565:{NFSU2_TR(0x758565);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75856c:{NFSU2_TR(0x75856c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B75856f:L75856f:{c.instructions+=2;NFSU2_TR(0x75856f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758571:{NFSU2_TR(0x758571);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L758582;}}
}
B758573:L758573:{c.instructions+=3;NFSU2_TR(0x758573);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75857b:{NFSU2_TR(0x75857b);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75857f:{NFSU2_TR(0x75857f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B758582:L758582:{c.instructions+=8;NFSU2_TR(0x758582);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B758583:{NFSU2_TR(0x758583);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B758586:{NFSU2_TR(0x758586);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B75858a:{NFSU2_TR(0x75858a);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B75858b:{NFSU2_TR(0x75858b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B75858e:{NFSU2_TR(0x75858e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758590:{NFSU2_TR(0x758590);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B758594:{NFSU2_TR(0x758594);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75859c;}}
}
B758596:L758596:{c.instructions+=2;NFSU2_TR(0x758596);
w1(R+0,u8(u32(r1(R+0))|u32(u8(0x80ull))));
}
B758598:{NFSU2_TR(0x758598);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B75859c:L75859c:{c.instructions+=10;NFSU2_TR(0x75859c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4008ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7585a2:{NFSU2_TR(0x7585a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7585a5:{NFSU2_TR(0x7585a5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7585a6:{NFSU2_TR(0x7585a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4008ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7585ac:{NFSU2_TR(0x7585ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7585ad:{NFSU2_TR(0x7585ad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+20)),r4(U+0));
}
B7585b0:{NFSU2_TR(0x7585b0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7585b2:{NFSU2_TR(0x7585b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7585b3:{NFSU2_TR(0x7585b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7585b7:{NFSU2_TR(0x7585b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7585bcull));
TAIL_STATIC(0x76115eu,761);
}
B7585bc:L7585bc:{c.instructions+=2;NFSU2_TR(0x7585bc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x64ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x64ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7585bf:{NFSU2_TR(0x7585bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7585c0:L7585c0:{c.instructions+=4;NFSU2_TR(0x7585c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7585c4:{NFSU2_TR(0x7585c4);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B7585c7:{NFSU2_TR(0x7585c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7585c8:{NFSU2_TR(0x7585c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7585cdull));
TAIL_STATIC(0x76115eu,761);
}
B7585cd:L7585cd:{c.instructions+=2;NFSU2_TR(0x7585cd);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x64ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x64ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7585d0:{NFSU2_TR(0x7585d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7585e0:L7585e0:{c.instructions+=22;NFSU2_TR(0x7585e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x6cull))));
}
B7585e3:{NFSU2_TR(0x7585e3);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B7585e8:{NFSU2_TR(0x7585e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7585ec:{NFSU2_TR(0x7585ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7585f0:{NFSU2_TR(0x7585f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7585f1:{NFSU2_TR(0x7585f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7585f7:{NFSU2_TR(0x7585f7);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4018ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B7585fd:{NFSU2_TR(0x7585fd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7585fe:{NFSU2_TR(0x7585fe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7585ff:{NFSU2_TR(0x7585ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4018ull))));
__builtin_memmove((R+28),(U+0),4);
}
B758605:{NFSU2_TR(0x758605);
w1(R+4,u8(0x7full));
}
B758607:{NFSU2_TR(0x758607);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
w1(R+512,u8((r1(R+4))<(r1(U+0))));
}
B758609:{NFSU2_TR(0x758609);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4010ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75860f:{NFSU2_TR(0x75860f);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(R+8))));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B758611:{NFSU2_TR(0x758611);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x3ull))));
}
B758614:{NFSU2_TR(0x758614);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B758616:{NFSU2_TR(0x758616);
__builtin_memmove((R+0),(R+12),4);
}
B758618:{NFSU2_TR(0x758618);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B75861a:{NFSU2_TR(0x75861a);
u8 U[12];
w4(U+0,u32(u32(u32(0x4018ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B758621:{NFSU2_TR(0x758621);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B758627:{NFSU2_TR(0x758627);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758629:{NFSU2_TR(0x758629);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7586f9;}}
}
B75862f:L75862f:{c.instructions+=6;NFSU2_TR(0x75862f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758630:{NFSU2_TR(0x758630);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758631:{NFSU2_TR(0x758631);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x86bcull))));
__builtin_memmove((R+8),(U+0),4);
}
B758637:{NFSU2_TR(0x758637);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758638:{NFSU2_TR(0x758638);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758639:{NFSU2_TR(0x758639);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75863eull));
TAIL_STATIC(0x75a590u,75a);
}
B75863e:L75863e:{c.instructions+=12;NFSU2_TR(0x75863e);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x801bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B758644:{NFSU2_TR(0x758644);
u8 U[5];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75864b:{NFSU2_TR(0x75864b);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x801aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B758651:{NFSU2_TR(0x758651);
u8 U[5];
w4(U+0,u32(u32(u32(0x8dull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B758658:{NFSU2_TR(0x758658);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8018ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75865e:{NFSU2_TR(0x75865e);
u8 U[48];
w4(U+40,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
__builtin_memmove((U+44),(R+8),4);
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+40))));
w1(U+24,u8((r4(U+40))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+40))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+44),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+40))==(u32(0x1ull))));
w1(U+39,u8(s32(r4(U+44))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+40))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+8))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B758661:{NFSU2_TR(0x758661);
u8 U[5];
w4(U+0,u32(u32(u32(0x8eull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B758668:{NFSU2_TR(0x758668);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8018ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B75866e:{NFSU2_TR(0x75866e);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B758672:{NFSU2_TR(0x758672);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758673:{NFSU2_TR(0x758673);
u8 U[5];
w4(U+0,u32(u32(u32(0x93ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75867a:{NFSU2_TR(0x75867a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75867full));
TAIL_STATIC(0x75aeb0u,75a);
}
B75867f:L75867f:{c.instructions+=7;NFSU2_TR(0x75867f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B758685:{NFSU2_TR(0x758685);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758686:{NFSU2_TR(0x758686);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80acull))));
__builtin_memmove((R+0),(U+0),4);
}
B75868c:{NFSU2_TR(0x75868c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75868d:{NFSU2_TR(0x75868d);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B758691:{NFSU2_TR(0x758691);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758692:{NFSU2_TR(0x758692);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x758697ull));
TAIL_STATIC(0x75aee0u,75a);
}
B758697:L758697:{c.instructions+=8;NFSU2_TR(0x758697);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
}
B75869a:{NFSU2_TR(0x75869a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75869d:{NFSU2_TR(0x75869d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75869e:{NFSU2_TR(0x75869e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75869f:{NFSU2_TR(0x75869f);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B7586a3:{NFSU2_TR(0x7586a3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7586a4:{NFSU2_TR(0x7586a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7586a8:{NFSU2_TR(0x7586a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7586adull));
TAIL_STATIC(0x75aee0u,75a);
}
B7586ad:L7586ad:{c.instructions+=6;NFSU2_TR(0x7586ad);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7586af:{NFSU2_TR(0x7586af);
u8 U[4];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B7586b6:{NFSU2_TR(0x7586b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7586b7:{NFSU2_TR(0x7586b7);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B7586bb:{NFSU2_TR(0x7586bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7586bc:{NFSU2_TR(0x7586bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7586c1ull));
TAIL_STATIC(0x75aee0u,75a);
}
B7586c1:L7586c1:{c.instructions+=6;NFSU2_TR(0x7586c1);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7586c3:{NFSU2_TR(0x7586c3);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B7586c7:{NFSU2_TR(0x7586c7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7586c8:{NFSU2_TR(0x7586c8);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B7586cc:{NFSU2_TR(0x7586cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7586cd:{NFSU2_TR(0x7586cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7586d2ull));
TAIL_STATIC(0x75af40u,75a);
}
B7586d2:L7586d2:{c.instructions+=4;NFSU2_TR(0x7586d2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B7586d5:{NFSU2_TR(0x7586d5);
w4(R+4,u32(0x4ull));
}
B7586da:{NFSU2_TR(0x7586da);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B7586de:{NFSU2_TR(0x7586de);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B7586e0:L7586e0:{c.instructions+=1;NFSU2_TR(0x7586e0);
u8 U[59];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L7586e2;}}
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
__builtin_memmove((U+36),gp(u32(r4(U+20))),4);
__builtin_memmove((U+47),(U+36),4);
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+51),(U+16),4);
w1(R+512,u8((r4(U+51))<(r4(U+47))));
w1(R+523,sborrow<u32>(r4(U+51),r4(U+47)));
w4(U+55,u32(u32(r4(U+51))-u32(r4(U+47))));
w1(R+519,u8(s32(r4(U+55))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+55))==(u32(0x0ull))));
w4(U+41,u32(u32(r4(U+55))&u32(u32(0xffull))));
w1(U+45,u8(__builtin_popcountll(u64(r4(U+41)))));
w1(U+46,u8(u32(r1(U+45))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+46))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7586e0u);}goto L7586e0;}}
}
B7586e2:L7586e2:{c.instructions+=2;NFSU2_TR(0x7586e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7586e3:{NFSU2_TR(0x7586e3);
if(r1(R+518)){{goto L7586e9;}}
}
B7586e5:L7586e5:{c.instructions+=2;NFSU2_TR(0x7586e5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B7586e7:{NFSU2_TR(0x7586e7);
{goto L7586f9;}
}
B7586e9:L7586e9:{c.instructions+=3;NFSU2_TR(0x7586e9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7586ed:{NFSU2_TR(0x7586ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4010ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7586f3:{NFSU2_TR(0x7586f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x400cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7586f9:L7586f9:{c.instructions+=9;NFSU2_TR(0x7586f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8018ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7586ff:{NFSU2_TR(0x7586ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B758703:{NFSU2_TR(0x758703);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B758704:{NFSU2_TR(0x758704);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8018ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75870a:{NFSU2_TR(0x75870a);
__builtin_memmove((R+0),(R+28),4);
}
B75870c:{NFSU2_TR(0x75870c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75870d:{NFSU2_TR(0x75870d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75870e:{NFSU2_TR(0x75870e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75870f:{NFSU2_TR(0x75870f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x758714ull));
TAIL_STATIC(0x76115eu,761);
}
B758714:L758714:{c.instructions+=2;NFSU2_TR(0x758714);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x6cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x6cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x6cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B758717:{NFSU2_TR(0x758717);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B758720:L758720:{c.instructions+=6;NFSU2_TR(0x758720);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x58ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x58ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x58ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B758723:{NFSU2_TR(0x758723);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B758728:{NFSU2_TR(0x758728);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75872c:{NFSU2_TR(0x75872c);
__builtin_memmove((R+0),(R+16),4);
}
B75872f:{NFSU2_TR(0x75872f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758730:{NFSU2_TR(0x758730);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x758735ull));
TAIL_STATIC(0x75aeb0u,75a);
}
B758735:L758735:{c.instructions+=7;NFSU2_TR(0x758735);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B758739:{NFSU2_TR(0x758739);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75873d:{NFSU2_TR(0x75873d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75873e:{NFSU2_TR(0x75873e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75873f:{NFSU2_TR(0x75873f);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B758743:{NFSU2_TR(0x758743);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758744:{NFSU2_TR(0x758744);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x758749ull));
TAIL_STATIC(0x75aee0u,75a);
}
B758749:L758749:{c.instructions+=6;NFSU2_TR(0x758749);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75874d:{NFSU2_TR(0x75874d);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75874f:{NFSU2_TR(0x75874f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758750:{NFSU2_TR(0x758750);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B758754:{NFSU2_TR(0x758754);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758755:{NFSU2_TR(0x758755);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75875aull));
TAIL_STATIC(0x75af40u,75a);
}
B75875a:L75875a:{c.instructions+=2;NFSU2_TR(0x75875a);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75875e:{NFSU2_TR(0x75875e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x758763ull));
TAIL_STATIC(0x76115eu,761);
}
B758763:L758763:{c.instructions+=2;NFSU2_TR(0x758763);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x74ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x74ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x74ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B758766:{NFSU2_TR(0x758766);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B758770:L758770:{c.instructions+=6;NFSU2_TR(0x758770);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x60ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x60ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B758773:{NFSU2_TR(0x758773);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B758778:{NFSU2_TR(0x758778);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75877c:{NFSU2_TR(0x75877c);
__builtin_memmove((R+0),(R+16),4);
}
B75877f:{NFSU2_TR(0x75877f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758780:{NFSU2_TR(0x758780);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x758785ull));
TAIL_STATIC(0x75b250u,75b);
}
B758785:L758785:{c.instructions+=7;NFSU2_TR(0x758785);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B758789:{NFSU2_TR(0x758789);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75878d:{NFSU2_TR(0x75878d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75878e:{NFSU2_TR(0x75878e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75878f:{NFSU2_TR(0x75878f);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B758793:{NFSU2_TR(0x758793);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758794:{NFSU2_TR(0x758794);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x758799ull));
TAIL_STATIC(0x75b290u,75b);
}
B758799:L758799:{c.instructions+=6;NFSU2_TR(0x758799);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75879d:{NFSU2_TR(0x75879d);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75879f:{NFSU2_TR(0x75879f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7587a0:{NFSU2_TR(0x7587a0);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B7587a4:{NFSU2_TR(0x7587a4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7587a5:{NFSU2_TR(0x7587a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7587aaull));
TAIL_STATIC(0x75b350u,75b);
}
B7587aa:L7587aa:{c.instructions+=2;NFSU2_TR(0x7587aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7587ae:{NFSU2_TR(0x7587ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7587b3ull));
TAIL_STATIC(0x76115eu,761);
}
B7587b3:L7587b3:{c.instructions+=2;NFSU2_TR(0x7587b3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x7cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x7cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x7cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7587b6:{NFSU2_TR(0x7587b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7587c0:L7587c0:{c.instructions+=18;NFSU2_TR(0x7587c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x51cull))));
}
B7587c6:{NFSU2_TR(0x7587c6);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B7587cb:{NFSU2_TR(0x7587cb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7587cc:{NFSU2_TR(0x7587cc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7587cd:{NFSU2_TR(0x7587cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x520ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7587d4:{NFSU2_TR(0x7587d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x528ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7587db:{NFSU2_TR(0x7587db);
__builtin_memmove((R+28),(R+4),4);
}
B7587dd:{NFSU2_TR(0x7587dd);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7587df:{NFSU2_TR(0x7587df);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7587e2:{NFSU2_TR(0x7587e2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7587e3:{NFSU2_TR(0x7587e3);
__builtin_memmove((R+24),(R+8),4);
}
B7587e5:{NFSU2_TR(0x7587e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7587e8:{NFSU2_TR(0x7587e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7587eb:{NFSU2_TR(0x7587eb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7587ec:{NFSU2_TR(0x7587ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7587ed:{NFSU2_TR(0x7587ed);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B7587f1:{NFSU2_TR(0x7587f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7587f2:{NFSU2_TR(0x7587f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7587f7ull));
TAIL_STATIC(0x75bab0u,75b);
}
B7587f7:L7587f7:{c.instructions+=6;NFSU2_TR(0x7587f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x540ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7587fe:{NFSU2_TR(0x7587fe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7587ff:{NFSU2_TR(0x7587ff);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758800:{NFSU2_TR(0x758800);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B758804:{NFSU2_TR(0x758804);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758805:{NFSU2_TR(0x758805);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75880aull));
TAIL_STATIC(0x75bbb0u,75b);
}
B75880a:L75880a:{c.instructions+=3;NFSU2_TR(0x75880a);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B75880e:{NFSU2_TR(0x75880e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75880f:{NFSU2_TR(0x75880f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x758814ull));
TAIL_STATIC(0x75bbd0u,75b);
}
B758814:L758814:{c.instructions+=7;NFSU2_TR(0x758814);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffffeull))));
}
B758817:{NFSU2_TR(0x758817);
__builtin_memmove((R+4),(R+28),4);
}
B758819:{NFSU2_TR(0x758819);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+28))));
}
B75881b:{NFSU2_TR(0x75881b);
u8 U[8];
w4(U+0,u32(u32(u32(0x554ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B758822:{NFSU2_TR(0x758822);
__builtin_memmove((R+8),(R+4),4);
}
B758824:{NFSU2_TR(0x758824);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B758827:{NFSU2_TR(0x758827);
u8 U[12];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B75882b:L75882b:{c.instructions+=1;NFSU2_TR(0x75882b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L75882d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75882bu);}goto L75882b;}
}
B75882d:L75882d:{c.instructions+=3;NFSU2_TR(0x75882d);
__builtin_memmove((R+4),(R+8),4);
}
B75882f:{NFSU2_TR(0x75882f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B758832:{NFSU2_TR(0x758832);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B758835:L758835:{c.instructions+=1;NFSU2_TR(0x758835);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L758837;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758835u);}goto L758835;}
}
B758837:L758837:{c.instructions+=4;NFSU2_TR(0x758837);
u8 U[8];
w4(U+0,u32(u32(u32(0x520ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75883e:{NFSU2_TR(0x75883e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75883f:{NFSU2_TR(0x75883f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B758840:{NFSU2_TR(0x758840);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x758845ull));
TAIL_STATIC(0x76115eu,761);
}
B758845:L758845:{c.instructions+=2;NFSU2_TR(0x758845);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x51cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x51cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x51cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75884b:{NFSU2_TR(0x75884b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B758850:L758850:{c.instructions+=2;NFSU2_TR(0x758850);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758852:{NFSU2_TR(0x758852);
if(r1(R+518)){{goto L75885a;}}
}
B758854:L758854:{c.instructions+=1;NFSU2_TR(0x758854);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B75885a:L75885a:{c.instructions+=2;NFSU2_TR(0x75885a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75885c:{NFSU2_TR(0x75885c);
if(r1(R+518)){{goto L758864;}}
}
B75885e:L75885e:{c.instructions+=1;NFSU2_TR(0x75885e);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B758864:L758864:{c.instructions+=2;NFSU2_TR(0x758864);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758866:{NFSU2_TR(0x758866);
if(r1(R+518)){{goto L75887a;}}
}
B758868:L758868:{c.instructions+=2;NFSU2_TR(0x758868);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75886a:{NFSU2_TR(0x75886a);
if(r1(R+518)){{goto L75887a;}}
}
B75886c:L75886c:{c.instructions+=2;NFSU2_TR(0x75886c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75886e:{NFSU2_TR(0x75886e);
if(r1(R+518)){{goto L758875;}}
}
B758870:L758870:{c.instructions+=2;NFSU2_TR(0x758870);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+8,u32(r1(U+0)));
}
B758873:{NFSU2_TR(0x758873);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B758875:L758875:{c.instructions+=3;NFSU2_TR(0x758875);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B758876:{NFSU2_TR(0x758876);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758878:{NFSU2_TR(0x758878);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75887d;}}
}
B75887a:L75887a:{c.instructions+=2;NFSU2_TR(0x75887a);
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
B75887c:{NFSU2_TR(0x75887c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75887d:L75887d:{c.instructions+=5;NFSU2_TR(0x75887d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+4,u32(r1(U+0)));
}
B758880:{NFSU2_TR(0x758880);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B758881:{NFSU2_TR(0x758881);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x7full))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758884:{NFSU2_TR(0x758884);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758885:{NFSU2_TR(0x758885);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7588a5;}}
}
B758887:L758887:{c.instructions+=4;NFSU2_TR(0x758887);
__builtin_memmove((R+8),(R+4),4);
}
B758889:{NFSU2_TR(0x758889);
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7full))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B75888c:{NFSU2_TR(0x75888c);
w4(R+4,u32(0x0ull));
}
B758891:{NFSU2_TR(0x758891);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7588a5;}}
}
B758893:L758893:{c.instructions+=2;NFSU2_TR(0x758893);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758895:{NFSU2_TR(0x758895);
if(r1(R+518)){{goto L7588ad;}}
}
B758897:L758897:{c.instructions+=7;NFSU2_TR(0x758897);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+12,u32(r1(U+0)));
}
B75889a:{NFSU2_TR(0x75889a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B75889d:{NFSU2_TR(0x75889d);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+12))));
}
B75889f:{NFSU2_TR(0x75889f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7588a0:{NFSU2_TR(0x7588a0);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B7588a1:{NFSU2_TR(0x7588a1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7588a3:{NFSU2_TR(0x7588a3);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758893u);}goto L758893;}}
}
B7588a5:L7588a5:{c.instructions+=2;NFSU2_TR(0x7588a5);
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
B7588a7:{NFSU2_TR(0x7588a7);
if(r1(R+518)){{goto L7588ab;}}
}
B7588a9:L7588a9:{c.instructions+=1;NFSU2_TR(0x7588a9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B7588ab:L7588ab:{c.instructions+=2;NFSU2_TR(0x7588ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7588ac:{NFSU2_TR(0x7588ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7588ad:L7588ad:{c.instructions+=3;NFSU2_TR(0x7588ad);
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
B7588af:{NFSU2_TR(0x7588af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7588b0:{NFSU2_TR(0x7588b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7588c0:L7588c0:{c.instructions+=8;NFSU2_TR(0x7588c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7588c1:{NFSU2_TR(0x7588c1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7588c2:{NFSU2_TR(0x7588c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B7588c6:{NFSU2_TR(0x7588c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7588c7:{NFSU2_TR(0x7588c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7588c8:{NFSU2_TR(0x7588c8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B7588ca:{NFSU2_TR(0x7588ca);
w4(R+8,u32(0x7d35b4ull));
}
B7588cf:{NFSU2_TR(0x7588cf);
}
B7588d0:L7588d0:{c.instructions+=3;NFSU2_TR(0x7588d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B7588d2:{NFSU2_TR(0x7588d2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7588d4:{NFSU2_TR(0x7588d4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7588e3;}}
}
B7588d6:L7588d6:{c.instructions+=3;NFSU2_TR(0x7588d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7588da:{NFSU2_TR(0x7588da);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7588dd:{NFSU2_TR(0x7588dd);
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
B7588df:L7588df:{c.instructions+=1;NFSU2_TR(0x7588df);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L7588e1;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7588dfu);}goto L7588df;}}
}
B7588e1:L7588e1:{c.instructions+=1;NFSU2_TR(0x7588e1);
if(r1(R+518)){{goto L7588f5;}}
}
B7588e3:L7588e3:{c.instructions+=5;NFSU2_TR(0x7588e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7588e6:{NFSU2_TR(0x7588e6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x18ull))));
}
B7588e9:{NFSU2_TR(0x7588e9);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B7588ea:{NFSU2_TR(0x7588ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7588ec:{NFSU2_TR(0x7588ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7588d0u);}goto L7588d0;}}
}
B7588ee:L7588ee:{c.instructions+=6;NFSU2_TR(0x7588ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7588ef:{NFSU2_TR(0x7588ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7588f0:{NFSU2_TR(0x7588f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7588f1:{NFSU2_TR(0x7588f1);
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
B7588f3:{NFSU2_TR(0x7588f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7588f4:{NFSU2_TR(0x7588f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7588f5:L7588f5:{c.instructions+=7;NFSU2_TR(0x7588f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7588f6:{NFSU2_TR(0x7588f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7588f7:{NFSU2_TR(0x7588f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B7588fa:{NFSU2_TR(0x7588fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x7d35b0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B758901:{NFSU2_TR(0x758901);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B758902:{NFSU2_TR(0x758902);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B758903:{NFSU2_TR(0x758903);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B758910:L758910:{c.instructions+=13;NFSU2_TR(0x758910);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x48ull))));
}
B758913:{NFSU2_TR(0x758913);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B758918:{NFSU2_TR(0x758918);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75891c:{NFSU2_TR(0x75891c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75891d:{NFSU2_TR(0x75891d);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B758921:{NFSU2_TR(0x758921);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B758925:{NFSU2_TR(0x758925);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758926:{NFSU2_TR(0x758926);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B758929:{NFSU2_TR(0x758929);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75892a:{NFSU2_TR(0x75892a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75892b:{NFSU2_TR(0x75892b);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75892f:{NFSU2_TR(0x75892f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B758931:{NFSU2_TR(0x758931);
w4(R+4,u32(0x132ull));
}
B758936:L758936:{c.instructions+=1;NFSU2_TR(0x758936);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L758938;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758936u);}goto L758936;}
}
B758938:L758938:{c.instructions+=6;NFSU2_TR(0x758938);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B75893c:{NFSU2_TR(0x75893c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B758940:{NFSU2_TR(0x758940);
__builtin_memmove((R+28),(R+20),4);
}
B758942:{NFSU2_TR(0x758942);
__builtin_memmove((R+0),(R+8),4);
}
B758944:{NFSU2_TR(0x758944);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B758948:{NFSU2_TR(0x758948);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75894dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758850u);}goto L758850;}
}
B75894d:L75894d:{c.instructions+=2;NFSU2_TR(0x75894d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75894f:{NFSU2_TR(0x75894f);
if(r1(R+518)){TAIL_STATIC(0x759651u,759);}
}
B758955:L758955:{c.instructions+=4;NFSU2_TR(0x758955);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B758959:{NFSU2_TR(0x758959);
w4(R+12,u32(0x30ull));
}
B75895e:{NFSU2_TR(0x75895e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758960:{NFSU2_TR(0x758960);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x759651u,759);}
}
B758966:L758966:{c.instructions+=3;NFSU2_TR(0x758966);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B75896a:{NFSU2_TR(0x75896a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75896e:{NFSU2_TR(0x75896e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x758973ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758850u);}goto L758850;}
}
B758973:L758973:{c.instructions+=2;NFSU2_TR(0x758973);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758975:{NFSU2_TR(0x758975);
if(r1(R+518)){TAIL_STATIC(0x75963bu,759);}
}
B75897b:L75897b:{c.instructions+=2;NFSU2_TR(0x75897b);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75897f:{NFSU2_TR(0x75897f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x75963bu,759);}
}
B758985:L758985:{c.instructions+=7;NFSU2_TR(0x758985);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B758989:{NFSU2_TR(0x758989);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B75898c:{NFSU2_TR(0x75898c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B75898f:{NFSU2_TR(0x75898f);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B758992:{NFSU2_TR(0x758992);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B758996:{NFSU2_TR(0x758996);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75899a:{NFSU2_TR(0x75899a);
if(r1(R+518)){{goto L7589f2;}}
}
B75899c:L75899c:{c.instructions+=2;NFSU2_TR(0x75899c);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75899e:{NFSU2_TR(0x75899e);
if(r1(R+518)){{goto L7589da;}}
}
B7589a0:L7589a0:{c.instructions+=3;NFSU2_TR(0x7589a0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7589a1:{NFSU2_TR(0x7589a1);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7589a3:{NFSU2_TR(0x7589a3);
if(r1(R+518)){{goto L7589da;}}
}
B7589a5:L7589a5:{c.instructions+=4;NFSU2_TR(0x7589a5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+4,u32(r1(U+0)));
}
B7589a8:{NFSU2_TR(0x7589a8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7589a9:{NFSU2_TR(0x7589a9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x7full))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7589ac:{NFSU2_TR(0x7589ac);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7589d2;}}
}
B7589ae:L7589ae:{c.instructions+=4;NFSU2_TR(0x7589ae);
__builtin_memmove((R+8),(R+4),4);
}
B7589b0:{NFSU2_TR(0x7589b0);
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7full))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B7589b3:{NFSU2_TR(0x7589b3);
w4(R+4,u32(0x0ull));
}
B7589b8:{NFSU2_TR(0x7589b8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7589d2;}}
}
B7589ba:L7589ba:{c.instructions+=1;NFSU2_TR(0x7589ba);
__builtin_memmove((R+12),(R+12),4);
}
B7589c0:L7589c0:{c.instructions+=2;NFSU2_TR(0x7589c0);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7589c2:{NFSU2_TR(0x7589c2);
if(r1(R+518)){{goto L7589da;}}
}
B7589c4:L7589c4:{c.instructions+=7;NFSU2_TR(0x7589c4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+24,u32(r1(U+0)));
}
B7589c7:{NFSU2_TR(0x7589c7);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B7589ca:{NFSU2_TR(0x7589ca);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+24))));
}
B7589cc:{NFSU2_TR(0x7589cc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7589cd:{NFSU2_TR(0x7589cd);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B7589ce:{NFSU2_TR(0x7589ce);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7589d0:{NFSU2_TR(0x7589d0);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7589c0u);}goto L7589c0;}}
}
B7589d2:L7589d2:{c.instructions+=3;NFSU2_TR(0x7589d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7589d4:{NFSU2_TR(0x7589d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7589d8:{NFSU2_TR(0x7589d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7589f0;}}
}
B7589da:L7589da:{c.instructions+=7;NFSU2_TR(0x7589da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7589db:{NFSU2_TR(0x7589db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7589dc:{NFSU2_TR(0x7589dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7589dd:{NFSU2_TR(0x7589dd);
w4(R+0,u32(0xfffffffdull));
}
B7589e2:{NFSU2_TR(0x7589e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7589e3:{NFSU2_TR(0x7589e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7589e7:{NFSU2_TR(0x7589e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7589ecull));
TAIL_STATIC(0x76115eu,761);
}
B7589ec:L7589ec:{c.instructions+=2;NFSU2_TR(0x7589ec);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x48ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7589ef:{NFSU2_TR(0x7589ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7589f0:L7589f0:{c.instructions+=1;NFSU2_TR(0x7589f0);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B7589f2:L7589f2:{c.instructions+=4;NFSU2_TR(0x7589f2);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B7589f6:{NFSU2_TR(0x7589f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B7589fa:{NFSU2_TR(0x7589fa);
__builtin_memmove((R+28),(R+12),4);
}
B7589fc:{NFSU2_TR(0x7589fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x758a01ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758850u);}goto L758850;}
}
B758a01:L758a01:{c.instructions+=2;NFSU2_TR(0x758a01);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758a03:{NFSU2_TR(0x758a03);
if(r1(R+518)){TAIL_STATIC(0x759625u,759);}
}
B758a09:L758a09:{c.instructions+=3;NFSU2_TR(0x758a09);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B758a0d:{NFSU2_TR(0x758a0d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B758a0f:{NFSU2_TR(0x758a0f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x759625u,759);}
}
B758a15:L758a15:{c.instructions+=2;NFSU2_TR(0x758a15);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x20ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758a18:{NFSU2_TR(0x758a18);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x759625u,759);}
}
B758a1e:L758a1e:{c.instructions+=7;NFSU2_TR(0x758a1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B758a22:{NFSU2_TR(0x758a22);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B758a28:{NFSU2_TR(0x758a28);
__builtin_memmove((R+4),(R+8),4);
}
B758a2a:{NFSU2_TR(0x758a2a);
__builtin_memmove((R+20),(R+4),4);
}
B758a2c:{NFSU2_TR(0x758a2c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B758a2f:{NFSU2_TR(0x758a2f);
__builtin_memmove((R+24),(R+0),4);
}
B758a31:{NFSU2_TR(0x758a31);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1c8ull))));
}
B758a37:L758a37:{c.instructions+=1;NFSU2_TR(0x758a37);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L758a39;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758a37u);}goto L758a37;}
}
B758a39:L758a39:{c.instructions+=2;NFSU2_TR(0x758a39);
__builtin_memmove((R+4),(R+20),4);
}
B758a3b:{NFSU2_TR(0x758a3b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B758a3e:L758a3e:{c.instructions+=1;NFSU2_TR(0x758a3e);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L758a40;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758a3eu);}goto L758a3e;}
}
B758a40:L758a40:{c.instructions+=5;NFSU2_TR(0x758a40);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B758a42:{NFSU2_TR(0x758a42);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B758a46:{NFSU2_TR(0x758a46);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B758a4a:{NFSU2_TR(0x758a4a);
__builtin_memmove((R+28),(R+12),4);
}
B758a4c:{NFSU2_TR(0x758a4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x758a51ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758850u);}goto L758850;}
}
B758a51:L758a51:{c.instructions+=2;NFSU2_TR(0x758a51);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758a53:{NFSU2_TR(0x758a53);
if(r1(R+518)){TAIL_STATIC(0x75960fu,759);}
}
B758a59:L758a59:{c.instructions+=2;NFSU2_TR(0x758a59);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x30ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B758a5e:{NFSU2_TR(0x758a5e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x75960fu,759);}
}
B758a64:L758a64:{c.instructions+=5;NFSU2_TR(0x758a64);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B758a68:{NFSU2_TR(0x758a68);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B758a6b:{NFSU2_TR(0x758a6b);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B758a6f:{NFSU2_TR(0x758a6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B758a73:{NFSU2_TR(0x758a73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x758a78ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758850u);}goto L758850;}
}
B758a78:L758a78:{c.instructions+=2;NFSU2_TR(0x758a78);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758a7a:{NFSU2_TR(0x758a7a);
if(r1(R+518)){TAIL_STATIC(0x7595f9u,759);}
}
B758a80:L758a80:{c.instructions+=2;NFSU2_TR(0x758a80);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B758a85:{NFSU2_TR(0x758a85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x7595f9u,759);}
}
B758a8b:L758a8b:{c.instructions+=4;NFSU2_TR(0x758a8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B758a8f:{NFSU2_TR(0x758a8f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758a90:{NFSU2_TR(0x758a90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758a91:{NFSU2_TR(0x758a91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x758a96ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7588c0u);}goto L7588c0;}
}
B758a96:L758a96:{c.instructions+=5;NFSU2_TR(0x758a96);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B758a9a:{NFSU2_TR(0x758a9a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B758a9d:{NFSU2_TR(0x758a9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758a9f:{NFSU2_TR(0x758a9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1e8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B758aa5:{NFSU2_TR(0x758aa5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L758abd;}}
}
B758aa7:L758aa7:{c.instructions+=7;NFSU2_TR(0x758aa7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B758aa8:{NFSU2_TR(0x758aa8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B758aa9:{NFSU2_TR(0x758aa9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B758aaa:{NFSU2_TR(0x758aaa);
w4(R+0,u32(0xfffffff9ull));
}
B758aaf:{NFSU2_TR(0x758aaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B758ab0:{NFSU2_TR(0x758ab0);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B758ab4:{NFSU2_TR(0x758ab4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x758ab9ull));
TAIL_STATIC(0x76115eu,761);
}
B758ab9:L758ab9:{c.instructions+=2;NFSU2_TR(0x758ab9);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x48ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B758abc:{NFSU2_TR(0x758abc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B758abd:L758abd:{c.instructions+=5;NFSU2_TR(0x758abd);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B758ac1:{NFSU2_TR(0x758ac1);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B758ac5:{NFSU2_TR(0x758ac5);
__builtin_memmove((R+28),(R+12),4);
}
B758ac7:{NFSU2_TR(0x758ac7);
__builtin_memmove((R+0),(R+20),4);
}
B758ac9:{NFSU2_TR(0x758ac9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x758aceull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758850u);}goto L758850;}
}
B758ace:L758ace:{c.instructions+=2;NFSU2_TR(0x758ace);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758ad0:{NFSU2_TR(0x758ad0);
if(r1(R+518)){TAIL_STATIC(0x7595e3u,759);}
}
B758ad6:L758ad6:{c.instructions+=2;NFSU2_TR(0x758ad6);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x30ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B758adb:{NFSU2_TR(0x758adb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x7595e3u,759);}
}
B758ae1:L758ae1:{c.instructions+=6;NFSU2_TR(0x758ae1);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B758ae5:{NFSU2_TR(0x758ae5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B758ae8:{NFSU2_TR(0x758ae8);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B758aec:{NFSU2_TR(0x758aec);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B758af0:{NFSU2_TR(0x758af0);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B758af2:{NFSU2_TR(0x758af2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x758af7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758850u);}goto L758850;}
}
B758af7:L758af7:{c.instructions+=3;NFSU2_TR(0x758af7);
__builtin_memmove((R+12),(R+0),4);
}
B758af9:{NFSU2_TR(0x758af9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758afb:{NFSU2_TR(0x758afb);
if(r1(R+518)){{goto L758c9e;}}
}
B758b01:L758b01:{c.instructions+=4;NFSU2_TR(0x758b01);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B758b05:{NFSU2_TR(0x758b05);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x30ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758b08:{NFSU2_TR(0x758b08);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B758b0c:{NFSU2_TR(0x758b0c);
if(r1(R+518)){{goto L758c81;}}
}
B758b12:L758b12:{c.instructions+=2;NFSU2_TR(0x758b12);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x31ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758b15:{NFSU2_TR(0x758b15);
if(r1(R+518)){{goto L758c81;}}
}
B758b1b:L758b1b:{c.instructions+=3;NFSU2_TR(0x758b1b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758b1e:{NFSU2_TR(0x758b1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B758b22:{NFSU2_TR(0x758b22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L758b35;}}
}
B758b24:L758b24:{c.instructions+=3;NFSU2_TR(0x758b24);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758b25:{NFSU2_TR(0x758b25);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758b26:{NFSU2_TR(0x758b26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x758b2bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7588c0u);}goto L7588c0;}
}
B758b2b:L758b2b:{c.instructions+=3;NFSU2_TR(0x758b2b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B758b2e:{NFSU2_TR(0x758b2e);
__builtin_memmove((R+20),(R+0),4);
}
B758b30:{NFSU2_TR(0x758b30);
{goto L758c7f;}
}
B758b35:L758b35:{c.instructions+=2;NFSU2_TR(0x758b35);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758b38:{NFSU2_TR(0x758b38);
if(r1(R+518)){{goto L758b43;}}
}
B758b3a:L758b3a:{c.instructions+=2;NFSU2_TR(0x758b3a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x14ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758b3d:{NFSU2_TR(0x758b3d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L758c7f;}}
}
B758b43:L758b43:{c.instructions+=2;NFSU2_TR(0x758b43);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758b46:{NFSU2_TR(0x758b46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L758b7d;}}
}
B758b48:L758b48:{c.instructions+=4;NFSU2_TR(0x758b48);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758b4a:{NFSU2_TR(0x758b4a);
w4(R+4,u32(0x20ull));
}
B758b4f:{NFSU2_TR(0x758b4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B758b52:{NFSU2_TR(0x758b52);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L758c7a;}}
}
B758b58:L758b58:{c.instructions+=3;NFSU2_TR(0x758b58);
__builtin_memmove((R+28),(R+12),4);
}
B758b5a:{NFSU2_TR(0x758b5a);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B758b5c:{NFSU2_TR(0x758b5c);
__builtin_memmove((R+16),(R+16),4);
}
B758b60:L758b60:{c.instructions+=2;NFSU2_TR(0x758b60);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758b63:{NFSU2_TR(0x758b63);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L758c76;}}
}
B758b69:L758b69:{c.instructions+=7;NFSU2_TR(0x758b69);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B758b6c:{NFSU2_TR(0x758b6c);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B758b6e:{NFSU2_TR(0x758b6e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B758b6f:{NFSU2_TR(0x758b6f);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B758b70:{NFSU2_TR(0x758b70);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B758b74:{NFSU2_TR(0x758b74);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758b76:{NFSU2_TR(0x758b76);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758b60u);}goto L758b60;}}
}
B758b78:L758b78:{c.instructions+=1;NFSU2_TR(0x758b78);
{goto L758c76;}
}
B758b7d:L758b7d:{c.instructions+=2;NFSU2_TR(0x758b7d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758b80:{NFSU2_TR(0x758b80);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L758bb3;}}
}
B758b82:L758b82:{c.instructions+=4;NFSU2_TR(0x758b82);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758b84:{NFSU2_TR(0x758b84);
w4(R+4,u32(0x20ull));
}
B758b89:{NFSU2_TR(0x758b89);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B758b8c:{NFSU2_TR(0x758b8c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L758c7a;}}
}
B758b92:L758b92:{c.instructions+=2;NFSU2_TR(0x758b92);
__builtin_memmove((R+28),(R+12),4);
}
B758b94:{NFSU2_TR(0x758b94);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B758b96:L758b96:{c.instructions+=2;NFSU2_TR(0x758b96);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758b99:{NFSU2_TR(0x758b99);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L758c76;}}
}
B758b9f:L758b9f:{c.instructions+=7;NFSU2_TR(0x758b9f);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B758ba2:{NFSU2_TR(0x758ba2);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B758ba4:{NFSU2_TR(0x758ba4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B758ba5:{NFSU2_TR(0x758ba5);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B758ba6:{NFSU2_TR(0x758ba6);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B758baa:{NFSU2_TR(0x758baa);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758bac:{NFSU2_TR(0x758bac);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758b96u);}goto L758b96;}}
}
B758bae:L758bae:{c.instructions+=1;NFSU2_TR(0x758bae);
{goto L758c76;}
}
B758bb3:L758bb3:{c.instructions+=2;NFSU2_TR(0x758bb3);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758bb6:{NFSU2_TR(0x758bb6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L758bed;}}
}
B758bb8:L758bb8:{c.instructions+=4;NFSU2_TR(0x758bb8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758bba:{NFSU2_TR(0x758bba);
w4(R+4,u32(0x20ull));
}
B758bbf:{NFSU2_TR(0x758bbf);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
__builtin_memmove((R+0),(U+0),4);
}
B758bc2:{NFSU2_TR(0x758bc2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L758c7a;}}
}
B758bc8:L758bc8:{c.instructions+=3;NFSU2_TR(0x758bc8);
__builtin_memmove((R+28),(R+12),4);
}
B758bca:{NFSU2_TR(0x758bca);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B758bcc:{NFSU2_TR(0x758bcc);
__builtin_memmove((R+16),(R+16),4);
}
B758bd0:L758bd0:{c.instructions+=2;NFSU2_TR(0x758bd0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758bd3:{NFSU2_TR(0x758bd3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L758c76;}}
}
B758bd9:L758bd9:{c.instructions+=7;NFSU2_TR(0x758bd9);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B758bdc:{NFSU2_TR(0x758bdc);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B758bde:{NFSU2_TR(0x758bde);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B758bdf:{NFSU2_TR(0x758bdf);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B758be0:{NFSU2_TR(0x758be0);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B758be4:{NFSU2_TR(0x758be4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758be6:{NFSU2_TR(0x758be6);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758bd0u);}goto L758bd0;}}
}
B758be8:L758be8:{c.instructions+=1;NFSU2_TR(0x758be8);
{goto L758c76;}
}
B758bed:L758bed:{c.instructions+=2;NFSU2_TR(0x758bed);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758bf0:{NFSU2_TR(0x758bf0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L758c1c;}}
}
B758bf2:L758bf2:{c.instructions+=4;NFSU2_TR(0x758bf2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758bf4:{NFSU2_TR(0x758bf4);
w4(R+4,u32(0x20ull));
}
B758bf9:{NFSU2_TR(0x758bf9);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x64ull))));
__builtin_memmove((R+0),(U+0),4);
}
B758bfc:{NFSU2_TR(0x758bfc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L758c7a;}}
}
B758c02:L758c02:{c.instructions+=2;NFSU2_TR(0x758c02);
__builtin_memmove((R+28),(R+12),4);
}
B758c04:{NFSU2_TR(0x758c04);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B758c06:L758c06:{c.instructions+=2;NFSU2_TR(0x758c06);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758c09:{NFSU2_TR(0x758c09);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L758c76;}}
}
B758c0b:L758c0b:{c.instructions+=7;NFSU2_TR(0x758c0b);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B758c0e:{NFSU2_TR(0x758c0e);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B758c10:{NFSU2_TR(0x758c10);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B758c11:{NFSU2_TR(0x758c11);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B758c12:{NFSU2_TR(0x758c12);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B758c16:{NFSU2_TR(0x758c16);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758c18:{NFSU2_TR(0x758c18);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758c06u);}goto L758c06;}}
}
B758c1a:L758c1a:{c.instructions+=1;NFSU2_TR(0x758c1a);
{goto L758c76;}
}
B758c1c:L758c1c:{c.instructions+=2;NFSU2_TR(0x758c1c);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758c1f:{NFSU2_TR(0x758c1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L758c4a;}}
}
B758c21:L758c21:{c.instructions+=4;NFSU2_TR(0x758c21);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758c23:{NFSU2_TR(0x758c23);
w4(R+4,u32(0x20ull));
}
B758c28:{NFSU2_TR(0x758c28);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x84ull))));
__builtin_memmove((R+0),(U+0),4);
}
B758c2e:{NFSU2_TR(0x758c2e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L758c7a;}}
}
B758c30:L758c30:{c.instructions+=2;NFSU2_TR(0x758c30);
__builtin_memmove((R+28),(R+12),4);
}
B758c32:{NFSU2_TR(0x758c32);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B758c34:L758c34:{c.instructions+=2;NFSU2_TR(0x758c34);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758c37:{NFSU2_TR(0x758c37);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L758c76;}}
}
B758c39:L758c39:{c.instructions+=7;NFSU2_TR(0x758c39);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B758c3c:{NFSU2_TR(0x758c3c);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B758c3e:{NFSU2_TR(0x758c3e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B758c3f:{NFSU2_TR(0x758c3f);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B758c40:{NFSU2_TR(0x758c40);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B758c44:{NFSU2_TR(0x758c44);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758c46:{NFSU2_TR(0x758c46);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758c34u);}goto L758c34;}}
}
B758c48:L758c48:{c.instructions+=1;NFSU2_TR(0x758c48);
{goto L758c76;}
}
B758c4a:L758c4a:{c.instructions+=2;NFSU2_TR(0x758c4a);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758c4d:{NFSU2_TR(0x758c4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L758c7d;}}
}
B758c4f:L758c4f:{c.instructions+=4;NFSU2_TR(0x758c4f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758c51:{NFSU2_TR(0x758c51);
w4(R+4,u32(0x20ull));
}
B758c56:{NFSU2_TR(0x758c56);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xa4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B758c5c:{NFSU2_TR(0x758c5c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L758c7a;}}
}
B758c5e:L758c5e:{c.instructions+=2;NFSU2_TR(0x758c5e);
__builtin_memmove((R+28),(R+12),4);
}
B758c60:{NFSU2_TR(0x758c60);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B758c62:L758c62:{c.instructions+=2;NFSU2_TR(0x758c62);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758c65:{NFSU2_TR(0x758c65);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L758c76;}}
}
B758c67:L758c67:{c.instructions+=7;NFSU2_TR(0x758c67);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B758c6a:{NFSU2_TR(0x758c6a);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B758c6c:{NFSU2_TR(0x758c6c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B758c6d:{NFSU2_TR(0x758c6d);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B758c6e:{NFSU2_TR(0x758c6e);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B758c72:{NFSU2_TR(0x758c72);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758c74:{NFSU2_TR(0x758c74);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758c62u);}goto L758c62;}}
}
B758c76:L758c76:{c.instructions+=2;NFSU2_TR(0x758c76);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758c78:{NFSU2_TR(0x758c78);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L758c7d;}}
}
B758c7a:L758c7a:{c.instructions+=1;NFSU2_TR(0x758c7a);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B758c7d:L758c7d:{c.instructions+=1;NFSU2_TR(0x758c7d);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B758c7f:L758c7f:{c.instructions+=1;NFSU2_TR(0x758c7f);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+24))));
}
B758c81:L758c81:{c.instructions+=5;NFSU2_TR(0x758c81);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B758c85:{NFSU2_TR(0x758c85);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B758c89:{NFSU2_TR(0x758c89);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B758c8d:{NFSU2_TR(0x758c8d);
__builtin_memmove((R+0),(R+12),4);
}
B758c8f:{NFSU2_TR(0x758c8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x758c94ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758850u);}goto L758850;}
}
B758c94:L758c94:{c.instructions+=3;NFSU2_TR(0x758c94);
__builtin_memmove((R+12),(R+0),4);
}
B758c96:{NFSU2_TR(0x758c96);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758c98:{NFSU2_TR(0x758c98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758b01u);}goto L758b01;}}
}
B758c9e:L758c9e:{c.instructions+=5;NFSU2_TR(0x758c9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B758ca2:{NFSU2_TR(0x758ca2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B758ca6:{NFSU2_TR(0x758ca6);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B758caa:{NFSU2_TR(0x758caa);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B758cae:{NFSU2_TR(0x758cae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x758cb3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758850u);}goto L758850;}
}
B758cb3:L758cb3:{c.instructions+=2;NFSU2_TR(0x758cb3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758cb5:{NFSU2_TR(0x758cb5);
if(r1(R+518)){TAIL_STATIC(0x7595cdu,759);}
}
B758cbb:L758cbb:{c.instructions+=2;NFSU2_TR(0x758cbb);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x30ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B758cc0:{NFSU2_TR(0x758cc0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x7595cdu,759);}
}
B758cc6:L758cc6:{c.instructions+=2;NFSU2_TR(0x758cc6);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B758cca:{NFSU2_TR(0x758cca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x758ccfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758850u);}goto L758850;}
}
B758ccf:L758ccf:{c.instructions+=3;NFSU2_TR(0x758ccf);
__builtin_memmove((R+20),(R+0),4);
}
B758cd1:{NFSU2_TR(0x758cd1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758cd3:{NFSU2_TR(0x758cd3);
if(r1(R+518)){TAIL_STATIC(0x7595b7u,759);}
}
B758cd9:L758cd9:{c.instructions+=4;NFSU2_TR(0x758cd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B758cdd:{NFSU2_TR(0x758cdd);
w4(R+12,u32(0x17ull));
}
B758ce2:{NFSU2_TR(0x758ce2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758ce4:{NFSU2_TR(0x758ce4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x7595b7u,759);}
}
B758cea:L758cea:{c.instructions+=6;NFSU2_TR(0x758cea);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B758cee:{NFSU2_TR(0x758cee);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B758cf2:{NFSU2_TR(0x758cf2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x184ull))));
}
B758cf8:{NFSU2_TR(0x758cf8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758cfa:{NFSU2_TR(0x758cfa);
w4(R+8,u32(0x20ull));
}
B758cff:{NFSU2_TR(0x758cff);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L758d1d;}}
}
B758d01:L758d01:{c.instructions+=2;NFSU2_TR(0x758d01);
__builtin_memmove((R+28),(R+20),4);
}
B758d03:{NFSU2_TR(0x758d03);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B758d05:L758d05:{c.instructions+=2;NFSU2_TR(0x758d05);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758d08:{NFSU2_TR(0x758d08);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L758d19;}}
}
B758d0a:L758d0a:{c.instructions+=7;NFSU2_TR(0x758d0a);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B758d0d:{NFSU2_TR(0x758d0d);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B758d0f:{NFSU2_TR(0x758d0f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B758d10:{NFSU2_TR(0x758d10);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B758d11:{NFSU2_TR(0x758d11);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B758d15:{NFSU2_TR(0x758d15);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758d17:{NFSU2_TR(0x758d17);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758d05u);}goto L758d05;}}
}
B758d19:L758d19:{c.instructions+=2;NFSU2_TR(0x758d19);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758d1b:{NFSU2_TR(0x758d1b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L758d20;}}
}
B758d1d:L758d1d:{c.instructions+=1;NFSU2_TR(0x758d1d);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+4)),r1(U+0));
}
B758d20:L758d20:{c.instructions+=6;NFSU2_TR(0x758d20);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B758d24:{NFSU2_TR(0x758d24);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+24))));
}
B758d26:{NFSU2_TR(0x758d26);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B758d2a:{NFSU2_TR(0x758d2a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B758d2e:{NFSU2_TR(0x758d2e);
__builtin_memmove((R+0),(R+20),4);
}
B758d30:{NFSU2_TR(0x758d30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x758d35ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758850u);}goto L758850;}
}
B758d35:L758d35:{c.instructions+=3;NFSU2_TR(0x758d35);
__builtin_memmove((R+20),(R+0),4);
}
B758d37:{NFSU2_TR(0x758d37);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758d39:{NFSU2_TR(0x758d39);
if(r1(R+518)){TAIL_STATIC(0x7595a1u,759);}
}
B758d3f:L758d3f:{c.instructions+=2;NFSU2_TR(0x758d3f);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B758d43:{NFSU2_TR(0x758d43);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x7595a1u,759);}
}
B758d49:L758d49:{c.instructions+=6;NFSU2_TR(0x758d49);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B758d4d:{NFSU2_TR(0x758d4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B758d51:{NFSU2_TR(0x758d51);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1a4ull))));
}
B758d57:{NFSU2_TR(0x758d57);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758d59:{NFSU2_TR(0x758d59);
w4(R+8,u32(0x20ull));
}
B758d5e:{NFSU2_TR(0x758d5e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L758d7c;}}
}
B758d60:L758d60:{c.instructions+=2;NFSU2_TR(0x758d60);
__builtin_memmove((R+28),(R+20),4);
}
B758d62:{NFSU2_TR(0x758d62);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B758d64:L758d64:{c.instructions+=2;NFSU2_TR(0x758d64);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758d67:{NFSU2_TR(0x758d67);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L758d78;}}
}
B758d69:L758d69:{c.instructions+=7;NFSU2_TR(0x758d69);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B758d6c:{NFSU2_TR(0x758d6c);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B758d6e:{NFSU2_TR(0x758d6e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B758d6f:{NFSU2_TR(0x758d6f);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B758d70:{NFSU2_TR(0x758d70);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B758d74:{NFSU2_TR(0x758d74);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758d76:{NFSU2_TR(0x758d76);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758d64u);}goto L758d64;}}
}
B758d78:L758d78:{c.instructions+=2;NFSU2_TR(0x758d78);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758d7a:{NFSU2_TR(0x758d7a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L758d7f;}}
}
B758d7c:L758d7c:{c.instructions+=1;NFSU2_TR(0x758d7c);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+4)),r1(U+0));
}
B758d7f:L758d7f:{c.instructions+=6;NFSU2_TR(0x758d7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B758d83:{NFSU2_TR(0x758d83);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+24))));
}
B758d85:{NFSU2_TR(0x758d85);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B758d89:{NFSU2_TR(0x758d89);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B758d8d:{NFSU2_TR(0x758d8d);
__builtin_memmove((R+0),(R+20),4);
}
B758d8f:{NFSU2_TR(0x758d8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x758d94ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758850u);}goto L758850;}
}
B758d94:L758d94:{c.instructions+=2;NFSU2_TR(0x758d94);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758d96:{NFSU2_TR(0x758d96);
if(r1(R+518)){TAIL_STATIC(0x75958bu,759);}
}
B758d9c:L758d9c:{c.instructions+=2;NFSU2_TR(0x758d9c);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x30ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B758da1:{NFSU2_TR(0x758da1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x75958bu,759);}
}
B758da7:L758da7:{c.instructions+=6;NFSU2_TR(0x758da7);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B758dab:{NFSU2_TR(0x758dab);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B758dae:{NFSU2_TR(0x758dae);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B758db2:{NFSU2_TR(0x758db2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B758db6:{NFSU2_TR(0x758db6);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B758db8:{NFSU2_TR(0x758db8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x758dbdull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758850u);}goto L758850;}
}
B758dbd:L758dbd:{c.instructions+=4;NFSU2_TR(0x758dbd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758dbf:{NFSU2_TR(0x758dbf);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B758dc3:{NFSU2_TR(0x758dc3);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B758dc7:{NFSU2_TR(0x758dc7);
if(r1(R+518)){{goto L758f89;}}
}
B758dcd:L758dcd:{c.instructions+=1;NFSU2_TR(0x758dcd);
__builtin_memmove((R+4),(R+4),4);
}
B758dd0:L758dd0:{c.instructions+=3;NFSU2_TR(0x758dd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B758dd4:{NFSU2_TR(0x758dd4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x30ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758dd7:{NFSU2_TR(0x758dd7);
if(r1(R+518)){{goto L758f68;}}
}
B758ddd:L758ddd:{c.instructions+=2;NFSU2_TR(0x758ddd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x31ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758de0:{NFSU2_TR(0x758de0);
if(r1(R+518)){{goto L758f68;}}
}
B758de6:L758de6:{c.instructions+=3;NFSU2_TR(0x758de6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758de9:{NFSU2_TR(0x758de9);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B758ded:{NFSU2_TR(0x758ded);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L758e04;}}
}
B758def:L758def:{c.instructions+=4;NFSU2_TR(0x758def);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B758df3:{NFSU2_TR(0x758df3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758df4:{NFSU2_TR(0x758df4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758df5:{NFSU2_TR(0x758df5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x758dfaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7588c0u);}goto L7588c0;}
}
B758dfa:L758dfa:{c.instructions+=3;NFSU2_TR(0x758dfa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B758dfd:{NFSU2_TR(0x758dfd);
__builtin_memmove((R+20),(R+0),4);
}
B758dff:{NFSU2_TR(0x758dff);
{goto L758f64;}
}
B758e04:L758e04:{c.instructions+=2;NFSU2_TR(0x758e04);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758e07:{NFSU2_TR(0x758e07);
if(r1(R+518)){{goto L758e12;}}
}
B758e09:L758e09:{c.instructions+=2;NFSU2_TR(0x758e09);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x14ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758e0c:{NFSU2_TR(0x758e0c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L758f64;}}
}
B758e12:L758e12:{c.instructions+=2;NFSU2_TR(0x758e12);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758e15:{NFSU2_TR(0x758e15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L758e4d;}}
}
B758e17:L758e17:{c.instructions+=4;NFSU2_TR(0x758e17);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758e19:{NFSU2_TR(0x758e19);
w4(R+4,u32(0x20ull));
}
B758e1e:{NFSU2_TR(0x758e1e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B758e24:{NFSU2_TR(0x758e24);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L758f5f;}}
}
B758e2a:L758e2a:{c.instructions+=2;NFSU2_TR(0x758e2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B758e2e:{NFSU2_TR(0x758e2e);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B758e30:L758e30:{c.instructions+=2;NFSU2_TR(0x758e30);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758e33:{NFSU2_TR(0x758e33);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L758f5b;}}
}
B758e39:L758e39:{c.instructions+=7;NFSU2_TR(0x758e39);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B758e3c:{NFSU2_TR(0x758e3c);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B758e3e:{NFSU2_TR(0x758e3e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B758e3f:{NFSU2_TR(0x758e3f);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B758e40:{NFSU2_TR(0x758e40);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B758e44:{NFSU2_TR(0x758e44);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758e46:{NFSU2_TR(0x758e46);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758e30u);}goto L758e30;}}
}
B758e48:L758e48:{c.instructions+=1;NFSU2_TR(0x758e48);
{goto L758f5b;}
}
B758e4d:L758e4d:{c.instructions+=2;NFSU2_TR(0x758e4d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758e50:{NFSU2_TR(0x758e50);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L758e8d;}}
}
B758e52:L758e52:{c.instructions+=4;NFSU2_TR(0x758e52);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758e54:{NFSU2_TR(0x758e54);
w4(R+4,u32(0x20ull));
}
B758e59:{NFSU2_TR(0x758e59);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B758e5f:{NFSU2_TR(0x758e5f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L758f5f;}}
}
B758e65:L758e65:{c.instructions+=3;NFSU2_TR(0x758e65);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B758e69:{NFSU2_TR(0x758e69);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B758e6b:{NFSU2_TR(0x758e6b);
{goto L758e70;}
}
B758e70:L758e70:{c.instructions+=2;NFSU2_TR(0x758e70);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758e73:{NFSU2_TR(0x758e73);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L758f5b;}}
}
B758e79:L758e79:{c.instructions+=7;NFSU2_TR(0x758e79);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B758e7c:{NFSU2_TR(0x758e7c);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B758e7e:{NFSU2_TR(0x758e7e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B758e7f:{NFSU2_TR(0x758e7f);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B758e80:{NFSU2_TR(0x758e80);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B758e84:{NFSU2_TR(0x758e84);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758e86:{NFSU2_TR(0x758e86);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758e70u);}goto L758e70;}}
}
B758e88:L758e88:{c.instructions+=1;NFSU2_TR(0x758e88);
{goto L758f5b;}
}
B758e8d:L758e8d:{c.instructions+=2;NFSU2_TR(0x758e8d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758e90:{NFSU2_TR(0x758e90);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L758ecd;}}
}
B758e92:L758e92:{c.instructions+=4;NFSU2_TR(0x758e92);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758e94:{NFSU2_TR(0x758e94);
w4(R+4,u32(0x20ull));
}
B758e99:{NFSU2_TR(0x758e99);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x104ull))));
__builtin_memmove((R+0),(U+0),4);
}
B758e9f:{NFSU2_TR(0x758e9f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L758f5f;}}
}
B758ea5:L758ea5:{c.instructions+=3;NFSU2_TR(0x758ea5);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B758ea9:{NFSU2_TR(0x758ea9);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B758eab:{NFSU2_TR(0x758eab);
{goto L758eb0;}
}
B758eb0:L758eb0:{c.instructions+=2;NFSU2_TR(0x758eb0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758eb3:{NFSU2_TR(0x758eb3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L758f5b;}}
}
B758eb9:L758eb9:{c.instructions+=7;NFSU2_TR(0x758eb9);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B758ebc:{NFSU2_TR(0x758ebc);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B758ebe:{NFSU2_TR(0x758ebe);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B758ebf:{NFSU2_TR(0x758ebf);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B758ec0:{NFSU2_TR(0x758ec0);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B758ec4:{NFSU2_TR(0x758ec4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758ec6:{NFSU2_TR(0x758ec6);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758eb0u);}goto L758eb0;}}
}
B758ec8:L758ec8:{c.instructions+=1;NFSU2_TR(0x758ec8);
{goto L758f5b;}
}
B758ecd:L758ecd:{c.instructions+=2;NFSU2_TR(0x758ecd);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758ed0:{NFSU2_TR(0x758ed0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L758efd;}}
}
B758ed2:L758ed2:{c.instructions+=4;NFSU2_TR(0x758ed2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758ed4:{NFSU2_TR(0x758ed4);
w4(R+4,u32(0x20ull));
}
B758ed9:{NFSU2_TR(0x758ed9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x124ull))));
__builtin_memmove((R+0),(U+0),4);
}
B758edf:{NFSU2_TR(0x758edf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L758f5f;}}
}
B758ee1:L758ee1:{c.instructions+=2;NFSU2_TR(0x758ee1);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B758ee5:{NFSU2_TR(0x758ee5);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B758ee7:L758ee7:{c.instructions+=2;NFSU2_TR(0x758ee7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758eea:{NFSU2_TR(0x758eea);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L758f5b;}}
}
B758eec:L758eec:{c.instructions+=7;NFSU2_TR(0x758eec);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B758eef:{NFSU2_TR(0x758eef);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B758ef1:{NFSU2_TR(0x758ef1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B758ef2:{NFSU2_TR(0x758ef2);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B758ef3:{NFSU2_TR(0x758ef3);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B758ef7:{NFSU2_TR(0x758ef7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758ef9:{NFSU2_TR(0x758ef9);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758ee7u);}goto L758ee7;}}
}
B758efb:L758efb:{c.instructions+=1;NFSU2_TR(0x758efb);
{goto L758f5b;}
}
B758efd:L758efd:{c.instructions+=2;NFSU2_TR(0x758efd);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758f00:{NFSU2_TR(0x758f00);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L758f2d;}}
}
B758f02:L758f02:{c.instructions+=4;NFSU2_TR(0x758f02);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758f04:{NFSU2_TR(0x758f04);
w4(R+4,u32(0x20ull));
}
B758f09:{NFSU2_TR(0x758f09);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x144ull))));
__builtin_memmove((R+0),(U+0),4);
}
B758f0f:{NFSU2_TR(0x758f0f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L758f5f;}}
}
B758f11:L758f11:{c.instructions+=2;NFSU2_TR(0x758f11);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B758f15:{NFSU2_TR(0x758f15);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B758f17:L758f17:{c.instructions+=2;NFSU2_TR(0x758f17);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758f1a:{NFSU2_TR(0x758f1a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L758f5b;}}
}
B758f1c:L758f1c:{c.instructions+=7;NFSU2_TR(0x758f1c);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B758f1f:{NFSU2_TR(0x758f1f);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B758f21:{NFSU2_TR(0x758f21);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B758f22:{NFSU2_TR(0x758f22);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B758f23:{NFSU2_TR(0x758f23);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B758f27:{NFSU2_TR(0x758f27);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758f29:{NFSU2_TR(0x758f29);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758f17u);}goto L758f17;}}
}
B758f2b:L758f2b:{c.instructions+=1;NFSU2_TR(0x758f2b);
{goto L758f5b;}
}
B758f2d:L758f2d:{c.instructions+=2;NFSU2_TR(0x758f2d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758f30:{NFSU2_TR(0x758f30);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L758f62;}}
}
B758f32:L758f32:{c.instructions+=4;NFSU2_TR(0x758f32);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758f34:{NFSU2_TR(0x758f34);
w4(R+4,u32(0x20ull));
}
B758f39:{NFSU2_TR(0x758f39);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x164ull))));
__builtin_memmove((R+0),(U+0),4);
}
B758f3f:{NFSU2_TR(0x758f3f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L758f5f;}}
}
B758f41:L758f41:{c.instructions+=2;NFSU2_TR(0x758f41);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B758f45:{NFSU2_TR(0x758f45);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B758f47:L758f47:{c.instructions+=2;NFSU2_TR(0x758f47);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758f4a:{NFSU2_TR(0x758f4a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L758f5b;}}
}
B758f4c:L758f4c:{c.instructions+=7;NFSU2_TR(0x758f4c);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B758f4f:{NFSU2_TR(0x758f4f);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B758f51:{NFSU2_TR(0x758f51);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B758f52:{NFSU2_TR(0x758f52);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B758f53:{NFSU2_TR(0x758f53);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B758f57:{NFSU2_TR(0x758f57);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758f59:{NFSU2_TR(0x758f59);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758f47u);}goto L758f47;}}
}
B758f5b:L758f5b:{c.instructions+=2;NFSU2_TR(0x758f5b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758f5d:{NFSU2_TR(0x758f5d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L758f62;}}
}
B758f5f:L758f5f:{c.instructions+=1;NFSU2_TR(0x758f5f);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B758f62:L758f62:{c.instructions+=1;NFSU2_TR(0x758f62);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B758f64:L758f64:{c.instructions+=1;NFSU2_TR(0x758f64);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B758f68:L758f68:{c.instructions+=5;NFSU2_TR(0x758f68);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B758f6c:{NFSU2_TR(0x758f6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B758f70:{NFSU2_TR(0x758f70);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B758f74:{NFSU2_TR(0x758f74);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B758f78:{NFSU2_TR(0x758f78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x758f7dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758850u);}goto L758850;}
}
B758f7d:L758f7d:{c.instructions+=3;NFSU2_TR(0x758f7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758f7f:{NFSU2_TR(0x758f7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B758f83:{NFSU2_TR(0x758f83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758dd0u);}goto L758dd0;}}
}
B758f89:L758f89:{c.instructions+=5;NFSU2_TR(0x758f89);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B758f8d:{NFSU2_TR(0x758f8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B758f91:{NFSU2_TR(0x758f91);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B758f95:{NFSU2_TR(0x758f95);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B758f99:{NFSU2_TR(0x758f99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x758f9eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758850u);}goto L758850;}
}
B758f9e:L758f9e:{c.instructions+=2;NFSU2_TR(0x758f9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758fa0:{NFSU2_TR(0x758fa0);
if(r1(R+518)){TAIL_STATIC(0x759575u,759);}
}
B758fa6:L758fa6:{c.instructions+=4;NFSU2_TR(0x758fa6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B758faa:{NFSU2_TR(0x758faa);
w4(R+20,u32(0x30ull));
}
B758faf:{NFSU2_TR(0x758faf);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B758fb1:{NFSU2_TR(0x758fb1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x759575u,759);}
}
B758fb7:L758fb7:{c.instructions+=2;NFSU2_TR(0x758fb7);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B758fbb:{NFSU2_TR(0x758fbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x758fc0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758850u);}goto L758850;}
}
B758fc0:L758fc0:{c.instructions+=2;NFSU2_TR(0x758fc0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758fc2:{NFSU2_TR(0x758fc2);
if(r1(R+518)){TAIL_STATIC(0x75955fu,759);}
}
B758fc8:L758fc8:{c.instructions+=2;NFSU2_TR(0x758fc8);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B758fcc:{NFSU2_TR(0x758fcc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x75955fu,759);}
}
B758fd2:L758fd2:{c.instructions+=5;NFSU2_TR(0x758fd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B758fd6:{NFSU2_TR(0x758fd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B758fd9:{NFSU2_TR(0x758fd9);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B758fdd:{NFSU2_TR(0x758fdd);
__builtin_memmove((R+28),(R+20),4);
}
B758fdf:{NFSU2_TR(0x758fdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x758fe4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x758850u);}goto L758850;}
}
B758fe4:L758fe4:{c.instructions+=2;NFSU2_TR(0x758fe4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B758fe6:{NFSU2_TR(0x758fe6);
if(r1(R+518)){TAIL_STATIC(0x759549u,759);}
}
B758fec:L758fec:{c.instructions+=2;NFSU2_TR(0x758fec);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B758ff1:{NFSU2_TR(0x758ff1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x759549u,759);}
}
B758ff7:L758ff7:{c.instructions+=4;NFSU2_TR(0x758ff7);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B758ffb:{NFSU2_TR(0x758ffb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758ffc:{NFSU2_TR(0x758ffc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B758ffd:{NFSU2_TR(0x758ffd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x759002ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7588c0u);}goto L7588c0;}
}
XIT:NFSU2_TR_EXIT(0x758,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
