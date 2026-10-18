#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_457(u8* __restrict R,Cpu& c);
u32 body_45f(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_6f6(u8* __restrict R,Cpu& c);
u32 body_6f7(u8* __restrict R,Cpu& c);
u32 body_6f8(u8* __restrict R,Cpu& c);
u32 body_721(u8* __restrict R,Cpu& c);
u32 body_734(u8* __restrict R,Cpu& c);
u32 body_735(u8* __restrict R,Cpu& c);
u32 body_739(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x458,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x458,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_458(u8* __restrict R,Cpu& c);
u32 page_458(Cpu& c){return body_458(c.regs.data(),c);}
__attribute__((noinline)) u32 body_458(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x458000:goto L458000;
case 0x458002:c.instructions+=2;goto B458002;
case 0x458003:c.instructions+=1;goto B458003;
case 0x458010:goto L458010;
case 0x458014:c.instructions+=5;goto B458014;
case 0x458016:c.instructions+=4;goto B458016;
case 0x458017:c.instructions+=3;goto B458017;
case 0x458018:c.instructions+=2;goto B458018;
case 0x45801a:c.instructions+=1;goto B45801a;
case 0x45801c:goto L45801c;
case 0x45801e:c.instructions+=1;goto B45801e;
case 0x458020:goto L458020;
case 0x458025:c.instructions+=1;goto B458025;
case 0x458027:goto L458027;
case 0x45802c:goto L45802c;
case 0x45802f:c.instructions+=4;goto B45802f;
case 0x458031:c.instructions+=3;goto B458031;
case 0x458035:c.instructions+=2;goto B458035;
case 0x458037:c.instructions+=1;goto B458037;
case 0x458039:goto L458039;
case 0x45803b:c.instructions+=1;goto B45803b;
case 0x45803d:goto L45803d;
case 0x458042:c.instructions+=1;goto B458042;
case 0x458044:goto L458044;
case 0x458049:goto L458049;
case 0x45804c:c.instructions+=3;goto B45804c;
case 0x458050:c.instructions+=2;goto B458050;
case 0x458052:c.instructions+=1;goto B458052;
case 0x458054:goto L458054;
case 0x458056:c.instructions+=1;goto B458056;
case 0x458058:goto L458058;
case 0x45805d:c.instructions+=1;goto B45805d;
case 0x45805f:goto L45805f;
case 0x458064:goto L458064;
case 0x458067:c.instructions+=3;goto B458067;
case 0x45806b:c.instructions+=2;goto B45806b;
case 0x45806d:c.instructions+=1;goto B45806d;
case 0x45806f:goto L45806f;
case 0x458071:c.instructions+=1;goto B458071;
case 0x458073:goto L458073;
case 0x458076:c.instructions+=1;goto B458076;
case 0x458078:goto L458078;
case 0x45807d:goto L45807d;
case 0x458080:c.instructions+=3;goto B458080;
case 0x458084:c.instructions+=2;goto B458084;
case 0x458086:c.instructions+=1;goto B458086;
case 0x458088:goto L458088;
case 0x45808a:c.instructions+=1;goto B45808a;
case 0x45808c:goto L45808c;
case 0x45808f:c.instructions+=1;goto B45808f;
case 0x458091:goto L458091;
case 0x458096:goto L458096;
case 0x458097:c.instructions+=4;goto B458097;
case 0x458098:c.instructions+=3;goto B458098;
case 0x45809d:c.instructions+=2;goto B45809d;
case 0x4580a0:c.instructions+=1;goto B4580a0;
case 0x4580a5:goto L4580a5;
case 0x4580a8:c.instructions+=2;goto B4580a8;
case 0x4580aa:c.instructions+=1;goto B4580aa;
case 0x4580ac:goto L4580ac;
case 0x4580b1:c.instructions+=2;goto B4580b1;
case 0x4580b6:c.instructions+=1;goto B4580b6;
case 0x4580bb:goto L4580bb;
case 0x4580bc:c.instructions+=3;goto B4580bc;
case 0x4580bd:c.instructions+=2;goto B4580bd;
case 0x4580c2:c.instructions+=1;goto B4580c2;
case 0x4580c7:goto L4580c7;
case 0x4580ca:goto L4580ca;
case 0x4580cb:c.instructions+=3;goto B4580cb;
case 0x4580cd:c.instructions+=2;goto B4580cd;
case 0x4580ce:c.instructions+=1;goto B4580ce;
case 0x4580e0:goto L4580e0;
case 0x4580e4:c.instructions+=4;goto B4580e4;
case 0x4580e8:c.instructions+=3;goto B4580e8;
case 0x4580e9:c.instructions+=2;goto B4580e9;
case 0x4580ea:c.instructions+=1;goto B4580ea;
case 0x4580ef:goto L4580ef;
case 0x4580f2:c.instructions+=1;goto B4580f2;
case 0x458100:goto L458100;
case 0x458101:c.instructions+=3;goto B458101;
case 0x458106:c.instructions+=2;goto B458106;
case 0x45810b:c.instructions+=1;goto B45810b;
case 0x458110:goto L458110;
case 0x458115:c.instructions+=3;goto B458115;
case 0x45811a:c.instructions+=2;goto B45811a;
case 0x45811c:c.instructions+=1;goto B45811c;
case 0x458121:goto L458121;
case 0x458126:c.instructions+=3;goto B458126;
case 0x45812b:c.instructions+=2;goto B45812b;
case 0x45812d:c.instructions+=1;goto B45812d;
case 0x458132:goto L458132;
case 0x458137:c.instructions+=3;goto B458137;
case 0x45813c:c.instructions+=2;goto B45813c;
case 0x45813e:c.instructions+=1;goto B45813e;
case 0x458143:goto L458143;
case 0x458148:c.instructions+=3;goto B458148;
case 0x45814d:c.instructions+=2;goto B45814d;
case 0x45814f:c.instructions+=1;goto B45814f;
case 0x458154:goto L458154;
case 0x458156:c.instructions+=2;goto B458156;
case 0x458157:c.instructions+=1;goto B458157;
case 0x458160:goto L458160;
case 0x458161:c.instructions+=3;goto B458161;
case 0x458165:c.instructions+=2;goto B458165;
case 0x458166:c.instructions+=1;goto B458166;
case 0x45816b:goto L45816b;
case 0x45816e:c.instructions+=1;goto B45816e;
case 0x458173:goto L458173;
case 0x458177:c.instructions+=5;goto B458177;
case 0x45817b:c.instructions+=4;goto B45817b;
case 0x45817d:c.instructions+=3;goto B45817d;
case 0x45817f:c.instructions+=2;goto B45817f;
case 0x458180:c.instructions+=1;goto B458180;
case 0x458183:goto L458183;
case 0x458186:c.instructions+=1;goto B458186;
case 0x458190:goto L458190;
case 0x458192:c.instructions+=3;goto B458192;
case 0x458194:c.instructions+=2;goto B458194;
case 0x458196:c.instructions+=1;goto B458196;
case 0x458198:goto L458198;
case 0x45819b:c.instructions+=2;goto B45819b;
case 0x45819c:c.instructions+=1;goto B45819c;
case 0x4581a1:goto L4581a1;
case 0x4581b0:goto L4581b0;
case 0x4581b1:c.instructions+=3;goto B4581b1;
case 0x4581b6:c.instructions+=2;goto B4581b6;
case 0x4581bb:c.instructions+=1;goto B4581bb;
case 0x4581c0:goto L4581c0;
case 0x4581c5:c.instructions+=3;goto B4581c5;
case 0x4581ca:c.instructions+=2;goto B4581ca;
case 0x4581cc:c.instructions+=1;goto B4581cc;
case 0x4581d1:goto L4581d1;
case 0x4581d6:c.instructions+=3;goto B4581d6;
case 0x4581db:c.instructions+=2;goto B4581db;
case 0x4581dd:c.instructions+=1;goto B4581dd;
case 0x4581e2:goto L4581e2;
case 0x4581e7:c.instructions+=3;goto B4581e7;
case 0x4581ec:c.instructions+=2;goto B4581ec;
case 0x4581ee:c.instructions+=1;goto B4581ee;
case 0x4581f3:goto L4581f3;
case 0x4581f8:c.instructions+=3;goto B4581f8;
case 0x4581fd:c.instructions+=2;goto B4581fd;
case 0x4581ff:c.instructions+=1;goto B4581ff;
case 0x458204:goto L458204;
case 0x458209:c.instructions+=3;goto B458209;
case 0x45820e:c.instructions+=2;goto B45820e;
case 0x458210:c.instructions+=1;goto B458210;
case 0x458215:goto L458215;
case 0x45821a:c.instructions+=3;goto B45821a;
case 0x45821f:c.instructions+=2;goto B45821f;
case 0x458221:c.instructions+=1;goto B458221;
case 0x458226:goto L458226;
case 0x458228:c.instructions+=2;goto B458228;
case 0x458229:c.instructions+=1;goto B458229;
case 0x458230:goto L458230;
case 0x458234:c.instructions+=2;goto B458234;
case 0x458236:c.instructions+=1;goto B458236;
case 0x458238:goto L458238;
case 0x45823a:c.instructions+=2;goto B45823a;
case 0x45823d:c.instructions+=1;goto B45823d;
case 0x458240:goto L458240;
case 0x458245:c.instructions+=1;goto B458245;
case 0x458247:goto L458247;
case 0x45824c:goto L45824c;
case 0x45824f:c.instructions+=1;goto B45824f;
case 0x458260:goto L458260;
case 0x458264:c.instructions+=5;goto B458264;
case 0x458266:c.instructions+=4;goto B458266;
case 0x458267:c.instructions+=3;goto B458267;
case 0x458268:c.instructions+=2;goto B458268;
case 0x45826a:c.instructions+=1;goto B45826a;
case 0x45826c:goto L45826c;
case 0x45826e:c.instructions+=1;goto B45826e;
case 0x458270:goto L458270;
case 0x458273:c.instructions+=1;goto B458273;
case 0x458275:goto L458275;
case 0x45827a:goto L45827a;
case 0x45827d:c.instructions+=4;goto B45827d;
case 0x45827f:c.instructions+=3;goto B45827f;
case 0x458283:c.instructions+=2;goto B458283;
case 0x458285:c.instructions+=1;goto B458285;
case 0x458287:goto L458287;
case 0x458289:c.instructions+=1;goto B458289;
case 0x45828b:goto L45828b;
case 0x458290:c.instructions+=1;goto B458290;
case 0x458292:goto L458292;
case 0x458297:goto L458297;
case 0x45829a:c.instructions+=3;goto B45829a;
case 0x45829e:c.instructions+=2;goto B45829e;
case 0x4582a0:c.instructions+=1;goto B4582a0;
case 0x4582a2:goto L4582a2;
case 0x4582a4:c.instructions+=1;goto B4582a4;
case 0x4582a6:goto L4582a6;
case 0x4582ab:c.instructions+=1;goto B4582ab;
case 0x4582ad:goto L4582ad;
case 0x4582b2:goto L4582b2;
case 0x4582b5:c.instructions+=3;goto B4582b5;
case 0x4582b9:c.instructions+=2;goto B4582b9;
case 0x4582bb:c.instructions+=1;goto B4582bb;
case 0x4582bd:goto L4582bd;
case 0x4582bf:c.instructions+=1;goto B4582bf;
case 0x4582c1:goto L4582c1;
case 0x4582c6:c.instructions+=1;goto B4582c6;
case 0x4582c8:goto L4582c8;
case 0x4582cd:goto L4582cd;
case 0x4582d0:c.instructions+=3;goto B4582d0;
case 0x4582d4:c.instructions+=2;goto B4582d4;
case 0x4582d6:c.instructions+=1;goto B4582d6;
case 0x4582d8:goto L4582d8;
case 0x4582da:c.instructions+=1;goto B4582da;
case 0x4582dc:goto L4582dc;
case 0x4582e1:c.instructions+=1;goto B4582e1;
case 0x4582e3:goto L4582e3;
case 0x4582e8:goto L4582e8;
case 0x4582eb:c.instructions+=3;goto B4582eb;
case 0x4582ef:c.instructions+=2;goto B4582ef;
case 0x4582f1:c.instructions+=1;goto B4582f1;
case 0x4582f3:goto L4582f3;
case 0x4582f5:c.instructions+=1;goto B4582f5;
case 0x4582f7:goto L4582f7;
case 0x4582fc:c.instructions+=1;goto B4582fc;
case 0x4582fe:goto L4582fe;
case 0x458303:goto L458303;
case 0x458304:c.instructions+=4;goto B458304;
case 0x458305:c.instructions+=3;goto B458305;
case 0x45830a:c.instructions+=2;goto B45830a;
case 0x45830d:c.instructions+=1;goto B45830d;
case 0x458312:goto L458312;
case 0x458315:c.instructions+=2;goto B458315;
case 0x458317:c.instructions+=1;goto B458317;
case 0x458319:goto L458319;
case 0x45831e:c.instructions+=2;goto B45831e;
case 0x458323:c.instructions+=1;goto B458323;
case 0x458328:goto L458328;
case 0x458329:c.instructions+=3;goto B458329;
case 0x45832a:c.instructions+=2;goto B45832a;
case 0x45832f:c.instructions+=1;goto B45832f;
case 0x458334:goto L458334;
case 0x458337:goto L458337;
case 0x458338:c.instructions+=3;goto B458338;
case 0x45833a:c.instructions+=2;goto B45833a;
case 0x45833b:c.instructions+=1;goto B45833b;
case 0x458340:goto L458340;
case 0x458346:c.instructions+=2;goto B458346;
case 0x458348:c.instructions+=1;goto B458348;
case 0x45834a:goto L45834a;
case 0x458350:c.instructions+=1;goto B458350;
case 0x458351:goto L458351;
case 0x458353:c.instructions+=1;goto B458353;
case 0x458360:goto L458360;
case 0x458364:c.instructions+=5;goto B458364;
case 0x458366:c.instructions+=4;goto B458366;
case 0x458367:c.instructions+=3;goto B458367;
case 0x458368:c.instructions+=2;goto B458368;
case 0x45836a:c.instructions+=1;goto B45836a;
case 0x45836c:goto L45836c;
case 0x45836e:c.instructions+=1;goto B45836e;
case 0x458370:goto L458370;
case 0x458373:c.instructions+=1;goto B458373;
case 0x458375:goto L458375;
case 0x45837a:goto L45837a;
case 0x45837d:c.instructions+=4;goto B45837d;
case 0x45837f:c.instructions+=3;goto B45837f;
case 0x458383:c.instructions+=2;goto B458383;
case 0x458385:c.instructions+=1;goto B458385;
case 0x458387:goto L458387;
case 0x458389:c.instructions+=1;goto B458389;
case 0x45838b:goto L45838b;
case 0x45838e:c.instructions+=1;goto B45838e;
case 0x458390:goto L458390;
case 0x458395:goto L458395;
case 0x458398:c.instructions+=3;goto B458398;
case 0x45839c:c.instructions+=2;goto B45839c;
case 0x45839e:c.instructions+=1;goto B45839e;
case 0x4583a0:goto L4583a0;
case 0x4583a2:c.instructions+=1;goto B4583a2;
case 0x4583a4:goto L4583a4;
case 0x4583a9:c.instructions+=1;goto B4583a9;
case 0x4583ab:goto L4583ab;
case 0x4583b0:goto L4583b0;
case 0x4583b3:c.instructions+=3;goto B4583b3;
case 0x4583b7:c.instructions+=2;goto B4583b7;
case 0x4583b9:c.instructions+=1;goto B4583b9;
case 0x4583bb:goto L4583bb;
case 0x4583bd:c.instructions+=1;goto B4583bd;
case 0x4583bf:goto L4583bf;
case 0x4583c4:c.instructions+=1;goto B4583c4;
case 0x4583c6:goto L4583c6;
case 0x4583cb:goto L4583cb;
case 0x4583ce:c.instructions+=3;goto B4583ce;
case 0x4583d2:c.instructions+=2;goto B4583d2;
case 0x4583d4:c.instructions+=1;goto B4583d4;
case 0x4583d6:goto L4583d6;
case 0x4583d8:c.instructions+=1;goto B4583d8;
case 0x4583da:goto L4583da;
case 0x4583df:c.instructions+=1;goto B4583df;
case 0x4583e1:goto L4583e1;
case 0x4583e6:goto L4583e6;
case 0x4583e9:c.instructions+=3;goto B4583e9;
case 0x4583ed:c.instructions+=2;goto B4583ed;
case 0x4583ef:c.instructions+=1;goto B4583ef;
case 0x4583f1:goto L4583f1;
case 0x4583f3:c.instructions+=1;goto B4583f3;
case 0x4583f5:goto L4583f5;
case 0x4583fa:c.instructions+=1;goto B4583fa;
case 0x4583fc:goto L4583fc;
case 0x458401:goto L458401;
case 0x458402:c.instructions+=4;goto B458402;
case 0x458403:c.instructions+=3;goto B458403;
case 0x458408:c.instructions+=2;goto B458408;
case 0x45840b:c.instructions+=1;goto B45840b;
case 0x458410:goto L458410;
case 0x458413:c.instructions+=2;goto B458413;
case 0x458415:c.instructions+=1;goto B458415;
case 0x458417:goto L458417;
case 0x45841c:c.instructions+=2;goto B45841c;
case 0x458421:c.instructions+=1;goto B458421;
case 0x458426:goto L458426;
case 0x458427:c.instructions+=3;goto B458427;
case 0x458428:c.instructions+=2;goto B458428;
case 0x45842d:c.instructions+=1;goto B45842d;
case 0x458432:goto L458432;
case 0x458435:goto L458435;
case 0x458436:c.instructions+=3;goto B458436;
case 0x458438:c.instructions+=2;goto B458438;
case 0x458439:c.instructions+=1;goto B458439;
case 0x458440:goto L458440;
case 0x458444:c.instructions+=5;goto B458444;
case 0x458446:c.instructions+=4;goto B458446;
case 0x458447:c.instructions+=3;goto B458447;
case 0x458448:c.instructions+=2;goto B458448;
case 0x45844a:c.instructions+=1;goto B45844a;
case 0x45844c:goto L45844c;
case 0x45844e:c.instructions+=1;goto B45844e;
case 0x458450:goto L458450;
case 0x458453:c.instructions+=1;goto B458453;
case 0x458455:goto L458455;
case 0x45845a:goto L45845a;
case 0x45845d:c.instructions+=4;goto B45845d;
case 0x45845f:c.instructions+=3;goto B45845f;
case 0x458463:c.instructions+=2;goto B458463;
case 0x458465:c.instructions+=1;goto B458465;
case 0x458467:goto L458467;
case 0x458469:c.instructions+=1;goto B458469;
case 0x45846b:goto L45846b;
case 0x45846e:c.instructions+=1;goto B45846e;
case 0x458470:goto L458470;
case 0x458475:goto L458475;
case 0x458478:c.instructions+=3;goto B458478;
case 0x45847c:c.instructions+=2;goto B45847c;
case 0x45847e:c.instructions+=1;goto B45847e;
case 0x458480:goto L458480;
case 0x458482:c.instructions+=1;goto B458482;
case 0x458484:goto L458484;
case 0x458489:c.instructions+=1;goto B458489;
case 0x45848b:goto L45848b;
case 0x458490:goto L458490;
case 0x458493:c.instructions+=3;goto B458493;
case 0x458497:c.instructions+=2;goto B458497;
case 0x458499:c.instructions+=1;goto B458499;
case 0x45849b:goto L45849b;
case 0x45849d:c.instructions+=1;goto B45849d;
case 0x45849f:goto L45849f;
case 0x4584a4:c.instructions+=1;goto B4584a4;
case 0x4584a6:goto L4584a6;
case 0x4584ab:goto L4584ab;
case 0x4584ae:c.instructions+=3;goto B4584ae;
case 0x4584b2:c.instructions+=2;goto B4584b2;
case 0x4584b4:c.instructions+=1;goto B4584b4;
case 0x4584b6:goto L4584b6;
case 0x4584b8:c.instructions+=1;goto B4584b8;
case 0x4584ba:goto L4584ba;
case 0x4584bf:c.instructions+=1;goto B4584bf;
case 0x4584c1:goto L4584c1;
case 0x4584c6:goto L4584c6;
case 0x4584c9:c.instructions+=3;goto B4584c9;
case 0x4584cd:c.instructions+=2;goto B4584cd;
case 0x4584cf:c.instructions+=1;goto B4584cf;
case 0x4584d1:goto L4584d1;
case 0x4584d3:c.instructions+=1;goto B4584d3;
case 0x4584d5:goto L4584d5;
case 0x4584da:c.instructions+=1;goto B4584da;
case 0x4584dc:goto L4584dc;
case 0x4584e1:goto L4584e1;
case 0x4584e2:c.instructions+=4;goto B4584e2;
case 0x4584e3:c.instructions+=3;goto B4584e3;
case 0x4584e8:c.instructions+=2;goto B4584e8;
case 0x4584eb:c.instructions+=1;goto B4584eb;
case 0x4584f0:goto L4584f0;
case 0x4584f3:c.instructions+=2;goto B4584f3;
case 0x4584f5:c.instructions+=1;goto B4584f5;
case 0x4584f7:goto L4584f7;
case 0x4584fc:c.instructions+=2;goto B4584fc;
case 0x458501:c.instructions+=1;goto B458501;
case 0x458506:goto L458506;
case 0x458507:c.instructions+=3;goto B458507;
case 0x458508:c.instructions+=2;goto B458508;
case 0x45850d:c.instructions+=1;goto B45850d;
case 0x458512:goto L458512;
case 0x458515:goto L458515;
case 0x458516:c.instructions+=3;goto B458516;
case 0x458518:c.instructions+=2;goto B458518;
case 0x458519:c.instructions+=1;goto B458519;
case 0x458520:goto L458520;
case 0x458525:c.instructions+=2;goto B458525;
case 0x458527:c.instructions+=1;goto B458527;
case 0x458529:goto L458529;
case 0x45852d:c.instructions+=2;goto B45852d;
case 0x458530:c.instructions+=1;goto B458530;
case 0x458532:goto L458532;
case 0x458535:c.instructions+=2;goto B458535;
case 0x458537:c.instructions+=1;goto B458537;
case 0x458539:goto L458539;
case 0x45853b:c.instructions+=2;goto B45853b;
case 0x45853f:c.instructions+=1;goto B45853f;
case 0x458542:goto L458542;
case 0x458545:c.instructions+=1;goto B458545;
case 0x458547:goto L458547;
case 0x45854a:c.instructions+=2;goto B45854a;
case 0x45854c:c.instructions+=1;goto B45854c;
case 0x45854e:goto L45854e;
case 0x458550:c.instructions+=3;goto B458550;
case 0x458553:c.instructions+=2;goto B458553;
case 0x458557:c.instructions+=1;goto B458557;
case 0x45855a:goto L45855a;
case 0x458560:goto L458560;
case 0x458565:c.instructions+=2;goto B458565;
case 0x458567:c.instructions+=1;goto B458567;
case 0x458569:goto L458569;
case 0x45856d:c.instructions+=2;goto B45856d;
case 0x458570:c.instructions+=1;goto B458570;
case 0x458572:goto L458572;
case 0x458575:c.instructions+=2;goto B458575;
case 0x458577:c.instructions+=1;goto B458577;
case 0x458579:goto L458579;
case 0x45857b:c.instructions+=2;goto B45857b;
case 0x45857f:c.instructions+=1;goto B45857f;
case 0x458582:goto L458582;
case 0x458585:c.instructions+=2;goto B458585;
case 0x458587:c.instructions+=1;goto B458587;
case 0x458589:goto L458589;
case 0x45858b:c.instructions+=3;goto B45858b;
case 0x45858e:c.instructions+=2;goto B45858e;
case 0x458592:c.instructions+=1;goto B458592;
case 0x458595:goto L458595;
case 0x4585a0:goto L4585a0;
case 0x4585a2:c.instructions+=29;goto B4585a2;
case 0x4585a4:c.instructions+=28;goto B4585a4;
case 0x4585a9:c.instructions+=27;goto B4585a9;
case 0x4585aa:c.instructions+=26;goto B4585aa;
case 0x4585b0:c.instructions+=25;goto B4585b0;
case 0x4585b3:c.instructions+=24;goto B4585b3;
case 0x4585b9:c.instructions+=23;goto B4585b9;
case 0x4585bf:c.instructions+=22;goto B4585bf;
case 0x4585c5:c.instructions+=21;goto B4585c5;
case 0x4585cb:c.instructions+=20;goto B4585cb;
case 0x4585d1:c.instructions+=19;goto B4585d1;
case 0x4585d7:c.instructions+=18;goto B4585d7;
case 0x4585dd:c.instructions+=17;goto B4585dd;
case 0x4585e0:c.instructions+=16;goto B4585e0;
case 0x4585e6:c.instructions+=15;goto B4585e6;
case 0x4585ec:c.instructions+=14;goto B4585ec;
case 0x4585ef:c.instructions+=13;goto B4585ef;
case 0x4585f2:c.instructions+=12;goto B4585f2;
case 0x4585f5:c.instructions+=11;goto B4585f5;
case 0x4585f8:c.instructions+=10;goto B4585f8;
case 0x4585fe:c.instructions+=9;goto B4585fe;
case 0x458601:c.instructions+=8;goto B458601;
case 0x458604:c.instructions+=7;goto B458604;
case 0x458607:c.instructions+=6;goto B458607;
case 0x45860d:c.instructions+=5;goto B45860d;
case 0x458614:c.instructions+=4;goto B458614;
case 0x45861a:c.instructions+=3;goto B45861a;
case 0x45861d:c.instructions+=2;goto B45861d;
case 0x458623:c.instructions+=1;goto B458623;
case 0x458628:goto L458628;
case 0x45862a:c.instructions+=1;goto B45862a;
case 0x45862c:goto L45862c;
case 0x45862e:goto L45862e;
case 0x458631:c.instructions+=2;goto B458631;
case 0x458632:c.instructions+=1;goto B458632;
case 0x458634:goto L458634;
case 0x458637:c.instructions+=16;goto B458637;
case 0x45863a:c.instructions+=15;goto B45863a;
case 0x45863d:c.instructions+=14;goto B45863d;
case 0x458640:c.instructions+=13;goto B458640;
case 0x458643:c.instructions+=12;goto B458643;
case 0x458646:c.instructions+=11;goto B458646;
case 0x458649:c.instructions+=10;goto B458649;
case 0x45864c:c.instructions+=9;goto B45864c;
case 0x458652:c.instructions+=8;goto B458652;
case 0x458658:c.instructions+=7;goto B458658;
case 0x45865b:c.instructions+=6;goto B45865b;
case 0x458661:c.instructions+=5;goto B458661;
case 0x458667:c.instructions+=4;goto B458667;
case 0x45866a:c.instructions+=3;goto B45866a;
case 0x458670:c.instructions+=2;goto B458670;
case 0x458671:c.instructions+=1;goto B458671;
case 0x458680:goto L458680;
case 0x458682:c.instructions+=16;goto B458682;
case 0x458687:c.instructions+=15;goto B458687;
case 0x45868d:c.instructions+=14;goto B45868d;
case 0x45868e:c.instructions+=13;goto B45868e;
case 0x458695:c.instructions+=12;goto B458695;
case 0x458696:c.instructions+=11;goto B458696;
case 0x458697:c.instructions+=10;goto B458697;
case 0x458698:c.instructions+=9;goto B458698;
case 0x45869a:c.instructions+=8;goto B45869a;
case 0x45869b:c.instructions+=7;goto B45869b;
case 0x45869f:c.instructions+=6;goto B45869f;
case 0x4586a5:c.instructions+=5;goto B4586a5;
case 0x4586a8:c.instructions+=4;goto B4586a8;
case 0x4586aa:c.instructions+=3;goto B4586aa;
case 0x4586ac:c.instructions+=2;goto B4586ac;
case 0x4586b0:c.instructions+=1;goto B4586b0;
case 0x4586b2:goto L4586b2;
case 0x4586b4:c.instructions+=2;goto B4586b4;
case 0x4586b6:c.instructions+=1;goto B4586b6;
case 0x4586b8:goto L4586b8;
case 0x4586bb:goto L4586bb;
case 0x4586be:c.instructions+=2;goto B4586be;
case 0x4586c0:c.instructions+=1;goto B4586c0;
case 0x4586c2:goto L4586c2;
case 0x4586c4:c.instructions+=2;goto B4586c4;
case 0x4586c6:c.instructions+=1;goto B4586c6;
case 0x4586c8:goto L4586c8;
case 0x4586cb:goto L4586cb;
case 0x4586d1:c.instructions+=2;goto B4586d1;
case 0x4586d3:c.instructions+=1;goto B4586d3;
case 0x4586d5:goto L4586d5;
case 0x4586d7:c.instructions+=2;goto B4586d7;
case 0x4586d9:c.instructions+=1;goto B4586d9;
case 0x4586db:goto L4586db;
case 0x4586e1:goto L4586e1;
case 0x4586e7:c.instructions+=2;goto B4586e7;
case 0x4586e9:c.instructions+=1;goto B4586e9;
case 0x4586eb:goto L4586eb;
case 0x4586ec:c.instructions+=1;goto B4586ec;
case 0x4586f1:goto L4586f1;
case 0x4586f4:c.instructions+=1;goto B4586f4;
case 0x4586fa:goto L4586fa;
case 0x458700:c.instructions+=2;goto B458700;
case 0x458702:c.instructions+=1;goto B458702;
case 0x458704:goto L458704;
case 0x458705:c.instructions+=1;goto B458705;
case 0x45870a:goto L45870a;
case 0x45870d:c.instructions+=1;goto B45870d;
case 0x458713:goto L458713;
case 0x458719:c.instructions+=2;goto B458719;
case 0x45871b:c.instructions+=1;goto B45871b;
case 0x45871d:goto L45871d;
case 0x45871e:c.instructions+=1;goto B45871e;
case 0x458723:goto L458723;
case 0x458726:c.instructions+=1;goto B458726;
case 0x45872c:goto L45872c;
case 0x458732:c.instructions+=2;goto B458732;
case 0x458734:c.instructions+=1;goto B458734;
case 0x458736:goto L458736;
case 0x458737:c.instructions+=1;goto B458737;
case 0x45873c:goto L45873c;
case 0x45873f:c.instructions+=1;goto B45873f;
case 0x458745:goto L458745;
case 0x458748:c.instructions+=2;goto B458748;
case 0x45874a:c.instructions+=1;goto B45874a;
case 0x45874c:goto L45874c;
case 0x45874f:c.instructions+=3;goto B45874f;
case 0x458750:c.instructions+=2;goto B458750;
case 0x458752:c.instructions+=1;goto B458752;
case 0x458757:goto L458757;
case 0x45875a:c.instructions+=2;goto B45875a;
case 0x45875b:c.instructions+=1;goto B45875b;
case 0x458760:goto L458760;
case 0x458763:c.instructions+=2;goto B458763;
case 0x458765:c.instructions+=1;goto B458765;
case 0x45876a:goto L45876a;
case 0x45876d:c.instructions+=2;goto B45876d;
case 0x45876e:c.instructions+=1;goto B45876e;
case 0x458773:goto L458773;
case 0x458776:c.instructions+=2;goto B458776;
case 0x458779:c.instructions+=1;goto B458779;
case 0x45877c:goto L45877c;
case 0x458780:c.instructions+=7;goto B458780;
case 0x458781:c.instructions+=6;goto B458781;
case 0x458787:c.instructions+=5;goto B458787;
case 0x458788:c.instructions+=4;goto B458788;
case 0x458789:c.instructions+=3;goto B458789;
case 0x458790:c.instructions+=2;goto B458790;
case 0x458793:c.instructions+=1;goto B458793;
case 0x4587a0:goto L4587a0;
case 0x4587a1:c.instructions+=3;goto B4587a1;
case 0x4587a6:c.instructions+=2;goto B4587a6;
case 0x4587ab:c.instructions+=1;goto B4587ab;
case 0x4587b0:goto L4587b0;
case 0x4587b5:c.instructions+=3;goto B4587b5;
case 0x4587ba:c.instructions+=2;goto B4587ba;
case 0x4587bc:c.instructions+=1;goto B4587bc;
case 0x4587c1:goto L4587c1;
case 0x4587c6:c.instructions+=3;goto B4587c6;
case 0x4587cb:c.instructions+=2;goto B4587cb;
case 0x4587cd:c.instructions+=1;goto B4587cd;
case 0x4587d2:goto L4587d2;
case 0x4587d7:c.instructions+=3;goto B4587d7;
case 0x4587dc:c.instructions+=2;goto B4587dc;
case 0x4587de:c.instructions+=1;goto B4587de;
case 0x4587e3:goto L4587e3;
case 0x4587e8:c.instructions+=3;goto B4587e8;
case 0x4587ed:c.instructions+=2;goto B4587ed;
case 0x4587ef:c.instructions+=1;goto B4587ef;
case 0x4587f4:goto L4587f4;
case 0x4587f9:c.instructions+=3;goto B4587f9;
case 0x4587fe:c.instructions+=2;goto B4587fe;
case 0x458800:c.instructions+=1;goto B458800;
case 0x458805:goto L458805;
case 0x45880a:c.instructions+=3;goto B45880a;
case 0x45880f:c.instructions+=2;goto B45880f;
case 0x458811:c.instructions+=1;goto B458811;
case 0x458816:goto L458816;
case 0x45881b:c.instructions+=3;goto B45881b;
case 0x458820:c.instructions+=2;goto B458820;
case 0x458822:c.instructions+=1;goto B458822;
case 0x458827:goto L458827;
case 0x45882c:c.instructions+=3;goto B45882c;
case 0x458831:c.instructions+=2;goto B458831;
case 0x458833:c.instructions+=1;goto B458833;
case 0x458838:goto L458838;
case 0x45883d:c.instructions+=3;goto B45883d;
case 0x458842:c.instructions+=2;goto B458842;
case 0x458844:c.instructions+=1;goto B458844;
case 0x458849:goto L458849;
case 0x45884b:c.instructions+=2;goto B45884b;
case 0x45884c:c.instructions+=1;goto B45884c;
case 0x458850:goto L458850;
case 0x458855:c.instructions+=2;goto B458855;
case 0x458857:c.instructions+=1;goto B458857;
case 0x458859:goto L458859;
case 0x45885a:c.instructions+=3;goto B45885a;
case 0x45885b:c.instructions+=2;goto B45885b;
case 0x458861:c.instructions+=1;goto B458861;
case 0x458866:goto L458866;
case 0x458868:c.instructions+=2;goto B458868;
case 0x45886a:c.instructions+=1;goto B45886a;
case 0x45886c:goto L45886c;
case 0x45886e:c.instructions+=1;goto B45886e;
case 0x458871:goto L458871;
case 0x458874:c.instructions+=2;goto B458874;
case 0x458875:c.instructions+=1;goto B458875;
case 0x458877:goto L458877;
case 0x458878:c.instructions+=1;goto B458878;
case 0x458879:goto L458879;
case 0x458880:goto L458880;
case 0x458884:c.instructions+=1;goto B458884;
case 0x458890:goto L458890;
case 0x458896:c.instructions+=9;goto B458896;
case 0x458897:c.instructions+=8;goto B458897;
case 0x458898:c.instructions+=7;goto B458898;
case 0x458899:c.instructions+=6;goto B458899;
case 0x4588a0:c.instructions+=5;goto B4588a0;
case 0x4588a2:c.instructions+=4;goto B4588a2;
case 0x4588a4:c.instructions+=3;goto B4588a4;
case 0x4588a6:c.instructions+=2;goto B4588a6;
case 0x4588a7:c.instructions+=1;goto B4588a7;
case 0x4588ac:goto L4588ac;
case 0x4588ae:c.instructions+=2;goto B4588ae;
case 0x4588af:c.instructions+=1;goto B4588af;
case 0x4588b4:goto L4588b4;
case 0x4588b5:c.instructions+=2;goto B4588b5;
case 0x4588b7:c.instructions+=1;goto B4588b7;
case 0x4588bc:goto L4588bc;
case 0x4588bf:c.instructions+=2;goto B4588bf;
case 0x4588c2:c.instructions+=1;goto B4588c2;
case 0x4588c4:goto L4588c4;
case 0x4588c6:c.instructions+=2;goto B4588c6;
case 0x4588c7:c.instructions+=1;goto B4588c7;
case 0x4588cc:goto L4588cc;
case 0x4588cf:c.instructions+=5;goto B4588cf;
case 0x4588d0:c.instructions+=4;goto B4588d0;
case 0x4588d1:c.instructions+=3;goto B4588d1;
case 0x4588d2:c.instructions+=2;goto B4588d2;
case 0x4588d8:c.instructions+=1;goto B4588d8;
case 0x4588d9:goto L4588d9;
case 0x4588dd:c.instructions+=3;goto B4588dd;
case 0x4588de:c.instructions+=2;goto B4588de;
case 0x4588e6:c.instructions+=1;goto B4588e6;
case 0x4588eb:goto L4588eb;
case 0x4588ef:c.instructions+=3;goto B4588ef;
case 0x4588f2:c.instructions+=2;goto B4588f2;
case 0x4588f4:c.instructions+=1;goto B4588f4;
case 0x4588f6:goto L4588f6;
case 0x4588f7:c.instructions+=3;goto B4588f7;
case 0x4588fb:c.instructions+=2;goto B4588fb;
case 0x4588fc:c.instructions+=1;goto B4588fc;
case 0x458901:goto L458901;
case 0x458902:c.instructions+=5;goto B458902;
case 0x458906:c.instructions+=4;goto B458906;
case 0x458907:c.instructions+=3;goto B458907;
case 0x45890b:c.instructions+=2;goto B45890b;
case 0x45890c:c.instructions+=1;goto B45890c;
case 0x458911:goto L458911;
case 0x458913:c.instructions+=5;goto B458913;
case 0x458915:c.instructions+=4;goto B458915;
case 0x458919:c.instructions+=3;goto B458919;
case 0x45891b:c.instructions+=2;goto B45891b;
case 0x45891c:c.instructions+=1;goto B45891c;
case 0x458921:goto L458921;
case 0x458923:c.instructions+=2;goto B458923;
case 0x458924:c.instructions+=1;goto B458924;
case 0x458929:goto L458929;
case 0x45892a:c.instructions+=2;goto B45892a;
case 0x45892c:c.instructions+=1;goto B45892c;
case 0x458931:goto L458931;
case 0x458934:c.instructions+=2;goto B458934;
case 0x458937:c.instructions+=1;goto B458937;
case 0x458939:goto L458939;
case 0x45893b:c.instructions+=2;goto B45893b;
case 0x45893c:c.instructions+=1;goto B45893c;
case 0x458941:goto L458941;
case 0x458945:c.instructions+=3;goto B458945;
case 0x458946:c.instructions+=2;goto B458946;
case 0x458947:c.instructions+=1;goto B458947;
case 0x45894c:goto L45894c;
case 0x45894f:goto L45894f;
case 0x458950:c.instructions+=4;goto B458950;
case 0x458951:c.instructions+=3;goto B458951;
case 0x458952:c.instructions+=2;goto B458952;
case 0x458958:c.instructions+=1;goto B458958;
case 0x458960:goto L458960;
case 0x458962:c.instructions+=7;goto B458962;
case 0x458964:c.instructions+=6;goto B458964;
case 0x45896a:c.instructions+=5;goto B45896a;
case 0x458970:c.instructions+=4;goto B458970;
case 0x458973:c.instructions+=3;goto B458973;
case 0x458976:c.instructions+=2;goto B458976;
case 0x45897c:c.instructions+=1;goto B45897c;
case 0x458980:goto L458980;
case 0x458984:c.instructions+=2;goto B458984;
case 0x458989:c.instructions+=1;goto B458989;
case 0x458990:goto L458990;
case 0x458997:c.instructions+=1;goto B458997;
case 0x458999:goto L458999;
case 0x45899e:c.instructions+=4;goto B45899e;
case 0x4589a4:c.instructions+=3;goto B4589a4;
case 0x4589a8:c.instructions+=2;goto B4589a8;
case 0x4589aa:c.instructions+=1;goto B4589aa;
case 0x4589ac:goto L4589ac;
case 0x4589ad:c.instructions+=1;goto B4589ad;
case 0x4589b2:goto L4589b2;
case 0x4589b3:goto L4589b3;
case 0x4589c0:goto L4589c0;
case 0x4589c4:c.instructions+=4;goto B4589c4;
case 0x4589c8:c.instructions+=3;goto B4589c8;
case 0x4589ca:c.instructions+=2;goto B4589ca;
case 0x4589d0:c.instructions+=1;goto B4589d0;
case 0x4589d2:goto L4589d2;
case 0x4589d6:c.instructions+=1;goto B4589d6;
case 0x4589d8:goto L4589d8;
case 0x4589dd:c.instructions+=2;goto B4589dd;
case 0x4589de:c.instructions+=1;goto B4589de;
case 0x4589e3:goto L4589e3;
case 0x4589e9:c.instructions+=9;goto B4589e9;
case 0x4589ec:c.instructions+=8;goto B4589ec;
case 0x4589f1:c.instructions+=7;goto B4589f1;
case 0x4589f7:c.instructions+=6;goto B4589f7;
case 0x4589fa:c.instructions+=5;goto B4589fa;
case 0x4589fb:c.instructions+=4;goto B4589fb;
case 0x458a00:c.instructions+=3;goto B458a00;
case 0x458a07:c.instructions+=2;goto B458a07;
case 0x458a0a:c.instructions+=1;goto B458a0a;
case 0x458a0b:goto L458a0b;
case 0x458a0e:c.instructions+=4;goto B458a0e;
case 0x458a0f:c.instructions+=3;goto B458a0f;
case 0x458a10:c.instructions+=2;goto B458a10;
case 0x458a15:c.instructions+=1;goto B458a15;
case 0x458a1a:goto L458a1a;
case 0x458a20:c.instructions+=6;goto B458a20;
case 0x458a23:c.instructions+=5;goto B458a23;
case 0x458a29:c.instructions+=4;goto B458a29;
case 0x458a2e:c.instructions+=3;goto B458a2e;
case 0x458a35:c.instructions+=2;goto B458a35;
case 0x458a38:c.instructions+=1;goto B458a38;
case 0x458a39:goto L458a39;
case 0x458a3c:c.instructions+=1;goto B458a3c;
case 0x458a40:goto L458a40;
case 0x458a46:c.instructions+=3;goto B458a46;
case 0x458a4b:c.instructions+=2;goto B458a4b;
case 0x458a4e:c.instructions+=1;goto B458a4e;
case 0x458a50:goto L458a50;
case 0x458a55:goto L458a55;
case 0x458a57:c.instructions+=1;goto B458a57;
case 0x458a59:goto L458a59;
case 0x458a5a:c.instructions+=2;goto B458a5a;
case 0x458a5f:c.instructions+=1;goto B458a5f;
case 0x458a60:goto L458a60;
case 0x458a63:c.instructions+=2;goto B458a63;
case 0x458a65:c.instructions+=1;goto B458a65;
case 0x458a67:goto L458a67;
case 0x458a69:c.instructions+=2;goto B458a69;
case 0x458a6b:c.instructions+=1;goto B458a6b;
case 0x458a6d:goto L458a6d;
case 0x458a70:c.instructions+=2;goto B458a70;
case 0x458a71:c.instructions+=1;goto B458a71;
case 0x458a76:goto L458a76;
case 0x458a7b:c.instructions+=4;goto B458a7b;
case 0x458a7e:c.instructions+=3;goto B458a7e;
case 0x458a7f:c.instructions+=2;goto B458a7f;
case 0x458a85:c.instructions+=1;goto B458a85;
case 0x458a8a:goto L458a8a;
case 0x458a8d:c.instructions+=2;goto B458a8d;
case 0x458a93:c.instructions+=1;goto B458a93;
case 0x458a95:goto L458a95;
case 0x458a96:goto L458a96;
case 0x458a97:goto L458a97;
case 0x458a99:c.instructions+=2;goto B458a99;
case 0x458a9e:c.instructions+=1;goto B458a9e;
case 0x458aa0:goto L458aa0;
case 0x458aa2:c.instructions+=1;goto B458aa2;
case 0x458aa4:goto L458aa4;
case 0x458aa9:goto L458aa9;
case 0x458aae:goto L458aae;
case 0x458ab3:goto L458ab3;
case 0x458ab8:c.instructions+=2;goto B458ab8;
case 0x458abd:c.instructions+=1;goto B458abd;
case 0x458ac2:goto L458ac2;
case 0x458ac7:goto L458ac7;
case 0x458acc:c.instructions+=2;goto B458acc;
case 0x458ad1:c.instructions+=1;goto B458ad1;
case 0x458ad6:goto L458ad6;
case 0x458adb:c.instructions+=2;goto B458adb;
case 0x458ae0:c.instructions+=1;goto B458ae0;
case 0x458ae5:goto L458ae5;
case 0x458aea:c.instructions+=2;goto B458aea;
case 0x458aec:c.instructions+=1;goto B458aec;
case 0x458aee:goto L458aee;
case 0x458af4:c.instructions+=2;goto B458af4;
case 0x458af5:c.instructions+=1;goto B458af5;
case 0x458af7:goto L458af7;
case 0x458afa:c.instructions+=2;goto B458afa;
case 0x458b04:c.instructions+=1;goto B458b04;
case 0x458b0e:goto L458b0e;
case 0x458b15:c.instructions+=1;goto B458b15;
case 0x458b16:goto L458b16;
case 0x458b18:c.instructions+=1;goto B458b18;
case 0x458b1e:goto L458b1e;
case 0x458b30:goto L458b30;
case 0x458b36:c.instructions+=13;goto B458b36;
case 0x458b38:c.instructions+=12;goto B458b38;
case 0x458b3d:c.instructions+=11;goto B458b3d;
case 0x458b3e:c.instructions+=10;goto B458b3e;
case 0x458b45:c.instructions+=9;goto B458b45;
case 0x458b48:c.instructions+=8;goto B458b48;
case 0x458b49:c.instructions+=7;goto B458b49;
case 0x458b4a:c.instructions+=6;goto B458b4a;
case 0x458b4c:c.instructions+=5;goto B458b4c;
case 0x458b4d:c.instructions+=4;goto B458b4d;
case 0x458b50:c.instructions+=3;goto B458b50;
case 0x458b52:c.instructions+=2;goto B458b52;
case 0x458b54:c.instructions+=1;goto B458b54;
case 0x458b56:goto L458b56;
case 0x458b58:c.instructions+=2;goto B458b58;
case 0x458b5a:c.instructions+=1;goto B458b5a;
case 0x458b5c:goto L458b5c;
case 0x458b61:goto L458b61;
case 0x458b65:c.instructions+=2;goto B458b65;
case 0x458b66:c.instructions+=1;goto B458b66;
case 0x458b6b:goto L458b6b;
case 0x458b6e:c.instructions+=1;goto B458b6e;
case 0x458b73:goto L458b73;
case 0x458b77:c.instructions+=4;goto B458b77;
case 0x458b79:c.instructions+=3;goto B458b79;
case 0x458b7a:c.instructions+=2;goto B458b7a;
case 0x458b7b:c.instructions+=1;goto B458b7b;
case 0x458b7e:goto L458b7e;
case 0x458b83:goto L458b83;
case 0x458b86:goto L458b86;
case 0x458b8a:c.instructions+=3;goto B458b8a;
case 0x458b8b:c.instructions+=2;goto B458b8b;
case 0x458b95:c.instructions+=1;goto B458b95;
case 0x458b9a:goto L458b9a;
case 0x458b9d:c.instructions+=1;goto B458b9d;
case 0x458ba2:goto L458ba2;
case 0x458ba6:c.instructions+=8;goto B458ba6;
case 0x458baa:c.instructions+=7;goto B458baa;
case 0x458bab:c.instructions+=6;goto B458bab;
case 0x458baf:c.instructions+=5;goto B458baf;
case 0x458bb3:c.instructions+=4;goto B458bb3;
case 0x458bb7:c.instructions+=3;goto B458bb7;
case 0x458bb9:c.instructions+=2;goto B458bb9;
case 0x458bbb:c.instructions+=1;goto B458bbb;
case 0x458bbd:goto L458bbd;
case 0x458bbf:c.instructions+=1;goto B458bbf;
case 0x458bc4:goto L458bc4;
case 0x458bc8:c.instructions+=3;goto B458bc8;
case 0x458bca:c.instructions+=2;goto B458bca;
case 0x458bce:c.instructions+=1;goto B458bce;
case 0x458bd0:goto L458bd0;
case 0x458bd1:c.instructions+=9;goto B458bd1;
case 0x458bd4:c.instructions+=8;goto B458bd4;
case 0x458bd5:c.instructions+=7;goto B458bd5;
case 0x458bd6:c.instructions+=6;goto B458bd6;
case 0x458bdb:c.instructions+=5;goto B458bdb;
case 0x458bdd:c.instructions+=4;goto B458bdd;
case 0x458be0:c.instructions+=3;goto B458be0;
case 0x458be3:c.instructions+=2;goto B458be3;
case 0x458be6:c.instructions+=1;goto B458be6;
case 0x458beb:goto L458beb;
case 0x458bee:c.instructions+=2;goto B458bee;
case 0x458bf0:c.instructions+=1;goto B458bf0;
case 0x458bf2:goto L458bf2;
case 0x458bf7:c.instructions+=2;goto B458bf7;
case 0x458bfc:c.instructions+=1;goto B458bfc;
case 0x458c01:goto L458c01;
case 0x458c02:c.instructions+=3;goto B458c02;
case 0x458c03:c.instructions+=2;goto B458c03;
case 0x458c08:c.instructions+=1;goto B458c08;
case 0x458c0d:goto L458c0d;
case 0x458c10:goto L458c10;
case 0x458c11:c.instructions+=8;goto B458c11;
case 0x458c14:c.instructions+=7;goto B458c14;
case 0x458c15:c.instructions+=6;goto B458c15;
case 0x458c16:c.instructions+=5;goto B458c16;
case 0x458c17:c.instructions+=4;goto B458c17;
case 0x458c1b:c.instructions+=3;goto B458c1b;
case 0x458c22:c.instructions+=2;goto B458c22;
case 0x458c25:c.instructions+=1;goto B458c25;
case 0x458c26:goto L458c26;
case 0x458c2a:c.instructions+=7;goto B458c2a;
case 0x458c2d:c.instructions+=6;goto B458c2d;
case 0x458c2e:c.instructions+=5;goto B458c2e;
case 0x458c2f:c.instructions+=4;goto B458c2f;
case 0x458c30:c.instructions+=3;goto B458c30;
case 0x458c37:c.instructions+=2;goto B458c37;
case 0x458c3a:c.instructions+=1;goto B458c3a;
case 0x458c40:goto L458c40;
case 0x458c43:c.instructions+=2;goto B458c43;
case 0x458c45:c.instructions+=1;goto B458c45;
case 0x458c47:goto L458c47;
case 0x458c4e:goto L458c4e;
case 0x458c50:goto L458c50;
case 0x458c56:c.instructions+=11;goto B458c56;
case 0x458c58:c.instructions+=10;goto B458c58;
case 0x458c5d:c.instructions+=9;goto B458c5d;
case 0x458c5e:c.instructions+=8;goto B458c5e;
case 0x458c63:c.instructions+=7;goto B458c63;
case 0x458c65:c.instructions+=6;goto B458c65;
case 0x458c6c:c.instructions+=5;goto B458c6c;
case 0x458c6d:c.instructions+=4;goto B458c6d;
case 0x458c6e:c.instructions+=3;goto B458c6e;
case 0x458c6f:c.instructions+=2;goto B458c6f;
case 0x458c71:c.instructions+=1;goto B458c71;
case 0x458c77:goto L458c77;
case 0x458c7d:c.instructions+=2;goto B458c7d;
case 0x458c7f:c.instructions+=1;goto B458c7f;
case 0x458c85:goto L458c85;
case 0x458c88:c.instructions+=2;goto B458c88;
case 0x458c8a:c.instructions+=1;goto B458c8a;
case 0x458c8c:goto L458c8c;
case 0x458c8e:c.instructions+=7;goto B458c8e;
case 0x458c92:c.instructions+=6;goto B458c92;
case 0x458c99:c.instructions+=5;goto B458c99;
case 0x458c9a:c.instructions+=4;goto B458c9a;
case 0x458c9b:c.instructions+=3;goto B458c9b;
case 0x458c9c:c.instructions+=2;goto B458c9c;
case 0x458c9f:c.instructions+=1;goto B458c9f;
case 0x458ca2:goto L458ca2;
case 0x458ca6:c.instructions+=2;goto B458ca6;
case 0x458ca8:c.instructions+=1;goto B458ca8;
case 0x458caa:goto L458caa;
case 0x458cac:c.instructions+=3;goto B458cac;
case 0x458caf:c.instructions+=2;goto B458caf;
case 0x458cb1:c.instructions+=1;goto B458cb1;
case 0x458cb4:goto L458cb4;
case 0x458cb7:c.instructions+=5;goto B458cb7;
case 0x458cba:c.instructions+=4;goto B458cba;
case 0x458cbc:c.instructions+=3;goto B458cbc;
case 0x458cbe:c.instructions+=2;goto B458cbe;
case 0x458cc8:c.instructions+=1;goto B458cc8;
case 0x458ccd:goto L458ccd;
case 0x458cd0:c.instructions+=4;goto B458cd0;
case 0x458cd4:c.instructions+=3;goto B458cd4;
case 0x458cd6:c.instructions+=2;goto B458cd6;
case 0x458cde:c.instructions+=1;goto B458cde;
case 0x458ce0:goto L458ce0;
case 0x458ce3:c.instructions+=8;goto B458ce3;
case 0x458ce6:c.instructions+=7;goto B458ce6;
case 0x458ce7:c.instructions+=6;goto B458ce7;
case 0x458cea:c.instructions+=5;goto B458cea;
case 0x458ceb:c.instructions+=4;goto B458ceb;
case 0x458cec:c.instructions+=3;goto B458cec;
case 0x458ced:c.instructions+=2;goto B458ced;
case 0x458cef:c.instructions+=1;goto B458cef;
case 0x458cf4:goto L458cf4;
case 0x458cf6:goto L458cf6;
case 0x458cf8:goto L458cf8;
case 0x458cfa:c.instructions+=3;goto B458cfa;
case 0x458d02:c.instructions+=2;goto B458d02;
case 0x458d05:c.instructions+=1;goto B458d05;
case 0x458d07:goto L458d07;
case 0x458d09:c.instructions+=2;goto B458d09;
case 0x458d0b:c.instructions+=1;goto B458d0b;
case 0x458d10:goto L458d10;
case 0x458d17:goto L458d17;
case 0x458d1b:c.instructions+=7;goto B458d1b;
case 0x458d1c:c.instructions+=6;goto B458d1c;
case 0x458d1d:c.instructions+=5;goto B458d1d;
case 0x458d20:c.instructions+=4;goto B458d20;
case 0x458d27:c.instructions+=3;goto B458d27;
case 0x458d28:c.instructions+=2;goto B458d28;
case 0x458d2b:c.instructions+=1;goto B458d2b;
case 0x458d30:goto L458d30;
case 0x458d34:c.instructions+=2;goto B458d34;
case 0x458d37:c.instructions+=1;goto B458d37;
case 0x458d39:goto L458d39;
case 0x458d3c:c.instructions+=2;goto B458d3c;
case 0x458d43:c.instructions+=1;goto B458d43;
case 0x458d46:goto L458d46;
case 0x458d48:c.instructions+=1;goto B458d48;
case 0x458d50:goto L458d50;
case 0x458d56:c.instructions+=11;goto B458d56;
case 0x458d58:c.instructions+=10;goto B458d58;
case 0x458d5d:c.instructions+=9;goto B458d5d;
case 0x458d5e:c.instructions+=8;goto B458d5e;
case 0x458d63:c.instructions+=7;goto B458d63;
case 0x458d65:c.instructions+=6;goto B458d65;
case 0x458d6c:c.instructions+=5;goto B458d6c;
case 0x458d6d:c.instructions+=4;goto B458d6d;
case 0x458d6e:c.instructions+=3;goto B458d6e;
case 0x458d6f:c.instructions+=2;goto B458d6f;
case 0x458d71:c.instructions+=1;goto B458d71;
case 0x458d77:goto L458d77;
case 0x458d7a:c.instructions+=2;goto B458d7a;
case 0x458d7c:c.instructions+=1;goto B458d7c;
case 0x458d82:goto L458d82;
case 0x458d85:c.instructions+=2;goto B458d85;
case 0x458d87:c.instructions+=1;goto B458d87;
case 0x458d89:goto L458d89;
case 0x458d8b:c.instructions+=7;goto B458d8b;
case 0x458d8f:c.instructions+=6;goto B458d8f;
case 0x458d96:c.instructions+=5;goto B458d96;
case 0x458d97:c.instructions+=4;goto B458d97;
case 0x458d98:c.instructions+=3;goto B458d98;
case 0x458d99:c.instructions+=2;goto B458d99;
case 0x458d9c:c.instructions+=1;goto B458d9c;
case 0x458d9f:goto L458d9f;
case 0x458da3:c.instructions+=2;goto B458da3;
case 0x458da5:c.instructions+=1;goto B458da5;
case 0x458da7:goto L458da7;
case 0x458da9:c.instructions+=3;goto B458da9;
case 0x458dac:c.instructions+=2;goto B458dac;
case 0x458dae:c.instructions+=1;goto B458dae;
case 0x458db1:goto L458db1;
case 0x458db4:c.instructions+=5;goto B458db4;
case 0x458db7:c.instructions+=4;goto B458db7;
case 0x458db9:c.instructions+=3;goto B458db9;
case 0x458dbb:c.instructions+=2;goto B458dbb;
case 0x458dc5:c.instructions+=1;goto B458dc5;
case 0x458dca:goto L458dca;
case 0x458dcd:c.instructions+=4;goto B458dcd;
case 0x458dd1:c.instructions+=3;goto B458dd1;
case 0x458dd3:c.instructions+=2;goto B458dd3;
case 0x458ddb:c.instructions+=1;goto B458ddb;
case 0x458ddd:goto L458ddd;
case 0x458de0:c.instructions+=8;goto B458de0;
case 0x458de3:c.instructions+=7;goto B458de3;
case 0x458de4:c.instructions+=6;goto B458de4;
case 0x458de7:c.instructions+=5;goto B458de7;
case 0x458de8:c.instructions+=4;goto B458de8;
case 0x458de9:c.instructions+=3;goto B458de9;
case 0x458dea:c.instructions+=2;goto B458dea;
case 0x458dec:c.instructions+=1;goto B458dec;
case 0x458df1:goto L458df1;
case 0x458df3:goto L458df3;
case 0x458df5:goto L458df5;
case 0x458df7:c.instructions+=3;goto B458df7;
case 0x458dff:c.instructions+=2;goto B458dff;
case 0x458e02:c.instructions+=1;goto B458e02;
case 0x458e04:goto L458e04;
case 0x458e06:c.instructions+=2;goto B458e06;
case 0x458e08:c.instructions+=1;goto B458e08;
case 0x458e0d:goto L458e0d;
case 0x458e14:goto L458e14;
case 0x458e18:c.instructions+=7;goto B458e18;
case 0x458e19:c.instructions+=6;goto B458e19;
case 0x458e1a:c.instructions+=5;goto B458e1a;
case 0x458e1d:c.instructions+=4;goto B458e1d;
case 0x458e24:c.instructions+=3;goto B458e24;
case 0x458e25:c.instructions+=2;goto B458e25;
case 0x458e28:c.instructions+=1;goto B458e28;
case 0x458e30:goto L458e30;
case 0x458e34:c.instructions+=2;goto B458e34;
case 0x458e37:c.instructions+=1;goto B458e37;
case 0x458e39:goto L458e39;
case 0x458e3c:c.instructions+=2;goto B458e3c;
case 0x458e43:c.instructions+=1;goto B458e43;
case 0x458e46:goto L458e46;
case 0x458e48:c.instructions+=1;goto B458e48;
case 0x458e50:goto L458e50;
case 0x458e55:c.instructions+=1;goto B458e55;
case 0x458e60:goto L458e60;
case 0x458e65:c.instructions+=1;goto B458e65;
case 0x458e70:goto L458e70;
case 0x458e74:c.instructions+=2;goto B458e74;
case 0x458e77:c.instructions+=1;goto B458e77;
case 0x458e79:goto L458e79;
case 0x458e7a:c.instructions+=1;goto B458e7a;
case 0x458e7c:goto L458e7c;
case 0x458e7d:c.instructions+=1;goto B458e7d;
case 0x458e7f:goto L458e7f;
case 0x458e84:c.instructions+=3;goto B458e84;
case 0x458e87:c.instructions+=2;goto B458e87;
case 0x458e8c:c.instructions+=1;goto B458e8c;
case 0x458e8e:goto L458e8e;
case 0x458e92:goto L458e92;
case 0x458e94:c.instructions+=1;goto B458e94;
case 0x458e96:goto L458e96;
case 0x458e99:c.instructions+=3;goto B458e99;
case 0x458e9c:c.instructions+=2;goto B458e9c;
case 0x458e9f:c.instructions+=1;goto B458e9f;
case 0x458ea1:goto L458ea1;
case 0x458ea3:c.instructions+=1;goto B458ea3;
case 0x458ea4:goto L458ea4;
case 0x458ea9:c.instructions+=3;goto B458ea9;
case 0x458eac:c.instructions+=2;goto B458eac;
case 0x458eb1:c.instructions+=1;goto B458eb1;
case 0x458eb3:goto L458eb3;
case 0x458eb7:goto L458eb7;
case 0x458eb9:c.instructions+=1;goto B458eb9;
case 0x458ebb:goto L458ebb;
case 0x458ebe:c.instructions+=3;goto B458ebe;
case 0x458ec1:c.instructions+=2;goto B458ec1;
case 0x458ec4:c.instructions+=1;goto B458ec4;
case 0x458ec6:goto L458ec6;
case 0x458ec8:c.instructions+=1;goto B458ec8;
case 0x458ec9:goto L458ec9;
case 0x458ece:c.instructions+=3;goto B458ece;
case 0x458ed1:c.instructions+=2;goto B458ed1;
case 0x458ed6:c.instructions+=1;goto B458ed6;
case 0x458ed8:goto L458ed8;
case 0x458edc:c.instructions+=1;goto B458edc;
case 0x458ee0:goto L458ee0;
case 0x458ee2:c.instructions+=1;goto B458ee2;
case 0x458ee4:goto L458ee4;
case 0x458ee7:c.instructions+=3;goto B458ee7;
case 0x458eea:c.instructions+=2;goto B458eea;
case 0x458eed:c.instructions+=1;goto B458eed;
case 0x458eef:goto L458eef;
case 0x458ef1:c.instructions+=1;goto B458ef1;
case 0x458ef2:goto L458ef2;
case 0x458ef4:c.instructions+=1;goto B458ef4;
case 0x458f00:goto L458f00;
case 0x458f04:c.instructions+=3;goto B458f04;
case 0x458f05:c.instructions+=2;goto B458f05;
case 0x458f08:c.instructions+=1;goto B458f08;
case 0x458f0a:goto L458f0a;
case 0x458f11:c.instructions+=1;goto B458f11;
case 0x458f18:goto L458f18;
case 0x458f1d:c.instructions+=1;goto B458f1d;
case 0x458f1e:goto L458f1e;
case 0x458f23:c.instructions+=1;goto B458f23;
case 0x458f24:goto L458f24;
case 0x458f26:c.instructions+=1;goto B458f26;
case 0x458f60:goto L458f60;
case 0x458f65:c.instructions+=1;goto B458f65;
case 0x458f70:goto L458f70;
case 0x458f75:c.instructions+=1;goto B458f75;
case 0x458f80:goto L458f80;
case 0x458f82:c.instructions+=9;goto B458f82;
case 0x458f87:c.instructions+=8;goto B458f87;
case 0x458f88:c.instructions+=7;goto B458f88;
case 0x458f8b:c.instructions+=6;goto B458f8b;
case 0x458f8e:c.instructions+=5;goto B458f8e;
case 0x458f94:c.instructions+=4;goto B458f94;
case 0x458f96:c.instructions+=3;goto B458f96;
case 0x458f99:c.instructions+=2;goto B458f99;
case 0x458f9b:c.instructions+=1;goto B458f9b;
case 0x458fa0:goto L458fa0;
case 0x458fa6:c.instructions+=5;goto B458fa6;
case 0x458faa:c.instructions+=4;goto B458faa;
case 0x458fab:c.instructions+=3;goto B458fab;
case 0x458fae:c.instructions+=2;goto B458fae;
case 0x458fb1:c.instructions+=1;goto B458fb1;
case 0x458fb3:goto L458fb3;
case 0x458fb5:c.instructions+=2;goto B458fb5;
case 0x458fb8:c.instructions+=1;goto B458fb8;
case 0x458fc0:goto L458fc0;
case 0x458fc6:c.instructions+=5;goto B458fc6;
case 0x458fca:c.instructions+=4;goto B458fca;
case 0x458fcb:c.instructions+=3;goto B458fcb;
case 0x458fce:c.instructions+=2;goto B458fce;
case 0x458fd1:c.instructions+=1;goto B458fd1;
case 0x458fd3:goto L458fd3;
case 0x458fd8:c.instructions+=4;goto B458fd8;
case 0x458fdb:c.instructions+=3;goto B458fdb;
case 0x458fde:c.instructions+=2;goto B458fde;
case 0x458fdf:c.instructions+=1;goto B458fdf;
case 0x458fe0:goto L458fe0;
case 0x458fe5:c.instructions+=1;goto B458fe5;
case 0x458ff0:goto L458ff0;
case 0x458ff5:c.instructions+=1;goto B458ff5;
default:missing_instruction(c.pc);}
B458000:L458000:{c.instructions+=3;NFSU2_TR(0x458000);
__builtin_memmove((R+0),(R+24),4);
}
B458002:{NFSU2_TR(0x458002);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B458003:{NFSU2_TR(0x458003);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458010:L458010:{c.instructions+=6;NFSU2_TR(0x458010);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B458014:{NFSU2_TR(0x458014);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B458016:{NFSU2_TR(0x458016);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458017:{NFSU2_TR(0x458017);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458018:{NFSU2_TR(0x458018);
__builtin_memmove((R+24),(R+4),4);
}
B45801a:{NFSU2_TR(0x45801a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L458020;}}
}
B45801c:L45801c:{c.instructions+=2;NFSU2_TR(0x45801c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45801e:{NFSU2_TR(0x45801e);
{goto L45802c;}
}
B458020:L458020:{c.instructions+=2;NFSU2_TR(0x458020);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B458025:{NFSU2_TR(0x458025);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45802c;}}
}
B458027:L458027:{c.instructions+=1;NFSU2_TR(0x458027);
w4(R+0,u32(0x7fffull));
}
B45802c:L45802c:{c.instructions+=5;NFSU2_TR(0x45802c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45802f:{NFSU2_TR(0x45802f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B458031:{NFSU2_TR(0x458031);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B458035:{NFSU2_TR(0x458035);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B458037:{NFSU2_TR(0x458037);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45803d;}}
}
B458039:L458039:{c.instructions+=2;NFSU2_TR(0x458039);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45803b:{NFSU2_TR(0x45803b);
{goto L458049;}
}
B45803d:L45803d:{c.instructions+=2;NFSU2_TR(0x45803d);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2328ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2328ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B458042:{NFSU2_TR(0x458042);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L458049;}}
}
B458044:L458044:{c.instructions+=1;NFSU2_TR(0x458044);
w4(R+0,u32(0x2328ull));
}
B458049:L458049:{c.instructions+=4;NFSU2_TR(0x458049);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45804c:{NFSU2_TR(0x45804c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B458050:{NFSU2_TR(0x458050);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B458052:{NFSU2_TR(0x458052);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L458058;}}
}
B458054:L458054:{c.instructions+=2;NFSU2_TR(0x458054);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B458056:{NFSU2_TR(0x458056);
{goto L458064;}
}
B458058:L458058:{c.instructions+=2;NFSU2_TR(0x458058);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45805d:{NFSU2_TR(0x45805d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L458064;}}
}
B45805f:L45805f:{c.instructions+=1;NFSU2_TR(0x45805f);
w4(R+0,u32(0xffffull));
}
B458064:L458064:{c.instructions+=4;NFSU2_TR(0x458064);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458067:{NFSU2_TR(0x458067);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45806b:{NFSU2_TR(0x45806b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B45806d:{NFSU2_TR(0x45806d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L458073;}}
}
B45806f:L45806f:{c.instructions+=2;NFSU2_TR(0x45806f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B458071:{NFSU2_TR(0x458071);
{goto L45807d;}
}
B458073:L458073:{c.instructions+=2;NFSU2_TR(0x458073);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B458076:{NFSU2_TR(0x458076);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45807d;}}
}
B458078:L458078:{c.instructions+=1;NFSU2_TR(0x458078);
w4(R+0,u32(0x10ull));
}
B45807d:L45807d:{c.instructions+=4;NFSU2_TR(0x45807d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458080:{NFSU2_TR(0x458080);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B458084:{NFSU2_TR(0x458084);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B458086:{NFSU2_TR(0x458086);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45808c;}}
}
B458088:L458088:{c.instructions+=2;NFSU2_TR(0x458088);
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
B45808a:{NFSU2_TR(0x45808a);
{goto L458096;}
}
B45808c:L45808c:{c.instructions+=2;NFSU2_TR(0x45808c);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x7full))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7full)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7full))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45808f:{NFSU2_TR(0x45808f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L458096;}}
}
B458091:L458091:{c.instructions+=1;NFSU2_TR(0x458091);
w4(R+0,u32(0x7full));
}
B458096:L458096:{c.instructions+=5;NFSU2_TR(0x458096);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458097:{NFSU2_TR(0x458097);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458098:{NFSU2_TR(0x458098);
u8 U[4];
w4(U+0,u32(0x82c5d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45809d:{NFSU2_TR(0x45809d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4580a0:{NFSU2_TR(0x4580a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4580a5ull));
TAIL_STATIC(0x7358c0u,735);
}
B4580a5:L4580a5:{c.instructions+=3;NFSU2_TR(0x4580a5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4580a8:{NFSU2_TR(0x4580a8);
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
B4580aa:{NFSU2_TR(0x4580aa);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4580ca;}}
}
B4580ac:L4580ac:{c.instructions+=3;NFSU2_TR(0x4580ac);
u8 U[4];
w4(U+0,u32(0x7eddf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4580b1:{NFSU2_TR(0x4580b1);
w4(R+4,u32(0x82c5d8ull));
}
B4580b6:{NFSU2_TR(0x4580b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4580bbull));
TAIL_STATIC(0x735840u,735);
}
B4580bb:L4580bb:{c.instructions+=4;NFSU2_TR(0x4580bb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4580bc:{NFSU2_TR(0x4580bc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4580bd:{NFSU2_TR(0x4580bd);
u8 U[4];
w4(U+0,u32(0x82c5d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4580c2:{NFSU2_TR(0x4580c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4580c7ull));
TAIL_STATIC(0x7358c0u,735);
}
B4580c7:L4580c7:{c.instructions+=1;NFSU2_TR(0x4580c7);
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
B4580ca:L4580ca:{c.instructions+=4;NFSU2_TR(0x4580ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4580cb:{NFSU2_TR(0x4580cb);
__builtin_memmove((R+0),(R+24),4);
}
B4580cd:{NFSU2_TR(0x4580cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4580ce:{NFSU2_TR(0x4580ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4580e0:L4580e0:{c.instructions+=5;NFSU2_TR(0x4580e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4580e4:{NFSU2_TR(0x4580e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4580e8:{NFSU2_TR(0x4580e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4580e9:{NFSU2_TR(0x4580e9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4580ea:{NFSU2_TR(0x4580ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4580efull));
TAIL_STATIC(0x7399e0u,739);
}
B4580ef:L4580ef:{c.instructions+=2;NFSU2_TR(0x4580ef);
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
B4580f2:{NFSU2_TR(0x4580f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458100:L458100:{c.instructions+=4;NFSU2_TR(0x458100);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458101:{NFSU2_TR(0x458101);
u8 U[4];
w4(U+0,u32(0x7ede10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458106:{NFSU2_TR(0x458106);
w4(R+4,u32(0x82c598ull));
}
B45810b:{NFSU2_TR(0x45810b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458110ull));
TAIL_STATIC(0x735800u,735);
}
B458110:L458110:{c.instructions+=4;NFSU2_TR(0x458110);
u8 U[4];
w4(U+0,u32(0x7ede18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458115:{NFSU2_TR(0x458115);
w4(R+4,u32(0x82c538ull));
}
B45811a:{NFSU2_TR(0x45811a);
__builtin_memmove((R+24),(R+0),4);
}
B45811c:{NFSU2_TR(0x45811c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458121ull));
TAIL_STATIC(0x735840u,735);
}
B458121:L458121:{c.instructions+=4;NFSU2_TR(0x458121);
u8 U[4];
w4(U+0,u32(0x7ede20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458126:{NFSU2_TR(0x458126);
w4(R+4,u32(0x82c680ull));
}
B45812b:{NFSU2_TR(0x45812b);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45812d:{NFSU2_TR(0x45812d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458132ull));
TAIL_STATIC(0x735840u,735);
}
B458132:L458132:{c.instructions+=4;NFSU2_TR(0x458132);
u8 U[4];
w4(U+0,u32(0x7ede28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458137:{NFSU2_TR(0x458137);
w4(R+4,u32(0x82c568ull));
}
B45813c:{NFSU2_TR(0x45813c);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45813e:{NFSU2_TR(0x45813e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458143ull));
TAIL_STATIC(0x735840u,735);
}
B458143:L458143:{c.instructions+=4;NFSU2_TR(0x458143);
u8 U[4];
w4(U+0,u32(0x7ede30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458148:{NFSU2_TR(0x458148);
w4(R+4,u32(0x82c648ull));
}
B45814d:{NFSU2_TR(0x45814d);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45814f:{NFSU2_TR(0x45814f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458154ull));
TAIL_STATIC(0x735840u,735);
}
B458154:L458154:{c.instructions+=3;NFSU2_TR(0x458154);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B458156:{NFSU2_TR(0x458156);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B458157:{NFSU2_TR(0x458157);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458160:L458160:{c.instructions+=4;NFSU2_TR(0x458160);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458161:{NFSU2_TR(0x458161);
__builtin_memmove((R+0),(R+16),4);
}
B458165:{NFSU2_TR(0x458165);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458166:{NFSU2_TR(0x458166);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45816bull));
TAIL_STATIC(0x734df0u,734);
}
B45816b:L45816b:{c.instructions+=2;NFSU2_TR(0x45816b);
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
B45816e:{NFSU2_TR(0x45816e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458173ull));
TAIL_STATIC(0x734e40u,734);
}
B458173:L458173:{c.instructions+=6;NFSU2_TR(0x458173);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+4),(U+0),4);
}
B458177:{NFSU2_TR(0x458177);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45817b:{NFSU2_TR(0x45817b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45817d:{NFSU2_TR(0x45817d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45817f:{NFSU2_TR(0x45817f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458180:{NFSU2_TR(0x458180);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458183ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B458183:L458183:{c.instructions+=2;NFSU2_TR(0x458183);
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
B458186:{NFSU2_TR(0x458186);
TAIL_STATIC(0x734e60u,734);
}
B458190:L458190:{c.instructions+=4;NFSU2_TR(0x458190);
__builtin_memmove((R+0),(R+4),4);
}
B458192:{NFSU2_TR(0x458192);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B458194:{NFSU2_TR(0x458194);
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
B458196:{NFSU2_TR(0x458196);
if(r1(R+518)){{goto L4581a1;}}
}
B458198:L458198:{c.instructions+=3;NFSU2_TR(0x458198);
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
B45819b:{NFSU2_TR(0x45819b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45819c:{NFSU2_TR(0x45819c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4581a1ull));
TAIL_STATIC(0x735580u,735);
}
B4581a1:L4581a1:{c.instructions+=1;NFSU2_TR(0x4581a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4581b0:L4581b0:{c.instructions+=4;NFSU2_TR(0x4581b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4581b1:{NFSU2_TR(0x4581b1);
u8 U[4];
w4(U+0,u32(0x7edd50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4581b6:{NFSU2_TR(0x4581b6);
w4(R+4,u32(0x82c540ull));
}
B4581bb:{NFSU2_TR(0x4581bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4581c0ull));
TAIL_STATIC(0x735840u,735);
}
B4581c0:L4581c0:{c.instructions+=4;NFSU2_TR(0x4581c0);
u8 U[4];
w4(U+0,u32(0x7edd58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4581c5:{NFSU2_TR(0x4581c5);
w4(R+4,u32(0x82c6b4ull));
}
B4581ca:{NFSU2_TR(0x4581ca);
__builtin_memmove((R+24),(R+0),4);
}
B4581cc:{NFSU2_TR(0x4581cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4581d1ull));
TAIL_STATIC(0x735840u,735);
}
B4581d1:L4581d1:{c.instructions+=4;NFSU2_TR(0x4581d1);
u8 U[4];
w4(U+0,u32(0x7edd60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4581d6:{NFSU2_TR(0x4581d6);
w4(R+4,u32(0x82c510ull));
}
B4581db:{NFSU2_TR(0x4581db);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4581dd:{NFSU2_TR(0x4581dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4581e2ull));
TAIL_STATIC(0x735840u,735);
}
B4581e2:L4581e2:{c.instructions+=4;NFSU2_TR(0x4581e2);
u8 U[4];
w4(U+0,u32(0x7edd68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4581e7:{NFSU2_TR(0x4581e7);
w4(R+4,u32(0x82c548ull));
}
B4581ec:{NFSU2_TR(0x4581ec);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4581ee:{NFSU2_TR(0x4581ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4581f3ull));
TAIL_STATIC(0x735840u,735);
}
B4581f3:L4581f3:{c.instructions+=4;NFSU2_TR(0x4581f3);
u8 U[4];
w4(U+0,u32(0x7edd70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4581f8:{NFSU2_TR(0x4581f8);
w4(R+4,u32(0x82c530ull));
}
B4581fd:{NFSU2_TR(0x4581fd);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4581ff:{NFSU2_TR(0x4581ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458204ull));
TAIL_STATIC(0x735840u,735);
}
B458204:L458204:{c.instructions+=4;NFSU2_TR(0x458204);
u8 U[4];
w4(U+0,u32(0x7edd78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458209:{NFSU2_TR(0x458209);
w4(R+4,u32(0x82c4f8ull));
}
B45820e:{NFSU2_TR(0x45820e);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B458210:{NFSU2_TR(0x458210);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458215ull));
TAIL_STATIC(0x735840u,735);
}
B458215:L458215:{c.instructions+=4;NFSU2_TR(0x458215);
u8 U[4];
w4(U+0,u32(0x7edd80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45821a:{NFSU2_TR(0x45821a);
w4(R+4,u32(0x82c668ull));
}
B45821f:{NFSU2_TR(0x45821f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B458221:{NFSU2_TR(0x458221);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458226ull));
TAIL_STATIC(0x735840u,735);
}
B458226:L458226:{c.instructions+=3;NFSU2_TR(0x458226);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B458228:{NFSU2_TR(0x458228);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B458229:{NFSU2_TR(0x458229);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458230:L458230:{c.instructions+=3;NFSU2_TR(0x458230);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B458234:{NFSU2_TR(0x458234);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B458236:{NFSU2_TR(0x458236);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L458240;}}
}
B458238:L458238:{c.instructions+=3;NFSU2_TR(0x458238);
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
B45823a:{NFSU2_TR(0x45823a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45823d:{NFSU2_TR(0x45823d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458240:L458240:{c.instructions+=2;NFSU2_TR(0x458240);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x1fffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1fffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x1fffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B458245:{NFSU2_TR(0x458245);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45824c;}}
}
B458247:L458247:{c.instructions+=1;NFSU2_TR(0x458247);
w4(R+0,u32(0x1fffull));
}
B45824c:L45824c:{c.instructions+=2;NFSU2_TR(0x45824c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45824f:{NFSU2_TR(0x45824f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458260:L458260:{c.instructions+=6;NFSU2_TR(0x458260);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B458264:{NFSU2_TR(0x458264);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B458266:{NFSU2_TR(0x458266);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458267:{NFSU2_TR(0x458267);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458268:{NFSU2_TR(0x458268);
__builtin_memmove((R+24),(R+4),4);
}
B45826a:{NFSU2_TR(0x45826a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L458270;}}
}
B45826c:L45826c:{c.instructions+=2;NFSU2_TR(0x45826c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45826e:{NFSU2_TR(0x45826e);
{goto L45827a;}
}
B458270:L458270:{c.instructions+=2;NFSU2_TR(0x458270);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B458273:{NFSU2_TR(0x458273);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45827a;}}
}
B458275:L458275:{c.instructions+=1;NFSU2_TR(0x458275);
w4(R+0,u32(0x5ull));
}
B45827a:L45827a:{c.instructions+=5;NFSU2_TR(0x45827a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45827d:{NFSU2_TR(0x45827d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B45827f:{NFSU2_TR(0x45827f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B458283:{NFSU2_TR(0x458283);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B458285:{NFSU2_TR(0x458285);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45828b;}}
}
B458287:L458287:{c.instructions+=2;NFSU2_TR(0x458287);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B458289:{NFSU2_TR(0x458289);
{goto L458297;}
}
B45828b:L45828b:{c.instructions+=2;NFSU2_TR(0x45828b);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B458290:{NFSU2_TR(0x458290);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L458297;}}
}
B458292:L458292:{c.instructions+=1;NFSU2_TR(0x458292);
w4(R+0,u32(0x7fffull));
}
B458297:L458297:{c.instructions+=4;NFSU2_TR(0x458297);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45829a:{NFSU2_TR(0x45829a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45829e:{NFSU2_TR(0x45829e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4582a0:{NFSU2_TR(0x4582a0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4582a6;}}
}
B4582a2:L4582a2:{c.instructions+=2;NFSU2_TR(0x4582a2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4582a4:{NFSU2_TR(0x4582a4);
{goto L4582b2;}
}
B4582a6:L4582a6:{c.instructions+=2;NFSU2_TR(0x4582a6);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2000ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2000ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4582ab:{NFSU2_TR(0x4582ab);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4582b2;}}
}
B4582ad:L4582ad:{c.instructions+=1;NFSU2_TR(0x4582ad);
w4(R+0,u32(0x2000ull));
}
B4582b2:L4582b2:{c.instructions+=4;NFSU2_TR(0x4582b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4582b5:{NFSU2_TR(0x4582b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4582b9:{NFSU2_TR(0x4582b9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4582bb:{NFSU2_TR(0x4582bb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4582c1;}}
}
B4582bd:L4582bd:{c.instructions+=2;NFSU2_TR(0x4582bd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4582bf:{NFSU2_TR(0x4582bf);
{goto L4582cd;}
}
B4582c1:L4582c1:{c.instructions+=2;NFSU2_TR(0x4582c1);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4582c6:{NFSU2_TR(0x4582c6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4582cd;}}
}
B4582c8:L4582c8:{c.instructions+=1;NFSU2_TR(0x4582c8);
w4(R+0,u32(0xffffull));
}
B4582cd:L4582cd:{c.instructions+=4;NFSU2_TR(0x4582cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4582d0:{NFSU2_TR(0x4582d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4582d4:{NFSU2_TR(0x4582d4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4582d6:{NFSU2_TR(0x4582d6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4582dc;}}
}
B4582d8:L4582d8:{c.instructions+=2;NFSU2_TR(0x4582d8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4582da:{NFSU2_TR(0x4582da);
{goto L4582e8;}
}
B4582dc:L4582dc:{c.instructions+=2;NFSU2_TR(0x4582dc);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x400ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x400ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4582e1:{NFSU2_TR(0x4582e1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4582e8;}}
}
B4582e3:L4582e3:{c.instructions+=1;NFSU2_TR(0x4582e3);
w4(R+0,u32(0x400ull));
}
B4582e8:L4582e8:{c.instructions+=4;NFSU2_TR(0x4582e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4582eb:{NFSU2_TR(0x4582eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4582ef:{NFSU2_TR(0x4582ef);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4582f1:{NFSU2_TR(0x4582f1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4582f7;}}
}
B4582f3:L4582f3:{c.instructions+=2;NFSU2_TR(0x4582f3);
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
B4582f5:{NFSU2_TR(0x4582f5);
{goto L458303;}
}
B4582f7:L4582f7:{c.instructions+=2;NFSU2_TR(0x4582f7);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x2710ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2710ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x2710ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4582fc:{NFSU2_TR(0x4582fc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L458303;}}
}
B4582fe:L4582fe:{c.instructions+=1;NFSU2_TR(0x4582fe);
w4(R+0,u32(0x2710ull));
}
B458303:L458303:{c.instructions+=5;NFSU2_TR(0x458303);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458304:{NFSU2_TR(0x458304);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458305:{NFSU2_TR(0x458305);
u8 U[4];
w4(U+0,u32(0x82c6e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45830a:{NFSU2_TR(0x45830a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45830d:{NFSU2_TR(0x45830d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458312ull));
TAIL_STATIC(0x7358c0u,735);
}
B458312:L458312:{c.instructions+=3;NFSU2_TR(0x458312);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B458315:{NFSU2_TR(0x458315);
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
B458317:{NFSU2_TR(0x458317);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L458337;}}
}
B458319:L458319:{c.instructions+=3;NFSU2_TR(0x458319);
u8 U[4];
w4(U+0,u32(0x7ede08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45831e:{NFSU2_TR(0x45831e);
w4(R+4,u32(0x82c6e0ull));
}
B458323:{NFSU2_TR(0x458323);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458328ull));
TAIL_STATIC(0x735840u,735);
}
B458328:L458328:{c.instructions+=4;NFSU2_TR(0x458328);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458329:{NFSU2_TR(0x458329);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45832a:{NFSU2_TR(0x45832a);
u8 U[4];
w4(U+0,u32(0x82c6e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45832f:{NFSU2_TR(0x45832f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458334ull));
TAIL_STATIC(0x7358c0u,735);
}
B458334:L458334:{c.instructions+=1;NFSU2_TR(0x458334);
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
B458337:L458337:{c.instructions+=4;NFSU2_TR(0x458337);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B458338:{NFSU2_TR(0x458338);
__builtin_memmove((R+0),(R+24),4);
}
B45833a:{NFSU2_TR(0x45833a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45833b:{NFSU2_TR(0x45833b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458340:L458340:{c.instructions+=3;NFSU2_TR(0x458340);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8704ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B458346:{NFSU2_TR(0x458346);
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
B458348:{NFSU2_TR(0x458348);
if(r1(R+518)){{goto L458351;}}
}
B45834a:L45834a:{c.instructions+=2;NFSU2_TR(0x45834a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x870cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B458350:{NFSU2_TR(0x458350);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458351:L458351:{c.instructions+=2;NFSU2_TR(0x458351);
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
B458353:{NFSU2_TR(0x458353);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458360:L458360:{c.instructions+=6;NFSU2_TR(0x458360);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B458364:{NFSU2_TR(0x458364);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B458366:{NFSU2_TR(0x458366);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458367:{NFSU2_TR(0x458367);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458368:{NFSU2_TR(0x458368);
__builtin_memmove((R+24),(R+4),4);
}
B45836a:{NFSU2_TR(0x45836a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L458370;}}
}
B45836c:L45836c:{c.instructions+=2;NFSU2_TR(0x45836c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45836e:{NFSU2_TR(0x45836e);
{goto L45837a;}
}
B458370:L458370:{c.instructions+=2;NFSU2_TR(0x458370);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B458373:{NFSU2_TR(0x458373);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45837a;}}
}
B458375:L458375:{c.instructions+=1;NFSU2_TR(0x458375);
w4(R+0,u32(0x10ull));
}
B45837a:L45837a:{c.instructions+=5;NFSU2_TR(0x45837a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45837d:{NFSU2_TR(0x45837d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B45837f:{NFSU2_TR(0x45837f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B458383:{NFSU2_TR(0x458383);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B458385:{NFSU2_TR(0x458385);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45838b;}}
}
B458387:L458387:{c.instructions+=2;NFSU2_TR(0x458387);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B458389:{NFSU2_TR(0x458389);
{goto L458395;}
}
B45838b:L45838b:{c.instructions+=2;NFSU2_TR(0x45838b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7full)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7full))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45838e:{NFSU2_TR(0x45838e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L458395;}}
}
B458390:L458390:{c.instructions+=1;NFSU2_TR(0x458390);
w4(R+0,u32(0x7full));
}
B458395:L458395:{c.instructions+=4;NFSU2_TR(0x458395);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458398:{NFSU2_TR(0x458398);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45839c:{NFSU2_TR(0x45839c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B45839e:{NFSU2_TR(0x45839e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4583a4;}}
}
B4583a0:L4583a0:{c.instructions+=2;NFSU2_TR(0x4583a0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4583a2:{NFSU2_TR(0x4583a2);
{goto L4583b0;}
}
B4583a4:L4583a4:{c.instructions+=2;NFSU2_TR(0x4583a4);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4583a9:{NFSU2_TR(0x4583a9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4583b0;}}
}
B4583ab:L4583ab:{c.instructions+=1;NFSU2_TR(0x4583ab);
w4(R+0,u32(0x7fffull));
}
B4583b0:L4583b0:{c.instructions+=4;NFSU2_TR(0x4583b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4583b3:{NFSU2_TR(0x4583b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4583b7:{NFSU2_TR(0x4583b7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4583b9:{NFSU2_TR(0x4583b9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4583bf;}}
}
B4583bb:L4583bb:{c.instructions+=2;NFSU2_TR(0x4583bb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4583bd:{NFSU2_TR(0x4583bd);
{goto L4583cb;}
}
B4583bf:L4583bf:{c.instructions+=2;NFSU2_TR(0x4583bf);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2000ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2000ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4583c4:{NFSU2_TR(0x4583c4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4583cb;}}
}
B4583c6:L4583c6:{c.instructions+=1;NFSU2_TR(0x4583c6);
w4(R+0,u32(0x2000ull));
}
B4583cb:L4583cb:{c.instructions+=4;NFSU2_TR(0x4583cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4583ce:{NFSU2_TR(0x4583ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4583d2:{NFSU2_TR(0x4583d2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4583d4:{NFSU2_TR(0x4583d4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4583da;}}
}
B4583d6:L4583d6:{c.instructions+=2;NFSU2_TR(0x4583d6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4583d8:{NFSU2_TR(0x4583d8);
{goto L4583e6;}
}
B4583da:L4583da:{c.instructions+=2;NFSU2_TR(0x4583da);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x10000ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10000ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4583df:{NFSU2_TR(0x4583df);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4583e6;}}
}
B4583e1:L4583e1:{c.instructions+=1;NFSU2_TR(0x4583e1);
w4(R+0,u32(0x10000ull));
}
B4583e6:L4583e6:{c.instructions+=4;NFSU2_TR(0x4583e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4583e9:{NFSU2_TR(0x4583e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4583ed:{NFSU2_TR(0x4583ed);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4583ef:{NFSU2_TR(0x4583ef);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4583f5;}}
}
B4583f1:L4583f1:{c.instructions+=2;NFSU2_TR(0x4583f1);
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
B4583f3:{NFSU2_TR(0x4583f3);
{goto L458401;}
}
B4583f5:L4583f5:{c.instructions+=2;NFSU2_TR(0x4583f5);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xfa0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xfa0ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xfa0ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4583fa:{NFSU2_TR(0x4583fa);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L458401;}}
}
B4583fc:L4583fc:{c.instructions+=1;NFSU2_TR(0x4583fc);
w4(R+0,u32(0xfa0ull));
}
B458401:L458401:{c.instructions+=5;NFSU2_TR(0x458401);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458402:{NFSU2_TR(0x458402);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458403:{NFSU2_TR(0x458403);
u8 U[4];
w4(U+0,u32(0x82c5e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458408:{NFSU2_TR(0x458408);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45840b:{NFSU2_TR(0x45840b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458410ull));
TAIL_STATIC(0x7358c0u,735);
}
B458410:L458410:{c.instructions+=3;NFSU2_TR(0x458410);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B458413:{NFSU2_TR(0x458413);
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
B458415:{NFSU2_TR(0x458415);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L458435;}}
}
B458417:L458417:{c.instructions+=3;NFSU2_TR(0x458417);
u8 U[4];
w4(U+0,u32(0x7eddf8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45841c:{NFSU2_TR(0x45841c);
w4(R+4,u32(0x82c5e0ull));
}
B458421:{NFSU2_TR(0x458421);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458426ull));
TAIL_STATIC(0x735840u,735);
}
B458426:L458426:{c.instructions+=4;NFSU2_TR(0x458426);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458427:{NFSU2_TR(0x458427);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458428:{NFSU2_TR(0x458428);
u8 U[4];
w4(U+0,u32(0x82c5e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45842d:{NFSU2_TR(0x45842d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458432ull));
TAIL_STATIC(0x7358c0u,735);
}
B458432:L458432:{c.instructions+=1;NFSU2_TR(0x458432);
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
B458435:L458435:{c.instructions+=4;NFSU2_TR(0x458435);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B458436:{NFSU2_TR(0x458436);
__builtin_memmove((R+0),(R+24),4);
}
B458438:{NFSU2_TR(0x458438);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B458439:{NFSU2_TR(0x458439);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458440:L458440:{c.instructions+=6;NFSU2_TR(0x458440);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B458444:{NFSU2_TR(0x458444);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B458446:{NFSU2_TR(0x458446);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458447:{NFSU2_TR(0x458447);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458448:{NFSU2_TR(0x458448);
__builtin_memmove((R+24),(R+4),4);
}
B45844a:{NFSU2_TR(0x45844a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L458450;}}
}
B45844c:L45844c:{c.instructions+=2;NFSU2_TR(0x45844c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45844e:{NFSU2_TR(0x45844e);
{goto L45845a;}
}
B458450:L458450:{c.instructions+=2;NFSU2_TR(0x458450);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B458453:{NFSU2_TR(0x458453);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45845a;}}
}
B458455:L458455:{c.instructions+=1;NFSU2_TR(0x458455);
w4(R+0,u32(0x10ull));
}
B45845a:L45845a:{c.instructions+=5;NFSU2_TR(0x45845a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45845d:{NFSU2_TR(0x45845d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B45845f:{NFSU2_TR(0x45845f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B458463:{NFSU2_TR(0x458463);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B458465:{NFSU2_TR(0x458465);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45846b;}}
}
B458467:L458467:{c.instructions+=2;NFSU2_TR(0x458467);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B458469:{NFSU2_TR(0x458469);
{goto L458475;}
}
B45846b:L45846b:{c.instructions+=2;NFSU2_TR(0x45846b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7full)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7full))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45846e:{NFSU2_TR(0x45846e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L458475;}}
}
B458470:L458470:{c.instructions+=1;NFSU2_TR(0x458470);
w4(R+0,u32(0x7full));
}
B458475:L458475:{c.instructions+=4;NFSU2_TR(0x458475);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458478:{NFSU2_TR(0x458478);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45847c:{NFSU2_TR(0x45847c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B45847e:{NFSU2_TR(0x45847e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L458484;}}
}
B458480:L458480:{c.instructions+=2;NFSU2_TR(0x458480);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B458482:{NFSU2_TR(0x458482);
{goto L458490;}
}
B458484:L458484:{c.instructions+=2;NFSU2_TR(0x458484);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B458489:{NFSU2_TR(0x458489);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L458490;}}
}
B45848b:L45848b:{c.instructions+=1;NFSU2_TR(0x45848b);
w4(R+0,u32(0x7fffull));
}
B458490:L458490:{c.instructions+=4;NFSU2_TR(0x458490);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458493:{NFSU2_TR(0x458493);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B458497:{NFSU2_TR(0x458497);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B458499:{NFSU2_TR(0x458499);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45849f;}}
}
B45849b:L45849b:{c.instructions+=2;NFSU2_TR(0x45849b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45849d:{NFSU2_TR(0x45849d);
{goto L4584ab;}
}
B45849f:L45849f:{c.instructions+=2;NFSU2_TR(0x45849f);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2000ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2000ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4584a4:{NFSU2_TR(0x4584a4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4584ab;}}
}
B4584a6:L4584a6:{c.instructions+=1;NFSU2_TR(0x4584a6);
w4(R+0,u32(0x2000ull));
}
B4584ab:L4584ab:{c.instructions+=4;NFSU2_TR(0x4584ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4584ae:{NFSU2_TR(0x4584ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4584b2:{NFSU2_TR(0x4584b2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4584b4:{NFSU2_TR(0x4584b4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4584ba;}}
}
B4584b6:L4584b6:{c.instructions+=2;NFSU2_TR(0x4584b6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4584b8:{NFSU2_TR(0x4584b8);
{goto L4584c6;}
}
B4584ba:L4584ba:{c.instructions+=2;NFSU2_TR(0x4584ba);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x10000ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10000ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4584bf:{NFSU2_TR(0x4584bf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4584c6;}}
}
B4584c1:L4584c1:{c.instructions+=1;NFSU2_TR(0x4584c1);
w4(R+0,u32(0x10000ull));
}
B4584c6:L4584c6:{c.instructions+=4;NFSU2_TR(0x4584c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4584c9:{NFSU2_TR(0x4584c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4584cd:{NFSU2_TR(0x4584cd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4584cf:{NFSU2_TR(0x4584cf);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4584d5;}}
}
B4584d1:L4584d1:{c.instructions+=2;NFSU2_TR(0x4584d1);
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
B4584d3:{NFSU2_TR(0x4584d3);
{goto L4584e1;}
}
B4584d5:L4584d5:{c.instructions+=2;NFSU2_TR(0x4584d5);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xfa0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xfa0ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xfa0ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4584da:{NFSU2_TR(0x4584da);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4584e1;}}
}
B4584dc:L4584dc:{c.instructions+=1;NFSU2_TR(0x4584dc);
w4(R+0,u32(0xfa0ull));
}
B4584e1:L4584e1:{c.instructions+=5;NFSU2_TR(0x4584e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4584e2:{NFSU2_TR(0x4584e2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4584e3:{NFSU2_TR(0x4584e3);
u8 U[4];
w4(U+0,u32(0x82c5d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4584e8:{NFSU2_TR(0x4584e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4584eb:{NFSU2_TR(0x4584eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4584f0ull));
TAIL_STATIC(0x7358c0u,735);
}
B4584f0:L4584f0:{c.instructions+=3;NFSU2_TR(0x4584f0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4584f3:{NFSU2_TR(0x4584f3);
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
B4584f5:{NFSU2_TR(0x4584f5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L458515;}}
}
B4584f7:L4584f7:{c.instructions+=3;NFSU2_TR(0x4584f7);
u8 U[4];
w4(U+0,u32(0x7ede00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4584fc:{NFSU2_TR(0x4584fc);
w4(R+4,u32(0x82c5d0ull));
}
B458501:{NFSU2_TR(0x458501);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458506ull));
TAIL_STATIC(0x735840u,735);
}
B458506:L458506:{c.instructions+=4;NFSU2_TR(0x458506);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458507:{NFSU2_TR(0x458507);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458508:{NFSU2_TR(0x458508);
u8 U[4];
w4(U+0,u32(0x82c5d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45850d:{NFSU2_TR(0x45850d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458512ull));
TAIL_STATIC(0x7358c0u,735);
}
B458512:L458512:{c.instructions+=1;NFSU2_TR(0x458512);
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
B458515:L458515:{c.instructions+=4;NFSU2_TR(0x458515);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B458516:{NFSU2_TR(0x458516);
__builtin_memmove((R+0),(R+24),4);
}
B458518:{NFSU2_TR(0x458518);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B458519:{NFSU2_TR(0x458519);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458520:L458520:{c.instructions+=3;NFSU2_TR(0x458520);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B458525:{NFSU2_TR(0x458525);
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
B458527:{NFSU2_TR(0x458527);
if(r1(R+518)){{goto L45855a;}}
}
B458529:L458529:{c.instructions+=3;NFSU2_TR(0x458529);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45852d:{NFSU2_TR(0x45852d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x17ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B458530:{NFSU2_TR(0x458530);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L458542;}}
}
B458532:L458532:{c.instructions+=3;NFSU2_TR(0x458532);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B458535:{NFSU2_TR(0x458535);
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
B458537:{NFSU2_TR(0x458537);
if(r1(R+518)){{goto L45855a;}}
}
B458539:L458539:{c.instructions+=3;NFSU2_TR(0x458539);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45853b:{NFSU2_TR(0x45853b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45853f:{NFSU2_TR(0x45853f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B458542:L458542:{c.instructions+=2;NFSU2_TR(0x458542);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x5eull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5eull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5eull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B458545:{NFSU2_TR(0x458545);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45855a;}}
}
B458547:L458547:{c.instructions+=3;NFSU2_TR(0x458547);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45854a:{NFSU2_TR(0x45854a);
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
B45854c:{NFSU2_TR(0x45854c);
if(r1(R+518)){{goto L45855a;}}
}
B45854e:L45854e:{c.instructions+=4;NFSU2_TR(0x45854e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B458550:{NFSU2_TR(0x458550);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xffffffe9ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xffffffe9ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffffe9ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B458553:{NFSU2_TR(0x458553);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458557:{NFSU2_TR(0x458557);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B45855a:L45855a:{c.instructions+=1;NFSU2_TR(0x45855a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458560:L458560:{c.instructions+=3;NFSU2_TR(0x458560);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B458565:{NFSU2_TR(0x458565);
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
B458567:{NFSU2_TR(0x458567);
if(r1(R+518)){{goto L458595;}}
}
B458569:L458569:{c.instructions+=3;NFSU2_TR(0x458569);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45856d:{NFSU2_TR(0x45856d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x17ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B458570:{NFSU2_TR(0x458570);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L458582;}}
}
B458572:L458572:{c.instructions+=3;NFSU2_TR(0x458572);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B458575:{NFSU2_TR(0x458575);
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
B458577:{NFSU2_TR(0x458577);
if(r1(R+518)){{goto L458595;}}
}
B458579:L458579:{c.instructions+=3;NFSU2_TR(0x458579);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45857b:{NFSU2_TR(0x45857b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45857f:{NFSU2_TR(0x45857f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B458582:L458582:{c.instructions+=3;NFSU2_TR(0x458582);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B458585:{NFSU2_TR(0x458585);
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
B458587:{NFSU2_TR(0x458587);
if(r1(R+518)){{goto L458595;}}
}
B458589:L458589:{c.instructions+=4;NFSU2_TR(0x458589);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45858b:{NFSU2_TR(0x45858b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xffffffe9ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xffffffe9ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffffe9ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45858e:{NFSU2_TR(0x45858e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458592:{NFSU2_TR(0x458592);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B458595:L458595:{c.instructions+=1;NFSU2_TR(0x458595);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4585a0:L4585a0:{c.instructions+=30;NFSU2_TR(0x4585a0);
__builtin_memmove((R+0),(R+4),4);
}
B4585a2:{NFSU2_TR(0x4585a2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4585a4:{NFSU2_TR(0x4585a4);
w4(R+8,u32(0x1ull));
}
B4585a9:{NFSU2_TR(0x4585a9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4585aa:{NFSU2_TR(0x4585aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4585b0:{NFSU2_TR(0x4585b0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4585b3:{NFSU2_TR(0x4585b3);
u8 U[4];
w4(U+0,u32(0x789cf0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4585b9:{NFSU2_TR(0x4585b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4585bf:{NFSU2_TR(0x4585bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4585c5:{NFSU2_TR(0x4585c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4585cb:{NFSU2_TR(0x4585cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4585d1:{NFSU2_TR(0x4585d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4585d7:{NFSU2_TR(0x4585d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4585dd:{NFSU2_TR(0x4585dd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4585e0:{NFSU2_TR(0x4585e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4585e6:{NFSU2_TR(0x4585e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4585ec:{NFSU2_TR(0x4585ec);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x13ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4585ef:{NFSU2_TR(0x4585ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4585f2:{NFSU2_TR(0x4585f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x15ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4585f5:{NFSU2_TR(0x4585f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4585f8:{NFSU2_TR(0x4585f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4585fe:{NFSU2_TR(0x4585fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458601:{NFSU2_TR(0x458601);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458604:{NFSU2_TR(0x458604);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458607:{NFSU2_TR(0x458607);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45860d:{NFSU2_TR(0x45860d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
w4(U+4,u32(0x789ce8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B458614:{NFSU2_TR(0x458614);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45861a:{NFSU2_TR(0x45861a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45861d:{NFSU2_TR(0x45861d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B458623:{NFSU2_TR(0x458623);
w4(R+24,u32(0x9ull));
}
B458628:L458628:{c.instructions+=2;NFSU2_TR(0x458628);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B45862a:{NFSU2_TR(0x45862a);
if(r1(R+518)){{goto L45862e;}}
}
B45862c:L45862c:{c.instructions+=1;NFSU2_TR(0x45862c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B45862e:L45862e:{c.instructions+=3;NFSU2_TR(0x45862e);
w1(R+512,carry<u32>(r4(R+8),u32(0x4ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B458631:{NFSU2_TR(0x458631);
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
B458632:{NFSU2_TR(0x458632);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x458628u);}goto L458628;}}
}
B458634:L458634:{c.instructions+=17;NFSU2_TR(0x458634);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458637:{NFSU2_TR(0x458637);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x12ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45863a:{NFSU2_TR(0x45863a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45863d:{NFSU2_TR(0x45863d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B458640:{NFSU2_TR(0x458640);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458643:{NFSU2_TR(0x458643);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458646:{NFSU2_TR(0x458646);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458649:{NFSU2_TR(0x458649);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45864c:{NFSU2_TR(0x45864c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458652:{NFSU2_TR(0x458652);
__builtin_memmove(gp(0x82ba30),(R+4),4);
}
B458658:{NFSU2_TR(0x458658);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45865b:{NFSU2_TR(0x45865b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458661:{NFSU2_TR(0x458661);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458667:{NFSU2_TR(0x458667);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45866a:{NFSU2_TR(0x45866a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458670:{NFSU2_TR(0x458670);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B458671:{NFSU2_TR(0x458671);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458680:L458680:{c.instructions+=17;NFSU2_TR(0x458680);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458682:{NFSU2_TR(0x458682);
u8 U[4];
w4(U+0,u32(0x772268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458687:{NFSU2_TR(0x458687);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45868d:{NFSU2_TR(0x45868d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45868e:{NFSU2_TR(0x45868e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458695:{NFSU2_TR(0x458695);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458696:{NFSU2_TR(0x458696);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458697:{NFSU2_TR(0x458697);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458698:{NFSU2_TR(0x458698);
__builtin_memmove((R+24),(R+4),4);
}
B45869a:{NFSU2_TR(0x45869a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45869b:{NFSU2_TR(0x45869b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45869f:{NFSU2_TR(0x45869f);
u8 U[4];
w4(U+0,u32(0x789cf0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4586a5:{NFSU2_TR(0x4586a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4586a8:{NFSU2_TR(0x4586a8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4586aa:{NFSU2_TR(0x4586aa);
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
B4586ac:{NFSU2_TR(0x4586ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4586b0:{NFSU2_TR(0x4586b0);
if(r1(R+518)){{goto L4586bb;}}
}
B4586b2:L4586b2:{c.instructions+=3;NFSU2_TR(0x4586b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4586b4:{NFSU2_TR(0x4586b4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4586b6:{NFSU2_TR(0x4586b6);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4586b8ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4586b8:L4586b8:{c.instructions+=1;NFSU2_TR(0x4586b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4586bb:L4586bb:{c.instructions+=3;NFSU2_TR(0x4586bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4586be:{NFSU2_TR(0x4586be);
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
B4586c0:{NFSU2_TR(0x4586c0);
if(r1(R+518)){{goto L4586cb;}}
}
B4586c2:L4586c2:{c.instructions+=3;NFSU2_TR(0x4586c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4586c4:{NFSU2_TR(0x4586c4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4586c6:{NFSU2_TR(0x4586c6);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4586c8ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4586c8:L4586c8:{c.instructions+=1;NFSU2_TR(0x4586c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4586cb:L4586cb:{c.instructions+=3;NFSU2_TR(0x4586cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4586d1:{NFSU2_TR(0x4586d1);
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
B4586d3:{NFSU2_TR(0x4586d3);
if(r1(R+518)){{goto L4586e1;}}
}
B4586d5:L4586d5:{c.instructions+=3;NFSU2_TR(0x4586d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4586d7:{NFSU2_TR(0x4586d7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4586d9:{NFSU2_TR(0x4586d9);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4586dbull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4586db:L4586db:{c.instructions+=1;NFSU2_TR(0x4586db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4586e1:L4586e1:{c.instructions+=3;NFSU2_TR(0x4586e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4586e7:{NFSU2_TR(0x4586e7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4586e9:{NFSU2_TR(0x4586e9);
if(r1(R+518)){{goto L4586fa;}}
}
B4586eb:L4586eb:{c.instructions+=2;NFSU2_TR(0x4586eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4586ec:{NFSU2_TR(0x4586ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4586f1ull));
TAIL_STATIC(0x440540u,440);
}
B4586f1:L4586f1:{c.instructions+=2;NFSU2_TR(0x4586f1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4586f4:{NFSU2_TR(0x4586f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4586fa:L4586fa:{c.instructions+=3;NFSU2_TR(0x4586fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B458700:{NFSU2_TR(0x458700);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B458702:{NFSU2_TR(0x458702);
if(r1(R+518)){{goto L458713;}}
}
B458704:L458704:{c.instructions+=2;NFSU2_TR(0x458704);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458705:{NFSU2_TR(0x458705);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45870aull));
TAIL_STATIC(0x440540u,440);
}
B45870a:L45870a:{c.instructions+=2;NFSU2_TR(0x45870a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B45870d:{NFSU2_TR(0x45870d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458713:L458713:{c.instructions+=3;NFSU2_TR(0x458713);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B458719:{NFSU2_TR(0x458719);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45871b:{NFSU2_TR(0x45871b);
if(r1(R+518)){{goto L45872c;}}
}
B45871d:L45871d:{c.instructions+=2;NFSU2_TR(0x45871d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45871e:{NFSU2_TR(0x45871e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458723ull));
TAIL_STATIC(0x440540u,440);
}
B458723:L458723:{c.instructions+=2;NFSU2_TR(0x458723);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B458726:{NFSU2_TR(0x458726);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45872c:L45872c:{c.instructions+=3;NFSU2_TR(0x45872c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B458732:{NFSU2_TR(0x458732);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B458734:{NFSU2_TR(0x458734);
if(r1(R+518)){{goto L458745;}}
}
B458736:L458736:{c.instructions+=2;NFSU2_TR(0x458736);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458737:{NFSU2_TR(0x458737);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45873cull));
TAIL_STATIC(0x440540u,440);
}
B45873c:L45873c:{c.instructions+=2;NFSU2_TR(0x45873c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B45873f:{NFSU2_TR(0x45873f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458745:L458745:{c.instructions+=3;NFSU2_TR(0x458745);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B458748:{NFSU2_TR(0x458748);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45874a:{NFSU2_TR(0x45874a);
if(r1(R+518)){{goto L45877c;}}
}
B45874c:L45874c:{c.instructions+=4;NFSU2_TR(0x45874c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45874f:{NFSU2_TR(0x45874f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458750:{NFSU2_TR(0x458750);
__builtin_memmove((R+4),(R+12),4);
}
B458752:{NFSU2_TR(0x458752);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458757ull));
TAIL_STATIC(0x6f695cu,6f6);
}
B458757:L458757:{c.instructions+=3;NFSU2_TR(0x458757);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45875a:{NFSU2_TR(0x45875a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45875b:{NFSU2_TR(0x45875b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458760ull));
TAIL_STATIC(0x6f72a1u,6f7);
}
B458760:L458760:{c.instructions+=3;NFSU2_TR(0x458760);
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
B458763:{NFSU2_TR(0x458763);
__builtin_memmove((R+4),(R+12),4);
}
B458765:{NFSU2_TR(0x458765);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45876aull));
TAIL_STATIC(0x6f663eu,6f6);
}
B45876a:L45876a:{c.instructions+=3;NFSU2_TR(0x45876a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45876d:{NFSU2_TR(0x45876d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45876e:{NFSU2_TR(0x45876e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458773ull));
TAIL_STATIC(0x575630u,575);
}
B458773:L458773:{c.instructions+=3;NFSU2_TR(0x458773);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B458776:{NFSU2_TR(0x458776);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458779:{NFSU2_TR(0x458779);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45877c:L45877c:{c.instructions+=8;NFSU2_TR(0x45877c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B458780:{NFSU2_TR(0x458780);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B458781:{NFSU2_TR(0x458781);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B458787:{NFSU2_TR(0x458787);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B458788:{NFSU2_TR(0x458788);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B458789:{NFSU2_TR(0x458789);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458790:{NFSU2_TR(0x458790);
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
B458793:{NFSU2_TR(0x458793);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4587a0:L4587a0:{c.instructions+=4;NFSU2_TR(0x4587a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4587a1:{NFSU2_TR(0x4587a1);
u8 U[4];
w4(U+0,u32(0x7ed0dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4587a6:{NFSU2_TR(0x4587a6);
w4(R+4,u32(0x82c6acull));
}
B4587ab:{NFSU2_TR(0x4587ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4587b0ull));
TAIL_STATIC(0x735800u,735);
}
B4587b0:L4587b0:{c.instructions+=4;NFSU2_TR(0x4587b0);
u8 U[4];
w4(U+0,u32(0x7ed0e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4587b5:{NFSU2_TR(0x4587b5);
w4(R+4,u32(0x82c560ull));
}
B4587ba:{NFSU2_TR(0x4587ba);
__builtin_memmove((R+24),(R+0),4);
}
B4587bc:{NFSU2_TR(0x4587bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4587c1ull));
TAIL_STATIC(0x735800u,735);
}
B4587c1:L4587c1:{c.instructions+=4;NFSU2_TR(0x4587c1);
u8 U[4];
w4(U+0,u32(0x7ed0ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4587c6:{NFSU2_TR(0x4587c6);
w4(R+4,u32(0x82c588ull));
}
B4587cb:{NFSU2_TR(0x4587cb);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4587cd:{NFSU2_TR(0x4587cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4587d2ull));
TAIL_STATIC(0x735800u,735);
}
B4587d2:L4587d2:{c.instructions+=4;NFSU2_TR(0x4587d2);
u8 U[4];
w4(U+0,u32(0x7ed0f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4587d7:{NFSU2_TR(0x4587d7);
w4(R+4,u32(0x82c650ull));
}
B4587dc:{NFSU2_TR(0x4587dc);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4587de:{NFSU2_TR(0x4587de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4587e3ull));
TAIL_STATIC(0x735800u,735);
}
B4587e3:L4587e3:{c.instructions+=4;NFSU2_TR(0x4587e3);
u8 U[4];
w4(U+0,u32(0x7ed0fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4587e8:{NFSU2_TR(0x4587e8);
w4(R+4,u32(0x82c5b8ull));
}
B4587ed:{NFSU2_TR(0x4587ed);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4587ef:{NFSU2_TR(0x4587ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4587f4ull));
TAIL_STATIC(0x735800u,735);
}
B4587f4:L4587f4:{c.instructions+=4;NFSU2_TR(0x4587f4);
u8 U[4];
w4(U+0,u32(0x7ed104ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4587f9:{NFSU2_TR(0x4587f9);
w4(R+4,u32(0x82c658ull));
}
B4587fe:{NFSU2_TR(0x4587fe);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B458800:{NFSU2_TR(0x458800);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458805ull));
TAIL_STATIC(0x735800u,735);
}
B458805:L458805:{c.instructions+=4;NFSU2_TR(0x458805);
u8 U[4];
w4(U+0,u32(0x7ed10cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45880a:{NFSU2_TR(0x45880a);
w4(R+4,u32(0x82c604ull));
}
B45880f:{NFSU2_TR(0x45880f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B458811:{NFSU2_TR(0x458811);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458816ull));
TAIL_STATIC(0x735800u,735);
}
B458816:L458816:{c.instructions+=4;NFSU2_TR(0x458816);
u8 U[4];
w4(U+0,u32(0x7ed114ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45881b:{NFSU2_TR(0x45881b);
w4(R+4,u32(0x82c580ull));
}
B458820:{NFSU2_TR(0x458820);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B458822:{NFSU2_TR(0x458822);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458827ull));
TAIL_STATIC(0x735800u,735);
}
B458827:L458827:{c.instructions+=4;NFSU2_TR(0x458827);
u8 U[4];
w4(U+0,u32(0x7ed11cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45882c:{NFSU2_TR(0x45882c);
w4(R+4,u32(0x82c5c0ull));
}
B458831:{NFSU2_TR(0x458831);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B458833:{NFSU2_TR(0x458833);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458838ull));
TAIL_STATIC(0x735800u,735);
}
B458838:L458838:{c.instructions+=4;NFSU2_TR(0x458838);
u8 U[4];
w4(U+0,u32(0x7ed124ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45883d:{NFSU2_TR(0x45883d);
w4(R+4,u32(0x82c640ull));
}
B458842:{NFSU2_TR(0x458842);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B458844:{NFSU2_TR(0x458844);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458849ull));
TAIL_STATIC(0x735800u,735);
}
B458849:L458849:{c.instructions+=3;NFSU2_TR(0x458849);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45884b:{NFSU2_TR(0x45884b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45884c:{NFSU2_TR(0x45884c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458850:L458850:{c.instructions+=3;NFSU2_TR(0x458850);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B458855:{NFSU2_TR(0x458855);
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
B458857:{NFSU2_TR(0x458857);
if(r1(R+518)){{goto L458879;}}
}
B458859:L458859:{c.instructions+=4;NFSU2_TR(0x458859);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45885a:{NFSU2_TR(0x45885a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45885b:{NFSU2_TR(0x45885b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B458861:{NFSU2_TR(0x458861);
w4(R+28,u32(0x9ull));
}
B458866:L458866:{c.instructions+=3;NFSU2_TR(0x458866);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B458868:{NFSU2_TR(0x458868);
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
B45886a:{NFSU2_TR(0x45886a);
if(r1(R+518)){{goto L458871;}}
}
B45886c:L45886c:{c.instructions+=2;NFSU2_TR(0x45886c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45886e:{NFSU2_TR(0x45886e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458871ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B458871:L458871:{c.instructions+=3;NFSU2_TR(0x458871);
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B458874:{NFSU2_TR(0x458874);
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
B458875:{NFSU2_TR(0x458875);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x458866u);}goto L458866;}}
}
B458877:L458877:{c.instructions+=2;NFSU2_TR(0x458877);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B458878:{NFSU2_TR(0x458878);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B458879:L458879:{c.instructions+=1;NFSU2_TR(0x458879);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458880:L458880:{c.instructions+=2;NFSU2_TR(0x458880);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B458884:{NFSU2_TR(0x458884);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458890:L458890:{c.instructions+=10;NFSU2_TR(0x458890);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x118ull))));
}
B458896:{NFSU2_TR(0x458896);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458897:{NFSU2_TR(0x458897);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458898:{NFSU2_TR(0x458898);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458899:{NFSU2_TR(0x458899);
u8 U[8];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4588a0:{NFSU2_TR(0x4588a0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4588a2:{NFSU2_TR(0x4588a2);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4588a4:{NFSU2_TR(0x4588a4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4588a6:{NFSU2_TR(0x4588a6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4588a7:{NFSU2_TR(0x4588a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4588acull));
TAIL_STATIC(0x6f7c1bu,6f7);
}
B4588ac:L4588ac:{c.instructions+=3;NFSU2_TR(0x4588ac);
__builtin_memmove((R+24),(R+0),4);
}
B4588ae:{NFSU2_TR(0x4588ae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4588af:{NFSU2_TR(0x4588af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4588b4ull));
TAIL_STATIC(0x6f75ddu,6f7);
}
B4588b4:L4588b4:{c.instructions+=3;NFSU2_TR(0x4588b4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4588b5:{NFSU2_TR(0x4588b5);
__builtin_memmove((R+12),(R+0),4);
}
B4588b7:{NFSU2_TR(0x4588b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4588bcull));
TAIL_STATIC(0x6f76e9u,6f7);
}
B4588bc:L4588bc:{c.instructions+=3;NFSU2_TR(0x4588bc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4588bf:{NFSU2_TR(0x4588bf);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4588c2:{NFSU2_TR(0x4588c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4588d9;}}
}
B4588c4:L4588c4:{c.instructions+=3;NFSU2_TR(0x4588c4);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4588c6:{NFSU2_TR(0x4588c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4588c7:{NFSU2_TR(0x4588c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4588ccull));
TAIL_STATIC(0x6f879au,6f8);
}
B4588cc:L4588cc:{c.instructions+=6;NFSU2_TR(0x4588cc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4588cf:{NFSU2_TR(0x4588cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4588d0:{NFSU2_TR(0x4588d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4588d1:{NFSU2_TR(0x4588d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4588d2:{NFSU2_TR(0x4588d2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x118ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x118ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x118ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4588d8:{NFSU2_TR(0x4588d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4588d9:L4588d9:{c.instructions+=4;NFSU2_TR(0x4588d9);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4588dd:{NFSU2_TR(0x4588dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4588de:{NFSU2_TR(0x4588de);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x50ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4588e6:{NFSU2_TR(0x4588e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4588ebull));
TAIL_STATIC(0x6f86adu,6f8);
}
B4588eb:L4588eb:{c.instructions+=4;NFSU2_TR(0x4588eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4588ef:{NFSU2_TR(0x4588ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4588f2:{NFSU2_TR(0x4588f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4588f4:{NFSU2_TR(0x4588f4);
if(r1(R+518)){{goto L45894f;}}
}
B4588f6:L4588f6:{c.instructions+=4;NFSU2_TR(0x4588f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4588f7:{NFSU2_TR(0x4588f7);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4588fb:{NFSU2_TR(0x4588fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4588fc:{NFSU2_TR(0x4588fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458901ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B458901:L458901:{c.instructions+=6;NFSU2_TR(0x458901);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458902:{NFSU2_TR(0x458902);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B458906:{NFSU2_TR(0x458906);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458907:{NFSU2_TR(0x458907);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B45890b:{NFSU2_TR(0x45890b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45890c:{NFSU2_TR(0x45890c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458911ull));
TAIL_STATIC(0x43dda0u,43d);
}
B458911:L458911:{c.instructions+=6;NFSU2_TR(0x458911);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458913:{NFSU2_TR(0x458913);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458915:{NFSU2_TR(0x458915);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B458919:{NFSU2_TR(0x458919);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45891b:{NFSU2_TR(0x45891b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45891c:{NFSU2_TR(0x45891c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458921ull));
TAIL_STATIC(0x6f7c1bu,6f7);
}
B458921:L458921:{c.instructions+=3;NFSU2_TR(0x458921);
__builtin_memmove((R+24),(R+0),4);
}
B458923:{NFSU2_TR(0x458923);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458924:{NFSU2_TR(0x458924);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458929ull));
TAIL_STATIC(0x6f75ddu,6f7);
}
B458929:L458929:{c.instructions+=3;NFSU2_TR(0x458929);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45892a:{NFSU2_TR(0x45892a);
__builtin_memmove((R+12),(R+0),4);
}
B45892c:{NFSU2_TR(0x45892c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458931ull));
TAIL_STATIC(0x6f76e9u,6f7);
}
B458931:L458931:{c.instructions+=3;NFSU2_TR(0x458931);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
}
B458934:{NFSU2_TR(0x458934);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B458937:{NFSU2_TR(0x458937);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45894f;}}
}
B458939:L458939:{c.instructions+=3;NFSU2_TR(0x458939);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45893b:{NFSU2_TR(0x45893b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45893c:{NFSU2_TR(0x45893c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458941ull));
TAIL_STATIC(0x6f879au,6f8);
}
B458941:L458941:{c.instructions+=4;NFSU2_TR(0x458941);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B458945:{NFSU2_TR(0x458945);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458946:{NFSU2_TR(0x458946);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458947:{NFSU2_TR(0x458947);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45894cull));
TAIL_STATIC(0x43dbd0u,43d);
}
B45894c:L45894c:{c.instructions+=1;NFSU2_TR(0x45894c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B45894f:L45894f:{c.instructions+=5;NFSU2_TR(0x45894f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B458950:{NFSU2_TR(0x458950);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B458951:{NFSU2_TR(0x458951);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B458952:{NFSU2_TR(0x458952);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x118ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x118ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x118ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B458958:{NFSU2_TR(0x458958);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458960:L458960:{c.instructions+=8;NFSU2_TR(0x458960);
__builtin_memmove((R+0),(R+4),4);
}
B458962:{NFSU2_TR(0x458962);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B458964:{NFSU2_TR(0x458964);
u8 U[4];
w4(U+0,u32(0x789ec8ull));
s4(u32(r4(R+0)),r4(U+0));
}
B45896a:{NFSU2_TR(0x45896a);
__builtin_memmove(gp(0x82b910),(R+4),4);
}
B458970:{NFSU2_TR(0x458970);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458973:{NFSU2_TR(0x458973);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458976:{NFSU2_TR(0x458976);
__builtin_memmove(gp(0x82b91c),(R+4),1);
}
B45897c:{NFSU2_TR(0x45897c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458980:L458980:{c.instructions+=3;NFSU2_TR(0x458980);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B458984:{NFSU2_TR(0x458984);
__builtin_memmove(gp(0x7ec854),(R+0),4);
}
B458989:{NFSU2_TR(0x458989);
{goto L458990;}
}
B458990:L458990:{c.instructions+=2;NFSU2_TR(0x458990);
u8 U[14];
__builtin_memmove((U+6),gp(0x7faaa8),4);
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
B458997:{NFSU2_TR(0x458997);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4589b3;}}
}
B458999:L458999:{c.instructions+=5;NFSU2_TR(0x458999);
__builtin_memmove((R+0),gp(0x82b068),4);
}
B45899e:{NFSU2_TR(0x45899e);
__builtin_memmove((R+4),gp(0x7ec854),4);
}
B4589a4:{NFSU2_TR(0x4589a4);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B4589a8:{NFSU2_TR(0x4589a8);
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
B4589aa:{NFSU2_TR(0x4589aa);
if(r1(R+518)){{goto L4589b3;}}
}
B4589ac:L4589ac:{c.instructions+=2;NFSU2_TR(0x4589ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4589ad:{NFSU2_TR(0x4589ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4589b2ull));
TAIL_STATIC(0x734e70u,734);
}
B4589b2:L4589b2:{c.instructions+=1;NFSU2_TR(0x4589b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4589b3:L4589b3:{c.instructions+=1;NFSU2_TR(0x4589b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4589c0:L4589c0:{c.instructions+=5;NFSU2_TR(0x4589c0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4589c4:{NFSU2_TR(0x4589c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4589c8:{NFSU2_TR(0x4589c8);
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
B4589ca:{NFSU2_TR(0x4589ca);
__builtin_memmove((R+4),gp(0x82b920),4);
}
B4589d0:{NFSU2_TR(0x4589d0);
if(r1(R+518)){{goto L458a39;}}
}
B4589d2:L4589d2:{c.instructions+=2;NFSU2_TR(0x4589d2);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4589d6:{NFSU2_TR(0x4589d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L458a0b;}}
}
B4589d8:L4589d8:{c.instructions+=3;NFSU2_TR(0x4589d8);
u8 U[4];
w4(U+0,u32(0x1000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4589dd:{NFSU2_TR(0x4589dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4589de:{NFSU2_TR(0x4589de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4589e3ull));
TAIL_STATIC(0x440820u,440);
}
B4589e3:L4589e3:{c.instructions+=10;NFSU2_TR(0x4589e3);
__builtin_memmove((R+4),gp(0x82b920),4);
}
B4589e9:{NFSU2_TR(0x4589e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4589ec:{NFSU2_TR(0x4589ec);
__builtin_memmove((R+0),gp(0x82b918),4);
}
B4589f1:{NFSU2_TR(0x4589f1);
__builtin_memmove((R+8),gp(0x82b920),4);
}
B4589f7:{NFSU2_TR(0x4589f7);
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4589fa:{NFSU2_TR(0x4589fa);
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
B4589fb:{NFSU2_TR(0x4589fb);
__builtin_memmove(gp(0x82b918),(R+0),4);
}
B458a00:{NFSU2_TR(0x458a00);
s1(0x82b91c,u8(0x1ull));
}
B458a07:{NFSU2_TR(0x458a07);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B458a0a:{NFSU2_TR(0x458a0a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458a0b:L458a0b:{c.instructions+=5;NFSU2_TR(0x458a0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B458a0e:{NFSU2_TR(0x458a0e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458a0f:{NFSU2_TR(0x458a0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458a10:{NFSU2_TR(0x458a10);
w4(R+4,u32(0x82c6d4ull));
}
B458a15:{NFSU2_TR(0x458a15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458a1aull));
TAIL_STATIC(0x457a60u,457);
}
B458a1a:L458a1a:{c.instructions+=7;NFSU2_TR(0x458a1a);
__builtin_memmove((R+8),gp(0x82b920),4);
}
B458a20:{NFSU2_TR(0x458a20);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458a23:{NFSU2_TR(0x458a23);
u8 U[6];
w1(R+523,scarry<u32>(m4(0x82b918),u32(0x1ull)));
s4(0x82b918,u32(u32(m4(0x82b918))+u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x82b918))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x82b918))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x82b918))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B458a29:{NFSU2_TR(0x458a29);
__builtin_memmove((R+0),gp(0x82b920),4);
}
B458a2e:{NFSU2_TR(0x458a2e);
s1(0x82b91c,u8(0x1ull));
}
B458a35:{NFSU2_TR(0x458a35);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B458a38:{NFSU2_TR(0x458a38);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458a39:L458a39:{c.instructions+=2;NFSU2_TR(0x458a39);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B458a3c:{NFSU2_TR(0x458a3c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458a40:L458a40:{c.instructions+=4;NFSU2_TR(0x458a40);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B458a46:{NFSU2_TR(0x458a46);
__builtin_memmove((R+0),gp(0x82b918),4);
}
B458a4b:{NFSU2_TR(0x458a4b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B458a4e:{NFSU2_TR(0x458a4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L458a97;}}
}
B458a50:L458a50:{c.instructions+=1;NFSU2_TR(0x458a50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458a55ull));
TAIL_STATIC(0x72153fu,721);
}
B458a55:L458a55:{c.instructions+=2;NFSU2_TR(0x458a55);
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
B458a57:{NFSU2_TR(0x458a57);
if(r1(R+518)){{goto L458a96;}}
}
B458a59:L458a59:{c.instructions+=3;NFSU2_TR(0x458a59);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458a5a:{NFSU2_TR(0x458a5a);
w4(R+24,u32(0x82b0acull));
}
B458a5f:{NFSU2_TR(0x458a5f);
}
B458a60:L458a60:{c.instructions+=3;NFSU2_TR(0x458a60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B458a63:{NFSU2_TR(0x458a63);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B458a65:{NFSU2_TR(0x458a65);
if(r1(R+518)){{goto L458a8a;}}
}
B458a67:L458a67:{c.instructions+=3;NFSU2_TR(0x458a67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B458a69:{NFSU2_TR(0x458a69);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B458a6b:{NFSU2_TR(0x458a6b);
if(r1(R+518)){{goto L458a8a;}}
}
B458a6d:L458a6d:{c.instructions+=3;NFSU2_TR(0x458a6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B458a70:{NFSU2_TR(0x458a70);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458a71:{NFSU2_TR(0x458a71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458a76ull));
TAIL_STATIC(0x440540u,440);
}
B458a76:L458a76:{c.instructions+=5;NFSU2_TR(0x458a76);
__builtin_memmove((R+0),gp(0x82b918),4);
}
B458a7b:{NFSU2_TR(0x458a7b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B458a7e:{NFSU2_TR(0x458a7e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B458a7f:{NFSU2_TR(0x458a7f);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B458a85:{NFSU2_TR(0x458a85);
__builtin_memmove(gp(0x82b918),(R+0),4);
}
B458a8a:L458a8a:{c.instructions+=3;NFSU2_TR(0x458a8a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2cull))));
}
B458a8d:{NFSU2_TR(0x458a8d);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x82b62cull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x82b62cull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x82b62cull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B458a93:{NFSU2_TR(0x458a93);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x458a60u);}goto L458a60;}}
}
B458a95:L458a95:{c.instructions+=1;NFSU2_TR(0x458a95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B458a96:L458a96:{c.instructions+=1;NFSU2_TR(0x458a96);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458a97:L458a97:{c.instructions+=3;NFSU2_TR(0x458a97);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B458a99:{NFSU2_TR(0x458a99);
__builtin_memmove((R+0),gp(0x82b91c),1);
}
B458a9e:{NFSU2_TR(0x458a9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L458b16;}}
}
B458aa0:L458aa0:{c.instructions+=2;NFSU2_TR(0x458aa0);
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
B458aa2:{NFSU2_TR(0x458aa2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x458a96u);}goto L458a96;}}
}
B458aa4:L458aa4:{c.instructions+=1;NFSU2_TR(0x458aa4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458aa9ull));
TAIL_STATIC(0x457d70u,457);
}
B458aa9:L458aa9:{c.instructions+=1;NFSU2_TR(0x458aa9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458aaeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x458100u);}goto L458100;}
}
B458aae:L458aae:{c.instructions+=1;NFSU2_TR(0x458aae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458ab3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4581b0u);}goto L4581b0;}
}
B458ab3:L458ab3:{c.instructions+=3;NFSU2_TR(0x458ab3);
u8 U[4];
w4(U+0,u32(0x7ede08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458ab8:{NFSU2_TR(0x458ab8);
w4(R+4,u32(0x82c6e0ull));
}
B458abd:{NFSU2_TR(0x458abd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458ac2ull));
TAIL_STATIC(0x735840u,735);
}
B458ac2:L458ac2:{c.instructions+=1;NFSU2_TR(0x458ac2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458ac7ull));
TAIL_STATIC(0x457bc0u,457);
}
B458ac7:L458ac7:{c.instructions+=3;NFSU2_TR(0x458ac7);
u8 U[4];
w4(U+0,u32(0x7eddf8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458acc:{NFSU2_TR(0x458acc);
w4(R+4,u32(0x82c5e0ull));
}
B458ad1:{NFSU2_TR(0x458ad1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458ad6ull));
TAIL_STATIC(0x735840u,735);
}
B458ad6:L458ad6:{c.instructions+=3;NFSU2_TR(0x458ad6);
u8 U[4];
w4(U+0,u32(0x7ede00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458adb:{NFSU2_TR(0x458adb);
w4(R+4,u32(0x82c5d0ull));
}
B458ae0:{NFSU2_TR(0x458ae0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458ae5ull));
TAIL_STATIC(0x735840u,735);
}
B458ae5:L458ae5:{c.instructions+=3;NFSU2_TR(0x458ae5);
__builtin_memmove((R+0),gp(0x82b910),4);
}
B458aea:{NFSU2_TR(0x458aea);
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
B458aec:{NFSU2_TR(0x458aec);
if(r1(R+518)){{goto L458b0e;}}
}
B458aee:L458aee:{c.instructions+=3;NFSU2_TR(0x458aee);
__builtin_memmove((R+8),gp(0x82b914),4);
}
B458af4:{NFSU2_TR(0x458af4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458af5:{NFSU2_TR(0x458af5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458af7ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B458af7:L458af7:{c.instructions+=3;NFSU2_TR(0x458af7);
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
B458afa:{NFSU2_TR(0x458afa);
s4(0x82b910,u32(0x0ull));
}
B458b04:{NFSU2_TR(0x458b04);
s4(0x82b914,u32(0x0ull));
}
B458b0e:L458b0e:{c.instructions+=2;NFSU2_TR(0x458b0e);
s1(0x82b91c,u8(0x0ull));
}
B458b15:{NFSU2_TR(0x458b15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458b16:L458b16:{c.instructions+=2;NFSU2_TR(0x458b16);
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
B458b18:{NFSU2_TR(0x458b18);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x458a96u);}goto L458a96;}}
}
B458b1e:L458b1e:{c.instructions+=1;NFSU2_TR(0x458b1e);
TAIL_STATIC(0x721515u,721);
}
B458b30:L458b30:{c.instructions+=14;NFSU2_TR(0x458b30);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B458b36:{NFSU2_TR(0x458b36);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458b38:{NFSU2_TR(0x458b38);
u8 U[4];
w4(U+0,u32(0x77259bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458b3d:{NFSU2_TR(0x458b3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458b3e:{NFSU2_TR(0x458b3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458b45:{NFSU2_TR(0x458b45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B458b48:{NFSU2_TR(0x458b48);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458b49:{NFSU2_TR(0x458b49);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458b4a:{NFSU2_TR(0x458b4a);
__builtin_memmove((R+20),(R+4),4);
}
B458b4c:{NFSU2_TR(0x458b4c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458b4d:{NFSU2_TR(0x458b4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B458b50:{NFSU2_TR(0x458b50);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B458b52:{NFSU2_TR(0x458b52);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B458b54:{NFSU2_TR(0x458b54);
if(r1(R+518)){{goto L458b86;}}
}
B458b56:L458b56:{c.instructions+=3;NFSU2_TR(0x458b56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B458b58:{NFSU2_TR(0x458b58);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B458b5a:{NFSU2_TR(0x458b5a);
if(r1(R+518)){{goto L458b61;}}
}
B458b5c:L458b5c:{c.instructions+=1;NFSU2_TR(0x458b5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458b61ull));
TAIL_STATIC(0x735550u,735);
}
B458b61:L458b61:{c.instructions+=3;NFSU2_TR(0x458b61);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B458b65:{NFSU2_TR(0x458b65);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458b66:{NFSU2_TR(0x458b66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458b6bull));
TAIL_STATIC(0x734df0u,734);
}
B458b6b:L458b6b:{c.instructions+=2;NFSU2_TR(0x458b6b);
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
B458b6e:{NFSU2_TR(0x458b6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458b73ull));
TAIL_STATIC(0x734e40u,734);
}
B458b73:L458b73:{c.instructions+=5;NFSU2_TR(0x458b73);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B458b77:{NFSU2_TR(0x458b77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B458b79:{NFSU2_TR(0x458b79);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458b7a:{NFSU2_TR(0x458b7a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458b7b:{NFSU2_TR(0x458b7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458b7eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B458b7e:L458b7e:{c.instructions+=1;NFSU2_TR(0x458b7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458b83ull));
TAIL_STATIC(0x734e60u,734);
}
B458b83:L458b83:{c.instructions+=1;NFSU2_TR(0x458b83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458b86:L458b86:{c.instructions+=4;NFSU2_TR(0x458b86);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B458b8a:{NFSU2_TR(0x458b8a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458b8b:{NFSU2_TR(0x458b8b);
s4(0x7ec844,u32(0x789d00ull));
}
B458b95:{NFSU2_TR(0x458b95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458b9aull));
TAIL_STATIC(0x734df0u,734);
}
B458b9a:L458b9a:{c.instructions+=2;NFSU2_TR(0x458b9a);
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
B458b9d:{NFSU2_TR(0x458b9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458ba2ull));
TAIL_STATIC(0x734e40u,734);
}
B458ba2:L458ba2:{c.instructions+=9;NFSU2_TR(0x458ba2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B458ba6:{NFSU2_TR(0x458ba6);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B458baa:{NFSU2_TR(0x458baa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458bab:{NFSU2_TR(0x458bab);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458baf:{NFSU2_TR(0x458baf);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458bb3:{NFSU2_TR(0x458bb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458bb7:{NFSU2_TR(0x458bb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B458bb9:{NFSU2_TR(0x458bb9);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458bbb:{NFSU2_TR(0x458bbb);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458bbdull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B458bbd:L458bbd:{c.instructions+=2;NFSU2_TR(0x458bbd);
__builtin_memmove((R+24),(R+0),4);
}
B458bbf:{NFSU2_TR(0x458bbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458bc4ull));
TAIL_STATIC(0x734e60u,734);
}
B458bc4:L458bc4:{c.instructions+=4;NFSU2_TR(0x458bc4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458bc8:{NFSU2_TR(0x458bc8);
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
B458bca:{NFSU2_TR(0x458bca);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458bce:{NFSU2_TR(0x458bce);
if(r1(R+518)){{goto L458c26;}}
}
B458bd0:L458bd0:{c.instructions+=10;NFSU2_TR(0x458bd0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458bd1:{NFSU2_TR(0x458bd1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B458bd4:{NFSU2_TR(0x458bd4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458bd5:{NFSU2_TR(0x458bd5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458bd6:{NFSU2_TR(0x458bd6);
u8 U[4];
w4(U+0,u32(0x82c5b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458bdb:{NFSU2_TR(0x458bdb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B458bdd:{NFSU2_TR(0x458bdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458be0:{NFSU2_TR(0x458be0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458be3:{NFSU2_TR(0x458be3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458be6:{NFSU2_TR(0x458be6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458bebull));
TAIL_STATIC(0x7358c0u,735);
}
B458beb:L458beb:{c.instructions+=3;NFSU2_TR(0x458beb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B458bee:{NFSU2_TR(0x458bee);
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
B458bf0:{NFSU2_TR(0x458bf0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L458c10;}}
}
B458bf2:L458bf2:{c.instructions+=3;NFSU2_TR(0x458bf2);
u8 U[4];
w4(U+0,u32(0x7eddb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458bf7:{NFSU2_TR(0x458bf7);
w4(R+4,u32(0x82c5b0ull));
}
B458bfc:{NFSU2_TR(0x458bfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458c01ull));
TAIL_STATIC(0x735840u,735);
}
B458c01:L458c01:{c.instructions+=4;NFSU2_TR(0x458c01);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458c02:{NFSU2_TR(0x458c02);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458c03:{NFSU2_TR(0x458c03);
u8 U[4];
w4(U+0,u32(0x82c5b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458c08:{NFSU2_TR(0x458c08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458c0dull));
TAIL_STATIC(0x7358c0u,735);
}
B458c0d:L458c0d:{c.instructions+=1;NFSU2_TR(0x458c0d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B458c10:L458c10:{c.instructions+=9;NFSU2_TR(0x458c10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B458c11:{NFSU2_TR(0x458c11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458c14:{NFSU2_TR(0x458c14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B458c15:{NFSU2_TR(0x458c15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B458c16:{NFSU2_TR(0x458c16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B458c17:{NFSU2_TR(0x458c17);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B458c1b:{NFSU2_TR(0x458c1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458c22:{NFSU2_TR(0x458c22);
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
B458c25:{NFSU2_TR(0x458c25);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458c26:L458c26:{c.instructions+=8;NFSU2_TR(0x458c26);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B458c2a:{NFSU2_TR(0x458c2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458c2d:{NFSU2_TR(0x458c2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B458c2e:{NFSU2_TR(0x458c2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B458c2f:{NFSU2_TR(0x458c2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B458c30:{NFSU2_TR(0x458c30);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458c37:{NFSU2_TR(0x458c37);
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
B458c3a:{NFSU2_TR(0x458c3a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458c40:L458c40:{c.instructions+=3;NFSU2_TR(0x458c40);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B458c43:{NFSU2_TR(0x458c43);
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
B458c45:{NFSU2_TR(0x458c45);
if(r1(R+518)){{goto L458c4e;}}
}
B458c47:L458c47:{c.instructions+=1;NFSU2_TR(0x458c47);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B458c4e:L458c4e:{c.instructions+=1;NFSU2_TR(0x458c4e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458c50:L458c50:{c.instructions+=12;NFSU2_TR(0x458c50);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B458c56:{NFSU2_TR(0x458c56);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458c58:{NFSU2_TR(0x458c58);
u8 U[4];
w4(U+0,u32(0x77228bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458c5d:{NFSU2_TR(0x458c5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458c5e:{NFSU2_TR(0x458c5e);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B458c63:{NFSU2_TR(0x458c63);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B458c65:{NFSU2_TR(0x458c65);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458c6c:{NFSU2_TR(0x458c6c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458c6d:{NFSU2_TR(0x458c6d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458c6e:{NFSU2_TR(0x458c6e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458c6f:{NFSU2_TR(0x458c6f);
__builtin_memmove((R+20),(R+4),4);
}
B458c71:{NFSU2_TR(0x458c71);
if(r1(R+518)){{goto L458d17;}}
}
B458c77:L458c77:{c.instructions+=3;NFSU2_TR(0x458c77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B458c7d:{NFSU2_TR(0x458c7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B458c7f:{NFSU2_TR(0x458c7f);
if(r1(R+518)){{goto L458d17;}}
}
B458c85:L458c85:{c.instructions+=3;NFSU2_TR(0x458c85);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B458c88:{NFSU2_TR(0x458c88);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B458c8a:{NFSU2_TR(0x458c8a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L458ca2;}}
}
B458c8c:L458c8c:{c.instructions+=8;NFSU2_TR(0x458c8c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B458c8e:{NFSU2_TR(0x458c8e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B458c92:{NFSU2_TR(0x458c92);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458c99:{NFSU2_TR(0x458c99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B458c9a:{NFSU2_TR(0x458c9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B458c9b:{NFSU2_TR(0x458c9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B458c9c:{NFSU2_TR(0x458c9c);
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
B458c9f:{NFSU2_TR(0x458c9f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458ca2:L458ca2:{c.instructions+=3;NFSU2_TR(0x458ca2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B458ca6:{NFSU2_TR(0x458ca6);
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
B458ca8:{NFSU2_TR(0x458ca8);
if(r1(R+518)){{goto L458d17;}}
}
B458caa:L458caa:{c.instructions+=4;NFSU2_TR(0x458caa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B458cac:{NFSU2_TR(0x458cac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B458caf:{NFSU2_TR(0x458caf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458cb1:{NFSU2_TR(0x458cb1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458cb4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B458cb4:L458cb4:{c.instructions+=6;NFSU2_TR(0x458cb4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B458cb7:{NFSU2_TR(0x458cb7);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B458cba:{NFSU2_TR(0x458cba);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458cbc:{NFSU2_TR(0x458cbc);
__builtin_memmove((R+28),(R+0),4);
}
B458cbe:{NFSU2_TR(0x458cbe);
s4(0x7ec844,u32(0x789d10ull));
}
B458cc8:{NFSU2_TR(0x458cc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458ccdull));
TAIL_STATIC(0x457e20u,457);
}
B458ccd:L458ccd:{c.instructions+=5;NFSU2_TR(0x458ccd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B458cd0:{NFSU2_TR(0x458cd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458cd4:{NFSU2_TR(0x458cd4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B458cd6:{NFSU2_TR(0x458cd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B458cde:{NFSU2_TR(0x458cde);
if(r1(R+518)){{goto L458cf6;}}
}
B458ce0:L458ce0:{c.instructions+=9;NFSU2_TR(0x458ce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B458ce3:{NFSU2_TR(0x458ce3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B458ce6:{NFSU2_TR(0x458ce6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458ce7:{NFSU2_TR(0x458ce7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B458cea:{NFSU2_TR(0x458cea);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458ceb:{NFSU2_TR(0x458ceb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458cec:{NFSU2_TR(0x458cec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458ced:{NFSU2_TR(0x458ced);
__builtin_memmove((R+4),(R+0),4);
}
B458cef:{NFSU2_TR(0x458cef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458cf4ull));
TAIL_STATIC(0x457cc0u,457);
}
B458cf4:L458cf4:{c.instructions+=1;NFSU2_TR(0x458cf4);
{goto L458cf8;}
}
B458cf6:L458cf6:{c.instructions+=1;NFSU2_TR(0x458cf6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B458cf8:L458cf8:{c.instructions+=4;NFSU2_TR(0x458cf8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B458cfa:{NFSU2_TR(0x458cfa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B458d02:{NFSU2_TR(0x458d02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458d05:{NFSU2_TR(0x458d05);
if(r1(R+518)){{goto L458d10;}}
}
B458d07:L458d07:{c.instructions+=3;NFSU2_TR(0x458d07);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458d09:{NFSU2_TR(0x458d09);
__builtin_memmove((R+4),(R+0),4);
}
B458d0b:{NFSU2_TR(0x458d0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458d10ull));
TAIL_STATIC(0x45fa60u,45f);
}
B458d10:L458d10:{c.instructions+=1;NFSU2_TR(0x458d10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B458d17:L458d17:{c.instructions+=8;NFSU2_TR(0x458d17);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B458d1b:{NFSU2_TR(0x458d1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B458d1c:{NFSU2_TR(0x458d1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B458d1d:{NFSU2_TR(0x458d1d);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B458d20:{NFSU2_TR(0x458d20);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458d27:{NFSU2_TR(0x458d27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B458d28:{NFSU2_TR(0x458d28);
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
B458d2b:{NFSU2_TR(0x458d2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458d30:L458d30:{c.instructions+=3;NFSU2_TR(0x458d30);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B458d34:{NFSU2_TR(0x458d34);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x16ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x16ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x16ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B458d37:{NFSU2_TR(0x458d37);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L458d46;}}
}
B458d39:L458d39:{c.instructions+=3;NFSU2_TR(0x458d39);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B458d3c:{NFSU2_TR(0x458d3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ec8f0ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B458d43:{NFSU2_TR(0x458d43);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458d46:L458d46:{c.instructions+=2;NFSU2_TR(0x458d46);
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
B458d48:{NFSU2_TR(0x458d48);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458d50:L458d50:{c.instructions+=12;NFSU2_TR(0x458d50);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B458d56:{NFSU2_TR(0x458d56);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458d58:{NFSU2_TR(0x458d58);
u8 U[4];
w4(U+0,u32(0x77228bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458d5d:{NFSU2_TR(0x458d5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458d5e:{NFSU2_TR(0x458d5e);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B458d63:{NFSU2_TR(0x458d63);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B458d65:{NFSU2_TR(0x458d65);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458d6c:{NFSU2_TR(0x458d6c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458d6d:{NFSU2_TR(0x458d6d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458d6e:{NFSU2_TR(0x458d6e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458d6f:{NFSU2_TR(0x458d6f);
__builtin_memmove((R+20),(R+4),4);
}
B458d71:{NFSU2_TR(0x458d71);
if(r1(R+518)){{goto L458e14;}}
}
B458d77:L458d77:{c.instructions+=3;NFSU2_TR(0x458d77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B458d7a:{NFSU2_TR(0x458d7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B458d7c:{NFSU2_TR(0x458d7c);
if(r1(R+518)){{goto L458e14;}}
}
B458d82:L458d82:{c.instructions+=3;NFSU2_TR(0x458d82);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B458d85:{NFSU2_TR(0x458d85);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B458d87:{NFSU2_TR(0x458d87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L458d9f;}}
}
B458d89:L458d89:{c.instructions+=8;NFSU2_TR(0x458d89);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B458d8b:{NFSU2_TR(0x458d8b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B458d8f:{NFSU2_TR(0x458d8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458d96:{NFSU2_TR(0x458d96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B458d97:{NFSU2_TR(0x458d97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B458d98:{NFSU2_TR(0x458d98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B458d99:{NFSU2_TR(0x458d99);
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
B458d9c:{NFSU2_TR(0x458d9c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458d9f:L458d9f:{c.instructions+=3;NFSU2_TR(0x458d9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B458da3:{NFSU2_TR(0x458da3);
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
B458da5:{NFSU2_TR(0x458da5);
if(r1(R+518)){{goto L458e14;}}
}
B458da7:L458da7:{c.instructions+=4;NFSU2_TR(0x458da7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B458da9:{NFSU2_TR(0x458da9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B458dac:{NFSU2_TR(0x458dac);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458dae:{NFSU2_TR(0x458dae);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458db1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B458db1:L458db1:{c.instructions+=6;NFSU2_TR(0x458db1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B458db4:{NFSU2_TR(0x458db4);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B458db7:{NFSU2_TR(0x458db7);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458db9:{NFSU2_TR(0x458db9);
__builtin_memmove((R+28),(R+0),4);
}
B458dbb:{NFSU2_TR(0x458dbb);
s4(0x7ec844,u32(0x789d40ull));
}
B458dc5:{NFSU2_TR(0x458dc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458dcaull));
TAIL_STATIC(0x457e20u,457);
}
B458dca:L458dca:{c.instructions+=5;NFSU2_TR(0x458dca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B458dcd:{NFSU2_TR(0x458dcd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458dd1:{NFSU2_TR(0x458dd1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B458dd3:{NFSU2_TR(0x458dd3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B458ddb:{NFSU2_TR(0x458ddb);
if(r1(R+518)){{goto L458df3;}}
}
B458ddd:L458ddd:{c.instructions+=9;NFSU2_TR(0x458ddd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B458de0:{NFSU2_TR(0x458de0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B458de3:{NFSU2_TR(0x458de3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458de4:{NFSU2_TR(0x458de4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B458de7:{NFSU2_TR(0x458de7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458de8:{NFSU2_TR(0x458de8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458de9:{NFSU2_TR(0x458de9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458dea:{NFSU2_TR(0x458dea);
__builtin_memmove((R+4),(R+0),4);
}
B458dec:{NFSU2_TR(0x458dec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458df1ull));
TAIL_STATIC(0x457c10u,457);
}
B458df1:L458df1:{c.instructions+=1;NFSU2_TR(0x458df1);
{goto L458df5;}
}
B458df3:L458df3:{c.instructions+=1;NFSU2_TR(0x458df3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B458df5:L458df5:{c.instructions+=4;NFSU2_TR(0x458df5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B458df7:{NFSU2_TR(0x458df7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B458dff:{NFSU2_TR(0x458dff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458e02:{NFSU2_TR(0x458e02);
if(r1(R+518)){{goto L458e0d;}}
}
B458e04:L458e04:{c.instructions+=3;NFSU2_TR(0x458e04);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458e06:{NFSU2_TR(0x458e06);
__builtin_memmove((R+4),(R+0),4);
}
B458e08:{NFSU2_TR(0x458e08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x458e0dull));
TAIL_STATIC(0x45fa60u,45f);
}
B458e0d:L458e0d:{c.instructions+=1;NFSU2_TR(0x458e0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B458e14:L458e14:{c.instructions+=8;NFSU2_TR(0x458e14);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B458e18:{NFSU2_TR(0x458e18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B458e19:{NFSU2_TR(0x458e19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B458e1a:{NFSU2_TR(0x458e1a);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B458e1d:{NFSU2_TR(0x458e1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458e24:{NFSU2_TR(0x458e24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B458e25:{NFSU2_TR(0x458e25);
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
B458e28:{NFSU2_TR(0x458e28);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458e30:L458e30:{c.instructions+=3;NFSU2_TR(0x458e30);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B458e34:{NFSU2_TR(0x458e34);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x7ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B458e37:{NFSU2_TR(0x458e37);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L458e46;}}
}
B458e39:L458e39:{c.instructions+=3;NFSU2_TR(0x458e39);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B458e3c:{NFSU2_TR(0x458e3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ec860ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B458e43:{NFSU2_TR(0x458e43);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458e46:L458e46:{c.instructions+=2;NFSU2_TR(0x458e46);
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
B458e48:{NFSU2_TR(0x458e48);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458e50:L458e50:{c.instructions+=2;NFSU2_TR(0x458e50);
w4(R+0,u32(0x7ecb38ull));
}
B458e55:{NFSU2_TR(0x458e55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458e60:L458e60:{c.instructions+=2;NFSU2_TR(0x458e60);
__builtin_memmove((R+0),gp(0x7ecb3c),4);
}
B458e65:{NFSU2_TR(0x458e65);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458e70:L458e70:{c.instructions+=3;NFSU2_TR(0x458e70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B458e74:{NFSU2_TR(0x458e74);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B458e77:{NFSU2_TR(0x458e77);
if(r1(R+518)){{goto L458ec9;}}
}
B458e79:L458e79:{c.instructions+=2;NFSU2_TR(0x458e79);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B458e7a:{NFSU2_TR(0x458e7a);
if(r1(R+518)){{goto L458ea4;}}
}
B458e7c:L458e7c:{c.instructions+=2;NFSU2_TR(0x458e7c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B458e7d:{NFSU2_TR(0x458e7d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L458ea1;}}
}
B458e7f:L458e7f:{c.instructions+=4;NFSU2_TR(0x458e7f);
__builtin_memmove((R+0),gp(0x7ecb14),4);
}
B458e84:{NFSU2_TR(0x458e84);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B458e87:{NFSU2_TR(0x458e87);
w4(R+4,u32(0x7ecb14ull));
}
B458e8c:{NFSU2_TR(0x458e8c);
if(r1(R+518)){{goto L458ea1;}}
}
B458e8e:L458e8e:{c.instructions+=1;NFSU2_TR(0x458e8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B458e92:L458e92:{c.instructions+=2;NFSU2_TR(0x458e92);
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
B458e94:{NFSU2_TR(0x458e94);
if(r1(R+518)){{goto L458ef2;}}
}
B458e96:L458e96:{c.instructions+=4;NFSU2_TR(0x458e96);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B458e99:{NFSU2_TR(0x458e99);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B458e9c:{NFSU2_TR(0x458e9c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B458e9f:{NFSU2_TR(0x458e9f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x458e92u);}goto L458e92;}}
}
B458ea1:L458ea1:{c.instructions+=2;NFSU2_TR(0x458ea1);
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
B458ea3:{NFSU2_TR(0x458ea3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458ea4:L458ea4:{c.instructions+=4;NFSU2_TR(0x458ea4);
__builtin_memmove((R+0),gp(0x7ecae4),4);
}
B458ea9:{NFSU2_TR(0x458ea9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B458eac:{NFSU2_TR(0x458eac);
w4(R+4,u32(0x7ecae4ull));
}
B458eb1:{NFSU2_TR(0x458eb1);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x458ea1u);}goto L458ea1;}}
}
B458eb3:L458eb3:{c.instructions+=1;NFSU2_TR(0x458eb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B458eb7:L458eb7:{c.instructions+=2;NFSU2_TR(0x458eb7);
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
B458eb9:{NFSU2_TR(0x458eb9);
if(r1(R+518)){{goto L458ef2;}}
}
B458ebb:L458ebb:{c.instructions+=4;NFSU2_TR(0x458ebb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B458ebe:{NFSU2_TR(0x458ebe);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B458ec1:{NFSU2_TR(0x458ec1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B458ec4:{NFSU2_TR(0x458ec4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x458eb7u);}goto L458eb7;}}
}
B458ec6:L458ec6:{c.instructions+=2;NFSU2_TR(0x458ec6);
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
B458ec8:{NFSU2_TR(0x458ec8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458ec9:L458ec9:{c.instructions+=4;NFSU2_TR(0x458ec9);
__builtin_memmove((R+0),gp(0x7ecaa8),4);
}
B458ece:{NFSU2_TR(0x458ece);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B458ed1:{NFSU2_TR(0x458ed1);
w4(R+4,u32(0x7ecaa8ull));
}
B458ed6:{NFSU2_TR(0x458ed6);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x458ea1u);}goto L458ea1;}}
}
B458ed8:L458ed8:{c.instructions+=2;NFSU2_TR(0x458ed8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B458edc:{NFSU2_TR(0x458edc);
__builtin_memmove((R+16),(R+16),4);
}
B458ee0:L458ee0:{c.instructions+=2;NFSU2_TR(0x458ee0);
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
B458ee2:{NFSU2_TR(0x458ee2);
if(r1(R+518)){{goto L458ef2;}}
}
B458ee4:L458ee4:{c.instructions+=4;NFSU2_TR(0x458ee4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B458ee7:{NFSU2_TR(0x458ee7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B458eea:{NFSU2_TR(0x458eea);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B458eed:{NFSU2_TR(0x458eed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x458ee0u);}goto L458ee0;}}
}
B458eef:L458eef:{c.instructions+=2;NFSU2_TR(0x458eef);
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
B458ef1:{NFSU2_TR(0x458ef1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458ef2:L458ef2:{c.instructions+=2;NFSU2_TR(0x458ef2);
w1(R+0,u8(0x1ull));
}
B458ef4:{NFSU2_TR(0x458ef4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458f00:L458f00:{c.instructions+=4;NFSU2_TR(0x458f00);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B458f04:{NFSU2_TR(0x458f04);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B458f05:{NFSU2_TR(0x458f05);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x1full))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1full)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1full))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B458f08:{NFSU2_TR(0x458f08);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L458f24;}}
}
B458f0a:L458f0a:{c.instructions+=2;NFSU2_TR(0x458f0a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x458f34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B458f11:{NFSU2_TR(0x458f11);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x458f28ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B458f18:L458f18:{c.instructions+=2;NFSU2_TR(0x458f18);
w4(R+0,u32(0x1ull));
}
B458f1d:{NFSU2_TR(0x458f1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458f1e:L458f1e:{c.instructions+=2;NFSU2_TR(0x458f1e);
w4(R+0,u32(0x2ull));
}
B458f23:{NFSU2_TR(0x458f23);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458f24:L458f24:{c.instructions+=2;NFSU2_TR(0x458f24);
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
B458f26:{NFSU2_TR(0x458f26);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458f60:L458f60:{c.instructions+=2;NFSU2_TR(0x458f60);
w4(R+0,u32(0x7ecb58ull));
}
B458f65:{NFSU2_TR(0x458f65);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458f70:L458f70:{c.instructions+=2;NFSU2_TR(0x458f70);
__builtin_memmove((R+0),gp(0x7ecb5c),4);
}
B458f75:{NFSU2_TR(0x458f75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458f80:L458f80:{c.instructions+=10;NFSU2_TR(0x458f80);
__builtin_memmove((R+0),(R+4),4);
}
B458f82:{NFSU2_TR(0x458f82);
w4(R+4,u32(0x3f800000ull));
}
B458f87:{NFSU2_TR(0x458f87);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B458f88:{NFSU2_TR(0x458f88);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458f8b:{NFSU2_TR(0x458f8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458f8e:{NFSU2_TR(0x458f8e);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B458f94:{NFSU2_TR(0x458f94);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B458f96:{NFSU2_TR(0x458f96);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B458f99:{NFSU2_TR(0x458f99);
w1(R+12,u8(0x1ull));
}
B458f9b:{NFSU2_TR(0x458f9b);
{goto L458fa0;}
}
B458fa0:L458fa0:{c.instructions+=6;NFSU2_TR(0x458fa0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
s4(u32(r4(R+8)),r4(U+0));
}
B458fa6:{NFSU2_TR(0x458fa6);
u8 U[13];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B458faa:{NFSU2_TR(0x458faa);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B458fab:{NFSU2_TR(0x458fab);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B458fae:{NFSU2_TR(0x458fae);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B458fb1:{NFSU2_TR(0x458fb1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x458fa0u);}goto L458fa0;}}
}
B458fb3:L458fb3:{c.instructions+=3;NFSU2_TR(0x458fb3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B458fb5:{NFSU2_TR(0x458fb5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((R+8),(U+0),4);
}
B458fb8:{NFSU2_TR(0x458fb8);
{goto L458fc0;}
}
B458fc0:L458fc0:{c.instructions+=6;NFSU2_TR(0x458fc0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
s4(u32(r4(R+8)),r4(U+0));
}
B458fc6:{NFSU2_TR(0x458fc6);
u8 U[13];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B458fca:{NFSU2_TR(0x458fca);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B458fcb:{NFSU2_TR(0x458fcb);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B458fce:{NFSU2_TR(0x458fce);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B458fd1:{NFSU2_TR(0x458fd1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x458fc0u);}goto L458fc0;}}
}
B458fd3:L458fd3:{c.instructions+=5;NFSU2_TR(0x458fd3);
w4(R+4,u32(0x3fe6ull));
}
B458fd8:{NFSU2_TR(0x458fd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458fdb:{NFSU2_TR(0x458fdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B458fde:{NFSU2_TR(0x458fde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B458fdf:{NFSU2_TR(0x458fdf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458fe0:L458fe0:{c.instructions+=2;NFSU2_TR(0x458fe0);
w4(R+0,u32(0x7ecb68ull));
}
B458fe5:{NFSU2_TR(0x458fe5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B458ff0:L458ff0:{c.instructions+=2;NFSU2_TR(0x458ff0);
__builtin_memmove((R+0),gp(0x7ecb6c),4);
}
B458ff5:{NFSU2_TR(0x458ff5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x458,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
