#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_4ac(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_501(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_50e(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_513(u8* __restrict R,Cpu& c);
u32 body_514(u8* __restrict R,Cpu& c);
u32 body_515(u8* __restrict R,Cpu& c);
u32 body_520(u8* __restrict R,Cpu& c);
u32 body_523(u8* __restrict R,Cpu& c);
u32 body_524(u8* __restrict R,Cpu& c);
u32 body_527(u8* __restrict R,Cpu& c);
u32 body_529(u8* __restrict R,Cpu& c);
u32 body_56d(u8* __restrict R,Cpu& c);
u32 body_5d9(u8* __restrict R,Cpu& c);
u32 body_61c(u8* __restrict R,Cpu& c);
u32 body_637(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x528,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x528,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_528(u8* __restrict R,Cpu& c);
u32 page_528(Cpu& c){return body_528(c.regs.data(),c);}
__attribute__((noinline)) u32 body_528(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x528003:goto L528003;
case 0x528004:c.instructions+=2;goto B528004;
case 0x528006:c.instructions+=1;goto B528006;
case 0x52800b:goto L52800b;
case 0x52800d:c.instructions+=1;goto B52800d;
case 0x528012:goto L528012;
case 0x528013:c.instructions+=2;goto B528013;
case 0x528016:c.instructions+=1;goto B528016;
case 0x52801c:goto L52801c;
case 0x528020:c.instructions+=9;goto B528020;
case 0x528026:c.instructions+=8;goto B528026;
case 0x52802c:c.instructions+=7;goto B52802c;
case 0x528033:c.instructions+=6;goto B528033;
case 0x528039:c.instructions+=5;goto B528039;
case 0x52803b:c.instructions+=4;goto B52803b;
case 0x52803d:c.instructions+=3;goto B52803d;
case 0x528041:c.instructions+=2;goto B528041;
case 0x528045:c.instructions+=1;goto B528045;
case 0x52804b:goto L52804b;
case 0x528051:c.instructions+=2;goto B528051;
case 0x528055:c.instructions+=1;goto B528055;
case 0x528057:goto L528057;
case 0x52805b:c.instructions+=1;goto B52805b;
case 0x528060:goto L528060;
case 0x528062:c.instructions+=1;goto B528062;
case 0x528064:goto L528064;
case 0x52806a:c.instructions+=1;goto B52806a;
case 0x52806c:goto L52806c;
case 0x528070:c.instructions+=1;goto B528070;
case 0x528072:goto L528072;
case 0x528074:goto L528074;
case 0x528078:c.instructions+=5;goto B528078;
case 0x52807e:c.instructions+=4;goto B52807e;
case 0x528082:c.instructions+=3;goto B528082;
case 0x528085:c.instructions+=2;goto B528085;
case 0x528089:c.instructions+=1;goto B528089;
case 0x52808b:goto L52808b;
case 0x528091:c.instructions+=1;goto B528091;
case 0x528096:goto L528096;
case 0x528098:c.instructions+=1;goto B528098;
case 0x52809e:goto L52809e;
case 0x5280a2:c.instructions+=2;goto B5280a2;
case 0x5280a8:c.instructions+=1;goto B5280a8;
case 0x5280ae:goto L5280ae;
case 0x5280b1:c.instructions+=2;goto B5280b1;
case 0x5280b3:c.instructions+=1;goto B5280b3;
case 0x5280b9:goto L5280b9;
case 0x5280bf:c.instructions+=4;goto B5280bf;
case 0x5280c2:c.instructions+=3;goto B5280c2;
case 0x5280c4:c.instructions+=2;goto B5280c4;
case 0x5280c6:c.instructions+=1;goto B5280c6;
case 0x5280c8:goto L5280c8;
case 0x5280ce:c.instructions+=1;goto B5280ce;
case 0x5280d0:goto L5280d0;
case 0x5280d2:c.instructions+=1;goto B5280d2;
case 0x5280d4:goto L5280d4;
case 0x5280d5:c.instructions+=3;goto B5280d5;
case 0x5280d8:c.instructions+=2;goto B5280d8;
case 0x5280da:c.instructions+=1;goto B5280da;
case 0x5280dc:goto L5280dc;
case 0x5280de:goto L5280de;
case 0x5280e5:c.instructions+=2;goto B5280e5;
case 0x5280e7:c.instructions+=1;goto B5280e7;
case 0x5280e9:goto L5280e9;
case 0x5280ed:c.instructions+=3;goto B5280ed;
case 0x5280f0:c.instructions+=2;goto B5280f0;
case 0x5280f2:c.instructions+=1;goto B5280f2;
case 0x5280f8:goto L5280f8;
case 0x5280fa:c.instructions+=1;goto B5280fa;
case 0x528100:goto L528100;
case 0x528102:c.instructions+=2;goto B528102;
case 0x528104:c.instructions+=1;goto B528104;
case 0x528106:goto L528106;
case 0x528109:c.instructions+=1;goto B528109;
case 0x52810f:goto L52810f;
case 0x528110:c.instructions+=3;goto B528110;
case 0x528113:c.instructions+=2;goto B528113;
case 0x528116:c.instructions+=1;goto B528116;
case 0x528118:goto L528118;
case 0x52811c:c.instructions+=1;goto B52811c;
case 0x52811e:goto L52811e;
case 0x528123:c.instructions+=1;goto B528123;
case 0x528125:goto L528125;
case 0x528129:c.instructions+=1;goto B528129;
case 0x52812b:goto L52812b;
case 0x528130:c.instructions+=1;goto B528130;
case 0x528132:goto L528132;
case 0x528136:c.instructions+=2;goto B528136;
case 0x528139:c.instructions+=1;goto B528139;
case 0x52813b:goto L52813b;
case 0x528142:goto L528142;
case 0x528147:c.instructions+=1;goto B528147;
case 0x528149:goto L528149;
case 0x52814e:c.instructions+=1;goto B52814e;
case 0x528150:goto L528150;
case 0x528155:c.instructions+=1;goto B528155;
case 0x528157:goto L528157;
case 0x52815c:c.instructions+=1;goto B52815c;
case 0x52815e:goto L52815e;
case 0x528160:goto L528160;
case 0x528167:c.instructions+=3;goto B528167;
case 0x528169:c.instructions+=2;goto B528169;
case 0x52816f:c.instructions+=1;goto B52816f;
case 0x528170:goto L528170;
case 0x528173:c.instructions+=1;goto B528173;
case 0x528175:goto L528175;
case 0x528176:c.instructions+=3;goto B528176;
case 0x528179:c.instructions+=2;goto B528179;
case 0x52817c:c.instructions+=1;goto B52817c;
case 0x52817e:goto L52817e;
case 0x528180:goto L528180;
case 0x528186:c.instructions+=1;goto B528186;
case 0x52818d:goto L52818d;
case 0x528191:c.instructions+=8;goto B528191;
case 0x528195:c.instructions+=7;goto B528195;
case 0x52819b:c.instructions+=6;goto B52819b;
case 0x52819c:c.instructions+=5;goto B52819c;
case 0x5281a2:c.instructions+=4;goto B5281a2;
case 0x5281a4:c.instructions+=3;goto B5281a4;
case 0x5281a8:c.instructions+=2;goto B5281a8;
case 0x5281ac:c.instructions+=1;goto B5281ac;
case 0x5281b2:goto L5281b2;
case 0x5281b8:c.instructions+=4;goto B5281b8;
case 0x5281ba:c.instructions+=3;goto B5281ba;
case 0x5281bc:c.instructions+=2;goto B5281bc;
case 0x5281c0:c.instructions+=1;goto B5281c0;
case 0x5281c6:goto L5281c6;
case 0x5281cc:c.instructions+=2;goto B5281cc;
case 0x5281d0:c.instructions+=1;goto B5281d0;
case 0x5281d2:goto L5281d2;
case 0x5281d6:goto L5281d6;
case 0x5281d8:c.instructions+=1;goto B5281d8;
case 0x5281da:goto L5281da;
case 0x5281e0:c.instructions+=1;goto B5281e0;
case 0x5281e2:goto L5281e2;
case 0x5281e6:c.instructions+=1;goto B5281e6;
case 0x5281e8:goto L5281e8;
case 0x5281ea:goto L5281ea;
case 0x5281ee:c.instructions+=4;goto B5281ee;
case 0x5281f2:c.instructions+=3;goto B5281f2;
case 0x5281f8:c.instructions+=2;goto B5281f8;
case 0x5281fa:c.instructions+=1;goto B5281fa;
case 0x528200:goto L528200;
case 0x528204:c.instructions+=1;goto B528204;
case 0x52820a:goto L52820a;
case 0x52820e:c.instructions+=5;goto B52820e;
case 0x528214:c.instructions+=4;goto B528214;
case 0x528217:c.instructions+=3;goto B528217;
case 0x528219:c.instructions+=2;goto B528219;
case 0x52821b:c.instructions+=1;goto B52821b;
case 0x52821d:goto L52821d;
case 0x528223:goto L528223;
case 0x528225:c.instructions+=1;goto B528225;
case 0x528227:goto L528227;
case 0x528228:c.instructions+=3;goto B528228;
case 0x52822b:c.instructions+=2;goto B52822b;
case 0x52822d:c.instructions+=1;goto B52822d;
case 0x52822f:goto L52822f;
case 0x528231:goto L528231;
case 0x528235:c.instructions+=3;goto B528235;
case 0x52823c:c.instructions+=2;goto B52823c;
case 0x52823e:c.instructions+=1;goto B52823e;
case 0x528240:goto L528240;
case 0x528244:c.instructions+=3;goto B528244;
case 0x528247:c.instructions+=2;goto B528247;
case 0x528249:c.instructions+=1;goto B528249;
case 0x52824b:goto L52824b;
case 0x52824f:c.instructions+=2;goto B52824f;
case 0x528251:c.instructions+=1;goto B528251;
case 0x528256:goto L528256;
case 0x528258:c.instructions+=2;goto B528258;
case 0x52825a:c.instructions+=1;goto B52825a;
case 0x52825c:goto L52825c;
case 0x52825f:c.instructions+=1;goto B52825f;
case 0x528261:goto L528261;
case 0x528262:c.instructions+=3;goto B528262;
case 0x528265:c.instructions+=2;goto B528265;
case 0x528268:c.instructions+=1;goto B528268;
case 0x52826a:goto L52826a;
case 0x52826e:c.instructions+=4;goto B52826e;
case 0x528274:c.instructions+=3;goto B528274;
case 0x528275:c.instructions+=2;goto B528275;
case 0x52827c:c.instructions+=1;goto B52827c;
case 0x528281:goto L528281;
case 0x528283:c.instructions+=1;goto B528283;
case 0x528285:goto L528285;
case 0x528288:c.instructions+=7;goto B528288;
case 0x52828a:c.instructions+=6;goto B52828a;
case 0x52828d:c.instructions+=5;goto B52828d;
case 0x528290:c.instructions+=4;goto B528290;
case 0x528294:c.instructions+=3;goto B528294;
case 0x52829b:c.instructions+=2;goto B52829b;
case 0x52829d:c.instructions+=1;goto B52829d;
case 0x5282a3:goto L5282a3;
case 0x5282a6:c.instructions+=1;goto B5282a6;
case 0x5282a8:goto L5282a8;
case 0x5282a9:c.instructions+=3;goto B5282a9;
case 0x5282ac:c.instructions+=2;goto B5282ac;
case 0x5282af:c.instructions+=1;goto B5282af;
case 0x5282b1:goto L5282b1;
case 0x5282b3:goto L5282b3;
case 0x5282b9:c.instructions+=1;goto B5282b9;
case 0x5282c0:goto L5282c0;
case 0x5282c4:c.instructions+=8;goto B5282c4;
case 0x5282c8:c.instructions+=7;goto B5282c8;
case 0x5282ce:c.instructions+=6;goto B5282ce;
case 0x5282cf:c.instructions+=5;goto B5282cf;
case 0x5282d5:c.instructions+=4;goto B5282d5;
case 0x5282d7:c.instructions+=3;goto B5282d7;
case 0x5282db:c.instructions+=2;goto B5282db;
case 0x5282df:c.instructions+=1;goto B5282df;
case 0x5282e5:goto L5282e5;
case 0x5282e6:c.instructions+=4;goto B5282e6;
case 0x5282e7:c.instructions+=3;goto B5282e7;
case 0x5282e8:c.instructions+=2;goto B5282e8;
case 0x5282ee:c.instructions+=1;goto B5282ee;
case 0x528320:goto L528320;
case 0x528321:c.instructions+=4;goto B528321;
case 0x528323:c.instructions+=3;goto B528323;
case 0x528329:c.instructions+=2;goto B528329;
case 0x52832c:c.instructions+=1;goto B52832c;
case 0x52832e:goto L52832e;
case 0x52832f:c.instructions+=5;goto B52832f;
case 0x528332:c.instructions+=4;goto B528332;
case 0x528338:c.instructions+=3;goto B528338;
case 0x52833d:c.instructions+=2;goto B52833d;
case 0x52833f:c.instructions+=1;goto B52833f;
case 0x528341:goto L528341;
case 0x528343:c.instructions+=6;goto B528343;
case 0x528345:c.instructions+=5;goto B528345;
case 0x528348:c.instructions+=4;goto B528348;
case 0x528349:c.instructions+=3;goto B528349;
case 0x52834e:c.instructions+=2;goto B52834e;
case 0x528355:c.instructions+=1;goto B528355;
case 0x52835a:goto L52835a;
case 0x528360:c.instructions+=1;goto B528360;
case 0x528361:goto L528361;
case 0x528362:c.instructions+=1;goto B528362;
case 0x528370:goto L528370;
case 0x528376:c.instructions+=8;goto B528376;
case 0x528377:c.instructions+=7;goto B528377;
case 0x52837b:c.instructions+=6;goto B52837b;
case 0x52837e:c.instructions+=5;goto B52837e;
case 0x528380:c.instructions+=4;goto B528380;
case 0x528386:c.instructions+=3;goto B528386;
case 0x52838a:c.instructions+=2;goto B52838a;
case 0x528392:c.instructions+=1;goto B528392;
case 0x528397:goto L528397;
case 0x52839c:c.instructions+=2;goto B52839c;
case 0x52839e:c.instructions+=1;goto B52839e;
case 0x5283a0:goto L5283a0;
case 0x5283a3:c.instructions+=4;goto B5283a3;
case 0x5283a4:c.instructions+=3;goto B5283a4;
case 0x5283a8:c.instructions+=2;goto B5283a8;
case 0x5283ae:c.instructions+=1;goto B5283ae;
case 0x5283b3:goto L5283b3;
case 0x5283b4:c.instructions+=1;goto B5283b4;
case 0x5283c0:goto L5283c0;
case 0x5283c4:c.instructions+=4;goto B5283c4;
case 0x5283c6:c.instructions+=3;goto B5283c6;
case 0x5283c7:c.instructions+=2;goto B5283c7;
case 0x5283c9:c.instructions+=1;goto B5283c9;
case 0x5283cb:goto L5283cb;
case 0x5283ce:c.instructions+=4;goto B5283ce;
case 0x5283d4:c.instructions+=3;goto B5283d4;
case 0x5283d6:c.instructions+=2;goto B5283d6;
case 0x5283d8:c.instructions+=1;goto B5283d8;
case 0x5283da:goto L5283da;
case 0x5283db:c.instructions+=1;goto B5283db;
case 0x5283e1:goto L5283e1;
case 0x5283e4:c.instructions+=1;goto B5283e4;
case 0x5283e6:goto L5283e6;
case 0x5283e7:c.instructions+=3;goto B5283e7;
case 0x5283ea:c.instructions+=2;goto B5283ea;
case 0x5283ec:c.instructions+=1;goto B5283ec;
case 0x5283ee:goto L5283ee;
case 0x5283ef:c.instructions+=2;goto B5283ef;
case 0x5283f0:c.instructions+=1;goto B5283f0;
case 0x5283f3:goto L5283f3;
case 0x5283f4:c.instructions+=2;goto B5283f4;
case 0x5283f6:c.instructions+=1;goto B5283f6;
case 0x5283fb:goto L5283fb;
case 0x5283fd:c.instructions+=1;goto B5283fd;
case 0x5283ff:goto L5283ff;
case 0x528400:c.instructions+=2;goto B528400;
case 0x528402:c.instructions+=1;goto B528402;
case 0x528407:goto L528407;
case 0x528408:goto L528408;
case 0x528409:c.instructions+=1;goto B528409;
case 0x528410:goto L528410;
case 0x528411:c.instructions+=13;goto B528411;
case 0x528413:c.instructions+=12;goto B528413;
case 0x528416:c.instructions+=11;goto B528416;
case 0x528418:c.instructions+=10;goto B528418;
case 0x52841d:c.instructions+=9;goto B52841d;
case 0x528423:c.instructions+=8;goto B528423;
case 0x528424:c.instructions+=7;goto B528424;
case 0x52842b:c.instructions+=6;goto B52842b;
case 0x528431:c.instructions+=5;goto B528431;
case 0x528437:c.instructions+=4;goto B528437;
case 0x528438:c.instructions+=3;goto B528438;
case 0x528439:c.instructions+=2;goto B528439;
case 0x52843e:c.instructions+=1;goto B52843e;
case 0x528443:goto L528443;
case 0x528445:c.instructions+=2;goto B528445;
case 0x528447:c.instructions+=1;goto B528447;
case 0x528449:goto L528449;
case 0x52844d:c.instructions+=1;goto B52844d;
case 0x528452:goto L528452;
case 0x528454:c.instructions+=7;goto B528454;
case 0x528456:c.instructions+=6;goto B528456;
case 0x52845a:c.instructions+=5;goto B52845a;
case 0x52845b:c.instructions+=4;goto B52845b;
case 0x52845d:c.instructions+=3;goto B52845d;
case 0x52845f:c.instructions+=2;goto B52845f;
case 0x52846a:c.instructions+=1;goto B52846a;
case 0x52846d:goto L52846d;
case 0x528471:c.instructions+=3;goto B528471;
case 0x528472:c.instructions+=2;goto B528472;
case 0x528477:c.instructions+=1;goto B528477;
case 0x52847c:goto L52847c;
case 0x528480:c.instructions+=3;goto B528480;
case 0x528487:c.instructions+=2;goto B528487;
case 0x528492:c.instructions+=1;goto B528492;
case 0x528497:goto L528497;
case 0x52849b:c.instructions+=6;goto B52849b;
case 0x5284a2:c.instructions+=5;goto B5284a2;
case 0x5284a9:c.instructions+=4;goto B5284a9;
case 0x5284aa:c.instructions+=3;goto B5284aa;
case 0x5284ac:c.instructions+=2;goto B5284ac;
case 0x5284ad:c.instructions+=1;goto B5284ad;
case 0x5284ae:goto L5284ae;
case 0x5284b5:c.instructions+=6;goto B5284b5;
case 0x5284bb:c.instructions+=5;goto B5284bb;
case 0x5284c2:c.instructions+=4;goto B5284c2;
case 0x5284c3:c.instructions+=3;goto B5284c3;
case 0x5284c5:c.instructions+=2;goto B5284c5;
case 0x5284c6:c.instructions+=1;goto B5284c6;
case 0x5284d0:goto L5284d0;
case 0x5284d6:c.instructions+=3;goto B5284d6;
case 0x5284d8:c.instructions+=2;goto B5284d8;
case 0x5284da:c.instructions+=1;goto B5284da;
case 0x5284dc:goto L5284dc;
case 0x5284e1:goto L5284e1;
case 0x5284e4:c.instructions+=1;goto B5284e4;
case 0x5284e6:goto L5284e6;
case 0x5284e7:c.instructions+=3;goto B5284e7;
case 0x5284ed:c.instructions+=2;goto B5284ed;
case 0x5284ef:c.instructions+=1;goto B5284ef;
case 0x5284f1:goto L5284f1;
case 0x5284f2:goto L5284f2;
case 0x5284f8:c.instructions+=1;goto B5284f8;
case 0x5284ff:goto L5284ff;
case 0x528500:goto L528500;
case 0x528501:c.instructions+=7;goto B528501;
case 0x528503:c.instructions+=6;goto B528503;
case 0x528509:c.instructions+=5;goto B528509;
case 0x52850b:c.instructions+=4;goto B52850b;
case 0x52850d:c.instructions+=3;goto B52850d;
case 0x52850e:c.instructions+=2;goto B52850e;
case 0x528512:c.instructions+=1;goto B528512;
case 0x528514:goto L528514;
case 0x52851a:c.instructions+=1;goto B52851a;
case 0x528520:goto L528520;
case 0x528522:c.instructions+=1;goto B528522;
case 0x528524:goto L528524;
case 0x528525:c.instructions+=3;goto B528525;
case 0x528528:c.instructions+=2;goto B528528;
case 0x52852a:c.instructions+=1;goto B52852a;
case 0x52852c:goto L52852c;
case 0x52852e:goto L52852e;
case 0x528532:c.instructions+=1;goto B528532;
case 0x528534:goto L528534;
case 0x528538:goto L528538;
case 0x52853a:c.instructions+=2;goto B52853a;
case 0x52853b:c.instructions+=1;goto B52853b;
case 0x528540:goto L528540;
case 0x528543:c.instructions+=3;goto B528543;
case 0x528544:c.instructions+=2;goto B528544;
case 0x52854a:c.instructions+=1;goto B52854a;
case 0x52854f:goto L52854f;
case 0x528550:c.instructions+=2;goto B528550;
case 0x528551:c.instructions+=1;goto B528551;
case 0x528554:goto L528554;
case 0x52855b:c.instructions+=1;goto B52855b;
case 0x528560:goto L528560;
case 0x528567:c.instructions+=1;goto B528567;
case 0x528569:goto L528569;
case 0x52856e:c.instructions+=2;goto B52856e;
case 0x528570:c.instructions+=1;goto B528570;
case 0x528572:goto L528572;
case 0x528577:c.instructions+=1;goto B528577;
case 0x52857c:goto L52857c;
case 0x52857d:c.instructions+=1;goto B52857d;
case 0x528582:goto L528582;
case 0x528585:c.instructions+=2;goto B528585;
case 0x52858a:c.instructions+=1;goto B52858a;
case 0x52858c:goto L52858c;
case 0x528592:goto L528592;
case 0x528596:c.instructions+=4;goto B528596;
case 0x528599:c.instructions+=3;goto B528599;
case 0x52859a:c.instructions+=2;goto B52859a;
case 0x52859f:c.instructions+=1;goto B52859f;
case 0x5285a1:goto L5285a1;
case 0x5285a8:goto L5285a8;
case 0x5285ad:c.instructions+=3;goto B5285ad;
case 0x5285b3:c.instructions+=2;goto B5285b3;
case 0x5285b4:c.instructions+=1;goto B5285b4;
case 0x5285b5:goto L5285b5;
case 0x5285b6:c.instructions+=1;goto B5285b6;
case 0x5285bb:goto L5285bb;
case 0x5285bc:c.instructions+=2;goto B5285bc;
case 0x5285be:c.instructions+=1;goto B5285be;
case 0x5285c3:goto L5285c3;
case 0x5285c6:c.instructions+=3;goto B5285c6;
case 0x5285cc:c.instructions+=2;goto B5285cc;
case 0x5285cd:c.instructions+=1;goto B5285cd;
case 0x5285ce:goto L5285ce;
case 0x5285d3:goto L5285d3;
case 0x5285d9:c.instructions+=2;goto B5285d9;
case 0x5285da:c.instructions+=1;goto B5285da;
case 0x528600:goto L528600;
case 0x528601:c.instructions+=5;goto B528601;
case 0x528603:c.instructions+=4;goto B528603;
case 0x528609:c.instructions+=3;goto B528609;
case 0x52860b:c.instructions+=2;goto B52860b;
case 0x52860c:c.instructions+=1;goto B52860c;
case 0x52860e:goto L52860e;
case 0x528611:c.instructions+=2;goto B528611;
case 0x528613:c.instructions+=1;goto B528613;
case 0x528615:goto L528615;
case 0x52861b:c.instructions+=2;goto B52861b;
case 0x52861d:c.instructions+=1;goto B52861d;
case 0x52861f:goto L52861f;
case 0x528622:c.instructions+=2;goto B528622;
case 0x528624:c.instructions+=1;goto B528624;
case 0x528626:goto L528626;
case 0x52862d:c.instructions+=2;goto B52862d;
case 0x528632:c.instructions+=1;goto B528632;
case 0x528634:goto L528634;
case 0x528639:goto L528639;
case 0x52863a:c.instructions+=2;goto B52863a;
case 0x52863f:c.instructions+=1;goto B52863f;
case 0x528644:goto L528644;
case 0x528646:c.instructions+=2;goto B528646;
case 0x528648:c.instructions+=1;goto B528648;
case 0x52864a:goto L52864a;
case 0x52864c:c.instructions+=2;goto B52864c;
case 0x52864e:c.instructions+=1;goto B52864e;
case 0x528651:goto L528651;
case 0x528654:c.instructions+=7;goto B528654;
case 0x528657:c.instructions+=6;goto B528657;
case 0x528659:c.instructions+=5;goto B528659;
case 0x52865a:c.instructions+=4;goto B52865a;
case 0x52865b:c.instructions+=3;goto B52865b;
case 0x52865d:c.instructions+=2;goto B52865d;
case 0x52865f:c.instructions+=1;goto B52865f;
case 0x528662:goto L528662;
case 0x528663:c.instructions+=2;goto B528663;
case 0x528664:c.instructions+=1;goto B528664;
case 0x528667:goto L528667;
case 0x52866a:c.instructions+=3;goto B52866a;
case 0x52866b:c.instructions+=2;goto B52866b;
case 0x52866d:c.instructions+=1;goto B52866d;
case 0x528672:goto L528672;
case 0x528674:c.instructions+=2;goto B528674;
case 0x528676:c.instructions+=1;goto B528676;
case 0x52867b:goto L52867b;
case 0x52867c:c.instructions+=2;goto B52867c;
case 0x52867d:c.instructions+=1;goto B52867d;
case 0x528680:goto L528680;
case 0x528682:c.instructions+=18;goto B528682;
case 0x528687:c.instructions+=17;goto B528687;
case 0x52868d:c.instructions+=16;goto B52868d;
case 0x52868e:c.instructions+=15;goto B52868e;
case 0x528695:c.instructions+=14;goto B528695;
case 0x528696:c.instructions+=13;goto B528696;
case 0x528697:c.instructions+=12;goto B528697;
case 0x528698:c.instructions+=11;goto B528698;
case 0x528699:c.instructions+=10;goto B528699;
case 0x52869a:c.instructions+=9;goto B52869a;
case 0x52869f:c.instructions+=8;goto B52869f;
case 0x5286a4:c.instructions+=7;goto B5286a4;
case 0x5286a6:c.instructions+=6;goto B5286a6;
case 0x5286a8:c.instructions+=5;goto B5286a8;
case 0x5286aa:c.instructions+=4;goto B5286aa;
case 0x5286ad:c.instructions+=3;goto B5286ad;
case 0x5286ae:c.instructions+=2;goto B5286ae;
case 0x5286b2:c.instructions+=1;goto B5286b2;
case 0x5286b7:goto L5286b7;
case 0x5286b9:c.instructions+=4;goto B5286b9;
case 0x5286bd:c.instructions+=3;goto B5286bd;
case 0x5286c3:c.instructions+=2;goto B5286c3;
case 0x5286c8:c.instructions+=1;goto B5286c8;
case 0x5286d0:goto L5286d0;
case 0x5286d2:c.instructions+=2;goto B5286d2;
case 0x5286d5:c.instructions+=1;goto B5286d5;
case 0x5286da:goto L5286da;
case 0x5286e0:c.instructions+=2;goto B5286e0;
case 0x5286e1:c.instructions+=1;goto B5286e1;
case 0x5286e3:goto L5286e3;
case 0x5286e7:c.instructions+=11;goto B5286e7;
case 0x5286ea:c.instructions+=10;goto B5286ea;
case 0x5286f0:c.instructions+=9;goto B5286f0;
case 0x5286f3:c.instructions+=8;goto B5286f3;
case 0x5286f5:c.instructions+=7;goto B5286f5;
case 0x5286f6:c.instructions+=6;goto B5286f6;
case 0x5286f7:c.instructions+=5;goto B5286f7;
case 0x5286f8:c.instructions+=4;goto B5286f8;
case 0x5286f9:c.instructions+=3;goto B5286f9;
case 0x528700:c.instructions+=2;goto B528700;
case 0x528703:c.instructions+=1;goto B528703;
case 0x528710:goto L528710;
case 0x528713:c.instructions+=11;goto B528713;
case 0x528714:c.instructions+=10;goto B528714;
case 0x528715:c.instructions+=9;goto B528715;
case 0x528718:c.instructions+=8;goto B528718;
case 0x528719:c.instructions+=7;goto B528719;
case 0x52871a:c.instructions+=6;goto B52871a;
case 0x52871d:c.instructions+=5;goto B52871d;
case 0x528720:c.instructions+=4;goto B528720;
case 0x528722:c.instructions+=3;goto B528722;
case 0x528724:c.instructions+=2;goto B528724;
case 0x528728:c.instructions+=1;goto B528728;
case 0x52872a:goto L52872a;
case 0x52872d:c.instructions+=2;goto B52872d;
case 0x528731:c.instructions+=1;goto B528731;
case 0x528733:goto L528733;
case 0x528737:goto L528737;
case 0x528738:c.instructions+=1;goto B528738;
case 0x52873d:goto L52873d;
case 0x52873f:c.instructions+=1;goto B52873f;
case 0x528741:goto L528741;
case 0x528743:goto L528743;
case 0x528745:c.instructions+=1;goto B528745;
case 0x528747:goto L528747;
case 0x528749:c.instructions+=1;goto B528749;
case 0x52874b:goto L52874b;
case 0x52874f:c.instructions+=1;goto B52874f;
case 0x528751:goto L528751;
case 0x528753:goto L528753;
case 0x528756:c.instructions+=2;goto B528756;
case 0x528758:c.instructions+=1;goto B528758;
case 0x52875a:goto L52875a;
case 0x52875c:c.instructions+=1;goto B52875c;
case 0x52875e:goto L52875e;
case 0x528762:c.instructions+=5;goto B528762;
case 0x528763:c.instructions+=4;goto B528763;
case 0x528766:c.instructions+=3;goto B528766;
case 0x528768:c.instructions+=2;goto B528768;
case 0x52876c:c.instructions+=1;goto B52876c;
case 0x52876e:goto L52876e;
case 0x528770:c.instructions+=1;goto B528770;
case 0x528772:goto L528772;
case 0x528774:c.instructions+=1;goto B528774;
case 0x528776:goto L528776;
case 0x52877a:c.instructions+=9;goto B52877a;
case 0x52877b:c.instructions+=8;goto B52877b;
case 0x52877e:c.instructions+=7;goto B52877e;
case 0x52877f:c.instructions+=6;goto B52877f;
case 0x528783:c.instructions+=5;goto B528783;
case 0x528786:c.instructions+=4;goto B528786;
case 0x528787:c.instructions+=3;goto B528787;
case 0x528788:c.instructions+=2;goto B528788;
case 0x52878b:c.instructions+=1;goto B52878b;
case 0x52878c:goto L52878c;
case 0x52878d:c.instructions+=7;goto B52878d;
case 0x52878e:c.instructions+=6;goto B52878e;
case 0x528790:c.instructions+=5;goto B528790;
case 0x528793:c.instructions+=4;goto B528793;
case 0x528794:c.instructions+=3;goto B528794;
case 0x528795:c.instructions+=2;goto B528795;
case 0x528798:c.instructions+=1;goto B528798;
case 0x5287a0:goto L5287a0;
case 0x5287a1:c.instructions+=6;goto B5287a1;
case 0x5287a3:c.instructions+=5;goto B5287a3;
case 0x5287a4:c.instructions+=4;goto B5287a4;
case 0x5287a6:c.instructions+=3;goto B5287a6;
case 0x5287a9:c.instructions+=2;goto B5287a9;
case 0x5287ac:c.instructions+=1;goto B5287ac;
case 0x5287ae:goto L5287ae;
case 0x5287b0:c.instructions+=3;goto B5287b0;
case 0x5287b2:c.instructions+=2;goto B5287b2;
case 0x5287b3:c.instructions+=1;goto B5287b3;
case 0x5287b6:goto L5287b6;
case 0x5287b9:c.instructions+=6;goto B5287b9;
case 0x5287ba:c.instructions+=5;goto B5287ba;
case 0x5287bb:c.instructions+=4;goto B5287bb;
case 0x5287bd:c.instructions+=3;goto B5287bd;
case 0x5287bf:c.instructions+=2;goto B5287bf;
case 0x5287c0:c.instructions+=1;goto B5287c0;
case 0x5287c6:goto L5287c6;
case 0x5287cc:c.instructions+=3;goto B5287cc;
case 0x5287ce:c.instructions+=2;goto B5287ce;
case 0x5287d1:c.instructions+=1;goto B5287d1;
case 0x5287d7:goto L5287d7;
case 0x5287da:c.instructions+=1;goto B5287da;
case 0x5287e0:goto L5287e0;
case 0x5287e2:c.instructions+=1;goto B5287e2;
case 0x5287e4:goto L5287e4;
case 0x5287e6:c.instructions+=1;goto B5287e6;
case 0x5287e8:goto L5287e8;
case 0x5287eb:c.instructions+=1;goto B5287eb;
case 0x5287ed:goto L5287ed;
case 0x5287ef:c.instructions+=1;goto B5287ef;
case 0x5287f1:goto L5287f1;
case 0x5287f3:goto L5287f3;
case 0x5287f7:c.instructions+=2;goto B5287f7;
case 0x5287fa:c.instructions+=1;goto B5287fa;
case 0x5287fc:goto L5287fc;
case 0x528802:c.instructions+=3;goto B528802;
case 0x528804:c.instructions+=2;goto B528804;
case 0x528806:c.instructions+=1;goto B528806;
case 0x528808:goto L528808;
case 0x52880b:c.instructions+=1;goto B52880b;
case 0x528810:goto L528810;
case 0x528813:c.instructions+=1;goto B528813;
case 0x528815:goto L528815;
case 0x528816:c.instructions+=3;goto B528816;
case 0x52881c:c.instructions+=2;goto B52881c;
case 0x52881e:c.instructions+=1;goto B52881e;
case 0x528820:goto L528820;
case 0x528822:goto L528822;
case 0x528825:c.instructions+=2;goto B528825;
case 0x528828:c.instructions+=1;goto B528828;
case 0x52882a:goto L52882a;
case 0x52882d:c.instructions+=1;goto B52882d;
case 0x52882f:goto L52882f;
case 0x528832:c.instructions+=5;goto B528832;
case 0x528833:c.instructions+=4;goto B528833;
case 0x528839:c.instructions+=3;goto B528839;
case 0x52883b:c.instructions+=2;goto B52883b;
case 0x52883d:c.instructions+=1;goto B52883d;
case 0x52883f:goto L52883f;
case 0x528842:c.instructions+=1;goto B528842;
case 0x528847:goto L528847;
case 0x52884d:c.instructions+=2;goto B52884d;
case 0x52884f:c.instructions+=1;goto B52884f;
case 0x528851:goto L528851;
case 0x528852:c.instructions+=6;goto B528852;
case 0x528853:c.instructions+=5;goto B528853;
case 0x528855:c.instructions+=4;goto B528855;
case 0x528856:c.instructions+=3;goto B528856;
case 0x528858:c.instructions+=2;goto B528858;
case 0x528859:c.instructions+=1;goto B528859;
case 0x52885c:goto L52885c;
case 0x528862:c.instructions+=3;goto B528862;
case 0x528864:c.instructions+=2;goto B528864;
case 0x528867:c.instructions+=1;goto B528867;
case 0x528869:goto L528869;
case 0x52886c:c.instructions+=1;goto B52886c;
case 0x528870:goto L528870;
case 0x528872:c.instructions+=1;goto B528872;
case 0x528874:goto L528874;
case 0x528877:c.instructions+=1;goto B528877;
case 0x528879:goto L528879;
case 0x52887c:c.instructions+=1;goto B52887c;
case 0x52887e:goto L52887e;
case 0x528880:c.instructions+=1;goto B528880;
case 0x528882:goto L528882;
case 0x528884:goto L528884;
case 0x528887:c.instructions+=3;goto B528887;
case 0x52888a:c.instructions+=2;goto B52888a;
case 0x52888d:c.instructions+=1;goto B52888d;
case 0x52888f:goto L52888f;
case 0x528892:c.instructions+=1;goto B528892;
case 0x528894:goto L528894;
case 0x52889a:c.instructions+=3;goto B52889a;
case 0x52889c:c.instructions+=2;goto B52889c;
case 0x52889e:c.instructions+=1;goto B52889e;
case 0x5288a0:goto L5288a0;
case 0x5288a3:goto L5288a3;
case 0x5288a6:c.instructions+=1;goto B5288a6;
case 0x5288a8:goto L5288a8;
case 0x5288a9:c.instructions+=3;goto B5288a9;
case 0x5288af:c.instructions+=2;goto B5288af;
case 0x5288b1:c.instructions+=1;goto B5288b1;
case 0x5288b3:goto L5288b3;
case 0x5288b5:goto L5288b5;
case 0x5288b8:c.instructions+=2;goto B5288b8;
case 0x5288bb:c.instructions+=1;goto B5288bb;
case 0x5288bd:goto L5288bd;
case 0x5288c0:c.instructions+=1;goto B5288c0;
case 0x5288c2:goto L5288c2;
case 0x5288c5:c.instructions+=4;goto B5288c5;
case 0x5288c6:c.instructions+=3;goto B5288c6;
case 0x5288cc:c.instructions+=2;goto B5288cc;
case 0x5288ce:c.instructions+=1;goto B5288ce;
case 0x5288d0:goto L5288d0;
case 0x5288d3:goto L5288d3;
case 0x5288d6:goto L5288d6;
case 0x5288d9:c.instructions+=1;goto B5288d9;
case 0x5288db:goto L5288db;
case 0x5288dd:c.instructions+=1;goto B5288dd;
case 0x5288e2:goto L5288e2;
case 0x5288e4:c.instructions+=8;goto B5288e4;
case 0x5288e5:c.instructions+=7;goto B5288e5;
case 0x5288e7:c.instructions+=6;goto B5288e7;
case 0x5288e8:c.instructions+=5;goto B5288e8;
case 0x5288ea:c.instructions+=4;goto B5288ea;
case 0x5288eb:c.instructions+=3;goto B5288eb;
case 0x5288ed:c.instructions+=2;goto B5288ed;
case 0x5288ee:c.instructions+=1;goto B5288ee;
case 0x5288f1:goto L5288f1;
case 0x5288f7:c.instructions+=2;goto B5288f7;
case 0x5288f9:c.instructions+=1;goto B5288f9;
case 0x5288fb:goto L5288fb;
case 0x528900:c.instructions+=2;goto B528900;
case 0x528904:c.instructions+=1;goto B528904;
case 0x528906:goto L528906;
case 0x528908:c.instructions+=1;goto B528908;
case 0x52890d:goto L52890d;
case 0x528910:c.instructions+=10;goto B528910;
case 0x528911:c.instructions+=9;goto B528911;
case 0x528913:c.instructions+=8;goto B528913;
case 0x528914:c.instructions+=7;goto B528914;
case 0x528916:c.instructions+=6;goto B528916;
case 0x528917:c.instructions+=5;goto B528917;
case 0x528919:c.instructions+=4;goto B528919;
case 0x52891a:c.instructions+=3;goto B52891a;
case 0x52891c:c.instructions+=2;goto B52891c;
case 0x52891d:c.instructions+=1;goto B52891d;
case 0x528920:goto L528920;
case 0x528922:c.instructions+=2;goto B528922;
case 0x528924:c.instructions+=1;goto B528924;
case 0x528926:goto L528926;
case 0x528929:c.instructions+=1;goto B528929;
case 0x528930:goto L528930;
case 0x528932:c.instructions+=1;goto B528932;
case 0x528934:goto L528934;
case 0x528936:c.instructions+=1;goto B528936;
case 0x528938:goto L528938;
case 0x52893b:c.instructions+=1;goto B52893b;
case 0x52893d:goto L52893d;
case 0x52893f:c.instructions+=1;goto B52893f;
case 0x528941:goto L528941;
case 0x528943:goto L528943;
case 0x528949:c.instructions+=2;goto B528949;
case 0x52894b:c.instructions+=1;goto B52894b;
case 0x528951:goto L528951;
case 0x528957:c.instructions+=2;goto B528957;
case 0x528959:c.instructions+=1;goto B528959;
case 0x52895f:goto L52895f;
case 0x528962:c.instructions+=2;goto B528962;
case 0x528964:c.instructions+=1;goto B528964;
case 0x52896a:goto L52896a;
case 0x52896b:c.instructions+=3;goto B52896b;
case 0x528971:c.instructions+=2;goto B528971;
case 0x528973:c.instructions+=1;goto B528973;
case 0x528975:goto L528975;
case 0x528976:c.instructions+=6;goto B528976;
case 0x528977:c.instructions+=5;goto B528977;
case 0x528979:c.instructions+=4;goto B528979;
case 0x52897a:c.instructions+=3;goto B52897a;
case 0x52897c:c.instructions+=2;goto B52897c;
case 0x52897d:c.instructions+=1;goto B52897d;
case 0x528980:goto L528980;
case 0x528981:c.instructions+=6;goto B528981;
case 0x528982:c.instructions+=5;goto B528982;
case 0x528983:c.instructions+=4;goto B528983;
case 0x528989:c.instructions+=3;goto B528989;
case 0x52898b:c.instructions+=2;goto B52898b;
case 0x528990:c.instructions+=1;goto B528990;
case 0x528992:goto L528992;
case 0x528994:goto L528994;
case 0x528996:c.instructions+=5;goto B528996;
case 0x528997:c.instructions+=4;goto B528997;
case 0x528999:c.instructions+=3;goto B528999;
case 0x52899a:c.instructions+=2;goto B52899a;
case 0x52899f:c.instructions+=1;goto B52899f;
case 0x5289a4:goto L5289a4;
case 0x5289a6:c.instructions+=2;goto B5289a6;
case 0x5289a8:c.instructions+=1;goto B5289a8;
case 0x5289aa:goto L5289aa;
case 0x5289b0:goto L5289b0;
case 0x5289b6:c.instructions+=1;goto B5289b6;
case 0x5289b8:goto L5289b8;
case 0x5289b9:c.instructions+=2;goto B5289b9;
case 0x5289be:c.instructions+=1;goto B5289be;
case 0x5289c3:goto L5289c3;
case 0x5289c5:c.instructions+=1;goto B5289c5;
case 0x5289c7:goto L5289c7;
case 0x5289c9:c.instructions+=2;goto B5289c9;
case 0x5289ca:c.instructions+=1;goto B5289ca;
case 0x5289cd:goto L5289cd;
case 0x5289ce:c.instructions+=4;goto B5289ce;
case 0x5289d0:c.instructions+=3;goto B5289d0;
case 0x5289d2:c.instructions+=2;goto B5289d2;
case 0x5289d7:c.instructions+=1;goto B5289d7;
case 0x5289dc:goto L5289dc;
case 0x5289de:c.instructions+=2;goto B5289de;
case 0x5289e0:c.instructions+=1;goto B5289e0;
case 0x5289e2:goto L5289e2;
case 0x5289e3:c.instructions+=3;goto B5289e3;
case 0x5289e4:c.instructions+=2;goto B5289e4;
case 0x5289e5:c.instructions+=1;goto B5289e5;
case 0x5289f0:goto L5289f0;
case 0x5289f1:c.instructions+=5;goto B5289f1;
case 0x5289f5:c.instructions+=4;goto B5289f5;
case 0x5289f7:c.instructions+=3;goto B5289f7;
case 0x5289f8:c.instructions+=2;goto B5289f8;
case 0x5289fa:c.instructions+=1;goto B5289fa;
case 0x5289fc:goto L5289fc;
case 0x5289fd:c.instructions+=5;goto B5289fd;
case 0x528a01:c.instructions+=4;goto B528a01;
case 0x528a02:c.instructions+=3;goto B528a02;
case 0x528a03:c.instructions+=2;goto B528a03;
case 0x528a04:c.instructions+=1;goto B528a04;
case 0x528a09:goto L528a09;
case 0x528a0b:c.instructions+=2;goto B528a0b;
case 0x528a11:c.instructions+=1;goto B528a11;
case 0x528a13:goto L528a13;
case 0x528a1d:goto L528a1d;
case 0x528a23:c.instructions+=3;goto B528a23;
case 0x528a24:c.instructions+=2;goto B528a24;
case 0x528a29:c.instructions+=1;goto B528a29;
case 0x528a2e:goto L528a2e;
case 0x528a34:c.instructions+=4;goto B528a34;
case 0x528a35:c.instructions+=3;goto B528a35;
case 0x528a36:c.instructions+=2;goto B528a36;
case 0x528a38:c.instructions+=1;goto B528a38;
case 0x528a3d:goto L528a3d;
case 0x528a43:c.instructions+=4;goto B528a43;
case 0x528a45:c.instructions+=3;goto B528a45;
case 0x528a46:c.instructions+=2;goto B528a46;
case 0x528a4c:c.instructions+=1;goto B528a4c;
case 0x528a4d:goto L528a4d;
case 0x528a4e:c.instructions+=2;goto B528a4e;
case 0x528a4f:c.instructions+=1;goto B528a4f;
case 0x528a60:goto L528a60;
case 0x528a61:c.instructions+=25;goto B528a61;
case 0x528a63:c.instructions+=24;goto B528a63;
case 0x528a66:c.instructions+=23;goto B528a66;
case 0x528a6c:c.instructions+=22;goto B528a6c;
case 0x528a72:c.instructions+=21;goto B528a72;
case 0x528a73:c.instructions+=20;goto B528a73;
case 0x528a75:c.instructions+=19;goto B528a75;
case 0x528a76:c.instructions+=18;goto B528a76;
case 0x528a79:c.instructions+=17;goto B528a79;
case 0x528a7c:c.instructions+=16;goto B528a7c;
case 0x528a7e:c.instructions+=15;goto B528a7e;
case 0x528a84:c.instructions+=14;goto B528a84;
case 0x528a87:c.instructions+=13;goto B528a87;
case 0x528a88:c.instructions+=12;goto B528a88;
case 0x528a8b:c.instructions+=11;goto B528a8b;
case 0x528a8e:c.instructions+=10;goto B528a8e;
case 0x528a91:c.instructions+=9;goto B528a91;
case 0x528a94:c.instructions+=8;goto B528a94;
case 0x528a97:c.instructions+=7;goto B528a97;
case 0x528a9a:c.instructions+=6;goto B528a9a;
case 0x528a9d:c.instructions+=5;goto B528a9d;
case 0x528aa0:c.instructions+=4;goto B528aa0;
case 0x528aa3:c.instructions+=3;goto B528aa3;
case 0x528aa6:c.instructions+=2;goto B528aa6;
case 0x528aab:c.instructions+=1;goto B528aab;
case 0x528ab0:goto L528ab0;
case 0x528ab4:c.instructions+=4;goto B528ab4;
case 0x528ab7:c.instructions+=3;goto B528ab7;
case 0x528aba:c.instructions+=2;goto B528aba;
case 0x528abb:c.instructions+=1;goto B528abb;
case 0x528abd:goto L528abd;
case 0x528ac3:c.instructions+=3;goto B528ac3;
case 0x528ac5:c.instructions+=2;goto B528ac5;
case 0x528ac7:c.instructions+=1;goto B528ac7;
case 0x528ac9:goto L528ac9;
case 0x528acf:c.instructions+=1;goto B528acf;
case 0x528ad0:goto L528ad0;
case 0x528ad2:c.instructions+=1;goto B528ad2;
case 0x528ad4:goto L528ad4;
case 0x528ad6:c.instructions+=1;goto B528ad6;
case 0x528ad8:goto L528ad8;
case 0x528ada:c.instructions+=1;goto B528ada;
case 0x528adc:goto L528adc;
case 0x528ade:goto L528ade;
case 0x528ae2:c.instructions+=1;goto B528ae2;
case 0x528ae4:goto L528ae4;
case 0x528aeb:c.instructions+=2;goto B528aeb;
case 0x528af0:c.instructions+=1;goto B528af0;
case 0x528af4:goto L528af4;
case 0x528af5:c.instructions+=3;goto B528af5;
case 0x528afb:c.instructions+=2;goto B528afb;
case 0x528afd:c.instructions+=1;goto B528afd;
case 0x528aff:goto L528aff;
case 0x528b02:c.instructions+=3;goto B528b02;
case 0x528b08:c.instructions+=2;goto B528b08;
case 0x528b0b:c.instructions+=1;goto B528b0b;
case 0x528b11:goto L528b11;
case 0x528b16:c.instructions+=2;goto B528b16;
case 0x528b19:c.instructions+=1;goto B528b19;
case 0x528b20:goto L528b20;
case 0x528b26:c.instructions+=4;goto B528b26;
case 0x528b29:c.instructions+=3;goto B528b29;
case 0x528b2c:c.instructions+=2;goto B528b2c;
case 0x528b2e:c.instructions+=1;goto B528b2e;
case 0x528b30:goto L528b30;
case 0x528b36:c.instructions+=1;goto B528b36;
case 0x528b38:goto L528b38;
case 0x528b42:goto L528b42;
case 0x528b44:c.instructions+=2;goto B528b44;
case 0x528b46:c.instructions+=1;goto B528b46;
case 0x528b48:goto L528b48;
case 0x528b4e:c.instructions+=1;goto B528b4e;
case 0x528b51:goto L528b51;
case 0x528b53:c.instructions+=1;goto B528b53;
case 0x528b55:goto L528b55;
case 0x528b5b:c.instructions+=5;goto B528b5b;
case 0x528b5c:c.instructions+=4;goto B528b5c;
case 0x528b62:c.instructions+=3;goto B528b62;
case 0x528b64:c.instructions+=2;goto B528b64;
case 0x528b6a:c.instructions+=1;goto B528b6a;
case 0x528b6c:goto L528b6c;
case 0x528b6e:c.instructions+=2;goto B528b6e;
case 0x528b70:c.instructions+=1;goto B528b70;
case 0x528b76:goto L528b76;
case 0x528b7c:c.instructions+=2;goto B528b7c;
case 0x528b7f:c.instructions+=1;goto B528b7f;
case 0x528b80:goto L528b80;
case 0x528b82:c.instructions+=1;goto B528b82;
case 0x528b88:goto L528b88;
case 0x528b89:c.instructions+=3;goto B528b89;
case 0x528b8f:c.instructions+=2;goto B528b8f;
case 0x528b91:c.instructions+=1;goto B528b91;
case 0x528b93:goto L528b93;
case 0x528b98:goto L528b98;
case 0x528b9e:c.instructions+=4;goto B528b9e;
case 0x528ba4:c.instructions+=3;goto B528ba4;
case 0x528ba6:c.instructions+=2;goto B528ba6;
case 0x528ba8:c.instructions+=1;goto B528ba8;
case 0x528baa:goto L528baa;
case 0x528bad:c.instructions+=2;goto B528bad;
case 0x528bb0:c.instructions+=1;goto B528bb0;
case 0x528bb2:goto L528bb2;
case 0x528bb5:c.instructions+=1;goto B528bb5;
case 0x528bb7:goto L528bb7;
case 0x528bba:c.instructions+=1;goto B528bba;
case 0x528bc0:goto L528bc0;
case 0x528bc3:c.instructions+=3;goto B528bc3;
case 0x528bc6:c.instructions+=2;goto B528bc6;
case 0x528bc8:c.instructions+=1;goto B528bc8;
case 0x528bce:goto L528bce;
case 0x528bd1:c.instructions+=1;goto B528bd1;
case 0x528bd7:goto L528bd7;
case 0x528bda:c.instructions+=1;goto B528bda;
case 0x528be0:goto L528be0;
case 0x528be3:c.instructions+=1;goto B528be3;
case 0x528be5:goto L528be5;
case 0x528be8:c.instructions+=2;goto B528be8;
case 0x528bea:c.instructions+=1;goto B528bea;
case 0x528bec:goto L528bec;
case 0x528bef:c.instructions+=5;goto B528bef;
case 0x528bf2:c.instructions+=4;goto B528bf2;
case 0x528bf3:c.instructions+=3;goto B528bf3;
case 0x528bf4:c.instructions+=2;goto B528bf4;
case 0x528bf7:c.instructions+=1;goto B528bf7;
case 0x528bfa:goto L528bfa;
case 0x528bfe:c.instructions+=1;goto B528bfe;
case 0x528c00:goto L528c00;
case 0x528c04:c.instructions+=1;goto B528c04;
case 0x528c06:goto L528c06;
case 0x528c09:c.instructions+=5;goto B528c09;
case 0x528c0c:c.instructions+=4;goto B528c0c;
case 0x528c0d:c.instructions+=3;goto B528c0d;
case 0x528c0e:c.instructions+=2;goto B528c0e;
case 0x528c11:c.instructions+=1;goto B528c11;
case 0x528c14:goto L528c14;
case 0x528c18:c.instructions+=1;goto B528c18;
case 0x528c1a:goto L528c1a;
case 0x528c1e:c.instructions+=1;goto B528c1e;
case 0x528c20:goto L528c20;
case 0x528c23:c.instructions+=5;goto B528c23;
case 0x528c26:c.instructions+=4;goto B528c26;
case 0x528c27:c.instructions+=3;goto B528c27;
case 0x528c28:c.instructions+=2;goto B528c28;
case 0x528c2b:c.instructions+=1;goto B528c2b;
case 0x528c2e:goto L528c2e;
case 0x528c32:c.instructions+=1;goto B528c32;
case 0x528c34:goto L528c34;
case 0x528c38:c.instructions+=1;goto B528c38;
case 0x528c3a:goto L528c3a;
case 0x528c3d:c.instructions+=5;goto B528c3d;
case 0x528c40:c.instructions+=4;goto B528c40;
case 0x528c41:c.instructions+=3;goto B528c41;
case 0x528c42:c.instructions+=2;goto B528c42;
case 0x528c45:c.instructions+=1;goto B528c45;
case 0x528c48:goto L528c48;
case 0x528c4c:c.instructions+=1;goto B528c4c;
case 0x528c4e:goto L528c4e;
case 0x528c52:c.instructions+=1;goto B528c52;
case 0x528c54:goto L528c54;
case 0x528c57:c.instructions+=5;goto B528c57;
case 0x528c5a:c.instructions+=4;goto B528c5a;
case 0x528c5b:c.instructions+=3;goto B528c5b;
case 0x528c5c:c.instructions+=2;goto B528c5c;
case 0x528c5f:c.instructions+=1;goto B528c5f;
case 0x528c62:goto L528c62;
case 0x528c66:c.instructions+=1;goto B528c66;
case 0x528c68:goto L528c68;
case 0x528c6b:c.instructions+=5;goto B528c6b;
case 0x528c6e:c.instructions+=4;goto B528c6e;
case 0x528c6f:c.instructions+=3;goto B528c6f;
case 0x528c70:c.instructions+=2;goto B528c70;
case 0x528c73:c.instructions+=1;goto B528c73;
case 0x528c76:goto L528c76;
case 0x528c79:c.instructions+=2;goto B528c79;
case 0x528c7d:c.instructions+=1;goto B528c7d;
case 0x528c7f:goto L528c7f;
case 0x528c82:c.instructions+=1;goto B528c82;
case 0x528c84:goto L528c84;
case 0x528c8a:c.instructions+=5;goto B528c8a;
case 0x528c8d:c.instructions+=4;goto B528c8d;
case 0x528c90:c.instructions+=3;goto B528c90;
case 0x528c92:c.instructions+=2;goto B528c92;
case 0x528c94:c.instructions+=1;goto B528c94;
case 0x528c96:goto L528c96;
case 0x528c99:c.instructions+=2;goto B528c99;
case 0x528c9b:c.instructions+=1;goto B528c9b;
case 0x528c9d:goto L528c9d;
case 0x528ca0:c.instructions+=2;goto B528ca0;
case 0x528ca4:c.instructions+=1;goto B528ca4;
case 0x528ca6:goto L528ca6;
case 0x528cad:c.instructions+=2;goto B528cad;
case 0x528cb2:c.instructions+=1;goto B528cb2;
case 0x528cb6:goto L528cb6;
case 0x528cb9:c.instructions+=9;goto B528cb9;
case 0x528cbc:c.instructions+=8;goto B528cbc;
case 0x528cbf:c.instructions+=7;goto B528cbf;
case 0x528cc2:c.instructions+=6;goto B528cc2;
case 0x528cc5:c.instructions+=5;goto B528cc5;
case 0x528ccb:c.instructions+=4;goto B528ccb;
case 0x528ccc:c.instructions+=3;goto B528ccc;
case 0x528cce:c.instructions+=2;goto B528cce;
case 0x528cd1:c.instructions+=1;goto B528cd1;
case 0x528cd7:goto L528cd7;
case 0x528cdc:goto L528cdc;
case 0x528cdf:c.instructions+=2;goto B528cdf;
case 0x528ce2:c.instructions+=1;goto B528ce2;
case 0x528ce7:goto L528ce7;
case 0x528cea:c.instructions+=5;goto B528cea;
case 0x528ced:c.instructions+=4;goto B528ced;
case 0x528cf3:c.instructions+=3;goto B528cf3;
case 0x528cf5:c.instructions+=2;goto B528cf5;
case 0x528cf8:c.instructions+=1;goto B528cf8;
case 0x528cfa:goto L528cfa;
case 0x528cfc:c.instructions+=1;goto B528cfc;
case 0x528cfe:goto L528cfe;
case 0x528d00:c.instructions+=2;goto B528d00;
case 0x528d02:c.instructions+=1;goto B528d02;
case 0x528d08:goto L528d08;
case 0x528d0b:c.instructions+=5;goto B528d0b;
case 0x528d0e:c.instructions+=4;goto B528d0e;
case 0x528d10:c.instructions+=3;goto B528d10;
case 0x528d13:c.instructions+=2;goto B528d13;
case 0x528d16:c.instructions+=1;goto B528d16;
case 0x528d18:goto L528d18;
case 0x528d1b:c.instructions+=3;goto B528d1b;
case 0x528d1e:c.instructions+=2;goto B528d1e;
case 0x528d20:c.instructions+=1;goto B528d20;
case 0x528d22:goto L528d22;
case 0x528d28:goto L528d28;
case 0x528d2b:c.instructions+=12;goto B528d2b;
case 0x528d2e:c.instructions+=11;goto B528d2e;
case 0x528d31:c.instructions+=10;goto B528d31;
case 0x528d34:c.instructions+=9;goto B528d34;
case 0x528d36:c.instructions+=8;goto B528d36;
case 0x528d39:c.instructions+=7;goto B528d39;
case 0x528d3f:c.instructions+=6;goto B528d3f;
case 0x528d42:c.instructions+=5;goto B528d42;
case 0x528d48:c.instructions+=4;goto B528d48;
case 0x528d4e:c.instructions+=3;goto B528d4e;
case 0x528d55:c.instructions+=2;goto B528d55;
case 0x528d57:c.instructions+=1;goto B528d57;
case 0x528d5c:goto L528d5c;
case 0x528d5f:c.instructions+=9;goto B528d5f;
case 0x528d62:c.instructions+=8;goto B528d62;
case 0x528d68:c.instructions+=7;goto B528d68;
case 0x528d6b:c.instructions+=6;goto B528d6b;
case 0x528d71:c.instructions+=5;goto B528d71;
case 0x528d74:c.instructions+=4;goto B528d74;
case 0x528d7a:c.instructions+=3;goto B528d7a;
case 0x528d7c:c.instructions+=2;goto B528d7c;
case 0x528d7e:c.instructions+=1;goto B528d7e;
case 0x528d80:goto L528d80;
case 0x528d85:goto L528d85;
case 0x528d8b:c.instructions+=1;goto B528d8b;
case 0x528d8d:goto L528d8d;
case 0x528d8e:goto L528d8e;
case 0x528d94:c.instructions+=1;goto B528d94;
case 0x528d96:goto L528d96;
case 0x528d97:goto L528d97;
case 0x528d9d:c.instructions+=1;goto B528d9d;
case 0x528d9f:goto L528d9f;
case 0x528da0:goto L528da0;
case 0x528da3:c.instructions+=7;goto B528da3;
case 0x528da6:c.instructions+=6;goto B528da6;
case 0x528dac:c.instructions+=5;goto B528dac;
case 0x528daf:c.instructions+=4;goto B528daf;
case 0x528db5:c.instructions+=3;goto B528db5;
case 0x528db8:c.instructions+=2;goto B528db8;
case 0x528dba:c.instructions+=1;goto B528dba;
case 0x528dbf:goto L528dbf;
case 0x528dc2:c.instructions+=14;goto B528dc2;
case 0x528dc8:c.instructions+=13;goto B528dc8;
case 0x528dce:c.instructions+=12;goto B528dce;
case 0x528dd1:c.instructions+=11;goto B528dd1;
case 0x528dd7:c.instructions+=10;goto B528dd7;
case 0x528ddd:c.instructions+=9;goto B528ddd;
case 0x528ddf:c.instructions+=8;goto B528ddf;
case 0x528de4:c.instructions+=7;goto B528de4;
case 0x528dea:c.instructions+=6;goto B528dea;
case 0x528df0:c.instructions+=5;goto B528df0;
case 0x528df6:c.instructions+=4;goto B528df6;
case 0x528df9:c.instructions+=3;goto B528df9;
case 0x528dfc:c.instructions+=2;goto B528dfc;
case 0x528e02:c.instructions+=1;goto B528e02;
case 0x528e08:goto L528e08;
case 0x528e0a:goto L528e0a;
case 0x528e0f:c.instructions+=4;goto B528e0f;
case 0x528e11:c.instructions+=3;goto B528e11;
case 0x528e13:c.instructions+=2;goto B528e13;
case 0x528e16:c.instructions+=1;goto B528e16;
case 0x528e1c:goto L528e1c;
case 0x528e22:c.instructions+=1;goto B528e22;
case 0x528e25:goto L528e25;
case 0x528e27:c.instructions+=1;goto B528e27;
case 0x528e29:goto L528e29;
case 0x528e2b:c.instructions+=1;goto B528e2b;
case 0x528e2d:goto L528e2d;
case 0x528e2f:goto L528e2f;
case 0x528e33:c.instructions+=4;goto B528e33;
case 0x528e36:c.instructions+=3;goto B528e36;
case 0x528e38:c.instructions+=2;goto B528e38;
case 0x528e3e:c.instructions+=1;goto B528e3e;
case 0x528e40:goto L528e40;
case 0x528e47:c.instructions+=1;goto B528e47;
case 0x528e49:goto L528e49;
case 0x528e4a:c.instructions+=2;goto B528e4a;
case 0x528e50:c.instructions+=1;goto B528e50;
case 0x528e52:goto L528e52;
case 0x528e54:goto L528e54;
case 0x528e57:c.instructions+=3;goto B528e57;
case 0x528e5a:c.instructions+=2;goto B528e5a;
case 0x528e5d:c.instructions+=1;goto B528e5d;
case 0x528e5f:goto L528e5f;
case 0x528e62:c.instructions+=1;goto B528e62;
case 0x528e64:goto L528e64;
case 0x528e67:c.instructions+=1;goto B528e67;
case 0x528e69:goto L528e69;
case 0x528e6c:c.instructions+=1;goto B528e6c;
case 0x528e72:goto L528e72;
case 0x528e75:c.instructions+=9;goto B528e75;
case 0x528e7c:c.instructions+=8;goto B528e7c;
case 0x528e83:c.instructions+=7;goto B528e83;
case 0x528e84:c.instructions+=6;goto B528e84;
case 0x528e86:c.instructions+=5;goto B528e86;
case 0x528e89:c.instructions+=4;goto B528e89;
case 0x528e8a:c.instructions+=3;goto B528e8a;
case 0x528e8c:c.instructions+=2;goto B528e8c;
case 0x528e8f:c.instructions+=1;goto B528e8f;
case 0x528e95:goto L528e95;
case 0x528e98:c.instructions+=1;goto B528e98;
case 0x528e9d:goto L528e9d;
case 0x528ea4:c.instructions+=2;goto B528ea4;
case 0x528ea6:c.instructions+=1;goto B528ea6;
case 0x528ea8:goto L528ea8;
case 0x528eac:c.instructions+=2;goto B528eac;
case 0x528eaf:c.instructions+=1;goto B528eaf;
case 0x528eb1:goto L528eb1;
case 0x528eb4:c.instructions+=19;goto B528eb4;
case 0x528eb7:c.instructions+=18;goto B528eb7;
case 0x528ebe:c.instructions+=17;goto B528ebe;
case 0x528ec5:c.instructions+=16;goto B528ec5;
case 0x528ec8:c.instructions+=15;goto B528ec8;
case 0x528eca:c.instructions+=14;goto B528eca;
case 0x528ecc:c.instructions+=13;goto B528ecc;
case 0x528ecf:c.instructions+=12;goto B528ecf;
case 0x528ed2:c.instructions+=11;goto B528ed2;
case 0x528ed4:c.instructions+=10;goto B528ed4;
case 0x528ed7:c.instructions+=9;goto B528ed7;
case 0x528eda:c.instructions+=8;goto B528eda;
case 0x528ee1:c.instructions+=7;goto B528ee1;
case 0x528ee3:c.instructions+=6;goto B528ee3;
case 0x528ee9:c.instructions+=5;goto B528ee9;
case 0x528eec:c.instructions+=4;goto B528eec;
case 0x528eed:c.instructions+=3;goto B528eed;
case 0x528ef3:c.instructions+=2;goto B528ef3;
case 0x528ef9:c.instructions+=1;goto B528ef9;
case 0x528efb:goto L528efb;
case 0x528f01:goto L528f01;
case 0x528f03:c.instructions+=1;goto B528f03;
case 0x528f05:goto L528f05;
case 0x528f0b:c.instructions+=3;goto B528f0b;
case 0x528f0e:c.instructions+=2;goto B528f0e;
case 0x528f14:c.instructions+=1;goto B528f14;
case 0x528f16:goto L528f16;
case 0x528f1c:goto L528f1c;
case 0x528f1f:goto L528f1f;
case 0x528f22:c.instructions+=7;goto B528f22;
case 0x528f27:c.instructions+=6;goto B528f27;
case 0x528f28:c.instructions+=5;goto B528f28;
case 0x528f2b:c.instructions+=4;goto B528f2b;
case 0x528f2d:c.instructions+=3;goto B528f2d;
case 0x528f30:c.instructions+=2;goto B528f30;
case 0x528f33:c.instructions+=1;goto B528f33;
case 0x528f39:goto L528f39;
case 0x528f3c:c.instructions+=8;goto B528f3c;
case 0x528f3e:c.instructions+=7;goto B528f3e;
case 0x528f41:c.instructions+=6;goto B528f41;
case 0x528f47:c.instructions+=5;goto B528f47;
case 0x528f4d:c.instructions+=4;goto B528f4d;
case 0x528f53:c.instructions+=3;goto B528f53;
case 0x528f55:c.instructions+=2;goto B528f55;
case 0x528f58:c.instructions+=1;goto B528f58;
case 0x528f5a:goto L528f5a;
case 0x528f60:c.instructions+=2;goto B528f60;
case 0x528f63:c.instructions+=1;goto B528f63;
case 0x528f65:goto L528f65;
case 0x528f6b:goto L528f6b;
case 0x528f71:c.instructions+=3;goto B528f71;
case 0x528f77:c.instructions+=2;goto B528f77;
case 0x528f79:c.instructions+=1;goto B528f79;
case 0x528f7b:goto L528f7b;
case 0x528f7e:goto L528f7e;
case 0x528f84:c.instructions+=5;goto B528f84;
case 0x528f8a:c.instructions+=4;goto B528f8a;
case 0x528f90:c.instructions+=3;goto B528f90;
case 0x528f92:c.instructions+=2;goto B528f92;
case 0x528f95:c.instructions+=1;goto B528f95;
case 0x528f97:goto L528f97;
case 0x528f9d:c.instructions+=2;goto B528f9d;
case 0x528fa0:c.instructions+=1;goto B528fa0;
case 0x528fa2:goto L528fa2;
case 0x528fa8:goto L528fa8;
case 0x528fae:c.instructions+=3;goto B528fae;
case 0x528fb4:c.instructions+=2;goto B528fb4;
case 0x528fb6:c.instructions+=1;goto B528fb6;
case 0x528fb8:goto L528fb8;
case 0x528fbb:goto L528fbb;
case 0x528fc1:c.instructions+=5;goto B528fc1;
case 0x528fc7:c.instructions+=4;goto B528fc7;
case 0x528fcd:c.instructions+=3;goto B528fcd;
case 0x528fcf:c.instructions+=2;goto B528fcf;
case 0x528fd2:c.instructions+=1;goto B528fd2;
case 0x528fd4:goto L528fd4;
case 0x528fda:c.instructions+=2;goto B528fda;
case 0x528fdd:c.instructions+=1;goto B528fdd;
case 0x528fdf:goto L528fdf;
case 0x528fe5:goto L528fe5;
case 0x528feb:c.instructions+=3;goto B528feb;
case 0x528ff1:c.instructions+=2;goto B528ff1;
case 0x528ff3:c.instructions+=1;goto B528ff3;
case 0x528ff5:goto L528ff5;
case 0x528ff8:goto L528ff8;
case 0x528ffe:c.instructions+=1;goto B528ffe;
default:missing_instruction(c.pc);}
B528003:L528003:{c.instructions+=3;NFSU2_TR(0x528003);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528004:{NFSU2_TR(0x528004);
__builtin_memmove((R+4),(R+28),4);
}
B528006:{NFSU2_TR(0x528006);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52800bull));
TAIL_STATIC(0x513770u,513);
}
B52800b:L52800b:{c.instructions+=2;NFSU2_TR(0x52800b);
__builtin_memmove((R+24),(R+0),4);
}
B52800d:{NFSU2_TR(0x52800d);
TAIL_STATIC(0x527f60u,527);
}
B528012:L528012:{c.instructions+=3;NFSU2_TR(0x528012);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B528013:{NFSU2_TR(0x528013);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xbull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B528016:{NFSU2_TR(0x528016);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x527f40u,527);}
}
B52801c:L52801c:{c.instructions+=10;NFSU2_TR(0x52801c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B528020:{NFSU2_TR(0x528020);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7af8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B528026:{NFSU2_TR(0x528026);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B52802c:{NFSU2_TR(0x52802c);
u8 U[12];
w4(U+0,u32(u32(u32(0x72d8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B528033:{NFSU2_TR(0x528033);
__builtin_memmove((R+4),gp(0x8383e4),4);
}
B528039:{NFSU2_TR(0x528039);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52803b:{NFSU2_TR(0x52803b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52803d:{NFSU2_TR(0x52803d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528041:{NFSU2_TR(0x528041);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528045:{NFSU2_TR(0x528045);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5281b2;}}
}
B52804b:L52804b:{c.instructions+=3;NFSU2_TR(0x52804b);
__builtin_memmove((R+4),gp(0x8383e0),4);
}
B528051:{NFSU2_TR(0x528051);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528055:{NFSU2_TR(0x528055);
{goto L528060;}
}
B528057:L528057:{c.instructions+=2;NFSU2_TR(0x528057);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52805b:{NFSU2_TR(0x52805b);
{goto L528060;}
}
B528060:L528060:{c.instructions+=2;NFSU2_TR(0x528060);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B528062:{NFSU2_TR(0x528062);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L528072;}}
}
B528064:L528064:{c.instructions+=2;NFSU2_TR(0x528064);
u8 U[8];
__builtin_memmove((U+0),gp(0x8383e4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B52806a:{NFSU2_TR(0x52806a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L528072;}}
}
B52806c:L52806c:{c.instructions+=2;NFSU2_TR(0x52806c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B528070:{NFSU2_TR(0x528070);
{goto L528074;}
}
B528072:L528072:{c.instructions+=1;NFSU2_TR(0x528072);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B528074:L528074:{c.instructions+=6;NFSU2_TR(0x528074);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B528078:{NFSU2_TR(0x528078);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52807e:{NFSU2_TR(0x52807e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(s32(s8(r1(U+4)))));
}
B528082:{NFSU2_TR(0x528082);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B528085:{NFSU2_TR(0x528085);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B528089:{NFSU2_TR(0x528089);
if(r1(R+518)){{goto L52809e;}}
}
B52808b:L52808b:{c.instructions+=2;NFSU2_TR(0x52808b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7148ull))));
__builtin_memmove((R+4),(U+0),4);
}
B528091:{NFSU2_TR(0x528091);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x528096ull));
TAIL_STATIC(0x500880u,500);
}
B528096:L528096:{c.instructions+=2;NFSU2_TR(0x528096);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B528098:{NFSU2_TR(0x528098);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5281b2;}}
}
B52809e:L52809e:{c.instructions+=3;NFSU2_TR(0x52809e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x37ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5280a2:{NFSU2_TR(0x5280a2);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7af8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5280a8:{NFSU2_TR(0x5280a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52818d;}}
}
B5280ae:L5280ae:{c.instructions+=3;NFSU2_TR(0x5280ae);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5280b1:{NFSU2_TR(0x5280b1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5280b3:{NFSU2_TR(0x5280b3);
if(r1(R+518)){{goto L52818d;}}
}
B5280b9:L5280b9:{c.instructions+=5;NFSU2_TR(0x5280b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7afcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5280bf:{NFSU2_TR(0x5280bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5280c2:{NFSU2_TR(0x5280c2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5280c4:{NFSU2_TR(0x5280c4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5280c6:{NFSU2_TR(0x5280c6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5280f8;}}
}
B5280c8:L5280c8:{c.instructions+=2;NFSU2_TR(0x5280c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7b00ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5280ce:{NFSU2_TR(0x5280ce);
__builtin_memmove((R+28),(R+28),4);
}
B5280d0:L5280d0:{c.instructions+=2;NFSU2_TR(0x5280d0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5280d2:{NFSU2_TR(0x5280d2);
if(r1(R+518)){{goto L5280de;}}
}
B5280d4:L5280d4:{c.instructions+=4;NFSU2_TR(0x5280d4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5280d5:{NFSU2_TR(0x5280d5);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B5280d8:{NFSU2_TR(0x5280d8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5280da:{NFSU2_TR(0x5280da);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5280d0u);}goto L5280d0;}}
}
B5280dc:L5280dc:{c.instructions+=1;NFSU2_TR(0x5280dc);
{goto L5280f8;}
}
B5280de:L5280de:{c.instructions+=3;NFSU2_TR(0x5280de);
u8 U[12];
w4(U+0,u32(u32(u32(0x7b00ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5280e5:{NFSU2_TR(0x5280e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5280e7:{NFSU2_TR(0x5280e7);
if(r1(R+518)){{goto L5280f8;}}
}
B5280e9:L5280e9:{c.instructions+=4;NFSU2_TR(0x5280e9);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5280ed:{NFSU2_TR(0x5280ed);
__builtin_memmove((R+0),(R+518),1);
}
B5280f0:{NFSU2_TR(0x5280f0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5280f2:{NFSU2_TR(0x5280f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52818d;}}
}
B5280f8:L5280f8:{c.instructions+=2;NFSU2_TR(0x5280f8);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5280fa:{NFSU2_TR(0x5280fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x71c8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B528100:L528100:{c.instructions+=3;NFSU2_TR(0x528100);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B528102:{NFSU2_TR(0x528102);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B528104:{NFSU2_TR(0x528104);
if(r1(R+518)){{goto L52810f;}}
}
B528106:L528106:{c.instructions+=2;NFSU2_TR(0x528106);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B528109:{NFSU2_TR(0x528109);
if(r1(R+518)){{goto L52818d;}}
}
B52810f:L52810f:{c.instructions+=4;NFSU2_TR(0x52810f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B528110:{NFSU2_TR(0x528110);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B528113:{NFSU2_TR(0x528113);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B528116:{NFSU2_TR(0x528116);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x528100u);}goto L528100;}}
}
B528118:L528118:{c.instructions+=2;NFSU2_TR(0x528118);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B52811c:{NFSU2_TR(0x52811c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L528125;}}
}
B52811e:L52811e:{c.instructions+=2;NFSU2_TR(0x52811e);
w4(R+0,u32(0x7ull));
}
B528123:{NFSU2_TR(0x528123);
{goto L528160;}
}
B528125:L528125:{c.instructions+=2;NFSU2_TR(0x528125);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B528129:{NFSU2_TR(0x528129);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L528132;}}
}
B52812b:L52812b:{c.instructions+=2;NFSU2_TR(0x52812b);
w4(R+0,u32(0x5ull));
}
B528130:{NFSU2_TR(0x528130);
{goto L528160;}
}
B528132:L528132:{c.instructions+=3;NFSU2_TR(0x528132);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B528136:{NFSU2_TR(0x528136);
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
B528139:{NFSU2_TR(0x528139);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L52815e;}}
}
B52813b:L52813b:{c.instructions+=1;NFSU2_TR(0x52813b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x528308ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B528142:L528142:{c.instructions+=2;NFSU2_TR(0x528142);
w4(R+0,u32(0x4ull));
}
B528147:{NFSU2_TR(0x528147);
{goto L528160;}
}
B528149:L528149:{c.instructions+=2;NFSU2_TR(0x528149);
w4(R+0,u32(0x2ull));
}
B52814e:{NFSU2_TR(0x52814e);
{goto L528160;}
}
B528150:L528150:{c.instructions+=2;NFSU2_TR(0x528150);
w4(R+0,u32(0x1ull));
}
B528155:{NFSU2_TR(0x528155);
{goto L528160;}
}
B528157:L528157:{c.instructions+=2;NFSU2_TR(0x528157);
w4(R+0,u32(0x3ull));
}
B52815c:{NFSU2_TR(0x52815c);
{goto L528160;}
}
B52815e:L52815e:{c.instructions+=1;NFSU2_TR(0x52815e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B528160:L528160:{c.instructions+=4;NFSU2_TR(0x528160);
u8 U[13];
w4(U+0,u32(u32(u32(0x72c8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+12,u8(u32(r1(U+12))+u32(u8(0x1ull))));
s1(u32(r4(U+8)),r1(U+12));
}
B528167:{NFSU2_TR(0x528167);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B528169:{NFSU2_TR(0x528169);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x71c8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52816f:{NFSU2_TR(0x52816f);
}
B528170:L528170:{c.instructions+=2;NFSU2_TR(0x528170);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B528173:{NFSU2_TR(0x528173);
if(r1(R+518)){{goto L528180;}}
}
B528175:L528175:{c.instructions+=4;NFSU2_TR(0x528175);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B528176:{NFSU2_TR(0x528176);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B528179:{NFSU2_TR(0x528179);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B52817c:{NFSU2_TR(0x52817c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x528170u);}goto L528170;}}
}
B52817e:L52817e:{c.instructions+=1;NFSU2_TR(0x52817e);
{goto L52818d;}
}
B528180:L528180:{c.instructions+=2;NFSU2_TR(0x528180);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7148ull))));
__builtin_memmove((R+4),(U+0),4);
}
B528186:{NFSU2_TR(0x528186);
u8 U[16];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B52818d:L52818d:{c.instructions+=9;NFSU2_TR(0x52818d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B528191:{NFSU2_TR(0x528191);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B528195:{NFSU2_TR(0x528195);
__builtin_memmove((R+4),gp(0x8383e4),4);
}
B52819b:{NFSU2_TR(0x52819b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B52819c:{NFSU2_TR(0x52819c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x88ull))));
}
B5281a2:{NFSU2_TR(0x5281a2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5281a4:{NFSU2_TR(0x5281a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5281a8:{NFSU2_TR(0x5281a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5281ac:{NFSU2_TR(0x5281ac);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x528057u);}goto L528057;}}
}
B5281b2:L5281b2:{c.instructions+=5;NFSU2_TR(0x5281b2);
__builtin_memmove((R+4),gp(0x8383e4),4);
}
B5281b8:{NFSU2_TR(0x5281b8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5281ba:{NFSU2_TR(0x5281ba);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5281bc:{NFSU2_TR(0x5281bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5281c0:{NFSU2_TR(0x5281c0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5282e5;}}
}
B5281c6:L5281c6:{c.instructions+=3;NFSU2_TR(0x5281c6);
__builtin_memmove((R+8),gp(0x8383e0),4);
}
B5281cc:{NFSU2_TR(0x5281cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5281d0:{NFSU2_TR(0x5281d0);
{goto L5281d6;}
}
B5281d2:L5281d2:{c.instructions+=1;NFSU2_TR(0x5281d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5281d6:L5281d6:{c.instructions+=2;NFSU2_TR(0x5281d6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5281d8:{NFSU2_TR(0x5281d8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5281e8;}}
}
B5281da:L5281da:{c.instructions+=2;NFSU2_TR(0x5281da);
u8 U[8];
__builtin_memmove((U+0),gp(0x8383e4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5281e0:{NFSU2_TR(0x5281e0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5281e8;}}
}
B5281e2:L5281e2:{c.instructions+=2;NFSU2_TR(0x5281e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5281e6:{NFSU2_TR(0x5281e6);
{goto L5281ea;}
}
B5281e8:L5281e8:{c.instructions+=1;NFSU2_TR(0x5281e8);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5281ea:L5281ea:{c.instructions+=5;NFSU2_TR(0x5281ea);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5281ee:{NFSU2_TR(0x5281ee);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x37ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5281f2:{NFSU2_TR(0x5281f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7af8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5281f8:{NFSU2_TR(0x5281f8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5281fa:{NFSU2_TR(0x5281fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5282c0;}}
}
B528200:L528200:{c.instructions+=2;NFSU2_TR(0x528200);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B528204:{NFSU2_TR(0x528204);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5282c0;}}
}
B52820a:L52820a:{c.instructions+=6;NFSU2_TR(0x52820a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52820e:{NFSU2_TR(0x52820e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7afcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B528214:{NFSU2_TR(0x528214);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B528217:{NFSU2_TR(0x528217);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B528219:{NFSU2_TR(0x528219);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52821b:{NFSU2_TR(0x52821b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L52824b;}}
}
B52821d:L52821d:{c.instructions+=1;NFSU2_TR(0x52821d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x7b00ull))));
}
B528223:L528223:{c.instructions+=2;NFSU2_TR(0x528223);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B528225:{NFSU2_TR(0x528225);
if(r1(R+518)){{goto L528231;}}
}
B528227:L528227:{c.instructions+=4;NFSU2_TR(0x528227);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B528228:{NFSU2_TR(0x528228);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B52822b:{NFSU2_TR(0x52822b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B52822d:{NFSU2_TR(0x52822d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x528223u);}goto L528223;}}
}
B52822f:L52822f:{c.instructions+=1;NFSU2_TR(0x52822f);
{goto L52824b;}
}
B528231:L528231:{c.instructions+=4;NFSU2_TR(0x528231);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B528235:{NFSU2_TR(0x528235);
u8 U[12];
w4(U+0,u32(u32(u32(0x7b00ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B52823c:{NFSU2_TR(0x52823c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52823e:{NFSU2_TR(0x52823e);
if(r1(R+518)){{goto L52824b;}}
}
B528240:L528240:{c.instructions+=4;NFSU2_TR(0x528240);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B528244:{NFSU2_TR(0x528244);
__builtin_memmove((R+0),(R+518),1);
}
B528247:{NFSU2_TR(0x528247);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B528249:{NFSU2_TR(0x528249);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5282c0;}}
}
B52824b:L52824b:{c.instructions+=3;NFSU2_TR(0x52824b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52824f:{NFSU2_TR(0x52824f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B528251:{NFSU2_TR(0x528251);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x71c8ull))));
}
B528256:L528256:{c.instructions+=3;NFSU2_TR(0x528256);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B528258:{NFSU2_TR(0x528258);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52825a:{NFSU2_TR(0x52825a);
if(r1(R+518)){{goto L528261;}}
}
B52825c:L52825c:{c.instructions+=2;NFSU2_TR(0x52825c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52825f:{NFSU2_TR(0x52825f);
if(r1(R+518)){{goto L5282c0;}}
}
B528261:L528261:{c.instructions+=4;NFSU2_TR(0x528261);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B528262:{NFSU2_TR(0x528262);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B528265:{NFSU2_TR(0x528265);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B528268:{NFSU2_TR(0x528268);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x528256u);}goto L528256;}}
}
B52826a:L52826a:{c.instructions+=5;NFSU2_TR(0x52826a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52826e:{NFSU2_TR(0x52826e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B528274:{NFSU2_TR(0x528274);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528275:{NFSU2_TR(0x528275);
u8 U[12];
w4(U+0,u32(u32(u32(0x72d8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B52827c:{NFSU2_TR(0x52827c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x528281ull));
TAIL_STATIC(0x513510u,513);
}
B528281:L528281:{c.instructions+=2;NFSU2_TR(0x528281);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B528283:{NFSU2_TR(0x528283);
if(r1(R+518)){{goto L5282c0;}}
}
B528285:L528285:{c.instructions+=8;NFSU2_TR(0x528285);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B528288:{NFSU2_TR(0x528288);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52828a:{NFSU2_TR(0x52828a);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B52828d:{NFSU2_TR(0x52828d);
__builtin_memmove((R+0),(R+518),1);
}
B528290:{NFSU2_TR(0x528290);
u8 U[12];
w4(U+0,u32(u32(u32(0x5ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B528294:{NFSU2_TR(0x528294);
u8 U[13];
w4(U+0,u32(u32(u32(0x72c8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+12,u8(u32(r1(U+12))+u32(u8(0x1ull))));
s1(u32(r4(U+8)),r1(U+12));
}
B52829b:{NFSU2_TR(0x52829b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52829d:{NFSU2_TR(0x52829d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x71c8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5282a3:L5282a3:{c.instructions+=2;NFSU2_TR(0x5282a3);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5282a6:{NFSU2_TR(0x5282a6);
if(r1(R+518)){{goto L5282b3;}}
}
B5282a8:L5282a8:{c.instructions+=4;NFSU2_TR(0x5282a8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5282a9:{NFSU2_TR(0x5282a9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5282ac:{NFSU2_TR(0x5282ac);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5282af:{NFSU2_TR(0x5282af);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5282a3u);}goto L5282a3;}}
}
B5282b1:L5282b1:{c.instructions+=1;NFSU2_TR(0x5282b1);
{goto L5282c0;}
}
B5282b3:L5282b3:{c.instructions+=2;NFSU2_TR(0x5282b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7148ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5282b9:{NFSU2_TR(0x5282b9);
u8 U[16];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5282c0:L5282c0:{c.instructions+=9;NFSU2_TR(0x5282c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5282c4:{NFSU2_TR(0x5282c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5282c8:{NFSU2_TR(0x5282c8);
__builtin_memmove((R+4),gp(0x8383e4),4);
}
B5282ce:{NFSU2_TR(0x5282ce);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5282cf:{NFSU2_TR(0x5282cf);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x88ull))));
}
B5282d5:{NFSU2_TR(0x5282d5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5282d7:{NFSU2_TR(0x5282d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5282db:{NFSU2_TR(0x5282db);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5282df:{NFSU2_TR(0x5282df);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5281d2u);}goto L5281d2;}}
}
B5282e5:L5282e5:{c.instructions+=5;NFSU2_TR(0x5282e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5282e6:{NFSU2_TR(0x5282e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5282e7:{NFSU2_TR(0x5282e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5282e8:{NFSU2_TR(0x5282e8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1a0ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1a0ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1a0ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5282ee:{NFSU2_TR(0x5282ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B528320:L528320:{c.instructions+=5;NFSU2_TR(0x528320);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528321:{NFSU2_TR(0x528321);
__builtin_memmove((R+20),(R+16),4);
}
B528323:{NFSU2_TR(0x528323);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7af8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B528329:{NFSU2_TR(0x528329);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B52832c:{NFSU2_TR(0x52832c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L528361;}}
}
B52832e:L52832e:{c.instructions+=6;NFSU2_TR(0x52832e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52832f:{NFSU2_TR(0x52832f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B528332:{NFSU2_TR(0x528332);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7af8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528338:{NFSU2_TR(0x528338);
__builtin_memmove((R+0),gp(0x863661),1);
}
B52833d:{NFSU2_TR(0x52833d);
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
B52833f:{NFSU2_TR(0x52833f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52835a;}}
}
B528341:L528341:{c.instructions+=7;NFSU2_TR(0x528341);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528343:{NFSU2_TR(0x528343);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528345:{NFSU2_TR(0x528345);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B528348:{NFSU2_TR(0x528348);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528349:{NFSU2_TR(0x528349);
w4(R+4,u32(0x8635bcull));
}
B52834e:{NFSU2_TR(0x52834e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0xea60ull));
s4(u32(r4(U+0)),r4(U+4));
}
B528355:{NFSU2_TR(0x528355);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52835aull));
TAIL_STATIC(0x5111f0u,511);
}
B52835a:L52835a:{c.instructions+=2;NFSU2_TR(0x52835a);
__builtin_memmove(gp(0x863661),(R+12),1);
}
B528360:{NFSU2_TR(0x528360);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B528361:L528361:{c.instructions+=2;NFSU2_TR(0x528361);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B528362:{NFSU2_TR(0x528362);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B528370:L528370:{c.instructions+=9;NFSU2_TR(0x528370);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B528376:{NFSU2_TR(0x528376);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528377:{NFSU2_TR(0x528377);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52837b:{NFSU2_TR(0x52837b);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+0,u32(r2(U+0)));
}
B52837e:{NFSU2_TR(0x52837e);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B528380:{NFSU2_TR(0x528380);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7134ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528386:{NFSU2_TR(0x528386);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B52838a:{NFSU2_TR(0x52838a);
u8 U[13];
w4(U+0,u32(u32(u32(0x8768ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x1ull));
s1(u32(r4(U+8)),r1(U+12));
}
B528392:{NFSU2_TR(0x528392);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x528397ull));
TAIL_STATIC(0x5141b0u,514);
}
B528397:L528397:{c.instructions+=3;NFSU2_TR(0x528397);
__builtin_memmove((R+0),gp(0x8900ac),4);
}
B52839c:{NFSU2_TR(0x52839c);
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
B52839e:{NFSU2_TR(0x52839e);
if(r1(R+518)){{goto L5283b3;}}
}
B5283a0:L5283a0:{c.instructions+=5;NFSU2_TR(0x5283a0);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+4,u32(r2(U+0)));
}
B5283a3:{NFSU2_TR(0x5283a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5283a4:{NFSU2_TR(0x5283a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5283a8:{NFSU2_TR(0x5283a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5283ae:{NFSU2_TR(0x5283ae);
TAIL_STATIC(0x4ac1b0u,4ac);
}
B5283b3:L5283b3:{c.instructions+=2;NFSU2_TR(0x5283b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5283b4:{NFSU2_TR(0x5283b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5283c0:L5283c0:{c.instructions+=5;NFSU2_TR(0x5283c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5283c4:{NFSU2_TR(0x5283c4);
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
B5283c6:{NFSU2_TR(0x5283c6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5283c7:{NFSU2_TR(0x5283c7);
__builtin_memmove((R+28),(R+4),4);
}
B5283c9:{NFSU2_TR(0x5283c9);
if(r1(R+518)){{goto L528408;}}
}
B5283cb:L5283cb:{c.instructions+=5;NFSU2_TR(0x5283cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5283ce:{NFSU2_TR(0x5283ce);
__builtin_memmove((R+4),gp(0x838434),4);
}
B5283d4:{NFSU2_TR(0x5283d4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5283d6:{NFSU2_TR(0x5283d6);
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
B5283d8:{NFSU2_TR(0x5283d8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L528408;}}
}
B5283da:L5283da:{c.instructions+=2;NFSU2_TR(0x5283da);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5283db:{NFSU2_TR(0x5283db);
__builtin_memmove((R+24),gp(0x838430),4);
}
B5283e1:L5283e1:{c.instructions+=2;NFSU2_TR(0x5283e1);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5283e4:{NFSU2_TR(0x5283e4);
if(r1(R+518)){{goto L5283f3;}}
}
B5283e6:L5283e6:{c.instructions+=4;NFSU2_TR(0x5283e6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5283e7:{NFSU2_TR(0x5283e7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B5283ea:{NFSU2_TR(0x5283ea);
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
B5283ec:{NFSU2_TR(0x5283ec);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5283e1u);}goto L5283e1;}}
}
B5283ee:L5283ee:{c.instructions+=3;NFSU2_TR(0x5283ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5283ef:{NFSU2_TR(0x5283ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5283f0:{NFSU2_TR(0x5283f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5283f3:L5283f3:{c.instructions+=3;NFSU2_TR(0x5283f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5283f4:{NFSU2_TR(0x5283f4);
__builtin_memmove((R+4),(R+28),4);
}
B5283f6:{NFSU2_TR(0x5283f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5283fbull));
TAIL_STATIC(0x513890u,513);
}
B5283fb:L5283fb:{c.instructions+=2;NFSU2_TR(0x5283fb);
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
B5283fd:{NFSU2_TR(0x5283fd);
if(r1(R+518)){{goto L528407;}}
}
B5283ff:L5283ff:{c.instructions+=3;NFSU2_TR(0x5283ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528400:{NFSU2_TR(0x528400);
__builtin_memmove((R+4),(R+28),4);
}
B528402:{NFSU2_TR(0x528402);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x528407ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x528370u);}goto L528370;}
}
B528407:L528407:{c.instructions+=1;NFSU2_TR(0x528407);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B528408:L528408:{c.instructions+=2;NFSU2_TR(0x528408);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B528409:{NFSU2_TR(0x528409);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B528410:L528410:{c.instructions+=14;NFSU2_TR(0x528410);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528411:{NFSU2_TR(0x528411);
__builtin_memmove((R+20),(R+16),4);
}
B528413:{NFSU2_TR(0x528413);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B528416:{NFSU2_TR(0x528416);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528418:{NFSU2_TR(0x528418);
u8 U[4];
w4(U+0,u32(0x77736bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52841d:{NFSU2_TR(0x52841d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B528423:{NFSU2_TR(0x528423);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528424:{NFSU2_TR(0x528424);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52842b:{NFSU2_TR(0x52842b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x900ull))));
}
B528431:{NFSU2_TR(0x528431);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8740ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B528437:{NFSU2_TR(0x528437);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528438:{NFSU2_TR(0x528438);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528439:{NFSU2_TR(0x528439);
w4(R+4,u32(0x83ad90ull));
}
B52843e:{NFSU2_TR(0x52843e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x528443ull));
TAIL_STATIC(0x503680u,503);
}
B528443:L528443:{c.instructions+=3;NFSU2_TR(0x528443);
__builtin_memmove((R+24),(R+0),4);
}
B528445:{NFSU2_TR(0x528445);
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
B528447:{NFSU2_TR(0x528447);
if(r1(R+518)){{goto L5284ae;}}
}
B528449:L528449:{c.instructions+=2;NFSU2_TR(0x528449);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52844d:{NFSU2_TR(0x52844d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x528452ull));
TAIL_STATIC(0x40c910u,40c);
}
B528452:L528452:{c.instructions+=8;NFSU2_TR(0x528452);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B528454:{NFSU2_TR(0x528454);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528456:{NFSU2_TR(0x528456);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52845a:{NFSU2_TR(0x52845a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52845b:{NFSU2_TR(0x52845b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52845d:{NFSU2_TR(0x52845d);
__builtin_memmove((R+4),(R+24),4);
}
B52845f:{NFSU2_TR(0x52845f);
u8 U[8];
w4(U+0,u32(u32(u32(0x918ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52846a:{NFSU2_TR(0x52846a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52846dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B52846d:L52846d:{c.instructions+=4;NFSU2_TR(0x52846d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B528471:{NFSU2_TR(0x528471);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528472:{NFSU2_TR(0x528472);
w4(R+4,u32(0x8637d0ull));
}
B528477:{NFSU2_TR(0x528477);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52847cull));
TAIL_STATIC(0x5234c0u,523);
}
B52847c:L52847c:{c.instructions+=4;NFSU2_TR(0x52847c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B528480:{NFSU2_TR(0x528480);
u8 U[4];
w4(U+0,u32(u32(u32(0x394ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B528487:{NFSU2_TR(0x528487);
u8 U[8];
w4(U+0,u32(u32(u32(0x90cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B528492:{NFSU2_TR(0x528492);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x528497ull));
TAIL_STATIC(0x4022c0u,402);
}
B528497:L528497:{c.instructions+=7;NFSU2_TR(0x528497);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52849b:{NFSU2_TR(0x52849b);
u8 U[8];
w4(U+0,u32(u32(u32(0x904ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5284a2:{NFSU2_TR(0x5284a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5284a9:{NFSU2_TR(0x5284a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5284aa:{NFSU2_TR(0x5284aa);
__builtin_memmove((R+16),(R+20),4);
}
B5284ac:{NFSU2_TR(0x5284ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5284ad:{NFSU2_TR(0x5284ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5284ae:L5284ae:{c.instructions+=7;NFSU2_TR(0x5284ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x904ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5284b5:{NFSU2_TR(0x5284b5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5284bb:{NFSU2_TR(0x5284bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5284c2:{NFSU2_TR(0x5284c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5284c3:{NFSU2_TR(0x5284c3);
__builtin_memmove((R+16),(R+20),4);
}
B5284c5:{NFSU2_TR(0x5284c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5284c6:{NFSU2_TR(0x5284c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5284d0:L5284d0:{c.instructions+=4;NFSU2_TR(0x5284d0);
__builtin_memmove((R+8),gp(0x842ebc),4);
}
B5284d6:{NFSU2_TR(0x5284d6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5284d8:{NFSU2_TR(0x5284d8);
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
B5284da:{NFSU2_TR(0x5284da);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5284ff;}}
}
B5284dc:L5284dc:{c.instructions+=1;NFSU2_TR(0x5284dc);
w4(R+4,u32(0x840ed8ull));
}
B5284e1:L5284e1:{c.instructions+=2;NFSU2_TR(0x5284e1);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+4),(U+0),1);
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B5284e4:{NFSU2_TR(0x5284e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5284f2;}}
}
B5284e6:L5284e6:{c.instructions+=4;NFSU2_TR(0x5284e6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5284e7:{NFSU2_TR(0x5284e7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x7f8ull))));
}
B5284ed:{NFSU2_TR(0x5284ed);
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
B5284ef:{NFSU2_TR(0x5284ef);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5284e1u);}goto L5284e1;}}
}
B5284f1:L5284f1:{c.instructions+=1;NFSU2_TR(0x5284f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5284f2:L5284f2:{c.instructions+=2;NFSU2_TR(0x5284f2);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(u32(0x7f8ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B5284f8:{NFSU2_TR(0x5284f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x840ed8ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5284ff:L5284ff:{c.instructions+=1;NFSU2_TR(0x5284ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B528500:L528500:{c.instructions+=8;NFSU2_TR(0x528500);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528501:{NFSU2_TR(0x528501);
__builtin_memmove((R+24),(R+4),4);
}
B528503:{NFSU2_TR(0x528503);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7afcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B528509:{NFSU2_TR(0x528509);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52850b:{NFSU2_TR(0x52850b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52850d:{NFSU2_TR(0x52850d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52850e:{NFSU2_TR(0x52850e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B528512:{NFSU2_TR(0x528512);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L52852c;}}
}
B528514:L528514:{c.instructions+=2;NFSU2_TR(0x528514);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7b00ull))));
__builtin_memmove((R+8),(U+0),4);
}
B52851a:{NFSU2_TR(0x52851a);
__builtin_memmove((R+12),(R+12),4);
}
B528520:L528520:{c.instructions+=2;NFSU2_TR(0x528520);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B528522:{NFSU2_TR(0x528522);
if(r1(R+518)){{goto L528554;}}
}
B528524:L528524:{c.instructions+=4;NFSU2_TR(0x528524);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B528525:{NFSU2_TR(0x528525);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B528528:{NFSU2_TR(0x528528);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B52852a:{NFSU2_TR(0x52852a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x528520u);}goto L528520;}}
}
B52852c:L52852c:{c.instructions+=1;NFSU2_TR(0x52852c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52852e:L52852e:{c.instructions+=2;NFSU2_TR(0x52852e);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B528532:{NFSU2_TR(0x528532);
if(r1(R+518)){{goto L528538;}}
}
B528534:L528534:{c.instructions+=1;NFSU2_TR(0x528534);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B528538:L528538:{c.instructions+=3;NFSU2_TR(0x528538);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52853a:{NFSU2_TR(0x52853a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52853b:{NFSU2_TR(0x52853b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x528540ull));
TAIL_STATIC(0x4ffc90u,4ff);
}
B528540:L528540:{c.instructions+=4;NFSU2_TR(0x528540);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B528543:{NFSU2_TR(0x528543);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528544:{NFSU2_TR(0x528544);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x887cull))));
__builtin_memmove((R+4),(U+0),4);
}
B52854a:{NFSU2_TR(0x52854a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52854full));
TAIL_STATIC(0x5242c0u,524);
}
B52854f:L52854f:{c.instructions+=3;NFSU2_TR(0x52854f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B528550:{NFSU2_TR(0x528550);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B528551:{NFSU2_TR(0x528551);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B528554:L528554:{c.instructions+=2;NFSU2_TR(0x528554);
u8 U[12];
w4(U+0,u32(u32(u32(0x7b00ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B52855b:{NFSU2_TR(0x52855b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52852eu);}goto L52852e;}
}
B528560:L528560:{c.instructions+=2;NFSU2_TR(0x528560);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B528567:{NFSU2_TR(0x528567);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52858c;}}
}
B528569:L528569:{c.instructions+=3;NFSU2_TR(0x528569);
__builtin_memmove((R+0),gp(0x838458),4);
}
B52856e:{NFSU2_TR(0x52856e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B528570:{NFSU2_TR(0x528570);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L528592;}}
}
B528572:L528572:{c.instructions+=2;NFSU2_TR(0x528572);
u8 U[4];
w4(U+0,u32(0x79aa9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528577:{NFSU2_TR(0x528577);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52857cull));
TAIL_STATIC(0x43db50u,43d);
}
B52857c:L52857c:{c.instructions+=2;NFSU2_TR(0x52857c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52857d:{NFSU2_TR(0x52857d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x528582ull));
TAIL_STATIC(0x4ffe20u,4ff);
}
B528582:L528582:{c.instructions+=3;NFSU2_TR(0x528582);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B528585:{NFSU2_TR(0x528585);
__builtin_memmove(gp(0x838458),(R+0),4);
}
B52858a:{NFSU2_TR(0x52858a);
{goto L528592;}
}
B52858c:L52858c:{c.instructions+=1;NFSU2_TR(0x52858c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8734ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B528592:L528592:{c.instructions+=5;NFSU2_TR(0x528592);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B528596:{NFSU2_TR(0x528596);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B528599:{NFSU2_TR(0x528599);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52859a:{NFSU2_TR(0x52859a);
w4(R+24,u32(0x78f5a4ull));
}
B52859f:{NFSU2_TR(0x52859f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5285d3;}}
}
B5285a1:L5285a1:{c.instructions+=1;NFSU2_TR(0x5285a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5285dcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5285a8:L5285a8:{c.instructions+=4;NFSU2_TR(0x5285a8);
w4(R+24,u32(0x78f5a4ull));
}
B5285ad:{NFSU2_TR(0x5285ad);
__builtin_memmove(gp(0x8384c8),(R+24),4);
}
B5285b3:{NFSU2_TR(0x5285b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5285b4:{NFSU2_TR(0x5285b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5285b5:L5285b5:{c.instructions+=2;NFSU2_TR(0x5285b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5285b6:{NFSU2_TR(0x5285b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5285bbull));
TAIL_STATIC(0x50e2e0u,50e);
}
B5285bb:L5285bb:{c.instructions+=3;NFSU2_TR(0x5285bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5285bc:{NFSU2_TR(0x5285bc);
__builtin_memmove((R+24),(R+0),4);
}
B5285be:{NFSU2_TR(0x5285be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5285c3ull));
TAIL_STATIC(0x520420u,520);
}
B5285c3:L5285c3:{c.instructions+=4;NFSU2_TR(0x5285c3);
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
B5285c6:{NFSU2_TR(0x5285c6);
__builtin_memmove(gp(0x8384c8),(R+24),4);
}
B5285cc:{NFSU2_TR(0x5285cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5285cd:{NFSU2_TR(0x5285cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5285ce:L5285ce:{c.instructions+=1;NFSU2_TR(0x5285ce);
w4(R+24,u32(0x799f34ull));
}
B5285d3:L5285d3:{c.instructions+=3;NFSU2_TR(0x5285d3);
__builtin_memmove(gp(0x8384c8),(R+24),4);
}
B5285d9:{NFSU2_TR(0x5285d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5285da:{NFSU2_TR(0x5285da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B528600:L528600:{c.instructions+=6;NFSU2_TR(0x528600);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528601:{NFSU2_TR(0x528601);
__builtin_memmove((R+20),(R+16),4);
}
B528603:{NFSU2_TR(0x528603);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8730ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B528609:{NFSU2_TR(0x528609);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52860b:{NFSU2_TR(0x52860b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52860c:{NFSU2_TR(0x52860c);
if(r1(R+518)){{goto L528615;}}
}
B52860e:L52860e:{c.instructions+=3;NFSU2_TR(0x52860e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B528611:{NFSU2_TR(0x528611);
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
B528613:{NFSU2_TR(0x528613);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L528667;}}
}
B528615:L528615:{c.instructions+=3;NFSU2_TR(0x528615);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8738ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52861b:{NFSU2_TR(0x52861b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52861d:{NFSU2_TR(0x52861d);
if(r1(R+518)){{goto L528626;}}
}
B52861f:L52861f:{c.instructions+=3;NFSU2_TR(0x52861f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B528622:{NFSU2_TR(0x528622);
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
B528624:{NFSU2_TR(0x528624);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L528667;}}
}
B528626:L528626:{c.instructions+=3;NFSU2_TR(0x528626);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52862d:{NFSU2_TR(0x52862d);
__builtin_memmove((R+0),gp(0x863480),4);
}
B528632:{NFSU2_TR(0x528632);
if(r1(R+518)){{goto L528639;}}
}
B528634:L528634:{c.instructions+=1;NFSU2_TR(0x528634);
__builtin_memmove((R+0),gp(0x83aab8),4);
}
B528639:L528639:{c.instructions+=3;NFSU2_TR(0x528639);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52863a:{NFSU2_TR(0x52863a);
w4(R+4,u32(0x83ad90ull));
}
B52863f:{NFSU2_TR(0x52863f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x528644ull));
TAIL_STATIC(0x503510u,503);
}
B528644:L528644:{c.instructions+=3;NFSU2_TR(0x528644);
__builtin_memmove((R+24),(R+0),4);
}
B528646:{NFSU2_TR(0x528646);
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
B528648:{NFSU2_TR(0x528648);
if(r1(R+518)){{goto L52867b;}}
}
B52864a:L52864a:{c.instructions+=3;NFSU2_TR(0x52864a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52864c:{NFSU2_TR(0x52864c);
__builtin_memmove((R+4),(R+24),4);
}
B52864e:{NFSU2_TR(0x52864e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x528651ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B528651:L528651:{c.instructions+=8;NFSU2_TR(0x528651);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B528654:{NFSU2_TR(0x528654);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B528657:{NFSU2_TR(0x528657);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B528659:{NFSU2_TR(0x528659);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52865a:{NFSU2_TR(0x52865a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52865b:{NFSU2_TR(0x52865b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52865d:{NFSU2_TR(0x52865d);
__builtin_memmove((R+4),(R+24),4);
}
B52865f:{NFSU2_TR(0x52865f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x528662ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B528662:L528662:{c.instructions+=3;NFSU2_TR(0x528662);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B528663:{NFSU2_TR(0x528663);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B528664:{NFSU2_TR(0x528664);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B528667:L528667:{c.instructions+=4;NFSU2_TR(0x528667);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52866a:{NFSU2_TR(0x52866a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52866b:{NFSU2_TR(0x52866b);
__builtin_memmove((R+4),(R+24),4);
}
B52866d:{NFSU2_TR(0x52866d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x528672ull));
TAIL_STATIC(0x637270u,637);
}
B528672:L528672:{c.instructions+=3;NFSU2_TR(0x528672);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528674:{NFSU2_TR(0x528674);
__builtin_memmove((R+4),(R+24),4);
}
B528676:{NFSU2_TR(0x528676);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52867bull));
TAIL_STATIC(0x61c280u,61c);
}
B52867b:L52867b:{c.instructions+=3;NFSU2_TR(0x52867b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52867c:{NFSU2_TR(0x52867c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52867d:{NFSU2_TR(0x52867d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B528680:L528680:{c.instructions+=19;NFSU2_TR(0x528680);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528682:{NFSU2_TR(0x528682);
u8 U[4];
w4(U+0,u32(0x777396ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528687:{NFSU2_TR(0x528687);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52868d:{NFSU2_TR(0x52868d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52868e:{NFSU2_TR(0x52868e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528695:{NFSU2_TR(0x528695);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528696:{NFSU2_TR(0x528696);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528697:{NFSU2_TR(0x528697);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528698:{NFSU2_TR(0x528698);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528699:{NFSU2_TR(0x528699);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52869a:{NFSU2_TR(0x52869a);
u8 U[4];
w4(U+0,u32(0x4fe270ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52869f:{NFSU2_TR(0x52869f);
u8 U[4];
w4(U+0,u32(0x4fe260ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5286a4:{NFSU2_TR(0x5286a4);
__builtin_memmove((R+28),(R+4),4);
}
B5286a6:{NFSU2_TR(0x5286a6);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5286a8:{NFSU2_TR(0x5286a8);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5286aa:{NFSU2_TR(0x5286aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5286ad:{NFSU2_TR(0x5286ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5286ae:{NFSU2_TR(0x5286ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5286b2:{NFSU2_TR(0x5286b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5286b7ull));
TAIL_STATIC(0x75c461u,75c);
}
B5286b7:L5286b7:{c.instructions+=5;NFSU2_TR(0x5286b7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5286b9:{NFSU2_TR(0x5286b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5286bd:{NFSU2_TR(0x5286bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x84ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5286c3:{NFSU2_TR(0x5286c3);
w4(R+20,u32(0x4ull));
}
B5286c8:{NFSU2_TR(0x5286c8);
{goto L5286d0;}
}
B5286d0:L5286d0:{c.instructions+=3;NFSU2_TR(0x5286d0);
__builtin_memmove((R+4),(R+24),4);
}
B5286d2:{NFSU2_TR(0x5286d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5286d5:{NFSU2_TR(0x5286d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5286daull));
TAIL_STATIC(0x5117c0u,511);
}
B5286da:L5286da:{c.instructions+=3;NFSU2_TR(0x5286da);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xd24ull))));
}
B5286e0:{NFSU2_TR(0x5286e0);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B5286e1:{NFSU2_TR(0x5286e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5286d0u);}goto L5286d0;}}
}
B5286e3:L5286e3:{c.instructions+=12;NFSU2_TR(0x5286e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5286e7:{NFSU2_TR(0x5286e7);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5286ea:{NFSU2_TR(0x5286ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34e8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5286f0:{NFSU2_TR(0x5286f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5286f3:{NFSU2_TR(0x5286f3);
__builtin_memmove((R+0),(R+28),4);
}
B5286f5:{NFSU2_TR(0x5286f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5286f6:{NFSU2_TR(0x5286f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5286f7:{NFSU2_TR(0x5286f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5286f8:{NFSU2_TR(0x5286f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5286f9:{NFSU2_TR(0x5286f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528700:{NFSU2_TR(0x528700);
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
B528703:{NFSU2_TR(0x528703);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B528710:L528710:{c.instructions+=12;NFSU2_TR(0x528710);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B528713:{NFSU2_TR(0x528713);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528714:{NFSU2_TR(0x528714);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528715:{NFSU2_TR(0x528715);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B528718:{NFSU2_TR(0x528718);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528719:{NFSU2_TR(0x528719);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52871a:{NFSU2_TR(0x52871a);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B52871d:{NFSU2_TR(0x52871d);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B528720:{NFSU2_TR(0x528720);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B528722:{NFSU2_TR(0x528722);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B528724:{NFSU2_TR(0x528724);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528728:{NFSU2_TR(0x528728);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L52878c;}}
}
B52872a:L52872a:{c.instructions+=3;NFSU2_TR(0x52872a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B52872d:{NFSU2_TR(0x52872d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528731:{NFSU2_TR(0x528731);
{goto L528737;}
}
B528733:L528733:{c.instructions+=1;NFSU2_TR(0x528733);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B528737:L528737:{c.instructions+=2;NFSU2_TR(0x528737);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528738:{NFSU2_TR(0x528738);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52873dull));
TAIL_STATIC(0x513eb0u,513);
}
B52873d:L52873d:{c.instructions+=2;NFSU2_TR(0x52873d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52873f:{NFSU2_TR(0x52873f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L52875a;}}
}
B528741:L528741:{c.instructions+=1;NFSU2_TR(0x528741);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52875e;}}
}
B528743:L528743:{c.instructions+=2;NFSU2_TR(0x528743);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B528745:{NFSU2_TR(0x528745);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L528751;}}
}
B528747:L528747:{c.instructions+=2;NFSU2_TR(0x528747);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B528749:{NFSU2_TR(0x528749);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L528751;}}
}
B52874b:L52874b:{c.instructions+=2;NFSU2_TR(0x52874b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52874f:{NFSU2_TR(0x52874f);
{goto L528753;}
}
B528751:L528751:{c.instructions+=1;NFSU2_TR(0x528751);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B528753:L528753:{c.instructions+=3;NFSU2_TR(0x528753);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B528756:{NFSU2_TR(0x528756);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B528758:{NFSU2_TR(0x528758);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52875e;}}
}
B52875a:L52875a:{c.instructions+=2;NFSU2_TR(0x52875a);
__builtin_memmove((R+28),(R+0),4);
}
B52875c:{NFSU2_TR(0x52875c);
__builtin_memmove((R+12),(R+24),4);
}
B52875e:L52875e:{c.instructions+=6;NFSU2_TR(0x52875e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B528762:{NFSU2_TR(0x528762);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B528763:{NFSU2_TR(0x528763);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B528766:{NFSU2_TR(0x528766);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B528768:{NFSU2_TR(0x528768);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52876c:{NFSU2_TR(0x52876c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x528733u);}goto L528733;}}
}
B52876e:L52876e:{c.instructions+=2;NFSU2_TR(0x52876e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B528770:{NFSU2_TR(0x528770);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L52878c;}}
}
B528772:L528772:{c.instructions+=2;NFSU2_TR(0x528772);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B528774:{NFSU2_TR(0x528774);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L52878c;}}
}
B528776:L528776:{c.instructions+=10;NFSU2_TR(0x528776);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52877a:{NFSU2_TR(0x52877a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52877b:{NFSU2_TR(0x52877b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B52877e:{NFSU2_TR(0x52877e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52877f:{NFSU2_TR(0x52877f);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B528783:{NFSU2_TR(0x528783);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B528786:{NFSU2_TR(0x528786);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B528787:{NFSU2_TR(0x528787);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B528788:{NFSU2_TR(0x528788);
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
B52878b:{NFSU2_TR(0x52878b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52878c:L52878c:{c.instructions+=8;NFSU2_TR(0x52878c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52878d:{NFSU2_TR(0x52878d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52878e:{NFSU2_TR(0x52878e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B528790:{NFSU2_TR(0x528790);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B528793:{NFSU2_TR(0x528793);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B528794:{NFSU2_TR(0x528794);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B528795:{NFSU2_TR(0x528795);
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
B528798:{NFSU2_TR(0x528798);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5287a0:L5287a0:{c.instructions+=7;NFSU2_TR(0x5287a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5287a1:{NFSU2_TR(0x5287a1);
__builtin_memmove((R+20),(R+16),4);
}
B5287a3:{NFSU2_TR(0x5287a3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5287a4:{NFSU2_TR(0x5287a4);
__builtin_memmove((R+8),(R+4),4);
}
B5287a6:{NFSU2_TR(0x5287a6);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x0ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B5287a9:{NFSU2_TR(0x5287a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5287ac:{NFSU2_TR(0x5287ac);
if(r1(R+518)){{goto L5287b6;}}
}
B5287ae:L5287ae:{c.instructions+=4;NFSU2_TR(0x5287ae);
w1(R+0,u8(0x1ull));
}
B5287b0:{NFSU2_TR(0x5287b0);
__builtin_memmove((R+16),(R+20),4);
}
B5287b2:{NFSU2_TR(0x5287b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5287b3:{NFSU2_TR(0x5287b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5287b6:L5287b6:{c.instructions+=7;NFSU2_TR(0x5287b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5287b9:{NFSU2_TR(0x5287b9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5287ba:{NFSU2_TR(0x5287ba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5287bb:{NFSU2_TR(0x5287bb);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5287bd:{NFSU2_TR(0x5287bd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5287bf:{NFSU2_TR(0x5287bf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5287c0:{NFSU2_TR(0x5287c0);
if(r1(R+518)){{goto L52885c;}}
}
B5287c6:L5287c6:{c.instructions+=4;NFSU2_TR(0x5287c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5287cc:{NFSU2_TR(0x5287cc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5287ce:{NFSU2_TR(0x5287ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5287d1:{NFSU2_TR(0x5287d1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5288d6;}}
}
B5287d7:L5287d7:{c.instructions+=2;NFSU2_TR(0x5287d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5287da:{NFSU2_TR(0x5287da);
__builtin_memmove((R+12),(R+12),4);
}
B5287e0:L5287e0:{c.instructions+=2;NFSU2_TR(0x5287e0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5287e2:{NFSU2_TR(0x5287e2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5287f1;}}
}
B5287e4:L5287e4:{c.instructions+=2;NFSU2_TR(0x5287e4);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5287e6:{NFSU2_TR(0x5287e6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5287f1;}}
}
B5287e8:L5287e8:{c.instructions+=2;NFSU2_TR(0x5287e8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5287eb:{NFSU2_TR(0x5287eb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5287f1;}}
}
B5287ed:L5287ed:{c.instructions+=2;NFSU2_TR(0x5287ed);
__builtin_memmove((R+0),(R+12),4);
}
B5287ef:{NFSU2_TR(0x5287ef);
{goto L5287f3;}
}
B5287f1:L5287f1:{c.instructions+=1;NFSU2_TR(0x5287f1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5287f3:L5287f3:{c.instructions+=3;NFSU2_TR(0x5287f3);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5287f7:{NFSU2_TR(0x5287f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5287fa:{NFSU2_TR(0x5287fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L528851;}}
}
B5287fc:L5287fc:{c.instructions+=4;NFSU2_TR(0x5287fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B528802:{NFSU2_TR(0x528802);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B528804:{NFSU2_TR(0x528804);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B528806:{NFSU2_TR(0x528806);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L528820;}}
}
B528808:L528808:{c.instructions+=2;NFSU2_TR(0x528808);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B52880b:{NFSU2_TR(0x52880b);
{goto L528810;}
}
B528810:L528810:{c.instructions+=2;NFSU2_TR(0x528810);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B528813:{NFSU2_TR(0x528813);
if(r1(R+518)){{goto L528847;}}
}
B528815:L528815:{c.instructions+=4;NFSU2_TR(0x528815);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B528816:{NFSU2_TR(0x528816);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x224ull))));
}
B52881c:{NFSU2_TR(0x52881c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B52881e:{NFSU2_TR(0x52881e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x528810u);}goto L528810;}}
}
B528820:L528820:{c.instructions+=1;NFSU2_TR(0x528820);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B528822:L528822:{c.instructions+=3;NFSU2_TR(0x528822);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B528825:{NFSU2_TR(0x528825);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B528828:{NFSU2_TR(0x528828);
if(r1(R+518)){{goto L52882f;}}
}
B52882a:L52882a:{c.instructions+=2;NFSU2_TR(0x52882a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52882d:{NFSU2_TR(0x52882d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L528851;}}
}
B52882f:L52882f:{c.instructions+=6;NFSU2_TR(0x52882f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B528832:{NFSU2_TR(0x528832);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B528833:{NFSU2_TR(0x528833);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xd24ull))));
}
B528839:{NFSU2_TR(0x528839);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B52883b:{NFSU2_TR(0x52883b);
__builtin_memmove((R+24),(R+0),4);
}
B52883d:{NFSU2_TR(0x52883d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5287e0u);}goto L5287e0;}}
}
B52883f:L52883f:{c.instructions+=2;NFSU2_TR(0x52883f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B528842:{NFSU2_TR(0x528842);
{goto L5288d6;}
}
B528847:L528847:{c.instructions+=3;NFSU2_TR(0x528847);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x224ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B52884d:{NFSU2_TR(0x52884d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B52884f:{NFSU2_TR(0x52884f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x528822u);}goto L528822;}
}
B528851:L528851:{c.instructions+=7;NFSU2_TR(0x528851);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B528852:{NFSU2_TR(0x528852);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B528853:{NFSU2_TR(0x528853);
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
B528855:{NFSU2_TR(0x528855);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B528856:{NFSU2_TR(0x528856);
__builtin_memmove((R+16),(R+20),4);
}
B528858:{NFSU2_TR(0x528858);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B528859:{NFSU2_TR(0x528859);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52885c:L52885c:{c.instructions+=4;NFSU2_TR(0x52885c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B528862:{NFSU2_TR(0x528862);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B528864:{NFSU2_TR(0x528864);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528867:{NFSU2_TR(0x528867);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5288d3;}}
}
B528869:L528869:{c.instructions+=2;NFSU2_TR(0x528869);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52886c:{NFSU2_TR(0x52886c);
__builtin_memmove((R+16),(R+16),4);
}
B528870:L528870:{c.instructions+=2;NFSU2_TR(0x528870);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B528872:{NFSU2_TR(0x528872);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L528882;}}
}
B528874:L528874:{c.instructions+=2;NFSU2_TR(0x528874);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B528877:{NFSU2_TR(0x528877);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L528882;}}
}
B528879:L528879:{c.instructions+=2;NFSU2_TR(0x528879);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B52887c:{NFSU2_TR(0x52887c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L528882;}}
}
B52887e:L52887e:{c.instructions+=2;NFSU2_TR(0x52887e);
__builtin_memmove((R+0),(R+12),4);
}
B528880:{NFSU2_TR(0x528880);
{goto L528884;}
}
B528882:L528882:{c.instructions+=1;NFSU2_TR(0x528882);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B528884:L528884:{c.instructions+=4;NFSU2_TR(0x528884);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((R+28),(U+0),4);
}
B528887:{NFSU2_TR(0x528887);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52888a:{NFSU2_TR(0x52888a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52888d:{NFSU2_TR(0x52888d);
if(r1(R+518)){{goto L528894;}}
}
B52888f:L52888f:{c.instructions+=2;NFSU2_TR(0x52888f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B528892:{NFSU2_TR(0x528892);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x528851u);}goto L528851;}}
}
B528894:L528894:{c.instructions+=4;NFSU2_TR(0x528894);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52889a:{NFSU2_TR(0x52889a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52889c:{NFSU2_TR(0x52889c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52889e:{NFSU2_TR(0x52889e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5288b3;}}
}
B5288a0:L5288a0:{c.instructions+=1;NFSU2_TR(0x5288a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5288a3:L5288a3:{c.instructions+=2;NFSU2_TR(0x5288a3);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5288a6:{NFSU2_TR(0x5288a6);
if(r1(R+518)){{goto L5288f1;}}
}
B5288a8:L5288a8:{c.instructions+=4;NFSU2_TR(0x5288a8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5288a9:{NFSU2_TR(0x5288a9);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x224ull))));
}
B5288af:{NFSU2_TR(0x5288af);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5288b1:{NFSU2_TR(0x5288b1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5288a3u);}goto L5288a3;}}
}
B5288b3:L5288b3:{c.instructions+=1;NFSU2_TR(0x5288b3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5288b5:L5288b5:{c.instructions+=3;NFSU2_TR(0x5288b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5288b8:{NFSU2_TR(0x5288b8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5288bb:{NFSU2_TR(0x5288bb);
if(r1(R+518)){{goto L5288c2;}}
}
B5288bd:L5288bd:{c.instructions+=2;NFSU2_TR(0x5288bd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5288c0:{NFSU2_TR(0x5288c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x528851u);}goto L528851;}}
}
B5288c2:L5288c2:{c.instructions+=5;NFSU2_TR(0x5288c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5288c5:{NFSU2_TR(0x5288c5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5288c6:{NFSU2_TR(0x5288c6);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xd24ull))));
}
B5288cc:{NFSU2_TR(0x5288cc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5288ce:{NFSU2_TR(0x5288ce);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x528870u);}goto L528870;}}
}
B5288d0:L5288d0:{c.instructions+=1;NFSU2_TR(0x5288d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5288d3:L5288d3:{c.instructions+=1;NFSU2_TR(0x5288d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5288d6:L5288d6:{c.instructions+=2;NFSU2_TR(0x5288d6);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5288d9:{NFSU2_TR(0x5288d9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5288fb;}}
}
B5288db:L5288db:{c.instructions+=2;NFSU2_TR(0x5288db);
__builtin_memmove((R+4),(R+8),4);
}
B5288dd:{NFSU2_TR(0x5288dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5288e2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x528710u);}goto L528710;}
}
B5288e2:L5288e2:{c.instructions+=9;NFSU2_TR(0x5288e2);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B5288e4:{NFSU2_TR(0x5288e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5288e5:{NFSU2_TR(0x5288e5);
u8 U[3];
__builtin_memmove((U+0),(R+512),1);
w1(R+512,u8((r1(R+0))<(r1(R+0))));
w1(U+1,u8(u32(r1(R+0))-u32(r1(R+0))));
w1(U+2,u8((r1(U+1))<(r1(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+2))));
w1(R+0,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B5288e7:{NFSU2_TR(0x5288e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5288e8:{NFSU2_TR(0x5288e8);
u8 U[3];
w1(R+523,scarry<u8>(r1(R+0),u8(0x1ull)));
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5288ea:{NFSU2_TR(0x5288ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5288eb:{NFSU2_TR(0x5288eb);
__builtin_memmove((R+16),(R+20),4);
}
B5288ed:{NFSU2_TR(0x5288ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5288ee:{NFSU2_TR(0x5288ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5288f1:L5288f1:{c.instructions+=3;NFSU2_TR(0x5288f1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x224ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5288f7:{NFSU2_TR(0x5288f7);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B5288f9:{NFSU2_TR(0x5288f9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5288b5u);}goto L5288b5;}
}
B5288fb:L5288fb:{c.instructions+=3;NFSU2_TR(0x5288fb);
__builtin_memmove((R+0),gp(0x863470),4);
}
B528900:{NFSU2_TR(0x528900);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfull))));
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
B528904:{NFSU2_TR(0x528904);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L528920;}}
}
B528906:L528906:{c.instructions+=2;NFSU2_TR(0x528906);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528908:{NFSU2_TR(0x528908);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52890dull));
TAIL_STATIC(0x56dd90u,56d);
}
B52890d:L52890d:{c.instructions+=11;NFSU2_TR(0x52890d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B528910:{NFSU2_TR(0x528910);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B528911:{NFSU2_TR(0x528911);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B528913:{NFSU2_TR(0x528913);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B528914:{NFSU2_TR(0x528914);
u8 U[3];
__builtin_memmove((U+0),(R+512),1);
w1(R+512,u8((r1(R+0))<(r1(R+0))));
w1(U+1,u8(u32(r1(R+0))-u32(r1(R+0))));
w1(U+2,u8((r1(U+1))<(r1(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+2))));
w1(R+0,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B528916:{NFSU2_TR(0x528916);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B528917:{NFSU2_TR(0x528917);
u8 U[3];
w1(R+523,scarry<u8>(r1(R+0),u8(0x1ull)));
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B528919:{NFSU2_TR(0x528919);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52891a:{NFSU2_TR(0x52891a);
__builtin_memmove((R+16),(R+20),4);
}
B52891c:{NFSU2_TR(0x52891c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52891d:{NFSU2_TR(0x52891d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B528920:L528920:{c.instructions+=3;NFSU2_TR(0x528920);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B528922:{NFSU2_TR(0x528922);
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
B528924:{NFSU2_TR(0x528924);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L528975;}}
}
B528926:L528926:{c.instructions+=2;NFSU2_TR(0x528926);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x54ull))));
}
B528929:{NFSU2_TR(0x528929);
__builtin_memmove((R+16),(R+16),4);
}
B528930:L528930:{c.instructions+=2;NFSU2_TR(0x528930);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B528932:{NFSU2_TR(0x528932);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L528941;}}
}
B528934:L528934:{c.instructions+=2;NFSU2_TR(0x528934);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B528936:{NFSU2_TR(0x528936);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L528941;}}
}
B528938:L528938:{c.instructions+=2;NFSU2_TR(0x528938);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B52893b:{NFSU2_TR(0x52893b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L528941;}}
}
B52893d:L52893d:{c.instructions+=2;NFSU2_TR(0x52893d);
__builtin_memmove((R+4),(R+8),4);
}
B52893f:{NFSU2_TR(0x52893f);
{goto L528943;}
}
B528941:L528941:{c.instructions+=1;NFSU2_TR(0x528941);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B528943:L528943:{c.instructions+=3;NFSU2_TR(0x528943);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B528949:{NFSU2_TR(0x528949);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52894b:{NFSU2_TR(0x52894b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x528851u);}goto L528851;}}
}
B528951:L528951:{c.instructions+=3;NFSU2_TR(0x528951);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd08ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B528957:{NFSU2_TR(0x528957);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B528959:{NFSU2_TR(0x528959);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x528851u);}goto L528851;}}
}
B52895f:L52895f:{c.instructions+=3;NFSU2_TR(0x52895f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B528962:{NFSU2_TR(0x528962);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B528964:{NFSU2_TR(0x528964);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x528851u);}goto L528851;}}
}
B52896a:L52896a:{c.instructions+=4;NFSU2_TR(0x52896a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B52896b:{NFSU2_TR(0x52896b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xd24ull))));
}
B528971:{NFSU2_TR(0x528971);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B528973:{NFSU2_TR(0x528973);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x528930u);}goto L528930;}}
}
B528975:L528975:{c.instructions+=7;NFSU2_TR(0x528975);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B528976:{NFSU2_TR(0x528976);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B528977:{NFSU2_TR(0x528977);
w1(R+0,u8(0x1ull));
}
B528979:{NFSU2_TR(0x528979);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52897a:{NFSU2_TR(0x52897a);
__builtin_memmove((R+16),(R+20),4);
}
B52897c:{NFSU2_TR(0x52897c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52897d:{NFSU2_TR(0x52897d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B528980:L528980:{c.instructions+=7;NFSU2_TR(0x528980);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528981:{NFSU2_TR(0x528981);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528982:{NFSU2_TR(0x528982);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528983:{NFSU2_TR(0x528983);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x600ull))));
__builtin_memmove((R+12),(U+0),4);
}
B528989:{NFSU2_TR(0x528989);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52898b:{NFSU2_TR(0x52898b);
w4(R+4,u32(0x80ull));
}
B528990:{NFSU2_TR(0x528990);
__builtin_memmove((R+28),(R+12),4);
}
B528992:L528992:{c.instructions+=1;NFSU2_TR(0x528992);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L528994;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x528992u);}goto L528992;}
}
B528994:L528994:{c.instructions+=6;NFSU2_TR(0x528994);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B528996:{NFSU2_TR(0x528996);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528997:{NFSU2_TR(0x528997);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528999:{NFSU2_TR(0x528999);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52899a:{NFSU2_TR(0x52899a);
w4(R+4,u32(0x88f298ull));
}
B52899f:{NFSU2_TR(0x52899f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5289a4ull));
TAIL_STATIC(0x5d9bf0u,5d9);
}
B5289a4:L5289a4:{c.instructions+=3;NFSU2_TR(0x5289a4);
__builtin_memmove((R+24),(R+0),4);
}
B5289a6:{NFSU2_TR(0x5289a6);
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
B5289a8:{NFSU2_TR(0x5289a8);
if(r1(R+518)){{goto L5289e2;}}
}
B5289aa:L5289aa:{c.instructions+=1;NFSU2_TR(0x5289aa);
__builtin_memmove((R+12),(R+12),4);
}
B5289b0:L5289b0:{c.instructions+=2;NFSU2_TR(0x5289b0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x80ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5289b6:{NFSU2_TR(0x5289b6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5289cd;}}
}
B5289b8:L5289b8:{c.instructions+=3;NFSU2_TR(0x5289b8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5289b9:{NFSU2_TR(0x5289b9);
w4(R+4,u32(0x860a60ull));
}
B5289be:{NFSU2_TR(0x5289be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5289c3ull));
TAIL_STATIC(0x514e10u,514);
}
B5289c3:L5289c3:{c.instructions+=2;NFSU2_TR(0x5289c3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5289c5:{NFSU2_TR(0x5289c5);
if(r1(R+518)){{goto L5289cd;}}
}
B5289c7:L5289c7:{c.instructions+=3;NFSU2_TR(0x5289c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+12)),r4(U+0));
}
B5289c9:{NFSU2_TR(0x5289c9);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5289ca:{NFSU2_TR(0x5289ca);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5289cd:L5289cd:{c.instructions+=5;NFSU2_TR(0x5289cd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5289ce:{NFSU2_TR(0x5289ce);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5289d0:{NFSU2_TR(0x5289d0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5289d2:{NFSU2_TR(0x5289d2);
w4(R+4,u32(0x88f298ull));
}
B5289d7:{NFSU2_TR(0x5289d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5289dcull));
TAIL_STATIC(0x5d9bf0u,5d9);
}
B5289dc:L5289dc:{c.instructions+=3;NFSU2_TR(0x5289dc);
__builtin_memmove((R+24),(R+0),4);
}
B5289de:{NFSU2_TR(0x5289de);
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
B5289e0:{NFSU2_TR(0x5289e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5289b0u);}goto L5289b0;}}
}
B5289e2:L5289e2:{c.instructions+=4;NFSU2_TR(0x5289e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5289e3:{NFSU2_TR(0x5289e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5289e4:{NFSU2_TR(0x5289e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5289e5:{NFSU2_TR(0x5289e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5289f0:L5289f0:{c.instructions+=6;NFSU2_TR(0x5289f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5289f1:{NFSU2_TR(0x5289f1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5289f5:{NFSU2_TR(0x5289f5);
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
B5289f7:{NFSU2_TR(0x5289f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5289f8:{NFSU2_TR(0x5289f8);
__builtin_memmove((R+24),(R+4),4);
}
B5289fa:{NFSU2_TR(0x5289fa);
if(r1(R+518)){{goto L528a4d;}}
}
B5289fc:L5289fc:{c.instructions+=6;NFSU2_TR(0x5289fc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5289fd:{NFSU2_TR(0x5289fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B528a01:{NFSU2_TR(0x528a01);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528a02:{NFSU2_TR(0x528a02);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528a03:{NFSU2_TR(0x528a03);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528a04:{NFSU2_TR(0x528a04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x528a09ull));
TAIL_STATIC(0x514280u,514);
}
B528a09:L528a09:{c.instructions+=3;NFSU2_TR(0x528a09);
__builtin_memmove((R+28),(R+0),4);
}
B528a0b:{NFSU2_TR(0x528a0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B528a11:{NFSU2_TR(0x528a11);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L528a1d;}}
}
B528a13:L528a13:{c.instructions+=1;NFSU2_TR(0x528a13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7134ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B528a1d:L528a1d:{c.instructions+=4;NFSU2_TR(0x528a1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8740ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B528a23:{NFSU2_TR(0x528a23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528a24:{NFSU2_TR(0x528a24);
w4(R+4,u32(0x83ad90ull));
}
B528a29:{NFSU2_TR(0x528a29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x528a2eull));
TAIL_STATIC(0x503680u,503);
}
B528a2e:L528a2e:{c.instructions+=5;NFSU2_TR(0x528a2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x434ull))));
__builtin_memmove((R+24),(U+0),4);
}
B528a34:{NFSU2_TR(0x528a34);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528a35:{NFSU2_TR(0x528a35);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528a36:{NFSU2_TR(0x528a36);
__builtin_memmove((R+4),(R+24),4);
}
B528a38:{NFSU2_TR(0x528a38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x528a3dull));
TAIL_STATIC(0x503d50u,503);
}
B528a3d:L528a3d:{c.instructions+=5;NFSU2_TR(0x528a3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B528a43:{NFSU2_TR(0x528a43);
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
B528a45:{NFSU2_TR(0x528a45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B528a46:{NFSU2_TR(0x528a46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3bcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528a4c:{NFSU2_TR(0x528a4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B528a4d:L528a4d:{c.instructions+=3;NFSU2_TR(0x528a4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B528a4e:{NFSU2_TR(0x528a4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B528a4f:{NFSU2_TR(0x528a4f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B528a60:L528a60:{c.instructions+=26;NFSU2_TR(0x528a60);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528a61:{NFSU2_TR(0x528a61);
__builtin_memmove((R+20),(R+16),4);
}
B528a63:{NFSU2_TR(0x528a63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B528a66:{NFSU2_TR(0x528a66);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B528a6c:{NFSU2_TR(0x528a6c);
__builtin_memmove((R+8),gp(0x8383e4),4);
}
B528a72:{NFSU2_TR(0x528a72);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528a73:{NFSU2_TR(0x528a73);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B528a75:{NFSU2_TR(0x528a75);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528a76:{NFSU2_TR(0x528a76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B528a79:{NFSU2_TR(0x528a79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528a7c:{NFSU2_TR(0x528a7c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B528a7e:{NFSU2_TR(0x528a7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x872cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B528a84:{NFSU2_TR(0x528a84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528a87:{NFSU2_TR(0x528a87);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B528a88:{NFSU2_TR(0x528a88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528a8b:{NFSU2_TR(0x528a8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528a8e:{NFSU2_TR(0x528a8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528a91:{NFSU2_TR(0x528a91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528a94:{NFSU2_TR(0x528a94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528a97:{NFSU2_TR(0x528a97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528a9a:{NFSU2_TR(0x528a9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528a9d:{NFSU2_TR(0x528a9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528aa0:{NFSU2_TR(0x528aa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528aa3:{NFSU2_TR(0x528aa3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((R+0),(U+0),4);
}
B528aa6:{NFSU2_TR(0x528aa6);
w4(R+4,u32(0x8ull));
}
B528aab:{NFSU2_TR(0x528aab);
{goto L528ab0;}
}
B528ab0:L528ab0:{c.instructions+=5;NFSU2_TR(0x528ab0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B528ab4:{NFSU2_TR(0x528ab4);
u8 U[2];
__builtin_memmove((U+0),(R+12),2);
s2(u32(r4(R+0)),r2(U+0));
}
B528ab7:{NFSU2_TR(0x528ab7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B528aba:{NFSU2_TR(0x528aba);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B528abb:{NFSU2_TR(0x528abb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x528ab0u);}goto L528ab0;}}
}
B528abd:L528abd:{c.instructions+=4;NFSU2_TR(0x528abd);
__builtin_memmove((R+28),gp(0x8383f4),4);
}
B528ac3:{NFSU2_TR(0x528ac3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B528ac5:{NFSU2_TR(0x528ac5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B528ac7:{NFSU2_TR(0x528ac7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L528aff;}}
}
B528ac9:L528ac9:{c.instructions+=2;NFSU2_TR(0x528ac9);
__builtin_memmove((R+8),gp(0x8383f0),4);
}
B528acf:{NFSU2_TR(0x528acf);
}
B528ad0:L528ad0:{c.instructions+=2;NFSU2_TR(0x528ad0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B528ad2:{NFSU2_TR(0x528ad2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L528adc;}}
}
B528ad4:L528ad4:{c.instructions+=2;NFSU2_TR(0x528ad4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B528ad6:{NFSU2_TR(0x528ad6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L528adc;}}
}
B528ad8:L528ad8:{c.instructions+=2;NFSU2_TR(0x528ad8);
__builtin_memmove((R+4),(R+8),4);
}
B528ada:{NFSU2_TR(0x528ada);
{goto L528ade;}
}
B528adc:L528adc:{c.instructions+=1;NFSU2_TR(0x528adc);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B528ade:L528ade:{c.instructions+=2;NFSU2_TR(0x528ade);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x51ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B528ae2:{NFSU2_TR(0x528ae2);
if(r1(R+518)){{goto L528af4;}}
}
B528ae4:L528ae4:{c.instructions+=3;NFSU2_TR(0x528ae4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B528aeb:{NFSU2_TR(0x528aeb);
u8 U[14];
w4(U+0,u32(u32(u32(0x36ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w2(U+12,u16(u32(r2(U+12))+u32(u16(0x1ull))));
s2(u32(r4(U+8)),r2(U+12));
}
B528af0:{NFSU2_TR(0x528af0);
u8 U[12];
w4(U+0,u32(u32(u32(0x36ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B528af4:L528af4:{c.instructions+=4;NFSU2_TR(0x528af4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B528af5:{NFSU2_TR(0x528af5);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xa0ull))));
}
B528afb:{NFSU2_TR(0x528afb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B528afd:{NFSU2_TR(0x528afd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x528ad0u);}goto L528ad0;}}
}
B528aff:L528aff:{c.instructions+=4;NFSU2_TR(0x528aff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B528b02:{NFSU2_TR(0x528b02);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7afcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+12)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B528b08:{NFSU2_TR(0x528b08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528b0b:{NFSU2_TR(0x528b0b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L528cd7;}}
}
B528b11:L528b11:{c.instructions+=3;NFSU2_TR(0x528b11);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7b00ull))));
}
B528b16:{NFSU2_TR(0x528b16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528b19:{NFSU2_TR(0x528b19);
__builtin_memmove((R+16),(R+16),4);
}
B528b20:L528b20:{c.instructions+=5;NFSU2_TR(0x528b20);
__builtin_memmove((R+4),gp(0x8383e4),4);
}
B528b26:{NFSU2_TR(0x528b26);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x20ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B528b29:{NFSU2_TR(0x528b29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B528b2c:{NFSU2_TR(0x528b2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B528b2e:{NFSU2_TR(0x528b2e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L528b42;}}
}
B528b30:L528b30:{c.instructions+=2;NFSU2_TR(0x528b30);
u8 U[8];
__builtin_memmove((U+0),gp(0x8641f0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B528b36:{NFSU2_TR(0x528b36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L528b42;}}
}
B528b38:L528b38:{c.instructions+=1;NFSU2_TR(0x528b38);
s4(0x8641f0,u32(0x1ull));
}
B528b42:L528b42:{c.instructions+=3;NFSU2_TR(0x528b42);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B528b44:{NFSU2_TR(0x528b44);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B528b46:{NFSU2_TR(0x528b46);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L528b6c;}}
}
B528b48:L528b48:{c.instructions+=2;NFSU2_TR(0x528b48);
__builtin_memmove((R+4),gp(0x8383e0),4);
}
B528b4e:{NFSU2_TR(0x528b4e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B528b51:L528b51:{c.instructions+=2;NFSU2_TR(0x528b51);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B528b53:{NFSU2_TR(0x528b53);
if(r1(R+518)){{goto L528b98;}}
}
B528b55:L528b55:{c.instructions+=6;NFSU2_TR(0x528b55);
__builtin_memmove((R+28),gp(0x8383e4),4);
}
B528b5b:{NFSU2_TR(0x528b5b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B528b5c:{NFSU2_TR(0x528b5c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x88ull))));
}
B528b62:{NFSU2_TR(0x528b62);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B528b64:{NFSU2_TR(0x528b64);
__builtin_memmove((R+28),gp(0x8383f4),4);
}
B528b6a:{NFSU2_TR(0x528b6a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x528b51u);}goto L528b51;}}
}
B528b6c:L528b6c:{c.instructions+=3;NFSU2_TR(0x528b6c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B528b6e:{NFSU2_TR(0x528b6e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B528b70:{NFSU2_TR(0x528b70);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L528cb6;}}
}
B528b76:L528b76:{c.instructions+=3;NFSU2_TR(0x528b76);
__builtin_memmove((R+4),gp(0x8383f0),4);
}
B528b7c:{NFSU2_TR(0x528b7c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x38ull))));
}
B528b7f:{NFSU2_TR(0x528b7f);
}
B528b80:L528b80:{c.instructions+=2;NFSU2_TR(0x528b80);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B528b82:{NFSU2_TR(0x528b82);
if(r1(R+518)){{goto L528c84;}}
}
B528b88:L528b88:{c.instructions+=4;NFSU2_TR(0x528b88);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B528b89:{NFSU2_TR(0x528b89);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
}
B528b8f:{NFSU2_TR(0x528b8f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B528b91:{NFSU2_TR(0x528b91);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x528b80u);}goto L528b80;}}
}
B528b93:L528b93:{c.instructions+=1;NFSU2_TR(0x528b93);
{goto L528cb6;}
}
B528b98:L528b98:{c.instructions+=5;NFSU2_TR(0x528b98);
__builtin_memmove((R+4),gp(0x8383e0),4);
}
B528b9e:{NFSU2_TR(0x528b9e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B528ba4:{NFSU2_TR(0x528ba4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B528ba6:{NFSU2_TR(0x528ba6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B528ba8:{NFSU2_TR(0x528ba8);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x528b6cu);}goto L528b6c;}}
}
B528baa:L528baa:{c.instructions+=3;NFSU2_TR(0x528baa);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B528bad:{NFSU2_TR(0x528bad);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B528bb0:{NFSU2_TR(0x528bb0);
if(r1(R+518)){{goto L528bc0;}}
}
B528bb2:L528bb2:{c.instructions+=2;NFSU2_TR(0x528bb2);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B528bb5:{NFSU2_TR(0x528bb5);
if(r1(R+518)){{goto L528bc0;}}
}
B528bb7:L528bb7:{c.instructions+=2;NFSU2_TR(0x528bb7);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B528bba:{NFSU2_TR(0x528bba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L528c76;}}
}
B528bc0:L528bc0:{c.instructions+=4;NFSU2_TR(0x528bc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B528bc3:{NFSU2_TR(0x528bc3);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B528bc6:{NFSU2_TR(0x528bc6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B528bc8:{NFSU2_TR(0x528bc8);
if(r1(R+518)){{goto L528c76;}}
}
B528bce:L528bce:{c.instructions+=2;NFSU2_TR(0x528bce);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B528bd1:{NFSU2_TR(0x528bd1);
if(r1(R+518)){{goto L528c76;}}
}
B528bd7:L528bd7:{c.instructions+=2;NFSU2_TR(0x528bd7);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B528bda:{NFSU2_TR(0x528bda);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L528c76;}}
}
B528be0:L528be0:{c.instructions+=2;NFSU2_TR(0x528be0);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B528be3:{NFSU2_TR(0x528be3);
if(r1(R+518)){{goto L528bfa;}}
}
B528be5:L528be5:{c.instructions+=3;NFSU2_TR(0x528be5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B528be8:{NFSU2_TR(0x528be8);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B528bea:{NFSU2_TR(0x528bea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L528bfa;}}
}
B528bec:L528bec:{c.instructions+=6;NFSU2_TR(0x528bec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B528bef:{NFSU2_TR(0x528bef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B528bf2:{NFSU2_TR(0x528bf2);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B528bf3:{NFSU2_TR(0x528bf3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B528bf4:{NFSU2_TR(0x528bf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528bf7:{NFSU2_TR(0x528bf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528bfa:L528bfa:{c.instructions+=2;NFSU2_TR(0x528bfa);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B528bfe:{NFSU2_TR(0x528bfe);
if(r1(R+518)){{goto L528c68;}}
}
B528c00:L528c00:{c.instructions+=2;NFSU2_TR(0x528c00);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B528c04:{NFSU2_TR(0x528c04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L528c14;}}
}
B528c06:L528c06:{c.instructions+=6;NFSU2_TR(0x528c06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B528c09:{NFSU2_TR(0x528c09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B528c0c:{NFSU2_TR(0x528c0c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B528c0d:{NFSU2_TR(0x528c0d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B528c0e:{NFSU2_TR(0x528c0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528c11:{NFSU2_TR(0x528c11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528c14:L528c14:{c.instructions+=2;NFSU2_TR(0x528c14);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B528c18:{NFSU2_TR(0x528c18);
if(r1(R+518)){{goto L528c68;}}
}
B528c1a:L528c1a:{c.instructions+=2;NFSU2_TR(0x528c1a);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x4ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B528c1e:{NFSU2_TR(0x528c1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L528c2e;}}
}
B528c20:L528c20:{c.instructions+=6;NFSU2_TR(0x528c20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B528c23:{NFSU2_TR(0x528c23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B528c26:{NFSU2_TR(0x528c26);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B528c27:{NFSU2_TR(0x528c27);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B528c28:{NFSU2_TR(0x528c28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528c2b:{NFSU2_TR(0x528c2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528c2e:L528c2e:{c.instructions+=2;NFSU2_TR(0x528c2e);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B528c32:{NFSU2_TR(0x528c32);
if(r1(R+518)){{goto L528c68;}}
}
B528c34:L528c34:{c.instructions+=2;NFSU2_TR(0x528c34);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x5ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B528c38:{NFSU2_TR(0x528c38);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L528c48;}}
}
B528c3a:L528c3a:{c.instructions+=6;NFSU2_TR(0x528c3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B528c3d:{NFSU2_TR(0x528c3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B528c40:{NFSU2_TR(0x528c40);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B528c41:{NFSU2_TR(0x528c41);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B528c42:{NFSU2_TR(0x528c42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528c45:{NFSU2_TR(0x528c45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528c48:L528c48:{c.instructions+=2;NFSU2_TR(0x528c48);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B528c4c:{NFSU2_TR(0x528c4c);
if(r1(R+518)){{goto L528c68;}}
}
B528c4e:L528c4e:{c.instructions+=2;NFSU2_TR(0x528c4e);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B528c52:{NFSU2_TR(0x528c52);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L528c62;}}
}
B528c54:L528c54:{c.instructions+=6;NFSU2_TR(0x528c54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B528c57:{NFSU2_TR(0x528c57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B528c5a:{NFSU2_TR(0x528c5a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B528c5b:{NFSU2_TR(0x528c5b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B528c5c:{NFSU2_TR(0x528c5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528c5f:{NFSU2_TR(0x528c5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528c62:L528c62:{c.instructions+=2;NFSU2_TR(0x528c62);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B528c66:{NFSU2_TR(0x528c66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L528c76;}}
}
B528c68:L528c68:{c.instructions+=6;NFSU2_TR(0x528c68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B528c6b:{NFSU2_TR(0x528c6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B528c6e:{NFSU2_TR(0x528c6e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B528c6f:{NFSU2_TR(0x528c6f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B528c70:{NFSU2_TR(0x528c70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528c73:{NFSU2_TR(0x528c73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528c76:L528c76:{c.instructions+=3;NFSU2_TR(0x528c76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B528c79:{NFSU2_TR(0x528c79);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B528c7d:{NFSU2_TR(0x528c7d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L528cb6;}}
}
B528c7f:L528c7f:{c.instructions+=2;NFSU2_TR(0x528c7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B528c82:{NFSU2_TR(0x528c82);
{goto L528cb6;}
}
B528c84:L528c84:{c.instructions+=6;NFSU2_TR(0x528c84);
__builtin_memmove((R+8),gp(0x8383f0),4);
}
B528c8a:{NFSU2_TR(0x528c8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B528c8d:{NFSU2_TR(0x528c8d);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B528c90:{NFSU2_TR(0x528c90);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B528c92:{NFSU2_TR(0x528c92);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B528c94:{NFSU2_TR(0x528c94);
if(r1(R+518)){{goto L528cb6;}}
}
B528c96:L528c96:{c.instructions+=3;NFSU2_TR(0x528c96);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x51ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B528c99:{NFSU2_TR(0x528c99);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B528c9b:{NFSU2_TR(0x528c9b);
if(r1(R+518)){{goto L528cb6;}}
}
B528c9d:L528c9d:{c.instructions+=3;NFSU2_TR(0x528c9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B528ca0:{NFSU2_TR(0x528ca0);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B528ca4:{NFSU2_TR(0x528ca4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L528cb6;}}
}
B528ca6:L528ca6:{c.instructions+=3;NFSU2_TR(0x528ca6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B528cad:{NFSU2_TR(0x528cad);
u8 U[14];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w2(U+12,u16(u32(r2(U+12))+u32(u16(0x1ull))));
s2(u32(r4(U+8)),r2(U+12));
}
B528cb2:{NFSU2_TR(0x528cb2);
u8 U[12];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B528cb6:L528cb6:{c.instructions+=10;NFSU2_TR(0x528cb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B528cb9:{NFSU2_TR(0x528cb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B528cbc:{NFSU2_TR(0x528cbc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B528cbf:{NFSU2_TR(0x528cbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528cc2:{NFSU2_TR(0x528cc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B528cc5:{NFSU2_TR(0x528cc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7afcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B528ccb:{NFSU2_TR(0x528ccb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B528ccc:{NFSU2_TR(0x528ccc);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B528cce:{NFSU2_TR(0x528cce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528cd1:{NFSU2_TR(0x528cd1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x528b20u);}goto L528b20;}}
}
B528cd7:L528cd7:{c.instructions+=1;NFSU2_TR(0x528cd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x528cdcull));
TAIL_STATIC(0x515470u,515);
}
B528cdc:L528cdc:{c.instructions+=3;NFSU2_TR(0x528cdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528cdf:{NFSU2_TR(0x528cdf);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B528ce2:{NFSU2_TR(0x528ce2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x528ce7ull));
TAIL_STATIC(0x5017f0u,501);
}
B528ce7:L528ce7:{c.instructions+=6;NFSU2_TR(0x528ce7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528cea:{NFSU2_TR(0x528cea);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B528ced:{NFSU2_TR(0x528ced);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B528cf3:{NFSU2_TR(0x528cf3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B528cf5:{NFSU2_TR(0x528cf5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B528cf8:{NFSU2_TR(0x528cf8);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L528cfe;}}
}
B528cfa:L528cfa:{c.instructions+=2;NFSU2_TR(0x528cfa);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B528cfc:{NFSU2_TR(0x528cfc);
{goto L528d08;}
}
B528cfe:L528cfe:{c.instructions+=3;NFSU2_TR(0x528cfe);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B528d00:{NFSU2_TR(0x528d00);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B528d02:{NFSU2_TR(0x528d02);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B528d08:L528d08:{c.instructions+=6;NFSU2_TR(0x528d08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B528d0b:{NFSU2_TR(0x528d0b);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B528d0e:{NFSU2_TR(0x528d0e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B528d10:{NFSU2_TR(0x528d10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528d13:{NFSU2_TR(0x528d13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528d16:{NFSU2_TR(0x528d16);
if(r1(R+518)){{goto L528d22;}}
}
B528d18:L528d18:{c.instructions+=4;NFSU2_TR(0x528d18);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B528d1b:{NFSU2_TR(0x528d1b);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B528d1e:{NFSU2_TR(0x528d1e);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B528d20:{NFSU2_TR(0x528d20);
{goto L528d28;}
}
B528d22:L528d22:{c.instructions+=1;NFSU2_TR(0x528d22);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B528d28:L528d28:{c.instructions+=13;NFSU2_TR(0x528d28);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B528d2b:{NFSU2_TR(0x528d2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B528d2e:{NFSU2_TR(0x528d2e);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B528d31:{NFSU2_TR(0x528d31);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B528d34:{NFSU2_TR(0x528d34);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B528d36:{NFSU2_TR(0x528d36);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B528d39:{NFSU2_TR(0x528d39);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7af8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B528d3f:{NFSU2_TR(0x528d3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528d42:{NFSU2_TR(0x528d42);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7af8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B528d48:{NFSU2_TR(0x528d48);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B528d4e:{NFSU2_TR(0x528d4e);
u8 U[12];
w4(U+0,u32(u32(u32(0x72d8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B528d55:{NFSU2_TR(0x528d55);
__builtin_memmove((R+4),(R+28),4);
}
B528d57:{NFSU2_TR(0x528d57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x528d5cull));
TAIL_STATIC(0x5004d0u,500);
}
B528d5c:L528d5c:{c.instructions+=10;NFSU2_TR(0x528d5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B528d5f:{NFSU2_TR(0x528d5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528d62:{NFSU2_TR(0x528d62);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7af8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B528d68:{NFSU2_TR(0x528d68);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B528d6b:{NFSU2_TR(0x528d6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7f7ba8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B528d71:{NFSU2_TR(0x528d71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528d74:{NFSU2_TR(0x528d74);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B528d7a:{NFSU2_TR(0x528d7a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B528d7c:{NFSU2_TR(0x528d7c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B528d7e:{NFSU2_TR(0x528d7e);
if(r1(R+518)){{goto L528d85;}}
}
B528d80:L528d80:{c.instructions+=1;NFSU2_TR(0x528d80);
w4(R+0,u32(0x1ull));
}
B528d85:L528d85:{c.instructions+=2;NFSU2_TR(0x528d85);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B528d8b:{NFSU2_TR(0x528d8b);
if(r1(R+518)){{goto L528d8e;}}
}
B528d8d:L528d8d:{c.instructions+=1;NFSU2_TR(0x528d8d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B528d8e:L528d8e:{c.instructions+=2;NFSU2_TR(0x528d8e);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B528d94:{NFSU2_TR(0x528d94);
if(r1(R+518)){{goto L528d97;}}
}
B528d96:L528d96:{c.instructions+=1;NFSU2_TR(0x528d96);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B528d97:L528d97:{c.instructions+=2;NFSU2_TR(0x528d97);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B528d9d:{NFSU2_TR(0x528d9d);
if(r1(R+518)){{goto L528da0;}}
}
B528d9f:L528d9f:{c.instructions+=1;NFSU2_TR(0x528d9f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B528da0:L528da0:{c.instructions+=8;NFSU2_TR(0x528da0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B528da3:{NFSU2_TR(0x528da3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528da6:{NFSU2_TR(0x528da6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7af8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B528dac:{NFSU2_TR(0x528dac);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B528daf:{NFSU2_TR(0x528daf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7f7bacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B528db5:{NFSU2_TR(0x528db5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528db8:{NFSU2_TR(0x528db8);
__builtin_memmove((R+4),(R+28),4);
}
B528dba:{NFSU2_TR(0x528dba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x528dbfull));
TAIL_STATIC(0x500520u,500);
}
B528dbf:L528dbf:{c.instructions+=15;NFSU2_TR(0x528dbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B528dc2:{NFSU2_TR(0x528dc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528dc8:{NFSU2_TR(0x528dc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7af8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B528dce:{NFSU2_TR(0x528dce);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B528dd1:{NFSU2_TR(0x528dd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7f7bb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B528dd7:{NFSU2_TR(0x528dd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528ddd:{NFSU2_TR(0x528ddd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B528ddf:{NFSU2_TR(0x528ddf);
w4(R+4,u32(0x50ull));
}
B528de4:{NFSU2_TR(0x528de4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((R+28),(U+0),4);
}
B528dea:{NFSU2_TR(0x528dea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528df0:{NFSU2_TR(0x528df0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528df6:{NFSU2_TR(0x528df6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528df9:{NFSU2_TR(0x528df9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528dfc:{NFSU2_TR(0x528dfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528e02:{NFSU2_TR(0x528e02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528e08:L528e08:{c.instructions+=1;NFSU2_TR(0x528e08);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L528e0a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x528e08u);}goto L528e08;}
}
B528e0a:L528e0a:{c.instructions+=5;NFSU2_TR(0x528e0a);
__builtin_memmove((R+0),gp(0x838408),4);
}
B528e0f:{NFSU2_TR(0x528e0f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B528e11:{NFSU2_TR(0x528e11);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B528e13:{NFSU2_TR(0x528e13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528e16:{NFSU2_TR(0x528e16);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L528f39;}}
}
B528e1c:L528e1c:{c.instructions+=2;NFSU2_TR(0x528e1c);
__builtin_memmove((R+12),gp(0x83840c),4);
}
B528e22:{NFSU2_TR(0x528e22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528e25:L528e25:{c.instructions+=2;NFSU2_TR(0x528e25);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B528e27:{NFSU2_TR(0x528e27);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L528e2d;}}
}
B528e29:L528e29:{c.instructions+=2;NFSU2_TR(0x528e29);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B528e2b:{NFSU2_TR(0x528e2b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L528e2f;}}
}
B528e2d:L528e2d:{c.instructions+=1;NFSU2_TR(0x528e2d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B528e2f:L528e2f:{c.instructions+=5;NFSU2_TR(0x528e2f);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x25ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B528e33:{NFSU2_TR(0x528e33);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B528e36:{NFSU2_TR(0x528e36);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B528e38:{NFSU2_TR(0x528e38);
u8 U[8];
__builtin_memmove((U+0),gp(0x86283c),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+4)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B528e3e:{NFSU2_TR(0x528e3e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L528e52;}}
}
B528e40:L528e40:{c.instructions+=2;NFSU2_TR(0x528e40);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x862840ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+8))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B528e47:{NFSU2_TR(0x528e47);
if(r1(R+518)){{goto L528e9d;}}
}
B528e49:L528e49:{c.instructions+=3;NFSU2_TR(0x528e49);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B528e4a:{NFSU2_TR(0x528e4a);
u8 U[8];
__builtin_memmove((U+0),gp(0x86283c),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B528e50:{NFSU2_TR(0x528e50);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x528e40u);}goto L528e40;}}
}
B528e52:L528e52:{c.instructions+=1;NFSU2_TR(0x528e52);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B528e54:L528e54:{c.instructions+=4;NFSU2_TR(0x528e54);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B528e57:{NFSU2_TR(0x528e57);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B528e5a:{NFSU2_TR(0x528e5a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B528e5d:{NFSU2_TR(0x528e5d);
if(r1(R+518)){{goto L528eb1;}}
}
B528e5f:L528e5f:{c.instructions+=2;NFSU2_TR(0x528e5f);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x4ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B528e62:{NFSU2_TR(0x528e62);
if(r1(R+518)){{goto L528eb1;}}
}
B528e64:L528e64:{c.instructions+=2;NFSU2_TR(0x528e64);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B528e67:{NFSU2_TR(0x528e67);
if(r1(R+518)){{goto L528e72;}}
}
B528e69:L528e69:{c.instructions+=2;NFSU2_TR(0x528e69);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B528e6c:{NFSU2_TR(0x528e6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L528f1f;}}
}
B528e72:L528e72:{c.instructions+=10;NFSU2_TR(0x528e72);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B528e75:{NFSU2_TR(0x528e75);
u8 U[16];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B528e7c:{NFSU2_TR(0x528e7c);
u8 U[12];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B528e83:{NFSU2_TR(0x528e83);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B528e84:{NFSU2_TR(0x528e84);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B528e86:{NFSU2_TR(0x528e86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B528e89:{NFSU2_TR(0x528e89);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B528e8a:{NFSU2_TR(0x528e8a);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B528e8c:{NFSU2_TR(0x528e8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528e8f:{NFSU2_TR(0x528e8f);
if(r1(R+518)){{goto L528f1f;}}
}
B528e95:L528e95:{c.instructions+=2;NFSU2_TR(0x528e95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B528e98:{NFSU2_TR(0x528e98);
{goto L528f1f;}
}
B528e9d:L528e9d:{c.instructions+=3;NFSU2_TR(0x528e9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x862840ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B528ea4:{NFSU2_TR(0x528ea4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B528ea6:{NFSU2_TR(0x528ea6);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x528e52u);}goto L528e52;}}
}
B528ea8:L528ea8:{c.instructions+=3;NFSU2_TR(0x528ea8);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B528eac:{NFSU2_TR(0x528eac);
__builtin_memmove((R+8),(R+518),1);
}
B528eaf:{NFSU2_TR(0x528eaf);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x528e54u);}goto L528e54;}
}
B528eb1:L528eb1:{c.instructions+=20;NFSU2_TR(0x528eb1);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B528eb4:{NFSU2_TR(0x528eb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B528eb7:{NFSU2_TR(0x528eb7);
u8 U[16];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B528ebe:{NFSU2_TR(0x528ebe);
u8 U[12];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B528ec5:{NFSU2_TR(0x528ec5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B528ec8:{NFSU2_TR(0x528ec8);
__builtin_memmove((R+12),(R+0),4);
}
B528eca:{NFSU2_TR(0x528eca);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B528ecc:{NFSU2_TR(0x528ecc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B528ecf:{NFSU2_TR(0x528ecf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B528ed2:{NFSU2_TR(0x528ed2);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B528ed4:{NFSU2_TR(0x528ed4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B528ed7:{NFSU2_TR(0x528ed7);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B528eda:{NFSU2_TR(0x528eda);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B528ee1:{NFSU2_TR(0x528ee1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B528ee3:{NFSU2_TR(0x528ee3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B528ee9:{NFSU2_TR(0x528ee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B528eec:{NFSU2_TR(0x528eec);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B528eed:{NFSU2_TR(0x528eed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528ef3:{NFSU2_TR(0x528ef3);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7af8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B528ef9:{NFSU2_TR(0x528ef9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L528f01;}}
}
B528efb:L528efb:{c.instructions+=1;NFSU2_TR(0x528efb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B528f01:L528f01:{c.instructions+=2;NFSU2_TR(0x528f01);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B528f03:{NFSU2_TR(0x528f03);
if(r1(R+518)){{goto L528f1c;}}
}
B528f05:L528f05:{c.instructions+=4;NFSU2_TR(0x528f05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B528f0b:{NFSU2_TR(0x528f0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B528f0e:{NFSU2_TR(0x528f0e);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7af8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B528f14:{NFSU2_TR(0x528f14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L528f1c;}}
}
B528f16:L528f16:{c.instructions+=1;NFSU2_TR(0x528f16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B528f1c:L528f1c:{c.instructions+=1;NFSU2_TR(0x528f1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B528f1f:L528f1f:{c.instructions+=8;NFSU2_TR(0x528f1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B528f22:{NFSU2_TR(0x528f22);
__builtin_memmove((R+0),gp(0x838408),4);
}
B528f27:{NFSU2_TR(0x528f27);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B528f28:{NFSU2_TR(0x528f28);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x40ull))));
}
B528f2b:{NFSU2_TR(0x528f2b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B528f2d:{NFSU2_TR(0x528f2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528f30:{NFSU2_TR(0x528f30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528f33:{NFSU2_TR(0x528f33);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x528e25u);}goto L528e25;}}
}
B528f39:L528f39:{c.instructions+=9;NFSU2_TR(0x528f39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B528f3c:{NFSU2_TR(0x528f3c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B528f3e:{NFSU2_TR(0x528f3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528f41:{NFSU2_TR(0x528f41);
{u32 ea_=u32(r4(R+0)+u32(29624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B528f47:{NFSU2_TR(0x528f47);
{u32 ea_=u32(r4(R+24)+u32(476u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B528f4d:{NFSU2_TR(0x528f4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x73bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B528f53:{NFSU2_TR(0x528f53);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B528f55:{NFSU2_TR(0x528f55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528f58:{NFSU2_TR(0x528f58);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L528f65;}}
}
B528f5a:L528f5a:{c.instructions+=3;NFSU2_TR(0x528f5a);
{u32 ea_=u32(r4(R+0)+u32(29624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B528f60:{NFSU2_TR(0x528f60);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xda,0x30"::"a"(ea_):"memory");}
}
B528f63:{NFSU2_TR(0x528f63);
{goto L528f6b;}
}
B528f65:L528f65:{c.instructions+=1;NFSU2_TR(0x528f65);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B528f6b:L528f6b:{c.instructions+=4;NFSU2_TR(0x528f6b);
{u32 ea_=u32(r4(R+24)+u32(508u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B528f71:{NFSU2_TR(0x528f71);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x73c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B528f77:{NFSU2_TR(0x528f77);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B528f79:{NFSU2_TR(0x528f79);
if(r1(R+518)){{goto L528f7e;}}
}
B528f7b:L528f7b:{c.instructions+=1;NFSU2_TR(0x528f7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B528f7e:L528f7e:{c.instructions+=6;NFSU2_TR(0x528f7e);
{u32 ea_=u32(r4(R+0)+u32(29884u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B528f84:{NFSU2_TR(0x528f84);
{u32 ea_=u32(r4(R+24)+u32(480u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B528f8a:{NFSU2_TR(0x528f8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B528f90:{NFSU2_TR(0x528f90);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B528f92:{NFSU2_TR(0x528f92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528f95:{NFSU2_TR(0x528f95);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L528fa2;}}
}
B528f97:L528f97:{c.instructions+=3;NFSU2_TR(0x528f97);
{u32 ea_=u32(r4(R+0)+u32(29884u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B528f9d:{NFSU2_TR(0x528f9d);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xda,0x30"::"a"(ea_):"memory");}
}
B528fa0:{NFSU2_TR(0x528fa0);
{goto L528fa8;}
}
B528fa2:L528fa2:{c.instructions+=1;NFSU2_TR(0x528fa2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B528fa8:L528fa8:{c.instructions+=4;NFSU2_TR(0x528fa8);
{u32 ea_=u32(r4(R+24)+u32(512u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B528fae:{NFSU2_TR(0x528fae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B528fb4:{NFSU2_TR(0x528fb4);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B528fb6:{NFSU2_TR(0x528fb6);
if(r1(R+518)){{goto L528fbb;}}
}
B528fb8:L528fb8:{c.instructions+=1;NFSU2_TR(0x528fb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B528fbb:L528fbb:{c.instructions+=6;NFSU2_TR(0x528fbb);
{u32 ea_=u32(r4(R+0)+u32(30144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B528fc1:{NFSU2_TR(0x528fc1);
{u32 ea_=u32(r4(R+24)+u32(484u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B528fc7:{NFSU2_TR(0x528fc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x75c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B528fcd:{NFSU2_TR(0x528fcd);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B528fcf:{NFSU2_TR(0x528fcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B528fd2:{NFSU2_TR(0x528fd2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L528fdf;}}
}
B528fd4:L528fd4:{c.instructions+=3;NFSU2_TR(0x528fd4);
{u32 ea_=u32(r4(R+0)+u32(30144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B528fda:{NFSU2_TR(0x528fda);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xda,0x30"::"a"(ea_):"memory");}
}
B528fdd:{NFSU2_TR(0x528fdd);
{goto L528fe5;}
}
B528fdf:L528fdf:{c.instructions+=1;NFSU2_TR(0x528fdf);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B528fe5:L528fe5:{c.instructions+=4;NFSU2_TR(0x528fe5);
{u32 ea_=u32(r4(R+24)+u32(516u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B528feb:{NFSU2_TR(0x528feb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x75c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B528ff1:{NFSU2_TR(0x528ff1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B528ff3:{NFSU2_TR(0x528ff3);
if(r1(R+518)){{goto L528ff8;}}
}
B528ff5:L528ff5:{c.instructions+=1;NFSU2_TR(0x528ff5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B528ff8:L528ff8:{c.instructions+=2;NFSU2_TR(0x528ff8);
{u32 ea_=u32(r4(R+0)+u32(30404u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B528ffe:{NFSU2_TR(0x528ffe);
{u32 ea_=u32(r4(R+24)+u32(488u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
TAIL_STATIC(0x529004u,529);
}
XIT:NFSU2_TR_EXIT(0x528,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
